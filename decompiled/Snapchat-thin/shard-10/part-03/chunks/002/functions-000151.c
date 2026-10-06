/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107fecdec; end: 107fed157; -[SCMemoriesSearchDatabase _executeSnapIdsByNormalizedYearMonthKeys:] */

void FUN_107fecdec(undefined *param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined *unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar14;
  long lVar15;
  long unaff_x28;
  undefined *puVar16;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_308 [128];
  undefined8 *puStack_288;
  long lStack_280;
  long lStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined *puStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined **ppuStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined **ppuStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
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
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  puVar9 = &uStack_1b0;
  puVar11 = auStack_f0;
  ppuVar3 = param_3;
  func_0x00010bf52a60();
  ppuVar14 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x28 = *plStack_1a0;
    unaff_x23 = &PTR____CFConstantStringClassReference_110ece6f8;
    do {
      unaff_x26 = (undefined **)0x0;
      do {
        if (*plStack_1a0 != unaff_x28) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x25 = *(undefined **)(lStack_1a8 + (long)unaff_x26 * 8);
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar12 = unaff_x25;
        _objc_opt_isKindOfClass(unaff_x25,puVar4);
        if ((((ulong)puVar12 & 1) != 0) &&
           (puVar4 = unaff_x25, func_0x00010c08fa60(), puVar4 != (undefined *)0x0)) {
          func_0x00010befa120(puVar1);
          unaff_x25 = param_1;
          _objc_opt_class();
          func_0x00010be611c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar2);
          _objc_release(unaff_x25);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar3 != unaff_x26);
      puVar9 = &uStack_1b0;
      puVar11 = auStack_f0;
      ppuVar3 = param_3;
      func_0x00010bf52a60();
      unaff_x24 = (undefined **)0x0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(param_3);
  puVar12 = puVar1;
  func_0x00010bf529e0();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar16 = PTR____NSArray0__struct_11034ab48;
  if (puVar12 != (undefined *)0x0) {
    puVar12 = puVar1;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_210 = puVar12;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    unaff_x24 = *(undefined ***)(param_1 + 0x18);
    ppuVar3 = unaff_x24;
    puStack_1f8 = puVar4;
    func_0x00010c252980(unaff_x24);
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = unaff_x24;
    func_0x00010bf9b000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    unaff_x25 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    puStack_1e0 = (undefined8 *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    unaff_x26 = unaff_x23;
    ppuStack_200 = unaff_x23;
    func_0x00010c142300();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = &uStack_1f0;
    puVar11 = auStack_170;
    ppuVar3 = unaff_x26;
    func_0x00010bf52a60();
    if (ppuVar3 != (undefined **)0x0) {
      unaff_x23 = (undefined **)*puStack_1e0;
      do {
        unaff_x24 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_1e0 != unaff_x23) {
            _objc_enumerationMutation(unaff_x26);
          }
          unaff_x28 = *(long *)(lStack_1e8 + (long)unaff_x24 * 8);
          func_0x00010c25d280();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = unaff_x28;
          func_0x00010c08fa60();
          if (lVar15 != 0) {
            func_0x00010befa120(unaff_x25);
          }
          _objc_release(unaff_x28);
          unaff_x24 = (undefined **)((long)unaff_x24 + 1);
        } while (ppuVar3 != unaff_x24);
        puVar9 = &uStack_1f0;
        puVar11 = auStack_170;
        ppuVar3 = unaff_x26;
        func_0x00010bf52a60();
        ppuVar14 = (undefined **)0x0;
      } while (ppuVar3 != (undefined **)0x0);
    }
    _objc_release(unaff_x26);
    func_0x00010c088a40(*(undefined8 *)(param_1 + 0x18));
    puVar16 = unaff_x25;
    func_0x00010bf51e00();
    _objc_release(unaff_x25);
    _objc_release(ppuStack_200);
    _objc_release(puStack_1f8);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  ppuVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar10 = &uStack_350;
    pcStack_218 = FUN_107fed158;
    lStack_280 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_270 = unaff_x28;
    ppuStack_268 = ppuVar14;
    ppuStack_260 = unaff_x26;
    puStack_258 = unaff_x25;
    ppuStack_250 = unaff_x24;
    ppuStack_248 = unaff_x23;
    puStack_240 = puVar16;
    puStack_238 = puVar2;
    puStack_230 = puVar1;
    ppuStack_228 = param_3;
    puStack_220 = &stack0xfffffffffffffff0;
    _objc_retain(puVar9);
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar9;
    puVar2 = puVar1;
    func_0x00010c25d0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar6 = puVar5;
    func_0x00010c08fa60();
    puVar16 = PTR____NSArray0__struct_11034ab48;
    if (puVar6 != (undefined8 *)0x0) {
      puVar12 = ppuVar3[3];
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_288 = puVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9b000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      plStack_340 = (long *)0x0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      puVar2 = puVar12;
      func_0x00010c142300();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = auStack_308;
      puVar4 = puVar2;
      func_0x00010bf52a60();
      if (puVar4 != (undefined *)0x0) {
        lVar15 = *plStack_340;
        do {
          puVar16 = (undefined *)0x0;
          do {
            if (*plStack_340 != lVar15) {
              _objc_enumerationMutation(puVar2);
            }
            lVar7 = *(long *)(lStack_348 + (long)puVar16 * 8);
            func_0x00010c25d280();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar7;
            func_0x00010c08fa60();
            if (lVar8 != 0) {
              func_0x00010befa120(puVar1);
            }
            _objc_release(lVar7);
            puVar16 = puVar16 + 1;
          } while (puVar4 != puVar16);
          puVar11 = auStack_308;
          puVar4 = puVar2;
          puVar10 = &uStack_350;
          func_0x00010bf52a60();
        } while (puVar4 != (undefined *)0x0);
      }
      _objc_release(puVar2);
      func_0x00010c088a40(ppuVar3[3]);
      puVar16 = puVar1;
      func_0x00010bf51e00();
      _objc_release(puVar1);
      _objc_release(puVar12);
      puVar2 = (undefined *)puVar10;
    }
    _objc_release(puVar5);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_280) {
      ___stack_chk_fail();
      _objc_retain(puVar2);
      _objc_retain(puVar11);
      uVar13 = puVar9[2];
      _objc_retain(puVar11);
      _objc_retain(puVar2);
      func_0x00010c0f7fc0(uVar13);
      _objc_release(puVar11);
      _objc_release(puVar2);
      _objc_release(puVar11);
      _objc_release(puVar2);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 107fed158; end: 107fed387; -[SCMemoriesSearchDatabase _executeSnapIdsByLocationComponent:] */

void FUN_107fed158(long param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined1 *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  long lStack_70;
  
  puVar7 = &uStack_140;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar8 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  puVar2 = puVar8;
  func_0x00010c25d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  lVar10 = lVar1;
  func_0x00010c08fa60();
  puStack_168 = PTR____NSArray0__struct_11034ab48;
  if (lVar10 != 0) {
    puVar8 = *(undefined **)(param_1 + 0x18);
    uVar9 = *(undefined8 *)(param_1 + 0x88);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = lVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_78,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b000(puVar8,param_2,uVar9,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    puVar3 = puVar8;
    func_0x00010c142300();
    _objc_retainAutoreleasedReturnValue();
    param_4 = auStack_f8;
    puVar4 = puVar3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar10 = *plStack_130;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_130 != lVar10) {
            _objc_enumerationMutation(puVar3);
          }
          lVar5 = *(long *)(lStack_138 + (long)puVar11 * 8);
          func_0x00010c25d280(lVar5,param_2,0);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c08fa60();
          if (lVar6 != 0) {
            func_0x00010befa120(puVar2,param_2,lVar5);
          }
          _objc_release(lVar5);
          puVar11 = puVar11 + 1;
        } while (puVar4 != puVar11);
        param_4 = auStack_f8;
        puVar4 = puVar3;
        puVar7 = &uStack_140;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    func_0x00010c088a40(*(undefined8 *)(param_1 + 0x18));
    puVar3 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar2);
    _objc_release(puVar8);
    puVar2 = (undefined *)puVar7;
    puStack_168 = puVar3;
  }
  _objc_release(lVar1);
  lVar10 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_148 = FUN_107fed388;
    puStack_170 = puVar8;
    lStack_160 = lVar1;
    lStack_158 = param_3;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(puVar2);
    _objc_retain(param_4);
    uVar9 = *(undefined8 *)(lVar10 + 0x10);
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_107fed440;
    puStack_190 = &UNK_11084a9e8;
    lStack_188 = lVar10;
    puStack_180 = puVar2;
    puStack_178 = param_4;
    _objc_retain(param_4);
    _objc_retain(puVar2);
    func_0x00010c0f7fc0(uVar9,param_2,&puStack_1a8);
    _objc_release(puStack_178);
    _objc_release(puStack_180);
    _objc_release(param_4);
    _objc_release(puVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_168);
  return;
}



/* Entry: 107fed388; end: 107fed43f; -[SCMemoriesSearchDatabase fetchAllSnapIdToTagVersionMapWithQueue:completionHandler:] */

