/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e092a0; end: 107e0938b; -[SCGalleryDataMutator deleteEntries:prioritized:userContext:completionHandler:] */

void FUN_107e092a0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107e0938c;
  puStack_70 = &UNK_110855c70;
  lStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_5;
  uStack_50 = param_6;
  uStack_48 = param_4;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107e0938c; end: 107e0939f;  */

void FUN_107e0938c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf9f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__deleteEntries_prioritized_userC_11255c170,
             *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 107e093a0; end: 107e0957f; -[SCGalleryDataMutator deleteSnap:fromEntry:userContext:completionHandler:] */

void FUN_107e093a0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    if (param_4 == 0) {
      lVar1 = *(long *)(param_1 + 0xb0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      param_4 = lVar1;
      func_0x00010bfa7040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (param_4 == 0) {
        if (param_6 != 0) {
          puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_70 = 0xc2000000;
          pcStack_68 = FUN_107e09580;
          puStack_60 = &UNK_11084a9e8;
          _objc_retain(param_6);
          lStack_48 = param_6;
          _objc_retain(param_3);
          uStack_50 = 0;
          lStack_58 = param_3;
          func_0x000100162d98("APPSTORE",&puStack_78);
          _objc_release(uStack_50);
          _objc_release(lStack_58);
          _objc_release(lStack_48);
        }
        param_4 = 0;
        goto LAB_107e094d0;
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
  }
LAB_107e094d0:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e09580; end: 107e09607;  */

void FUN_107e09580(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x30);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ebfc78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000107e2d630();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,0,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107e09608; end: 107e09b0b;  */

void FUN_107e09608(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0xb0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf52d80();
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe0);
  func_0x000108ec1b8c();
  if (iVar1 == 0) {
    if (uVar3 < 2) {
LAB_107e09688:
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      uStack_60 = *(undefined8 *)(param_1 + 0x28);
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdf9f40(uVar4);
      goto LAB_107e09acc;
    }
  }
  else if (uVar3 < 2) {
    uVar3 = *(ulong *)(param_1 + 0x28);
    func_0x00010c080ca0();
    if ((uVar3 & 1) == 0) goto LAB_107e09688;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x00010c080ca0();
  puVar11 = PTR_PTR_1126af4d0;
  if (iVar1 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c241220(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  puVar5 = puVar11;
  func_0x00010c080ca0();
  if ((int)puVar5 == 0) {
    lVar12 = *(long *)(param_1 + 0x28);
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (lVar12 == 2) {
      uStack_68 = *(undefined8 *)(param_1 + 0x38);
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
      func_0x00010c249020(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
      func_0x00010bf027a0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x000107e2cd1c(puVar5,uVar4,uVar8,*(undefined8 *)(param_1 + 0x30));
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar4);
      _objc_release(uVar6);
      _objc_release(puVar5);
    }
    else {
      lVar12 = *(long *)(param_1 + 0x28);
      func_0x00010bfbdda0();
      func_0x00010b5fa33c();
      if (lVar12 == 6) {
        puVar5 = *(undefined **)(param_1 + 0x40);
        if (puVar5 == (undefined *)0x0) goto LAB_107e09acc;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0xc2000000;
        pcStack_88 = FUN_107e09b0c;
        puStack_80 = &UNK_110849530;
        _objc_retain(puVar5);
        puStack_78 = puVar5;
        func_0x000100162d98("APPSTORE",&puStack_98);
        puVar5 = puStack_78;
        goto LAB_107e09ac8;
      }
    }
    puVar5 = PTR_PTR_1126d7f38;
    _objc_alloc(PTR_PTR_1126d7f38);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf97200(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c241220(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010260(puVar5);
    _objc_release(uVar6);
    _objc_release(uVar8);
    _objc_release(uVar4);
    lVar12 = *(long *)(param_1 + 0x38);
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    if (lVar12 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = uVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
    }
    _objc_release(lVar12);
    puVar9 = PTR_PTR_1126d7f28;
    func_0x00010bf5a1e0(PTR_PTR_1126d7f28);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar7);
    uVar14 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar14);
    uVar15 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar15);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar6);
    func_0x00010bf06e40(uVar4);
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar7);
    _objc_release(puVar9);
    _objc_release(puVar13);
  }
  else {
    puVar5 = *(undefined **)(*(long *)(param_1 + 0x20) + 0xe8);
    func_0x00010c269d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c2e0();
  }
LAB_107e09ac8:
  _objc_release(puVar5);
LAB_107e09acc:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar12 = *(long *)(puVar11 + 0x20);
    ppuVar10 = &PTR____CFConstantStringClassReference_110ebfc98;
    func_0x000107e2d630(&PTR____CFConstantStringClassReference_110ebfc98);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar12 + 0x10))(lVar12,0,ppuVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar10);
    return;
  }
  return;
}



/* Entry: 107e09b0c; end: 107e09b57;  */

