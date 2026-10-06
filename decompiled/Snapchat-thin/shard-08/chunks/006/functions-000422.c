/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1063ad2ec; end: 1063ad553; -[SCAdViewingSession _closeViewWithItem:adRequestClientId:page:params:lastInteraction:] */

void FUN_1063ad2ec(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_5;
  func_0x00010c08fa60();
  uVar4 = param_7;
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010bef2820(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c276e40();
    dVar8 = param_1;
    _objc_release(lVar1);
    _objc_retain(param_7);
    uVar2 = param_7;
    func_0x00010c0d3c80(param_7);
    puVar3 = PTR_PTR_1126b2348;
    func_0x00010c0c4a80(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(param_7,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    func_0x00010bf885a0(uVar4);
    dVar9 = param_1;
    func_0x00010c155420(PTR_PTR_1126afec0);
    _objc_release(uVar4);
    _objc_release(puVar3);
    if (0.0 <= dVar8 - dVar9) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar8 - dVar9,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b2348;
      func_0x00010c0c4a80(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(uVar2,param_3,puVar3,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
    uVar4 = uVar2;
    func_0x00010bf51e00(uVar2);
    _objc_release(uVar2);
    _objc_release(param_7);
    lVar1 = param_2;
    func_0x00010bec3be0(param_1,param_2,param_3,param_4,param_5,param_6,uVar4,param_8);
    func_0x00010be51b80(param_1,param_2,param_3,param_4,param_6,uVar4,param_8,lVar1);
  }
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2340;
  uVar6 = param_6;
  func_0x00010c118b40(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0771a0(puVar3,param_3,uVar6);
  func_0x00010c256ee0(uVar7,param_3,uVar2,puVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(uVar4);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063ad554; end: 1063ad68b; -[SCAdViewingSession _triggerAdTrack:option:pageId:collectionItemIndex:deferToDestination:] */

void FUN_1063ad554(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x1f8);
  _objc_retain(uVar2);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1063ad68c;
  puStack_80 = &UNK_110863fc8;
  uStack_78 = uVar2;
  uStack_58 = param_3;
  _objc_retain(param_4);
  uStack_70 = param_4;
  _objc_retain(param_5);
  uStack_68 = param_5;
  _objc_retain(param_6);
  ppuVar1 = &puStack_98;
  uStack_60 = param_6;
  _objc_retainBlock();
  if (param_7 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    func_0x00010bf069a0(*(undefined8 *)(param_1 + 200),param_2,ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1063ad68c; end: 1063ad69f;  */

void FUN_1063ad68c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_triggerAdTrack_option_pageId_col_11267c940,
             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1063ad6a0; end: 1063ad807; -[SCAdViewingSession _logCloseViewWithItem:page:params:dismissModelDurationInSec:lastInteraction:deferToDestination:] */

void FUN_1063ad6a0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar1 = &puStack_b0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  _objc_retain(uVar2);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1063ad808;
  puStack_98 = &UNK_110891e80;
  uStack_90 = uVar2;
  _objc_retain(param_4);
  uStack_88 = param_4;
  _objc_retain(param_5);
  uStack_80 = param_5;
  _objc_retain(param_6);
  uStack_78 = param_6;
  uStack_68 = param_1;
  _objc_retain(param_7);
  uStack_70 = param_7;
  _objc_retainBlock();
  if (param_8 == 0) {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  else {
    func_0x00010bf069a0(*(undefined8 *)(param_2 + 200),param_3,ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1063ad808; end: 1063ad81f;  */

void FUN_1063ad808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a3130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x20),
             PTR_s_logCloseViewWithItem_page_params_112606658,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 1063ad820; end: 1063ae2ff; -[SCAdViewingSession _stopViewingPlaylistItem:adRequestClientId:page:params:lastInteraction:dismissDuration:] */

undefined4
FUN_1063ad820(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6,long param_7)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  bool bVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uStack_88;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar18 = *(ulong *)(param_1 + 0x38);
  uVar24 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar24);
  uVar3 = *(ulong *)(param_1 + 0x38);
  func_0x00010bef53c0();
  uVar6 = uVar18;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar6;
  func_0x00010bf529e0();
  if (uVar3 < uVar21) {
    uVar21 = uVar18;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar21;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar21);
  }
  else {
    uStack_88 = 0;
  }
  _objc_release(uVar6);
  uVar24 = param_5;
  func_0x00010643afcc();
  lVar14 = param_1 + 0x280;
  _objc_loadWeakRetained();
  lVar4 = lVar14;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf4e680();
  _objc_release(lVar4);
  _objc_release(lVar14);
  uVar6 = *(ulong *)(param_1 + 0x78);
  func_0x00010c07acc0();
  if ((uVar6 & 1) == 0) {
    uVar6 = *(ulong *)(param_1 + 0x38);
    func_0x00010c07ab60();
    if ((uVar6 & 1) == 0) {
      func_0x00010c07ac40();
    }
  }
  lVar14 = param_7;
  func_0x00010c27dd80();
  uVar19 = param_5;
  if (lVar14 == 0x11) {
    func_0x00010be36bc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c234f20();
LAB_1063ada18:
    _objc_release(uVar19);
  }
  else {
    lVar14 = param_7;
    func_0x00010c27dd80();
    if (lVar14 == 0x12) {
      func_0x00010be36bc0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c234f00();
      goto LAB_1063ada18;
    }
  }
  lVar14 = param_7;
  func_0x00010c27dd80();
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  func_0x00010be6d9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010c298f80();
  uVar6 = uVar18;
  func_0x00010bef60a0(uVar18);
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c07aca0(uVar8);
  uVar23 = *(undefined8 *)(param_1 + 0x38);
  uVar21 = uVar18;
  func_0x00010bfe5ec0(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06b8c0(uVar23);
  uVar9 = *(undefined8 *)(param_1 + 0x148);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_5;
  func_0x00010be36bc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befdf60();
  FUN_10643b070(lVar14,uVar24,uVar15,lVar7,uVar6,uVar8,uVar23,uVar9,(char)lVar5);
  _objc_release(uVar19);
  _objc_release(uVar9);
  _objc_release(uVar21);
  _objc_release(lVar4);
  if (lVar14 < 2) {
    if (lVar14 == 0) {
      bVar22 = true;
      uVar24 = 1;
    }
    else {
LAB_1063adb7c:
      bVar22 = true;
      uVar24 = 6;
    }
  }
  else {
    if (lVar14 == 3) goto LAB_1063adb7c;
    bVar22 = false;
    uVar24 = 5;
  }
  iVar2 = (int)*(undefined8 *)(param_1 + 0x68);
  func_0x00010c07aca0();
  if (iVar2 == 0) {
    uVar16 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x150);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar8;
    func_0x00010c0ec0c0();
    uVar16 = (uint)uVar19;
    _objc_release(uVar8);
  }
  if ((bVar22 || (uVar16 & 1) != 0) ||
     (puVar10 = PTR_PTR_1126ca220, func_0x00010c0f1420(), (int)puVar10 == 0)) {
LAB_1063adc64:
    uVar1 = 0;
  }
  else {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x38);
    uVar6 = uVar18;
    func_0x00010bfe5ec0(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd6a80();
    _objc_release(uVar6);
    if (iVar2 == 0) goto LAB_1063adc64;
    uVar19 = *(undefined8 *)(param_1 + 200);
    uVar6 = uVar18;
    func_0x00010bfe5ec0(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf181a0(uVar19);
    _objc_release(uVar6);
    uVar1 = 1;
  }
  puVar10 = PTR_PTR_1126b8da0;
  func_0x00010c2499a0(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(ulong *)(param_1 + 0x1e0);
  uVar6 = uVar18;
  func_0x00010bfe5ec0(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f3960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar11 = PTR_PTR_1126c9cc0;
  func_0x00010bfa0360(PTR_PTR_1126c9cc0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar20;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar6;
  func_0x00010bf1f3c0();
  _objc_release(uVar6);
  _objc_release(puVar11);
  uVar19 = param_5;
  if ((int)uVar21 == 0) {
    uVar6 = uStack_88;
    func_0x00010bef60a0();
    iVar2 = (int)uVar6;
    FUN_106442044();
    if ((iVar2 != 0) && (lVar14 = param_7, func_0x00010c27dd80(), lVar14 == 2)) goto LAB_1063ae078;
    func_0x00010be36bc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uStack_88;
    func_0x00010bef60a0();
    uVar21 = uVar18;
    if ((uVar6 == 6) || (uVar6 = uStack_88, func_0x00010bf3fca0(), uVar6 == 6)) {
      uVar8 = *(undefined8 *)(param_1 + 0x1e0);
      func_0x00010bfe5ec0(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2883e0(uVar8);
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x1e0);
      func_0x00010bfe5ec0(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d7ea0(uVar8);
    }
    _objc_release(uVar21);
    if (uVar18 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar18;
      func_0x0001084c6f7c(uVar18,uStack_88);
    }
    uVar12 = *(ulong *)(param_1 + 0x150);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar18;
    func_0x00010bef60a0(uVar18);
    uVar13 = uVar12;
    FUN_1063b99f4(uVar12,uVar21,uVar6,puVar10,uVar24);
    if ((uVar13 & 1) == 0) {
      uVar23 = *(undefined8 *)(param_1 + 0x150);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uStack_88;
      func_0x00010bef60a0(uStack_88);
      uVar8 = uVar23;
      func_0x0001063b9abc(uVar23,uVar6,puVar10,uVar24);
      uVar16 = (uint)uVar8;
      _objc_release(uVar23);
    }
    else {
      uVar16 = 1;
    }
    _objc_release(uVar12);
    lVar14 = *(long *)(param_1 + 0x230);
    func_0x00010c08fa60();
    if (lVar14 == 0) {
      uVar17 = 0;
    }
    else {
      uVar6 = uVar18;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar6;
      func_0x00010c0720c0();
      uVar17 = (uint)uVar21;
      _objc_release(uVar6);
    }
    if (((uVar16 | uVar17) & 1) == 0) {
      puVar11 = PTR_PTR_1126ca1a8;
      func_0x00010c089020(PTR_PTR_1126ca1a8);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = param_6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar13 = uVar21;
      _objc_opt_isKindOfClass(uVar21,puVar11);
      uVar6 = uVar21;
      if ((uVar13 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar21);
      func_0x00010becfa60(param_1);
      goto LAB_1063ae064;
    }
  }
  else {
    uVar24 = *(undefined8 *)(param_1 + 0x1e0);
    uVar6 = uVar18;
    func_0x00010bfe5ec0(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2883e0(uVar24);
    _objc_release(uVar6);
    puVar11 = PTR_PTR_1126ca1a8;
    func_0x00010c089020(PTR_PTR_1126ca1a8);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar13 = uVar21;
    _objc_opt_isKindOfClass(uVar21,puVar11);
    uVar6 = uVar21;
    if ((uVar13 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar21);
    func_0x00010be36bc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becfa60(param_1);
LAB_1063ae064:
    _objc_release(uVar6);
  }
  _objc_release(uVar19);
LAB_1063ae078:
  uVar6 = uVar18;
  func_0x00010bef4240();
  puVar11 = PTR_PTR_1126b2340;
  if (uVar6 == 4) {
    uVar24 = param_5;
    func_0x00010c118b40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076c60();
    _objc_release(uVar24);
    if (((ulong)puVar11 & 1) == 0) {
      uVar6 = uVar18;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar6;
      func_0x00010bf529e0();
      if (uVar3 < uVar21) {
        uVar3 = uVar18;
        func_0x00010bef52c0(uVar18);
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
      }
      else {
        uVar21 = 0;
      }
      _objc_release(uVar6);
      uVar6 = uVar18;
      func_0x0001084c659c(uVar18,uVar21);
      _objc_retainAutoreleasedReturnValue();
      uVar24 = *(undefined8 *)(param_1 + 0x268);
      func_0x00010c269d40(uVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bafe0();
      _objc_release(uVar24);
      _objc_release(uVar6);
      _objc_release(uVar21);
    }
  }
  uVar24 = param_5;
  FUN_106449b58();
  if ((int)uVar24 != 0) {
    uVar19 = *(undefined8 *)(param_1 + 0x100);
    uVar24 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1 + 0x278;
    _objc_loadWeakRetained(lVar14);
    func_0x00010bf73b60(uVar19);
    _objc_release(lVar14);
    _objc_release(uVar24);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  uVar24 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar8;
  FUN_10643b2ac();
  _objc_release(uVar8);
  _objc_release(uVar24);
  if ((int)uVar19 != 0) {
    uVar19 = *(undefined8 *)(param_1 + 0xf8);
    uVar24 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1 + 0x278;
    _objc_loadWeakRetained(lVar14);
    func_0x00010bf73b80(uVar19);
    _objc_release(lVar14);
    _objc_release(uVar24);
  }
  func_0x00010bec3a60(param_1);
  _objc_release(uVar20);
  _objc_release(puVar10);
  _objc_release(uStack_88);
  _objc_release(uVar18);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1063ae300; end: 1063ae5e7; -[SCAdViewingSession _trackAdShowWithItem:adResponse:context:didReturnFromStoryAdInternalDeeplink:] */

void FUN_1063ae300(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar2 = param_6;
  FUN_106449b58();
  func_0x00010bf604e0(PTR_PTR_1126afec0);
  puVar10 = PTR_PTR_1126afec0;
  dVar14 = param_1;
  func_0x00010c15eee0(param_5);
  func_0x00010c0cd480(puVar10);
  uVar3 = *(undefined8 *)(param_2 + 0x118);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0800(param_1 - dVar14);
  _objc_release(uVar3);
  uVar12 = *(undefined8 *)(param_2 + 0xc0);
  uVar3 = param_5;
  func_0x00010bfe5ec0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010bdc55a0(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2 + 0x290;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bef53c0(uVar7,param_3,param_4);
  uVar13 = *(undefined8 *)(param_2 + 0x38);
  uVar8 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20(uVar13,param_3,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2340;
  uVar9 = param_6;
  func_0x00010c118b40(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0771a0(puVar10,param_3,uVar9);
  puVar1 = PTR_PTR_1126b2340;
  uVar11 = param_6;
  func_0x00010c118b40(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0771a0(puVar1,param_3,uVar11);
  func_0x00010c278400(uVar12,param_3,uVar3,lVar4,param_6,lVar6,uVar7,uVar2 & 0xffffffff,uVar13,
                      (byte)puVar10 ^ 1);
  _objc_release(param_6);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar13);
  _objc_release(uVar8);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  func_0x00010becdd20(param_2,param_3,param_4);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bef37c0(uVar7,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c09c880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar3);
  uVar7 = *(undefined8 *)(param_2 + 0x1f0);
  uVar3 = uVar8;
  func_0x00010bef52a0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27c1e0(uVar7,param_3,param_5,uVar3);
  _objc_release(param_5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 1063ae5e8; end: 1063ae793; -[SCAdViewingSession _trackBoostStateForItem:] */

void FUN_1063ae5e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010bec3a60(param_1);
  lVar6 = *(long *)(param_1 + 0x38);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar6 != 0) {
    lVar2 = lVar6;
    func_0x00010bef2c20(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000108f51ed0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x128);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c0e0480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    uVar4 = uVar1;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x130) = uVar4;
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar1);
    _objc_release(lVar3);
  }
  _objc_release(lVar6);
  _objc_release(param_3);
  return;
}



/* Entry: 1063ae794; end: 1063ae843;  */

void FUN_1063ae794(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b5b98;
    _objc_opt_class(PTR_PTR_1126b5b98);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    func_0x00010c06d760(uVar1);
    _objc_release(uVar1);
    func_0x00010bee6b00(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1063ae844; end: 1063ae86f; -[SCAdViewingSession _stopTrackBoostState] */

void FUN_1063ae844(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x130));
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063ae870; end: 1063ae937; -[SCAdViewingSession _userDidBoostAd:] */

void FUN_1063ae870(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x278;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar1;
  FUN_106441e74(lVar1,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf5f0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef53c0(uVar5);
    func_0x00010c0e2220(uVar4);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1063ae938; end: 1063aea57; -[SCAdViewingSession _userDidTakeScreenshot] */

void FUN_1063ae938(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x278;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar1;
  FUN_106441e74(lVar1,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    lVar2 = param_1;
    func_0x00010bf5f0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef53c0(uVar5);
    func_0x00010c0e2500(uVar4);
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    lVar2 = param_1;
    func_0x00010bf5f0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x290;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    func_0x00010c0aec80(uVar4);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1063aea58; end: 1063aec5f; -[SCAdViewingSession _adMediaTrackingKeysForItem:] */

void FUN_1063aea58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar7 = *(ulong *)(param_1 + 0x38);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar2 = *(ulong *)(param_1 + 0x38);
  func_0x00010bef53c0();
  _objc_release(param_3);
  uVar3 = uVar7;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf529e0();
  if (uVar2 < uVar8) {
    uVar2 = uVar7;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    uVar8 = 0;
  }
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x150);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf1f480();
  _objc_release(uVar4);
  uVar3 = uVar7;
  if ((int)uVar1 != 0) {
    uVar2 = uVar8;
    func_0x00010bf5b580();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
      func_0x00010bf5b640(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      goto LAB_1063aebac;
    }
  }
  func_0x00010bf20fa0(uVar7);
  _objc_retainAutoreleasedReturnValue();
LAB_1063aebac:
  uVar2 = uVar8;
  func_0x00010c242040(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x138);
  uVar4 = *(undefined8 *)(param_1 + 0x148);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf925a0();
  uVar5 = uVar8;
  func_0x0001084c4f90(uVar8,uVar9,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x0001084c42cc(uVar2,uVar3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1063aec60; end: 1063aef2f; -[SCAdViewingSession _viewDidEnterBackground] */

void FUN_1063aec60(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  func_0x00010bf42760(*(undefined8 *)(param_1 + 200));
  lVar2 = param_1;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x278;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar2;
  FUN_106441e74(lVar2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 == 0) goto LAB_1063aef10;
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  lVar3 = param_1;
  func_0x00010bf5f0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar3);
  func_0x00010bf600e0(*(undefined8 *)(param_1 + 0x1e0));
  uVar5 = *(undefined8 *)(param_1 + 0x1e0);
  func_0x00010c0f3960(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(ulong *)(param_1 + 0x78);
  func_0x00010c07acc0();
  if ((uVar6 & 1) == 0) {
    uVar6 = *(ulong *)(param_1 + 0x38);
    func_0x00010c07ab60();
    if ((uVar6 & 1) != 0) goto LAB_1063aed84;
    uVar6 = *(ulong *)(param_1 + 0x38);
    func_0x00010c07ac40();
    if ((uVar6 & 1) != 0) goto LAB_1063aed84;
    uVar10 = uVar9;
    func_0x00010bef60a0();
    iVar1 = (int)uVar10;
    FUN_106442044();
    if (iVar1 != 0) goto LAB_1063aed84;
  }
  else {
LAB_1063aed84:
    lVar3 = param_1;
    func_0x00010bf5f780(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010643afcc();
    _objc_release(lVar3);
    lVar3 = param_1 + 0x280;
    _objc_loadWeakRetained(lVar3);
    lVar2 = lVar3;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4e680();
    _objc_release(lVar2);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010be6d9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298f80();
    func_0x00010bef60a0(uVar9);
    func_0x00010c07aca0(*(undefined8 *)(param_1 + 0x68));
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    uVar10 = uVar9;
    func_0x00010bfe5ec0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06b8c0(uVar11);
    uVar11 = *(undefined8 *)(param_1 + 0x148);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x68);
    lVar2 = param_1;
    func_0x00010bf5f780(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befdf60(uVar12);
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(lVar3);
    uVar10 = *(undefined8 *)(param_1 + 0x1f8);
    puVar8 = PTR_PTR_1126b8da0;
    func_0x00010c2499a0(PTR_PTR_1126b8da0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5f780(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27bc60(uVar10);
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_release(puVar8);
  }
  _objc_release(uVar5);
  _objc_release(uVar9);
LAB_1063aef10:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1063aef30; end: 1063af0cf; -[SCAdViewingSession _onAppEnterInActiveState] */

void FUN_1063aef30(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_2;
  func_0x00010bf5f780();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_2 + 0x278;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar7 = *(long *)(param_2 + 0x38);
    lVar1 = lVar3;
    func_0x00010be36bc0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4b20(lVar7,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar7;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010bef53c0(uVar4,param_3,lVar3);
    lVar5 = lVar1;
    func_0x00010c08fa60();
    if (lVar5 != 0) {
      lVar5 = lVar7;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      lVar5 = lVar6;
      func_0x00010bef60a0();
      if ((lVar5 == 1) || (lVar5 = lVar6, func_0x00010bef60a0(), lVar5 == 5)) {
        func_0x00010beec800(*(undefined8 *)(param_2 + 0x200));
        func_0x00010c0e2840(param_1 * 1000.0,*(undefined8 *)(param_2 + 0xc0),param_3,lVar1,uVar4);
      }
      _objc_release(lVar6);
    }
    _objc_release(lVar1);
    _objc_release(lVar7);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1063af0d0; end: 1063af153; -[SCAdViewingSession _actionMenuButtonKeys] */

void FUN_1063af0d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010befa120();
  if ((*(long *)(param_1 + 0xd0) != 0xb) && (*(long *)(param_1 + 0xd0) != 0x27)) {
    func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5a70);
  }
  func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5a88);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063af154; end: 1063af1c7; -[SCAdViewingSession _operaConfiguration] */

void FUN_1063af154(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x288;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    param_1 = param_1 + 0x280;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1063af1c8; end: 1063af2bf; -[SCAdViewingSession _updateUnskippableManagerStartViewIfNeccessary:adRequestClientId:adType:page:] */

void FUN_1063af1c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c08fa60();
  if (param_4 != 0) {
    _objc_retain(param_3);
    puVar1 = PTR_PTR_1126b2338;
    func_0x00010bfe8ca0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    if ((int)uVar2 == 0) {
      puVar3 = PTR_PTR_1126b2338;
      func_0x00010c0c6900(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar1);
      _objc_release(param_3);
      if ((int)uVar2 == 0) goto LAB_1063af2a0;
    }
    else {
      _objc_release(puVar1);
      _objc_release(param_3);
    }
    if (*(long *)(param_1 + 0x260) == 0) {
      func_0x00010be2c2e0(param_1,param_2,param_6);
    }
  }
LAB_1063af2a0:
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063af2c0; end: 1063af323; -[SCAdViewingSession _onStoreViewOpenedWithAdIdentifier:snapIndex:] */

void FUN_1063af2c0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0xe2) = 1;
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  puVar1 = PTR_PTR_1126ca300;
  func_0x00010bf0d240(PTR_PTR_1126ca300);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e4e20(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c2023f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_setShowingCustomAttachment__11265e320,1);
  return;
}



/* Entry: 1063af324; end: 1063af32b; -[SCAdViewingSession _onContextMenuOpenWithAdRequestClientId:snapIndex:] */

void FUN_1063af324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e3230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xc0),PTR_s_onContextMenuOpen_snapIndex__1126166a0);
  return;
}



/* Entry: 1063af32c; end: 1063af613; -[SCAdViewingSession _handleStoreViewClosedWithAdIdentifier:pageId:visibleLoadTimeSec:pageLoadedOnExit:pageLoadedOnEntry:collectionItemIndex:] */

void FUN_1063af32c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain(param_8);
  uVar9 = *(undefined8 *)(param_2 + 0x60);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c2023e0(uVar9,param_3,0);
  lVar1 = param_2 + 0x280;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f1b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5f780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126bfe00;
  func_0x00010bf05560(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c0f0c80(lVar3,param_3,PTR____kCFBooleanFalse_11034ab60,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  lVar1 = param_2 + 0x280;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010c29dfe0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf60c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0d3c80();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c7d88;
  func_0x00010c0f2320(PTR_PTR_1126c7d88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(lVar7,param_3,puVar4,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c7d88;
  func_0x00010c0f1740(PTR_PTR_1126c7d88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(lVar7,param_3,puVar4,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c7d88;
  func_0x00010c0f1720(PTR_PTR_1126c7d88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(lVar7,param_3,puVar4,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar4);
  if (param_8 != 0) {
    puVar4 = PTR_PTR_1126ca1a8;
    func_0x00010c089020(PTR_PTR_1126ca1a8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(lVar7,param_3,param_8,puVar4);
    _objc_release(puVar4);
  }
  lVar1 = param_2 + 0x278;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010be6ba60(param_2,param_3,lVar5,lVar2,lVar7,param_4);
  _objc_release(param_4);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 1063af614; end: 1063af70f; -[SCAdViewingSession _handleStoreWillOpenWithAdIdentifier:adType:snapIndex:] */

void FUN_1063af614(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf5f8c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d3c80();
  _objc_release(lVar1);
  if (param_4 == 10) {
    puVar3 = PTR_PTR_1126bfe00;
    func_0x00010bf3fe60(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(lVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5aa0,puVar3);
    _objc_release(puVar3);
  }
  lVar1 = lVar2;
  func_0x00010bf51e00(lVar2);
  func_0x00010c1877e0(param_1,param_2,lVar1);
  _objc_release(lVar1);
  func_0x00010c2884a0(*(undefined8 *)(param_1 + 0x1e0),param_2,param_3,lVar2,param_5,1);
  func_0x00010c2884a0(*(undefined8 *)(param_1 + 0x1e0),param_2,param_3,lVar2,param_5,4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1063af710; end: 1063afbaf; -[SCAdViewingSession _handleOpenViewWithParams:page:] */

void FUN_1063af710(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x278;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar16 = *(undefined **)(param_1 + 0x38);
  lVar2 = lVar3;
  func_0x00010be36bc0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20(puVar16,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar17 = *(long *)(param_1 + 0x38);
  lVar2 = lVar3;
  func_0x00010be36bc0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20(lVar17,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar4 = lVar17;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bef53c0(uVar5,param_2,lVar3);
  lVar2 = param_1 + 0x290;
  _objc_loadWeakRetained();
  lVar6 = lVar2;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c27dd80();
  _objc_release(lVar6);
  _objc_release(lVar2);
  lVar2 = lVar4;
  func_0x00010c08fa60();
  puVar8 = puVar16;
  func_0x00010c26a3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf65fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c08fa60();
  if (puVar10 == (undefined *)0x0) {
LAB_1063af95c:
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  else {
    puVar11 = PTR_PTR_1126b8c98;
    func_0x00010bf91660();
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar10 = PTR_PTR_1126afca8;
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar11 != 0) {
      puVar8 = puVar16;
      func_0x00010bef2c20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar9,param_2,&PTR____CFConstantStringClassReference_110e4d0b8);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c238760(puVar10,param_2,puVar9,puVar11,puVar12);
      _objc_release(puVar12);
      _objc_release(puVar11);
      goto LAB_1063af95c;
    }
  }
  puVar9 = PTR_PTR_1126b2340;
  uVar15 = param_4;
  func_0x00010c118b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0771c0(puVar9,param_2,uVar15);
  *(char *)(param_1 + 0xe0) = (char)puVar9;
  _objc_release(uVar15);
  if (lVar2 != 0) {
    uVar13 = *(undefined8 *)(param_1 + 0x150);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf1f480();
    _objc_release(uVar13);
    if ((int)uVar15 == 0) {
      uVar15 = *(undefined8 *)(param_1 + 0xc0);
      puVar9 = PTR_PTR_1126ca300;
      func_0x00010c29e9c0(PTR_PTR_1126ca300,param_2,lVar4,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e4e20(uVar15,param_2,puVar9);
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126ca2b0;
      uVar15 = param_4;
      func_0x00010c118b40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07c320(puVar9,param_2,uVar15);
      _objc_release(uVar15);
      if ((int)puVar9 == 0) goto LAB_1063afb5c;
      uVar15 = *(undefined8 *)(param_1 + 0xc0);
      puVar9 = PTR_PTR_1126ca300;
      func_0x00010bf0d240(PTR_PTR_1126ca300,param_2,lVar4,uVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar14 = param_3;
      func_0x00010c06c7e0();
      if ((uVar14 & 1) == 0) {
        uVar15 = *(undefined8 *)(param_1 + 0xc0);
        puVar9 = PTR_PTR_1126ca300;
        func_0x00010c29e9c0(PTR_PTR_1126ca300,param_2,lVar4,uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e4e20(uVar15,param_2,puVar9);
        _objc_release(puVar9);
      }
      puVar9 = PTR_PTR_1126ca2b0;
      uVar15 = param_4;
      func_0x00010c118b40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07c320(puVar9,param_2,uVar15);
      _objc_release(uVar15);
      if (((int)puVar9 == 0) || (lVar7 != 2)) goto LAB_1063afb5c;
      uVar15 = *(undefined8 *)(param_1 + 0xc0);
      puVar9 = PTR_PTR_1126ca300;
      func_0x00010c29e9c0(PTR_PTR_1126ca300,param_2,lVar4,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e4e20(uVar15,param_2,puVar9);
      _objc_release(puVar9);
      uVar15 = *(undefined8 *)(param_1 + 0xc0);
      puVar9 = PTR_PTR_1126ca300;
      func_0x00010bf3ca20(PTR_PTR_1126ca300,param_2,lVar4,uVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0e4e20(uVar15,param_2,puVar9);
    _objc_release(puVar9);
  }
LAB_1063afb5c:
  _objc_release(lVar4);
  _objc_release(lVar17);
  _objc_release(puVar16);
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063afbb0; end: 1063afd77; -[SCAdViewingSession _handleOpenViewLoadedWithParams:page:] */

void FUN_1063afbb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x278;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) goto LAB_1063afd48;
  lVar10 = *(long *)(param_1 + 0x38);
  lVar2 = lVar3;
  func_0x00010be36bc0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20(lVar10,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar10;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08fa60();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bef53c0(uVar5,param_2,lVar3);
  puVar6 = *(undefined **)(param_1 + 0x150);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf1f480();
  puVar8 = PTR_PTR_1126ca2b0;
  if (((int)puVar7 == 0) || (lVar4 == 0)) {
LAB_1063afd30:
    _objc_release(puVar6);
  }
  else {
    uVar9 = param_4;
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07c320(puVar8,param_2,uVar9);
    _objc_release(uVar9);
    _objc_release(puVar6);
    if ((int)puVar8 != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0xc0);
      puVar6 = PTR_PTR_1126ca300;
      func_0x00010bf0d240(PTR_PTR_1126ca300,param_2,lVar2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e4e20(uVar9,param_2,puVar6);
      goto LAB_1063afd30;
    }
  }
  _objc_release(lVar2);
  _objc_release(lVar10);
LAB_1063afd48:
  _objc_release(lVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063afd78; end: 1063afecb; -[SCAdViewingSession _handleMediaStartsToDisplayWithOperaPage:] */

void FUN_1063afd78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x278;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar7 = *(long *)(param_1 + 0x38);
    lVar2 = lVar3;
    func_0x00010be36bc0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4b20(lVar7,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar7;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c08fa60();
    lVar5 = lVar7;
    func_0x00010bef4240(lVar7);
    uVar6 = param_3;
    FUN_106449b58(param_3);
    FUN_10644a2b8(param_3);
    if (lVar4 != 0) {
      func_0x00010bf7bf80(*(undefined8 *)(param_1 + 0x100),param_2,lVar2,uVar6,lVar5,
                          *(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x150));
    }
    _objc_release(lVar2);
    _objc_release(lVar7);
  }
  _objc_release(lVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063afecc; end: 1063b0123; -[SCAdViewingSession _handleVideoPlaybackProgressDidUpdateWithOperaPage:params:] */

void FUN_1063afecc(double param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2 + 0x278;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar9 = *(long *)(param_2 + 0x38);
    lVar2 = lVar3;
    func_0x00010be36bc0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar9;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c08fa60();
    func_0x00010bef4240(lVar9);
    if ((lVar4 != 0) && (uVar5 = param_4, FUN_106449b58(), (int)uVar5 != 0)) {
      uVar5 = param_4;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      puVar7 = PTR_PTR_1126ca3f8;
      _objc_opt_class(PTR_PTR_1126ca3f8);
      uVar8 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar7);
      uVar5 = uVar6;
      if ((uVar8 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar6);
      func_0x00010bf5fb40(param_5);
      dVar11 = (double)(ulong)(uint)(float)param_1;
      func_0x00010bf8b340(param_5);
      FUN_10643d584(dVar11,(float)param_1,uVar5);
      _objc_release(uVar5);
      uVar12 = 0x3ff0000000000000;
      if (dVar11 == 1.0) {
        FUN_10644a2b8(param_4);
        uVar10 = *(undefined8 *)(param_2 + 0x100);
        lVar4 = lVar3;
        func_0x00010be36bc0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        param_2 = param_2 + 0x278;
        _objc_loadWeakRetained(param_2);
        func_0x00010bef4240(lVar9);
        func_0x00010bf77120(uVar12,uVar10);
        _objc_release(param_2);
        _objc_release(lVar4);
      }
    }
    _objc_release(lVar2);
    _objc_release(lVar9);
  }
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063b0124; end: 1063b016b; -[SCAdViewingSession currentPage] */

void FUN_1063b0124(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1e0);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    _objc_retain(lVar1);
  }
  else {
    func_0x00010bf5f780();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1063b016c; end: 1063b01eb; -[SCAdViewingSession setCurrentPage:params:snapIndex:adIdentifier:] */

void FUN_1063b016c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x1e0) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_3;
    _objc_release(uVar1);
  }
  else {
    func_0x00010c1d7ea0(*(long *)(param_1 + 0x1e0),param_2,param_3,param_4,param_5,param_6,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063b01ec; end: 1063b0233; -[SCAdViewingSession currentParams] */

void FUN_1063b01ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1e0);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x48);
    _objc_retain(lVar1);
  }
  else {
    func_0x00010bf5f8c0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1063b0234; end: 1063b0287; -[SCAdViewingSession setCurrentParams:] */

void FUN_1063b0234(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x1e0) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = param_3;
    _objc_release(uVar1);
  }
  else {
    func_0x00010c1877e0(*(long *)(param_1 + 0x1e0),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063b0288; end: 1063b02cf; -[SCAdViewingSession currentItem] */

void FUN_1063b0288(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1e0);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    _objc_retain(lVar1);
  }
  else {
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1063b02d0; end: 1063b033b; -[SCAdViewingSession setCurrentItem:snapIndex:adIdentifier:] */

void FUN_1063b02d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x1e0) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = param_3;
    _objc_release(uVar1);
  }
  else {
    func_0x00010c1874e0(*(long *)(param_1 + 0x1e0),param_2,param_3,param_4,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063b033c; end: 1063b0393; -[SCAdViewingSession adDismissTracker] */

void FUN_1063b033c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x1e8);
  if ((lVar3 == 0) && (lVar3 = *(long *)(param_1 + 0xb8), lVar3 == 0)) {
    puVar1 = PTR_PTR_1126ca368;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined **)(param_1 + 0xb8) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0xb8);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1063b0394; end: 1063b0447; -[SCAdViewingSession _guardOnNullAdIdentifierWithS2R:funcName:] */

void FUN_1063b0394(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e4d0d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 600);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b3e90;
  func_0x00010befdec0(PTR_PTR_1126b3e90,param_2,8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ada0(uVar2,param_2,0,puVar3,puVar1,&PTR____CFConstantStringClassReference_110e4d0f8
                      ,1);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063b0448; end: 1063b053b; -[SCAdViewingSession _currentItemForEvent:page:] */

void FUN_1063b0448(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c9a10;
  _objc_retain(param_3);
  func_0x00010c063ee0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    lVar3 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x278;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    lVar3 = param_1 + 0x278;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c064160();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1063b053c; end: 1063b060f; -[SCAdViewingSession _operaEventsToTrace] */

void FUN_1063b053c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2638;
  func_0x00010bf112e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226900(puVar5,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1063b0610; end: 1063b06e3; -[SCAdViewingSession _beginOperaEventTraceIfNecessary:] */

void FUN_1063b0610(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x270);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e4d118);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf17b60(puVar2,param_2,puVar3);
    func_0x00010c0df7c0(puVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1063b06e4; end: 1063b0757; -[SCAdViewingSession _endOperaEventTraceIfNecessary:] */

void FUN_1063b06e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010c22b6a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c282800(param_3);
    _objc_release(param_3);
    func_0x00010bf941e0(puVar1,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1063b0758; end: 1063b076f; -[SCAdViewingSession playlistItemController] */

void FUN_1063b0758(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x278);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063b0770; end: 1063b0787; -[SCAdViewingSession operaControlling] */

void FUN_1063b0770(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x280);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063b0788; end: 1063b079f; -[SCAdViewingSession operaConfiguration] */

void FUN_1063b0788(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063b07a0; end: 1063b07b7; -[SCAdViewingSession operaInteractionState] */

void FUN_1063b07a0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x290);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063b07b8; end: 1063b07c3; -[SCAdViewingSession setOperaInteractionState:] */

void FUN_1063b07b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x290,param_3);
  return;
}



/* Entry: 1063b07c4; end: 1063b07cb; -[SCAdViewingSession eventAnnouncing] */

undefined8 FUN_1063b07c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x298);
}



/* Entry: 1063b07cc; end: 1063b07d3; -[SCAdViewingSession unifiedEventBus] */

undefined8 FUN_1063b07cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2a0);
}



/* Entry: 1063b07d4; end: 1063b0803; -[SCAdViewingSession setUnifiedEventBus:] */

void FUN_1063b07d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x2a0);
  *(undefined8 *)(param_1 + 0x2a0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063b0804; end: 1063b080b; -[SCAdViewingSession setCurrentPage:] */

void FUN_1063b0804(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1063b080c; end: 1063b0bbb; -[SCAdViewingSession .cxx_destruct] */

void FUN_1063b080c(long param_1)

{
  _objc_storeStrong(param_1 + 0x2a0,0);
  _objc_storeStrong(param_1 + 0x298,0);
  _objc_destroyWeak(param_1 + 0x290);
  _objc_destroyWeak(param_1 + 0x288);
  _objc_destroyWeak(param_1 + 0x280);
  _objc_destroyWeak(param_1 + 0x278);
  _objc_storeStrong(param_1 + 0x270,0);
  _objc_storeStrong(param_1 + 0x268,0);
  _objc_storeStrong(param_1 + 0x260,0);
  _objc_storeStrong(param_1 + 600,0);
  _objc_storeStrong(param_1 + 0x250,0);
  _objc_storeStrong(param_1 + 0x248,0);
  _objc_storeStrong(param_1 + 0x240,0);
  _objc_storeStrong(param_1 + 0x238,0);
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1063b0bbc; end: 1063b0ee3; -[SCAdViewingSessionHistoryTracker initWithAdDataSource:navigationStyle:viewingSessionId:viewLocation:sharingSession:chromeSession:adConfigProvider:adConfigProviderV2:sessionViewingHistory:boostCoordinator:] */

undefined8 *
FUN_1063b0bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f1138;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar4 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar4 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar4 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar4 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar4 = puVar1[7];
    puVar1[7] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = puVar1[10];
    puVar1[10] = param_3;
    _objc_release(uVar4);
    puVar1[0xd] = param_4;
    _objc_retain(param_5);
    uVar4 = puVar1[0xe];
    puVar1[0xe] = param_5;
    _objc_release(uVar4);
    puVar1[0xf] = param_6;
    _objc_storeWeak(puVar1 + 0xb,param_7);
    _objc_storeWeak(puVar1 + 0xc,param_8);
    _objc_retain(param_9);
    uVar4 = puVar1[0x10];
    puVar1[0x10] = param_9;
    _objc_release(uVar4);
    _objc_retain(param_10);
    uVar4 = puVar1[0x11];
    puVar1[0x11] = param_10;
    _objc_release(uVar4);
    _objc_retain(param_11);
    uVar4 = puVar1[0x12];
    puVar1[0x12] = param_11;
    _objc_release(uVar4);
    puVar1[8] = 0;
    *(undefined1 *)(puVar1 + 0x13) = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = puVar1[0x16];
    puVar1[0x16] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_12);
    uVar4 = puVar1[0x18];
    puVar1[0x18] = param_12;
    _objc_release(uVar4);
    *(undefined1 *)(puVar1 + 0x17) = 0;
    puVar1[0x1a] = 0;
    uVar4 = param_11;
    func_0x00010c269d40(param_11);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001084c0d90(param_6,puVar1[0x11]);
    func_0x00010c067f60(puVar1[0x11]);
    func_0x00010c067f60(puVar1[0x11]);
    lVar3 = puVar1[0x11];
    func_0x00010c067f60(lVar3);
    func_0x00010c29f400((double)lVar3,uVar4);
    _objc_release(uVar4);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1063b0ee4; end: 1063b0fdb; -[SCAdViewingSessionHistoryTracker tearDown] */

void FUN_1063b0ee4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar6 = PTR_PTR_1126ca400;
  lVar1 = param_1 + 0x100;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be6d9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c298f80();
  func_0x00010c271ce0(puVar6,param_2,lVar3,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255dc0();
  _objc_release(uVar7);
  func_0x00010be098e0(param_1,param_2,*(undefined8 *)(param_1 + 0x10),puVar6,
                      *(undefined8 *)(param_1 + 0xe0));
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1063b0fdc; end: 1063b1137; -[SCAdViewingSessionHistoryTracker setPlaylistItemController:] */

void FUN_1063b0fdc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0xf8,param_3);
  uVar5 = *(ulong *)(param_1 + 0x78);
  _objc_retain();
  _objc_retain(param_3);
  if (uVar5 < 0x2c && (1L << (uVar5 & 0x3f) & 0x80060000000U) != 0) {
    lVar1 = param_3;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      lVar2 = lVar1;
      func_0x00010bfcf800(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x0001006372a4();
      _objc_release(lVar2);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf529e0(lVar3);
      func_0x00010c0df840(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    _objc_release(lVar1);
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  _objc_release(param_3);
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf12a80();
  _objc_release(uVar4);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063b1138; end: 1063b12db; -[SCAdViewingSessionHistoryTracker registeredEventsForOperaSession] */

void FUN_1063b1138(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puStack_128;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_a8 = puVar1;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2338;
  puStack_a0 = puVar2;
  func_0x00010bfe8ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2338;
  puStack_98 = puVar3;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c9400;
  puStack_90 = puVar4;
  func_0x00010c157400();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2330;
  puStack_88 = puVar10;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c9460;
  puStack_80 = puVar5;
  func_0x00010c29ae40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b6128;
  puStack_78 = puVar6;
  func_0x00010c15b3c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = &puStack_a8;
  uVar15 = 8;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar14);
  _objc_retain(uVar15);
  uVar9 = uVar15;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1 + 0xf8;
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) goto LAB_1063b1d5c;
  lVar19 = *(long *)(puVar1 + 0x50);
  puVar2 = puVar3;
  func_0x00010be36bc0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (lVar19 == 0) {
    puVar2 = puVar1 + 0xf8;
    _objc_loadWeakRetained();
    puVar4 = puVar3;
    func_0x00010bfce400(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010bf63e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    puStack_128 = puVar10;
    FUN_10640b8b8();
    if (puStack_128 == (undefined *)0xffffffffffffffff) {
      puStack_128 = (undefined *)0x0;
    }
    else {
      FUN_10640a50c();
    }
  }
  else {
    puVar10 = *(undefined **)(puVar1 + 0x50);
    func_0x00010bef6240();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c106140(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar5 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar2);
    puVar2 = puVar4;
    if (((ulong)puVar5 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar4);
    puStack_128 = puVar2;
    func_0x00010c067fc0();
    _objc_release(puVar2);
  }
  _objc_release(puVar10);
  uVar20 = *(ulong *)(puVar1 + 8);
  puVar2 = puVar3;
  func_0x00010be36bc0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((uVar20 & 1) == 0) {
    func_0x00010c137fe0(*(undefined8 *)(puVar1 + 0x20));
    func_0x00010c137fe0(*(undefined8 *)(puVar1 + 0x28));
    func_0x00010c137fe0(*(undefined8 *)(puVar1 + 0x30));
    func_0x00010c137fe0(*(undefined8 *)(puVar1 + 0x38));
    puVar1[0x48] = 0;
    puVar2 = puVar3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(puVar1 + 8);
    *(undefined **)(puVar1 + 8) = puVar2;
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)(puVar1 + 0x90);
    func_0x00010c269d40(uVar16);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar19;
    func_0x00010bfe5ec0(lVar19);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar19;
    func_0x00010c15ed20(lVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(lVar19);
    func_0x00010bf7bfa0(uVar16);
    _objc_release(lVar11);
    _objc_release(lVar13);
    _objc_release(uVar16);
  }
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar14;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((((uint)uVar20 | (uint)ppuVar12 ^ 0xffffffff) & 1) == 0) {
    func_0x00010c24d960(*(undefined8 *)(puVar1 + 0x38));
  }
  uVar20 = *(ulong *)(puVar1 + 0x10);
  puVar2 = puVar3;
  func_0x00010bfce400(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar14;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if (((int)ppuVar12 != 0) && ((uVar20 & 1) == 0)) {
    uVar16 = *(undefined8 *)(puVar1 + 0x90);
    func_0x00010c269d40(uVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bfce400(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5ee60(uVar16);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(uVar16);
    lVar13 = *(long *)(puVar1 + 8);
    func_0x00010c08fa60();
    puVar2 = PTR_PTR_1126ca400;
    if (lVar13 != 0) {
      puVar4 = puVar1 + 0x100;
      _objc_loadWeakRetained(puVar4);
      puVar10 = puVar4;
      func_0x00010c0688c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar10;
      func_0x00010c089060();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      func_0x00010be6d9c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c298f80();
      func_0x00010c271ce0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar10);
      _objc_release(puVar4);
      func_0x00010be098e0(puVar1);
      _objc_release(puVar2);
    }
    puVar2 = puVar3;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined **)(puVar1 + 0x10) = puVar4;
    _objc_release(uVar16);
    _objc_release(puVar2);
    puVar1[0xd9] = lVar19 != 0;
    *(undefined **)(puVar1 + 0xe0) = puStack_128;
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar16 = *(undefined8 *)(puVar1 + 0xe8);
    *(undefined **)(puVar1 + 0xe8) = puVar2;
    _objc_release(uVar16);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar16 = *(undefined8 *)(puVar1 + 0xf0);
    *(undefined **)(puVar1 + 0xf0) = puVar2;
    _objc_release(uVar16);
    func_0x00010c137fe0(*(undefined8 *)(puVar1 + 0x18));
    func_0x00010c24d960(*(undefined8 *)(puVar1 + 0x18));
  }
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar14;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)ppuVar12 == 0) {
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010bf3df00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar14;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)ppuVar12 == 0) {
      puVar2 = PTR_PTR_1126b2338;
      func_0x00010bfe8ca0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar14;
      func_0x00010c0720c0();
      if ((int)ppuVar12 == 0) {
        puVar4 = PTR_PTR_1126b2338;
        func_0x00010c0c6900(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar14;
        func_0x00010c0720c0();
        _objc_release(puVar4);
        _objc_release(puVar2);
        if ((int)ppuVar12 == 0) {
          puVar2 = PTR_PTR_1126b6128;
          func_0x00010c15b3c0(PTR_PTR_1126b6128);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar14;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if ((int)ppuVar12 == 0) {
            puVar2 = PTR_PTR_1126c9400;
            func_0x00010c157400(PTR_PTR_1126c9400);
            _objc_retainAutoreleasedReturnValue();
            ppuVar12 = ppuVar14;
            func_0x00010c0720c0();
            _objc_release(puVar2);
            puVar2 = PTR_PTR_1126ca400;
            if ((int)ppuVar12 != 0) {
              puVar4 = puVar1 + 0x100;
              _objc_loadWeakRetained(puVar4);
              puVar10 = puVar4;
              func_0x00010c0688c0();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar10;
              func_0x00010c089060();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar1;
              func_0x00010be6d9c0(puVar1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c298f80();
              func_0x00010c271ce0(puVar2);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar6);
              _objc_release(puVar5);
              _objc_release(puVar10);
              _objc_release(puVar4);
              func_0x00010be70c20(puVar1);
              puVar4 = puVar3;
              func_0x00010be36bc0(puVar3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010be098c0(puVar1);
              _objc_release(puVar4);
              func_0x00010be92200(puVar1);
              uVar16 = *(undefined8 *)(puVar1 + 0x90);
              func_0x00010c269d40(uVar16);
              _objc_retainAutoreleasedReturnValue();
              lVar13 = lVar19;
              func_0x00010bfe5ec0(lVar19);
              _objc_retainAutoreleasedReturnValue();
              lVar11 = lVar19;
              func_0x00010c15ed20(lVar19);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bef4240(lVar19);
              func_0x00010bf7bfa0(uVar16);
              _objc_release(lVar11);
              _objc_release(lVar13);
              _objc_release(uVar16);
              func_0x00010c24d960(*(undefined8 *)(puVar1 + 0x20));
              func_0x00010c24d960(*(undefined8 *)(puVar1 + 0x28));
              _objc_release(puVar2);
            }
          }
          else {
            puVar1[0xd8] = 1;
          }
          goto LAB_1063b1d50;
        }
      }
      else {
        _objc_release(puVar2);
      }
      func_0x00010c0f5b20(*(undefined8 *)(puVar1 + 0x38));
    }
    else {
      func_0x00010c0f5b20(*(undefined8 *)(puVar1 + 0x20));
      func_0x00010c0f5b20(*(undefined8 *)(puVar1 + 0x28));
      func_0x00010c0f5b20(*(undefined8 *)(puVar1 + 0x30));
      func_0x00010bec3a60(puVar1);
      if (lVar19 == 0) {
        uVar16 = 0x17;
      }
      else {
        uVar18 = *(undefined8 *)(puVar1 + 0x50);
        puVar2 = puVar3;
        func_0x00010be36bc0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef4b20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        uVar16 = uVar18;
        func_0x00010bef60a0();
        _objc_release(uVar18);
      }
      uVar17 = (undefined4)*(undefined8 *)(puVar1 + 0x50);
      lVar13 = lVar19;
      func_0x00010bfe5ec0(lVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06b8c0();
      _objc_release(lVar13);
      puVar2 = puVar1 + 0x100;
      _objc_loadWeakRetained();
      puVar4 = puVar2;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar4;
      func_0x00010bf4e680();
      _objc_release(puVar4);
      _objc_release(puVar2);
      puVar2 = puVar1 + 0x58;
      _objc_loadWeakRetained();
      puVar4 = puVar2;
      func_0x00010c07acc0();
      if (((ulong)puVar4 & 1) == 0) {
        uVar20 = *(ulong *)(puVar1 + 0x50);
        func_0x00010c07ab60();
        if ((uVar20 & 1) == 0) {
          func_0x00010c07ac40();
        }
      }
      _objc_release(puVar2);
      puVar2 = puVar1 + 0x100;
      _objc_loadWeakRetained();
      puVar4 = puVar2;
      func_0x00010c0688c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c089060();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c27dd80();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar2);
      if (puVar6 == (undefined *)0x12) {
        puVar2 = puVar1 + 0x60;
        _objc_loadWeakRetained();
        func_0x00010c234f00();
LAB_1063b1b2c:
        _objc_release(puVar2);
      }
      else if (puVar6 == (undefined *)0x11) {
        puVar2 = puVar1 + 0x60;
        _objc_loadWeakRetained();
        func_0x00010c234f20();
        goto LAB_1063b1b2c;
      }
      uVar18 = uVar15;
      func_0x00010643afcc(uVar15);
      uVar22 = *(undefined8 *)(puVar1 + 0x68);
      puVar5 = puVar1;
      func_0x00010be6d9c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010c298f80();
      puVar2 = puVar1 + 0x60;
      _objc_loadWeakRetained(puVar2);
      puVar8 = puVar2;
      func_0x00010c07aca0();
      uVar21 = *(undefined8 *)(puVar1 + 0x80);
      puVar4 = puVar1 + 0x60;
      _objc_loadWeakRetained();
      func_0x00010befdf60();
      FUN_10643b070(puVar6,uVar18,uVar22,puVar7,uVar16,puVar8,uVar17,uVar21,(char)puVar10);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar5);
      if ((long)puVar6 < 2) {
        if (puVar6 == (undefined *)0x0) {
          uVar16 = *(undefined8 *)(puVar1 + 0x90);
          func_0x00010c269d40(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0d120();
          _objc_release(uVar16);
          func_0x00010c138160(*(undefined8 *)(puVar1 + 0x30));
          puVar1[0x48] = 1;
          puVar1[0x98] = 1;
        }
        else {
          func_0x00010bec9460(puVar1);
        }
      }
      else if (puVar6 != (undefined *)0x3) {
        func_0x00010c0f5b20(*(undefined8 *)(puVar1 + 0x38));
        puVar4 = PTR_PTR_1126ca400;
        puVar2 = puVar1 + 0x100;
        _objc_loadWeakRetained(puVar2);
        puVar10 = puVar2;
        func_0x00010c0688c0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar10;
        func_0x00010c089060();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010be6d9c0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c298f80();
        func_0x00010c271ce0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar10);
        _objc_release(puVar2);
        puVar2 = puVar3;
        func_0x00010be36bc0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be098c0(puVar1);
        _objc_release(puVar2);
        func_0x00010be92200(puVar1);
        _objc_release(puVar4);
      }
    }
  }
  else {
    func_0x00010c24d960(*(undefined8 *)(puVar1 + 0x20));
    lVar13 = 0x30;
    if (puVar1[0x48] == '\0') {
      lVar13 = 0x28;
    }
    func_0x00010c24d960(*(undefined8 *)(puVar1 + lVar13));
    func_0x00010becdd20(puVar1);
  }
LAB_1063b1d50:
  _objc_release(lVar19);
LAB_1063b1d5c:
  _objc_release(puVar3);
  _objc_release(uVar9);
  _objc_release(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar14);
  return;
}



/* Entry: 1063b12dc; end: 1063b1f47; -[SCAdViewingSessionHistoryTracker operaViewDidSendEvent:page:params:] */

void FUN_1063b12dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + 0xf8;
  _objc_loadWeakRetained();
  lVar2 = lVar8;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = lVar2;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 == 0) goto LAB_1063b1d5c;
  lVar18 = *(long *)(param_1 + 0x50);
  lVar8 = lVar2;
  func_0x00010be36bc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  if (lVar18 == 0) {
    uVar19 = param_1 + 0xf8;
    _objc_loadWeakRetained();
    lVar8 = lVar2;
    func_0x00010bfce400(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar19;
    func_0x00010bf63e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(uVar19);
    uStack_78 = uVar3;
    FUN_10640b8b8();
    if (uStack_78 == 0xffffffffffffffff) {
      uStack_78 = 0;
    }
    else {
      FUN_10640a50c();
    }
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x50);
    func_0x00010bef6240();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b92c8;
    func_0x00010c106140(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    uVar19 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar19 = 0;
    }
    _objc_retain(uVar19);
    _objc_release(uVar5);
    uStack_78 = uVar19;
    func_0x00010c067fc0();
    _objc_release(uVar19);
  }
  _objc_release(uVar3);
  uVar19 = *(ulong *)(param_1 + 8);
  lVar8 = lVar2;
  func_0x00010be36bc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(lVar8);
  if ((uVar19 & 1) == 0) {
    func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x38));
    *(undefined1 *)(param_1 + 0x48) = 0;
    lVar8 = lVar2;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar8;
    _objc_release(uVar15);
    uVar15 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar18;
    func_0x00010bfe5ec0(lVar18);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar18;
    func_0x00010c15ed20(lVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(lVar18);
    func_0x00010bf7bfa0(uVar15);
    _objc_release(lVar7);
    _objc_release(lVar8);
    _objc_release(uVar15);
  }
  puVar4 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  if ((((uint)uVar19 | (uint)uVar15 ^ 0xffffffff) & 1) == 0) {
    func_0x00010c24d960(*(undefined8 *)(param_1 + 0x38));
  }
  uVar19 = *(ulong *)(param_1 + 0x10);
  lVar8 = lVar2;
  func_0x00010bfce400(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar8;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(lVar7);
  _objc_release(lVar8);
  puVar4 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  if (((int)uVar15 != 0) && ((uVar19 & 1) == 0)) {
    uVar15 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010bfce400(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5ee60(uVar15);
    _objc_release(lVar7);
    _objc_release(lVar8);
    _objc_release(uVar15);
    lVar8 = *(long *)(param_1 + 8);
    func_0x00010c08fa60();
    puVar4 = PTR_PTR_1126ca400;
    if (lVar8 != 0) {
      lVar8 = param_1 + 0x100;
      _objc_loadWeakRetained(lVar8);
      lVar7 = lVar8;
      func_0x00010c0688c0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar7;
      func_0x00010c089060();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_1;
      func_0x00010be6d9c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c298f80();
      func_0x00010c271ce0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar7);
      _objc_release(lVar8);
      func_0x00010be098e0(param_1);
      _objc_release(puVar4);
    }
    lVar8 = lVar2;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar7;
    _objc_release(uVar15);
    _objc_release(lVar8);
    *(bool *)(param_1 + 0xd9) = lVar18 != 0;
    *(ulong *)(param_1 + 0xe0) = uStack_78;
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar15 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined **)(param_1 + 0xe8) = puVar4;
    _objc_release(uVar15);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar15 = *(undefined8 *)(param_1 + 0xf0);
    *(undefined **)(param_1 + 0xf0) = puVar4;
    _objc_release(uVar15);
    func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x18));
    func_0x00010c24d960(*(undefined8 *)(param_1 + 0x18));
  }
  puVar4 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  if ((int)uVar15 == 0) {
    puVar4 = PTR_PTR_1126b2330;
    func_0x00010bf3df00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    if ((int)uVar15 == 0) {
      puVar4 = PTR_PTR_1126b2338;
      func_0x00010bfe8ca0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = param_3;
      func_0x00010c0720c0();
      if ((int)uVar15 == 0) {
        puVar11 = PTR_PTR_1126b2338;
        func_0x00010c0c6900(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar11);
        _objc_release(puVar4);
        if ((int)uVar15 == 0) {
          puVar4 = PTR_PTR_1126b6128;
          func_0x00010c15b3c0(PTR_PTR_1126b6128);
          _objc_retainAutoreleasedReturnValue();
          uVar15 = param_3;
          func_0x00010c0720c0();
          _objc_release(puVar4);
          if ((int)uVar15 == 0) {
            puVar4 = PTR_PTR_1126c9400;
            func_0x00010c157400(PTR_PTR_1126c9400);
            _objc_retainAutoreleasedReturnValue();
            uVar15 = param_3;
            func_0x00010c0720c0();
            _objc_release(puVar4);
            puVar4 = PTR_PTR_1126ca400;
            if ((int)uVar15 != 0) {
              lVar8 = param_1 + 0x100;
              _objc_loadWeakRetained(lVar8);
              lVar7 = lVar8;
              func_0x00010c0688c0();
              _objc_retainAutoreleasedReturnValue();
              lVar9 = lVar7;
              func_0x00010c089060();
              _objc_retainAutoreleasedReturnValue();
              lVar10 = param_1;
              func_0x00010be6d9c0(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c298f80();
              func_0x00010c271ce0(puVar4);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar10);
              _objc_release(lVar9);
              _objc_release(lVar7);
              _objc_release(lVar8);
              func_0x00010be70c20(param_1);
              lVar8 = lVar2;
              func_0x00010be36bc0(lVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010be098c0(param_1);
              _objc_release(lVar8);
              func_0x00010be92200(param_1);
              uVar15 = *(undefined8 *)(param_1 + 0x90);
              func_0x00010c269d40(uVar15);
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar18;
              func_0x00010bfe5ec0(lVar18);
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar18;
              func_0x00010c15ed20(lVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bef4240(lVar18);
              func_0x00010bf7bfa0(uVar15);
              _objc_release(lVar7);
              _objc_release(lVar8);
              _objc_release(uVar15);
              func_0x00010c24d960(*(undefined8 *)(param_1 + 0x20));
              func_0x00010c24d960(*(undefined8 *)(param_1 + 0x28));
              _objc_release(puVar4);
            }
          }
          else {
            *(undefined1 *)(param_1 + 0xd8) = 1;
          }
          goto LAB_1063b1d50;
        }
      }
      else {
        _objc_release(puVar4);
      }
      func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x38));
    }
    else {
      func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x20));
      func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x28));
      func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x30));
      func_0x00010bec3a60(param_1);
      if (lVar18 == 0) {
        uVar15 = 0x17;
      }
      else {
        uVar17 = *(undefined8 *)(param_1 + 0x50);
        lVar8 = lVar2;
        func_0x00010be36bc0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef4b20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        uVar15 = uVar17;
        func_0x00010bef60a0();
        _objc_release(uVar17);
      }
      uVar16 = (undefined4)*(undefined8 *)(param_1 + 0x50);
      lVar8 = lVar18;
      func_0x00010bfe5ec0(lVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06b8c0();
      _objc_release(lVar8);
      lVar8 = param_1 + 0x100;
      _objc_loadWeakRetained();
      lVar7 = lVar8;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar7;
      func_0x00010bf4e680();
      _objc_release(lVar7);
      _objc_release(lVar8);
      uVar19 = param_1 + 0x58;
      _objc_loadWeakRetained();
      uVar3 = uVar19;
      func_0x00010c07acc0();
      if ((uVar3 & 1) == 0) {
        uVar3 = *(ulong *)(param_1 + 0x50);
        func_0x00010c07ab60();
        if ((uVar3 & 1) == 0) {
          func_0x00010c07ac40();
        }
      }
      _objc_release(uVar19);
      lVar8 = param_1 + 0x100;
      _objc_loadWeakRetained();
      lVar7 = lVar8;
      func_0x00010c0688c0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar7;
      func_0x00010c089060();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar10;
      func_0x00010c27dd80();
      _objc_release(lVar10);
      _objc_release(lVar7);
      _objc_release(lVar8);
      if (lVar12 == 0x12) {
        lVar8 = param_1 + 0x60;
        _objc_loadWeakRetained();
        func_0x00010c234f00();
LAB_1063b1b2c:
        _objc_release(lVar8);
      }
      else if (lVar12 == 0x11) {
        lVar8 = param_1 + 0x60;
        _objc_loadWeakRetained();
        func_0x00010c234f20();
        goto LAB_1063b1b2c;
      }
      uVar17 = param_4;
      func_0x00010643afcc(param_4);
      uVar21 = *(undefined8 *)(param_1 + 0x68);
      lVar10 = param_1;
      func_0x00010be6d9c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar10;
      func_0x00010c298f80();
      lVar8 = param_1 + 0x60;
      _objc_loadWeakRetained(lVar8);
      lVar14 = lVar8;
      func_0x00010c07aca0();
      uVar20 = *(undefined8 *)(param_1 + 0x80);
      lVar7 = param_1 + 0x60;
      _objc_loadWeakRetained();
      func_0x00010befdf60();
      FUN_10643b070(lVar12,uVar17,uVar21,lVar13,uVar15,lVar14,uVar16,uVar20,(char)lVar9);
      _objc_release(lVar7);
      _objc_release(lVar8);
      _objc_release(lVar10);
      if (lVar12 < 2) {
        if (lVar12 == 0) {
          uVar15 = *(undefined8 *)(param_1 + 0x90);
          func_0x00010c269d40(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0d120();
          _objc_release(uVar15);
          func_0x00010c138160(*(undefined8 *)(param_1 + 0x30));
          *(undefined1 *)(param_1 + 0x48) = 1;
          *(undefined1 *)(param_1 + 0x98) = 1;
        }
        else {
          func_0x00010bec9460(param_1);
        }
      }
      else if (lVar12 != 3) {
        func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x38));
        puVar4 = PTR_PTR_1126ca400;
        lVar8 = param_1 + 0x100;
        _objc_loadWeakRetained(lVar8);
        lVar7 = lVar8;
        func_0x00010c0688c0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar7;
        func_0x00010c089060();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = param_1;
        func_0x00010be6d9c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c298f80();
        func_0x00010c271ce0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(lVar7);
        _objc_release(lVar8);
        lVar8 = lVar2;
        func_0x00010be36bc0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be098c0(param_1);
        _objc_release(lVar8);
        func_0x00010be92200(param_1);
        _objc_release(puVar4);
      }
    }
  }
  else {
    func_0x00010c24d960(*(undefined8 *)(param_1 + 0x20));
    lVar8 = 0x30;
    if (*(char *)(param_1 + 0x48) == '\0') {
      lVar8 = 0x28;
    }
    func_0x00010c24d960(*(undefined8 *)(param_1 + lVar8));
    func_0x00010becdd20(param_1);
  }
LAB_1063b1d50:
  _objc_release(lVar18);
LAB_1063b1d5c:
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063b1f48; end: 1063b2323; -[SCAdViewingSessionHistoryTracker _endCurrentSnap:exitMethod:currentPlayistId:adResponse:storyType:] */

void FUN_1063b1f48(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6,undefined **param_7)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = 0;
  if (param_7 != (undefined **)0x0) {
    uVar1 = param_4;
  }
  if ((uVar1 & 1) == 0) {
    lVar2 = param_2 + 0xf8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c101420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    ppuVar13 = (undefined **)(param_2 + 0xf8);
    _objc_loadWeakRetained();
    ppuVar4 = ppuVar13;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar13);
    ppuVar14 = ppuVar4;
    FUN_10640a9ec();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar14 != (undefined **)0x0) {
      ppuVar13 = ppuVar14;
    }
    _objc_retain(ppuVar13);
    _objc_release(ppuVar14);
    _objc_release(ppuVar4);
    _objc_release(lVar3);
    _objc_retain(ppuVar13);
    ppuVar4 = ppuVar13;
  }
  else {
    ppuVar4 = param_7;
    func_0x00010bef4d80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = (undefined **)0x0;
    ppuVar15 = (undefined **)0x0;
    ppuVar14 = (undefined **)0x0;
    if (ppuVar4 == (undefined **)0x0) goto LAB_1063b209c;
  }
  lVar2 = 0xf0;
  if (param_4 == 0) {
    lVar2 = 0xe8;
  }
  func_0x00010befa120(*(undefined8 *)(param_2 + lVar2));
  ppuVar14 = ppuVar4;
  ppuVar15 = ppuVar13;
LAB_1063b209c:
  func_0x00010beed820(*(undefined8 *)(param_2 + 0x28));
  uVar16 = param_1;
  func_0x00010be40da0();
  *(undefined1 *)(param_2 + 0xd8) = 0;
  uVar5 = *(undefined8 *)(param_2 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beed820(*(undefined8 *)(param_2 + 0x20));
  uVar18 = *(undefined8 *)(param_2 + 0x40);
  uVar17 = uVar16;
  func_0x00010beed820(*(undefined8 *)(param_2 + 0x38));
  if (uVar1 == 0) {
    func_0x00010c243d80(uVar16,param_1,uVar18,uVar17,uVar5);
  }
  else {
    ppuVar13 = param_7;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar13;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar4;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c274c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6c20();
    ppuVar8 = param_7;
    func_0x00010c26a3a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    func_0x00010c06a4a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = param_7;
    func_0x00010c26a3a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06a440();
    func_0x00010bef60a0();
    ppuVar11 = param_7;
    func_0x00010bef52c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar11;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001084c6f7c(param_7,ppuVar12);
    func_0x00010c243d80(uVar16,param_1,uVar18,uVar17,uVar5);
    _objc_release(ppuVar12);
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar4);
    _objc_release(ppuVar13);
  }
  _objc_release(uVar5);
  _objc_release(ppuVar14);
  _objc_release(ppuVar15);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1063b2324; end: 1063b23f7; -[SCAdViewingSessionHistoryTracker _endCurrentStory:exitMethod:storyType:] */

void FUN_1063b2324(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x90);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beed820(*(undefined8 *)(param_2 + 0x18));
    uVar1 = *(undefined1 *)(param_2 + 0xd9);
    uVar4 = *(undefined8 *)(param_2 + 0xe8);
    func_0x00010bf529e0(uVar4);
    uVar5 = *(undefined8 *)(param_2 + 0xf0);
    func_0x00010bf529e0(uVar5);
    func_0x00010c25b9e0(param_1,uVar3,param_3,param_4,param_6,param_5,uVar1,uVar4,uVar5);
    _objc_release(uVar3);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063b23f8; end: 1063b2463; -[SCAdViewingSessionHistoryTracker _isHammerTap:topSnapViewTimeInSec:] */

bool FUN_1063b23f8(double param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  func_0x00010c155420(PTR_PTR_1126afec0);
  lVar1 = *(long *)(param_2 + 0x88);
  if (param_4 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dfb738;
    uVar3 = 0xaa;
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dfb758;
    uVar3 = 200;
  }
  func_0x00010c067f60(lVar1,param_3,ppuVar2,uVar3);
  return param_1 <= (double)lVar1;
}



/* Entry: 1063b2464; end: 1063b24a7; -[SCAdViewingSessionHistoryTracker _resetAllTimers] */

void FUN_1063b2464(long param_1)

{
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  return;
}



/* Entry: 1063b24a8; end: 1063b24df; -[SCAdViewingSessionHistoryTracker _pauseAllTimers] */

/* WARNING: Possible PIC construction at 0x0001063b24bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001063b24cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001063b24c0) */
/* WARNING: Removing unreachable block (ram,0x0001063b24d0) */

void FUN_1063b24a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_pause_11261b0e8);
  return;
}



/* Entry: 1063b24e0; end: 1063b2547; -[SCAdViewingSessionHistoryTracker _swipedFromAttachmentToTopSnap:] */

void FUN_1063b24e0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010beed820(*(undefined8 *)(param_2 + 0x30));
  *(undefined8 *)(param_2 + 0x40) = param_1;
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0d720(*(undefined8 *)(param_2 + 0x40));
  _objc_release(uVar1);
  func_0x00010c137fe0(*(undefined8 *)(param_2 + 0x30));
  *(undefined1 *)(param_2 + 0x48) = 0;
  return;
}



/* Entry: 1063b2548; end: 1063b25bb; -[SCAdViewingSessionHistoryTracker _operaConfiguration] */

void FUN_1063b2548(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x108;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    param_1 = param_1 + 0x100;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1063b25bc; end: 1063b2767; -[SCAdViewingSessionHistoryTracker _trackBoostStateForItem:] */

void FUN_1063b25bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010bec3a60(param_1);
  lVar6 = *(long *)(param_1 + 0x50);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar6 != 0) {
    lVar2 = lVar6;
    func_0x00010bef2c20(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000108f51ed0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c0e0480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    uVar4 = uVar1;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = uVar4;
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar1);
    _objc_release(lVar3);
  }
  _objc_release(lVar6);
  _objc_release(param_3);
  return;
}



/* Entry: 1063b2768; end: 1063b2817;  */

void FUN_1063b2768(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b5b98;
    _objc_opt_class(PTR_PTR_1126b5b98);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    func_0x00010c06d760(uVar1);
    _objc_release(uVar1);
    func_0x00010bea4cc0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1063b2818; end: 1063b2843; -[SCAdViewingSessionHistoryTracker _stopTrackBoostState] */

void FUN_1063b2818(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 200));
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063b2844; end: 1063b284b; -[SCAdViewingSessionHistoryTracker _setIsBoosted:] */

void FUN_1063b2844(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb8) = param_3;
  return;
}



/* Entry: 1063b284c; end: 1063b2863; -[SCAdViewingSessionHistoryTracker playlistItemController] */

void FUN_1063b284c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063b2864; end: 1063b287b; -[SCAdViewingSessionHistoryTracker operaControlling] */

void FUN_1063b2864(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063b287c; end: 1063b2887; -[SCAdViewingSessionHistoryTracker setOperaControlling:] */

void FUN_1063b287c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x100,param_3);
  return;
}



/* Entry: 1063b2888; end: 1063b289f; -[SCAdViewingSessionHistoryTracker operaConfiguration] */

void FUN_1063b2888(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x108);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063b28a0; end: 1063b28ab; -[SCAdViewingSessionHistoryTracker setOperaConfiguration:] */

void FUN_1063b28a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x108,param_3);
  return;
}



/* Entry: 1063b28ac; end: 1063b29b7; -[SCAdViewingSessionHistoryTracker .cxx_destruct] */

void FUN_1063b28ac(long param_1)

{
  _objc_destroyWeak(param_1 + 0x108);
  _objc_destroyWeak(param_1 + 0x100);
  _objc_destroyWeak(param_1 + 0xf8);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 1063b29b8; end: 1063b2a27;  */

uint FUN_1063b29b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c27dd80(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9a78;
  func_0x00010c101520(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(puVar1);
  _objc_release(param_2);
  return (uint)uVar2 ^ 1;
}



/* Entry: 1063b2a28; end: 1063b2ca3; -[SCAdWebViewingSession initWithAdConfigProvider:adDataSource:webTrackinghelper:unskippableAdManager:adBrowserLifecycleService:applicationPreferences:urlOpener:adTrackerHelper:adConfigProviderV2:mainQueuePerformer:localNotificationScheduler:] */

undefined8 *
FUN_1063b2a28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_68 = PTR_PTR_1126f1140;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[5];
    puVar1[5] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[9];
    puVar1[9] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[3];
    puVar1[3] = param_8;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 8,param_9);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
  }
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



/* Entry: 1063b2ca4; end: 1063b2e23; -[SCAdWebViewingSession initWithAdConfigProvider:adDataSource:webTrackinghelper:unskippableAdManager:adBrowserLifecycleService:applicationPreferences:adConfigProviderV2:adTrackerHelper:localNotificationScheduler:] */

undefined8
FUN_1063b2ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1140(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar1,
                      param_10,param_9,puVar2,param_11);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1063b2e24; end: 1063b3053; -[SCAdWebViewingSession beginObservationWithAdUnifiedEventStreams:] */

void FUN_1063b2e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = param_3;
  func_0x00010bef3280(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1063b3054;
  puStack_78 = &UNK_110887e20;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef65c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x1063b309c;
  puStack_a0 = &UNK_110887e80;
  _objc_copyWeak(auStack_98,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef6680(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 1063b3054; end: 1063b312b;  */

void FUN_1063b3054(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be676c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063b312c; end: 1063b376b; -[SCAdWebViewingSession registeredEventsForOperaSession] */

void FUN_1063b312c(undefined8 param_1,long param_2)

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
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  long lVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  long lVar48;
  undefined **ppuVar49;
  undefined8 uVar50;
  ulong uVar51;
  undefined *puVar52;
  undefined *puVar53;
  undefined *puVar54;
  undefined *in_x4;
  long lVar55;
  ulong uVar56;
  ulong uVar57;
  undefined *puStack_3c8;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  code *pcStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  ulong uStack_388;
  long lStack_380;
  undefined *puStack_378;
  ulong uStack_370;
  
  lVar55 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107ae81c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010bf0a200();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca1d0;
  func_0x00010bf7c2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar52 = PTR_PTR_1126b5b08;
  func_0x00010bf4f3c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b5b08;
  func_0x00010c27bce0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ca1c8;
  func_0x00010bf7c8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b5b08;
  func_0x00010bf11e20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ca1c8;
  func_0x00010bf7c820();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2330;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126ca1e0;
  func_0x00010bf21700();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126ca1e0;
  func_0x00010bf79620();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126ca1e0;
  func_0x00010bf77a60();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126ca1e0;
  func_0x00010bf79160();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126ca1e0;
  func_0x00010bf776c0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126ca1e0;
  func_0x00010bf7d060();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126ca1e0;
  func_0x00010bf77c00();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126ca1e0;
  func_0x00010bf7bc80();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126ca1e0;
  func_0x00010bf791a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126ca1e0;
  func_0x00010bfe4980();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126ca1e0;
  func_0x00010bf87b40();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126ca1e0;
  func_0x00010bfb0fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126ca1e0;
  func_0x00010bfbbe60();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126ca1e0;
  func_0x00010bf775a0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126ca1e0;
  func_0x00010bf768e0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR_PTR_1126ca1e0;
  func_0x00010c0e3f40();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126ca1e0;
  func_0x00010c2a66c0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR_PTR_1126ca1e0;
  func_0x00010bf77a80();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR_PTR_1126ca1e0;
  func_0x00010c292a20();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = PTR_PTR_1126ca1e0;
  func_0x00010bf79320();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR_PTR_1126ca1e0;
  func_0x00010bf796e0();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR_PTR_1126ca1e0;
  func_0x00010bf9a820();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR_PTR_1126ca1e0;
  func_0x00010bf9a840();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = PTR_PTR_1126ca1e0;
  func_0x00010bf9a7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR_PTR_1126ca1e0;
  func_0x00010bf9a800();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = PTR_PTR_1126ca1e0;
  func_0x00010bf9a980();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = PTR_PTR_1126ca1e0;
  func_0x00010bf6f940();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = PTR_PTR_1126ca1e0;
  func_0x00010bf0d8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = PTR_PTR_1126ca1e0;
  func_0x00010bf688e0();
  _objc_retainAutoreleasedReturnValue();
  puVar38 = PTR_PTR_1126ca1e0;
  func_0x00010bf216e0();
  _objc_retainAutoreleasedReturnValue();
  puVar39 = PTR_PTR_1126ca1e0;
  func_0x00010c13df20();
  _objc_retainAutoreleasedReturnValue();
  puVar40 = PTR_PTR_1126ca1e0;
  func_0x00010c13dfa0();
  _objc_retainAutoreleasedReturnValue();
  puVar41 = PTR_PTR_1126ca1e0;
  func_0x00010c13de80();
  _objc_retainAutoreleasedReturnValue();
  puVar42 = PTR_PTR_1126ca1e0;
  func_0x00010c13de40();
  _objc_retainAutoreleasedReturnValue();
  puVar54 = (undefined *)0x2b;
  puVar43 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_2;
  puVar53 = puVar43;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar43);
  _objc_release(puVar42);
  _objc_release(puVar41);
  _objc_release(puVar40);
  _objc_release(puVar39);
  _objc_release(puVar38);
  _objc_release(puVar37);
  _objc_release(puVar36);
  _objc_release(puVar35);
  _objc_release(puVar34);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
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
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar52);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar55) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar44);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar53);
  _objc_retain(puVar54);
  _objc_retain(in_x4);
  puVar1 = PTR_PTR_1126b5b08;
  func_0x00010bf11e20(PTR_PTR_1126b5b08);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar53;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)puVar2 != 0) {
    if ((*(byte *)(param_2 + 0x71) & 1) != 0) goto LAB_1063b4210;
    *(undefined1 *)(param_2 + 0x71) = 1;
  }
  puVar1 = puVar54;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_2 + 0x80;
  _objc_loadWeakRetained();
  lVar55 = lVar44;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar44);
  lVar44 = lVar55;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar44 != 0) {
    uVar57 = *(ulong *)(param_2 + 0x48);
    lVar44 = lVar55;
    func_0x00010be36bc0(lVar55);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar44);
    uVar45 = uVar57;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar46 = uVar45;
    func_0x00010c08fa60();
    if (uVar46 != 0) {
      uVar46 = *(ulong *)(param_2 + 0x48);
      func_0x00010bef53c0();
      puVar2 = PTR_PTR_1126ca1a8;
      func_0x00010c089020(PTR_PTR_1126ca1a8);
      _objc_retainAutoreleasedReturnValue();
      puVar52 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar52 == (undefined *)0x0) {
        puVar3 = PTR_PTR_1126c9410;
        func_0x00010c089240(PTR_PTR_1126c9410);
        _objc_retainAutoreleasedReturnValue();
        puStack_3c8 = in_x4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
      }
      else {
        _objc_retain(puVar52);
        puStack_3c8 = puVar52;
      }
      _objc_release(puVar52);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126c9410;
      func_0x00010c2a4460(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      puVar52 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
      puVar3 = puVar52;
      _objc_opt_isKindOfClass(puVar52,puVar2);
      puVar2 = puVar52;
      if (((ulong)puVar3 & 1) == 0) {
        puVar2 = (undefined *)0x0;
      }
      _objc_retain();
      _objc_release(puVar52);
      FUN_10644a2b8(puVar54);
      puVar52 = puVar54;
      func_0x00010c118b40(puVar54);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c072640();
      _objc_release(puVar52);
      puVar52 = puVar54;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126bfe00;
      func_0x00010c12a840(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar52;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar52);
      puVar52 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
      puVar3 = puVar4;
      _objc_opt_isKindOfClass(puVar4,puVar52);
      puVar52 = puVar4;
      if (((ulong)puVar3 & 1) == 0) {
        puVar52 = (undefined *)0x0;
      }
      _objc_retain(puVar52);
      _objc_release(puVar4);
      puVar3 = puVar54;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c9410;
      func_0x00010c2a4460(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
      puVar4 = puVar5;
      _objc_opt_isKindOfClass(puVar5,puVar3);
      puVar3 = puVar5;
      if (((ulong)puVar4 & 1) == 0) {
        puVar3 = (undefined *)0x0;
      }
      _objc_retain(puVar3);
      _objc_release(puVar5);
      puVar4 = PTR_PTR_1126ca408;
      func_0x00010c28f340(PTR_PTR_1126ca408);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
      puVar6 = puVar5;
      _objc_opt_isKindOfClass(puVar5,puVar4);
      puVar4 = puVar5;
      if (((ulong)puVar6 & 1) == 0) {
        puVar4 = (undefined *)0x0;
      }
      _objc_retain();
      _objc_release(puVar5);
      uVar51 = uVar57;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar47 = uVar51;
      func_0x00010bf529e0();
      uVar56 = 0;
      if (uVar46 < uVar47) {
        uVar47 = uVar57;
        func_0x00010bef52c0();
        _objc_retainAutoreleasedReturnValue();
        uVar56 = uVar47;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar47);
      }
      _objc_release(uVar51);
      lVar44 = param_2;
      func_0x00010be0d880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar52);
      lVar48 = param_2;
      func_0x00010be43be0();
      if ((int)lVar48 == 0) {
        lVar48 = param_2;
        func_0x00010be3efa0();
        if ((int)lVar48 == 0) {
          puVar52 = PTR_PTR_1126b2330;
          func_0x00010bf3df00(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar53;
          func_0x00010c0720c0();
          _objc_release(puVar52);
          if ((int)puVar3 == 0) {
            puVar52 = PTR_PTR_1126ca1e0;
            func_0x00010bf77c00(PTR_PTR_1126ca1e0);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar53;
            func_0x00010c0720c0();
            _objc_release(puVar52);
            puVar52 = PTR_PTR_1126ca2b0;
            if ((int)puVar3 != 0) {
              puVar3 = puVar54;
              func_0x00010c118b40(puVar54);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c072620(puVar52);
              _objc_release(puVar3);
              func_0x00010be285c0(param_1,param_2);
              goto LAB_1063b41c4;
            }
            puVar52 = PTR_PTR_1126ca1e0;
            func_0x00010bf791a0(PTR_PTR_1126ca1e0);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar53;
            func_0x00010c0720c0();
            _objc_release(puVar52);
            puVar52 = PTR_PTR_1126ca410;
            if ((int)puVar3 == 0) {
              puVar52 = PTR_PTR_1126ca1e0;
              func_0x00010bf77a60(PTR_PTR_1126ca1e0);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puVar53;
              func_0x00010c0720c0();
              _objc_release(puVar52);
              if ((int)puVar3 != 0) {
                puVar52 = PTR_PTR_1126ca408;
                func_0x00010c107ac0(PTR_PTR_1126ca408);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = in_x4;
                func_0x00010c0e00e0(in_x4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c282760();
                _objc_release(puVar3);
                _objc_release(puVar52);
                puVar52 = PTR_PTR_1126ca410;
                func_0x00010c1077a0(PTR_PTR_1126ca410);
                _objc_retainAutoreleasedReturnValue();
                goto LAB_1063b4004;
              }
              puVar52 = PTR_PTR_1126ca1e0;
              func_0x00010bf79160(PTR_PTR_1126ca1e0);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puVar53;
              func_0x00010c0720c0();
              _objc_release(puVar52);
              if ((int)puVar3 != 0) {
                puVar3 = PTR_PTR_1126ca408;
                func_0x00010bfbc9c0(PTR_PTR_1126ca408);
                _objc_retainAutoreleasedReturnValue();
                puVar52 = in_x4;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar3);
                puVar3 = PTR_PTR_1126ca408;
                func_0x00010bfbc9a0(PTR_PTR_1126ca408);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = in_x4;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar3);
                puVar3 = PTR_PTR_1126ca408;
                func_0x00010bfbc980(PTR_PTR_1126ca408);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = in_x4;
                func_0x00010c0e00e0(in_x4);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar3);
                puVar3 = PTR_PTR_1126ca408;
                func_0x00010bfbc9e0(PTR_PTR_1126ca408);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = in_x4;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar3);
                puVar3 = PTR_PTR_1126ca408;
                func_0x00010c076000(PTR_PTR_1126ca408);
                _objc_retainAutoreleasedReturnValue();
                puVar8 = in_x4;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar3);
                func_0x00010be2a1e0(param_2);
                _objc_release(puVar8);
                _objc_release(puVar7);
                _objc_release(puVar6);
                _objc_release(puVar5);
                goto LAB_1063b41bc;
              }
              puVar52 = PTR_PTR_1126ca1e0;
              func_0x00010bf776c0(PTR_PTR_1126ca1e0);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puVar53;
              func_0x00010c0720c0();
              _objc_release(puVar52);
              puVar52 = PTR_PTR_1126ca410;
              if ((int)puVar3 == 0) {
                puVar52 = PTR_PTR_1126ca1e0;
                func_0x00010bf7d060(PTR_PTR_1126ca1e0);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = puVar53;
                func_0x00010c0720c0();
                _objc_release(puVar52);
                if ((int)puVar3 == 0) {
                  puVar52 = PTR_PTR_1126ca1e0;
                  func_0x00010bf775a0(PTR_PTR_1126ca1e0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = puVar53;
                  func_0x00010c0720c0();
                  _objc_release(puVar52);
                  if ((int)puVar3 != 0) {
                    uVar50 = *(undefined8 *)(param_2 + 0x30);
                    func_0x00010c269d40(uVar50);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf775c0();
                    goto LAB_1063b3da8;
                  }
                  puVar52 = PTR_PTR_1126ca1e0;
                  func_0x00010bf7bc80(PTR_PTR_1126ca1e0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = puVar53;
                  func_0x00010c0720c0();
                  _objc_release(puVar52);
                  uVar46 = uVar57;
                  if ((int)puVar3 == 0) {
                    puVar52 = PTR_PTR_1126ca1e0;
                    func_0x00010bfe4980(PTR_PTR_1126ca1e0);
                    _objc_retainAutoreleasedReturnValue();
                    puVar3 = puVar53;
                    func_0x00010c0720c0();
                    _objc_release(puVar52);
                    if ((int)puVar3 == 0) {
                      puVar52 = PTR_PTR_1126ca1e0;
                      func_0x00010bf87b40(PTR_PTR_1126ca1e0);
                      _objc_retainAutoreleasedReturnValue();
                      puVar3 = puVar53;
                      func_0x00010c0720c0();
                      _objc_release(puVar52);
                      if ((int)puVar3 != 0) {
                        uVar50 = *(undefined8 *)(param_2 + 0x30);
                        func_0x00010c269d40(uVar50);
                        _objc_retainAutoreleasedReturnValue();
                        puVar52 = PTR_PTR_1126ca300;
                        func_0x00010bfe5ec0(uVar57);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bf87c40(puVar52);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c0e4e20(uVar50);
                        _objc_release(puVar52);
                        _objc_release(uVar46);
                        _objc_release(uVar50);
                        goto LAB_1063b41c4;
                      }
                      puVar52 = PTR_PTR_1126ca1e0;
                      func_0x00010bfb0fe0(PTR_PTR_1126ca1e0);
                      _objc_retainAutoreleasedReturnValue();
                      puVar3 = puVar53;
                      func_0x00010c0720c0();
                      _objc_release(puVar52);
                      if ((int)puVar3 == 0) {
                        puVar52 = PTR_PTR_1126ca1e0;
                        func_0x00010bfbbe60(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        puVar3 = puVar53;
                        func_0x00010c0720c0();
                        _objc_release(puVar52);
                        if ((int)puVar3 != 0) {
                          uVar51 = *(ulong *)(param_2 + 0x30);
                          func_0x00010c269d40(uVar51);
                          _objc_retainAutoreleasedReturnValue();
                          puVar52 = PTR_PTR_1126ca300;
                          func_0x00010bfe5ec0(uVar57);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010bfbbee0(puVar52);
                          _objc_retainAutoreleasedReturnValue();
                          goto LAB_1063b463c;
                        }
                        puVar52 = PTR_PTR_1126ca1e0;
                        func_0x00010bf768e0(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        puVar3 = puVar53;
                        func_0x00010c0720c0();
                        _objc_release(puVar52);
                        if ((int)puVar3 != 0) {
                          uVar50 = *(undefined8 *)(param_2 + 0x30);
                          func_0x00010c269d40(uVar50);
                          _objc_retainAutoreleasedReturnValue();
                          puVar52 = PTR_PTR_1126ca300;
                          func_0x00010bfe5ec0(uVar57);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c0d67e0(puVar52);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c0e4e20(uVar50);
                          _objc_release(puVar52);
                          _objc_release(uVar46);
                          _objc_release(uVar50);
                          puVar52 = PTR_PTR_1126ca408;
                          func_0x00010c0d6c80(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          puVar3 = in_x4;
                          func_0x00010c0e00e0(in_x4);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010bf1f3c0();
                          _objc_release(puVar3);
                          _objc_release(puVar52);
                          uVar51 = *(ulong *)(param_2 + 0x30);
                          func_0x00010c269d40(uVar51);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010bf76900();
                          goto LAB_1063b4660;
                        }
                        puVar52 = PTR_PTR_1126ca1e0;
                        func_0x00010c0e3f40(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        puVar3 = puVar53;
                        func_0x00010c0720c0();
                        _objc_release(puVar52);
                        puVar52 = in_x4;
                        if ((int)puVar3 != 0) {
                          puVar3 = PTR_PTR_1126ca408;
                          func_0x00010bf216a0(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar3);
                          if (puVar52 != (undefined *)0x0) {
                            puVar3 = PTR_PTR_1126ca410;
                            func_0x00010bf216c0(PTR_PTR_1126ca410);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010be33520(param_2);
                            uVar50 = *(undefined8 *)(param_2 + 0x30);
                            func_0x00010c269d40(uVar50);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010bfe5ec0(uVar57);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c0e7a20(uVar50);
                            _objc_release(uVar46);
                            _objc_release(uVar50);
LAB_1063b4878:
                            _objc_release(puVar3);
                          }
                          goto LAB_1063b4880;
                        }
                        puVar3 = PTR_PTR_1126ca1e0;
                        func_0x00010c2a66c0(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        puVar5 = puVar53;
                        func_0x00010c0720c0();
                        _objc_release(puVar3);
                        if ((int)puVar5 != 0) {
                          puVar3 = puVar54;
                          func_0x00010c118b40(puVar54);
                          _objc_retainAutoreleasedReturnValue();
                          puVar52 = puVar3;
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar3);
                          func_0x00010be336a0(param_2);
LAB_1063b4a54:
                          _objc_release(puVar52);
                          goto LAB_1063b41c4;
                        }
                        puVar3 = PTR_PTR_1126b2330;
                        func_0x00010c0e9c40(PTR_PTR_1126b2330);
                        _objc_retainAutoreleasedReturnValue();
                        puVar5 = puVar53;
                        func_0x00010c0720c0();
                        _objc_release(puVar3);
                        puVar3 = PTR_PTR_1126ca2b0;
                        if ((int)puVar5 != 0) {
                          puVar52 = puVar54;
                          func_0x00010c118b40(puVar54);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c072620();
                          puVar5 = PTR_PTR_1126b2340;
                          if (((ulong)puVar3 & 1) != 0) {
                            puVar3 = puVar54;
                            func_0x00010c118b40(puVar54);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c0771a0();
                            _objc_release(puVar3);
                            _objc_release(puVar52);
                            if ((int)puVar5 != 0) {
                              func_0x00010be29220(param_2);
                            }
                            goto LAB_1063b41c4;
                          }
                          goto LAB_1063b4880;
                        }
                        puVar3 = PTR_PTR_1126ca1e0;
                        func_0x00010bf77a80(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        puVar5 = puVar53;
                        func_0x00010c0720c0();
                        _objc_release(puVar3);
                        if ((int)puVar5 != 0) {
                          puVar52 = PTR_PTR_1126ca410;
                          func_0x00010c1077e0(PTR_PTR_1126ca410);
                          _objc_retainAutoreleasedReturnValue();
                          goto LAB_1063b4a30;
                        }
                        puVar3 = PTR_PTR_1126ca1e0;
                        func_0x00010bf21700(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        puVar5 = puVar53;
                        func_0x00010c0720c0();
                        _objc_release(puVar3);
                        if ((int)puVar5 != 0) {
                          puVar52 = PTR_PTR_1126ca408;
                          func_0x00010bf21840(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          puVar3 = in_x4;
                          func_0x00010c0e00e0(in_x4);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c2827c0();
                          _objc_release(puVar3);
                          _objc_release(puVar52);
                          puVar3 = PTR_PTR_1126ca408;
                          func_0x00010c28f340(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          puVar52 = in_x4;
                          func_0x00010c0e00e0(in_x4);
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar3);
                          puVar3 = PTR_PTR_1126ca410;
                          func_0x00010bf21720(PTR_PTR_1126ca410);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010be33520(param_2);
                          _objc_release(puVar3);
                          goto LAB_1063b4a54;
                        }
                        puVar3 = PTR_PTR_1126ca1e0;
                        func_0x00010bf9a820(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        puVar5 = puVar53;
                        func_0x00010c0720c0();
                        _objc_release(puVar3);
                        if ((int)puVar5 != 0) {
                          puVar52 = PTR_PTR_1126ca410;
                          func_0x00010bf9a820(PTR_PTR_1126ca410);
                          _objc_retainAutoreleasedReturnValue();
                          goto LAB_1063b4a30;
                        }
                        puVar3 = PTR_PTR_1126ca1e0;
                        func_0x00010bf9a840(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        puVar5 = puVar53;
                        func_0x00010c0720c0();
                        _objc_release(puVar3);
                        if ((int)puVar5 != 0) {
                          puVar3 = PTR_PTR_1126ca408;
                          func_0x00010bf9a900(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar3);
                          puVar5 = PTR_PTR_1126ca408;
                          func_0x00010bf9a8e0(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          puVar3 = in_x4;
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar5);
                          puVar5 = PTR_PTR_1126ca410;
                          if ((puVar52 != (undefined *)0x0) && (puVar3 != (undefined *)0x0)) {
                            func_0x00010c067fc0(puVar3);
                            func_0x00010bf9a880(puVar5);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010be33520(param_2);
                            _objc_release(puVar5);
                          }
                          goto LAB_1063b4878;
                        }
                        puVar3 = PTR_PTR_1126ca1e0;
                        func_0x00010bf9a7c0(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        puVar5 = puVar53;
                        func_0x00010c0720c0();
                        _objc_release(puVar3);
                        if ((int)puVar5 != 0) {
                          puVar52 = PTR_PTR_1126ca410;
                          func_0x00010bf9a7c0(PTR_PTR_1126ca410);
                          _objc_retainAutoreleasedReturnValue();
LAB_1063b4a30:
                          func_0x00010be33520(param_2);
                          goto LAB_1063b4a54;
                        }
                        puVar3 = PTR_PTR_1126ca1e0;
                        func_0x00010bf9a800(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        puVar5 = puVar53;
                        func_0x00010c0720c0();
                        _objc_release(puVar3);
                        if ((int)puVar5 != 0) {
                          puVar52 = PTR_PTR_1126ca410;
                          func_0x00010bf9a800(PTR_PTR_1126ca410);
                          _objc_retainAutoreleasedReturnValue();
                          goto LAB_1063b4a30;
                        }
                        puVar3 = PTR_PTR_1126ca1e0;
                        func_0x00010bf9a980(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        puVar5 = puVar53;
                        func_0x00010c0720c0();
                        _objc_release(puVar3);
                        if ((int)puVar5 != 0) {
                          puVar52 = PTR_PTR_1126ca410;
                          func_0x00010bf9a980(PTR_PTR_1126ca410);
                          _objc_retainAutoreleasedReturnValue();
                          goto LAB_1063b4a30;
                        }
                        puVar3 = PTR_PTR_1126ca1e0;
                        func_0x00010bf6f940(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        puVar5 = puVar53;
                        func_0x00010c0720c0();
                        _objc_release(puVar3);
                        if ((int)puVar5 != 0) {
                          puVar52 = PTR_PTR_1126ca408;
                          func_0x00010bf39740(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          puVar5 = in_x4;
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar52);
                          puVar52 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                          puVar3 = puVar5;
                          _objc_opt_isKindOfClass(puVar5,puVar52);
                          puVar52 = puVar5;
                          if (((ulong)puVar3 & 1) == 0) {
                            puVar52 = (undefined *)0x0;
                          }
                          _objc_retain(puVar52);
                          _objc_release(puVar5);
                          puVar3 = PTR_PTR_1126ca410;
                          if (puVar52 != (undefined *)0x0) {
                            func_0x00010bf1f3c0(puVar5);
                            func_0x00010bf6f980(puVar3);
                            _objc_retainAutoreleasedReturnValue();
LAB_1063b4eb0:
                            func_0x00010be33520(param_2);
                            goto LAB_1063b4878;
                          }
LAB_1063b4880:
                          _objc_release(puVar52);
                          goto LAB_1063b41c4;
                        }
                        puVar3 = PTR_PTR_1126ca1e0;
                        func_0x00010c292a20(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        puVar5 = puVar53;
                        func_0x00010c0720c0();
                        _objc_release(puVar3);
                        if ((int)puVar5 != 0) {
                          puVar3 = PTR_PTR_1126ca408;
                          func_0x00010c292a20(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar3);
                          if (puVar52 != (undefined *)0x0) {
                            puVar3 = PTR_PTR_1126ca410;
                            func_0x00010c292a40(PTR_PTR_1126ca410);
                            _objc_retainAutoreleasedReturnValue();
                            goto LAB_1063b4eb0;
                          }
                          goto LAB_1063b4880;
                        }
                        puVar52 = PTR_PTR_1126ca1e0;
                        func_0x00010bf79320(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        puVar3 = puVar53;
                        func_0x00010c0720c0();
                        _objc_release(puVar52);
                        uVar51 = uVar57;
                        if ((int)puVar3 == 0) {
                          puVar52 = PTR_PTR_1126ca1e0;
                          func_0x00010bf796e0(PTR_PTR_1126ca1e0);
                          _objc_retainAutoreleasedReturnValue();
                          puVar3 = puVar53;
                          func_0x00010c0720c0();
                          _objc_release(puVar52);
                          if ((int)puVar3 == 0) {
                            puVar52 = PTR_PTR_1126ca1e0;
                            func_0x00010bf0d8e0(PTR_PTR_1126ca1e0);
                            _objc_retainAutoreleasedReturnValue();
                            puVar3 = puVar53;
                            func_0x00010c0720c0();
                            _objc_release(puVar52);
                            if ((int)puVar3 == 0) {
                              puVar52 = PTR_PTR_1126ca1e0;
                              func_0x00010bf216e0(PTR_PTR_1126ca1e0);
                              _objc_retainAutoreleasedReturnValue();
                              puVar3 = puVar53;
                              func_0x00010c0720c0();
                              _objc_release(puVar52);
                              if ((int)puVar3 != 0) {
                                puVar52 = *(undefined **)(param_2 + 0x20);
                                func_0x00010c269d40(puVar52);
                                _objc_retainAutoreleasedReturnValue();
                                puVar3 = PTR_PTR_1126ca1a8;
                                func_0x00010c089020(PTR_PTR_1126ca1a8);
                                _objc_retainAutoreleasedReturnValue();
                                puVar5 = in_x4;
                                func_0x00010c0e00e0(in_x4);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010bef2120(puVar52);
                                _objc_release(puVar5);
                                _objc_release(puVar3);
                                goto LAB_1063b4880;
                              }
                              puVar52 = PTR_PTR_1126ca1e0;
                              func_0x00010bf688e0(PTR_PTR_1126ca1e0);
                              _objc_retainAutoreleasedReturnValue();
                              puVar3 = puVar53;
                              func_0x00010c0720c0();
                              _objc_release(puVar52);
                              if ((int)puVar3 == 0) {
                                puVar52 = PTR_PTR_1126ca1d0;
                                func_0x00010bf7c2e0(PTR_PTR_1126ca1d0);
                                _objc_retainAutoreleasedReturnValue();
                                puVar3 = puVar53;
                                func_0x00010c0720c0();
                                if ((int)puVar3 == 0) {
                                  puVar3 = PTR_PTR_1126b5b08;
                                  func_0x00010c27bce0(PTR_PTR_1126b5b08);
                                  _objc_retainAutoreleasedReturnValue();
                                  puVar5 = puVar53;
                                  func_0x00010c0720c0();
                                  _objc_release(puVar3);
                                  _objc_release(puVar52);
                                  if ((int)puVar5 == 0) {
                                    puVar52 = PTR_PTR_1126ca1e0;
                                    func_0x00010bf79620(PTR_PTR_1126ca1e0);
                                    _objc_retainAutoreleasedReturnValue();
                                    puVar3 = puVar53;
                                    func_0x00010c0720c0();
                                    _objc_release(puVar52);
                                    if ((int)puVar3 != 0) {
                                      uVar50 = *(undefined8 *)(param_2 + 0x30);
                                      func_0x00010c269d40(uVar50);
                                      _objc_retainAutoreleasedReturnValue();
                                      puVar52 = PTR_PTR_1126ca408;
                                      func_0x00010c2a3e00(PTR_PTR_1126ca408);
                                      _objc_retainAutoreleasedReturnValue();
                                      puVar3 = in_x4;
                                      func_0x00010c0e00e0(in_x4);
                                      _objc_retainAutoreleasedReturnValue();
                                      func_0x00010bf796a0(uVar50);
                                      _objc_release(puVar3);
                                      _objc_release(puVar52);
                                      _objc_release(uVar50);
                                      goto LAB_1063b41c4;
                                    }
                                    puVar52 = PTR_PTR_1126ca1e0;
                                    func_0x00010c13df20(PTR_PTR_1126ca1e0);
                                    _objc_retainAutoreleasedReturnValue();
                                    puVar3 = puVar53;
                                    func_0x00010c0720c0();
                                    _objc_release(puVar52);
                                    puVar52 = PTR_PTR_1126ca410;
                                    if ((int)puVar3 == 0) {
                                      puVar52 = PTR_PTR_1126ca1e0;
                                      func_0x00010c13dfa0(PTR_PTR_1126ca1e0);
                                      _objc_retainAutoreleasedReturnValue();
                                      puVar3 = puVar53;
                                      func_0x00010c0720c0();
                                      _objc_release(puVar52);
                                      if ((int)puVar3 == 0) {
                                        puVar52 = PTR_PTR_1126ca1e0;
                                        func_0x00010c13de80(PTR_PTR_1126ca1e0);
                                        _objc_retainAutoreleasedReturnValue();
                                        puVar3 = puVar53;
                                        func_0x00010c0720c0();
                                        _objc_release(puVar52);
                                        puVar52 = PTR_PTR_1126ca410;
                                        if ((int)puVar3 != 0) {
                                          puVar3 = PTR_PTR_1126ca408;
                                          func_0x00010c13dea0(PTR_PTR_1126ca408);
                                          _objc_retainAutoreleasedReturnValue();
                                          puVar5 = in_x4;
                                          func_0x00010c0e00e0(in_x4);
                                          _objc_retainAutoreleasedReturnValue();
                                          puVar6 = PTR_PTR_1126ca408;
                                          func_0x00010c13dfe0(PTR_PTR_1126ca408);
                                          _objc_retainAutoreleasedReturnValue();
                                          puVar7 = in_x4;
                                          func_0x00010c0e00e0();
                                          _objc_retainAutoreleasedReturnValue();
                                          func_0x00010c13dec0(puVar52);
                                          _objc_retainAutoreleasedReturnValue();
                                          _objc_release(puVar7);
                                          _objc_release(puVar6);
                                          _objc_release(puVar5);
                                          _objc_release(puVar3);
                                          func_0x00010be33520(param_2);
                                          goto LAB_1063b4a54;
                                        }
                                        puVar52 = PTR_PTR_1126ca1e0;
                                        func_0x00010c13de40(PTR_PTR_1126ca1e0);
                                        _objc_retainAutoreleasedReturnValue();
                                        puVar3 = puVar53;
                                        func_0x00010c0720c0();
                                        _objc_release(puVar52);
                                        puVar52 = PTR_PTR_1126ca410;
                                        if ((int)puVar3 != 0) {
                                          puVar3 = PTR_PTR_1126ca408;
                                          func_0x00010c13de20();
                                          _objc_retainAutoreleasedReturnValue();
                                          puVar5 = in_x4;
                                          func_0x00010c0e00e0(in_x4);
                                          _objc_retainAutoreleasedReturnValue();
                                          func_0x00010c13de60(puVar52);
                                          _objc_retainAutoreleasedReturnValue();
                                          _objc_release(puVar5);
                                          _objc_release(puVar3);
                                          func_0x00010be33520(param_2);
                                          goto LAB_1063b3d00;
                                        }
                                        goto LAB_1063b41c4;
                                      }
                                      puVar52 = PTR_PTR_1126ca410;
                                      func_0x00010c13dfa0(PTR_PTR_1126ca410);
                                      _objc_retainAutoreleasedReturnValue();
                                    }
                                    else {
                                      puVar3 = PTR_PTR_1126ca408;
                                      func_0x00010c13df40(PTR_PTR_1126ca408);
                                      _objc_retainAutoreleasedReturnValue();
                                      puVar5 = in_x4;
                                      func_0x00010c0e00e0(in_x4);
                                      _objc_retainAutoreleasedReturnValue();
                                      func_0x00010c13df60(puVar52);
                                      _objc_retainAutoreleasedReturnValue();
                                      _objc_release(puVar5);
                                      _objc_release(puVar3);
                                    }
                                    goto LAB_1063b4a30;
                                  }
                                }
                                else {
                                  _objc_release(puVar52);
                                }
                                func_0x00010bde9bc0(param_2);
                                goto LAB_1063b41c4;
                              }
                              puVar52 = PTR_PTR_1126ca410;
                              func_0x00010bf688e0(PTR_PTR_1126ca410);
                              _objc_retainAutoreleasedReturnValue();
                            }
                            else {
                              puVar52 = PTR_PTR_1126ca410;
                              func_0x00010bf0d8e0(PTR_PTR_1126ca410);
                              _objc_retainAutoreleasedReturnValue();
                            }
                            goto LAB_1063b4a30;
                          }
                          func_0x00010bef2c20(uVar57);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c15ed20();
                          _objc_retainAutoreleasedReturnValue();
                          puVar52 = PTR_PTR_1126ca408;
                          func_0x00010c066140(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          puVar3 = in_x4;
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar52);
                          puVar52 = PTR_PTR_1126ca408;
                          func_0x00010c085cc0(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          puVar5 = in_x4;
                          func_0x00010c0e00e0(in_x4);
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar52);
                          puVar52 = PTR_PTR_1126ca408;
                          func_0x00010c09bf00(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c0e00e0(in_x4);
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release();
                          _objc_release(puVar52);
                          puVar52 = PTR_PTR_1126ca408;
                          func_0x00010bf98aa0(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          puVar6 = in_x4;
                          func_0x00010c0e00e0(in_x4);
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar52);
                          uVar50 = *(undefined8 *)(param_2 + 0x30);
                          func_0x00010c269d40(uVar50);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c067ec0(puVar5);
                          func_0x00010bf74980(uVar50);
                          _objc_release(uVar50);
                          _objc_release(puVar6);
                          _objc_release(puVar5);
                          _objc_release(puVar3);
                          _objc_release(uVar46);
                        }
                        else {
                          func_0x00010c15ed20(uVar57);
                          _objc_retainAutoreleasedReturnValue();
                          puVar52 = PTR_PTR_1126ca408;
                          func_0x00010c066140(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          puVar3 = in_x4;
                          func_0x00010c0e00e0(in_x4);
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar52);
                          puVar52 = PTR_PTR_1126ca408;
                          func_0x00010c0f9700(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          puVar5 = in_x4;
                          func_0x00010c0e00e0(in_x4);
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar52);
                          uVar50 = *(undefined8 *)(param_2 + 0x30);
                          func_0x00010c269d40(uVar50);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010bf79340();
                          _objc_release(uVar50);
                          _objc_release(puVar5);
                          _objc_release(puVar3);
                        }
                      }
                      else {
                        uVar51 = *(ulong *)(param_2 + 0x30);
                        func_0x00010c269d40(uVar51);
                        _objc_retainAutoreleasedReturnValue();
                        puVar52 = PTR_PTR_1126ca300;
                        func_0x00010bfe5ec0(uVar57);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c0f2ae0(puVar52);
                        _objc_retainAutoreleasedReturnValue();
LAB_1063b463c:
                        func_0x00010c0e4e20(uVar51);
                        _objc_release(puVar52);
                        _objc_release(uVar46);
                      }
LAB_1063b4660:
                      _objc_release(uVar51);
                      goto LAB_1063b41c4;
                    }
                    uVar50 = *(undefined8 *)(param_2 + 0x30);
                    func_0x00010c269d40(uVar50);
                    _objc_retainAutoreleasedReturnValue();
                    puVar52 = PTR_PTR_1126ca300;
                    func_0x00010bfe5ec0(uVar57);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bfe49c0(puVar52);
                    _objc_retainAutoreleasedReturnValue();
                  }
                  else {
                    uVar50 = *(undefined8 *)(param_2 + 0x30);
                    func_0x00010c269d40(uVar50);
                    _objc_retainAutoreleasedReturnValue();
                    puVar52 = PTR_PTR_1126ca300;
                    func_0x00010bfe5ec0(uVar57);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0d6c20(puVar52);
                    _objc_retainAutoreleasedReturnValue();
                  }
                  func_0x00010c0e4e20(uVar50);
                  _objc_release(puVar52);
                  _objc_release(uVar46);
                  goto LAB_1063b3da8;
                }
                puVar52 = PTR_PTR_1126ca410;
                func_0x00010c0e9300(PTR_PTR_1126ca410);
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                puVar3 = PTR_PTR_1126ca408;
                func_0x00010c0fcc60(PTR_PTR_1126ca408);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = in_x4;
                func_0x00010c0e00e0(in_x4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0fcc80(puVar52);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar5);
                _objc_release(puVar3);
              }
LAB_1063b4004:
              func_0x00010be33520(param_2);
            }
            else {
              puVar3 = PTR_PTR_1126ca408;
              func_0x00010bfe4dc0(PTR_PTR_1126ca408);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = in_x4;
              func_0x00010c0e00e0(in_x4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfe4a80();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar5);
              _objc_release(puVar3);
              func_0x00010be33520(param_2);
              uVar50 = *(undefined8 *)(param_2 + 0x30);
              func_0x00010c269d40(uVar50);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR_PTR_1126ca408;
              func_0x00010bfe4dc0(PTR_PTR_1126ca408);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = in_x4;
              func_0x00010c0e00e0(in_x4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf791c0(uVar50);
              _objc_release(puVar5);
              _objc_release(puVar3);
              _objc_release(uVar50);
            }
LAB_1063b41bc:
            _objc_release(puVar52);
          }
          else {
            uVar50 = *(undefined8 *)(param_2 + 0x30);
            func_0x00010c269d40(uVar50);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf79020();
LAB_1063b3da8:
            _objc_release(uVar50);
          }
        }
        else {
          func_0x00010be2ae00(param_1,param_2);
        }
      }
      else {
        puStack_3b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_3a8 = 0xc2000000;
        pcStack_3a0 = FUN_1063b5688;
        puStack_398 = &UNK_110863fc8;
        _objc_retain(puVar54);
        puStack_390 = puVar54;
        _objc_retain(uVar57);
        uStack_388 = uVar57;
        lStack_380 = param_2;
        uStack_370 = uVar46;
        _objc_retain(in_x4);
        ppuVar49 = &puStack_3b0;
        puStack_378 = in_x4;
        _objc_retainBlock();
        func_0x00010bde9bc0(param_2);
        func_0x00010be25d00(param_1,param_2);
        _objc_release(ppuVar49);
        _objc_release(puStack_378);
        _objc_release(uStack_388);
        puVar52 = puStack_390;
LAB_1063b3d00:
        _objc_release(puVar52);
      }
LAB_1063b41c4:
      _objc_release(lVar44);
      _objc_release(uVar56);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puStack_3c8);
    }
    _objc_release(uVar45);
    _objc_release(uVar57);
  }
  _objc_release(lVar55);
  _objc_release(puVar1);
LAB_1063b4210:
  _objc_release(in_x4);
  _objc_release(puVar54);
  _objc_release(puVar53);
  return;
}



/* Entry: 1063b376c; end: 1063b5687; -[SCAdWebViewingSession operaViewDidSendEvent:page:params:] */

void FUN_1063b376c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *puStack_d8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b5b08;
  func_0x00010bf11e20(PTR_PTR_1126b5b08);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)uVar14 != 0) {
    if ((*(byte *)(param_2 + 0x71) & 1) != 0) goto LAB_1063b4210;
    *(undefined1 *)(param_2 + 0x71) = 1;
  }
  puVar1 = param_5;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2 + 0x80;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar20 = *(ulong *)(param_2 + 0x48);
    lVar2 = lVar3;
    func_0x00010be36bc0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar4 = uVar20;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    if (uVar5 != 0) {
      uVar5 = *(ulong *)(param_2 + 0x48);
      func_0x00010bef53c0();
      puVar6 = PTR_PTR_1126ca1a8;
      func_0x00010c089020(PTR_PTR_1126ca1a8);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = param_6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar17 == (undefined *)0x0) {
        puVar7 = PTR_PTR_1126c9410;
        func_0x00010c089240(PTR_PTR_1126c9410);
        _objc_retainAutoreleasedReturnValue();
        puStack_d8 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
      }
      else {
        _objc_retain(puVar17);
        puStack_d8 = puVar17;
      }
      _objc_release(puVar17);
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126c9410;
      func_0x00010c2a4460(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = param_6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
      puVar7 = puVar17;
      _objc_opt_isKindOfClass(puVar17,puVar6);
      puVar6 = puVar17;
      if (((ulong)puVar7 & 1) == 0) {
        puVar6 = (undefined *)0x0;
      }
      _objc_retain();
      _objc_release(puVar17);
      FUN_10644a2b8(param_5);
      puVar17 = param_5;
      func_0x00010c118b40(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c072640();
      _objc_release(puVar17);
      puVar17 = param_5;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126bfe00;
      func_0x00010c12a840(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar17;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar17);
      puVar17 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
      puVar7 = puVar8;
      _objc_opt_isKindOfClass(puVar8,puVar17);
      puVar17 = puVar8;
      if (((ulong)puVar7 & 1) == 0) {
        puVar17 = (undefined *)0x0;
      }
      _objc_retain(puVar17);
      _objc_release(puVar8);
      puVar7 = param_5;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126c9410;
      func_0x00010c2a4460(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
      puVar8 = puVar9;
      _objc_opt_isKindOfClass(puVar9,puVar7);
      puVar7 = puVar9;
      if (((ulong)puVar8 & 1) == 0) {
        puVar7 = (undefined *)0x0;
      }
      _objc_retain(puVar7);
      _objc_release(puVar9);
      puVar8 = PTR_PTR_1126ca408;
      func_0x00010c28f340(PTR_PTR_1126ca408);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
      puVar10 = puVar9;
      _objc_opt_isKindOfClass(puVar9,puVar8);
      puVar8 = puVar9;
      if (((ulong)puVar10 & 1) == 0) {
        puVar8 = (undefined *)0x0;
      }
      _objc_retain();
      _objc_release(puVar9);
      uVar16 = uVar20;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar16;
      func_0x00010bf529e0();
      uVar19 = 0;
      if (uVar5 < uVar11) {
        uVar11 = uVar20;
        func_0x00010bef52c0();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar11;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
      }
      _objc_release(uVar16);
      lVar2 = param_2;
      func_0x00010be0d880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar17);
      lVar12 = param_2;
      func_0x00010be43be0();
      if ((int)lVar12 == 0) {
        lVar12 = param_2;
        func_0x00010be3efa0();
        if ((int)lVar12 == 0) {
          puVar17 = PTR_PTR_1126b2330;
          func_0x00010bf3df00(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          uVar14 = param_4;
          func_0x00010c0720c0();
          _objc_release(puVar17);
          if ((int)uVar14 == 0) {
            puVar17 = PTR_PTR_1126ca1e0;
            func_0x00010bf77c00(PTR_PTR_1126ca1e0);
            _objc_retainAutoreleasedReturnValue();
            uVar14 = param_4;
            func_0x00010c0720c0();
            _objc_release(puVar17);
            puVar17 = PTR_PTR_1126ca2b0;
            if ((int)uVar14 != 0) {
              puVar7 = param_5;
              func_0x00010c118b40(param_5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c072620(puVar17);
              _objc_release(puVar7);
              func_0x00010be285c0(param_1,param_2);
              goto LAB_1063b41c4;
            }
            puVar17 = PTR_PTR_1126ca1e0;
            func_0x00010bf791a0(PTR_PTR_1126ca1e0);
            _objc_retainAutoreleasedReturnValue();
            uVar14 = param_4;
            func_0x00010c0720c0();
            _objc_release(puVar17);
            puVar17 = PTR_PTR_1126ca410;
            if ((int)uVar14 == 0) {
              puVar17 = PTR_PTR_1126ca1e0;
              func_0x00010bf77a60(PTR_PTR_1126ca1e0);
              _objc_retainAutoreleasedReturnValue();
              uVar14 = param_4;
              func_0x00010c0720c0();
              _objc_release(puVar17);
              if ((int)uVar14 != 0) {
                puVar17 = PTR_PTR_1126ca408;
                func_0x00010c107ac0(PTR_PTR_1126ca408);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = param_6;
                func_0x00010c0e00e0(param_6);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c282760();
                _objc_release(puVar7);
                _objc_release(puVar17);
                puVar17 = PTR_PTR_1126ca410;
                func_0x00010c1077a0(PTR_PTR_1126ca410);
                _objc_retainAutoreleasedReturnValue();
                goto LAB_1063b4004;
              }
              puVar17 = PTR_PTR_1126ca1e0;
              func_0x00010bf79160(PTR_PTR_1126ca1e0);
              _objc_retainAutoreleasedReturnValue();
              uVar14 = param_4;
              func_0x00010c0720c0();
              _objc_release(puVar17);
              if ((int)uVar14 != 0) {
                puVar7 = PTR_PTR_1126ca408;
                func_0x00010bfbc9c0(PTR_PTR_1126ca408);
                _objc_retainAutoreleasedReturnValue();
                puVar17 = param_6;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar7);
                puVar7 = PTR_PTR_1126ca408;
                func_0x00010bfbc9a0(PTR_PTR_1126ca408);
                _objc_retainAutoreleasedReturnValue();
                puVar9 = param_6;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar7);
                puVar7 = PTR_PTR_1126ca408;
                func_0x00010bfbc980(PTR_PTR_1126ca408);
                _objc_retainAutoreleasedReturnValue();
                puVar10 = param_6;
                func_0x00010c0e00e0(param_6);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar7);
                puVar7 = PTR_PTR_1126ca408;
                func_0x00010bfbc9e0(PTR_PTR_1126ca408);
                _objc_retainAutoreleasedReturnValue();
                puVar18 = param_6;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar7);
                puVar7 = PTR_PTR_1126ca408;
                func_0x00010c076000(PTR_PTR_1126ca408);
                _objc_retainAutoreleasedReturnValue();
                puVar15 = param_6;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar7);
                func_0x00010be2a1e0(param_2);
                _objc_release(puVar15);
                _objc_release(puVar18);
                _objc_release(puVar10);
                _objc_release(puVar9);
                goto LAB_1063b41bc;
              }
              puVar17 = PTR_PTR_1126ca1e0;
              func_0x00010bf776c0(PTR_PTR_1126ca1e0);
              _objc_retainAutoreleasedReturnValue();
              uVar14 = param_4;
              func_0x00010c0720c0();
              _objc_release(puVar17);
              puVar17 = PTR_PTR_1126ca410;
              if ((int)uVar14 == 0) {
                puVar17 = PTR_PTR_1126ca1e0;
                func_0x00010bf7d060(PTR_PTR_1126ca1e0);
                _objc_retainAutoreleasedReturnValue();
                uVar14 = param_4;
                func_0x00010c0720c0();
                _objc_release(puVar17);
                if ((int)uVar14 == 0) {
                  puVar17 = PTR_PTR_1126ca1e0;
                  func_0x00010bf775a0(PTR_PTR_1126ca1e0);
                  _objc_retainAutoreleasedReturnValue();
                  uVar14 = param_4;
                  func_0x00010c0720c0();
                  _objc_release(puVar17);
                  if ((int)uVar14 != 0) {
                    uVar14 = *(undefined8 *)(param_2 + 0x30);
                    func_0x00010c269d40(uVar14);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf775c0();
                    goto LAB_1063b3da8;
                  }
                  puVar17 = PTR_PTR_1126ca1e0;
                  func_0x00010bf7bc80(PTR_PTR_1126ca1e0);
                  _objc_retainAutoreleasedReturnValue();
                  uVar14 = param_4;
                  func_0x00010c0720c0();
                  _objc_release(puVar17);
                  uVar5 = uVar20;
                  if ((int)uVar14 == 0) {
                    puVar17 = PTR_PTR_1126ca1e0;
                    func_0x00010bfe4980(PTR_PTR_1126ca1e0);
                    _objc_retainAutoreleasedReturnValue();
                    uVar14 = param_4;
                    func_0x00010c0720c0();
                    _objc_release(puVar17);
                    if ((int)uVar14 == 0) {
                      puVar17 = PTR_PTR_1126ca1e0;
                      func_0x00010bf87b40(PTR_PTR_1126ca1e0);
                      _objc_retainAutoreleasedReturnValue();
                      uVar14 = param_4;
                      func_0x00010c0720c0();
                      _objc_release(puVar17);
                      if ((int)uVar14 != 0) {
                        uVar14 = *(undefined8 *)(param_2 + 0x30);
                        func_0x00010c269d40(uVar14);
                        _objc_retainAutoreleasedReturnValue();
                        puVar17 = PTR_PTR_1126ca300;
                        func_0x00010bfe5ec0(uVar20);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bf87c40(puVar17);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c0e4e20(uVar14);
                        _objc_release(puVar17);
                        _objc_release(uVar5);
                        _objc_release(uVar14);
                        goto LAB_1063b41c4;
                      }
                      puVar17 = PTR_PTR_1126ca1e0;
                      func_0x00010bfb0fe0(PTR_PTR_1126ca1e0);
                      _objc_retainAutoreleasedReturnValue();
                      uVar14 = param_4;
                      func_0x00010c0720c0();
                      _objc_release(puVar17);
                      if ((int)uVar14 == 0) {
                        puVar17 = PTR_PTR_1126ca1e0;
                        func_0x00010bfbbe60(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        uVar14 = param_4;
                        func_0x00010c0720c0();
                        _objc_release(puVar17);
                        if ((int)uVar14 != 0) {
                          uVar16 = *(ulong *)(param_2 + 0x30);
                          func_0x00010c269d40(uVar16);
                          _objc_retainAutoreleasedReturnValue();
                          puVar17 = PTR_PTR_1126ca300;
                          func_0x00010bfe5ec0(uVar20);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010bfbbee0(puVar17);
                          _objc_retainAutoreleasedReturnValue();
                          goto LAB_1063b463c;
                        }
                        puVar17 = PTR_PTR_1126ca1e0;
                        func_0x00010bf768e0(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        uVar14 = param_4;
                        func_0x00010c0720c0();
                        _objc_release(puVar17);
                        if ((int)uVar14 != 0) {
                          uVar14 = *(undefined8 *)(param_2 + 0x30);
                          func_0x00010c269d40(uVar14);
                          _objc_retainAutoreleasedReturnValue();
                          puVar17 = PTR_PTR_1126ca300;
                          func_0x00010bfe5ec0(uVar20);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c0d67e0(puVar17);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c0e4e20(uVar14);
                          _objc_release(puVar17);
                          _objc_release(uVar5);
                          _objc_release(uVar14);
                          puVar17 = PTR_PTR_1126ca408;
                          func_0x00010c0d6c80(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          puVar7 = param_6;
                          func_0x00010c0e00e0(param_6);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010bf1f3c0();
                          _objc_release(puVar7);
                          _objc_release(puVar17);
                          uVar16 = *(ulong *)(param_2 + 0x30);
                          func_0x00010c269d40(uVar16);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010bf76900();
                          goto LAB_1063b4660;
                        }
                        puVar17 = PTR_PTR_1126ca1e0;
                        func_0x00010c0e3f40(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        uVar14 = param_4;
                        func_0x00010c0720c0();
                        _objc_release(puVar17);
                        puVar17 = param_6;
                        if ((int)uVar14 != 0) {
                          puVar7 = PTR_PTR_1126ca408;
                          func_0x00010bf216a0(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar7);
                          if (puVar17 != (undefined *)0x0) {
                            puVar7 = PTR_PTR_1126ca410;
                            func_0x00010bf216c0(PTR_PTR_1126ca410);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010be33520(param_2);
                            uVar14 = *(undefined8 *)(param_2 + 0x30);
                            func_0x00010c269d40(uVar14);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010bfe5ec0(uVar20);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c0e7a20(uVar14);
                            _objc_release(uVar5);
                            _objc_release(uVar14);
LAB_1063b4878:
                            _objc_release(puVar7);
                          }
                          goto LAB_1063b4880;
                        }
                        puVar7 = PTR_PTR_1126ca1e0;
                        func_0x00010c2a66c0(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        uVar14 = param_4;
                        func_0x00010c0720c0();
                        _objc_release(puVar7);
                        if ((int)uVar14 != 0) {
                          puVar7 = param_5;
                          func_0x00010c118b40(param_5);
                          _objc_retainAutoreleasedReturnValue();
                          puVar17 = puVar7;
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar7);
                          func_0x00010be336a0(param_2);
LAB_1063b4a54:
                          _objc_release(puVar17);
                          goto LAB_1063b41c4;
                        }
                        puVar7 = PTR_PTR_1126b2330;
                        func_0x00010c0e9c40(PTR_PTR_1126b2330);
                        _objc_retainAutoreleasedReturnValue();
                        uVar14 = param_4;
                        func_0x00010c0720c0();
                        _objc_release(puVar7);
                        puVar7 = PTR_PTR_1126ca2b0;
                        if ((int)uVar14 != 0) {
                          puVar17 = param_5;
                          func_0x00010c118b40(param_5);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c072620();
                          puVar9 = PTR_PTR_1126b2340;
                          if (((ulong)puVar7 & 1) != 0) {
                            puVar7 = param_5;
                            func_0x00010c118b40(param_5);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c0771a0();
                            _objc_release(puVar7);
                            _objc_release(puVar17);
                            if ((int)puVar9 != 0) {
                              func_0x00010be29220(param_2);
                            }
                            goto LAB_1063b41c4;
                          }
                          goto LAB_1063b4880;
                        }
                        puVar7 = PTR_PTR_1126ca1e0;
                        func_0x00010bf77a80(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        uVar14 = param_4;
                        func_0x00010c0720c0();
                        _objc_release(puVar7);
                        if ((int)uVar14 != 0) {
                          puVar17 = PTR_PTR_1126ca410;
                          func_0x00010c1077e0(PTR_PTR_1126ca410);
                          _objc_retainAutoreleasedReturnValue();
                          goto LAB_1063b4a30;
                        }
                        puVar7 = PTR_PTR_1126ca1e0;
                        func_0x00010bf21700(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        uVar14 = param_4;
                        func_0x00010c0720c0();
                        _objc_release(puVar7);
                        if ((int)uVar14 != 0) {
                          puVar17 = PTR_PTR_1126ca408;
                          func_0x00010bf21840(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          puVar7 = param_6;
                          func_0x00010c0e00e0(param_6);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c2827c0();
                          _objc_release(puVar7);
                          _objc_release(puVar17);
                          puVar7 = PTR_PTR_1126ca408;
                          func_0x00010c28f340(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          puVar17 = param_6;
                          func_0x00010c0e00e0(param_6);
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar7);
                          puVar7 = PTR_PTR_1126ca410;
                          func_0x00010bf21720(PTR_PTR_1126ca410);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010be33520(param_2);
                          _objc_release(puVar7);
                          goto LAB_1063b4a54;
                        }
                        puVar7 = PTR_PTR_1126ca1e0;
                        func_0x00010bf9a820(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        uVar14 = param_4;
                        func_0x00010c0720c0();
                        _objc_release(puVar7);
                        if ((int)uVar14 != 0) {
                          puVar17 = PTR_PTR_1126ca410;
                          func_0x00010bf9a820(PTR_PTR_1126ca410);
                          _objc_retainAutoreleasedReturnValue();
                          goto LAB_1063b4a30;
                        }
                        puVar7 = PTR_PTR_1126ca1e0;
                        func_0x00010bf9a840(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        uVar14 = param_4;
                        func_0x00010c0720c0();
                        _objc_release(puVar7);
                        if ((int)uVar14 != 0) {
                          puVar7 = PTR_PTR_1126ca408;
                          func_0x00010bf9a900(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar7);
                          puVar9 = PTR_PTR_1126ca408;
                          func_0x00010bf9a8e0(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          puVar7 = param_6;
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar9);
                          puVar9 = PTR_PTR_1126ca410;
                          if ((puVar17 != (undefined *)0x0) && (puVar7 != (undefined *)0x0)) {
                            func_0x00010c067fc0(puVar7);
                            func_0x00010bf9a880(puVar9);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010be33520(param_2);
                            _objc_release(puVar9);
                          }
                          goto LAB_1063b4878;
                        }
                        puVar7 = PTR_PTR_1126ca1e0;
                        func_0x00010bf9a7c0(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        uVar14 = param_4;
                        func_0x00010c0720c0();
                        _objc_release(puVar7);
                        if ((int)uVar14 != 0) {
                          puVar17 = PTR_PTR_1126ca410;
                          func_0x00010bf9a7c0(PTR_PTR_1126ca410);
                          _objc_retainAutoreleasedReturnValue();
LAB_1063b4a30:
                          func_0x00010be33520(param_2);
                          goto LAB_1063b4a54;
                        }
                        puVar7 = PTR_PTR_1126ca1e0;
                        func_0x00010bf9a800(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        uVar14 = param_4;
                        func_0x00010c0720c0();
                        _objc_release(puVar7);
                        if ((int)uVar14 != 0) {
                          puVar17 = PTR_PTR_1126ca410;
                          func_0x00010bf9a800(PTR_PTR_1126ca410);
                          _objc_retainAutoreleasedReturnValue();
                          goto LAB_1063b4a30;
                        }
                        puVar7 = PTR_PTR_1126ca1e0;
                        func_0x00010bf9a980(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        uVar14 = param_4;
                        func_0x00010c0720c0();
                        _objc_release(puVar7);
                        if ((int)uVar14 != 0) {
                          puVar17 = PTR_PTR_1126ca410;
                          func_0x00010bf9a980(PTR_PTR_1126ca410);
                          _objc_retainAutoreleasedReturnValue();
                          goto LAB_1063b4a30;
                        }
                        puVar7 = PTR_PTR_1126ca1e0;
                        func_0x00010bf6f940(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        uVar14 = param_4;
                        func_0x00010c0720c0();
                        _objc_release(puVar7);
                        if ((int)uVar14 != 0) {
                          puVar17 = PTR_PTR_1126ca408;
                          func_0x00010bf39740(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          puVar9 = param_6;
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar17);
                          puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                          puVar7 = puVar9;
                          _objc_opt_isKindOfClass(puVar9,puVar17);
                          puVar17 = puVar9;
                          if (((ulong)puVar7 & 1) == 0) {
                            puVar17 = (undefined *)0x0;
                          }
                          _objc_retain(puVar17);
                          _objc_release(puVar9);
                          puVar7 = PTR_PTR_1126ca410;
                          if (puVar17 != (undefined *)0x0) {
                            func_0x00010bf1f3c0(puVar9);
                            func_0x00010bf6f980(puVar7);
                            _objc_retainAutoreleasedReturnValue();
LAB_1063b4eb0:
                            func_0x00010be33520(param_2);
                            goto LAB_1063b4878;
                          }
LAB_1063b4880:
                          _objc_release(puVar17);
                          goto LAB_1063b41c4;
                        }
                        puVar7 = PTR_PTR_1126ca1e0;
                        func_0x00010c292a20(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        uVar14 = param_4;
                        func_0x00010c0720c0();
                        _objc_release(puVar7);
                        if ((int)uVar14 != 0) {
                          puVar7 = PTR_PTR_1126ca408;
                          func_0x00010c292a20(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar7);
                          if (puVar17 != (undefined *)0x0) {
                            puVar7 = PTR_PTR_1126ca410;
                            func_0x00010c292a40(PTR_PTR_1126ca410);
                            _objc_retainAutoreleasedReturnValue();
                            goto LAB_1063b4eb0;
                          }
                          goto LAB_1063b4880;
                        }
                        puVar17 = PTR_PTR_1126ca1e0;
                        func_0x00010bf79320(PTR_PTR_1126ca1e0);
                        _objc_retainAutoreleasedReturnValue();
                        uVar14 = param_4;
                        func_0x00010c0720c0();
                        _objc_release(puVar17);
                        uVar16 = uVar20;
                        if ((int)uVar14 == 0) {
                          puVar17 = PTR_PTR_1126ca1e0;
                          func_0x00010bf796e0(PTR_PTR_1126ca1e0);
                          _objc_retainAutoreleasedReturnValue();
                          uVar14 = param_4;
                          func_0x00010c0720c0();
                          _objc_release(puVar17);
                          if ((int)uVar14 == 0) {
                            puVar17 = PTR_PTR_1126ca1e0;
                            func_0x00010bf0d8e0(PTR_PTR_1126ca1e0);
                            _objc_retainAutoreleasedReturnValue();
                            uVar14 = param_4;
                            func_0x00010c0720c0();
                            _objc_release(puVar17);
                            if ((int)uVar14 == 0) {
                              puVar17 = PTR_PTR_1126ca1e0;
                              func_0x00010bf216e0(PTR_PTR_1126ca1e0);
                              _objc_retainAutoreleasedReturnValue();
                              uVar14 = param_4;
                              func_0x00010c0720c0();
                              _objc_release(puVar17);
                              if ((int)uVar14 != 0) {
                                puVar17 = *(undefined **)(param_2 + 0x20);
                                func_0x00010c269d40(puVar17);
                                _objc_retainAutoreleasedReturnValue();
                                puVar7 = PTR_PTR_1126ca1a8;
                                func_0x00010c089020(PTR_PTR_1126ca1a8);
                                _objc_retainAutoreleasedReturnValue();
                                puVar9 = param_6;
                                func_0x00010c0e00e0(param_6);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010bef2120(puVar17);
                                _objc_release(puVar9);
                                _objc_release(puVar7);
                                goto LAB_1063b4880;
                              }
                              puVar17 = PTR_PTR_1126ca1e0;
                              func_0x00010bf688e0(PTR_PTR_1126ca1e0);
                              _objc_retainAutoreleasedReturnValue();
                              uVar14 = param_4;
                              func_0x00010c0720c0();
                              _objc_release(puVar17);
                              if ((int)uVar14 == 0) {
                                puVar17 = PTR_PTR_1126ca1d0;
                                func_0x00010bf7c2e0(PTR_PTR_1126ca1d0);
                                _objc_retainAutoreleasedReturnValue();
                                uVar14 = param_4;
                                func_0x00010c0720c0();
                                if ((int)uVar14 == 0) {
                                  puVar7 = PTR_PTR_1126b5b08;
                                  func_0x00010c27bce0(PTR_PTR_1126b5b08);
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar14 = param_4;
                                  func_0x00010c0720c0();
                                  _objc_release(puVar7);
                                  _objc_release(puVar17);
                                  if ((int)uVar14 == 0) {
                                    puVar17 = PTR_PTR_1126ca1e0;
                                    func_0x00010bf79620(PTR_PTR_1126ca1e0);
                                    _objc_retainAutoreleasedReturnValue();
                                    uVar14 = param_4;
                                    func_0x00010c0720c0();
                                    _objc_release(puVar17);
                                    if ((int)uVar14 != 0) {
                                      uVar14 = *(undefined8 *)(param_2 + 0x30);
                                      func_0x00010c269d40(uVar14);
                                      _objc_retainAutoreleasedReturnValue();
                                      puVar17 = PTR_PTR_1126ca408;
                                      func_0x00010c2a3e00(PTR_PTR_1126ca408);
                                      _objc_retainAutoreleasedReturnValue();
                                      puVar7 = param_6;
                                      func_0x00010c0e00e0(param_6);
                                      _objc_retainAutoreleasedReturnValue();
                                      func_0x00010bf796a0(uVar14);
                                      _objc_release(puVar7);
                                      _objc_release(puVar17);
                                      _objc_release(uVar14);
                                      goto LAB_1063b41c4;
                                    }
                                    puVar17 = PTR_PTR_1126ca1e0;
                                    func_0x00010c13df20(PTR_PTR_1126ca1e0);
                                    _objc_retainAutoreleasedReturnValue();
                                    uVar14 = param_4;
                                    func_0x00010c0720c0();
                                    _objc_release(puVar17);
                                    puVar17 = PTR_PTR_1126ca410;
                                    if ((int)uVar14 == 0) {
                                      puVar17 = PTR_PTR_1126ca1e0;
                                      func_0x00010c13dfa0(PTR_PTR_1126ca1e0);
                                      _objc_retainAutoreleasedReturnValue();
                                      uVar14 = param_4;
                                      func_0x00010c0720c0();
                                      _objc_release(puVar17);
                                      if ((int)uVar14 == 0) {
                                        puVar17 = PTR_PTR_1126ca1e0;
                                        func_0x00010c13de80(PTR_PTR_1126ca1e0);
                                        _objc_retainAutoreleasedReturnValue();
                                        uVar14 = param_4;
                                        func_0x00010c0720c0();
                                        _objc_release(puVar17);
                                        puVar17 = PTR_PTR_1126ca410;
                                        if ((int)uVar14 != 0) {
                                          puVar7 = PTR_PTR_1126ca408;
                                          func_0x00010c13dea0(PTR_PTR_1126ca408);
                                          _objc_retainAutoreleasedReturnValue();
                                          puVar9 = param_6;
                                          func_0x00010c0e00e0(param_6);
                                          _objc_retainAutoreleasedReturnValue();
                                          puVar10 = PTR_PTR_1126ca408;
                                          func_0x00010c13dfe0(PTR_PTR_1126ca408);
                                          _objc_retainAutoreleasedReturnValue();
                                          puVar18 = param_6;
                                          func_0x00010c0e00e0();
                                          _objc_retainAutoreleasedReturnValue();
                                          func_0x00010c13dec0(puVar17);
                                          _objc_retainAutoreleasedReturnValue();
                                          _objc_release(puVar18);
                                          _objc_release(puVar10);
                                          _objc_release(puVar9);
                                          _objc_release(puVar7);
                                          func_0x00010be33520(param_2);
                                          goto LAB_1063b4a54;
                                        }
                                        puVar17 = PTR_PTR_1126ca1e0;
                                        func_0x00010c13de40(PTR_PTR_1126ca1e0);
                                        _objc_retainAutoreleasedReturnValue();
                                        uVar14 = param_4;
                                        func_0x00010c0720c0();
                                        _objc_release(puVar17);
                                        puVar17 = PTR_PTR_1126ca410;
                                        if ((int)uVar14 != 0) {
                                          puVar7 = PTR_PTR_1126ca408;
                                          func_0x00010c13de20();
                                          _objc_retainAutoreleasedReturnValue();
                                          puVar9 = param_6;
                                          func_0x00010c0e00e0(param_6);
                                          _objc_retainAutoreleasedReturnValue();
                                          func_0x00010c13de60(puVar17);
                                          _objc_retainAutoreleasedReturnValue();
                                          _objc_release(puVar9);
                                          _objc_release(puVar7);
                                          func_0x00010be33520(param_2);
                                          goto LAB_1063b3d00;
                                        }
                                        goto LAB_1063b41c4;
                                      }
                                      puVar17 = PTR_PTR_1126ca410;
                                      func_0x00010c13dfa0(PTR_PTR_1126ca410);
                                      _objc_retainAutoreleasedReturnValue();
                                    }
                                    else {
                                      puVar7 = PTR_PTR_1126ca408;
                                      func_0x00010c13df40(PTR_PTR_1126ca408);
                                      _objc_retainAutoreleasedReturnValue();
                                      puVar9 = param_6;
                                      func_0x00010c0e00e0(param_6);
                                      _objc_retainAutoreleasedReturnValue();
                                      func_0x00010c13df60(puVar17);
                                      _objc_retainAutoreleasedReturnValue();
                                      _objc_release(puVar9);
                                      _objc_release(puVar7);
                                    }
                                    goto LAB_1063b4a30;
                                  }
                                }
                                else {
                                  _objc_release(puVar17);
                                }
                                func_0x00010bde9bc0(param_2);
                                goto LAB_1063b41c4;
                              }
                              puVar17 = PTR_PTR_1126ca410;
                              func_0x00010bf688e0(PTR_PTR_1126ca410);
                              _objc_retainAutoreleasedReturnValue();
                            }
                            else {
                              puVar17 = PTR_PTR_1126ca410;
                              func_0x00010bf0d8e0(PTR_PTR_1126ca410);
                              _objc_retainAutoreleasedReturnValue();
                            }
                            goto LAB_1063b4a30;
                          }
                          func_0x00010bef2c20(uVar20);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c15ed20();
                          _objc_retainAutoreleasedReturnValue();
                          puVar17 = PTR_PTR_1126ca408;
                          func_0x00010c066140(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          puVar7 = param_6;
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar17);
                          puVar17 = PTR_PTR_1126ca408;
                          func_0x00010c085cc0(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          puVar9 = param_6;
                          func_0x00010c0e00e0(param_6);
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar17);
                          puVar17 = PTR_PTR_1126ca408;
                          func_0x00010c09bf00(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c0e00e0(param_6);
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release();
                          _objc_release(puVar17);
                          puVar17 = PTR_PTR_1126ca408;
                          func_0x00010bf98aa0(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          puVar10 = param_6;
                          func_0x00010c0e00e0(param_6);
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar17);
                          uVar14 = *(undefined8 *)(param_2 + 0x30);
                          func_0x00010c269d40(uVar14);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c067ec0(puVar9);
                          func_0x00010bf74980(uVar14);
                          _objc_release(uVar14);
                          _objc_release(puVar10);
                          _objc_release(puVar9);
                          _objc_release(puVar7);
                          _objc_release(uVar5);
                        }
                        else {
                          func_0x00010c15ed20(uVar20);
                          _objc_retainAutoreleasedReturnValue();
                          puVar17 = PTR_PTR_1126ca408;
                          func_0x00010c066140(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          puVar7 = param_6;
                          func_0x00010c0e00e0(param_6);
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar17);
                          puVar17 = PTR_PTR_1126ca408;
                          func_0x00010c0f9700(PTR_PTR_1126ca408);
                          _objc_retainAutoreleasedReturnValue();
                          puVar9 = param_6;
                          func_0x00010c0e00e0(param_6);
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(puVar17);
                          uVar14 = *(undefined8 *)(param_2 + 0x30);
                          func_0x00010c269d40(uVar14);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010bf79340();
                          _objc_release(uVar14);
                          _objc_release(puVar9);
                          _objc_release(puVar7);
                        }
                      }
                      else {
                        uVar16 = *(ulong *)(param_2 + 0x30);
                        func_0x00010c269d40(uVar16);
                        _objc_retainAutoreleasedReturnValue();
                        puVar17 = PTR_PTR_1126ca300;
                        func_0x00010bfe5ec0(uVar20);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c0f2ae0(puVar17);
                        _objc_retainAutoreleasedReturnValue();
LAB_1063b463c:
                        func_0x00010c0e4e20(uVar16);
                        _objc_release(puVar17);
                        _objc_release(uVar5);
                      }
LAB_1063b4660:
                      _objc_release(uVar16);
                      goto LAB_1063b41c4;
                    }
                    uVar14 = *(undefined8 *)(param_2 + 0x30);
                    func_0x00010c269d40(uVar14);
                    _objc_retainAutoreleasedReturnValue();
                    puVar17 = PTR_PTR_1126ca300;
                    func_0x00010bfe5ec0(uVar20);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bfe49c0(puVar17);
                    _objc_retainAutoreleasedReturnValue();
                  }
                  else {
                    uVar14 = *(undefined8 *)(param_2 + 0x30);
                    func_0x00010c269d40(uVar14);
                    _objc_retainAutoreleasedReturnValue();
                    puVar17 = PTR_PTR_1126ca300;
                    func_0x00010bfe5ec0(uVar20);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0d6c20(puVar17);
                    _objc_retainAutoreleasedReturnValue();
                  }
                  func_0x00010c0e4e20(uVar14);
                  _objc_release(puVar17);
                  _objc_release(uVar5);
                  goto LAB_1063b3da8;
                }
                puVar17 = PTR_PTR_1126ca410;
                func_0x00010c0e9300(PTR_PTR_1126ca410);
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                puVar7 = PTR_PTR_1126ca408;
                func_0x00010c0fcc60(PTR_PTR_1126ca408);
                _objc_retainAutoreleasedReturnValue();
                puVar9 = param_6;
                func_0x00010c0e00e0(param_6);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0fcc80(puVar17);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar9);
                _objc_release(puVar7);
              }
LAB_1063b4004:
              func_0x00010be33520(param_2);
            }
            else {
              puVar7 = PTR_PTR_1126ca408;
              func_0x00010bfe4dc0(PTR_PTR_1126ca408);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = param_6;
              func_0x00010c0e00e0(param_6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfe4a80();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar9);
              _objc_release(puVar7);
              func_0x00010be33520(param_2);
              uVar14 = *(undefined8 *)(param_2 + 0x30);
              func_0x00010c269d40(uVar14);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR_PTR_1126ca408;
              func_0x00010bfe4dc0(PTR_PTR_1126ca408);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = param_6;
              func_0x00010c0e00e0(param_6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf791c0(uVar14);
              _objc_release(puVar9);
              _objc_release(puVar7);
              _objc_release(uVar14);
            }
LAB_1063b41bc:
            _objc_release(puVar17);
          }
          else {
            uVar14 = *(undefined8 *)(param_2 + 0x30);
            func_0x00010c269d40(uVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf79020();
LAB_1063b3da8:
            _objc_release(uVar14);
          }
        }
        else {
          func_0x00010be2ae00(param_1,param_2);
        }
      }
      else {
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0xc2000000;
        pcStack_b0 = FUN_1063b5688;
        puStack_a8 = &UNK_110863fc8;
        _objc_retain(param_5);
        puStack_a0 = param_5;
        _objc_retain(uVar20);
        uStack_98 = uVar20;
        lStack_90 = param_2;
        uStack_80 = uVar5;
        _objc_retain(param_6);
        ppuVar13 = &puStack_c0;
        puStack_88 = param_6;
        _objc_retainBlock();
        func_0x00010bde9bc0(param_2);
        func_0x00010be25d00(param_1,param_2);
        _objc_release(ppuVar13);
        _objc_release(puStack_88);
        _objc_release(uStack_98);
        puVar17 = puStack_a0;
LAB_1063b3d00:
        _objc_release(puVar17);
      }
LAB_1063b41c4:
      _objc_release(lVar2);
      _objc_release(uVar19);
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puStack_d8);
    }
    _objc_release(uVar4);
    _objc_release(uVar20);
  }
  _objc_release(lVar3);
  _objc_release(puVar1);
LAB_1063b4210:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1063b5688; end: 1063b5897;  */

void FUN_1063b5688(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar7 = *(undefined **)(param_1 + 0x20);
  _objc_retain(puVar7);
  if (puVar7 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126b2368;
    _objc_opt_new(PTR_PTR_1126b2368);
    puVar1 = puVar7;
    func_0x00010c2b53a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126c9b98;
    func_0x00010c0f2400(PTR_PTR_1126c9b98,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe5ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9a78;
  func_0x00010bef5460(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9a78;
  func_0x00010bef53a0(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar7;
  func_0x00010c0f0c60(puVar7,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x28);
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = puVar3;
  if (lVar5 == 0) {
    puVar6 = PTR_PTR_1126c9a78;
    func_0x00010bef5460(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0cc0(puVar3,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar6);
  }
  lVar5 = *(long *)(param_1 + 0x30) + 0x78;
  _objc_loadWeakRetained(lVar5);
  puVar3 = PTR_PTR_1126ca1e0;
  func_0x00010c28f700(PTR_PTR_1126ca1e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(lVar5,param_2,puVar3,puVar4,*(undefined8 *)(param_1 + 0x38));
  _objc_release(puVar3);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1063b5898; end: 1063b5ae3; -[SCAdWebViewingSession _handleGAHitEvent:lastInteractedItemIndex:adResponse:gaHitType:gaHitTimestampMs:gaHitLatency:gaHitTypeIsPageView:gaHitTypeIsLandingPage:] */

void FUN_1063b5898(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bef53c0(uVar5,param_3,param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca300;
  uVar3 = param_6;
  func_0x00010bfe5ec0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0(param_8);
  func_0x00010bfb14a0(puVar2,param_3,uVar3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e4e20(uVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ca410;
  uVar3 = param_10;
  func_0x00010bf1f3c0(param_10);
  _objc_release(param_10);
  uVar5 = param_11;
  func_0x00010bf1f3c0(param_11);
  _objc_release(param_11);
  func_0x00010bfbca40(puVar2,param_3,param_7,param_9,param_8,uVar3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  func_0x00010be33520(param_2,param_3,puVar2,param_5,param_4,param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0(param_8);
  _objc_release(param_8);
  puVar4 = PTR_PTR_1126ca418;
  func_0x00010bfbc900(PTR_PTR_1126ca418);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8e100(param_1,uVar3,param_3,param_6,param_7,puVar4);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1063b5ae4; end: 1063b5d4b; -[SCAdWebViewingSession _handleWebBrowserSessionEvent:lastInteractedItemIndex:currentItem:adResponse:] */

void FUN_1063b5ae4(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bef53c0(uVar2,param_2,param_5);
  ppuVar3 = param_4;
  if (param_4 == (undefined **)0x0) {
    lVar1 = param_6;
    func_0x00010bef60a0();
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5ab8;
    if (lVar1 != 10) {
      ppuVar3 = (undefined **)0x0;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(ppuVar3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_6;
  func_0x00010bfe5ec0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79600(uVar4,param_2,param_3,ppuVar3,lVar1,uVar2);
  _objc_release(ppuVar3);
  _objc_release(lVar1);
  _objc_release(uVar4);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1063b5d68;
  puStack_78 = &UNK_110920178;
  lStack_70 = param_1;
  lStack_68 = param_6;
  _objc_retain(param_6);
  func_0x00010c0bf520(param_3,param_2,&PTR___NSConcreteGlobalBlock_11091fff8,
                      &PTR___NSConcreteGlobalBlock_110920018,&PTR___NSConcreteGlobalBlock_110920038,
                      &PTR___NSConcreteGlobalBlock_110920058,&PTR___NSConcreteGlobalBlock_110920078,
                      &PTR___NSConcreteGlobalBlock_110920098,&PTR___NSConcreteGlobalBlock_1109200b8,
                      &puStack_90,&PTR___NSConcreteGlobalBlock_1109201a8,
                      &PTR___NSConcreteGlobalBlock_1109201c8,&PTR___NSConcreteGlobalBlock_1109201e8,
                      &PTR___NSConcreteGlobalBlock_110920208,&PTR___NSConcreteGlobalBlock_110920228,
                      &PTR___NSConcreteGlobalBlock_110920248,&PTR___NSConcreteGlobalBlock_110920268,
                      &PTR___NSConcreteGlobalBlock_110920288,&PTR___NSConcreteGlobalBlock_1109202a8,
                      &PTR___NSConcreteGlobalBlock_1109202c8,&PTR___NSConcreteGlobalBlock_1109202e8,
                      &PTR___NSConcreteGlobalBlock_110920308,&PTR___NSConcreteGlobalBlock_110920328,
                      &PTR___NSConcreteGlobalBlock_110920348,&PTR___NSConcreteGlobalBlock_110920368,
                      &PTR___NSConcreteGlobalBlock_110920388,&PTR___NSConcreteGlobalBlock_1109203a8,
                      &PTR___NSConcreteGlobalBlock_1109203c8,&PTR___NSConcreteGlobalBlock_1109203e8,
                      &PTR___NSConcreteGlobalBlock_110920408);
  _objc_release(param_3);
  _objc_release(lStack_68);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063b5d4c; end: 1063b5d67;  */

void FUN_1063b5d4c(void)

{
  return;
}



/* Entry: 1063b5d68; end: 1063b5e53;  */

void FUN_1063b5d68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf9a440(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  _objc_retain(param_2);
  func_0x00010c0be660(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1063b5e54; end: 1063b5e67;  */

void FUN_1063b5e54(void)

{
  return;
}



/* Entry: 1063b5e68; end: 1063b5efb;  */

void FUN_1063b5e68(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010c270aa0(*(undefined8 *)(param_2 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  puVar2 = PTR_PTR_1126ca418;
  func_0x00010befdca0(PTR_PTR_1126ca418);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8e100(param_1,uVar1,param_3,uVar3,&PTR____CFConstantStringClassReference_110e4d1b8,
                      puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063b5efc; end: 1063b5f4b;  */

void FUN_1063b5efc(void)

{
  return;
}



/* Entry: 1063b5f4c; end: 1063b5fc3; -[SCAdWebViewingSession _handleArrowLayerTapped:lastInteractedItemIndex:adResponse:adSnap:attachmentTriggerType:operaParams:loadInExternalBrowser:externalURL:unskippableDurationMs:urlLoadOnCtaTapBlock:] */

void FUN_1063b5f4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char in_stack_00000000;
  long in_stack_00000010;
  
  _objc_retain(in_stack_00000010);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf92500();
  _objc_release(uVar1);
  if ((in_stack_00000010 != 0 && (int)uVar2 != 0) && in_stack_00000000 == '\0') {
    (**(code **)(in_stack_00000010 + 0x10))(in_stack_00000010);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_stack_00000010);
  return;
}



/* Entry: 1063b5fc4; end: 1063b5fe7; -[SCAdWebViewingSession _handleInteractionZoneLayerTap:webViewUrl:lastInteractedItemIndex:adResponse:adSnap:attachmentTriggerType:loadInExternalBrowser:externalURL:unskippableDurationMs:] */

void FUN_1063b5fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char in_stack_00000000;
  
  if ((param_4 != 0) && (in_stack_00000000 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00010becde30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__trackExternalBrowserLoad_lastIn_112591130,param_4,param_5,param_3);
    return;
  }
  return;
}



/* Entry: 1063b5fe8; end: 1063b60a7; -[SCAdWebViewingSession _externalURL:remoteWebExbUrl:lastInteractiveItemIndex:updatedWebViewUrl:] */

void FUN_1063b5fe8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bef60a0();
  uVar2 = param_4;
  if (lVar1 != 3) {
    lVar1 = param_3;
    func_0x00010bef60a0();
    if (lVar1 != 10) {
      uVar2 = 0;
      goto LAB_1063b6070;
    }
    lVar1 = param_5;
    func_0x00010c067fc0();
    if (lVar1 != 0) {
      uVar2 = param_6;
    }
  }
  _objc_retain(uVar2);
LAB_1063b6070:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1063b60a8; end: 1063b60c3; -[SCAdWebViewingSession _handleWillLoadURL:adResponse:loadInExternalBrowser:lastInteractedItemIndex:multiWebViewsCount:webBrowserUrl:] */

void FUN_1063b60a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  if ((param_5 != 0) && (param_7 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be29250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__handleExternalBrowserAttachment_112567e30,param_8,param_4,param_3);
    return;
  }
  return;
}



/* Entry: 1063b60c4; end: 1063b617b; -[SCAdWebViewingSession _handleExternalBrowserAttachmentWillLoadURL:adResponse:currentItem:lastInteractedItemIndex:] */

void FUN_1063b60c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8e1c0();
  _objc_release(uVar1);
  if (param_3 != 0) {
    func_0x00010becde20(param_1,param_2,param_3,param_6,param_5,param_4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063b617c; end: 1063b627f; -[SCAdWebViewingSession _handleExternalBrowserAttachmentOpenedWithPage:operaParams:] */

void FUN_1063b617c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c0ea220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c27dd80();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 == 2) {
    func_0x00010bf99b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2638;
    func_0x00010c152660(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(param_1,param_2,puVar5,param_3,param_4);
    _objc_release(puVar5);
    _objc_release(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063b6280; end: 1063b6367; -[SCAdWebViewingSession _handleDidLoadURLInBrowser:adResponse:lastInteractedItemIndex:unskippableDurationMs:isExternalBrowserAttachment:url:] */

void FUN_1063b6280(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,long param_8)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  if (param_8 != 0) {
    if (param_7 == 0) {
      uVar1 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf77c20();
      _objc_release(uVar1);
    }
    else {
      func_0x00010becde20(param_2,param_3,param_8,param_6,param_4,param_5);
      func_0x00010be327c0(param_1,param_2,param_3,param_4,param_5);
    }
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063b6368; end: 1063b649f; -[SCAdWebViewingSession _trackExternalBrowserLoad:lastInteractedItemIndex:currentItem:adResponse:] */

void FUN_1063b6368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b9318;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c00e280(puVar1,param_2,0,0,0,0,0,0,0,uVar2,0,0,0,0,0,0,0,0,0,0);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ca410;
  func_0x00010c2a4140(PTR_PTR_1126ca410,param_2,puVar1,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be33520(param_1,param_2,puVar3,param_4,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063b64a0; end: 1063b6687; -[SCAdWebViewingSession _isSingleTapEvent:params:] */

ulong FUN_1063b64a0(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b5b10;
  _objc_retain(param_4);
  func_0x00010bf0d4e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar1);
  uVar8 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(uVar2);
  uVar2 = uVar8;
  func_0x00010c067fc0();
  _objc_release(uVar8);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f480();
  if (((int)uVar5 == 0) || (uVar2 != 2)) {
    _objc_release(uVar4);
  }
  else {
    puVar1 = PTR_PTR_1126b5b08;
    func_0x00010c27bce0(PTR_PTR_1126b5b08);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    _objc_release(uVar4);
    if ((uVar8 & 1) != 0) {
      uVar8 = 1;
      goto LAB_1063b6668;
    }
  }
  puVar1 = PTR_PTR_1126b5b08;
  func_0x00010bf4f3c0(PTR_PTR_1126b5b08);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0720c0();
  if ((uVar8 & 1) == 0) {
    puVar6 = PTR_PTR_1126ca1c8;
    func_0x00010bf7c8e0(PTR_PTR_1126ca1c8);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c0720c0();
    if ((uVar8 & 1) == 0) {
      puVar7 = PTR_PTR_1126b5b08;
      func_0x00010bf11e20(PTR_PTR_1126b5b08);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      func_0x00010c0720c0(param_3);
      _objc_release(puVar7);
    }
    else {
      uVar8 = 1;
    }
    _objc_release(puVar6);
  }
  else {
    uVar8 = 1;
  }
  _objc_release(puVar1);
LAB_1063b6668:
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 1063b6688; end: 1063b66f3; -[SCAdWebViewingSession _isCollectionTapEvent:] */

undefined8 FUN_1063b6688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ca1c8;
  _objc_retain(param_3);
  func_0x00010bf7c820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 1063b66f4; end: 1063b6803; -[SCAdWebViewingSession _handleUnskippableAdForExternalBrowserLoad:adResponse:unskippableDurationMs:] */

void FUN_1063b66f4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = param_5;
  func_0x00010bfe5ec0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c081da0(uVar4,param_3,uVar1);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = param_5;
    func_0x00010bfe5ec0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2 + 0x80;
    _objc_loadWeakRetained(lVar2);
    uVar3 = param_5;
    func_0x00010bef4240(param_5);
    func_0x00010bf77120(param_1,uVar5,param_3,uVar1,uVar4,lVar2,uVar3,
                        *(undefined8 *)(param_2 + 0x28));
    _objc_release(lVar2);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063b6804; end: 1063b695f; -[SCAdWebViewingSession _handleAttachmentDidTriggerEventForExbOnUah:adResponse:item:itemIndex:attachmentTriggerType:isExternalBrowser:] */

void FUN_1063b6804(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c2a3d80(param_3,param_2,param_6,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  if ((param_8 != 0) && (lVar2 != 0)) {
    func_0x00010bed7b80(param_1,param_2,param_3,param_4,param_5,param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bef53c0(uVar1,param_2,param_5);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bef4800(uVar3,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf77c40();
    _objc_release(uVar4);
    func_0x00010c0e4080(*(undefined8 *)(param_1 + 0x58),param_2,uVar3,uVar1,param_6);
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063b6960; end: 1063b6abf; -[SCAdWebViewingSession _handleTopSnapPresentEventForExbOnUah:adResponse:item:itemIndex:isExternalBrowser:] */

void FUN_1063b6960(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_7 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1063b6ac0; end: 1063b6af7;  */

void FUN_1063b6ac0(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed7b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063b6af8; end: 1063b6c67; -[SCAdWebViewingSession _updateExternalBrowserMetadata:adResponse:item:itemIndex:] */

void FUN_1063b6af8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf9dec0(param_3,param_2,uVar5,uVar1,param_4,uVar2,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126ca410;
  uVar5 = uVar3;
  func_0x00010beec820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21720(puVar4,param_2,4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010be33520(param_1,param_2,puVar4,param_6,param_5,param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}


