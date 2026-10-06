/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e78630; end: 108e78737;  */

void FUN_108e78630(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108e78738;
  puStack_68 = &UNK_110850cf8;
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = param_2;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  _objc_retain(uVar1);
  uStack_50 = uVar1;
  func_0x000107c312cc("APPSTORE",&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108e78738; end: 108e7877f;  */

void FUN_108e78738(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf1f3c0(uVar2);
    func_0x00010bee0bc0(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e78780; end: 108e789ab; -[SCStickerActionMenuProvider _updateStickerFavoritedCellWithIsFavorited:actionSheet:loadingCell:] */

void FUN_108e78780(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  byte bStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain(param_5);
  if ((param_3 & 1) == 0) {
    func_0x000109201d18();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000109201d30();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x00010c0ec240(PTR_PTR_1126b10a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  puVar3 = puVar2;
  bStack_70 = param_3;
  func_0x00010bf1d200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = param_4;
  func_0x00010beee860(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0d3c80();
  _objc_release(uVar4);
  func_0x00010c12d360(uVar5);
  func_0x00010c066b00(uVar5);
  uVar4 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c2711a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf51e00(uVar5);
  func_0x00010bfb4220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1312e0(param_4);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108e789ac; end: 108e78cab;  */

void FUN_108e789ac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_108e78c64;
  lVar2 = lVar1;
  func_0x00010be0d6e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      puVar3 = *(undefined **)(lVar1 + 0x58);
      func_0x00010c269d40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c12c360();
      _objc_retainAutoreleasedReturnValue();
LAB_108e78ba0:
      func_0x00010c297260();
    }
    else {
      puVar4 = PTR_PTR_1126dc410;
      func_0x00010c070060();
      if ((int)puVar4 == 0) {
        puVar3 = *(undefined **)(lVar1 + 0x58);
        func_0x00010c269d40(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bef81c0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_108e78ba0;
      }
      puVar3 = *(undefined **)(lVar1 + 0x50);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = *(undefined **)(lVar1 + 0x10);
      func_0x00010c271a60();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      if ((puVar3 == (undefined *)0x0) || (puVar4 == (undefined *)0x0)) {
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be295c0(lVar1);
        _objc_release(puVar6);
      }
      else {
        func_0x00010c0ed1a0(lVar2);
        puVar5 = puVar3;
        func_0x00010bef82c0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297260();
      }
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010bf82fe0(param_2);
    lVar7 = lVar1 + 0x28;
    _objc_loadWeakRetained(lVar7);
    func_0x00010beeeac0();
    _objc_release(lVar7);
  }
  _objc_release(lVar2);
LAB_108e78c64:
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be32690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x20),PTR_s__handleUnfavoritingStickerWithEr_11256a340);
  return;
}



/* Entry: 108e78cac; end: 108e78cc3;  */

void FUN_108e78cac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be32690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleUnfavoritingStickerWithEr_11256a340);
  return;
}



/* Entry: 108e78cc4; end: 108e78d1b; -[SCStickerActionMenuProvider _handleFavoritingStickerWithError:] */

void FUN_108e78cc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf76540();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e78d1c; end: 108e78d73; -[SCStickerActionMenuProvider _handleUnfavoritingStickerWithError:] */

void FUN_108e78d1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7de60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e78d74; end: 108e78fc3; -[SCStickerActionMenuProvider _addCustomStickerDeleteActionCellToActionSheet:] */

void FUN_108e78d74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf96f00();
  if (lVar1 == 3) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf96da0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    iVar9 = (int)*(undefined8 *)(param_1 + 0x40);
    uVar3 = uVar2;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if (iVar9 != 0) {
      puVar4 = auStack_68;
      _objc_initWeak(puVar4,param_1);
      puVar5 = PTR_PTR_1126b10a0;
      func_0x000108e867a8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6f180(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,auStack_68);
      puVar6 = puVar5;
      func_0x00010bf1d200(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      uVar3 = param_3;
      func_0x00010beee860(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c0d3c80();
      _objc_release(uVar3);
      func_0x00010c066b00(uVar7);
      lVar1 = param_1;
      func_0x00010bfdef60(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c2711a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf51e00(uVar7);
      func_0x00010bfb4220(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1312e0(param_3);
      _objc_release(param_1);
      _objc_release(uVar8);
      _objc_release(uVar3);
      _objc_release(lVar1);
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108e78fc4; end: 108e7908f;  */

void FUN_108e78fc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    func_0x00010c12e560(uVar1);
    _objc_release(uVar1);
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 108e79090; end: 108e79107;  */

void FUN_108e79090(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_108e79108;
  puStack_28 = &UNK_110841f80;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_20 = uVar1;
  uStack_18 = uVar2;
  func_0x000107c312d0("APPSTORE",&puStack_40);
  _objc_release(uStack_18);
  return;
}



/* Entry: 108e79108; end: 108e791bb;  */

void FUN_108e79108(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf74760();
  _objc_release(lVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108e7918c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf83000(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_48);
  return;
}



/* Entry: 108e791bc; end: 108e793a7; -[SCStickerActionMenuProvider _addRemoveFromRecentsActionCellToActionSheet:] */

void FUN_108e791bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_58;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x000108e867c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  puVar3 = puVar2;
  func_0x00010bf1d200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = param_3;
  func_0x00010beee860(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0d3c80();
  _objc_release(uVar4);
  func_0x00010c066b00(uVar5);
  uVar4 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf51e00(uVar5);
  func_0x00010bfb4220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1312e0(param_3);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 108e793a8; end: 108e794d3;  */

void FUN_108e793a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010be0d6e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c12c360();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_2;
      _objc_retain(param_2);
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(param_2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 108e794d4; end: 108e79577;  */

void FUN_108e794d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  lVar1 = lVar1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf799e0();
  _objc_release(param_3);
  _objc_release(lVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108e79578;
  puStack_40 = &UNK_110842e18;
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf83000(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_58);
  return;
}



/* Entry: 108e79578; end: 108e795a7;  */

void FUN_108e79578(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beeeac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e795a8; end: 108e79783; -[SCStickerActionMenuProvider _addRemixStickerActionCellToActionSheet:] */

void FUN_108e795a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x98) != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bf96f00();
    if (lVar1 == 3) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf96da0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      iVar6 = (int)*(undefined8 *)(param_1 + 0x40);
      uVar3 = uVar2;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if (iVar6 == 0) {
        lVar1 = param_1;
        func_0x00010be0d6e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 != 0) {
          _objc_initWeak(auStack_58,param_1);
          uVar4 = *(undefined8 *)(param_1 + 0x58);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar4;
          func_0x00010c0726a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_copyWeak(auStack_60,auStack_58);
          uVar5 = param_3;
          _objc_retain(param_3);
          func_0x000107c30a80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c297260(uVar3);
          _objc_release(uVar5);
          _objc_release(uVar3);
          _objc_release(uVar4);
          _objc_release(param_3);
          _objc_destroyWeak(auStack_60);
          _objc_destroyWeak(auStack_58);
        }
        _objc_release(lVar1);
      }
      else {
        func_0x00010be3c880(param_1);
      }
      _objc_release(uVar2);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108e79784; end: 108e797cf;  */

void FUN_108e79784(long param_1,int param_2)

{
  func_0x00010bf1f3c0();
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be3c880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108e797d0; end: 108e799eb; -[SCStickerActionMenuProvider _insertRemixStickerActionCellIntoActionSheet:] */

void FUN_108e797d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_retainBlock();
  puVar3 = PTR_PTR_1126b10a0;
  uVar2 = uVar1;
  func_0x000108e867f0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(uVar1);
  puVar4 = puVar3;
  func_0x00010bf1d200(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010beee860(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0d3c80();
  _objc_release(uVar2);
  func_0x00010c066b00(uVar5);
  lVar6 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf51e00(uVar5);
  func_0x00010bfb4220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1312e0(param_3);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 108e799ec; end: 108e79a93;  */

void FUN_108e799ec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010bf83000(param_2);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 108e79a94; end: 108e79ad3;  */

void FUN_108e79a94(long param_1)

{
  long lVar1;
  
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  lVar1 = *(long *)(param_1 + 0x20) + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beeeac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e79ad4; end: 108e79b53; -[SCStickerActionMenuProvider actionMenuBitmojiFriendsView:didSelectUser:] */

void FUN_108e79ad4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf7e220();
  _objc_release(param_4);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf82fe0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beeeac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e79b54; end: 108e79bcb; -[SCStickerActionMenuProvider _handleResult:] */

void FUN_108e79b54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108e79bcc;
  puStack_20 = &UNK_1108e6078;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108e79e70;
  puStack_48 = &UNK_110849810;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c0800(param_3,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 108e79bcc; end: 108e79e6f;  */

void FUN_108e79bcc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
  *(long *)(*(long *)(param_1 + 0x20) + 0x80) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar14);
  func_0x00010c182220(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80));
  func_0x00010c219b60(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80));
  func_0x00010befbb60(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar2;
  func_0x00010bf49420(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
  func_0x00010bfe0660(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
  func_0x00010c274200(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
  func_0x00010bf34860(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar14);
  _objc_release(uVar2);
  func_0x00010beacb80();
  func_0x00010c2a5f80(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x80),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 108e79e70; end: 108e79e7f;  */

void FUN_108e79e70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 108e79e80; end: 108e7a17f; -[SCStickerActionMenuProvider _setupFriendsViewWithStickerView:] */

undefined * FUN_108e79e80(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_1;
  func_0x00010be34ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  if (puVar2 == (undefined *)0x0) {
    puVar13 = param_3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010bf1ff80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf493c0(0xc020000000000000,puVar13,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar15);
  }
  else {
    func_0x00010c219b60(puVar2,param_2,0);
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0xa0),param_2,puVar2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar13 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf493a0(puVar13,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar2;
    puStack_88 = puVar14;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar15;
    func_0x00010bf493a0(puVar15,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    puStack_80 = puVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010bf1ff80(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf493a0(puVar6,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    puStack_78 = puVar8;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_3;
    func_0x00010bf1ff80(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493c0(0x4000000000000000,puVar9,param_2,puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar12);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar3);
  _objc_release(puVar13);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_3 + 0xa0);
}



/* Entry: 108e7a180; end: 108e7a187; -[SCStickerActionMenuProvider header] */

undefined8 FUN_108e7a180(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 108e7a188; end: 108e7a18f; -[SCStickerActionMenuProvider footer] */

undefined8 FUN_108e7a188(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 108e7a190; end: 108e7a283; -[SCStickerActionMenuProvider .cxx_destruct] */

void FUN_108e7a190(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e7a284; end: 108e7a387; -[SCScribbleView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e7a284(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fed00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    func_0x00010c1c9b40(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf19920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11277ca90;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1bdb60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1bdd00(0x4049000000000000,*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR_PTR_1126dc418;
    _objc_alloc();
    func_0x00010c050900();
    lVar4 = (long)_DAT_11277ca94;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010bef9040(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e7a388; end: 108e7a437; -[SCScribbleView drawRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7a388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1607a0();
  _objc_release(puVar1);
  _UIRectFill(param_1,param_2,param_3,param_4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3ff0000000000000,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8c0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c25dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_5 + _DAT_11277ca90),PTR_s_stroke_112675110);
  return;
}



/* Entry: 108e7a438; end: 108e7a537; -[SCScribbleView drawBitmap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7a438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x00010bf20c00();
  uVar7 = 0;
  uVar8 = param_4;
  _UIGraphicsBeginImageContextWithOptions(1);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_5);
  func_0x00010bf199c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar3);
  func_0x00010bfad4a0(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8c0();
  _objc_release(puVar3);
  lVar6 = (long)_DAT_11277ca90;
  uVar4 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c25dba0();
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_5 + _DAT_11277ca98);
  *(undefined8 *)(param_5 + _DAT_11277ca98) = uVar4;
  _objc_release(uVar5);
  _UIGraphicsEndImageContext();
  puVar1 = (undefined8 *)(param_5 + _DAT_11277ca9c);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e7a538; end: 108e7a7b7; -[SCScribbleView _scribblePress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7a538(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined8 extraout_d1;
  undefined8 extraout_d1_00;
  undefined8 extraout_d1_01;
  undefined1 auVar8 [16];
  
  _objc_retain(param_4);
  lVar5 = param_4;
  func_0x00010c252440();
  if (lVar5 == 1) {
    lVar4 = (long)_DAT_11277caa0;
    lVar5 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_4,param_3,lVar5);
    *(undefined8 *)(param_2 + lVar4) = param_1;
    ((undefined8 *)(param_2 + lVar4))[1] = extraout_d1;
    _objc_release(lVar5);
    lVar4 = (long)_DAT_11277caa4;
    lVar5 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_4,param_3,lVar5);
    *(undefined8 *)(param_2 + lVar4) = param_1;
    ((undefined8 *)(param_2 + lVar4))[1] = extraout_d1_00;
    _objc_release(lVar5);
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c151b60();
    lVar5 = param_2;
  }
  else {
    lVar5 = param_4;
    func_0x00010c252440();
    if (lVar5 == 2) {
      lVar5 = param_4;
      func_0x00010c29bf00(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(param_4,param_3,lVar5);
      _objc_release(lVar5);
      lVar5 = (long)_DAT_11277caa8;
      uVar1 = *(int *)(param_2 + lVar5) + 1;
      *(uint *)(param_2 + lVar5) = uVar1;
      puVar2 = (undefined8 *)(param_2 + _DAT_11277caa0);
      puVar2[(ulong)uVar1 * 2] = param_1;
      (puVar2 + (ulong)uVar1 * 2)[1] = extraout_d1_01;
      if (uVar1 == 4) {
        auVar8 = NEON_fmov(0x3fe0000000000000,8);
        puVar2[7] = ((double)puVar2[5] + (double)puVar2[9]) * auVar8._8_8_;
        puVar2[6] = ((double)puVar2[4] + (double)puVar2[8]) * auVar8._0_8_;
        lVar4 = (long)_DAT_11277ca90;
        func_0x00010c0d18c0(*puVar2,puVar2[1],*(undefined8 *)(param_2 + lVar4));
        func_0x00010bef7ba0(puVar2[6],puVar2[7],puVar2[2],puVar2[3],puVar2[4],puVar2[5],
                            *(undefined8 *)(param_2 + lVar4));
        func_0x00010c1cbd40(param_2);
        puVar2[1] = puVar2[7];
        *puVar2 = puVar2[6];
        puVar2[3] = puVar2[9];
        puVar2[2] = puVar2[8];
        *(undefined4 *)(param_2 + lVar5) = 1;
      }
      goto LAB_108e7a79c;
    }
    lVar5 = param_4;
    func_0x00010c252440();
    if ((lVar5 != 3) && (lVar5 = param_4, func_0x00010c252440(), lVar5 != 4)) goto LAB_108e7a79c;
    lVar5 = (long)_DAT_11277ca90;
    func_0x00010c0d18c0(*(undefined8 *)(param_2 + _DAT_11277caa0),
                        ((undefined8 *)(param_2 + _DAT_11277caa0))[1],
                        *(undefined8 *)(param_2 + lVar5));
    func_0x00010bef98c0(*(undefined8 *)(param_2 + _DAT_11277caa4),
                        ((undefined8 *)(param_2 + _DAT_11277caa4))[1],
                        *(undefined8 *)(param_2 + lVar5));
    func_0x00010bf89820(param_2);
    func_0x00010c1cbd40(param_2);
    func_0x00010c12b000(*(undefined8 *)(param_2 + lVar5));
    *(undefined4 *)(param_2 + _DAT_11277caa8) = 0;
    dVar7 = *(double *)(param_2 + _DAT_11277ca9c + 0x18);
    dVar6 = *(double *)(param_2 + _DAT_11277ca9c + 0x10);
    lVar5 = param_2;
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    if (dVar6 * dVar6 + dVar7 * dVar7 <= 5.0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + _DAT_11277ca98);
    }
    func_0x00010c151ba0(lVar5,param_3,uVar3);
  }
  _objc_release(lVar5);
LAB_108e7a79c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e7a7b8; end: 108e7a7c7; -[SCScribbleView _setBrushAffordanceWidth:withCenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7a7b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2256f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277caac),PTR_s_setWidth_withCenter__112666fe0);
  return;
}



/* Entry: 108e7a7c8; end: 108e7a7d7; -[SCScribbleView _setBrushAffordanceColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7a7c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17e810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277caac),PTR_s_setColor__11263d420);
  return;
}



/* Entry: 108e7a7d8; end: 108e7a873; -[SCScribbleView _toggleBrushAffordanceShown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7a7d8(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126dc420;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x4049000000000000,0x4049000000000000);
    lVar3 = (long)_DAT_11277caac;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010bea25e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277caac),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 108e7a874; end: 108e7a887; -[SCScribbleView _setBrushAffordanceVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7a874(long param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277caac),PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 108e7a888; end: 108e7a88f; -[SCScribbleView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_108e7a888(void)

{
  return 0;
}



/* Entry: 108e7a890; end: 108e7a8af; -[SCScribbleView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7a890(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277cab4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e7a8b0; end: 108e7a8c3; -[SCScribbleView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7a8b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277cab4,param_3);
  return;
}



/* Entry: 108e7a8c4; end: 108e7a8d3; -[SCScribbleView color] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7a8c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cab0);
}



/* Entry: 108e7a8d4; end: 108e7a913; -[SCScribbleView setColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7a8d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277cab0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e7a914; end: 108e7a923; -[SCScribbleView drawingGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7a914(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ca94);
}



/* Entry: 108e7a924; end: 108e7a963; -[SCScribbleView setDrawingGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7a924(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277ca94;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e7a964; end: 108e7a973; -[SCScribbleView incrementalImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7a964(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ca98);
}



/* Entry: 108e7a974; end: 108e7a9b3; -[SCScribbleView setIncrementalImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7a974(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277ca98;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e7a9b4; end: 108e7a9c3; -[SCScribbleView brushSizeAffordance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7a9b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277caac);
}



/* Entry: 108e7a9c4; end: 108e7aa03; -[SCScribbleView setBrushSizeAffordance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7a9c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277caac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e7aa04; end: 108e7aa13; -[SCScribbleView path] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7aa04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ca90);
}



/* Entry: 108e7aa14; end: 108e7aa53; -[SCScribbleView setPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7aa14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277ca90;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e7aa54; end: 108e7aa6b; -[SCScribbleView scribbleBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7aa54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ca9c);
}



/* Entry: 108e7aa6c; end: 108e7aa83; -[SCScribbleView setScribbleBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7aa6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11277ca9c);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 108e7aa84; end: 108e7aa97; -[SCScribbleView startPoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108e7aa84(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277caa4);
}



/* Entry: 108e7aa98; end: 108e7aaab; -[SCScribbleView setStartPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7aa98(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277caa4;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 108e7aaac; end: 108e7aad3; -[SCScribbleView pointBuffer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7aaac(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11277caa0);
  uVar2 = puVar1[4];
  uVar4 = puVar1[7];
  uVar3 = puVar1[6];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  uVar2 = puVar1[8];
  param_1[9] = puVar1[9];
  param_1[8] = uVar2;
  uVar4 = *puVar1;
  uVar3 = puVar1[3];
  uVar2 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar4;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Entry: 108e7aad4; end: 108e7aafb; -[SCScribbleView setPointBuffer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7aad4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11277caa0);
  uVar2 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar2;
  uVar2 = param_3[6];
  uVar4 = param_3[9];
  uVar3 = param_3[8];
  uVar8 = param_3[3];
  uVar7 = param_3[2];
  uVar6 = param_3[5];
  uVar5 = param_3[4];
  puVar1[7] = param_3[7];
  puVar1[6] = uVar2;
  puVar1[9] = uVar4;
  puVar1[8] = uVar3;
  puVar1[3] = uVar8;
  puVar1[2] = uVar7;
  puVar1[5] = uVar6;
  puVar1[4] = uVar5;
  return;
}



/* Entry: 108e7aafc; end: 108e7ab0b; -[SCScribbleView pointCounter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_108e7aafc(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11277caa8);
}



/* Entry: 108e7ab0c; end: 108e7ab1b; -[SCScribbleView setPointCounter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7ab0c(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + _DAT_11277caa8) = param_3;
  return;
}



/* Entry: 108e7ab1c; end: 108e7ab2b; -[SCScribbleView scale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7ab1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ca88);
}



/* Entry: 108e7ab2c; end: 108e7ab3b; -[SCScribbleView setScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7ab2c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277ca88) = param_1;
  return;
}



/* Entry: 108e7ab3c; end: 108e7ab4b; -[SCScribbleView lastScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7ab3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ca8c);
}



/* Entry: 108e7ab4c; end: 108e7ab5b; -[SCScribbleView setLastScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7ab4c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277ca8c) = param_1;
  return;
}



/* Entry: 108e7ab5c; end: 108e7abd7; -[SCScribbleView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7ab5c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277ca90,0);
  _objc_storeStrong(param_1 + _DAT_11277caac,0);
  _objc_storeStrong(param_1 + _DAT_11277ca98,0);
  _objc_storeStrong(param_1 + _DAT_11277ca94,0);
  _objc_storeStrong(param_1 + _DAT_11277cab0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277cab4);
  return;
}



/* Entry: 108e7abd8; end: 108e7ac7b; -[SCStickerPickerItemCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e7abd8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fed08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bdc85c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277cab8);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11277cab8) = puVar2;
    _objc_release(uVar3);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bdc6a80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277cabc);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11277cabc) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1af000(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e7ac7c; end: 108e7ae73; -[SCStickerPickerItemCell _addSpinner] */

/* WARNING: Possible PIC construction at 0x000108e7b4b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e7b4b8) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4f4) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5a4) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5f4) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5ac) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5b4) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4fc) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5dc) */
/* WARNING: Removing unreachable block (ram,0x000108e7b504) */
/* WARNING: Removing unreachable block (ram,0x000108e7b50c) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4d0) */
/* WARNING: Removing unreachable block (ram,0x000108e7b518) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5e8) */
/* WARNING: Removing unreachable block (ram,0x000108e7b520) */
/* WARNING: Removing unreachable block (ram,0x000108e7b528) */
/* WARNING: Removing unreachable block (ram,0x000108e7b558) */
/* WARNING: Removing unreachable block (ram,0x000108e7b620) */
/* WARNING: Removing unreachable block (ram,0x000108e7b588) */
/* WARNING: Removing unreachable block (ram,0x000108e7b614) */
/* WARNING: Removing unreachable block (ram,0x000108e7b590) */
/* WARNING: Removing unreachable block (ram,0x000108e7b598) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4d8) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5d0) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4e0) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5c0) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4e8) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7ac7c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
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
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined *puVar29;
  long lVar30;
  long lVar31;
  
  lVar30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  func_0x00010c219b60();
  func_0x00010c1a8560(puVar1);
  func_0x00010c2558c0(puVar1);
  uVar23 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar23);
  puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar23;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar23);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar30) {
    ___stack_chk_fail();
    lVar30 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    func_0x00010c219b60();
    func_0x00010c182220(puVar1);
    func_0x00010c1a7f60(puVar1);
    puVar9 = puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar22;
    func_0x00010beef8c0(puVar9);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar2);
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
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar30) {
      ___stack_chk_fail();
      lVar30 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar29);
      lVar31 = (long)_DAT_11277cac0;
      _objc_retain(puVar29);
      uVar23 = *(undefined8 *)(puVar4 + lVar31);
      *(undefined **)(puVar4 + lVar31) = puVar29;
      _objc_release(uVar23);
      func_0x00010c219b60(*(undefined8 *)(puVar4 + lVar31));
      puVar9 = puVar4;
      func_0x00010bf4dce0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(puVar9);
      puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar24 = *(undefined8 *)(puVar4 + lVar31);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar4;
      func_0x00010bf4dce0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = uVar24;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar25 = *(undefined8 *)(puVar4 + lVar31);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf4dce0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar25;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar26 = *(undefined8 *)(puVar4 + lVar31);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar4;
      func_0x00010bf4dce0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar26;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar27 = *(undefined8 *)(puVar4 + lVar31);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar4;
      func_0x00010bf4dce0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar28 = uVar27;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar9);
      _objc_release(puVar13);
      _objc_release(uVar28);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(uVar27);
      _objc_release(uVar6);
      _objc_release(puVar10);
      _objc_release(puVar8);
      _objc_release(uVar26);
      _objc_release(uVar3);
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(uVar25);
      _objc_release(uVar23);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(uVar24);
      if (puVar4[_DAT_11277cac4] == '\x01') {
        func_0x00010c2a5f80(*(undefined8 *)(puVar4 + lVar31));
      }
      _objc_release(puVar29);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar30) {
        ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)();
        return;
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e7ae74; end: 108e7b187; -[SCStickerPickerItemCell _addErrorImageView] */

/* WARNING: Possible PIC construction at 0x000108e7b4b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e7b4b8) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4f4) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5a4) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5f4) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5ac) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5b4) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4fc) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5dc) */
/* WARNING: Removing unreachable block (ram,0x000108e7b504) */
/* WARNING: Removing unreachable block (ram,0x000108e7b50c) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4d0) */
/* WARNING: Removing unreachable block (ram,0x000108e7b518) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5e8) */
/* WARNING: Removing unreachable block (ram,0x000108e7b520) */
/* WARNING: Removing unreachable block (ram,0x000108e7b528) */
/* WARNING: Removing unreachable block (ram,0x000108e7b558) */
/* WARNING: Removing unreachable block (ram,0x000108e7b620) */
/* WARNING: Removing unreachable block (ram,0x000108e7b588) */
/* WARNING: Removing unreachable block (ram,0x000108e7b614) */
/* WARNING: Removing unreachable block (ram,0x000108e7b590) */
/* WARNING: Removing unreachable block (ram,0x000108e7b598) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4d8) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5d0) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4e0) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5c0) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4e8) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7ae74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ef2ab8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  func_0x00010c219b60();
  func_0x00010c182220(puVar2);
  func_0x00010c1a7f60(puVar2);
  uVar15 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar15);
  puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar14;
  func_0x00010beef8c0(puVar16);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(uVar19);
  _objc_release(param_1);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar21);
  lVar23 = (long)_DAT_11277cac0;
  _objc_retain(puVar21);
  uVar15 = *(undefined8 *)(puVar1 + lVar23);
  *(undefined **)(puVar1 + lVar23) = puVar21;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(puVar1 + lVar23));
  puVar16 = puVar1;
  func_0x00010bf4dce0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar16);
  puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar17 = *(undefined8 *)(puVar1 + lVar23);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(puVar1 + lVar23);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(puVar1 + lVar23);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar1 + lVar23);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010bf4dce0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar16);
  _objc_release(puVar13);
  _objc_release(uVar8);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar20);
  _objc_release(uVar7);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar19);
  _objc_release(uVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar18);
  _objc_release(uVar15);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar17);
  if (puVar1[_DAT_11277cac4] == '\x01') {
    func_0x00010c2a5f80(*(undefined8 *)(puVar1 + lVar23));
  }
  _objc_release(puVar21);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108e7b188; end: 108e7b49b; -[SCStickerPickerItemCell _addItemView:] */

/* WARNING: Possible PIC construction at 0x000108e7b4b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e7b4b8) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4f4) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5a4) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5f4) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5ac) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5b4) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4fc) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5dc) */
/* WARNING: Removing unreachable block (ram,0x000108e7b504) */
/* WARNING: Removing unreachable block (ram,0x000108e7b50c) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4d0) */
/* WARNING: Removing unreachable block (ram,0x000108e7b518) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5e8) */
/* WARNING: Removing unreachable block (ram,0x000108e7b520) */
/* WARNING: Removing unreachable block (ram,0x000108e7b528) */
/* WARNING: Removing unreachable block (ram,0x000108e7b558) */
/* WARNING: Removing unreachable block (ram,0x000108e7b620) */
/* WARNING: Removing unreachable block (ram,0x000108e7b588) */
/* WARNING: Removing unreachable block (ram,0x000108e7b614) */
/* WARNING: Removing unreachable block (ram,0x000108e7b590) */
/* WARNING: Removing unreachable block (ram,0x000108e7b598) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4d8) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5d0) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4e0) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5c0) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4e8) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7b188(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar20 = (long)_DAT_11277cac0;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar20);
  *(undefined8 *)(param_1 + lVar20) = param_3;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20));
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(uVar4);
  if (*(char *)(param_1 + _DAT_11277cac4) == '\x01') {
    func_0x00010c2a5f80(*(undefined8 *)(param_1 + lVar20));
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108e7b49c; end: 108e7b62b; -[SCStickerPickerItemCell _applyAccessibilityLabel] */

/* WARNING: Possible PIC construction at 0x000108e7b4b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e7b4b8) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4f4) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5a4) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5f4) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5ac) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5b4) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4fc) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5dc) */
/* WARNING: Removing unreachable block (ram,0x000108e7b504) */
/* WARNING: Removing unreachable block (ram,0x000108e7b50c) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4d0) */
/* WARNING: Removing unreachable block (ram,0x000108e7b518) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5e8) */
/* WARNING: Removing unreachable block (ram,0x000108e7b520) */
/* WARNING: Removing unreachable block (ram,0x000108e7b528) */
/* WARNING: Removing unreachable block (ram,0x000108e7b558) */
/* WARNING: Removing unreachable block (ram,0x000108e7b620) */
/* WARNING: Removing unreachable block (ram,0x000108e7b588) */
/* WARNING: Removing unreachable block (ram,0x000108e7b614) */
/* WARNING: Removing unreachable block (ram,0x000108e7b590) */
/* WARNING: Removing unreachable block (ram,0x000108e7b598) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4d8) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5d0) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4e0) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5c0) */
/* WARNING: Removing unreachable block (ram,0x000108e7b4e8) */
/* WARNING: Removing unreachable block (ram,0x000108e7b5fc) */

void FUN_108e7b49c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAccessibilityIdentifier__112635e10,0);
  return;
}



/* Entry: 108e7b62c; end: 108e7b68f; -[SCStickerPickerItemCell updateWithItemViewRequest:item:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7b62c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277cac8);
  *(undefined8 *)(param_1 + _DAT_11277cac8) = param_4;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010be2b060(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e7b690; end: 108e7b73b; -[SCStickerPickerItemCell updateWithItemViewRequest:sticker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7b690(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c271a80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277cac8);
  *(undefined8 *)(param_1 + _DAT_11277cac8) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_4;
  func_0x00010c271a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277cacc);
  *(undefined8 *)(param_1 + _DAT_11277cacc) = uVar1;
  _objc_release(uVar2);
  func_0x00010be2b060(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e7b73c; end: 108e7b927; -[SCStickerPickerItemCell _handleItemViewRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7b73c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  lVar5 = (long)_DAT_11277cad0;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + lVar5);
  *(long *)(param_2 + lVar5) = param_4;
  _objc_release(uVar1);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + _DAT_11277cad4) = param_1;
  lVar5 = (long)_DAT_11277cad8;
  func_0x00010bf86d40(*(undefined8 *)(param_2 + lVar5));
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_11277cabc));
  func_0x00010bea4fe0(param_2);
  if (param_4 == 0) {
    *(undefined8 *)(param_2 + _DAT_11277cadc) = 0;
  }
  else {
    *(undefined8 *)(param_2 + _DAT_11277cadc) = 1;
    func_0x00010c24dbc0(*(undefined8 *)(param_2 + _DAT_11277cab8));
    lVar2 = param_2;
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a6260();
    _objc_release(lVar2);
    func_0x00010bdcda20(param_2);
    _objc_initWeak(auStack_48,param_2);
    lVar2 = param_4;
    func_0x00010c0e0460();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e0e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_copyWeak(auStack_50,auStack_48);
    lVar2 = lVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + lVar5);
    *(long *)(param_2 + lVar5) = lVar2;
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_release(lVar4);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 108e7b928; end: 108e7b96f;  */

void FUN_108e7b928(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f460();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e7b970; end: 108e7ba1f; -[SCStickerPickerItemCell _handleResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7b970(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277cab8);
  _objc_retain(param_3);
  func_0x00010c2558c0(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108e7ba20;
  puStack_40 = &UNK_1108e6078;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108e7bd0c;
  puStack_68 = &UNK_110849810;
  lStack_60 = param_1;
  lStack_38 = param_1;
  func_0x00010c0c0800(param_3,param_2,&puStack_58,&puStack_80);
  _objc_release(param_3);
  return;
}



/* Entry: 108e7ba20; end: 108e7bd0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7ba20(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_2 == 0) {
    func_0x00010bea4fe0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277cabc));
    goto LAB_108e7bcec;
  }
  lVar10 = (long)_DAT_11277cac8;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar10);
  func_0x00010bf9e140(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  if ((int)puVar3 == 0) {
    lVar7 = param_2;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar7;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar10);
    func_0x00010bf9e140(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0720c0();
    _objc_release(uVar6);
    _objc_release(lVar4);
    _objc_release(lVar7);
    _objc_release(uVar2);
    if ((int)lVar5 == 0) goto LAB_108e7bcec;
  }
  else {
    _objc_release(uVar2);
  }
  lVar7 = param_2;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277cac0);
  func_0x00010c0840e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar7);
  lVar7 = *(long *)(param_1 + 0x20);
  if ((int)lVar5 == 0) {
LAB_108e7bc30:
    func_0x00010be8c5e0(lVar7);
    func_0x00010bdc7280(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar7 = *(long *)(lVar7 + lVar10);
    func_0x00010bf96f00();
    if (lVar7 == 2) {
      uVar8 = *(ulong *)(*(long *)(param_1 + 0x20) + lVar10);
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126ba800;
      _objc_opt_class(PTR_PTR_1126ba800);
      uVar9 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar3);
      uVar1 = uVar8;
      if ((uVar9 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar8);
      uVar9 = uVar1;
      func_0x00010bf1c500();
      _objc_release(uVar1);
      if (uVar9 == 2) {
        lVar7 = *(long *)(param_1 + 0x20);
        goto LAB_108e7bc30;
      }
    }
  }
  func_0x00010bdcda20(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277cabc));
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277cadc) = 2;
  func_0x00010bea4fe0(*(undefined8 *)(param_1 + 0x20));
  lVar10 = (long)_DAT_11277cad4;
  dVar11 = *(double *)(*(long *)(param_1 + 0x20) + lVar10);
  if (dVar11 != 0.0) {
    _CACurrentMediaTime();
    dVar12 = *(double *)(*(long *)(param_1 + 0x20) + lVar10);
    lVar7 = param_2;
    func_0x00010c09c920();
    *(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277cae0) = (char)lVar7;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf6b020(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c254960(dVar11 - dVar12);
    _objc_release(uVar2);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar10) = 0;
  }
LAB_108e7bcec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e7bd0c; end: 108e7bdef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7bd0c(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0720c0();
  if ((int)lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_2;
    func_0x00010bf3ec40();
    bVar1 = lVar3 == -1;
  }
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bf3ec40();
  if ((lVar2 == 3) || (bVar1)) {
    func_0x00010c2558c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277cab8));
    uVar4 = 3;
  }
  else {
    func_0x00010bea4fe0();
    func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277cabc));
    uVar4 = 4;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277cadc) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e7bdf0; end: 108e7be6f; -[SCStickerPickerItemCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7bdf0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fed08;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  *(undefined1 *)(param_1 + _DAT_11277cae0) = 0;
  *(undefined8 *)(param_1 + _DAT_11277cadc) = 0;
  func_0x00010c160fc0(param_1);
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_11277cad0));
  func_0x00010c28c8e0(param_1);
  return;
}



/* Entry: 108e7be70; end: 108e7be8f; -[SCStickerPickerItemCell willDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7be70(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11277cac4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c2a5f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277cac0),PTR_s_willDisplay_112687208);
  return;
}



/* Entry: 108e7be90; end: 108e7beab; -[SCStickerPickerItemCell didEndDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7be90(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11277cac4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf75830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277cac0),PTR_s_didEndDisplay_1125bafb0);
  return;
}



/* Entry: 108e7beac; end: 108e7bf0f; -[SCStickerPickerItemCell isItemCellReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7beac(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + _DAT_11277cac0);
  if ((uVar2 != 0) && (func_0x00010c074c20(), (uVar2 & 1) == 0)) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11277cabc);
    func_0x00010c074c20();
    if (iVar1 != 0) {
      func_0x00010c06c0e0(*(undefined8 *)(param_1 + _DAT_11277cab8));
    }
  }
  return;
}



/* Entry: 108e7bf10; end: 108e7bf1f; -[SCStickerPickerItemCell state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7bf10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cadc);
}



/* Entry: 108e7bf20; end: 108e7bf9b; -[SCStickerPickerItemCell _removeItemViewFromSuperView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7bf20(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277cac0;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar1 != lVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 108e7bf9c; end: 108e7c02b; -[SCStickerPickerItemCell _setItemViewHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7bf9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277cac0;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar1 != lVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setHidden__1126479f8,param_3);
  return;
}



/* Entry: 108e7c02c; end: 108e7c03b; -[SCStickerPickerItemCell item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7c02c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cac8);
}



/* Entry: 108e7c03c; end: 108e7c04b; -[SCStickerPickerItemCell itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7c03c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cacc);
}



/* Entry: 108e7c04c; end: 108e7c05b; -[SCStickerPickerItemCell itemView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7c04c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cac0);
}



/* Entry: 108e7c05c; end: 108e7c06b; -[SCStickerPickerItemCell loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e7c05c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277cae0);
}



/* Entry: 108e7c06c; end: 108e7c07b; -[SCStickerPickerItemCell setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7c06c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277cae0) = param_3;
  return;
}



/* Entry: 108e7c07c; end: 108e7c08b; -[SCStickerPickerItemCell imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7c07c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cae4);
}



/* Entry: 108e7c08c; end: 108e7c0ab; -[SCStickerPickerItemCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7c08c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277cae8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e7c0ac; end: 108e7c0bf; -[SCStickerPickerItemCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7c0ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277cae8,param_3);
  return;
}



/* Entry: 108e7c0c0; end: 108e7c0cf; -[SCStickerPickerItemCell itemViewRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e7c0c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cad0);
}



/* Entry: 108e7c0d0; end: 108e7c17b; -[SCStickerPickerItemCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7c0d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277cad0,0);
  _objc_destroyWeak(param_1 + _DAT_11277cae8);
  _objc_storeStrong(param_1 + _DAT_11277cae4,0);
  _objc_storeStrong(param_1 + _DAT_11277cac0,0);
  _objc_storeStrong(param_1 + _DAT_11277cacc,0);
  _objc_storeStrong(param_1 + _DAT_11277cac8,0);
  _objc_storeStrong(param_1 + _DAT_11277cad8,0);
  _objc_storeStrong(param_1 + _DAT_11277cabc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277cab8,0);
  return;
}



/* Entry: 108e7c17c; end: 108e7c1e7; -[SCStickerPickerStickerCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e7c17c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fed10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277caec);
    *(undefined **)((long)puVar1 + (long)_DAT_11277caec) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e7c1e8; end: 108e7c297; -[SCStickerPickerStickerCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7c1e8(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fed10;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bed7620(param_1);
  lVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11277caf0));
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11277caf4));
  _objc_release(lVar1);
  return;
}



/* Entry: 108e7c298; end: 108e7c2a7; -[SCStickerPickerStickerCell stickerImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7c298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277caf0),PTR_s_image_1125d7478);
  return;
}



/* Entry: 108e7c2a8; end: 108e7c477; -[SCStickerPickerStickerCell setSticker:presentationModelProvider:userSession:contexts:stickerInjector:ctpItemViewService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7c2a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar2 = (long)_DAT_11277caf8;
  if (*(long *)(param_1 + lVar2) != param_3) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277cafc),param_2,1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277caf4),param_2,1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277caf0),param_2,1);
    *(undefined1 *)(param_1 + _DAT_11277cb00) = 0;
    lVar3 = (long)_DAT_11277cb04;
    if (*(long *)(param_1 + lVar3) != 0) {
      _dispatch_block_cancel();
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      *(undefined8 *)(param_1 + lVar3) = 0;
      _objc_release(uVar1);
    }
    *(undefined8 *)(param_1 + _DAT_11277cb08) = 0;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    lVar2 = (long)_DAT_11277cb0c;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_4;
    _objc_release(uVar1);
    lVar2 = (long)_DAT_11277cb10;
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_5;
    _objc_release(uVar1);
    lVar2 = (long)_DAT_11277cb14;
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_6;
    _objc_release(uVar1);
    lVar2 = (long)_DAT_11277cb18;
    _objc_retain(param_7);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_7;
    _objc_release(uVar1);
    lVar2 = (long)_DAT_11277cb1c;
    _objc_retain(param_8);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_8;
    _objc_release(uVar1);
    func_0x00010bdcda20(param_1);
    func_0x00010c1af000(param_1,param_2,1);
  }
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



/* Entry: 108e7c478; end: 108e7c52f; -[SCStickerPickerStickerCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7c478(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fed10;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c1a7f60(param_1);
  *(undefined8 *)(param_1 + _DAT_11277cb20) = 0;
  *(undefined8 *)(param_1 + _DAT_11277cb24) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277caf8);
  *(undefined8 *)(param_1 + _DAT_11277caf8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277cb0c);
  *(undefined8 *)(param_1 + _DAT_11277cb0c) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277cb28);
  *(undefined8 *)(param_1 + _DAT_11277cb28) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + _DAT_11277cb08) = 0;
  func_0x00010c161020(param_1);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277caf0));
  return;
}



/* Entry: 108e7c530; end: 108e7c59f; -[SCStickerPickerStickerCell didEndDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7c530(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(long *)(param_1 + _DAT_11277cb20) = *(long *)(param_1 + _DAT_11277cb20) + 1;
  lVar2 = (long)_DAT_11277cb2c;
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010bec2d80(param_1);
  if (*(long *)(param_1 + _DAT_11277cb08) != 2) {
    *(undefined8 *)(param_1 + _DAT_11277cb08) = 0;
  }
  return;
}



/* Entry: 108e7c5a0; end: 108e7c677; -[SCStickerPickerStickerCell willDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7c5a0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  *(long *)(param_1 + _DAT_11277cb24) = *(long *)(param_1 + _DAT_11277cb24) + 1;
  lVar2 = (long)_DAT_11277cb08;
  if (*(long *)(param_1 + lVar2) != 2) {
    *(undefined8 *)(param_1 + lVar2) = 2;
    uVar1 = *(ulong *)(param_1 + _DAT_11277caf8);
    func_0x00010c27dd80();
    if (uVar1 < 0xc) {
      if ((1L << (uVar1 & 0x3f) & 0xdfcU) == 0) {
        if (uVar1 == 1) {
          func_0x00010bea3a40(param_1);
        }
      }
      else {
        *(undefined8 *)(param_1 + lVar2) = 1;
        lVar2 = param_1;
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2547a0();
        _objc_release(lVar2);
        func_0x00010bea48c0(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bebf670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startAnimatingStickerIfNecessar_11258d740);
  return;
}



/* Entry: 108e7c678; end: 108e7c76b; -[SCStickerPickerStickerCell _applyAccessibilityLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7c678(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined **ppuVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11277caf8;
  lVar2 = *(long *)(param_1 + lVar6);
  func_0x00010c27dd80();
  puVar1 = PTR_DAT_1126a5210;
  lVar6 = *(long *)(param_1 + lVar6);
  if (lVar2 == 6) {
    _objc_retain(lVar6);
    lVar3 = lVar6;
    func_0x000107c318f8(lVar6,puVar1);
    lVar2 = lVar6;
    if ((int)lVar3 == 0) {
      lVar2 = 0;
    }
    _objc_retain(lVar2);
    _objc_release(lVar6);
    lVar6 = lVar2;
    func_0x00010bfee0e0();
    _objc_release(lVar2);
    uVar4 = lVar6 - 5;
    if ((0xc < uVar4) || ((0x121fU >> (ulong)((uint)uVar4 & 0x1f) & 1) == 0)) {
      return;
    }
    ppuVar5 = &PTR_PTR_110ac7948;
  }
  else {
    func_0x00010c27dd80();
    uVar4 = lVar6 - 1;
    if (10 < uVar4) {
      return;
    }
    if ((0x457U >> (ulong)((uint)uVar4 & 0x1f) & 1) == 0) {
      return;
    }
    ppuVar5 = &PTR_PTR_110ac79b0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c161030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setAccessibilityLabel__112635e28,*(undefined8 *)ppuVar5[uVar4]);
  return;
}



/* Entry: 108e7c76c; end: 108e7c7fb; -[SCStickerPickerStickerCell _setEmojiSticker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7c76c(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277caf8);
  _objc_retain(uVar1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_108e7c7fc;
  puStack_38 = &UNK_110841f80;
  uStack_30 = uVar1;
  lStack_28 = param_1;
  _objc_retain(uVar1);
  func_0x000107c312d0("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uVar1);
  return;
}