void FUN_107e09b0c(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  ppuVar1 = &PTR____CFConstantStringClassReference_110ebfc98;
  func_0x000107e2d630(&PTR____CFConstantStringClassReference_110ebfc98);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 107e09b58; end: 107e09d0f;  */

void FUN_107e09b58(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af4c0;
  if ((param_2 != 0) && (param_3 == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf97200(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa70a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf4eae0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf8a8c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x118);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xc0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c079c80();
    FUN_107e2c4bc(uVar8,uVar1,puVar2,0,4,uVar3,0,uVar4,uVar9,(char)uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  lVar7 = *(long *)(param_1 + 0x40);
  if (lVar7 != 0) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_107e09d10;
    puStack_80 = &UNK_1108523f8;
    _objc_retain(lVar7);
    uStack_68 = (undefined1)param_2;
    lStack_70 = lVar7;
    _objc_retain(param_3);
    lStack_78 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_98);
    _objc_release(lStack_78);
    _objc_release(lStack_70);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107e09d10; end: 107e09d23;  */

void FUN_107e09d10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e09d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e09d24; end: 107e09ebf; -[SCGalleryDataMutator deleteSnaps:fromEntry:userContext:completionQueue:completionHandler:] */

void FUN_107e09d24(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_4 == 0) || (lVar1 = param_3, func_0x00010bf529e0(), lVar1 == 0)) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107e09ec0;
    puStack_60 = &UNK_110849530;
    lStack_58 = param_7;
    _objc_retain(param_7);
    func_0x00010007380c(param_6,&puStack_78);
    lVar1 = lStack_58;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    lVar1 = param_3;
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e09ec0; end: 107e09ed3;  */

void FUN_107e09ec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e09ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 107e09ed4; end: 107e09fcf;  */

void FUN_107e09ed4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107e09fd0;
  puStack_78 = &UNK_110a0dae8;
  _objc_retain(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = uVar2;
  _objc_retain(uVar5);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar5;
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = uVar7;
  uStack_58 = uVar8;
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = uVar6;
  _objc_retain(uVar5);
  uStack_48 = uVar5;
  func_0x00010bdfa7e0(uVar1,param_2,uVar3,uVar2,uVar4,&puStack_90);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  return;
}



/* Entry: 107e09fd0; end: 107e0a247;  */

void FUN_107e09fd0(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
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
  puVar2 = PTR_PTR_1126af4c0;
  if ((param_2 != 0) && (param_3 == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf97200(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa70a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar7 = *(long *)(param_1 + 0x38);
    _objc_retain(lVar7);
    lVar3 = lVar7;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar7);
          }
          uVar11 = *(undefined8 *)(lStack_128 + lVar10 * 8);
          uVar1 = *(undefined8 *)(param_1 + 0x28);
          uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
          func_0x00010bf4eae0(uVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = *(undefined8 *)(param_1 + 0x30);
          func_0x00010bf8a8c0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x118);
          uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0xc0);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c079c80();
          FUN_107e2c4bc(uVar12,uVar11,puVar2,0,4,uVar1,0,uVar4,uVar9,(char)uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar1);
          lVar10 = lVar10 + 1;
        } while (lVar3 != lVar10);
        lVar3 = lVar7;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar7);
    _objc_release(puVar2);
  }
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_107e0a248;
  puStack_150 = &UNK_1108523f8;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar6);
  uStack_138 = (undefined1)param_2;
  lStack_148 = param_3;
  uStack_140 = uVar6;
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_168);
  _objc_release(lStack_148);
  _objc_release(uStack_140);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107e0a258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))
            (*(long *)(param_3 + 0x28),*(undefined1 *)(param_3 + 0x30),
             *(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 107e0a248; end: 107e0a25b;  */

void FUN_107e0a248(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e0a258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e0a25c; end: 107e0a407; -[SCGalleryDataMutator detachSnaps:fromEntry:userContext:completionHandler:] */

void FUN_107e0a25c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar18 = param_3;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (lVar18 != 0) {
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(param_3);
      }
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar18 = param_3;
    func_0x00010bf52a60();
  }
  uVar22 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar22);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_3 + 0x20);
  uVar16 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x38);
  func_0x00010b5f972c();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = *(long *)(param_3 + 0x20);
  _objc_retain(lVar19);
  lVar18 = lVar19;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (lVar18 != 0) {
    lVar21 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(lVar19);
      }
      uVar23 = *(undefined8 *)(lVar21 * 8);
      uVar16 = uVar23;
      func_0x00010c241220(uVar23);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar22;
      func_0x00010c0e00e0(uVar22);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x58);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x60);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar23;
      FUN_107e2cec0(uVar23,1,1,0,0,uVar5,0,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(uVar16);
      uVar16 = uVar20;
      func_0x00010c241220(uVar20);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_3 + 0x30);
      func_0x00010c07b240(uVar5);
      uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x70);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x68);
      puVar6 = PTR_PTR_1126bf788;
      _objc_alloc(PTR_PTR_1126bf788);
      func_0x00010c017ba0();
      FUN_107e2b7cc(uVar23,uVar16,uVar5,puVar2,uVar3,uVar4,1,puVar6);
      _objc_release(puVar6);
      _objc_release(uVar3);
      _objc_release(uVar16);
      uVar5 = uVar20;
      func_0x00010c241220(uVar20);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c0e00e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      uVar16 = uVar20;
      FUN_107e2bf14();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar20);
      _objc_release(puVar6);
      _objc_release(uVar5);
      puVar6 = PTR_PTR_1126bc7b8;
      func_0x00010bfa7160(PTR_PTR_1126bc7b8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126bf8f8;
      func_0x00010c2aebe0(PTR_PTR_1126bf8f8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c1d0720();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126bc7c8;
      func_0x00010bfa7220(PTR_PTR_1126bc7c8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126bf900;
      func_0x00010c2aec40(PTR_PTR_1126bf900);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010c1d0720();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126d7f18;
      _objc_alloc(PTR_PTR_1126d7f18);
      func_0x00010c00e960();
      func_0x00010befa120(puVar1);
      _objc_release(puVar9);
      _objc_release(puVar12);
      _objc_release(puVar8);
      _objc_release(puVar10);
      _objc_release(puVar6);
      _objc_release(puVar7);
      lVar21 = lVar21 + 1;
    } while (lVar18 != lVar21);
    lVar18 = lVar19;
    func_0x00010bf52a60();
  }
  _objc_release(lVar19);
  puVar6 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar1;
  func_0x00010bf529e0();
  if (puVar6 < (undefined *)0x2) {
    puVar6 = puVar7;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf529e0();
  puVar8 = PTR_PTR_1126bf8c8;
  func_0x00010c2aeac0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf59960(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185360(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  func_0x00010c1968c0(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c07b240(*(undefined8 *)(param_3 + 0x30));
  func_0x00010c1b3960(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c07b240(*(undefined8 *)(param_3 + 0x30));
  func_0x00010c210ec0(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0ed100(puVar7);
  func_0x00010c222da0(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c196b00(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a1e00(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192cc0(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = puVar8;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar9);
  _objc_retain(puVar2);
  _objc_retain(uVar5);
  uVar20 = *(undefined8 *)(param_3 + 0x38);
  _objc_retain(uVar20);
  uVar23 = *(undefined8 *)(param_3 + 0x30);
  _objc_retain(*(undefined8 *)(param_3 + 0x30));
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar3);
  func_0x00010bf97e80(puVar1);
  lVar13 = *(long *)(*(long *)(param_3 + 0x28) + 0xb0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar13;
  func_0x00010bf52d80();
  lVar19 = *(long *)(param_3 + 0x20);
  func_0x00010bf529e0();
  _objc_release(lVar13);
  uVar4 = *(undefined8 *)(param_3 + 0x28);
  if (lVar18 == lVar19) {
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf9f40(uVar4);
    _objc_release(puVar10);
  }
  else {
    func_0x00010bdfa7e0(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar23);
  _objc_release(uVar20);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release(uVar5);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(uVar22);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar22 = uVar16;
  _objc_retain(uVar16);
  iVar15 = (int)uVar22;
  puVar2 = PTR_PTR_1126d7f30;
  _objc_alloc();
  uVar22 = *(undefined8 *)(puVar1 + 0x28);
  uVar5 = uVar16;
  func_0x00010c23f220(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar5;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010480();
  _objc_release(uVar22);
  _objc_release(uVar20);
  _objc_release(uVar5);
  uVar22 = *(undefined8 *)(puVar1 + 0x48);
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar22);
  uVar22 = uVar16;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar22;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar22);
  puVar8 = PTR_PTR_1126d7f28;
  func_0x00010bf5a1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(*(long *)(puVar1 + 0x40) + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(puVar1 + 0x40) + 8);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(puVar1 + 0x48);
  _objc_retain(*(undefined8 *)(puVar1 + 0x48));
  uVar4 = *(undefined8 *)(puVar1 + 0x50);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(puVar1 + 0x20);
  _objc_retain(uVar3);
  uVar20 = *(undefined8 *)(puVar1 + 0x38);
  _objc_retain(uVar20);
  _objc_retain(uVar16);
  puVar1 = puVar2;
  func_0x00010bf06e40(uVar22);
  _objc_release(uVar5);
  _objc_release(uVar22);
  _objc_release(uVar20);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar23);
  _objc_release(uVar16);
  _objc_release(uVar16);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126af4d0;
  if ((iVar15 != 0) && (puVar1 == (undefined *)0x0)) {
    uVar16 = *(undefined8 *)(puVar2 + 0x20);
    func_0x00010c23f220(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar16;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar22);
    _objc_release(uVar16);
    if (puVar6 != (undefined *)0x0) {
      uVar14 = *(ulong *)(puVar2 + 0x30);
      func_0x00010c07b240();
      if ((uVar14 & 1) == 0) {
        uVar22 = *(undefined8 *)(*(long *)(puVar2 + 0x28) + 0xa0);
        func_0x00010c269d40(uVar22);
        _objc_retainAutoreleasedReturnValue();
        uVar16 = *(undefined8 *)(puVar2 + 0x38);
        func_0x00010c0dfd40(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfecaa0(uVar22);
        _objc_release(uVar16);
        _objc_release(uVar22);
      }
      uVar4 = *(undefined8 *)(*(long *)(puVar2 + 0x28) + 0x50);
      uVar22 = *(undefined8 *)(puVar2 + 0x40);
      uVar16 = *(undefined8 *)(puVar2 + 0x48);
      func_0x00010bf4eae0(uVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)(puVar2 + 0x28);
      func_0x00010bf8a8c0(uVar20);
      _objc_retainAutoreleasedReturnValue();
      uVar23 = *(undefined8 *)(*(long *)(puVar2 + 0x28) + 0x118);
      uVar3 = *(undefined8 *)(*(long *)(puVar2 + 0x28) + 0xc0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c079c80();
      FUN_107e2c4bc(uVar4,puVar6,uVar22,0,3,uVar16,0,uVar20,uVar23,(char)uVar5);
      _objc_release(uVar3);
      _objc_release(uVar20);
      _objc_release(uVar16);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 107e0a408; end: 107e0aecf;  */

void FUN_107e0a408(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  int iVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
  func_0x00010b5f972c();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar20);
  lVar19 = lVar20;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (lVar19 != 0) {
    lVar22 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(lVar20);
      }
      uVar23 = *(undefined8 *)(lVar22 * 8);
      uVar17 = uVar23;
      func_0x00010c241220(uVar23);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar14;
      func_0x00010c0e00e0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x58);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar23;
      FUN_107e2cec0(uVar23,1,1,0,0,uVar5,0,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(uVar17);
      uVar17 = uVar21;
      func_0x00010c241220(uVar21);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c07b240(uVar5);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x70);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x68);
      puVar6 = PTR_PTR_1126bf788;
      _objc_alloc(PTR_PTR_1126bf788);
      func_0x00010c017ba0();
      FUN_107e2b7cc(uVar23,uVar17,uVar5,puVar2,uVar3,uVar4,1,puVar6);
      _objc_release(puVar6);
      _objc_release(uVar3);
      _objc_release(uVar17);
      uVar5 = uVar21;
      func_0x00010c241220(uVar21);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c0e00e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      uVar17 = uVar21;
      FUN_107e2bf14();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar21);
      _objc_release(puVar6);
      _objc_release(uVar5);
      puVar6 = PTR_PTR_1126bc7b8;
      func_0x00010bfa7160(PTR_PTR_1126bc7b8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126bf8f8;
      func_0x00010c2aebe0(PTR_PTR_1126bf8f8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c1d0720();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126bc7c8;
      func_0x00010bfa7220(PTR_PTR_1126bc7c8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126bf900;
      func_0x00010c2aec40(PTR_PTR_1126bf900);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010c1d0720();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126d7f18;
      _objc_alloc(PTR_PTR_1126d7f18);
      func_0x00010c00e960();
      func_0x00010befa120(puVar1);
      _objc_release(puVar9);
      _objc_release(puVar12);
      _objc_release(puVar8);
      _objc_release(puVar10);
      _objc_release(puVar6);
      _objc_release(puVar7);
      lVar22 = lVar22 + 1;
    } while (lVar19 != lVar22);
    lVar19 = lVar20;
    func_0x00010bf52a60();
  }
  _objc_release(lVar20);
  puVar6 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar1;
  func_0x00010bf529e0();
  if (puVar6 < (undefined *)0x2) {
    puVar6 = puVar7;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf529e0();
  puVar8 = PTR_PTR_1126bf8c8;
  func_0x00010c2aeac0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf59960(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185360(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  func_0x00010c1968c0(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c07b240(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c1b3960(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c07b240(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c210ec0(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0ed100(puVar7);
  func_0x00010c222da0(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c196b00(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a1e00(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192cc0(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = puVar8;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar9);
  _objc_retain(puVar2);
  _objc_retain(uVar5);
  uVar21 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar21);
  uVar23 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010bf97e80(puVar1);
  lVar13 = *(long *)(*(long *)(param_1 + 0x28) + 0xb0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar13;
  func_0x00010bf52d80();
  lVar20 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  _objc_release(lVar13);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (lVar19 == lVar20) {
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf9f40(uVar4);
    _objc_release(puVar10);
  }
  else {
    func_0x00010bdfa7e0(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar23);
  _objc_release(uVar21);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release(uVar5);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(uVar14);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = uVar17;
  _objc_retain(uVar17);
  iVar16 = (int)uVar14;
  puVar2 = PTR_PTR_1126d7f30;
  _objc_alloc();
  uVar14 = *(undefined8 *)(puVar1 + 0x28);
  uVar5 = uVar17;
  func_0x00010c23f220(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar5;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010480();
  _objc_release(uVar14);
  _objc_release(uVar21);
  _objc_release(uVar5);
  uVar14 = *(undefined8 *)(puVar1 + 0x48);
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  uVar14 = uVar17;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar14;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar14);
  puVar8 = PTR_PTR_1126d7f28;
  func_0x00010bf5a1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(*(long *)(puVar1 + 0x40) + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(puVar1 + 0x40) + 8);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(puVar1 + 0x48);
  _objc_retain(*(undefined8 *)(puVar1 + 0x48));
  uVar4 = *(undefined8 *)(puVar1 + 0x50);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(puVar1 + 0x20);
  _objc_retain(uVar3);
  uVar21 = *(undefined8 *)(puVar1 + 0x38);
  _objc_retain(uVar21);
  _objc_retain(uVar17);
  puVar1 = puVar2;
  func_0x00010bf06e40(uVar14);
  _objc_release(uVar5);
  _objc_release(uVar14);
  _objc_release(uVar21);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar23);
  _objc_release(uVar17);
  _objc_release(uVar17);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126af4d0;
  if ((iVar16 != 0) && (puVar1 == (undefined *)0x0)) {
    uVar17 = *(undefined8 *)(puVar2 + 0x20);
    func_0x00010c23f220(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar17;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    _objc_release(uVar17);
    if (puVar6 != (undefined *)0x0) {
      uVar15 = *(ulong *)(puVar2 + 0x30);
      func_0x00010c07b240();
      if ((uVar15 & 1) == 0) {
        uVar14 = *(undefined8 *)(*(long *)(puVar2 + 0x28) + 0xa0);
        func_0x00010c269d40(uVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(puVar2 + 0x38);
        func_0x00010c0dfd40(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfecaa0(uVar14);
        _objc_release(uVar17);
        _objc_release(uVar14);
      }
      uVar4 = *(undefined8 *)(*(long *)(puVar2 + 0x28) + 0x50);
      uVar14 = *(undefined8 *)(puVar2 + 0x40);
      uVar17 = *(undefined8 *)(puVar2 + 0x48);
      func_0x00010bf4eae0(uVar17);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(puVar2 + 0x28);
      func_0x00010bf8a8c0(uVar21);
      _objc_retainAutoreleasedReturnValue();
      uVar23 = *(undefined8 *)(*(long *)(puVar2 + 0x28) + 0x118);
      uVar3 = *(undefined8 *)(*(long *)(puVar2 + 0x28) + 0xc0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c079c80();
      FUN_107e2c4bc(uVar4,puVar6,uVar14,0,3,uVar17,0,uVar21,uVar23,(char)uVar5);
      _objc_release(uVar3);
      _objc_release(uVar21);
      _objc_release(uVar17);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 107e0aed0; end: 107e0b06f;  */

void FUN_107e0aed0(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = PTR_PTR_1126af4d0;
  if ((param_2 != 0) && (param_3 == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c23f220(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar1);
    if (puVar2 != (undefined *)0x0) {
      uVar3 = *(ulong *)(param_1 + 0x30);
      func_0x00010c07b240();
      if ((uVar3 & 1) == 0) {
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa0);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c0dfd40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfecaa0(uVar4);
        _objc_release(uVar1);
        _objc_release(uVar4);
      }
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
      uVar4 = *(undefined8 *)(param_1 + 0x40);
      uVar1 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010bf4eae0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf8a8c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x118);
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xc0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c079c80();
      FUN_107e2c4bc(uVar8,puVar2,uVar4,0,3,uVar1,0,uVar5,uVar9,(char)uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 107e0b070; end: 107e0b3e3; -[SCGalleryDataMutator _deleteSnaps:fromEntry:userContext:completionHandler:] */

void FUN_107e0b070(long param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b80();
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c150100();
    _objc_release(uVar7);
    param_2 = 1;
    (**(code **)(param_6 + 0x10))(param_6,1,0);
  }
  else {
    lVar1 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d7f38;
    _objc_alloc();
    uVar7 = param_4;
    func_0x00010bf97200(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c241220(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010260();
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(uVar7);
    lVar3 = lVar1;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      lVar5 = lVar1;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
    }
    _objc_release(lVar3);
    puVar6 = PTR_PTR_1126d7f28;
    func_0x00010bf5a1e0(PTR_PTR_1126d7f28);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(lVar1);
    func_0x00010bf06e60(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(lVar1);
    _objc_release(param_3);
    _objc_release(lVar1);
    _objc_release(puVar6);
    _objc_release(puVar10);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c0d3c80(uVar4);
    func_0x00010c12d360();
    uVar9 = *(undefined8 *)(param_3 + 0x30);
    uVar7 = uVar4;
    func_0x00010bf51e00(uVar4);
    func_0x00010bdfa7e0(uVar9);
    _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000107e0b464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x48) + 0x10))();
  return;
}



/* Entry: 107e0b3e4; end: 107e0b467;  */

void FUN_107e0b3e4(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d3c80(uVar1);
    func_0x00010c12d360();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = uVar1;
    func_0x00010bf51e00(uVar1);
    func_0x00010bdfa7e0(uVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000107e0b464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
  return;
}



/* Entry: 107e0b468; end: 107e0bd43; -[SCGalleryDataMutator _deleteEntries:prioritized:userContext:completionHandler:] */

void FUN_107e0b468(long param_1,undefined8 param_2,undefined **param_3,undefined1 param_4,
                  undefined8 param_5,undefined *param_6)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puStack_300;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined1 auStack_238 [8];
  undefined1 uStack_230;
  undefined1 auStack_228 [8];
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuVar2 = param_3;
  func_0x00010bf529e0();
  if (ppuVar2 == (undefined **)0x1) {
    ppuVar2 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c080ca0();
    _objc_release(ppuVar2);
    if ((int)ppuVar3 == 0) goto LAB_107e0b5f8;
    ppuVar2 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_2a8 = PTR_PTR_1126af4c0;
    ppuVar3 = ppuVar2;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa70a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(ppuVar3);
    puVar4 = puStack_2a8;
    func_0x00010c080ca0();
    if ((int)puVar4 == 0) {
      _objc_release(puStack_2a8);
      goto LAB_107e0b5f8;
    }
    uVar5 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c2c0();
    _objc_release(uVar5);
    if (param_6 == (undefined *)0x0) goto LAB_107e0bcbc;
    puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_107e0bd44;
    puStack_188 = &UNK_110849530;
    _objc_retain(param_6);
    puStack_180 = param_6;
    func_0x000100162d98("APPSTORE",&puStack_1a0);
    puStack_300 = puStack_180;
  }
  else {
LAB_107e0b5f8:
    puStack_2a8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puStack_300 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puStack_300);
    puVar4 = PTR_PTR_1126af4c0;
    func_0x00010bfa6ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    _objc_retain(puVar4);
    puStack_2a0 = puVar4;
    func_0x00010bf52a60();
    if (puStack_2a0 != (undefined *)0x0) {
      lVar17 = *plStack_1d0;
      do {
        puVar20 = (undefined *)0x0;
        do {
          if (*plStack_1d0 != lVar17) {
            _objc_enumerationMutation(puVar4);
          }
          uVar21 = *(undefined8 *)(lStack_1d8 + (long)puVar20 * 8);
          uVar5 = uVar21;
          func_0x00010bf97200(uVar21);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar12);
          _objc_release(uVar5);
          puVar13 = PTR_PTR_1126af4d0;
          func_0x00010bfa7380();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar21;
          func_0x00010bfbdda0();
          iVar1 = (int)uVar5;
          if (iVar1 == 4) {
            puVar14 = puVar13;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar14;
            func_0x00010b5fa088();
            _objc_release(puVar14);
            if ((undefined *)0xa < puVar18 + -2) goto LAB_107e0b848;
LAB_107e0b83c:
            func_0x00010befa160(puVar6);
          }
          else {
            if (iVar1 == 2) goto LAB_107e0b83c;
            if (iVar1 == 0) {
              puVar14 = puVar13;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              puVar18 = puVar14;
              func_0x00010b5fa088();
              _objc_release(puVar14);
              if (puVar18 + -2 < (undefined *)0xb) goto LAB_107e0b83c;
            }
          }
LAB_107e0b848:
          puVar14 = puVar13;
          func_0x00010c0b8600(puVar13);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar21;
          func_0x00010bf97200(uVar21);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar10);
          _objc_release(uVar5);
          _objc_release(puVar14);
          func_0x00010bf97200(uVar21);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar11);
          _objc_release(uVar21);
          func_0x00010befa160(puStack_2a8);
          uStack_1f8 = 0;
          uStack_200 = 0;
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_208 = 0;
          plStack_210 = (long *)0x0;
          lStack_218 = 0;
          uStack_220 = 0;
          _objc_retain(puVar13);
          puVar14 = puVar13;
          func_0x00010bf52a60();
          if (puVar14 != (undefined *)0x0) {
            lVar19 = *plStack_210;
            do {
              puVar18 = (undefined *)0x0;
              do {
                if (*plStack_210 != lVar19) {
                  _objc_enumerationMutation(puVar13);
                }
                uVar5 = *(undefined8 *)(lStack_218 + (long)puVar18 * 8);
                func_0x00010c241220(uVar5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar9);
                _objc_release(uVar5);
                puVar18 = puVar18 + 1;
              } while (puVar14 != puVar18);
              puVar14 = puVar13;
              func_0x00010bf52a60();
            } while (puVar14 != (undefined *)0x0);
          }
          _objc_release(puVar13);
          uVar21 = *(undefined8 *)(param_1 + 0xb0);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar21;
          func_0x00010c0742e0();
          _objc_release(uVar21);
          if ((int)uVar5 != 0) {
            func_0x00010befa120(puVar7);
            func_0x00010befa160(puVar8);
          }
          _objc_release(puVar13);
          puVar20 = puVar20 + 1;
        } while (puVar20 != puStack_2a0);
        puStack_2a0 = puVar4;
        func_0x00010bf52a60();
      } while (puStack_2a0 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    uVar15 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c249020(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf027a0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107e2cd1c(puVar6,uVar5,uVar21,param_5);
    _objc_release(uVar21);
    _objc_release(uVar16);
    _objc_release(uVar5);
    _objc_release(uVar15);
    puVar20 = puVar7;
    func_0x00010bf529e0();
    if (puVar20 != (undefined *)0x0) {
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c269d40(uVar21);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(param_1 + 0x38);
      uVar15 = *(undefined8 *)(param_1 + 8);
      func_0x00010c11de00(uVar15);
      _objc_retainAutoreleasedReturnValue();
      FUN_107e2d22c(puVar7,puVar8,uVar5,uVar21,uVar16,uVar15,0,0);
      _objc_release(uVar15);
      _objc_release(uVar21);
      _objc_release(uVar5);
    }
    _objc_initWeak(auStack_228,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0xd8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_290 = 0xc2000000;
    pcStack_288 = FUN_107e0bd70;
    puStack_280 = &UNK_110a0dbd8;
    ppuVar2 = &puStack_298;
    _objc_copyWeak(auStack_238,auStack_228);
    _objc_retain(puStack_300);
    puStack_278 = puStack_300;
    _objc_retain(puVar10);
    puStack_270 = puVar10;
    _objc_retain(puVar11);
    puStack_268 = puVar11;
    _objc_retain(puVar9);
    puStack_260 = puVar9;
    _objc_retain(puVar12);
    puStack_258 = puVar12;
    uStack_230 = param_4;
    _objc_retain(param_5);
    uStack_250 = param_5;
    _objc_retain(param_6);
    puStack_240 = param_6;
    _objc_retain(puStack_2a8);
    puStack_248 = puStack_2a8;
    func_0x00010bf0c2e0(uVar5);
    _objc_release(uVar5);
    _objc_release(puStack_248);
    _objc_release(puStack_240);
    _objc_release(uStack_250);
    _objc_release(puStack_258);
    _objc_release(puStack_260);
    _objc_release(puStack_268);
    _objc_release(puStack_270);
    _objc_release(puStack_278);
    _objc_destroyWeak(auStack_238);
    _objc_destroyWeak(auStack_228);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(ppuVar3);
  }
  _objc_release(puStack_300);
LAB_107e0bcbc:
  _objc_release(puStack_2a8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    _objc_destroyWeak(ppuVar2 + 0xc);
    _objc_destroyWeak(auStack_228);
    __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x000107e0bd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3[4] + 0x10))(param_3[4],1,0);
    return;
  }
  return;
}



/* Entry: 107e0bd44; end: 107e0bd6f;  */

void FUN_107e0bd44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e0bd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,0);
  return;
}



/* Entry: 107e0bd70; end: 107e0bdf7;  */

void FUN_107e0bd70(long param_1,int param_2)

{
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      func_0x00010be85680(param_1);
    }
    else {
      func_0x00010be85740(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e0bdf8; end: 107e0c4f7; -[SCGalleryDataMutator _queueIndividualDeleteOperationsForGalleryEntryIds:entryIdsToSnapIdsMap:entryIdsToSnapsMap:snapIdToEntryMap:entryIdToEntryMap:prioritized:userContext:completionHandler:] */

void FUN_107e0bdf8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uStack_148 = 0;
  uStack_138 = 0x3032000000;
  pcStack_130 = FUN_107e0c4f8;
  uStack_128 = 0x107e0c508;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_140 = &uStack_148;
  _objc_opt_new();
  uStack_178 = 0;
  uStack_168 = 0x3032000000;
  pcStack_160 = FUN_107e0c4f8;
  uStack_158 = 0x107e0c508;
  uStack_150 = 0;
  uVar16 = *(undefined8 *)(param_1 + 0x50);
  puStack_170 = &uStack_178;
  puStack_120 = puVar2;
  _objc_retain(uVar16);
  uVar17 = *(undefined8 *)(param_1 + 0x118);
  _objc_retain(uVar17);
  uVar18 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(uVar18);
  uVar19 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar19);
  puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e8 = 0xc2000000;
  pcStack_1e0 = FUN_107e0c510;
  puStack_1d8 = &UNK_11098e9e8;
  puStack_188 = &uStack_148;
  _objc_retain(param_5);
  uStack_1d0 = param_5;
  uStack_1c8 = uVar16;
  _objc_retain(param_6);
  uStack_1c0 = param_6;
  _objc_retain(param_9);
  uStack_1b8 = param_9;
  lStack_1b0 = param_1;
  uStack_1a8 = uVar17;
  uStack_1a0 = uVar18;
  uStack_198 = uVar19;
  _objc_retain(param_10);
  uStack_190 = param_10;
  ppuVar3 = &puStack_1f0;
  puStack_180 = &uStack_178;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126bcb88;
  _objc_alloc();
  func_0x00010bf529e0(param_3);
  func_0x00010c030440();
  _objc_retain(param_3);
  lVar14 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar14 != 0) {
    lVar20 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar15 = *(undefined8 *)(lVar20 * 8);
      lVar4 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf529e0();
      puVar6 = PTR____NSDictionary0__struct_11034ab58;
      if (lVar5 != 0) {
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        uStack_110 = uVar15;
        lStack_108 = lVar4;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar7 = PTR_PTR_1126d7f40;
      _objc_alloc(PTR_PTR_1126d7f40);
      uVar8 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_118 = uVar15;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03ab80(puVar7);
      _objc_release(puVar9);
      _objc_release(uVar8);
      puVar9 = PTR_PTR_1126d7f28;
      _objc_opt_new(PTR_PTR_1126d7f28);
      puVar10 = PTR_PTR_1126b25e8;
      _objc_opt_new(PTR_PTR_1126b25e8);
      func_0x00010c18b800(puVar9);
      _objc_release(puVar10);
      lVar5 = param_7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar5;
      func_0x00010bf9e140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      lVar5 = lVar11;
      func_0x00010c08fa60();
      if (lVar5 != 0) {
        puVar10 = PTR_PTR_1126b1df0;
        _objc_opt_new(PTR_PTR_1126b1df0);
        func_0x00010c220160();
        func_0x00010c199560(puVar9);
        _objc_release(puVar10);
      }
      lVar5 = param_7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar5;
      func_0x00010c0c7500();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      if (lVar12 != 0) {
        puVar10 = PTR_PTR_1126d7f48;
        _objc_opt_new(PTR_PTR_1126d7f48);
        lVar5 = lVar12;
        func_0x00010c294d60(lVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21fc80(puVar10);
        _objc_release(lVar5);
        lVar5 = lVar12;
        func_0x00010bf5ab20(lVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b4ca0();
        func_0x00010c185700(puVar10);
        _objc_release(lVar5);
        lVar5 = lVar12;
        func_0x00010bf97860(lVar12);
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar5;
        func_0x00010c067ec0();
        func_0x000107f654f4(puVar10,lVar13);
        _objc_release(lVar5);
        func_0x00010c1c5800(puVar9);
        _objc_release(puVar10);
      }
      uVar15 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 8);
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar2);
      func_0x00010bf06e60(uVar15);
      _objc_release(uVar8);
      _objc_release(uVar15);
      _objc_release(puVar2);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(lVar4);
      lVar20 = lVar20 + 1;
    } while (lVar14 != lVar20);
    lVar14 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(ppuVar3);
  _objc_release(uStack_190);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1d0);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  __Block_object_dispose(&uStack_178,8);
  _objc_release(uStack_150);
  __Block_object_dispose(&uStack_148,8);
  _objc_release(puStack_120);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_178,8);
  lVar14 = 8;
  __Block_object_dispose(&uStack_148);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar14 + 0x28);
  *(undefined8 *)(lVar14 + 0x28) = 0;
  return;
}



/* Entry: 107e0c4f8; end: 107e0c50f;  */

void FUN_107e0c4f8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107e0c510; end: 107e0c833;  */

void FUN_107e0c510(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lStack_248;
  long lStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x28);
  _objc_retain(lVar12);
  lStack_248 = lVar12;
  func_0x00010bf52a60();
  if (lStack_248 != 0) {
    lVar10 = *plStack_1a0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_1a0 != lVar10) {
          _objc_enumerationMutation(lVar12);
        }
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lVar2 = *(long *)(param_1 + 0x20);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lStack_228 = lVar2;
        func_0x00010bf52a60();
        if (lStack_228 != 0) {
          lVar11 = *plStack_1e0;
          do {
            lVar14 = 0;
            do {
              if (*plStack_1e0 != lVar11) {
                _objc_enumerationMutation(lVar2);
              }
              uVar15 = *(undefined8 *)(lStack_1e8 + lVar14 * 8);
              uVar9 = *(undefined8 *)(param_1 + 0x28);
              uVar4 = *(undefined8 *)(param_1 + 0x30);
              uVar3 = uVar15;
              func_0x00010c241220(uVar15);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0e00e0(uVar4);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = *(undefined8 *)(param_1 + 0x38);
              func_0x00010bf4eae0(uVar5);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = *(undefined8 *)(param_1 + 0x40);
              func_0x00010bf8a8c0(uVar6);
              _objc_retainAutoreleasedReturnValue();
              uVar1 = *(undefined8 *)(param_1 + 0x48);
              uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0xc0);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar7;
              func_0x00010c079c80();
              FUN_107e2c4bc(uVar9,uVar15,uVar4,0,2,uVar5,0,uVar6,uVar1,(char)uVar8);
              _objc_release(uVar7);
              _objc_release(uVar6);
              _objc_release(uVar5);
              _objc_release(uVar4);
              _objc_release(uVar3);
              lVar14 = lVar14 + 1;
            } while (lStack_228 != lVar14);
            lStack_228 = lVar2;
            func_0x00010bf52a60();
          } while (lStack_228 != 0);
        }
        _objc_release(lVar2);
        lVar13 = lVar13 + 1;
      } while (lVar13 != lStack_248);
      lStack_248 = lVar12;
      func_0x00010bf52a60();
    } while (lStack_248 != 0);
  }
  _objc_release(lVar12);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b80();
  _objc_release(uVar9);
  lVar12 = *(long *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c150100();
  _objc_release();
  lVar10 = *(long *)(param_1 + 0x60);
  if (lVar10 != 0) {
    puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_218 = 0xc2000000;
    pcStack_210 = FUN_107e0c834;
    puStack_208 = &UNK_1108647e8;
    _objc_retain(lVar10);
    uStack_1f8 = *(undefined8 *)(param_1 + 0x70);
    lStack_200 = lVar10;
    func_0x000100162d98("APPSTORE",&puStack_220);
    lVar12 = lStack_200;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107e0c850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar12 + 0x20) + 0x10))
            (*(long *)(lVar12 + 0x20),*(long *)(*(long *)(*(long *)(lVar12 + 0x28) + 8) + 0x28) == 0
            );
  return;
}



/* Entry: 107e0c834; end: 107e0c853;  */

void FUN_107e0c834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e0c850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),
             *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) == 0);
  return;
}



/* Entry: 107e0c854; end: 107e0c8d3;  */

void FUN_107e0c854(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    if (param_3 != 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)(lVar2 + 0x28);
      *(long *)(lVar2 + 0x28) = param_3;
      _objc_release(uVar1);
    }
  }
  else {
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  }
  func_0x00010c0e7120(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e0c8d4; end: 107e0cde7; -[SCGalleryDataMutator _queueBatchDeleteOperationForGalleryEntryIds:entryIdToSnapIdsMap:snapIdToEntryMap:deletedSnaps:prioritized:userContext:completionHandler:] */

void FUN_107e0c8d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126d7f40;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010bf51e00(param_4);
  _objc_release(param_4);
  func_0x00010c03ab80(puVar1,param_2,uVar2,param_3,uVar6,param_7,0,param_8);
  _objc_release(param_3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126d7f28;
  _objc_opt_new(PTR_PTR_1126d7f28);
  puVar4 = PTR_PTR_1126b25e8;
  _objc_opt_new(PTR_PTR_1126b25e8);
  func_0x00010c18b800(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  uVar9 = *(undefined8 *)(param_1 + 0x118);
  _objc_retain(uVar9);
  _objc_retain(uVar8);
  lVar5 = param_1;
  func_0x00010bf8a8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xc0);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar7);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x107e0cb88;
  puStack_a8 = &UNK_110a0dc38;
  uStack_68 = param_9;
  uStack_a0 = param_6;
  uStack_98 = uVar8;
  uStack_90 = param_5;
  uStack_88 = param_8;
  lStack_80 = lVar5;
  uStack_78 = uVar9;
  uStack_70 = uVar7;
  _objc_retain();
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bf06e40(uVar6,param_2,puVar1,0,4,0,puVar3,0,uVar2,&puStack_c0);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uStack_68);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_a0);
  _objc_release(uVar7);
  _objc_release(lVar5);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 107e0cde8; end: 107e0cdfb;  */

void FUN_107e0cde8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e0cdf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e0cdfc; end: 107e0ce4b; -[SCGalleryDataMutator replaceVideoSnap:videoProvider:metadataItems:videoTimeRanges:shouldForceReencode:originalSnapCloudFile:entry:overlayFormat:overlay:snapAssets:assetMedias:isInfiniteDuration:userContext:loggingParams:completionHandler:] */

void FUN_107e0cdfc(void)

{
  func_0x00010be8eda0();
  return;
}



/* Entry: 107e0ce4c; end: 107e0ceb3; -[SCGalleryDataMutator replaceVideoSnap:newVideoBaseMediaData:originalSnapCloudFile:entry:overlayFormat:overlay:snapAssets:assetMedias:isInfiniteDuration:userContext:origin:newThumbnailDownloadURL:newOverlayDownloadURL:loggingParams:completionHandler:] */

void FUN_107e0ce4c(void)

{
  func_0x00010be8ed80();
  return;
}



/* Entry: 107e0ceb4; end: 107e0cf0b; -[SCGalleryDataMutator replaceVideoSnap:originalSnapCloudFile:entry:overlayFormat:overlay:snapAssets:assetMedias:isInfiniteDuration:userContext:loggingParams:completionHandler:] */

void FUN_107e0ceb4(void)

{
  func_0x00010be8eda0();
  return;
}



/* Entry: 107e0cf0c; end: 107e0cf67; -[SCGalleryDataMutator replaceVideoSnap:rawMediaAssetCloudFile:originalSnapCloudFile:entry:overlayFormat:overlay:snapAssets:assetMedias:isInfiniteDuration:userContext:loggingParams:completionHandler:] */

void FUN_107e0cf0c(void)

{
  func_0x00010be8eda0();
  return;
}



/* Entry: 107e0cf68; end: 107e0cfaf; -[SCGalleryDataMutator replacePhotoSnap:photo:originalSnapCloudFile:entry:duration:isInfiniteDuration:overlayFormat:overlay:snapAssets:assetMedias:userContext:loggingParams:completionHandler:] */

void FUN_107e0cf68(void)

{
  func_0x00010be8ec20();
  return;
}



/* Entry: 107e0cfb0; end: 107e0cffb; -[SCGalleryDataMutator replacePhotoSnap:rawMediaAssetCloudFile:originalSnapCloudFile:entry:duration:isInfiniteDuration:overlayFormat:overlay:snapAssets:assetMedias:userContext:loggingParams:completionHandler:] */

void FUN_107e0cfb0(void)

{
  func_0x00010be8ec20();
  return;
}



/* Entry: 107e0cffc; end: 107e0d047; -[SCGalleryDataMutator replacePhotoSnap:originalSnapCloudFile:entry:duration:isInfiniteDuration:overlayFormat:overlay:snapAssets:assetMedias:userContext:loggingParams:completionHandler:] */

void FUN_107e0cffc(void)

{
  func_0x00010be8ec20();
  return;
}



/* Entry: 107e0d048; end: 107e0d1e3; -[SCGalleryDataMutator createSnapFrom:cloudFile:overlayFormat:overlay:isInfiniteDuration:isPrivate:createTimeUtc:userContext:completionHandler:] */

void FUN_107e0d048(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_107e0d1e4;
  puStack_b0 = &UNK_110a0dc98;
  uStack_a8 = param_10;
  uStack_78 = param_9;
  uStack_70 = param_11;
  uStack_a0 = param_3;
  uStack_98 = param_6;
  uStack_90 = param_5;
  lStack_88 = param_1;
  uStack_80 = param_4;
  uStack_68 = param_7;
  uStack_67 = param_8;
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_10);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_c8);
  _objc_release(uStack_78);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(param_9);
  _objc_release(param_11);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_10);
  return;
}



/* Entry: 107e0d1e4; end: 107e0df07;  */

void FUN_107e0d1e4(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  undefined **in_stack_fffffffffffffc20;
  undefined8 uStack_388;
  undefined *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined *puStack_2c8;
  long lStack_2c0;
  undefined *puStack_2b8;
  long lStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [24];
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c14bf80();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bf910;
  func_0x00010c2aebc0(PTR_PTR_1126bf910);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126bf6e8;
  func_0x00010c273760(PTR_PTR_1126bf6e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216ee0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  func_0x00010c204680(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a65c0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1d0720(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c192ce0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1ac2c0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dca80(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  func_0x00010c1f5ce0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar5 = *(ulong *)(param_1 + 0x28);
  func_0x00010b5fa088();
  if ((uVar5 < 0xd) && ((1L << (uVar5 & 0x3f) & 0x1566U) != 0)) {
    uStack_1b8 = 0;
    uStack_1a8 = 0x3032000000;
    pcStack_1a0 = FUN_107e0df08;
    uStack_198 = 0x107e0df18;
    uStack_190 = 0;
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x78);
    puStack_1b0 = &uStack_1b8;
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1d8 = 0xc2000000;
    pcStack_1d0 = FUN_107e0df20;
    puStack_1c8 = &UNK_1108bccc0;
    in_stack_fffffffffffffc20 = &puStack_1e0;
    puStack_1c0 = &uStack_1b8;
    func_0x00010c1346c0();
    _objc_release(uVar6);
    if (lVar3 != 0) {
      func_0x00010c08fa60(lVar3);
    }
    if (puStack_1b0[5] == 0) {
      func_0x00010bf8b160(*(undefined8 *)(param_1 + 0x28));
    }
    else {
      func_0x00010bf8b160(auStack_1f8);
      _CMTimeGetSeconds(auStack_1f8);
      FUN_107e2c3e0(*(undefined8 *)(param_1 + 0x30));
    }
    func_0x00010c192d40(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    __Block_object_dispose(&uStack_1b8,8);
    _objc_release(uStack_190);
  }
  puVar9 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  lVar7 = *(long *)(param_1 + 0x30);
  func_0x000109023474();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar27 = *plStack_230;
    do {
      lVar24 = 0;
      puVar12 = puVar9;
      do {
        if (*plStack_230 != lVar27) {
          _objc_enumerationMutation(lVar7);
        }
        puVar9 = *(undefined **)(lStack_238 + lVar24 * 8);
        func_0x00010c067fc0(puVar9);
        FUN_107e2e020();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        lVar24 = lVar24 + 1;
        puVar12 = puVar9;
      } while (lVar8 != lVar24);
      lVar8 = lVar7;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(lVar7);
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  lVar7 = *(long *)(param_1 + 0x30);
  func_0x000109023564();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar27 = *plStack_270;
    do {
      lVar24 = 0;
      puVar12 = puVar9;
      do {
        if (*plStack_270 != lVar27) {
          _objc_enumerationMutation(lVar7);
        }
        puVar9 = *(undefined **)(lStack_278 + lVar24 * 8);
        func_0x00010c067fc0(puVar9);
        func_0x000107e2e18c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        lVar24 = lVar24 + 1;
        puVar12 = puVar9;
      } while (lVar8 != lVar24);
      lVar8 = lVar7;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(lVar7);
  uVar6 = 0xffffffffc6a0f69d;
  func_0x000107e2e18c(0xffffffffc6a0f69d,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puStack_1b0 = &uStack_1b8;
  uStack_1b8 = 0;
  uStack_1a8 = 0x3032000000;
  pcStack_1a0 = FUN_107e0df08;
  uStack_198 = 0x107e0df18;
  uStack_190 = 0;
  iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bfd89e0();
  if (iVar2 != 0) {
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x70);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c241220(uVar11);
    _objc_retainAutoreleasedReturnValue();
    puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2a0 = 0xc2000000;
    uStack_298 = 0x107e0df58;
    puStack_290 = &UNK_11097c0a0;
    puStack_288 = &uStack_1b8;
    func_0x00010c135bc0(uVar10);
    _objc_release(uVar11);
    _objc_release(uVar10);
  }
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + 0x28);
  uVar10 = uVar6;
  func_0x00010c241220(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined1 *)(param_1 + 0x61);
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x70);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x68);
  puVar12 = PTR_PTR_1126bf788;
  _objc_alloc(PTR_PTR_1126bf788);
  func_0x00010c017ba0();
  FUN_107e2b7cc(uVar25,uVar10,uVar1,puVar9,uVar11,uVar26,1,puVar12,
                (ulong)in_stack_fffffffffffffc20 & 0xffffffffffffff00);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  uVar10 = uVar6;
  func_0x00010c241220(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  puVar13 = puVar12;
  func_0x00010c0719c0();
  if ((int)puVar13 == 0) {
    uStack_388 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_388 = uVar10;
    func_0x00010c0bc420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
  }
  puVar13 = puVar12;
  FUN_107e2bf14(puVar12,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  lVar8 = *(long *)(param_1 + 0x40);
  func_0x00010bf1d1a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lStack_2b0 = 0;
  func_0x00010becef00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lStack_2b0;
  _objc_retain(lStack_2b0);
  _objc_release(uVar6);
  if ((lVar7 == 0) && (lVar8 != 0)) {
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x58);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar13;
    func_0x0001080199ec(puVar13,uVar10,lVar8,0,1,uVar6);
    _objc_release(uVar6);
    func_0x00010c11bda0(lVar8);
    if (((ulong)puVar22 & 1) == 0) {
      puVar22 = *(undefined **)(param_1 + 0x58);
      if (puVar22 == (undefined *)0x0) goto LAB_107e0de0c;
      puStack_308 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_300 = 0xc2000000;
      pcStack_2f8 = FUN_107e0dfac;
      puStack_2f0 = &UNK_110849530;
      _objc_retain(puVar22);
      puStack_2e8 = puVar22;
      func_0x000100162d98("APPSTORE",&puStack_308);
      puVar22 = puStack_2e8;
    }
    else {
      if (lVar3 != 0) {
        func_0x00010c08fa60(lVar3);
      }
      func_0x00010c0ed100(*(undefined8 *)(param_1 + 0x28));
      puVar14 = PTR_PTR_1126bf8f8;
      func_0x00010c2aebe0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010c1d7460();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar15;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(puVar14);
      if (lVar3 != 0) {
        func_0x00010c08fa60(lVar3);
      }
      puVar14 = PTR_PTR_1126bf8c8;
      func_0x00010c2aeac0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar13;
      func_0x00010c241220(puVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1968c0(puVar14);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar15);
      func_0x00010c185360(puVar14);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c192cc0(puVar14);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c222da0(puVar14);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1a1e00(puVar14);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c196b00(puVar14);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1b3960(puVar14);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR_PTR_1126d7f18;
      _objc_alloc(PTR_PTR_1126d7f18);
      func_0x00010c00e960();
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR_PTR_1126d7f30;
      _objc_alloc();
      func_0x00010c010480();
      if (lVar3 != 0) {
        func_0x00010c08fa60(lVar3);
      }
      puVar18 = puVar13;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_188 = puVar18;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar18);
      puVar18 = PTR_PTR_1126d7f28;
      puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5a1e0(puVar18);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar20);
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 8);
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar13);
      uVar26 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar26);
      _objc_retain(puVar15);
      uVar23 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar23);
      _objc_retain(lVar3);
      uVar25 = *(undefined8 *)(param_1 + 0x58);
      _objc_retain(uVar25);
      func_0x00010bf06e40(uVar10);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar25);
      _objc_release(lVar3);
      _objc_release(uVar23);
      _objc_release(puVar15);
      _objc_release(uVar26);
      _objc_release(puVar13);
      _objc_release(puVar18);
      _objc_release(puVar19);
      _objc_release(puVar17);
      _objc_release(uVar6);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar14);
    }
  }
  else {
    puVar22 = *(undefined **)(param_1 + 0x58);
    if (puVar22 == (undefined *)0x0) goto LAB_107e0de0c;
    puStack_2e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2d8 = 0xc2000000;
    pcStack_2d0 = FUN_107e0df90;
    puStack_2c8 = &UNK_11084aaa8;
    _objc_retain(puVar22);
    puStack_2b8 = puVar22;
    _objc_retain(lVar7);
    lStack_2c0 = lVar7;
    func_0x000100162d98("APPSTORE",&puStack_2e0);
    _objc_release(lStack_2c0);
    puVar22 = puStack_2b8;
  }
  _objc_release(puVar22);
LAB_107e0de0c:
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uStack_388);
  _objc_release(puVar12);
  _objc_release(puVar9);
  __Block_object_dispose(&uStack_1b8,8);
  _objc_release(uStack_190);
  _objc_release(puVar13);
  _objc_release(puVar4);
  _objc_release(lVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar21 = 8;
  __Block_object_dispose(&uStack_1b8);
  __Unwind_Resume();
  *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar21 + 0x28);
  *(undefined8 *)(lVar21 + 0x28) = 0;
  return;
}



/* Entry: 107e0df08; end: 107e0df1f;  */

void FUN_107e0df08(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107e0df20; end: 107e0df8f;  */

void FUN_107e0df20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e0df90; end: 107e0dfab;  */

void FUN_107e0df90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e0dfa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e0dfac; end: 107e0e01b;  */

void FUN_107e0dfac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,PTR_PTR_113248f38,
                      uRam0000000113248f40,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0,0,0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107e0e01c; end: 107e0e29f;  */

void FUN_107e0e01c(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af4d0;
  puVar7 = (undefined *)0x0;
  if ((param_2 != 0) && (param_3 == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar7 = puVar2;
    if (*(long *)(param_1 + 0x30) != 0) {
      if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa0);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfecbe0();
        _objc_release(uVar1);
      }
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x70);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c241220(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9a80(uVar1);
      _objc_release(uVar3);
      _objc_release(uVar1);
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bf4eae0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf8a8c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x118);
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xc0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c079c80();
      FUN_107e2c4bc(uVar8,puVar2,uVar1,1,0,uVar3,0,uVar4,uVar10,(char)uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010c08fa60();
  }
  lVar9 = *(long *)(param_1 + 0x50);
  if (lVar9 != 0) {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107e0e2a0;
    puStack_90 = &UNK_110855c70;
    _objc_retain(lVar9);
    lStack_70 = lVar9;
    _objc_retain(puVar7);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puStack_88 = puVar7;
    _objc_retain(uVar1);
    uStack_68 = (undefined1)param_2;
    uStack_80 = uVar1;
    _objc_retain(param_3);
    lStack_78 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_a8);
    _objc_release(lStack_78);
    _objc_release(uStack_80);
    _objc_release(puStack_88);
    _objc_release(lStack_70);
  }
  _objc_release(puVar7);
  _objc_release(param_3);
  return;
}



/* Entry: 107e0e2a0; end: 107e0e2fb;  */

void FUN_107e0e2a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))
            (lVar3,uVar1,uVar2,*(undefined1 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e0e2fc; end: 107e0e5d3; -[SCGalleryDataMutator updateEntry:title:userContext:completionHandler:] */

void FUN_107e0e2fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x107e0e408;
  puStack_70 = &UNK_110852488;
  uStack_68 = param_4;
  uStack_60 = param_3;
  uStack_58 = param_5;
  lStack_50 = param_1;
  uStack_48 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_88);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 107e0e5d4; end: 107e0e803;  */

void FUN_107e0e5d4(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af4c0;
  puVar9 = (undefined *)0x0;
  puVar3 = (undefined *)0x0;
  if ((param_2 != 0) && (param_3 == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf97200(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa70a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar9 = PTR_PTR_1126af4d0;
    func_0x00010bfa7380();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
    puVar3 = puVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf4eae0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf8a8c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x118);
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xc0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c079c80();
    FUN_107e2c4bc(uVar7,puVar3,puVar2,0,0x11,uVar4,0,uVar5,uVar8,(char)uVar1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar3 = puVar2;
  }
  lVar10 = *(long *)(param_1 + 0x38);
  if (lVar10 != 0) {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107e0e804;
    puStack_90 = &UNK_110855c70;
    _objc_retain(lVar10);
    lStack_70 = lVar10;
    _objc_retain(puVar3);
    puStack_88 = puVar3;
    _objc_retain(puVar9);
    uStack_68 = (undefined1)param_2;
    puStack_80 = puVar9;
    _objc_retain(param_3);
    lStack_78 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_a8);
    _objc_release(lStack_78);
    _objc_release(puStack_80);
    _objc_release(puStack_88);
    _objc_release(lStack_70);
  }
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 107e0e804; end: 107e0e81b;  */

void FUN_107e0e804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e0e818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107e0e81c; end: 107e0e953; -[SCGalleryDataMutator updateEntry:addSnaps:addPhotoAssets:userContext:completionHandler:] */

void FUN_107e0e81c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107e0e954;
  puStack_88 = &UNK_110866740;
  lStack_80 = param_1;
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_68 = param_5;
  uStack_60 = param_6;
  uStack_58 = param_7;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_a0);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_7);
  return;
}



/* Entry: 107e0e954; end: 107e0ea17;  */

void FUN_107e0e954(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  lVar4 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(lVar4 + 0x38);
  uVar3 = *(undefined8 *)(lVar4 + 0x40);
  uVar2 = *(undefined8 *)(lVar4 + 8);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107e29e20(uVar5,uVar3,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c245800(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed7840(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 107e0ea18; end: 107e0ebbf; -[SCGalleryDataMutator updateEntry:addSnaps:updateOrder:userContext:completionHandler:] */

void FUN_107e0ea18(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (((param_3 == 0) || (lVar1 = param_4, func_0x00010bf529e0(), param_5 == 0)) || (lVar1 == 0)) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107e0ebc0;
    puStack_60 = &UNK_110849530;
    uStack_58 = param_7;
    _objc_retain(param_7);
    func_0x000100162d98("APPSTORE",&puStack_78);
    uVar2 = uStack_58;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    uVar2 = param_7;
  }
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e0ebc0; end: 107e0ebe3;  */

void FUN_107e0ebc0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107e0ebdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,0,0,0);
    return;
  }
  return;
}



/* Entry: 107e0ebe4; end: 107e0ec7f;  */

void FUN_107e0ebe4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  lVar4 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(lVar4 + 0x38);
  uVar2 = *(undefined8 *)(lVar4 + 0x40);
  uVar3 = *(undefined8 *)(lVar4 + 8);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107e29e20(uVar5,uVar2,uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010bed7840(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 107e0ec80; end: 107e0f8f3; -[SCGalleryDataMutator _updateEntry:isStoryEditorFlow:addSnaps:updateOrder:addPhotoAssets:userContext:completionHandler:] */

void FUN_107e0ec80(undefined *param_1,undefined8 param_2,undefined *param_3,uint param_4,
                  undefined *param_5,undefined *param_6,undefined **param_7,undefined **param_8,
                  undefined *param_9)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  code *pcStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined8 uStack_370;
  long lStack_368;
  undefined1 **ppuStack_360;
  code *pcStack_358;
  undefined *puStack_350;
  undefined8 uStack_348;
  code *pcStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  long lStack_328;
  undefined *puStack_320;
  long lStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined **ppuStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined1 *puStack_2d0;
  code *pcStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined *puStack_2b0;
  undefined **ppuStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  long lStack_290;
  undefined *puStack_288;
  undefined **ppuStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  uint uStack_23c;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined **ppuStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_23c = param_4;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_2a0 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_228 = param_3;
  if ((param_3 == (undefined *)0x0) ||
     (((puVar17 = param_5, func_0x00010bf529e0(), puVar3 = PTR_PTR_1126d7f10, ppuVar2 = param_8,
       puVar17 == (undefined *)0x0 &&
       (ppuVar2 = param_7, func_0x00010bf529e0(), puVar3 = PTR_PTR_1126d7f10,
       param_8 == (undefined **)0x0)) || (PTR_PTR_1126d7f10 = puVar3, ppuVar2 == (undefined **)0x0))
     )) {
    puVar17 = param_1;
    if (param_9 == (undefined *)0x0) goto LAB_107e0f884;
    puVar3 = PTR_PTR_1126d7f10;
    _objc_opt_new();
    (**(code **)(param_9 + 0x10))(param_9,0,0,puVar3);
    param_1 = param_6;
    puVar17 = puVar3;
  }
  else {
    _objc_alloc_init();
    puVar17 = param_5;
    func_0x00010bf529e0();
    ppuVar2 = param_7;
    func_0x00010bf529e0();
    puStack_2b0 = param_9;
    uVar18 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar18);
    _objc_retainAutoreleasedReturnValue();
    param_9 = puStack_2b0;
    puVar17 = puVar17 + (long)ppuVar2;
    ppuStack_2a8 = param_7;
    puStack_248 = param_1;
    func_0x000107e2c164(puVar17,puVar3,uVar18,*(undefined8 *)(param_1 + 0x38),puStack_2b0);
    param_7 = ppuStack_2a8;
    _objc_release(uVar18);
    if ((int)puVar17 != 0) {
      puVar17 = puStack_228;
      func_0x00010c0e0160();
      _objc_retainAutoreleasedReturnValue();
      if (puVar17 == (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
      }
      else {
        puVar20 = PTR_PTR_1126af4d0;
        func_0x00010bf52da0();
      }
      _objc_release(puVar17);
      puVar17 = param_5;
      func_0x00010bf529e0();
      ppuVar2 = param_7;
      func_0x00010bf529e0();
      if (puVar17 + (long)puVar20 + (long)ppuVar2 < (undefined *)0x3e9) {
        puVar17 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        puStack_268 = puVar17;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        puStack_250 = puVar20;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = param_5;
        puStack_258 = puVar17;
        func_0x00010b5f972c(param_5,*(undefined8 *)(puStack_248 + 0x38));
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puStack_2a0;
        puStack_270 = puVar20;
        func_0x00010c0d3c80();
        lStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        plStack_160 = (long *)0x0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        puStack_260 = puVar17;
        _objc_retain(param_5);
        puVar17 = param_5;
        func_0x00010bf52a60();
        puStack_288 = puVar3;
        ppuStack_280 = param_8;
        puStack_278 = param_5;
        puStack_238 = puVar17;
        if (puVar17 != (undefined *)0x0) {
          lStack_290 = *plStack_160;
          do {
            puVar17 = (undefined *)0x0;
            do {
              if (*plStack_160 != lStack_290) {
                _objc_enumerationMutation(param_5);
              }
              uVar18 = *(undefined8 *)(lStack_168 + (long)puVar17 * 8);
              puVar20 = puStack_228;
              func_0x00010c080ca0();
              puVar3 = puStack_248;
              puStack_230 = puVar17;
              if (((ulong)puVar20 & 1) == 0) {
                uVar19 = uVar18;
                func_0x00010c080ca0(uVar18);
              }
              else {
                uVar19 = 0;
              }
              puVar17 = puStack_228;
              puVar20 = puStack_228;
              func_0x00010c245800(puStack_228);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar18;
              func_0x00010c241220(uVar18);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puStack_270;
              func_0x00010c0e00e0(puStack_270);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = *(undefined8 *)(puVar3 + 0x58);
              func_0x00010c269d40(uVar5);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = *(ulong *)(puVar3 + 0x60);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar18;
              ppuStack_2c0 = (undefined **)uVar6;
              FUN_107e2cec0(uVar18,uStack_23c ^ 1,1,uVar19,puVar20 == (undefined *)0x0,puVar4,0,
                            uVar5);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar6);
              _objc_release(uVar5);
              _objc_release(puVar4);
              _objc_release(uVar8);
              _objc_release(puVar20);
              uVar19 = uVar7;
              func_0x00010c241220(uVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puStack_268);
              _objc_release(uVar19);
              uVar19 = uVar7;
              func_0x00010c241220(uVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c07b240(puVar17);
              uVar8 = *(undefined8 *)(puVar3 + 0x70);
              func_0x00010c269d40(uVar8);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = *(undefined8 *)(puVar3 + 0x68);
              puVar20 = PTR_PTR_1126bf788;
              _objc_alloc(PTR_PTR_1126bf788);
              func_0x00010c017ba0();
              puVar3 = puStack_258;
              ppuStack_2c0 = (undefined **)((ulong)ppuStack_2c0 & 0xffffffffffffff00);
              FUN_107e2b7cc(uVar18,uVar19,puVar17,puStack_258,uVar8,uVar5,1,puVar20);
              _objc_release(puVar20);
              _objc_release(uVar8);
              _objc_release(uVar19);
              uVar19 = uVar7;
              func_0x00010c241220(uVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0e00e0(puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar20 = puVar3;
              func_0x000107e2bf14();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar7);
              _objc_release(puVar3);
              _objc_release(uVar19);
              puVar4 = PTR_PTR_1126bc7b8;
              func_0x00010bfa7160(PTR_PTR_1126bc7b8);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR_PTR_1126bf8f8;
              func_0x00010c2aebe0(PTR_PTR_1126bf8f8);
              _objc_retainAutoreleasedReturnValue();
              puVar17 = puVar3;
              func_0x00010c1d0720();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar17;
              func_0x00010bf21f60();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar17);
              _objc_release(puVar3);
              puVar10 = PTR_PTR_1126bc7c8;
              func_0x00010bfa7220(PTR_PTR_1126bc7c8);
              _objc_retainAutoreleasedReturnValue();
              puVar17 = PTR_PTR_1126bf900;
              func_0x00010c2aec40();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar17;
              func_0x00010c1d0720();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puVar11;
              func_0x00010bf21f60();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar11);
              _objc_release(puVar17);
              puVar11 = PTR_PTR_1126d7f18;
              _objc_alloc(PTR_PTR_1126d7f18);
              func_0x00010c00e960();
              func_0x00010befa120(puStack_250);
              puVar17 = puStack_260;
              if (puStack_260 != (undefined *)0x0) {
                uVar19 = uVar18;
                func_0x00010c241220(uVar18);
                _objc_retainAutoreleasedReturnValue();
                puVar12 = puVar17;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(uVar19);
                if (puVar12 != (undefined *)0x0) {
                  uVar19 = uVar18;
                  func_0x00010c241220(uVar18);
                  _objc_retainAutoreleasedReturnValue();
                  puVar12 = puVar17;
                  func_0x00010c0e00e0(puVar17);
                  _objc_retainAutoreleasedReturnValue();
                  puVar13 = puVar20;
                  func_0x00010c241220(puVar20);
                  _objc_retainAutoreleasedReturnValue();
                  puStack_298 = puVar3;
                  func_0x00010c1d0640(puVar17);
                  puVar3 = puStack_298;
                  _objc_release(puVar13);
                  _objc_release(puVar12);
                  _objc_release(uVar19);
                  func_0x00010c241220(uVar18);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c12d3e0(puVar17);
                  _objc_release(uVar18);
                }
              }
              _objc_release(puVar11);
              _objc_release(puVar3);
              _objc_release(puVar10);
              _objc_release(puVar9);
              _objc_release(puVar4);
              _objc_release(puVar20);
              param_5 = puStack_278;
              param_8 = ppuStack_280;
              puVar3 = puStack_288;
              puVar17 = puStack_230 + 1;
            } while (puStack_238 != puVar17);
            puVar17 = puStack_278;
            func_0x00010bf52a60();
            puStack_238 = puVar17;
          } while (puVar17 != (undefined *)0x0);
        }
        _objc_release(param_5);
        puVar4 = puStack_228;
        unaff_x25 = puStack_248;
        puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1b8 = 0xc2000000;
        pcStack_1b0 = FUN_107e0f900;
        puStack_1a8 = &UNK_110a0dcc8;
        puStack_1a0 = puStack_248;
        _objc_retain(puStack_228);
        puVar17 = puStack_258;
        puStack_198 = puVar4;
        _objc_retain(puStack_258);
        puStack_190 = puVar17;
        _objc_retain(puVar3);
        puStack_188 = puVar3;
        _objc_retain(param_8);
        puVar20 = puStack_250;
        ppuStack_180 = param_8;
        _objc_retain(puStack_250);
        puStack_178 = puVar20;
        func_0x00010bf97e80(ppuStack_2a8);
        func_0x00010c246ba0(puVar20);
        puVar17 = puVar20;
        func_0x000100504554(puVar20,&PTR___NSConcreteGlobalBlock_110a0dd58);
        param_1 = puVar4;
        func_0x00010c245800();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puStack_260;
        func_0x00010bf51e00(puStack_260);
        param_3 = param_1;
        func_0x00010b5fcecc(param_1,puVar9,puVar17);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(param_1);
        func_0x00010c080ca0();
        if ((int)puVar4 == 0) {
          puVar3 = param_3;
          func_0x00010bf529e0();
          unaff_x24 = PTR_PTR_1126d7f20;
          _objc_alloc();
          puVar4 = puStack_228;
          func_0x00010bf12220(puStack_228);
          _objc_retainAutoreleasedReturnValue();
          uVar18 = *(undefined8 *)(unaff_x25 + 0x40);
          func_0x00010c269d40(uVar18);
          _objc_retainAutoreleasedReturnValue();
          ppuStack_2c0 = *(undefined ***)(unaff_x25 + 0xd8);
          if (puVar3 == (undefined *)0x0) {
            func_0x00010c010440();
          }
          else {
            ppuStack_2b8 = ppuStack_2c0;
            ppuStack_2c0 = param_8;
            func_0x00010c010460();
          }
          _objc_release(uVar18);
          _objc_release(puVar4);
          uVar19 = *(undefined8 *)(unaff_x25 + 0xa0);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126d7f28;
          func_0x00010bf529e0();
          ppuStack_2c0 = (undefined **)0x0;
          func_0x00010bf5a1e0();
          _objc_retainAutoreleasedReturnValue();
          puStack_238 = puVar3;
          func_0x00010c0b8600();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(unaff_x25 + 0xf8);
          puStack_230 = puVar20;
          func_0x00010c269d40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uVar8;
          func_0x00010bfc4ac0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          uVar8 = *(undefined8 *)(unaff_x25 + 0x48);
          func_0x00010c269d40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = *(ulong *)(unaff_x25 + 8);
          func_0x00010c11de00();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puStack_228;
          puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_218 = 0xc2000000;
          pcStack_210 = FUN_107e0fd5c;
          puStack_208 = &UNK_110a0dc38;
          _objc_retain(puStack_228);
          puStack_200 = puVar3;
          puStack_1f8 = unaff_x25;
          _objc_retain(puStack_250);
          puVar3 = puStack_268;
          puStack_1f0 = puStack_250;
          _objc_retain(puStack_268);
          puStack_1e8 = puVar3;
          uStack_1e0 = uVar19;
          _objc_retain(param_8);
          param_1 = puStack_2b0;
          ppuStack_1d8 = param_8;
          _objc_retain(puStack_2b0);
          puVar3 = puStack_288;
          puStack_1c8 = param_1;
          _objc_retain(puStack_288);
          puStack_1d0 = puVar3;
          _objc_retain(uVar19);
          unaff_x25 = puStack_238;
          ppuStack_2b8 = &puStack_220;
          ppuStack_2c0 = (undefined **)uVar6;
          func_0x00010bf06e40(uVar8);
          _objc_release(uVar6);
          puVar20 = puStack_250;
          _objc_release(uVar8);
          _objc_release(puStack_1d0);
          _objc_release(puStack_1c8);
          _objc_release(ppuStack_1d8);
          _objc_release(uStack_1e0);
          _objc_release(puStack_1e8);
          _objc_release(puStack_1f0);
          _objc_release(puStack_200);
          _objc_release(uVar19);
          _objc_release(uVar18);
          _objc_release(puStack_230);
          _objc_release(unaff_x25);
          param_9 = param_1;
          param_5 = puStack_278;
          param_8 = ppuStack_280;
        }
        else {
          unaff_x24 = *(undefined **)(unaff_x25 + 0xe8);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          param_9 = puStack_2b0;
          func_0x00010befb7a0();
        }
        _objc_release(unaff_x24);
        _objc_release(param_3);
        _objc_release(puVar17);
        _objc_release(puStack_178);
        _objc_release(ppuStack_180);
        _objc_release(puStack_188);
        _objc_release(puStack_190);
        _objc_release(puStack_198);
        _objc_release(puStack_260);
        _objc_release(puStack_270);
        _objc_release(puStack_258);
        _objc_release(puVar20);
        puVar20 = puStack_268;
        param_7 = ppuStack_2a8;
      }
      else {
        puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_128 = 0xc2000000;
        pcStack_120 = FUN_107e0f8f4;
        puStack_118 = &UNK_11084aaa8;
        _objc_retain(puVar3);
        param_9 = puStack_2b0;
        puStack_110 = puVar3;
        _objc_retain(puStack_2b0);
        puStack_108 = param_9;
        func_0x000100162d98("APPSTORE",&puStack_130);
        _objc_release(puStack_108);
        puVar20 = puStack_110;
      }
      _objc_release(puVar20);
    }
  }
  _objc_release(puVar3);
  param_6 = param_1;
LAB_107e0f884:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(puStack_2a0);
  _objc_release(param_5);
  puVar3 = puStack_228;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar18 = *(undefined8 *)(puVar3 + 0x20);
  lVar1 = *(long *)(puVar3 + 0x28);
  pcStack_2c8 = FUN_107e0f8f4;
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_310 = param_5;
  puStack_308 = unaff_x25;
  puStack_300 = unaff_x24;
  puStack_2f8 = param_3;
  ppuStack_2f0 = param_7;
  puStack_2e8 = param_9;
  puStack_2e0 = puVar17;
  puStack_2d8 = param_6;
  puStack_2d0 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196ee0(uVar18);
  _objc_release(puVar3);
  puVar17 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110ebff98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebff98,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = &PTR____CFConstantStringClassReference_110ebffb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebffb8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af180;
  ppuVar15 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_350 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_348 = 0xc2000000;
  pcStack_340 = FUN_107e2ed24;
  puStack_338 = &UNK_1108e3df0;
  uStack_330 = uVar18;
  lStack_328 = lVar1;
  _objc_retain(uVar18);
  _objc_retain(lVar1);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_320 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar17);
  _objc_release(puVar20);
  _objc_release(puVar3);
  _objc_release(ppuVar15);
  _objc_release(ppuVar14);
  _objc_release(ppuVar2);
  _objc_release(puVar17);
  _objc_release(uStack_330);
  _objc_release(lStack_328);
  _objc_release(uVar18);
  lVar16 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
    return;
  }
  ___stack_chk_fail();
  pcStack_358 = FUN_107e2ed24;
  lStack_378 = *(long *)(lVar16 + 0x28);
  if (lStack_378 != 0) {
    puStack_3a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_398 = 0xc2000000;
    pcStack_390 = FUN_107e2edb8;
    puStack_388 = &UNK_11084aaa8;
    uStack_370 = uVar18;
    lStack_368 = lVar1;
    ppuStack_360 = &puStack_2d0;
    _objc_retain(lStack_378);
    uVar18 = *(undefined8 *)(lVar16 + 0x20);
    _objc_retain(uVar18);
    uStack_380 = uVar18;
    func_0x000100162d98("APPSTORE",&puStack_3a0);
    _objc_release(uStack_380);
    _objc_release(lStack_378);
  }
  return;
}



