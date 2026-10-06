/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008817bc; end: 1008818e7; -[SCCameraVerticalToolbar _reloadToolbar:duration:additionalAnimations:completion:] */

void FUN_1008817bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5
                  ,long param_6)

{
  undefined *puVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c3cbd4(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_4 == 0) {
    func_0x000107c3cb68(param_2);
    func_0x000107c3cc18(param_2);
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,1);
    }
  }
  else {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1008ad81c;
    puStack_58 = &UNK_11084aaa8;
    uStack_50 = param_2;
    func_0x000107c61174(param_5);
    puStack_98 = puVar1;
    uStack_90 = 0xc2000000;
    puStack_88 = &UNK_100c6a70c;
    puStack_80 = &UNK_110842508;
    lStack_48 = param_5;
    func_0x000107c61174(param_6);
    lStack_78 = param_6;
    FUN_1008ad7dc(param_1,&puStack_70,&puStack_98);
    func_0x000107c61170(lStack_78);
    func_0x000107c61170(lStack_48);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 1008818e8; end: 100881cfb; -[SCCameraVerticalToolbar _updateExpandAndCollapseButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008818e8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar14 = (long)_DAT_112742bd0;
  if (*(long *)(param_1 + lVar14) == 0) {
    lVar1 = *(long *)(param_1 + _DAT_112742b90);
    func_0x000107c40808();
    lVar2 = *(long *)(param_1 + _DAT_112742b84);
    func_0x000107c3dbc0();
    func_0x000107c61180();
    lVar13 = lVar2;
    func_0x000107c40808();
    func_0x000107c61170(lVar2);
    if (lVar1 + lVar13 != 0) {
      puVar3 = PTR_PTR_1126c7918;
      func_0x000107c610f4();
      func_0x000107c47fa4();
      lVar13 = param_1;
      func_0x000107c3b628(param_1);
      func_0x000107c61180();
      func_0x000107c56ad8(puVar3);
      func_0x000107c61170(lVar13);
      func_0x000107c530e8(puVar3);
      func_0x000107c591ac(puVar3);
      lVar1 = (long)_DAT_112742b70;
      lVar13 = param_1 + lVar1;
      func_0x000107c61148(lVar13);
      lVar2 = lVar13;
      func_0x000107c3de48();
      func_0x000107c61180();
      func_0x000107c5cbb8();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar13);
      lVar13 = (long)_DAT_112742b5c;
      uVar4 = *(undefined8 *)(param_1 + lVar13);
      func_0x000107c5dd3c();
      func_0x000107c61180();
      uVar5 = uVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c44f80();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
      puVar6 = PTR_PTR_1126c87d0;
      func_0x000107c610f4();
      uVar7 = *(undefined8 *)(param_1 + _DAT_112742b28);
      func_0x000107c42e38(uVar7);
      func_0x000107c61180();
      uVar8 = *(undefined8 *)(param_1 + lVar13);
      func_0x000107c5dd3c(uVar8);
      func_0x000107c61180();
      uVar5 = uVar8;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c44fac();
      uVar9 = *(undefined8 *)(param_1 + lVar13);
      func_0x000107c5dd3c(uVar9);
      func_0x000107c61180();
      uVar4 = uVar9;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c5af6c();
      lVar1 = param_1 + lVar1;
      func_0x000107c61148(lVar1);
      func_0x000107c48de4();
      uVar10 = *(undefined8 *)(param_1 + lVar14);
      *(undefined **)(param_1 + lVar14) = puVar6;
      func_0x000107c61170(uVar10);
      func_0x000107c61174(puVar6);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar7);
      if (*(char *)(param_1 + _DAT_112742b40) == '\x01') {
        func_0x000107c60888(&uStack_98,0x400921fb54442d18);
        uStack_c8 = uStack_90;
        uStack_d0 = uStack_98;
        uStack_b8 = uStack_80;
        uStack_c0 = uStack_88;
        uStack_a8 = uStack_70;
        uStack_b0 = uStack_78;
        func_0x000107c5a03c(puVar6);
      }
      func_0x000107c61144(&uStack_d0,param_1);
      puVar11 = puVar3;
      func_0x000107c41d8c(puVar3);
      func_0x000107c61180();
      func_0x000107c6111c(auStack_d8,&uStack_d0);
      func_0x000107c61174(puVar3);
      puVar12 = puVar11;
      func_0x000107c5c320(puVar11);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(puVar12);
      func_0x000107c61170(puVar11);
      puVar11 = puVar6;
      func_0x000107c579d8(puVar6);
      FUN_1008830b8();
      func_0x000107c61180();
      func_0x000107c520fc(puVar6);
      func_0x000107c61170(puVar11);
      func_0x000107c5639c(0x3ff0000000000000,puVar6);
      func_0x000107c56708(0x3ff0000000000000,puVar6);
      func_0x000107c61170(puVar3);
      func_0x000107c61120(auStack_d8);
      func_0x000107c61120(&uStack_d0);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar3);
    }
  }
  return;
}



/* Entry: 100881cfc; end: 100881efb; -[SCCameraVerticalToolbar _updateAlpha] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100881cfc(ulong param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar7 = (long)_DAT_112742b84;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x000107c3db60();
  func_0x000107c61180();
  lVar5 = lVar1;
  func_0x000107c4080c();
  if (lVar5 != 0) {
    lVar8 = *plStack_130;
    do {
      lVar9 = 0;
      do {
        if (*plStack_130 != lVar8) {
          func_0x000107c61128(lVar1);
        }
        uVar6 = *(undefined8 *)(lStack_138 + lVar9 * 8);
        uVar2 = *(undefined8 *)(param_1 + lVar7);
        func_0x000107c4d9e8(uVar2,param_2,uVar6);
        func_0x000107c61180();
        uVar3 = param_1;
        func_0x000107c3c75c(param_1,param_2,uVar6,uVar2);
        uVar6 = 0;
        if ((int)uVar3 == 0) {
          uVar6 = 0x3ff0000000000000;
        }
        func_0x000107c526c0(uVar6,uVar2);
        func_0x000107c61170(uVar2);
        lVar9 = lVar9 + 1;
      } while (lVar5 != lVar9);
      lVar5 = lVar1;
      func_0x000107c4080c(lVar1,param_2,&uStack_140,auStack_f8,0x10);
    } while (lVar5 != 0);
  }
  func_0x000107c61170(lVar1);
  lVar5 = (long)_DAT_112742b3c;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x000107c5dfc4(uVar2);
  uVar3 = param_1;
  func_0x000107c3add8(param_1,param_2,uVar2);
  func_0x000107c526c0((double)(uVar3 & 0xffffffff),*(undefined8 *)(param_1 + (long)_DAT_112742bd0));
  lVar5 = *(long *)(param_1 + lVar5);
  func_0x000107c5dfc4(lVar5);
  uVar3 = param_1;
  func_0x000107c3add8(param_1,param_2,lVar5);
  dVar10 = 0.0;
  if ((int)uVar3 != 0) {
    uVar3 = *(ulong *)(param_1 + (long)_DAT_112742b24);
    func_0x000107c44f80(uVar3);
    dVar10 = (double)(uVar3 & 0xffffffff);
  }
  uVar4 = *(ulong *)(param_1 + (long)_DAT_112742bac);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  uVar3 = uVar4;
  func_0x000107c3e5e8();
  func_0x000107c61180();
  func_0x000107c526c0(dVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return uVar4;
  }
  func_0x000107c60e78();
  return (ulong)(lVar5 - 5U < 0xfffffffffffffffe);
}



/* Entry: 100881efc; end: 100881f0b; -[SCCameraVerticalToolbar _areBackgroundViewsVisibleForVisibilityStatus:] */

bool FUN_100881efc(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 - 5U < 0xfffffffffffffffe;
}



/* Entry: 100881f0c; end: 100881f1b; -[SCCameraToolbarView backgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100881f0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742b08);
}



/* Entry: 100881f1c; end: 100882207; -[SCCameraVerticalToolbar _updateLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100881f1c(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  ppuVar1 = &puStack_90;
  func_0x000107c4fe7c(*(undefined8 *)(param_1 + _DAT_112742ba4));
  func_0x000107c61144(auStack_68,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_100882e5c;
  puStack_78 = &UNK_110842c58;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c61184(&puStack_90);
  lVar7 = param_1;
  func_0x000107c49d18();
  dVar8 = 0.0;
  func_0x000107c3c13c(param_1);
  func_0x000107c3bbfc(param_1);
  func_0x000107c3c13c(param_1);
  dVar9 = dVar8;
  func_0x000107c3b110(param_1);
  func_0x000107c5dfc4(*(undefined8 *)(param_1 + _DAT_112742b3c));
  func_0x000107c3add8(param_1);
  func_0x000107c3c51c(param_1);
  lVar6 = (long)_DAT_112742bdc;
  lVar2 = *(long *)(param_1 + lVar6);
  func_0x000107c40268(lVar2);
  if (dVar9 != dVar8) {
    dVar9 = dVar8;
    func_0x000107c5378c(dVar8,*(undefined8 *)(param_1 + lVar6));
    lVar2 = *(long *)(param_1 + _DAT_112742bac);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar6 = lVar2;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(lVar2);
    if (lVar6 != 0) {
      lVar2 = param_1 + _DAT_112742bbc;
      func_0x000107c61148(lVar2);
      func_0x000107c4abfc();
      func_0x000107c61170(lVar2);
    }
  }
  if ((int)lVar7 == 0) {
    FUN_1008830b8();
    func_0x000107c61180();
  }
  else {
    func_0x0001061e8bb8();
    func_0x000107c61180();
  }
  lVar7 = (long)_DAT_112742bd0;
  func_0x000107c520fc(*(undefined8 *)(param_1 + lVar7));
  func_0x000107c61170(lVar2);
  func_0x000107c520f4(*(undefined8 *)(param_1 + lVar7));
  uVar3 = *(undefined8 *)(param_1 + lVar7);
  func_0x000107c5cbb0(uVar3);
  func_0x000107c61180();
  func_0x000107c530e8();
  func_0x000107c61170(uVar3);
  lVar2 = (long)_DAT_112742bac;
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  func_0x000107c5916c();
  func_0x000107c61170(uVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar2);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  func_0x000107c438d4();
  func_0x000107c609cc();
  uVar5 = *(undefined8 *)(param_1 + lVar2);
  func_0x000107c5c734(uVar5);
  func_0x000107c61180();
  uVar3 = uVar5;
  func_0x000107c3e5e8();
  func_0x000107c61180();
  func_0x000107c54b80(0,0,dVar9,dVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(ppuVar1);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 100882208; end: 1008822ab; -[SCCameraVerticalToolbar _positionExpandAndCollapseButtonIfNeededAtY:haveToolbarButtonsBeenLaidOut:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_100882208(double param_1,long param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  double dVar2;
  
  lVar1 = (long)_DAT_112742bd0;
  dVar2 = param_1;
  func_0x000107c3dc40(*(undefined8 *)(param_2 + lVar1));
  if ((((dVar2 == 0.0) || ((param_4 & 1) != 0)) || ((*(byte *)(param_2 + _DAT_112742b40) & 1) == 0))
     && (((func_0x000107c3dc40(*(undefined8 *)(param_2 + lVar1)), dVar2 == 0.0 || (param_4 == 0)) ||
         ((*(byte *)(param_2 + _DAT_112742b40) & 1) != 0)))) {
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be763d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,PTR_s__positionView_atY__11257b290,*(undefined8 *)(param_2 + lVar1));
  return param_1;
}



/* Entry: 1008822ac; end: 10088240b; -[SCCameraVerticalToolbar _layoutButtons:currentY:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008822ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112742b24);
  func_0x000107c3f154(uVar1);
  func_0x000107c61180();
  lVar2 = param_2;
  func_0x000107c3b58c(param_2,param_3,0);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126c8b28;
  func_0x000107c610f4(PTR_PTR_1126c8b28);
  puVar4 = *(undefined **)(param_2 + _DAT_112742b84);
  func_0x000107c3dbc0();
  func_0x000107c61180();
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
  }
  func_0x000107c45adc(puVar3,param_3,puVar5,lVar2,uVar1);
  func_0x000107c61170(puVar4);
  puVar5 = puVar3;
  func_0x000107c5b5d0(puVar3);
  func_0x000107c61180();
  puVar4 = puVar5;
  if (*(char *)(param_2 + _DAT_112742b40) == '\x01') {
    func_0x000107c50874(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
  }
  func_0x000107c3c138(param_1,param_2,param_3,puVar4,param_4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_4);
  return param_1;
}



/* Entry: 10088240c; end: 10088241f; -[SCCameraVerticalToolbarConfigurationImpl cameraModeToolbarItemOrder] */

