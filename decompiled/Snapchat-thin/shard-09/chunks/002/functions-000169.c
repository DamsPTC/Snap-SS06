/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b1c7d8; end: 106b1c7e3; -[SCMapInlinePlaybackOperaTransitionAnimator baseViewFrame] */

undefined8 FUN_106b1c7d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106b1c7e4; end: 106b1c7ef; -[SCMapInlinePlaybackOperaTransitionAnimator setBaseViewFrame:] */

void FUN_106b1c7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x30) = param_1;
  *(undefined8 *)(param_5 + 0x38) = param_2;
  *(undefined8 *)(param_5 + 0x40) = param_3;
  *(undefined8 *)(param_5 + 0x48) = param_4;
  return;
}



/* Entry: 106b1c7f0; end: 106b1c807; -[SCMapInlinePlaybackOperaTransitionAnimator baseView] */

void FUN_106b1c7f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b1c808; end: 106b1c813; -[SCMapInlinePlaybackOperaTransitionAnimator setBaseView:] */

void FUN_106b1c808(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 106b1c814; end: 106b1c82b; -[SCMapInlinePlaybackOperaTransitionAnimator volumeController] */

void FUN_106b1c814(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b1c82c; end: 106b1c837; -[SCMapInlinePlaybackOperaTransitionAnimator setVolumeController:] */

void FUN_106b1c82c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 106b1c838; end: 106b1c877; -[SCMapInlinePlaybackOperaTransitionAnimator .cxx_destruct] */

void FUN_106b1c838(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106b1c878; end: 106b1c8b7;  */

undefined8 FUN_106b1c878(ulong param_1)

{
  if (param_1 < 0xc) {
    return *(undefined8 *)(&UNK_10dde63a0 + param_1 * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 106b1c8b8; end: 106b1c903;  */

void FUN_106b1c8b8(ulong param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if (param_1 < 0xc) {
    ppuVar1 = (undefined **)(&PTR_PTR_110961490)[param_1];
  }
  else {
    ppuVar1 = &PTR_PTR_110cab608;
  }
  puVar2 = *ppuVar1;
  _objc_retain(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b1c904; end: 106b1c977; -[SCGrapheneMapStoryPlaybackMetric2 init] */

undefined1 * FUN_106b1c904(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f4f80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106b1c978; end: 106b1cba7;  */

/* WARNING: Removing unreachable block (ram,0x000106b1cdec) */

void FUN_106b1c978(long param_1,char *param_2,char *param_3,undefined1 *param_4,undefined1 *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x24;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined1 *puStack_198;
  undefined8 *puStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
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
  pcVar1 = param_2;
  pcVar8 = param_3;
  puVar11 = (undefined8 *)param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
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
    unaff_x24 = auStack_78;
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
    pcVar1 = "";
    pcVar8 = (char *)&uStack_98;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar13 = 0;
    puVar11 = (undefined8 *)param_4;
    do {
      if ((&cStack_49)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
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
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar3 = (char *)&uStack_160;
  pcStack_a8 = FUN_106b1cba8;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar9 = pcVar8;
  puVar12 = (undefined1 *)puVar11;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar8);
  if (pcVar2 != (char *)0x0) {
    plVar14 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(auStack_140,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_128,pcVar2);
    unaff_x24 = auStack_110;
    pcVar2 = "true";
    if ((int)puVar11 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar2);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
    pcVar6 = "\x01";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110961540,&uStack_160,param_5);
    puStack_148 = (undefined1 *)&uStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar13 = 0;
    pcVar9 = pcVar3;
    puVar12 = param_5;
    do {
      if ((&cStack_f9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      puVar11 = &uStack_160;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar8);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    _objc_release(pcVar8);
    puStack_190 = auStack_140;
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != puStack_190);
    _objc_release(pcVar8);
    _objc_release(pcVar1);
    pcVar3 = pcVar2;
    __Unwind_Resume();
    pcStack_168 = FUN_106b1ce1c;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar10 = pcVar9;
    puStack_1a0 = unaff_x24;
    puStack_198 = (undefined1 *)puVar11;
    pcStack_188 = pcVar2;
    pcStack_180 = pcVar8;
    pcStack_178 = pcVar1;
    ppuStack_170 = &puStack_b0;
    _objc_retain(pcVar6);
    iVar7 = (int)pcVar10;
    _objc_retain(pcVar9);
    if (pcVar3 != (char *)0x0) {
      plVar14 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_1d8,pcVar1);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar1 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_1c0,pcVar1);
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      func_0x00010007e1e8(&uStack_1f8,auStack_1d8,&lStack_1a8,2);
      puVar11 = &uStack_1f8;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110961590,puVar11,puVar12);
      puStack_1e0 = &uStack_1f8;
      func_0x00010007e5dc(&puStack_1e0);
      lVar13 = 0;
      do {
        if ((&cStack_1a9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar13));
        }
        iVar7 = (int)puVar11;
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(pcVar9);
    pcVar1 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_release(pcVar9);
      if (cStack_1c1 < '\0') {
        __ZdlPv(auStack_1d8[0]);
      }
      _objc_release(pcVar9);
      _objc_release(pcVar6);
      __Unwind_Resume();
      _objc_retain();
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      if (pcVar1 == (char *)0x0) {
        pcVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      }
      PTR__OBJC_CLASS___UIImage_1126aea68 = puVar4;
      if (iVar7 == 0) {
        func_0x00010bfe8220(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(pcVar1);
        _UIGraphicsBeginImageContextWithOptions
                  (0x4060000000000000,0x4060000000000000,0x4000000000000000,0);
        func_0x00010bf89920(0,0,0x4060000000000000,0x4060000000000000,puVar4);
        func_0x00010c19bbe0(pcVar1);
        _objc_release(pcVar1);
        _UIRectFillUsingBlendMode(0,0,0x4060000000000000,0x4060000000000000,1);
        puVar5 = puVar4;
        func_0x00010bf89940(0,0,0x4060000000000000,0x4060000000000000,0x3ff0000000000000,puVar4);
        _UIGraphicsGetImageFromCurrentImageContext();
        _objc_retainAutoreleasedReturnValue();
        _UIGraphicsEndImageContext();
        _objc_release(puVar4);
      }
      else {
        func_0x00010bfe8220(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
      }
      _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
      return;
    }
    return;
  }
  return;
}



/* Entry: 106b1cba8; end: 106b1ce1b;  */

/* WARNING: Removing unreachable block (ram,0x000106b1cdec) */

void FUN_106b1cba8(long param_1,char *param_2,char *param_3,undefined8 *param_4,undefined1 *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *unaff_x24;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined8 *puStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = (char *)&uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  puVar10 = (undefined1 *)param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_a0,pcVar1);
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
    func_0x00010002b838(auStack_88,pcVar1);
    unaff_x24 = auStack_70;
    pcVar1 = "true";
    if ((int)param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110961540,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar11 = 0;
    pcVar7 = pcVar2;
    puVar10 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      param_4 = &uStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_3);
    puStack_f0 = auStack_a0;
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != puStack_f0);
    _objc_release(param_3);
    _objc_release(param_2);
    pcVar3 = pcVar2;
    __Unwind_Resume();
    pcStack_c8 = FUN_106b1ce1c;
    lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar8 = pcVar7;
    puStack_100 = unaff_x24;
    puStack_f8 = (undefined1 *)param_4;
    pcStack_e8 = pcVar2;
    pcStack_e0 = param_3;
    pcStack_d8 = param_2;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar1);
    iVar6 = (int)pcVar8;
    _objc_retain(pcVar7);
    if (pcVar3 != (char *)0x0) {
      plVar12 = *(long **)(pcVar3 + 8);
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
      func_0x00010002b838(auStack_138,pcVar2);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar2 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_120,pcVar2);
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
      puVar9 = &uStack_158;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110961590,puVar9,puVar10);
      puStack_140 = &uStack_158;
      func_0x00010007e5dc(&puStack_140);
      lVar11 = 0;
      do {
        if ((&cStack_109)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar11));
        }
        iVar6 = (int)puVar9;
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x30);
    }
    _objc_release(pcVar7);
    pcVar2 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
      ___stack_chk_fail();
      _objc_release(pcVar7);
      if (cStack_121 < '\0') {
        __ZdlPv(auStack_138[0]);
      }
      _objc_release(pcVar7);
      _objc_release(pcVar1);
      __Unwind_Resume();
      _objc_retain();
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      if (pcVar2 == (char *)0x0) {
        pcVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      }
      PTR__OBJC_CLASS___UIImage_1126aea68 = puVar4;
      if (iVar6 == 0) {
        func_0x00010bfe8220(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(pcVar2);
        _UIGraphicsBeginImageContextWithOptions
                  (0x4060000000000000,0x4060000000000000,0x4000000000000000,0);
        func_0x00010bf89920(0,0,0x4060000000000000,0x4060000000000000,puVar4);
        func_0x00010c19bbe0(pcVar2);
        _objc_release(pcVar2);
        _UIRectFillUsingBlendMode(0,0,0x4060000000000000,0x4060000000000000,1);
        puVar5 = puVar4;
        func_0x00010bf89940(0,0,0x4060000000000000,0x4060000000000000,0x3ff0000000000000,puVar4);
        _UIGraphicsGetImageFromCurrentImageContext();
        _objc_retainAutoreleasedReturnValue();
        _UIGraphicsEndImageContext();
        _objc_release(puVar4);
      }
      else {
        func_0x00010bfe8220(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
      }
      _objc_release(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
      return;
    }
    return;
  }
  return;
}



/* Entry: 106b1ce1c; end: 106b1d04b;  */

void FUN_106b1ce1c(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
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
  pcVar1 = param_3;
  _objc_retain(param_2);
  iVar4 = (int)pcVar1;
  _objc_retain(param_3);
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
    puVar5 = &uStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110961590,puVar5,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar6 = 0;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      iVar4 = (int)puVar5;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    _objc_retain();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (pcVar1 == (char *)0x0) {
      pcVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    }
    PTR__OBJC_CLASS___UIImage_1126aea68 = puVar2;
    if (iVar4 == 0) {
      func_0x00010bfe8220(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(pcVar1);
      _UIGraphicsBeginImageContextWithOptions
                (0x4060000000000000,0x4060000000000000,0x4000000000000000,0);
      func_0x00010bf89920(0,0,0x4060000000000000,0x4060000000000000,puVar2);
      func_0x00010c19bbe0(pcVar1);
      _objc_release(pcVar1);
      _UIRectFillUsingBlendMode(0,0,0x4060000000000000,0x4060000000000000,1);
      puVar3 = puVar2;
      func_0x00010bf89940(0,0,0x4060000000000000,0x4060000000000000,0x3ff0000000000000,puVar2);
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      _UIGraphicsEndImageContext();
      _objc_release(puVar2);
    }
    else {
      func_0x00010bfe8220(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
    }
    _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  return;
}



/* Entry: 106b1d04c; end: 106b1d1af;  */

void FUN_106b1d04c(undefined *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  }
  PTR__OBJC_CLASS___UIImage_1126aea68 = puVar1;
  if (param_3 == 0) {
    func_0x00010bfe8220(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    _UIGraphicsBeginImageContextWithOptions
              (0x4060000000000000,0x4060000000000000,0x4000000000000000,0);
    func_0x00010bf89920(0,0,0x4060000000000000,0x4060000000000000,puVar1);
    func_0x00010c19bbe0(param_1);
    _objc_release(param_1);
    _UIRectFillUsingBlendMode(0,0,0x4060000000000000,0x4060000000000000,1);
    puVar2 = puVar1;
    func_0x00010bf89940(0,0,0x4060000000000000,0x4060000000000000,0x3ff0000000000000,puVar1);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    _objc_release(puVar1);
  }
  else {
    func_0x00010bfe8220(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b1d1b0; end: 106b1d1c3;  */

void FUN_106b1d1b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_imageNamed__1125d7a50,
             &PTR____CFConstantStringClassReference_110e73778);
  return;
}



/* Entry: 106b1d1c4; end: 106b1d2b7; +[SCMapBitmojiSticker stickerFromSCMT1StickerID:] */

void FUN_106b1d1c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126bf300;
  puVar7 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010c0dab20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf3e840(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf3e860(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c229ee0(param_3);
    lVar6 = param_3;
    func_0x00010c077f80(param_3);
    _objc_release(param_3);
    func_0x00010c0605a0(0x3ff0000000000000,puVar1,param_2,lVar2,lVar3,lVar4,lVar5,0,lVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar7 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106b1d2b8; end: 106b1d797;  */

/* WARNING: Possible PIC construction at 0x000106b1d388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106b1d550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106b1d6e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106b1d554) */
/* WARNING: Removing unreachable block (ram,0x000106b1d580) */
/* WARNING: Removing unreachable block (ram,0x000106b1d59c) */
/* WARNING: Removing unreachable block (ram,0x000106b1d38c) */
/* WARNING: Removing unreachable block (ram,0x000106b1d3c4) */
/* WARNING: Removing unreachable block (ram,0x000106b1d6ec) */
/* WARNING: Removing unreachable block (ram,0x000106b1d724) */

undefined * FUN_106b1d2b8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar9 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = (undefined8 *)0x0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar8 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar8;
  func_0x00010bf52a60();
  if (puVar5 == (undefined *)0x0) {
    _objc_release(puVar8);
    puVar6 = param_3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
    uVar10 = 0x106b1d430;
    ___stack_chk_fail();
    puVar2 = &uStack_130;
  }
  else {
    unaff_x26 = (undefined *)*puStack_120;
    unaff_x27 = 0;
    if ((undefined *)*puStack_120 != unaff_x26) {
      _objc_enumerationMutation(puVar8);
    }
    unaff_x23 = (undefined *)*puStack_128;
    unaff_x24 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 0x106b1d38c;
    puVar2 = &uStack_130;
    puVar6 = unaff_x24;
    unaff_x22 = puVar5;
  }
  while( true ) {
    *(undefined8 *)((long)puVar2 + -0x60) = unaff_x28;
    *(long *)((long)puVar2 + -0x58) = unaff_x27;
    *(undefined **)((long)puVar2 + -0x50) = unaff_x26;
    *(undefined **)((long)puVar2 + -0x48) = unaff_x25;
    *(undefined **)((long)puVar2 + -0x40) = unaff_x24;
    *(undefined **)((long)puVar2 + -0x38) = unaff_x23;
    *(undefined **)((long)puVar2 + -0x30) = unaff_x22;
    *(undefined **)((long)puVar2 + -0x28) = puVar8;
    *(undefined **)((long)puVar2 + -0x20) = puVar4;
    *(undefined **)((long)puVar2 + -0x18) = param_3;
    *(undefined1 **)((long)puVar2 + -0x10) = puVar9;
    *(undefined8 *)((long)puVar2 + -8) = uVar10;
    puVar9 = (undefined1 *)((long)puVar2 + -0x10);
    *(undefined8 *)((long)puVar2 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    puVar7 = puVar6;
    func_0x00010c0870e0();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = (uint)puVar7;
    if ((int)uVar3 < 4) break;
    if (uVar3 == 4) {
      func_0x00010bf1f3c0(puVar6);
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      goto LAB_106b1d750;
    }
    param_3 = puVar6;
    if (uVar3 == 5) {
      puVar8 = puVar6;
      func_0x00010c25de80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      *(undefined8 *)((long)puVar2 + -0x1a8) = 0;
      *(undefined8 *)((long)puVar2 + -0x1b0) = 0;
      *(undefined8 *)((long)puVar2 + -0x198) = 0;
      *(undefined8 *)((long)puVar2 + -0x1a0) = 0;
      *(undefined8 *)((long)puVar2 + -0x188) = 0;
      *(undefined8 *)((long)puVar2 + -400) = 0;
      *(undefined8 *)((long)puVar2 + -0x178) = 0;
      *(undefined8 *)((long)puVar2 + -0x180) = 0;
      puVar5 = puVar8;
      func_0x00010bfac8e0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = puVar5;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      unaff_x23 = unaff_x22;
      func_0x00010bf52a60();
      if (unaff_x23 == (undefined *)0x0) {
        _objc_release(unaff_x22);
        puVar5 = unaff_x22;
        goto LAB_106b1d748;
      }
      unaff_x27 = **(long **)((long)puVar2 + -0x1a0);
      unaff_x28 = 0;
      if (**(long **)((long)puVar2 + -0x1a0) != unaff_x27) {
        _objc_enumerationMutation(unaff_x22);
      }
      unaff_x24 = (undefined *)**(undefined8 **)((long)puVar2 + -0x1a8);
      unaff_x25 = puVar8;
      func_0x00010bfac8e0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = unaff_x25;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x25);
      uVar10 = 0x106b1d6ec;
      puVar2 = (undefined8 *)((long)puVar2 + -0x1f0);
      puVar6 = unaff_x26;
    }
    else {
      if (uVar3 != 6) goto LAB_106b1d750;
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      *(undefined8 *)((long)puVar2 + -0x1e8) = 0;
      *(undefined8 *)((long)puVar2 + -0x1f0) = 0;
      *(undefined8 *)((long)puVar2 + -0x1d8) = 0;
      *(undefined8 *)((long)puVar2 + -0x1e0) = 0;
      *(undefined8 *)((long)puVar2 + -0x1c8) = 0;
      *(undefined8 *)((long)puVar2 + -0x1d0) = 0;
      *(undefined8 *)((long)puVar2 + -0x1b8) = 0;
      *(undefined8 *)((long)puVar2 + -0x1c0) = 0;
      puVar5 = puVar6;
      func_0x00010c09a320();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      func_0x00010c297380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      unaff_x22 = puVar8;
      func_0x00010bf52a60();
      if (unaff_x22 == (undefined *)0x0) {
LAB_106b1d748:
        _objc_release(puVar8);
        unaff_x22 = puVar5;
        goto LAB_106b1d750;
      }
      unaff_x24 = (undefined *)**(undefined8 **)((long)puVar2 + -0x1e0);
      unaff_x25 = (undefined *)0x0;
      if ((undefined *)**(undefined8 **)((long)puVar2 + -0x1e0) != unaff_x24) {
        _objc_enumerationMutation(puVar8);
      }
      puVar1 = (undefined8 *)((long)puVar2 + -0x1e8);
      uVar10 = 0x106b1d554;
      puVar2 = (undefined8 *)((long)puVar2 + -0x1f0);
      puVar6 = *(undefined **)*puVar1;
    }
  }
  if (uVar3 < 2) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (uVar3 == 2) {
    func_0x00010c0df6a0(puVar6);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
  }
  else if (uVar3 == 3) {
    puVar4 = puVar6;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_106b1d750:
  puVar5 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)puVar2 + -0x70)) {
    ___stack_chk_fail();
    *(undefined **)((long)puVar2 + -0x220) = unaff_x22;
    *(undefined **)((long)puVar2 + -0x218) = puVar8;
    *(undefined **)((long)puVar2 + -0x210) = puVar4;
    *(undefined **)((long)puVar2 + -0x208) = puVar6;
    *(undefined1 **)((long)puVar2 + -0x200) = puVar9;
    *(code **)((long)puVar2 + -0x1f8) = FUN_106b1d798;
    if (lRam00000001136c68e8 != -1) {
      func_0x00010002a2fc(0x1136c68e8,&PTR___NSConcreteGlobalBlock_110961650);
    }
    puVar4 = puVar5;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010c0720c0();
    if (((ulong)puVar8 & 1) == 0) {
      puVar8 = puVar4;
      func_0x00010c0720c0();
      if (((ulong)puVar8 & 1) == 0) {
        func_0x00010c0dff20(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar5;
        func_0x00010bf1f3c0();
        _objc_release(puVar5);
      }
      else {
        puVar8 = (undefined *)0x0;
      }
    }
    else {
      puVar8 = (undefined *)0x1;
    }
    _objc_release(puVar4);
    return puVar8;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 106b1d798; end: 106b1d86f;  */

ulong FUN_106b1d798(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (lRam00000001136c68e8 != -1) {
    func_0x00010002a2fc(0x1136c68e8,&PTR___NSConcreteGlobalBlock_110961650);
  }
  uVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      func_0x00010c0dff20(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bf1f3c0();
      _objc_release(param_1);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106b1d870; end: 106b1d91b;  */

void FUN_106b1d870(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  long lStack_18;
  
  puVar3 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x6e665566;
  uStack_40 = 0x6d6264704d47446c;
  uStack_2c = 0x7a664c756a6f56;
  uStack_34 = 0x62736671;
  uStack_30 = 0x66737675;
  _strlen();
  pcVar1 = (char *)&uStack_40;
  for (; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)((long)puVar3 + -1)) {
    *pcVar1 = *pcVar1 + -1;
    pcVar1 = pcVar1 + 1;
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&uStack_40);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = puRam00000001136c68e0;
  puRam00000001136c68e0 = puVar4;
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126bf300;
  _objc_alloc(PTR_PTR_1126bf300);
  puVar5 = PTR_PTR_1126c58b8;
  func_0x00010c0dab40(PTR_PTR_1126c58b8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c58b8;
  func_0x00010bf3e8e0(PTR_PTR_1126c58b8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c58b8;
  func_0x00010bf3e900(PTR_PTR_1126c58b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02fa40(0x3ff0000000000000,puVar4,param_2,puVar5,puVar6,puVar7,1,0,0);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106b1d91c; end: 106b1d9cf; +[SCMapBitmojiSticker defaultSticker] */

void FUN_106b1d91c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126bf300;
  _objc_alloc(PTR_PTR_1126bf300);
  puVar2 = PTR_PTR_1126c58b8;
  func_0x00010c0dab40(PTR_PTR_1126c58b8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c58b8;
  func_0x00010bf3e8e0(PTR_PTR_1126c58b8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c58b8;
  func_0x00010bf3e900(PTR_PTR_1126c58b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02fa40(0x3ff0000000000000,puVar1,param_2,puVar2,puVar3,puVar4,1,0,0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b1d9d0; end: 106b1db4b; -[SCMapBitmojiSticker initWithValuesOrDefaultNonClusteredStickerId:clusteredFacingLeftStickerId:clusteredFacingRightStickerId:shadow:dynamicElements:opacity:isMotion:] */

undefined8
FUN_106b1d9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined *param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar1 = param_4;
  func_0x00010c08fa60();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126c58b8;
    func_0x00010c0dab40(PTR_PTR_1126c58b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_4;
    func_0x00010bf51e00(param_4);
  }
  _objc_release(param_4);
  puVar2 = param_5;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126c58b8;
    func_0x00010bf3e8e0(PTR_PTR_1126c58b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_5;
    func_0x00010bf51e00(param_5);
  }
  _objc_release(param_5);
  puVar3 = param_6;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126c58b8;
    func_0x00010bf3e900(PTR_PTR_1126c58b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = param_6;
    func_0x00010bf51e00(param_6);
  }
  _objc_release(param_6);
  dVar4 = (double)NEON_fminnm(param_1,0x3ff0000000000000);
  dVar5 = 0.0;
  if (0.0 <= dVar4) {
    dVar5 = dVar4;
  }
  func_0x00010c02fa40(dVar5,param_2,param_3,puVar1,puVar2,puVar3,param_7,param_8,param_9);
  _objc_release(param_8);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_2;
}



/* Entry: 106b1db4c; end: 106b1dbff; +[SCMapBitmojiSticker ghostModeSticker] */

void FUN_106b1db4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126bf300;
  _objc_alloc(PTR_PTR_1126bf300);
  puVar2 = PTR_PTR_1126c58b8;
  func_0x00010bfcc6e0(PTR_PTR_1126c58b8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c58b8;
  func_0x00010bfcc6e0(PTR_PTR_1126c58b8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c58b8;
  func_0x00010bfcc6e0(PTR_PTR_1126c58b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02fa40(0x3ff0000000000000,puVar1,param_2,puVar2,puVar3,puVar4,1,0,0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b1dc00; end: 106b1dd17; -[SCMapBitmojiSticker copyWithNonClusteredStickerFacingRight:] */

undefined8 FUN_106b1dc00(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2;
  if ((param_4 & 1) == 0) {
    func_0x00010bf3e8a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf3e8c0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = param_2;
  _objc_opt_class(param_2);
  _objc_alloc();
  uVar3 = param_2;
  func_0x00010bf3e8a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf3e8c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c229ee0(param_2);
  uVar6 = param_2;
  func_0x00010bf8b800(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e8ca0(param_2);
  func_0x00010c077f80(param_2);
  func_0x00010c02fa40(param_1,uVar2,param_3,uVar1,uVar3,uVar4,uVar5,uVar6,param_2);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106b1dd18; end: 106b1dd27; +[SCMapBitmojiSticker stickerFromSCMT1Sticker:] */

void FUN_106b1dd18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c253fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bf300,PTR_s_stickerFromSCMT1Sticker_forceNon_112672a18,param_3,0);
  return;
}



/* Entry: 106b1dd28; end: 106b1df0f; +[SCMapBitmojiSticker stickerFromSCMT1Sticker:forceNonClusteredRightFacing:] */

void FUN_106b1dd28(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  if ((param_5 & 1) == 0) {
    func_0x00010c0dab20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf3e860();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126bf300;
  _objc_alloc(PTR_PTR_1126bf300);
  uVar1 = param_4;
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf3e840();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c2540c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf3e860();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010c2540c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c229ee0();
  puVar10 = PTR_PTR_1126bf300;
  uVar9 = param_4;
  func_0x00010bf8b820(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be06be0(puVar10,param_3,uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ae80(param_4);
  uVar11 = param_4;
  func_0x00010c2540c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar12 = uVar11;
  func_0x00010c077f80(uVar11);
  func_0x00010c0605a0(1.0 - param_1,puVar3,param_3,uVar2,uVar4,uVar6,uVar8,puVar10,uVar12);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106b1df10; end: 106b1e12b; +[SCMapBitmojiSticker _dynamicElementsFromSCMT1Elements:] */

undefined * FUN_106b1df10(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
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
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  iVar10 = (int)&uStack_130;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        uVar13 = *(undefined8 *)(lStack_128 + lVar12 * 8);
        puVar3 = PTR_PTR_1126d0930;
        _objc_alloc(PTR_PTR_1126d0930);
        uVar4 = uVar13;
        func_0x00010bfbdf60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c150c20();
        func_0x00010c042280(puVar3,param_2,uVar5);
        _objc_release(uVar4);
        puVar6 = PTR_PTR_1126bf300;
        uVar4 = uVar13;
        func_0x00010bf8b680(uVar13);
        func_0x00010be06c20(puVar6,param_2,uVar4);
        puVar7 = PTR_PTR_1126d0938;
        _objc_alloc(PTR_PTR_1126d0938);
        uVar4 = uVar13;
        func_0x00010c0ed300(uVar13);
        uVar5 = uVar13;
        func_0x00010c0ed340(uVar13);
        uVar8 = uVar13;
        func_0x00010bf20460(uVar13);
        uVar9 = uVar13;
        func_0x00010bf20460(uVar13);
        func_0x00010bf89a60();
        func_0x00010c0324a0(puVar7,param_2,uVar4,uVar5,uVar8,uVar9,puVar6,puVar3,(char)uVar13);
        func_0x00010befa120(puVar1,param_2,puVar7);
        _objc_release(puVar7);
        _objc_release(puVar3);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      iVar10 = (int)&uStack_130;
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = (undefined *)0x0;
  if (iVar10 != 0) {
    puVar1 = (undefined *)0x3;
  }
  return puVar1;
}



/* Entry: 106b1e12c; end: 106b1e13b; +[SCMapBitmojiSticker _dynamicOneOfCaseFromSCMT1DynamicOneOfCase:] */

undefined8 FUN_106b1e12c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 106b1e13c; end: 106b1e28f; -[SCMapEffect firstApplicableVariantForZoomLevel:isClusterSelected:] */

void FUN_106b1e13c(long param_1,undefined8 param_2,int param_3)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined1 in_b0;
  undefined1 uVar11;
  undefined1 in_register_00005001;
  undefined1 uVar12;
  undefined1 in_register_00005002;
  undefined1 uVar13;
  undefined1 in_register_00005003;
  undefined1 uVar14;
  undefined1 in_register_00005004;
  undefined1 uVar15;
  undefined1 in_register_00005005;
  undefined1 uVar16;
  undefined1 in_register_00005006;
  undefined1 uVar17;
  undefined1 in_register_00005007;
  undefined1 uVar18;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  dVar1 = (double)CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(in_register_00005003,
                                                               CONCAT12(in_register_00005002,
                                                                        CONCAT11(
                                                  in_register_00005001,in_b0)))))));
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c2978e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        puVar8 = *(undefined **)(lStack_128 + lVar10 * 8);
        puVar5 = puVar8;
        func_0x00010c0cd5a0();
        if (puVar5 == (undefined *)0x0) {
          func_0x00010c0cdee0(puVar8);
          bVar2 = false;
          bVar3 = NAN((double)CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,
                                                  CONCAT13(uVar14,CONCAT12(uVar13,CONCAT11(uVar12,
                                                  uVar11))))))));
          if (!NAN(dVar1) && !bVar3) {
            bVar2 = dVar1 < (double)CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,
                                                  CONCAT13(uVar14,CONCAT12(uVar13,CONCAT11(uVar12,
                                                  uVar11)))))));
          }
          if (bVar2 == (NAN(dVar1) || bVar3)) {
            func_0x00010c0c32e0(puVar8);
            bVar3 = false;
            bVar2 = true;
            if (!NAN(dVar1) &&
                !NAN((double)CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,
                                                  CONCAT13(uVar14,CONCAT12(uVar13,CONCAT11(uVar12,
                                                  uVar11))))))))) {
              bVar3 = dVar1 == (double)CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(
                                                  uVar15,CONCAT13(uVar14,CONCAT12(uVar13,CONCAT11(
                                                  uVar12,uVar11)))))));
              bVar2 = (double)CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,
                                                  CONCAT13(uVar14,CONCAT12(uVar13,CONCAT11(uVar12,
                                                  uVar11))))))) <= dVar1;
            }
            if (bVar2 && !bVar3) goto LAB_106b1e200;
          }
          else {
LAB_106b1e200:
            puVar5 = puVar8;
            func_0x00010bfb4aa0();
            if ((param_3 == 0) || (((ulong)puVar5 & 1) == 0)) goto LAB_106b1e210;
          }
          _objc_retain(puVar8);
          goto LAB_106b1e248;
        }
LAB_106b1e210:
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = param_1;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  puVar8 = (undefined *)0x0;
LAB_106b1e248:
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if (puVar6 == (undefined8 *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      func_0x00010c297920(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined1 *)puVar6;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar8 = PTR_PTR_1126bf318;
      _objc_alloc(PTR_PTR_1126bf318);
      func_0x00010c060700();
      _objc_release(puVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106b1e290; end: 106b1e30b; +[SCMapEffect withSCMTWorldEffectSet:] */

void FUN_106b1e290(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010c297920(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126bf318;
    _objc_alloc(PTR_PTR_1126bf318);
    func_0x00010c060700();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b1e30c; end: 106b1e433;  */

void FUN_106b1e30c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf8cf40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf8cf40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  puVar3 = PTR_PTR_1126d0940;
  _objc_alloc(PTR_PTR_1126d0940);
  func_0x00010c0cdee0(param_3);
  uVar5 = param_1;
  func_0x00010c0c32e0(param_3);
  func_0x00010c1018a0(param_3);
  func_0x00010c0e8b60(param_3);
  func_0x00010c1375e0(param_3);
  func_0x00010c02c140(param_1,uVar5,puVar3);
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106b1e434; end: 106b1e48b; +[SCMapEffect withSMSdkWorldEffectSet_EffectVariant:] */

void FUN_106b1e434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010bf43280(param_3,param_2,&PTR___NSConcreteGlobalBlock_1109616d0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bf318;
  _objc_alloc(PTR_PTR_1126bf318);
  func_0x00010c060700();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b1e48c; end: 106b1e5a3;  */

void FUN_106b1e48c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf8cf40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar4 = (undefined *)0x0;
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bf8cf40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (puVar3 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126d0940;
      _objc_alloc(PTR_PTR_1126d0940);
      func_0x00010c0cdee0(param_3);
      uVar5 = param_1;
      func_0x00010c0c32e0(param_3);
      func_0x00010c1018a0(param_3);
      func_0x00010c0e8b60(param_3);
      func_0x00010c02c140(param_1,uVar5,puVar4);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106b1e5a4; end: 106b1e70f; +[SCMapEffect withTweakEffectId:minZoom:] */

void FUN_106b1e5a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *unaff_x22;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_d8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar5 = param_4;
  func_0x00010c08fa60();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (puVar5 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_70 = param_4;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    unaff_x22 = PTR_PTR_1126d0940;
    _objc_alloc();
    func_0x00010c02c140(param_1,0x408f380000000000);
    puVar5 = PTR_PTR_1126bf318;
    _objc_alloc();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = unaff_x22;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060700();
    _objc_release(puVar8);
    _objc_release(unaff_x22);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_78 = FUN_106b1e710;
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = param_4;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x00010c2978e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf529e0();
    puVar8 = puVar1;
    _objc_release();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc();
      puVar2 = param_4;
      func_0x00010c2978e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010bffc4a0();
      _objc_release(puVar2);
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      lStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      plStack_190 = (long *)0x0;
      func_0x00010c2978e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_4;
      func_0x00010bf52a60();
      if (puVar5 != (undefined *)0x0) {
        lVar7 = *plStack_190;
        do {
          puVar8 = (undefined *)0x0;
          do {
            if (*plStack_190 != lVar7) {
              _objc_enumerationMutation(param_4);
            }
            uVar6 = *(undefined8 *)(lStack_198 + (long)puVar8 * 8);
            unaff_x22 = PTR_PTR_1126d0948;
            _objc_alloc_init();
            func_0x00010c0cdee0(uVar6);
            func_0x00010c1c7fc0(unaff_x22);
            func_0x00010c0c32e0(uVar6);
            func_0x00010c1c3a20(unaff_x22);
            func_0x00010bfb4aa0(uVar6);
            func_0x00010c1ddea0(unaff_x22);
            func_0x00010c0e8b60(uVar6);
            func_0x00010c1d4b60(unaff_x22);
            func_0x00010c28f340(uVar6);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar6;
            func_0x00010beec820();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c193da0(unaff_x22);
            _objc_release(uVar3);
            _objc_release(uVar6);
            func_0x00010befa120(puVar1);
            _objc_release(unaff_x22);
            puVar8 = puVar8 + 1;
          } while (puVar5 != puVar8);
          puVar5 = param_4;
          func_0x00010bf52a60();
          puVar2 = (undefined *)0x0;
        } while (puVar5 != (undefined *)0x0);
      }
      _objc_release(param_4);
      puVar5 = PTR_PTR_1126d0950;
      _objc_alloc_init();
      func_0x00010c220600();
      puVar8 = puVar1;
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      pcStack_1a8 = FUN_106b1e950;
      puVar4 = puVar8;
      puStack_1d0 = unaff_x22;
      puStack_1c8 = puVar2;
      puStack_1c0 = puVar5;
      puStack_1b8 = puVar1;
      ppuStack_1b0 = &puStack_80;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar4;
      func_0x00010c08fa60();
      _objc_release(puVar4);
      if (puVar1 == (undefined *)0x0) {
        func_0x00010c294420(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar8;
      }
      else {
        puStack_1e8 = &uStack_1f0;
        uStack_1f0 = 0;
        uStack_1e0 = 0x2020000000;
        uStack_1d8 = 0;
        puVar5 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
        func_0x00010c25cd40();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar8;
        func_0x00010bf85d80(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf85d80(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60();
        _objc_retain(puVar5);
        func_0x00010bf98040(puVar1);
        _objc_release(puVar8);
        _objc_release(puVar1);
        _objc_release(puVar5);
        __Block_object_dispose(&uStack_1f0,8);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106b1e710; end: 106b1e94f; -[SCMapEffect smSdkWorldEffectSet] */

void FUN_106b1e710(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *unaff_x22;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
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
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010c2978e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bf529e0();
  puVar2 = puVar1;
  _objc_release();
  if (puVar8 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    puVar8 = param_1;
    func_0x00010c2978e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bffc4a0();
    _objc_release(puVar8);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    func_0x00010c2978e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar7 = *plStack_120;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(param_1);
          }
          uVar6 = *(undefined8 *)(lStack_128 + (long)puVar8 * 8);
          unaff_x22 = PTR_PTR_1126d0948;
          _objc_alloc_init();
          func_0x00010c0cdee0(uVar6);
          func_0x00010c1c7fc0(unaff_x22);
          func_0x00010c0c32e0(uVar6);
          func_0x00010c1c3a20(unaff_x22);
          func_0x00010bfb4aa0(uVar6);
          func_0x00010c1ddea0(unaff_x22);
          func_0x00010c0e8b60(uVar6);
          func_0x00010c1d4b60(unaff_x22);
          func_0x00010c28f340(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar6;
          func_0x00010beec820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c193da0(unaff_x22);
          _objc_release(uVar3);
          _objc_release(uVar6);
          func_0x00010befa120(puVar1);
          _objc_release(unaff_x22);
          puVar8 = puVar8 + 1;
        } while (puVar2 != puVar8);
        puVar2 = param_1;
        func_0x00010bf52a60();
        puVar8 = (undefined *)0x0;
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(param_1);
    puVar5 = PTR_PTR_1126d0950;
    _objc_alloc_init();
    func_0x00010c220600();
    puVar2 = puVar1;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_106b1e950;
    puVar4 = puVar2;
    puStack_160 = unaff_x22;
    puStack_158 = puVar8;
    puStack_150 = puVar5;
    puStack_148 = puVar1;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
    func_0x00010c08fa60();
    _objc_release(puVar4);
    if (puVar1 == (undefined *)0x0) {
      func_0x00010c294420(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
    }
    else {
      puStack_178 = &uStack_180;
      uStack_180 = 0;
      uStack_170 = 0x2020000000;
      uStack_168 = 0;
      puVar5 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010bf85d80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf85d80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      _objc_retain(puVar5);
      func_0x00010bf98040(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(puVar5);
      __Block_object_dispose(&uStack_180,8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106b1e950; end: 106b1eaaf; -[SCMapPerson displayFirstName] */

void FUN_106b1e950(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    func_0x00010c294420(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bf85d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf85d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_retain(puVar1);
    func_0x00010bf98040(puVar2);
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    __Block_object_dispose(&uStack_50,8);
    param_1 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106b1eab0; end: 106b1eb4b;  */

void FUN_106b1eab0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *in_x6;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    func_0x00010bf070e0(*(undefined8 *)(param_1 + 0x20));
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + 1;
  }
  else if (*(ulong *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) < 3) {
    func_0x00010bf070e0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    *in_x6 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b1eb4c; end: 106b1ec1f; -[SCMapPerson matches:] */

ulong FUN_106b1eb4c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4bb00();
  if ((uVar3 & 1) == 0) {
    func_0x00010bf85d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf4bb00();
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  else {
    uVar4 = 1;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106b1ec20; end: 106b1ecab; -[SCMapPersonLocation statusIfLive] */

void FUN_106b1ec20(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c252d60();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010c252d60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51c80(param_1);
    uVar3 = uVar2;
    func_0x00010c06e100();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      func_0x00010c252d60(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b1ecac; end: 106b1ecff; -[SCMapPersonStatus isCancelledAtCoordinate:] */

undefined8 FUN_106b1ecac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf49340();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c06e100(param_1,param_2);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106b1ed00; end: 106b1ed83; -[SCMapPersonStatusConstraint hasLocation] */

void FUN_106b1ed00(double param_1,double param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  double dVar5;
  double dVar6;
  undefined8 uVar4;
  
  uVar4 = param_3;
  func_0x00010bf345e0();
  iVar3 = (int)uVar4;
  _CLLocationCoordinate2DIsValid();
  if (iVar3 != 0) {
    func_0x00010bf345e0(param_3);
    dVar5 = 0.0;
    dVar6 = 0.0;
    _CLLocationCoordinate2DMake();
    dVar6 = ABS(param_2 - dVar6);
    bVar1 = false;
    bVar2 = true;
    if (ABS(param_1 - dVar5) <= 2.220446049250313e-16) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(dVar6)) {
        bVar1 = dVar6 == 2.220446049250313e-16;
        bVar2 = 2.220446049250313e-16 <= dVar6;
      }
    }
    if (bVar2 && !bVar1) {
      func_0x00010c11ef60(param_3);
    }
  }
  return;
}



/* Entry: 106b1ed84; end: 106b1ee6b; -[SCMapPersonStatusConstraint isCancelledAtCoordinate:] */

bool FUN_106b1ed84(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  
  lVar2 = param_2;
  func_0x00010bfd89e0();
  if ((int)lVar2 != 0) {
    func_0x00010bf345e0(param_2);
    func_0x000108d312a8();
    dVar5 = param_1;
    func_0x00010c11ef60(param_2);
    if (dVar5 < param_1) {
      return true;
    }
  }
  lVar2 = param_2;
  func_0x00010bf9c720();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9c720(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf433a0(puVar3,param_3,param_2);
    bVar1 = puVar4 == (undefined *)0x1;
    _objc_release(param_2);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 106b1ee6c; end: 106b1f193; -[SCMapCluster initWithClusterables:] */

undefined8 *
FUN_106b1ee6c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  double dVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puStack_110 = PTR_PTR_1126f4f88;
  puVar2 = &uStack_118;
  uStack_118 = param_3;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    dVar16 = 0.0;
    _objc_retain(param_5);
    puVar4 = param_5;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    if (puVar4 == (undefined8 *)0x0) {
      dVar18 = 0.0;
      param_1 = 0.0;
    }
    else {
      dVar18 = 0.0;
      param_1 = 0.0;
      do {
        puVar14 = (undefined8 *)0x0;
        do {
          dVar15 = dVar16;
          if (lRam0000000000000000 != lVar9) {
            _objc_enumerationMutation(param_5);
            dVar15 = dVar16;
          }
          uVar13 = *(ulong *)((long)puVar14 * 8);
          puVar5 = puVar2;
          _objc_opt_class(puVar2);
          uVar8 = uVar13;
          _objc_opt_isKindOfClass(uVar13,puVar5);
          if ((uVar8 & 1) == 0) {
            func_0x00010befa120(puVar3);
            func_0x00010bf51c80(uVar13);
            dVar16 = dVar15;
            func_0x00010bf51c80(uVar13);
            dVar1 = param_2;
          }
          else {
            _objc_retain(uVar13);
            uVar8 = uVar13;
            func_0x00010bf3e880(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c280520(puVar3);
            _objc_release(uVar8);
            func_0x00010bf51c80(uVar13);
            uVar8 = uVar13;
            func_0x00010bf529e0();
            dVar15 = (double)uVar8 * dVar15;
            func_0x00010bf51c80(uVar13);
            uVar8 = uVar13;
            dVar17 = param_2;
            func_0x00010bf529e0();
            _objc_release(uVar13);
            dVar16 = (double)uVar8;
            dVar1 = dVar16 * param_2;
            param_2 = dVar17;
          }
          param_1 = param_1 + dVar15;
          dVar18 = dVar18 + dVar1;
          lVar6 = puVar2[3];
          if (lVar6 == 0) {
LAB_106b1f020:
            _objc_retain(uVar13);
            uVar7 = puVar2[3];
            puVar2[3] = uVar13;
            _objc_release(uVar7);
          }
          else {
            func_0x00010bf3e7e0();
            uVar8 = uVar13;
            func_0x00010bf3e7e0();
            if (lVar6 < (long)uVar8) goto LAB_106b1f020;
          }
          puVar14 = (undefined8 *)((long)puVar14 + 1);
        } while (puVar4 != puVar14);
        puVar4 = param_5;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined8 *)0x0);
    }
    _objc_release(param_5);
    _objc_retain(puVar3);
    uVar7 = puVar2[1];
    puVar2[1] = puVar3;
    _objc_release(uVar7);
    uVar8 = puVar2[1];
    func_0x00010bf529e0();
    param_1 = param_1 / (double)uVar8;
    uVar8 = puVar2[1];
    func_0x00010bf529e0();
    param_2 = dVar18 / (double)uVar8;
    _CLLocationCoordinate2DMake();
    func_0x00010c184060(puVar2);
    lVar9 = puVar2[1];
    func_0x00010bf529e0();
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar9 == 1) {
      uVar7 = puVar2[1];
      func_0x00010bf04a20();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar7;
      func_0x00010bf3e700();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = puVar2[2];
      puVar2[2] = uVar10;
      _objc_release(uVar12);
    }
    else {
      func_0x00010bf529e0();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = puVar2[2];
      puVar2[2] = puVar11;
    }
    _objc_release(uVar7);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    param_5[6] = param_1;
    param_5[7] = param_2;
    puVar2 = param_5;
    func_0x000108d31494();
    param_5[4] = param_1;
    param_5[5] = param_2;
    return puVar2;
  }
  return puVar2;
}



/* Entry: 106b1f194; end: 106b1f1bb; -[SCMapCluster setCoordinate:] */

void FUN_106b1f194(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x30) = param_1;
  *(undefined8 *)(param_3 + 0x38) = param_2;
  func_0x000108d31494();
  *(undefined8 *)(param_3 + 0x20) = param_1;
  *(undefined8 *)(param_3 + 0x28) = param_2;
  return;
}



/* Entry: 106b1f1bc; end: 106b1f1c3; -[SCMapCluster count] */

void FUN_106b1f1bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 106b1f1c4; end: 106b1f1cb; -[SCMapCluster clusterVisibilityPriority] */

void FUN_106b1f1c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_clusterVisibilityPriority_1125ad3a0);
  return;
}



/* Entry: 106b1f1cc; end: 106b1f227; -[SCMapCluster copyWithZone:] */

undefined * FUN_106b1f1cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0958;
  _objc_alloc(PTR_PTR_1126d0958);
  func_0x00010bf3e880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff440(puVar1,param_2,param_1);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 106b1f228; end: 106b1f32b; -[SCMapCluster isEqual:] */

ulong FUN_106b1f228(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  
  _objc_retain(param_5);
  lVar1 = param_3;
  _objc_opt_class(param_3);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,lVar1);
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
    goto LAB_106b1f310;
  }
  _objc_retain(param_5);
  func_0x00010bf51c80(param_5);
  if ((2.220446049250313e-16 < ABS(*(double *)(param_3 + 0x30) - param_1)) ||
     (2.220446049250313e-16 < ABS(*(double *)(param_3 + 0x38) - param_2))) {
LAB_106b1f304:
    uVar3 = 0;
  }
  else {
    iVar4 = (int)*(undefined8 *)(param_3 + 0x10);
    uVar3 = param_5;
    func_0x00010bf3e700(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if (iVar4 == 0) goto LAB_106b1f304;
    uVar2 = param_5;
    func_0x00010bf3e880(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071ae0();
    _objc_release(uVar2);
  }
  _objc_release(param_5);
LAB_106b1f310:
  _objc_release(param_5);
  return uVar3;
}



/* Entry: 106b1f32c; end: 106b1f333; -[SCMapCluster hash] */

void FUN_106b1f32c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 106b1f334; end: 106b1f33b; -[SCMapCluster clusterables] */

undefined8 FUN_106b1f334(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b1f33c; end: 106b1f343; -[SCMapCluster clusterIdentifier] */

undefined8 FUN_106b1f33c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b1f344; end: 106b1f34b; -[SCMapCluster topClusterable] */

undefined8 FUN_106b1f344(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b1f34c; end: 106b1f353; -[SCMapCluster slippyPoint] */

undefined1  [16] FUN_106b1f34c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 106b1f354; end: 106b1f35b; -[SCMapCluster coordinate] */

undefined1  [16] FUN_106b1f354(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}



/* Entry: 106b1f35c; end: 106b1f397; -[SCMapCluster .cxx_destruct] */

void FUN_106b1f35c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b1f398; end: 106b1f3df; -[SCMapZoomRange initWithZoom:] */

void FUN_106b1f398(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f4f90;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  return;
}



/* Entry: 106b1f3e0; end: 106b1f403; -[SCMapZoomRange containsZoom:] */

bool FUN_106b1f3e0(double param_1,long param_2)

{
  if (*(double *)(param_2 + 0x10) < param_1) {
    return false;
  }
  return *(double *)(param_2 + 8) < param_1;
}



/* Entry: 106b1f404; end: 106b1f427; -[SCMapZoomRange expandForZoom:] */

void FUN_106b1f404(double param_1,long param_2)

{
  if (*(double *)(param_2 + 0x10) < param_1) {
    *(double *)(param_2 + 0x10) = param_1;
  }
  if (param_1 < *(double *)(param_2 + 8)) {
    *(double *)(param_2 + 8) = param_1;
  }
  return;
}



/* Entry: 106b1f428; end: 106b1f45b; -[SCMapZoomRange copyWithZone:] */

void FUN_106b1f428(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_opt_class();
  _objc_alloc_init();
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return;
}



/* Entry: 106b1f45c; end: 106b1f4e3; -[SCMapZoomRange isEqual:] */

bool FUN_106b1f45c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    bVar1 = true;
  }
  else {
    puVar2 = PTR_PTR_1126d0960;
    _objc_opt_class(PTR_PTR_1126d0960);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if (((uVar3 & 1) == 0) || (*(double *)(param_3 + 8) != *(double *)(param_1 + 8))) {
      bVar1 = false;
    }
    else {
      bVar1 = *(double *)(param_3 + 0x10) == *(double *)(param_1 + 0x10);
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106b1f4e4; end: 106b1f533; -[SCMapZoomRange hash] */

undefined * FUN_106b1f4e4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(double *)(param_1 + 8) + *(double *)(param_1 + 0x10),
                      PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfde980();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 106b1f534; end: 106b1f53b; -[SCMapZoomRange min] */

undefined8 FUN_106b1f534(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b1f53c; end: 106b1f5df; -[SCMapZoomRange max] */

undefined8 FUN_106b1f53c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b1f5e0; end: 106b1f863; +[SCMapPersonLocationHelpers currentFriendLocationFromFriendLocation:userLocation:userId:] */

void FUN_106b1f5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,long param_6,undefined *param_7)

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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = param_7;
  func_0x00010c08fa60();
  puVar12 = (undefined *)0x0;
  if ((param_6 != 0) && (puVar1 != (undefined *)0x0)) {
    if (param_5 == (undefined *)0x0) {
      _objc_retain(param_7);
      func_0x00010bf51c80(param_6);
      puVar1 = param_7;
    }
    else {
      puVar1 = param_5;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3e6a0(param_5);
    }
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    uVar13 = param_1;
    uVar16 = param_2;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126bf130;
    _objc_alloc(PTR_PTR_1126bf130);
    func_0x00010bfe4080(param_6);
    puVar3 = param_5;
    uVar14 = uVar13;
    func_0x00010c09e300();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_5;
    func_0x00010c297f60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_5;
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      puVar6 = PTR_PTR_1126bf300;
      func_0x00010bf6a540(PTR_PTR_1126bf300);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = param_5;
    func_0x00010c252d60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51c80(param_6);
    puVar8 = param_5;
    uVar15 = uVar14;
    func_0x00010bf4e080();
    puVar9 = param_5;
    func_0x00010c297e20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17500(param_5);
    puVar10 = param_5;
    func_0x00010beed020();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_5;
    func_0x00010c07dcc0();
    func_0x00010c05ae80(param_1,param_2,uVar13,uVar14,uVar16,uVar15,puVar12,param_4,puVar1,puVar2,
                        puVar2,puVar3,puVar4,puVar6,puVar7,puVar8,puVar9,puVar10,(char)puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar7);
    if (puVar5 == (undefined *)0x0) {
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 106b1f864; end: 106b1f8d7; -[SCMapGestureServices initWithGestureManager:] */

undefined1 * FUN_106b1f864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4f98;
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



/* Entry: 106b1f8d8; end: 106b1f8df; -[SCMapGestureServices gestureManager] */

undefined8 FUN_106b1f8d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b1f8e0; end: 106b1f8eb; -[SCMapGestureServices .cxx_destruct] */

void FUN_106b1f8e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b1f8ec; end: 106b1f937; +[SCMapInteraction endedRotate] */

void FUN_106b1f8ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c5f90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b1f938; end: 106b1f983; +[SCMapInteraction endedTilt] */

void FUN_106b1f938(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c5f90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b1f984; end: 106b1f9cf; +[SCMapInteraction endedZoom] */

void FUN_106b1f984(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c5f90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b1f9d0; end: 106b1fa17; +[SCMapInteraction startedPan] */

void FUN_106b1f9d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c5f90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b1fa18; end: 106b1fa63; +[SCMapInteraction startedRotate] */

void FUN_106b1fa18(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c5f90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b1fa64; end: 106b1faaf; +[SCMapInteraction startedTilt] */

void FUN_106b1fa64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c5f90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b1fab0; end: 106b1fb07; +[SCMapInteraction startedZoomWithZoomType:] */

void FUN_106b1fab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c5f90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b1fb08; end: 106b1fb4b; -[SCMapInteraction internalInit] */

void FUN_106b1fb08(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f4fa0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b1fb4c; end: 106b1fcc7; -[SCMapInteraction matchStartedPan:startedZoom:endedZoom:startedRotate:endedRotate:startedTilt:endedTilt:] */

void FUN_106b1fb4c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 3) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_106b1fc64;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    else {
      if (lVar1 == 1) {
        if (param_4 != 0) {
          (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x10));
        }
        goto LAB_106b1fc64;
      }
      if ((lVar1 != 2) || (param_5 == 0)) goto LAB_106b1fc64;
      pcVar2 = *(code **)(param_5 + 0x10);
      lVar1 = param_5;
    }
  }
  else if (lVar1 < 5) {
    if (lVar1 == 3) {
      if (param_6 == 0) goto LAB_106b1fc64;
      pcVar2 = *(code **)(param_6 + 0x10);
      lVar1 = param_6;
    }
    else {
      if ((lVar1 != 4) || (param_7 == 0)) goto LAB_106b1fc64;
      pcVar2 = *(code **)(param_7 + 0x10);
      lVar1 = param_7;
    }
  }
  else if (lVar1 == 5) {
    if (param_8 == 0) goto LAB_106b1fc64;
    pcVar2 = *(code **)(param_8 + 0x10);
    lVar1 = param_8;
  }
  else {
    if ((lVar1 != 6) || (param_9 == 0)) goto LAB_106b1fc64;
    pcVar2 = *(code **)(param_9 + 0x10);
    lVar1 = param_9;
  }
  (*pcVar2)(lVar1);
LAB_106b1fc64:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b1fcc8; end: 106b1fd07; -[SCMapAsyncTrace initWithoutName] */

void FUN_106b1fcc8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126f4fa8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 0x19) = 1;
  }
  return;
}



/* Entry: 106b1fd08; end: 106b1fd1f; +[SCMapAsyncTrace traceWithoutName] */

void FUN_106b1fd08(void)

{
  _objc_alloc();
  func_0x00010c0639a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b1fd20; end: 106b1fddf; -[SCMapAsyncTrace endWithName:] */

void FUN_106b1fd20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x10) != 0) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e73878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94200(puVar1,param_2,uVar3,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b1fde0; end: 106b1fe73; +[SCMapAsyncTrace putInstant:] */

void FUN_106b1fde0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e73878);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c11c5a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b1fe74; end: 106b1ff07; +[SCMapAsyncTrace _storeTrace:forName:] */

void FUN_106b1fe74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be3a680(param_1);
  _os_unfair_lock_lock(0x1136c68f8);
  func_0x00010c1d0640(uRam00000001136c6900,param_2,param_3,param_4);
  _os_unfair_lock_unlock(0x1136c68f8);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b1ff08; end: 106b1ff8f; +[SCMapAsyncTrace _traceForName:] */

void FUN_106b1ff08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010be3a680(param_1);
  _os_unfair_lock_lock(0x1136c68f8);
  uVar1 = uRam00000001136c6900;
  func_0x00010c0e00e0(uRam00000001136c6900,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(0x1136c68f8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b1ff90; end: 106b2001b; +[SCMapAsyncTrace beginStoredTraceWithName:] */

void FUN_106b1ff90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010becdb80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126bc330;
    _objc_alloc(PTR_PTR_1126bc330);
    func_0x00010c02d480();
    func_0x00010bec41e0(param_1,param_2,puVar2,param_3);
    func_0x00010bf17a60(puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b2001c; end: 106b20083; +[SCMapAsyncTrace endStoredTraceNamed:] */

void FUN_106b2001c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010becdb80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf940a0();
  _objc_release(uVar1);
  func_0x00010bec41e0(param_1,param_2,0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b20084; end: 106b2008f; +[SCMapAsyncTrace cancelStoredTraceNamed:] */

void FUN_106b20084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec41f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__storeTrace_forName__11258ea20,0,param_3);
  return;
}



/* Entry: 106b20090; end: 106b200b7; +[SCMapAsyncTrace _initStorage] */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_106b20090(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  if (lRam00000001136c68f0 == -1) {
    return;
  }
  ppuVar2 = &PTR___NSConcreteGlobalBlock_110961720;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_110961720);
  if ((bRam0000000113817d58 & 1) == 0) {
    iVar1 = 0x13817d58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once");
      pcRam0000000113817d50 = pcVar3;
      func_0x000107c60e4c(0x113817d58);
    }
  }
  pcVar3 = pcRam0000000113817d50;
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_110961720);
  func_0x000107c61180();
  (*pcVar3)(0x1136c68f0,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 106b200b8; end: 106b200f3;  */

void FUN_106b200b8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uRam00000001136c68f8 = 0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  uVar1 = puRam00000001136c6900;
  puRam00000001136c6900 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b200f4; end: 106b2019f; +[SCMapSyncTrace trace:operation:] */

void FUN_106b200f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e73878);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2775c0(puVar1,param_2,puVar2,param_4);
  _objc_release(param_4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b201a0; end: 106b20233; +[SCMapSyncTrace putInstant:] */

void FUN_106b201a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e73878);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c11c9a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b20234; end: 106b202ab; -[SCMusicCameraUIEntryPoint _cameraUsageTier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b20234(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_1127585b0;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f440();
  _objc_release(lVar2);
  _objc_release(param_1);
  uVar1 = 1;
  if ((int)lVar3 != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 106b202ac; end: 106b20447; -[SCMusicCameraUIEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b202ac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0xffffffffffffffff;
  lVar1 = param_1 + _DAT_1127585b4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcaa0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127585bc);
  }
  _objc_retain(uVar3);
  param_1 = param_1 + _DAT_1127585b8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd9640();
  lVar1 = param_1;
  func_0x00010bf238e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(uVar3);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_50,8);
  return;
}



/* Entry: 106b20448; end: 106b20477;  */

void FUN_106b20448(long param_1,undefined8 param_2)

{
  func_0x00010c0d6ca0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 106b20478; end: 106b204cb; -[SCMusicCameraUIEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b20478(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127585bc,0);
  _objc_destroyWeak(param_1 + _DAT_1127585b0);
  _objc_destroyWeak(param_1 + _DAT_1127585b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127585b4);
  return;
}



/* Entry: 106b204cc; end: 106b2058f; -[SCPasskeyAlertViewScope initWithDelegate:uiContainer:alertViewConfig:] */

undefined1 *
FUN_106b204cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f4fb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b20590; end: 106b205a7; -[SCPasskeyAlertViewScope delegate] */

void FUN_106b20590(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b205a8; end: 106b205af; -[SCPasskeyAlertViewScope uiContainer] */

undefined8 FUN_106b205a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b205b0; end: 106b205b7; -[SCPasskeyAlertViewScope alertViewConfig] */

undefined8 FUN_106b205b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b205b8; end: 106b205ef; -[SCPasskeyAlertViewScope .cxx_destruct] */

void FUN_106b205b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106b205f0; end: 106b20667; -[SCPasskeyConfirmAlertViewCallback initWithBlock:] */

undefined1 * FUN_106b205f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4fc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b20668; end: 106b2068b; -[SCPasskeyConfirmAlertViewCallback copyWithZone:] */

undefined8 FUN_106b20668(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b2068c; end: 106b20693; -[SCPasskeyConfirmAlertViewCallback block] */

undefined8 FUN_106b2068c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