/* Entry: 107e0f8f4; end: 107e0f8ff;  */

void FUN_107e0f8f4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196ee0(uVar9);
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110ebff98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebff98,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110ebffb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebffb8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af180;
  ppuVar6 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107e2ed24;
  puStack_78 = &UNK_1108e3df0;
  uStack_70 = uVar9;
  lStack_68 = lVar1;
  _objc_retain(uVar9);
  _objc_retain(lVar1);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(uStack_70);
  _objc_release(lStack_68);
  _objc_release(uVar9);
  lVar8 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_107e2ed24;
  lStack_b8 = *(long *)(lVar8 + 0x28);
  if (lStack_b8 != 0) {
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_107e2edb8;
    puStack_c8 = &UNK_11084aaa8;
    uStack_b0 = uVar9;
    lStack_a8 = lVar1;
    puStack_a0 = &stack0xfffffffffffffff0;
    _objc_retain(lStack_b8);
    uVar9 = *(undefined8 *)(lVar8 + 0x20);
    _objc_retain(uVar9);
    uStack_c0 = uVar9;
    func_0x000100162d98("APPSTORE",&puStack_e0);
    _objc_release(uStack_c0);
    _objc_release(lStack_b8);
  }
  return;
}



/* Entry: 107e0f900; end: 107e0fc4b;  */