void FUN_107fed388(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107fed440;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107fed440; end: 107fed647;  */

void FUN_107fed440(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
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
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bf9afc0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar4 = lVar3;
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar4);
        }
        lVar9 = *(long *)(lStack_128 + lVar11 * 8);
        lVar6 = lVar9;
        func_0x00010c25d280();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067e00(lVar9);
        if (lVar6 != 0) {
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(puVar7);
        }
        _objc_release(lVar6);
        lVar11 = lVar11 + 1;
      } while (lVar5 != lVar11);
      lVar5 = lVar4;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar4);
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_107fed648;
  puStack_148 = &UNK_11084aaa8;
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  puStack_140 = puVar2;
  uStack_138 = uVar1;
  _objc_retain(puVar2);
  func_0x00010007380c(uVar8,&puStack_160);
  _objc_release(puStack_140);
  _objc_release(uStack_138);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(lVar3 + 0x20);
  lVar4 = *(long *)(lVar3 + 0x28);
  func_0x00010bf51e00(uVar8);
  (**(code **)(lVar4 + 0x10))(lVar4,uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 107fed648; end: 107fed67f;  */

void FUN_107fed648(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fed680; end: 107fed86f; -[SCMemoriesSearchDatabase fetchTagAndConfForSnapId:synchronous:completionQueue:completionHandler:] */

void FUN_107fed680(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,long param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107fed870;
  puStack_90 = &UNK_110848ba8;
  lStack_88 = param_1;
  _objc_retain(param_3);
  uStack_80 = param_3;
  _objc_retain(puVar1);
  ppuVar2 = &puStack_a8;
  puStack_78 = puVar1;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (param_4 == 0) {
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(puVar1);
    _objc_retain(ppuVar2);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(puVar1);
    _objc_release(param_5);
    _objc_release(param_6);
  }
  else {
    _objc_retain(ppuVar2);
    func_0x00010c0f8240(uVar4);
    puVar3 = puVar1;
    func_0x00010bf51e00(puVar1);
    (**(code **)(param_6 + 0x10))(param_6,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar2);
  _objc_release(puStack_78);
  _objc_release(uStack_80);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107fed870; end: 107feda1f;  */

void FUN_107fed870(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 0x28);
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar3 = lVar6;
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      uVar5 = uVar7;
      func_0x00010c25d280(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d280(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
      _objc_release(uVar7);
      _objc_release(uVar5);
      lVar8 = lVar8 + 1;
    } while (lVar4 != lVar8);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107feda28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x20) + 0x10))();
  return;
}



/* Entry: 107feda20; end: 107feda2b;  */

void FUN_107feda20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107feda28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107feda2c; end: 107fedad3;  */

void FUN_107feda2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  lStack_38 = *(long *)(param_1 + 0x38);
  if (lStack_38 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107fedad4;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(lStack_38);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    uStack_40 = uVar1;
    func_0x00010007380c(uVar2,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
  }
  return;
}



/* Entry: 107fedad4; end: 107fedb0b;  */

void FUN_107fedad4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fedb0c; end: 107fedd27; -[SCMemoriesSearchDatabase fetchLocationNameForSnapId:synchronous:queue:completionHandler:] */

void FUN_107fedb0c(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,long param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_107fead60;
  uStack_80 = 0x107fead70;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_98 = &uStack_a0;
  _objc_alloc_init();
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_107fedd28;
  puStack_c0 = &UNK_11084fa08;
  lStack_b8 = param_1;
  puStack_78 = puVar1;
  _objc_retain(param_3);
  ppuVar2 = &puStack_d8;
  uStack_b0 = param_3;
  puStack_a8 = &uStack_a0;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  if (param_4 == 0) {
    _objc_retain(ppuVar2);
    _objc_retain(param_6);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_5);
    _objc_release(param_6);
  }
  else {
    _objc_retain(ppuVar2);
    func_0x00010c0f8240(uVar3);
    uVar3 = puStack_98[5];
    func_0x00010bf51e00(uVar3);
    (**(code **)(param_6 + 0x10))(param_6,uVar3);
    _objc_release(uVar3);
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar2);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(puStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107fedd28; end: 107fedea7;  */

void FUN_107fedd28(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar3 = lVar8;
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar5 = *(undefined8 *)(lVar9 * 8);
      func_0x00010c25d280();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar6 = *(undefined8 *)(lVar7 + 0x28);
      *(undefined8 *)(lVar7 + 0x28) = uVar5;
      _objc_release(uVar6);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107fedeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar8 + 0x20) + 0x10))();
  return;
}



/* Entry: 107fedea8; end: 107fedeb3;  */

void FUN_107fedea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107fedeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107fedeb4; end: 107fedf47;  */

void FUN_107fedeb4(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  lStack_40 = *(long *)(param_1 + 0x30);
  if (lStack_40 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107fedf48;
    puStack_48 = &UNK_1108647e8;
    _objc_retain(lStack_40);
    uStack_38 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010007380c(uVar1,&puStack_60);
    _objc_release(lStack_40);
  }
  return;
}



/* Entry: 107fedf48; end: 107fedfdb;  */

void FUN_107fedf48(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fedfdc; end: 107fee1f7; -[SCMemoriesSearchDatabase fetchLocationTagsForSnapId:synchronous:queue:completionHandler:] */

void FUN_107fedfdc(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,long param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_107fead60;
  uStack_80 = 0x107fead70;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_98 = &uStack_a0;
  _objc_alloc_init();
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_107fee1f8;
  puStack_c0 = &UNK_11084fa08;
  lStack_b8 = param_1;
  puStack_78 = puVar1;
  _objc_retain(param_3);
  ppuVar2 = &puStack_d8;
  uStack_b0 = param_3;
  puStack_a8 = &uStack_a0;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  if (param_4 == 0) {
    _objc_retain(ppuVar2);
    _objc_retain(param_6);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_5);
    _objc_release(param_6);
  }
  else {
    _objc_retain(ppuVar2);
    func_0x00010c0f8240(uVar3);
    uVar3 = puStack_98[5];
    func_0x00010bf51e00(uVar3);
    (**(code **)(param_6 + 0x10))(param_6,uVar3);
    _objc_release(uVar3);
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar2);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(puStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107fee1f8; end: 107fee393;  */

void FUN_107fee1f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 0x28);
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar3 = lVar7;
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      lVar5 = *(long *)(lVar8 * 8);
      func_0x00010c25d280();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) {
        lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        _objc_retain(lVar5);
        uVar6 = *(undefined8 *)(lVar9 + 0x28);
        *(long *)(lVar9 + 0x28) = lVar5;
        _objc_release(uVar6);
      }
      _objc_release(lVar5);
      lVar8 = lVar8 + 1;
    } while (lVar4 != lVar8);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107fee39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar7 + 0x20) + 0x10))();
  return;
}



/* Entry: 107fee394; end: 107fee39f;  */

void FUN_107fee394(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107fee39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107fee3a0; end: 107fee473;  */

void FUN_107fee3a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 == 0) {
      uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      func_0x00010bf51e00(uVar1);
      (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107fee474;
    puStack_48 = &UNK_1108647e8;
    _objc_retain(lVar2);
    uStack_38 = *(undefined8 *)(param_1 + 0x38);
    lStack_40 = lVar2;
    func_0x00010007380c(lVar3,&puStack_60);
    _objc_release(lStack_40);
  }
  return;
}



/* Entry: 107fee474; end: 107fee4b3;  */