void FUN_10088240c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ecd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSOrderedSet_1126b78c0,PTR_s_orderedSetWithArray__112618d68,
             &PTR__OBJC_CLASS___NSConstantArray_11117ec70);
  return;
}



/* Entry: 100882420; end: 1008824d7; -[SCCameraVerticalToolbar _effectiveFixedTopItemsForVisibilityStatus:] */

void FUN_100882420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c610f4(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  uVar2 = param_1;
  func_0x000107c3b750(param_1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c48648(puVar1,param_2,uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c3c41c(param_1);
  func_0x000107c61180();
  func_0x000107c5d25c(puVar1,param_2,param_1);
  func_0x000107c61170(param_1);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x000107c5a7a4(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1008824d8; end: 100882547; -[SCCameraVerticalToolbar _fixedTopItemsForVisibilityStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008824d8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    if (*(long *)(param_1 + _DAT_112742b20) == 0) {
      func_0x000107c43678();
      func_0x000107c61180();
    }
    else {
      func_0x000107c4367c();
      func_0x000107c61180();
    }
  }
  else if (*(long *)(param_1 + _DAT_112742b20) == 0) {
    func_0x000107c43670(*(undefined8 *)(param_1 + _DAT_112742b24));
    func_0x000107c61180();
  }
  else {
    func_0x000107c43674();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100882548; end: 1008825c3; -[SCCameraVerticalToolbarConfigurationImpl fixedTopCameraModesForMainCamera] */

void FUN_100882548(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c5a74c(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_11117ebf8);
  func_0x000107c61180();
  func_0x000107c4ff80();
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c4ff80(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bff50);
  }
  puVar2 = puVar1;
  func_0x000107c40794(puVar1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1008825c4; end: 100882673; -[SCCameraVerticalToolbar _runtimePinnedTopItemTypes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008825c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c61160();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112742b58);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  puStack_38 = &UNK_1061e621c;
  puStack_30 = &UNK_110915278;
  puStack_28 = puVar1;
  func_0x000107c61174();
  func_0x000107c429c4(uVar3,param_2,&puStack_48);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x000107c5a7a4(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puStack_28);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100882674; end: 100882877; -[SCCameraToolbarButtonSorter initWithButtons:fixedTopItemsSet:itemOrderSet:] */

undefined8 *
FUN_100882674(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_f8 = PTR_PTR_1126f0490;
  puVar2 = &uStack_100;
  uStack_100 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar3 = puVar2[3];
    puVar2[3] = param_3;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = puVar2[4];
    puVar2[4] = param_4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar3 = puVar2[2];
    puVar2[2] = param_5;
    func_0x000107c61170(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    lVar8 = puVar2[3];
    func_0x000107c61174(lVar8);
    lVar5 = lVar8;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(lVar8);
        }
        uVar3 = *(undefined8 *)(lVar7 * 8);
        func_0x000107c5cbb0(uVar3);
        func_0x000107c61180();
        func_0x000107c56bd8(puVar4);
        func_0x000107c61170(uVar3);
        lVar7 = lVar7 + 1;
      } while (lVar5 != lVar7);
      lVar5 = lVar8;
      func_0x000107c4080c();
    }
    func_0x000107c61170(lVar8);
    puVar6 = puVar4;
    func_0x000107c40794();
    uVar3 = puVar2[1];
    puVar2[1] = puVar6;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar2;
  }
  func_0x000107c60e78();
  uVar3 = param_3[3];
  func_0x000107c5b5cc(uVar3);
  func_0x000107c61180();
  func_0x000107c3c07c(param_3);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return param_3;
}



/* Entry: 100882878; end: 10088290b; -[SCCameraToolbarButtonSorter sortedButtons] */

void FUN_100882878(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1008ad8a8;
  puStack_30 = &UNK_110915158;
  lStack_28 = param_1;
  func_0x000107c5b5cc(uVar1,param_2,0x10,&puStack_48);
  func_0x000107c61180();
  func_0x000107c3c07c(param_1,param_2,uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10088290c; end: 100882b0b; -[SCCameraToolbarButtonSorter _orderChildButtonsNextToParentButtons:] */

/* WARNING: Possible PIC construction at 0x0001008829dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882ac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882d24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882d80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882db0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882de0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882e00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882ea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882cf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100882ea4) */
/* WARNING: Removing unreachable block (ram,0x000100882e14) */
/* WARNING: Removing unreachable block (ram,0x000100882e58) */
/* WARNING: Removing unreachable block (ram,0x000100882e88) */
/* WARNING: Removing unreachable block (ram,0x000100882e9c) */
/* WARNING: Removing unreachable block (ram,0x000100882e2c) */
/* WARNING: Removing unreachable block (ram,0x000100882e04) */
/* WARNING: Removing unreachable block (ram,0x000100882de4) */
/* WARNING: Removing unreachable block (ram,0x000100882dec) */
/* WARNING: Removing unreachable block (ram,0x000100882dfc) */
/* WARNING: Removing unreachable block (ram,0x000100882d84) */
/* WARNING: Removing unreachable block (ram,0x000100882d88) */
/* WARNING: Removing unreachable block (ram,0x000100882c8c) */
/* WARNING: Removing unreachable block (ram,0x000100882cac) */
/* WARNING: Removing unreachable block (ram,0x000100882ce0) */
/* WARNING: Removing unreachable block (ram,0x000100882cd8) */
/* WARNING: Removing unreachable block (ram,0x000100882c30) */
/* WARNING: Removing unreachable block (ram,0x000100882c40) */
/* WARNING: Removing unreachable block (ram,0x000100882c04) */
/* WARNING: Removing unreachable block (ram,0x000100882db4) */
/* WARNING: Removing unreachable block (ram,0x000100882dc0) */
/* WARNING: Removing unreachable block (ram,0x000100882c08) */
/* WARNING: Removing unreachable block (ram,0x000100882ac4) */
/* WARNING: Removing unreachable block (ram,0x000100882b08) */
/* WARNING: Removing unreachable block (ram,0x000100882ddc) */
/* WARNING: Removing unreachable block (ram,0x000100882bac) */
/* WARNING: Removing unreachable block (ram,0x000100882bbc) */
/* WARNING: Removing unreachable block (ram,0x000100882bc0) */
/* WARNING: Removing unreachable block (ram,0x000100882bd0) */
/* WARNING: Removing unreachable block (ram,0x000100882bd8) */
/* WARNING: Removing unreachable block (ram,0x000100882ae4) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x000100882a74) */
/* WARNING: Removing unreachable block (ram,0x000100882a80) */
/* WARNING: Removing unreachable block (ram,0x000100882a8c) */
/* WARNING: Removing unreachable block (ram,0x000100882a20) */
/* WARNING: Removing unreachable block (ram,0x000100882a2c) */
/* WARNING: Removing unreachable block (ram,0x0001008829e0) */
/* WARNING: Removing unreachable block (ram,0x000100882a94) */
/* WARNING: Removing unreachable block (ram,0x000100882aa0) */
/* WARNING: Removing unreachable block (ram,0x0001008829ec) */
/* WARNING: Removing unreachable block (ram,0x000100882cf4) */
/* WARNING: Removing unreachable block (ram,0x000100882d28) */
/* WARNING: Removing unreachable block (ram,0x000100882d30) */
/* WARNING: Removing unreachable block (ram,0x000100882d40) */
/* WARNING: Removing unreachable block (ram,0x000100882d44) */
/* WARNING: Removing unreachable block (ram,0x000100882d48) */
/* WARNING: Removing unreachable block (ram,0x000100882dac) */
/* WARNING: Removing unreachable block (ram,0x000100882d70) */
/* WARNING: Removing unreachable block (ram,0x000100882cfc) */
/* WARNING: Removing unreachable block (ram,0x000100882d20) */

void FUN_10088290c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61160(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puStack_128 = (undefined8 *)0x0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar1 != 0) {
    if (*plStack_120 != *plStack_120) {
      func_0x000107c61128(param_3);
    }
    func_0x000107c5cbb0(*puStack_128);
    func_0x000107c61180();
    func_0x000107c4e35c();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100882b0c; end: 100882e5b; -[SCCameraVerticalToolbar _positionButtons:startingAtY:visibleItemProcessingBlock:] */

/* WARNING: Possible PIC construction at 0x000100882c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882d24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882d80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882db0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882de0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882e00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882ea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882cf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100882ea4) */
/* WARNING: Removing unreachable block (ram,0x000100882e14) */
/* WARNING: Removing unreachable block (ram,0x000100882e58) */
/* WARNING: Removing unreachable block (ram,0x000100882e88) */
/* WARNING: Removing unreachable block (ram,0x000100882e9c) */
/* WARNING: Removing unreachable block (ram,0x000100882e2c) */
/* WARNING: Removing unreachable block (ram,0x000100882e04) */
/* WARNING: Removing unreachable block (ram,0x000100882de4) */
/* WARNING: Removing unreachable block (ram,0x000100882dec) */
/* WARNING: Removing unreachable block (ram,0x000100882dfc) */
/* WARNING: Removing unreachable block (ram,0x000100882d84) */
/* WARNING: Removing unreachable block (ram,0x000100882d88) */
/* WARNING: Removing unreachable block (ram,0x000100882c8c) */
/* WARNING: Removing unreachable block (ram,0x000100882cac) */
/* WARNING: Removing unreachable block (ram,0x000100882ce0) */
/* WARNING: Removing unreachable block (ram,0x000100882cd8) */
/* WARNING: Removing unreachable block (ram,0x000100882c30) */
/* WARNING: Removing unreachable block (ram,0x000100882c40) */
/* WARNING: Removing unreachable block (ram,0x000100882c04) */
/* WARNING: Removing unreachable block (ram,0x000100882db4) */
/* WARNING: Removing unreachable block (ram,0x000100882dc0) */
/* WARNING: Removing unreachable block (ram,0x000100882c08) */
/* WARNING: Removing unreachable block (ram,0x000100882cf4) */
/* WARNING: Removing unreachable block (ram,0x000100882d28) */
/* WARNING: Removing unreachable block (ram,0x000100882d30) */
/* WARNING: Removing unreachable block (ram,0x000100882d40) */
/* WARNING: Removing unreachable block (ram,0x000100882d44) */
/* WARNING: Removing unreachable block (ram,0x000100882d48) */
/* WARNING: Removing unreachable block (ram,0x000100882dac) */
/* WARNING: Removing unreachable block (ram,0x000100882d70) */
/* WARNING: Removing unreachable block (ram,0x000100882cfc) */
/* WARNING: Removing unreachable block (ram,0x000100882d20) */

void FUN_100882b0c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uStack_150;
  long *plStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [128];
  undefined8 uStack_90;
  
  uStack_90 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c3e15c();
  func_0x000107c61180();
  plStack_148 = (long *)0x0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4080c(param_3,param_2,&uStack_150,auStack_110,0x10);
  if (lVar1 != 0) {
    if (*plStack_140 != *plStack_140) {
      func_0x000107c61128(param_3);
    }
    param_3 = *plStack_148;
    func_0x000107c5cbb0(param_3);
    func_0x000107c61180();
    func_0x000107c49b60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100882e5c; end: 100882eb3;  */

/* WARNING: Possible PIC construction at 0x000100882ea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100882ea4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100882e5c(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c3d7a0(*(undefined8 *)(param_1 + _DAT_112742ba4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100882eb4; end: 100882efb; -[SCCameraToolbarButtonSorter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100882ecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100882ee4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100882ed0) */
/* WARNING: Removing unreachable block (ram,0x000100882ee8) */

void FUN_100882eb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 100882efc; end: 10088306b; -[SCCameraVerticalToolbar _configureButtonsAndTitlesIfNeeded] */

/* WARNING: Possible PIC construction at 0x000100883034: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100882efc(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  if (((*(char *)(param_1 + _DAT_112742bc0) == '\x01') &&
      ((*(byte *)(param_1 + _DAT_112742b98) & 1) == 0)) &&
     ((*(byte *)(param_1 + _DAT_112742b9c) & 1) == 0)) {
    *(undefined1 *)(param_1 + _DAT_112742b9c) = 1;
    lVar1 = *(long *)(param_1 + _DAT_112742b84);
    func_0x000107c3dbc0();
    func_0x000107c61180();
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lVar2 = lVar1;
    func_0x000107c4080c();
    if (lVar2 != 0) {
      lVar3 = *plStack_100;
      do {
        lVar4 = 0;
        do {
          if (*plStack_100 != lVar3) {
            func_0x000107c61128(lVar1);
          }
          func_0x000107c4964c(*(undefined8 *)(lStack_108 + lVar4 * 8));
          lVar4 = lVar4 + 1;
        } while (lVar2 != lVar4);
        lVar2 = lVar1;
        func_0x000107c4080c(lVar1,param_2,&uStack_110,auStack_c8,0x10);
      } while (lVar2 != 0);
    }
    if ((*(char *)(param_1 + _DAT_112742b48) == '\x01') &&
       (*(char *)(param_1 + _DAT_112742b44) == '\x01')) {
      func_0x000107c3c830(0x4008000000000000,param_1);
    }
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    func_0x000107c60e78();
    lVar1 = *(long *)(param_1 + _DAT_112742bd8);
    func_0x000107c5c734(lVar1);
    func_0x000107c61180();
    func_0x000107c526c0((double)(param_3 & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10088306c; end: 1008830b7; -[SCCameraVerticalToolbar _setBackgroundViewsVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088306c(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742bd8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c526c0((double)param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008830b8; end: 1008830cf;  */

void FUN_1008830b8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e44b98;
  FUN_1000f5ff4(&PTR____CFConstantStringClassReference_110e44b98,
                &PTR____CFConstantStringClassReference_110e61f78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    FUN_10002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
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



/* Entry: 1008830d0; end: 1008830df; -[SCCameraToolbarView setShouldHandleOutOfBoundTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008830d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112742b0c) = param_3;
  return;
}



/* Entry: 1008830e0; end: 10088329b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008830e0(long param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_1 + 0x28;
  func_0x000107c61148();
  iVar9 = (int)param_2;
  if (lVar8 != 0) {
    lVar4 = *(long *)(lVar8 + _DAT_112742b84);
    func_0x000107c3dbc0();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c4080c();
    lVar3 = lRam0000000000000000;
    iVar9 = (int)param_2;
    while (lVar5 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          func_0x000107c61128(lVar4);
        }
        uVar11 = *(undefined8 *)(lVar12 * 8);
        func_0x000107c5dfc4(*(undefined8 *)(param_1 + 0x20));
        func_0x000107c59eb4(uVar11);
        lVar12 = lVar12 + 1;
      } while (lVar5 != lVar12);
      lVar5 = lVar4;
      func_0x000107c4080c();
      iVar9 = (int)param_2;
    }
    func_0x000107c61170(lVar4);
    if (*(char *)(param_1 + 0x30) == '\x01') {
      cVar2 = *(char *)(lVar8 + _DAT_112742b40);
      cVar1 = *(char *)(param_1 + 0x31);
      uVar6 = *(undefined8 *)(lVar8 + _DAT_112742bd0);
      func_0x000107c4aba4();
      func_0x000107c61180();
      uVar11 = uVar6;
      func_0x0001061e8a3c(cVar1 != cVar2);
      iVar9 = (int)uVar11;
      func_0x000107c61170(uVar6);
      uVar11 = *(undefined8 *)(lVar8 + _DAT_112742b74);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c4d94c();
      func_0x000107c61180();
      func_0x000107c4d664(uVar11);
      func_0x000107c61170(puVar7);
    }
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  func_0x000107c60e78();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (iVar9 != 0) {
    lVar8 = *(long *)(lVar8 + 0x20);
    func_0x000107c40794();
    lVar5 = lVar8;
    func_0x000107c4080c();
    lVar3 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar4 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          func_0x000107c61128(lVar8);
        }
        func_0x000107c5560c(*(undefined8 *)(lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar5 != lVar4);
      lVar5 = lVar8;
      func_0x000107c4080c();
    }
    func_0x000107c61170();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c615f0(*(undefined8 *)(lVar8 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10088329c; end: 10088338f;  */

void FUN_10088329c(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != 0) {
    param_1 = *(long *)(param_1 + 0x20);
    func_0x000107c40794();
    lVar2 = param_1;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar4 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(param_1);
        }
        func_0x000107c5560c(*(undefined8 *)(lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = param_1;
      func_0x000107c4080c();
    }
    func_0x000107c61170();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c615f0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100883390; end: 1008833a7; -[_TtC41CameraFeatureLayoutServicesImplementation30DefaultCameraFeatureLayoutImpl verticalToolbarViewBackgroundViewContainer] */

void FUN_100883390(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008833a8; end: 100883467; -[SCViewfinderDataSourceCoordinatorImpl dataSource:didReceiveSampleBuffer:] */

/* WARNING: Possible PIC construction at 0x000100883400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100883444: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100883404) */
/* WARNING: Removing unreachable block (ram,0x000100883408) */
/* WARNING: Removing unreachable block (ram,0x000100883418) */
/* WARNING: Removing unreachable block (ram,0x000100883448) */
/* WARNING: Removing unreachable block (ram,0x000100883420) */

void FUN_1008833a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c3d114(param_1);
  func_0x000107c61180();
  func_0x000107c49cec(param_3,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100883468; end: 1008834fb; -[SCViewfinderPipelineCoordinator dataSource:didReceiveSampleBuffer:] */

/* WARNING: Possible PIC construction at 0x0001008834c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008834c8) */

void FUN_100883468(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(param_4);
  func_0x000107c4f2d0(uVar1,param_2,param_4);
  func_0x000107c61180();
  func_0x000107c5bca4(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c61180();
  func_0x000107c5e398();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1008834fc; end: 1008835eb; -[SCViewfinderProcessingPipelineImpl processSampleBuffer:] */

void FUN_1008834fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  puStack_48 = &UNK_10621a394;
  puStack_40 = &UNK_10621a3a4;
  func_0x000107c61174(param_3);
  uStack_38 = param_3;
  func_0x000107c437d8(param_1);
  uVar1 = puStack_58[5];
  func_0x000107c61174(uVar1);
  func_0x000107c60bcc(&uStack_60,8);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008835ec; end: 100883737; -[SCViewfinderPipelineBase forEach:] */

/* WARNING: Possible PIC construction at 0x00010088363c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100883724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100883764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100883728) */
/* WARNING: Removing unreachable block (ram,0x000100883730) */
/* WARNING: Removing unreachable block (ram,0x00010088377c) */
/* WARNING: Removing unreachable block (ram,0x00010088375c) */
/* WARNING: Removing unreachable block (ram,0x000100883640) */
/* WARNING: Removing unreachable block (ram,0x000100883670) */
/* WARNING: Removing unreachable block (ram,0x000100883678) */
/* WARNING: Removing unreachable block (ram,0x00010088367c) */
/* WARNING: Removing unreachable block (ram,0x00010088368c) */
/* WARNING: Removing unreachable block (ram,0x000100883694) */
/* WARNING: Removing unreachable block (ram,0x0001008836b4) */
/* WARNING: Removing unreachable block (ram,0x0001008836d0) */
/* WARNING: Removing unreachable block (ram,0x000100883718) */
/* WARNING: Removing unreachable block (ram,0x000100883700) */
/* WARNING: Removing unreachable block (ram,0x000100883768) */
/* WARNING: Removing unreachable block (ram,0x000107c4db98) */
/* WARNING: Removing unreachable block (ram,0x00010c0e3460) */

void FUN_1008835ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 8);
  func_0x000107c40794(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 100883738; end: 10088378b; -[SCCameraViewfinderStartupWorkflow willRenderSampleBuffer:] */

/* WARNING: Possible PIC construction at 0x000100883764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100883768) */
/* WARNING: Removing unreachable block (ram,0x000107c4db98) */
/* WARNING: Removing unreachable block (ram,0x00010c0e3460) */

void FUN_100883738(long param_1)

{
  func_0x000107c611ec(param_1 + 0x1c);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x1c);
  return;
}



/* Entry: 10088378c; end: 10088378f;  */

void FUN_10088378c(void)

{
  return;
}



/* Entry: 100883790; end: 1008838ab; -[SCViewfinderRenderingPipelineImpl renderSampleBuffer:] */

void FUN_100883790(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_4);
  lVar1 = param_2;
  func_0x000107c3c0cc();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4210c(lVar1,param_3,&PTR___NSConcreteGlobalBlock_110917658);
  }
  lVar2 = param_2;
  func_0x000107c5bca4();
  func_0x000107c61180();
  func_0x000107c6071c();
  func_0x000107c4aa1c(param_2);
  func_0x000107c61180();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1008bf0bc;
  puStack_60 = &UNK_110844b80;
  lStack_58 = lVar2;
  uStack_50 = param_4;
  uStack_48 = param_1;
  func_0x000107c61174(param_4);
  func_0x000107c61174(lVar2);
  func_0x000107c500e8(param_2,param_3,param_4,&puStack_78);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(lStack_58);
  func_0x000107c61170(param_4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 1008838ac; end: 10088390b; -[SCViewfinderRenderingPipelineImpl _pendingRenderingModule] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008838ac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_112743944;
  func_0x000107c611ec(param_1 + lVar2);
  lVar3 = (long)_DAT_11274394c;
  lVar1 = param_1 + lVar3;
  func_0x000107c61148(lVar1);
  func_0x000107c611a0(param_1 + lVar3,0);
  func_0x000107c611f0(param_1 + lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10088390c; end: 100883963; -[SCViewfinderPipelineBase lastModule] */

void FUN_10088390c(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c611ec(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c4aa28(uVar1);
  func_0x000107c61180();
  func_0x000107c611f0(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100883964; end: 100883967; -[SCCameraViewfinderRenderAgentImpl renderSampleBuffer:completion:] */

void FUN_100883964(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf963f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_enqueueSampleBuffer_completionBl_1125c32a0);
  return;
}



/* Entry: 100883968; end: 100883ac7; -[SCCameraViewfinderRenderAgentImpl enqueueSampleBuffer:completionBlock:] */

void FUN_100883968(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar2 = &puStack_80;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar1 = param_1;
  func_0x000107c3bb88();
  if ((int)lVar1 == 0) {
    if ((*(byte *)(param_1 + 0x43) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x40) = 0;
      func_0x000107c4db98(*(undefined8 *)(param_1 + 0x70));
    }
    func_0x000107c61144(auStack_48,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_100883afc;
    puStack_68 = &UNK_110848378;
    func_0x000107c6111c(auStack_50,auStack_48);
    func_0x000107c61174(param_3);
    uStack_60 = param_3;
    func_0x000107c61174(param_4);
    uStack_58 = param_4;
    func_0x000107c61184(&puStack_80);
    func_0x000107c4e530(*(undefined8 *)(param_1 + 0x48));
    *(undefined1 *)(param_1 + 0x43) = 1;
    func_0x000107c61170(ppuVar2);
    func_0x000107c61170(uStack_58);
    func_0x000107c61170(uStack_60);
    func_0x000107c61120(auStack_50);
    func_0x000107c61120(auStack_48);
  }
  else {
    lVar1 = param_1;
    func_0x000107c3baa8();
    if ((int)lVar1 != 0) {
      func_0x000107c3b614(param_1);
    }
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100883ac8; end: 100883afb; -[SCCameraViewfinderRenderAgentImpl _isSampleBufferRenderPaused] */

undefined1 FUN_100883ac8(long param_1)

{
  undefined1 uVar1;
  
  func_0x000107c611ec(param_1 + 0xc0);
  uVar1 = *(undefined1 *)(param_1 + 0xd4);
  func_0x000107c611f0(param_1 + 0xc0);
  return uVar1;
}



/* Entry: 100883afc; end: 100883bf3;  */

void FUN_100883afc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = param_1 + 0x30;
  func_0x000107c61148();
  if (lVar2 != 0) {
    func_0x000107c3cc10(lVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4f17c(uVar3);
    func_0x000107c3ccdc(lVar2,param_2,uVar3);
    lVar4 = lVar2;
    func_0x000107c3b3ec(lVar2);
    func_0x000107c61180();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    uStack_68 = 0x1008bed80;
    puStack_60 = &UNK_110866910;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    lStack_58 = lVar2;
    func_0x000107c61174(uVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = uVar1;
    func_0x000107c61174(uVar5);
    uStack_50 = uVar5;
    func_0x000107c50084(lVar4,param_2,uVar3,&puStack_78);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uStack_50);
    func_0x000107c61170(uStack_48);
  }
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 100883bf4; end: 100883c53; -[SCCameraViewfinderRenderAgentImpl _updateLastSampleBuffer:] */

/* WARNING: Possible PIC construction at 0x000100883c40: Changing call to branch */

void FUN_100883bf4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c3b084(param_1);
  lVar1 = param_3;
  func_0x000107c4f17c();
  if (lVar1 != 0) {
    func_0x000107c4f17c(param_3);
    func_0x000107c607f4();
    func_0x000107c61174(param_3);
    lVar1 = *(long *)(param_1 + 0xd8);
    *(long *)(param_1 + 0xd8) = param_3;
    param_3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100883c54; end: 100883c9b; -[SCCameraViewfinderRenderAgentImpl _clearLastSampleBuffer] */

void FUN_100883c54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0xd8);
  func_0x000107c4f17c();
  if (lVar1 != 0) {
    func_0x000107c4f17c(*(undefined8 *)(param_1 + 0xd8));
    func_0x000107c607f0();
    uVar2 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 100883c9c; end: 100883ca3; -[SCSampleBufferImpl previewSampleBuffer] */

undefined8 FUN_100883c9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100883ca4; end: 100883d9b; -[SCCameraViewfinderRenderAgentImpl _updateTextureSizeIfNecessaryWithSampleBuffer:] */

void FUN_100883ca4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar2 = param_3;
  func_0x000107c60a2c();
  if (((((int)uVar2 != 0) && (lVar3 = param_1, func_0x000107c3c7a0(), (int)lVar3 != 0)) &&
      (0.0 < *(double *)(param_1 + 0xa8))) &&
     ((0.0 < *(double *)(param_1 + 0xb0) && (func_0x000107c60a1c(), param_3 != 0)))) {
    lVar3 = param_1;
    func_0x000107c3bbd0();
    uVar2 = param_3;
    func_0x000107c60ac8();
    func_0x000107c60ab8();
    uVar1 = uVar2;
    if (param_3 <= uVar2) {
      uVar1 = param_3;
    }
    if (uVar2 <= param_3) {
      uVar2 = param_3;
    }
    if ((int)lVar3 == 0) {
      uVar1 = uVar2;
    }
    dVar4 = *(double *)(param_1 + 0xa8);
    dVar6 = *(double *)(param_1 + 0xb0);
    dVar7 = (double)uVar1;
    dVar5 = dVar7;
    if (dVar4 == dVar7 || dVar7 > dVar4) {
      dVar5 = dVar4;
    }
    if (dVar7 <= dVar4) {
      dVar5 = dVar7;
    }
    func_0x000107c3b3ec(param_1);
    func_0x000107c61180();
    func_0x000107c5d674(dVar5,dVar5 / (dVar4 / dVar6));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 100883d9c; end: 100883dab; -[SCCameraViewfinderRenderAgentImpl _isViewfinderInPortraitOrientation] */

bool FUN_100883d9c(long param_1)

{
  return *(double *)(param_1 + 0xa8) < *(double *)(param_1 + 0xb0);
}



/* Entry: 100883dac; end: 100883e17; -[SCCameraViewfinderMetalRenderer updateTextureSizeIfNecessary:] */

void FUN_100883dac(double param_1,double param_2,long param_3)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)(ulong)(uint)(float)param_2;
  dVar3 = (double)(long)param_2;
  func_0x000107c422d8(*(undefined8 *)(param_3 + 0x88));
  bVar1 = false;
  if ((dVar2 == (double)(long)param_1) && (bVar1 = false, !NAN(param_2) && !NAN(dVar3))) {
    bVar1 = param_2 == dVar3;
  }
  if (!bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010c191810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              ((double)(long)param_1,dVar3,*(undefined8 *)(param_3 + 0x88),
               PTR_s_setDrawableSize__112642020);
    return;
  }
  return;
}



/* Entry: 100883e18; end: 10088464f; -[SCCameraViewfinderMetalRenderer render:completionHandler:] */

ulong FUN_100883e18(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5,
                   long param_6)

{
  float fVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  long lStack_170;
  long lStack_140;
  float fStack_e0;
  float fStack_dc;
  undefined8 uStack_d8;
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  undefined8 uStack_b8;
  float fStack_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uVar4;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  lVar8 = param_3;
  func_0x000107c3bb10();
  if ((int)lVar8 == 0) goto LAB_1008845f0;
  uVar4 = param_5;
  func_0x000107c4f17c();
  iVar3 = (int)uVar4;
  func_0x000107c60a2c();
  if (iVar3 != 0) {
    uVar4 = param_5;
    func_0x000107c515dc();
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126b6ca8;
    func_0x000107c5b0fc(PTR_PTR_1126b6ca8);
    func_0x000107c61180();
    uVar6 = uVar4;
    func_0x000107c49d0c();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar4);
    if ((int)uVar6 == 0) {
      puVar5 = PTR_PTR_1126ae4e8;
      func_0x000107c5a9bc();
      func_0x000107c61180();
      func_0x000107c3e750();
      func_0x000107c61170(puVar5);
      func_0x000107c6110c();
      uVar7 = *(undefined8 *)(param_3 + 8);
      func_0x000107c3fe10();
      func_0x000107c61180();
      lVar8 = *(long *)(param_3 + 0x88);
      func_0x000107c4d674();
      func_0x000107c61180();
      if (lVar8 == 0) {
        uVar4 = *(long *)(param_3 + 0x28) + 1;
        *(ulong *)(param_3 + 0x28) = uVar4;
        if (1 < uVar4) {
          func_0x000107c517dc(*(undefined8 *)(param_3 + 0x88));
        }
LAB_100884278:
        if (param_6 != 0) {
          (**(code **)(param_6 + 0x10))(param_6,0);
        }
      }
      else {
        uVar4 = param_5;
        func_0x000107c4f17c();
        func_0x000107c60a1c();
        uVar6 = uVar4;
        func_0x000107c60ac4();
        uVar9 = uVar4;
        func_0x000107c60ac8();
        uVar10 = uVar4;
        func_0x000107c60ab8();
        uVar19 = *(undefined8 *)(param_3 + 0x20);
        uVar17 = uVar4;
        func_0x000107c60acc(uVar4,0);
        uVar11 = uVar4;
        func_0x000107c60abc(uVar4,0);
        if (uVar6 == 2) {
          uVar21 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
          uVar12 = uVar21;
          func_0x000107c60a98(uVar21,uVar19,uVar4,0,10,uVar17,uVar11,0,&fStack_e0);
          lStack_140 = CONCAT44(fStack_dc,fStack_e0);
          uVar19 = *(undefined8 *)(param_3 + 0x20);
          uVar17 = uVar4;
          func_0x000107c60acc(uVar4,1);
          uVar11 = uVar4;
          func_0x000107c60abc(uVar4,1);
          func_0x000107c60a98(uVar21,uVar19,uVar4,0,0x1e,uVar17,uVar11,1,&fStack_e0);
          if (((((int)uVar12 != 0) || (lStack_140 == 0)) || ((int)uVar21 != 0)) ||
             (lStack_170 = CONCAT44(fStack_dc,fStack_e0), lStack_170 == 0)) goto LAB_100884278;
          lVar20 = 0;
        }
        else {
          uVar12 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
          func_0x000107c60a98(uVar12,uVar19,uVar4,0,0x50,uVar17,uVar11,0,&fStack_e0);
          if (((int)uVar12 != 0) || (lVar20 = CONCAT44(fStack_dc,fStack_e0), lVar20 == 0))
          goto LAB_100884278;
          lStack_140 = 0;
          lStack_170 = 0;
        }
        *(undefined8 *)(param_3 + 0x28) = 0;
        puVar13 = PTR__OBJC_CLASS___MTLRenderPassDescriptor_1126d4230;
        func_0x000107c61160();
        lVar14 = lVar8;
        func_0x000107c5c8b4(lVar8);
        func_0x000107c61180();
        puVar15 = puVar13;
        func_0x000107c3fdbc(puVar13);
        func_0x000107c61180();
        puVar16 = puVar15;
        func_0x000107c4d9a4();
        func_0x000107c61180();
        func_0x000107c59cac();
        func_0x000107c61170(puVar16);
        func_0x000107c61170(puVar15);
        func_0x000107c61170(lVar14);
        uVar4 = param_5;
        func_0x000107c43488();
        if (uVar4 == 1) {
          puVar15 = puVar13;
          func_0x000107c3fdbc(puVar13);
          func_0x000107c61180();
          puVar16 = puVar15;
          func_0x000107c4d9a4();
          func_0x000107c61180();
          param_1 = 0.0;
          param_2 = 0.0;
          func_0x000107c53428(0,0,0,0x3ff0000000000000);
          func_0x000107c61170(puVar16);
          func_0x000107c61170(puVar15);
          puVar15 = puVar13;
          func_0x000107c3fdbc(puVar13);
          func_0x000107c61180();
          puVar16 = puVar15;
          func_0x000107c4d9a4();
          func_0x000107c61180();
          func_0x000107c55fc8();
          func_0x000107c61170(puVar16);
          func_0x000107c61170(puVar15);
        }
        uVar19 = uVar7;
        func_0x000107c500a8(uVar7);
        func_0x000107c61180();
        if (uVar6 == 2) {
          func_0x000107c57d08(uVar19);
          func_0x000107c60a9c(lStack_140);
          func_0x000107c61180();
          func_0x000107c54b7c(uVar19);
          func_0x000107c61170(lStack_140);
          lVar20 = lStack_170;
        }
        else {
          func_0x000107c57d08(uVar19);
        }
        func_0x000107c60a9c(lVar20);
        func_0x000107c61180();
        func_0x000107c54b7c(uVar19);
        func_0x000107c61170(lVar20);
        lVar20 = param_3;
        func_0x000107c3cd64();
        if ((uint)lVar20 == 0) {
          uVar4 = 3;
          if (*(long *)(param_3 + 0x58) != 0) {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = param_5;
          func_0x000107c4e080();
        }
        if (((*(char *)(param_3 + 0x60) != '\x01') ||
            ((uint)*(byte *)(param_3 + 0x61) != (uint)lVar20)) ||
           ((uVar17 = *(ulong *)(param_3 + 0x68), uVar6 = param_5, func_0x000107c4e080(),
            uVar17 != uVar6 ||
            ((*(long *)(param_3 + 0x70) != *(long *)(param_3 + 0x58) ||
             (*(ulong *)(param_3 + 0x78) != uVar4)))))) {
          *(undefined1 *)(param_3 + 0x60) = 1;
          *(char *)(param_3 + 0x61) = (char)lVar20;
          uVar6 = param_5;
          func_0x000107c4e080();
          *(ulong *)(param_3 + 0x68) = uVar6;
          *(undefined8 *)(param_3 + 0x70) = *(undefined8 *)(param_3 + 0x58);
          *(ulong *)(param_3 + 0x78) = uVar4;
        }
        puVar18 = (undefined8 *)&UNK_10de1e768;
        uVar6 = uVar9;
        if (uVar4 < 7) {
          puVar18 = (undefined8 *)&UNK_10de1e788;
          if ((1L << (uVar4 & 0x3f) & 0x48U) == 0) {
            puVar18 = (undefined8 *)&UNK_10de1e768;
          }
          uVar17 = uVar9;
          uVar11 = uVar10;
          puVar2 = (undefined8 *)&UNK_10de1e7a8;
          if ((1L << (uVar4 & 0x3f) & 0x22U) == 0) {
            uVar17 = uVar10;
            uVar11 = uVar9;
            puVar2 = puVar18;
          }
          puVar18 = (undefined8 *)&UNK_10de1e7c8;
          uVar6 = uVar10;
          uVar10 = uVar9;
          if ((1L << (uVar4 & 0x3f) & 0x11U) == 0) {
            puVar18 = puVar2;
            uVar6 = uVar11;
            uVar10 = uVar17;
          }
        }
        uVar4 = param_5;
        func_0x000107c43488();
        dVar25 = (double)uVar6;
        func_0x000107c422d8(*(undefined8 *)(param_3 + 0x88));
        dVar26 = param_1 * dVar25;
        func_0x000107c422d8(*(undefined8 *)(param_3 + 0x88));
        dVar27 = (double)uVar10;
        dVar28 = param_2 * dVar27;
        func_0x000107c422d8(*(undefined8 *)(param_3 + 0x88));
        dVar23 = param_1;
        dVar24 = param_2;
        func_0x000107c422d8(*(undefined8 *)(param_3 + 0x88));
        fStack_bc = (float)(param_1 / ((dVar24 / dVar25) * dVar27));
        fStack_d0 = 1.0;
        if (dVar28 < dVar26) {
          fStack_bc = 1.0;
          fStack_d0 = (float)(param_2 / ((dVar23 / dVar27) * dVar25));
        }
        fVar22 = (float)(((param_2 / dVar25) * dVar27) / dVar23);
        fVar1 = 1.0;
        if (dVar28 < dVar26) {
          fVar22 = 1.0;
          fVar1 = (float)(((param_1 / dVar27) * dVar25) / dVar24);
        }
        if (uVar4 == 0) {
          fStack_d0 = fVar22;
          fStack_bc = fVar1;
        }
        fStack_e0 = -fStack_d0;
        fStack_dc = -fStack_bc;
        uStack_d8 = *puVar18;
        uStack_c8 = puVar18[1];
        uStack_b8 = puVar18[2];
        uStack_a8 = puVar18[3];
        fStack_cc = fStack_dc;
        fStack_c0 = fStack_e0;
        fStack_b0 = fStack_d0;
        fStack_ac = fStack_bc;
        func_0x000107c5a4e4(uVar19);
        func_0x000107c422c8(uVar19);
        func_0x000107c42814(uVar19);
        if (*(char *)(param_3 + 0x30) == '\x01') {
          lVar20 = lVar8;
          func_0x000107c5c8b4();
          func_0x000107c61180();
          lVar14 = lVar20;
          func_0x000107c5d824();
          if ((~(uint)lVar14 & 3) == 0) {
            func_0x000107c42748(*(undefined8 *)(param_3 + 0x38));
          }
          func_0x000107c61170(lVar20);
        }
        func_0x000107c4eee8(uVar7);
        func_0x000107c61174(param_6);
        func_0x000107c3d628(uVar7);
        func_0x000107c3fe58(uVar7);
        func_0x000107c61170(param_6);
        func_0x000107c61170(uVar19);
        func_0x000107c61170(puVar13);
      }
      func_0x000107c61170(lVar8);
      func_0x000107c61170(uVar7);
      func_0x000107c61108(puVar5);
      goto LAB_1008845f0;
    }
  }
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6,0);
  }
LAB_1008845f0:
  func_0x000107c61170(param_6);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return param_5;
  }
  func_0x000107c60e78();
  if (*(char *)(param_5 + 0x48) == '\x01') {
    return (ulong)(*(long *)(param_5 + 0x88) != 0);
  }
  return 0;
}



/* Entry: 100884650; end: 100884673; -[SCCameraViewfinderMetalRenderer _isFrameRenderingEnabled] */

bool FUN_100884650(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    return *(long *)(param_1 + 0x88) != 0;
  }
  return false;
}



/* Entry: 100884674; end: 1008846f7; -[SCViewfinderObservationPipelineImpl observeSampleBuffer:] */

void FUN_100884674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  puStack_40 = &UNK_10621a034;
  puStack_38 = &UNK_110917538;
  uStack_30 = param_3;
  uStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c437d8(param_1,param_2,&puStack_50);
  func_0x000107c61170(uStack_30);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008846f8; end: 1008847b3;  */

void FUN_1008846f8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4c5dc(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008847b4; end: 1008847b7;  */

void FUN_1008847b4(void)

{
  return;
}



/* Entry: 1008847b8; end: 100885417;  */

/* WARNING: Possible PIC construction at 0x000100884a58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100884a5c) */
/* WARNING: Removing unreachable block (ram,0x000100884a8c) */
/* WARNING: Removing unreachable block (ram,0x000100884a90) */
/* WARNING: Removing unreachable block (ram,0x000100884a98) */

undefined8 *** FUN_1008847b8(long param_1,ulong param_2,long param_3)

{
  undefined8 **ppuVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined8 extraout_x8;
  undefined8 ***extraout_x8_00;
  undefined8 ***pppuVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined1 uStack_270;
  undefined8 **ppuStack_268;
  ulong uStack_260;
  undefined8 uStack_258;
  undefined1 auStack_108 [176];
  undefined8 uStack_58;
  
  lVar12 = param_1;
  func_0x000100783c30();
  *(undefined1 *)(lVar12 + 0x238) = 1;
  uStack_58 = extraout_x8;
  if (*(long *)(lVar12 + 0x228) == 0) {
    func_0x000107c2e738(&ppuStack_268);
    ppuVar1 = ppuStack_268;
    ppuStack_268 = (undefined8 ***)0x0;
    FUN_10089ba88(param_1 + 0x230,ppuVar1);
    func_0x00010089baa0(&ppuStack_268);
    *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_1 + 0x230);
  }
  uVar4 = param_2;
  func_0x0001008287f0();
  uVar2 = (int)uVar4 == -0x15e;
  if ((bool)uVar2) {
    pppuVar5 = *(undefined8 ****)(param_1 + 0x140);
    uVar8 = 0xfffffea2;
LAB_100884954:
    func_0x000107c2e8bc(pppuVar5,uVar8);
    FUN_100784268(uStack_58);
    if ((bool)uVar2) {
      return pppuVar5;
    }
    func_0x000107c60e78();
    pppuVar11 = extraout_x8_00;
  }
  else {
    if (param_3 != 0) {
      lVar12 = *(long *)(param_1 + 0x220);
      lVar13 = *(long *)(param_1 + 0x228);
      uStack_288 = 0xaaaaaaaaaaaaaaaa;
      func_0x000100827ea4(&uStack_288,param_2,&UNK_10f76dcc3,7);
      func_0x000107c37298(uStack_288);
      func_0x000107c3729c(*(undefined8 *)(param_2 + 0x10));
      if ((param_2 & 1) != 0) {
LAB_1008848a0:
        ppuStack_268 = (undefined8 ***)0x0;
        uStack_260 = 0;
        uStack_258 = 0;
        puStack_280 = &UNK_10e589817;
        uStack_278 = 5;
        uVar4 = lVar12 + 0x160;
        func_0x000100697be4(uVar4,&puStack_280,&ppuStack_268);
        if ((uVar4 & 1) == 0) {
          uVar8 = 0xd;
        }
        else {
          puStack_280 = (undefined *)0xaaaaaaaaaaaaaaaa;
          lVar6 = param_3;
          func_0x000100827ea4(&puStack_280,param_3,"range",5);
          if (puStack_280 == (undefined *)(param_3 + 0x20)) {
            uVar8 = 0xe;
            uVar2 = 1;
          }
          else {
            uVar2 = uStack_258._7_1_ == 0;
            uVar4 = uStack_260;
            pppuVar5 = (undefined8 ***)ppuStack_268;
            if (-1 < uStack_258) {
              uVar4 = (ulong)uStack_258._7_1_;
              pppuVar5 = &ppuStack_268;
            }
            func_0x000107c37298();
            func_0x000107c2e748(pppuVar5,uVar4,*(undefined8 *)(lVar6 + 0x10),
                                *(undefined8 *)(lVar6 + 0x18));
            if (((ulong)pppuVar5 & 1) == 0) {
              func_0x000100884ad8();
              goto LAB_100884984;
            }
            uVar8 = 0xf;
          }
        }
        func_0x000107c2e79c(uVar8);
        func_0x000100884ad8();
LAB_10088494c:
        pppuVar5 = *(undefined8 ****)(param_1 + 0x140);
        uVar8 = 0xfffffe86;
        goto LAB_100884954;
      }
      func_0x000107c37298(uStack_288);
      func_0x000107c3729c(*(undefined8 *)(param_2 + 0x10));
      if ((int)param_2 != 0) goto LAB_1008848a0;
LAB_100884984:
      func_0x000107c610bc(&ppuStack_268,0xaa,0x210);
      func_0x0001001a76c0(&ppuStack_268);
      func_0x000107c2e75c(param_3,auStack_108);
      puStack_280 = (undefined *)0xaaaaaaaaaaaaaaaa;
      uStack_278 = 0xaaaaaaaaaaaaaaaa;
      uStack_270 = 0;
      ppuVar7 = &puStack_280;
      func_0x000100884afc(ppuVar7,&ppuStack_268,*(undefined8 *)(lVar13 + 0x1c8));
      if ((int)ppuVar7 == 0) {
        func_0x000107c2e79c(0x11);
        func_0x0001001ab274(&ppuStack_268);
      }
      else {
        ppuVar7 = &puStack_280;
        func_0x000107c2dfac(ppuVar7,lVar12,*(undefined8 *)(lVar13 + 0x1c8));
        uVar2 = (int)ppuVar7 == 0;
        uVar10 = 0x12;
        if ((bool)uVar2) {
          uVar10 = 0x10;
        }
        func_0x000107c2e79c(uVar10);
        func_0x0001001ab274(&ppuStack_268);
        if (((ulong)ppuVar7 & 1) == 0) goto LAB_10088494c;
      }
    }
    *(undefined8 *)(*(long *)(param_1 + 0x228) + 0x88) =
         *(undefined8 *)(*(long *)(param_1 + 0x140) + 0x1d8);
    *(undefined1 *)(*(long *)(param_1 + 0x228) + 10) = *(undefined1 *)(param_1 + 0x308);
    *(undefined8 *)(*(long *)(param_1 + 0x228) + 0x80) =
         *(undefined8 *)(*(long *)(param_1 + 0x140) + 0x158);
    *(undefined4 *)(*(long *)(param_1 + 0x228) + 0x78) = 4;
    pppuVar5 = (undefined8 ***)(ulong)*(uint *)(*(long *)(param_1 + 0x228) + 0x78);
    pppuVar11 = &ppuStack_268;
  }
  if ((uint)pppuVar5 < 0x2a) {
    puVar9 = (&PTR_DAT_110cd9d30)[(ulong)pppuVar5 & 0xffffffff];
  }
  else {
    puVar9 = &DAT_10f750dc7;
  }
  puVar3 = puVar9;
  func_0x000107c613d0(puVar9);
  func_0x000107c60c50(pppuVar11,puVar9,puVar3);
  return pppuVar11;
}



/* Entry: 100885418; end: 1008854c7;  */

undefined1  [16] FUN_100885418(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_1001246e8(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x38;
    func_0x000107c60e20();
    uStack_50 = 1;
    uVar4 = *param_3;
    *(undefined8 *)(lVar3 + 0x28) = param_3[1];
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    *(undefined8 *)(lVar3 + 0x30) = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    plStack_58 = param_1 + 1;
    FUN_100124874(param_1,uStack_48,plVar2,lVar3);
    uStack_60 = 0;
    FUN_1001248bc(&uStack_60);
  }
  auVar5[8] = bVar1;
  auVar5._0_8_ = lVar3;
  auVar5._9_7_ = 0;
  return auVar5;
}



/* Entry: 1008854c8; end: 100885507;  */

void FUN_1008854c8(undefined8 param_1,undefined8 param_2)

{
  FUN_100885418(param_1,param_2,param_2);
  return;
}



/* Entry: 100885508; end: 1008855ab;  */

long FUN_100885508(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar2 = param_3 + 0x20;
    func_0x000100125af4(lVar2,param_2);
    lVar1 = 8;
    if (-1 < (char)lVar2) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 1008855ac; end: 1008855b7;  */

void FUN_1008855ac(void)

{
  return;
}



/* Entry: 1008855b8; end: 10088583b;  */

void FUN_1008855b8(void)

{
  return;
}



/* Entry: 10088583c; end: 100885853; -[_TtC41CameraFeatureLayoutServicesImplementation30DefaultCameraFeatureLayoutImpl verticalToolbarViewContainer] */

void FUN_10088583c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100885854; end: 100889b2f;  */

void FUN_100885854(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010088585c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))();
  return;
}



/* Entry: 100889b30; end: 100889b83;  */

void FUN_100889b30(long *param_1)

{
  func_0x000100684ed8();
                    /* WARNING: Could not recover jumptable at 0x000100889b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}



/* Entry: 100889b84; end: 100889b8b;  */

long FUN_100889b84(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  func_0x000107c6110c();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110ced2e0;
    func_0x000107c61174(lVar4);
    FUN_1005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x000107c61170(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  func_0x000107c61170(uVar3);
  func_0x0001005f2294(lVar1);
  func_0x000107c61108(lVar2);
  return lVar1;
}



/* Entry: 100889b8c; end: 100889c1f;  */

long FUN_100889b8c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110ced2e0;
    func_0x000107c61174(lVar3);
    FUN_1005f2030(param_1,&ppuStack_38,lVar3);
    func_0x000107c61170(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  func_0x000107c61170(uVar2);
  func_0x0001005f2294(param_1);
  func_0x000107c61108(lVar1);
  return param_1;
}



/* Entry: 100889c20; end: 100889c23;  */

void FUN_100889c20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100889c24; end: 100889d2b;  */

void FUN_100889c24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100889d2c; end: 100889d33;  */

undefined8 FUN_100889d2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100889d34; end: 10088a32b;  */

void FUN_100889d34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *******pppppppuVar2;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 **ppuVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long *plVar13;
  ulong *puVar14;
  code *extraout_x8;
  ulong uVar15;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  long lVar16;
  code *extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 unaff_x20;
  long lVar17;
  long lVar18;
  ulong uStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 ******ppppppuStack_170;
  undefined8 uStack_168;
  char cStack_159;
  long lStack_158;
  long lStack_150;
  long alStack_148 [4];
  undefined8 *puStack_128;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  undefined4 uStack_108;
  undefined1 uStack_104;
  undefined4 uStack_100;
  undefined1 uStack_f8;
  undefined1 auStack_78 [24];
  undefined1 uStack_60;
  
  FUN_100889d2c();
  lVar17 = param_1;
  FUN_10088a330();
  lVar16 = param_1 + 0x78;
  FUN_10088a33c(lVar16,&stack0xffffffffffffffa8);
  if (lVar16 != 0) {
    return;
  }
  FUN_10078a684(lVar17 + 0x18);
  uVar11 = param_3;
  FUN_10088a404(param_3);
  ppuVar9 = &puStack_128;
  FUN_10002b838(ppuVar9,uVar11);
  FUN_10088a41c();
  if ((ppuVar9 == (undefined8 **)0xffffffffffffffff) &&
     (FUN_10088a41c(), ppuVar9 == (undefined8 **)0xffffffffffffffff)) {
    FUN_10088a41c();
    func_0x000107c60ca0(&puStack_128);
    if (ppuVar9 != (undefined8 **)0xffffffffffffffff) goto LAB_100889dc8;
  }
  else {
    func_0x000107c60ca0(&puStack_128);
LAB_100889dc8:
    *(undefined4 *)(lVar17 + 0x298) = 1;
  }
  auStack_78[0] = 0;
  uStack_60 = 0;
  FUN_10028af84(alStack_148,auStack_78);
  FUN_10088a43c(&puStack_128,param_3,lVar17 + 0x18,lVar17 + 0x2a0,alStack_148);
  FUN_10088af18(lVar17 + 0x108,&puStack_128);
  FUN_10088b084(&puStack_128);
  plVar10 = alStack_148;
  FUN_1001148fc();
  lStack_158 = *(long *)(lVar17 + 0x18);
  if (*(char *)(lStack_158 + 0x30) == '\x01') {
    plVar10 = (long *)(lStack_158 + 0x28);
    FUN_10088b0cc();
    lVar18 = *plVar10;
    FUN_10054f908();
    lVar16 = *(long *)(lVar17 + 0x18);
    *(long *)(lVar16 + 0x48) = (long)plVar10 - lVar18;
    *(undefined1 *)(lVar16 + 0x50) = 1;
    lStack_158 = *(long *)(lVar17 + 0x18);
  }
  lStack_150 = *(long *)(lVar17 + 0x20);
  if (lStack_150 != 0) {
    do {
      FUN_10064ad10();
    } while (extraout_w10 != 0);
  }
  if (*(char *)(param_1 + 0x168) == '\x01') {
    plVar10 = *(long **)(param_1 + 0x160);
    func_0x0001006882d4();
    (*extraout_x8)();
    uVar15 = (ulong)plVar10 & 0xffffffff | 0x100000000;
  }
  else {
    uVar15 = 0;
  }
  puStack_128._0_5_ = (undefined5)uVar15;
  plVar3 = *(long **)(param_1 + 0x120);
  for (plVar13 = *(long **)(param_1 + 0x118); plVar13 != plVar3; plVar13 = plVar13 + 2) {
    plVar10 = (long *)*plVar13;
    func_0x0001006882d4();
    (*extraout_x8_00)();
  }
  if (*(char *)(lStack_158 + 0x140) == '\x01') {
    func_0x000107c2c938(&ppppppuStack_170,lStack_158 + 0x128);
    plVar10 = *(long **)(param_1 + 0xf0);
    pppppppuVar2 = (undefined8 *******)ppppppuStack_170;
    if (-1 < cStack_159) {
      pppppppuVar2 = &ppppppuStack_170;
    }
    func_0x00010088ec58(plVar10,pppppppuVar2);
    (*extraout_x8_01)();
    *(int *)(lVar17 + 0x250) = (int)plVar10;
    if ((int)plVar10 < 0) {
      puVar14 = &uStack_188;
      FUN_10002b838(puVar14,&UNK_10f742be9);
      func_0x000107c60e5c();
      uStack_108 = (undefined4)*puVar14;
      puStack_128 = (undefined8 *)CONCAT44(puStack_128._4_4_,1000);
      lStack_118 = lStack_180;
      uStack_120 = uStack_188;
      lStack_110 = lStack_178;
      uStack_188 = 0;
      lStack_180 = 0;
      lStack_178 = 0;
      uStack_104 = 0;
      uStack_100 = 0;
      func_0x000107c60ca0(&uStack_188);
      func_0x000107c35a88();
      func_0x000107c35a78();
      goto LAB_10088a1f4;
    }
    func_0x000100892a64();
  }
  func_0x000100787d68();
  plVar13 = plVar10;
  if (*(int *)(lStack_158 + 600) == 1) {
    uVar11 = 0x10;
    func_0x000107c60e20();
    FUN_1008365f4();
    *(undefined8 *)(lVar17 + 0x278) = uVar11;
    puVar12 = &UNK_10b2e0800;
    func_0x000107c2fe98(&UNK_10b2e0800);
    func_0x000107c2fe94();
    lVar16 = **(long **)(lVar17 + 0x278);
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1008946fc();
      (*extraout_x8_02)();
    }
    func_0x000107c2fe88(plVar10,lVar16,*(undefined8 *)(param_1 + 0xf8),puVar12);
  }
  else {
    func_0x00010088d078(plVar10,*(undefined8 *)(param_1 + 0xf8));
  }
  func_0x000107c60d9c();
  if ((*(byte *)(lVar17 + 0x288) & 1) == 0) {
    *(undefined1 *)(lVar17 + 0x288) = 1;
  }
  *(long **)(lVar17 + 0x280) = plVar13;
  func_0x00010088d104(unaff_x20,plVar10);
  if ((bRam00000001137f4dc8 & 1) == 0) {
    iVar8 = 0x137f4dc8;
    func_0x000107c60e48();
    if (iVar8 != 0) {
      cVar6 = '\0';
      FUN_1005ec950();
      cRam00000001137f4db9 = cVar6;
      func_0x000107c60e4c(0x1137f4dc8);
    }
  }
  uVar7 = false;
  if ((((cRam00000001137f4db9 == '\x01') && (uVar7 = false, *(int *)(lStack_158 + 600) == 1)) &&
      (uVar7 = false, *(char *)(lVar17 + 0x1b8) == '\x01')) &&
     (uVar4 = *(int *)(lVar17 + 0x138) - 300, uVar7 = uVar4 == 0xffffff9b, uVar4 < 0xffffff9c)) {
    lVar18 = *(long *)(param_1 + 0x108);
    for (lVar16 = *(long *)(param_1 + 0x100); uVar7 = lVar16 == lVar18, !(bool)uVar7;
        lVar16 = lVar16 + 8) {
      uStack_168 = *(undefined8 *)(lVar17 + 0x20);
      ppppppuStack_170 = *(undefined8 *******)(lVar17 + 0x18);
      if (*(long *)(lVar17 + 0x20) != 0) {
        do {
          FUN_10064ad10();
        } while (extraout_w10_00 != 0);
      }
      puStack_128 = (undefined8 *)((ulong)puStack_128 & 0xffffffffffffff00);
      uStack_f8 = 0;
      func_0x0001006882d4();
      (*extraout_x8_03)();
      FUN_10089a920(&puStack_128);
      FUN_100899824(&ppppppuStack_170);
    }
  }
  func_0x00010088ec4c(lStack_158);
  (*extraout_x9)(&puStack_128);
  func_0x000100686b1c(lStack_158);
  lVar16 = 0xc0;
  if ((bool)uVar7) {
    lVar16 = extraout_x9_00;
  }
  func_0x00010088ec58(puStack_128,*(undefined8 *)(extraout_x8_04 + lVar16));
  (*extraout_x8_05)();
  func_0x00010067c8a8(&puStack_128);
  func_0x000100686b1c(lStack_158);
  lVar16 = 0xc0;
  if ((bool)uVar7) {
    lVar16 = extraout_x9_01;
  }
  puVar1 = (undefined8 *)(extraout_x8_06 + lVar16);
  uVar15 = puVar1[2];
  puVar5 = (undefined8 *)puVar1[1];
  if (-1 < (char)*(byte *)((long)puVar1 + 0x1f)) {
    uVar15 = (ulong)*(byte *)((long)puVar1 + 0x1f);
    puVar5 = puVar1 + 1;
  }
  if (*(char *)(lVar17 + 0x1b8) == '\x01') {
    lVar16 = *(long *)(lVar17 + 0x158);
    lVar17 = (*(long *)(lVar17 + 0x160) - lVar16) / 0x30;
  }
  else {
    lVar16 = 0;
    lVar17 = 0;
  }
  plVar10 = *(long **)(param_1 + 400);
  func_0x000107c60de8(&ppppppuStack_170,*puVar1);
  FUN_100686d00(lStack_158);
  func_0x000100686b1c(lStack_158);
  puStack_128 = puVar5;
  uStack_120 = uVar15;
  lStack_118 = lVar16;
  lStack_110 = lVar17;
  (**(code **)(*plVar10 + 0x18))(plVar10,&ppppppuStack_170);
LAB_10088a1f4:
  func_0x000100892a64();
  func_0x00010067c914(&lStack_158);
  FUN_1001148fc(auStack_78);
  return;
}



/* Entry: 10088a32c; end: 10088a32f;  */

undefined8 FUN_10088a32c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10088a330; end: 10088a33b;  */

long FUN_10088a330(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long unaff_x29;
  
  plVar7 = *(long **)(param_1 + 0x30);
  if (plVar7 != (long *)0x0) {
    plVar2 = (long *)(param_1 + 0x40);
    if (*plVar2 == 0) {
      return 0;
    }
    func_0x000100687708();
    uVar4 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar4) == 0) {
      plVar5 = (long *)((ulong)plVar2 & uVar4);
    }
    else {
      plVar5 = plVar2;
      if (plVar7 <= plVar2) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar2 - uVar1 * (long)plVar7);
      }
    }
    plVar3 = *(long **)(*(long *)(param_1 + 0x28) + (long)plVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar6 = (long *)plVar3[1];
        if (plVar6 != plVar2) break;
        if (plVar3[2] == *(long *)(unaff_x29 + -0x48)) {
          return (long)plVar3;
        }
      }
      if (((ulong)plVar7 & uVar4) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar4);
      }
      else if (plVar7 <= plVar6) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)plVar7;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar7);
      }
    } while (plVar6 == plVar5);
  }
  return 0;
}



/* Entry: 10088a33c; end: 10088a403;  */

undefined8 FUN_10088a33c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    plVar2 = param_1 + 3;
    if (*plVar2 == 0) {
      return 0;
    }
    FUN_100687694(plVar2,*param_2);
    uVar3 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar3) == 0) {
      plVar4 = (long *)((ulong)plVar2 & uVar3);
    }
    else {
      plVar4 = plVar2;
      if (plVar7 <= plVar2) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar7;
        }
        plVar4 = (long *)((long)plVar2 - uVar1 * (long)plVar7);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar4 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) {
            return 0;
          }
          plVar6 = (long *)plVar5[1];
          if (plVar2 != plVar6) break;
          if (plVar5[2] == *param_2) {
            return 1;
          }
        }
        if (((ulong)plVar7 & uVar3) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar3);
        }
        else if (plVar7 <= plVar6) {
          uVar1 = 0;
          if (plVar7 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)plVar7;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar7);
        }
      } while (plVar6 == plVar4);
    }
  }
  return 0;
}