undefined8 * FUN_107e0f900(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_2;
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c28fbc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = puVar1;
  func_0x00010bf529e0();
  if (puStack_148 < (undefined8 *)0x2) {
    puStack_148 = (undefined8 *)0x0;
  }
  else {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  puVar1 = param_2;
  func_0x00010c0fa940();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf5a700();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  puVar2 = param_2;
  func_0x00010c28fbc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = &uStack_140;
  puVar4 = puVar2;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    lVar10 = *plStack_130;
    do {
      puVar11 = (undefined8 *)0x0;
      puVar12 = puVar3;
      do {
        if (*plStack_130 != lVar10) {
          _objc_enumerationMutation(puVar2);
        }
        uVar5 = 0;
        func_0x000108dfcd80(0);
        _objc_retainAutoreleasedReturnValue();
        lVar13 = *(long *)(param_1 + 0x20);
        puVar3 = param_2;
        func_0x00010c0fa940(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ed100();
        func_0x00010c07b240(*(undefined8 *)(param_1 + 0x28));
        puVar1 = puVar3;
        func_0x00010be74360();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = puVar12;
        func_0x00010bf64e40(0x3fb999999999999a);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        if (lVar13 == 0) {
          _objc_release(uVar5);
          goto LAB_107e0fbec;
        }
        puVar6 = PTR_PTR_1126bf8f8;
        func_0x00010c2aebe0(PTR_PTR_1126bf8f8);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c1d7460();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar6 = PTR_PTR_1126d7f18;
        _objc_alloc();
        func_0x00010c00e960();
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x48));
        _objc_release(puVar6);
        _objc_release(puVar8);
        _objc_release(lVar13);
        _objc_release(uVar5);
        puVar11 = (undefined8 *)((long)puVar11 + 1);
        puVar12 = puVar3;
      } while (puVar4 != puVar11);
      puVar1 = &uStack_140;
      puVar4 = puVar2;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined8 *)0x0);
  }
