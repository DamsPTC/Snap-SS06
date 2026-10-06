/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104dbacf0; end: 104dbad67; -[SCPaymentsSelectEditListViewController _itemIsValid:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104dbacf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint unaff_w21;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_112712f3c) == 0) {
    unaff_w21 = *(byte *)(param_1 + _DAT_112712f48) ^ 1;
  }
  else if (*(long *)(param_1 + _DAT_112712f3c) == 1) {
    func_0x00010be71060(param_1,param_2,param_3);
    unaff_w21 = (uint)param_1;
  }
  _objc_release(param_3);
  return unaff_w21 & 1;
}



/* Entry: 104dbad68; end: 104dbae37; -[SCPaymentsSelectEditListViewController _paymentMethodIsValid:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104dbad68(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b06a0;
  _objc_opt_class(PTR_PTR_1126b06a0);
  uVar3 = param_3;
  func_0x00010c077980(param_3,param_2,puVar2);
  if ((int)uVar3 != 0) {
    uVar3 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c071ae0();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      func_0x00010c1796a0(param_3,param_2,*(undefined8 *)(param_1 + _DAT_112712f68));
    }
    uVar3 = param_3;
    func_0x00010bf76460();
    if ((uVar3 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010bf31d00(param_3);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = uVar3 == 0;
      _objc_release();
      goto LAB_104dbae1c;
    }
  }
  bVar1 = false;
LAB_104dbae1c:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104dbae38; end: 104dbb04b; -[SCPaymentsSelectEditListViewController _tappedOnItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbae38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b06a0;
  _objc_opt_class(PTR_PTR_1126b06a0);
  uVar5 = param_3;
  func_0x00010c077980(param_3,param_2,puVar1);
  if ((int)uVar5 == 0) {
    puVar1 = PTR_PTR_1126b06b8;
    _objc_opt_class(PTR_PTR_1126b06b8);
    uVar5 = param_3;
    func_0x00010c077980(param_3,param_2,puVar1);
    if ((int)uVar5 == 0) goto LAB_104dbb028;
    puVar1 = PTR_PTR_1126b0700;
    _objc_alloc(PTR_PTR_1126b0700);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112712f2c);
    lVar3 = param_1 + _DAT_112712f50;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bff2600(puVar1,param_2,param_3,uVar5,lVar3,*(undefined8 *)(param_1 + _DAT_112712f38)
                        ,0,0,*(undefined8 *)(param_1 + _DAT_112712f54));
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bf2d320(param_1);
    func_0x00010c2012a0(puVar1,param_2,lVar3);
  }
  else {
    puVar1 = PTR_PTR_1126b06f8;
    _objc_alloc(PTR_PTR_1126b06f8);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112712f2c);
    uVar6 = *(undefined8 *)(param_1 + _DAT_112712f34);
    uVar5 = param_3;
    func_0x00010bf31960(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf31d00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_112712f38);
    lVar3 = param_1 + _DAT_112712f4c;
    _objc_loadWeakRetained();
    func_0x00010bffffe0(puVar1,param_2,uVar4,uVar6,uVar5,uVar2,0,uVar7,lVar3,
                        *(undefined8 *)(param_1 + _DAT_112712f54));
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    func_0x00010c1ff680(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_112712f6c));
  }
  func_0x00010c213a60(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_112712f60));
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
  _objc_release(puVar1);
LAB_104dbb028:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dbb04c; end: 104dbb367; -[SCPaymentsSelectEditListViewController _tappedOnNewOrEditableItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbb04c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_112712f3c) == 0) {
    if (param_3 != 0) {
      puVar3 = PTR_PTR_1126b06b8;
      _objc_opt_class(PTR_PTR_1126b06b8);
      lVar4 = param_3;
      func_0x00010c077980(param_3,param_2,puVar3);
      if ((int)lVar4 != 0) {
        puVar3 = PTR_PTR_1126b0700;
        _objc_alloc(PTR_PTR_1126b0700);
        uVar5 = *(undefined8 *)(param_1 + _DAT_112712f2c);
        lVar4 = param_1 + _DAT_112712f50;
        _objc_loadWeakRetained(lVar4);
        func_0x00010bff2600(puVar3,param_2,param_3,uVar5,lVar4,
                            *(undefined8 *)(param_1 + _DAT_112712f38),
                            *(undefined8 *)(param_1 + _DAT_112712f68),0,
                            *(undefined8 *)(param_1 + _DAT_112712f54));
        _objc_release(lVar4);
        lVar4 = param_1;
        func_0x00010bf2d320(param_1);
        func_0x00010c2012a0(puVar3,param_2,lVar4);
        goto LAB_104dbb300;
      }
    }
    puVar3 = PTR_PTR_1126b0700;
    _objc_alloc(PTR_PTR_1126b0700);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112712f2c);
    lVar4 = param_1 + _DAT_112712f50;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bff2600(puVar3,param_2,0,uVar5,lVar4,*(undefined8 *)(param_1 + _DAT_112712f38),0,0,
                        *(undefined8 *)(param_1 + _DAT_112712f54));
    _objc_release(lVar4);
  }
  else {
    if (*(long *)(param_1 + _DAT_112712f3c) != 1) goto LAB_104dbb344;
    if (param_3 == 0) {
LAB_104dbb208:
      puVar3 = PTR_PTR_1126b06f8;
      _objc_alloc(PTR_PTR_1126b06f8);
      uVar5 = *(undefined8 *)(param_1 + _DAT_112712f2c);
      uVar6 = *(undefined8 *)(param_1 + _DAT_112712f34);
      uVar7 = *(undefined8 *)(param_1 + _DAT_112712f38);
      lVar4 = param_1 + _DAT_112712f4c;
      _objc_loadWeakRetained();
      func_0x00010bffffe0(puVar3,param_2,uVar5,uVar6,0,0,0,uVar7,lVar4,
                          *(undefined8 *)(param_1 + _DAT_112712f54));
    }
    else {
      puVar3 = PTR_PTR_1126b06a0;
      _objc_opt_class(PTR_PTR_1126b06a0);
      lVar4 = param_3;
      func_0x00010c077980(param_3,param_2,puVar3);
      if ((int)lVar4 == 0) goto LAB_104dbb208;
      puVar3 = PTR_PTR_1126b06f8;
      _objc_alloc(PTR_PTR_1126b06f8);
      uVar5 = *(undefined8 *)(param_1 + _DAT_112712f2c);
      uVar6 = *(undefined8 *)(param_1 + _DAT_112712f34);
      lVar4 = param_3;
      func_0x00010bf31960(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010bf31d00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + _DAT_112712f38);
      lVar2 = param_1 + _DAT_112712f4c;
      _objc_loadWeakRetained();
      func_0x00010bffffe0(puVar3,param_2,uVar5,uVar6,lVar4,lVar1,0,uVar7,lVar2,
                          *(undefined8 *)(param_1 + _DAT_112712f54));
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    _objc_release(lVar4);
    func_0x00010c1ff680(puVar3,param_2,*(undefined8 *)(param_1 + _DAT_112712f6c));
  }
LAB_104dbb300:
  func_0x00010c213a60(puVar3,param_2,*(undefined8 *)(param_1 + _DAT_112712f60));
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
  _objc_release(puVar3);
LAB_104dbb344:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dbb368; end: 104dbb3a3; -[SCPaymentsSelectEditListViewController _returnToPreviousScreen] */

