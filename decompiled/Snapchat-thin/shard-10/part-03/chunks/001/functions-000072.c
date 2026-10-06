/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e41f54; end: 107e41fcf; -[SCPreviewEphemeralMediaList _cacheAllSnapsToGalleryStore] */

void FUN_107e41f54(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 107e41fd0; end: 107e42427;  */

void FUN_107e41fd0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  ulong uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *(long *)(param_1 + 0x20);
  lVar1 = param_1;
  if (*(long *)(lVar11 + 0x58) != 0) {
    uVar12 = 0;
    do {
      lVar1 = *(long *)(lVar11 + 0x80);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar1;
      func_0x00010c29ae80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release();
      if (lVar11 != 0) {
        lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x80);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar11;
        func_0x00010c0efb00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar11);
        puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
        if (lVar1 == 0) {
          uStack_130 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
          func_0x00010c0dfd40(uVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c0efb00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14d040(puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          _objc_release(uVar2);
          puVar5 = PTR_PTR_1126d4dc8;
          _objc_alloc();
          func_0x00010c01c380();
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c0ef860();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar6;
          func_0x00010c0ef840();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_88 = puVar5;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          uStack_130 = uVar2;
          func_0x00010c0ef8a0(0x3ff0000000000000);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          _objc_release(uVar2);
          _objc_release(uVar3);
          _objc_release(uVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
        lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
        func_0x00010c15e0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puVar8 = puVar7;
        _dispatch_group_create();
        _dispatch_group_enter();
        puVar5 = PTR_PTR_1126b2518;
        lVar11 = lVar1;
        func_0x00010c0dfd40(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar11;
        func_0x00010c0d36c0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        pcStack_a8 = FUN_107e42428;
        puStack_a0 = &UNK_110850c68;
        _objc_retain(puVar7);
        puStack_98 = puVar7;
        _objc_retain(puVar8);
        puStack_90 = puVar8;
        func_0x00010bfc01c0(puVar5);
        _objc_release(lVar9);
        _objc_release(lVar11);
        _dispatch_group_enter(puVar8);
        lVar11 = lVar1;
        func_0x00010c0dfd40(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar11;
        func_0x00010c2a09a0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010bf0ed00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar9);
        _objc_release(lVar11);
        puStack_e8 = puVar4;
        uStack_e0 = 0xc2000000;
        uStack_d8 = 0x107e424a0;
        puStack_d0 = &UNK_110850c68;
        _objc_retain(puVar7);
        puStack_c8 = puVar7;
        puStack_c0 = puVar8;
        _objc_retain(puVar8);
        FUN_107e455ec(lVar10,&puStack_e8);
        lVar11 = 0x19;
        func_0x0001000819a8(0x19,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_128 = puVar4;
        uStack_120 = 0xc2000000;
        pcStack_118 = FUN_107e42518;
        puStack_110 = &UNK_11084d788;
        uStack_108 = *(undefined8 *)(param_1 + 0x20);
        uStack_100 = uStack_130;
        puStack_f8 = puVar7;
        uStack_f0 = uVar12;
        _objc_retain(puVar7);
        _objc_retain(uStack_130);
        param_2 = lVar11;
        func_0x000100bc0718(puVar8,lVar11,&puStack_128);
        _objc_release(lVar11);
        _objc_release(puStack_f8);
        _objc_release(uStack_100);
        _objc_release(puStack_c0);
        _objc_release(puStack_c8);
        _objc_release(lVar10);
        _objc_release(puStack_90);
        _objc_release(puStack_98);
        _objc_release(puVar7);
        _objc_release(uStack_130);
        _objc_release(puVar8);
        _objc_release();
      }
      uVar12 = uVar12 + 1;
      lVar11 = *(long *)(param_1 + 0x20);
    } while (uVar12 < *(ulong *)(lVar11 + 0x58));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  lVar11 = param_2;
  func_0x00010c08fa60();
  if (lVar11 != 0) {
    puVar4 = PTR_PTR_1126c4d00;
    _objc_alloc(PTR_PTR_1126c4d00);
    func_0x00010bff4360();
    func_0x00010befa120(*(undefined8 *)(lVar1 + 0x20));
    _objc_release(puVar4);
  }
  _dispatch_group_leave(*(undefined8 *)(lVar1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e42428; end: 107e42517;  */

void FUN_107e42428(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c4d00;
    _objc_alloc(PTR_PTR_1126c4d00);
    func_0x00010bff4360();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e42518; end: 107e4272b;  */

void FUN_107e42518(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar13 = *(ulong *)(param_1 + 0x38);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x80);
  func_0x00010bf529e0();
  if (uVar13 < uVar2) {
    uVar13 = *(ulong *)(param_1 + 0x38);
    uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x90);
    func_0x00010bf529e0();
    if (uVar13 < uVar2) {
      uVar13 = *(ulong *)(param_1 + 0x38);
      uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x108);
      func_0x00010bf529e0();
      if (uVar13 < uVar2) {
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
        func_0x00010c0dfd40(uVar4,param_2,*(undefined8 *)(param_1 + 0x38));
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
        func_0x00010c0dfd40(uVar6,param_2,*(undefined8 *)(param_1 + 0x38));
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c29ae80();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x108);
        func_0x00010c0dfd40(uVar8,param_2,*(undefined8 *)(param_1 + 0x38));
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010bf51e00(uVar9);
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
        func_0x00010c0dfd40(uVar10,param_2,*(undefined8 *)(param_1 + 0x38));
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c29ae80();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010bf3f040();
        func_0x00010b5fbca8();
        _objc_retainAutoreleasedReturnValue();
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_107e4272c;
        puStack_70 = &UNK_110842e18;
        uStack_68 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c257c60(uVar3,param_2,uVar5,uVar7,uVar1,uVar8,uVar9,1,uVar12,&puStack_88);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
    }
  }
  return;
}



/* Entry: 107e4272c; end: 107e4272f;  */

void FUN_107e4272c(void)

{
  return;
}



/* Entry: 107e42730; end: 107e4283b; -[SCPreviewEphemeralMediaList _exportSegmentAtIndex:count:] */

void FUN_107e42730(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x98);
  func_0x00010c296d80();
  if (iVar1 == 0) {
    if (param_3 == param_4) {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_107e4283c;
      puStack_40 = &UNK_110842e18;
      lStack_38 = param_1;
      func_0x000100162d98("APPSTORE",&puStack_58);
      if (*(long *)(param_1 + 0xa0) != 0) {
        lVar2 = *(long *)(param_1 + 0xb0);
        func_0x00010bf529e0();
        if (lVar2 == 1) {
          uVar3 = *(undefined8 *)(param_1 + 0xb0);
          func_0x00010bfb1920(uVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = *(long *)(param_1 + 0xa0);
          if (lVar2 != 0) {
            (**(code **)(lVar2 + 0x10))(lVar2,uVar3,0);
          }
          _objc_release(uVar3);
          return;
        }
      }
      func_0x00010bde20a0(param_1);
    }
    else if (*(long *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bece7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__transcodeSegmentAtIndex_count__1125913a0,param_3,param_4);
      return;
    }
  }
  return;
}



/* Entry: 107e4283c; end: 107e4285f;  */

void FUN_107e4283c(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x51) = 1;
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x52) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdd7570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x20),PTR_s__cacheAllSnapsToGalleryStore_1125536f8);
    return;
  }
  return;
}



/* Entry: 107e42860; end: 107e42af3; -[SCPreviewEphemeralMediaList _transcodeSegmentAtIndex:count:] */

void FUN_107e42860(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  byte bStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar6 = &puStack_d0;
  if (param_3 < param_4) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x98);
    func_0x00010c296d80();
    if (iVar1 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x90);
      func_0x00010bf529e0();
      uVar3 = *(ulong *)(param_1 + 0x90);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c27dd80();
      _objc_release(uVar3);
      lVar4 = *(long *)(param_1 + 0x90);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      uStack_80 = 0;
      uStack_70 = 0x3032000000;
      pcStack_68 = FUN_107e42af4;
      uStack_60 = 0x107e42b04;
      puStack_78 = &uStack_80;
      _objc_retain(param_1);
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_107e42b0c;
      puStack_b8 = &UNK_110a0ef88;
      puStack_a8 = &uStack_80;
      uStack_a0 = param_3;
      uStack_98 = uVar2;
      uStack_90 = param_4;
      bStack_88 = uVar7 < 0x1b & (byte)(0x7e7fc60 >> (ulong)((uint)uVar7 & 0x1f));
      lStack_58 = param_1;
      _objc_retain(lVar5);
      lStack_b0 = lVar5;
      _objc_retainBlock(&puStack_d0);
      if ((*(long *)(param_1 + 0xa0) == 0) && (lVar5 != 0)) {
        uVar7 = *(ulong *)(param_1 + 0x90);
        func_0x00010bf529e0();
        if (param_3 < uVar7) {
          uVar8 = *(undefined8 *)(param_1 + 0x90);
          func_0x00010c0dfd40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar8;
          func_0x00010bf5caa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
        }
        else {
          uVar2 = 0;
        }
        uVar8 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + 0x80);
        func_0x00010c0dfd40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfae7a0(*(undefined8 *)PTR__CGSizeZero_110347620,
                            *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar8);
        _objc_release(uVar9);
        _objc_release(uVar8);
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + 0x80);
        func_0x00010c0dfd40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfae7e0(*(undefined8 *)PTR__CGSizeZero_110347620,
                            *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
      }
      _objc_release(uVar2);
      _objc_release(ppuVar6);
      _objc_release(lStack_b0);
      __Block_object_dispose(&uStack_80,8);
      _objc_release(lStack_58);
      _objc_release(lVar5);
    }
  }
  return;
}



