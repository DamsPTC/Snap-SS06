/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10691e9b0; end: 10691ea33;  */

void FUN_10691e9b0(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && (param_3 == 0)) {
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),7);
    }
    else {
      func_0x00010bdecec0(*(undefined8 *)(param_1 + 0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010691ea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),3);
  return;
}



/* Entry: 10691ea34; end: 10691ec27; -[SCFriendOfGroupStoryDestinationEnsurer _createDestinationWithStoryId:displayName:storyDestinations:index:completion:] */

void FUN_10691ea34(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126c24b8;
  _objc_retain(param_4);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c24b0;
  func_0x00010bfb8560(PTR_PTR_1126c24b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d340();
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar8 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_5);
  puVar2 = puVar1;
  func_0x00010bf55a20(uVar8);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  if ((param_2 == 0) || (puVar2 != (undefined *)0x0)) {
    _objc_retain(puVar2);
    puVar3 = puVar2;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c0720c0();
    if ((int)puVar5 == 0) {
      _objc_release(puVar3);
    }
    else {
      puVar5 = puVar2;
      func_0x00010bf3ec40();
      _objc_release(puVar3);
      if (puVar5 == (undefined *)0x199) {
        _objc_release(puVar2);
        goto LAB_10691ec5c;
      }
    }
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      uVar4 = 3;
    }
    else {
      uVar4 = 3;
      puVar3 = puVar2;
      do {
        puVar5 = puVar3;
        func_0x00010bf87dc0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c0720c0();
        if ((int)puVar6 != 0) {
          puVar6 = puVar3;
          func_0x00010bf3ec40();
          if ((puVar6 == (undefined *)0xfffffffffffffc0f) ||
             (puVar6 = puVar3, func_0x00010bf3ec40(), puVar6 == (undefined *)0xfffffffffffffc13)) {
            _objc_release(puVar5);
          }
          else {
            puVar6 = puVar3;
            func_0x00010bf3ec40();
            _objc_release(puVar5);
            if (puVar6 != (undefined *)0xfffffffffffffc04) goto LAB_10691ed64;
          }
          _objc_release(puVar3);
          uVar4 = 1;
          break;
        }
        _objc_release(puVar5);
LAB_10691ed64:
        puVar5 = puVar3;
        func_0x00010c292820();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(puVar5);
        puVar3 = puVar6;
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    (**(code **)(*(long *)(puVar1 + 0x38) + 0x10))(*(long *)(puVar1 + 0x38),uVar4);
  }
  else {
LAB_10691ec5c:
    func_0x00010be0a440(*(undefined8 *)(puVar1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10691ec28; end: 10691edf7;  */

void FUN_10691ec28(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0720c0();
    if ((int)lVar2 == 0) {
      _objc_release(lVar1);
    }
    else {
      lVar2 = param_3;
      func_0x00010bf3ec40();
      _objc_release(lVar1);
      if (lVar2 == 0x199) {
        _objc_release(param_3);
        goto LAB_10691ec5c;
      }
    }
    _objc_retain(param_3);
    if (param_3 == 0) {
      uVar4 = 3;
    }
    else {
      uVar4 = 3;
      lVar1 = param_3;
      do {
        lVar2 = lVar1;
        func_0x00010bf87dc0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c0720c0();
        if ((int)lVar3 != 0) {
          lVar3 = lVar1;
          func_0x00010bf3ec40();
          if ((lVar3 == -0x3f1) || (lVar3 = lVar1, func_0x00010bf3ec40(), lVar3 == -0x3ed)) {
            _objc_release(lVar2);
          }
          else {
            lVar3 = lVar1;
            func_0x00010bf3ec40();
            _objc_release(lVar2);
            if (lVar3 != -0x3fc) goto LAB_10691ed64;
          }
          _objc_release(lVar1);
          uVar4 = 1;
          break;
        }
        _objc_release(lVar2);
LAB_10691ed64:
        lVar2 = lVar1;
        func_0x00010c292820();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        _objc_release(lVar2);
        lVar1 = lVar3;
      } while (lVar3 != 0);
    }
    _objc_release(param_3);
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),uVar4);
  }
  else {
LAB_10691ec5c:
    func_0x00010be0a440(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10691edf8; end: 10691ee3f; -[SCFriendOfGroupStoryDestinationEnsurer .cxx_destruct] */

void FUN_10691edf8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10691ee40; end: 10691eee3; -[SCMessagingStoryPlaybackOrderDecider initWithUserPreferences:grapheneMetricsEmitter:] */

undefined1 *
FUN_10691ee40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3d58;
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



/* Entry: 10691eee4; end: 10691efdb; -[SCMessagingStoryPlaybackOrderDecider shouldPlayByDFOrderWithSource:] */

bool FUN_10691eee4(double param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  
  uVar2 = *(ulong *)(param_2 + 8);
  func_0x00010c0e00e0(uVar2,param_3,&PTR____CFConstantStringClassReference_110e64ef8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010bfb2c80(uVar1);
  dVar5 = param_1;
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar3);
  func_0x00010c0aa3e0(*(undefined8 *)(param_2 + 0x10));
  return 86400.0 <= dVar5 - (double)SUB84(param_1,0);
}



/* Entry: 10691efdc; end: 10691f04f; -[SCMessagingStoryPlaybackOrderDecider updateLastDFVistTime] */

void FUN_10691efdc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110e64ef8);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10691f050; end: 10691f07f; -[SCMessagingStoryPlaybackOrderDecider .cxx_destruct] */

void FUN_10691f050(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10691f080; end: 10691f863; -[SCStoriesServicesEntryPoint _beginG2SOptimazation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10691f080(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined1 auStack_2a0 [8];
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  long lStack_278;
  undefined *puStack_270;
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
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
  long lStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10691f864;
  puStack_90 = &UNK_110861c28;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdf78c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be89620(param_1);
  puVar3 = PTR_PTR_1126ae790;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfef240();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae720;
  puStack_e0 = puVar14;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x10691f8a4;
  puStack_c8 = &UNK_11094a9d0;
  _objc_copyWeak(auStack_b0,auStack_80);
  lStack_c0 = lVar2;
  puStack_b8 = puVar3;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae720;
  puStack_118 = puVar14;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x10691f8ec;
  puStack_100 = &UNK_11094aa00;
  _objc_copyWeak(auStack_e8,auStack_80);
  lStack_f8 = lVar2;
  puStack_f0 = puVar4;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae720;
  puStack_140 = puVar14;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x10691f934;
  puStack_128 = &UNK_11094aa30;
  _objc_copyWeak(auStack_120,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae720;
  puStack_178 = puVar14;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_10691f974;
  puStack_160 = &UNK_11094aa60;
  _objc_copyWeak(auStack_148,auStack_80);
  puStack_158 = puVar1;
  puStack_150 = puVar4;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ae720;
  puStack_1a8 = puVar14;
  uStack_1a0 = 0xc2000000;
  uStack_198 = 0x10691f9e8;
  puStack_190 = &UNK_11094aa90;
  _objc_copyWeak(auStack_180,auStack_80);
  puStack_188 = puVar1;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126ae720;
  puStack_1e8 = puVar14;
  uStack_1e0 = 0xc2000000;
  uStack_1d8 = 0x10691fa58;
  puStack_1d0 = &UNK_11094aac0;
  _objc_copyWeak(auStack_1b0,auStack_80);
  puStack_1c8 = puVar1;
  puStack_1c0 = puVar7;
  puStack_1b8 = puVar8;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126ae720;
  puStack_210 = puVar14;
  uStack_208 = 0xc2000000;
  pcStack_200 = FUN_10691facc;
  puStack_1f8 = &UNK_11094aaf0;
  _objc_copyWeak(auStack_1f0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126ae720;
  puStack_238 = puVar14;
  uStack_230 = 0xc2000000;
  uStack_228 = 0x10691fb0c;
  puStack_220 = &UNK_11094ab20;
  _objc_copyWeak(auStack_218,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126ae720;
  puStack_260 = puVar14;
  uStack_258 = 0xc2000000;
  uStack_250 = 0x10691fb4c;
  puStack_248 = &UNK_11094ab50;
  _objc_copyWeak(auStack_240,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + _DAT_112753c34);
  *(undefined **)(param_1 + _DAT_112753c34) = puVar13;
  _objc_release(uVar19);
  lVar12 = param_1;
  func_0x00010becbb20();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126ae720;
  puStack_298 = puVar14;
  uStack_290 = 0xc2000000;
  uStack_288 = 0x10691fb8c;
  puStack_280 = &UNK_11094ab80;
  _objc_copyWeak(auStack_268,auStack_80);
  lStack_278 = lVar12;
  puStack_270 = puVar9;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_2a0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126cf130;
  _objc_alloc();
  func_0x00010c04d080();
  puVar17 = PTR_PTR_1126ae960;
  puVar16 = PTR_PTR_1126c2300;
  func_0x00010c15f720(PTR_PTR_1126c2300);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  puVar16 = PTR_PTR_1126aeec0;
  puVar18 = PTR_PTR_1126ae970;
  func_0x00010bfe2ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0caa0(puVar16);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar18);
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112753c38));
  _objc_release(puVar17);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_destroyWeak(auStack_2a0);
  _objc_release(puVar13);
  _objc_destroyWeak(auStack_268);
  _objc_release(lVar12);
  _objc_destroyWeak(auStack_240);
  _objc_release(puVar11);
  _objc_destroyWeak(auStack_218);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_1f0);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_1b0);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_180);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_148);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_120);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_e8);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 10691f864; end: 10691f973;  */

void FUN_10691f864(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be194c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10691f974; end: 10691facb;  */

void FUN_10691f974(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010be19580(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10691facc; end: 10691fbd3;  */

void FUN_10691facc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be60040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10691fbd4; end: 10691fc47;  */

void FUN_10691fbd4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bdf4060(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10691fc48; end: 10691fd5b;  */

void FUN_10691fc48(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a1c80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5000();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c000();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c28c9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_updateWithMediaProvider__112680ca0,
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10691fd5c; end: 10691fdcf;  */

void FUN_10691fd5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010be19580(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10691fdd0; end: 10691fe4f;  */

void FUN_10691fdd0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be60040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10691fe50; end: 10691fec3;  */

void FUN_10691fe50(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bdf4060(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10691fec4; end: 10691ffe3; -[SCStoriesServicesEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10691fec4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar5 = (long)_DAT_112753c34;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c06f880();
  if (iVar1 == 0) {
    puVar3 = PTR_PTR_1126afc98;
    func_0x00010c0da5c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112753c3c;
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar3;
  }
  else {
    puVar3 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112753c3c;
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar3;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10691ffe4;
    puStack_40 = &UNK_110842e18;
    uStack_38 = uVar4;
    _objc_retain(uVar4);
    func_0x00010bf6b500(uVar2,param_2,&puStack_58);
    _objc_release(uVar2);
    _objc_release(uStack_38);
  }
  _objc_release(uVar4);
  func_0x00010c117720(*(undefined8 *)(param_1 + lVar6));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10691ffe4; end: 10691ffeb;  */

void FUN_10691ffe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10691ffec; end: 10692010b; -[SCStoriesServicesEntryPoint _storiesSyncNetworkRequesterWithfriendStoriesSyncer:storiesCachedPropertiesCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10691ffec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = (long)_DAT_112753c40;
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar3 = param_1;
  func_0x00010c0cf020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c78b8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = param_3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf138;
  _objc_alloc();
  _objc_release(param_3);
  func_0x00010c02c3e0(puVar2,param_2,lVar3,puVar1,param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar1 = (undefined *)(lVar3 + 0x30);
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010bec4600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10692010c; end: 106920153;  */

void FUN_10692010c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bec4600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106920154; end: 1069201d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106920154(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112753c5c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c08d900();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c139460();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069201d8; end: 10692052b; -[SCStoriesServicesEntryPoint _friendStoriesSyncerWithPerformer:customStoriesDataSyncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069201d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar14 = (long)_DAT_112753c44;
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  _objc_release(lVar14);
  lVar14 = param_1 + _DAT_112753c50;
  _objc_loadWeakRetained();
  lVar2 = lVar14;
  func_0x00010c244420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  lVar14 = param_1 + _DAT_112753c4c;
  _objc_loadWeakRetained();
  lVar3 = lVar14;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  lVar15 = (long)_DAT_112753c58;
  lVar14 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar4 = lVar14;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  lVar15 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar5 = lVar15;
  func_0x00010bfcc7c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar14 = param_1 + _DAT_112753c6c;
  _objc_loadWeakRetained();
  lVar6 = lVar14;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  lVar14 = param_1 + _DAT_112753c48;
  _objc_loadWeakRetained(lVar14);
  lVar15 = lVar14;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(lVar15);
  _objc_release(lVar14);
  lVar14 = param_1 + _DAT_112753c54;
  _objc_loadWeakRetained();
  lVar7 = lVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  puVar8 = PTR_PTR_1126cf148;
  _objc_alloc();
  lVar14 = param_1 + _DAT_112753c68;
  _objc_loadWeakRetained();
  lVar9 = lVar14;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_112753c70;
  lVar15 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar11 = lVar15;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar12 = lVar16;
  func_0x00010c08d5c0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112753c30;
  _objc_loadWeakRetained();
  lVar13 = param_1;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00df60(0x4000000000000000,puVar8,param_2,lVar1,param_3,lVar2,lVar3,param_4,lVar6,0,
                      lVar4,lVar5,lVar10,lVar11,lVar12,lVar7,lVar13);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(lVar16);
  _objc_release(lVar11);
  _objc_release(lVar15);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar14);
  _objc_release(lVar7);
  _objc_release(0);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10692052c; end: 1069205bf; -[SCStoriesServicesEntryPoint _mediaDocumentStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10692052c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + _DAT_112753c48;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf878e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126cf158;
  _objc_alloc(PTR_PTR_1126cf158);
  func_0x00010c029a80();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1069205c0; end: 10692068b; -[SCStoriesServicesEntryPoint _messagingStoryPlaybackOrderDecider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069205c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + _DAT_112753c44;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112753c58;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126cf188;
  _objc_alloc(PTR_PTR_1126cf188);
  func_0x00010c05cb20();
  _objc_release(lVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10692068c; end: 10692088f; -[SCStoriesServicesEntryPoint _customStoriesDataMutatorWithNetworkRequester:customStoriesDataSyncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10692068c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  puVar1 = PTR_PTR_1126cf1a0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  lVar14 = (long)_DAT_112753c4c;
  lVar2 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf1d740();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar4 = lVar14;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112753c48;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112753c44;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112753c9c;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112753c58;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112753c54;
  _objc_loadWeakRetained();
  lVar13 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007f60(puVar1,param_2,param_3,param_4,lVar3,lVar4,lVar6,lVar8,lVar10,lVar12,lVar13);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar14);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106920890; end: 10692094b; -[SCStoriesServicesEntryPoint _customStoriesOnboardingManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106920890(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126cf1b0;
  _objc_alloc(PTR_PTR_1126cf1b0);
  lVar2 = param_1 + _DAT_112753c44;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112753cac;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05cb00(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10692094c; end: 106920a7f; -[SCStoriesServicesEntryPoint _createStoriesRankingCoordinatorWithPerformer:storiesDataCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10692094c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_112753c44;
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar4 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar5 = (long)_DAT_112753c70;
  lVar4 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010c08d5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  param_1 = param_1 + lVar5;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126cf1b8;
  _objc_alloc(PTR_PTR_1126cf1b8);
  func_0x00010c00de40();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106920a80; end: 106920c3f; -[SCStoriesServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106920a80(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112753c98);
  _objc_destroyWeak(param_1 + _DAT_112753c90);
  _objc_destroyWeak(param_1 + _DAT_112753c64);
  _objc_destroyWeak(param_1 + _DAT_112753ca8);
  _objc_destroyWeak(param_1 + _DAT_112753ca0);
  _objc_destroyWeak(param_1 + _DAT_112753c30);
  _objc_destroyWeak(param_1 + _DAT_112753c70);
  _objc_destroyWeak(param_1 + _DAT_112753ca4);
  _objc_destroyWeak(param_1 + _DAT_112753cb0);
  _objc_destroyWeak(param_1 + _DAT_112753cac);
  _objc_destroyWeak(param_1 + _DAT_112753c60);
  _objc_destroyWeak(param_1 + _DAT_112753c7c);
  _objc_destroyWeak(param_1 + _DAT_112753c68);
  _objc_destroyWeak(param_1 + _DAT_112753c54);
  _objc_storeStrong(param_1 + _DAT_112753c38,0);
  _objc_destroyWeak(param_1 + _DAT_112753c58);
  _objc_destroyWeak(param_1 + _DAT_112753c9c);
  _objc_destroyWeak(param_1 + _DAT_112753c6c);
  _objc_destroyWeak(param_1 + _DAT_112753c80);
  _objc_destroyWeak(param_1 + _DAT_112753c5c);
  _objc_destroyWeak(param_1 + _DAT_112753c40);
  _objc_destroyWeak(param_1 + _DAT_112753c50);
  _objc_destroyWeak(param_1 + _DAT_112753c4c);
  _objc_destroyWeak(param_1 + _DAT_112753c78);
  _objc_destroyWeak(param_1 + _DAT_112753c44);
  _objc_destroyWeak(param_1 + _DAT_112753c8c);
  _objc_destroyWeak(param_1 + _DAT_112753c88);
  _objc_destroyWeak(param_1 + _DAT_112753c74);
  _objc_destroyWeak(param_1 + _DAT_112753c48);
  _objc_storeStrong(param_1 + _DAT_112753c34,0);
  _objc_storeStrong(param_1 + _DAT_112753c94,0);
  _objc_storeStrong(param_1 + _DAT_112753c3c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112753c84,0);
  return;
}



/* Entry: 106920c40; end: 106920cb3; -[SCStoriesMediaStateUpdateMonitor didUpdateMediaStateChangeRequest:] */

void FUN_106920c40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (lVar1 = param_3, func_0x00010bf336e0(), lVar1 == 3)) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_3;
    func_0x00010bf267e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6cb60(uVar2,param_2,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106920cb4; end: 106920d6f; -[SCStoriesMediaStateUpdateMonitor .cxx_destruct] */

void FUN_106920cb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106920d70; end: 106920ddf; -[SCStoriesSnapReadReceiptEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106920d70(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112753cc0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb3240();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f3d68;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106920de0; end: 106920e5b; -[SCStoriesSnapReadReceiptEntryPoint _createSnapReadReceiptLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106920de0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126cf1d0;
  _objc_alloc(PTR_PTR_1126cf1d0);
  param_1 = param_1 + _DAT_112753cc8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f0c0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106920e5c; end: 106920e93; -[SCStoriesSnapReadReceiptEntryPoint _createStoriesCachedReadReceiptProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106920e5c(void)

{
  _objc_alloc(PTR_PTR_1126cf1e0);
  func_0x00010c03d080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106920e94; end: 106920f1b; -[SCStoriesSnapReadReceiptEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106920e94(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112753cc4,0);
  _objc_destroyWeak(param_1 + _DAT_112753cc8);
  _objc_destroyWeak(param_1 + _DAT_112753cd8);
  _objc_destroyWeak(param_1 + _DAT_112753cd4);
  _objc_destroyWeak(param_1 + _DAT_112753ccc);
  _objc_destroyWeak(param_1 + _DAT_112753cd0);
  _objc_destroyWeak(param_1 + _DAT_112753cdc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112753cc0,0);
  return;
}



/* Entry: 106920f1c; end: 106920fbb; -[SCStoriesCachedReadReceiptViewStateProvider initWithReadReceiptCoordinator:] */

undefined1 * FUN_106920f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f3d70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106920fbc; end: 106920fbf; -[SCStoriesCachedReadReceiptViewStateProvider warmUpCache] */

void FUN_106920fbc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewStates_112596900);
  return;
}



/* Entry: 106920fc0; end: 106920fe7; -[SCStoriesCachedReadReceiptViewStateProvider allReadReceiptViewStateMap] */

void FUN_106920fc0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106920fe8; end: 106921183; -[SCStoriesCachedReadReceiptViewStateProvider readReceiptViewStateMapForSnapIds:] */

void FUN_106920fe8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_2e8 [8];
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined *puStack_2c8;
  undefined1 auStack_2c0 [8];
  undefined1 auStack_2b8 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 == (undefined1 *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
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
    puVar1 = param_3;
    func_0x00010bf52a60();
    if (puVar1 != (undefined1 *)0x0) {
      lVar8 = *plStack_120;
      do {
        puVar9 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          lVar3 = *(long *)(param_1 + 0x10);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar3 != 0) {
            uVar4 = *(undefined8 *)(param_1 + 0x10);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar2);
            _objc_release(uVar4);
          }
          puVar9 = puVar9 + 1;
        } while (puVar1 != puVar9);
        puVar1 = param_3;
        puVar6 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    puVar7 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar2);
    puVar9 = (undefined1 *)puVar6;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar9);
    puVar1 = puVar9;
    func_0x00010bf529e0();
    if (puVar1 == (undefined1 *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      _objc_retain(puVar9);
      puVar1 = puVar9;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      while (puVar1 != (undefined1 *)0x0) {
        puVar10 = (undefined1 *)0x0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(puVar9);
          }
          lVar5 = *(long *)(param_3 + 0x18);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar5 != 0) {
            uVar4 = *(undefined8 *)(param_3 + 0x18);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar2);
            _objc_release(uVar4);
          }
          puVar10 = puVar10 + 1;
        } while (puVar1 != puVar10);
        puVar1 = puVar9;
        func_0x00010bf52a60();
      }
      _objc_release(puVar9);
      puVar7 = puVar2;
      func_0x00010bf51e00();
      _objc_release(puVar2);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
      ___stack_chk_fail();
      _objc_initWeak(auStack_2b8,puVar9);
      uVar4 = *(undefined8 *)(puVar9 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puStack_2e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2d8 = 0xc2000000;
      pcStack_2d0 = FUN_106921470;
      puStack_2c8 = &UNK_1108531d0;
      _objc_copyWeak(auStack_2c0,auStack_2b8);
      func_0x00010c121840(uVar4);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(puVar9 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_2e8,auStack_2b8);
      func_0x00010c108ee0(uVar4);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_2e8);
      _objc_destroyWeak(auStack_2c0);
      _objc_destroyWeak(auStack_2b8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106921184; end: 10692131f; -[SCStoriesCachedReadReceiptViewStateProvider readReceiptWatchStateMapForStoryIds:] */

void FUN_106921184(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar4 = *(long *)(param_1 + 0x18);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar4 != 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(uVar5);
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    puVar7 = puVar3;
    func_0x00010bf51e00();
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_initWeak(auStack_188,param_3);
  uVar5 = *(undefined8 *)(param_3 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_106921470;
  puStack_198 = &UNK_1108531d0;
  _objc_copyWeak(auStack_190,auStack_188);
  func_0x00010c121840(uVar5);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_3 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1b8,auStack_188);
  func_0x00010c108ee0(uVar5);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_1b8);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_188);
  return;
}



/* Entry: 106921320; end: 10692146f; -[SCStoriesCachedReadReceiptViewStateProvider _updateViewStates] */

void FUN_106921320(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106921470;
  puStack_68 = &UNK_1108531d0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c121840(uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c108ee0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106921470; end: 1069214ff;  */

void FUN_106921470(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29ca0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106921500; end: 1069215b3; -[SCStoriesCachedReadReceiptViewStateProvider _handleFetchedViewStates:] */

void FUN_106921500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x106921588;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1069215b4; end: 106921667; -[SCStoriesCachedReadReceiptViewStateProvider _handleFetchedWatchStates:] */

void FUN_1069215b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x10692163c;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106921668; end: 106921673; -[SCStoriesCachedReadReceiptViewStateProvider didUpdateWithStoriesSnapReadReceiptUpdateRequest:fromPullToRefreshSync:] */

void FUN_106921668(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bee3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewStates_112596900);
    return;
  }
  return;
}



/* Entry: 106921674; end: 1069216af; -[SCStoriesCachedReadReceiptViewStateProvider .cxx_destruct] */

void FUN_106921674(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069216b0; end: 10692187f; -[SCStoriesNetworkRequestRetryer initWithConfig:requestBlock:performer:connectivityMonitor:] */

undefined8 *
FUN_1069216b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f3d78;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar4 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    uVar2 = param_6;
    func_0x00010c0d7a00(param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106921880; end: 106921947;  */

void FUN_106921880(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126ba4e8;
  if (param_1 != 0) {
    func_0x00010bf5e480(param_2);
    func_0x00010c06f020();
    if ((int)puVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(param_1);
      func_0x00010c0f7fc0(uVar2);
      _objc_release(param_1);
    }
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 106921948; end: 10692194f;  */

void FUN_106921948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdffcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didReconnectToNetwork_11255d8d8);
  return;
}



/* Entry: 106921950; end: 10692198b; -[SCStoriesNetworkRequestRetryer requestStart] */

void FUN_106921950(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    return;
  }
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
  *(undefined8 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10692198c; end: 1069219a7; -[SCStoriesNetworkRequestRetryer requestCompleteWithSuccess:] */

void FUN_10692198c(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x18) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010be9b3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scheduleNextRetryIfNecessary_112584690);
  return;
}



/* Entry: 1069219a8; end: 1069219f7; -[SCStoriesNetworkRequestRetryer _didReconnectToNetwork] */

void FUN_1069219a8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(long *)(param_1 + 0x18) == 2) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010c0c2b80();
    if (uVar2 < uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010be97030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__retryRequestBlock_1125835a8);
      return;
    }
  }
  return;
}



/* Entry: 1069219f8; end: 106921aef; -[SCStoriesNetworkRequestRetryer _scheduleNextRetryIfNecessary] */

void FUN_1069219f8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c0c2ba0();
  if (uVar3 < uVar1) {
    uVar3 = *(ulong *)(param_1 + 0x28);
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010c0c2b80();
    if (uVar3 < uVar1) {
      dVar4 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x20));
      _exp2(dVar4);
      dVar5 = dVar4;
      func_0x00010c13f3c0(*(undefined8 *)(param_1 + 8));
      _objc_initWeak(auStack_38,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010c0f7fe0(dVar4 * dVar5,uVar2);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 106921af0; end: 106921b1b;  */

void FUN_106921af0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be97020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106921b1c; end: 106921b5b; -[SCStoriesNetworkRequestRetryer _retryRequestBlock] */

void FUN_106921b1c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
  *(undefined8 *)(param_1 + 0x18) = 1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  return;
}



/* Entry: 106921b5c; end: 106921ba3; -[SCStoriesNetworkRequestRetryer .cxx_destruct] */

void FUN_106921b5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106921ba4; end: 106921cbb;  */

void FUN_106921ba4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    _objc_retain(uVar3);
    puVar4 = PTR_PTR_1126cf200;
    _objc_alloc(PTR_PTR_1126cf200);
    puVar2 = PTR_PTR_1126cf210;
    _objc_alloc(PTR_PTR_1126cf210);
    func_0x00010c028d60(0x4010000000000000);
    _objc_copyWeak(auStack_48,param_1 + 0x28);
    func_0x00010c000fc0(puVar4);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106921cbc; end: 106921ce7;  */

void FUN_106921cbc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be154e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106921ce8; end: 106921d1f; -[SCStoriesSnapReadReceiptCoordinator hasCompletedInitialFetching] */

bool FUN_106921ce8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x0001084f4604(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 106921d20; end: 106921d27; -[SCStoriesSnapReadReceiptCoordinator isPremiumReadRequestFromServer] */

undefined1 FUN_106921d20(long param_1)

{
  return *(undefined1 *)(param_1 + 0x52);
}



/* Entry: 106921d28; end: 106921ddf; -[SCStoriesSnapReadReceiptCoordinator fetchViewHistoryFromPullToRefresh:] */

void FUN_106921d28(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106921de0; end: 106921e37;  */

void FUN_106921de0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x53) = *(undefined1 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c136740();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106921e38; end: 106921e3f; -[SCStoriesSnapReadReceiptCoordinator readReceiptViewStatesByIds:completion:] */

void FUN_106921e38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c258b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_storiesReadReceiptViewStatesById_112673ce8);
  return;
}



/* Entry: 106921e40; end: 106921e47; -[SCStoriesSnapReadReceiptCoordinator storiesReadReceiptViewStatesObservable] */

void FUN_106921e40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c258b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_storiesReadReceiptViewStatesObse_112673cf0);
  return;
}



/* Entry: 106921e48; end: 106921e4f; -[SCStoriesSnapReadReceiptCoordinator currentStoriesReadReceiptViewStates] */

void FUN_106921e48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf602d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_currentStoriesReadReceiptViewSta_1125b5a58);
  return;
}



/* Entry: 106921e50; end: 106921e9f; -[SCStoriesSnapReadReceiptCoordinator logStoriesSnapViewStateNotReadyWhenProvidingMedatadataType:] */

void FUN_106921e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b31a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106921ea0; end: 106921ea7; -[SCStoriesSnapReadReceiptCoordinator premiumWatchStatesByStoryIds:completion:] */

void FUN_106921ea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c108ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_premiumWatchStatesByStoryIds_com_11261fdd8);
  return;
}



/* Entry: 106921ea8; end: 106921f37; -[SCStoriesSnapReadReceiptCoordinator removePremiumWatchStatesByStoryIds:] */

void FUN_106921ea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106921f38;
  puStack_30 = &UNK_11085adb8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_48,0,0);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106921f38; end: 106921f47;  */

void FUN_106921f38(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  undefined4 uStack_1cc;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [31];
  undefined1 uStack_191;
  undefined **appuStack_190 [9];
  undefined1 auStack_148 [24];
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(uVar7);
  _objc_opt_class(PTR_PTR_1126cc378);
  if (param_2 == 0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_2);
  }
  puVar2 = &uStack_191;
  func_0x00010850276c(puVar2);
  func_0x000100aac340(auStack_1b0,uVar7);
  func_0x000107c281a0(appuStack_190,0xc,puVar2,auStack_1b0);
  puStack_1c8 = (undefined1 *)0x0;
  puStack_1c0 = (undefined1 *)0x0;
  uStack_1b8 = 0;
  uStack_1cc = 0;
  puVar3 = &uStack_120;
  pppuVar8 = appuStack_190;
  func_0x000107c310cc(puVar3,pppuVar8,&puStack_1c8,&uStack_1cc);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1c8 != (undefined1 *)0x0) {
    puStack_1c0 = puStack_1c8;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  appuStack_190[0] = &PTR_SUB_110862700;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1c8 = auStack_148;
  func_0x000107c27dd4(&puStack_1c8);
  puStack_1c8 = auStack_1b0;
  func_0x000107c27dd4(&puStack_1c8);
  func_0x000107c27da8(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar3);
      }
      pppuVar8 = *(undefined ****)((long)puVar9 * 8);
      puVar5 = PTR_PTR_1126d9ef8;
      func_0x000108503618(PTR_PTR_1126d9ef8,pppuVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar9 = (undefined8 *)((long)puVar9 + 1);
    } while (puVar4 != puVar9);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(uVar7);
  lVar6 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(uVar7);
  _objc_release(param_2);
  __Unwind_Resume(lVar6);
  func_0x00010c243260(pppuVar8);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106921f48; end: 106921f4f; -[SCStoriesSnapReadReceiptCoordinator removeListener:] */

void FUN_106921f48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106921f50; end: 106921fd7; -[SCStoriesSnapReadReceiptCoordinator resetReadReceiptRecordsForUploading] */

void FUN_106921f50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500(uVar2,param_2,&PTR___NSConcreteGlobalBlock_11094acd0,uVar1,
                      &PTR___NSConcreteGlobalBlock_11094acf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106921fd8; end: 106921fdb;  */

void FUN_106921fd8(void)

{
  return;
}



/* Entry: 106921fdc; end: 106922197; -[SCStoriesSnapReadReceiptCoordinator deleteExpiredViewStatesWithCompletion:] */

void FUN_106921fdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 0;
  uStack_a8 = 0;
  uStack_98 = 0x2020000000;
  uStack_90 = 0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_d0 = FUN_106922198;
  puStack_c8 = &UNK_11094ad10;
  uStack_d8 = 0xc2000000;
  puStack_a0 = &uStack_a8;
  puStack_80 = &uStack_88;
  _objc_copyWeak(auStack_b0,auStack_68);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_c0 = &uStack_88;
  puStack_b8 = &uStack_a8;
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_e8,auStack_68);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  __Block_object_dispose(&uStack_88,8);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 106922198; end: 1069222b3;  */

void FUN_106922198(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x0001084f7f24(param_2,*(undefined8 *)(lVar1 + 0x10));
    *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar2;
    uVar2 = param_2;
    func_0x0001084f8364(param_2,*(undefined8 *)(lVar1 + 0x10));
    *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar2;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069222b4; end: 106922477; -[SCStoriesSnapReadReceiptCoordinator insertReadReceiptForSnapIds:action:expirationTimestamp:] */

void FUN_1069222b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_2);
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_106922478;
  uStack_78 = 0x106922488;
  puStack_90 = &uStack_98;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_2 + 8);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106922490;
  puStack_c8 = &UNK_11094ad70;
  uStack_70 = param_4;
  _objc_copyWeak(auStack_b0,auStack_68);
  puStack_b8 = &uStack_98;
  uStack_a8 = param_5;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uStack_c0 = param_4;
  uStack_a0 = param_1;
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_e8,auStack_68);
  func_0x00010c0f8500(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_e8);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_b0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  return;
}



/* Entry: 106922478; end: 10692248f;  */

void FUN_106922478(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106922490; end: 106922513;  */

void FUN_106922490(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x0001084f4c30(*(undefined8 *)(param_1 + 0x40),param_2,*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(lVar1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106922514; end: 106922573;  */

void FUN_106922514(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf208;
  func_0x00010c245d40(PTR_PTR_1126cf208,param_2,
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf04560();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106922574; end: 1069226e7; -[SCStoriesSnapReadReceiptCoordinator saveReadReceiptForSnapIds:action:expirationTimestamp:] */

void FUN_106922574(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_2);
  uVar2 = *(undefined8 *)(param_2 + 8);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1069226e8;
  puStack_80 = &UNK_11094ada0;
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_68 = param_5;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uStack_78 = param_4;
  uStack_60 = param_1;
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_copyWeak(auStack_a0,auStack_58);
  func_0x00010c0f8500(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_a0);
  _objc_release(param_4);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 1069226e8; end: 10692274b;  */

void FUN_1069226e8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x0001084f4858(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(lVar1 + 0x10));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10692274c; end: 1069227a3;  */

void FUN_10692274c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf208;
  func_0x00010c245d40(PTR_PTR_1126cf208,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf04560();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069227a4; end: 1069229a3; -[SCStoriesSnapReadReceiptCoordinator savePremiumReadReceipt:storyDedupFp:snapIds:action:expirationTimestamp:] */

void FUN_1069227a4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_78,param_2);
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  uVar2 = *(undefined8 *)(param_2 + 8);
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_1069229a4;
  puStack_d0 = &UNK_11094add0;
  puStack_90 = &uStack_98;
  _objc_copyWeak(auStack_b0,auStack_78);
  puStack_b8 = &uStack_98;
  _objc_retain(param_4);
  uStack_c8 = param_4;
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uStack_c0 = param_6;
  uStack_a8 = param_7;
  uStack_a0 = param_1;
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_f8,auStack_78);
  uStack_f0 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c0f8500(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_f8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_destroyWeak(auStack_b0);
  __Block_object_dispose(&uStack_98,8);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1069229a4; end: 106922afb;  */

void FUN_1069229a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x0001084f616c(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(lVar1 + 0x10));
    *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar2;
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      func_0x0001084f4858(*(undefined8 *)(param_1 + 0x48),param_2,*(undefined8 *)(param_1 + 0x40),
                          *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar1 + 0x10));
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106922afc; end: 106922b8f; -[SCStoriesSnapReadReceiptCoordinator updatePremiumReadReceiptWatchStates:completion:] */

void FUN_106922afc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_11094ae30,
                      &PTR___NSConcreteGlobalBlock_11094ae50);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084f6e18(uVar2,param_3,0,param_4,uVar1);
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106922b90; end: 106922b97;  */

void FUN_106922b90(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storyId_112674158);
  return;
}



/* Entry: 106922b98; end: 106922bbf;  */

void FUN_106922b98(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106922bc0; end: 106922bcb; -[SCStoriesSnapReadReceiptCoordinator saveSnapReadReceipt:publicationId:isPrivateStorySnap:storyDedupFp:shouldFlush:] */

void FUN_106922bc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14af30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_saveSnapReadReceipt_publicationI_1126305e8);
  return;
}



/* Entry: 106922bcc; end: 106922f53; -[SCStoriesSnapReadReceiptCoordinator saveSnapReadReceipt:publicationId:isPrivateStorySnap:storyDedupFp:storyId:shouldFlush:] */

void FUN_106922bcc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined **ppuVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_e7;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [8];
  double dStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010bf5e5e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar2 = param_1 * 1000.0;
  _objc_release(uVar3);
  func_0x00010bf9c840(param_4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e64fd8;
  if (param_1 <= 0.0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e64ff8;
  }
  _objc_retain(ppuVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25b720();
  func_0x00010c0ad660(uVar3);
  _objc_release(uVar3);
  _objc_initWeak(auStack_80,param_2);
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  uVar4 = *(undefined8 *)(param_2 + 8);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106922f54;
  puStack_c8 = &UNK_11089abc0;
  puStack_98 = &uStack_a0;
  _objc_copyWeak(auStack_b0,auStack_80);
  puStack_b8 = &uStack_a0;
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uStack_c0 = param_4;
  dStack_a8 = dVar2 + 2592000000.0;
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_f8,auStack_80);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_f0 = param_7;
  uStack_e8 = param_6;
  _objc_retain(param_8);
  uStack_e7 = param_9;
  func_0x00010c0f8500(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010bf5e5e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_2 + 8);
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500(uVar4);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_f8);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_b0);
  __Block_object_dispose(&uStack_a0,8);
  _objc_destroyWeak(auStack_80);
  _objc_release(ppuVar1);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106922f54; end: 106923053;  */

void FUN_106922f54(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x0001084f4f18(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(lVar1 + 0x10));
    *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar2;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106923054; end: 10692307f;  */

void FUN_106923054(long param_1,ulong param_2)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  dVar10 = *(double *)(param_1 + 0x28) * 1000.0;
  cVar1 = *(char *)(param_1 + 0x30);
  cVar2 = *(char *)(param_1 + 0x31);
  dVar11 = dVar10;
  _objc_retain();
  uVar3 = param_2;
  func_0x0001084dc184(param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (((uVar4 != 0) && (uVar3 = uVar4, func_0x00010c27dd80(), uVar3 < 0xb)) &&
     ((1L << (uVar3 & 0x3f) & 0x4c0U) != 0)) {
    puVar5 = PTR_PTR_1126d8f60;
    func_0x000108509e24(PTR_PTR_1126d8f60,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uVar3 = uVar4;
    func_0x00010c246f40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c29ee80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar3);
    if (((cVar1 != '\0') && (uVar3 = uVar4, func_0x00010c27dd80(), uVar3 == 7)) ||
       ((cVar2 != '\0' &&
        ((uVar3 = uVar4, func_0x00010c27dd80(), uVar3 == 6 ||
         (uVar3 = uVar4, func_0x00010c27dd80(), uVar3 == 10)))))) {
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      dVar11 = dVar10;
      func_0x00010c0df720(dVar10,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar7);
      _objc_release(puVar8);
    }
    if (puVar5 != (undefined *)0x0) {
      puVar8 = PTR_PTR_1126d9e30;
      _objc_alloc(PTR_PTR_1126d9e30);
      uVar3 = uVar4;
      func_0x00010c246f40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d10a0();
      uVar6 = uVar4;
      dVar12 = dVar11;
      func_0x00010c246f40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d4780();
      func_0x00010c02c900(dVar11,dVar12,dVar10,puVar8);
      _objc_setProperty_nonatomic_copy(puVar5);
      _objc_release(puVar8);
      _objc_release(uVar6);
      _objc_release(uVar3);
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106923080; end: 106923087; -[SCStoriesSnapReadReceiptCoordinator flushPremiumReadReceipts] */

void FUN_106923080(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec9bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__syncPremiumReadReceiptsToServer_112590090,1)
  ;
  return;
}



/* Entry: 106923088; end: 10692308f; -[SCStoriesSnapReadReceiptCoordinator flushSnapReadReceipts] */

void FUN_106923088(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec9d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__syncSnapReadReceiptsToServerSho_1125900f0,1)
  ;
  return;
}



/* Entry: 106923090; end: 10692315b; -[SCStoriesSnapReadReceiptCoordinator cleanCustomStoryViewedTimestampList] */

void FUN_106923090(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  if (((*(byte *)(param_2 + 0x50) & 1) != 0) || (*(char *)(param_2 + 0x51) == '\x01')) {
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010bf5e5e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_2 + 8);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc0000000;
    pcStack_48 = FUN_10692315c;
    puStack_40 = &UNK_1108ce8a8;
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    uStack_38 = param_1;
    func_0x00010c11de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8500(uVar2,param_3,&puStack_58,uVar1,&PTR___NSConcreteGlobalBlock_11094aef0);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 10692315c; end: 106923177;  */

void FUN_10692315c(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined ***pppuVar12;
  undefined8 *puVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined **ppuVar16;
  undefined ***pppuVar17;
  undefined **ppuVar18;
  undefined ***pppuVar19;
  long lVar20;
  long lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uStack_a24;
  undefined8 *puStack_a20;
  undefined8 *puStack_a18;
  undefined8 uStack_a10;
  undefined **ppuStack_a08;
  undefined4 uStack_a00;
  undefined4 uStack_9f0;
  undefined ***pppuStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  long *plStack_9a8;
  long *plStack_9a0;
  undefined1 uStack_991;
  undefined **ppuStack_990;
  undefined4 uStack_988;
  undefined2 uStack_978;
  undefined2 uStack_976;
  undefined1 *puStack_958;
  undefined ***pppuStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  long *plStack_930;
  long *plStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  long lStack_8e0;
  undefined **ppuStack_8d8;
  undefined ***pppuStack_8d0;
  undefined ***pppuStack_8c8;
  undefined **ppuStack_8c0;
  undefined **ppuStack_8b8;
  undefined *puStack_8b0;
  long lStack_8a8;
  undefined ***pppuStack_8a0;
  long lStack_898;
  undefined1 **ppuStack_890;
  undefined *puStack_888;
  undefined8 uStack_880;
  long lStack_878;
  undefined8 *puStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined4 uStack_834;
  undefined **ppuStack_830;
  undefined **ppuStack_828;
  undefined8 uStack_820;
  undefined **ppuStack_818;
  undefined4 uStack_810;
  undefined4 uStack_800;
  undefined ***pppuStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined *puStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  long *plStack_7b8;
  long *plStack_7b0;
  undefined1 uStack_7a1;
  undefined **ppuStack_7a0;
  undefined4 uStack_798;
  undefined2 uStack_788;
  undefined2 uStack_786;
  undefined1 *puStack_768;
  undefined ***pppuStack_760;
  undefined *puStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  long *plStack_740;
  long *plStack_738;
  undefined **ppuStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  long lStack_678;
  undefined ***pppuStack_670;
  undefined ***pppuStack_668;
  undefined ***pppuStack_660;
  undefined ***pppuStack_658;
  undefined ***pppuStack_650;
  long lStack_648;
  undefined ***pppuStack_640;
  undefined8 *puStack_638;
  undefined1 *puStack_630;
  undefined *puStack_628;
  long lStack_620;
  undefined8 *puStack_618;
  undefined8 uStack_610;
  long lStack_608;
  long *plStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  long lStack_5c8;
  long *plStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined4 uStack_584;
  long lStack_580;
  long lStack_578;
  undefined8 uStack_570;
  undefined **ppuStack_568;
  undefined4 uStack_560;
  undefined4 uStack_550;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  long lStack_520;
  long lStack_518;
  undefined8 uStack_510;
  long *plStack_508;
  long *plStack_500;
  undefined1 uStack_4f1;
  undefined **ppuStack_4f0;
  undefined4 uStack_4e8;
  undefined2 uStack_4d8;
  byte bStack_4d6;
  byte bStack_4d5;
  undefined1 *puStack_4b8;
  undefined ***pppuStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  undefined8 uStack_498;
  long *plStack_490;
  long *plStack_488;
  undefined **ppuStack_480;
  undefined4 uStack_478;
  undefined4 uStack_468;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long lStack_430;
  undefined8 uStack_428;
  long *plStack_420;
  long *plStack_418;
  undefined1 uStack_409;
  undefined **ppuStack_408;
  undefined4 uStack_400;
  undefined2 uStack_3f0;
  byte bStack_3ee;
  byte bStack_3ed;
  undefined1 *puStack_3d0;
  undefined ***pppuStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  long *plStack_3a8;
  long *plStack_3a0;
  undefined **ppuStack_398;
  undefined4 uStack_390;
  undefined4 uStack_380;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_350;
  long lStack_348;
  undefined8 uStack_340;
  long *plStack_338;
  long *plStack_330;
  undefined1 uStack_321;
  undefined **ppuStack_320;
  undefined4 uStack_318;
  undefined2 uStack_308;
  undefined2 uStack_306;
  undefined1 *puStack_2e8;
  undefined ***pppuStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined **ppuStack_2b0;
  undefined4 uStack_2a8;
  undefined2 uStack_298;
  byte bStack_296;
  byte bStack_295;
  undefined ***pppuStack_278;
  undefined ***pppuStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  long *plStack_248;
  undefined **ppuStack_240;
  undefined4 uStack_238;
  undefined2 uStack_228;
  byte bStack_226;
  byte bStack_225;
  undefined ***pppuStack_208;
  undefined ***pppuStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_98;
  
  dVar22 = *(double *)(param_1 + 0x20);
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_620 = param_2;
  _objc_opt_class(PTR_PTR_1126b47a0);
  if (param_2 == 0) {
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1d0,param_2);
  }
  pppuVar15 = &ppuStack_568;
  puVar2 = &uStack_321;
  func_0x000108507fc0();
  pppuVar19 = (undefined ***)0xf;
  uStack_390 = 0xf;
  uStack_380 = 0x100;
  ppuVar8 = &PTR_DAT_110a4fdb0;
  ppuStack_398 = &PTR_DAT_110a4fdb0;
  uStack_358 = 0;
  uStack_360 = 0;
  lStack_348 = 0;
  lStack_350 = 0;
  plStack_338 = (long *)0x0;
  uStack_340 = 0;
  uStack_368 = 6;
  plStack_330 = (long *)0x0;
  uStack_306 = *(undefined2 *)(puVar2 + 0x1a);
  lVar21 = 10;
  uStack_318 = 10;
  pppuVar17 = (undefined ***)0x100;
  uStack_308 = 0x100;
  ppuStack_320 = &PTR_DAT_110a4fd50;
  pppuStack_2e0 = &ppuStack_398;
  lStack_2d0 = 0;
  lStack_2d8 = 0;
  plStack_2c0 = (long *)0x0;
  uStack_2c8 = 0;
  plStack_2b8 = (long *)0x0;
  puVar3 = &uStack_409;
  puStack_2e8 = puVar2;
  func_0x000108507fc0();
  uStack_478 = 0xf;
  uStack_468 = 0x100;
  ppuStack_480 = &PTR_DAT_110a4fdb0;
  uStack_440 = 0;
  uStack_448 = 0;
  lStack_430 = 0;
  lStack_438 = 0;
  plStack_420 = (long *)0x0;
  uStack_428 = 0;
  uStack_450 = 7;
  plStack_418 = (long *)0x0;
  bStack_3ee = puVar3[0x1a];
  bStack_3ed = puVar3[0x1b];
  uStack_400 = 10;
  uStack_3f0 = 0x100;
  ppuStack_408 = &PTR_DAT_110a4fd50;
  pppuStack_3c8 = &ppuStack_480;
  plStack_3a0 = (long *)0x0;
  lStack_3b8 = 0;
  lStack_3c0 = 0;
  plStack_3a8 = (long *)0x0;
  uStack_3b0 = 0;
  bStack_296 = (byte)uStack_306 | bStack_3ee;
  bStack_295 = uStack_306._1_1_ | bStack_3ed;
  uStack_2a8 = 5;
  uStack_298 = 0x100;
  pppuVar12 = (undefined ***)&UNK_1108629b8;
  ppuVar7 = &PTR_DAT_1108629c8;
  ppuStack_2b0 = &PTR_DAT_1108629c8;
  pppuStack_278 = &ppuStack_320;
  pppuStack_270 = &ppuStack_408;
  uStack_260 = 0;
  lStack_268 = 0;
  plStack_250 = (long *)0x0;
  uStack_258 = 0;
  plStack_248 = (long *)0x0;
  puVar2 = &uStack_4f1;
  puStack_3d0 = puVar3;
  func_0x000108507fc0();
  uStack_560 = 0xf;
  uStack_550 = 0x100;
  ppuStack_568 = &PTR_DAT_110a4fdb0;
  uStack_528 = 0;
  uStack_530 = 0;
  lStack_518 = 0;
  lStack_520 = 0;
  plStack_508 = (long *)0x0;
  uStack_510 = 0;
  uStack_538 = 10;
  plStack_500 = (long *)0x0;
  bStack_4d6 = puVar2[0x1a];
  bStack_4d5 = puVar2[0x1b];
  uStack_4e8 = 10;
  uStack_4d8 = 0x100;
  ppuStack_4f0 = &PTR_DAT_110a4fd50;
  pppuStack_4b0 = &ppuStack_568;
  plStack_488 = (long *)0x0;
  lStack_4a0 = 0;
  lStack_4a8 = 0;
  plStack_490 = (long *)0x0;
  uStack_498 = 0;
  bStack_226 = bStack_296 | bStack_4d6;
  bStack_225 = bStack_295 | bStack_4d5;
  uStack_238 = 5;
  uStack_228 = 0x100;
  ppuStack_240 = &PTR_DAT_1108629c8;
  pppuStack_208 = &ppuStack_2b0;
  pppuStack_200 = &ppuStack_4f0;
  uStack_1f0 = 0;
  lStack_1f8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1e8 = 0;
  plStack_1d8 = (long *)0x0;
  lStack_580 = 0;
  lStack_578 = 0;
  uStack_570 = 0;
  uStack_584 = 0;
  puVar13 = &uStack_1d0;
  pppuVar6 = &ppuStack_240;
  puStack_4b8 = puVar2;
  func_0x000107c310cc(puVar13,pppuVar6,&lStack_580,&uStack_584);
  _objc_retainAutoreleasedReturnValue();
  puStack_618 = puVar13;
  if (lStack_580 != 0) {
    lStack_578 = lStack_580;
    __ZdlPv();
  }
  plVar1 = plStack_1d8;
  ppuStack_240 = &PTR_DAT_1108629c8;
  plStack_1d8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1e0;
  plStack_1e0 = (long *)0x0;
  pppuVar14 = (undefined ***)&UNK_110a4fd40;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1f8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_488;
  ppuStack_4f0 = &PTR_DAT_110a4fd50;
  plStack_488 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_490;
  plStack_490 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_4a8 != 0) {
    lStack_4a0 = lStack_4a8;
    __ZdlPv();
  }
  plVar1 = plStack_500;
  ppuStack_568 = &PTR_DAT_110a4fdb0;
  plStack_500 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_508;
  plStack_508 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_520 != 0) {
    lStack_518 = lStack_520;
    __ZdlPv();
  }
  plVar1 = plStack_248;
  ppuStack_2b0 = &PTR_DAT_1108629c8;
  plStack_248 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_250;
  plStack_250 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_268 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_3a0;
  ppuStack_408 = &PTR_DAT_110a4fd50;
  plStack_3a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3a8;
  plStack_3a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_3c0 != 0) {
    lStack_3b8 = lStack_3c0;
    __ZdlPv();
  }
  plVar1 = plStack_418;
  ppuStack_480 = &PTR_DAT_110a4fdb0;
  plStack_418 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_420;
  plStack_420 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_438 != 0) {
    lStack_430 = lStack_438;
    __ZdlPv();
  }
  plVar1 = plStack_2b8;
  ppuStack_320 = &PTR_DAT_110a4fd50;
  plStack_2b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2c0;
  plStack_2c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2d8 != 0) {
    lStack_2d0 = lStack_2d8;
    __ZdlPv();
  }
  plVar1 = plStack_330;
  ppuStack_398 = &PTR_DAT_110a4fdb0;
  plStack_330 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_338;
  plStack_338 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_350 != 0) {
    lStack_348 = lStack_350;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_1a8);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1c0);
  puVar13 = puStack_618;
  lStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  plStack_5c0 = (long *)0x0;
  uStack_5a8 = 0;
  uStack_5b0 = 0;
  uStack_598 = 0;
  uStack_5a0 = 0;
  _objc_retain(puStack_618);
  puVar4 = puVar13;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    lVar21 = *plStack_5c0;
    do {
      puVar13 = (undefined8 *)0x0;
      do {
        if (*plStack_5c0 != lVar21) {
          _objc_enumerationMutation(puStack_618);
        }
        pppuVar15 = *(undefined ****)(lStack_5c8 + (long)puVar13 * 8);
        pppuVar12 = pppuVar15;
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        pppuVar5 = pppuVar12;
        func_0x00010c08fa60();
        pppuVar14 = (undefined ***)(ulong)(pppuVar5 == (undefined ***)0x0);
        _objc_release(pppuVar12);
        if (pppuVar5 != (undefined ***)0x0) {
          pppuVar12 = pppuVar15;
          func_0x00010c246f40();
          _objc_retainAutoreleasedReturnValue();
          pppuVar17 = pppuVar12;
          func_0x00010c29ee80();
          _objc_retainAutoreleasedReturnValue();
          pppuVar5 = pppuVar17;
          func_0x00010bf529e0();
          pppuVar14 = (undefined ***)(ulong)(pppuVar5 == (undefined ***)0x0);
          _objc_release(pppuVar17);
          _objc_release(pppuVar12);
          if (pppuVar5 != (undefined ***)0x0) {
            pppuVar12 = (undefined ***)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            dVar23 = 0.0;
            uStack_5e8 = 0;
            uStack_5f0 = 0;
            uStack_5d8 = 0;
            uStack_5e0 = 0;
            lStack_608 = 0;
            uStack_610 = 0;
            uStack_5f8 = 0;
            plStack_600 = (long *)0x0;
            pppuVar6 = pppuVar15;
            func_0x00010c246f40();
            _objc_retainAutoreleasedReturnValue();
            pppuVar17 = pppuVar6;
            func_0x00010c29ee80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(pppuVar6);
            pppuVar6 = pppuVar17;
            func_0x00010bf52a60();
            if (pppuVar6 != (undefined ***)0x0) {
              lVar20 = *plStack_600;
              do {
                pppuVar14 = (undefined ***)0x0;
                do {
                  if (*plStack_600 != lVar20) {
                    _objc_enumerationMutation(pppuVar17);
                  }
                  func_0x00010bf885a0(*(undefined8 *)(lStack_608 + (long)pppuVar14 * 8));
                  dVar23 = dVar22 * 1000.0 - dVar23;
                  if (dVar23 < 604800000.0) {
                    func_0x00010befa120(pppuVar12);
                  }
                  pppuVar14 = (undefined ***)((long)pppuVar14 + 1);
                } while (pppuVar6 != pppuVar14);
                pppuVar6 = pppuVar17;
                func_0x00010bf52a60();
              } while (pppuVar6 != (undefined ***)0x0);
            }
            _objc_release(pppuVar17);
            pppuVar17 = (undefined ***)PTR_PTR_1126d8f60;
            pppuVar6 = pppuVar15;
            func_0x000108509e24();
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = (undefined **)PTR_PTR_1126d9e30;
            _objc_alloc();
            pppuVar19 = pppuVar15;
            func_0x00010c246f40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d10a0();
            ppuVar8 = (undefined **)pppuVar15;
            dVar24 = dVar23;
            func_0x00010c246f40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d4780();
            dVar25 = dVar24;
            func_0x00010c246f40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c08b360();
            func_0x00010c02c900(dVar23,dVar24,dVar25);
            if (pppuVar17 != (undefined ***)0x0) {
              _objc_setProperty_nonatomic_copy(pppuVar17);
            }
            _objc_release(ppuVar7);
            _objc_release(pppuVar15);
            _objc_release(ppuVar8);
            _objc_release(pppuVar19);
            func_0x00010c25ed40(lStack_620);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(pppuVar17);
            _objc_release(pppuVar12);
          }
        }
        puVar13 = (undefined8 *)((long)puVar13 + 1);
      } while (puVar13 != puVar4);
      puVar4 = puStack_618;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined8 *)0x0);
  }
  _objc_release(puStack_618);
  _objc_release(puStack_618);
  lVar20 = lStack_620;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puStack_618);
  _objc_release(puStack_618);
  _objc_release(lStack_620);
  lVar9 = lVar20;
  __Unwind_Resume();
  puStack_628 = &UNK_1084de31c;
  lStack_678 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_670 = (undefined ***)ppuVar8;
  pppuStack_668 = pppuVar19;
  pppuStack_660 = pppuVar17;
  pppuStack_658 = pppuVar15;
  pppuStack_650 = pppuVar12;
  lStack_648 = lVar20;
  pppuStack_640 = pppuVar14;
  puStack_638 = puVar13;
  puStack_630 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(lVar9);
  _objc_retain(pppuVar6);
  _objc_opt_class(PTR_PTR_1126d8fc0);
  if (lVar9 == 0) {
    uStack_700 = 0;
    uStack_718 = 0;
    uStack_720 = 0;
    uStack_708 = 0;
    uStack_710 = 0;
    uStack_728 = 0;
    ppuStack_730 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_730,lVar9);
  }
  pppuVar15 = &ppuStack_818;
  puVar2 = &uStack_7a1;
  func_0x000108522724();
  uStack_810 = 0xf;
  uStack_800 = 0x100;
  _objc_retain(pppuVar6);
  puVar10 = &UNK_110862750;
  ppuStack_818 = &PTR_DAT_110862760;
  uStack_7d8 = 0;
  uStack_7e0 = 0;
  uStack_7c8 = 0;
  puStack_7d0 = (undefined *)0x0;
  plStack_7b8 = (long *)0x0;
  uStack_7c0 = 0;
  plStack_7b0 = (long *)0x0;
  uStack_786 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_798 = 10;
  uStack_788 = 0x100;
  ppuVar16 = &PTR_SUB_110862700;
  ppuStack_7a0 = &PTR_SUB_110862700;
  pppuStack_760 = &ppuStack_818;
  uStack_750 = 0;
  puStack_758 = (undefined *)0x0;
  plStack_740 = (long *)0x0;
  uStack_748 = 0;
  plStack_738 = (long *)0x0;
  ppuStack_830 = (undefined **)0x0;
  ppuStack_828 = (undefined **)0x0;
  uStack_820 = 0;
  uStack_834 = 0;
  pppuVar17 = &ppuStack_730;
  pppuVar12 = &ppuStack_7a0;
  pppuStack_7e8 = pppuVar6;
  puStack_768 = puVar2;
  func_0x000107c310cc(pppuVar17,pppuVar12,&ppuStack_830,&uStack_834);
  _objc_retainAutoreleasedReturnValue();
  if (ppuStack_830 != (undefined **)0x0) {
    ppuStack_828 = ppuStack_830;
    __ZdlPv();
  }
  plVar1 = plStack_738;
  ppuVar18 = &puStack_758;
  ppuStack_7a0 = &PTR_SUB_110862700;
  plStack_738 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_740;
  plStack_740 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_830 = ppuVar18;
  func_0x000107c27dd4(&ppuStack_830);
  plVar1 = plStack_7b0;
  ppuStack_818 = &PTR_DAT_110862760;
  plStack_7b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_7b8;
  plStack_7b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_830 = &puStack_7d0;
  func_0x000107c27dd4(&ppuStack_830);
  _objc_release(pppuStack_7e8);
  func_0x000107c27da8(&uStack_708);
  _objc_release(uStack_718);
  _objc_release(uStack_720);
  _objc_release(pppuVar6);
  _objc_release(lVar9);
  pppuVar6 = pppuVar17;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar17);
  uStack_858 = 0;
  uStack_860 = 0;
  uStack_848 = 0;
  uStack_850 = 0;
  lStack_878 = 0;
  uStack_880 = 0;
  uStack_868 = 0;
  puStack_870 = (undefined8 *)0x0;
  _objc_retain(pppuVar6);
  pppuVar17 = pppuVar6;
  func_0x00010bf52a60();
  if (pppuVar17 != (undefined ***)0x0) {
    ppuVar16 = (undefined **)*puStack_870;
    ppuVar18 = &PTR_PTR_1126d9000;
    do {
      pppuVar15 = (undefined ***)0x0;
      do {
        if ((undefined **)*puStack_870 != ppuVar16) {
          _objc_enumerationMutation(pppuVar6);
        }
        pppuVar12 = *(undefined ****)(lStack_878 + (long)pppuVar15 * 8);
        puVar10 = PTR_PTR_1126d9e38;
        func_0x000108523370();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(lVar9);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar10);
        pppuVar15 = (undefined ***)((long)pppuVar15 + 1);
      } while (pppuVar17 != pppuVar15);
      pppuVar17 = pppuVar6;
      func_0x00010bf52a60();
    } while (pppuVar17 != (undefined ***)0x0);
  }
  _objc_release(pppuVar6);
  _objc_release(pppuVar6);
  lVar20 = lVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_678) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pppuVar6);
  _objc_release(pppuVar6);
  _objc_release(lVar9);
  lVar11 = lVar20;
  __Unwind_Resume();
  puStack_888 = &UNK_1084de6bc;
  lStack_8e0 = lVar21;
  ppuStack_8d8 = ppuVar7;
  pppuStack_8d0 = (undefined ***)ppuVar8;
  pppuStack_8c8 = pppuVar15;
  ppuStack_8c0 = ppuVar18;
  ppuStack_8b8 = ppuVar16;
  puStack_8b0 = puVar10;
  lStack_8a8 = lVar20;
  pppuStack_8a0 = pppuVar6;
  lStack_898 = lVar9;
  ppuStack_890 = &puStack_630;
  _objc_retain();
  _objc_retain(pppuVar12);
  _objc_opt_class(PTR_PTR_1126d8fa0);
  if (lVar11 == 0) {
    uStack_8f0 = 0;
    uStack_908 = 0;
    uStack_910 = 0;
    uStack_8f8 = 0;
    uStack_900 = 0;
    uStack_918 = 0;
    uStack_920 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_920,lVar11);
  }
  puVar2 = &uStack_991;
  func_0x00010852420c();
  uStack_a00 = 0xf;
  uStack_9f0 = 0x100;
  _objc_retain(pppuVar12);
  ppuStack_a08 = &PTR_DAT_110862760;
  uStack_9c8 = 0;
  uStack_9d0 = 0;
  uStack_9b8 = 0;
  uStack_9c0 = 0;
  plStack_9a8 = (long *)0x0;
  uStack_9b0 = 0;
  plStack_9a0 = (long *)0x0;
  uStack_976 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_988 = 10;
  uStack_978 = 0x100;
  ppuStack_990 = &PTR_SUB_110862700;
  uStack_940 = 0;
  uStack_948 = 0;
  plStack_930 = (long *)0x0;
  uStack_938 = 0;
  plStack_928 = (long *)0x0;
  puStack_a20 = (undefined8 *)0x0;
  puStack_a18 = (undefined8 *)0x0;
  uStack_a10 = 0;
  uStack_a24 = 0;
  puVar13 = &uStack_920;
  pppuStack_9d8 = pppuVar12;
  puStack_958 = puVar2;
  pppuStack_950 = &ppuStack_a08;
  func_0x000107c310cc(puVar13,&ppuStack_990,&puStack_a20,&uStack_a24);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_a20 != (undefined8 *)0x0) {
    puStack_a18 = puStack_a20;
    __ZdlPv();
  }
  plVar1 = plStack_928;
  ppuStack_990 = &PTR_SUB_110862700;
  plStack_928 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_930;
  plStack_930 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_a20 = &uStack_948;
  func_0x000107c27dd4(&puStack_a20);
  plVar1 = plStack_9a0;
  ppuStack_a08 = &PTR_DAT_110862760;
  plStack_9a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_9a8;
  plStack_9a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_a20 = &uStack_9c0;
  func_0x000107c27dd4(&puStack_a20);
  _objc_release(pppuStack_9d8);
  func_0x000107c27da8(&uStack_8f8);
  _objc_release(uStack_908);
  _objc_release(uStack_910);
  _objc_release(pppuVar12);
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106923178; end: 1069232af; -[SCStoriesSnapReadReceiptCoordinator _didCompleteSaveSnapReadReceiptWithStoryOwnerId:publicationId:isPrivateStorySnap:storyDedupFp:storyId:shouldFlush:] */