LAB_107e0fbec:
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puStack_148);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_retain(puVar1);
    func_0x00010c23f220(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c23f220(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010bf59960(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf433a0(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar9);
    return puVar4;
  }
  return param_2;
}



/* Entry: 107e0fc4c; end: 107e0fd0b;  */

undefined8 FUN_107e0fc4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  func_0x00010c23f220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf59960();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c23f220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf59960(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf433a0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 107e0fd0c; end: 107e0fd53;  */

void FUN_107e0fd0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c23f220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e0fd54; end: 107e0fd5b;  */

void FUN_107e0fd54(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snap_11266d6b0);
  return;
}



/* Entry: 107e0fd5c; end: 107e10123;  */

void FUN_107e0fd5c(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
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
  puVar2 = PTR_PTR_1126af4c0;
  puVar10 = (undefined *)0x0;
  if (param_2 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = (undefined *)0x0;
    if (param_3 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf97200(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa70a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      lVar8 = *(long *)(param_1 + 0x30);
      _objc_retain(lVar8);
      lStack_178 = lVar8;
      func_0x00010bf52a60();
      if (lStack_178 != 0) {
        lVar7 = *plStack_120;
        do {
          lVar11 = 0;
          do {
            if (*plStack_120 != lVar7) {
              _objc_enumerationMutation(lVar8);
            }
            puVar10 = PTR_PTR_1126af4d0;
            uVar3 = *(undefined8 *)(lStack_128 + lVar11 * 8);
            func_0x00010c23f220(uVar3);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = uVar3;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa72e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar1);
            _objc_release(uVar3);
            lVar13 = *(long *)(param_1 + 0x38);
            puVar9 = puVar10;
            func_0x00010c241220(puVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar9);
            if (puVar10 != (undefined *)0x0) {
              uVar4 = *(ulong *)(param_1 + 0x20);
              func_0x00010c07b240();
              if ((uVar4 & 1) == 0) {
                if (lVar13 == 0) {
                  func_0x00010bfecbe0(*(undefined8 *)(param_1 + 0x40));
                }
                else {
                  func_0x00010bfecaa0();
                }
              }
              uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
              uVar3 = *(undefined8 *)(param_1 + 0x48);
              func_0x00010bf4eae0(uVar3);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = *(undefined8 *)(param_1 + 0x28);
              func_0x00010bf8a8c0(uVar5);
              _objc_retainAutoreleasedReturnValue();
              uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x118);
              uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xc0);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar1 = uVar6;
              func_0x00010c079c80();
              FUN_107e2c4bc(uVar14,puVar10,puVar2,lVar13 == 0,0xd,uVar3,0,uVar5,uVar12,(char)uVar1);
              _objc_release(uVar6);
              _objc_release(uVar5);
              _objc_release(uVar3);
            }
            _objc_release(lVar13);
            _objc_release(puVar10);
            lVar11 = lVar11 + 1;
          } while (lStack_178 != lVar11);
          lStack_178 = lVar8;
          func_0x00010bf52a60();
        } while (lStack_178 != 0);
      }
      _objc_release(lVar8);
      puVar10 = PTR_PTR_1126af4d0;
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar2;
    }
  }
  lVar8 = *(long *)(param_1 + 0x58);
  if (lVar8 != 0) {
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_107e10124;
    puStack_158 = &UNK_1108465d0;
    _objc_retain(lVar8);
    lStack_138 = lVar8;
    _objc_retain(puVar9);
    puStack_150 = puVar9;
    _objc_retain(puVar10);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    puStack_148 = puVar10;
    _objc_retain(uVar1);
    uStack_140 = uVar1;
    func_0x000100162d98("APPSTORE",&puStack_170);
    _objc_release(uStack_140);
    _objc_release(puStack_148);
    _objc_release(puStack_150);
    _objc_release(lStack_138);
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107e10134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x38) + 0x10))
            (*(long *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 107e10124; end: 107e10137;  */

void FUN_107e10124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e10134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107e10138; end: 107e1045b; -[SCGalleryDataMutator _replaceVideoSnap:videoProvider:metadataItems:videoTimeRanges:shouldForceReencode:rawMediaAssetCloudFile:originalSnapCloudFile:entry:overlayFormat:overlay:snapAssets:assetMedias:isInfiniteDuration:userContext:loggingParams:completionHandler:] */

void FUN_107e10138(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 uVar1;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_107e1045c;
  puStack_f0 = &UNK_110a0ddb8;
  uStack_78 = param_19;
  uStack_b8 = param_9;
  uStack_b0 = param_10;
  uStack_a8 = param_11;
  uStack_a0 = param_12;
  uStack_98 = param_13;
  uStack_90 = param_14;
  uStack_6f = param_15;
  uStack_88 = param_17;
  uStack_80 = param_18;
  uStack_e8 = param_4;
  uStack_e0 = param_6;
  lStack_d8 = param_1;
  uStack_d0 = param_3;
  uStack_c8 = param_5;
  uStack_c0 = param_8;
  uStack_70 = param_7;
  _objc_retain();
  _objc_retain(param_17);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_19);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_108);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_78);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_19);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 107e1045c; end: 107e1057b;  */

void FUN_107e1045c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_107e2e458(lVar1,*(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x98),
                *(undefined8 *)(*(long *)(param_1 + 0x30) + 0xe0));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if ((*(long *)(param_1 + 0x20) == 0) || (lVar1 = lVar2, func_0x00010c08fa60(), lVar1 != 0)) {
    func_0x00010be8ed80(*(undefined8 *)(param_1 + 0x30));
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + 0x90);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0,0,0,puVar3);
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107e1057c; end: 107e108db; -[SCGalleryDataMutator _replaceVideoSnap:videoData:metadataItems:rawMediaAssetCloudFile:originalSnapCloudFile:entry:overlayFormat:overlay:snapAssets:assetMedias:isInfiniteDuration:userContext:origin:newThumbnailDownloadURL:newOverlayDownloadURL:loggingParams:completionHandler:] */

void FUN_107e1057c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined4 param_16,
                  undefined4 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  undefined8 uVar1;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_107e108dc;
  puStack_f8 = &UNK_110a0de08;
  uStack_f0 = param_15;
  uStack_b8 = param_10;
  uStack_6c = param_13;
  uStack_a8 = param_9;
  uStack_a0 = param_11;
  uStack_98 = param_12;
  uStack_90 = param_18;
  uStack_88 = param_19;
  uStack_70 = param_16;
  uStack_80 = param_20;
  uStack_78 = param_21;
  uStack_e8 = param_4;
  uStack_e0 = param_5;
  lStack_d8 = param_1;
  uStack_d0 = param_6;
  uStack_c8 = param_7;
  uStack_c0 = param_3;
  uStack_b0 = param_8;
  _objc_retain();
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_21);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_15);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_110);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_78);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_21);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_10);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_15);
  return;
}



/* Entry: 107e108dc; end: 107e11bb7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_107e108dc(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  double dVar28;
  double dVar29;
  undefined **in_stack_fffffffffffffbd0;
  long lStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3a0;
  undefined *puStack_328;
  undefined8 uStack_320;
  code *pcStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [24];
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  long *plStack_1d8;
  long alStack_1d0 [2];
  long *plStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c14bf80();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = *(undefined **)(param_1 + 0x28);
  _objc_retain(puVar18);
  plStack_1c0 = alStack_1d0 + 1;
  alStack_1d0[1] = 0;
  dVar28 = 1.02270250269256e-312;
  uStack_1b8 = 0x3032000000;
  pcStack_1b0 = FUN_107e0df08;
  uStack_1a8 = 0x107e0df18;
  uStack_1a0 = 0;
  func_0x00010c08fa60(puVar18);
  if (puVar18 == (undefined *)0x0) {
    lVar17 = *(long *)(param_1 + 0x40);
    if (lVar17 == 0) {
      lVar17 = *(long *)(param_1 + 0x48);
      func_0x00010bfad280(lVar17);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar17;
      func_0x00010c0f5800(lVar17);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar18;
      func_0x00010bf0e880(puVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfad040();
      _objc_release(puVar5);
      _objc_release(lVar20);
      _objc_release(puVar18);
      puVar5 = *(undefined **)(*(long *)(param_1 + 0x38) + 0x78);
      func_0x00010c269d40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
      dVar28 = 1.60807493534087e-314;
      uStack_1f0 = 0xc2000000;
      pcStack_1e8 = FUN_107e11bb8;
      puStack_1e0 = &UNK_1108bccc0;
      plStack_1d8 = alStack_1d0 + 1;
      in_stack_fffffffffffffbd0 = &puStack_1f8;
      func_0x00010c1346c0();
    }
    else {
      func_0x00010bfad280();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_alloc();
      func_0x00010c057ae0();
      lVar20 = plStack_1c0[5];
      plStack_1c0[5] = (long)puVar18;
      _objc_release(lVar20);
      puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar17;
      func_0x00010c0f5800(lVar17);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar5;
      func_0x00010bf0e880(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfad040();
      _objc_release(puVar18);
      _objc_release(lVar20);
    }
    puVar18 = (undefined *)0x0;
LAB_107e10c80:
    _objc_release(puVar5);
    _objc_release(lVar17);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc();
    func_0x00010c0082a0();
    lVar17 = plStack_1c0[5];
    plStack_1c0[5] = (long)puVar5;
    _objc_release(lVar17);
    if (*(long *)(param_1 + 0x30) != 0) {
      puVar3 = *(undefined **)(*(long *)(param_1 + 0x38) + 0x58);
      func_0x00010c269d40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c27a620();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      lVar20 = plStack_1c0[5];
      puVar3 = puVar5;
      func_0x00010bfad160(puVar5);
      _objc_retainAutoreleasedReturnValue();
      alStack_1d0[0] = 0;
      func_0x00010b5fd188(lVar20,puVar3,1,*(undefined8 *)(param_1 + 0x30),alStack_1d0);
      lVar17 = alStack_1d0[0];
      _objc_retain(alStack_1d0[0]);
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      if ((int)lVar20 != 0) {
        puVar4 = puVar5;
        func_0x00010bfad160(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf64ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        if (puVar3 != (undefined *)0x0) {
          _objc_retain(puVar3);
          _objc_release(puVar18);
          puVar18 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
          _objc_alloc();
          func_0x00010c0082a0();
          lVar20 = plStack_1c0[5];
          plStack_1c0[5] = (long)puVar18;
          _objc_release(lVar20);
          puVar18 = puVar3;
        }
        _objc_release(puVar3);
      }
      func_0x00010c11bda0(puVar5);
      goto LAB_107e10c80;
    }
  }
  if (plStack_1c0[5] == 0) {
    func_0x00010bf8b160(*(undefined8 *)(param_1 + 0x50));
    dVar28 = (double)SUB84(dVar28,0);
  }
  else {
    func_0x00010bf8b160(auStack_210);
    _CMTimeGetSeconds(auStack_210);
    dVar29 = dVar28;
    FUN_107e2c3e0(*(undefined8 *)(param_1 + 0x58));
    dVar28 = dVar28 * dVar29;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x60);
  func_0x00010c080ca0();
  if (iVar1 != 0) {
    lVar17 = *(long *)(*(long *)(param_1 + 0x38) + 0xe8);
    func_0x00010c269d40(lVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8c360(dVar28);
    goto LAB_107e11aa8;
  }
  lVar17 = *(long *)(*(long *)(param_1 + 0x38) + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aeb80();
  _objc_release();
  if (lVar2 != 0) {
    lVar17 = lVar2;
    func_0x00010c08fa60();
  }
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126bf910;
  func_0x00010c2aebc0(PTR_PTR_1126bf910);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bf6e8;
  func_0x00010c273760(PTR_PTR_1126bf6e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216ee0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c204680(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a65c0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1d0720(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c192ce0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1ac2c0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dca80(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c192d40((float)dVar28,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1f5ce0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c203960(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c203f40(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar20 = *(long *)(param_1 + 0x80);
  func_0x00010c08fa60();
  if (lVar20 != 0) {
    func_0x00010c213fc0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar20 = *(long *)(param_1 + 0x88);
  func_0x00010c08fa60();
  if (lVar20 != 0) {
    func_0x00010c1d7560(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (puVar18 == (undefined *)0x0) {
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar15 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c23f420(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfece40();
      _objc_release(uVar15);
      uVar15 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c23f420();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar15);
      uVar7 = uVar16;
      func_0x00010010fab4(uVar16,PTR_DAT_1126a4fc0);
      uVar15 = uVar16;
      if ((int)uVar7 == 0) {
        uVar15 = 0;
      }
      _objc_retain(uVar15);
      _objc_release(uVar16);
      uVar16 = uVar15;
      func_0x00010bf0b260(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4880(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar16);
      _objc_release(uVar15);
    }
  }
  else {
    lVar20 = *(long *)(param_1 + 0x50);
    func_0x00010b5fa088();
    if (lVar20 - 2U < 0xb) {
      uVar15 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c0c5180(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4880(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar15);
    }
    else {
      func_0x00010c1c4880(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  puVar3 = puVar5;
  func_0x00010bf21f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  lVar6 = *(long *)(param_1 + 0x58);
  func_0x000109023474();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar6;
  func_0x00010bf52a60();
  if (lVar20 != 0) {
    lVar25 = *plStack_240;
    do {
      lVar27 = 0;
      puVar4 = puVar3;
      do {
        if (*plStack_240 != lVar25) {
          _objc_enumerationMutation(lVar6);
        }
        puVar3 = *(undefined **)(lStack_248 + lVar27 * 8);
        func_0x00010c067fc0(puVar3);
        FUN_107e2e020();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        lVar27 = lVar27 + 1;
        puVar4 = puVar3;
      } while (lVar20 != lVar27);
      lVar20 = lVar6;
      func_0x00010bf52a60();
    } while (lVar20 != 0);
  }
  _objc_release(lVar6);
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  lVar6 = *(long *)(param_1 + 0x58);
  func_0x000109023564();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar6;
  func_0x00010bf52a60();
  if (lVar20 != 0) {
    lVar25 = *plStack_280;
    do {
      lVar27 = 0;
      puVar4 = puVar3;
      do {
        if (*plStack_280 != lVar25) {
          _objc_enumerationMutation(lVar6);
        }
        puVar3 = *(undefined **)(lStack_288 + lVar27 * 8);
        func_0x00010c067fc0(puVar3);
        func_0x000107e2e18c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        lVar27 = lVar27 + 1;
        puVar4 = puVar3;
      } while (lVar20 != lVar27);
      lVar20 = lVar6;
      func_0x00010bf52a60();
    } while (lVar20 != 0);
  }
  _objc_release(lVar6);
  uVar16 = 0xffffffffc6a0f69d;
  func_0x000107e2e18c(0xffffffffc6a0f69d,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + 0x50);
  uVar15 = uVar16;
  func_0x00010c241220(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c07b240(uVar7);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x70);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x68);
  puVar4 = PTR_PTR_1126bf788;
  _objc_alloc(PTR_PTR_1126bf788);
  func_0x00010c017ba0();
  FUN_107e2b7cc(uVar21,uVar15,uVar7,puVar3,uVar8,uVar26,1,puVar4,
                (ulong)in_stack_fffffffffffffbd0 & 0xffffffffffffff00);
  _objc_release(puVar4);
  _objc_release(uVar8);
  _objc_release(uVar15);
  uVar15 = uVar16;
  func_0x00010c241220(uVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  puVar9 = puVar4;
  func_0x00010c0719c0();
  if ((int)puVar9 == 0) {
    uStack_3a0 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_3a0 = uVar15;
    func_0x00010c0bc420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
  }
  puVar9 = puVar4;
  FUN_107e2bf14(puVar4,uVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  if (puVar18 == (undefined *)0x0) {
    lVar20 = 0;
LAB_107e113f8:
    lStack_3b8 = *(long *)(param_1 + 0x38);
    uVar15 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010bf1d1a0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    lStack_2d0 = 0;
    func_0x00010becef00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lStack_2d0;
    _objc_retain(lStack_2d0);
    _objc_release(uVar15);
    if ((lVar6 == 0) && (lStack_3b8 != 0)) {
      uVar15 = *(undefined8 *)(param_1 + 0x78);
      puVar19 = puVar4;
      func_0x00010c086560(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar4;
      func_0x00010bdc1800(puVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar25 = *(long *)(param_1 + 0x38);
      FUN_107e2d6ec(uVar15,0,puVar9,puVar19,puVar10,uStack_3a0,*(undefined8 *)(lVar25 + 0x58),
                    *(undefined8 *)(lVar25 + 0x78),*(undefined8 *)(lVar25 + 0xd8));
      _objc_release(puVar10);
      _objc_release(puVar19);
      if ((lVar20 == 0) && (lStack_3c0 = *(long *)(param_1 + 0x40), lStack_3c0 != 0)) {
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(lVar20);
        lStack_3c0 = lVar20;
      }
      uVar7 = *(undefined8 *)(param_1 + 0x50);
      uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x58);
      func_0x00010c269d40(uVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar9;
      func_0x0001080199ec(puVar9,uVar7,lStack_3b8,lStack_3c0,0,uVar16);
      _objc_release(uVar16);
      func_0x00010c11bda0(lStack_3b8);
      func_0x00010c11bda0(lVar20);
      if (((uint)puVar19 & (uint)uVar15 & 1) == 0) {
        puVar19 = *(undefined **)(param_1 + 0x98);
        if (puVar19 == (undefined *)0x0) goto LAB_107e11a60;
        puStack_328 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_320 = 0xc2000000;
        pcStack_318 = FUN_107e11c6c;
        puStack_310 = &UNK_110849530;
        _objc_retain(puVar19);
        puStack_308 = puVar19;
        func_0x000100162d98("APPSTORE",&puStack_328);
        puVar19 = puStack_308;
      }
      else {
        if (lVar2 != 0) {
          func_0x00010c08fa60(lVar2);
        }
        puVar10 = PTR_PTR_1126bf8f8;
        func_0x00010c2aebe0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010c1d7460();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar11;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        _objc_release(puVar10);
        if (lVar2 != 0) {
          func_0x00010c08fa60(lVar2);
        }
        puVar10 = PTR_PTR_1126d7f18;
        _objc_alloc();
        func_0x00010c00e960();
        puVar11 = PTR_PTR_1126d7f38;
        _objc_alloc();
        uVar15 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010bf97200(uVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar16 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010c241220(uVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x40);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0102a0();
        _objc_release(uVar7);
        _objc_release(uVar16);
        _objc_release(uVar15);
        if (lVar2 != 0) {
          func_0x00010c08fa60(lVar2);
        }
        puVar12 = puVar9;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_190 = puVar12;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        uVar15 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_198 = uVar15;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        uVar16 = *(undefined8 *)(param_1 + 0x38);
        uVar15 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010c241220(uVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar9;
        func_0x00010c241220(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be22aa0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(uVar15);
        uVar8 = *(undefined8 *)(param_1 + 0x38);
        uVar15 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010c241220(uVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar9;
        func_0x00010c241220(puVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010c245800(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be23980();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        _objc_release(puVar14);
        _objc_release(uVar15);
        puVar14 = PTR_PTR_1126d7f28;
        func_0x00010bf5a1e0(PTR_PTR_1126d7f28);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
        func_0x00010c269d40(uVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
        func_0x00010c11de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar9);
        uVar26 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar26);
        uVar22 = *(undefined8 *)(param_1 + 0x60);
        _objc_retain(uVar22);
        uVar23 = *(undefined8 *)(param_1 + 0x90);
        _objc_retain(uVar23);
        uVar24 = *(undefined8 *)(param_1 + 0x50);
        _objc_retain(uVar24);
        _objc_retain(lVar2);
        uVar21 = *(undefined8 *)(param_1 + 0x98);
        _objc_retain(uVar21);
        func_0x00010bf06e40(uVar15);
        _objc_release(uVar7);
        _objc_release(uVar15);
        _objc_release(uVar21);
        _objc_release(lVar2);
        _objc_release(uVar24);
        _objc_release(uVar23);
        _objc_release(uVar22);
        _objc_release(uVar26);
        _objc_release(puVar9);
        _objc_release(puVar14);
        _objc_release(uVar8);
        _objc_release(uVar16);
        _objc_release(puVar12);
        _objc_release(puVar13);
        _objc_release(puVar11);
        _objc_release(puVar10);
      }
      _objc_release(puVar19);
    }
    else {
      lVar25 = *(long *)(param_1 + 0x98);
      if (lVar25 == 0) goto LAB_107e11a64;
      puStack_300 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2f8 = 0xc2000000;
      uStack_2f0 = 0x107e11c50;
      puStack_2e8 = &UNK_11084aaa8;
      _objc_retain(lVar25);
      lStack_2d8 = lVar25;
      _objc_retain(lVar6);
      lStack_2e0 = lVar6;
      func_0x000100162d98("APPSTORE",&puStack_300);
      _objc_release(lStack_2e0);
      lStack_3c0 = lStack_2d8;
    }
LAB_107e11a60:
    _objc_release(lStack_3c0);
LAB_107e11a64:
    _objc_release(lStack_3b8);
  }
  else {
    lVar20 = *(long *)(param_1 + 0x38);
    lStack_298 = 0;
    func_0x00010becef00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lStack_298;
    _objc_retain(lStack_298);
    if ((lVar6 == 0) && (lVar20 != 0)) goto LAB_107e113f8;
    lVar25 = *(long *)(param_1 + 0x98);
    if (lVar25 != 0) {
      puStack_2c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2c0 = 0xc2000000;
      pcStack_2b8 = FUN_107e11c34;
      puStack_2b0 = &UNK_11084aaa8;
      _objc_retain(lVar25);
      lStack_2a0 = lVar25;
      _objc_retain(lVar6);
      lStack_2a8 = lVar6;
      func_0x000100162d98("APPSTORE",&puStack_2c8);
      _objc_release(lStack_2a8);
      lStack_3b8 = lStack_2a0;
      goto LAB_107e11a64;
    }
  }
  _objc_release(lVar6);
  _objc_release(lVar20);
  _objc_release(uStack_3a0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar9);
  _objc_release(puVar5);
LAB_107e11aa8:
  _objc_release(lVar17);
  __Block_object_dispose(alStack_1d0 + 1,8);
  _objc_release(uStack_1a0);
  _objc_release(puVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  uVar16 = 8;
  __Block_object_dispose(alStack_1d0 + 1);
  __Unwind_Resume();
  _objc_retain(uVar16);
  lVar2 = *(long *)(*(long *)(lVar2 + 0x20) + 8);
  uVar15 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar16;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar15);
  return;
}



/* Entry: 107e11bb8; end: 107e11c33;  */

