/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d7e1d0; end: 107d7e2b3;  */

void FUN_107d7e1d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b10a0;
  puVar2 = (undefined *)0x0;
  if (param_1 != 0) {
    func_0x00010c26b700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb42c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_retain(param_2);
    puVar2 = puVar1;
    func_0x00010bf1d200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(param_2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d7e2b4; end: 107d7eb5b;  */

void FUN_107d7e2b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar7 = PTR_PTR_1126b10a0;
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
    goto LAB_107d7eb04;
  }
  lVar1 = param_1;
  func_0x00010c2711a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c260dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32160(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c08dd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126d7b90;
    _objc_alloc();
    uVar9 = 0;
    func_0x00010c013de0(0,0,0x404a000000000000,0x404a000000000000);
    lVar1 = param_1;
    func_0x00010c08dd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf1fbe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    puVar5 = puVar3;
    func_0x00010c08c0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(uVar9);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c08dd40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0dfe60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      puVar5 = puVar3;
      func_0x00010c08c0e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(puVar5);
      lVar1 = param_1;
      func_0x00010c08dd40(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c0dfe60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c295e80(puVar3);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    func_0x00010c1b9fe0(puVar7);
    lVar1 = param_1;
    func_0x00010c08dd40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e5e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      lVar1 = param_1;
      func_0x00010c08dd40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c0e5e00();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = puVar6;
      uStack_98 = 0xc2000000;
      uStack_90 = 0x107d7f708;
      puStack_88 = &UNK_110a0b9d8;
      _objc_retain(puVar3);
      puStack_80 = puVar3;
      (**(code **)(lVar4 + 0x10))(lVar4,&puStack_a0);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(puStack_80);
    }
    _objc_release(puVar3);
  }
  lVar1 = param_1;
  func_0x00010c279280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = param_1;
    func_0x00010c279280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf25360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126d7b98;
      _objc_alloc();
      uVar9 = *(undefined8 *)PTR__CGRectZero_110347608;
      uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      func_0x00010c0141a0(uVar9,uVar10,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),0x4040000000000000,
                          0x4040000000000000);
      puVar5 = PTR_PTR_1126aec40;
      func_0x00010bf25cc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1612a0();
      func_0x00010c0699c0(puVar5);
      func_0x00010c0699c0(puVar5);
      func_0x00010c19f0e0(0,0,uVar9,uVar10,puVar5);
      func_0x00010c1af000(puVar5);
      func_0x00010c160fc0(puVar5);
      func_0x00010c2194c0(puVar7);
      lVar1 = param_1;
      func_0x00010c279280();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf25360();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c0e5e00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar4 != 0) {
        lVar1 = param_1;
        func_0x00010c279280();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf25360();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010c0e5e00();
        _objc_retainAutoreleasedReturnValue();
        puStack_f0 = puVar6;
        uStack_e8 = 0xc2000000;
        pcStack_e0 = FUN_107d7f868;
        puStack_d8 = &UNK_110a0b9d8;
        _objc_retain(puVar3);
        puStack_d0 = puVar3;
        (**(code **)(lVar4 + 0x10))(lVar4,&puStack_f0);
        _objc_release(lVar4);
        _objc_release(lVar2);
        _objc_release(lVar1);
        _objc_release(puStack_d0);
      }
      _objc_initWeak(auStack_f8,puVar7);
      puStack_130 = puVar6;
      uStack_128 = 0xc2000000;
      pcStack_120 = FUN_107d7f918;
      puStack_118 = &UNK_110848378;
      _objc_retain(param_1);
      lStack_110 = param_1;
      _objc_copyWeak(auStack_100,auStack_f8);
      _objc_retain(param_2);
      uStack_108 = param_2;
      func_0x00010c1d3960(puVar5);
      lVar1 = param_1;
      func_0x00010c279280();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf25360();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c273d60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar4 == 0) {
        ppuVar8 = (undefined **)0x0;
      }
      else {
        puStack_160 = puVar6;
        uStack_158 = 0xc2000000;
        pcStack_150 = FUN_107d7fbc0;
        puStack_148 = &UNK_110a0ba08;
        _objc_retain(puVar5);
        puStack_140 = puVar5;
        _objc_retain(param_1);
        ppuVar8 = &puStack_160;
        lStack_138 = param_1;
        _objc_retainBlock(ppuVar8);
        _objc_release(lStack_138);
        _objc_release(puStack_140);
      }
      _objc_release(uStack_108);
      _objc_destroyWeak(auStack_100);
      _objc_release(lStack_110);
      _objc_destroyWeak(auStack_f8);
      goto LAB_107d7ea58;
    }
    ppuVar8 = (undefined **)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126d7b98;
    _objc_alloc();
    uVar9 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    func_0x00010c0141a0(uVar9,uVar10,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),0x4040000000000000,
                        0x4040000000000000);
    func_0x00010c0699c0();
    func_0x00010c0699c0(puVar3);
    func_0x00010c19f0e0(0,0,uVar9,uVar10,puVar3);
    func_0x00010c2194c0(puVar7);
    lVar1 = param_1;
    func_0x00010c279280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e5e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 == 0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      lVar1 = param_1;
      func_0x00010c279280();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c0e5e00();
      _objc_retainAutoreleasedReturnValue();
      puStack_c8 = puVar6;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_107d7f7b8;
      puStack_b0 = &UNK_110a0b9d8;
      _objc_retain(puVar3);
      puStack_a8 = puVar3;
      (**(code **)(lVar4 + 0x10))(lVar4,&puStack_c8);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      ppuVar8 = (undefined **)0x0;
      puVar5 = puStack_a8;
