/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057fb408; end: 1057fb41f;  */

undefined4 FUN_1057fb408(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 1057fb420; end: 1057fb44b;  */

undefined8 * FUN_1057fb420(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108b5190;
  func_0x0001000e30f4(param_1 + 1);
  return param_1;
}



/* Entry: 1057fb44c; end: 1057fb45f;  */

void FUN_1057fb44c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  puVar4 = (undefined8 *)*plVar3;
  puVar2 = (undefined8 *)plVar3[1];
  puVar1 = (undefined8 *)((long)puVar4 + (param_2[1] - (long)puVar2));
  puVar5 = puVar1;
  for (puVar7 = puVar4; puVar7 != puVar2; puVar7 = puVar7 + 4) {
    uVar9 = puVar7[1];
    uVar8 = *puVar7;
    puVar5[2] = puVar7[2];
    puVar5[1] = uVar9;
    *puVar5 = uVar8;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar5[3] = puVar7[3];
    puVar5 = puVar5 + 4;
  }
  for (; puVar4 != puVar2; puVar4 = puVar4 + 4) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  param_2[1] = puVar1;
  lVar6 = *plVar3;
  *plVar3 = (long)puVar1;
  plVar3[1] = lVar6;
  param_2[1] = lVar6;
  lVar6 = plVar3[1];
  plVar3[1] = param_2[2];
  param_2[2] = lVar6;
  lVar6 = plVar3[2];
  plVar3[2] = param_2[3];
  param_2[3] = lVar6;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1057fb460; end: 1057fb57f;  */

void FUN_1057fb460(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar3 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar3 + (param_2[1] - (long)puVar2));
  puVar4 = puVar1;
  for (puVar6 = puVar3; puVar6 != puVar2; puVar6 = puVar6 + 4) {
    uVar8 = puVar6[1];
    uVar7 = *puVar6;
    puVar4[2] = puVar6[2];
    puVar4[1] = uVar8;
    *puVar4 = uVar7;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    puVar4[3] = puVar6[3];
    puVar4 = puVar4 + 4;
  }
  for (; puVar3 != puVar2; puVar3 = puVar3 + 4) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  param_2[1] = puVar1;
  lVar5 = *param_1;
  *param_1 = (long)puVar1;
  param_1[1] = lVar5;
  param_2[1] = lVar5;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1057fb580; end: 1057fb64f;  */

long * FUN_1057fb580(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1057fb650; end: 1057fb653;  */

void FUN_1057fb650(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108b51c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1057fb654; end: 1057fb667;  */

void FUN_1057fb654(void)

{
  func_0x0001057fb678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1057fb668; end: 1057fb687;  */

void FUN_1057fb668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057fb670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1057fb688; end: 1057fb6af;  */

long FUN_1057fb688(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1057fb6b0; end: 1057fb76b;  */

void FUN_1057fb6b0(code *UNRECOVERED_JUMPTABLE,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001057fb6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,param_3,1);
  return;
}



/* Entry: 1057fb76c; end: 1057fb80b;  */

undefined8 FUN_1057fb76c(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [72];
  
  if ((bRam000000011381a2c8 & 1) == 0) {
    iVar1 = 0x1381a2c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1057fb80c(auStack_68);
      puVar2 = auStack_68;
      func_0x00010028f4b0();
      puRam000000011381a2c0 = puVar2;
      func_0x000100164334(auStack_68);
      ___cxa_guard_release(0x11381a2c8);
    }
  }
  return 0x11381a2c0;
}



/* Entry: 1057fb80c; end: 1057fba4f;  */

/* WARNING: Possible PIC construction at 0x0001057fb840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001057fb864: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001057fb844) */
/* WARNING: Removing unreachable block (ram,0x0001057fb868) */
/* WARNING: Removing unreachable block (ram,0x0001057fb990) */
/* WARNING: Removing unreachable block (ram,0x0001057fb9a4) */
/* WARNING: Removing unreachable block (ram,0x0001057fb9e0) */
/* WARNING: Removing unreachable block (ram,0x0001057fb9f0) */
/* WARNING: Removing unreachable block (ram,0x0001057fba00) */
/* WARNING: Removing unreachable block (ram,0x0001057fba38) */
/* WARNING: Removing unreachable block (ram,0x0001057fb9cc) */

void FUN_1057fb80c(void)

{
  undefined *puVar1;
  undefined1 auStack_170 [312];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = &UNK_10f2fcab6;
  func_0x00010002b82c(auStack_170,&UNK_10f2fcab6);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 1057fba50; end: 1057fba57;  */

void FUN_1057fba50(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c();
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 1057fba58; end: 1057fbc17; -[CTPProtobufEntityTransformerIntentToReaction intentToReactionIDMapFromProtobuf:] */

void FUN_1057fba58(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined *puStack_2e8;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1b0;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar12 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  puVar17 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  if (param_3 == (undefined1 *)0x0) {
    puVar14 = (undefined *)0x0;
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
    puVar2 = param_3;
    func_0x00010c120e00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf52a60();
    if (puVar3 != (undefined1 *)0x0) {
      lVar18 = *plStack_120;
      do {
        puVar19 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar18) {
            _objc_enumerationMutation(puVar2);
          }
          uVar16 = *(undefined8 *)(lStack_128 + (long)puVar19 * 8);
          uVar4 = uVar16;
          func_0x00010bf37280();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010bf15da0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c068280(uVar16);
          func_0x00010c0df760();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(puVar17);
          _objc_release(puVar14);
          _objc_release(uVar5);
          puVar19 = puVar19 + 1;
        } while (puVar3 != puVar19);
        puVar3 = puVar2;
        puVar12 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined1 *)0x0);
    }
    _objc_release(puVar2);
    puVar14 = puVar17;
    func_0x00010bf51e00();
    puVar2 = (undefined1 *)puVar12;
  }
  _objc_release(puVar17);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar2);
    puVar19 = puVar2;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126bea40;
    _objc_opt_class(PTR_PTR_1126bea40);
    puVar6 = puVar19;
    _objc_opt_isKindOfClass(puVar19,puVar17);
    puVar3 = puVar19;
    if (((ulong)puVar6 & 1) == 0) {
      puVar3 = (undefined1 *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar19);
    if (puVar3 == (undefined1 *)0x0) {
      puVar17 = (undefined *)0x0;
      puStack_2e8 = (undefined *)0x0;
      puStack_2d8 = (undefined *)0x0;
      puStack_2d0 = (undefined *)0x0;
      puVar14 = (undefined *)0x0;
    }
    else {
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      lStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      plStack_260 = (long *)0x0;
      puVar6 = puVar19;
      func_0x00010bf96d80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf52a60();
      puVar17 = (undefined *)0x0;
      if (puVar7 == (undefined1 *)0x0) {
        puStack_2e8 = (undefined *)0x0;
        puStack_2d8 = (undefined *)0x0;
        puStack_2d0 = (undefined *)0x0;
      }
      else {
        puStack_2e8 = (undefined *)0x0;
        puStack_2d8 = (undefined *)0x0;
        puStack_2d0 = (undefined *)0x0;
        lVar18 = *plStack_260;
        do {
          puVar15 = (undefined1 *)0x0;
          do {
            if (*plStack_260 != lVar18) {
              _objc_enumerationMutation(puVar6);
            }
            lVar13 = *(long *)(lStack_268 + (long)puVar15 * 8);
            lVar8 = lVar13;
            func_0x00010bf1b3a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar8 == 0) {
              lVar8 = lVar13;
              func_0x00010c245fc0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar8 != 0) {
                puStack_298 = &uStack_2a0;
                uStack_2a0 = 0;
                uStack_290 = 0x3032000000;
                pcStack_288 = FUN_1057fc078;
                uStack_280 = 0x1057fc088;
                uStack_278 = 0;
                lVar8 = lVar13;
                func_0x00010c245fc0(lVar13);
                _objc_retainAutoreleasedReturnValue();
                lVar10 = lVar8;
                func_0x00010c0c45e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0c1100();
                _objc_release(lVar10);
                _objc_release(lVar8);
                if (puStack_298[5] != 0) {
                  puVar11 = PTR__OBJC_CLASS___NSURL_1126ae598;
                  func_0x00010bdc3460();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c245fc0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar8 = lVar13;
                  func_0x00010c06c000();
                  _objc_release(lVar13);
                  puVar14 = puVar11;
                  puVar1 = puVar17;
                  if ((int)lVar8 == 0) {
                    puVar14 = puStack_2e8;
                    puVar1 = puVar11;
                    puStack_2e8 = puVar17;
                  }
                  puVar17 = puVar1;
                  _objc_release(puStack_2e8);
                  puStack_2e8 = puVar14;
                }
                __Block_object_dispose(&uStack_2a0,8);
                _objc_release(uStack_278);
              }
            }
            else {
              lVar8 = lVar13;
              func_0x00010bf1b3a0();
              _objc_retainAutoreleasedReturnValue();
              lVar10 = lVar8;
              func_0x00010c06c000();
              _objc_release(lVar8);
              puVar14 = PTR_PTR_1126b5938;
              _objc_alloc();
              lVar8 = lVar13;
              func_0x00010bf1b3a0(lVar13);
              _objc_retainAutoreleasedReturnValue();
              lVar9 = lVar8;
              func_0x00010bf41a00();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf1b3a0(lVar13);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c06c000();
              func_0x00010c050fa0();
              if ((int)lVar10 == 0) {
                _objc_release(puStack_2d8);
                _objc_release(lVar13);
                _objc_release(lVar9);
                _objc_release(lVar8);
                puStack_2d8 = puVar14;
              }
              else {
                _objc_release(puStack_2d0);
                _objc_release(lVar13);
                _objc_release(lVar9);
                _objc_release(lVar8);
                puStack_2d0 = puVar14;
              }
            }
            puVar15 = puVar15 + 1;
          } while (puVar7 != puVar15);
          puVar7 = puVar6;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined1 *)0x0);
      }
      _objc_release(puVar6);
      puVar14 = PTR_PTR_1126bea48;
      _objc_alloc(PTR_PTR_1126bea48);
      func_0x00010c068100(puVar19);
      func_0x00010c01e560(puVar14);
    }
    _objc_release(puVar3);
    _objc_release(puVar17);
    _objc_release(puStack_2e8);
    _objc_release(puStack_2d8);
    _objc_release(puStack_2d0);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
      ___stack_chk_fail();
      lVar18 = 8;
      __Block_object_dispose(&uStack_2a0);
      __Unwind_Resume();
      *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(lVar18 + 0x28);
      *(undefined8 *)(lVar18 + 0x28) = 0;
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1057fbc18; end: 1057fc077; +[SCReactionsFactory reactionFromCTPItem:] */