void FUN_107e11bb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e11c34; end: 107e11c6b;  */

void FUN_107e11c34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e11c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e11c6c; end: 107e11cdb;  */

void FUN_107e11c6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,PTR_PTR_113248f38,
                      uRam0000000113248f40,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0,0,0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107e11cdc; end: 107e11f3b;  */

void FUN_107e11cdc(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af4d0;
  puVar8 = (undefined *)0x0;
  if ((param_2 != 0) && (param_3 == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar8 = puVar2;
    if (puVar2 != (undefined *)0x0) {
      ppuVar3 = *(undefined ***)(param_1 + 0x30);
      func_0x00010c247520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar3 == &PTR____CFConstantStringClassReference_110ec3438) {
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
        uVar11 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010bf4eae0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bf8a8c0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x118);
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xc0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c079c80();
        FUN_107e2c4bc(uVar9,puVar2,uVar11,0,1,uVar1,0,uVar4,uVar12,(char)uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar1);
      }
      uVar7 = *(ulong *)(param_1 + 0x38);
      func_0x00010c07b240();
      if ((uVar7 & 1) == 0) {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa0);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfecaa0();
        _objc_release(uVar1);
      }
    }
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010c08fa60();
  }
  lVar10 = *(long *)(param_1 + 0x58);
  if (lVar10 != 0) {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107e11f3c;
    puStack_90 = &UNK_110855c70;
    _objc_retain(lVar10);
    lStack_70 = lVar10;
    _objc_retain(puVar8);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puStack_88 = puVar8;
    _objc_retain(uVar1);
    uStack_68 = (undefined1)param_2;
    uStack_80 = uVar1;
    _objc_retain(param_3);
    lStack_78 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_a8);
    _objc_release(lStack_78);
    _objc_release(uStack_80);
    _objc_release(puStack_88);
    _objc_release(lStack_70);
  }
  _objc_release(puVar8);
  _objc_release(param_3);
  return;
}



/* Entry: 107e11f3c; end: 107e11f97;  */

void FUN_107e11f3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))
            (lVar3,uVar1,uVar2,*(undefined1 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e11f98; end: 107e120d3;  */

void FUN_107e11f98(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  _objc_retain(*(undefined8 *)(param_2 + 0x80));
  _objc_retain(*(undefined8 *)(param_2 + 0x88));
  _objc_retain(*(undefined8 *)(param_2 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x98,*(undefined8 *)(param_2 + 0x98),7);
  return;
}



/* Entry: 107e120d4; end: 107e12377; -[SCGalleryDataMutator _replacePhotoSnap:photo:rawMediaAssetCloudFile:originalSnapCloudFile:entry:duration:isInfiniteDuration:overlayFormat:overlay:snapAssets:assetMedias:userContext:loggingParams:completionHandler:] */

void FUN_107e120d4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_107e12378;
  puStack_f8 = &UNK_110a0de58;
  uStack_f0 = param_14;
  uStack_b8 = param_10;
  uStack_b0 = param_11;
  uStack_a8 = param_12;
  uStack_90 = param_16;
  uStack_a0 = param_13;
  uStack_98 = param_15;
  uStack_e8 = param_5;
  uStack_e0 = param_8;
  lStack_d8 = param_2;
  uStack_d0 = param_4;
  uStack_c8 = param_6;
  uStack_c0 = param_7;
  uStack_88 = param_1;
  uStack_80 = param_9;
  _objc_retain();
  _objc_retain(param_16);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_14);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_110);
  _objc_release(uStack_98);
  _objc_release(uStack_90);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(param_15);
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_14);
  return;
}



/* Entry: 107e12378; end: 107e131ff;  */