LAB_107d7ea58:
      _objc_release(puVar5);
    }
    _objc_release(puVar3);
  }
  _objc_retain(param_1);
  _objc_retain(param_2);
  puVar6 = puVar7;
  func_0x00010bf1d200(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126d7ba0;
  _objc_opt_new(PTR_PTR_1126d7ba0);
  func_0x00010c1c8ce0();
  func_0x00010c17fb20(puVar7);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(ppuVar8);
  _objc_release(puVar6);
LAB_107d7eb04:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107d7eb5c; end: 107d7ebcb;  */

void FUN_107d7eb5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0e2ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_107d7ebcc(param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d7ebcc; end: 107d7ed0b;  */

void FUN_107d7ebcc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    if (lRam0000000113727ac0 != -1) {
      func_0x00010002a2fc(0x113727ac0,&PTR___NSConcreteGlobalBlock_110a0ba68);
    }
    lVar3 = lRam0000000113727ab8;
    _objc_retain(lRam0000000113727ab8);
    lVar1 = param_1;
    func_0x00010c27dd80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2;
      (**(code **)(lVar2 + 0x10))(lVar2,param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        lVar1 = param_1;
        func_0x00010beecea0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c160fc0(lVar3);
        _objc_release(lVar1);
        _objc_retain(lVar3);
      }
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107d7ed0c; end: 107d7ed17; -[SCComposerFoundationActionSheetController pushToValdiMarshaller:] */

undefined8 FUN_107d7ed0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1a30;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b898a50();
  func_0x00010b898a60();
  return param_3;
}



/* Entry: 107d7ed18; end: 107d7ed1f; -[SCComposerFoundationActionSheetController actionSheetModel] */

undefined8 FUN_107d7ed18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d7ed20; end: 107d7ed4f; -[SCComposerFoundationActionSheetController setActionSheetModel:] */

void FUN_107d7ed20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d7ed50; end: 107d7ed5b; -[SCComposerFoundationActionSheetController .cxx_destruct] */

void FUN_107d7ed50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d7ed5c; end: 107d7edcf; -[SCComposerFoundationActionSheetPresenter initWithComposerDeckConverter:] */

undefined1 * FUN_107d7ed5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fafb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d7edd0; end: 107d7ee37; -[SCComposerFoundationActionSheetPresenter initWithComposerDeckConverter:presentingViewControllerProvider:] */

long FUN_107d7edd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010c000740(param_1,param_2,param_3);
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 107d7ee38; end: 107d7ee8b; -[SCComposerFoundationActionSheetPresenter initWithComposerDeckConverter:uiContainer:] */

long FUN_107d7ee38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c000740(param_1,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107d7ee8c; end: 107d7efef; -[SCComposerFoundationActionSheetPresenter presentActionSheetWithOptions:] */

void FUN_107d7ee8c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf668c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf668c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0fe260();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0cfcc0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(uVar3);
  }
  puVar6 = PTR_PTR_1126d7b80;
  _objc_alloc_init();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107d7eff0;
  puStack_60 = &UNK_110848ba8;
  lStack_58 = param_3;
  lStack_50 = param_1;
  _objc_retain();
  puStack_48 = puVar6;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_78);
  puVar1 = puStack_48;
  _objc_retain(puVar6);
  _objc_release(puVar1);
  _objc_release(lStack_58);
  _objc_release(puVar6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107d7eff0; end: 107d7f21b;  */

void FUN_107d7eff0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_107d7f21c(lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) goto LAB_107d7f200;
  puVar2 = PTR_PTR_1126d7b88;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e2ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c031220();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
  *(undefined **)(*(long *)(param_1 + 0x28) + 0x28) = puVar2;
  _objc_release(uVar5);
  _objc_release(uVar3);
  lVar6 = lVar1;
  func_0x00010c0cfdc0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar6);
  func_0x00010c161dc0(*(undefined8 *)(param_1 + 0x30));
  if (*(long *)(*(long *)(param_1 + 0x28) + 0x18) == 0) {
    lVar6 = *(long *)(param_1 + 0x28) + 0x10;
    _objc_loadWeakRetained();
    if (lVar6 == 0) {
      lVar6 = *(long *)(param_1 + 0x28);
      lVar4 = *(long *)(lVar6 + 8);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x10))();
        _objc_retainAutoreleasedReturnValue();
        _objc_storeWeak(*(long *)(param_1 + 0x28) + 0x10,lVar4);
        _objc_release(lVar4);
        *(undefined8 *)(*(long *)(param_1 + 0x28) + 8) = 0;
        goto LAB_107d7f178;
      }
    }
    else {
LAB_107d7f178:
      _objc_release();
      lVar6 = *(long *)(param_1 + 0x28);
    }
    lVar6 = lVar6 + 0x10;
    _objc_loadWeakRetained(lVar6);
    lVar4 = lVar1;
    func_0x00010c0cfdc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar1);
    func_0x00010c10af80(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar6);
  }
  else {
    lVar6 = lVar1;
    func_0x00010c0cfdc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar1);
    func_0x00010c10c360(lVar6);
    _objc_release(lVar6);
  }
  _objc_release(lVar1);
LAB_107d7f200:
  _objc_release(lVar1);
  return;
}



/* Entry: 107d7f21c; end: 107d7f503;  */

