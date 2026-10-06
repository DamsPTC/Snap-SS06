/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10609bdf4; end: 10609bf97; -[SCFeaturePortraitEffectAlertImpl _createSheetTray] */

void FUN_10609bdf4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126c7910;
  _objc_alloc(PTR_PTR_1126c7910);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10609bf98;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  puStack_a8 = puVar2;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x10609bfc4;
  puStack_90 = &UNK_1108434b0;
  _objc_copyWeak(auStack_88,auStack_58);
  _objc_copyWeak(auStack_b0,auStack_58);
  func_0x00010c031900(puVar1);
  puVar2 = PTR_PTR_1126b0a08;
  _objc_alloc(PTR_PTR_1126b0a08);
  func_0x00010c055660();
  func_0x00010c219d60();
  func_0x00010c201b60(puVar2);
  func_0x00010c167420(puVar2);
  func_0x00010c219e20(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10609bf98; end: 10609c01f;  */

void FUN_10609bf98(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10609c020; end: 10609c097; -[SCFeaturePortraitEffectAlertImpl _showSheet] */

/* WARNING: Removing unreachable block (ram,0x0001085ab41c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609c020(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  *(undefined1 *)(param_1 + _DAT_11273e6e0) = 1;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e6d4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10c6a0();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + _DAT_11273e6c8);
  ppuVar4 = &PTR____CFConstantStringClassReference_110e3cd38;
  puVar7 = (undefined1 *)0x1;
  puVar8 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar4;
  _objc_retain(&PTR____CFConstantStringClassReference_110e3cd38);
  if (lVar2 != 0) {
    plVar9 = *(long **)(lVar2 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110e3cd38);
    ppuVar3 = ppuVar4;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e3cd38);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110e3cd38);
    func_0x000107c278b8(auStack_60,ppuVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar3 = (undefined **)&UNK_110a58b60;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a58b60,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar7 = (undefined1 *)puVar8;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined1 *)puVar8;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110e3cd38);
  _objc_release(&PTR____CFConstantStringClassReference_110e3cd38);
  __Unwind_Resume();
  puStack_88 = &LAB_1085ab52c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar3);
  if (ppuVar4 != (undefined **)0x0) {
    plVar9 = (long *)ppuVar4[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f4a7fca;
    }
    else {
      ppuVar4 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    func_0x000107c278b8(auStack_e0,ppuVar4);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    ppuVar6 = (undefined **)&UNK_110a58bb0;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110a58bb0,&uStack_100,puVar7);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    _objc_release(ppuVar3);
    _objc_release(ppuVar3);
    ppuVar5 = ppuVar4;
    __Unwind_Resume();
    puStack_128 = (undefined1 *)&uStack_140;
    puStack_108 = &LAB_1085ab6a0;
    if (ppuVar5 != (undefined **)0x0) {
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      ppuStack_120 = ppuVar4;
      ppuStack_118 = ppuVar3;
      ppuStack_110 = &puStack_90;
      (**(code **)(*(long *)ppuVar5[1] + 0x18))(ppuVar5[1],&UNK_110a58c00,&uStack_140,ppuVar6);
      func_0x000107c278ac(&puStack_128);
    }
    return;
  }
  return;
}



/* Entry: 10609c098; end: 10609c0db; -[SCFeaturePortraitEffectAlertImpl _dismissSheet:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609c098(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e6d4);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10609c0dc; end: 10609c0eb; -[SCFeaturePortraitEffectAlertImpl _handleUpdateSettingsTap] */

void FUN_10609c0dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23a610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0,PTR_s_showSystemUserInterface__11266c3a8,1)
  ;
  return;
}