/* Entry: 107e42af4; end: 107e42b0b;  */

void FUN_107e42af4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107e42b0c; end: 107e4340f;  */

void FUN_107e42b0c(long param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x98);
  func_0x00010c296d80();
  if (iVar1 != 0) {
    lVar12 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    lVar2 = *(long *)(lVar12 + 0x28);
    *(undefined8 *)(lVar12 + 0x28) = 0;
    goto LAB_107e433d8;
  }
  lVar2 = param_2;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0();
  _objc_retainAutoreleasedReturnValue();
  if (((param_4 == 0) && (lVar2 != 0)) &&
     (puVar4 = puVar3, func_0x00010c08fa60(), puVar4 != (undefined *)0x0)) {
    func_0x00010befa120(*(undefined8 *)
                         (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0xb0));
    uVar11 = *(long *)(param_1 + 0x30) + 1;
    lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    if (uVar11 < *(ulong *)(lVar12 + 0x58)) {
      do {
        uVar5 = *(undefined8 *)(lVar12 + 0x80);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar5;
        func_0x00010bef6760();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x80);
        func_0x00010c0dfd40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bef6760();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar9;
        func_0x00010bfdb5c0();
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar9);
        _objc_release(uVar5);
        if ((int)uVar8 != 0) {
          uVar7 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x80)
          ;
          func_0x00010c0dfd40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar7;
          func_0x00010c0ef960();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x80)
          ;
          func_0x00010c0dfd40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d75e0();
          _objc_release(uVar8);
          _objc_release(uVar9);
          _objc_release(uVar7);
          uVar7 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x80)
          ;
          func_0x00010c0dfd40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar7;
          func_0x00010c0efa40();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x80)
          ;
          func_0x00010c0dfd40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d7660();
          _objc_release(uVar8);
          _objc_release(uVar9);
          _objc_release(uVar7);
          uVar7 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x80)
          ;
          func_0x00010c0dfd40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar7;
          func_0x00010c0efb00();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x80)
          ;
          func_0x00010c0dfd40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d76a0();
          _objc_release(uVar8);
          _objc_release(uVar9);
          _objc_release(uVar7);
          uVar7 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x80)
          ;
          func_0x00010c0dfd40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar7;
          func_0x00010c29b880();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x80)
          ;
          func_0x00010c0dfd40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c222140();
          _objc_release(uVar8);
          _objc_release(uVar9);
          _objc_release(uVar7);
          uVar7 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x80)
          ;
          func_0x00010c0dfd40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar7;
          func_0x00010bef6760();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf3b9a0();
          _objc_release(uVar9);
          _objc_release(uVar7);
          uVar7 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x80)
          ;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar7;
          func_0x00010c0efa40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          uStack_a8 = 0;
          uStack_98 = 0x3032000000;
          pcStack_90 = FUN_107e42af4;
          uStack_88 = 0x107e42b04;
          lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
          puStack_a0 = &uStack_a8;
          _objc_retain(lVar12);
          puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_e8 = 0xc2000000;
          pcStack_e0 = FUN_107e43410;
          puStack_d8 = &UNK_110a0ef28;
          uStack_b0 = *(undefined1 *)(param_1 + 0x48);
          lStack_80 = lVar12;
          _objc_retain(uVar9);
          uStack_c0 = *(undefined8 *)(param_1 + 0x30);
          uStack_d0 = uVar9;
          puStack_c8 = &uStack_a8;
          uStack_b8 = uVar11;
          func_0x000100162d98("APPSTORE",&puStack_f0);
          _objc_release(uStack_d0);
          __Block_object_dispose(&uStack_a8,8);
          _objc_release(lStack_80);
          _objc_release(uVar9);
        }
        uVar11 = uVar11 + 1;
        lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
      } while (uVar11 < *(ulong *)(lVar12 + 0x58));
    }
    uVar9 = *(undefined8 *)(lVar12 + 0x80);
    func_0x00010c0dfd40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d75e0();
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x80);
    func_0x00010c0dfd40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7660();
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x80);
    func_0x00010c0dfd40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c222140();
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x80);
    func_0x00010c0dfd40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c99e0();
    _objc_release(uVar9);
    lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    if (*(long *)(lVar12 + 0xa0) == 0) {
      uStack_a8 = 0;
      uStack_98 = 0x3032000000;
      pcStack_90 = FUN_107e42af4;
      uStack_88 = 0x107e42b04;
      puStack_a0 = &uStack_a8;
      _objc_retain(lVar12);
      puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_128 = 0xc2000000;
      uStack_120 = 0x107e434f4;
      puStack_118 = &UNK_110a0ef58;
      uStack_100 = *(undefined8 *)(param_1 + 0x30);
      puStack_108 = &uStack_a8;
      lStack_80 = lVar12;
      _objc_retain(puVar3);
      uStack_f8 = *(undefined8 *)(param_1 + 0x38);
      puStack_110 = puVar3;
      func_0x000100162d98("APPSTORE",&puStack_130);
      _objc_release(puStack_110);
      __Block_object_dispose(&uStack_a8,8);
      lVar10 = lStack_80;
LAB_107e4339c:
      _objc_release(lVar10);
    }