void FUN_106923178(undefined8 param_1,undefined8 param_2,long param_3,long param_4,int param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  func_0x00010bec9d20(param_1,param_2,param_8);
  if (param_6 != 0) {
    puVar1 = PTR_PTR_1126cf208;
    func_0x00010bf82aa0(PTR_PTR_1126cf208,param_2,param_6,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04560(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
  lVar2 = param_4;
  func_0x00010c08fa60();
  puVar1 = PTR_PTR_1126cf208;
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c08fa60();
    if (lVar2 == 0) goto LAB_106923284;
    puVar1 = PTR_PTR_1126cf208;
    lVar2 = 0;
    lVar4 = param_3;
  }
  else {
    lVar2 = param_4;
    if (param_5 == 0) {
      lVar4 = 0;
    }
    else {
      lVar3 = param_3;
      func_0x00010c08fa60();
      lVar4 = 0;
      if (lVar3 != 0) {
        lVar4 = param_3;
      }
    }
  }
  func_0x00010c25bbe0(puVar1,param_2,param_7,lVar2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04560(param_1,param_2,puVar1);
  _objc_release(puVar1);
LAB_106923284:
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069232b0; end: 1069232ff; -[SCStoriesSnapReadReceiptCoordinator _didCompleteSavePremiumReadReceiptWithStoryDedupFp:editionId:] */

void FUN_1069232b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf208;
  func_0x00010bf82aa0(PTR_PTR_1126cf208);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04560(param_1,param_2,puVar1);
  func_0x00010bec9ba0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106923300; end: 106923307; -[SCStoriesSnapReadReceiptCoordinator _syncPremiumReadReceiptsToServerShouldFlush:] */

void FUN_106923300(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c266310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_syncPremiumReadReceiptsToServerS_1126772e8);
  return;
}



/* Entry: 106923308; end: 10692330f; -[SCStoriesSnapReadReceiptCoordinator _syncSnapReadReceiptsToServerShouldFlush:] */

void FUN_106923308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c266370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_syncReadReceiptsToServerShouldFl_112677300);
  return;
}



/* Entry: 106923310; end: 106923423; -[SCStoriesSnapReadReceiptCoordinator _fetchViewHistory] */

void FUN_106923310(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfab540(uVar1);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106923424; end: 106923487;  */

void FUN_106923424(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010be15500();
  }
  else {
    func_0x00010bdfcd40();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