/* Entry: 10609c0ec; end: 10609c147; -[SCFeaturePortraitEffectAlertImpl _handleDontRemindMeTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609c0ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e6b0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be03650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissSheet__11255e730,1);
  return;
}



/* Entry: 10609c148; end: 10609c1a7; -[SCFeaturePortraitEffectAlertImpl _handlePortraitEffectChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609c148(long param_1,undefined8 param_2,ulong param_3)

{
  if ((param_3 & 1) == 0) {
    if (*(char *)(param_1 + _DAT_11273e6e0) == '\x01') {
      func_0x00010be03640(param_1,param_2,1);
    }
    if (*(long *)(param_1 + _DAT_11273e6e4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be92870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetCooldown_1125823b8);
      return;
    }
  }
  return;
}



/* Entry: 10609c1a8; end: 10609c387; -[SCFeaturePortraitEffectAlertImpl _shouldNotify] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10609c1a8(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  
  lVar7 = (long)_DAT_11273e6b0;
  uVar2 = *(ulong *)(param_1 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    puVar4 = PTR_PTR_1126c7908;
    func_0x00010c06f7c0();
    if (((ulong)puVar4 & 1) != 0) {
      return true;
    }
    puVar4 = PTR_PTR_1126c7908;
    func_0x00010c0c2dc0();
    lVar8 = (long)_DAT_11273e6cc;
    if (*(long *)(param_1 + lVar8) < (long)(int)puVar4) {
      uVar2 = *(ulong *)(param_1 + lVar7);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      uVar2 = uVar3;
      if ((uVar5 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar3);
      if (uVar2 == 0) {
        bVar6 = true;
      }
      else {
        if (*(long *)(param_1 + lVar8) < 2) {
          puVar4 = PTR_PTR_1126c7908;
          func_0x00010bfb1080();
          iVar1 = (int)puVar4;
        }
        else {
          puVar4 = PTR_PTR_1126c7908;
          func_0x00010bf51c40();
          iVar1 = (int)puVar4;
        }
        dVar9 = (double)iVar1;
        dVar10 = dVar9 * 3600.0;
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380();
        bVar6 = dVar10 < dVar9;
        _objc_release(puVar4);
      }
      _objc_release(uVar2);
      return bVar6;
    }
  }
  return false;
}



/* Entry: 10609c388; end: 10609c3f3; -[SCFeaturePortraitEffectAlertImpl _saveLastAlertDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609c388(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e6b0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e3cc98);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10609c3f4; end: 10609c483; -[SCFeaturePortraitEffectAlertImpl _incrementShownCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609c3f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273e6cc;
  *(long *)(param_1 + lVar3) = *(long *)(param_1 + lVar3) + 1;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e6b0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + lVar3))
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e3ccb8);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10609c484; end: 10609c553; -[SCFeaturePortraitEffectAlertImpl _resetCooldown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609c484(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar6 = (long)_DAT_11273e6e4;
  uVar7 = *(ulong *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + _DAT_11273e6cc) = 0;
  *(undefined8 *)(param_1 + lVar6) = 0;
  lVar6 = (long)_DAT_11273e6b0;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar1);
  lVar6 = *(long *)(param_1 + _DAT_11273e6c8);
  if (uVar7 < 3) {
    ppuVar5 = (undefined **)(&PTR_PTR_11090ba58)[uVar7];
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar5;
  _objc_retain(ppuVar5);
  if (lVar6 != 0) {
    plVar8 = *(long **)(lVar6 + 8);
    _objc_retain(ppuVar5);
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar2 = (undefined **)&UNK_10f4a7fca;
    }
    else {
      ppuVar2 = ppuVar5;
      _objc_retainAutorelease(ppuVar5);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar5);
    func_0x000107c278b8(auStack_60,ppuVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar2 = (undefined **)&UNK_110a58bb0;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110a58bb0,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  ppuVar3 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar5);
  _objc_release(ppuVar5);
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  puStack_88 = &LAB_1085ab6a0;
  if (ppuVar4 != (undefined **)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    ppuStack_a0 = ppuVar3;
    ppuStack_98 = ppuVar5;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(*(long *)ppuVar4[1] + 0x18))(ppuVar4[1],&UNK_110a58c00,&uStack_c0,ppuVar2);
    func_0x000107c278ac(&puStack_a8);
  }
  return;
}



/* Entry: 10609c554; end: 10609c613; -[SCFeaturePortraitEffectAlertImpl _resetAllStateForDebug] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609c554(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + _DAT_11273e6cc) = 0;
  *(undefined8 *)(param_1 + _DAT_11273e6e4) = 0;
  lVar2 = (long)_DAT_11273e6b0;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10609c614; end: 10609c6bb; -[SCFeaturePortraitEffectAlertImpl _setIsRecording:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609c614(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  *(char *)(param_1 + _DAT_11273e6dc) = (char)param_3;
  if (param_3 != 0) {
    lVar2 = (long)_DAT_11273e6f8;
    if (*(long *)(param_1 + lVar2) != 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11273e6bc);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d300();
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
      _objc_release(uVar1);
    }
    if (*(char *)(param_1 + _DAT_11273e6e0) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be03650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissSheet__11255e730,1);
      return;
    }
  }
  return;
}



/* Entry: 10609c6bc; end: 10609c7bb; -[SCFeaturePortraitEffectAlertImpl _setupLifecycleObservationIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609c6bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = (long)_DAT_11273e6fc;
  if (*(long *)(param_1 + lVar3) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273e6c4);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 10609c7bc; end: 10609c87f;  */

void FUN_10609c7bc(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c15c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10609c880; end: 10609c88f;  */

void FUN_10609c880(void)

{
  return;
}



/* Entry: 10609c890; end: 10609c8bf;  */

void FUN_10609c890(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10609c8c0; end: 10609c9cf; -[SCFeaturePortraitEffectAlertImpl tray:heightForPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10609c8c0(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                    undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  _objc_retain(param_6);
  dVar3 = -1.0;
  if (param_7 == 8) {
    if ((*(byte *)(param_4 + _DAT_11273e6e8) & 1) == 0) {
      func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
      dVar3 = param_3 + 340.0;
    }
    else {
      lVar1 = param_4 + _DAT_11273e6ec;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        param_3 = 0.0;
        if (*(char *)(param_4 + _DAT_11273e6f0) == '\x01') {
          param_3 = *(double *)(param_4 + _DAT_11273e6f4);
        }
      }
      else {
        func_0x00010c148fc0(lVar2);
        *(double *)(param_4 + _DAT_11273e6f4) = param_3;
        *(undefined1 *)(param_4 + _DAT_11273e6f0) = 1;
      }
      dVar3 = param_3 + 340.0;
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_6);
  return dVar3;
}



/* Entry: 10609c9d0; end: 10609c9df; -[SCFeaturePortraitEffectAlertImpl tray:positionDidChange:] */

void FUN_10609c9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c27b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_trayDidDismiss__11267c6d0);
    return;
  }
  return;
}



/* Entry: 10609c9e0; end: 10609ca27; -[SCFeaturePortraitEffectAlertImpl trayDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609c9e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11273e6e0;
  if (*(char *)(param_1 + lVar1) == '\x01') {
    func_0x00010bf6f440(*(undefined8 *)(param_1 + _DAT_11273e6c0),param_2,0);
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}



/* Entry: 10609ca28; end: 10609cb8f; -[SCFeaturePortraitEffectAlertImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609ca28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273e700);
  *(undefined **)(param_1 + _DAT_11273e700) = puVar1;
  _objc_release(uVar4);
  puVar2 = auStack_58;
  _objc_initWeak(puVar2,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0e0ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar3 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10609cb90; end: 10609cce3;  */

