/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106fe1c84; end: 106fe1cc7;  */

void FUN_106fe1c84(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106fe1cc8; end: 106fe1cd7;  */

void FUN_106fe1cc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106fe1cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106fe1cd8; end: 106fe1e3b; -[SCUserNotificationAttachmentGenerator _createAttachmentForImage:fileName:] */

void FUN_106fe1cd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bfacc20(uVar2,param_2,param_4,0);
  if ((uVar2 & 1) == 0) {
    uVar3 = param_3;
    _UIImagePNGRepresentation(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c14ada0(uVar4,param_2,uVar3,param_4,0);
    _objc_release(uVar3);
    puVar7 = (undefined *)0x0;
    if ((int)uVar4 == 0) goto LAB_106fe1e10;
  }
  lVar5 = *(long *)(param_1 + 8);
  func_0x00010bfad200(lVar5,param_2,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = (undefined *)0x0;
    if (puVar6 != (undefined *)0x0) {
      lStack_48 = 0;
      puVar6 = PTR__OBJC_CLASS___UNNotificationAttachment_1126c1c30;
      func_0x00010bf0d7c0(PTR__OBJC_CLASS___UNNotificationAttachment_1126c1c30,param_2,param_4,lVar5
                          ,0,&lStack_48);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lStack_48;
      _objc_retain(lStack_48);
      puVar7 = (undefined *)0x0;
      if ((puVar6 != (undefined *)0x0) && (lVar1 == 0)) {
        _objc_retain(puVar6);
        puVar7 = puVar6;
      }
      _objc_release(puVar6);
      _objc_release(lVar1);
    }
  }
  _objc_release(lVar5);
LAB_106fe1e10:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106fe1e3c; end: 106fe1ebb; -[SCUserNotificationAttachmentGenerator .cxx_destruct] */

void FUN_106fe1e3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fe1ebc; end: 106fe1ed7;  */

void FUN_106fe1ebc(void)

{
  _objc_opt_new(PTR_PTR_1126d3f78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fe1ed8; end: 106fe1eff; -[SCUserNotificationCenterController clearNotificationDataWithSnapshot:] */

void FUN_106fe1ed8(long param_1)

{
  func_0x00010bf3bc20(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bf3b490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_clearFiles_1125ac6c8)
  ;
  return;
}



/* Entry: 106fe1f00; end: 106fe20e3; -[SCUserNotificationCenterController didApplicationStateChange:withCurrentNotifications:snapshot:] */

void FUN_106fe1f00(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_158 [128];
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010bf3ba80(param_1,param_2,param_5);
  if ((param_3 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    plStack_190 = (long *)0x0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    _objc_retain(param_4);
    lVar5 = param_4;
    func_0x00010bf52a60(param_4,param_2,&uStack_1a0,auStack_d8,0x10);
    if (lVar5 != 0) {
      lVar6 = *plStack_190;
      do {
        lVar8 = 0;
        do {
          if (*plStack_190 != lVar6) {
            _objc_enumerationMutation(param_4);
          }
          uVar4 = *(undefined8 *)(lStack_198 + lVar8 * 8);
          uVar2 = uVar4;
          func_0x00010c232680();
          if ((int)uVar2 != 0) {
            func_0x00010befa120(puVar1,param_2,uVar4);
          }
          lVar8 = lVar8 + 1;
        } while (lVar5 != lVar8);
        lVar5 = param_4;
        func_0x00010bf52a60(param_4,param_2,&uStack_1a0,auStack_d8,0x10);
      } while (lVar5 != 0);
    }
    _objc_release(param_4);
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    lStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    _objc_retain(puVar1);
    puVar3 = puVar1;
    func_0x00010bf52a60(puVar1,param_2,&uStack_1e0,auStack_158,0x10);
    if (puVar3 != (undefined *)0x0) {
      lVar5 = *plStack_1d0;
      do {
        puVar7 = (undefined *)0x0;
        do {
          if (*plStack_1d0 != lVar5) {
            _objc_enumerationMutation(puVar1);
          }
          func_0x00010bf86100(param_1,param_2,*(undefined8 *)(lStack_1d8 + (long)puVar7 * 8));
          puVar7 = puVar7 + 1;
        } while (puVar3 != puVar7);
        puVar3 = puVar1;
        func_0x00010bf52a60(puVar1,param_2,&uStack_1e0,auStack_158,0x10);
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 106fe20e4; end: 106fe20e7; -[SCUserNotificationCenterController hideNotification:] */

void FUN_106fe20e4(void)

{
  return;
}



/* Entry: 106fe20e8; end: 106fe213f; -[SCUserNotificationCenterController canDisplayNotification:] */

undefined8 FUN_106fe20e8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010beb3540(param_1,param_2,param_3);
  if ((param_1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c22f2c0(param_3);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106fe2140; end: 106fe219b; -[SCUserNotificationCenterController _shouldDisplayViaNSEWorkaround:] */

undefined * FUN_106fe2140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ec8;
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1d560(puVar1,param_2,param_3,&PTR____CFConstantStringClassReference_110f9ef78);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106fe219c; end: 106fe2273; +[SCUserNotificationCenterController _getBoolFromDict:key:] */

ulong FUN_106fe219c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar4;
  undefined **ppuVar3;
  
  func_0x00010c0e00e0(param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar4 & 1) == 0) {
    ppuVar3 = &PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar4 & 1) == 0) {
      uVar4 = 0;
      goto LAB_106fe2258;
    }
  }
  puVar2 = *ppuVar3;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar4 = uVar1;
  func_0x00010bf1f3c0(uVar1);
  _objc_release(uVar1);
LAB_106fe2258:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106fe2274; end: 106fe227b; -[SCUserNotificationCenterController displayNotification:] */

void FUN_106fe2274(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_addNotification__11259c1d0);
  return;
}



/* Entry: 106fe227c; end: 106fe263f; -[SCUserNotificationCenterController _displayNotifications:] */

void FUN_106fe227c(ulong param_1,undefined **param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_158 [8];
  undefined1 uStack_150;
  undefined *puStack_148;
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
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_130;
    do {
      lVar8 = 0;
      do {
        if (*plStack_130 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar6 = *(ulong *)(lStack_138 + lVar8 * 8);
        (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        uVar2 = uVar6;
        func_0x00010c22f3c0();
        if ((uVar2 & 1) == 0) {
          uVar7 = uVar6;
          func_0x00010c0ee580();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (uVar7 == 0) goto LAB_106fe2420;
          uVar3 = *(undefined8 *)(param_1 + 0x78);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar6;
          func_0x00010c11c460(uVar6);
          _objc_retainAutoreleasedReturnValue();
          param_2 = &PTR____CFConstantStringClassReference_110e96618;
          func_0x000107b205b0(uVar3,&PTR____CFConstantStringClassReference_110e96618,uVar2,1);
          _objc_release(uVar2);
          _objc_release(uVar3);
          func_0x00010c0ee580(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = param_1;
          func_0x00010bf585e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          func_0x00010c07cda0();
          func_0x00010bf96340(param_1);
        }
        else {
LAB_106fe2420:
          uVar7 = uVar6;
          if (*(long *)(param_1 + 0x20) == 0) {
            func_0x00010bf0cee0();
            _objc_retainAutoreleasedReturnValue();
            if (uVar7 == 0) {
              func_0x00010be04ae0(param_1);
              uVar7 = 0;
            }
            else {
              func_0x00010bf0cee0();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar6;
              (**(code **)(uVar6 + 0x10))();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010be04ae0(param_1);
              _objc_release(uVar2);
              _objc_release(uVar6);
            }
          }
          else {
            lVar4 = *(long *)(param_1 + 0x30);
            (**(code **)(lVar4 + 0x10))();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe6ca0(uVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar4);
            uVar3 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010bf0cee0(uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfbfce0(uVar3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar6);
            _objc_initWeak(&puStack_148,param_1);
            param_2 = &puStack_148;
            _objc_copyWeak(auStack_158,param_2);
            uStack_150 = (undefined1)uVar2;
            func_0x00010c297280(uVar3);
            _objc_destroyWeak(auStack_158);
            _objc_destroyWeak(&puStack_148);
            _objc_release(uVar3);
          }
        }
        _objc_release(uVar7);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_158);
  _objc_destroyWeak(&puStack_148);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    func_0x00010be04ae0(param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106fe2640; end: 106fe269f;  */

void FUN_106fe2640(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be04ae0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106fe26a0; end: 106fe2957; -[SCUserNotificationCenterController _displayNotificationWithUNAttachment:notification:shouldShowBitmoji:] */

void FUN_106fe26a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = param_1;
  func_0x00010be21e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd3fc0(param_1);
  func_0x00010bdf77a0(param_1);
  uVar2 = param_4;
  func_0x00010bf59e40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(long *)(param_1 + 0x70) == 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    (**(code **)(lVar3 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    FUN_1070c2174();
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar4;
    _objc_release(uVar7);
    _objc_release(lVar3);
  }
  if (*(long *)(param_1 + 0x58) == 0) {
LAB_106fe2850:
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_4;
    func_0x00010c11c460(param_4);
    _objc_retainAutoreleasedReturnValue();
    if (param_5 == 0) {
      func_0x000107b205b0(uVar5,&PTR____CFConstantStringClassReference_110e96678,uVar7,1);
      _objc_release(uVar7);
      _objc_release(uVar5);
      func_0x00010c07cda0();
      func_0x00010bf96340(param_1);
    }
    else {
      func_0x000107b205b0(uVar5,&PTR____CFConstantStringClassReference_110e96658,uVar7,1);
      _objc_release(uVar7);
      _objc_release(uVar5);
      func_0x00010be04ac0(param_1);
    }
  }
  else {
    uVar7 = param_4;
    func_0x00010c073d60();
    if ((int)uVar7 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x70);
      func_0x00010bf1f3c0();
      if (iVar1 == 0) goto LAB_106fe2850;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_4;
    func_0x00010c11c460(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107b205b0(uVar5,&PTR____CFConstantStringClassReference_110e96638,uVar7,1);
    _objc_release(uVar7);
    _objc_release(uVar5);
    func_0x00010be042e0(param_1);
  }
  _objc_release(uVar2);
  _objc_release(puVar8);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + 0x68) == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126bd770;
    _objc_alloc(PTR_PTR_1126bd770);
    func_0x00010c05cd80();
    puVar8 = puVar4;
    func_0x00010c11f760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106fe2958; end: 106fe29b7; -[SCUserNotificationCenterController _getRankedBestFriendsUserIds] */

void FUN_106fe2958(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bd770;
    _objc_alloc(PTR_PTR_1126bd770);
    func_0x00010c05cd80();
    puVar2 = puVar1;
    func_0x00010c11f760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106fe29b8; end: 106fe2a0f; -[SCUserNotificationCenterController _bestFriendSoundEnabled] */

undefined * FUN_106fe29b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar1 = PTR_PTR_1126bd770;
    _objc_alloc(PTR_PTR_1126bd770);
    func_0x00010c05cd80();
    puVar2 = puVar1;
    func_0x00010c0dbce0();
    _objc_release(puVar1);
    return puVar2;
  }
  return (undefined *)0x0;
}



/* Entry: 106fe2a10; end: 106fe2aab; -[SCUserNotificationCenterController _customSoundEnabled] */

bool FUN_106fe2a10(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = lVar2;
    func_0x00010bf619c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c252440();
    bVar1 = lVar5 == 3;
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 106fe2aac; end: 106fe2bab; -[SCUserNotificationCenterController _displayCommunicationNotificationForRequest:notification:] */

void FUN_106fe2aac(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar2 = param_4;
    func_0x00010c11c420();
    func_0x000107fcc2d4();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_4;
      func_0x00010c11c420();
      func_0x000107fcc348();
      if ((uVar2 & 1) == 0) {
        uVar2 = param_4;
        func_0x00010c11c420();
        iVar1 = (int)uVar2;
        func_0x000107fcc3bc();
        uVar3 = 3;
        if (iVar1 == 0) {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = 1;
    }
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106fe2bac;
    puStack_48 = &UNK_110987ce8;
    uStack_40 = param_1;
    _objc_retain(param_4);
    uStack_38 = param_4;
    func_0x00010be61060(param_1,param_2,param_3,uVar3,param_4,&puStack_60);
    _objc_release(uStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106fe2bac; end: 106fe2bbf;  */

void FUN_106fe2bac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf96350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_enqueueNotificationRequest_notif_1125c3278,
             param_2,*(undefined8 *)(param_1 + 0x28),param_3);
  return;
}



/* Entry: 106fe2bc0; end: 106fe2feb; -[SCUserNotificationCenterController _modifyNotifRequestToCommNotif:donationType:appNotification:completion:] */

void FUN_106fe2bc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_5;
  func_0x00010c11c460();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107b207e0();
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_106fe2fec;
  uStack_88 = 0x106fe2ffc;
  puStack_a0 = &uStack_a8;
  _objc_retain(param_3);
  uStack_c8 = 0;
  uVar7 = 0x2020000000;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 3;
  puStack_c0 = &uStack_c8;
  uStack_80 = param_3;
  _CACurrentMediaTime();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_106fe3004;
  puStack_110 = &UNK_110987d18;
  uStack_d0 = uVar7;
  _objc_retain(uVar3);
  uStack_108 = uVar3;
  _objc_retain(uVar2);
  uStack_100 = uVar2;
  _objc_retain(param_5);
  uStack_f8 = param_5;
  puStack_e0 = &uStack_c8;
  _objc_retain(param_6);
  uStack_e8 = param_6;
  _objc_retain(param_3);
  ppuVar4 = &puStack_128;
  uStack_f0 = param_3;
  puStack_d8 = &uStack_a8;
  _objc_retainBlock();
  puVar5 = PTR_PTR_1126c0878;
  _objc_alloc();
  func_0x00010c000480(0x4008000000000000);
  _objc_initWeak(auStack_130,param_1);
  puStack_180 = puVar1;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_106fe30a4;
  puStack_168 = &UNK_1108bab48;
  _objc_copyWeak(auStack_138,auStack_130);
  _objc_retain(puVar5);
  puStack_160 = puVar5;
  lStack_158 = param_1;
  _objc_retain(param_5);
  puStack_140 = &uStack_a8;
  uStack_150 = param_5;
  _objc_retain(param_3);
  ppuVar6 = &puStack_180;
  uStack_148 = param_3;
  _objc_retainBlock();
  func_0x00010c24d960(puVar5);
  uVar7 = param_3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1eb40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    func_0x00010bf436e0(puVar5);
  }
  else {
    _objc_retain(ppuVar6);
    _objc_retain(uVar3);
    _objc_retain(uVar2);
    _objc_retain(uVar7);
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010c297280(param_1);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(ppuVar6);
  }
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(ppuVar6);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(puStack_160);
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_130);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(uStack_f0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106fe2fec; end: 106fe3003;  */

void FUN_106fe2fec(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106fe3004; end: 106fe30a3;  */

void FUN_106fe3004(double param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _CACurrentMediaTime();
  func_0x000107b20d24(param_1 - *(double *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x20),
                      *(undefined8 *)(param_2 + 0x28),param_3);
  func_0x000107b20954(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),param_3,1);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x30);
  func_0x00010c07cda0();
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  if ((param_3 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x30);
    func_0x00010c07cda0();
    if (iVar1 != 0) {
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x18);
    }
    lVar2 = *(long *)(param_2 + 0x40);
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x50) + 8) + 0x28);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    lVar2 = *(long *)(param_2 + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x000106fe30a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3,uVar4);
  return;
}



/* Entry: 106fe30a4; end: 106fe3253;  */

void FUN_106fe30a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar4 == 0) {
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    func_0x00010bf4bc60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    uStack_68 = 0x106fe3198;
    puStack_60 = &UNK_110987d48;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uStack_58 = uVar2;
    _objc_retain(uVar6);
    uStack_50 = uVar6;
    func_0x00010bdce240(uVar1,param_2,uVar3,uVar5,&puStack_78);
    _objc_release(uVar5);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
  }
  _objc_release(lVar4);
  return;
}



/* Entry: 106fe3254; end: 106fe34db;  */

/* WARNING: Removing unreachable block (ram,0x000106fe3304) */

void FUN_106fe3254(double param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    _objc_retain(param_3);
    if (param_3 == 0) {
      (**(code **)(*(long *)(param_2 + 0x48) + 0x10))();
    }
    else {
      func_0x000107b21520(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),1);
      _CACurrentMediaTime();
      uVar1 = *(undefined8 *)(param_2 + 0x30);
      dVar8 = param_1;
      func_0x00010bf4bf20(uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      _CACurrentMediaTime();
      func_0x000107b21694(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),1);
      func_0x000107b21c24(dVar8 - param_1,*(undefined8 *)(param_2 + 0x20),1,
                          *(undefined8 *)(param_2 + 0x28));
      puVar4 = PTR__OBJC_CLASS___UNNotificationRequest_1126bc390;
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      func_0x00010bfe5ec0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      func_0x00010c27bc40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1370a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(*(long *)(param_2 + 0x50) + 8);
      uVar6 = *(undefined8 *)(lVar7 + 0x28);
      *(undefined **)(lVar7 + 0x28) = puVar4;
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar2);
      lVar7 = param_3;
      func_0x00010c15dac0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar7;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar7);
      if (lVar5 != 0) {
        lVar5 = *(long *)(param_2 + 0x40);
        func_0x00010c267080();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar5;
        func_0x00010c08fa60();
        uVar2 = 1;
        if (lVar7 == 0) {
          uVar2 = 2;
        }
        *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x58) + 8) + 0x18) = uVar2;
        _objc_release(lVar5);
      }
      (**(code **)(*(long *)(param_2 + 0x48) + 0x10))();
      _objc_release(uVar1);
      _objc_release(0);
    }
    _objc_release(param_3);
  }
  else {
    (**(code **)(*(long *)(param_2 + 0x48) + 0x10))();
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106fe34dc; end: 106fe37bf; -[SCUserNotificationCenterController _getDonationFuture:notification:] */

void FUN_106fe34dc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c267080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  lVar5 = param_4;
  if (lVar2 == 0) {
    func_0x00010bf1aa20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d3f80;
    func_0x00010bf1a980(PTR_PTR_1126d3f80);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c15de20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d3f80;
    func_0x00010bfe9840(PTR_PTR_1126d3f80,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = param_4;
  lVar6 = param_4;
  if (param_3 == 3) {
    func_0x00010bf41a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf41a60(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    func_0x00010c15de20(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = lVar2;
    func_0x00010c08fa60();
    if (lVar5 != 0) {
      lVar4 = *(long *)(param_1 + 0x58);
      func_0x00010c269d40(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar4;
      func_0x00010bf88020();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106fe3754;
    }
    lVar8 = 0;
  }
  else {
    lVar7 = lVar5;
    if (param_3 == 2) {
      func_0x00010bf41a80(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf41a60();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_4;
      func_0x00010bfce860(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar5;
      func_0x00010c08fa60();
      if (((lVar8 == 0) || (func_0x00010c08fa60(), lVar5 == 0)) ||
         (lVar5 = lVar6, func_0x00010c08fa60(), lVar5 == 0)) {
        lVar8 = 0;
      }
      else {
        lVar5 = *(long *)(param_1 + 0x58);
        func_0x00010c269d40(lVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar5;
        func_0x00010bf88000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
      }
    }
    else {
      if (param_3 != 1) {
        lVar8 = 0;
        goto LAB_106fe3780;
      }
      func_0x00010bf41a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a2c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar2;
      func_0x00010c08fa60();
      if ((lVar8 == 0) || (func_0x00010c08fa60(), lVar5 == 0)) {
        lVar8 = 0;
        goto LAB_106fe3770;
      }
      lVar4 = *(long *)(param_1 + 0x58);
      func_0x00010c269d40(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar4;
      func_0x00010bf88000();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_106fe3754:
    _objc_release(lVar4);
  }
LAB_106fe3770:
  _objc_release(lVar6);
  _objc_release(lVar2);
  lVar5 = lVar7;
LAB_106fe3780:
  _objc_release(lVar5);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 106fe37c0; end: 106fe39af; -[SCUserNotificationCenterController _applyGroupTemplateForNotification:content:completion:] */

void FUN_106fe37c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c11c460(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107b20da0(uVar1,uVar2,1);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126d3f88;
  uVar2 = param_3;
  func_0x00010bfcf420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c15de60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0dc200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf08580(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010c297280(puVar5);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(puVar5);
  return;
}



/* Entry: 106fe39b0; end: 106fe3b2f;  */

void FUN_106fe39b0(double param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  param_1 = param_1 - *(double *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c11c460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) || (param_4 != 0)) {
    func_0x000107b214a4(param_1,uVar1,0,uVar2);
    _objc_release(uVar2);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c11c460(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf3ec40(param_4);
    func_0x00010c0df780(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107b21088(uVar1,uVar2,puVar5,1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar2);
    lVar6 = *(long *)(param_2 + 0x30);
    lVar3 = *(long *)(param_2 + 0x38);
    pcVar7 = *(code **)(lVar3 + 0x10);
  }
  else {
    func_0x000107b214a4(param_1,uVar1,1,uVar2);
    _objc_release(uVar2);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c11c460(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107b20f14(uVar1,uVar2,1);
    _objc_release(uVar2);
    lVar3 = *(long *)(param_2 + 0x38);
    pcVar7 = *(code **)(lVar3 + 0x10);
    lVar6 = param_3;
  }
  (*pcVar7)(lVar3,lVar6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fe3b30; end: 106fe3bb7; -[SCUserNotificationCenterController enqueueNotificationRequest:notification:avatarType:] */

void FUN_106fe3b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beb3540(param_1,param_2,param_4);
  if ((int)uVar1 == 0) {
    func_0x00010bec62e0(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    func_0x00010bdf8ba0(param_1,param_2,param_3,param_4,param_5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fe3bb8; end: 106fe3c9b; -[SCUserNotificationCenterController _submitNotificationRequestToOS:notification:avatarType:] */

void FUN_106fe3bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
  func_0x00010bf5f5a0(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106fe3c9c;
  puStack_68 = &UNK_1108c0008;
  uStack_60 = param_4;
  uStack_58 = param_3;
  uStack_50 = param_1;
  uStack_48 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010befa100(puVar1,param_2,param_3,&puStack_80);
  _objc_release(puVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 106fe3c9c; end: 106fe3cdf;  */

void FUN_106fe3c9c(long param_1,long param_2)

{
  func_0x00010c128780(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  if (param_2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0a53b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_logDisplayNotification_avatarTyp_112606ef8,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 106fe3ce0; end: 106fe3e13; -[SCUserNotificationCenterController _dedupAndSubmitNotificationRequestToOS:notification:avatarType:] */

void FUN_106fe3ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
  func_0x00010bf5f5a0(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uStack_50 = param_5;
  func_0x00010bfc4a60(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106fe3e14; end: 106fe3fff;  */

void FUN_106fe3e14(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  _objc_retain(param_2);
  lVar12 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar12 == 0) {
      _objc_release(param_2);
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bec62e0(lVar2);
LAB_106fe3fb4:
      _objc_release(lVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        return;
      }
      ___stack_chk_fail();
      lVar12 = *(long *)(param_2 + 0x48);
      pcVar13 = *(code **)(lVar12 + 0x10);
      _objc_retain(uVar9);
      (*pcVar13)(lVar12);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar12;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126ce088;
      func_0x00010bf75500(PTR_PTR_1126ce088);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11ad40(lVar2);
      _objc_release(puVar8);
      _objc_release(lVar2);
      func_0x00010c0aafe0(PTR_PTR_1126b7550);
      _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar12);
      return;
    }
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar3 = *(ulong *)(lVar11 * 8);
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      if (uVar6 != 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0dc140(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar6;
        uVar9 = uVar7;
        func_0x00010c0720c0();
        _objc_release(uVar7);
        _objc_release(uVar6);
        if ((uVar4 & 1) != 0) {
          _objc_release(param_2);
          goto LAB_106fe3fb4;
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar12 != lVar11);
    lVar12 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106fe4000; end: 106fe40bb; -[SCUserNotificationCenterController logDisplayNotification:avatarType:] */

void FUN_106fe4000(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  
  lVar3 = *(long *)(param_1 + 0x48);
  pcVar4 = *(code **)(lVar3 + 0x10);
  _objc_retain(param_3);
  (*pcVar4)(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ce088;
  func_0x00010bf75500(PTR_PTR_1126ce088,param_2,param_3,1,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11ad40(lVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
  func_0x00010c0aafe0(PTR_PTR_1126b7550,param_2,param_3,1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106fe40bc; end: 106fe42b7; -[SCUserNotificationCenterController _displayNotificationWithBitmojiOnRight:] */

void FUN_106fe40bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b18f0;
  _objc_alloc(PTR_PTR_1126b18f0);
  lVar2 = *(long *)(param_1 + 0x38);
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x40);
  (**(code **)(lVar3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff80e0(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126d3f90;
  _objc_alloc();
  lVar2 = *(long *)(param_1 + 0x50);
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02fca0();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar4;
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_initWeak(auStack_58,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010bfa54a0(uVar6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106fe42b8; end: 106fe42c7;  */

undefined8 FUN_106fe42b8(void)

{
  return 0;
}



/* Entry: 106fe42c8; end: 106fe43af;  */

void FUN_106fe42c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106fe43b0;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x00010bcbe2c4("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106fe43b0; end: 106fe4427;  */

void FUN_106fe43b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf585e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = uVar5;
  func_0x00010c07cda0();
  uVar1 = 3;
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  func_0x00010bf96340(lVar2,param_2,lVar3,uVar5,uVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106fe4428; end: 106fe4643; -[SCUserNotificationCenterController createRequestForNotification:withImage:] */

void FUN_106fe4428(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _UIImagePNGRepresentation();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  func_0x00010c0dc140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14ada0(*(undefined8 *)(param_1 + 0x10),param_2,param_4,puVar1,0);
  puVar4 = param_3;
  func_0x00010bf0cee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 == (undefined *)0x0) {
LAB_106fe4524:
    uStack_70 = 0;
    lVar2 = param_1;
    func_0x00010bdd0a40(param_1,param_2,puVar1,&uStack_70);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uStack_70;
    _objc_retain(uStack_70);
    if (lVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_68 = lVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_68,1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
    _objc_release(uVar6);
  }
  else {
    puVar4 = param_3;
    func_0x00010bf0cee0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    (**(code **)(puVar4 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if (puVar8 == (undefined *)0x0) goto LAB_106fe4524;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    if (puVar4 == (undefined *)0x0) goto LAB_106fe4524;
  }
  lVar2 = param_1;
  func_0x00010be21e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd3fc0(param_1);
  func_0x00010bdf77a0(param_1);
  puVar8 = param_3;
  puVar5 = puVar4;
  lVar7 = lVar2;
  func_0x00010bf59e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_78 = FUN_106fe4644;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_b0 = lVar2;
  puStack_a8 = puVar4;
  puStack_a0 = puVar8;
  puStack_98 = puVar1;
  uStack_90 = param_4;
  puStack_88 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puVar4 = *(undefined **)(puVar3 + 0x10);
  puVar1 = puVar5;
  func_0x00010bfad200();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
LAB_106fe4738:
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    puVar1 = puVar4;
    func_0x00010bf64ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar8 = PTR__OBJC_CLASS___UNNotificationAttachment_1126c1c30;
    if (puVar3 == (undefined *)0x0) goto LAB_106fe4738;
    uStack_c8 = *(undefined8 *)PTR__UNNotificationAttachmentOptionsTypeHintKey_1103481e8;
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110db8f18;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_c0,&uStack_c8,1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
    func_0x00010bf0d7c0(puVar8,param_2,puVar5,puVar4,puVar3,lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
    ___stack_chk_fail();
    _objc_retain(puVar1);
    uVar6 = *(undefined8 *)(puVar5 + 0x58);
    *(undefined **)(puVar5 + 0x58) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106fe4644; end: 106fe4783; -[SCUserNotificationCenterController _attachmentForIdentifier:error:] */

void FUN_106fe4644(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  lVar4 = param_3;
  func_0x00010bfad200();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    lVar4 = lVar1;
    func_0x00010bf64ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___UNNotificationAttachment_1126c1c30;
    if (puVar2 != (undefined *)0x0) {
      uStack_58 = *(undefined8 *)PTR__UNNotificationAttachmentOptionsTypeHintKey_1103481e8;
      ppuStack_50 = &PTR____CFConstantStringClassReference_110db8f18;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_50,&uStack_58,1
                         );
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010bf0d7c0(puVar5,param_2,param_3,lVar1,puVar2,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      goto LAB_106fe473c;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_106fe473c:
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar4);
  uVar3 = *(undefined8 *)(param_3 + 0x58);
  *(long *)(param_3 + 0x58) = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106fe4784; end: 106fe47b3; -[SCUserNotificationCenterController setIntentDonator:] */

void FUN_106fe4784(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fe47b4; end: 106fe47bf; -[SCUserNotificationCenterController setPlusFeatureGating:] */

void FUN_106fe47b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 106fe47c0; end: 106fe47ef; -[SCUserNotificationCenterController setAppGroupUserDefaults:] */

void FUN_106fe47c0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106fe47f0; end: 106fe484f; -[SCUserNotificationCenterController setImageFetchingService:] */

void FUN_106fe47f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d3f98;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c012be0();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106fe4850; end: 106fe4917; -[SCUserNotificationCenterController .cxx_destruct] */

void FUN_106fe4850(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
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



/* Entry: 106fe4918; end: 106fe4c13; +[SCUserNotificationGroupTemplateApplier applyGroupTemplate:notificationContent:senderInfo:notificationKey:] */

void FUN_106fe4918(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_4);
  _objc_opt_new();
  puVar4 = puVar1;
  if (((param_3 == 0) || (param_5 == 0)) || (param_6 == 0)) {
    func_0x00010bf43d60(puVar1,param_2,param_4);
    _objc_release(param_4);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_4;
    func_0x00010c0d3c80();
    _objc_release(param_4);
    puVar3 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
    func_0x00010bf5f5a0(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x106fe4ad8;
    puStack_80 = &UNK_110987e18;
    _objc_retain(param_3);
    lStack_78 = param_3;
    uStack_70 = uVar2;
    _objc_retain(param_5);
    lStack_68 = param_5;
    _objc_retain(param_6);
    lStack_60 = param_6;
    _objc_retain(puVar1);
    puStack_58 = puVar1;
    _objc_retain(uVar2);
    func_0x00010bfc4a60(puVar3,param_2,&puStack_98);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_58);
    _objc_release(lStack_60);
    _objc_release(lStack_68);
    _objc_release(uStack_70);
    _objc_release(lStack_78);
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106fe4c14; end: 106fe4c87; -[SCFriendingNotificationExtensionUserDefaults initWithUserScopedAppGroupUserDefaults:] */

undefined1 * FUN_106fe4c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8328;
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



/* Entry: 106fe4c88; end: 106fe4ccf; -[SCFriendingNotificationExtensionUserDefaults notificationBestFriendsSoundEnabled] */

undefined8 FUN_106fe4c88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106fe4cd0; end: 106fe4d13; -[SCFriendingNotificationExtensionUserDefaults setNotificationBestFriendsSoundEnabled:] */

void FUN_106fe4cd0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fe4d14; end: 106fe4def; -[SCFriendingNotificationExtensionUserDefaults rankedBestFriendsUserIds] */

void FUN_106fe4d14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar4 = puVar3;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_class(PTR__OBJC_CLASS___NSSet_1126ae870);
  puVar6 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar5);
  puVar5 = puVar4;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106fe4df0; end: 106fe4e7f; -[SCFriendingNotificationExtensionUserDefaults setRankedBestFriendsUserIds:] */

void FUN_106fe4df0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0560(uVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_110e96778);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106fe4e80; end: 106fe4f5b; -[SCFriendingNotificationExtensionUserDefaults rankedBestFriendsUserIdsInArray] */

void FUN_106fe4e80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar4 = puVar3;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar6 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar5);
  puVar5 = puVar4;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106fe4f5c; end: 106fe4feb; -[SCFriendingNotificationExtensionUserDefaults setRankedBestFriendsUserIdsInArray:] */

void FUN_106fe4f5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0560(uVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_110e96798);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106fe4fec; end: 106fe511f; -[SCFriendingNotificationExtensionUserDefaults pendingFriendReminderUserIds] */

void FUN_106fe4fec(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x00010be71220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010be86620(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_106fe5120;
    uStack_40 = 0x106fe5130;
    uStack_38 = 0;
    puVar2 = PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0;
    _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0);
    func_0x00010c012e20();
    func_0x00010bf51ce0();
    param_1 = puStack_58[5];
    _objc_retain(param_1);
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fe5120; end: 106fe5137;  */

void FUN_106fe5120(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106fe5138; end: 106fe5177;  */

void FUN_106fe5138(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be86620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106fe5178; end: 106fe525f; -[SCFriendingNotificationExtensionUserDefaults setPendingFriendReminderUserIds:] */

void FUN_106fe5178(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be71220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bdc4060(param_1,param_2,param_3);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0;
    _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0);
    func_0x00010c012e20();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106fe5260;
    puStack_48 = &UNK_110842070;
    lStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010bf51d80(puVar2,param_2,lVar1,4,0,&puStack_60);
    _objc_release(uStack_38);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fe5260; end: 106fe526b;  */

void FUN_106fe5260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc4070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__accumulatePendingFriendReminder_11254e9b8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106fe526c; end: 106fe5337; -[SCFriendingNotificationExtensionUserDefaults clearPendingFriendReminderUserIds] */

void FUN_106fe526c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010be71220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0;
    _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0);
    func_0x00010c012e20();
    func_0x00010bf51d80();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106fe5338; end: 106fe5377;  */

void FUN_106fe5338(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fe5378; end: 106fe54cf; -[SCFriendingNotificationExtensionUserDefaults readAndClearPendingFriendReminderUserIds] */

void FUN_106fe5378(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x00010be71220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar4 = param_1;
    func_0x00010be86620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_106fe5120;
    uStack_40 = 0x106fe5130;
    uStack_38 = 0;
    puVar2 = PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0;
    _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0);
    func_0x00010c012e20();
    func_0x00010bf51d80();
    lVar4 = puStack_58[5];
    _objc_retain(lVar4);
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_60,8);
    uVar3 = uStack_38;
  }
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106fe54d0; end: 106fe553b;  */

void FUN_106fe54d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be86620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fe553c; end: 106fe5617; -[SCFriendingNotificationExtensionUserDefaults _readPendingFriendReminderUserIdsUnlocked] */

void FUN_106fe553c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar4 = puVar3;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar6 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar5);
  puVar5 = puVar4;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106fe5618; end: 106fe582f; -[SCFriendingNotificationExtensionUserDefaults _accumulatePendingFriendReminderUserIds:] */

void FUN_106fe5618(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar7 = param_1;
  func_0x00010be86620();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x00010c0d3c80();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar3 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        puVar1 = puVar7;
        func_0x00010bf4b900(puVar7,param_2,uVar8);
        if (((ulong)puVar1 & 1) == 0) {
          func_0x00010befa120(puVar7,param_2,uVar8);
          func_0x00010befa120(puVar2,param_2,uVar8);
        }
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,puVar2,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar8,param_2,puVar1,&PTR____CFConstantStringClassReference_110e96878);
  _objc_release(puVar1);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x00010c14ce20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (puVar1 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
    func_0x00010bf4b0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar2 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = puVar2;
      func_0x00010bdc2c60(puVar2,param_2,&PTR____CFConstantStringClassReference_110e96738);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar7;
      func_0x00010c0f5800(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010bfacbe0(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = puVar7;
        func_0x00010c0f5800(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf561e0(puVar4,param_2,puVar5,0,0);
        _objc_release(puVar5);
      }
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106fe5830; end: 106fe597f; -[SCFriendingNotificationExtensionUserDefaults _pendingFriendReminderLockFileURL] */

void FUN_106fe5830(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar6 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar6;
  func_0x00010c14ce20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (puVar1 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010bf4b0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    if (puVar2 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar2;
      func_0x00010bdc2c60(puVar2,param_2,&PTR____CFConstantStringClassReference_110e96738);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010c0f5800(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bfacbe0(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      if (((ulong)puVar5 & 1) == 0) {
        puVar4 = puVar6;
        func_0x00010c0f5800(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf561e0(puVar3,param_2,puVar4,0,0);
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106fe5980; end: 106fe59c7; -[SCFriendingNotificationExtensionUserDefaults unviewedIncomingFriendsAppBadgeEnabled] */

undefined8 FUN_106fe5980(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106fe59c8; end: 106fe5a0b; -[SCFriendingNotificationExtensionUserDefaults setUnviewedIncomingFriendsAppBadgeEnabled:] */

void FUN_106fe59c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fe5a0c; end: 106fe5a53; -[SCFriendingNotificationExtensionUserDefaults unviewedSuggestionsBadgeNumberFromNotifications] */

undefined8 FUN_106fe5a0c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067f80();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106fe5a54; end: 106fe5a97; -[SCFriendingNotificationExtensionUserDefaults setUnviewedSuggestionsBadgeNumberFromNotifications:] */

void FUN_106fe5a54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1add40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fe5a98; end: 106fe5adf; -[SCFriendingNotificationExtensionUserDefaults structuredBadgeInfoEnabled] */

undefined8 FUN_106fe5a98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106fe5ae0; end: 106fe5b23; -[SCFriendingNotificationExtensionUserDefaults setStructuredBadgeInfoEnabled:] */

void FUN_106fe5ae0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fe5b24; end: 106fe5c33; -[SCFriendingNotificationExtensionUserDefaults unviewedSuggestionsBadgeTypeToUserIdsFromNotifications] */

void FUN_106fe5b24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar4 = puVar3;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar6 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar5);
  puVar5 = puVar4;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar4);
  if (puVar5 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar4);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106fe5c34; end: 106fe5d17; -[SCFriendingNotificationExtensionUserDefaults setUnviewedSuggestionsBadgeTypeToUserIdsFromNotifications:] */

void FUN_106fe5c34(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = param_3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106fe5d18; end: 106fe5d5f; -[SCFriendingNotificationExtensionUserDefaults isRankingEnabledForNotificationPath] */

undefined8 FUN_106fe5d18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106fe5d60; end: 106fe5da3; -[SCFriendingNotificationExtensionUserDefaults setRankingEnabledForNotificationPath:] */

void FUN_106fe5d60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fe5da4; end: 106fe5deb; -[SCFriendingNotificationExtensionUserDefaults capSizeOfFriendSuggestionsNotification] */

undefined8 FUN_106fe5da4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067f80();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106fe5dec; end: 106fe5e2f; -[SCFriendingNotificationExtensionUserDefaults setCapSizeOfFriendSuggestionsNotification:] */

void FUN_106fe5dec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1add40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fe5e30; end: 106fe5e43; -[SCFriendingNotificationExtensionUserDefaults .cxx_destruct] */

void FUN_106fe5e30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fe5e44; end: 106fe6b3f;  */

void FUN_106fe5e44(long param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5,undefined **param_6,undefined **param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long lVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  long lVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  long lStack_448;
  long lStack_2c8;
  undefined *puStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  func_0x00010befa120();
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(uVar2);
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_268 = 0;
  puStack_270 = (undefined *)0x0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  _objc_retain(param_1);
  ppuVar7 = &puStack_270;
  puVar3 = auStack_170;
  lVar14 = 0x10;
  lStack_2c8 = param_1;
  func_0x00010bf52a60();
  if (lStack_2c8 != 0) {
    lVar15 = *plStack_260;
    do {
      lVar14 = 0;
      do {
        if (*plStack_260 != lVar15) {
          _objc_enumerationMutation(param_1);
        }
        lVar19 = *(long *)(lStack_268 + lVar14 * 8);
        _objc_retain(param_4);
        _objc_retain(lVar19);
        lVar16 = lVar19;
        func_0x00010c134680();
        _objc_retainAutoreleasedReturnValue();
        lVar25 = lVar16;
        func_0x00010bf4bc60();
        _objc_retainAutoreleasedReturnValue();
        lVar22 = lVar25;
        func_0x00010c292820();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126d3fa8;
        func_0x00010c086560(PTR_PTR_1126d3fa8);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar22;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(lVar22);
        _objc_release(lVar25);
        _objc_release(lVar16);
        puVar3 = PTR____NSArray0__struct_11034ab48;
        if ((lVar4 != 0) &&
           (lVar16 = lVar4, func_0x00010c0720c0(), puVar3 = PTR____NSArray0__struct_11034ab48,
           (int)lVar16 != 0)) {
          lVar16 = lVar19;
          func_0x00010c134680();
          _objc_retainAutoreleasedReturnValue();
          lVar25 = lVar16;
          func_0x00010bf4bc60();
          _objc_retainAutoreleasedReturnValue();
          lVar22 = lVar25;
          func_0x00010c292820();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126d3fb0;
          func_0x00010bfcf740(PTR_PTR_1126d3fb0);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar22;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          _objc_release(lVar22);
          _objc_release(lVar25);
          _objc_release(lVar16);
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          uStack_228 = 0;
          uStack_230 = 0;
          uStack_218 = 0;
          plStack_220 = (long *)0x0;
          uStack_208 = 0;
          uStack_210 = 0;
          uStack_1f8 = 0;
          uStack_200 = 0;
          _objc_retain(lVar5);
          lVar16 = lVar5;
          func_0x00010bf52a60();
          if (lVar16 != 0) {
            lVar25 = *plStack_220;
            do {
              lVar22 = 0;
              do {
                if (*plStack_220 != lVar25) {
                  _objc_enumerationMutation(lVar5);
                }
                puVar18 = PTR_PTR_1126d3fb8;
                _objc_alloc();
                func_0x00010c044700();
                if (puVar18 != (undefined *)0x0) {
                  func_0x00010befa120(puVar3);
                }
                _objc_release(puVar18);
                lVar22 = lVar22 + 1;
              } while (lVar16 != lVar22);
              lVar16 = lVar5;
              func_0x00010bf52a60();
            } while (lVar16 != 0);
          }
          _objc_release(lVar5);
          _objc_release(lVar5);
        }
        _objc_release(lVar4);
        _objc_release(lVar19);
        _objc_release(param_4);
        puVar18 = puVar3;
        func_0x00010bf52a60();
        lVar16 = lRam0000000000000000;
        while (puVar18 != (undefined *)0x0) {
          puVar23 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar16) {
              _objc_enumerationMutation(puVar3);
            }
            uVar17 = *(undefined8 *)((long)puVar23 * 8);
            uVar2 = uVar17;
            func_0x00010c2923e0(uVar17);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar1;
            func_0x00010bf4b900();
            _objc_release(uVar2);
            if (((ulong)puVar6 & 1) == 0) {
              func_0x00010befa120(puVar21);
              func_0x00010c2923e0(uVar17);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar1);
              _objc_release(uVar17);
            }
            puVar23 = puVar23 + 1;
          } while (puVar18 != puVar23);
          puVar18 = puVar3;
          func_0x00010bf52a60();
        }
        _objc_release(puVar3);
        lVar14 = lVar14 + 1;
      } while (lVar14 != lStack_2c8);
      ppuVar7 = &puStack_270;
      puVar3 = auStack_170;
      lVar14 = 0x10;
      lStack_2c8 = param_1;
      func_0x00010bf52a60();
    } while (lStack_2c8 != 0);
  }
  _objc_release(param_1);
  _objc_retain(param_2);
  _objc_retain(puVar21);
  ppuVar13 = &PTR___NSConcreteGlobalBlock_110987e90;
  puVar18 = puVar21;
  func_0x000100504554();
  puVar23 = puVar21;
  func_0x00010bf529e0();
  _objc_release(puVar21);
  if (puVar23 != (undefined *)0x0) {
    ppuVar7 = param_2;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuVar7;
    func_0x00010c0d3c80();
    _objc_release(ppuVar7);
    puVar23 = PTR_PTR_1126d3fb0;
    func_0x00010bfcf740();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar23;
    func_0x00010c1d0640(ppuVar20);
    _objc_release(puVar23);
    ppuVar7 = ppuVar20;
    func_0x00010c21e7c0(param_2);
    _objc_release(ppuVar20);
  }
  _objc_release(puVar18);
  _objc_release(param_2);
  puVar18 = puVar21;
  func_0x00010bf529e0();
  ppuVar20 = param_5;
  if (((puVar18 == (undefined *)0x2) ||
      (puVar18 = puVar21, func_0x00010bf529e0(), ppuVar20 = param_6, puVar18 == (undefined *)0x3))
     || (puVar18 = puVar21, func_0x00010bf529e0(), ppuVar20 = param_7, (undefined *)0x3 < puVar18))
  {
    _objc_retain(ppuVar20);
  }
  else {
    ppuVar20 = (undefined **)0x0;
  }
  ppuVar8 = ppuVar20;
  func_0x00010c08fa60();
  if (ppuVar8 != (undefined **)0x0) {
    _objc_retain(ppuVar20);
    _objc_retain(puVar21);
    _objc_retain(ppuVar20);
    func_0x00010bf529e0();
    puVar18 = puVar21;
    func_0x00010bf529e0();
    ppuVar8 = ppuVar20;
    if (puVar18 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      ppuVar7 = ppuVar20;
      do {
        puVar23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar21;
        func_0x00010c0dfd20();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar6;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar7;
        func_0x00010bf4bb00();
        ppuVar8 = ppuVar7;
        if (((ulong)ppuVar10 & 1) == 0) {
          _objc_release(puVar9);
          _objc_release(puVar6);
          _objc_release(puVar23);
          break;
        }
        puVar3 = puVar9;
        func_0x00010c25cfc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar7);
        _objc_release(puVar9);
        _objc_release(puVar6);
        _objc_release(puVar23);
        puVar18 = puVar18 + 1;
        puVar23 = puVar21;
        func_0x00010bf529e0();
        ppuVar7 = ppuVar8;
      } while (puVar18 < puVar23);
    }
    ppuVar7 = &PTR____CFConstantStringClassReference_110e968b8;
    ppuVar10 = ppuVar8;
    func_0x00010bf4bb00();
    ppuVar11 = ppuVar8;
    if ((int)ppuVar10 != 0) {
      puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = &PTR____CFConstantStringClassReference_110e968b8;
      puVar3 = puVar18;
      func_0x00010c25cfc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      _objc_release(puVar18);
    }
    _objc_release(puVar21);
    _objc_release(ppuVar20);
    ppuVar8 = ppuVar11;
    func_0x00010c08fa60();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar7 = ppuVar11;
      func_0x00010c172cc0(param_2);
    }
    _objc_release(ppuVar11);
  }
  _objc_release(ppuVar20);
  _objc_release(puVar1);
  _objc_release(puVar21);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(ppuVar13);
  _objc_retain(ppuVar7);
  _objc_retain(puVar3);
  _objc_retain(lVar14);
  lStack_448 = param_1;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  if (lStack_448 == 0) {
    puVar21 = (undefined *)0x1;
  }
  else {
    puVar21 = (undefined *)0x0;
    do {
      lVar25 = 0;
      puVar1 = puVar21;
      do {
        if (lRam0000000000000000 != lVar15) {
          _objc_enumerationMutation(param_1);
        }
        lVar24 = *(long *)(lVar25 * 8);
        ppuVar20 = ppuVar7;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar3);
        _objc_retain(ppuVar20);
        _objc_retain(lVar24);
        lVar22 = lVar24;
        func_0x00010c134680();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar22;
        func_0x00010bf4bc60();
        _objc_retainAutoreleasedReturnValue();
        lVar19 = lVar4;
        func_0x00010c292820();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = PTR_PTR_1126d3fa8;
        func_0x00010c086560(PTR_PTR_1126d3fa8);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar19;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar21);
        _objc_release(lVar19);
        _objc_release(lVar4);
        _objc_release(lVar22);
        if (lVar5 == 0) {
          puVar21 = (undefined *)0x0;
        }
        else {
          lVar22 = lVar5;
          func_0x00010c0720c0();
          if ((int)lVar22 == 0) {
            puVar21 = (undefined *)0x0;
          }
          else {
            lVar22 = lVar24;
            func_0x00010c134680();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar22;
            func_0x00010bf4bc60();
            _objc_retainAutoreleasedReturnValue();
            lVar19 = lVar4;
            func_0x00010c292820();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = PTR_PTR_1126d3fb0;
            func_0x00010c0f7bc0(PTR_PTR_1126d3fb0);
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar19;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar21);
            _objc_release(lVar19);
            _objc_release(lVar4);
            _objc_release(lVar22);
            if (lVar12 == 0) {
              puVar21 = (undefined *)0x0;
            }
            else {
              puVar18 = PTR_PTR_1126d3fc0;
              _objc_alloc();
              func_0x00010c00c540();
              puVar21 = (undefined *)0x0;
              if ((ppuVar20 != (undefined **)0x0) && (puVar18 != (undefined *)0x0)) {
                puVar21 = puVar18;
                func_0x00010c15df40();
                _objc_retainAutoreleasedReturnValue();
                puVar23 = puVar21;
                func_0x00010c0720c0();
                _objc_release(puVar21);
                if ((int)puVar23 == 0) {
                  puVar21 = (undefined *)0x0;
                }
                else {
                  puVar21 = puVar18;
                  func_0x00010bf529e0();
                }
              }
              _objc_release(puVar18);
            }
            _objc_release(lVar12);
          }
        }
        _objc_release(lVar5);
        _objc_release(lVar24);
        _objc_release(ppuVar20);
        _objc_release(puVar3);
        _objc_release(ppuVar20);
        if (puVar21 <= puVar1) {
          puVar21 = puVar1;
        }
        lVar25 = lVar25 + 1;
        puVar1 = puVar21;
      } while (lStack_448 != lVar25);
      lStack_448 = param_1;
      func_0x00010bf52a60();
    } while (lStack_448 != 0);
    puVar21 = puVar21 + 1;
  }
  puVar1 = PTR_PTR_1126d3fc0;
  _objc_alloc();
  ppuVar20 = ppuVar7;
  func_0x00010c2923e0(ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0447a0();
  _objc_release(ppuVar20);
  _objc_retain(ppuVar13);
  _objc_retain(puVar1);
  ppuVar20 = ppuVar13;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar20;
  func_0x00010c0d3c80();
  _objc_release(ppuVar20);
  puVar18 = puVar1;
  func_0x00010bfc4da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar23 = PTR_PTR_1126d3fb0;
  func_0x00010c0f7bc0(PTR_PTR_1126d3fb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar8);
  _objc_release(puVar23);
  _objc_release(puVar18);
  func_0x00010c21e7c0(ppuVar13);
  _objc_release(ppuVar13);
  _objc_release(ppuVar8);
  if (((undefined *)0x1 < puVar21) && (lVar15 = lVar14, func_0x00010c08fa60(), lVar15 != 0)) {
    puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar15;
    func_0x00010c08fa60();
    if (lVar25 != 0) {
      func_0x00010c172cc0(ppuVar13);
    }
    _objc_release(lVar15);
    _objc_release(puVar21);
  }
  _objc_release(puVar1);
  _objc_release(lVar14);
  _objc_release(puVar3);
  _objc_release(ppuVar7);
  _objc_release(ppuVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar15);
  lVar14 = lVar15;
  func_0x00010010fab4(lVar15,PTR_DAT_1126a5810);
  if ((int)lVar14 == 0 || lVar15 == 0) {
    lVar14 = 0;
  }
  else {
    _objc_retain(lVar15);
    lVar14 = lVar15;
  }
  _objc_release(lVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar14);
  return;
}



/* Entry: 106fe6b40; end: 106fe6bff;  */

void FUN_106fe6b40(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010010fab4(lVar2,PTR_DAT_1126a5810);
  if ((int)lVar1 == 0 || lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    lVar1 = lVar2;
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106fe6c00; end: 106fe6c0f; -[SCLegacyMainCameraFeatureDelegateProviderImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe6c00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112762300);
  return;
}



/* Entry: 106fe6c10; end: 106fe6c53; -[SCMainCameraViewController dealloc] */

void FUN_106fe6c10(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  puStack_28 = PTR_PTR_1126f8338;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106fe6c54; end: 106fe6cb7; -[SCMainCameraViewController memories] */

void FUN_106fe6c54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0c7a40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106fe6cb8; end: 106fe6d1b; -[SCMainCameraViewController timerMode] */

void FUN_106fe6cb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c270700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106fe6d1c; end: 106fe6d5b; -[SCMainCameraViewController presentingMemories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106fe6d1c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112762318;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c07ab40();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106fe6d5c; end: 106fe6deb; -[SCMainCameraViewController setPressingCameraButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe6d5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010c110140();
  if ((int)param_3 != (int)lVar1) {
    lVar1 = param_1 + _DAT_112762318;
    _objc_loadWeakRetained(lVar1);
    if ((int)param_3 == 0) {
      func_0x00010c280d80();
    }
    else {
      func_0x00010c09fdc0();
    }
    _objc_release(lVar1);
  }
  puStack_38 = PTR_PTR_1126f8338;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setPressingCameraButton__112655fe8,param_3);
  return;
}



/* Entry: 106fe6dec; end: 106fe6f27; -[SCMainCameraViewController handlePinchFrom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106fe6dec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar3 = &lStack_50;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010c252440();
  if (lVar4 == 1) {
    lVar4 = (long)_DAT_11276230c;
    lVar1 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c09fde0();
LAB_106fe6e88:
    _objc_release(lVar1);
  }
  else {
    lVar4 = param_3;
    func_0x00010c252440();
    if ((lVar4 == 4) || (lVar4 = param_3, func_0x00010c252440(), lVar4 == 3)) {
      lVar4 = (long)_DAT_11276230c;
      lVar1 = param_1 + lVar4;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c280da0();
      goto LAB_106fe6e88;
    }
    lVar4 = (long)_DAT_11276230c;
  }
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained();
    lVar2 = lVar4;
    func_0x00010c0741e0();
    _objc_release(lVar4);
    _objc_release(lVar1);
    if ((int)lVar2 == 0) {
      plVar3 = (long *)0x0;
      goto LAB_106fe6ef8;
    }
  }
  puStack_48 = PTR_PTR_1126f8338;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_handlePinchFrom__112536bb8,param_3);
LAB_106fe6ef8:
  _objc_release(param_3);
  return (undefined1 *)plVar3;
}



/* Entry: 106fe6f28; end: 106fe7053; -[SCMainCameraViewController handlePanFrom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe6f28(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c252440();
  if (lVar3 == 1) {
    lVar3 = (long)_DAT_11276230c;
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c09fde0();
LAB_106fe6fc4:
    _objc_release(lVar1);
  }
  else {
    lVar3 = param_3;
    func_0x00010c252440();
    if ((lVar3 == 4) || (lVar3 = param_3, func_0x00010c252440(), lVar3 == 3)) {
      lVar3 = (long)_DAT_11276230c;
      lVar1 = param_1 + lVar3;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c280da0();
      goto LAB_106fe6fc4;
    }
    lVar3 = (long)_DAT_11276230c;
  }
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained();
    lVar2 = lVar3;
    func_0x00010c0741e0();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if ((int)lVar2 == 0) goto LAB_106fe7028;
  }
  puStack_48 = PTR_PTR_1126f8338;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_handlePanFrom__112536bc0,param_3);
LAB_106fe7028:
  _objc_release(param_3);
  return;
}



/* Entry: 106fe7054; end: 106fe71eb; -[SCMainCameraViewController handleTapFrom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe7054(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c2687e0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0769a0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      uVar4 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(param_5);
      _objc_release(uVar4);
      uVar1 = param_3;
      func_0x00010c252440(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe2220();
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar1 = param_3;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c102c40(param_1,param_2);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar3 != 0) {
        uVar4 = *(undefined8 *)(param_3 + (long)_DAT_112762320);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf677e0();
        _objc_release(uVar4);
      }
    }
  }
  puStack_58 = PTR_PTR_1126f8338;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_handleTapFrom__1125d24f0,param_5);
  _objc_release(param_5);
  return;
}



/* Entry: 106fe71ec; end: 106fe7257; -[SCMainCameraViewController setSwipeNavigationEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe71ec(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_11276230c;
  _objc_loadWeakRetained(lVar1);
  if ((param_3 & 1) == 0) {
    func_0x00010c09fde0();
  }
  else {
    func_0x00010c280da0();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bea7030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setScrollingLockedForMemories_w_1125875b0,param_3 ^ 1,
             &PTR____CFConstantStringClassReference_110e96918);
  return;
}



/* Entry: 106fe7258; end: 106fe7647; -[SCMainCameraViewController processRecordingForLongPress:shouldStartRecording:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe7258(ulong param_1,undefined8 param_2,long param_3,int param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  ulong uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c252440();
  if (lVar2 == 5) {
    *(undefined1 *)(param_1 + (long)_DAT_112762348) = 0;
    func_0x00010bdda6e0(param_1);
    goto LAB_106fe75c4;
  }
  lVar2 = param_3;
  func_0x00010c252440();
  if ((lVar2 == 3) || (lVar2 = param_3, func_0x00010c252440(), lVar2 == 4)) {
    bVar9 = *(byte *)(param_1 + (long)_DAT_112762348);
    *(undefined1 *)(param_1 + (long)_DAT_112762348) = 0;
    func_0x00010bdda6e0(param_1);
    if ((bVar9 & 1) != 0) goto LAB_106fe75c4;
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  lVar10 = (long)_DAT_11276230c;
  uVar3 = param_1 + lVar10;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  func_0x00010c0741e0();
  _objc_release(uVar3);
  lVar2 = param_1 + (long)_DAT_112762344;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf5e4a0();
  _objc_release(lVar5);
  _objc_release(lVar2);
  if (((uVar4 & 1) == 0) && (1 < lVar6 - 1U)) {
LAB_106fe73a0:
    lVar2 = param_3;
    func_0x00010c252440();
    if ((lVar2 == 1) && ((*(byte *)(param_1 + (long)_DAT_112762348) & 1) == 0)) {
      *(undefined1 *)(param_1 + (long)_DAT_112762348) = 1;
      _objc_initWeak(auStack_68,param_1);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_106fe7648;
      puStack_80 = &UNK_110841fb0;
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_3);
      ppuVar7 = &puStack_98;
      lStack_78 = param_3;
      _objc_retainBlock(ppuVar7);
      lVar10 = (long)_DAT_112762318;
      lVar2 = param_1 + lVar10;
      _objc_loadWeakRetained();
      lVar5 = lVar2;
      func_0x00010c07ab40();
      _objc_release(lVar2);
      if ((int)lVar5 == 0) {
        if ((uVar4 & 1) == 0) {
          uVar3 = param_1;
          func_0x00010c0d6b40(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0d6760();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar4;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c10d100();
          _objc_release(uVar8);
          _objc_release(uVar4);
          _objc_release(uVar3);
        }
      }
      else {
        func_0x00010c1e1700(param_1);
        lVar10 = param_1 + lVar10;
        _objc_loadWeakRetained(lVar10);
        func_0x00010c152300();
        _objc_release(lVar10);
        func_0x00010c1e1700(param_1);
      }
      _objc_release(ppuVar7);
      _objc_release(lStack_78);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
    if (!bVar1) goto LAB_106fe75c4;
    uVar3 = param_1;
    func_0x00010c270700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf926c0();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) goto LAB_106fe75c4;
  }
  else {
    lVar2 = param_1 + (long)_DAT_112762318;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010c07ab40();
    _objc_release(lVar2);
    if ((int)lVar5 != 0) goto LAB_106fe73a0;
    if (((!bVar1) && (*(char *)(param_1 + (long)_DAT_112762348) == '\x01')) &&
       (uVar3 = param_1, func_0x00010c110140(), (int)uVar3 != 0)) {
      lVar10 = param_1 + lVar10;
      _objc_loadWeakRetained();
      lVar2 = lVar10;
      func_0x00010c06c180();
      if ((int)lVar2 == 0) {
        uVar3 = param_1;
        func_0x00010c270700();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf926c0();
        _objc_release(uVar3);
        _objc_release(lVar10);
        if ((uVar4 & 1) == 0) {
          func_0x00010be9b760(param_1);
          goto LAB_106fe75c4;
        }
      }
      else {
        _objc_release(lVar10);
      }
    }
  }
  if (param_4 == 0) {
    bVar9 = 0;
  }
  else {
    bVar9 = *(byte *)(param_1 + (long)_DAT_112762348) ^ 1;
  }
  puStack_a0 = PTR_PTR_1126f8338;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(&uStack_a8,PTR_s_processRecordingForLongPress_sho_112622ea0,param_3,bVar9 & 1)
  ;
LAB_106fe75c4:
  _objc_release(param_3);
  return;
}



/* Entry: 106fe7648; end: 106fe7683;  */

void FUN_106fe7648(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0b4ec0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106fe7684; end: 106fe76b7; -[SCMainCameraViewController _scheduleStartRecordingFromOtherPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe7684(long param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + _DAT_112762304) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112762304) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c0f8f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fc999999999999a,param_1,PTR_s_performSelector_withObject_after_11261bdf0,
             PTR_s__doStartRecordingFromOtherPage__112536bc8,param_3);
  return;
}



/* Entry: 106fe76b8; end: 106fe772f; -[SCMainCameraViewController _doStartRecordingFromOtherPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe76b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 == 2) {
    puStack_28 = PTR_PTR_1126f8338;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_processRecordingForLongPress_sho_112622ea0,param_3,1);
  }
  *(undefined1 *)(param_1 + _DAT_112762304) = 0;
  _objc_release(param_3);
  return;
}



/* Entry: 106fe7730; end: 106fe7773; -[SCMainCameraViewController _cancelDelayStartRecordingFromOtherPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe7730(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf2eba0(PTR__OBJC_CLASS___NSObject_1126b1300,param_2,param_1,
                      PTR_s__doStartRecordingFromOtherPage__112536bc8,param_3);
  *(undefined1 *)(param_1 + _DAT_112762304) = 0;
  return;
}



/* Entry: 106fe7774; end: 106fe77c7; -[SCMainCameraViewController prepareForRecordingWithMethod:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fe7774(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  *(undefined1 *)(param_1 + _DAT_112762348) = 0;
  puStack_28 = PTR_PTR_1126f8338;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForRecordingWithMethod__11261ffe8);
  func_0x00010be35a80(param_1);
  return;
}



/* Entry: 106fe77c8; end: 106fe7967; -[SCMainCameraViewController longPress:] */

undefined1 *
FUN_106fe77c8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  ulong uStack_60;
  undefined *puStack_58;
  
  puVar3 = &uStack_60;
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8b500();
  _objc_release(uVar1);
  puStack_58 = PTR_PTR_1126f8338;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_longPress__112530f00,param_5);
  if ((int)puVar3 == 0) goto LAB_106fe7940;
  lVar4 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5);
  _objc_release(lVar4);
  lVar4 = param_5;
  func_0x00010c252440();
  if (lVar4 == 1 && (uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010be41b60();
    if ((int)uVar1 == 0) goto LAB_106fe7940;
    uVar1 = param_3;
    func_0x00010bf08e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) goto LAB_106fe7940;
    func_0x00010c252440(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238320(param_1,param_2);
  }
  else {
    lVar4 = param_5;
    func_0x00010c252440();
    if ((lVar4 != 2) || (uVar1 = param_3, func_0x00010be41b60(), (int)uVar1 == 0))
    goto LAB_106fe7940;
    func_0x00010c252440(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d1640(param_1,param_2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
LAB_106fe7940:
  _objc_release(param_5);
  return (undefined1 *)puVar3;
}



/* Entry: 106fe7968; end: 106fe7a0b; -[SCMainCameraViewController shouldRecognizeButtonActions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106fe7968(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  iVar1 = (int)&lStack_40;
  puStack_38 = PTR_PTR_1126f8338;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_shouldRecognizeButtonActions_11266a310);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = (long)_DAT_11276230c;
    lVar2 = param_1 + lVar5;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c0741e0();
    if ((int)lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      param_1 = param_1 + lVar5;
      _objc_loadWeakRetained(param_1);
      lVar3 = param_1;
      func_0x00010c06c180();
      uVar4 = (uint)lVar3 ^ 1;
      _objc_release(param_1);
    }
    _objc_release(lVar2);
  }
  return uVar4;
}



/* Entry: 106fe7a0c; end: 106fe7cbf; -[SCMainCameraViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106fe7a0c(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uStack_70;
  undefined *puStack_68;
  
  iVar1 = (int)&uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_1126f8338;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_gestureRecognizer_shouldRecogniz_1125ce060,param_3,param_4);
  if (iVar1 == 0) {
    uVar10 = 0;
    goto LAB_106fe7c80;
  }
  uVar2 = param_1;
  func_0x00010c277220();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1 + (long)_DAT_11276230c;
  _objc_loadWeakRetained();
  uVar4 = uVar2;
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  if (param_4 == uVar4) {
    uVar2 = uVar3;
    func_0x00010c29f240();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c252440(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010c0db620();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar2);
      func_0x00010c08fb40(PTR_PTR_1126b3858);
      uVar2 = uVar3;
      func_0x00010c081600();
      if ((int)uVar2 == 0) {
LAB_106fe7c60:
        uVar2 = param_1;
        func_0x00010bfeb400();
        if ((uVar2 & 1) == 0) {
          _objc_release(uVar9);
          goto LAB_106fe7ad4;
        }
      }
      else {
        func_0x00010c0f35e0(PTR_PTR_1126b3860);
        uVar2 = uVar3;
        func_0x00010bf1d560();
        if ((uVar2 & 1) == 0) goto LAB_106fe7c60;
      }
      _objc_release(uVar9);
    }
LAB_106fe7c74:
    uVar10 = 0;
  }
  else {
LAB_106fe7ad4:
    uVar2 = param_1;
    func_0x00010bf2a5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf291c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar9;
    func_0x00010bf31480();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf926c0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_release(uVar2);
    if ((int)uVar7 != 0) {
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c07a060();
      _objc_release(uVar2);
      _objc_release(param_1);
      if ((int)uVar4 != 0) {
        puVar8 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
        _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
        uVar2 = param_4;
        _objc_opt_isKindOfClass(param_4,puVar8);
        if ((uVar2 & 1) != 0) goto LAB_106fe7c74;
      }
    }
    uVar10 = 1;
  }
  _objc_release(uVar3);
LAB_106fe7c80:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar10;
}



/* Entry: 106fe7cc0; end: 106fe7e67; -[SCMainCameraViewController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106fe7cc0(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uStack_60;
  undefined *puStack_58;
  
  puVar7 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c071800();
  if (((int)uVar1 == 0) || (uVar2 = param_4, func_0x00010c071800(), (int)uVar2 == 0)) {
    puVar7 = (ulong *)0x0;
    goto LAB_106fe7d94;
  }
  uVar2 = param_1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf2a1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0805e0();
  if ((uVar4 & 1) == 0) {
    _objc_release(uVar3);
    _objc_release(uVar2);
LAB_106fe7dd4:
    uVar2 = param_1 + (long)_DAT_11276230c;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c0f36c0();
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == uVar3) {
      uVar4 = param_1;
      func_0x00010bfeb400();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar4 & 1) != 0) goto LAB_106fe7e34;
    }
    else {
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    puStack_58 = PTR_PTR_1126f8338;
    uStack_60 = param_1;
    _objc_msgSendSuper2(&uStack_60,PTR_s_gestureRecognizer_shouldBeRequir_1125ce050,param_3,param_4)
    ;
  }
  else {
    uVar4 = param_4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_opt_class(PTR__OBJC_CLASS___UIScrollView_1126af098);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar6 & 1) == 0) goto LAB_106fe7dd4;
LAB_106fe7e34:
    puVar7 = (ulong *)0x1;
  }
LAB_106fe7d94:
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar7;
}