void FUN_104dbb368(undefined8 param_1)

{
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dbb3a4; end: 104dbb523; -[SCPaymentsSelectEditListViewController _convertObfuscatedToCardDataModel:] */

void FUN_104dbb3a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        puVar3 = PTR_PTR_1126b0690;
        _objc_alloc();
        func_0x00010c0306e0();
        puVar4 = PTR_PTR_1126b06a0;
        _objc_alloc(PTR_PTR_1126b06a0);
        func_0x00010c034800();
        func_0x00010befa120(puVar8);
        _objc_release(puVar4);
        _objc_release(puVar3);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  puVar8 = PTR_PTR_1126b0698;
  ppuVar5 = &PTR____CFConstantStringClassReference_110db3278;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3278,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110db3298;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3298,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2374a0(puVar8);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  func_0x00010be354a0(param_3);
  return;
}



/* Entry: 104dbb524; end: 104dbb5ef; -[SCPaymentsSelectEditListViewController _loadItemsErrorHandler:] */

void FUN_104dbb524(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126b0698;
  ppuVar2 = &PTR____CFConstantStringClassReference_110db3278;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3278,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110db3298;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3298,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2374a0(puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010be354a0(param_1);
  return;
}



/* Entry: 104dbb5f0; end: 104dbb5f7;  */

void FUN_104dbb5f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__loadItems_112571088)
  ;
  return;
}



/* Entry: 104dbb5f8; end: 104dbb6b7; -[SCPaymentsSelectEditListViewController _loadItemsSuccessHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbb5f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010bde9280();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar2 = PTR_PTR_1126b0698;
  func_0x00010c246ac0(PTR_PTR_1126b0698,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112712f5c);
  *(undefined **)(param_1 + _DAT_112712f5c) = puVar3;
  _objc_release(uVar5);
  _objc_release(puVar2);
  func_0x00010bedf6a0(param_1);
  lVar4 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(lVar4);
  func_0x00010be354a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dbb6b8; end: 104dbb867; -[SCPaymentsSelectEditListViewController _loadItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbb6b8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + _DAT_112712f3c) == 0) {
    func_0x00010beb8160(param_1);
    lVar2 = (long)_DAT_112712f50;
    lVar1 = param_1 + lVar2;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 == 0) {
      return;
    }
    _objc_initWeak(auStack_38,param_1);
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained(param_1);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x104dbb8ec;
    puStack_70 = &UNK_11084fdb8;
    ppuVar3 = &puStack_88;
    _objc_copyWeak(auStack_68,auStack_38);
    func_0x00010bfa49a0(param_1);
  }
  else {
    if (*(long *)(param_1 + _DAT_112712f3c) != 1) {
      return;
    }
    func_0x00010beb8160(param_1);
    _objc_initWeak(auStack_38,param_1);
    param_1 = param_1 + _DAT_112712f4c;
    _objc_loadWeakRetained(param_1);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104dbb868;
    puStack_48 = &UNK_1108434e0;
    ppuVar3 = &puStack_60;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfa92a0(param_1);
  }
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(param_1);
  _objc_destroyWeak(ppuVar3 + 4);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104dbb868; end: 104dbb983;  */

void FUN_104dbb868(long param_1,long param_2,long param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    if (param_2 == 0) goto LAB_104dbb8d0;
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be4dc40();
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be4dbc0();
  }
  _objc_release(param_1);
LAB_104dbb8d0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104dbb984; end: 104dbbbb7; -[SCPaymentsSelectEditListViewController _fetchShippingCompletionHandler:error:] */

void FUN_104dbb984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x104dbba3c;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_4;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 104dbbbb8; end: 104dbbbbf;  */

void FUN_104dbbbb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__loadItems_112571088)
  ;
  return;
}