LAB_107e433a0:
    func_0x00010be0c8a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
    lVar13 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    lVar12 = *(long *)(lVar13 + 0x28);
    *(undefined8 *)(lVar13 + 0x28) = 0;
  }
  else {
    lVar12 = param_4;
    func_0x00010bf3ec40();
    if (lVar12 != -9999) {
LAB_107e431a8:
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x80);
      func_0x00010c0dfd40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x80);
      func_0x00010c0dfd40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29ada0(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar9);
      _objc_release(uVar7);
      lVar13 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x80);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar13;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar13);
      uVar11 = *(ulong *)(param_1 + 0x30);
      if ((lVar12 == 0) && (uVar11 < *(ulong *)(param_1 + 0x38))) {
        lVar13 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x90);
        func_0x00010c0dfd40(lVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x80);
        func_0x00010c0dfd40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c29ada0(lVar13);
        _objc_release(uVar9);
        _objc_release(lVar13);
        uVar11 = *(ulong *)(param_1 + 0x30);
      }
      if (uVar11 < *(ulong *)(param_1 + 0x38)) {
        func_0x0001004fa310();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126bc508);
        lVar12 = lVar13;
        func_0x00010beecc40(lVar13);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
        lVar13 = lVar12;
        func_0x00010bfe63a0(lVar12);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar13;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
        _objc_release(lVar12);
        lVar12 = param_4;
        func_0x000108552d14(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf76260(lVar10);
        _objc_release(lVar12);
        goto LAB_107e4339c;
      }
      goto LAB_107e433a0;
    }
    lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    func_0x00010be0c7e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar12 == 0) goto LAB_107e431a8;
    func_0x00010befa120(*(undefined8 *)
                         (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0xb0));
    func_0x00010be0c8a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
    lVar13 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar9 = *(undefined8 *)(lVar13 + 0x28);
    *(undefined8 *)(lVar13 + 0x28) = 0;
    _objc_release(uVar9);
  }
  _objc_release(lVar12);
  _objc_release(puVar3);