/* Entry: 10088a404; end: 10088a41b;  */

undefined8 * FUN_10088a404(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x87)) {
    return (undefined8 *)(param_1 + 0x70);
  }
  return *(undefined8 **)(param_1 + 0x70);
}



/* Entry: 10088a41c; end: 10088a427;  */

ulong FUN_10088a41c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar4;
  
  puVar2 = &stack0x00000068;
  FUN_100153eb4(puVar2,param_2,0);
  uVar4 = (ulong)(char)puVar2[0x17];
  puVar3 = unaff_x21;
  if ((long)uVar4 < 0) {
    puVar3 = (undefined8 *)*unaff_x21;
    uVar4 = unaff_x21[1];
  }
  func_0x000107c613d0();
  func_0x0001001539c4();
  if (uVar4 < param_4) {
    param_4 = 0xffffffffffffffff;
  }
  else if (unaff_x20 != 0) {
    lVar1 = (long)puVar3 + param_4;
    FUN_1003b0714(lVar1,(long)puVar3 + uVar4);
    param_4 = lVar1 - (long)puVar3;
    if (lVar1 == (long)puVar3 + uVar4) {
      param_4 = 0xffffffffffffffff;
    }
  }
  return param_4;
}



/* Entry: 10088a428; end: 10088a43b;  */