/* Entry: 104dbbbc0; end: 104dbc07b; -[SCPaymentsSelectEditListViewController _convertToShippingDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_104dbbbc0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
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
  puVar25 = param_3;
  _objc_retain(param_3);
  if (param_3 == (undefined8 *)0x0) {
    puStack_1d0 = (undefined8 *)0x0;
  }
  else {
    puStack_1d0 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
    _objc_retain(param_3);
    puVar25 = &uStack_130;
    puStack_1c8 = param_3;
    func_0x00010bf52a60(param_3,param_2,puVar25,auStack_f0,0x10);
    if (puStack_1c8 != (undefined8 *)0x0) {
      lVar24 = *plStack_120;
      do {
        puVar25 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar24) {
            _objc_enumerationMutation(param_3);
          }
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uVar27 = *(undefined8 *)(lStack_128 + (long)puVar25 * 8);
          uVar1 = uVar27;
          func_0x00010befd580();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010bfb18a0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar27;
          func_0x00010befd580();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c089720();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110db27b8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar2);
          _objc_release(uVar1);
          puVar6 = PTR_PTR_1126b06b8;
          _objc_alloc();
          uVar1 = uVar27;
          func_0x00010befd680();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar27;
          func_0x00010befd580();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010bfb18a0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar27;
          func_0x00010befd580();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar4;
          func_0x00010c089720();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar8 = uVar27;
          func_0x00010c070480(uVar27);
          func_0x00010c0df6e0(puVar9,param_2,uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar27;
          func_0x00010befd580();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar8;
          func_0x00010c25cae0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar27;
          func_0x00010befd580();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar11;
          func_0x00010c25cb00();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar27;
          func_0x00010befd580();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar13;
          func_0x00010bf39960();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar27;
          func_0x00010befd580();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar15;
          func_0x00010c252440();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar27;
          func_0x00010befd580();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uVar17;
          func_0x00010bf53220();
          _objc_retainAutoreleasedReturnValue();
          uVar19 = uVar27;
          func_0x00010befd580();
          _objc_retainAutoreleasedReturnValue();
          uVar20 = uVar19;
          func_0x00010c105660();
          _objc_retainAutoreleasedReturnValue();
          puVar22 = PTR__OBJC_CLASS___NSDate_1126ae770;
          uVar21 = uVar27;
          func_0x00010c08a780(uVar27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c15f620(puVar22,param_2,uVar21);
          _objc_retainAutoreleasedReturnValue();
          puVar23 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010c08a880(uVar27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c15f620(puVar23,param_2,uVar27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bff2680(puVar6,param_2,uVar1,puVar5,uVar3,uVar7,puVar9,uVar10,uVar12,uVar14,
                              uVar16,uVar18,uVar20,puVar22,puVar23);
          _objc_release(puVar23);
          _objc_release(uVar27);
          _objc_release(puVar22);
          _objc_release(uVar21);
          _objc_release(uVar20);
          _objc_release(uVar19);
          _objc_release(uVar18);
          _objc_release(uVar17);
          _objc_release(uVar16);
          _objc_release(uVar15);
          _objc_release(uVar14);
          _objc_release(uVar13);
          _objc_release(uVar12);
          _objc_release(uVar11);
          _objc_release(uVar10);
          _objc_release(uVar8);
          _objc_release(puVar9);
          _objc_release(uVar7);
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar2);
          _objc_release(uVar1);
          func_0x00010befa120(puStack_1d0,param_2,puVar6);
          _objc_release(puVar6);
          _objc_release(puVar5);
          puVar25 = (undefined8 *)((long)puVar25 + 1);
        } while (puStack_1c8 != puVar25);
        puVar25 = &uStack_130;
        puStack_1c8 = param_3;
        func_0x00010bf52a60(param_3,param_2,puVar25,auStack_f0,0x10);
      } while (puStack_1c8 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_1d0);
    return puStack_1d0;
  }
  ___stack_chk_fail();
  _objc_retain(puVar25);
  if (*(ulong *)((long)param_3 + (long)_DAT_112712f3c) < 2) {
    puVar26 = puVar25;
    func_0x00010bf76460(puVar25);
  }
  else {
    puVar26 = (undefined8 *)0x0;
  }
  _objc_release(puVar25);
  return puVar26;
}



/* Entry: 104dbc07c; end: 104dbc0d7; -[SCPaymentsSelectEditListViewController _shouldAllowEditingInvalidItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dbc07c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(ulong *)(param_1 + _DAT_112712f3c) < 2) {
    uVar1 = param_3;
    func_0x00010bf76460(param_3);
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104dbc0d8; end: 104dbc267; -[SCPaymentsSelectEditListViewController _showBlurView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbc0d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar4 = (long)_DAT_112712f70;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar4));
  lVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126afd30;
  _objc_alloc();
  func_0x00010bfffc60();
  lVar4 = (long)_DAT_112712f74;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104dbc268;
  puStack_50 = &UNK_1108471b0;
  lStack_48 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 104dbc268; end: 104dbc2ef;  */

void FUN_104dbc268(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104dbc2f0; end: 104dbc34f; -[SCPaymentsSelectEditListViewController _hideBlurView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbc2f0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112712f74;
  func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar3));
  lVar2 = (long)_DAT_112712f70;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dbc350; end: 104dbc4e3; -[SCPaymentsSelectEditListViewController _updateSelectedItemIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbc350(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = (long)_DAT_112712f5c;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = (long)_DAT_112712f44;
    *(undefined8 *)(param_1 + lVar1) = 0;
    lVar9 = (long)_DAT_112712f64;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        *(undefined8 *)(param_1 + lVar9));
    if ((int)puVar2 != 0) {
      if (*(long *)(param_1 + _DAT_112712f3c) == 1) {
        lVar3 = *(long *)(param_1 + lVar8);
        func_0x00010bf529e0();
        if (lVar3 != 0) {
          uVar6 = 0;
          do {
            uVar4 = *(undefined8 *)(param_1 + lVar8);
            func_0x00010c0dfd40(uVar4,param_2,uVar6);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = *(ulong *)(param_1 + lVar9);
            uVar5 = uVar4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0720c0(uVar7,param_2,uVar5);
            _objc_release(uVar5);
            if ((uVar7 & 1) != 0) goto LAB_104dbc4c4;
            _objc_release(uVar4);
            uVar6 = uVar6 + 1;
            uVar7 = *(ulong *)(param_1 + lVar8);
            func_0x00010bf529e0();
          } while (uVar6 < uVar7);
        }
      }
      else if (*(long *)(param_1 + _DAT_112712f3c) == 0) {
        lVar3 = *(long *)(param_1 + lVar8);
        func_0x00010bf529e0();
        if (lVar3 != 0) {
          uVar6 = 0;
          do {
            uVar4 = *(undefined8 *)(param_1 + lVar8);
            func_0x00010c0dfd40(uVar4,param_2,uVar6);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = *(ulong *)(param_1 + lVar9);
            uVar5 = uVar4;
            func_0x00010befd680();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0720c0(uVar7,param_2,uVar5);
            _objc_release(uVar5);
            if ((uVar7 & 1) != 0) {
LAB_104dbc4c4:
              *(ulong *)(param_1 + lVar1) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__objc_release_11034d2d0)(uVar4);
              return;
            }
            _objc_release(uVar4);
            uVar6 = uVar6 + 1;
            uVar7 = *(ulong *)(param_1 + lVar8);
            func_0x00010bf529e0();
          } while (uVar6 < uVar7);
        }
      }
    }
  }
  return;
}



/* Entry: 104dbc4e4; end: 104dbc6f7; -[SCPaymentsSelectEditListViewController showErrorRetryCancelDialogWithTitle:message:retryActionHandler:cancelActionHandler:] */