void FUN_1057fbc18(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puStack_1b8;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126bea40;
  _objc_opt_class(PTR_PTR_1126bea40);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar13);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 == 0) {
    puVar13 = (undefined *)0x0;
    puStack_1b8 = (undefined *)0x0;
    puStack_1a8 = (undefined *)0x0;
    puStack_1a0 = (undefined *)0x0;
    puVar11 = (undefined *)0x0;
  }
  else {
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uVar4 = uVar3;
    func_0x00010bf96d80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf52a60();
    puVar13 = (undefined *)0x0;
    if (uVar5 == 0) {
      puStack_1b8 = (undefined *)0x0;
      puStack_1a8 = (undefined *)0x0;
      puStack_1a0 = (undefined *)0x0;
    }
    else {
      puStack_1b8 = (undefined *)0x0;
      puStack_1a8 = (undefined *)0x0;
      puStack_1a0 = (undefined *)0x0;
      lVar14 = *plStack_130;
      do {
        uVar12 = 0;
        do {
          if (*plStack_130 != lVar14) {
            _objc_enumerationMutation(uVar4);
          }
          lVar10 = *(long *)(lStack_138 + uVar12 * 8);
          lVar6 = lVar10;
          func_0x00010bf1b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar6 == 0) {
            lVar6 = lVar10;
            func_0x00010c245fc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar6 != 0) {
              puStack_168 = &uStack_170;
              uStack_170 = 0;
              uStack_160 = 0x3032000000;
              pcStack_158 = FUN_1057fc078;
              uStack_150 = 0x1057fc088;
              uStack_148 = 0;
              lVar6 = lVar10;
              func_0x00010c245fc0(lVar10);
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar6;
              func_0x00010c0c45e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0c1100();
              _objc_release(lVar8);
              _objc_release(lVar6);
              if (puStack_168[5] != 0) {
                puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
                func_0x00010bdc3460();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c245fc0();
                _objc_retainAutoreleasedReturnValue();
                lVar6 = lVar10;
                func_0x00010c06c000();
                _objc_release(lVar10);
                puVar11 = puVar9;
                puVar2 = puVar13;
                if ((int)lVar6 == 0) {
                  puVar11 = puStack_1b8;
                  puVar2 = puVar9;
                  puStack_1b8 = puVar13;
                }
                puVar13 = puVar2;
                _objc_release(puStack_1b8);
                puStack_1b8 = puVar11;
              }
              __Block_object_dispose(&uStack_170,8);
              _objc_release(uStack_148);
            }
          }
          else {
            lVar6 = lVar10;
            func_0x00010bf1b3a0();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar6;
            func_0x00010c06c000();
            _objc_release(lVar6);
            puVar11 = PTR_PTR_1126b5938;
            _objc_alloc();
            lVar6 = lVar10;
            func_0x00010bf1b3a0(lVar10);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010bf41a00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf1b3a0(lVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c06c000();
            func_0x00010c050fa0();
            if ((int)lVar8 == 0) {
              _objc_release(puStack_1a8);
              _objc_release(lVar10);
              _objc_release(lVar7);
              _objc_release(lVar6);
              puStack_1a8 = puVar11;
            }
            else {
              _objc_release(puStack_1a0);
              _objc_release(lVar10);
              _objc_release(lVar7);
              _objc_release(lVar6);
              puStack_1a0 = puVar11;
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar5 != uVar12);
        uVar5 = uVar4;
        func_0x00010bf52a60();
      } while (uVar5 != 0);
    }
    _objc_release(uVar4);
    puVar11 = PTR_PTR_1126bea48;
    _objc_alloc(PTR_PTR_1126bea48);
    func_0x00010c068100(uVar3);
    func_0x00010c01e560(puVar11);
  }
  _objc_release(uVar1);
  _objc_release(puVar13);
  _objc_release(puStack_1b8);
  _objc_release(puStack_1a8);
  _objc_release(puStack_1a0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
  lVar14 = 8;
  __Block_object_dispose(&uStack_170);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar14 + 0x28);
  *(undefined8 *)(lVar14 + 0x28) = 0;
  return;
}