void FUN_107fee474(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fee4b4; end: 107fee56b; -[SCMemoriesSearchDatabase fetchAllSnapIdForFaceRelatedTagWithCompletionQueue:completionHandler:] */

void FUN_107fee4b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107fee56c;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 107fee56c; end: 107fee73b;  */

void FUN_107fee56c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bf9afc0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar5 = lVar2;
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        uVar4 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        func_0x00010c25d280(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(uVar4);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar5;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar5);
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_107fee73c;
    puStack_148 = &UNK_11084aaa8;
    _objc_retain(lVar5);
    lStack_138 = lVar5;
    _objc_retain(puVar1);
    puStack_140 = puVar1;
    func_0x00010007380c(uVar4,&puStack_160);
    _objc_release(puStack_140);
    _objc_release(lStack_138);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  lVar5 = *(long *)(puVar1 + 0x28);
  func_0x00010bf51e00(uVar4);
  (**(code **)(lVar5 + 0x10))(lVar5,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107fee73c; end: 107fee773;  */

void FUN_107fee73c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fee774; end: 107fee8bf; -[SCMemoriesSearchDatabase insertTinyClipDataWithDocObjectContext:snapId:tinyClipResult:completionHandler:] */

void FUN_107fee774(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107fee8c0;
  puStack_68 = &UNK_110864a38;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = param_4;
  uStack_58 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x107fee8d0;
  puStack_90 = &UNK_110842508;
  uStack_88 = param_6;
  _objc_retain(param_6);
  func_0x00010c0f8500(param_3,param_2,&puStack_80,uVar2,&puStack_a8);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(uStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107fee8c0; end: 107fee8db;  */

void FUN_107fee8c0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar8 = *(long *)(param_1 + 0x28);
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(uVar1);
  _objc_retain(lVar8);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010c086780();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar3);
      }
      uVar5 = *(undefined8 *)(lVar13 * 8);
      func_0x00010bf306a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar5;
      func_0x00010bf51e00();
      func_0x00010befa120(puVar2);
      _objc_release(uVar10);
      _objc_release(uVar5);
      lVar13 = lVar13 + 1;
    } while (lVar4 != lVar13);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar12 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  if (puVar2 == (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar6 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010bf09780(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  puVar6 = PTR_PTR_1126d8d00;
  _objc_alloc(PTR_PTR_1126d8d00);
  lVar4 = lVar8;
  func_0x00010c0cff80(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010c047a80(puVar6);
  _objc_release(lVar4);
  uVar10 = 0;
  puVar7 = puVar6;
  FUN_107ff4074(puVar6,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar12);
  _objc_release(puVar2);
  _objc_release(lVar8);
  _objc_release(uVar1);
  lVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(lVar8);
  _objc_release(uVar1);
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain();
  lVar8 = lVar4;
  FUN_107ff0b98(lVar4,uVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf529e0();
  if ((lVar9 != 0) && (lVar9 = lVar8, func_0x00010bf529e0(), puVar2 = PTR_PTR_1126d8d08, lVar9 == 1)
     ) {
    lVar9 = lVar8;
    func_0x00010bfb1920(lVar8);
    _objc_retainAutoreleasedReturnValue();
    FUN_107ff4000(puVar2,lVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    func_0x00010c25ed40(lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107fee8dc; end: 107fee9df; -[SCMemoriesSearchDatabase insertIndexingResultServerBackupStatusWithDocObjectContext:snapIdToServerBackupStatus:completionQueue:completionHandler:] */

void FUN_107fee8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107fee9e0;
  puStack_40 = &UNK_11085adb8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107feeb28;
  puStack_68 = &UNK_110842508;
  uStack_60 = param_6;
  uStack_38 = param_4;
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c0f8500(param_3,param_2,&puStack_58,param_5,&puStack_80);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uStack_60);
  _objc_release(uStack_38);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 107fee9e0; end: 107feeb27;  */

void FUN_107fee9e0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar6 = *(undefined8 *)(lVar7 * 8);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      FUN_107ff19b4(param_2,uVar6,uVar4);
      _objc_release(uVar4);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107feeb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
  return;
}



/* Entry: 107feeb28; end: 107feeb33;  */

void FUN_107feeb28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107feeb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107feeb34; end: 107feeb8b; -[SCMemoriesSearchDatabase fetchAllSnapIndexingResultServerBackupStatusWithDocObjectContext:completionHandler:] */

void FUN_107feeb34(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_4);
  FUN_107ff1dc4(param_3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107feeb8c; end: 107feec7b; -[SCMemoriesSearchDatabase mobileClipCaptionCountsWithMaxConfidenceSnapIdSynchronously] */

void FUN_107feeb8c(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_107fead60;
    uStack_30 = 0x107fead70;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puStack_28 = puVar1;
    func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10));
    puVar1 = (undefined *)puStack_48[5];
    _objc_retain(puVar1);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(puStack_28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107feec7c; end: 107feee2b;  */

void FUN_107feec7c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar5 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bf9afc0(lVar1,param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0));
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = lVar1;
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_f0;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        uVar7 = uVar8;
        func_0x00010c25d280(uVar8,param_2,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067e00(uVar8,param_2,1);
        func_0x00010c25d280(uVar8,param_2,2);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126d8cf8;
        _objc_alloc(PTR_PTR_1126d8cf8);
        func_0x00010c000ce0();
        func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),param_2
                            ,puVar4);
        _objc_release(puVar4);
        _objc_release(uVar8);
        _objc_release(uVar7);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      puVar6 = auStack_f0;
      lVar3 = lVar2;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  lVar3 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_107feee2c;
  uStack_160 = unaff_x22;
  lStack_158 = lVar2;
  lStack_150 = lVar1;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  if (*(char *)(lVar3 + 0x30) == '\x01') {
    uVar7 = *(undefined8 *)(lVar3 + 0x10);
    puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_107feeef4;
    puStack_180 = &UNK_110848ba8;
    lStack_178 = lVar3;
    _objc_retain(puVar6);
    puStack_170 = puVar6;
    _objc_retain(puVar5);
    puStack_168 = (undefined1 *)puVar5;
    func_0x00010c0f7fc0(uVar7,param_2,&puStack_198);
    _objc_release(puStack_168);
    _objc_release(puStack_170);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  return;
}



/* Entry: 107feee2c; end: 107feeef3; -[SCMemoriesSearchDatabase insertMobileClipCaptionsForSnapId:captionToConfidenceMap:] */

void FUN_107feee2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107feeef4;
    puStack_50 = &UNK_110848ba8;
    lStack_48 = param_1;
    _objc_retain(param_4);
    uStack_40 = param_4;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107feeef4; end: 107fef083;  */

void FUN_107feeef4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf9b060(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x118));
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar4 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_140;
    do {
      lVar8 = 0;
      do {
        if (*plStack_140 != lVar7) {
          _objc_enumerationMutation(lVar4);
        }
        uVar5 = *(undefined8 *)(lStack_148 + lVar8 * 8);
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
        uStack_108 = *(undefined8 *)(param_1 + 0x30);
        unaff_x22 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_100 = uVar5;
        uStack_f8 = uVar1;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9b080(uVar6);
        _objc_release(unaff_x22);
        _objc_release(uVar1);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar4;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar4);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x120);
  func_0x00010bf9b060();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_158 = FUN_107fef084;
    puStack_180 = unaff_x22;
    uStack_178 = unaff_x21;
    lStack_170 = lVar4;
    lStack_168 = param_1;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain(uVar1);
    puVar3 = PTR____NSDictionary0__struct_11034ab58;
    if (*(char *)(lVar2 + 0x30) == '\x01') {
      puStack_1a8 = &uStack_1b0;
      uStack_1b0 = 0;
      uStack_1a0 = 0x3032000000;
      pcStack_198 = FUN_107fead60;
      uStack_190 = 0x107fead70;
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      uVar5 = *(undefined8 *)(lVar2 + 0x10);
      puStack_188 = puVar3;
      _objc_retain(uVar1);
      func_0x00010c0f8240(uVar5);
      puVar3 = (undefined *)puStack_1a8[5];
      func_0x00010bf51e00(puVar3);
      _objc_release(uVar1);
      __Block_object_dispose(&uStack_1b0,8);
      _objc_release(puStack_188);
    }
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  return;
}



/* Entry: 107fef084; end: 107fef1a7; -[SCMemoriesSearchDatabase snapIdToConfidenceForMobileClipCaption:] */

void FUN_107fef084(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_107fead60;
    uStack_40 = 0x107fead70;
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puStack_38 = puVar1;
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar2);
    puVar1 = (undefined *)puStack_58[5];
    func_0x00010bf51e00(puVar1);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(puStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fef1a8; end: 107fef36f;  */

void FUN_107fef1a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  long in_x5;
  long lVar10;
  undefined *unaff_x23;
  undefined8 uVar11;
  undefined *unaff_x24;
  long lVar12;
  long lVar13;
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  long lStack_288;
  undefined *puStack_280;
  undefined1 *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 0x28);
  lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar2 = lVar10;
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar2);
        }
        unaff_x24 = *(undefined **)(lStack_128 + lVar13 * 8);
        unaff_x23 = unaff_x24;
        func_0x00010c25d280();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf88340(unaff_x24);
        if (unaff_x23 != (undefined *)0x0) {
          unaff_x24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df720();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
          _objc_release(unaff_x24);
        }
        _objc_release(unaff_x23);
        lVar13 = lVar13 + 1;
      } while (lVar3 != lVar13);
      lVar3 = lVar2;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_260;
  pcStack_138 = FUN_107fef370;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(lVar10 + 0x18);
  func_0x00010bf9afc0();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar2 = lVar10;
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  iVar8 = (int)auStack_218;
  uVar9 = 0x10;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar12 = *plStack_250;
    do {
      lVar13 = 0;
      do {
        if (*plStack_250 != lVar12) {
          _objc_enumerationMutation(lVar2);
        }
        unaff_x24 = *(undefined **)(lStack_258 + lVar13 * 8);
        puVar4 = unaff_x24;
        func_0x00010c25d280(unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d280();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(unaff_x24);
        _objc_release(puVar4);
        lVar13 = lVar13 + 1;
      } while (lVar3 != lVar13);
      iVar8 = (int)auStack_218;
      uVar9 = 0x10;
      lVar3 = lVar2;
      puVar7 = &uStack_260;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  _objc_release(lVar10);
  _objc_release(puVar1);
  puVar5 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_107fef524;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = puVar4;
  lStack_288 = lVar10;
  puStack_280 = puVar1;
  puStack_278 = (undefined1 *)puVar6;
  ppuStack_270 = &puStack_140;
  _objc_retain(puVar7);
  _objc_retain(uVar9);
  _objc_retain(in_x5);
  if (iVar8 == 0) {
    uVar11 = *(undefined8 *)(puVar5 + 0x10);
    _objc_retain(puVar7);
    _objc_retain(in_x5);
    _objc_retain(uVar9);
    func_0x00010c0f7fc0(uVar11);
    _objc_release(uVar9);
    _objc_release(in_x5);
    puVar5 = (undefined1 *)puVar7;
  }
  else {
    puStack_2c8 = &uStack_2d0;
    uStack_2d0 = 0;
    uStack_2c0 = 0x3032000000;
    pcStack_2b8 = FUN_107fead60;
    uStack_2b0 = 0x107fead70;
    puStack_2a8 = (undefined1 *)0x0;
    uVar11 = *(undefined8 *)(puVar5 + 0x10);
    _objc_retain(puVar7);
    func_0x00010c0f8240(uVar11);
    if (in_x5 != 0) {
      (**(code **)(in_x5 + 0x10))(in_x5,puStack_2c8[5]);
    }
    _objc_release(puVar7);
    __Block_object_dispose(&uStack_2d0,8);
    puVar5 = puStack_2a8;
  }
  _objc_release(puVar5);
  _objc_release(in_x5);
  _objc_release(uVar9);
  _objc_release(puVar7);
  return;
}



/* Entry: 107fef370; end: 107fef523; -[SCMemoriesSearchDatabase _executeDictionaryQueryWithStatement:] */

void FUN_107fef370(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 unaff_x23;
  undefined8 uVar10;
  undefined8 unaff_x24;
  long lVar11;
  long lVar12;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf9afc0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar3 = lVar2;
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  iVar8 = (int)auStack_e8;
  uVar9 = 0x10;
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar3);
        }
        unaff_x24 = *(undefined8 *)(lStack_128 + lVar12 * 8);
        uVar9 = unaff_x24;
        func_0x00010c25d280(unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d280();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(unaff_x24);
        _objc_release(uVar9);
        lVar12 = lVar12 + 1;
      } while (lVar4 != lVar12);
      iVar8 = (int)auStack_e8;
      uVar9 = 0x10;
      lVar4 = lVar3;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  puVar5 = puVar1;
  func_0x00010bf51e00();
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_107fef524;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  puStack_160 = puVar5;
  lStack_158 = lVar2;
  puStack_150 = puVar1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(uVar9);
  _objc_retain(param_6);
  if (iVar8 == 0) {
    uVar10 = *(undefined8 *)(lVar3 + 0x10);
    _objc_retain(puVar7);
    _objc_retain(param_6);
    _objc_retain(uVar9);
    func_0x00010c0f7fc0(uVar10);
    _objc_release(uVar9);
    _objc_release(param_6);
    puVar6 = (undefined1 *)puVar7;
  }
  else {
    puStack_198 = &uStack_1a0;
    uStack_1a0 = 0;
    uStack_190 = 0x3032000000;
    pcStack_188 = FUN_107fead60;
    uStack_180 = 0x107fead70;
    puStack_178 = (undefined1 *)0x0;
    uVar10 = *(undefined8 *)(lVar3 + 0x10);
    _objc_retain(puVar7);
    func_0x00010c0f8240(uVar10);
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,puStack_198[5]);
    }
    _objc_release(puVar7);
    __Block_object_dispose(&uStack_1a0,8);
    puVar6 = puStack_178;
  }
  _objc_release(puVar6);
  _objc_release(param_6);
  _objc_release(uVar9);
  _objc_release(puVar7);
  return;
}