void FUN_104dbc4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126af180;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af180;
  ppuVar2 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(ppuVar2);
  puVar5 = PTR_PTR_1126af4d8;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff880(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  func_0x00010c161280(puVar5);
  _objc_release(puVar6);
  func_0x00010c1612e0(0x3fba1cac083126e9,puVar5);
  puVar6 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c00();
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 104dbc6f8; end: 104dbc707;  */

void FUN_104dbc6f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 104dbc708; end: 104dbc723; -[SCPaymentsSelectEditListViewController _getPageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dbc708(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 6;
  if (*(long *)(param_1 + _DAT_112712f3c) != 0) {
    uVar1 = 7;
  }
  return uVar1;
}



/* Entry: 104dbc724; end: 104dbc753; -[SCPaymentsSelectEditListViewController displayId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbc724(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712f28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104dbc754; end: 104dbc763; -[SCPaymentsSelectEditListViewController mode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dbc754(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712f40);
}



/* Entry: 104dbc764; end: 104dbc773; -[SCPaymentsSelectEditListViewController itemType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dbc764(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712f3c);
}



/* Entry: 104dbc774; end: 104dbc793; -[SCPaymentsSelectEditListViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbc774(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112712f78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104dbc794; end: 104dbc7a7; -[SCPaymentsSelectEditListViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbc794(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112712f78,param_3);
  return;
}



/* Entry: 104dbc7a8; end: 104dbc7c7; -[SCPaymentsSelectEditListViewController userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbc7a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112712f30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104dbc7c8; end: 104dbc7d7; -[SCPaymentsSelectEditListViewController commerceLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dbc7c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712f2c);
}



/* Entry: 104dbc7d8; end: 104dbc7e7; -[SCPaymentsSelectEditListViewController checkoutShippingAddress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dbc7d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712f6c);
}



/* Entry: 104dbc7e8; end: 104dbc827; -[SCPaymentsSelectEditListViewController setCheckoutShippingAddress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbc7e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712f6c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dbc828; end: 104dbc837; -[SCPaymentsSelectEditListViewController canRemoveEditableItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104dbc828(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112712f24);
}



/* Entry: 104dbc838; end: 104dbc847; -[SCPaymentsSelectEditListViewController setCanRemoveEditableItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbc838(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112712f24) = param_3;
  return;
}



/* Entry: 104dbc848; end: 104dbc857; -[SCPaymentsSelectEditListViewController theme] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dbc848(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712f60);
}



/* Entry: 104dbc858; end: 104dbc867; -[SCPaymentsSelectEditListViewController setTheme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbc858(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112712f60) = param_3;
  return;
}



/* Entry: 104dbc868; end: 104dbc987; -[SCPaymentsSelectEditListViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbc868(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712f6c,0);
  _objc_storeStrong(param_1 + _DAT_112712f2c,0);
  _objc_destroyWeak(param_1 + _DAT_112712f30);
  _objc_destroyWeak(param_1 + _DAT_112712f78);
  _objc_storeStrong(param_1 + _DAT_112712f54,0);
  _objc_storeStrong(param_1 + _DAT_112712f38,0);
  _objc_storeStrong(param_1 + _DAT_112712f34,0);
  _objc_destroyWeak(param_1 + _DAT_112712f50);
  _objc_destroyWeak(param_1 + _DAT_112712f4c);
  _objc_storeStrong(param_1 + _DAT_112712f28,0);
  _objc_storeStrong(param_1 + _DAT_112712f74,0);
  _objc_storeStrong(param_1 + _DAT_112712f70,0);
  _objc_storeStrong(param_1 + _DAT_112712f68,0);
  _objc_storeStrong(param_1 + _DAT_112712f64,0);
  _objc_storeStrong(param_1 + _DAT_112712f7c,0);
  _objc_storeStrong(param_1 + _DAT_112712f80,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712f5c,0);
  return;
}



/* Entry: 104dbc988; end: 104dbca53; -[SCPaymentsSettingsTableViewCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104dbc988(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e4300;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithStyle_reuseIdentifier__1125f1528);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3fef5f5f60000000,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    func_0x00010c1faee0(puVar1);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112712f84) = 0;
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104dbca54; end: 104dbca57; -[SCPaymentsSettingsTableViewCell setItem:] */

void FUN_104dbca54(void)

{
  return;
}



/* Entry: 104dbca58; end: 104dbca5b; -[SCPaymentsSettingsTableViewCell setSelectedLayout] */

void FUN_104dbca58(void)

{
  return;
}



/* Entry: 104dbca5c; end: 104dbca5f; -[SCPaymentsSettingsTableViewCell setDeselectedLayout] */

void FUN_104dbca5c(void)

{
  return;
}



/* Entry: 104dbca60; end: 104dbca67; -[SCPaymentsSettingsTableViewCell isCellSelected] */

undefined8 FUN_104dbca60(void)

{
  return 0;
}



/* Entry: 104dbca68; end: 104dbca77; -[SCPaymentsSettingsTableViewCell setMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbca68(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112712f88) = param_3;
  return;
}



/* Entry: 104dbca78; end: 104dbca87; -[SCPaymentsSettingsTableViewCell setErrorState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbca78(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112712f84) = param_3;
  return;
}



/* Entry: 104dbca88; end: 104dbca97; -[SCPaymentsSettingsTableViewCell mode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dbca88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712f88);
}



/* Entry: 104dbca98; end: 104dbcaa7; -[SCPaymentsSettingsTableViewCell theme] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dbca98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712f8c);
}



/* Entry: 104dbcaa8; end: 104dbcab7; -[SCPaymentsSettingsTableViewCell setTheme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbcaa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112712f8c) = param_3;
  return;
}



/* Entry: 104dbcab8; end: 104dbcac7; -[SCPaymentsSettingsTableViewCell errorState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104dbcab8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112712f84);
}



/* Entry: 104dbcac8; end: 104dbcad7; -[SCPaymentsSettingsTableViewCell iconProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dbcac8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712f90);
}



/* Entry: 104dbcad8; end: 104dbcb17; -[SCPaymentsSettingsTableViewCell setIconProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbcad8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712f90;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dbcb18; end: 104dbcb2b; -[SCPaymentsSettingsTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbcb18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712f90,0);
  return;
}



/* Entry: 104dbcb2c; end: 104dbce43; -[SCPaymentsSettingsViewController initWithUserSession:commerceLogger:accountInfoProvider:paymentInfoProvider:configProvider:ordersProvider:paymentSettingsImageProvider:currentPageTracker:userBlizzardLogger:compositeImageFetcher:delegate:commerceIconProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104dbcb2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126e4308;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithUserBlizzardLogger__1125f4460,param_11);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar5 = (long)_DAT_112712f94;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112712f98;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712f9c);
    *(undefined **)((long)puVar1 + (long)_DAT_112712f9c) = puVar3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112712fa0;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_11;
    _objc_release(uVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110db3338;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3338,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712fa4);
    *(undefined ***)((long)puVar1 + (long)_DAT_112712fa4) = ppuVar4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112712fa8) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112712fac) = 0;
    lVar5 = (long)_DAT_112712fb0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112712fb4,param_13);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112712fb8,param_6);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112712fbc,param_5);
    lVar5 = (long)_DAT_112712fc0;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112712fc4,param_8);
    lVar5 = (long)_DAT_112712fc8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112712fcc;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_12;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112712fd0;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_14;
    _objc_release(uVar2);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104dbce44; end: 104dbce8b; -[SCPaymentsSettingsViewController loadView] */

void FUN_104dbce44(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4308;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_loadView_112604be0);
  func_0x00010c229760(param_1);
  return;
}



/* Entry: 104dbce8c; end: 104dbced3; -[SCPaymentsSettingsViewController viewDidLoad] */

void FUN_104dbce8c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4308;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c1cbec0(param_1);
  return;
}