LAB_107e433d8:
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 107e43410; end: 107e4364b;  */

void FUN_107e43410(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _UIImagePNGRepresentation(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x80);
    func_0x00010c0dfd40(uVar3,param_2,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0efb00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x80);
  func_0x00010c0dfd40(uVar2,param_2,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29adc0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e4364c; end: 107e43767; -[SCPreviewEphemeralMediaList _exportInputVideoToFileURL] */

void FUN_107e4364c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x00010be631e0();
  func_0x00010bf9d2e0(*(undefined8 *)(param_1 + 0x10),param_2,lVar1);
  puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f5800(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = 0;
  puVar3 = puVar5;
  func_0x00010bf0e880(puVar5,param_2,lVar2,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar5);
  puVar5 = puVar3;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar4 = puVar3;
    func_0x00010c0e00e0(puVar3,param_2,*(undefined8 *)PTR__NSFileSize_110345448);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0b4ca0();
    if ((long)puVar5 < 1) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR_PTR_1126b1358;
      func_0x00010bf5a440(PTR_PTR_1126b1358,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107e43768; end: 107e4382f; -[SCPreviewEphemeralMediaList _newMp4Url] */

undefined * FUN_107e43768(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110db77b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x0001000f73a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 107e43830; end: 107e4386b; -[SCPreviewEphemeralMediaList _usecase] */

undefined ** FUN_107e43830(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  bool bVar3;
  
  bVar3 = *(long *)(param_1 + 0xa0) != 0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ec0af8;
  if (bVar3) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e1d358;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ec0b38;
  if (bVar3) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110ec0b18;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 107e4386c; end: 107e438bb; -[SCPreviewEphemeralMediaList combineMultiSnapSegmentsForChatSendingWithCompletion:] */

void FUN_107e4386c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  _objc_release(uVar1);
  if (*(char *)(param_1 + 0x51) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bde20b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__combineMultiSnapSegmentsAndRunC_1125561c8)
    ;
    return;
  }
  return;
}



/* Entry: 107e438bc; end: 107e439fb; -[SCPreviewEphemeralMediaList _combineMultiSnapSegmentsAndRunCompletionHandlersIfNecessary] */

void FUN_107e438bc(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((*(long *)(param_1 + 0xa0) != 0) || (*(long *)(param_1 + 0xa8) != 0)) {
    puVar1 = PTR_PTR_1126b1350;
    _objc_alloc(PTR_PTR_1126b1350);
    func_0x00010bfeee60();
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
    func_0x000108553e88(&PTR____CFConstantStringClassReference_110daafd8,
                        &PTR____CFConstantStringClassReference_110dbab38,1,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010bf43280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d2a78;
    _objc_alloc(PTR_PTR_1126d2a78);
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010bfb1920(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ed100();
    func_0x00010c01e200(puVar1);
    _objc_release(uVar4);
    func_0x00010bf9cfa0(puVar1);
    _objc_release(puVar1);
    _objc_release(uVar3);
    _objc_release(ppuVar2);
  }
  return;
}



/* Entry: 107e439fc; end: 107e43a03;  */

void FUN_107e439fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28f350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_url_1126816f8);
  return;
}



/* Entry: 107e43a04; end: 107e43ab3;  */

void FUN_107e43a04(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b1358;
    func_0x00010bf5a440(PTR_PTR_1126b1358);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(lVar2 + 0xa0);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,puVar3,param_3);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  lVar1 = *(long *)(lVar2 + 0xa8);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,puVar3,param_3);
  }
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e43ab4; end: 107e43abb; -[SCPreviewEphemeralMediaList isTimelineOrDirectorModeSnap] */

undefined1 FUN_107e43ab4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 107e43abc; end: 107e43b0f; -[SCPreviewEphemeralMediaList _startTimelineSnapTranscoding] */

void FUN_107e43abc(long param_1)

{
  int iVar1;
  
  if (((*(char *)(param_1 + 0x28) == '\x01') && (*(long *)(param_1 + 0x90) != 0)) &&
     (*(long *)(param_1 + 0x80) != 0)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x98);
    func_0x00010c296d80();
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bece8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transcodeTimelineSnap_1125913d8);
      return;
    }
  }
  return;
}