/* Entry: 107fef524; end: 107fef6df; -[SCMemoriesSearchDatabase _performDictionaryQueryWithStatement:synchronous:completionQueue:completionHandler:] */

void FUN_107fef524(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,long param_6)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    _objc_retain(param_6);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_5);
    _objc_release(param_6);
    uVar1 = param_3;
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_107fead60;
    uStack_50 = 0x107fead70;
    uStack_48 = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar1);
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,puStack_68[5]);
    }
    _objc_release(param_3);
    __Block_object_dispose(&uStack_70,8);
    uVar1 = uStack_48;
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107fef6e0; end: 107fef723;  */

void FUN_107fef6e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be0ba60(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fef724; end: 107fef7db;  */

void FUN_107fef724(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be0ba60(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107fef7dc;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(lVar2);
    lStack_38 = lVar2;
    _objc_retain(uVar1);
    uStack_40 = uVar1;
    func_0x00010007380c(uVar3,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 107fef7dc; end: 107fef7eb;  */

void FUN_107fef7dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107fef7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107fef7ec; end: 107fef9c3; -[SCMemoriesSearchDatabase _rowidsForSnapId:] */

void FUN_107fef7ec(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar7 = *(long *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b000(lVar7,param_2,uVar6,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
  lVar5 = lVar7;
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar5);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        func_0x00010c0b4ae0(uVar6,param_2,0);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,puVar3);
        _objc_release(puVar3);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar5;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar5);
  puVar3 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar5 = *(long *)(param_3 + 0x18);
    _objc_retain(puVar4);
    func_0x00010c0df760(puVar1,param_2,lVar5 != 0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c088a40();
    uVar6 = *(undefined8 *)(param_3 + 0x18);
    func_0x00010c088a60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110ece758);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar6);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107fef9c4; end: 107fefa97; -[SCMemoriesSearchDatabase errorMessage:] */

void FUN_107fef9c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar4 = *(long *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c0df760(puVar1,param_2,lVar4 != 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c088a40();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c088a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110ece758);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107fefa98; end: 107fefc73; -[SCMemoriesSearchDatabase _isColumnWithName:InTable:] */

undefined8 * FUN_107fefa98(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uStack_130;
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
  puVar10 = param_3;
  _objc_retain(param_3);
  puVar12 = (undefined8 *)0x0;
  if ((param_3 != (undefined8 *)0x0) && (param_4 != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110ece778);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c252980(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010bf9afc0(lVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar4 = lVar3;
    func_0x00010c142300();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = &uStack_130;
    lVar5 = lVar4;
    func_0x00010bf52a60();
    if (lVar5 == 0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      lVar13 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar13) {
            _objc_enumerationMutation(lVar4);
          }
          puVar6 = *(undefined8 **)(lStack_128 + lVar11 * 8);
          puVar12 = (undefined8 *)0x1;
          func_0x00010c25d280(puVar6,param_2,1);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = param_3;
          puVar10 = puVar6;
          func_0x00010c0720c0(param_3,param_2,puVar6);
          _objc_release(puVar6);
          if (((ulong)puVar7 & 1) != 0) goto LAB_107fefc0c;
          lVar11 = lVar11 + 1;
        } while (lVar5 != lVar11);
        puVar10 = &uStack_130;
        lVar5 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,puVar10,auStack_f0,0x10);
      } while (lVar5 != 0);
      puVar12 = (undefined8 *)0x0;
    }
LAB_107fefc0c:
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar10);
    puVar1 = PTR_PTR_1126d5850;
    _objc_alloc();
    puVar12 = puVar10;
    func_0x00010c0f5800(puVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3[5];
    puVar7 = param_3;
    _objc_opt_class(param_3);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c034720(puVar1,param_2,puVar12,1,uVar2,puVar7);
    uVar2 = param_3[3];
    param_3[3] = puVar1;
    _objc_release(uVar2);
    _objc_release(puVar7);
    _objc_release(puVar12);
    uVar8 = param_3[3];
    func_0x00010c0e8e20();
    if ((uVar8 & 1) == 0) {
      uVar2 = param_3[3];
      param_3[3] = 0;
      _objc_release(uVar2);
    }
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (param_3[3] == 0) {
      puVar12 = param_3;
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110ece798);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      puVar9 = PTR_PTR_1126d5850;
      _objc_alloc();
      puVar12 = puVar10;
      func_0x00010c0f5800(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c034720(puVar9,param_2,puVar12,0,param_3[5],puVar1);
      uVar2 = param_3[3];
      param_3[3] = puVar9;
      _objc_release(uVar2);
      _objc_release(puVar12);
      _objc_release(puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar10);
    return puVar10;
  }
  return puVar12;
}



/* Entry: 107fefc74; end: 107fefdf7; -[SCMemoriesSearchDatabase _setupEGODBWithDBURL:] */

void FUN_107fefc74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d5850;
  _objc_alloc();
  uVar4 = param_3;
  func_0x00010c0f5800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034720(puVar1,param_2,uVar4,1,uVar6,lVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(uVar4);
  uVar3 = *(ulong *)(param_1 + 0x18);
  func_0x00010c0e8e20();
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar4);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110ece798);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126d5850;
    _objc_alloc();
    uVar4 = param_3;
    func_0x00010c0f5800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c034720(puVar5,param_2,uVar4,0,*(undefined8 *)(param_1 + 0x28),puVar1);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar5;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fefdf8; end: 107ff084f; -[SCMemoriesSearchDatabase _setupDatabase] */

void FUN_107fefdf8(ulong param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_1;
  func_0x00010bdf8000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beac360(param_1,param_2,uVar2);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = uVar7;
  func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ea6f78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9afc0(uVar7,param_2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  lVar3 = *(long *)(param_1 + 0x18);
  if ((lVar3 != 0) && (func_0x00010c088a40(), (int)lVar3 != 0xe)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x00010c088a40();
    if (iVar1 != 5) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
      func_0x00010c088a40();
      if (iVar1 != 0xb) goto LAB_107fefed8;
    }
  }
  puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
  func_0x00010beac360(param_1,param_2,uVar2);
  _objc_release(puVar4);
LAB_107fefed8:
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = uVar7;
  func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ece7b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b060(uVar7,param_2,uVar6);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = uVar7;
  func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ece7d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b060(uVar7,param_2,uVar6);
  _objc_release(uVar6);
  uVar5 = param_1;
  func_0x00010be3f000(param_1,param_2,&PTR____CFConstantStringClassReference_110ece7f8,
                      &PTR____CFConstantStringClassReference_110ece818);
  if ((uVar5 & 1) == 0) {
    func_0x00010bf9b060(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x118));
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = uVar7;
    func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ece838);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b060(uVar7,param_2,uVar6);
    _objc_release(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = uVar7;
    func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ece858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b080(uVar7,param_2,uVar6,&PTR__OBJC_CLASS___NSConstantArray_111182d38);
    _objc_release(uVar6);
    func_0x00010bf9b060(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x120));
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = uVar7;
  func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ece878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b060(uVar7,param_2,uVar6);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = uVar7;
  func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ece898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b060(uVar7,param_2,uVar6);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = uVar7;
  func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ece8b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b060(uVar7,param_2,uVar6);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = uVar7;
  func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ece8d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b060(uVar7,param_2,uVar6);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = uVar7;
  func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ece8f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b060(uVar7,param_2,uVar6);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = uVar7;
  func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ece918);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b060(uVar7,param_2,uVar6);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = uVar7;
  func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ece938);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b060(uVar7,param_2,uVar6);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = uVar7;
  func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ece958);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b060(uVar7,param_2,uVar6);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = uVar7;
  func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ece978);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b060(uVar7,param_2,uVar6);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = uVar7;
  func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ece998);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b060(uVar7,param_2,uVar6);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = uVar7;
  func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ece9b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b060(uVar7,param_2,uVar6);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = uVar7;
  func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ece9d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b060(uVar7,param_2,uVar6);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = uVar7;
  func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ece9f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b060(uVar7,param_2,uVar6);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = uVar7;
  func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ecea18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b060(uVar7,param_2,uVar6);
  _objc_release(uVar6);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = uVar7;
    func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ecea38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b060(uVar7,param_2,uVar6);
    _objc_release(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = uVar7;
    func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ecea58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b060(uVar7,param_2,uVar6);
    _objc_release(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = uVar7;
    func_0x00010c252980(uVar7,param_2,&PTR____CFConstantStringClassReference_110ecea78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b060(uVar7,param_2,uVar6);
    _objc_release(uVar6);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110ec6758);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110ecea98);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110eceab8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110ecead8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110eceaf8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110eceb18);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110eceb38);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110eceb58);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110eceb78);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110eceb98);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110ecebb8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110ecebd8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110ec6838);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110ecebf8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110ecec18);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110ec67f8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110ecec38);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = uVar6;
  _objc_release(uVar7);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110ecec58);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = uVar6;
    _objc_release(uVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110ecec78);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = uVar6;
    _objc_release(uVar7);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110ecec98);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110ececb8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110ececd8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110ececf8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110eced18);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110eced38);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110ec69d8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = uVar6;
  _objc_release(uVar7);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110eced58);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0x108) = uVar6;
    _objc_release(uVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110eced78);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x110) = uVar6;
    _objc_release(uVar7);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110ec69f8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c252980(uVar6,param_2,&PTR____CFConstantStringClassReference_110ec6a18);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = uVar6;
  _objc_release(uVar7);
  func_0x00010befb520(uVar2);
  _objc_release(uVar2);
  return;
}