/* Entry: 104dbced4; end: 104dbcf4f; -[SCPaymentsSettingsViewController viewWillAppear:] */

void FUN_104dbced4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4308;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c1cbec0(param_1);
  func_0x00010c09bde0(param_1);
  func_0x00010c09c020(param_1);
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5680();
  _objc_release(param_1);
  return;
}



/* Entry: 104dbcf50; end: 104dbcf5f; -[SCPaymentsSettingsViewController getTitle] */

void FUN_104dbcf50(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db2158;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110db2158,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104dbcf60; end: 104dbd00b; -[SCPaymentsSettingsViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbcf60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e4308;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112712f98);
  func_0x00010be6fa80(param_1);
  func_0x00010c24fc40();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712fd4);
  *(undefined8 *)(param_1 + _DAT_112712fd4) = uVar2;
  _objc_release(uVar1);
  func_0x00010c0abc20(*(undefined8 *)(param_1 + _DAT_112712fb0));
  return;
}



/* Entry: 104dbd00c; end: 104dbd073; -[SCPaymentsSettingsViewController viewWillDisappear:] */

void FUN_104dbd00c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4308;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillDisappear__112685438);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar1);
  return;
}



/* Entry: 104dbd074; end: 104dbd0db; -[SCPaymentsSettingsViewController leftSwipeSucceed] */

void FUN_104dbd074(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4308;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_leftSwipeSucceed_112601480);
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5660();
  _objc_release(param_1);
  return;
}



/* Entry: 104dbd0dc; end: 104dbd143; -[SCPaymentsSettingsViewController leftButtonPressed] */

void FUN_104dbd0dc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4308;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_leftButtonPressed_112601348);
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5660();
  _objc_release(param_1);
  return;
}



/* Entry: 104dbd144; end: 104dbd14b; -[SCPaymentsSettingsViewController shouldPopToRootViewController] */

undefined8 FUN_104dbd144(void)

{
  return 0;
}



/* Entry: 104dbd14c; end: 104dbd153; -[SCPaymentsSettingsViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_104dbd14c(void)

{
  return 1;
}



/* Entry: 104dbd154; end: 104dbd213; -[SCPaymentsSettingsViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbd154(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  lVar4 = (long)_DAT_112712fb0;
  func_0x00010c0abb20(*(undefined8 *)(param_1 + lVar4),param_2,3,0xffffffffffffffff,param_1);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfecde0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    func_0x00010bf94580(*(undefined8 *)(param_1 + lVar4));
  }
  puStack_48 = PTR_PTR_1126e4308;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidDisappear__112684c48,param_3);
  return;
}



/* Entry: 104dbd214; end: 104dbd2b7; -[SCPaymentsSettingsViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_104dbd214(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e4308;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc40();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 104dbd2b8; end: 104dbd487; -[SCPaymentsSettingsViewController setupTableView] */