/* Entry: 107e43b10; end: 107e43c33; -[SCPreviewEphemeralMediaList _cancelTimelineSnapTranscoding] */

void FUN_107e43b10(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  if (((*(char *)(param_1 + 0x28) == '\x01') && (*(long *)(param_1 + 0x90) != 0)) &&
     (*(long *)(param_1 + 0x80) != 0)) {
    lVar1 = *(long *)(param_1 + 0x98);
    func_0x00010c296d80();
    if ((int)lVar1 == 0) {
      func_0x00010bfec280(*(undefined8 *)(param_1 + 0x98));
      lStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      plStack_100 = (long *)0x0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      lVar1 = *(long *)(param_1 + 0x80);
      _objc_retain(lVar1);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
      if (lVar2 != 0) {
        lVar6 = *plStack_100;
        do {
          lVar7 = 0;
          do {
            if (*plStack_100 != lVar6) {
              _objc_enumerationMutation(lVar1);
            }
            func_0x00010bf2ebc0(*(undefined8 *)(lStack_108 + lVar7 * 8));
            lVar7 = lVar7 + 1;
          } while (lVar2 != lVar7);
          lVar2 = lVar1;
          func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
        } while (lVar2 != 0);
      }
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(lVar1 + 0x100);
  func_0x00010c1585e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(lVar1 + 0x100);
  func_0x00010c1585e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010bece8e0(*(undefined8 *)(lVar1 + 0x128),*(undefined8 *)(lVar1 + 0x130),
                      *(undefined8 *)(lVar1 + 0x118),*(undefined8 *)(lVar1 + 0x120),lVar1,param_2,0,
                      uVar4,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107e43c34; end: 107e43ce7; -[SCPreviewEphemeralMediaList _transcodeTimelineSnap] */

void FUN_107e43c34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c1585e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c1585e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010bece8e0(*(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x130),
                      *(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x120),param_1,
                      param_2,0,uVar2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e43ce8; end: 107e43cef;  */

void FUN_107e43ce8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0b7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_assetURL_1125a07a0);
  return;
}



/* Entry: 107e43cf0; end: 107e43d4b;  */

void FUN_107e43cf0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_2 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010c09e0e0(&uStack_50,param_2);
  }
  func_0x00010c297240(puVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e43d4c; end: 107e43f0b; -[SCPreviewEphemeralMediaList _transcodeTimelineSnapVideoFilterIndex:videoURLs:timeRanges:inputSizeOverride:videoTargetSize:] */

void FUN_107e43d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9
                  )

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = *(long *)(param_5 + 0x80);
  func_0x00010bf529e0();
  if (param_7 < lVar1) {
    uVar2 = *(undefined8 *)(param_5 + 0x80);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_107e42af4;
    uStack_80 = 0x107e42b04;
    _objc_retain(param_5);
    lStack_78 = param_5;
    _objc_retain(uVar2);
    _objc_retain(param_8);
    _objc_retain(param_9);
    func_0x00010c279e20(param_1,param_2,param_3,param_4,uVar2);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(uVar2);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(lStack_78);
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  return;
}



/* Entry: 107e43f0c; end: 107e43f6b;  */

void FUN_107e43f0c(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = PTR_PTR_1126b1350;
  _objc_alloc(PTR_PTR_1126b1350);
  func_0x00010bfeee60();
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x000108553e88(&PTR____CFConstantStringClassReference_110daafd8,
                      &PTR____CFConstantStringClassReference_110dbab38,1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 107e43f6c; end: 107e44323;  */

void FUN_107e43f6c(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  iVar2 = (int)*(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) + 0x98);
  func_0x00010c296d80();
  if (((iVar2 == 0) && (param_2 != 0)) && (param_3 == 0)) {
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    if (puVar4 == (undefined *)0x0) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uVar5 = *(undefined8 *)(lVar9 + 0x28);
      *(undefined8 *)(lVar9 + 0x28) = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0efb00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0efb00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d7540(uVar10);
      _objc_release(uVar6);
      uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0efb00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d77a0(uVar10);
      _objc_release(uVar6);
      func_0x00010c1d75e0(*(undefined8 *)(param_1 + 0x20));
      func_0x00010c1d76a0(*(undefined8 *)(param_1 + 0x20));
      func_0x00010c1d7660(*(undefined8 *)(param_1 + 0x20));
      func_0x00010c222140(*(undefined8 *)(param_1 + 0x20));
      func_0x00010c1c99e0(*(undefined8 *)(param_1 + 0x20));
      lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      if (*(long *)(lVar9 + 0xa0) == 0) {
        uStack_80 = 0;
        uStack_70 = 0x3032000000;
        pcStack_68 = FUN_107e42af4;
        uStack_60 = 0x107e42b04;
        puStack_78 = &uStack_80;
        _objc_retain(lVar9);
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0xc2000000;
        pcStack_b0 = FUN_107e44324;
        puStack_a8 = &UNK_110862058;
        uStack_88 = *(undefined8 *)(param_1 + 0x40);
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        puStack_90 = &uStack_80;
        lStack_58 = lVar9;
        _objc_retain(uVar6);
        uStack_a0 = uVar6;
        _objc_retain(puVar3);
        puStack_98 = puVar3;
        func_0x000100162d98("APPSTORE",&puStack_c0);
        uVar1 = *(ulong *)(param_1 + 0x40);
        uVar7 = *(ulong *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) + 0x90);
        func_0x00010bf529e0();
        if (uVar1 < uVar7) {
          lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) + 0x90);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010bf5caa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar8);
          if (lVar9 != 0) {
            uVar6 = *(undefined8 *)
                     (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) + 0x48);
            func_0x00010c269d40(uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb0100();
            _objc_release(uVar6);
            _objc_release(lVar9);
          }
        }
        _objc_release(puStack_98);
        _objc_release(uStack_a0);
        __Block_object_dispose(&uStack_80,8);
        _objc_release(lStack_58);
        lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      }
      if (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48) + -1) {
        if (*(long *)(lVar9 + 0xa0) != 0) {
          puVar4 = PTR_PTR_1126b1358;
          func_0x00010bf5a440(PTR_PTR_1126b1358);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) + 0xa0);
          (**(code **)(lVar9 + 0x10))(lVar9,puVar4,0);
          _objc_release(puVar4);
        }
      }
      else {
        func_0x00010bece8e0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                            *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),lVar9);
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uVar6 = *(undefined8 *)(lVar9 + 0x28);
      *(undefined8 *)(lVar9 + 0x28) = 0;
      _objc_release(uVar6);
    }
    _objc_release(uVar5);
  }
  else {
    lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    puVar3 = *(undefined **)(lVar9 + 0x28);
    *(undefined8 *)(lVar9 + 0x28) = 0;
  }
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107e44324; end: 107e4437f;  */