void FUN_10609cb90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10609cce4;
  puStack_70 = &UNK_11084ec30;
  _objc_copyWeak(auStack_68,param_1 + 0x20);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10609cdec;
  puStack_98 = &UNK_11090b9a8;
  _objc_copyWeak(auStack_90,param_1 + 0x20);
  _objc_copyWeak(auStack_b8,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 10609cce4; end: 10609cdbb;  */

void FUN_10609cce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10609cdbc; end: 10609cdeb;  */

void FUN_10609cdbc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea4e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10609cdec; end: 10609ced7;  */

void FUN_10609cdec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10609ced8; end: 10609cf07;  */

void FUN_10609ced8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea4e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10609cf08; end: 10609cff3;  */

void FUN_10609cf08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10609cff4; end: 10609d023;  */

void FUN_10609cff4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea4e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10609d024; end: 10609d12f; -[SCFeaturePortraitEffectAlertImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609d024(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273e6d0,0);
  _objc_destroyWeak(param_1 + _DAT_11273e6ec);
  _objc_storeStrong(param_1 + _DAT_11273e6fc,0);
  _objc_storeStrong(param_1 + _DAT_11273e6d8,0);
  _objc_storeStrong(param_1 + _DAT_11273e700,0);
  _objc_storeStrong(param_1 + _DAT_11273e6d4,0);
  _objc_storeStrong(param_1 + _DAT_11273e6f8,0);
  _objc_storeStrong(param_1 + _DAT_11273e6c8,0);
  _objc_storeStrong(param_1 + _DAT_11273e6c4,0);
  _objc_storeStrong(param_1 + _DAT_11273e6c0,0);
  _objc_storeStrong(param_1 + _DAT_11273e6bc,0);
  _objc_storeStrong(param_1 + _DAT_11273e6b8,0);
  _objc_storeStrong(param_1 + _DAT_11273e6b4,0);
  _objc_storeStrong(param_1 + _DAT_11273e6b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273e6ac,0);
  return;
}



/* Entry: 10609d130; end: 10609d223; -[SCFeaturePortraitEffectAlertSheet initWithOnUpdateAction:onDontRemindMeAction:onDismissAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10609d130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ef830;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273e704);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273e704) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273e708);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273e708) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273e70c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273e70c) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10609d224; end: 10609df87; -[SCFeaturePortraitEffectAlertSheet viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609d224(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
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
  undefined8 uStack_120;
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
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_118 = PTR_PTR_1126ef830;
  uStack_120 = param_1;
  _objc_msgSendSuper2(&uStack_120,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c1cfce0();
  puVar2 = puVar1;
  func_0x00010c181cc0(0x447a0000,puVar1);
  func_0x0001060acdc4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1);
  _objc_release(puVar2);
  func_0x00010c21ad00(puVar1);
  func_0x00010c1bdb00(puVar1);
  func_0x00010c213040(puVar1);
  func_0x00010c219b60(puVar1);
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  puStack_98 = puVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  puStack_90 = puVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c1cfce0();
  puVar2 = puVar4;
  func_0x00010c181cc0(0x447a0000,puVar4);
  func_0x0001060acddc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar4);
  _objc_release(puVar2);
  func_0x00010c21ad00(puVar4);
  func_0x00010c1bdb00(puVar4);
  func_0x00010c213040(puVar4);
  func_0x00010c219b60(puVar4);
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar4;
  puStack_b0 = puVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar4;
  puStack_a8 = puVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a0 = puVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar18 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181cc0(0x447a0000);
  func_0x00010c219b60(puVar18);
  puVar2 = puVar18;
  func_0x00010c20eaa0();
  func_0x0001060acdf4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar18);
  _objc_release(puVar2);
  func_0x00010c1d3960(puVar18);
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar15 = puVar18;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010bf49480(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar18;
  puStack_c8 = puVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar10;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar18;
  puStack_c0 = puVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar7;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b8 = puVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar14);
  _objc_release(puVar11);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar10);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  puVar19 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181cc0(0x447a0000);
  func_0x00010c219b60(puVar19);
  puVar2 = puVar19;
  func_0x00010c20eaa0(puVar19);
  func_0x0001060ace24();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar19);
  _objc_release(puVar2);
  func_0x00010c1d3960(puVar19);
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar21 = puVar19;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar21;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar19;
  puStack_e8 = puVar20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar19;
  puStack_e0 = puVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar19;
  puStack_d8 = puVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar18;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_d0 = puVar17;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar7);
  _objc_release(puVar20);
  _objc_release(puVar22);
  _objc_release(puVar21);
  puVar16 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181cc0(0x447a0000);
  func_0x00010c219b60(puVar16);
  puVar2 = puVar16;
  func_0x00010c20eaa0();
  func_0x0001060ace0c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar16);
  _objc_release(puVar2);
  func_0x00010c1d3960(puVar16);
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar16;
  puStack_110 = puVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar16;
  puStack_108 = puVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar16;
  puStack_100 = puVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar16;
  puStack_f8 = puVar21;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar18;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar22;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_f0 = puVar24;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(puVar20);
  _objc_release(puVar17);
  _objc_release(uVar13);
  _objc_release(uVar8);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar16);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + _DAT_11273e70c,0);
  _objc_storeStrong(puVar1 + _DAT_11273e708,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + _DAT_11273e704,0);
  return;
}



/* Entry: 10609df88; end: 10609dfd7; -[SCFeaturePortraitEffectAlertSheet .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609df88(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273e70c,0);
  _objc_storeStrong(param_1 + _DAT_11273e708,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273e704,0);
  return;
}



/* Entry: 10609dfd8; end: 10609e093; -[SCFeaturePortraitEffectToolbarButtonImpl initWithCaptureDeviceManager:cameraHardwareResource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10609dfd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ef838;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273e710;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e714;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10609e094; end: 10609e607; -[SCFeaturePortraitEffectToolbarButtonImpl configureWithCameraToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609e094(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  lVar15 = (long)_DAT_11273e718;
  lVar16 = param_1 + lVar15;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar16 != param_3) {
    _objc_storeWeak(param_1 + lVar15,param_3);
    puVar1 = PTR_PTR_1126c7918;
    _objc_alloc();
    func_0x00010c037be0();
    func_0x00010c1cdb60();
    puVar2 = puVar1;
    func_0x00010c1fb140(puVar1);
    func_0x0001060ace3c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cdba0(puVar1);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c0db340(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb640(puVar1);
    _objc_release(puVar2);
    func_0x00010c160fc0(puVar1);
    puVar2 = puVar1;
    func_0x00010c0db340(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(puVar1);
    _objc_release(puVar2);
    func_0x0001060ace54();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1610c0(puVar1);
    _objc_release(puVar2);
    func_0x0001060ace6c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1610e0(puVar1);
    _objc_release(puVar2);
    func_0x00010c177460(puVar1);
    lVar16 = (long)_DAT_11273e71c;
    _objc_retain(puVar1);
    uVar3 = *(undefined8 *)(param_1 + lVar16);
    *(undefined **)(param_1 + lVar16) = puVar1;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273e720);
    *(undefined **)(param_1 + _DAT_11273e720) = puVar2;
    _objc_release(uVar3);
    _objc_initWeak(auStack_80,param_1);
    puVar4 = puVar1;
    func_0x00010bf2c660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10609e608;
    puStack_90 = &UNK_11090ba70;
    _objc_copyWeak(auStack_88,auStack_80);
    puVar5 = puVar4;
    func_0x00010c25ff60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010befc4a0(param_3);
    uVar6 = *(undefined8 *)(param_1 + _DAT_11273e710);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf2fa00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar6 = uVar3;
    func_0x00010bfbb1e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar6;
    func_0x00010c0e0ec0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar2;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x10609e658;
    puStack_b8 = &UNK_110842a38;
    _objc_copyWeak(auStack_b0,auStack_80);
    uVar8 = uVar14;
    func_0x00010c25ff60(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar8);
    _objc_release(uVar14);
    _objc_release(uVar7);
    lVar16 = (long)_DAT_11273e714;
    uVar9 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010c0b7ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar14;
    func_0x00010c160440();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010c0e0ec0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d8,auStack_80);
    uVar13 = uVar12;
    func_0x00010c25ff60(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar8);
    _objc_release(uVar14);
    _objc_release(uVar7);
    _objc_release(uVar9);
    uVar14 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar14;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf70d80();
    func_0x00010bed6dc0(param_1);
    _objc_release(uVar7);
    _objc_release(uVar14);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_b0);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10609e608; end: 10609e6af;  */

void FUN_10609e608(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be322a0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10609e6b0; end: 10609e753;  */

void FUN_10609e6b0(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e38c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10609e754; end: 10609e7af;  */

void FUN_10609e754(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf70d80(param_2);
    func_0x00010bed6dc0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10609e7b0; end: 10609e84b; -[SCFeaturePortraitEffectToolbarButtonImpl _handleToolbarButtonEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609e7b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c273a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273e710);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf2fa00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9a00();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  func_0x00010c200100(param_3,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10609e84c; end: 10609e90f; -[SCFeaturePortraitEffectToolbarButtonImpl _updatePortraitEffectActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609e84c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + _DAT_11273e724) == '\x01') {
    lVar2 = (long)_DAT_11273e718;
    lVar1 = param_1 + lVar2;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c216f60();
    _objc_release(lVar1);
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained(param_1);
    if (param_3 == 0) {
      func_0x00010c281d80(param_1,param_2,&PTR__OBJC_CLASS___NSConstantArray_11117feb8,
                          &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4648);
    }
    else {
      func_0x00010c0fc100(param_1,param_2,&PTR__OBJC_CLASS___NSConstantArray_11117fea0,
                          &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4648);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10609e910; end: 10609ea27; -[SCFeaturePortraitEffectToolbarButtonImpl _updateDevicePosition:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609e910(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(bool *)(param_1 + _DAT_11273e724) = param_3 == 0;
  lVar3 = (long)_DAT_11273e718;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  if (param_3 == 0) {
    func_0x00010c23a840();
    _objc_release(lVar1);
    lVar3 = *(long *)(param_1 + _DAT_11273e710);
    func_0x00010c269d40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf2fa00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c080820();
    func_0x00010bedd840(param_1,param_2,lVar2);
    _objc_release(lVar1);
  }
  else {
    func_0x00010c216f60();
    _objc_release(lVar1);
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c281d80();
    _objc_release(lVar1);
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bfe2c00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10609ea28; end: 10609ea2b; -[SCFeaturePortraitEffectToolbarButtonImpl configureWithView:] */

void FUN_10609ea28(void)

{
  return;
}



/* Entry: 10609ea2c; end: 10609ea97; -[SCFeaturePortraitEffectToolbarButtonImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609ea2c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273e71c,0);
  _objc_destroyWeak(param_1 + _DAT_11273e718);
  _objc_storeStrong(param_1 + _DAT_11273e720,0);
  _objc_storeStrong(param_1 + _DAT_11273e714,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273e710,0);
  return;
}



/* Entry: 10609ea98; end: 10609edeb; -[SCFeatureLensSmudgeAlertImpl initWithManagedCapturerStateCoordinator:notificationManager:lensCarouselManager:userPreferences:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10609ea98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
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
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_1126ef840;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar11 = (long)_DAT_11273e728;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_3;
    _objc_release(uVar2);
    lVar10 = (long)_DAT_11273e72c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_4;
    _objc_release(uVar2);
    lVar10 = (long)_DAT_11273e730;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b7008;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273e734);
    *(undefined **)((long)puVar1 + (long)_DAT_11273e734) = puVar3;
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c067f80();
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273e738) = uVar2;
    _objc_release(uVar4);
    _objc_initWeak(auStack_88,puVar1);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273e73c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273e73c) = 0;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273e740);
    *(undefined **)((long)puVar1 + (long)_DAT_11273e740) = puVar3;
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf70e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c0e0ec0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10609edec;
    puStack_98 = &UNK_11086e3f0;
    _objc_copyWeak(auStack_90,auStack_88);
    uVar8 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar5);
    puVar9 = auStack_b8;
    _objc_copyWeak(puVar9,auStack_88);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297280(param_5);
    _objc_release(puVar9);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10609edec; end: 10609ee8f;  */

void FUN_10609edec(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e3940(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10609ee90; end: 10609eef7;  */

void FUN_10609ee90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126c7920;
    func_0x00010c077e80();
    if (((ulong)puVar1 & 1) == 0) {
      func_0x00010bf29b00(param_2);
      func_0x00010be305c0(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10609eef8; end: 10609ef7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609eef8(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 == 0)) {
    lVar1 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_1 + _DAT_11273e744,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10609ef80; end: 10609ef83; -[SCFeatureLensSmudgeAlertImpl activate] */

void FUN_10609ef80(void)

{
  return;
}



/* Entry: 10609ef84; end: 10609ef87; -[SCFeatureLensSmudgeAlertImpl configureWithView:] */

void FUN_10609ef84(void)

{
  return;
}



/* Entry: 10609ef88; end: 10609ef8b; -[SCFeatureLensSmudgeAlertImpl resetMetrics] */

void FUN_10609ef88(void)

{
  return;
}



/* Entry: 10609ef8c; end: 10609ef97; -[SCFeatureLensSmudgeAlertImpl usageMetrics] */

undefined * FUN_10609ef8c(void)

{
  return PTR____NSDictionary0__struct_11034ab58;
}



/* Entry: 10609ef98; end: 10609efef; -[SCFeatureLensSmudgeAlertImpl _handleSmudgeStatus:] */

void FUN_10609ef98(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    if (param_3 != 2) {
      if (param_3 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010beba0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showNotificationIfEligible_11258c1d8);
        return;
      }
      return;
    }
    func_0x00010be92e80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be02eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissNotificationIfNeeded_11255e548);
  return;
}



/* Entry: 10609eff0; end: 10609f193; -[SCFeatureLensSmudgeAlertImpl _resetImpressionCountIfAwaitingClean] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609eff0(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = (long)_DAT_11273e730;
  uVar1 = *(undefined8 *)(param_2 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  if ((int)uVar5 != 0) {
    lVar2 = *(long *)(param_2 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf64fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      param_1 = param_1 * 1000.0;
      _objc_release(puVar4);
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      lVar2 = param_2;
      func_0x00010becc000(param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)_DAT_11273e734;
      func_0x0001085ab718(*(undefined8 *)(param_2 + lVar7),lVar2,1);
      func_0x0001085ab88c(*(undefined8 *)(param_2 + lVar7),(long)param_1);
      _objc_release(lVar2);
    }
    *(undefined8 *)(param_2 + _DAT_11273e738) = 0;
    uVar5 = *(undefined8 *)(param_2 + lVar6);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1add40();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_2 + lVar6);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c172fe0();
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 10609f194; end: 10609f377; -[SCFeatureLensSmudgeAlertImpl _showNotificationIfEligible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609f194(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126c7920;
  func_0x00010c06be60();
  if (((int)puVar1 != 0) && ((*(byte *)(param_1 + _DAT_11273e74c) & 1) == 0)) {
    uVar2 = param_1 + _DAT_11273e744;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010bef03e0();
    _objc_release(uVar2);
    if (((uVar3 & 1) == 0) && (lVar4 = param_1, func_0x00010be428a0(), (int)lVar4 != 0)) {
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b1370;
      func_0x00010c25d500(PTR_PTR_1126b1370,param_2,0x56);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_2,puVar5,&PTR____CFConstantStringClassReference_110dad058);
      _objc_release(puVar5);
      func_0x0001060ace84();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_2,puVar5,&PTR____CFConstantStringClassReference_110dad0b8);
      _objc_release(puVar5);
      func_0x0001060ace9c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_2,puVar5,&PTR____CFConstantStringClassReference_110dad858);
      _objc_release(puVar5);
      func_0x00010c1d0640(puVar1,param_2,&PTR____CFConstantStringClassReference_110db0538,
                          &PTR____CFConstantStringClassReference_110f9e958);
      puVar5 = PTR_PTR_1126b1370;
      _objc_alloc();
      puVar6 = puVar1;
      func_0x00010bf51e00(puVar1);
      func_0x00010c030320(puVar5,param_2,puVar6,2);
      uVar7 = *(undefined8 *)(param_1 + _DAT_11273e750);
      *(undefined **)(param_1 + _DAT_11273e750) = puVar5;
      _objc_release(uVar7);
      _objc_release(puVar6);
      uVar7 = *(undefined8 *)(param_1 + _DAT_11273e72c);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa0a0();
      _objc_release(uVar7);
      func_0x00010be87720(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
  }
  return;
}



/* Entry: 10609f378; end: 10609f3ef; -[SCFeatureLensSmudgeAlertImpl _dismissNotificationIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609f378(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273e750;
  if (*(long *)(param_1 + lVar2) != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11273e72c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d300();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10609f3f0; end: 10609f503; -[SCFeatureLensSmudgeAlertImpl _isPastCooldown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10609f3f0(double param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c7920;
  func_0x00010c06f7c0();
  if (((ulong)puVar2 & 1) != 0) {
    return 1;
  }
  lVar3 = *(long *)(param_2 + _DAT_11273e730);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf64fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    puVar2 = PTR_PTR_1126c7920;
    func_0x00010bf99600();
    if (*(long *)(param_2 + _DAT_11273e738) < (long)(int)puVar2) {
      puVar2 = PTR_PTR_1126c7920;
      func_0x00010bf51c20();
      iVar1 = (int)puVar2;
    }
    else {
      puVar2 = PTR_PTR_1126c7920;
      func_0x00010bf995e0();
      iVar1 = (int)puVar2;
    }
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar2);
    if (param_1 < (double)iVar1 * 3600.0) {
      uVar5 = 0;
      goto LAB_10609f4e4;
    }
  }
  uVar5 = 1;
LAB_10609f4e4:
  _objc_release(lVar4);
  return uVar5;
}



/* Entry: 10609f504; end: 10609f5ff; -[SCFeatureLensSmudgeAlertImpl _recordImpression] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609f504(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11273e730;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
  _objc_release(uVar1);
  *(long *)(param_1 + _DAT_11273e738) = *(long *)(param_1 + _DAT_11273e738) + 1;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1add40();
  _objc_release(uVar1);
  if (*(long *)(param_1 + _DAT_11273e734) != 0) {
    plVar3 = *(long **)(*(long *)(param_1 + _DAT_11273e734) + 8);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110a58c00,&stack0xffffffffffffffc0,1);
    func_0x000107c278ac(&stack0xffffffffffffffd8);
  }
  return;
}



/* Entry: 10609f600; end: 10609f693; -[SCFeatureLensSmudgeAlertImpl _timeToCleanBucketForElapsedMs:] */

undefined ** FUN_10609f600(double param_1)

{
  undefined **ppuVar1;
  
  if (param_1 < 5000.0) {
    return &PTR____CFConstantStringClassReference_110e3cdf8;
  }
  if (param_1 < 15000.0) {
    return &PTR____CFConstantStringClassReference_110e3ce18;
  }
  if (param_1 < 30000.0) {
    return &PTR____CFConstantStringClassReference_110e3ce38;
  }
  if (param_1 < 60000.0) {
    return &PTR____CFConstantStringClassReference_110e3ce58;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3ce78;
  if (300000.0 <= param_1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e3ce98;
  }
  return ppuVar1;
}



/* Entry: 10609f694; end: 10609f74b; -[SCFeatureLensSmudgeAlertImpl _resetCooldown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609f694(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + _DAT_11273e738) = 0;
  lVar2 = (long)_DAT_11273e730;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10609f74c; end: 10609f763; -[SCFeatureLensSmudgeAlertImpl _setIsRecording:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609f74c(long param_1,undefined8 param_2,int param_3)

{
  *(char *)(param_1 + _DAT_11273e74c) = (char)param_3;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be02eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissNotificationIfNeeded_11255e548);
    return;
  }
  return;
}



/* Entry: 10609f764; end: 10609fbaf; -[SCFeatureLensSmudgeAlertImpl _installMockStatusPickerInView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609f764(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined **ppuVar18;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar17 = (long)_DAT_11273e748;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar17));
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  func_0x00010c16e060();
  func_0x00010c207380(0x4020000000000000,puVar1);
  func_0x00010c219b60(puVar1);
  ppuVar18 = &PTR__OBJC_CLASS___NSConstantArray_11117fee8;
  func_0x00010bf529e0();
  if (ppuVar18 != (undefined **)0x0) {
    ppuVar18 = (undefined **)0x0;
    do {
      puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
      func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c211780();
      puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf1eda0(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c271420(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480();
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = puVar2;
      func_0x00010c08c0e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4018000000000000);
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf414e0(0x3fe199999999999a);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar3);
      ppuVar5 = &PTR__OBJC_CLASS___NSConstantArray_11117fee8;
      func_0x00010c0dfd40(&PTR__OBJC_CLASS___NSConstantArray_11117fee8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216260(puVar2);
      _objc_release(ppuVar5);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216380(puVar2);
      _objc_release(puVar3);
      func_0x00010befbd60(puVar2);
      puVar3 = puVar2;
      func_0x00010bfe0660(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf49420(0x4042000000000000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162480();
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x00010bef6d60(puVar1);
      _objc_release(puVar2);
      ppuVar18 = (undefined **)((long)ppuVar18 + 1);
      ppuVar5 = &PTR__OBJC_CLASS___NSConstantArray_11117fee8;
      func_0x00010bf529e0();
    } while (ppuVar18 < ppuVar5);
  }
  func_0x00010befbb60(param_3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf49420(0x405e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_release(uVar14);
  _objc_release(puVar3);
  uVar14 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar14);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c268120(puVar15);
  func_0x00010be36100(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be305d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__handleSmudgeStatus__112569b10,puVar15);
  return;
}



/* Entry: 10609fbb0; end: 10609fbeb; -[SCFeatureLensSmudgeAlertImpl _mockStatusButtonTapped:] */

void FUN_10609fbb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c268120(param_3);
  func_0x00010be36100(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be305d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleSmudgeStatus__112569b10,param_3);
  return;
}



/* Entry: 10609fbec; end: 10609fd9f; -[SCFeatureLensSmudgeAlertImpl _highlightMockButtonForStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609fbec(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 unaff_x21;
  ulong unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  long unaff_x25;
  undefined **unaff_x26;
  long lVar11;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined **ppuStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  ulong uStack_158;
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
  undefined1 auStack_100 [128];
  long lStack_80;
  
  puVar8 = &uStack_140;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar1 = *(long *)(param_1 + _DAT_11273e748);
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = auStack_100;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x25 = *plStack_130;
    unaff_x26 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      lVar11 = 0;
      do {
        if (*plStack_130 != unaff_x25) {
          _objc_enumerationMutation(lVar1);
        }
        unaff_x22 = *(ulong *)(lStack_138 + lVar11 * 8);
        puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
        _objc_opt_class(PTR__OBJC_CLASS___UIButton_1126aec48);
        uVar4 = unaff_x22;
        _objc_opt_isKindOfClass(unaff_x22,puVar3);
        if ((uVar4 & 1) != 0) {
          uVar4 = unaff_x22;
          func_0x00010c268120();
          unaff_x23 = PTR__OBJC_CLASS___UIColor_1126aea70;
          if (uVar4 == param_3) {
            func_0x00010c266e60();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = 0x3feccccccccccccd;
          }
          else {
            func_0x00010bf1c920();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = 0x3fe199999999999a;
          }
          unaff_x24 = unaff_x23;
          func_0x00010bf414e0(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16e440(unaff_x22);
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      puVar9 = auStack_100;
      lVar2 = lVar1;
      puVar8 = &uStack_140;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar2 != 0);
  }
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10609fda0;
  ppuStack_190 = unaff_x26;
  lStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  uStack_170 = unaff_x22;
  uStack_168 = unaff_x21;
  lStack_160 = lVar1;
  uStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  puVar3 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar10 = *(undefined8 *)(lVar2 + _DAT_11273e754);
  *(undefined **)(lVar2 + _DAT_11273e754) = puVar3;
  _objc_release(uVar10);
  puVar5 = auStack_198;
  _objc_initWeak(puVar5,lVar2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined1 *)puVar8;
  func_0x00010c0e0ec0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1a0,auStack_198);
  puVar7 = puVar6;
  func_0x00010c25ff60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_198);
  _objc_release(puVar9);
  _objc_release(puVar8);
  return;
}



/* Entry: 10609fda0; end: 10609ff07; -[SCFeatureLensSmudgeAlertImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609fda0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273e754);
  *(undefined **)(param_1 + _DAT_11273e754) = puVar1;
  _objc_release(uVar4);
  puVar2 = auStack_58;
  _objc_initWeak(puVar2,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0e0ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar3 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10609ff08; end: 1060a005b;  */

void FUN_10609ff08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1060a005c;
  puStack_70 = &UNK_11084ec30;
  _objc_copyWeak(auStack_68,param_1 + 0x20);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1060a0094;
  puStack_98 = &UNK_11090b9a8;
  _objc_copyWeak(auStack_90,param_1 + 0x20);
  _objc_copyWeak(auStack_b8,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 1060a005c; end: 1060a0103;  */

void FUN_1060a005c(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bea4e00(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060a0104; end: 1060a01bf; -[SCFeatureLensSmudgeAlertImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a0104(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273e748,0);
  _objc_storeStrong(param_1 + _DAT_11273e73c,0);
  _objc_destroyWeak(param_1 + _DAT_11273e744);
  _objc_storeStrong(param_1 + _DAT_11273e754,0);
  _objc_storeStrong(param_1 + _DAT_11273e740,0);
  _objc_storeStrong(param_1 + _DAT_11273e750,0);
  _objc_storeStrong(param_1 + _DAT_11273e734,0);
  _objc_storeStrong(param_1 + _DAT_11273e730,0);
  _objc_storeStrong(param_1 + _DAT_11273e72c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273e728,0);
  return;
}



/* Entry: 1060a01c0; end: 1060a071f; -[SCFeatureMultiCamModeImpl initWithValdiRuntimeProvider:cameraHardwareServicesAPI:captureDeviceManager:cameraHardwareResource:lensMode:cameraUIServices:contentDeliveryServices:cameraTooltipsService:multiCamModeConfig:verticalToolbarConfig:featureUpdateEventSubject:cameraViewType:toggleCameraRef:mainCameraScan:cameraUserBlizzardLogger:viewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:applicationLifecycleEvents:zoom:directorModePresenting:cameraFeaturePerformanceFeatureScopedLoggerFactory:ringFlashMode:userPreferences:lensStackingConfiguration:cameraDeviceSettingsConfiguration:deviceSettingsResolver:cameraUsageTier:cameraZoomFactorsConfiguration:batchCaptureConfig:lensCarouselApplicator:cameraModeActivationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1060a01c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_17);
  _objc_retain(param_21);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  puStack_70 = PTR_PTR_1126ef848;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithCameraModeConfig_cameraH_112526150,param_11,param_6,
                      param_7,param_13,param_14,param_16,param_8,param_9,param_10,param_18,param_19,
                      param_20,param_22);
  if (puVar1 != (undefined8 *)0x0) {
    lVar7 = (long)_DAT_11273e758;
    _objc_retain(param_27);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_27;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11273e75c;
    _objc_retain(param_28);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_28;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11273e760,param_3);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11273e764,param_4);
    lVar7 = (long)_DAT_11273e768;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_5;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_11273e76c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_11;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11273e770;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_12;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11273e774;
    _objc_retain(param_26);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_26;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11273e778,param_25);
    lVar7 = (long)_DAT_11273e77c;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_15;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11273e780;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_24;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11273e784;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_21;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273e788) = param_29;
    lVar7 = (long)_DAT_11273e78c;
    _objc_retain(param_30);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_30;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11273e790;
    _objc_retain(param_31);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_31;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11273e794;
    _objc_retain(param_32);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_32;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11273e798,param_33);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273e79c);
    *(undefined **)((long)puVar1 + (long)_DAT_11273e79c) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b01a0;
    _objc_alloc();
    puVar4 = puVar1;
    func_0x00010bf29f00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffbf40();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273e7a0);
    *(undefined **)((long)puVar1 + (long)_DAT_11273e7a0) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    uVar2 = param_23;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf54f40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273e7a4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273e7a4) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273e7a8);
    *(undefined **)((long)puVar1 + (long)_DAT_11273e7a8) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273e7ac) = 1;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c158980();
    _objc_release(uVar5);
    if ((int)uVar2 != 0) {
      uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010bf07f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24f900(puVar1);
      _objc_release(uVar2);
      _objc_release(uVar5);
    }
  }
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_21);
  _objc_release(param_17);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1060a0720; end: 1060a077b; -[SCFeatureMultiCamModeImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a0720(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar2 = (long)_DAT_11273e7b0;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126ef848;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1060a077c; end: 1060a0863; -[SCFeatureMultiCamModeImpl startObservingManagedVideoDataSourceOutputEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a077c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11273e7b0;
  if (*(long *)(param_1 + lVar3) == 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    uVar1 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = uVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1060a0864; end: 1060a0953;  */

void FUN_1060a0864(long param_1,undefined8 param_2)

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
  pcStack_68 = FUN_1060a0954;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0bd5e0(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1060a0954; end: 1060a09ab;  */

void FUN_1060a0954(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060a09ac; end: 1060a09df; -[SCFeatureMultiCamModeImpl stopObservingManagedVideoDataSourceOutputEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a09ac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273e7b0;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060a09e0; end: 1060a0aab; -[SCFeatureMultiCamModeImpl _didDeliverSecondarySampleBufferToLensCore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a09e0(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  *(ulong *)(param_1 + _DAT_11273e7b4) = *(ulong *)(param_1 + _DAT_11273e7b4) | 4;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1060a0a7c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1060a0aac; end: 1060a0ac3; -[SCFeatureMultiCamModeImpl _didOutputSecondarySampleBuffer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a0aac(long param_1)

{
  *(ulong *)(param_1 + _DAT_11273e7b4) = *(ulong *)(param_1 + _DAT_11273e7b4) | 2;
  return;
}



/* Entry: 1060a0ac4; end: 1060a0b13; -[SCFeatureMultiCamModeImpl cameraModeLensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a0ac4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e76c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf29f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060a0b14; end: 1060a0b53; -[SCFeatureMultiCamModeImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a0b14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e7b8);
  *(undefined8 *)(param_1 + _DAT_11273e7b8) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beab550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupCameraModeActivationInfoOb_1125886f8);
  return;
}



/* Entry: 1060a0b54; end: 1060a0c6f; -[SCFeatureMultiCamModeImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a0b54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf18700(*(undefined8 *)(param_1 + _DAT_11273e7a0));
  lVar3 = (long)_DAT_11273e7bc;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar3));
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar1 = param_3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1060a0c70; end: 1060a0d33;  */

void FUN_1060a0c70(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1060a0d34; end: 1060a0d6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a0d34(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf84c20(*(undefined8 *)(param_1 + _DAT_11273e7c0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060a0d70; end: 1060a0d93; -[SCFeatureMultiCamModeImpl secondaryButtonState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1060a0d70(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + _DAT_11273e7c4) + 4;
  if (4 < *(int *)(param_1 + _DAT_11273e7c4) - 1U) {
    iVar1 = 4;
  }
  return iVar1;
}



/* Entry: 1060a0d94; end: 1060a0da3; -[SCFeatureMultiCamModeImpl toolbarButtonPositionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a0d94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e4bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273e7c0),
             PTR_s_onLayoutDMToolbarItemViewComplet_112616d10);
  return;
}



/* Entry: 1060a0da4; end: 1060a0da7; -[SCFeatureMultiCamModeImpl isCameraModeActivated] */

void FUN_1060a0da4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06ded0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isCameraModeEnabled_1125f91c0);
  return;
}



/* Entry: 1060a0da8; end: 1060a0db7; -[SCFeatureMultiCamModeImpl shouldBlockTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a0da8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07abf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273e7c0),PTR_s_isPresentingLayoutWidget_1125fc508);
  return;
}



/* Entry: 1060a0db8; end: 1060a0e4b; -[SCFeatureMultiCamModeImpl onTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a0db8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010c0cfda0();
  func_0x00010c0e70a0(*(undefined8 *)(param_1 + (long)_DAT_11273e7c0));
  if (((int)uVar1 == (int)param_3) && (uVar1 = param_1, func_0x00010c06dec0(), (uVar1 & 1) == 0)) {
    func_0x00010c0e3e00(*(undefined8 *)(param_1 + (long)_DAT_11273e7a0));
  }
  puStack_38 = PTR_PTR_1126ef848;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_onTap__1126175d8,param_3);
  return;
}



/* Entry: 1060a0e4c; end: 1060a0e83; -[SCFeatureMultiCamModeImpl secondaryOnTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a0e4c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e7c0);
  func_0x00010c0cfda0();
                    /* WARNING: Could not recover jumptable at 0x00010c0e70f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s_onTapSecondaryButtonOfDualStream_112617650,param_3 == (int)param_1);
  return;
}



/* Entry: 1060a0e84; end: 1060a0e8f; -[SCFeatureMultiCamModeImpl incompatibleModes] */

undefined ** FUN_1060a0e84(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_11117ff00;
}



/* Entry: 1060a0e90; end: 1060a0f27; -[SCFeatureMultiCamModeImpl targetZoomDevice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1060a0e90(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(int *)(param_1 + _DAT_11273e7c4) == 2) {
    param_1 = param_1 + _DAT_11273e764;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf5e320();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c154f00();
    func_0x0001007089bc();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
    return lVar3;
  }
  return 1;
}



/* Entry: 1060a0f28; end: 1060a0f37; -[SCFeatureMultiCamModeImpl didTapNonDMDualStreamCamPrimaryButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a0f28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273e7a0),
             PTR_s_didTapNonDMDualStreamCamPrimaryB_1125bcd18);
  return;
}



/* Entry: 1060a0f38; end: 1060a0f43; -[SCFeatureMultiCamModeImpl didChangeSelectionOfNonDMDualStreamCamPrimaryButton:] */

void FUN_1060a0f38(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf8ef30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_enable_1125c1570);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf7f9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_disable_1125bd820);
  return;
}



/* Entry: 1060a0f44; end: 1060a0f97; -[SCFeatureMultiCamModeImpl didSelectDualStreamCamLayoutFromWidgetMenu:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a0f44(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf7cc60(*(undefined8 *)(param_1 + _DAT_11273e7a0));
                    /* WARNING: Could not recover jumptable at 0x00010bea3290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setCurrentLayout_animated__112586648,param_3,
             (int)param_3 != *(int *)(param_1 + _DAT_11273e7c4));
  return;
}



/* Entry: 1060a0f98; end: 1060a10e3; -[SCFeatureMultiCamModeImpl _setupCameraModeActivationInfoObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a0f98(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + _DAT_11273e798;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfbbc00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar4 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1060a10e4; end: 1060a118b;  */

void FUN_1060a10e4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0be6c0(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060a118c; end: 1060a118f;  */

void FUN_1060a118c(void)

{
  return;
}



/* Entry: 1060a1190; end: 1060a11c7;  */

void FUN_1060a1190(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06dec0();
  if (iVar1 != 0) {
    func_0x00010bf7f9e0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea88d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setToolbarItemVisible__112587bd8,0);
  return;
}



/* Entry: 1060a11c8; end: 1060a11d3;  */

void FUN_1060a11c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea88d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setToolbarItemVisible__112587bd8,1);
  return;
}



/* Entry: 1060a11d4; end: 1060a1267; -[SCFeatureMultiCamModeImpl _setToolbarItemVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a11d4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273e7c0;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 != 0) {
    func_0x00010c273a00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010bfc35c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      if (param_3 == 0) {
        func_0x00010bfe2c00();
      }
      else {
        func_0x00010c23a840();
      }
      _objc_release(uVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1060a1268; end: 1060a12bb; -[SCFeatureMultiCamModeImpl _didSelectLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a1268(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf7cc60(*(undefined8 *)(param_1 + _DAT_11273e7a0));
                    /* WARNING: Could not recover jumptable at 0x00010bea3290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setCurrentLayout_animated__112586648,param_3,
             (int)param_3 != *(int *)(param_1 + _DAT_11273e7c4));
  return;
}



/* Entry: 1060a12bc; end: 1060a131f; -[SCFeatureMultiCamModeImpl configureWithCameraToolbar:] */

void FUN_1060a12bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  func_0x00010bdf51e0(param_1);
  puStack_28 = PTR_PTR_1126ef848;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_configureWithCameraToolbar__1125af758,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 1060a1320; end: 1060a1457; -[SCFeatureMultiCamModeImpl _createUIIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a1320(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126c7928;
  lVar7 = (long)_DAT_11273e7c0;
  if (*(long *)(param_1 + lVar7) != 0) {
    return;
  }
  _objc_retain(param_3);
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11273e7b8);
  lVar2 = param_1 + _DAT_11273e760;
  _objc_loadWeakRetained(lVar2);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11273e76c);
  lVar3 = param_1;
  func_0x00010bf2b520(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0753e0(param_1);
  func_0x00010c002820(puVar1,param_2,uVar5,param_3,lVar2,uVar6,lVar3,lVar4,
                      *(undefined1 *)(param_1 + _DAT_11273e7c8));
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar5);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1060a1458; end: 1060a145f; -[SCFeatureMultiCamModeImpl cameraModeType] */

undefined8 FUN_1060a1458(void)

{
  return 4;
}