long FUN_10088a428(long param_1)

{
  return (*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) / 0x18;
}



/* Entry: 10088a43c; end: 10088ab6b;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10088a43c(undefined8 param_1,undefined **param_2,long *param_3,long param_4)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 ****ppppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  char ****ppppcVar15;
  byte ****ppppbVar16;
  byte ****ppppbVar17;
  ulong uVar18;
  undefined **ppuVar19;
  undefined8 *puVar20;
  undefined8 ****ppppuVar21;
  byte ****ppppbVar22;
  byte bVar23;
  char cVar24;
  undefined1 *puVar25;
  long lVar26;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  byte ***pppbStack_138;
  long lStack_130;
  char cStack_121;
  undefined8 ***pppuStack_120;
  long lStack_118;
  byte bStack_109;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  ulong *puStack_c0;
  byte ***pppbStack_b8;
  byte ***pppbStack_b0;
  char ***pppcStack_a8;
  long lStack_a0;
  char cStack_91;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  
  uStack_f0 = 0;
  puStack_e8 = (undefined8 *)0x0;
  puStack_e0 = (undefined8 *)0x0;
  ppuVar19 = param_2;
  FUN_10088a428();
  puVar20 = (undefined8 *)0x0;
  iVar6 = (int)ppuVar19;
  while (iVar6 = iVar6 + -1, -1 < iVar6) {
    ppuVar19 = param_2;
    FUN_10088ab6c(param_2,iVar6);
    ppuStack_90 = ppuVar19;
    if (puVar20 < puStack_e0) {
      FUN_10002b838(puVar20,ppuVar19);
      puVar20 = puVar20 + 3;
      puStack_e8 = puVar20;
    }
    else {
      puVar20 = &uStack_f0;
      FUN_10088ab90(puVar20,&ppuStack_90);
      puStack_e8 = puVar20;
    }
  }
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  ppuVar19 = param_2;
  FUN_10088ac40();
  do {
    uVar2 = (int)ppuVar19 - 1;
    ppuVar19 = (undefined **)(ulong)uVar2;
    if ((int)uVar2 < 0) {
      ppuVar19 = param_2;
      FUN_10088ae08(param_2);
      FUN_10002b838(auStack_168,ppuVar19);
      FUN_10015bc98(auStack_180,&uStack_f0);
      ppuVar19 = param_2;
      func_0x00010088ae18(param_2);
      ppuVar13 = param_2;
      func_0x00010088ae20(param_2);
      FUN_10002b838(auStack_198,ppuVar13);
      FUN_1005acf78(auStack_1b0,&uStack_108);
      ppuVar13 = param_2;
      func_0x00010088ae38(param_2);
      ppuVar14 = param_2;
      FUN_10088a404(param_2);
      FUN_10002b838(auStack_1c8,ppuVar14);
      ppuVar14 = param_2;
      func_0x00010088ae40(param_2);
      FUN_10002b838(auStack_1e0,ppuVar14);
      func_0x00010088ae58();
      FUN_10088ae60(param_1,auStack_168,auStack_180,ppuVar19,auStack_198,auStack_1b0,ppuVar13,
                    auStack_1c8,auStack_1e0,param_2,0);
      func_0x000107c60ca0(auStack_1e0);
      func_0x000107c60ca0(auStack_1c8);
      func_0x0001005ad2a8(auStack_1b0);
      func_0x000107c60ca0(auStack_198);
      FUN_1000e30f4(auStack_180);
      func_0x000107c60ca0(auStack_168);
      func_0x0001005ad2a8(&uStack_108);
      FUN_1000e30f4(&uStack_f0);
      return;
    }
    ppuVar13 = param_2;
    func_0x00010088ac58(param_2,ppuVar19);
    ppuVar14 = ppuVar13;
    func_0x00010088ac6c();
    func_0x00010088ac7c(ppuVar13);
    FUN_10002b838(&pppuStack_120,ppuVar14);
    FUN_10002b838(&pppbStack_138,ppuVar13);
    ppppuVar21 = (undefined8 ****)pppuStack_120;
    ppppuVar7 = (undefined8 ****)((long)pppuStack_120 + lStack_118);
    if (-1 < (char)bStack_109) {
      ppppuVar21 = &pppuStack_120;
      ppppuVar7 = (undefined8 ****)((long)&pppuStack_120 + (ulong)bStack_109);
    }
    for (; ppppuVar21 != ppppuVar7; ppppuVar21 = (undefined8 ****)((long)ppppuVar21 + 1)) {
      uVar5 = *(undefined1 *)ppppuVar21;
      func_0x000107c60e80();
      *(undefined1 *)ppppuVar21 = uVar5;
    }
    ppppuVar7 = &pppuStack_120;
    FUN_100152bb8(ppppuVar7,&UNK_10f73f8f7);
    if ((param_4 != 0) && ((int)ppppuVar7 != 0)) {
      func_0x000107c60ca4(param_4,&pppbStack_138);
    }
    ppppuVar7 = &pppuStack_120;
    FUN_100152bb8(ppppuVar7,&DAT_10f740706);
    if ((int)ppppuVar7 != 0) {
      uStack_d8 = 0;
      ppppbVar22 = (byte ****)pppbStack_138;
      if (-1 < (long)cStack_121) {
        ppppbVar22 = &pppbStack_138;
      }
      lVar26 = lStack_130;
      if (-1 < cStack_121) {
        lVar26 = (long)cStack_121;
      }
      if (lVar26 == 0) goto LAB_10088a8f0;
      bVar1 = *(byte *)ppppbVar22;
      if ((bVar1 == 0x2d) || (ppppbVar17 = ppppbVar22, bVar1 == 0x2b)) {
        ppppbVar17 = (byte ****)pppbStack_138;
        if (-1 < cStack_121) {
          ppppbVar17 = &pppbStack_138;
        }
        ppppbVar17 = (byte ****)((long)ppppbVar17 + 1);
      }
      auStack_d0[0] = 0;
      uStack_c8 = 1;
      puStack_c0 = &uStack_d8;
      pppbStack_b8 = (byte ***)ppppbVar17;
      ppppbVar16 = (byte ****)((long)ppppbVar22 + lVar26 + -1);
      uStack_d8 = 0;
      if ((ppppbVar16 < ppppbVar17) || (bVar23 = *(byte *)ppppbVar16, (byte)(bVar23 - 0x3a) < 0xf6))
      {
        puVar25 = (undefined1 *)0x0;
      }
      else {
        uStack_d8 = (ulong)(byte)(bVar23 - 0x30);
        ppppbVar22 = (byte ****)((long)ppppbVar22 + lVar26 + -2);
        pppuVar8 = &ppuStack_90;
        pppbStack_b0 = (byte ***)ppppbVar22;
        func_0x000107c60dac(pppuVar8);
        func_0x000107c60da4();
        pppuVar9 = &ppuStack_90;
        func_0x000107c60c04(pppuVar9,pppuVar8);
        if ((int)pppuVar9 == 0) {
          pppuVar8 = &ppuStack_90;
          func_0x000107c2c944();
          (*(code *)(*pppuVar8)[5])(&pppcStack_a8);
          if ((long)cStack_91 < 0) {
            ppppcVar15 = (char ****)pppcStack_a8;
            lVar26 = lStack_a0;
            if (lStack_a0 != 0) goto LAB_10088a6b8;
LAB_10088a778:
            puVar25 = auStack_d0;
            FUN_10088adb0();
          }
          else {
            if (cStack_91 == '\0') goto LAB_10088a778;
            ppppcVar15 = &pppcStack_a8;
            lVar26 = (long)cStack_91;
LAB_10088a6b8:
            if (*(char *)ppppcVar15 < '\x01') goto LAB_10088a778;
            (*(code *)(*pppuVar8)[4])();
            bVar23 = 0;
            cVar24 = (char)pppcStack_a8 + -1;
            while (puVar25 = (undefined1 *)(ulong)(ppppbVar22 < ppppbVar17),
                  ppppbVar22 >= ppppbVar17) {
              if (cVar24 == '\0') {
                if ((uint)*(byte *)ppppbVar22 != ((uint)pppuVar8 & 0xff)) goto LAB_10088a778;
                if (ppppbVar17 == ppppbVar22) break;
                if ((ulong)bVar23 < lVar26 - 1U) {
                  bVar23 = bVar23 + 1;
                }
                cVar24 = *(char *)((long)&pppcStack_a8 + (ulong)bVar23);
              }
              else {
                uVar10 = 0;
                FUN_10088ad20();
                if ((uVar10 & 1) == 0) break;
                cVar24 = cVar24 + -1;
                ppppbVar17 = (byte ****)pppbStack_b8;
                ppppbVar22 = (byte ****)pppbStack_b0;
              }
              ppppbVar22 = (byte ****)((long)ppppbVar22 + -1);
              pppbStack_b0 = (byte ***)ppppbVar22;
            }
          }
          func_0x000107c60ca0(&pppcStack_a8);
        }
        else {
          puVar25 = auStack_d0;
          FUN_10088adb0();
        }
        func_0x000107c60db0(&ppuStack_90);
      }
      if (bVar1 == 0x2d) {
        uStack_d8 = -uStack_d8;
        if (((ulong)puVar25 & 1) == 0) {
LAB_10088a8f0:
          func_0x000107c60df0(&ppuStack_90);
          ppuStack_90 = &PTR_DAT_110cd3e70;
          ppuStack_88 = &PTR_DAT_1108a6308;
          puStack_80 = PTR___ZTIy_110346ae8;
          func_0x000107c2c948();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10088aaa0);
          (*pcVar4)();
        }
      }
      else if ((int)puVar25 == 0) goto LAB_10088a8f0;
      *(ulong *)(*param_3 + 0x38) = uStack_d8;
    }
    uVar3 = uStack_100;
    uVar10 = uStack_108;
    func_0x000107c60c94(auStack_150,&pppuStack_120);
    while ((uVar18 = uVar3, uVar10 != uVar3 &&
           (uVar11 = uVar10, FUN_1000e107c(uVar10,auStack_150), uVar18 = uVar10, (uVar11 & 1) == 0))
          ) {
      uVar10 = uVar10 + 0x30;
    }
    func_0x000107c60ca0(auStack_150);
    uVar10 = uStack_100;
    if (uVar18 == uStack_100) {
      if (uVar18 < uStack_f8) {
        FUN_10088ac94(uStack_100,&pppuStack_120,&pppbStack_138);
        uStack_100 = uVar10 + 0x30;
      }
      else {
        puVar12 = &uStack_108;
        FUN_1005ac980(puVar12,(long)(uVar18 - uStack_108) / 0x30 + 1);
        func_0x0001005aca14(&ppuStack_90,puVar12,(long)(uStack_100 - uStack_108) / 0x30,&uStack_f8);
        FUN_10088ac94(puStack_80,&pppuStack_120,&pppbStack_138);
        puStack_80 = (undefined *)((long)puStack_80 + 0x30);
        FUN_1005acb9c(&uStack_108,&ppuStack_90);
        uVar10 = uStack_100;
        FUN_1005acc98(&ppuStack_90);
        uStack_100 = uVar10;
      }
    }
    else {
      func_0x000107c60c6c(uVar18 + 0x18,0,&DAT_10f68e8ee);
      func_0x0001056cad7c(uVar18 + 0x18,0,&pppbStack_138);
    }
    func_0x000107c60ca0(&pppbStack_138);
    func_0x000107c60ca0(&pppuStack_120);
  } while( true );
}



/* Entry: 10088ab6c; end: 10088ab8f;  */