void FUN_107e12378(long param_1,undefined **param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  ulong in_stack_fffffffffffffc40;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  long lStack_260;
  undefined *puStack_258;
  long lStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_188;
  undefined *puStack_180;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c14bf80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = *(undefined **)(param_1 + 0x28);
  _UIImageJPEGRepresentation(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  iVar2 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c080ca0();
  if (iVar2 != 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xe8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    func_0x00010bf8c360(*(undefined8 *)(param_1 + 0x88));
    goto LAB_107e131a4;
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c14bf80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(puVar4);
  func_0x00010c0aeb80(uVar5);
  _objc_release(uVar6);
  _objc_release();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126bf910;
  func_0x00010c2aebc0(PTR_PTR_1126bf910);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126bf6e8;
  func_0x00010c273760(PTR_PTR_1126bf6e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216ee0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar10);
  func_0x00010c204680(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c192d40((float)*(double *)(param_1 + 0x88),puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a65c0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1d0720(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c192ce0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1ac2c0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dca80(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar10);
  func_0x00010c1f5ce0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c203960(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c203f40(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    if (*(long *)(param_1 + 0x48) != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c23f420(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfece40();
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c23f420();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar6;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      uVar25 = uVar14;
      func_0x00010010fab4(uVar14,PTR_DAT_1126a4fc0);
      uVar6 = uVar14;
      if ((int)uVar25 == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar14);
      uVar14 = uVar6;
      func_0x00010bf0b260(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      func_0x00010c1c4880(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar14);
    }
  }
  else {
    func_0x00010c1c4880(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar10 = puVar7;
  func_0x00010bf21f60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lVar8 = *(long *)(param_1 + 0x60);
  func_0x000109023474();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar32 = *plStack_1c0;
    do {
      lVar33 = 0;
      puVar12 = puVar10;
      do {
        if (*plStack_1c0 != lVar32) {
          _objc_enumerationMutation(lVar8);
        }
        puVar10 = *(undefined **)(lStack_1c8 + lVar33 * 8);
        func_0x00010c067fc0(puVar10);
        FUN_107e2e020();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        lVar33 = lVar33 + 1;
        puVar12 = puVar10;
      } while (lVar9 != lVar33);
      lVar9 = lVar8;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(lVar8);
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  lStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  plStack_200 = (long *)0x0;
  lVar8 = *(long *)(param_1 + 0x60);
  func_0x000109023564();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar32 = *plStack_200;
    do {
      lVar33 = 0;
      puVar12 = puVar10;
      do {
        if (*plStack_200 != lVar32) {
          _objc_enumerationMutation(lVar8);
        }
        puVar10 = *(undefined **)(lStack_208 + lVar33 * 8);
        func_0x00010c067fc0(puVar10);
        func_0x000107e2e18c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        lVar33 = lVar33 + 1;
        puVar12 = puVar10;
      } while (lVar9 != lVar33);
      lVar9 = lVar8;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(lVar8);
  ppuVar11 = (undefined **)0xffffffffc6a0f69d;
  func_0x000107e2e18c(0xffffffffc6a0f69d,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + 0x40);
  ppuVar13 = ppuVar11;
  func_0x00010c241220(ppuVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c07b240(uVar6);
  uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x70);
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x68);
  puVar10 = PTR_PTR_1126bf788;
  _objc_alloc(PTR_PTR_1126bf788);
  func_0x00010c017ba0();
  FUN_107e2b7cc(uVar25,ppuVar13,uVar6,puVar12,uVar14,uVar34,1,puVar10,
                in_stack_fffffffffffffc40 & 0xffffffffffffff00);
  _objc_release(puVar10);
  _objc_release(uVar14);
  _objc_release(ppuVar13);
  ppuVar13 = ppuVar11;
  func_0x00010c241220(ppuVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar12;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar13);
  puVar10 = puVar15;
  func_0x00010c0719c0();
  if ((int)puVar10 == 0) {
    uVar6 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar14;
    func_0x00010c0bc420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
  }
  puVar16 = puVar15;
  param_2 = ppuVar11;
  FUN_107e2bf14();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar11);
  if (puVar4 == (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
LAB_107e12a44:
    lVar8 = *(long *)(param_1 + 0x38);
    uVar14 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010bf1d1a0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    lStack_250 = 0;
    puVar10 = puVar15;
    func_0x00010becef00();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lStack_250;
    _objc_retain(lStack_250);
    _objc_release(uVar14);
    if ((lVar9 == 0) && (lVar8 != 0)) {
      uVar14 = *(undefined8 *)(param_1 + 0x70);
      puVar10 = puVar15;
      func_0x00010c086560(puVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar15;
      func_0x00010bdc1800(puVar15);
      _objc_retainAutoreleasedReturnValue();
      lVar32 = *(long *)(param_1 + 0x38);
      FUN_107e2d6ec(uVar14,0,puVar16,puVar10,puVar18,uVar6,*(undefined8 *)(lVar32 + 0x58),
                    *(undefined8 *)(lVar32 + 0x78),*(undefined8 *)(lVar32 + 0xd8));
      _objc_release(puVar18);
      _objc_release(puVar10);
      if ((puVar17 == (undefined *)0x0) &&
         (puVar18 = *(undefined **)(param_1 + 0x48), puVar18 != (undefined *)0x0)) {
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar17);
        puVar18 = puVar17;
      }
      param_2 = *(undefined ***)(param_1 + 0x40);
      uVar25 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x58);
      func_0x00010c269d40(uVar25);
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puVar16;
      puVar10 = puVar18;
      func_0x0001080199ec(puVar16,param_2,lVar8,puVar18,0,uVar25);
      _objc_release(uVar25);
      func_0x00010c11bda0(lVar8);
      func_0x00010c11bda0(puVar17);
      if (((uint)puVar26 & (uint)uVar14 & 1) == 0) {
        puVar26 = *(undefined **)(param_1 + 0x80);
        if (puVar26 == (undefined *)0x0) goto LAB_107e1315c;
        puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_2a0 = 0xc2000000;
        pcStack_298 = FUN_107e1327c;
        puStack_290 = &UNK_110849530;
        _objc_retain(puVar26);
        param_2 = &puStack_2a8;
        puStack_288 = puVar26;
        func_0x000100162d98("APPSTORE");
        puVar26 = puStack_288;
      }
      else {
        if (lVar3 != 0) {
          func_0x00010c08fa60(lVar3);
        }
        puVar10 = PTR_PTR_1126bf8f8;
        func_0x00010c2aebe0();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar10;
        func_0x00010c1d7460();
        _objc_retainAutoreleasedReturnValue();
        puVar26 = puVar19;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar19);
        _objc_release(puVar10);
        if (lVar3 != 0) {
          func_0x00010c08fa60(lVar3);
        }
        puVar19 = PTR_PTR_1126d7f18;
        _objc_alloc();
        func_0x00010c00e960();
        puVar20 = PTR_PTR_1126d7f38;
        _objc_alloc();
        uVar14 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010bf97200(uVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar25 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c241220(uVar25);
        _objc_retainAutoreleasedReturnValue();
        uVar34 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x40);
        func_0x00010c269d40(uVar34);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0102a0();
        _objc_release(uVar34);
        _objc_release(uVar25);
        _objc_release(uVar14);
        if (lVar3 != 0) {
          func_0x00010c08fa60(lVar3);
        }
        puVar10 = puVar16;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_180 = puVar10;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        uVar14 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_188 = uVar14;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar14);
        uVar14 = *(undefined8 *)(param_1 + 0x38);
        uVar25 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c241220(uVar25);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar16;
        func_0x00010c241220(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be22aa0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(uVar25);
        uVar25 = *(undefined8 *)(param_1 + 0x38);
        uVar34 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c241220(uVar34);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar16;
        func_0x00010c241220(puVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar23 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c245800(uVar23);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be23980();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar23);
        _objc_release(puVar10);
        _objc_release(uVar34);
        puVar24 = PTR_PTR_1126d7f28;
        func_0x00010bf5a1e0();
        _objc_retainAutoreleasedReturnValue();
        uVar34 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
        func_0x00010c269d40(uVar34);
        _objc_retainAutoreleasedReturnValue();
        uVar23 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
        func_0x00010c11de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar16);
        uVar28 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar28);
        uVar29 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar29);
        uVar30 = *(undefined8 *)(param_1 + 0x78);
        _objc_retain(uVar30);
        uVar31 = *(undefined8 *)(param_1 + 0x40);
        _objc_retain(uVar31);
        _objc_retain(lVar3);
        uVar27 = *(undefined8 *)(param_1 + 0x80);
        _objc_retain(uVar27);
        puVar10 = (undefined *)0x0;
        func_0x00010bf06e40(uVar34);
        _objc_release(uVar23);
        _objc_release(uVar34);
        _objc_release(uVar27);
        _objc_release(lVar3);
        _objc_release(uVar31);
        _objc_release(uVar30);
        _objc_release(uVar29);
        _objc_release(uVar28);
        _objc_release(puVar16);
        _objc_release(puVar24);
        _objc_release(uVar25);
        _objc_release(uVar14);
        _objc_release(puVar22);
        _objc_release(puVar21);
        _objc_release(puVar20);
        _objc_release(puVar19);
      }
      _objc_release(puVar26);
    }
    else {
      puVar18 = *(undefined **)(param_1 + 0x80);
      if (puVar18 == (undefined *)0x0) goto LAB_107e13160;
      puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_278 = 0xc2000000;
      uStack_270 = 0x107e13260;
      puStack_268 = &UNK_11084aaa8;
      _objc_retain(puVar18);
      puStack_258 = puVar18;
      _objc_retain(lVar9);
      lStack_260 = lVar9;
      param_2 = &puStack_280;
      func_0x000100162d98("APPSTORE");
      _objc_release(lStack_260);
      puVar18 = puStack_258;
    }
LAB_107e1315c:
    _objc_release(puVar18);
LAB_107e13160:
    _objc_release(lVar8);
  }
  else {
    puVar17 = *(undefined **)(param_1 + 0x38);
    lStack_218 = 0;
    puVar10 = puVar15;
    func_0x00010becef00();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lStack_218;
    _objc_retain(lStack_218);
    if ((lVar9 == 0) && (puVar17 != (undefined *)0x0)) goto LAB_107e12a44;
    lVar8 = *(long *)(param_1 + 0x80);
    if (lVar8 != 0) {
      puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_240 = 0xc2000000;
      pcStack_238 = FUN_107e13244;
      puStack_230 = &UNK_11084aaa8;
      _objc_retain(lVar8);
      lStack_220 = lVar8;
      _objc_retain(lVar9);
      lStack_228 = lVar9;
      param_2 = &puStack_248;
      func_0x000100162d98("APPSTORE");
      _objc_release(lStack_228);
      lVar8 = lStack_220;
      goto LAB_107e13160;
    }
  }
  _objc_release(lVar9);
  _objc_release(puVar17);
  _objc_release(uVar6);
  _objc_release(puVar15);
  _objc_release(puVar12);
  _objc_release(puVar16);
  _objc_release(puVar7);
LAB_107e131a4:
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf0b760();
  if ((uint)param_2 < 0x16) {
    func_0x00010b697928();
    bVar1 = param_2 == (undefined **)0x3;
  }
  else {
    bVar1 = false;
  }
  *puVar10 = bVar1;
  return;
}



/* Entry: 107e13200; end: 107e13243;  */

void FUN_107e13200(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  
  func_0x00010bf0b760();
  if ((uint)param_2 < 0x16) {
    func_0x00010b697928();
    bVar1 = param_2 == 3;
  }
  else {
    bVar1 = false;
  }
  *(bool *)param_4 = bVar1;
  return;
}



/* Entry: 107e13244; end: 107e1327b;  */

void FUN_107e13244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e1325c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e1327c; end: 107e132eb;  */

void FUN_107e1327c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,PTR_PTR_113248f38,
                      uRam0000000113248f40,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0,0,0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107e132ec; end: 107e1354b;  */

void FUN_107e132ec(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af4d0;
  puVar8 = (undefined *)0x0;
  if ((param_2 != 0) && (param_3 == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar8 = puVar2;
    if (puVar2 != (undefined *)0x0) {
      ppuVar3 = *(undefined ***)(param_1 + 0x30);
      func_0x00010c247520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar3 == &PTR____CFConstantStringClassReference_110ec3438) {
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
        uVar11 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010bf4eae0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bf8a8c0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x118);
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xc0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c079c80();
        FUN_107e2c4bc(uVar9,puVar2,uVar11,0,1,uVar1,0,uVar4,uVar12,(char)uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar1);
      }
      uVar7 = *(ulong *)(param_1 + 0x38);
      func_0x00010c07b240();
      if ((uVar7 & 1) == 0) {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa0);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfecaa0();
        _objc_release(uVar1);
      }
    }
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010c08fa60();
  }
  lVar10 = *(long *)(param_1 + 0x58);
  if (lVar10 != 0) {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107e1354c;
    puStack_90 = &UNK_110855c70;
    _objc_retain(lVar10);
    lStack_70 = lVar10;
    _objc_retain(puVar8);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puStack_88 = puVar8;
    _objc_retain(uVar1);
    uStack_68 = (undefined1)param_2;
    uStack_80 = uVar1;
    _objc_retain(param_3);
    lStack_78 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_a8);
    _objc_release(lStack_78);
    _objc_release(uStack_80);
    _objc_release(puStack_88);
    _objc_release(lStack_70);
  }
  _objc_release(puVar8);
  _objc_release(param_3);
  return;
}



/* Entry: 107e1354c; end: 107e135a7;  */

void FUN_107e1354c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))
            (lVar3,uVar1,uVar2,*(undefined1 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e135a8; end: 107e137cb; -[SCGalleryDataMutator _transientCloudFSContentFromContentData:dataVaultEncryption:masterKey:errorPtr:] */

void FUN_107e135a8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27a620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  if (param_3 == 0) {
    _objc_retain(uVar3);
    goto LAB_107e1378c;
  }
  _objc_retain(param_3);
  lVar4 = param_4;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
LAB_107e13734:
    bVar1 = false;
    lVar4 = param_3;
  }
  else {
    lVar5 = param_4;
    func_0x00010bdc1800();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      _objc_release(lVar4);
      goto LAB_107e13734;
    }
    uVar6 = *(ulong *)(param_1 + 0xd8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c232f00();
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    if ((uVar7 & 1) != 0) goto LAB_107e13734;
    lVar8 = *(long *)(param_1 + 0x78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    func_0x00010c086560(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_4;
    func_0x00010bdc1800(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar8;
    func_0x00010c156cc0(lVar8,param_2,param_3,lVar5,lVar9,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(lVar9);
    _objc_release(lVar5);
    _objc_release(lVar8);
    bVar1 = lVar4 != 0;
  }
  func_0x00010c182c60(uVar3,param_2,bVar1);
  uVar10 = uVar3;
  func_0x00010bfad160(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c14e080(lVar4,param_2,uVar10,1,param_6);
  if ((int)lVar5 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar10);
  _objc_release(lVar4);
LAB_107e1378c:
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107e137cc; end: 107e13897; -[SCGalleryDataMutator _getSnapIdsToAddHighlightForReplaceSnapOperationsWithOriginalSnapId:editedSnapId:] */

void FUN_107e137cc(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar2 = &uStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = PTR_PTR_1126af4d0;
  func_0x00010bfa7720(PTR_PTR_1126af4d0,param_2,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar3 = 1;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_40 = param_4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = (undefined1 *)puVar2;
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    _objc_retain(uVar3);
    _objc_retain(param_5);
    puVar1 = param_5;
    func_0x00010c0e00e0(param_5,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = param_5;
      func_0x00010c0d3c80(param_5);
      func_0x00010c12d3e0();
      func_0x00010c1d0640(puVar5,param_2,puVar1,uVar3);
    }
    puVar4 = puVar5;
    func_0x00010bf51e00(puVar5);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(param_5);
    _objc_release(uVar3);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107e13898; end: 107e13963; -[SCGalleryDataMutator _getUpdatedSnapsOrderForReplaceSnapOperationsWithOriginalSnapId:editedSnapId:existingSnapsOrder:] */

void FUN_107e13898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c0e00e0(param_5,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_5;
    func_0x00010c0d3c80(param_5);
    func_0x00010c12d3e0();
    func_0x00010c1d0640(lVar3,param_2,lVar1,param_4);
  }
  lVar2 = lVar3;
  func_0x00010bf51e00(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107e13964; end: 107e13a47; -[SCGalleryDataMutator toggleFavoriteStateForSnap:userContext:completionHandler:] */

void FUN_107e13964(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107e13a48;
  puStack_68 = &UNK_1108465d0;
  uStack_60 = param_3;
  lStack_58 = param_1;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e13a48; end: 107e13c6f;  */

void FUN_107e13a48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa7060(PTR_PTR_1126af4c0,param_2,*(undefined8 *)(param_1 + 0x20),0,
                      *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xb0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa73e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    uVar2 = uVar3;
    func_0x00010c0b8600(uVar3,param_2,&PTR___NSConcreteGlobalBlock_110a0de88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar5 = puVar4;
    func_0x00010c0d3c80(puVar4);
    puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bf4b900(puVar4,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar2);
    _objc_retainAutoreleasedReturnValue();
    if ((int)puVar8 == 0) {
      func_0x00010befa120(puVar5,param_2,uVar2);
      puVar8 = puVar6;
    }
    else {
      func_0x00010c12d360();
      puVar8 = puVar7;
    }
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar8,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar8 = puVar5;
    func_0x00010bf51e00(puVar5);
    puVar9 = puVar6;
    func_0x00010bf51e00(puVar6);
    puVar10 = puVar7;
    func_0x00010bf51e00(puVar7);
    func_0x00010be0e700(uVar2,param_2,puVar8,puVar1,puVar9,puVar10,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38));
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107e13c70; end: 107e13c77;  */

void FUN_107e13c70(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107e13c78; end: 107e13db7; -[SCGalleryDataMutator toggleFavoriteStateForSnaps:withInEntry:userContext:completionHandler:] */

void FUN_107e13c78(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,0,0,0,0);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_6);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_5);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e13db8; end: 107e141fb;  */

/* WARNING: Possible PIC construction at 0x000107e13ed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107e13f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107e13fb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107e14008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107e13fdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107e1400c) */
/* WARNING: Removing unreachable block (ram,0x000107e13fb4) */
/* WARNING: Removing unreachable block (ram,0x000107e13f80) */
/* WARNING: Removing unreachable block (ram,0x000107e13fd4) */
/* WARNING: Removing unreachable block (ram,0x000107e13fd8) */
/* WARNING: Removing unreachable block (ram,0x000107e13fa8) */
/* WARNING: Removing unreachable block (ram,0x000107e1402c) */
/* WARNING: Removing unreachable block (ram,0x000107e14038) */
/* WARNING: Removing unreachable block (ram,0x000107e13fac) */
/* WARNING: Removing unreachable block (ram,0x000107e13ed4) */
/* WARNING: Removing unreachable block (ram,0x000107e14054) */
/* WARNING: Removing unreachable block (ram,0x000107e141f8) */
/* WARNING: Removing unreachable block (ram,0x000107e141d8) */
/* WARNING: Removing unreachable block (ram,0x000107e13f48) */
/* WARNING: Removing unreachable block (ram,0x000107e13f54) */
/* WARNING: Removing unreachable block (ram,0x000107e13f58) */
/* WARNING: Removing unreachable block (ram,0x000107e13f68) */
/* WARNING: Removing unreachable block (ram,0x000107e13f70) */
/* WARNING: Removing unreachable block (ram,0x000107e13fe0) */
/* WARNING: Removing unreachable block (ram,0x000107e13ffc) */

void FUN_107e13db8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x28) == 0) {
    func_0x00010bfa7060();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(*(long *)(param_1 + 0x28));
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0xb0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa73e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c0b8600(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c0d3c80(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107e141fc; end: 107e1420b;  */

void FUN_107e141fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107e1420c; end: 107e1442f;  */

void FUN_107e1420c(long param_1,long param_2,undefined8 *param_3,undefined1 *param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
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
  puVar5 = param_3;
  puVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    puVar5 = param_3;
    puVar4 = param_4;
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
  if (((int)param_4 != 0) && (param_5 == 0)) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    puVar5 = &uStack_130;
    puVar4 = auStack_f0;
    puVar2 = param_3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined8 *)0x0) {
      lVar1 = *plStack_120;
      do {
        puVar5 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar1) {
            _objc_enumerationMutation(param_3);
          }
          uVar6 = *(undefined8 *)(lStack_128 + (long)puVar5 * 8);
          iVar7 = (int)*(undefined8 *)(param_1 + 0x20);
          uVar3 = uVar6;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4b900();
          _objc_release(uVar3);
          if (iVar7 != 0) {
            func_0x00010c241220(uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf4b900();
            _objc_release(uVar6);
            uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0xc0);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = *(undefined8 *)(param_1 + 0x38);
            func_0x00010bf4eae0();
            _objc_retainAutoreleasedReturnValue();
            param_6 = uVar6;
            func_0x00010c0a1b80(uVar3);
            _objc_release(uVar6);
            _objc_release(uVar3);
          }
          puVar5 = (undefined8 *)((long)puVar5 + 1);
        } while (puVar2 != puVar5);
        puVar5 = &uStack_130;
        puVar4 = auStack_f0;
        puVar2 = param_3;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(puVar4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar3 = *(undefined8 *)(param_2 + 8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  return;
}



/* Entry: 107e14430; end: 107e1454b; -[SCGalleryDataMutator changeFavoriteStateForSnaps:entries:needFavorited:userContext:completionHandler:] */

void FUN_107e14430(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107e1454c;
  puStack_88 = &UNK_11097c050;
  uStack_80 = param_3;
  uStack_78 = param_4;
  lStack_70 = param_1;
  uStack_68 = param_6;
  uStack_60 = param_7;
  uStack_58 = param_5;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_a0);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e1454c; end: 107e14e97;  */

/* WARNING: Possible PIC construction at 0x000107e14720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107e14760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107e1486c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107e14b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107e14b74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107e14bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107e14ba0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107e14bd0) */
/* WARNING: Removing unreachable block (ram,0x000107e14b78) */
/* WARNING: Removing unreachable block (ram,0x000107e14b44) */
/* WARNING: Removing unreachable block (ram,0x000107e14b98) */
/* WARNING: Removing unreachable block (ram,0x000107e14b9c) */
/* WARNING: Removing unreachable block (ram,0x000107e14b6c) */
/* WARNING: Removing unreachable block (ram,0x000107e14bf0) */
/* WARNING: Removing unreachable block (ram,0x000107e14b70) */
/* WARNING: Removing unreachable block (ram,0x000107e14870) */
/* WARNING: Removing unreachable block (ram,0x000107e148a8) */
/* WARNING: Removing unreachable block (ram,0x000107e14898) */
/* WARNING: Removing unreachable block (ram,0x000107e148d4) */
/* WARNING: Removing unreachable block (ram,0x000107e14c50) */
/* WARNING: Removing unreachable block (ram,0x000107e14c68) */
/* WARNING: Removing unreachable block (ram,0x000107e14904) */
/* WARNING: Removing unreachable block (ram,0x000107e14944) */
/* WARNING: Removing unreachable block (ram,0x000107e14970) */
/* WARNING: Removing unreachable block (ram,0x000107e149b0) */
/* WARNING: Removing unreachable block (ram,0x000107e14a40) */
/* WARNING: Removing unreachable block (ram,0x000107e14a84) */
/* WARNING: Removing unreachable block (ram,0x000107e14ac0) */
/* WARNING: Removing unreachable block (ram,0x000107e14af8) */
/* WARNING: Removing unreachable block (ram,0x000107e14b34) */
/* WARNING: Removing unreachable block (ram,0x000107e14764) */
/* WARNING: Removing unreachable block (ram,0x000107e14724) */
/* WARNING: Removing unreachable block (ram,0x000107e14788) */
/* WARNING: Removing unreachable block (ram,0x000107e14794) */
/* WARNING: Removing unreachable block (ram,0x000107e1475c) */
/* WARNING: Removing unreachable block (ram,0x000107e14ba4) */
/* WARNING: Removing unreachable block (ram,0x000107e14bc0) */

void FUN_107e1454c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_3a0;
  undefined *puStack_388;
  undefined8 uStack_380;
  code *pcStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  long lStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 *puStack_300;
  undefined1 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined1 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  _dispatch_group_create();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + 0x20);
  func_0x00010c0d3c80();
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lVar12 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar12);
  lStack_3a0 = lVar12;
  func_0x00010bf52a60();
  if (lStack_3a0 != 0) {
    lVar11 = *plStack_240;
    do {
      lVar13 = 0;
      do {
        if (*plStack_240 != lVar11) {
          _objc_enumerationMutation(lVar12);
        }
        lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 0xb0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010bfa7340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar9);
        func_0x00010befa160(lVar8);
        uStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        uStack_260 = 0;
        puStack_288 = (undefined8 *)0x0;
        uStack_290 = 0;
        uStack_278 = 0;
        plStack_280 = (long *)0x0;
        _objc_retain(lVar10);
        lVar9 = lVar10;
        func_0x00010bf52a60();
        if (lVar9 != 0) {
          if (*plStack_280 != *plStack_280) {
            _objc_enumerationMutation(lVar10);
          }
          uVar14 = *puStack_288;
          goto code_r0x00010c241220;
        }
        _objc_release(lVar10);
        _objc_release(lVar10);
        lVar13 = lVar13 + 1;
      } while (lVar13 != lStack_3a0);
      lStack_3a0 = lVar12;
      func_0x00010bf52a60();
    } while (lStack_3a0 != 0);
  }
  _objc_release(lVar12);
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  puStack_2c8 = (undefined8 *)0x0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  plStack_2c0 = (long *)0x0;
  _objc_retain(lVar8);
  lVar12 = lVar8;
  func_0x00010bf52a60();
  if (lVar12 == 0) {
    _objc_release(lVar8);
    func_0x00010bf529e0(puVar5);
    lVar12 = lVar8;
    func_0x000100817178(lVar8,&PTR___NSConcreteGlobalBlock_110a0df38);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2f0 = 0;
    uStack_2e0 = 0x2020000000;
    uStack_2d8 = 1;
    puStack_358 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_350 = 0xc2000000;
    pcStack_348 = FUN_107e14ea8;
    puStack_340 = &UNK_110a0df88;
    puStack_2e8 = &uStack_2f0;
    _objc_retain(puVar3);
    puStack_338 = puVar3;
    _objc_retain(lVar2);
    lStack_330 = lVar2;
    _objc_retain(puVar6);
    puStack_328 = puVar6;
    _objc_retain(puVar7);
    uVar15 = *(undefined8 *)(param_1 + 0x38);
    uVar14 = *(undefined8 *)(param_1 + 0x30);
    puStack_320 = puVar7;
    _objc_retain(*(undefined8 *)(param_1 + 0x38));
    uStack_318 = uVar14;
    uStack_310 = uVar15;
    _objc_retain(lVar12);
    uStack_2f8 = *(undefined1 *)(param_1 + 0x48);
    lStack_308 = lVar12;
    puStack_300 = &uStack_2f0;
    func_0x00010bf97ce0(puVar5);
    puStack_388 = puVar1;
    uStack_380 = 0xc2000000;
    pcStack_378 = FUN_107e15270;
    puStack_370 = &UNK_1108647e8;
    uVar14 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar14);
    uStack_368 = uVar14;
    puStack_360 = &uStack_2f0;
    func_0x000100bc0718(lVar2,PTR___dispatch_main_q_11034be20,&puStack_388);
    _objc_release(uStack_368);
    _objc_release(lStack_308);
    _objc_release(uStack_310);
    _objc_release(puStack_320);
    _objc_release(puStack_328);
    _objc_release(lStack_330);
    _objc_release(puStack_338);
    __Block_object_dispose(&uStack_2f0,8);
    _objc_release(lVar12);
    _objc_release(lVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
    uVar14 = 8;
    __Block_object_dispose(&uStack_2f0,8);
    __Unwind_Resume(lVar2);
  }
  else {
    if (*plStack_2c0 != *plStack_2c0) {
      _objc_enumerationMutation(lVar8);
    }
    uVar14 = *puStack_2c8;
  }
code_r0x00010c241220:
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar14,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107e14e98; end: 107e14ea7;  */

void FUN_107e14e98(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107e14ea8; end: 107e1526f;  */

void FUN_107e14ea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c0e00e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_group_enter(*(undefined8 *)(param_1 + 0x28));
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = uVar5;
  func_0x00010bf97200(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = uVar5;
  func_0x00010bf97200(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  uVar3 = uVar6;
  func_0x00010bf51e00(uVar6);
  uVar4 = uVar7;
  func_0x00010bf51e00(uVar7);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(*(undefined8 *)(param_1 + 0x48));
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar8);
  func_0x00010be0e700(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  return;
}



/* Entry: 107e15270; end: 107e15297;  */

void FUN_107e15270(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107e15290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))
              (lVar1,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18),0);
    return;
  }
  return;
}



/* Entry: 107e15298; end: 107e154ef; -[SCGalleryDataMutator _favoritedSnapIds:entry:snapIdsToAddHighlight:snapIdsToDeleteHighlight:userContext:completionHandler:] */

void FUN_107e15298(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126d7f50;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf97200(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ab00(puVar1,param_2,uVar2,uVar4,param_3,param_7);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126d7f28;
  uVar4 = param_5;
  func_0x00010bf00560(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar2 = param_6;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010bf5a1e0(puVar3,param_2,0,0,0,0,0,uVar4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_107e154f0;
  puStack_80 = &UNK_110842040;
  uStack_78 = param_4;
  lStack_70 = param_1;
  uStack_68 = param_8;
  _objc_retain(param_8);
  _objc_retain(param_4);
  func_0x00010bf06e40(uVar4,param_2,puVar1,0,9,0,puVar3,0,uVar2,&puStack_98);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uStack_68);
  _objc_release(uStack_78);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 107e154f0; end: 107e1565b;  */

void FUN_107e154f0(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af4c0;
  puVar4 = (undefined *)0x0;
  puVar3 = (undefined *)0x0;
  if ((param_2 != 0) && (param_3 == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf97200(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa70a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126af4d0;
    func_0x00010bfa7380();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
  }
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 != 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107e1565c;
    puStack_70 = &UNK_110855c70;
    _objc_retain(lVar5);
    lStack_50 = lVar5;
    _objc_retain(puVar3);
    puStack_68 = puVar3;
    _objc_retain(puVar4);
    uStack_48 = (undefined1)param_2;
    puStack_60 = puVar4;
    _objc_retain(param_3);
    lStack_58 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_88);
    _objc_release(lStack_58);
    _objc_release(puStack_60);
    _objc_release(puStack_68);
    _objc_release(lStack_50);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 107e1565c; end: 107e15673;  */

void FUN_107e1565c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e15670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107e15674; end: 107e157d3; -[SCGalleryDataMutator saveTemporaryStory:reorderedSnaps:userContext:completionHandler:] */

void FUN_107e15674(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_6);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_6;
  func_0x000107e29e20(param_6,uVar1,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107e157d4; end: 107e1611b;  */

void FUN_107e157d4(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined1 *puVar20;
  undefined8 uVar21;
  long lVar22;
  undefined *puVar23;
  undefined **ppuVar24;
  undefined8 uVar25;
  undefined **unaff_x26;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong in_stack_fffffffffffffda0;
  undefined *puStack_1f0;
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
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
  puVar3 = PTR_PTR_1126d7f10;
  _objc_alloc_init();
  puVar4 = PTR_PTR_1126af4d0;
  func_0x00010bfa7380();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf529e0();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107e2c164(puVar5,puVar3,uVar6,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38),
                      *(undefined8 *)(param_1 + 0x40));
  _objc_release(uVar6);
  if ((int)puVar5 != 0) {
    puVar5 = puVar4;
    func_0x00010bf529e0();
    if (puVar5 < (undefined *)0x3e9) {
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
      _objc_retain(puVar4);
      puStack_1f0 = puVar4;
      func_0x00010bf52a60();
      if (puStack_1f0 != (undefined *)0x0) {
        lVar22 = *plStack_120;
        do {
          puVar23 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar22) {
              _objc_enumerationMutation(puVar4);
            }
            ppuVar24 = *(undefined ***)(lStack_128 + (long)puVar23 * 8);
            ppuVar10 = ppuVar24;
            func_0x00010bf8b0c0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar11 = ppuVar10;
            _objc_release();
            ppuStack_1c8 = (undefined **)PTR_PTR_1126af4d0;
            if (ppuVar10 == (undefined **)0x0) {
              ppuStack_1c8 = (undefined **)0x0;
LAB_107e159f0:
              func_0x00010011df08();
              _objc_retainAutoreleasedReturnValue();
              puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010bfecde0(*(undefined8 *)(param_1 + 0x30));
              func_0x00010c0df840(puVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar8);
              _objc_release(puVar12);
              puVar12 = PTR_PTR_1126bf910;
              func_0x00010c2aebc0(PTR_PTR_1126bf910);
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar12;
              func_0x00010c1d0720();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar13;
              func_0x00010c204680();
              _objc_retainAutoreleasedReturnValue();
              puVar15 = puVar14;
              func_0x00010c1b4ee0();
              _objc_retainAutoreleasedReturnValue();
              puVar16 = puVar15;
              func_0x00010bf21f60();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar15);
              _objc_release(puVar14);
              _objc_release(puVar13);
              _objc_release(puVar12);
              puVar12 = PTR_PTR_1126bc7b8;
              func_0x00010bfa7160();
              _objc_retainAutoreleasedReturnValue();
              puVar13 = PTR_PTR_1126bf8f8;
              func_0x00010c2aebe0();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar13;
              func_0x00010c1d0720();
              _objc_retainAutoreleasedReturnValue();
              puVar15 = puVar14;
              func_0x00010bf21f60();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar14);
              _objc_release(puVar13);
              puVar13 = PTR_PTR_1126bc7c8;
              func_0x00010bfa7220(PTR_PTR_1126bc7c8);
              _objc_retainAutoreleasedReturnValue();
              puVar14 = PTR_PTR_1126bf900;
              func_0x00010c2aec40(PTR_PTR_1126bf900);
              _objc_retainAutoreleasedReturnValue();
              puVar17 = puVar14;
              func_0x00010c1d0720();
              _objc_retainAutoreleasedReturnValue();
              puVar18 = puVar17;
              func_0x00010c204680();
              _objc_retainAutoreleasedReturnValue();
              puVar19 = puVar18;
              func_0x00010bf21f60();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar13);
              _objc_release(puVar18);
              _objc_release(puVar17);
              _objc_release(puVar14);
              func_0x00010befa120(puVar9);
              unaff_x26 = ppuVar24;
              if (ppuStack_1c8 != (undefined **)0x0) {
                unaff_x26 = ppuStack_1c8;
              }
              uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x70);
              func_0x00010c269d40(uVar6);
              _objc_retainAutoreleasedReturnValue();
              uVar25 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x68);
              puVar13 = PTR_PTR_1126bf788;
              _objc_alloc(PTR_PTR_1126bf788);
              func_0x00010c017ba0();
              in_stack_fffffffffffffda0 = in_stack_fffffffffffffda0 & 0xffffffffffffff00;
              FUN_107e2b7cc(unaff_x26,ppuVar11,0,puVar7,uVar6,uVar25,1,puVar13,
                            in_stack_fffffffffffffda0);
              _objc_release(puVar13);
              _objc_release(uVar6);
              puVar13 = puVar7;
              func_0x00010c0e00e0(puVar7);
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar13;
              func_0x000107e2bf14();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar16);
              _objc_release(puVar13);
              if (puVar12 != (undefined *)0x0) {
                uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x58);
                func_0x00010c269d40(uVar6);
                _objc_retainAutoreleasedReturnValue();
                func_0x0001080199ec(puVar14,ppuVar24,0,0,1,uVar6);
                _objc_release(uVar6);
              }
              puVar13 = PTR_PTR_1126d7f18;
              _objc_alloc(PTR_PTR_1126d7f18);
              func_0x00010c00e960();
              func_0x00010befa120(puVar5);
              _objc_release(puVar13);
              _objc_release(puVar19);
              _objc_release(puVar15);
              _objc_release(puVar12);
              _objc_release(puVar14);
              _objc_release(ppuVar11);
              _objc_release(ppuStack_1c8);
            }
            else {
              ppuVar11 = ppuVar24;
              func_0x00010bf8b0c0(ppuVar24);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfa72e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar11);
              if (ppuStack_1c8 != (undefined **)0x0) goto LAB_107e159f0;
            }
            puVar23 = puVar23 + 1;
          } while (puStack_1f0 != puVar23);
          puStack_1f0 = puVar4;
          func_0x00010bf52a60();
        } while (puStack_1f0 != (undefined *)0x0);
      }
      _objc_release(puVar4);
      puVar23 = puVar5;
      func_0x00010bf529e0();
      if (puVar23 == (undefined *)0x0) {
        puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_158 = 0xc2000000;
        pcStack_150 = FUN_107e1611c;
        puStack_148 = &UNK_11084aaa8;
        uVar6 = *(undefined8 *)(param_1 + 0x40);
        _objc_retain(uVar6);
        uStack_138 = uVar6;
        _objc_retain(puVar3);
        puStack_140 = puVar3;
        func_0x000100162d98("APPSTORE",&puStack_160);
        _objc_release(puStack_140);
        uVar6 = uStack_138;
      }
      else {
        func_0x00010bfbdda0(*(undefined8 *)(param_1 + 0x20));
        iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010bf977c0();
        if (iVar2 - 0x13U < 0x14) {
          func_0x00010bf529e0();
          puVar23 = puVar5;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar23;
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0ed100();
          _objc_release(puVar12);
          _objc_release(puVar23);
        }
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = auStack_168;
        _objc_initWeak(puVar20,*(long *)(param_1 + 0x28));
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        uVar25 = *(undefined8 *)(param_1 + 0x20);
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bf9e140();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c2711a0(uVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf977c0(*(undefined8 *)(param_1 + 0x20));
        func_0x00010c1577e0();
        func_0x00010c245cc0();
        puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1b8 = 0xc2000000;
        pcStack_1b0 = FUN_107e16134;
        puStack_1a8 = &UNK_110a0dfb8;
        _objc_copyWeak(auStack_170,auStack_168);
        _objc_retain(puVar20);
        uVar26 = *(undefined8 *)(param_1 + 0x20);
        puStack_1a0 = puVar20;
        _objc_retain(uVar26);
        uStack_198 = uVar26;
        _objc_retain(uVar6);
        uVar26 = *(undefined8 *)(param_1 + 0x38);
        uStack_190 = uVar6;
        _objc_retain(uVar26);
        uVar27 = *(undefined8 *)(param_1 + 0x40);
        unaff_x26 = &puStack_1c0;
        uStack_188 = uVar26;
        _objc_retain(uVar27);
        uStack_178 = uVar27;
        _objc_retain(puVar3);
        puStack_180 = puVar3;
        func_0x00010bdc6a40(uVar1);
        _objc_release(uVar21);
        _objc_release(uVar25);
        _objc_release(puStack_180);
        _objc_release(uStack_178);
        _objc_release(uStack_188);
        _objc_release(uStack_190);
        _objc_release(uStack_198);
        _objc_release(puStack_1a0);
        _objc_destroyWeak(auStack_170);
        _objc_release(puVar20);
        _objc_destroyWeak(auStack_168);
      }
      _objc_release(uVar6);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar5);
    }
    else {
      FUN_107e2eb08(puVar3,*(undefined8 *)(param_1 + 0x40));
    }
  }
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 10);
  _objc_destroyWeak(auStack_168);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x000107e16130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar3 + 0x28) + 0x10))
            (*(long *)(puVar3 + 0x28),0,0,*(undefined8 *)(puVar3 + 0x20));
  return;
}