void FUN_107d7f21c(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c084fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c0e2ec0();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107d81780;
  puStack_70 = &UNK_110a0bc48;
  lStack_68 = lVar8;
  _objc_retain();
  lVar2 = lVar1;
  func_0x000100504554(lVar1,&puStack_88);
  _objc_release(lStack_68);
  _objc_release(lVar8);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_2 & 1) == 0) {
    lVar8 = param_1;
    func_0x00010bfdef60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c0e2ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    FUN_107d7e2b4(lVar8,lVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar8);
    lVar8 = lVar3;
    func_0x00010c0cfdc0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x00010bf43fe0(lVar3);
    _objc_retainAutoreleasedReturnValue();
LAB_107d7f36c:
    _objc_release(lVar3);
  }
  else {
    if (lVar1 == 0) {
      lVar8 = param_1;
      func_0x00010bfdef60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar1 = 0;
      if (lVar8 != 0) {
        lVar3 = param_1;
        func_0x00010bfdef60(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar3;
        func_0x00010c2711a0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = 0;
        lVar8 = 0;
        goto LAB_107d7f36c;
      }
    }
    lVar9 = 0;
    lVar8 = 0;
  }
  lVar3 = param_1;
  func_0x00010bfb4220(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0e2ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  FUN_107d7e1d0(lVar3,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar6 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  func_0x00010c019f40();
  lVar3 = param_1;
  func_0x00010bfdf460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7780(puVar6);
  _objc_release(lVar3);
  puVar7 = PTR_PTR_1126d7ba8;
  _objc_opt_new(PTR_PTR_1126d7ba8);
  func_0x00010c1c8ce0();
  func_0x00010c17fb20(puVar7);
  lVar3 = param_1;
  func_0x00010c0e2ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d1b80(puVar7);
  _objc_release(lVar3);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107d7f504; end: 107d7f613;  */

void FUN_107d7f504(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf43fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bf43fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0cfdc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 107d7f614; end: 107d7f61f; -[SCComposerFoundationActionSheetPresenter pushToValdiMarshaller:] */

undefined8 FUN_107d7f614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1a38;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b898a50();
  func_0x00010b898a60();
  return param_3;
}



/* Entry: 107d7f620; end: 107d7f66f; -[SCComposerFoundationActionSheetPresenter .cxx_destruct] */

void FUN_107d7f620(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d7f670; end: 107d7f683;  */

void FUN_107d7f670(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d7f67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107d7f684; end: 107d7f7a3;  */

void FUN_107d7f684(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 107d7f7a4; end: 107d7f7b7;  */

void FUN_107d7f7a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16a7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setAsset_tintColor_flipOnRtl__112638410,
             *(undefined8 *)(param_1 + 0x28),0,0);
  return;
}



/* Entry: 107d7f7b8; end: 107d7f853;  */

void FUN_107d7f7b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107d7f854;
  puStack_38 = &UNK_110841f80;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  uStack_28 = param_2;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(param_2);
  return;
}



/* Entry: 107d7f854; end: 107d7f867;  */

void FUN_107d7f854(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16a7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setAsset_tintColor_flipOnRtl__112638410,
             *(undefined8 *)(param_1 + 0x28),0,0);
  return;
}



/* Entry: 107d7f868; end: 107d7f903;  */

void FUN_107d7f868(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107d7f904;
  puStack_38 = &UNK_110841f80;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  uStack_28 = param_2;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(param_2);
  return;
}



/* Entry: 107d7f904; end: 107d7f917;  */

void FUN_107d7f904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16a7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setAsset_tintColor_flipOnRtl__112638410,
             *(undefined8 *)(param_1 + 0x28),0,0);
  return;
}



/* Entry: 107d7f918; end: 107d7fa63;  */