/* Entry: 107ff0850; end: 107ff09c7; -[SCMemoriesSearchDatabase _databaseURL] */

void FUN_107ff0850(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar2 = puVar1;
  func_0x000100088750();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad320(puVar3,param_2,puVar2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110eced98);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bdc2c60(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  puVar2 = puVar5;
  func_0x00010c0f5800(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bfacbe0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    uStack_48 = 0;
    func_0x00010bf55da0(puVar1,param_2,puVar5,1,0,&uStack_48);
  }
  puVar2 = puVar5;
  func_0x00010bdc2c60(puVar5,param_2,&PTR____CFConstantStringClassReference_110ecedb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ff09c8; end: 107ff0b83; -[SCMemoriesSearchDatabase .cxx_destruct] */

void FUN_107ff09c8(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ff0b84; end: 107ff0b8b; -[SCMemoriesSearchDatabaseServices memoriesSearchDatabase] */

undefined8 FUN_107ff0b84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ff0b8c; end: 107ff0b97; -[SCMemoriesSearchDatabaseServices .cxx_destruct] */

void FUN_107ff0b8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ff0b98; end: 107ff0e1b;  */

void FUN_107ff0b98(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d8d00);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_107ff389c();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_DAT_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_DAT_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_DAT_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_DAT_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107ff0e1c; end: 107ff109f;  */

void FUN_107ff0e1c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d8628);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_107ff267c();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_DAT_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_DAT_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_DAT_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_DAT_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107ff10a0; end: 107ff150f;  */

void FUN_107ff10a0(long param_1,undefined *param_2,undefined *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *puVar9;
  undefined *unaff_x25;
  undefined *unaff_x26;
  ulong uVar10;
  undefined *unaff_x28;
  undefined *puVar11;
  undefined *puStack_148;
  undefined *puStack_140;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_107ff0b98();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  if ((lVar1 != 0) && (lVar1 = param_1, func_0x00010bf529e0(), lVar1 == 1)) {
    lVar1 = param_1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010bf30680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar7 != 0) {
      lVar1 = param_1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5f4e0();
      _objc_release(lVar1);
      puStack_148 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
      _objc_alloc();
      lVar1 = param_1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      func_0x00010bf30680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfeea60();
      _objc_release(lVar7);
      _objc_release(lVar1);
      func_0x00010c1ec620(puStack_148);
      puStack_140 = puStack_148;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      param_2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class();
      puVar9 = puStack_140;
      _objc_opt_isKindOfClass();
      unaff_x22 = puStack_140;
      if (((ulong)puVar9 & 1) == 0) {
        unaff_x22 = (undefined *)0x0;
      }
      _objc_retain(unaff_x22);
      _objc_release(puStack_140);
      unaff_x23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(unaff_x22);
      puVar9 = unaff_x22;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar9 != (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(unaff_x22);
          }
          uVar10 = *(ulong *)((long)puVar8 * 8);
          param_2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          _objc_opt_class();
          uVar2 = uVar10;
          _objc_opt_isKindOfClass();
          if ((uVar2 & 1) != 0) {
            puVar3 = PTR_PTR_1126d8618;
            _objc_alloc(PTR_PTR_1126d8618);
            func_0x00010bf51e00(uVar10);
            func_0x00010bffc700(puVar3);
            _objc_release(uVar10);
            func_0x00010befa120(unaff_x23);
            _objc_release(puVar3);
          }
          puVar8 = puVar8 + 1;
        } while (puVar9 != puVar8);
        puVar9 = unaff_x22;
        func_0x00010bf52a60();
      }
      _objc_release(unaff_x22);
      puVar9 = PTR_PTR_1126d8620;
      _objc_alloc();
      unaff_x25 = unaff_x23;
      func_0x00010bf51e00();
      unaff_x26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = unaff_x26;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      param_3 = unaff_x25;
      func_0x00010c020e20(puVar9);
      _objc_release(unaff_x28);
      _objc_release(unaff_x26);
      _objc_release(unaff_x25);
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
      _objc_release(puStack_140);
      _objc_release(puStack_148);
      goto LAB_107ff13bc;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_107ff13bc:
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x28);
  _objc_release(unaff_x26);
  _objc_release(unaff_x25);
  _objc_release(unaff_x23);
  _objc_release(unaff_x22);
  _objc_release(puStack_140);
  _objc_release(puStack_148);
  _objc_release(param_1);
  __Unwind_Resume();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010c086780();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar9 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar3);
      }
      uVar4 = *(undefined8 *)((long)puVar11 * 8);
      func_0x00010bf306a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf51e00();
      func_0x00010befa120(puVar8);
      _objc_release(uVar5);
      _objc_release(uVar4);
      puVar11 = puVar11 + 1;
    } while (puVar9 != puVar11);
    puVar9 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  puVar9 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  if (puVar8 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar8;
    func_0x00010bf51e00(puVar8);
    func_0x00010bf09780(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126d8d00;
  _objc_alloc(PTR_PTR_1126d8d00);
  puVar11 = param_3;
  func_0x00010c0cff80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010c047a80(puVar3);
  _objc_release(puVar11);
  uVar5 = 0;
  puVar11 = puVar3;
  FUN_107ff4074(puVar3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar3);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(param_3);
  _objc_release(param_2);
  lVar6 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar8);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(lVar1);
  __Unwind_Resume();
  _objc_retain();
  lVar1 = lVar6;
  FUN_107ff0b98(lVar6,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bf529e0();
  if ((lVar7 != 0) && (lVar7 = lVar1, func_0x00010bf529e0(), puVar9 = PTR_PTR_1126d8d08, lVar7 == 1)
     ) {
    lVar7 = lVar1;
    func_0x00010bfb1920(lVar1);
    _objc_retainAutoreleasedReturnValue();
    FUN_107ff4000(puVar9,lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    func_0x00010c25ed40(lVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar9);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 107ff1510; end: 107ff183b;  */

void FUN_107ff1510(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c086780();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(lVar2);
      }
      uVar4 = *(undefined8 *)(lVar11 * 8);
      func_0x00010bf306a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010bf51e00();
      func_0x00010befa120(puVar1);
      _objc_release(uVar8);
      _objc_release(uVar4);
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  puVar10 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  if (puVar1 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar1;
    func_0x00010bf51e00(puVar1);
    func_0x00010bf09780(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  puVar5 = PTR_PTR_1126d8d00;
  _objc_alloc(PTR_PTR_1126d8d00);
  lVar3 = param_3;
  func_0x00010c0cff80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010c047a80(puVar5);
  _objc_release(lVar3);
  uVar8 = 0;
  puVar6 = puVar5;
  FUN_107ff4074(puVar5,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar10);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  lVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  _objc_retain();
  lVar7 = lVar3;
  FUN_107ff0b98(lVar3,uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010bf529e0();
  if ((lVar2 != 0) && (lVar2 = lVar7, func_0x00010bf529e0(), puVar1 = PTR_PTR_1126d8d08, lVar2 == 1)
     ) {
    lVar2 = lVar7;
    func_0x00010bfb1920(lVar7);
    _objc_retainAutoreleasedReturnValue();
    FUN_107ff4000(puVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c25ed40(lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107ff183c; end: 107ff1943;  */

void FUN_107ff183c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  lVar1 = param_1;
  FUN_107ff0b98(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if ((lVar2 != 0) && (lVar2 = lVar1, func_0x00010bf529e0(), puVar3 = PTR_PTR_1126d8d08, lVar2 == 1)
     ) {
    lVar2 = lVar1;
    func_0x00010bfb1920(lVar1);
    _objc_retainAutoreleasedReturnValue();
    FUN_107ff4000(puVar3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ff1944; end: 107ff19b3;  */

void FUN_107ff1944(long param_1)

{
  long lVar1;
  
  FUN_107ff0e1c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 1) {
    lVar1 = param_1;
    func_0x00010bfb1920(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = 0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107ff19b4; end: 107ff1cbb;  */

void FUN_107ff19b4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_1;
  FUN_107ff0e1c(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  if (uVar2 == 1) {
    uVar2 = uVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c270fc0();
    if ((uVar3 & 1) == 0) {
      func_0x00010c270fc0();
    }
    uVar3 = param_3;
    func_0x00010c271040();
    if ((uVar3 & 1) == 0) {
      func_0x00010c271040(uVar2);
    }
    func_0x00010c0d0100();
    func_0x00010c0d0100();
    func_0x00010c0d0100();
    uVar4 = param_3;
    func_0x00010c0d0100();
    uVar5 = uVar2;
    func_0x00010c0d0100();
    uVar3 = param_3;
    if ((int)uVar4 <= (int)uVar5) {
      uVar3 = uVar2;
    }
    func_0x00010c0d0100(uVar3);
    uVar3 = param_3;
    func_0x00010c0d0100();
    uVar4 = uVar2;
    func_0x00010c0d0100();
    if ((int)uVar4 < (int)uVar3) {
      func_0x00010c2a0500(param_3);
      func_0x00010c2a0520(param_3);
    }
    else {
      uVar3 = param_3;
      func_0x00010c0d0100();
      uVar4 = uVar2;
      func_0x00010c0d0100();
      if ((int)uVar3 < (int)uVar4) {
        func_0x00010c2a0500(uVar2);
        func_0x00010c2a0520(uVar2);
      }
      else {
        uVar3 = param_3;
        func_0x00010c2a0500();
        if ((uVar3 & 1) == 0) {
          func_0x00010c2a0500(uVar2);
        }
        uVar3 = param_3;
        func_0x00010c2a0520();
        if ((uVar3 & 1) == 0) {
          func_0x00010c2a0520(uVar2);
        }
      }
    }
    puVar6 = PTR_PTR_1126d8628;
    _objc_alloc(PTR_PTR_1126d8628);
    func_0x00010c047f00();
    puVar7 = puVar6;
    FUN_107ff2f38();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  else {
    uVar2 = param_3;
    FUN_107ff2f38(param_3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ff1cbc; end: 107ff1dc3;  */

void FUN_107ff1cbc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  lVar1 = param_1;
  FUN_107ff0e1c(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if ((lVar2 != 0) && (lVar2 = lVar1, func_0x00010bf529e0(), puVar3 = PTR_PTR_1126d8d10, lVar2 == 1)
     ) {
    lVar2 = lVar1;
    func_0x00010bfb1920(lVar1);
    _objc_retainAutoreleasedReturnValue();
    FUN_107ff2ec4(puVar3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ff1dc4; end: 107ff205b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107ff1dc4(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 in_x5;
  undefined1 uVar11;
  undefined8 in_x6;
  undefined4 uVar12;
  undefined8 in_x7;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_13c;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar15 = &uStack_180;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d8628);
  if (param_1 == 0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_1);
  }
  lStack_138 = 0;
  lStack_130 = 0;
  uStack_128 = 0;
  uStack_13c = 0;
  puVar2 = &uStack_120;
  func_0x00010054c81c(puVar2,&lStack_138,&uStack_13c);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (lStack_138 != 0) {
    lStack_130 = lStack_138;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  _objc_retain(puVar3);
  uVar8 = SUB81(auStack_e8,0);
  uVar9 = 0x10;
  puVar2 = puVar3;
  func_0x00010bf52a60();
  uVar11 = (undefined1)in_x6;
  uVar10 = (undefined1)in_x5;
  uVar12 = (undefined4)in_x7;
  if (puVar2 != (undefined8 *)0x0) {
    lVar14 = *plStack_170;
    do {
      puVar15 = (undefined8 *)0x0;
      do {
        if (*plStack_170 != lVar14) {
          _objc_enumerationMutation(puVar3);
        }
        uVar13 = *(undefined8 *)(lStack_178 + (long)puVar15 * 8);
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
        _objc_release(uVar13);
        puVar15 = (undefined8 *)((long)puVar15 + 1);
      } while (puVar2 != puVar15);
      uVar8 = SUB81(auStack_e8,0);
      uVar9 = 0x10;
      puVar2 = puVar3;
      puVar15 = &uStack_180;
      func_0x00010bf52a60();
      uVar11 = (undefined1)in_x6;
      uVar10 = (undefined1)in_x5;
      uVar12 = (undefined4)in_x7;
    } while (puVar2 != (undefined8 *)0x0);
  }
  _objc_release(puVar3);
  puVar5 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar14 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_1);
  __Unwind_Resume();
  plVar6 = &lStack_1f0;
  _objc_retain(puVar15);
  puStack_1e8 = PTR_PTR_1126fc068;
  lStack_1f0 = lVar14;
  _objc_msgSendSuper2(&lStack_1f0,PTR_s_init_1125d9248);
  if (plVar6 != (long *)0x0) {
    uVar1 = (undefined4)uStack_180;
    puVar7 = (undefined1 *)puVar15;
    func_0x00010bf51e00();
    uVar13 = *(undefined8 *)((long)plVar6 + (long)_DAT_112772fbc);
    *(undefined1 **)((long)plVar6 + (long)_DAT_112772fbc) = puVar7;
    _objc_release(uVar13);
    *(undefined1 *)((long)plVar6 + (long)_DAT_112772fc0) = uVar8;
    *(undefined1 *)((long)plVar6 + (long)_DAT_112772fc4) = uVar9;
    *(undefined1 *)((long)plVar6 + (long)_DAT_112772fc8) = uVar10;
    *(undefined1 *)((long)plVar6 + (long)_DAT_112772fcc) = uVar11;
    *(undefined4 *)((long)plVar6 + (long)_DAT_112772fd0) = uVar12;
    *(undefined4 *)((long)plVar6 + (long)_DAT_112772fd4) = uVar1;
  }
  _objc_release(puVar15);
  return (undefined1 *)plVar6;
}



/* Entry: 107ff205c; end: 107ff2147; -[SCMemoriesSnapIndexingResultServerBackupStatus initWithSnapId:visualTagBackupStatus:visualTagClusterBackupStatus:tinyClipCaptionBackupStatus:tinyClipEmbeddingsBackupStatus:modelVerson:tinyClipModelVersion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107ff205c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  puStack_68 = PTR_PTR_1126fc068;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772fbc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772fbc) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112772fc0) = param_4;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112772fc4) = param_5;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112772fc8) = param_6;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112772fcc) = param_7;
    *(undefined4 *)((long)puVar1 + (long)_DAT_112772fd0) = param_8;
    *(undefined4 *)((long)puVar1 + (long)_DAT_112772fd4) = param_9;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ff2148; end: 107ff216b; -[SCMemoriesSnapIndexingResultServerBackupStatus copyWithZone:] */

undefined8 FUN_107ff2148(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107ff216c; end: 107ff220f; -[SCMemoriesSnapIndexingResultServerBackupStatus hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107ff216c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar2 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772fbc);
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + _DAT_112772fc0);
  uStack_50 = (ulong)*(byte *)(param_1 + _DAT_112772fc4);
  uStack_48 = (ulong)*(byte *)(param_1 + _DAT_112772fc8);
  uStack_40 = (ulong)*(byte *)(param_1 + _DAT_112772fcc);
  lStack_38 = (long)*(int *)(param_1 + _DAT_112772fd0);
  lStack_30 = (long)*(int *)(param_1 + _DAT_112772fd4);
  uStack_60 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107ff231c;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if (((((ulong)puVar3 & 1) == 0) ||
        (((*(char *)((long)puVar2 + (long)_DAT_112772fc0) != param_3[_DAT_112772fc0] ||
          (*(char *)((long)puVar2 + (long)_DAT_112772fc4) != param_3[_DAT_112772fc4])) ||
         (*(char *)((long)puVar2 + (long)_DAT_112772fc8) != param_3[_DAT_112772fc8])))) ||
       (((*(char *)((long)puVar2 + (long)_DAT_112772fcc) != param_3[_DAT_112772fcc] ||
         (*(int *)((long)puVar2 + (long)_DAT_112772fd0) != *(int *)(param_3 + _DAT_112772fd0))) ||
        (*(int *)((long)puVar2 + (long)_DAT_112772fd4) != *(int *)(param_3 + _DAT_112772fd4))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_107ff231c;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + (long)_DAT_112772fbc);
    if (puVar4 != *(undefined1 **)(param_3 + _DAT_112772fbc)) {
      func_0x00010c071ae0();
      goto LAB_107ff231c;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_107ff231c:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 107ff2210; end: 107ff2337; -[SCMemoriesSnapIndexingResultServerBackupStatus isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107ff2210(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107ff231c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) == 0) ||
        (((*(char *)(param_1 + (long)_DAT_112772fc0) != *(char *)(param_3 + (long)_DAT_112772fc0) ||
          (*(char *)(param_1 + (long)_DAT_112772fc4) != *(char *)(param_3 + (long)_DAT_112772fc4)))
         || (*(char *)(param_1 + (long)_DAT_112772fc8) != *(char *)(param_3 + (long)_DAT_112772fc8))
         ))) || (((*(char *)(param_1 + (long)_DAT_112772fcc) !=
                   *(char *)(param_3 + (long)_DAT_112772fcc) ||
                  (*(int *)(param_1 + (long)_DAT_112772fd0) !=
                   *(int *)(param_3 + (long)_DAT_112772fd0))) ||
                 (*(int *)(param_1 + (long)_DAT_112772fd4) !=
                  *(int *)(param_3 + (long)_DAT_112772fd4))))) {
      lVar3 = 0;
      goto LAB_107ff231c;
    }
    lVar3 = *(long *)(param_1 + (long)_DAT_112772fbc);
    if (lVar3 != *(long *)(param_3 + (long)_DAT_112772fbc)) {
      func_0x00010c071ae0();
      goto LAB_107ff231c;
    }
  }
  lVar3 = 1;
LAB_107ff231c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107ff2338; end: 107ff2347; -[SCMemoriesSnapIndexingResultServerBackupStatus snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ff2338(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772fbc);
}



/* Entry: 107ff2348; end: 107ff2357; -[SCMemoriesSnapIndexingResultServerBackupStatus visualTagBackupStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ff2348(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112772fc0);
}



/* Entry: 107ff2358; end: 107ff2367; -[SCMemoriesSnapIndexingResultServerBackupStatus visualTagClusterBackupStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ff2358(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112772fc4);
}



/* Entry: 107ff2368; end: 107ff2377; -[SCMemoriesSnapIndexingResultServerBackupStatus tinyClipCaptionBackupStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ff2368(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112772fc8);
}



/* Entry: 107ff2378; end: 107ff2387; -[SCMemoriesSnapIndexingResultServerBackupStatus tinyClipEmbeddingsBackupStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ff2378(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112772fcc);
}



/* Entry: 107ff2388; end: 107ff2397; -[SCMemoriesSnapIndexingResultServerBackupStatus modelVerson] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_107ff2388(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112772fd0);
}



/* Entry: 107ff2398; end: 107ff23a7; -[SCMemoriesSnapIndexingResultServerBackupStatus tinyClipModelVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_107ff2398(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112772fd4);
}



/* Entry: 107ff23a8; end: 107ff23bb; -[SCMemoriesSnapIndexingResultServerBackupStatus .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ff23a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112772fbc,0);
  return;
}



/* Entry: 107ff23bc; end: 107ff248b; -[SCMemoriesTinyClipCaptionResult initWithSnapId:captionToConfidenceDictionaryArray:currentModelVersion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107ff23bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fc070;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772fd8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772fd8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772fdc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772fdc) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_112772fe0) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ff248c; end: 107ff24af; -[SCMemoriesTinyClipCaptionResult copyWithZone:] */

undefined8 FUN_107ff248c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107ff24b0; end: 107ff253b; -[SCMemoriesTinyClipCaptionResult hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107ff24b0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772fd8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772fdc);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lStack_30 = (long)*(int *)(param_1 + _DAT_112772fe0);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107ff25e4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107ff25f0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (*(int *)((long)puVar3 + (long)_DAT_112772fe0) == *(int *)(param_3 + _DAT_112772fe0))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112772fd8);
      if ((lVar5 == *(long *)(param_3 + _DAT_112772fd8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_112772fdc);
        if (puVar6 != *(undefined1 **)(param_3 + _DAT_112772fdc)) {
          func_0x00010c071ae0();
          goto LAB_107ff25f0;
        }
        goto LAB_107ff25e4;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107ff25f0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107ff253c; end: 107ff260b; -[SCMemoriesTinyClipCaptionResult isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107ff253c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107ff25e4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107ff25f0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (*(int *)(param_1 + (long)_DAT_112772fe0) == *(int *)(param_3 + (long)_DAT_112772fe0))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_112772fd8);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112772fd8)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_112772fdc);
        if (lVar3 != *(long *)(param_3 + (long)_DAT_112772fdc)) {
          func_0x00010c071ae0();
          goto LAB_107ff25f0;
        }
        goto LAB_107ff25e4;
      }
    }
    lVar3 = 0;
  }
LAB_107ff25f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107ff260c; end: 107ff261b; -[SCMemoriesTinyClipCaptionResult snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ff260c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772fd8);
}



/* Entry: 107ff261c; end: 107ff262b; -[SCMemoriesTinyClipCaptionResult captionToConfidenceDictionaryArray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ff261c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772fdc);
}



/* Entry: 107ff262c; end: 107ff263b; -[SCMemoriesTinyClipCaptionResult currentModelVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_107ff262c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112772fe0);
}



/* Entry: 107ff263c; end: 107ff267b; -[SCMemoriesTinyClipCaptionResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ff263c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112772fdc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112772fd8,0);
  return;
}



/* Entry: 107ff267c; end: 107ff26df;  */

undefined ** FUN_107ff267c(void)

{
  int iVar1;
  
  if ((bRam0000000113824960 & 1) == 0) {
    iVar1 = 0x13824960;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_11324fa90,0x100000000);
      ___cxa_guard_release(0x113824960);
    }
  }
  return &PTR_PTR_11324fa90;
}



/* Entry: 107ff26e0; end: 107ff2767;  */

void FUN_107ff26e0(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ff2768; end: 107ff27f3;  */

void FUN_107ff2768(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c241220(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107ff27f4; end: 107ff27ff; +[SCMemoriesSnapIndexingResultServerBackupStatus table] */

undefined * FUN_107ff27f4(void)

{
  return &UNK_10f46fdc8;
}



/* Entry: 107ff2800; end: 107ff29e3; +[SCMemoriesSnapIndexingResultServerBackupStatus immutableObjectParse:bufferSize:] */

void FUN_107ff2800(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar8 = PTR_PTR_1126d8628;
  _objc_alloc(PTR_PTR_1126d8628);
  lVar11 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar11);
  if (uVar3 < 5) {
    puVar13 = (undefined *)0x0;
LAB_107ff28b8:
    bVar4 = false;
LAB_107ff28c4:
    bVar6 = false;
    bVar5 = false;
LAB_107ff28c8:
    uVar9 = 0;
    bVar7 = false;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)piVar1 - lVar11))[2];
    if (uVar12 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar12);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar11);
    }
    if (uVar3 < 7) goto LAB_107ff28b8;
    uVar12 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar11));
    if (uVar12 == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *(char *)((long)piVar1 + uVar12) != '\0';
    }
    if (uVar3 < 9) goto LAB_107ff28c4;
    uVar12 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar11));
    if (uVar12 == 0) {
      bVar5 = false;
    }
    else {
      bVar5 = *(char *)((long)piVar1 + uVar12) != '\0';
    }
    if (uVar3 < 0xb) {
      bVar6 = false;
      goto LAB_107ff28c8;
    }
    uVar12 = (ulong)*(ushort *)((long)piVar1 + (10 - lVar11));
    if (uVar12 == 0) {
      bVar6 = false;
    }
    else {
      bVar6 = *(char *)((long)piVar1 + uVar12) != '\0';
    }
    if (uVar3 < 0xd) goto LAB_107ff28c8;
    uVar12 = (ulong)*(ushort *)((long)piVar1 + (0xc - lVar11));
    if (uVar12 == 0) {
      bVar7 = false;
    }
    else {
      bVar7 = *(char *)((long)piVar1 + uVar12) != '\0';
    }
    if (uVar3 < 0xf) {
      uVar9 = 0;
    }
    else {
      uVar12 = (ulong)*(ushort *)((long)piVar1 + (0xe - lVar11));
      if (uVar12 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)((long)piVar1 + uVar12);
      }
      if (0x10 < uVar3) {
        uVar12 = (ulong)*(ushort *)((long)piVar1 + (0x10 - lVar11));
        uVar10 = 0;
        if (uVar12 != 0) {
          uVar10 = *(undefined4 *)((long)piVar1 + uVar12);
        }
        goto LAB_107ff28d0;
      }
    }
  }
  uVar10 = 0;
LAB_107ff28d0:
  func_0x00010c047f00(puVar8,param_2,puVar13,bVar4,bVar5,bVar6,bVar7,uVar9,uVar10);
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107ff29e4; end: 107ff2a07; +[SCMemoriesSnapIndexingResultServerBackupStatus objectClassFunctionPointer] */

undefined1  [16] FUN_107ff29e4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x107ff2a00;
  auVar1._0_8_ = 0x107ff29f8;
  return auVar1;
}



/* Entry: 107ff2a08; end: 107ff2ae7;  */

undefined1 *
FUN_107ff2a08(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8,
             undefined4 param_9)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_3);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_1126fc078;
    lStack_70 = param_1;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_3;
      _objc_release(uVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_4;
      *(undefined1 *)((long)plVar1 + 0x15) = param_5;
      *(undefined1 *)((long)plVar1 + 0x16) = param_6;
      *(undefined1 *)((long)plVar1 + 0x17) = param_7;
      *(undefined4 *)((long)plVar1 + 0x18) = param_8;
      *(undefined4 *)((long)plVar1 + 0x1c) = param_9;
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 107ff2ae8; end: 107ff2ec3;  */

void FUN_107ff2ae8(undefined *param_1)

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
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar10,&UNK_10f46fdf7);
        if (puVar10 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c241220(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar10,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar10;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar10;
            _sqlite3_column_int64(puVar10,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d8628);
            _sqlite3_column_blob(puVar10,1);
            _sqlite3_column_bytes(puVar10,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar10);
            if (puVar3 == (undefined *)0x0) goto LAB_107ff2e1c;
            puVar10 = PTR_PTR_1126d8d10;
            _objc_alloc(PTR_PTR_1126d8d10);
            puVar2 = puVar3;
            func_0x00010c241220(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c2a0500(puVar3);
            puVar5 = puVar3;
            func_0x00010c2a0520(puVar3);
            puVar6 = puVar3;
            func_0x00010c270fc0(puVar3);
            puVar7 = puVar3;
            func_0x00010c271040(puVar3);
            puVar8 = puVar3;
            func_0x00010c0d0100(puVar3);
            puVar9 = puVar3;
            func_0x00010c271080();
            FUN_107ff2a08(puVar10,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,(int)puVar9);
            param_1 = puVar3;
            goto LAB_107ff2c20;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar10 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126d8628);
      puVar3 = puVar10;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar10);
      if (puVar3 != (undefined *)0x0) {
        puVar10 = PTR_PTR_1126d8d10;
        _objc_alloc(PTR_PTR_1126d8d10);
        puVar2 = puVar3;
        func_0x00010c241220(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c2a0500(puVar3);
        puVar5 = puVar3;
        func_0x00010c2a0520(puVar3);
        puVar6 = puVar3;
        func_0x00010c270fc0(puVar3);
        puVar7 = puVar3;
        func_0x00010c271040(puVar3);
        puVar8 = puVar3;
        func_0x00010c0d0100(puVar3);
        puVar9 = puVar3;
        func_0x00010c271080();
        FUN_107ff2a08(puVar10,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,(int)puVar9);
        param_1 = puVar3;
LAB_107ff2c20:
        _objc_release(puVar2);
        goto LAB_107ff2e24;
      }
LAB_107ff2e1c:
      param_1 = (undefined *)0x0;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_107ff2e24:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107ff2ec4; end: 107ff2f37;  */

void FUN_107ff2ec4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_107ff2ae8();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107ff2f38; end: 107ff31a7;  */

void FUN_107ff2f38(undefined *param_1,undefined1 *param_2)

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
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d8d10;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_107ff2ae8();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar9 = PTR_PTR_1126d8d10;
    _objc_retain(param_1);
    _objc_opt_self(puVar9);
    puVar9 = PTR_PTR_1126d8d10;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c241220(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c2a0500(param_1);
      puVar4 = param_1;
      func_0x00010c2a0520(param_1);
      puVar5 = param_1;
      func_0x00010c270fc0(param_1);
      puVar6 = param_1;
      func_0x00010c271040(param_1);
      puVar7 = param_1;
      func_0x00010c0d0100(param_1);
      puVar8 = param_1;
      func_0x00010c271080();
      FUN_107ff2a08(puVar9,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5,puVar6,puVar7,(int)puVar8)
      ;
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar9 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar9 = param_1;
    func_0x00010c241220(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar9);
    puVar9 = param_1;
    func_0x00010c2a0500();
    puVar1[0x14] = (char)puVar9;
    puVar9 = param_1;
    func_0x00010c2a0520();
    puVar1[0x15] = (char)puVar9;
    puVar9 = param_1;
    func_0x00010c270fc0();
    puVar1[0x16] = (char)puVar9;
    puVar9 = param_1;
    func_0x00010c271040();
    puVar1[0x17] = (char)puVar9;
    puVar9 = param_1;
    func_0x00010c0d0100();
    *(int *)(puVar1 + 0x18) = (int)puVar9;
    puVar9 = param_1;
    func_0x00010c271080();
    *(int *)(puVar1 + 0x1c) = (int)puVar9;
    _objc_retain(puVar1);
    puVar9 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107ff31a8; end: 107ff3227;  */

void FUN_107ff31a8(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d8628;
    _objc_alloc(PTR_PTR_1126d8628);
    func_0x00010c047f00();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ff3228; end: 107ff3233; -[SCMemoriesSnapIndexingResultServerBackupStatusChangeRequest .cxx_destruct] */

void FUN_107ff3228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 107ff3234; end: 107ff323f; -[SCMemoriesSnapIndexingResultServerBackupStatusChangeRequest table] */

undefined * FUN_107ff3234(void)

{
  return &UNK_10f46fdc8;
}



/* Entry: 107ff3240; end: 107ff3287; -[SCMemoriesSnapIndexingResultServerBackupStatusChangeRequest createTableWithSQLite:] */

void FUN_107ff3240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10deec748,0x9c,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 107ff3288; end: 107ff360f; -[SCMemoriesSnapIndexingResultServerBackupStatusChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_107ff3288(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_107ff31a8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_107ff3610(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f46fe9d);
    if (lVar6 == 0) goto LAB_107ff35ac;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_107ff35ac;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d8628);
    func_0x00010c21c9a0(puVar7);
LAB_107ff3594:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f46fe53);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d8628);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_107ff35b8;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_107ff35b8;
    }
    FUN_107ff31a8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_107ff3610(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f46fef4);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d8628);
        func_0x00010c21c9a0(puVar7);
        goto LAB_107ff3594;
      }
    }
LAB_107ff35ac:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_107ff35b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107ff3610; end: 107ff389b;  */

ulong FUN_107ff3610(ulong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  
  _objc_retain(param_2);
  pcVar4 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar11 = 0;
    goto LAB_107ff3718;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar11 = param_1;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x0001001cde08(param_1,pcVar5,pcVar6);
    goto LAB_107ff3718;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_107ff36d8;
    uVar11 = 0;
  }
  else {
LAB_107ff36d8:
    pcVar7 = pcVar5;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar8 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    pcVar6 = "";
    if (pcVar7 != (char *)0x0) {
      pcVar6 = pcVar7;
    }
    func_0x0001001cde08(param_1,pcVar6,pcVar8);
  }
  _objc_release(pcVar5);
LAB_107ff3718:
  _objc_release(pcVar4);
  pcVar5 = param_2;
  func_0x00010c2a0500();
  pcVar6 = param_2;
  func_0x00010c2a0520();
  pcVar7 = param_2;
  func_0x00010c270fc0(param_2);
  pcVar8 = param_2;
  func_0x00010c271040(param_2);
  pcVar9 = param_2;
  func_0x00010c0d0100(param_2);
  pcVar10 = param_2;
  func_0x00010c271080(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000100c3b024(param_1,0x10,pcVar10,0);
  func_0x000100c3b024(param_1,0xe,pcVar9,0);
  func_0x0001001ce2e4(param_1,4,uVar11 & 0xffffffff);
  func_0x000100ab13ac(param_1,0xc,pcVar8,0);
  func_0x000100ab13ac(param_1,10,pcVar7,0);
  func_0x000100ab13ac(param_1,8,(ulong)pcVar6 & 0xffffffff,0);
  func_0x000100ab13ac(param_1,6,(ulong)pcVar5 & 0xffffffff,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107ff389c; end: 107ff38ff;  */

undefined ** FUN_107ff389c(void)

{
  int iVar1;
  
  if ((bRam0000000113824968 & 1) == 0) {
    iVar1 = 0x13824968;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_11324fb00,0x100000000);
      ___cxa_guard_release(0x113824968);
    }
  }
  return &PTR_PTR_11324fb00;
}



/* Entry: 107ff3900; end: 107ff3987;  */

void FUN_107ff3900(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ff3988; end: 107ff3a13;  */

void FUN_107ff3988(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c241220(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107ff3a14; end: 107ff3a1f; +[SCMemoriesTinyClipCaptionResult table] */

undefined * FUN_107ff3a14(void)

{
  return &UNK_10f46ff55;
}



/* Entry: 107ff3a20; end: 107ff3b8f; +[SCMemoriesTinyClipCaptionResult immutableObjectParse:bufferSize:] */

void FUN_107ff3a20(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126d8d00;
  _objc_alloc(PTR_PTR_1126d8d00);
  lVar6 = (long)*piVar1;
  uVar5 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar5 < 5) {
    puVar8 = (undefined *)0x0;
LAB_107ff3b08:
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar6))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - lVar6);
    }
    lVar6 = -lVar6;
    if (uVar5 < 0xf) goto LAB_107ff3b08;
    if (*(short *)((long)piVar1 + lVar6 + 0xe) == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      lVar6 = -(long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((0x10 < uVar5) && (uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 0x10), uVar7 != 0)) {
      uVar4 = *(undefined4 *)((long)piVar1 + uVar7);
      goto LAB_107ff3b10;
    }
  }
  uVar4 = 0;
LAB_107ff3b10:
  func_0x00010c047a80(puVar3,param_2,puVar8,puVar9,uVar4);
  _objc_release(puVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ff3b90; end: 107ff3bb3; +[SCMemoriesTinyClipCaptionResult objectClassFunctionPointer] */

undefined1  [16] FUN_107ff3b90(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x107ff3bac;
  auVar1._0_8_ = 0x107ff3ba4;
  return auVar1;
}


