/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106520f48; end: 106520f67; -[SCSavableItemChatTableViewCell savableDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106520f48(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112749d40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106520f68; end: 106520f7b; -[SCSavableItemChatTableViewCell setSavableDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106520f68(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112749d40,param_3);
  return;
}



/* Entry: 106520f7c; end: 106520fbb; -[SCSavableItemChatTableViewCell setSavedNotifView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106520f7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749d2c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106520fbc; end: 106521017; -[SCSavableItemChatTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106520fbc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112749d2c,0);
  _objc_destroyWeak(param_1 + _DAT_112749d40);
  _objc_storeStrong(param_1 + _DAT_112749d3c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749d28,0);
  return;
}



/* Entry: 106521018; end: 106521213; -[SCSavedChatNotificationView savedLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106521018(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  ulong unaff_x19;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  ulong uStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  double dStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  double dStack_80;
  undefined8 uStack_78;
  double dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_112749d44;
  uVar7 = *(ulong *)(param_1 + lVar8);
  if (uVar7 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010bfb68e0(param_1);
    func_0x00010c013de0();
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar1;
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar8));
    _objc_release(puVar1);
    func_0x0001070681e4();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar8));
    _objc_release(puVar1);
    func_0x00010706820c();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar8));
    _objc_release(puVar1);
    func_0x000107080cb4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar8));
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uStack_58 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    uVar4 = uVar2;
    func_0x0001070681e4();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_50 = uVar4;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0xffffffff;
    uVar10 = 0x7fefffff;
    uVar11 = 0;
    dVar12 = 0.0;
    uVar13 = 0;
    func_0x00010c23d680(uVar2);
    dStack_70 = (double)CONCAT44(uVar10,uVar9);
    dStack_80 = dVar12;
    uStack_78 = uVar13;
    uStack_68 = uVar11;
    _objc_release(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112749d48;
    ((double *)(param_1 + lVar5))[1] = (double)(float)(int)dStack_80;
    *(double *)(param_1 + lVar5) = (double)(float)(int)dStack_70;
    func_0x00010befbb60(param_1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8));
    uVar7 = *(ulong *)(param_1 + lVar8);
    unaff_x19 = param_1;
  }
  uVar3 = uVar7;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_88 = FUN_106521214;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar8 = (long)_DAT_112749d4c;
    uVar7 = *(ulong *)(uVar3 + lVar8);
    puStack_90 = &stack0xfffffffffffffff0;
    if (uVar7 == 0) {
      puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_alloc();
      func_0x00010bfb68e0(uVar3);
      func_0x00010c013de0();
      uVar4 = *(undefined8 *)(uVar3 + lVar8);
      *(undefined **)(uVar3 + lVar8) = puVar1;
      _objc_release(uVar4);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(uVar3 + lVar8));
      _objc_release(puVar1);
      func_0x0001070681e4();
      func_0x00010c19e480(*(undefined8 *)(uVar3 + lVar8));
      _objc_release(puVar1);
      func_0x00010706820c();
      func_0x00010c213180(*(undefined8 *)(uVar3 + lVar8));
      _objc_release(puVar1);
      func_0x000107080ccc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(uVar3 + lVar8));
      _objc_release(puVar1);
      uVar2 = *(undefined8 *)(uVar3 + lVar8);
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      uStack_d8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
      uVar4 = uVar2;
      func_0x0001070681e4();
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      uStack_d0 = uVar4;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = 0xffffffff;
      uVar10 = 0x7fefffff;
      uVar11 = 0;
      dVar12 = 0.0;
      uVar13 = 0;
      func_0x00010c23d680(uVar2);
      dStack_f0 = (double)CONCAT44(uVar10,uVar9);
      dStack_100 = dVar12;
      uStack_f8 = uVar13;
      uStack_e8 = uVar11;
      _objc_release(puVar1);
      _objc_release(uVar4);
      _objc_release(uVar2);
      lVar5 = (long)_DAT_112749d50;
      ((double *)(uVar3 + lVar5))[1] = (double)(float)(int)dStack_100;
      *(double *)(uVar3 + lVar5) = (double)(float)(int)dStack_f0;
      func_0x00010befbb60(uVar3);
      func_0x00010c1a7f60(*(undefined8 *)(uVar3 + lVar8));
      uVar7 = *(ulong *)(uVar3 + lVar8);
      unaff_x19 = uVar3;
    }
    uVar3 = uVar7;
    _objc_retain();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
      ___stack_chk_fail();
      pcStack_108 = FUN_106521410;
      puStack_128 = PTR_PTR_1126f1a48;
      uStack_130 = uVar3;
      uStack_120 = uVar7;
      uStack_118 = unaff_x19;
      ppuStack_110 = &puStack_90;
      _objc_msgSendSuper2(&uStack_130,PTR_s_layoutSubviews_112600e60);
      uVar7 = uVar3;
      func_0x00010be436e0();
      if ((uVar7 & 1) == 0) {
        uVar7 = uVar3;
        func_0x00010be44f60();
        if ((int)uVar7 == 0) {
          return;
        }
        piVar6 = (int *)&DAT_112749d4c;
      }
      else {
        piVar6 = (int *)&DAT_112749d44;
      }
      func_0x00010c19f0e0((int)((undefined8 *)(uVar3 + (long)_DAT_112749d54))[1],
                          *(undefined8 *)(uVar3 + (long)_DAT_112749d54),
                          *(undefined8 *)(uVar3 + (long)piVar6[1]),
                          ((undefined8 *)(uVar3 + (long)piVar6[1]))[1],
                          *(undefined8 *)(uVar3 + (long)*piVar6));
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 106521214; end: 10652140f; -[SCSavedChatNotificationView unsavedLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106521214(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  ulong uStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  double dStack_80;
  undefined8 uStack_78;
  double dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_112749d4c;
  uStack_a0 = *(ulong *)(param_1 + lVar8);
  if (uStack_a0 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010bfb68e0(param_1);
    func_0x00010c013de0();
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar1;
    _objc_release(uVar5);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar8));
    _objc_release(puVar1);
    func_0x0001070681e4();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar8));
    _objc_release(puVar1);
    func_0x00010706820c();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar8));
    _objc_release(puVar1);
    func_0x000107080ccc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar8));
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uStack_58 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    uVar5 = uVar2;
    func_0x0001070681e4();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_50 = uVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0xffffffff;
    uVar10 = 0x7fefffff;
    uVar11 = 0;
    dVar12 = 0.0;
    uVar13 = 0;
    func_0x00010c23d680(uVar2);
    dStack_70 = (double)CONCAT44(uVar10,uVar9);
    dStack_80 = dVar12;
    uStack_78 = uVar13;
    uStack_68 = uVar11;
    _objc_release(puVar1);
    _objc_release(uVar5);
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112749d50;
    ((double *)(param_1 + lVar6))[1] = (double)(float)(int)dStack_80;
    *(double *)(param_1 + lVar6) = (double)(float)(int)dStack_70;
    func_0x00010befbb60(param_1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8));
    uStack_a0 = *(ulong *)(param_1 + lVar8);
    unaff_x19 = param_1;
  }
  uVar3 = uStack_a0;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_88 = FUN_106521410;
    puStack_a8 = PTR_PTR_1126f1a48;
    uStack_b0 = uVar3;
    lStack_98 = unaff_x19;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&uStack_b0,PTR_s_layoutSubviews_112600e60);
    uVar4 = uVar3;
    func_0x00010be436e0();
    if ((uVar4 & 1) == 0) {
      uVar4 = uVar3;
      func_0x00010be44f60();
      if ((int)uVar4 == 0) {
        return;
      }
      piVar7 = (int *)&DAT_112749d4c;
    }
    else {
      piVar7 = (int *)&DAT_112749d44;
    }
    func_0x00010c19f0e0((int)((undefined8 *)(uVar3 + (long)_DAT_112749d54))[1],
                        *(undefined8 *)(uVar3 + (long)_DAT_112749d54),
                        *(undefined8 *)(uVar3 + (long)piVar7[1]),
                        ((undefined8 *)(uVar3 + (long)piVar7[1]))[1],
                        *(undefined8 *)(uVar3 + (long)*piVar7));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_a0);
  return;
}



/* Entry: 106521410; end: 1065214a7; -[SCSavedChatNotificationView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106521410(ulong param_1)

{
  ulong uVar1;
  int *piVar2;
  ulong uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  uVar1 = param_1;
  func_0x00010be436e0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010be44f60();
    if ((int)uVar1 == 0) {
      return;
    }
    piVar2 = (int *)&DAT_112749d4c;
  }
  else {
    piVar2 = (int *)&DAT_112749d44;
  }
  func_0x00010c19f0e0(((undefined8 *)(param_1 + (long)_DAT_112749d54))[1],
                      *(undefined8 *)(param_1 + (long)_DAT_112749d54),
                      *(undefined8 *)(param_1 + (long)piVar2[1]),
                      ((undefined8 *)(param_1 + (long)piVar2[1]))[1],
                      *(undefined8 *)(param_1 + (long)*piVar2));
  return;
}



/* Entry: 1065214a8; end: 106521523; -[SCSavedChatNotificationView setSavedState:] */

/* WARNING: Possible PIC construction at 0x0001065214fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106521500) */

void FUN_1065214a8(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    func_0x00010c282520();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c14b9c0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 106521524; end: 1065215ab; -[SCSavedChatNotificationView labelSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106521524(long param_1)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  
  pdVar1 = (double *)(param_1 + _DAT_112749d54);
  auVar2._0_8_ = *pdVar1 + pdVar1[2];
  auVar2._8_8_ = pdVar1[1] + pdVar1[3];
  NEON_ext(auVar2,auVar2,8,1);
  func_0x00010be436e0();
  if ((int)param_1 == 0) {
    func_0x00010be44f60();
  }
  return;
}



/* Entry: 1065215ac; end: 106521603; -[SCSavedChatNotificationView _isSavedLabelVisible] */

/* WARNING: Possible PIC construction at 0x0001065215c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001065215cc) */
/* WARNING: Removing unreachable block (ram,0x0001065215d8) */
/* WARNING: Removing unreachable block (ram,0x0001065215f4) */
/* WARNING: Removing unreachable block (ram,0x0001065215e8) */
/* WARNING: Removing unreachable block (ram,0x0001065215d0) */
/* WARNING: Removing unreachable block (ram,0x0001065215f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065215ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c074c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749d44),PTR_s_isHidden_1125fad18);
  return;
}



/* Entry: 106521604; end: 10652164b; -[SCSavedChatNotificationView _isUnsavedLabelVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106521604(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112749d44);
  if ((lVar1 == 0) || (func_0x00010c074c20(), (int)lVar1 != 0)) {
    func_0x00010c074c20(*(undefined8 *)(param_1 + _DAT_112749d4c));
  }
  return;
}



/* Entry: 10652164c; end: 106521663; -[SCSavedChatNotificationView insets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10652164c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749d54);
}



/* Entry: 106521664; end: 10652167b; -[SCSavedChatNotificationView setInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106521664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112749d54);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 10652167c; end: 1065216bb; -[SCSavedChatNotificationView setSavedLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652167c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749d44;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065216bc; end: 1065216fb; -[SCSavedChatNotificationView setUnsavedLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065216bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749d4c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065216fc; end: 10652170f; -[SCSavedChatNotificationView savedLabelSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1065216fc(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112749d48);
}



/* Entry: 106521710; end: 106521723; -[SCSavedChatNotificationView setSavedLabelSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106521710(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112749d48;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 106521724; end: 106521737; -[SCSavedChatNotificationView unsavedLabelSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_106521724(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112749d50);
}



/* Entry: 106521738; end: 10652174b; -[SCSavedChatNotificationView setUnsavedLabelSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106521738(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112749d50;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 10652174c; end: 10652178b; -[SCSavedChatNotificationView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652174c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112749d4c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749d44,0);
  return;
}



/* Entry: 10652178c; end: 106521a47; -[SCSnapChatTableViewCellV2 initWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10652178c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  puStack_68 = PTR_PTR_1126f1a50;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithParameters__1125ea7e0,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126cb580;
    _objc_alloc();
    uVar9 = param_3;
    func_0x00010c0f3c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0f3c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c23fa40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c1051c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010beee460(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c033d00();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749d58);
    *(undefined **)((long)puVar1 + (long)_DAT_112749d58) = puVar2;
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar9);
    puVar7 = (undefined1 *)puVar1;
    func_0x00010c0f6720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar7);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar10 = (long)_DAT_112749d5c;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined **)((long)puVar1 + lVar10) = puVar2;
    _objc_release(uVar9);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar10));
    puVar7 = (undefined1 *)puVar1;
    func_0x00010c0f6720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar7);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar10 = (long)_DAT_112749d60;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined **)((long)puVar1 + lVar10) = puVar2;
    _objc_release(uVar9);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar10));
    puVar7 = (undefined1 *)puVar1;
    func_0x00010c0f6720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar7);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar10 = (long)_DAT_112749d64;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined **)((long)puVar1 + lVar10) = puVar2;
    _objc_release(uVar9);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar10));
    puVar7 = (undefined1 *)puVar1;
    func_0x00010c0f6720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar7);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar10 = (long)_DAT_112749d68;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined **)((long)puVar1 + lVar10) = puVar2;
    _objc_release(uVar9);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar10));
    puVar7 = (undefined1 *)puVar1;
    func_0x00010c0f6720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar7);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106521a48; end: 106521aa3; -[SCSnapChatTableViewCellV2 prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106521a48(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c1097a0(*(undefined8 *)(param_1 + _DAT_112749d58));
  func_0x00010c1dcbe0(param_1);
  return;
}



/* Entry: 106521aa4; end: 106521dcb; -[SCSnapChatTableViewCellV2 setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106521aa4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126f1a50;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_setViewModel__1126663d8,param_3);
  puVar2 = PTR_PTR_1126c6d00;
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
  uVar3 = uVar1;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar4 = uVar3;
  func_0x00010010fab4(uVar3,PTR_DAT_1126a5430);
  uVar1 = uVar3;
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bf85c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112749d6c);
    uVar3 = uVar1;
    func_0x00010bf85c00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar6);
    _objc_release(uVar3);
  }
  uVar3 = uVar1;
  func_0x00010c2228a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112749d6c);
    uVar3 = uVar1;
    func_0x00010c2228a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar6);
    _objc_release(uVar3);
  }
  lVar9 = (long)_DAT_112749d58;
  func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar9));
  uVar3 = uVar1;
  func_0x00010c22dd40();
  lVar8 = (long)_DAT_112749d60;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c269020(uVar6);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar3 == 0) {
    func_0x00010c12c9c0(uVar7);
  }
  else {
    func_0x00010bef9040();
  }
  _objc_release(uVar6);
  lVar9 = param_1;
  func_0x00010c29d560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar9;
  func_0x00010c12f740();
  func_0x00010704aa94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112749d5c));
  _objc_release(lVar5);
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010c29d560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar9;
  func_0x00010c12f740();
  func_0x00010704aa94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar8));
  _objc_release(lVar5);
  _objc_release(lVar9);
  lVar8 = param_1;
  func_0x00010c29d560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c12f740();
  func_0x00010704aa94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112749d64));
  _objc_release(lVar9);
  _objc_release(lVar8);
  lVar8 = param_1;
  func_0x00010c29d560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c12f740();
  func_0x00010704aa94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112749d68));
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106521dcc; end: 106521e6b; -[SCSnapChatTableViewCellV2 snapViewModel] */

void FUN_106521dcc(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c6d00;
  _objc_opt_class(PTR_PTR_1126c6d00);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar4 = uVar3;
  func_0x00010010fab4(uVar3,PTR_DAT_1126a5430);
  uVar1 = uVar3;
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106521e6c; end: 1065222c7; -[SCSnapChatTableViewCellV2 layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106521e6c(double param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  int *unaff_x23;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int *piStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126f1a50;
  piStack_80 = param_2;
  _objc_msgSendSuper2(&piStack_80,PTR_s_layoutSubviews_112600e60);
  piVar6 = (int *)&DAT_112749d68;
  lVar5 = (long)_DAT_112749d58;
  func_0x00010c219b60(*(undefined8 *)((long)param_2 + lVar5));
  piVar2 = param_2;
  func_0x00010c0f6720(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  _objc_release(piVar2);
  func_0x00010bf4c5c0(param_2);
  func_0x00010c19f0e0(*(undefined8 *)((long)param_2 + lVar5));
  dVar8 = (double)(float)(int)param_1;
  dVar11 = dVar8 + -4.0;
  piVar2 = param_2;
  func_0x00010c0f6720(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  dVar9 = (double)(ulong)(uint)(int)dVar8;
  dVar8 = (double)(float)(int)dVar8;
  _objc_release(piVar2);
  piVar2 = param_2;
  func_0x00010c243ca0();
  _objc_retainAutoreleasedReturnValue();
  piVar3 = piVar2;
  func_0x00010c234120();
  _objc_release(piVar2);
  piVar2 = param_2;
  func_0x00010c243ca0();
  _objc_retainAutoreleasedReturnValue();
  if (((ulong)piVar3 & 1) == 0) {
    piVar3 = piVar2;
    func_0x00010c2341a0();
    _objc_release(piVar2);
    if ((int)piVar3 != 0) {
      piVar2 = param_2;
      func_0x00010c243ca0(param_2);
      _objc_retainAutoreleasedReturnValue();
      piVar6 = (int *)&DAT_112749d64;
      goto LAB_106521fb4;
    }
  }
  else {
LAB_106521fb4:
    func_0x00010c1519e0(piVar2);
    fVar7 = (float)(int)dVar9;
    _objc_release(piVar2);
    dVar9 = 2.0;
    func_0x00010c19f0e0(0x4000000000000000,dVar8 - (double)fVar7,dVar11,(double)fVar7,
                        *(undefined8 *)((long)param_2 + (long)*piVar6));
  }
  piVar2 = param_2;
  func_0x00010c243ca0();
  _objc_retainAutoreleasedReturnValue();
  piVar3 = piVar2;
  func_0x00010c233f60();
  _objc_release(piVar2);
  if ((int)piVar3 != 0) {
    piVar2 = param_2;
    func_0x00010c243ca0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c131440();
    dVar10 = (double)(ulong)(uint)(int)dVar9;
    dVar12 = (double)(float)(int)dVar9;
    _objc_release(piVar2);
    piVar2 = param_2;
    func_0x00010c243ca0();
    _objc_retainAutoreleasedReturnValue();
    piVar3 = piVar2;
    func_0x00010c2341a0();
    if (((ulong)piVar3 & 1) == 0) {
      piVar6 = param_2;
      func_0x00010c243ca0();
      _objc_retainAutoreleasedReturnValue();
      piVar4 = piVar6;
      func_0x00010c234120();
      dVar9 = dVar8;
      if ((int)piVar4 != 0) goto LAB_106522080;
LAB_1065220b8:
      _objc_release(piVar6);
    }
    else {
LAB_106522080:
      unaff_x23 = (int *)&DAT_112749d64;
      func_0x00010bfb68e0(*(undefined8 *)((long)param_2 + (long)_DAT_112749d64));
      _CGRectGetMinY();
      dVar9 = dVar10;
      func_0x00010bfb68e0(*(undefined8 *)((long)param_2 + (long)_DAT_112749d68));
      _CGRectGetMinY();
      if (dVar9 <= dVar10) {
        dVar9 = dVar10;
      }
      if (((ulong)piVar3 & 1) == 0) goto LAB_1065220b8;
    }
    _objc_release(piVar2);
    piVar6 = param_2;
    func_0x00010c0cb300();
    _objc_retainAutoreleasedReturnValue();
    piVar2 = piVar6;
    func_0x00010c0cb560();
    _objc_release(piVar6);
    dVar10 = dVar9 + dVar12;
    if ((int)piVar2 == 0) {
      dVar10 = dVar9;
    }
    dVar9 = 2.0;
    func_0x00010c19f0e0(0x4000000000000000,dVar10 - dVar12,dVar11,dVar12,
                        *(undefined8 *)((long)param_2 + (long)_DAT_112749d60));
  }
  piVar6 = param_2;
  func_0x00010c243ca0();
  _objc_retainAutoreleasedReturnValue();
  piVar2 = piVar6;
  func_0x00010c233fc0();
  _objc_release(piVar6);
  if ((int)piVar2 == 0) {
    return;
  }
  piVar6 = param_2;
  func_0x00010c243ca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1315a0();
  dVar10 = (double)(ulong)(uint)(int)dVar9;
  dVar9 = (double)(float)(int)dVar9;
  _objc_release(piVar6);
  piVar6 = param_2;
  func_0x00010c243ca0();
  _objc_retainAutoreleasedReturnValue();
  piVar3 = piVar6;
  func_0x00010c2341a0();
  if (((ulong)piVar3 & 1) == 0) {
    piVar2 = param_2;
    func_0x00010c243ca0();
    _objc_retainAutoreleasedReturnValue();
    piVar4 = piVar2;
    func_0x00010c234120();
    if (((ulong)piVar4 & 1) != 0) {
      bVar1 = false;
      goto LAB_1065221d8;
    }
    unaff_x23 = param_2;
    func_0x00010c243ca0();
    _objc_retainAutoreleasedReturnValue();
    piVar4 = unaff_x23;
    func_0x00010c233f60();
    if (((ulong)piVar4 & 1) != 0) {
      bVar1 = true;
      goto LAB_1065221d8;
    }
    _objc_release(unaff_x23);
  }
  else {
    bVar1 = false;
LAB_1065221d8:
    func_0x00010bfb68e0(*(undefined8 *)((long)param_2 + (long)_DAT_112749d60));
    _CGRectGetMinY();
    dVar12 = dVar10;
    func_0x00010bfb68e0(*(undefined8 *)((long)param_2 + (long)_DAT_112749d64));
    _CGRectGetMinY();
    dVar8 = dVar12;
    func_0x00010bfb68e0(*(undefined8 *)((long)param_2 + (long)_DAT_112749d68));
    _CGRectGetMinY();
    if (dVar8 <= dVar12) {
      dVar8 = dVar12;
    }
    if (dVar8 <= dVar10) {
      dVar8 = dVar10;
    }
    if (bVar1) {
      _objc_release(unaff_x23);
    }
    if (((ulong)piVar3 & 1) != 0) goto LAB_10652224c;
  }
  _objc_release(piVar2);
LAB_10652224c:
  _objc_release(piVar6);
  piVar6 = param_2;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  piVar2 = piVar6;
  func_0x00010c0cb560();
  _objc_release(piVar6);
  dVar10 = dVar8 + dVar9;
  if ((int)piVar2 == 0) {
    dVar10 = dVar8;
  }
  func_0x00010c19f0e0(0x4000000000000000,dVar10 - dVar9,dVar11,dVar9,
                      *(undefined8 *)((long)param_2 + (long)_DAT_112749d5c));
  return;
}



/* Entry: 1065222c8; end: 10652231f; -[SCSnapChatTableViewCellV2 renderPayload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065222c8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_renderPayload_1126299b0);
  func_0x00010c12fe40(*(undefined8 *)(param_1 + _DAT_112749d58));
  func_0x00010beae600(param_1);
  return;
}



/* Entry: 106522320; end: 106522363; -[SCSnapChatTableViewCellV2 mediaCardHeight] */

undefined8 FUN_106522320(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c243ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c43c0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106522364; end: 1065224f7; -[SCSnapChatTableViewCellV2 getSnapIconViewRect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106522364(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = param_5;
  func_0x00010c0f6720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMinX();
  dVar2 = param_1;
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c0f6720(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMinY();
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bf1ec20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMinX();
  dVar3 = dVar2;
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bf1ec20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMinY();
  _objc_release(lVar1);
  lVar1 = (long)_DAT_112749d58;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
  _CGRectGetMinX();
  dVar4 = dVar3;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
  _CGRectGetMinY();
  func_0x00010bfca6e0(*(undefined8 *)(param_5 + lVar1));
  dVar5 = dVar4;
  _CGRectGetMinX();
  _CGRectGetMinY(dVar4,param_2,param_3,param_4);
  _CGRectGetWidth(dVar4,param_2,param_3,param_4);
  _CGRectGetHeight(dVar4,param_2,param_3,param_4);
  return dVar3 + dVar2 + param_1 + dVar5;
}



/* Entry: 1065224f8; end: 106522543; -[SCSnapChatTableViewCellV2 setMediaCardViewOpacity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065224f8(double param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112749d58);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0((float)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106522544; end: 106522553; +[SCSnapChatTableViewCellV2 notificationLabelFont] */

void FUN_106522544(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4022000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_demiBoldAvenirNextFontOfSize__1125b8f48);
  return;
}



/* Entry: 106522554; end: 106522787; -[SCSnapChatTableViewCellV2 _setupNotificationLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106522554(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1;
  func_0x00010c243ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c233fc0();
  _objc_release(uVar2);
  uVar1 = (uint)uVar3 ^ 1;
  lVar10 = (long)_DAT_112749d5c;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar10),param_2,uVar1);
  uVar2 = param_1;
  func_0x00010c243ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c233f60();
  _objc_release(uVar2);
  lVar9 = (long)_DAT_112749d60;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar9),param_2,(uint)uVar3 ^ 1);
  uVar2 = param_1;
  func_0x00010c243ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c234120();
  _objc_release(uVar2);
  lVar8 = (long)_DAT_112749d68;
  uVar7 = (uint)uVar4;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8),param_2,uVar7 ^ 1);
  uVar2 = param_1;
  func_0x00010c243ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2341a0();
  _objc_release(uVar2);
  lVar11 = (long)_DAT_112749d64;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar11),param_2,
                      (uVar7 | (uint)uVar4 ^ 0xffffffff) & 1);
  if ((uVar1 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c243ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf0e5a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + lVar10),param_2,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar2);
  }
  if ((uint)uVar3 != 0) {
    uVar2 = param_1;
    func_0x00010c243ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf0e580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + lVar9),param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_1;
  if (uVar7 == 0) {
    if ((uVar4 & 1) == 0) {
      return;
    }
    func_0x00010c243ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf0e5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar11);
  }
  else {
    func_0x00010c243ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf0e5c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar8);
  }
  func_0x00010c16b720(uVar5,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106522788; end: 106522797; -[SCSnapChatTableViewCellV2 resetSnapCountdownTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106522788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf75830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749d58),PTR_s_didEndDisplay_1125bafb0);
  return;
}



/* Entry: 106522798; end: 10652279b; -[SCSnapChatTableViewCellV2 configureWithCollectionViewDelegate:] */

void FUN_106522798(void)

{
  return;
}



/* Entry: 10652279c; end: 1065227cb; -[SCSnapChatTableViewCellV2 contentViewForFocusedContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652279c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749d58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065227cc; end: 10652282f; -[SCSnapChatTableViewCellV2 resetWithOriginalContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065227cc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749d58;
  func_0x00010c139ec0(*(undefined8 *)(param_1 + lVar2));
  lVar1 = param_1;
  func_0x00010c0f6720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010c14df60(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 106522830; end: 1065228af; -[SCSnapChatTableViewCellV2 setPlaceholderView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106522830(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112749d70;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  if (param_3 != 0) {
    func_0x00010c0f6720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065228b0; end: 10652297f; -[SCSnapChatTableViewCellV2 contentFrameInPayloadView] */

double FUN_1065228b0(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = param_2;
  func_0x00010c0f6720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cb560();
  _objc_release(uVar1);
  dVar2 = param_1 + -18.0 + -5.0;
  uVar1 = param_2;
  func_0x00010c0cb300(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6600();
  func_0x00010c0c43c0(param_2);
  _objc_release(uVar1);
  return dVar2;
}



/* Entry: 106522980; end: 10652298f; -[SCSnapChatTableViewCellV2 thumbnailViewForMediaId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106522980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26e5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749d58),PTR_s_thumbnailViewForMediaId__112679390);
  return;
}



/* Entry: 106522990; end: 1065229f7; -[SCSnapChatTableViewCellV2 setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106522990(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749d6c);
  *(undefined8 *)(param_1 + _DAT_112749d6c) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c161980(*(undefined8 *)(param_1 + _DAT_112749d58),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065229f8; end: 106522a07; -[SCSnapChatTableViewCellV2 setReplayDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065229f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1eadf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749d58),PTR_s_setReplayDelegate__1126585a0);
  return;
}



/* Entry: 106522a08; end: 106522a17; -[SCSnapChatTableViewCellV2 actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106522a08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749d6c);
}



/* Entry: 106522a18; end: 106522a37; -[SCSnapChatTableViewCellV2 replayDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106522a18(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112749d74);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106522a38; end: 106522ae3; -[SCSnapChatTableViewCellV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106522a38(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112749d74);
  _objc_storeStrong(param_1 + _DAT_112749d6c,0);
  _objc_storeStrong(param_1 + _DAT_112749d70,0);
  _objc_storeStrong(param_1 + _DAT_112749d78,0);
  _objc_storeStrong(param_1 + _DAT_112749d68,0);
  _objc_storeStrong(param_1 + _DAT_112749d64,0);
  _objc_storeStrong(param_1 + _DAT_112749d60,0);
  _objc_storeStrong(param_1 + _DAT_112749d5c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749d58,0);
  return;
}



/* Entry: 106522ae4; end: 106522be7; -[SCStatusMessageChatTableViewCell _statusMessageViewModel] */

void FUN_106522ae4(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c6d00;
  _objc_opt_class(PTR_PTR_1126c6d00);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  _objc_release(uVar2);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar4 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010010fab4(param_1,PTR_DAT_1126a5438);
    bVar1 = (int)uVar2 == 0;
  }
  else {
    puVar3 = PTR_PTR_1126c6d00;
    _objc_opt_class(PTR_PTR_1126c6d00);
    uVar4 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar3);
    uVar2 = param_1;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    param_1 = uVar2;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cb4a8;
    _objc_opt_class(PTR_PTR_1126cb4a8);
    uVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar3);
    bVar1 = (uVar2 & 1) == 0;
  }
  uVar2 = param_1;
  if (bVar1) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106522be8; end: 106522caf; -[SCStatusMessageChatTableViewCell initWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106522be8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f1a58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithParameters__1125ea7e0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar5 = (long)_DAT_112749d7c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c15de80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c0f6720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106522cb0; end: 106522e9b; -[SCStatusMessageChatTableViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106522cb0(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f1a58;
  lStack_60 = param_2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_2;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c12f740();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_2;
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    dVar3 = param_1;
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c0f6520(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMinY();
    dVar4 = dVar3;
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c0f6520(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    dVar5 = dVar4;
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c0f6520(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetHeight();
    _objc_release(lVar1);
    param_1 = (param_1 - dVar4) * 0.5;
    lVar1 = param_2;
    func_0x00010c0f6520(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,dVar3,dVar4,dVar5);
    _objc_release(lVar1);
  }
  lVar1 = param_2;
  func_0x00010bec2860(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0800();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bec2860(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c274700();
  _objc_release(lVar1);
  lVar2 = (long)_DAT_112749d7c;
  func_0x00010c219b60(*(undefined8 *)(param_2 + lVar2));
  lVar1 = param_2;
  func_0x00010c0f6720(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c19f0e0(0,param_1,*(undefined8 *)(param_2 + lVar2));
  _objc_release(lVar1);
  return;
}



/* Entry: 106522e9c; end: 106522f33; -[SCStatusMessageChatTableViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106522e9c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1a58;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setViewModel__1126663d8);
  lVar1 = param_1;
  func_0x00010bec2860(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0e600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_112749d7c));
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c1cbe20(param_1);
  return;
}



/* Entry: 106522f34; end: 106522f47; -[SCStatusMessageChatTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106522f34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749d7c,0);
  return;
}



/* Entry: 106522f48; end: 106522fa3; -[SCTextChatTableViewCellV2 _immutableViewModel] */

void FUN_106522f48(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c6d00;
  _objc_opt_class(PTR_PTR_1126c6d00);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106522fa4; end: 106523033; -[SCTextChatTableViewCellV2 textViewModel] */

void FUN_106522fa4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010be379c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = lVar2;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = param_1;
  func_0x00010010fab4();
  lVar1 = param_1;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106523034; end: 10652344f; -[SCTextChatTableViewCellV2 initWithParameters:chatAttachmentHandlerScopeExposer:circumstanceEngine:grapheneRegistry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106523034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f1a60;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithParameters__1125ea7e0,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126cb460;
    _objc_alloc_init(PTR_PTR_1126cb460);
    func_0x00010c17b700(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf369c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bf369c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf369c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ea460();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c0f6720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf369c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf369c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf369c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c6900();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf369c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4220();
    _objc_release(puVar3);
    uVar5 = param_3;
    func_0x00010c0f3c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((long)puVar1 + (long)_DAT_112749d80,uVar5);
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749d84);
    *(undefined **)((long)puVar1 + (long)_DAT_112749d84) = puVar2;
    _objc_release(uVar5);
    lVar8 = (long)_DAT_112749d88;
    _objc_retain(param_5);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_5;
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010c0cbd40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749d8c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112749d8c) = uVar5;
    _objc_release(uVar6);
    uVar5 = param_3;
    func_0x00010c0b8fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf9e500();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749d90);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112749d90) = uVar6;
    _objc_release(uVar7);
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010c0b8fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf9e520();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749d94);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112749d94) = uVar6;
    _objc_release(uVar7);
    _objc_release(uVar5);
    lVar8 = (long)_DAT_112749d98;
    _objc_retain(param_4);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_4;
    _objc_release(uVar5);
    lVar8 = (long)_DAT_112749d9c;
    _objc_retain(param_6);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_6;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749da0);
    *(undefined **)((long)puVar1 + (long)_DAT_112749da0) = puVar2;
    _objc_release(uVar5);
    _objc_initWeak(auStack_68,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749da4);
    *(undefined **)((long)puVar1 + (long)_DAT_112749da4) = puVar2;
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106523450; end: 10652348f;  */

void FUN_106523450(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1fca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106523490; end: 1065234df; -[SCTextChatTableViewCellV2 renderPayload] */

void FUN_106523490(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_renderPayload_1126299b0);
  func_0x00010c12f7e0(param_1);
  func_0x00010c12fda0(param_1);
  return;
}



/* Entry: 1065234e0; end: 106523537; -[SCTextChatTableViewCellV2 prepareForReuse] */

void FUN_1065234e0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010be933a0(param_1);
  func_0x00010c1dcbe0(param_1);
  return;
}



/* Entry: 106523538; end: 10652357f; -[SCTextChatTableViewCellV2 setViewModel:] */

void FUN_106523538(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setViewModel__1126663d8);
  func_0x00010c1cbe20(param_1);
  return;
}



/* Entry: 106523580; end: 1065238a3; -[SCTextChatTableViewCellV2 layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106523580(double param_1,double param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulong uStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126f1a60;
  uStack_80 = param_3;
  _objc_msgSendSuper2(&uStack_80,PTR_s_layoutSubviews_112600e60);
  uVar1 = param_3;
  func_0x00010c26cbe0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c233500();
  _objc_release(uVar1);
  dVar8 = param_1;
  dVar11 = 0.0;
  if ((int)uVar6 != 0) {
    uVar1 = param_3;
    func_0x00010c26cbe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf369e0();
    dVar8 = param_1;
    _objc_release(uVar1);
    dVar11 = param_1;
  }
  uVar1 = param_3;
  func_0x00010bf369c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c12f740();
  uVar5 = param_3;
  func_0x00010c0cb300(param_3);
  _objc_retainAutoreleasedReturnValue();
  if ((uVar6 & 1) == 0) {
    func_0x00010c0f65a0();
  }
  else {
    func_0x00010c0f6580();
  }
  _objc_release(uVar5);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0cb300(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6540();
  uVar6 = param_3;
  func_0x00010bf369c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  dVar9 = 0.0;
  func_0x00010c19f0e0(param_2,0,dVar8,dVar11);
  _objc_release(uVar6);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010be20700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf369c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMaxY();
  dVar8 = param_2;
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c0f6720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  uVar5 = param_3;
  func_0x00010c0cb300(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6540();
  uVar2 = param_3;
  dVar10 = dVar9;
  func_0x00010c0cb300(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6540();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar6);
  lVar7 = (long)_DAT_112749d84;
  lVar3 = *(long *)(param_3 + lVar7);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    uVar6 = 0;
    dVar8 = dVar8 - dVar9;
    dVar11 = dVar8 - dVar11;
    param_2 = param_2 + 8.0;
    do {
      uVar4 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010c0dfd40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219b60();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010c0dfd40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c0dfd40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0640();
      uVar2 = param_3;
      func_0x00010c0cb300(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f6540();
      dVar9 = param_2;
      func_0x00010c19f0e0(dVar10,param_2,dVar11,dVar8,uVar4);
      _objc_release(uVar2);
      dVar8 = dVar8 + 8.0;
      param_2 = param_2 + dVar8;
      _objc_release(uVar5);
      _objc_release(uVar4);
      uVar6 = uVar6 + 1;
      uVar5 = *(ulong *)(param_3 + lVar7);
      func_0x00010bf529e0();
      dVar10 = dVar9;
    } while (uVar6 < uVar5);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 1065238a4; end: 1065238fb; -[SCTextChatTableViewCellV2 renderChatLabel] */

void FUN_1065238a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf369c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26cbe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(uVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065238fc; end: 10652397b; -[SCTextChatTableViewCellV2 didChangeVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065238fc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a60;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didChangeVisibility__1125ba7b8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112749da0);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10652397c; end: 106523acf; -[SCTextChatTableViewCellV2 _openAttachment:senderUserId:otherParticipantId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652397c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar6 = (long)_DAT_112749d98;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c071800();
  if (iVar1 != 0) {
    func_0x00010be8ba40(param_1);
    puVar2 = PTR_PTR_1126b3530;
    _objc_alloc(PTR_PTR_1126b3530);
    lVar3 = param_1 + _DAT_112749d80;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c038f40(puVar2,param_2,lVar3,1);
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126b4488;
    _objc_alloc(PTR_PTR_1126b4488);
    lVar3 = param_1;
    func_0x00010be379c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf50940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff4980(puVar4,param_2,param_3,param_4,param_5,lVar5,puVar2,param_1);
    _objc_release(lVar5);
    _objc_release(lVar3);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar6),param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106523ad0; end: 1065243df; -[SCTextChatTableViewCellV2 _buildAttachmentCardViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106523ad0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined *puStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined1 auStack_2b0 [8];
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined1 auStack_200 [8];
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  
  _objc_retain(param_3);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x2020000000;
  uStack_90 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uVar10 = 0x3032000000;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_1065243e0;
  pcStack_b8 = FUN_106524408;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  uStack_f0 = 0x106524410;
  uStack_e8 = 0x106524420;
  uStack_e0 = 0;
  lVar2 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c122e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c15df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_110,param_1);
  lVar5 = param_3;
  func_0x00010c0c43a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_106524428;
  puStack_140 = &UNK_110929d40;
  puStack_128 = &uStack_a8;
  puStack_120 = &uStack_d8;
  _objc_copyWeak(auStack_118,auStack_110);
  _objc_retain(lVar2);
  lStack_138 = lVar2;
  _objc_retain(lVar3);
  puStack_1a0 = puVar1;
  uStack_198 = 0xc2000000;
  uStack_190 = 0x1065245a8;
  puStack_188 = &UNK_110929d70;
  puStack_170 = &uStack_a8;
  puStack_168 = &uStack_d8;
  lStack_130 = lVar3;
  _objc_copyWeak(auStack_160,auStack_110);
  _objc_retain(lVar2);
  lStack_180 = lVar2;
  _objc_retain(lVar3);
  puStack_1f8 = puVar1;
  uStack_1f0 = 0xc2000000;
  pcStack_1e8 = FUN_106524728;
  puStack_1e0 = &UNK_110929da0;
  lStack_178 = lVar3;
  _objc_copyWeak(auStack_1a8,auStack_110);
  puStack_1c0 = &uStack_108;
  _objc_retain(param_3);
  lStack_1d8 = param_3;
  puStack_1b8 = &uStack_a8;
  puStack_1b0 = &uStack_d8;
  _objc_retain(lVar2);
  lStack_1d0 = lVar2;
  _objc_retain(lVar3);
  lStack_1c8 = lVar3;
  func_0x00010c0bf360(lVar5);
  _objc_release(lVar5);
  puVar4 = PTR_PTR_1126cb588;
  _objc_alloc();
  func_0x00010bff4ac0();
  lVar5 = param_3;
  func_0x00010bf0e660(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2a80(puVar4);
  _objc_release(lVar6);
  _objc_release(lVar5);
  lVar5 = param_3;
  func_0x00010bf0e500(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9020(puVar4);
  _objc_release(lVar6);
  _objc_release(lVar5);
  lVar5 = param_3;
  func_0x00010c1121a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2360(puVar4);
  _objc_release(lVar5);
  lVar5 = param_3;
  func_0x00010bf15580(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16ede0(puVar4);
  _objc_release(lVar5);
  func_0x00010c1d3960(puVar4);
  puStack_230 = puVar1;
  uStack_228 = 0xc2000000;
  pcStack_220 = FUN_106524a98;
  puStack_218 = &UNK_110929dd0;
  _objc_copyWeak(auStack_200,auStack_110);
  _objc_retain(param_3);
  puStack_208 = &uStack_a8;
  lStack_210 = param_3;
  func_0x00010c1d3fc0(puVar4);
  lVar5 = puStack_100[5];
  if (lVar5 == 0) goto LAB_1065240ec;
  func_0x00010c08b3c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
LAB_106523f94:
    lVar5 = puStack_100[5];
    func_0x00010befd580();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) goto LAB_1065240ec;
    lVar6 = puStack_100[5];
    func_0x00010c0fd260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    if (lVar6 == 0) goto LAB_1065240ec;
    lVar7 = *(long *)(param_1 + _DAT_112749d90);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puStack_100[5];
    func_0x00010befd580(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puStack_100[5];
    func_0x00010c0fd260(uVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = puStack_100[5];
    func_0x00010c247dc0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + _DAT_112749d80;
    _objc_loadWeakRetained(param_1);
    lVar6 = lVar7;
    func_0x00010bfc8ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    lVar6 = puStack_100[5];
    func_0x00010c0b55a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      _objc_release(lVar5);
      goto LAB_106523f94;
    }
    lVar7 = puStack_100[5];
    func_0x00010c0fd260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    _objc_release(lVar5);
    if (lVar7 == 0) goto LAB_106523f94;
    uVar8 = puStack_100[5];
    func_0x00010c08b3c0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    uVar9 = puStack_100[5];
    uVar11 = uVar10;
    func_0x00010c0b55a0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _CLLocationCoordinate2DMake(uVar10,uVar11);
    _objc_release(uVar9);
    _objc_release(uVar8);
    lVar7 = *(long *)(param_1 + _DAT_112749d90);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puStack_100[5];
    func_0x00010c0fd260(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puStack_100[5];
    func_0x00010c247dc0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_112749d80;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar7;
    func_0x00010bfc8d00(uVar10,uVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar5);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  if (lVar6 != 0) {
    puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_250 = 0xc2000000;
    pcStack_248 = FUN_106524b08;
    puStack_240 = &UNK_11085af88;
    _objc_retain(lVar6);
    lStack_238 = lVar6;
    func_0x00010c1dc260(puVar4);
    _objc_release(lStack_238);
    _objc_release(lVar6);
  }
LAB_1065240ec:
  lVar5 = param_3;
  func_0x00010c1407e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_278 = 0xc2000000;
  pcStack_270 = FUN_106524b10;
  puStack_268 = &UNK_110929e00;
  _objc_retain(puVar4);
  puStack_2a8 = puVar1;
  uStack_2a0 = 0xc2000000;
  uStack_298 = 0x106524c9c;
  puStack_290 = &UNK_110929e30;
  puStack_260 = puVar4;
  _objc_retain(puVar4);
  puStack_288 = puVar4;
  func_0x00010c0be380(lVar5);
  _objc_release(lVar5);
  lVar5 = param_3;
  func_0x00010bf28a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_3;
    func_0x00010bf28a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_2e0 = puVar1;
    uStack_2d8 = 0xc2000000;
    pcStack_2d0 = FUN_106524d68;
    puStack_2c8 = &UNK_110929e60;
    _objc_copyWeak(auStack_2b0,auStack_110);
    _objc_retain(lVar2);
    lStack_2c0 = lVar2;
    _objc_retain(lVar3);
    lVar6 = lVar5;
    lStack_2b8 = lVar3;
    func_0x000100504554(lVar5,&puStack_2e0);
    func_0x00010c186600(puVar4);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lStack_2b8);
    _objc_release(lStack_2c0);
    _objc_destroyWeak(auStack_2b0);
  }
  puVar1 = puStack_288;
  _objc_retain(puVar4);
  _objc_release(puVar1);
  _objc_release(puStack_260);
  _objc_release(lStack_210);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_200);
  _objc_release(lStack_1c8);
  _objc_release(lStack_1d0);
  _objc_release(lStack_1d8);
  _objc_destroyWeak(auStack_1a8);
  _objc_release(lStack_178);
  _objc_release(lStack_180);
  _objc_destroyWeak(auStack_160);
  _objc_release(lStack_130);
  _objc_release(lStack_138);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_110);
  _objc_release(lVar2);
  _objc_release(lVar3);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1065243e0; end: 106524407;  */

void FUN_1065243e0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retainBlock();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 106524408; end: 106524427;  */

void FUN_106524408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106524428; end: 106524727;  */

void FUN_106524428(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x106524520;
  puStack_58 = &UNK_110850cf8;
  _objc_copyWeak(auStack_38,param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = param_2;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar3;
  _objc_retain(uVar4);
  uStack_40 = uVar4;
  _objc_retain(param_2);
  _objc_retainBlock();
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = ppuVar1;
  _objc_release(uVar3);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106524728; end: 106524943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106524728(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  ppuVar5 = &puStack_90;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar10 = (long)_DAT_112749d94;
  uVar2 = *(undefined8 *)(lVar1 + lVar10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c082420();
  _objc_release(uVar8);
  _objc_release(uVar2);
  if ((int)uVar9 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + lVar10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010c28f340(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf0e660(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfc8d20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar7 = *(undefined8 *)(lVar10 + 0x28);
    *(undefined8 *)(lVar10 + 0x28) = uVar2;
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_release(uVar8);
    _objc_release(uVar3);
  }
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uVar6 = 0;
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) != 0) {
    uVar6 = 3;
  }
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar6;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106524944;
  puStack_78 = &UNK_110850cf8;
  _objc_copyWeak(auStack_58,param_1 + 0x50);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = param_2;
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar8;
  _objc_retain(uVar9);
  uStack_60 = uVar9;
  _objc_retain(param_2);
  _objc_retainBlock();
  lVar10 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar8 = *(undefined8 *)(lVar10 + 0x28);
  *(undefined ***)(lVar10 + 0x28) = ppuVar5;
  _objc_release(uVar8);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar1);
  return;
}



/* Entry: 106524944; end: 1065249cb;  */

void FUN_106524944(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  puVar3 = PTR_PTR_1126b4480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c28f340(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28fb40(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6cec0(lVar1,param_2,puVar3,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065249cc; end: 106524a97;  */

void FUN_1065249cc(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x50,param_2 + 0x50);
  return;
}



/* Entry: 106524a98; end: 106524b07;  */

void FUN_106524a98(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1121a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be59b60(lVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106524b08; end: 106524b0f;  */

void FUN_106524b08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 106524b10; end: 106524d67;  */

void FUN_106524b10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126cb590;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bfe4900(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01abc0(puVar1);
  _objc_release(uVar2);
  func_0x00010707c878();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f440(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bfe49e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9400(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bfe4ae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a94e0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bfe4ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a94c0(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c2392c0(param_2);
  _objc_release(param_2);
  func_0x00010c0df6e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c201ec0(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126cb598;
  _objc_opt_new(PTR_PTR_1126cb598);
  func_0x00010c1a93e0();
  func_0x00010c1ee000(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106524d68; end: 106524f1b;  */

void FUN_106524d68(long param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x25;
  undefined8 uVar5;
  undefined1 **unaff_x26;
  undefined8 *unaff_x27;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126cb5a8;
  _objc_opt_new(PTR_PTR_1126cb5a8);
  puVar2 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010bfe5be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a97e0(puVar1);
  _objc_release(puVar2);
  func_0x00010c174a80(puVar1);
  puVar3 = param_2;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = auStack_68;
    _objc_copyWeak(puVar2,param_1 + 0x30);
    unaff_x26 = &puStack_80;
    _objc_retain(param_2);
    unaff_x27 = &uStack_78;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puStack_80 = param_2;
    _objc_retain(uVar5);
    unaff_x25 = &uStack_70;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uStack_78 = uVar5;
    _objc_retain(uVar4);
    uStack_70 = uVar4;
  }
  func_0x00010c1d3960(puVar1);
  _objc_release(puVar3);
  if (puVar3 != (undefined1 *)0x0) {
    _objc_release(*unaff_x25);
    _objc_release(*unaff_x27);
    _objc_release(*unaff_x26);
    _objc_destroyWeak(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106524f1c; end: 106524fa3;  */

void FUN_106524f1c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  puVar3 = PTR_PTR_1126b4480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c28f340(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28fb40(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6cec0(lVar1,param_2,puVar3,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106524fa4; end: 106524fc3; -[SCTextChatTableViewCellV2 _logThumbnailLoadForUrl:loadSuccess:attachmentCardType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106524fa4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126b2950;
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112749d9c);
    _objc_retain();
    func_0x00010bf0cbe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c2ac460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar2 = puVar5;
    func_0x00010c2ac460(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    uVar6 = uVar1;
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar6;
    func_0x00010bf366a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar1);
    _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106524fc4; end: 106525057; -[SCTextChatTableViewCellV2 _getMediaCardViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106524fc4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112749da4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  func_0x00010c26cbe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  if ((uVar2 & 1) == 0) {
    func_0x00010c0c4400();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfaeae0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106525058; end: 1065250bb; -[SCTextChatTableViewCellV2 _getIsInlineOnlyMediaCardsEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106525058(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749d8c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90800();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065250bc; end: 106525163; -[SCTextChatTableViewCellV2 _webViewFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065250bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749d8c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf92660();
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010c295440(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112749d80;
  _objc_loadWeakRetained(param_1);
  lVar4 = lVar3;
  func_0x00010707c46c(lVar3,uVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106525164; end: 106525247; -[SCTextChatTableViewCellV2 _resetMediaCardsWithMaxCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106525164(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  
  lVar5 = (long)_DAT_112749d84;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + lVar5));
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010bf529e0();
  if (uVar1 != param_3) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc0000000;
    pcStack_48 = FUN_106525248;
    puStack_40 = &UNK_110929e90;
    uStack_38 = param_3;
    func_0x00010bf97e80(*(undefined8 *)(param_1 + lVar5),param_2,&puStack_58);
    uVar1 = *(ulong *)(param_1 + lVar5);
    func_0x00010bf529e0();
    if (param_3 < uVar1) {
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c25e980(uVar2,param_2,0,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0d3c80();
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(undefined8 *)(param_1 + lVar5) = uVar3;
      _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 106525248; end: 106525263;  */

void FUN_106525248(long param_1,undefined8 param_2,long param_3)

{
  if (*(ulong *)(param_1 + 0x20) < param_3 + 1U) {
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_removeFromSuperview_112628c78);
    return;
  }
  return;
}



/* Entry: 106525264; end: 1065254af; -[SCTextChatTableViewCellV2 renderMediaCards] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106525264(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar1 = param_1;
  func_0x00010be20700();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar1;
  func_0x00010bf529e0();
  func_0x00010be933a0(param_1,param_2,uVar12);
  uVar12 = uVar1;
  func_0x00010bf529e0();
  if (uVar12 != 0) {
    uVar12 = 0;
    do {
      uVar2 = uVar1;
      func_0x00010c0dfd40(uVar1,param_2,uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010bdd5d00(param_1,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 != 0) {
        lVar11 = (long)_DAT_112749d84;
        uVar4 = *(ulong *)(param_1 + lVar11);
        func_0x00010bf529e0();
        if (uVar12 < uVar4) {
          puVar5 = *(undefined **)(param_1 + lVar11);
          func_0x00010c0dfd40(puVar5,param_2,uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2226c0();
        }
        else {
          puVar5 = PTR_PTR_1126cb5b0;
          _objc_opt_new(PTR_PTR_1126cb5b0);
          uVar4 = param_1;
          func_0x00010beeaba0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c224fa0(puVar5,param_2,uVar4);
          _objc_release(uVar4);
          uVar6 = *(undefined8 *)(param_1 + (long)_DAT_112749da0);
          func_0x00010bf870a0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c272120();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c223780(puVar5,param_2,uVar7);
          _objc_release(uVar7);
          _objc_release(uVar6);
          puVar8 = PTR_PTR_1126cb5b8;
          _objc_alloc(PTR_PTR_1126cb5b8);
          uVar4 = param_1;
          func_0x00010c295440(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar4;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010c142e00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c061d40(puVar8,param_2,uVar3,puVar5,uVar10);
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar4);
          func_0x00010befa120(*(undefined8 *)(param_1 + lVar11),param_2,puVar8);
          uVar4 = param_1;
          func_0x00010c0f6720(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60();
          _objc_release(uVar4);
          _objc_release(puVar8);
        }
        _objc_release(puVar5);
      }
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar12 = uVar12 + 1;
      uVar2 = uVar1;
      func_0x00010bf529e0();
    } while (uVar12 < uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065254b0; end: 10652560f; -[SCTextChatTableViewCellV2 attributedLabel:didSelectLinkWithURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065254b0(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c26cbe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c22da40();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010be6cd40(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bde9980(param_1,param_2,param_4);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_68 = lVar1;
    lStack_60 = lVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_68,2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cb5c0;
    _objc_alloc();
    puVar5 = puVar3;
    func_0x00010bf51e00(puVar3);
    param_3 = puVar5;
    func_0x00010bff0b60(puVar4,param_2,puVar5,2,param_1);
    lVar7 = (long)_DAT_112749da8;
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar5);
    func_0x00010c10ae00(*(undefined8 *)(param_1 + lVar7));
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(param_4 + _DAT_112749dac);
  func_0x00010c268c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar6,param_2,param_4,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106525610; end: 10652566b; -[SCTextChatTableViewCellV2 didSelectMention:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106525610(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749dac);
  func_0x00010c268c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar1,param_2,param_1,param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10652566c; end: 1065258b3; -[SCTextChatTableViewCellV2 didSelectMediaCard:] */

void FUN_10652566c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = param_3;
  func_0x00010c15df40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c122e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar4 = param_3;
  func_0x00010c0c43a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1065258b4;
  puStack_88 = &UNK_110929eb0;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(uVar2);
  uStack_80 = uVar2;
  _objc_retain(uVar3);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x106525958;
  puStack_c0 = &UNK_110929ee0;
  uStack_78 = uVar3;
  _objc_copyWeak(auStack_a8,auStack_68);
  _objc_retain(uVar2);
  uStack_b8 = uVar2;
  _objc_retain(uVar3);
  uStack_b0 = uVar3;
  _objc_copyWeak(auStack_e0,auStack_68);
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  func_0x00010c0bf360(uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_e0);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 1065258b4; end: 106525a9f;  */

void FUN_1065258b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  puVar2 = PTR_PTR_1126b4480;
  uVar1 = param_2;
  func_0x00010c0faf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0fb0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6cec0(param_1);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106525aa0; end: 106525ad3; -[SCTextChatTableViewCellV2 actionSheetWillAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106525aa0(long param_1)

{
  param_1 = param_1 + _DAT_112749d80;
  _objc_loadWeakRetained(param_1);
  func_0x00010beef0c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106525ad4; end: 106525b27; -[SCTextChatTableViewCellV2 actionSheetWillDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106525ad4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + _DAT_112749d80;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beef0e0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112749da8);
  *(undefined8 *)(param_1 + _DAT_112749da8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106525b28; end: 106525bff; -[SCTextChatTableViewCellV2 _openActionForUrl:] */

void FUN_106525b28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e360b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e360b8,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106525c00;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_60);
  puVar3 = PTR_PTR_1126cb5c8;
  _objc_alloc(PTR_PTR_1126cb5c8);
  func_0x00010c02d560();
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106525c00; end: 106525c0b;  */

void FUN_106525c00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6d7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__openURL__112578f88,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106525c0c; end: 106525ce7; -[SCTextChatTableViewCellV2 _copyActionForUrl:] */

undefined * FUN_106525c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106525ce8;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_58;
  _objc_retainBlock(ppuVar1);
  puVar2 = PTR_PTR_1126cb5c8;
  _objc_alloc(PTR_PTR_1126cb5c8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e53578;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e53578,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02d560(puVar2);
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 106525ce8; end: 106525d47;  */

void FUN_106525ce8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beec820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e7c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106525d48; end: 106525f2b; -[SCTextChatTableViewCellV2 _openURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106525d48(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112749d80;
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c082da0();
  _objc_release(lVar1);
  puVar4 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = param_1;
    func_0x00010bdd9c20();
    if ((int)lVar1 == 0) {
      puVar6 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar6;
      func_0x00010bf2cf00();
      _objc_release(puVar6);
      if ((int)puVar3 == 0) goto LAB_106525e94;
      puVar6 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_3;
      func_0x00010c0e9b80();
    }
    else {
      puVar6 = PTR_PTR_1126b4480;
      func_0x00010c28fb40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c29d560();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c122e00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010be6cec0(param_1);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
  else {
    puVar6 = (undefined *)(param_1 + lVar7);
    _objc_loadWeakRetained();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7c920(puVar6);
    _objc_release(puVar3);
  }
  _objc_release(puVar6);
LAB_106525e94:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    _objc_retain(puVar4);
    puVar6 = puVar4;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010c0720c0();
    if ((((ulong)puVar6 & 1) == 0) && (puVar6 = puVar3, func_0x00010c0720c0(), (int)puVar6 == 0)) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar4;
      func_0x000108b8fb14(puVar4,*(undefined8 *)(param_3 + _DAT_112749d88));
      puVar6 = (undefined *)(ulong)((uint)puVar6 ^ 1);
    }
    _objc_release(puVar3);
    _objc_release(puVar4);
    return puVar6;
  }
  return param_3;
}



/* Entry: 106525f2c; end: 106525feb; -[SCTextChatTableViewCellV2 _canOpenURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106525f2c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0720c0();
  if (((uVar1 & 1) == 0) && (uVar1 = uVar2, func_0x00010c0720c0(), (int)uVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x000108b8fb14(param_3,*(undefined8 *)(param_1 + _DAT_112749d88));
    uVar3 = (uint)uVar1 ^ 1;
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106525fec; end: 1065261e3; -[SCTextChatTableViewCellV2 actionMenuIndexForPointInsideCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106525fec(double param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  
  lVar1 = param_3;
  func_0x00010c0f6720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf512a0(param_3,param_4,lVar1);
  _objc_release(lVar1);
  lVar7 = (long)_DAT_112749d84;
  lVar1 = *(long *)(param_3 + lVar7);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar6 = 0;
    do {
      uVar2 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010c0dfd40(uVar2,param_4,uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetMinY();
      param_1 = param_1 + -8.0;
      if (param_1 <= param_2) {
        _objc_release(uVar2);
      }
      else {
        lVar1 = param_3;
        func_0x00010c26cbe0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010c233500();
        _objc_release(lVar1);
        _objc_release(uVar2);
        if ((uVar6 == 0) && ((int)lVar3 == 0)) {
          return 1;
        }
      }
      uVar2 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010c0dfd40(uVar2,param_4,uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetMinY();
      param_1 = param_1 + -8.0;
      if (param_1 <= param_2) {
        uVar4 = *(undefined8 *)(param_3 + lVar7);
        func_0x00010c0dfd40(uVar4,param_4,uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0();
        _CGRectGetMaxY();
        dVar8 = param_1 + 8.0;
        _objc_release(uVar4);
        _objc_release(uVar2);
        if (param_2 < dVar8) goto LAB_1065261bc;
      }
      else {
        _objc_release(uVar2);
      }
      uVar2 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010c0dfd40(uVar2,param_4,uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetMaxY();
      param_1 = param_1 + 8.0;
      if (param_2 <= param_1) {
        _objc_release(uVar2);
      }
      else {
        lVar1 = *(long *)(param_3 + lVar7);
        func_0x00010bf529e0();
        _objc_release(uVar2);
        if (uVar6 == lVar1 - 1U) {
LAB_1065261bc:
          return uVar6 + 1;
        }
      }
      uVar6 = uVar6 + 1;
      uVar5 = *(ulong *)(param_3 + lVar7);
      func_0x00010bf529e0();
    } while (uVar6 < uVar5);
  }
  return 0;
}



/* Entry: 1065261e4; end: 1065261e7; -[SCTextChatTableViewCellV2 configureWithCollectionViewDelegate:] */

void FUN_1065261e4(void)

{
  return;
}



/* Entry: 1065261e8; end: 10652635f; -[SCTextChatTableViewCellV2 contentViewForFocusedContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065261e8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112749d84;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010bf369c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_106526324;
  }
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  func_0x00010c0be080(param_3);
  if (puStack_58[3] == 0) {
    uVar2 = param_1;
    func_0x00010c26cbe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c233500();
    if ((uVar3 & 1) == 0) {
      lVar1 = *(long *)(param_1 + lVar4);
      func_0x00010bf529e0();
      _objc_release(uVar2);
      if (lVar1 != 0) goto LAB_106526290;
    }
    else {
      _objc_release(uVar2);
    }
    func_0x00010bf369c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_106526290:
    param_1 = *(ulong *)(param_1 + lVar4);
    func_0x00010c0dfd40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_60,8);
LAB_106526324:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106526360; end: 10652636f;  */

void FUN_106526360(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 106526370; end: 10652652b; -[SCTextChatTableViewCellV2 resetWithOriginalContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106526370(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar5 = param_1;
  func_0x00010bf369c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139ec0();
  _objc_release(lVar5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749d88);
  func_0x00010bf1f460(uVar1,param_2,&PTR____CFConstantStringClassReference_110e53558,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    lVar5 = param_1;
    func_0x00010bf369c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2101c0();
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010bf369c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c0f6720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar5);
    if (lVar3 == lVar4) goto LAB_10652649c;
  }
  lVar5 = param_1;
  func_0x00010c0f6720(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf369c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar5,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar5);
LAB_10652649c:
  func_0x00010c12f7e0(param_1);
  lVar5 = (long)_DAT_112749d84;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + lVar5));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10652652c;
  puStack_40 = &UNK_110914e68;
  lStack_38 = param_1;
  func_0x00010bf97e80(*(undefined8 *)(param_1 + lVar5),param_2,&puStack_58);
  lVar5 = param_1;
  func_0x00010bf369c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14df60();
  _objc_release(lVar5);
  func_0x00010c1cbe20(param_1);
  return;
}



/* Entry: 10652652c; end: 106526583;  */

void FUN_10652652c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010c14df60(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0f6720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106526584; end: 106526603; -[SCTextChatTableViewCellV2 setPlaceholderView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106526584(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112749db0;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  if (param_3 != 0) {
    func_0x00010c0f6720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106526604; end: 10652663b; -[SCTextChatTableViewCellV2 setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106526604(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749dac);
  *(undefined8 *)(param_1 + _DAT_112749dac) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10652663c; end: 10652663f; -[SCTextChatTableViewCellV2 didDismissChatAttachment] */

void FUN_10652663c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8ba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeChatAttachmentHandlerScop_112580830);
  return;
}



/* Entry: 106526640; end: 106526673; -[SCTextChatTableViewCellV2 mapScopeDidPresent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106526640(long param_1)

{
  param_1 = param_1 + _DAT_112749d80;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf35f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