/* Entry: 1057fc078; end: 1057fc08f;  */

void FUN_1057fc078(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1057fc090; end: 1057fc0c7;  */

void FUN_1057fc090(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057fc0c8; end: 1057fc0cb;  */

void FUN_1057fc0c8(void)

{
  return;
}



/* Entry: 1057fc0cc; end: 1057fc13f; -[SCReactionsLogger initWithGrapheneRegistry:] */

undefined1 * FUN_1057fc0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea658;
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



/* Entry: 1057fc140; end: 1057fc22b; -[SCReactionsLogger logInterfaceRequestForType:] */

void FUN_1057fc140(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126bea50;
  func_0x00010c120de0(PTR_PTR_1126bea50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e04658,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf5cfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1057fc22c; end: 1057fc383; -[SCReactionsLogger logRequestStart:isRetry:] */

void FUN_1057fc22c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126bea50;
  func_0x00010c120f40(PTR_PTR_1126bea50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e04658,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110e046b8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf5cfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1057fc384; end: 1057fc4e3; -[SCReactionsLogger logRequestLatency:type:isRetry:] */

void FUN_1057fc384(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126bea50;
  func_0x00010c120f60(PTR_PTR_1126bea50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e04658,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110e046b8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf5cfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1057fc4e4; end: 1057fc69f; -[SCReactionsLogger logRequestSuccess:isRetry:numIntentsReturned:] */

void FUN_1057fc4e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126bea50;
  func_0x00010c120e40(PTR_PTR_1126bea50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e04658,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110e046b8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e046d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf5cfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1057fc6a0; end: 1057fc78b; -[SCReactionsLogger logRequestFailure:] */

void FUN_1057fc6a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126bea50;
  func_0x00010c120e20(PTR_PTR_1126bea50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e04658,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf5cfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1057fc78c; end: 1057fc947; -[SCReactionsLogger logIncompleteMap:presentElements:type:] */

void FUN_1057fc78c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126bea50;
  func_0x00010c120f00(PTR_PTR_1126bea50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e04658,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110e04678,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e04698,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf5cfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1057fc948; end: 1057fca9f; -[SCReactionsLogger logIntentFailure:isRetry:] */

void FUN_1057fc948(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126bea50;
  func_0x00010c068180(PTR_PTR_1126bea50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e046b8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110e046d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf5cfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1057fcaa0; end: 1057fcbf7; -[SCReactionsLogger logIntentItemNotFound:isRetry:] */

void FUN_1057fcaa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126bea50;
  func_0x00010c0681a0(PTR_PTR_1126bea50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e046b8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110e046d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf5cfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1057fcbf8; end: 1057fcc03; -[SCReactionsLogger .cxx_destruct] */

void FUN_1057fcbf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057fcc04; end: 1057fcd0f; -[SCReactionsProviderImpl initWithItemsRepository:circumstanceEngine:grapheneRegistry:persistenceServices:] */

undefined1 *
FUN_1057fcc04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ea660;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bea58;
    _objc_alloc();
    func_0x00010c0184a0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057fcd10; end: 1057fcd3f; -[SCReactionsProviderImpl reactions] */

void FUN_1057fcd10(long param_1,undefined8 param_2)

{
  func_0x00010c0a8d00(*(undefined8 *)(param_1 + 0x20),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010be861f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reactionsWithRetryCount__11257f218,0);
  return;
}



/* Entry: 1057fcd40; end: 1057fcda7; -[SCReactionsProviderImpl reactionsForIntents:] */

void FUN_1057fcd40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c0a8d00(uVar1,param_2,1);
  func_0x00010be861c0(param_1,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1057fcda8; end: 1057fcf2f; -[SCReactionsProviderImpl _reactionsWithRetryCount:] */

void FUN_1057fcda8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  long lStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae320(*(undefined8 *)(param_1 + 0x20));
  lVar2 = param_1;
  func_0x00010bddcfa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be45c20(param_1);
  uVar4 = uVar3;
  func_0x00010c0850a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_70,auStack_58);
  lStack_68 = param_3;
  uStack_60 = param_3 != 0;
  _objc_retain(puVar1);
  uVar3 = uVar4;
  func_0x00010bfb2660(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1057fcf30; end: 1057fd0b7;  */

void FUN_1057fcf30(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1057fd0b8;
  uStack_70 = 0x1057fd0c8;
  uStack_68 = 0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  func_0x00010c0c0800(param_2);
  uVar2 = puStack_88[5];
  _objc_retain(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1057fd0b8; end: 1057fd0cf;  */

void FUN_1057fd0b8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1057fd0d0; end: 1057fd483;  */

void FUN_1057fd0d0(long param_1,long param_2)

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
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain(param_2);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  if (lVar2 == 0) {
    _objc_release(param_2);
LAB_1057fd310:
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c120ee0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(puVar10);
    func_0x00010c0ae360(uVar13);
    _objc_release(uVar13);
    puVar5 = PTR_PTR_1126ae6b8;
    puVar12 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar11 = 0;
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(param_2);
        }
        lVar3 = *(long *)(lVar9 * 8);
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar4 != 0) {
          lVar14 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar3);
            }
            puVar5 = PTR_PTR_1126bea60;
            func_0x00010c120b20();
            _objc_retainAutoreleasedReturnValue();
            if (puVar5 == (undefined *)0x0) {
              lVar11 = lVar11 + 1;
            }
            else {
              func_0x00010befa120(puVar10);
            }
            _objc_release(puVar5);
            lVar14 = lVar14 + 1;
          } while (lVar4 != lVar14);
          lVar4 = lVar3;
          func_0x00010bf52a60();
        }
        _objc_release(lVar3);
        lVar9 = lVar9 + 1;
      } while (lVar9 != lVar2);
      lVar2 = param_2;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    _objc_release(param_2);
    if (lVar11 == 0) goto LAB_1057fd310;
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf529e0(puVar10);
    func_0x00010be54c80(uVar13);
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    if (*(long *)(param_1 + 0x38) == 0) {
      func_0x00010bde0b60(uVar13);
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010be861e0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      puVar12 = *(undefined **)(lVar8 + 0x28);
      *(undefined8 *)(lVar8 + 0x28) = uVar13;
      goto LAB_1057fd39c;
    }
    func_0x00010c120ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ae220();
    _objc_release(uVar13);
    puVar5 = PTR_PTR_1126ae6b8;
    puVar12 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar13 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar5;
  _objc_release(uVar13);
LAB_1057fd39c:
  _objc_release(puVar12);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar5);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c120ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae260();
  _objc_release(uVar13);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar6);
  puVar10 = PTR_PTR_1126ae6b8;
  puVar5 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_2 + 0x30) + 8);
  uVar13 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar10;
  _objc_release(uVar13);
  _objc_release(puVar5);
  puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar10);
  uVar13 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c120ee0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae260();
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_2 + 0x28);
  if (*(long *)(param_2 + 0x38) == 0) {
    func_0x00010bde0b60(uVar13);
    uVar13 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010be861e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(*(long *)(param_2 + 0x30) + 8);
    puVar10 = *(undefined **)(lVar8 + 0x28);
    *(undefined8 *)(lVar8 + 0x28) = uVar13;
  }
  else {
    func_0x00010c120ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ae220();
    _objc_release(uVar13);
    puVar5 = PTR_PTR_1126ae6b8;
    puVar10 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(*(long *)(param_2 + 0x30) + 8);
    uVar13 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined **)(lVar8 + 0x28) = puVar5;
    _objc_release(uVar13);
  }
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 1057fd484; end: 1057fd62b;  */

void FUN_1057fd484(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  puVar4 = PTR_PTR_1126ae6b8;
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar4;
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c120ee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae260();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x38) == 0) {
    func_0x00010bde0b60(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010be861e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    puVar4 = *(undefined **)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar2;
  }
  else {
    func_0x00010c120ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ae220();
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126ae6b8;
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
    _objc_release(uVar2);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057fd62c; end: 1057fd813; -[SCReactionsProviderImpl _reactionsForIntents:retryCount:] */

void FUN_1057fd62c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae320(*(undefined8 *)(param_1 + 0x20));
  lVar2 = param_1;
  func_0x00010bddcfa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdeecc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be45c20(param_1);
  uVar5 = uVar4;
  func_0x00010c0850a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_3);
  _objc_retain(lVar3);
  lStack_78 = param_4;
  uStack_70 = param_4 != 0;
  _objc_retain(puVar1);
  uVar4 = uVar5;
  func_0x00010bfb2660(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1057fd814; end: 1057fd9db;  */

void FUN_1057fd814(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1057fd0b8;
  uStack_70 = 0x1057fd0c8;
  uStack_68 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar7);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0c0800(param_2);
  uVar3 = puStack_88[5];
  _objc_retain(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1057fd9dc; end: 1057fdf63;  */

void FUN_1057fd9dc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_2e0;
  long lStack_2c8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain(param_2);
  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  _objc_retain(param_2);
  lVar8 = param_2;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(param_2);
      }
      lVar2 = *(long *)(lVar15 * 8);
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar2;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar14 != 0) {
        lVar13 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar2);
          }
          uVar11 = *(undefined8 *)(lVar13 * 8);
          func_0x00010c0844e0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(puVar10);
          _objc_release(uVar11);
          lVar13 = lVar13 + 1;
        } while (lVar14 != lVar13);
        lVar14 = lVar2;
        func_0x00010bf52a60();
      }
      _objc_release(lVar2);
      lVar15 = lVar15 + 1;
    } while (lVar15 != lVar8);
    lVar8 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar12 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar12);
  lStack_2c8 = lVar12;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  if (lStack_2c8 == 0) {
    _objc_release(lVar12);
LAB_1057fdde4:
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c120ee0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0ae360(uVar11);
    _objc_release(uVar11);
    puVar4 = PTR_PTR_1126ae6b8;
    puVar9 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lStack_2e0 = 0;
    do {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar12);
        }
        uVar11 = *(undefined8 *)(lVar15 * 8);
        func_0x00010c282760();
        lVar14 = *(long *)(param_1 + 0x28);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        if (lVar14 != 0) {
          puVar4 = puVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR_PTR_1126bea60;
          func_0x00010c120b20();
          _objc_retainAutoreleasedReturnValue();
          if (puVar9 == (undefined *)0x0) {
            lStack_2e0 = lStack_2e0 + 1;
            puVar5 = *(undefined **)(param_1 + 0x30);
            func_0x00010c120ee0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067ec0(uVar11);
            if (puVar4 == (undefined *)0x0) {
              func_0x00010c0a8c00(puVar5);
            }
            else {
              func_0x00010c0a8be0();
            }
          }
          else {
            puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0560(puVar3);
          }
          _objc_release(puVar5);
          _objc_release(puVar9);
          _objc_release(puVar4);
        }
        _objc_release(lVar14);
        lVar15 = lVar15 + 1;
      } while (lStack_2c8 != lVar15);
      lStack_2c8 = lVar12;
      func_0x00010bf52a60();
    } while (lStack_2c8 != 0);
    _objc_release(lVar12);
    if (lStack_2e0 == 0) goto LAB_1057fdde4;
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be54c80(uVar11);
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    if (*(long *)(param_1 + 0x48) == 0) {
      func_0x00010bde0b60(uVar11);
      uVar11 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010be861c0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      puVar9 = *(undefined **)(lVar8 + 0x28);
      *(undefined8 *)(lVar8 + 0x28) = uVar11;
      goto LAB_1057fde70;
    }
    func_0x00010c120ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ae220();
    _objc_release(uVar11);
    puVar4 = PTR_PTR_1126ae6b8;
    puVar9 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar11 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar4;
  _objc_release(uVar11);