undefined8 * FUN_10088ab6c(long param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)param_2 * 0x18);
  if (-1 < *(char *)((long)puVar1 + 0x17)) {
    return puVar1;
  }
  return (undefined8 *)*puVar1;
}



/* Entry: 10088ab90; end: 10088ac37;  */

long FUN_10088ab90(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_1000480a4(param_1,(param_1[1] - *param_1) / 0x18 + 1);
  func_0x0001000481ec(auStack_58,plVar1,(param_1[1] - *param_1) / 0x18,param_1 + 2);
  FUN_10088ac38(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x18;
  FUN_10004824c(param_1,auStack_58);
  lVar2 = param_1[1];
  FUN_1000482e8(auStack_58);
  return lVar2;
}



/* Entry: 10088ac38; end: 10088ac3f;  */

void FUN_10088ac38(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x00010002b82c(param_1,uVar1);
  func_0x000107c613d0(uVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 10088ac40; end: 10088ac93;  */

long FUN_10088ac40(long param_1)

{
  return (*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50)) / 0x30;
}



/* Entry: 10088ac94; end: 10088ad1f;  */

undefined8 * FUN_10088ac94(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c60c94(&uStack_38);
  func_0x000107c60c94(&uStack_50,param_3);
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  param_1[2] = uStack_28;
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[4] = uStack_48;
  param_1[3] = uStack_50;
  param_1[5] = uStack_40;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x000107c60ca0(&uStack_50);
  func_0x000107c60ca0(&uStack_38);
  return param_1;
}



/* Entry: 10088ad20; end: 10088adaf;  */

undefined8 FUN_10088ad20(byte *param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  bVar1 = *param_1;
  uVar5 = *(ulong *)(param_1 + 8);
  *param_1 = bVar1 | 0x1999999999999999 < uVar5;
  uVar6 = uVar5 * 10;
  *(ulong *)(param_1 + 8) = uVar6;
  if (0xf5 < (byte)(**(char **)(param_1 + 0x20) - 0x3aU)) {
    uVar7 = (long)**(char **)(param_1 + 0x20) - 0x30;
    if ((int)uVar7 == 0) {
      puVar4 = *(ulong **)(param_1 + 0x10);
      uVar5 = *puVar4;
LAB_10088ada0:
      *puVar4 = uVar5 + uVar6 * uVar7;
      return 1;
    }
    if (((bVar1 & 1) == 0 && 0x1999999999999999 >= uVar5) &&
       (auVar2._8_8_ = 0, auVar2._0_8_ = uVar7, auVar3._8_8_ = 0, auVar3._0_8_ = uVar6,
       SUB168(auVar2 * auVar3,8) == 0)) {
      puVar4 = *(ulong **)(param_1 + 0x10);
      uVar5 = *puVar4;
      if (!CARRY8(uVar6 * uVar7,uVar5)) goto LAB_10088ada0;
    }
  }
  return 0;
}



/* Entry: 10088adb0; end: 10088ae07;  */

bool FUN_10088adb0(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  while ((uVar3 = *(ulong *)(param_1 + 0x18), uVar3 <= uVar2 &&
         (lVar1 = param_1, FUN_10088ad20(), (int)lVar1 != 0))) {
    uVar2 = *(long *)(param_1 + 0x20) - 1;
    *(ulong *)(param_1 + 0x20) = uVar2;
  }
  return uVar2 < uVar3;
}



/* Entry: 10088ae08; end: 10088ae5f;  */

undefined8 * FUN_10088ae08(undefined8 *param_1)

{
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return param_1;
  }
  return (undefined8 *)*param_1;
}



/* Entry: 10088ae60; end: 10088af17;  */

void FUN_10088ae60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined1 param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined4 *)(param_1 + 6) = param_4;
  uVar2 = param_5[1];
  uVar1 = *param_5;
  param_1[9] = param_5[2];
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar1 = *param_6;
  param_1[0xb] = param_6[1];
  param_1[10] = uVar1;
  param_1[0xc] = param_6[2];
  *param_6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  *(undefined1 *)(param_1 + 0xd) = param_7;
  uVar2 = param_8[1];
  uVar1 = *param_8;
  param_1[0x10] = param_8[2];
  param_1[0xf] = uVar2;
  param_1[0xe] = uVar1;
  param_8[1] = 0;
  param_8[2] = 0;
  *param_8 = 0;
  uVar2 = param_9[1];
  uVar1 = *param_9;
  param_1[0x13] = param_9[2];
  param_1[0x12] = uVar2;
  param_1[0x11] = uVar1;
  param_9[1] = 0;
  param_9[2] = 0;
  *param_9 = 0;
  param_1[0x14] = param_10;
  param_1[0x15] = param_11;
  return;
}