void FUN_104dbd2b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b06e0;
  _objc_opt_class(PTR_PTR_1126b06e0);
  puVar4 = PTR_PTR_1126b06e0;
  _objc_opt_class(PTR_PTR_1126b06e0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125fe0(uVar1,param_2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b06f0;
  _objc_opt_class(PTR_PTR_1126b06f0);
  puVar4 = PTR_PTR_1126b06f0;
  _objc_opt_class(PTR_PTR_1126b06f0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125fe0(uVar1,param_2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0708;
  _objc_opt_class(PTR_PTR_1126b0708);
  puVar4 = PTR_PTR_1126b0708;
  _objc_opt_class(PTR_PTR_1126b0708);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125fe0(uVar1,param_2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar1);
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0610;
  _objc_opt_class(PTR_PTR_1126b0610);
  puVar4 = PTR_PTR_1126b0610;
  _objc_opt_class(PTR_PTR_1126b0610);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125fe0(param_1,param_2,puVar3,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dbd488; end: 104dbd4c3; -[SCPaymentsSettingsViewController didTapDoneButton] */

void FUN_104dbd488(undefined8 param_1)

{
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dbd4c4; end: 104dbd4d3; -[SCPaymentsSettingsViewController numberOfSectionsInTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbd4c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112712fd8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 104dbd4d4; end: 104dbd5a3; -[SCPaymentsSettingsViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104dbd4d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_112712fd8);
  func_0x00010c0dfd40(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  if (lVar2 != 2) {
    if (lVar2 == 1) {
      lVar1 = (long)_DAT_112712fdc;
      lVar2 = *(long *)(param_1 + lVar1);
      func_0x00010bf529e0();
      if (lVar2 != 0) {
        uVar3 = *(ulong *)(param_1 + lVar1);
        func_0x00010bf529e0();
        if (uVar3 < 3) {
          return *(long *)(param_1 + _DAT_112712fe0);
        }
      }
      lVar2 = *(long *)(param_1 + _DAT_112712fe0) + 1;
    }
    else if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + _DAT_112712f9c);
      func_0x00010bf529e0(lVar2);
      lVar2 = lVar2 + 1;
    }
    else {
      lVar2 = 1;
    }
  }
  return lVar2;
}



/* Entry: 104dbd5a4; end: 104dbd663; -[SCPaymentsSettingsViewController tableView:heightForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104dbd5a4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_5);
  lVar2 = *(long *)(param_2 + _DAT_112712fd8);
  lVar1 = param_5;
  func_0x00010c1554e0(param_5);
  func_0x00010c0dfd40(lVar2,param_3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c067fc0();
  _objc_release(lVar2);
  if ((lVar1 == 1) &&
     (lVar1 = param_5, func_0x00010c142240(), lVar1 < *(long *)(param_2 + _DAT_112712fe0))) {
    func_0x00010c0caae0(PTR_PTR_1126b0610);
  }
  else {
    param_1 = 0x4046000000000000;
  }
  _objc_release(param_5);
  return param_1;
}



/* Entry: 104dbd664; end: 104dbd673; -[SCPaymentsSettingsViewController tableView:heightForHeaderInSection:] */

void FUN_104dbd664(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfe0830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b0710,PTR_s_heightForTableHeaderInSection__1125d5bc8,in_x3);
  return;
}



/* Entry: 104dbd674; end: 104dbd723; -[SCPaymentsSettingsViewController tableView:viewForHeaderInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbd674(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112712fd8);
  func_0x00010c0dfd40(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  if (uVar2 < 3) {
    puVar3 = (&PTR_PTR_11084fe38)[uVar2];
    func_0x00010bcbeaa8(puVar3,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  puVar4 = PTR_PTR_1126b0710;
  func_0x00010c29cf80(PTR_PTR_1126b0710);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104dbd724; end: 104dbd977; -[SCPaymentsSettingsViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbd724(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = *(long *)(param_1 + _DAT_112712fd8);
  uVar1 = param_4;
  func_0x00010c1554e0(param_4);
  func_0x00010c0dfd40(lVar5,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c067fc0();
  _objc_release(lVar5);
  if (lVar2 == 2) {
    uVar1 = param_4;
    func_0x00010c142240();
    if (uVar1 == 1) {
      func_0x00010bde71e0(param_1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (uVar1 != 0) goto LAB_104dbd868;
      func_0x00010beb21a0(param_1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (lVar2 == 1) {
    uVar1 = param_4;
    func_0x00010c142240();
    if (*(long *)(param_1 + _DAT_112712fe0) <= (long)uVar1) {
      func_0x00010bee9260(param_1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104dbd950;
    }
    func_0x00010be84920(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar2 != 0) {
LAB_104dbd868:
      param_1 = 0;
      goto LAB_104dbd950;
    }
    uVar1 = param_4;
    func_0x00010c142240();
    uVar3 = *(ulong *)(param_1 + _DAT_112712f9c);
    func_0x00010bf529e0();
    if (uVar1 < uVar3) {
      func_0x00010c267f80(param_1,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar2 = param_1;
      func_0x00010c267f00(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b06f0;
      _objc_opt_class(PTR_PTR_1126b06f0);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010bf6e080(lVar2,param_2,puVar4,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(lVar2);
      func_0x00010c1aa7e0(lVar5,param_2,*(undefined8 *)(param_1 + _DAT_112712fc8));
      func_0x00010c1a97a0(lVar5,param_2,*(undefined8 *)(param_1 + _DAT_112712fd0));
      func_0x00010c17a540(lVar5,param_2,1);
      param_1 = lVar5;
    }
  }
  func_0x00010c160fc0();
LAB_104dbd950:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104dbd978; end: 104dbdde3; -[SCPaymentsSettingsViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbd978(undefined *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar6 = *(long *)(param_1 + _DAT_112712fd8);
  uVar1 = param_4;
  func_0x00010c1554e0(param_4);
  func_0x00010c0dfd40(lVar6,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c067fc0();
  _objc_release(lVar6);
  if (lVar2 == 2) {
    uVar1 = param_4;
    func_0x00010c142240();
    if (uVar1 == 1) {
      puVar7 = PTR_PTR_1126b0728;
      _objc_alloc(PTR_PTR_1126b0728);
      uVar8 = *(undefined8 *)(param_1 + _DAT_112712f94);
      uVar9 = *(undefined8 *)(param_1 + _DAT_112712fb0);
      uVar10 = *(undefined8 *)(param_1 + _DAT_112712f98);
      puVar5 = param_1 + _DAT_112712fbc;
      _objc_loadWeakRetained(puVar5);
      func_0x00010c05d3a0(puVar7,param_2,uVar8,uVar9,uVar10,puVar5);
      _objc_release(puVar5);
    }
    else {
      if (uVar1 != 0) goto LAB_104dbdda8;
      puVar7 = PTR_PTR_1126b0720;
      _objc_alloc();
      uVar8 = *(undefined8 *)(param_1 + _DAT_112712f94);
      uVar10 = *(undefined8 *)(param_1 + _DAT_112712fb0);
      uVar11 = *(undefined8 *)(param_1 + _DAT_112712fc8);
      uVar12 = *(undefined8 *)(param_1 + _DAT_112712f98);
      uVar9 = *(undefined8 *)(param_1 + _DAT_112712fa0);
      puVar5 = param_1 + _DAT_112712fb8;
      _objc_loadWeakRetained();
      puVar4 = param_1 + _DAT_112712fbc;
      _objc_loadWeakRetained();
      func_0x00010c0203c0(puVar7,param_2,0,0,uVar8,uVar10,uVar11,uVar12,uVar9,puVar5,puVar4,
                          *(undefined8 *)(param_1 + _DAT_112712fd0));
      _objc_release(puVar4);
      _objc_release(puVar5);
      func_0x00010c177c80(puVar7,param_2,1);
    }
LAB_104dbdd78:
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520();
  }
  else if (lVar2 == 1) {
    uVar1 = param_4;
    func_0x00010c142240();
    puVar7 = *(undefined **)(param_1 + _DAT_112712fdc);
    if (*(long *)(param_1 + _DAT_112712fe0) <= (long)uVar1) {
      func_0x00010bf529e0();
      if (puVar7 == (undefined *)0x0) goto LAB_104dbdda8;
      puVar7 = PTR_PTR_1126b0718;
      _objc_alloc(PTR_PTR_1126b0718);
      func_0x00010c05d3e0();
      goto LAB_104dbdd78;
    }
    uVar1 = param_4;
    func_0x00010c142240(param_4);
    func_0x00010c0dfd40(puVar7,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b0638;
    _objc_alloc(PTR_PTR_1126b0638);
    func_0x00010c05d3c0();
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520();
    _objc_release(param_1);
    param_1 = puVar5;
  }
  else {
    if (lVar2 != 0) goto LAB_104dbdda8;
    puVar7 = PTR_PTR_1126b06f8;
    _objc_alloc(PTR_PTR_1126b06f8);
    uVar8 = *(undefined8 *)(param_1 + _DAT_112712fb0);
    uVar9 = *(undefined8 *)(param_1 + _DAT_112712fc8);
    uVar10 = *(undefined8 *)(param_1 + _DAT_112712f98);
    puVar5 = param_1 + _DAT_112712fb8;
    _objc_loadWeakRetained();
    func_0x00010bffffe0(puVar7,param_2,uVar8,uVar9,0,0,0,uVar10,puVar5,
                        *(undefined8 *)(param_1 + _DAT_112712fd0));
    _objc_release(puVar5);
    func_0x00010c18b5e0(puVar7,param_2,param_1);
    uVar1 = param_4;
    func_0x00010c142240();
    uVar3 = *(ulong *)(param_1 + _DAT_112712f9c);
    func_0x00010bf529e0();
    if (uVar1 < uVar3) {
      puVar5 = param_1;
      func_0x00010c0f6900(param_1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010bf31960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c193b20(puVar7,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar5);
    }
    puVar5 = param_1;
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520();
    _objc_release(puVar5);
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e5660();
  }
  _objc_release(param_1);
  _objc_release(puVar7);
LAB_104dbdda8:
  func_0x00010bf6e880(param_3,param_2,param_4,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dbdde4; end: 104dbdedf; -[SCPaymentsSettingsViewController tableView:paymentsTableViewCellAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbdde4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b06e0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6e080(param_3,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010c1d9d60(uVar2,param_2,*(undefined8 *)(param_1 + _DAT_112712fc8));
  func_0x00010c1a97a0(uVar2,param_2,*(undefined8 *)(param_1 + _DAT_112712fd0));
  func_0x00010c0f6900(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1d9ce0(uVar2,param_2,param_1);
  _objc_release(param_1);
  func_0x00010c1c8c60(uVar2,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104dbdee0; end: 104dbdf13; -[SCPaymentsSettingsViewController paymentMethodWrapperForIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbdee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712f9c);
  func_0x00010c142240(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_objectAtIndexedSubscript__112615968,param_3);
  return;
}



/* Entry: 104dbdf14; end: 104dbdf23; -[SCPaymentsSettingsViewController _odgCellForRowAtIndexPath:] */

void FUN_104dbdf14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd2b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__baseSettingsCell_forRowAtIndexP_112552480,
             &PTR____CFConstantStringClassReference_110db3318,param_3);
  return;
}



/* Entry: 104dbdf24; end: 104dbe0e3; -[SCPaymentsSettingsViewController _purchaseCellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbdf24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b0610;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf6e080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c142240();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110db33d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(lVar3,param_2,puVar4);
  _objc_release(puVar4);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112712fdc);
  uVar5 = param_3;
  func_0x00010c142240(param_3);
  _objc_release(param_3);
  func_0x00010c0dfd40(uVar7,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf46fe0(lVar3,param_2,uVar7,*(undefined8 *)(param_1 + _DAT_112712fcc));
  _objc_release(uVar7);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3fef5f5f60000000,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar4,param_2,puVar6);
  _objc_release(puVar6);
  func_0x00010c1faee0(lVar3,param_2,puVar4);
  func_0x00010c161260(lVar3,param_2,1);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104dbe0e4; end: 104dbe0f7; -[SCPaymentsSettingsViewController _viewAllCellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbe0e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd2b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__baseSettingsCell_forRowAtIndexP_112552480,
             *(undefined8 *)(param_1 + _DAT_112712fa4),param_3);
  return;
}



/* Entry: 104dbe0f8; end: 104dbe173; -[SCPaymentsSettingsViewController _shippingAddressCellForRowAtIndexPath:] */

void FUN_104dbe0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db2778;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2778,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd2b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104dbe174; end: 104dbe1ef; -[SCPaymentsSettingsViewController _contactInformationCellForRowAtIndexPath:] */

void FUN_104dbe174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db2758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd2b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104dbe1f0; end: 104dbe3cb; -[SCPaymentsSettingsViewController _baseSettingsCell:forRowAtIndexPath:] */

void FUN_104dbe1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b0708;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf6e080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3fef5f5f60000000,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c1faee0(uVar2,param_2,puVar3);
  func_0x00010c21e900(uVar2,param_2,1);
  func_0x00010c138500(uVar2,param_2,0);
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c26c280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar5);
  _objc_release(puVar4);
  func_0x00010c161260(uVar2,param_2,1);
  uVar5 = uVar2;
  func_0x00010c26c280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104dbe3cc; end: 104dbe4db; -[SCPaymentsSettingsViewController loadPaymentMethods] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbe3cc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010beb8160();
  func_0x00010c1bee40(param_1);
  lVar2 = (long)_DAT_112712fb8;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained(param_1);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfa92a0(param_1);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 104dbe4dc; end: 104dbe573;  */

void FUN_104dbe4dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bde9280(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be4e360(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dbe574; end: 104dbe6f3; -[SCPaymentsSettingsViewController _convertObfuscatedToCardDataModel:] */

void FUN_104dbe574(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined1 *param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  ppuVar7 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_3;
  _objc_retain(param_3);
  if (param_3 == (undefined **)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    param_4 = auStack_e8;
    ppuVar1 = param_3;
    func_0x00010bf52a60();
    if (ppuVar1 != (undefined **)0x0) {
      lVar6 = *plStack_120;
      do {
        ppuVar7 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(param_3);
          }
          puVar2 = PTR_PTR_1126b0690;
          _objc_alloc();
          func_0x00010c0306e0();
          puVar3 = PTR_PTR_1126b06a0;
          _objc_alloc();
          func_0x00010c034800();
          func_0x00010befa120(puVar5);
          _objc_release(puVar3);
          _objc_release(puVar2);
          ppuVar7 = (undefined **)((long)ppuVar7 + 1);
        } while (ppuVar1 != ppuVar7);
        param_4 = auStack_e8;
        ppuVar1 = param_3;
        ppuVar7 = &puStack_130;
        func_0x00010bf52a60();
      } while (ppuVar1 != (undefined **)0x0);
    }
    _objc_release(param_3);
    ppuVar1 = ppuVar7;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar1);
  _objc_retain(param_4);
  puVar5 = PTR_PTR_1126b0698;
  if (param_4 == (undefined1 *)0x0) {
    if (ppuVar1 == (undefined **)0x0) goto LAB_104dbe818;
    func_0x00010c246ac0(PTR_PTR_1126b0698);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9d00(param_3);
    _objc_release(puVar5);
    ppuVar7 = param_3;
    func_0x00010c267f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b60();
  }
  else {
    ppuVar7 = &PTR____CFConstantStringClassReference_110db3278;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3278,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110db3298;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3298,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2374a0(puVar5);
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar7);
LAB_104dbe818:
  func_0x00010c1bee40(param_3);
  func_0x00010be354a0(param_3);
  _objc_release(param_4);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 104dbe6f4; end: 104dbe853; -[SCPaymentsSettingsViewController _loadPaymentMethodCompletionHandler:error:] */

void FUN_104dbe6f4(undefined **param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b0698;
  if (param_4 == 0) {
    if (param_3 == 0) goto LAB_104dbe818;
    func_0x00010c246ac0(PTR_PTR_1126b0698);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9d00(param_1);
    _objc_release(puVar2);
    ppuVar3 = param_1;
    func_0x00010c267f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b60();
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110db3278;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3278,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110db3298;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3298,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2374a0(puVar2);
    _objc_release(ppuVar1);
  }
  _objc_release(ppuVar3);
LAB_104dbe818:
  func_0x00010c1bee40(param_1);
  func_0x00010be354a0(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104dbe854; end: 104dbe85b;  */

void FUN_104dbe854(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09bdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_loadPaymentMethods_112604988);
  return;
}



/* Entry: 104dbe85c; end: 104dbe9f7; -[SCPaymentsSettingsViewController _handleOrderHistorySuccess:] */

void FUN_104dbe85c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  func_0x00010c1bee20(param_1);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010bff4000();
    func_0x00010c1d6100(param_1);
    _objc_release(puVar1);
    lVar2 = param_1;
    func_0x00010c0ecb00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(lVar2);
    func_0x00010c1cfe00(param_1);
    ppuVar3 = &PTR____CFConstantStringClassReference_110db3338;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3338,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d60a0(param_1);
    _objc_release(ppuVar3);
    lVar2 = param_1;
    func_0x00010c0df0a0();
    if (lVar2 != 0) goto LAB_104dbe95c;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110db33f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db33f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d60a0(param_1);
  _objc_release(ppuVar3);
LAB_104dbe95c:
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_11117e388;
  func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantArray_11117e388);
  func_0x00010c2116a0(param_1);
  _objc_release(ppuVar3);
  lVar2 = param_1;
  func_0x00010c0df0a0();
  if (0 < lVar2) {
    lVar2 = param_1;
    func_0x00010c267ee0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066b00();
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(lVar2);
  func_0x00010be354a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dbe9f8; end: 104dbeb1b; -[SCPaymentsSettingsViewController _handleOrderHistoryFailure:] */

void FUN_104dbe9f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  func_0x00010c1bee20(param_1,param_2,0);
  puVar1 = PTR_PTR_1126b0698;
  ppuVar2 = &PTR____CFConstantStringClassReference_110db3418;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3418,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110db3438;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3438,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2374a0(puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar2 = &PTR____CFConstantStringClassReference_110db33f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db33f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d60a0(param_1);
  _objc_release(ppuVar2);
  uVar4 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(uVar4);
  func_0x00010be354a0(param_1);
  return;
}



/* Entry: 104dbeb1c; end: 104dbeb23;  */

void FUN_104dbeb1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09c030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_loadPurchases_112604a18);
  return;
}



/* Entry: 104dbeb24; end: 104dbebfb; -[SCPaymentsSettingsViewController loadPurchases] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbeb24(long param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010beb8160();
  func_0x00010c1bee20(param_1);
  _objc_initWeak(auStack_28,param_1);
  param_1 = param_1 + _DAT_112712fc4;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bfc84e0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104dbebfc; end: 104dbed23;  */

void FUN_104dbebfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x104dbeccc;
  puStack_50 = &UNK_110848218;
  _objc_retain(param_3);
  uStack_48 = param_3;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104dbed24; end: 104dbed27; -[SCPaymentsSettingsViewController paymentsCardCreationEditViewController:didCreatePaymentsMethod:] */

void FUN_104dbed24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09bdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_loadPaymentMethods_112604988);
  return;
}