void FUN_107d7f918(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c279280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf25360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e6ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c279280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf25360();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e6ee0();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107d7fa64;
    puStack_58 = &UNK_110848708;
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uStack_50 = uVar4;
    (**(code **)(lVar3 + 0x10))(lVar3,&puStack_70);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(uStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 107d7fa64; end: 107d7fb07;  */

void FUN_107d7fa64(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107d7fb08;
  puStack_38 = &UNK_110848708;
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107d7fb08; end: 107d7fbbf;  */

void FUN_107d7fb08(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010beeee80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107d7f670;
  puStack_40 = &UNK_110849530;
  uStack_38 = uVar3;
  _objc_retain(uVar3);
  func_0x00010bf83000(lVar2,param_2,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 107d7fbc0; end: 107d7fd1f;  */

void FUN_107d7fbc0(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0(*(undefined8 *)(param_3 + 0x20));
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51200(param_1,param_2,param_4);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c15b1c0(param_4);
  func_0x00010c292b00(puVar2);
  puVar2 = PTR_PTR_1126b09c0;
  _objc_alloc(PTR_PTR_1126b09c0);
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c279280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf25360();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c273d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051640(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  func_0x00010c10c340(param_1,param_2 + -32.0 + -10.0,0x4024000000000000,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107d7fd20; end: 107d7fdff;  */

void FUN_107d7fd20(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e6fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c0e6fa0();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107d7fe00;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uStack_40 = param_2;
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    (**(code **)(lVar1 + 0x10))(lVar1,&puStack_60);
    _objc_release(lVar1);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 107d7fe00; end: 107d7ff0f;  */

void FUN_107d7fe00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x107d7fe90;
  puStack_38 = &UNK_11084aaa8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = uVar2;
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  return;
}



/* Entry: 107d7ff10; end: 107d800c3;  */

void FUN_107d7ff10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
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
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e8 = PTR_PTR_1133fac88;
  puStack_e0 = PTR_PTR_1133fac90;
  ppuStack_80 = &PTR___NSConcreteGlobalBlock_110a0baa8;
  ppuStack_78 = &PTR___NSConcreteGlobalBlock_110a0bac8;
  puStack_d8 = PTR_PTR_1133fac98;
  puStack_d0 = PTR_PTR_1133faca0;
  ppuStack_70 = &PTR___NSConcreteGlobalBlock_110a0bae8;
  ppuStack_68 = &PTR___NSConcreteGlobalBlock_110a0bb08;
  puStack_c8 = PTR_PTR_1133faca8;
  puStack_c0 = PTR_PTR_1133facb0;
  ppuStack_60 = &PTR___NSConcreteGlobalBlock_110a0bb28;
  ppuStack_58 = &PTR___NSConcreteGlobalBlock_110a0bb48;
  puStack_b8 = PTR_PTR_1133facb8;
  puStack_b0 = PTR_PTR_1133facc0;
  ppuStack_50 = &PTR___NSConcreteGlobalBlock_110a0bb68;
  ppuStack_48 = &PTR___NSConcreteGlobalBlock_110a0bb88;
  puStack_a8 = PTR_PTR_1133facc8;
  puStack_a0 = PTR_PTR_1133facd0;
  ppuStack_40 = &PTR___NSConcreteGlobalBlock_110a0bba8;
  ppuStack_38 = &PTR___NSConcreteGlobalBlock_110a0bbc8;
  puStack_98 = PTR_PTR_1133facd8;
  puStack_90 = PTR_PTR_1133face0;
  ppuStack_30 = &PTR___NSConcreteGlobalBlock_110a0bbe8;
  ppuStack_28 = &PTR___NSConcreteGlobalBlock_110a0bc08;
  puStack_88 = PTR_PTR_1133face8;
  ppuStack_20 = &PTR___NSConcreteGlobalBlock_110a0bc28;
  pppuVar5 = &ppuStack_80;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,pppuVar5,&puStack_e8,0xd);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = puRam0000000113727ab8;
  puRam0000000113727ab8 = puVar1;
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b10a0;
  _objc_retain(pppuVar5);
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  FUN_107d801b8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar5);
  _objc_release(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bfe5400(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar2;
  FUN_107d80278(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0(puVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d800c4; end: 107d801b7;  */

void FUN_107d800c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126b10a0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_107d801b8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bfe5400(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar1;
  FUN_107d80278(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0(puVar3);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d801b8; end: 107d80277;  */

void FUN_107d801b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf1d200(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107d80278; end: 107d80343;  */

void FUN_107d80278(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_retain();
    uVar3 = 0xbff0000000000000;
    func_0x00010c0c3f40(0xbff0000000000000,0xbff0000000000000,param_1);
    uVar4 = 0xbff0000000000000;
    func_0x00010c0c3f40(0xbff0000000000000,0xbff0000000000000,param_1);
    puVar2 = PTR_PTR_1126d7b90;
    _objc_alloc(PTR_PTR_1126d7b90);
    func_0x00010c013de0(0,0,uVar3,uVar4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16a7c0(puVar2,param_2,param_1,puVar1,1);
    _objc_release(param_1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d80344; end: 107d80963;  */

void FUN_107d80344(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000107d8048c();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b10a0;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = param_2;
    func_0x00010c26b700(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec240(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b10a0;
    puVar3 = param_2;
    func_0x00010c26b700(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec260(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  puVar2 = puVar1;
  FUN_107d801b8(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d80964; end: 107d80a1b;  */

void FUN_107d80964(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c272e80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b10a0;
  uVar1 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1588e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_107d80a1c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d80a1c; end: 107d80b0b;  */

void FUN_107d80a1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_initWeak(auStack_38,param_1);
  _objc_retain(param_2);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_1;
  func_0x00010bf1d200(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d80b0c; end: 107d80ceb;  */

void FUN_107d80b0c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c272e80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126b10a0;
  lVar1 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2655e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c06b640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c06b640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c195460(puVar2);
    _objc_release(lVar1);
  }
  puVar3 = puVar2;
  FUN_107d80a1c(puVar2,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d80cec; end: 107d80e7b;  */

void FUN_107d80cec(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126b10a0;
  uVar1 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf6e2c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c296e20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c06b640();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  if (uVar1 != 0) {
    uVar2 = param_2;
    func_0x00010c06b640();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar4 & 1) == 0) {
      func_0x00010c1677c0(0x3fd999999999999a,puVar3);
      _objc_retain(param_2);
      func_0x00010bf1d200(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      goto LAB_107d80e48;
    }
  }
  FUN_107d801b8(puVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
LAB_107d80e48:
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107d80e7c; end: 107d80edf;  */

void FUN_107d80e7c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e3c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c0e3c00();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 107d80ee0; end: 107d813b7;  */

void FUN_107d80ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_PTR_1126b10a0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf6e2c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e3c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_107d801b8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c165e40(puVar4);
  uVar1 = param_2;
  func_0x00010bfe5400(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_107d80278();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c113140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  if ((int)uVar2 == 1) {
    func_0x00010c18c540(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107d813b8; end: 107d81537;  */

void FUN_107d813b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c23e100();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar5 == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    func_0x00010bf83000(param_2);
    _objc_release(uVar5);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c0d76e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar2 == 0) {
      func_0x00010c0e6ee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == 0) goto LAB_107d8151c;
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010c0e6ee0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))();
    }
    else {
      func_0x00010c0d76e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      FUN_107d7f21c();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c0cfdc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10d300(param_2);
      _objc_release(lVar4);
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar3);
LAB_107d8151c:
  _objc_release(param_2);
  return;
}



/* Entry: 107d81538; end: 107d815ab;  */

void FUN_107d81538(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e6ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c0e6ee0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d8159c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107d815ac; end: 107d8177f;  */

void FUN_107d815ac(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c272e80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216ae0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar2);
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c1fade0();
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c0e6ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c0e6ee0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))();
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c0e7240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c0e7240();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 107d81780; end: 107d8178f;  */

void FUN_107d81780(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(uVar3);
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    if (lRam0000000113727ac0 != -1) {
      func_0x00010002a2fc(0x113727ac0,&PTR___NSConcreteGlobalBlock_110a0ba68);
    }
    lVar4 = lRam0000000113727ab8;
    _objc_retain(lRam0000000113727ab8);
    lVar1 = param_2;
    func_0x00010c27dd80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar1);
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar2;
      (**(code **)(lVar2 + 0x10))(lVar2,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        lVar1 = param_2;
        func_0x00010beecea0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c160fc0(lVar4);
        _objc_release(lVar1);
        _objc_retain(lVar4);
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar2);
  }
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107d81790; end: 107d81837; -[SCComposerFoundationAlertPresenter presentAlertWithOptions:callback:] */

void FUN_107d81790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107d81838;
  puStack_38 = &UNK_11084aaa8;
  uStack_30 = param_3;
  uStack_28 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d81838; end: 107d81b73;  */

void FUN_107d81838(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  puVar2 = PTR_PTR_1126af180;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf259e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010bf2e000();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  puVar5 = PTR_PTR_1126af180;
  if (lVar6 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf2e000(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef320(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010befa120(puVar3);
    _objc_release(puVar5);
  }
  lVar6 = *(long *)(param_1 + 0x20);
  func_0x00010beec640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = (undefined *)0x0;
  if (lVar6 != 0) {
    puVar5 = PTR_PTR_1126d7b90;
    _objc_alloc(PTR_PTR_1126d7b90);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010beec640(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16a7c0(puVar5);
    _objc_release(uVar1);
  }
  puVar8 = PTR_PTR_1126af4d8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2716a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6e620(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar11);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar10);
  func_0x00010beff8c0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar1);
  puVar9 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c00();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_90,8);
  return;
}



/* Entry: 107d81b74; end: 107d81b87;  */

void FUN_107d81b74(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 107d81b88; end: 107d81bc7;  */

void FUN_107d81b88(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c264f20(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,lVar1 != 0);
  return;
}



/* Entry: 107d81bc8; end: 107d81beb;  */

void FUN_107d81bc8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d81be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))
              (lVar1,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18));
    return;
  }
  return;
}



/* Entry: 107d81bec; end: 107d81ca7; -[SCComposerFoundationAlertPresenter presentToastWithMessage:] */

void FUN_107d81bec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x107d81c70;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107d81ca8; end: 107d81cb3; -[SCComposerFoundationAlertPresenter pushToValdiMarshaller:] */

undefined8 FUN_107d81ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1a40;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 107d81cb4; end: 107d81e0b; -[SCComposerFoundationApplication observeEnteredBackgroundWithCallback:] */

void FUN_107d81cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)PTR__UIApplicationDidEnterBackgroundNotification_110345a10;
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107d81e0c;
  puStack_60 = &UNK_110a0bca8;
  uStack_58 = param_3;
  _objc_retain(param_3);
  puVar4 = puVar2;
  func_0x00010befa280(puVar2,param_2,uVar5,0,puVar3,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2f30;
  _objc_alloc(PTR_PTR_1126b2f30);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107d81e20;
  puStack_88 = &UNK_110842e18;
  puStack_80 = puVar4;
  _objc_retain(puVar4);
  func_0x00010bffae00(puVar2,param_2,&puStack_a0);
  _objc_release(puStack_80);
  _objc_release(puVar4);
  _objc_release(uStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d81e0c; end: 107d81e1f;  */

void FUN_107d81e0c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d81e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107d81e20; end: 107d81e5f;  */

void FUN_107d81e20(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107d81e60; end: 107d81fb7; -[SCComposerFoundationApplication observeEnteredForegroundWithCallback:] */

void FUN_107d81e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_1103459f8;
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107d81fb8;
  puStack_60 = &UNK_110a0bca8;
  uStack_58 = param_3;
  _objc_retain(param_3);
  puVar4 = puVar2;
  func_0x00010befa280(puVar2,param_2,uVar5,0,puVar3,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2f30;
  _objc_alloc(PTR_PTR_1126b2f30);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107d81fcc;
  puStack_88 = &UNK_110842e18;
  puStack_80 = puVar4;
  _objc_retain(puVar4);
  func_0x00010bffae00(puVar2,param_2,&puStack_a0);
  _objc_release(puStack_80);
  _objc_release(puVar4);
  _objc_release(uStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d81fb8; end: 107d81fcb;  */

void FUN_107d81fb8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d81fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107d81fcc; end: 107d8200b;  */

void FUN_107d81fcc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107d8200c; end: 107d8225f; -[SCComposerFoundationApplication observeKeyboardHeightWithCallback:] */

void FUN_107d8200c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_107d82260;
  puStack_80 = &UNK_110a0bcd8;
  uStack_78 = param_3;
  _objc_retain(param_3);
  ppuVar2 = &puStack_98;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)PTR__UIKeyboardWillShowNotification_110345d20;
  puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_107d82338;
  puStack_a8 = &UNK_110a0bca8;
  _objc_retain(ppuVar2);
  puVar5 = puVar3;
  ppuStack_a0 = ppuVar2;
  func_0x00010befa280(puVar3,param_2,uVar7,0,puVar4,&puStack_c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)PTR__UIKeyboardWillHideNotification_110345d18;
  puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x107d82348;
  puStack_d0 = &UNK_110a0bca8;
  ppuStack_c8 = ppuVar2;
  _objc_retain(ppuVar2);
  puVar6 = puVar3;
  func_0x00010befa280(puVar3,param_2,uVar7,0,puVar4,&puStack_e8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b2f30;
  _objc_alloc(PTR_PTR_1126b2f30);
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_107d82358;
  puStack_100 = &UNK_110841f80;
  puStack_f8 = puVar5;
  puStack_f0 = puVar6;
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  func_0x00010bffae00(puVar3,param_2,&puStack_118);
  _objc_release(puStack_f0);
  _objc_release(puStack_f8);
  _objc_release(puVar6);
  _objc_release(ppuStack_c8);
  _objc_release(puVar5);
  _objc_release(ppuStack_a0);
  _objc_release(ppuVar2);
  _objc_release(uStack_78);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d82260; end: 107d82337;  */

void FUN_107d82260(long param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 in_d3;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010bdc1080(uVar1);
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
    if (param_3 == 0) {
      in_d3 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x000107d82320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(in_d3);
    return;
  }
  return;
}



/* Entry: 107d82338; end: 107d82357;  */

void FUN_107d82338(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000107d82344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,1);
  return;
}



/* Entry: 107d82358; end: 107d823c3;  */

void FUN_107d82358(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107d823c4; end: 107d825df; -[SCComposerFoundationApplication observeScreenCaptureWithCallback:] */

void FUN_107d823c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar3 = puVar1;
  func_0x00010befa280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar4 = puVar1;
  func_0x00010befa280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&PTR___NSConcreteGlobalBlock_110a0bd08);
  puVar1 = PTR_PTR_1126b2f30;
  _objc_alloc(PTR_PTR_1126b2f30);
  _objc_retain(puVar4);
  _objc_retain(puVar3);
  func_0x00010bffae00(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d825e0; end: 107d82613;  */

void FUN_107d825e0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d825f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 107d82614; end: 107d8267f;  */

void FUN_107d82614(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107d82680; end: 107d8268b; -[SCComposerFoundationApplication pushToValdiMarshaller:] */

undefined8 FUN_107d82680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df408;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x00010b0470c0();
  return param_3;
}



/* Entry: 107d8268c; end: 107d8271b; -[SCComposerFoundationSIGAlertPresenter initWithComposerDeckConverter:] */

undefined1 * FUN_107d8268c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fafb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d8271c; end: 107d8276f; -[SCComposerFoundationSIGAlertPresenter initWithComposerDeckConverter:uiContainer:] */

long FUN_107d8271c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c000740(param_1,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_4;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107d82770; end: 107d82827; -[SCComposerFoundationSIGAlertPresenter presentAlertWithOptions:callback:] */

void FUN_107d82770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107d82828;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_3;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d82828; end: 107d82c53;  */

void FUN_107d82828(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar9 = &puStack_e0;
  puVar1 = PTR_PTR_1126d7bb0;
  _objc_alloc_init(PTR_PTR_1126d7bb0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2716a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6e620(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18d480(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c264f20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2108c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf61680(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188500(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26bc60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213340(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010beec640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126d7bb8;
    _objc_alloc_init(PTR_PTR_1126d7bb8);
    func_0x00010c1a7860(puVar1,param_2,puVar4);
    _objc_release(puVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010beec640(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bfdf580(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(puVar4);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010beec680(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bfdf580(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2256c0();
    _objc_release(puVar4);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010beec660(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bfdf580(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7d00();
    _objc_release(puVar4);
    _objc_release(uVar2);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126d7bc0;
  _objc_alloc(PTR_PTR_1126d7bc0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf259e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052bc0(puVar6,param_2,uVar2);
  _objc_release(uVar2);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107d82c54;
  puStack_78 = &UNK_11085d1a0;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar2;
  _objc_retain(uVar10);
  uStack_70 = uVar10;
  func_0x00010c1d3960(puVar6,param_2,&puStack_90);
  func_0x00010befa120(puVar5,param_2,puVar6);
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010bf2e000();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c08fa60();
  _objc_release(lVar7);
  if (lVar3 != 0) {
    puVar8 = PTR_PTR_1126d7bc0;
    _objc_alloc(PTR_PTR_1126d7bc0);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf2e000(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052bc0(puVar8,param_2,uVar2);
    _objc_release(uVar2);
    puStack_b8 = puVar4;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_107d82d10;
    puStack_a0 = &UNK_110848438;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    uStack_98 = uVar2;
    func_0x00010c1d3960(puVar8,param_2,&puStack_b8);
    func_0x00010befa120(puVar5,param_2,puVar8);
    _objc_release(uStack_98);
    _objc_release(puVar8);
  }
  puVar8 = puVar5;
  func_0x00010bf51e00(puVar5);
  func_0x00010c162140(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  puStack_e0 = puVar4;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x107d82d28;
  puStack_c8 = &UNK_110849530;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uStack_c0 = uVar2;
  _objc_retainBlock(&puStack_e0);
  func_0x00010be7a180(*(undefined8 *)(param_1 + 0x28),param_2,puVar1,ppuVar9,1);
  _objc_release(ppuVar9);
  _objc_release(uStack_c0);
  _objc_release(uStack_70);
  _objc_release(uStack_68);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar1);
  return;
}



/* Entry: 107d82c54; end: 107d82d0f;  */

void FUN_107d82c54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,1);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c26bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c0e6bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c26bc60();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0e6bc0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d82d10; end: 107d82d3f;  */

void FUN_107d82d10(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d82d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 107d82d40; end: 107d82e37; -[SCComposerFoundationSIGAlertPresenter presentAlertV2WithConfig:onDismiss:] */

void FUN_107d82d40(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf668c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf668c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0fe260(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0cfcc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
  }
  func_0x00010be7a180(param_1,param_2,param_3,param_4,0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d82e38; end: 107d82eab; -[SCComposerFoundationSIGAlertPresenter dismissAll] */

void FUN_107d82e38(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107d82eac;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_release(uVar1);
  return;
}



/* Entry: 107d82eac; end: 107d82eb7;  */

void FUN_107d82eac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 107d82eb8; end: 107d82f73; -[SCComposerFoundationSIGAlertPresenter presentToastWithMessage:] */

void FUN_107d82eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x107d82f3c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107d82f74; end: 107d83033; -[SCComposerFoundationSIGAlertPresenter _presentAlertWithConfig:onDismiss:skipDismissBlockOnAction:] */

void FUN_107d82f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107d83034;
  puStack_58 = &UNK_110864938;
  uStack_50 = param_3;
  uStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d83034; end: 107d83853;  */

void FUN_107d83034(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *unaff_x26;
  undefined *puVar14;
  undefined8 uVar15;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfdf580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d7b90;
    _objc_alloc();
    uVar15 = *(undefined8 *)PTR__CGRectZero_110347608;
    func_0x00010c013de0(uVar15,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfdf580(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16a7c0(puVar2);
    _objc_release(uVar8);
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010bfdf580();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c2a5040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010bfdf580();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010bfe0640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar6 = *(long *)(param_1 + 0x20);
    func_0x00010bfdf580();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010bf525a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    if (lVar1 != 0 || lVar4 != 0) {
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        puVar14 = puVar2;
        func_0x00010c2a5060(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0(lVar1);
        unaff_x26 = puVar14;
        func_0x00010bf49420(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(unaff_x26);
        _objc_release(puVar14);
      }
      if (lVar4 != 0) {
        puVar14 = puVar2;
        func_0x00010bfe0660(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0(lVar4);
        unaff_x26 = puVar14;
        func_0x00010bf49420(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(unaff_x26);
        _objc_release(puVar14);
      }
      func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      _objc_release(puVar7);
    }
    if (lVar5 != 0) {
      func_0x00010bf885a0(lVar5);
      puVar7 = puVar2;
      func_0x00010c08c0e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(uVar15);
      _objc_release(puVar7);
    }
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
  _objc_initWeak(auStack_78,*(undefined8 *)(param_1 + 0x28));
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beef480(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar13 = 0;
  while( true ) {
    uVar9 = *(ulong *)(param_1 + 0x20);
    func_0x00010beef480();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf529e0();
    _objc_release(uVar9);
    if (uVar10 <= uVar13) break;
    puVar11 = *(undefined **)(param_1 + 0x20);
    func_0x00010beef480();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar11;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010beef480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_retain(puVar14);
    puVar11 = puVar14;
    func_0x00010c28fea0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf1f3c0();
    _objc_release(puVar11);
    if (((ulong)puVar12 & 1) == 0) {
      puVar11 = puVar14;
      func_0x00010bf25920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar11 != (undefined *)0x0) {
        puVar11 = puVar14;
        func_0x00010bf25920();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2827c0();
        _objc_release(puVar11);
      }
    }
    _objc_release(puVar14);
    _objc_release(uVar8);
    puVar11 = PTR_PTR_1126aed70;
    puVar12 = puVar14;
    func_0x00010c2711a0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = puVar14;
    func_0x00010beecea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar14);
    uStack_80 = *(undefined1 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_88,auStack_78);
    func_0x00010beff460(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7);
    _objc_release(puVar11);
    _objc_release(unaff_x26);
    _objc_release(puVar12);
    _objc_destroyWeak(auStack_88);
    _objc_release(puVar14);
    _objc_release(puVar14);
    uVar13 = uVar13 + 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  puVar14 = puVar7;
  func_0x00010bf51e00(puVar7);
  func_0x00010bdc9b40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c26bc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c26bc60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c156dc0();
    func_0x00010c1f9a00(uVar8);
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010c26bc60();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c0fd720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar1 != 0) {
      uVar15 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c26bc60(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar15;
      func_0x00010c0fd720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c193940(uVar8);
      _objc_release(uVar3);
      _objc_release(uVar15);
    }
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c26bc60(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar15;
    func_0x00010c064620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2132c0(uVar8);
    _objc_release(uVar3);
    _objc_release(uVar15);
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010c26bc60();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf11ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar1 != 0) {
      uVar15 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c26bc60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar15;
      func_0x00010bf11ea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c193900(uVar8);
      _objc_release(uVar3);
      _objc_release(uVar15);
    }
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010c26bc60();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010c0c2540();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c067fc0();
    if (lVar4 < 1) {
      puVar14 = (undefined *)0x0;
    }
    else {
      unaff_x26 = *(undefined **)(param_1 + 0x20);
      func_0x00010c26bc60(unaff_x26);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = unaff_x26;
      func_0x00010c0c2540();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c193920(uVar8);
    if (0 < lVar4) {
      _objc_release(puVar14);
      _objc_release(unaff_x26);
    }
    _objc_release(lVar1);
    _objc_release(lVar5);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c264f20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c211b40(uVar8);
  _objc_release(uVar3);
  func_0x00010c18b5e0(uVar8);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beecea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(uVar8);
  _objc_release(uVar3);
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bea60e0(*(undefined8 *)(param_1 + 0x28));
  }
  func_0x00010bf0c980(*(undefined8 *)(*(long *)(param_1 + 0x28) + 8));
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar2);
  return;
}



/* Entry: 107d83854; end: 107d8395b;  */

void FUN_107d83854(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c086380();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  if ((int)uVar4 == 0) {
    cVar1 = *(char *)(param_1 + 0x30);
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e6ee0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    if (cVar1 == '\x01') {
      func_0x00010be02540();
    }
    else {
      func_0x00010be02460(lVar3);
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c0e6ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) goto LAB_107d83948;
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c0e6ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c26bc00(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,uVar4);
  }
  _objc_release(uVar4);
  _objc_release(lVar3);
LAB_107d83948:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d8395c; end: 107d83c5f; -[SCComposerFoundationSIGAlertPresenter _alertDialogWithConfig:actions:accessoryView:] */

void FUN_107d8395c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c28fa00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar6 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    lVar1 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010bf71dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010c26bc60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefe80(puVar6,param_2,param_5,lVar1,lVar7,lVar8 != 0,param_4);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(lVar8);
    _objc_release(lVar7);
  }
  else {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107d83c60;
    puStack_70 = &UNK_110a0bd28;
    _objc_retain(param_3);
    ppuVar2 = &puStack_88;
    lStack_68 = param_3;
    _objc_retainBlock();
    lVar1 = param_3;
    func_0x00010bf71dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bee64c0(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf71dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010be4c4e0(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf71dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010be743c0(param_1,param_2,lVar1,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf71dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be18d60(param_1,param_2,lVar1,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    lVar1 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010c26bc60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefea0(puVar6,param_2,param_5,lVar1,param_1,lVar7 != 0,param_4,uVar5,uVar3,ppuVar2)
    ;
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(lVar7);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(ppuVar2);
    lVar1 = lStack_68;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107d83c60; end: 107d83ce7;  */

long FUN_107d83c60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c28fa00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010beec820(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar3;
  (**(code **)(lVar3 + 0x10))(lVar3,uVar1);
  _objc_release(uVar1);
  _objc_release(lVar3);
  return lVar2;
}



/* Entry: 107d83ce8; end: 107d83d7f; -[SCComposerFoundationSIGAlertPresenter _setOnDismissBlock:forAlert:] */

void FUN_107d83ce8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  _objc_retain(param_3);
  func_0x00010c2972c0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  uVar3 = uVar2;
  _objc_retainBlock(uVar2);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,uVar3,puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107d83d80; end: 107d83e7f; -[SCComposerFoundationSIGAlertPresenter _dismissAlertWithoutBlock:action:] */

void FUN_107d83d80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf6f440(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d83e80; end: 107d83eef;  */

void FUN_107d83e80(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c26bc00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
    _objc_release(uVar1);
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddf020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d83ef0; end: 107d83fef; -[SCComposerFoundationSIGAlertPresenter _dismissAlert:action:] */

void FUN_107d83ef0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf6f440(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d83ff0; end: 107d8405f;  */

void FUN_107d83ff0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c26bc00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
    _objc_release(uVar1);
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d84060; end: 107d840f3; -[SCComposerFoundationSIGAlertPresenter _handleDismissalAndCleanUp:] */

void FUN_107d84060(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972c0(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0(lVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2);
  }
  func_0x00010bddf020(param_1,param_2,param_3);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d840f4; end: 107d8413b; -[SCComposerFoundationSIGAlertPresenter _cleanUpAlert:] */

void FUN_107d840f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972c0(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107d8413c; end: 107d8431b; -[SCComposerFoundationSIGAlertPresenter _urlStringsFromText:] */

/* WARNING: Removing unreachable block (ram,0x000107d84388) */

void FUN_107d8413c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_68;
  
  ppuVar9 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_f0 = 0;
  ppuVar8 = &PTR____CFConstantStringClassReference_110ebd218;
  puVar3 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_f0;
  _objc_retain(lStack_f0);
  if (lVar1 == 0) {
    func_0x00010c08fa60(param_3);
    puVar4 = puVar3;
    func_0x00010c0c1b40();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar5 = puVar4;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      lVar11 = *plStack_120;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(puVar4);
          }
          uVar10 = *(ulong *)(lStack_128 + (long)puVar12 * 8);
          uVar6 = uVar10;
          func_0x00010c0df1c0();
          if (1 < uVar6) {
            func_0x00010c11f2c0(uVar10);
            uVar7 = param_3;
            func_0x00010c260c80(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2);
            _objc_release(uVar7);
          }
          puVar12 = puVar12 + 1;
        } while (puVar5 != puVar12);
        puVar5 = puVar4;
        ppuVar9 = &puStack_130;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    ppuVar8 = ppuVar9;
  }
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(ppuVar8);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(ppuVar8);
    puVar2 = puVar4;
    func_0x00010c0c1b40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(ppuVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d8431c; end: 107d843f3; -[SCComposerFoundationSIGAlertPresenter _linkMatchesFromText:] */

void FUN_107d8431c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lStack_38 = 0;
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                      &PTR____CFConstantStringClassReference_110ebd238,1,&lStack_38);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_38 == 0) {
    uVar3 = param_3;
    func_0x00010c08fa60(param_3);
    puVar4 = puVar2;
    func_0x00010c0c1b40(puVar2,param_2,param_3,0,0,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    puVar4 = puVar1;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107d843f4; end: 107d84573; -[SCComposerFoundationSIGAlertPresenter _placeholdersFromText:regexMatches:] */

void FUN_107d843f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
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
  
  puVar8 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_4);
  puVar9 = auStack_d8;
  lVar2 = param_4;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar12 = *plStack_110;
    do {
      lVar13 = 0;
      do {
        if (*plStack_110 != lVar12) {
          _objc_enumerationMutation(param_4);
        }
        uVar10 = *(ulong *)(lStack_118 + lVar13 * 8);
        uVar3 = uVar10;
        func_0x00010c0df1c0();
        if (1 < uVar3) {
          func_0x00010c11f2c0(uVar10);
          uVar4 = param_3;
          func_0x00010c260c80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(uVar4);
        }
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      puVar9 = auStack_d8;
      lVar2 = param_4;
      puVar8 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar8);
    _objc_retain(puVar9);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar9);
    puVar11 = puVar9;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar11 != (undefined1 *)0x0) {
      puVar14 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar9);
        }
        func_0x00010c11f2a0(*(undefined8 *)((long)puVar14 * 8));
        puVar1 = (undefined *)puVar8;
        func_0x00010c260c80(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(puVar1);
        puVar14 = puVar14 + 1;
      } while (puVar11 != puVar14);
      puVar11 = puVar9;
      func_0x00010bf52a60();
    }
    _objc_release(puVar9);
    puVar1 = (undefined *)puVar8;
    func_0x00010c0d3c80(puVar8);
    puVar11 = puVar9;
    func_0x00010bf529e0();
    if (puVar11 != (undefined1 *)0x0) {
      puVar11 = (undefined1 *)0x0;
      do {
        puVar6 = puVar5;
        func_0x00010c0dfd40(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar11 + 1;
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60(puVar1);
        func_0x00010c130f80(puVar1);
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar14 = puVar9;
        func_0x00010bf529e0();
      } while (puVar11 < puVar14);
    }
    _objc_release(puVar5);
    _objc_release(puVar9);
    _objc_release(puVar8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be28910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d84574; end: 107d8478f; -[SCComposerFoundationSIGAlertPresenter _formattedTextFromText:regexMatches:] */

void FUN_107d84574(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  uVar7 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar7 != 0) {
    uVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      func_0x00010c11f2a0(*(undefined8 *)(uVar8 * 8));
      uVar3 = param_3;
      func_0x00010c260c80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(uVar3);
      uVar8 = uVar8 + 1;
    } while (uVar7 != uVar8);
    uVar7 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  uVar3 = param_3;
  func_0x00010c0d3c80(param_3);
  uVar7 = param_4;
  func_0x00010bf529e0();
  if (uVar7 != 0) {
    uVar7 = 0;
    do {
      puVar4 = puVar2;
      func_0x00010c0dfd40(puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar7 + 1;
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60(uVar3);
      func_0x00010c130f80(uVar3);
      _objc_release(puVar5);
      _objc_release(puVar4);
      uVar8 = param_4;
      func_0x00010bf529e0();
    } while (uVar7 < uVar8);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be28910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107d84790; end: 107d84793; -[SCComposerFoundationSIGAlertPresenter dialogDidDismiss:] */

void FUN_107d84790(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be28910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleDismissalAndCleanUp__112567be0);
  return;
}



/* Entry: 107d84794; end: 107d8479f; -[SCComposerFoundationSIGAlertPresenter pushToValdiMarshaller:] */

undefined8 FUN_107d84794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1a40;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 107d847a0; end: 107d847db; -[SCComposerFoundationSIGAlertPresenter .cxx_destruct] */

void FUN_107d847a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d847dc; end: 107d84843; -[SCComposerInAppNotificationPresenter presentNotificationWithText:] */

void FUN_107d847dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x00010bf57f80(PTR_PTR_1126afde0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be46800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d3a0(puVar1,param_2,param_1,0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107d84844; end: 107d84973; -[SCComposerInAppNotificationPresenter _keyWindow] */

void FUN_107d84844(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2a7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (puVar2 == (undefined *)0x0) {
      uVar6 = 0;
LAB_107d84934:
      _objc_release(puVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
        return;
      }
      ___stack_chk_fail();
      if (lRam0000000113727ac8 != -1) {
        func_0x00010002a2fc(0x113727ac8,&PTR___NSConcreteGlobalBlock_110a0bd58);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uRam0000000113727ad0,PTR_s_ifExposed_1125d72b0);
      return;
    }
    puVar7 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      uVar6 = *(undefined8 *)((long)puVar7 * 8);
      uVar4 = uVar6;
      func_0x00010c075e80();
      if ((int)uVar4 != 0) {
        _objc_retain(uVar6);
        goto LAB_107d84934;
      }
      puVar7 = puVar7 + 1;
    } while (puVar2 != puVar7);
    puVar2 = puVar3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107d84974; end: 107d849b3;  */

void FUN_107d84974(void)

{
  if (lRam0000000113727ac8 != -1) {
    func_0x00010002a2fc(0x113727ac8,&PTR___NSConcreteGlobalBlock_110a0bd58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam0000000113727ad0,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 107d849b4; end: 107d84a1b;  */

void FUN_107d849b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c1458;
  _objc_opt_class(PTR_PTR_1126c1458);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110a0bd98);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam0000000113727ad0;
  uRam0000000113727ad0 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d84a1c; end: 107d84a23;  */

void FUN_107d84a1c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ee230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_ourStoriesAttributionManager_1126192a0);
  return;
}