/* Entry: 10088af18; end: 10088afab;  */

long FUN_10088af18(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    FUN_100066230(param_1,param_2);
    func_0x00010014d224(param_1 + 0x18,param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    FUN_100066230(param_1 + 0x38,param_2 + 0x38);
    func_0x000107c2c810(param_1 + 0x50,param_2 + 0x50);
    *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
    FUN_100066230(param_1 + 0x70,param_2 + 0x70);
    FUN_100066230(param_1 + 0x88,param_2 + 0x88);
    uVar1 = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
  }
  else {
    FUN_10088b068(param_1,param_2);
  }
  return param_1;
}



/* Entry: 10088afac; end: 10088b067;  */

void FUN_10088afac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  uVar2 = param_2[8];
  uVar1 = param_2[7];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar1 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar1;
  param_1[0xc] = param_2[0xc];
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  uVar2 = param_2[0xf];
  uVar1 = param_2[0xe];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar2;
  param_1[0xe] = uVar1;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0xe] = 0;
  uVar2 = param_2[0x12];
  uVar1 = param_2[0x11];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar2;
  param_1[0x11] = uVar1;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x11] = 0;
  uVar1 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar1;
  return;
}



/* Entry: 10088b068; end: 10088b083;  */

void FUN_10088b068(long param_1)