LAB_1057fde70:
  _objc_release(puVar9);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar4);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c120ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae260();
  _objc_release(uVar11);
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar6);
  puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar10);
  uVar11 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c120ee0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae260();
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_2 + 0x28);
  if (*(long *)(param_2 + 0x40) == 0) {
    func_0x00010bde0b60(uVar11);
    uVar11 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010be861c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    puVar10 = *(undefined **)(lVar8 + 0x28);
    *(undefined8 *)(lVar8 + 0x28) = uVar11;
  }
  else {
    func_0x00010c120ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ae220();
    _objc_release(uVar11);
    puVar3 = PTR_PTR_1126ae6b8;
    puVar10 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    uVar11 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined **)(lVar8 + 0x28) = puVar3;
    _objc_release(uVar11);
  }
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 1057fdf64; end: 1057fe0b3;  */

void FUN_1057fdf64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c120ee0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae260();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x40) == 0) {
    func_0x00010bde0b60(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010be861c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    puVar4 = *(undefined **)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar1;
  }
  else {
    func_0x00010c120ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ae220();
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126ae6b8;
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar1 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar2;
    _objc_release(uVar1);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057fe0b4; end: 1057fe0ef; -[SCReactionsProviderImpl _clearPersistenceLayer] */

void FUN_1057fe0b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6b420();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057fe0f0; end: 1057fe13f; -[SCReactionsProviderImpl _logIncompleteItems:presentItems:requestType:isRetry:] */

void FUN_1057fe0f0(undefined8 param_1)

{
  func_0x00010c120ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a88e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057fe140; end: 1057fe147; -[SCReactionsProviderImpl _itemFetchStrategy] */

undefined8 FUN_1057fe140(void)

{
  return 1;
}



/* Entry: 1057fe148; end: 1057fe1eb; -[SCReactionsProviderImpl _chatReactionsFeed] */

void FUN_1057fe148(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126be980;
  func_0x00010bf459e0(PTR_PTR_1126be980,param_2,&PTR____CFConstantStringClassReference_110e04718,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0cb0;
  _objc_alloc(PTR_PTR_1126b0cb0);
  func_0x00010c0559c0();
  puVar3 = PTR_PTR_1126be988;
  _objc_alloc(PTR_PTR_1126be988);
  func_0x00010c0124e0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1057fe1ec; end: 1057fe273; -[SCReactionsProviderImpl _createIntentionsMap] */

void FUN_1057fe1ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1057fe274;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c0840 != -1) {
    func_0x00010002a2fc(0x1136c0840,&puStack_48);
  }
  uVar1 = uRam00000001136c0848;
  _objc_retain(uRam00000001136c0848);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057fe274; end: 1057fe393;  */

void FUN_1057fe274(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  uVar2 = puRam00000001136c0848;
  puRam00000001136c0848 = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c1195e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e04738,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uStack_48 = 0;
  puVar4 = PTR_PTR_1126bea68;
  func_0x00010c0f40e0(PTR_PTR_1126bea68,param_2,uVar3,&uStack_48);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uStack_48;
  _objc_retain(uStack_48);
  puVar5 = PTR_PTR_1126bea70;
  _objc_alloc_init(PTR_PTR_1126bea70);
  puVar1 = puRam00000001136c0848;
  puVar6 = puVar5;
  func_0x00010c068260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1,param_2,puVar6);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 1057fe394; end: 1057fe39b; -[SCReactionsProviderImpl reactionsLogger] */

undefined8 FUN_1057fe394(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1057fe39c; end: 1057fe3cb; -[SCReactionsProviderImpl setReactionsLogger:] */

void FUN_1057fe39c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057fe3cc; end: 1057fe413; -[SCReactionsProviderImpl .cxx_destruct] */

void FUN_1057fe3cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057fe414; end: 1057fe5cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057fe414(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126bea78;
  _objc_alloc(PTR_PTR_1126bea78);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = lVar2 + _DAT_11272a08c;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar3;
  func_0x00010c085260();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar6 = 0;
  if (lVar5 != 0) {
    lVar6 = lVar5 + _DAT_11272a094;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar8 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = lVar8 + _DAT_11272a098;
    _objc_loadWeakRetained(lVar12);
  }
  lVar9 = lVar12;
  func_0x00010bfcdfa0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11272a090;
    _objc_loadWeakRetained(lVar11);
  }
  lVar10 = lVar11;
  func_0x00010c085220(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020600(puVar1,param_2,lVar4,lVar7,lVar9,lVar10);
  _objc_release(lVar10);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar12);
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



/* Entry: 1057fe5d0; end: 1057fe63b; -[SCReactionsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057fe5d0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a098);
  _objc_destroyWeak(param_1 + _DAT_11272a094);
  _objc_destroyWeak(param_1 + _DAT_11272a090);
  _objc_destroyWeak(param_1 + _DAT_11272a08c);
  _objc_destroyWeak(param_1 + _DAT_11272a088);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272a09c,0);
  return;
}



/* Entry: 1057fe63c; end: 1057fe667; +[SCGrapheneCtReactionsMetric reactionsRequestCount] */

void FUN_1057fe63c(void)

{
  _objc_alloc(PTR_PTR_1126bea50);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057fe668; end: 1057fe693; +[SCGrapheneCtReactionsMetric reactionsResponseLatency] */

void FUN_1057fe668(void)

{
  _objc_alloc(PTR_PTR_1126bea50);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057fe694; end: 1057fe6bf; +[SCGrapheneCtReactionsMetric reactionsFetchFailure] */

void FUN_1057fe694(void)

{
  _objc_alloc(PTR_PTR_1126bea50);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057fe6c0; end: 1057fe6eb; +[SCGrapheneCtReactionsMetric reactionsFetchSuccess] */

void FUN_1057fe6c0(void)

{
  _objc_alloc(PTR_PTR_1126bea50);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057fe6ec; end: 1057fe717; +[SCGrapheneCtReactionsMetric reactionsFetchPartialSuccess] */

void FUN_1057fe6ec(void)

{
  _objc_alloc(PTR_PTR_1126bea50);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057fe718; end: 1057fe743; +[SCGrapheneCtReactionsMetric reactionsReturnedCount] */

void FUN_1057fe718(void)

{
  _objc_alloc(PTR_PTR_1126bea50);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057fe744; end: 1057fe76f; +[SCGrapheneCtReactionsMetric reactionsMapIncomplete] */

void FUN_1057fe744(void)

{
  _objc_alloc(PTR_PTR_1126bea50);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057fe770; end: 1057fe79b; +[SCGrapheneCtReactionsMetric intentItemNotFound] */

void FUN_1057fe770(void)

{
  _objc_alloc(PTR_PTR_1126bea50);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057fe79c; end: 1057fe7c7; +[SCGrapheneCtReactionsMetric intentItemMapFailed] */

void FUN_1057fe79c(void)

{
  _objc_alloc(PTR_PTR_1126bea50);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057fe7c8; end: 1057fe7f3; +[SCGrapheneCtReactionsMetric reactionsApiCount] */

void FUN_1057fe7c8(void)

{
  _objc_alloc(PTR_PTR_1126bea50);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057fe7f4; end: 1057fe893; -[SCGrapheneCtReactionsMetric description] */

void FUN_1057fe7f4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e04758;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e04758,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ea668;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1057fe894; end: 1057fea2f; -[SCGrapheneRegistry ctReactionsGraphene] */

void FUN_1057fe894(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1057fe91c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c0858 != -1) {
    func_0x00010002a2fc(0x1136c0858,&puStack_48);
  }
  uVar1 = uRam00000001136c0850;
  _objc_retain(uRam00000001136c0850);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057fea30; end: 1057fea97; +[SCCTPCTIntentToReaction descriptor] */

void FUN_1057fea30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0860 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6d190,
                        &PTR____CFConstantStringClassReference_110e048b8,&PTR_DAT_113102178,
                        &PTR_DAT_113102190,1,0x10,0x1c);
    puRam00000001136c0860 = puVar1;
  }
  return;
}



/* Entry: 1057fea98; end: 1057feb13; +[SCCTPCTIntentToReaction_IntentReaction descriptor] */

undefined * FUN_1057fea98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0868 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6d1e0,
                        &PTR____CFConstantStringClassReference_110e048d8,&PTR_DAT_113102178,
                        &PTR_DAT_1131021b0,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c0868 = puVar1;
  }
  return puRam00000001136c0868;
}



/* Entry: 1057feb14; end: 1057fec4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057feb14(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126bea88;
    _objc_alloc(PTR_PTR_1126bea88);
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar2 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar2 + _DAT_11272a0a8;
      _objc_loadWeakRetained(lVar7);
    }
    lVar3 = lVar7;
    func_0x00010c0c64e0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar4 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar4 + _DAT_11272a0ac;
      _objc_loadWeakRetained(lVar8);
    }
    lVar5 = lVar8;
    func_0x00010c26b280(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02a920(puVar6,param_2,lVar3,lVar5,*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar5);
    _objc_release(lVar8);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar7);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1057fec4c; end: 1057fec67;  */

void FUN_1057fec4c(void)

{
  _objc_alloc_init(PTR_PTR_1126bea90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057fec68; end: 1057fecb7; -[SCVoiceoverServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057fec68(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a0ac);
  _objc_destroyWeak(param_1 + _DAT_11272a0a8);
  _objc_destroyWeak(param_1 + _DAT_11272a0a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a0a0);
  return;
}



/* Entry: 1057fecb8; end: 1057fed8f; -[SCVoiceoverGenericAssetFactory genericAssetDataForVoiceoverAudio:] */

void FUN_1057fecb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar2 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1057fed90;
    puStack_40 = &UNK_110850738;
    puStack_38 = puVar1;
    _objc_retain();
    func_0x000107e455ec(param_3,&puStack_58);
    puVar2 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_38);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057fed90; end: 1057fed9b;  */

void FUN_1057fed90(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1057fed9c; end: 1057fee83; -[SCVoiceoverMediaLoader initWithMemoriesMediaRetriever:temporaryFileWriter:circumstanceEngine:] */

undefined1 *
FUN_1057fed9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ea670;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057fee84; end: 1057fef9b; -[SCVoiceoverMediaLoader requestDecryptedVoiceoverAudioForSnapID:queue:completion:] */

void FUN_1057fee84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 != 0) {
    if (lVar1 == 0) {
      (**(code **)(param_5 + 0x10))(param_5,0);
    }
    else {
      func_0x00010bdcfd20(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c13eaa0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(param_1);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057fef9c; end: 1057ff073; -[SCVoiceoverMediaLoader requestVoiceoverAudioWithDecryptedData:completionQueue:completion:] */

void FUN_1057fef9c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_1057ff074;
      puStack_40 = &UNK_110849530;
      _objc_retain(param_5);
      lStack_38 = param_5;
      func_0x00010007380c(param_4,&puStack_58);
      _objc_release(lStack_38);
    }
    func_0x00010beea400(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057ff074; end: 1057ff083;  */

void FUN_1057ff074(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057ff080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1057ff084; end: 1057ff163; -[SCVoiceoverMediaLoader _asyncEncryptedContentDataResultHandlerWithCompletion:onQueue:] */

void FUN_1057ff084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1057ff164;
  puStack_58 = &UNK_1108916c0;
  uStack_50 = param_4;
  uStack_48 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_70);
  _objc_destroyWeak(auStack_40);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1057ff164; end: 1057ff2c7;  */

void FUN_1057ff164(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (*(long *)(param_1 + 0x28) != 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1057ff2c8;
    puStack_70 = &UNK_1108b53b8;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uStack_68 = uVar4;
    _objc_retain(uVar5);
    uStack_60 = uVar5;
    _objc_copyWeak(auStack_58,param_1 + 0x30);
    ppuVar2 = &puStack_88;
    _objc_retainBlock(ppuVar2);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1057ff3d0;
    puStack_a0 = &UNK_1108538b0;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uStack_98 = uVar5;
    _objc_retain(uVar4);
    ppuVar3 = &puStack_b8;
    uStack_90 = uVar4;
    _objc_retainBlock(ppuVar3);
    func_0x00010c0c0800(param_2);
    _objc_release(ppuVar3);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1057ff2c8; end: 1057ff3bf;  */

void FUN_1057ff2c8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c13ca20();
  if (lVar2 == 0) {
    lVar2 = param_2;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      param_1 = param_1 + 0x30;
      _objc_loadWeakRetained(param_1);
      lVar2 = param_2;
      func_0x00010bf63640(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beea400(param_1);
      _objc_release(lVar2);
      goto LAB_1057ff3a0;
    }
  }
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1057ff3c0;
  puStack_40 = &UNK_110849530;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar2);
  lStack_38 = lVar2;
  func_0x00010007380c(uVar1,&puStack_58);
  param_1 = lStack_38;
LAB_1057ff3a0:
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1057ff3c0; end: 1057ff3cf;  */

void FUN_1057ff3c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057ff3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1057ff3d0; end: 1057ff43f;  */

void FUN_1057ff3d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1057ff440;
  puStack_30 = &UNK_110849530;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  func_0x00010007380c(uVar1,&puStack_48);
  _objc_release(uStack_28);
  return;
}



/* Entry: 1057ff440; end: 1057ff44f;  */

void FUN_1057ff440(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057ff44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1057ff450; end: 1057ff59b; -[SCVoiceoverMediaLoader _voiceoverAudioWithVoiceoverAssetData:completionQueue:completion:] */

void FUN_1057ff450(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1057ff59c;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_5);
    puStack_48 = param_5;
    func_0x00010007380c(param_4,&puStack_68);
    puVar1 = puStack_48;
  }
  else {
    puVar1 = PTR_PTR_1126beaa0;
    _objc_alloc();
    func_0x00010c008360();
    if (puVar1 == (undefined *)0x0) {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      uStack_80 = 0x1057ff5ac;
      puStack_78 = &UNK_110849530;
      _objc_retain(param_5);
      puStack_70 = param_5;
      func_0x00010007380c(param_4,&puStack_90);
      _objc_release(puStack_70);
    }
    else {
      func_0x00010beea3e0(param_1);
    }
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057ff59c; end: 1057ff5bb;  */

void FUN_1057ff59c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057ff5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1057ff5bc; end: 1057ff78b; -[SCVoiceoverMediaLoader _voiceoverAudioWithVoiceoverAsset:completionQueue:completion:] */

void FUN_1057ff5bc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 == 0) goto LAB_1057ff758;
  if (param_3 == 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1057ff78c;
    puStack_60 = &UNK_110849530;
    _objc_retain(param_5);
    lStack_58 = param_5;
    func_0x00010007380c(param_4,&puStack_78);
    lVar2 = lStack_58;
  }
  else {
    lVar2 = param_3;
    func_0x00010bfbb740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if ((lVar3 == 0) && (lVar3 = param_3, func_0x00010bf0fae0(), lVar3 != 0)) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
      func_0x00010bf1f440();
      if (iVar1 == 0) goto LAB_1057ff624;
      lVar3 = param_3;
      func_0x00010bf0fac0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf51e00();
      func_0x00010bec2c00(param_1);
      _objc_release(lVar4);
    }
    else {
LAB_1057ff624:
      lVar3 = lVar2;
      func_0x00010c08fa60();
      if (lVar3 != 0) {
        func_0x00010bde3540(param_1);
        goto LAB_1057ff750;
      }
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      uStack_90 = 0x1057ff79c;
      puStack_88 = &UNK_110849530;
      _objc_retain(param_5);
      lStack_80 = param_5;
      func_0x00010007380c(param_4,&puStack_a0);
      lVar3 = lStack_80;
    }
    _objc_release(lVar3);
  }
LAB_1057ff750:
  _objc_release(lVar2);
LAB_1057ff758:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057ff78c; end: 1057ff7ab;  */

void FUN_1057ff78c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057ff798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1057ff7ac; end: 1057ffc23; -[SCVoiceoverMediaLoader _stitchAudioSegments:fromAsset:completionQueue:completion:] */

void FUN_1057ff7ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  ppuVar11 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  if (lVar4 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar10 = 0;
      lVar6 = lVar4;
      do {
        lVar5 = lVar6;
        if (*plStack_120 != lVar12) {
          lVar5 = param_3;
          _objc_enumerationMutation(param_3);
        }
        func_0x0001058000a4();
        _objc_retainAutoreleasedReturnValue();
        lStack_138 = 0;
        lVar6 = lVar2;
        func_0x00010c2bda80();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lStack_138;
        _objc_release(lVar5);
        if ((lVar1 == 0) && (lVar6 != 0)) {
          puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
          _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
          func_0x00010bfee820();
          puVar8 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
          _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
          func_0x00010c057ae0();
          func_0x00010befa120(puVar3);
          _objc_release(puVar8);
          _objc_release(puVar7);
        }
        _objc_release();
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = param_3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  puVar7 = puVar3;
  func_0x00010bf529e0();
  if (puVar7 == (undefined *)0x0) {
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_1057ffc24;
    puStack_148 = &UNK_110849530;
    _objc_retain(param_6);
    puStack_140 = param_6;
    func_0x00010007380c(param_5,&puStack_160);
    puVar7 = puStack_140;
  }
  else {
    puVar7 = puVar3;
    FUN_10580011c(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x0001058000a4();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfacf80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc();
    func_0x00010bfee820();
    puVar9 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
    _objc_alloc();
    func_0x00010bff4280();
    func_0x00010c1d6fc0();
    func_0x00010c1d7200(puVar9);
    func_0x00010c200aa0(puVar9);
    _objc_initWeak(auStack_168,param_1);
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    pcStack_1b0 = FUN_1057ffc34;
    puStack_1a8 = &UNK_1108b53e8;
    puStack_1a0 = puVar9;
    puStack_198 = puVar8;
    _objc_retain(param_3);
    lStack_190 = param_3;
    _objc_retain(param_5);
    uStack_188 = param_5;
    _objc_retain(param_6);
    ppuVar11 = &puStack_1c0;
    puStack_178 = param_6;
    _objc_copyWeak(auStack_170,auStack_168);
    _objc_retain(param_4);
    uStack_180 = param_4;
    func_0x00010bf9cee0(puVar9);
    _objc_release(uStack_180);
    _objc_destroyWeak(auStack_170);
    _objc_release(puStack_178);
    _objc_release(uStack_188);
    _objc_release(lStack_190);
    _objc_destroyWeak(auStack_168);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(lVar4);
  }
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar11 + 10);
  _objc_destroyWeak(auStack_168);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x0001057ffc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0);
  return;
}



/* Entry: 1057ffc24; end: 1057ffc33;  */

void FUN_1057ffc24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057ffc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1057ffc34; end: 1057ffd67;  */

void FUN_1057ffc34(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c252d60();
  if (lVar1 == 3) {
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c08fa60();
    if (puVar2 == (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_1057ffd68;
      puStack_40 = &UNK_110849530;
      lVar1 = *(long *)(param_1 + 0x48);
      _objc_retain(lVar1);
      lStack_38 = lVar1;
      func_0x00010007380c(uVar4,&puStack_58);
      param_1 = lStack_38;
    }
    else {
      param_1 = param_1 + 0x50;
      _objc_loadWeakRetained(param_1);
      func_0x00010bde3540();
    }
    _objc_release(param_1);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x1057ffd78;
    puStack_68 = &UNK_110849530;
    puVar3 = *(undefined **)(param_1 + 0x48);
    _objc_retain(puVar3);
    puStack_60 = puVar3;
    func_0x00010007380c(uVar4,&puStack_80);
    puVar3 = puStack_60;
  }
  _objc_release(puVar3);
  return;
}



/* Entry: 1057ffd68; end: 1057ffd87;  */

void FUN_1057ffd68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057ffd74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1057ffd88; end: 10580003b; -[SCVoiceoverMediaLoader _completeWithAudioData:fromAsset:completionQueue:completion:] */

void FUN_1057ffd88(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined *param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001058000a4();
  _objc_retainAutoreleasedReturnValue();
  lStack_78 = 0;
  uVar4 = uVar2;
  func_0x00010c2bda80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_78;
  _objc_retain(lStack_78);
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
  func_0x00010bfee820();
  if (lVar1 == 0) {
    puVar6 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    func_0x00010c057ae0();
    puVar7 = param_4;
    func_0x00010bf0fae0();
    if (puVar7 == (undefined *)0x0) {
      puVar7 = param_3;
      func_0x00010bf51e00();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar7;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar7 = param_4;
      func_0x00010bf0fac0(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf51e00();
    }
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126b0d70;
    _objc_alloc();
    func_0x00010c043aa0();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x10580004c;
    puStack_b8 = &UNK_11084aaa8;
    _objc_retain(param_6);
    puStack_b0 = puVar7;
    puStack_a8 = param_6;
    func_0x00010007380c(param_5,&puStack_d0);
    _objc_release(puStack_a8);
    _objc_release(puVar7);
    _objc_release(puVar8);
  }
  else {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10580003c;
    puStack_88 = &UNK_110849530;
    _objc_retain(param_6);
    puStack_80 = param_6;
    func_0x00010007380c(param_5,&puStack_a0);
    puVar6 = puStack_80;
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000105800048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0);
  return;
}



/* Entry: 10580003c; end: 10580005b;  */

void FUN_10580003c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105800048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10580005c; end: 10580011b; -[SCVoiceoverMediaLoader .cxx_destruct] */

void FUN_10580005c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10580011c; end: 105800397;  */

void FUN_10580011c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010bef9f20();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar11 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar10 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_110 = uVar11;
  uStack_108 = uVar12;
  uStack_100 = uVar10;
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_140;
    do {
      lVar7 = 0;
      do {
        if (*plStack_140 != lVar8) {
          _objc_enumerationMutation(param_1);
        }
        lVar9 = *(long *)(lStack_148 + lVar7 * 8);
        lVar4 = lVar9;
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf529e0();
        if (lVar5 != 0) {
          if (lVar9 == 0) {
            uStack_1e0 = 0;
            uStack_1d8 = 0;
            uStack_1d0 = 0;
          }
          else {
            func_0x00010bf8b160(&uStack_1e0,lVar9);
          }
          uStack_1a0 = uVar11;
          uStack_198 = uVar12;
          uStack_190 = uVar10;
          _CMTimeRangeMake(&uStack_180,&uStack_1a0,&uStack_1e0);
          lVar6 = lVar4;
          func_0x00010c0dfd40(lVar4);
          _objc_retainAutoreleasedReturnValue();
          lStack_1a8 = 0;
          uStack_1d8 = uStack_178;
          uStack_1e0 = uStack_180;
          uStack_1c8 = uStack_168;
          uStack_1d0 = uStack_170;
          uStack_1b8 = uStack_158;
          uStack_1c0 = uStack_160;
          uStack_198 = uStack_108;
          uStack_1a0 = uStack_110;
          uStack_190 = uStack_100;
          func_0x00010c067160(puVar2);
          lVar5 = lStack_1a8;
          _objc_retain(lStack_1a8);
          _objc_release(lVar6);
          if (lVar5 == 0) {
            if (lVar9 == 0) {
              uStack_1e0 = 0;
              uStack_1d8 = 0;
              uStack_1d0 = 0;
            }
            else {
              func_0x00010bf8b160(&uStack_1e0,lVar9);
            }
            uStack_198 = uStack_108;
            uStack_1a0 = uStack_110;
            uStack_190 = uStack_100;
            _CMTimeAdd(&uStack_110,&uStack_1a0,&uStack_1e0);
          }
          _objc_release(lVar5);
        }
        _objc_release(lVar4);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = param_1;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain();
  func_0x00010bf69bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
  _objc_release(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 105800398; end: 1058003fb;  */

void FUN_105800398(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain();
  func_0x00010bf69bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
  _objc_release(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 1058003fc; end: 1058004a7;  */

void FUN_1058003fc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  FUN_1058004a8();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1058004a8; end: 1058004cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058004a8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272a0cc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058004cc; end: 105800607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058004cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar2 + _DAT_11272a0c4;
    _objc_loadWeakRetained(lVar8);
  }
  lVar3 = lVar8;
  func_0x00010bfcfa00(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf56360(lVar4,param_2,&PTR____CFConstantStringClassReference_110e04978,puVar1,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126beab0;
  _objc_alloc(PTR_PTR_1126beab0);
  func_0x00010c058f80();
  _objc_release(lVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105800608; end: 105800663;  */

void FUN_105800608(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126beab8;
  _objc_alloc(PTR_PTR_1126beab8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037ba0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105800664; end: 10580077f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105800664(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar2 + _DAT_11272a0c8;
    _objc_loadWeakRetained(lVar7);
  }
  lVar3 = lVar7;
  func_0x00010bfcfa80(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c0b7020(lVar4,param_2,&PTR____CFConstantStringClassReference_110e04978,puVar1,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105800780; end: 105800833;  */

void FUN_105800780(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126beac0;
  _objc_alloc(PTR_PTR_1126beac0);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  FUN_1058004a8();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037b60(puVar1,param_2,uVar5,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105800834; end: 10580088f;  */

void FUN_105800834(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126beac8;
  _objc_alloc(PTR_PTR_1126beac8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037ba0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


