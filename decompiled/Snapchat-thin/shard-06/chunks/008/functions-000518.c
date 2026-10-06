/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104df0dbc; end: 104df0e83; -[SCCommerceStorePageViewController _loadViewWithStore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df0dbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c198340(param_1);
  lVar1 = param_1 + _DAT_112713578;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf77b20();
  _objc_release(lVar1);
  func_0x00010be88420(param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104df0e84;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104df0e84; end: 104df100f;  */

void FUN_104df0e84(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c152980(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf99140(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d4f60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdf5e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(uVar4);
  _objc_release(uVar3);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c078780();
  if (iVar2 == 0) {
    bVar1 = false;
    uVar3 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c235460();
    if ((int)uVar3 == 0) {
      bVar1 = false;
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf32e20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdf5e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0();
  _objc_release(uVar5);
  if (bVar1) {
    _objc_release(uVar3);
  }
  if (iVar2 != 0) {
    _objc_release(uVar4);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf33060(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4eac0(uVar3);
  _objc_release(uVar4);
  func_0x00010beeb500(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010becc330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__timestampOpenedTabAtIndex__112590a70,0);
  return;
}



/* Entry: 104df1010; end: 104df1113; -[SCCommerceStorePageViewController _loadViewWithErrorState:] */

void FUN_104df1010(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x00010c198340(param_1,param_2,9);
  puVar1 = PTR_PTR_1126b04e0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000106d78760();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000106d78778();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000106d78730();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefa60();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104df1114;
  puStack_58 = &UNK_110841f80;
  uStack_50 = param_1;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(puStack_48);
  _objc_release(puVar1);
  return;
}



/* Entry: 104df1114; end: 104df11db;  */

void FUN_104df1114(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c152980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf99140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x000106d78748();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdf5e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf99140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df11dc; end: 104df17ab; -[SCCommerceStorePageViewController _loadTabsWithCategories:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df11dc(undefined8 param_1,undefined8 param_2,double param_3,undefined8 *param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  double dVar31;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  long lStack_210;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 auStack_108 [16];
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c179fa0(param_4);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c222940(param_4);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c202300(param_4);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b09d8;
  _objc_alloc();
  puVar28 = param_4;
  func_0x00010c257800(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar28;
  func_0x000104df3854();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b3e0();
  _objc_release(puVar22);
  _objc_release(puVar28);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179fe0(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  puVar4 = param_4;
  func_0x00010bf33060();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = &uStack_150;
  puVar22 = auStack_108;
  puStack_158 = puVar4;
  func_0x00010bf52a60();
  if (puStack_158 == (undefined8 *)0x0) {
    puVar26 = (undefined8 *)0x0;
  }
  else {
    puVar26 = (undefined8 *)0x0;
    puVar25 = (undefined8 *)0x0;
    puVar29 = (undefined8 *)0x0;
    lVar23 = *plStack_140;
    do {
      puVar28 = (undefined8 *)0x0;
      puVar22 = puVar29;
      puVar27 = puVar26;
      do {
        if (*plStack_140 != lVar23) {
          _objc_enumerationMutation(puVar4);
        }
        uVar30 = *(undefined8 *)(lStack_148 + (long)puVar28 * 8);
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b09e0;
        uVar24 = uVar30;
        func_0x00010c0d4f60(uVar30);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c267620(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(puVar3);
        _objc_release(uVar24);
        puVar26 = param_4;
        func_0x00010bf33480();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe5e40(uVar30);
        _objc_retainAutoreleasedReturnValue();
        puVar29 = puVar26;
        func_0x00010c0720c0();
        _objc_release(uVar30);
        _objc_release(puVar26);
        puVar26 = puVar25;
        if ((int)puVar29 == 0) {
          puVar26 = puVar27;
        }
        puVar29 = param_4;
        func_0x00010bdc8880();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar22);
        puVar25 = (undefined8 *)((long)puVar25 + 1);
        _objc_release(puVar5);
        puVar28 = (undefined8 *)((long)puVar28 + 1);
        puVar22 = puVar29;
        puVar27 = puVar26;
      } while (puStack_158 != puVar28);
      puVar28 = &uStack_150;
      puVar22 = auStack_108;
      puStack_158 = puVar4;
      func_0x00010bf52a60();
    } while (puStack_158 != (undefined8 *)0x0);
    _objc_release(puVar29);
  }
  _objc_release(puVar4);
  lVar23 = param_6;
  func_0x00010bf529e0();
  dVar31 = param_3;
  if (lVar23 != 0) {
    puVar28 = param_4;
    func_0x00010bfdf5e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c211320();
    _objc_release(puVar28);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    puVar5 = puVar2;
    dVar31 = param_3;
    func_0x00010bf529e0();
    puVar28 = param_4;
    func_0x00010c152980(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1827c0(param_3 * (double)puVar5,0x4069000000000000);
    _objc_release(puVar28);
    _objc_release(puVar3);
    puVar28 = param_4;
    func_0x00010c152980(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d8be0();
    _objc_release(puVar28);
    puVar3 = PTR_PTR_1126b09e8;
    _objc_alloc(PTR_PTR_1126b09e8);
    puVar28 = param_4;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar28;
    func_0x00010c0503c0(puVar3);
    func_0x00010c2112e0(param_4);
    _objc_release(puVar3);
    _objc_release(puVar28);
    puVar28 = param_4;
    func_0x00010c2675a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(puVar28);
    puVar4 = param_4;
    func_0x00010c2675a0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = param_4;
    func_0x00010c152980(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar4;
    func_0x00010c18b5e0();
    _objc_release(puVar25);
    _objc_release(puVar4);
  }
  puVar4 = param_4;
  func_0x00010bf33480();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar4;
  func_0x00010c08fa60();
  _objc_release(puVar4);
  if ((puVar25 == (undefined8 *)0x0) || (puVar26 == (undefined8 *)0x0)) {
    func_0x00010bf33480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    puVar28 = param_4;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822e0(dVar31 * (double)puVar26,0);
    _objc_release(puVar28);
    _objc_release(puVar3);
    func_0x00010c2675a0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = (undefined8 *)0x0;
    func_0x00010c158f40();
    puVar28 = puVar26;
  }
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lStack_210 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar28);
  _objc_retain(puVar22);
  if (puVar28 == (undefined8 *)0x0) {
    func_0x00010beaf8a0(param_6);
  }
  puVar1 = PTR_PTR_1126b0548;
  _objc_alloc();
  func_0x00010c010b80();
  puVar2 = PTR_PTR_1126b02f8;
  _objc_alloc();
  lVar23 = param_6;
  func_0x00010bfe8c80(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_6;
  func_0x00010bfe7740(param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar22;
  func_0x00010bfe5e40(puVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01cf60();
  _objc_release(puVar4);
  _objc_release(lVar6);
  _objc_release(lVar23);
  lVar23 = param_6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar23;
  func_0x00010bf8d060();
  _objc_release(lVar23);
  lVar23 = param_6;
  func_0x00010bf33020(param_6);
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 1) {
    func_0x00010c066b00();
  }
  else {
    func_0x00010befa120();
  }
  _objc_release(lVar23);
  puVar3 = puVar2;
  func_0x00010c29bf00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(puVar3);
  puStack_250 = &uStack_258;
  uStack_258 = 0;
  uStack_248 = 0x3032000000;
  pcStack_240 = FUN_104df20a0;
  uStack_238 = 0x104df20b0;
  uStack_230 = 0;
  uVar24 = *(undefined8 *)(param_6 + _DAT_112713548);
  _objc_retain(puVar22);
  _objc_retain(puVar22);
  func_0x00010c0bc680(uVar24);
  puVar5 = PTR_PTR_1126b07b0;
  _objc_alloc();
  lVar23 = param_6;
  func_0x00010c23afc0(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_6;
  func_0x00010bf461c0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046680();
  _objc_release(lVar6);
  _objc_release(lVar23);
  puVar7 = PTR_PTR_1126b0560;
  _objc_alloc();
  lVar23 = param_6;
  func_0x00010bf461c0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0085e0();
  _objc_release(lVar23);
  lVar23 = param_6;
  func_0x00010c29d9a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(lVar23);
  lVar23 = param_6;
  func_0x00010c23af60(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(lVar23);
  lVar23 = param_6;
  func_0x00010bf4b2a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c29bf00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar23);
  _objc_release(puVar3);
  _objc_release(lVar23);
  func_0x00010bef7700(param_6);
  puVar3 = puVar2;
  func_0x00010c29bf00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar8 = puVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar23;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  puStack_228 = puVar10;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_6;
  func_0x00010c152980(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar2;
  puStack_220 = puVar15;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_6;
  func_0x00010c29bf00(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_218 = puVar20;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(lVar6);
  _objc_release(lVar23);
  _objc_release(puVar9);
  _objc_release(puVar8);
  lVar6 = param_6;
  func_0x00010bf33020();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar6;
  func_0x00010bf529e0();
  _objc_release(lVar6);
  if (lVar23 == 1) {
    puVar3 = puVar2;
    func_0x00010c29bf00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_6;
    func_0x00010bf4b2a0(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar23;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf493a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar9);
    _objc_release(lVar6);
    _objc_release(lVar23);
    _objc_release(puVar8);
    _objc_release(puVar3);
  }
  if (puVar28 != (undefined8 *)0x0) {
    puVar3 = puVar2;
    func_0x00010c29bf00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar28;
    func_0x00010c2793a0(puVar28);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf493a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar9);
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar3);
  }
  lVar23 = param_6;
  func_0x00010bf33020();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar23;
  func_0x00010bf529e0();
  lVar13 = param_6;
  func_0x00010bf33060();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bf529e0();
  _objc_release(lVar13);
  _objc_release(lVar23);
  if (lVar6 == lVar14) {
    puVar3 = puVar2;
    func_0x00010c29bf00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b2a0(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf493a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar9);
    _objc_release(lVar23);
    _objc_release(param_6);
    _objc_release(puVar8);
    _objc_release(puVar3);
  }
  puVar3 = puVar2;
  func_0x00010c29bf00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar22);
  _objc_release(puVar22);
  __Block_object_dispose(&uStack_258,8);
  _objc_release(uStack_230);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar22);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_210) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  lVar23 = 8;
  __Block_object_dispose(&uStack_258);
  __Unwind_Resume();
  puVar28[5] = *(undefined8 *)(lVar23 + 0x28);
  *(undefined8 *)(lVar23 + 0x28) = 0;
  return;
}



/* Entry: 104df17ac; end: 104df209f; -[SCCommerceStorePageViewController _addTabControllerWithPreviousPage:categoryModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df17ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x00010beaf8a0(param_1);
  }
  puVar1 = PTR_PTR_1126b0548;
  _objc_alloc();
  func_0x00010c010b80();
  puVar2 = PTR_PTR_1126b02f8;
  _objc_alloc();
  lVar21 = param_1;
  func_0x00010bfe8c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bfe7740(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_4;
  func_0x00010bfe5e40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01cf60();
  _objc_release(uVar22);
  _objc_release(lVar3);
  _objc_release(lVar21);
  lVar21 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar21;
  func_0x00010bf8d060();
  _objc_release(lVar21);
  lVar21 = param_1;
  func_0x00010bf33020(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 1) {
    func_0x00010c066b00();
  }
  else {
    func_0x00010befa120();
  }
  _objc_release(lVar21);
  puVar4 = puVar2;
  func_0x00010c29bf00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(puVar4);
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_104df20a0;
  uStack_a8 = 0x104df20b0;
  uStack_a0 = 0;
  uVar22 = *(undefined8 *)(param_1 + _DAT_112713548);
  _objc_retain(param_4);
  _objc_retain(param_4);
  func_0x00010c0bc680(uVar22);
  puVar5 = PTR_PTR_1126b07b0;
  _objc_alloc();
  lVar21 = param_1;
  func_0x00010c23afc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf461c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046680();
  _objc_release(lVar3);
  _objc_release(lVar21);
  puVar6 = PTR_PTR_1126b0560;
  _objc_alloc();
  lVar21 = param_1;
  func_0x00010bf461c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0085e0();
  _objc_release(lVar21);
  lVar21 = param_1;
  func_0x00010c29d9a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(lVar21);
  lVar21 = param_1;
  func_0x00010c23af60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(lVar21);
  lVar21 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c29bf00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar21);
  _objc_release(puVar4);
  _objc_release(lVar21);
  func_0x00010bef7700(param_1);
  puVar4 = puVar2;
  func_0x00010c29bf00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar7 = puVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar21;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  puStack_98 = puVar9;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar2;
  puStack_90 = puVar14;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar19;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar4);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar3);
  _objc_release(lVar21);
  _objc_release(puVar8);
  _objc_release(puVar7);
  lVar3 = param_1;
  func_0x00010bf33020();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  if (lVar21 == 1) {
    puVar4 = puVar2;
    func_0x00010c29bf00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_1;
    func_0x00010bf4b2a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar21;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf493a0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar8);
    _objc_release(lVar3);
    _objc_release(lVar21);
    _objc_release(puVar7);
    _objc_release(puVar4);
  }
  if (param_3 != 0) {
    puVar4 = puVar2;
    func_0x00010c29bf00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_3;
    func_0x00010c2793a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf493a0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar8);
    _objc_release(lVar21);
    _objc_release(puVar7);
    _objc_release(puVar4);
  }
  lVar21 = param_1;
  func_0x00010bf33020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar21;
  func_0x00010bf529e0();
  lVar12 = param_1;
  func_0x00010bf33060();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf529e0();
  _objc_release(lVar12);
  _objc_release(lVar21);
  if (lVar3 == lVar13) {
    puVar4 = puVar2;
    func_0x00010c29bf00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b2a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf493a0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar8);
    _objc_release(lVar21);
    _objc_release(param_1);
    _objc_release(puVar7);
    _objc_release(puVar4);
  }
  puVar4 = puVar2;
  func_0x00010c29bf00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(uStack_a0);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  lVar21 = 8;
  __Block_object_dispose(&uStack_c8);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar21 + 0x28);
  *(undefined8 *)(lVar21 + 0x28) = 0;
  return;
}



/* Entry: 104df20a0; end: 104df20b7;  */

void FUN_104df20a0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104df20b8; end: 104df2253;  */

void FUN_104df20b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b0840;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c257800(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe5e40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2576a0(puVar2,param_2,uVar5,uVar1,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 104df2254; end: 104df233b; -[SCCommerceStorePageViewController _tabSelected:] */

void FUN_104df2254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c267600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfecde0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf99fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bddc060(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2ae0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c2675a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c267be0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104df233c; end: 104df24bf; -[SCCommerceStorePageViewController _wireTabAtIndex:includeAdjacent:] */

void FUN_104df233c(ulong param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010bf33020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  uVar3 = param_1;
  func_0x00010c29d9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  if (uVar2 == uVar4) {
    uVar1 = param_1;
    func_0x00010bf33020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    if (param_3 < uVar2) {
      uVar1 = param_1;
      func_0x00010bf33020();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010c29d9a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar1 = uVar2;
      func_0x00010c0f2840();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar1 == 0) {
        func_0x00010c1d8ba0(uVar2,param_2,uVar3);
      }
      if (param_4 != 0) {
        func_0x00010beeb500(param_1,param_2,param_3 + 1,0);
        func_0x00010beeb500(param_1,param_2,param_3 - 1,0);
      }
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 104df24c0; end: 104df2693; -[SCCommerceStorePageViewController _categoryMetricsForIndex:] */

void FUN_104df24c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar1 = param_1;
  func_0x00010bf33060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (param_3 < uVar2) {
    uVar1 = param_1;
    func_0x00010bf33060(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar6 = PTR_PTR_1126b09f0;
    _objc_alloc(PTR_PTR_1126b09f0);
    uVar1 = uVar2;
    func_0x00010bfe5e40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d4f60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bf33060(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf529e0();
    func_0x00010bffd020(puVar6,param_2,uVar1,uVar3,param_3,uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf33020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0c2c40();
    func_0x00010c1c3600(puVar6,param_2,uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    func_0x00010c29d9a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar3 = uVar1;
    func_0x00010c084fc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    func_0x00010c2187c0(puVar6,param_2,uVar4 >> 1);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  else {
    puVar6 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104df2694; end: 104df26e7; -[SCCommerceStorePageViewController _timestampOpenedTabAtIndex:] */

void FUN_104df2694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c1b8420(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1b8410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setLastOpenedTabIndex__11264bb28,param_3);
  return;
}



/* Entry: 104df26e8; end: 104df274b; -[SCCommerceStorePageViewController _currentCatalogCollectionViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df26e8(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271357c;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x00010bf529e0();
  if (*(long *)(param_1 + _DAT_112713580) + 1U <= uVar1) {
    func_0x00010c0dfd20(*(undefined8 *)(param_1 + lVar2));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104df274c; end: 104df27ef; -[SCCommerceStorePageViewController _refreshCartItemCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df274c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713564);
  func_0x00010bfc3800(uVar1,param_2,*(undefined8 *)(param_1 + _DAT_112713540));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0deea0();
  _objc_release(uVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104df27f0;
  puStack_48 = &UNK_110848c48;
  lStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  return;
}



/* Entry: 104df27f0; end: 104df2827;  */

void FUN_104df27f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf32e20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16eb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df2828; end: 104df286f; -[SCCommerceStorePageViewController reloadFavoriteStateIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df2828(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713584);
  func_0x00010c0dfd40(uVar1,param_2,*(undefined8 *)(param_1 + _DAT_112713580));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df2870; end: 104df289f; -[SCCommerceStorePageViewController didSelectDismissalActionWithHeaderItem:] */

void FUN_104df2870(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7ca00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104df28a0; end: 104df28a7; -[SCCommerceStorePageViewController blizzardPageType] */

undefined8 FUN_104df28a0(void)

{
  return 0x2c;
}



/* Entry: 104df28a8; end: 104df28af; -[SCCommerceStorePageViewController pageViewName] */

undefined8 FUN_104df28a8(void)

{
  return 0x34;
}



/* Entry: 104df28b0; end: 104df29eb; -[SCCommerceStorePageViewController pageDidAppearForIndex:] */

void FUN_104df28b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c089860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf99fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c089840(param_1);
  uVar3 = param_1;
  func_0x00010bddc060(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2ac0(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010becc320(param_1);
  uVar2 = param_1;
  func_0x00010bf99fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bddc060(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2b00(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010beeb510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__wireTabAtIndex_includeAdjacent__1125986e8,param_3,1);
  return;
}



/* Entry: 104df29ec; end: 104df29ef; -[SCCommerceStorePageViewController errorButtonTapped:] */

void FUN_104df29ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be146b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchStore_112562b48);
  return;
}



/* Entry: 104df29f0; end: 104df2a57; -[SCCommerceStorePageViewController _didTapCartButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df29f0(long param_1,undefined8 param_2)

{
  func_0x00010c0a1d40(*(undefined8 *)(param_1 + _DAT_112713560),param_2,2,0xffffffffffffffff,0x2c,0)
  ;
  param_1 = param_1 + _DAT_112713578;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7c740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104df2a58; end: 104df2daf; -[SCCommerceStorePageViewController handleActionWithSender:actionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104df2a58(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bf33020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfecde0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29d9a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar4 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  if ((int)uVar5 == 0) {
    uVar4 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    if ((int)uVar5 == 0) {
      uVar4 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0720c0();
      _objc_release(uVar4);
      if ((int)uVar5 == 0) goto LAB_104df2d38;
      uVar4 = param_1 + _DAT_112713578;
      _objc_loadWeakRetained(uVar4);
      uVar6 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126b02b0;
      _objc_opt_class(PTR_PTR_1126b02b0);
      uVar8 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar7);
      uVar5 = uVar6;
      if ((uVar8 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar6);
      func_0x00010bf7d5c0(uVar4);
      _objc_release(uVar5);
    }
    else {
      uVar4 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126b0550;
      _objc_opt_class(PTR_PTR_1126b0550);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar7);
      uVar5 = uVar4;
      if ((uVar6 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar4);
      if (uVar5 == 0) {
        uVar9 = 0;
        goto LAB_104df2d3c;
      }
      _objc_initWeak(auStack_68,param_1);
      param_1 = param_1 + _DAT_112713578;
      _objc_loadWeakRetained(param_1);
      func_0x00010c115e60(uVar4);
      uVar5 = uVar4;
      func_0x00010c115f00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c278ec0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_78,auStack_68);
      lStack_70 = lVar2;
      func_0x00010c272900(param_1);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(param_1);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_68);
    }
    _objc_release(uVar4);
  }
  else {
    func_0x00010c09bc80(lVar3);
  }
LAB_104df2d38:
  uVar9 = 1;
LAB_104df2d3c:
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 104df2db0; end: 104df2e1b;  */

void FUN_104df2db0(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c23af60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128f00();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104df2e1c; end: 104df2e63; -[SCCommerceStorePageViewController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_104df2e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e890d8);
  if ((int)param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be88430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshCartItemCount_11257faa8);
    return;
  }
  return;
}



/* Entry: 104df2e64; end: 104df2e73; -[SCCommerceStorePageViewController headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df2e64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713570);
}



/* Entry: 104df2e74; end: 104df2e83; -[SCCommerceStorePageViewController productId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df2e74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713538);
}



/* Entry: 104df2e84; end: 104df2e93; -[SCCommerceStorePageViewController exitEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df2e84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271353c);
}



/* Entry: 104df2e94; end: 104df2ea3; -[SCCommerceStorePageViewController setExitEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df2e94(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11271353c) = param_3;
  return;
}



/* Entry: 104df2ea4; end: 104df2eb3; -[SCCommerceStorePageViewController storeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df2ea4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713540);
}



/* Entry: 104df2eb4; end: 104df2ef3; -[SCCommerceStorePageViewController setStoreId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df2eb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713540;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df2ef4; end: 104df2f03; -[SCCommerceStorePageViewController categoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df2ef4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713544);
}



/* Entry: 104df2f04; end: 104df2f43; -[SCCommerceStorePageViewController setCategoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df2f04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713544;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df2f44; end: 104df2f63; -[SCCommerceStorePageViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df2f44(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112713578);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104df2f64; end: 104df2f77; -[SCCommerceStorePageViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df2f64(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112713578,param_3);
  return;
}



/* Entry: 104df2f78; end: 104df2f87; -[SCCommerceStorePageViewController showcaseFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df2f78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271354c);
}



/* Entry: 104df2f88; end: 104df2fc7; -[SCCommerceStorePageViewController setShowcaseFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df2f88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271354c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df2fc8; end: 104df2fd7; -[SCCommerceStorePageViewController imageSourceProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df2fc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713554);
}



/* Entry: 104df2fd8; end: 104df3017; -[SCCommerceStorePageViewController setImageSourceProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df2fd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713554;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df3018; end: 104df3027; -[SCCommerceStorePageViewController imageFetchingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df3018(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713558);
}



/* Entry: 104df3028; end: 104df3067; -[SCCommerceStorePageViewController setImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df3028(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713558;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df3068; end: 104df3077; -[SCCommerceStorePageViewController configProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df3068(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713550);
}



/* Entry: 104df3078; end: 104df30b7; -[SCCommerceStorePageViewController setConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df3078(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713550;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df30b8; end: 104df30c7; -[SCCommerceStorePageViewController commerceIconProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df30b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271355c);
}



/* Entry: 104df30c8; end: 104df3107; -[SCCommerceStorePageViewController setCommerceIconProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df30c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271355c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df3108; end: 104df3117; -[SCCommerceStorePageViewController eventLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df3108(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713560);
}



/* Entry: 104df3118; end: 104df3157; -[SCCommerceStorePageViewController setEventLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df3118(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713560;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df3158; end: 104df3167; -[SCCommerceStorePageViewController cartCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df3158(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713564);
}



/* Entry: 104df3168; end: 104df31a7; -[SCCommerceStorePageViewController setCartCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df3168(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713564;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df31a8; end: 104df31b7; -[SCCommerceStorePageViewController favoritesCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df31a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713568);
}



/* Entry: 104df31b8; end: 104df31f7; -[SCCommerceStorePageViewController setFavoritesCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df31b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713568;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df31f8; end: 104df3207; -[SCCommerceStorePageViewController showcaseDataCoordinators] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df31f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713584);
}



/* Entry: 104df3208; end: 104df3247; -[SCCommerceStorePageViewController setShowcaseDataCoordinators:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df3208(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713584;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df3248; end: 104df3257; -[SCCommerceStorePageViewController tabBarInteractionCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df3248(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713588);
}



/* Entry: 104df3258; end: 104df3297; -[SCCommerceStorePageViewController setTabBarInteractionCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df3258(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713588;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df3298; end: 104df32a7; -[SCCommerceStorePageViewController scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df3298(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271358c);
}



/* Entry: 104df32a8; end: 104df32e7; -[SCCommerceStorePageViewController setScrollView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df32a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271358c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df32e8; end: 104df32f7; -[SCCommerceStorePageViewController containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df32e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713590);
}



/* Entry: 104df32f8; end: 104df3337; -[SCCommerceStorePageViewController setContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df32f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713590;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df3338; end: 104df3347; -[SCCommerceStorePageViewController errorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df3338(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713594);
}



/* Entry: 104df3348; end: 104df3387; -[SCCommerceStorePageViewController setErrorView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df3348(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713594;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df3388; end: 104df3397; -[SCCommerceStorePageViewController cartButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df3388(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713574);
}



/* Entry: 104df3398; end: 104df33d7; -[SCCommerceStorePageViewController setCartButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df3398(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713574;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df33d8; end: 104df33e7; -[SCCommerceStorePageViewController catalogViewControllers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df33d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271357c);
}



/* Entry: 104df33e8; end: 104df3427; -[SCCommerceStorePageViewController setCatalogViewControllers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df33e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271357c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df3428; end: 104df3437; -[SCCommerceStorePageViewController viewModelProviders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df3428(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713598);
}



/* Entry: 104df3438; end: 104df3477; -[SCCommerceStorePageViewController setViewModelProviders:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df3438(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713598;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df3478; end: 104df3487; -[SCCommerceStorePageViewController queryContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df3478(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713548);
}



/* Entry: 104df3488; end: 104df34c7; -[SCCommerceStorePageViewController setQueryContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df3488(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713548;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df34c8; end: 104df34d7; -[SCCommerceStorePageViewController categories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df34c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271359c);
}



/* Entry: 104df34d8; end: 104df3517; -[SCCommerceStorePageViewController setCategories:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df34d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271359c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df3518; end: 104df3527; -[SCCommerceStorePageViewController lastOpenedTabTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df3518(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127135a0);
}



/* Entry: 104df3528; end: 104df3567; -[SCCommerceStorePageViewController setLastOpenedTabTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df3528(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127135a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104df3568; end: 104df3577; -[SCCommerceStorePageViewController lastOpenedTabIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104df3568(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713580);
}



/* Entry: 104df3578; end: 104df3587; -[SCCommerceStorePageViewController setLastOpenedTabIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df3578(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112713580) = param_3;
  return;
}



/* Entry: 104df3588; end: 104df3597; -[SCCommerceStorePageViewController isLastInNavStack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104df3588(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11271356c);
}



/* Entry: 104df3598; end: 104df35a7; -[SCCommerceStorePageViewController setIsLastInNavStack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df3598(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11271356c) = param_3;
  return;
}



/* Entry: 104df35a8; end: 104df3733; -[SCCommerceStorePageViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df35a8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127135a0,0);
  _objc_storeStrong(param_1 + _DAT_11271359c,0);
  _objc_storeStrong(param_1 + _DAT_112713548,0);
  _objc_storeStrong(param_1 + _DAT_112713598,0);
  _objc_storeStrong(param_1 + _DAT_11271357c,0);
  _objc_storeStrong(param_1 + _DAT_112713574,0);
  _objc_storeStrong(param_1 + _DAT_112713594,0);
  _objc_storeStrong(param_1 + _DAT_112713590,0);
  _objc_storeStrong(param_1 + _DAT_11271358c,0);
  _objc_storeStrong(param_1 + _DAT_112713588,0);
  _objc_storeStrong(param_1 + _DAT_112713584,0);
  _objc_storeStrong(param_1 + _DAT_112713568,0);
  _objc_storeStrong(param_1 + _DAT_112713564,0);
  _objc_storeStrong(param_1 + _DAT_112713560,0);
  _objc_storeStrong(param_1 + _DAT_11271355c,0);
  _objc_storeStrong(param_1 + _DAT_112713550,0);
  _objc_storeStrong(param_1 + _DAT_112713558,0);
  _objc_storeStrong(param_1 + _DAT_112713554,0);
  _objc_storeStrong(param_1 + _DAT_11271354c,0);
  _objc_destroyWeak(param_1 + _DAT_112713578);
  _objc_storeStrong(param_1 + _DAT_112713544,0);
  _objc_storeStrong(param_1 + _DAT_112713540,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713570,0);
  return;
}



/* Entry: 104df3734; end: 104df3943;  */

void FUN_104df3734(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db4118;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db4118,
                      &PTR____CFConstantStringClassReference_110db4138,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104df3944; end: 104df398f; +[SCCommerceProductPageAction actionButtonTapped] */

void FUN_104df3944(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0998;
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



/* Entry: 104df3990; end: 104df39db; +[SCCommerceProductPageAction arTryOnButtonTapped] */

void FUN_104df3990(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0998;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xf;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104df39dc; end: 104df3a23; +[SCCommerceProductPageAction back] */

void FUN_104df39dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0998;
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



/* Entry: 104df3a24; end: 104df3a6f; +[SCCommerceProductPageAction cartButtonTapped] */

void FUN_104df3a24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0998;
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



/* Entry: 104df3a70; end: 104df3af3; +[SCCommerceProductPageAction favoritesHeartTappedRelatedProductWithProductId:wasFavorited:image:] */

void FUN_104df3a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b0998;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 9;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  puVar2[0x30] = param_4;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104df3af4; end: 104df3b4f; +[SCCommerceProductPageAction favoritesHeartTappedWithWasFavorited:] */

void FUN_104df3af4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0998;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
  puVar2[0x20] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104df3b50; end: 104df3be7; +[SCCommerceProductPageAction imageLoadedWithImage:indexPath:] */

void FUN_104df3b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b0998;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 10;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104df3be8; end: 104df3c33; +[SCCommerceProductPageAction lastWidgetPaged] */

void FUN_104df3be8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0998;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104df3c34; end: 104df3ca3; +[SCCommerceProductPageAction relatedProductTappedWithProductId:storeId:] */

void FUN_104df3c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b0998;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104df3ca4; end: 104df3cef; +[SCCommerceProductPageAction reload] */

void FUN_104df3ca4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0998;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104df3cf0; end: 104df3d3b; +[SCCommerceProductPageAction reloadFavoriteStateIfNeeded] */

void FUN_104df3cf0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0998;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xb;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104df3d3c; end: 104df3da7; +[SCCommerceProductPageAction reportButtonTappedWithCategoryId:] */

void FUN_104df3d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0998;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x11;
  uVar3 = *(undefined8 *)(puVar2 + 0x70);
  *(undefined8 *)(puVar2 + 0x70) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104df3da8; end: 104df3df3; +[SCCommerceProductPageAction shareButtonTapped] */

void FUN_104df3da8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0998;
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



/* Entry: 104df3df4; end: 104df3e5f; +[SCCommerceProductPageAction shopOnStoreTappedWithStoreId:] */

void FUN_104df3df4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0998;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xc;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104df3e60; end: 104df3ecb; +[SCCommerceProductPageAction sizeRecommendationRecievedWithRecommendation:] */

void FUN_104df3e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0998;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x10;
  uVar3 = *(undefined8 *)(puVar2 + 0x68);
  *(undefined8 *)(puVar2 + 0x68) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104df3ecc; end: 104df3f17; +[SCCommerceProductPageAction userSwipedToDismiss] */

void FUN_104df3ecc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0998;
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



/* Entry: 104df3f18; end: 104df3f83; +[SCCommerceProductPageAction variantSelectedWithOption:] */

void FUN_104df3f18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0998;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xe;
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104df3f84; end: 104df3fef; +[SCCommerceProductPageAction variantSelectorOpenedWithName:] */

void FUN_104df3f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0998;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xd;
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104df3ff0; end: 104df4013; -[SCCommerceProductPageAction copyWithZone:] */

undefined8 FUN_104df3ff0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104df4014; end: 104df4057; -[SCCommerceProductPageAction internalInit] */

void FUN_104df4014(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e43f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104df4058; end: 104df43b7; -[SCCommerceProductPageAction matchBack:reload:actionButtonTapped:cartButtonTapped:shareButtonTapped:userSwipedToDismiss:relatedProductTapped:lastWidgetPaged:favoritesHeartTapped:favoritesHeartTappedRelatedProduct:imageLoaded:reloadFavoriteStateIfNeeded:shopOnStoreTapped:variantSelectorOpened:variantSelected:arTryOnButtonTapped:sizeRecommendationRecieved:reportButtonTapped:] */

void FUN_104df4058(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12,long param_13,long param_14,long param_15,long param_16,
                  long param_17,long param_18,long param_19,long param_20)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
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
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  switch(*(undefined8 *)(param_1 + 8)) {
  case 0:
    lVar1 = param_3;
    break;
  case 1:
    lVar1 = param_4;
    break;
  case 2:
    lVar1 = param_5;
    break;
  case 3:
    lVar1 = param_6;
    break;
  case 4:
    lVar1 = param_7;
    break;
  case 5:
    lVar1 = param_8;
    break;
  case 6:
    if (param_9 == 0) goto LAB_104df430c;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    pcVar4 = *(code **)(param_9 + 0x10);
    lVar1 = param_9;
    goto code_r0x000104df42f0;
  case 7:
    if (param_10 == 0) goto LAB_104df430c;
    pcVar4 = *(code **)(param_10 + 0x10);
    lVar1 = param_10;
    goto code_r0x000104df42ac;
  case 8:
    if (param_11 != 0) {
      (**(code **)(param_11 + 0x10))(param_11,*(undefined1 *)(param_1 + 0x20));
    }
    goto LAB_104df430c;
  case 9:
    if (param_12 != 0) {
      (**(code **)(param_12 + 0x10))
                (param_12,*(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x38));
    }
    goto LAB_104df430c;
  case 10:
    if (param_13 == 0) goto LAB_104df430c;
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    pcVar4 = *(code **)(param_13 + 0x10);
    lVar1 = param_13;
code_r0x000104df42f0:
    (*pcVar4)(lVar1,uVar2,uVar3);
    goto LAB_104df430c;
  case 0xb:
    if (param_14 == 0) goto LAB_104df430c;
    pcVar4 = *(code **)(param_14 + 0x10);
    lVar1 = param_14;
    goto code_r0x000104df42ac;
  case 0xc:
    if (param_15 == 0) goto LAB_104df430c;
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    lVar1 = param_15;
    goto code_r0x000104df4210;
  case 0xd:
    if (param_16 == 0) goto LAB_104df430c;
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    pcVar4 = *(code **)(param_16 + 0x10);
    lVar1 = param_16;
    goto code_r0x000104df42c4;
  case 0xe:
    if (param_17 == 0) goto LAB_104df430c;
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    lVar1 = param_17;
code_r0x000104df4210:
    pcVar4 = *(code **)(lVar1 + 0x10);
    goto code_r0x000104df42c4;
  case 0xf:
    if (param_18 == 0) goto LAB_104df430c;
    pcVar4 = *(code **)(param_18 + 0x10);
    lVar1 = param_18;
    goto code_r0x000104df42ac;
  case 0x10:
    if (param_19 == 0) goto LAB_104df430c;
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    pcVar4 = *(code **)(param_19 + 0x10);
    lVar1 = param_19;
    goto code_r0x000104df42c4;
  case 0x11:
    if (param_20 == 0) goto LAB_104df430c;
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    pcVar4 = *(code **)(param_20 + 0x10);
    lVar1 = param_20;
code_r0x000104df42c4:
    (*pcVar4)(lVar1,uVar2);
  default:
    goto LAB_104df430c;
  }
  if (lVar1 != 0) {
    pcVar4 = *(code **)(lVar1 + 0x10);
code_r0x000104df42ac:
    (*pcVar4)(lVar1);
  }
LAB_104df430c:
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