{
  FUN_10088afac();
  *(undefined1 *)(param_1 + 0xb0) = 1;
  return;
}



/* Entry: 10088b084; end: 10088b0cb;  */

/* WARNING: Possible PIC construction at 0x00010088b098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010088b0b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010088b09c) */
/* WARNING: Removing unreachable block (ram,0x00010088b0b4) */

void FUN_10088b084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x88);
  return;
}



/* Entry: 10088b0cc; end: 10088b0e3;  */

long FUN_10088b0cc(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 in_ZR;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_58 [24];
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  lVar4 = *param_2;
  if ((*(byte *)(lVar4 + 0x2a8) & 1) == 0) {
    FUN_100686cf0();
    lVar1 = 0xc0;
    if ((bool)in_ZR) {
      lVar1 = extraout_x8;
    }
    lVar1 = lVar4 + lVar1;
    lVar3 = lVar1 + 8;
    FUN_1005d480c(lVar3,&UNK_10f773978,0);
    lVar2 = 0;
    if (lVar3 != -1) {
      lVar2 = lVar3 + 3;
    }
    lVar3 = lVar1 + 8;
    FUN_1005d480c(lVar3,&UNK_10f77397c,lVar2);
    lVar5 = lVar3 - lVar2;
    if (lVar3 == -1) {
      lVar5 = -1;
    }
    FUN_1000e1048(auStack_58,lVar1 + 8,lVar2,lVar5);
    func_0x000100602604(lVar4 + 0x290,auStack_58);
    func_0x000107c60ca0(auStack_58);
  }
  return lVar4 + 0x290;
}