/* Entry: 107e1611c; end: 107e16133;  */

void FUN_107e1611c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e16130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e16134; end: 107e16407;  */

void FUN_107e16134(long param_1,int param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
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
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar11 = (undefined *)0x0;
    puVar7 = (undefined *)0x0;
    if ((param_2 != 0) && (param_3 == 0)) {
      puVar11 = PTR_PTR_1126af4c0;
      func_0x00010bfa70a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126af4d0;
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      _objc_retain();
      puStack_178 = puVar7;
      func_0x00010bf52a60();
      if (puStack_178 != (undefined *)0x0) {
        lVar6 = *plStack_120;
        do {
          puVar8 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar6) {
              _objc_enumerationMutation(puVar7);
            }
            uVar12 = *(undefined8 *)(lStack_128 + (long)puVar8 * 8);
            uVar2 = *(ulong *)(param_1 + 0x28);
            func_0x00010c07b240();
            if ((uVar2 & 1) == 0) {
              func_0x00010bfecbe0(*(undefined8 *)(param_1 + 0x30));
            }
            uVar13 = *(undefined8 *)(lVar1 + 0x50);
            uVar3 = *(undefined8 *)(param_1 + 0x38);
            func_0x00010bf4eae0(uVar3);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar1;
            func_0x00010bf8a8c0(lVar1);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = *(undefined8 *)(lVar1 + 0x118);
            uVar5 = *(undefined8 *)(lVar1 + 0xc0);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar5;
            func_0x00010c079c80();
            FUN_107e2c4bc(uVar13,uVar12,puVar11,0,6,uVar3,0,lVar4,uVar9,(char)uVar10);
            _objc_release(uVar5);
            _objc_release(lVar4);
            _objc_release(uVar3);
            puVar8 = puVar8 + 1;
          } while (puStack_178 != puVar8);
          puStack_178 = puVar7;
          func_0x00010bf52a60();
        } while (puStack_178 != (undefined *)0x0);
      }
      _objc_release(puVar7);
      FUN_107e2cbcc(*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(param_1 + 0x28));
    }
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_107e16408;
    puStack_158 = &UNK_1108465d0;
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar10);
    uVar12 = *(undefined8 *)(param_1 + 0x40);
    puStack_150 = puVar11;
    puStack_148 = puVar7;
    uStack_138 = uVar10;
    _objc_retain(uVar12);
    uStack_140 = uVar12;
    _objc_retain(puVar7);
    _objc_retain(puVar11);
    func_0x000100162d98("APPSTORE",&puStack_170);
    _objc_release(uStack_140);
    _objc_release(puStack_148);
    _objc_release(puStack_150);
    _objc_release(uStack_138);
    _objc_release(puVar7);
    _objc_release(puVar11);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107e16418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x38) + 0x10))
            (*(long *)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),
             *(undefined8 *)(lVar1 + 0x30));
  return;
}



/* Entry: 107e16408; end: 107e1641b;  */

void FUN_107e16408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e16418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107e1641c; end: 107e1692f; -[SCGalleryDataMutator addMobMultiSnapWithVideoUrls:sojuMediaType:servletMediaFormat:orientation:overlayFormats:overlays:assetMedias:location:isPrivate:isInfiniteDuration:userContext:externalId:displayName:entrySource:cameraFrontFacing:createTimeOfFirstSnap:timeRanges:completionHandler:] */

void FUN_107e1641c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,byte param_11,undefined4 param_12,
                  undefined8 param_13,ulong param_14,undefined8 param_15,undefined8 param_16,
                  undefined1 param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  long lVar1;
  undefined1 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte bStack_90;
  undefined1 uStack_8e;
  ulong uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_107e16930;
  puStack_118 = &UNK_110a0dfe8;
  lStack_110 = param_1;
  _objc_retain(param_3);
  lStack_108 = param_3;
  uStack_a8 = param_4;
  _objc_retain(param_5);
  uStack_100 = param_5;
  uStack_a0 = param_6;
  _objc_retain(param_7);
  uStack_f8 = param_7;
  _objc_retain(param_8);
  uStack_f0 = param_8;
  _objc_retain(param_9);
  uStack_e8 = param_9;
  _objc_retain(param_10);
  uStack_e0 = param_10;
  bStack_90 = param_11;
  _objc_retain(param_13);
  uStack_d8 = param_13;
  uStack_98 = param_16;
  _objc_retain(param_14);
  uStack_d0 = param_14;
  _objc_retain(param_15);
  uStack_c8 = param_15;
  uStack_8e = param_17;
  _objc_retain(param_19);
  uStack_c0 = param_19;
  _objc_retain(param_20);
  uStack_b8 = param_20;
  _objc_retain(param_21);
  uStack_b0 = param_21;
  ppuVar3 = &puStack_130;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_14;
  FUN_107e2cdfc(param_14,(uint)param_11,uVar4,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar5 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = (ulong)(param_11 ^ 1);
    uVar6 = param_14;
    FUN_107e2cdfc(param_14,uVar16,uVar4,*(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (uVar6 == 0) {
      uVar16 = 0;
      (*(code *)ppuVar3[2])(ppuVar3);
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_88 = uVar6;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b2220;
      _objc_alloc();
      puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a560(puVar8);
      _objc_retain(param_14);
      _objc_retain(ppuVar3);
      func_0x00010c288c60(param_1);
      _objc_release(puVar8);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(ppuVar3);
      _objc_release(param_14);
    }
    _objc_release(uVar6);
  }
  else {
    uVar16 = uVar5;
    (*(code *)ppuVar3[2])(ppuVar3);
  }
  _objc_release(uVar5);
  _objc_release(ppuVar3);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(lStack_108);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0xa8);
  lVar18 = *(long *)(*(long *)(param_3 + 0x20) + 0x20);
  _objc_retain(uVar16);
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = *(long *)(*(long *)(param_3 + 0x20) + 0x20);
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  if (lVar14 != 0) {
    lVar1 = lVar14;
  }
  func_0x00010b5f6f04(uVar4,lVar11,lVar1,0x6d);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar18);
  func_0x00010bdc77c0(*(undefined8 *)(param_3 + 0x20));
  _objc_release(uVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = puVar7[0x38];
  uVar4 = *(undefined8 *)(puVar7 + 0x20);
  uVar15 = *(undefined8 *)(*(long *)(puVar7 + 0x28) + 0x40);
  func_0x00010c269d40(uVar15);
  _objc_retainAutoreleasedReturnValue();
  FUN_107e2cdfc(uVar4,uVar2,uVar15,*(undefined8 *)(*(long *)(puVar7 + 0x28) + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  (**(code **)(*(long *)(puVar7 + 0x30) + 0x10))(*(long *)(puVar7 + 0x30),uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}