void FUN_107e44324(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) + 0x90);
  func_0x00010c0dfd40(uVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29ade0();
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e44380; end: 107e4441b; -[SCPreviewEphemeralMediaList setPublisherId:] */

void FUN_107e44380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010bf98360(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e4441c;
  puStack_30 = &UNK_110a0f068;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf97e80(param_1,param_2,&puStack_48);
  _objc_release(param_1);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e4441c; end: 107e444eb;  */

void FUN_107e4441c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(param_2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c183080(param_2);
  }
  _objc_release(lVar1);
  func_0x00010c067fc0(*(undefined8 *)(param_1 + 0x20));
  lVar1 = param_2;
  func_0x00010bf4e840(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5b60();
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e444ec; end: 107e445ef; -[SCPreviewEphemeralMediaList setMentionedUserIds:usernames:sources:textRanges:] */

void FUN_107e444ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
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
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107e445f0;
  puStack_68 = &UNK_110a0f098;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e445f0; end: 107e445ff;  */

void FUN_107e445f0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c6a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setMentionedUserIds_usernames_so_11264f4b8,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 107e44600; end: 107e4464f; -[SCPreviewEphemeralMediaList setGenAIFeaturedStoryInfo:] */

void FUN_107e44600(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined4 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_107e44650;
  puStack_20 = &UNK_110a0f0c8;
  uStack_18 = param_3;
  func_0x00010bfb47c0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 107e44650; end: 107e4465b;  */

void FUN_107e44650(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a23b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setGenAIFeaturedStoryInfo__112646308,*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e4465c; end: 107e4470b; -[SCPreviewEphemeralMediaList setTopicStickers:storyTopics:] */

void FUN_107e4465c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107e4470c;
  puStack_48 = &UNK_110a0f0e8;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e4470c; end: 107e44717;  */

void FUN_107e4470c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c217930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setTopicStickers_storyTopics__112663870,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107e44718; end: 107e4479b; -[SCPreviewEphemeralMediaList setPoll:] */

void FUN_107e44718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e4479c;
  puStack_30 = &UNK_110a0ec98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107e4479c; end: 107e447a7;  */

void FUN_107e4479c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1dea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setPoll__1126554a8,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e447a8; end: 107e4482b; -[SCPreviewEphemeralMediaList setQuestion:] */

void FUN_107e447a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e4482c;
  puStack_30 = &UNK_110a0ec98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107e4482c; end: 107e44837;  */

void FUN_107e4482c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e6550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setQuestion__112657378,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e44838; end: 107e448bb; -[SCPreviewEphemeralMediaList setSnapMeInfo:] */

void FUN_107e44838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e448bc;
  puStack_30 = &UNK_110a0ec98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107e448bc; end: 107e448c7;  */

void FUN_107e448bc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c204d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setSnapMeInfo__11265ed88,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e448c8; end: 107e449cb; -[SCPreviewEphemeralMediaList setStoryInviteWithPublicationId:inviteId:storyName:storyType:] */

void FUN_107e448c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
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
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107e449cc;
  puStack_68 = &UNK_110a0f098;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e449cc; end: 107e449db;  */

void FUN_107e449cc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c20d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setStoryInviteWithPublicationId__112660f00,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 107e449dc; end: 107e449df; -[SCPreviewEphemeralMediaList setSnapRequestMetadataWithPublicationId:inviteId:storyName:] */

void FUN_107e449dc(void)

{
  return;
}



/* Entry: 107e449e0; end: 107e44a33; -[SCPreviewEphemeralMediaList setUserDisabledRemixing:leaveRemixSettingUnsetExperimentEnabled:] */

void FUN_107e449e0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined1 uStack_18;
  undefined1 uStack_17;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_107e44a34;
  puStack_20 = &UNK_110a0f118;
  uStack_18 = param_3;
  uStack_17 = param_4;
  func_0x00010bfb47c0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 107e44a34; end: 107e44a43;  */

void FUN_107e44a34(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21e330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setUserDisabledRemixing_leaveRem_1126652f0,
             *(undefined1 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x21));
  return;
}



/* Entry: 107e44a44; end: 107e44b1b; -[SCPreviewEphemeralMediaList setDreamsInfoWithDreamId:dreamPackId:lensId:] */

void FUN_107e44a44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107e44b1c;
  puStack_50 = &UNK_110a0ed18;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e44b1c; end: 107e44b2b;  */

void FUN_107e44b1c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c191d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setDreamsInfoWithDreamId_dreamPa_112642168,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107e44b2c; end: 107e44baf; -[SCPreviewEphemeralMediaList setSnapDocLensId:] */

void FUN_107e44b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e44bb0;
  puStack_30 = &UNK_110a0ec98;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb47c0(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107e44bb0; end: 107e44bbb;  */

void FUN_107e44bb0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c204070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setSnapDocLensId__11265ea40,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e44bbc; end: 107e44c57; -[SCPreviewEphemeralMediaList setRankingSignalsBase64String:] */

void FUN_107e44bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010bf98360(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e44c58;
  puStack_30 = &UNK_110a0f068;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf97e80(param_1,param_2,&puStack_48);
  _objc_release(param_1);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e44c58; end: 107e44c63;  */

void FUN_107e44c58(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e75d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setRankingSignalsBase64String__112657798,*(undefined8 *)(param_1 + 0x20))
  ;
  return;
}



/* Entry: 107e44c64; end: 107e44d03; -[SCPreviewEphemeralMediaList setExternalContent:] */

void FUN_107e44c64(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010bf98360(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107e44d04;
    puStack_30 = &UNK_110a0f068;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x00010bf97e80(param_1,param_2,&puStack_48);
    _objc_release(param_1);
    _objc_release(lStack_28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e44d04; end: 107e44db3;  */

void FUN_107e44d04(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf9dee0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010c199480(param_2);
  }
  else {
    lVar1 = param_2;
    func_0x00010bf9dee0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199480(param_2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e44db4; end: 107e44e53; -[SCPreviewEphemeralMediaList setLocalPlatformData:] */

void FUN_107e44db4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010bf98360(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107e44e54;
    puStack_30 = &UNK_110a0f068;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x00010bf97e80(param_1,param_2,&puStack_48);
    _objc_release(param_1);
    _objc_release(lStack_28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e44e54; end: 107e44e5f;  */

void FUN_107e44e54(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bf250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setLocalPlatformData__11264d6b8,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e44e60; end: 107e44f07; -[SCPreviewEphemeralMediaList addMediaOrigins:] */

void FUN_107e44e60(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf98360(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107e44f08;
    puStack_30 = &UNK_110a0f068;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x00010bf97e80(param_1,param_2,&puStack_48);
    _objc_release(param_1);
    _objc_release(lStack_28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e44f08; end: 107e44fd3;  */

void FUN_107e44f08(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0c5c40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010c1c4de0(param_2);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c0c5c40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar3);
    _objc_release(lVar1);
    func_0x00010befa160(puVar3);
    func_0x00010c1c4de0(param_2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e44fd4; end: 107e4505b; -[SCPreviewEphemeralMediaList setBitmojiFashionContext:] */

void FUN_107e44fd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107e4505c;
    puStack_30 = &UNK_110a0ec98;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x00010bfb47c0(param_1,param_2,&puStack_48);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107e4505c; end: 107e45067;  */

void FUN_107e4505c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c170d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setBitmojiFashionContext__112639d70,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e45068; end: 107e4506f; -[SCPreviewEphemeralMediaList count] */

undefined8 FUN_107e45068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107e45070; end: 107e45077; -[SCPreviewEphemeralMediaList setCount:] */

void FUN_107e45070(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 107e45078; end: 107e4507f; -[SCPreviewEphemeralMediaList videoAsset] */

undefined8 FUN_107e45078(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107e45080; end: 107e45087; -[SCPreviewEphemeralMediaList timeRanges] */

undefined8 FUN_107e45080(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107e45088; end: 107e4508f; -[SCPreviewEphemeralMediaList setTimeRanges:] */

void FUN_107e45088(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107e45090; end: 107e45097; -[SCPreviewEphemeralMediaList isFromCamera] */

undefined1 FUN_107e45090(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 107e45098; end: 107e4509f; -[SCPreviewEphemeralMediaList setIsFromCamera:] */

void FUN_107e45098(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 107e450a0; end: 107e450a7; -[SCPreviewEphemeralMediaList transcodingMediaDestinationInfo] */

undefined8 FUN_107e450a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107e450a8; end: 107e450af; -[SCPreviewEphemeralMediaList setTranscodingMediaDestinationInfo:] */

void FUN_107e450a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107e450b0; end: 107e450b7; -[SCPreviewEphemeralMediaList videoTargetSize] */

undefined1  [16] FUN_107e450b0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x118);
}



/* Entry: 107e450b8; end: 107e450bf; -[SCPreviewEphemeralMediaList setVideoTargetSize:] */

void FUN_107e450b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x118) = param_1;
  *(undefined8 *)(param_3 + 0x120) = param_2;
  return;
}



/* Entry: 107e450c0; end: 107e450c7; -[SCPreviewEphemeralMediaList inputVideoOverrideSize] */

undefined1  [16] FUN_107e450c0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x128);
}



/* Entry: 107e450c8; end: 107e450cf; -[SCPreviewEphemeralMediaList setInputVideoOverrideSize:] */

void FUN_107e450c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x128) = param_1;
  *(undefined8 *)(param_3 + 0x130) = param_2;
  return;
}



/* Entry: 107e450d0; end: 107e450d7; -[SCPreviewEphemeralMediaList backgroundColors] */

undefined8 FUN_107e450d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107e450d8; end: 107e45107; -[SCPreviewEphemeralMediaList setBackgroundColors:] */

void FUN_107e450d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e45108; end: 107e4510f; -[SCPreviewEphemeralMediaList setSnapVideoFilterList:] */

void FUN_107e45108(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107e45110; end: 107e45117; -[SCPreviewEphemeralMediaList progressHandler] */

undefined8 FUN_107e45110(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107e45118; end: 107e4511f; -[SCPreviewEphemeralMediaList setProgressHandler:] */

void FUN_107e45118(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107e45120; end: 107e45127; -[SCPreviewEphemeralMediaList setEphemeralMediaList:] */

void FUN_107e45120(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107e45128; end: 107e4512f; -[SCPreviewEphemeralMediaList cancelTranscodingSentinel] */

undefined8 FUN_107e45128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107e45130; end: 107e4515f; -[SCPreviewEphemeralMediaList setCancelTranscodingSentinel:] */

void FUN_107e45130(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e45160; end: 107e45167; -[SCPreviewEphemeralMediaList videoExportFinished] */

undefined1 FUN_107e45160(long param_1)

{
  return *(undefined1 *)(param_1 + 0x51);
}



/* Entry: 107e45168; end: 107e4516f; -[SCPreviewEphemeralMediaList setVideoExportFinished:] */

void FUN_107e45168(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x51) = param_3;
  return;
}



/* Entry: 107e45170; end: 107e45177; -[SCPreviewEphemeralMediaList cameraRollSaveHandler] */

undefined8 FUN_107e45170(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107e45178; end: 107e4517f; -[SCPreviewEphemeralMediaList setCameraRollSaveHandler:] */

void FUN_107e45178(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107e45180; end: 107e45187; -[SCPreviewEphemeralMediaList chatSendingCombineHandler] */

undefined8 FUN_107e45180(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 107e45188; end: 107e4518f; -[SCPreviewEphemeralMediaList setChatSendingCombineHandler:] */

void FUN_107e45188(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107e45190; end: 107e45197; -[SCPreviewEphemeralMediaList multiMediaSegmentExportedVideoURLs] */

undefined8 FUN_107e45190(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 107e45198; end: 107e451c7; -[SCPreviewEphemeralMediaList setMultiMediaSegmentExportedVideoURLs:] */

void FUN_107e45198(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e451c8; end: 107e451cf; -[SCPreviewEphemeralMediaList captureSessionID] */

undefined8 FUN_107e451c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 107e451d0; end: 107e451d7; -[SCPreviewEphemeralMediaList setCaptureSessionID:] */

void FUN_107e451d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107e451d8; end: 107e451df; -[SCPreviewEphemeralMediaList snapSessionID] */

undefined8 FUN_107e451d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 107e451e0; end: 107e451e7; -[SCPreviewEphemeralMediaList setSnapSessionID:] */

void FUN_107e451e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107e451e8; end: 107e451ef; -[SCPreviewEphemeralMediaList batchCaptureConfiguration] */

undefined8 FUN_107e451e8(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 107e451f0; end: 107e4521f; -[SCPreviewEphemeralMediaList setBatchCaptureConfiguration:] */

void FUN_107e451f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e45220; end: 107e45227; -[SCPreviewEphemeralMediaList batchCaptureSegmentExportSession] */

undefined8 FUN_107e45220(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 107e45228; end: 107e45257; -[SCPreviewEphemeralMediaList setBatchCaptureSegmentExportSession:] */

void FUN_107e45228(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e45258; end: 107e4525f; -[SCPreviewEphemeralMediaList batchCaptureSavingError] */

undefined8 FUN_107e45258(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 107e45260; end: 107e4528f; -[SCPreviewEphemeralMediaList setBatchCaptureSavingError:] */

void FUN_107e45260(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