/* Entry: 10088b0e4; end: 10088b0ef;  */

long FUN_10088b0e4(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 in_ZR;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_48 [24];
  
  lVar4 = *param_2;
  if ((*(byte *)(lVar4 + 0x2a8) & 1) == 0) {
    FUN_100686cf0();
    lVar1 = 0xc0;
    if ((bool)in_ZR) {
      lVar1 = extraout_x8;
    }
    lVar1 = lVar4 + lVar1;
    lVar3 = lVar1 + 8;
    FUN_1005d480c(lVar3,&UNK_10f773978,0);
    lVar2 = 0;
    if (lVar3 != -1) {
      lVar2 = lVar3 + 3;
    }
    lVar3 = lVar1 + 8;
    FUN_1005d480c(lVar3,&UNK_10f77397c,lVar2);
    lVar5 = lVar3 - lVar2;
    if (lVar3 == -1) {
      lVar5 = -1;
    }
    FUN_1000e1048(auStack_48,lVar1 + 8,lVar2,lVar5);
    func_0x000100602604(lVar4 + 0x290,auStack_48);
    func_0x000107c60ca0(auStack_48);
  }
  return lVar4 + 0x290;
}



/* Entry: 10088b0f0; end: 10088b20b;  */

void FUN_10088b0f0(undefined8 param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong *in_x6;
  long extraout_x8;
  long lVar5;
  long unaff_x19;
  long *plVar6;
  ulong uVar7;
  
  FUN_10088b0e4();
  lVar5 = 0xc0;
  if (*(char *)(*param_2 + 0x120) == '\0') {
    lVar5 = 0x60;
  }
  if ((*(char *)(unaff_x19 + 8) == '\x01') &&
     (plVar6 = *(long **)(unaff_x19 + 0x10), plVar6 != (long *)0x0)) {
    uVar1 = *(uint *)(*param_2 + lVar5 + 0x38);
    uVar7 = *in_x6;
    iVar3 = (int)plVar6 + 0x60;
    func_0x000107c60d90();
    if (iVar3 != 0) {
      plVar4 = plVar6;
      FUN_10088b218(uVar7 >> 0x20 | (ulong)uVar1 << 0x20,plVar6,param_1);
      bVar2 = plVar4[4] == plVar4[1] - *plVar4 >> 5;
      if (bVar2) {
        bVar2 = plVar4[1] == *plVar4;
        if (!bVar2) {
          FUN_10088be88();
          lVar5 = extraout_x8;
          if (bVar2) {
            lVar5 = *plVar4;
            plVar4[3] = lVar5;
          }
          plVar4[2] = lVar5;
        }
      }
      else {
        FUN_10088be88();
        if (bVar2) {
          plVar4[3] = *plVar4;
        }
        plVar4[4] = plVar4[4] + 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(plVar6 + 0xc);
      return;
    }
  }
  return;
}



/* Entry: 10088b20c; end: 10088b217;  */

void FUN_10088b20c(void)

{
  return;
}



/* Entry: 10088b218; end: 10088b293;  */

long FUN_10088b218(long param_1)

{
  long unaff_x20;
  undefined1 auStack_80 [80];
  
  FUN_10088b20c();
  FUN_10088b2a0();
  if (unaff_x20 + 8 == param_1) {
    FUN_10088b408(auStack_80,*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
    FUN_10088b5b8();
    FUN_10088bddc(auStack_80);
    param_1 = unaff_x20;
  }
  return param_1 + 0x28;
}



/* Entry: 10088b294; end: 10088b29f;  */

long FUN_10088b294(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = *(long **)(param_1 + 0x28);
  if ((plVar6 != (long *)0x0) && (plVar2 = (long *)(param_1 + 0x38), *plVar2 != 0)) {
    FUN_100102e7c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0x20) + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        FUN_1000e107c(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10088b2a0; end: 10088b2db;  */

long FUN_10088b2a0(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  FUN_10088b294();
  if (param_1 == 0) {
    lVar1 = unaff_x19 + 8;
  }
  else {
    FUN_1008933b0(unaff_x19 + 8,*(undefined8 *)(unaff_x19 + 0x10),unaff_x19 + 8,
                  *(undefined8 *)(param_1 + 0x28));
    lVar1 = *(long *)(unaff_x19 + 0x10);
  }
  return lVar1;
}



/* Entry: 10088b2dc; end: 10088b3af;  */

long FUN_10088b2dc(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    FUN_100102e7c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        FUN_1000e107c(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10088b3b0; end: 10088b3b7;  */

void FUN_10088b3b0(void)

{
  return;
}



/* Entry: 10088b3b8; end: 10088b407;  */

void FUN_10088b3b8(long param_1)

{
  long unaff_x19;
  long *unaff_x20;
  
  FUN_10088b20c();
  FUN_10088b458();
  *unaff_x20 = param_1;
  unaff_x20[1] = param_1 + unaff_x19 * 0x20;
  return;
}



/* Entry: 10088b408; end: 10088b457;  */

long FUN_10088b408(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  lVar1 = param_1;
  func_0x00010088b3dc(param_1,param_2,&uStack_21);
  func_0x00010088b4f4(lVar1 + 0x28,param_3,&uStack_22);
  return param_1;
}



/* Entry: 10088b458; end: 10088b4a7;  */

long FUN_10088b458(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  if (param_2 >> 0x3b != 0) {
    func_0x000107c35c10();
    func_0x000107c2a69c(auStack_30);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10088b4a0);
    (*pcVar1)();
  }
  if (param_2 != 0) {
    if (param_2 >> 0x3b == 0) {
      lVar2 = param_2 << 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___Znwm_110352280)(lVar2);
      return lVar2;
    }
    func_0x000104bd35f4();
    return param_1;
  }
  return 0;
}



/* Entry: 10088b4a8; end: 10088b4c3;  */

void FUN_10088b4a8(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  return;
}



/* Entry: 10088b4c4; end: 10088b4cb;  */

void FUN_10088b4c4(void)

{
  return;
}



/* Entry: 10088b4cc; end: 10088b51f;  */

void FUN_10088b4cc(long param_1)

{
  long unaff_x19;
  long *unaff_x20;
  
  FUN_10088b20c();
  FUN_10088b534();
  *unaff_x20 = param_1;
  unaff_x20[1] = param_1 + unaff_x19 * 0x28;
  return;
}