/* Entry: 104dbed28; end: 104dbed2f; -[SCPaymentsSettingsViewController _pagenameForPageView] */

undefined8 FUN_104dbed28(void)

{
  return 0xc2;
}



/* Entry: 104dbed30; end: 104dbeeeb; -[SCPaymentsSettingsViewController _showBlurView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbed30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar4 = (long)_DAT_112712fe4;
  if (*(long *)(param_1 + lVar4) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    lVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0();
    lVar5 = (long)_DAT_112712fe8;
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    _objc_release(lVar2);
    puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193d20(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)(param_1 + lVar5));
    lVar2 = param_1;
    func_0x00010bf4b2a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    puVar1 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar3);
    lVar2 = param_1;
    func_0x00010bf4b2a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104dbeeec;
    puStack_50 = &UNK_1108471b0;
    lStack_48 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_68);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar4));
    func_0x00010bfdf5e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2194e0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 104dbeeec; end: 104dbef73;  */

void FUN_104dbeeec(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104dbef74; end: 104dbf01b; -[SCPaymentsSettingsViewController _hideBlurView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbef74(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = param_1;
  func_0x00010c09d1e0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c09d220(), (uVar1 & 1) == 0)) {
    lVar4 = (long)_DAT_112712fe4;
    func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar4));
    lVar3 = (long)_DAT_112712fe8;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar2);
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar2);
    func_0x00010bfdf5e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2194e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104dbf01c; end: 104dbf04b; -[SCPaymentsSettingsViewController displayId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dbf01c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712fd4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104dbf04c; end: 104dbf057; -[SCPaymentsSettingsViewController defaultProjectNameV3] */

void FUN_104dbf04c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf42210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_commerce_1125ae228);
  return;
}



/* Entry: 104dbf058; end: 104dbf063; -[SCPaymentsSettingsViewController defaultProjectNameV2] */

void FUN_104dbf058(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf42210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_commerce_1125ae228);
  return;
}



/* Entry: 104dbf064; end: 104dbf073; -[SCPaymentsSettingsViewController commerceLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dbf064(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712fb0);
}



/* Entry: 104dbf074; end: 104dbf083; -[SCPaymentsSettingsViewController orderList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dbf074(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712fdc);
}


