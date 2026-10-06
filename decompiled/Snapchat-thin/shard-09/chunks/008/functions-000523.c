/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1071928f0; end: 107192a57; -[SCStickerPickerCategoryCell collectionView:layout:referenceSizeForHeaderInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1071928f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  _objc_retain(param_6);
  lVar6 = (long)_DAT_112764b64;
  uVar4 = *(ulong *)(param_4 + lVar6);
  puVar2 = PTR_PTR_1126d4f78;
  _objc_opt_class(PTR_PTR_1126d4f78);
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar5 = *(ulong *)(param_4 + lVar6);
  if ((uVar4 & 1) == 0) {
    puVar2 = PTR_PTR_1126d4ed0;
    _objc_opt_class(PTR_PTR_1126d4ed0);
    _objc_opt_isKindOfClass(uVar5,puVar2);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(param_4 + lVar6);
      func_0x00010c2713a0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107192990;
    }
LAB_10719299c:
    if ((param_8 != 0) || ((*(byte *)(param_4 + _DAT_112764ad0) & 1) == 0)) {
      uVar4 = *(ulong *)(param_4 + lVar6);
      func_0x00010c22fb00();
      if ((uVar4 & 1) != 0) goto LAB_1071929bc;
    }
LAB_107192a24:
    param_3 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar7 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    func_0x00010c271380();
    _objc_retainAutoreleasedReturnValue();
LAB_107192990:
    _objc_release();
    if (uVar5 == 0) goto LAB_10719299c;
LAB_1071929bc:
    if ((*(ulong *)(param_4 + _DAT_112764ad8) & 0xfffffffffffffffd) == 1) {
      iVar1 = (int)*(undefined8 *)(param_4 + lVar6);
      func_0x00010c230ee0();
      if (iVar1 != 0) {
        lVar3 = *(long *)(param_4 + lVar6);
        func_0x00010c255420();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar3;
        func_0x00010bf529e0();
        _objc_release(lVar3);
        if (lVar6 == 0) goto LAB_107192a24;
      }
    }
    func_0x00010bf20c00(param_6);
    uVar7 = 0x4036000000000000;
  }
  _objc_release(param_6);
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = param_3;
  return auVar8;
}



/* Entry: 107192a58; end: 107192dbb; -[SCStickerPickerCategoryCell collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_107192a58(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long in_x4;
  int iVar7;
  ulong uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  
  _objc_retain(in_x4);
  lVar9 = in_x4;
  func_0x00010c1554e0();
  if ((lVar9 == 0) && (*(char *)(param_5 + _DAT_112764ad0) == '\x01')) {
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_112764aec));
    puVar5 = PTR_PTR_1126d4f20;
    dVar11 = param_3;
  }
  else {
    dVar12 = *(double *)(param_5 + _DAT_112764b84);
    func_0x00010c1554e0(in_x4);
    func_0x00010bde9de0(param_5);
    uVar1 = *(undefined8 *)(param_5 + _DAT_112764adc);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd46e0();
    *(byte *)(param_5 + _DAT_112764ba0) = (byte)uVar2 ^ 1;
    _objc_release(uVar1);
    lVar9 = param_5;
    func_0x00010c074740();
    dVar11 = param_3;
    dVar14 = dVar12;
    if ((int)lVar9 != 0) {
      lVar9 = (long)_DAT_112764aec;
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar9));
      dVar11 = param_3;
      func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar9));
      func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar9));
      dVar12 = (param_3 - param_2) - param_4;
      uVar3 = *(ulong *)(param_5 + _DAT_112764b64);
      func_0x00010c255420();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf529e0();
      dVar13 = 4.0;
      if (8 < uVar4) {
        dVar13 = 4.45;
      }
      _objc_release(uVar3);
      dVar10 = dVar13 / -200.0;
      dVar14 = dVar10 + 0.055;
      func_0x00010bf20c00(param_5);
      _CGRectGetWidth();
      dVar10 = dVar10 * dVar14;
      dVar14 = (double)(long)dVar10;
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar9));
      _CGRectGetWidth();
      param_1 = (double)(long)((dVar10 - dVar14 * (dVar13 + 1.0)) / dVar13);
      dVar14 = dVar14 + param_1 * 2.0;
    }
    lVar9 = param_5;
    func_0x00010be41300();
    if ((int)lVar9 == 0) {
      lVar9 = (long)_DAT_112764b64;
      iVar7 = (int)*(undefined8 *)(param_5 + lVar9);
      func_0x00010c1554e0(in_x4);
      func_0x00010c230ee0();
      if (iVar7 == 0) goto LAB_107192d2c;
      func_0x00010bf20c00(*(undefined8 *)(param_5 + _DAT_112764aec));
      puVar5 = PTR_PTR_1126d4f78;
      uVar8 = *(ulong *)(param_5 + lVar9);
      _objc_retain(uVar8);
      _objc_opt_class(puVar5);
      uVar3 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar5);
      uVar4 = uVar8;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar8);
      uVar3 = uVar4;
      func_0x00010c085160();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)(param_5 + lVar9);
      func_0x00010c255420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      lVar9 = lVar6;
      func_0x00010bf529e0();
      if (lVar9 == 0) {
        uVar4 = uVar3;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar4;
        func_0x00010bf529e0();
        _objc_release(uVar4);
        _objc_release(lVar6);
        if (uVar8 != 0) goto LAB_107192d1c;
        dVar14 = 0.0;
        if ((*(ulong *)(param_5 + _DAT_112764ad8) & 0xfffffffffffffffd) != 1) {
          dVar14 = 108.0;
        }
      }
      else {
        _objc_release(lVar6);
LAB_107192d1c:
        dVar14 = 68.0;
      }
      _objc_release(uVar3);
      dVar12 = dVar11;
      goto LAB_107192d2c;
    }
    func_0x00010bf20c00(*(undefined8 *)(param_5 + _DAT_112764aec));
    puVar5 = *(undefined **)(param_5 + _DAT_112764b24);
  }
  func_0x00010bfe0640(puVar5);
  dVar12 = dVar11;
  dVar14 = param_1;
LAB_107192d2c:
  dVar13 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  dVar11 = *(double *)PTR__CGSizeZero_110347620;
  if ((ABS(dVar12) != 0.0 && dVar12 != INFINITY) && (ABS(dVar14) != 0.0 && dVar14 != INFINITY)) {
    dVar13 = dVar14;
    dVar11 = dVar12;
  }
  _objc_release(in_x4);
  auVar15._8_8_ = dVar13;
  auVar15._0_8_ = dVar11;
  return auVar15;
}



/* Entry: 107192dbc; end: 107192ddb; -[SCStickerPickerCategoryCell collectionView:layout:minimumInteritemSpacingForSectionAt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107192dbc(undefined8 param_1,long param_2)

{
  long in_x4;
  
  if ((in_x4 == 0) && ((*(byte *)(param_2 + _DAT_112764ad0) & 1) != 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bebe7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__spacing_11258d3a0);
  return param_1;
}



/* Entry: 107192ddc; end: 1071935b3; -[SCStickerPickerCategoryCell collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107192ddc(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_1[_DAT_112764ad0] == '\x01') &&
     (puVar2 = param_4, func_0x00010c1554e0(), puVar2 == (undefined *)0x0)) {
    func_0x00010be855a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_10719323c;
  }
  func_0x00010c1554e0(param_4);
  func_0x00010bde9de0(param_1);
  puVar2 = param_1;
  func_0x00010beb5ca0();
  if ((int)puVar2 != 0) {
    _objc_initWeak(auStack_68,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112764adc);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010bf12ee0();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1071935b4;
    puStack_78 = &UNK_110843540;
    _objc_copyWeak(auStack_70,auStack_68);
    uVar4 = uVar9;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + _DAT_112764b9c);
    *(undefined8 *)(param_1 + _DAT_112764b9c) = uVar4;
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  puVar5 = param_1;
  func_0x00010be49d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  puVar2 = param_4;
  if ((long)puVar6 < 1) {
LAB_107192ff0:
    _objc_retain(puVar2);
    puVar6 = puVar2;
    if (((param_1[_DAT_112764ba0] == '\x01') && (*(long *)(param_1 + _DAT_112764ad8) == 0)) &&
       (*(long *)(param_1 + _DAT_112764b4c) == 3)) {
      _objc_initWeak(auStack_68,param_1);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112764adc);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar3;
      func_0x00010bf12ee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_98,auStack_68);
      uVar4 = uVar9;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + _DAT_112764b9c);
      *(undefined8 *)(param_1 + _DAT_112764b9c) = uVar4;
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar3);
      puVar12 = param_1;
      func_0x00010be38da0();
      if ((int)puVar12 == 0) {
        puVar13 = param_1;
        func_0x00010beb6f20();
        puVar12 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        if ((int)puVar13 != 0) {
          func_0x00010c0840e0(puVar2);
          func_0x00010c1554e0(puVar2);
          func_0x00010bfed020();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          puVar6 = puVar12;
        }
        _objc_destroyWeak(auStack_98);
        _objc_destroyWeak(auStack_68);
        goto LAB_1071931b4;
      }
      func_0x00010bdd4620(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_68);
    }
    else {
LAB_1071931b4:
      lVar14 = (long)_DAT_112764b64;
      iVar1 = (int)*(undefined8 *)(param_1 + lVar14);
      func_0x00010c230ee0();
      if (iVar1 == 0) {
        puVar12 = param_1;
        func_0x00010beb5de0();
        if (((int)puVar12 == 0) && (lVar15 = (long)_DAT_112764b4c, *(long *)(param_1 + lVar15) != 9)
           ) {
          uVar11 = *(ulong *)(param_1 + lVar14);
          puVar12 = PTR_PTR_1126d4f78;
          _objc_opt_class(PTR_PTR_1126d4f78);
          _objc_opt_isKindOfClass(uVar11,puVar12);
          puVar12 = *(undefined **)(param_1 + lVar14);
          if ((uVar11 & 1) == 0) {
            puVar13 = PTR_PTR_1126d4ed0;
            _objc_opt_class(PTR_PTR_1126d4ed0);
            _objc_opt_isKindOfClass(puVar12,puVar13);
            if (((ulong)puVar12 & 1) == 0) {
              puVar12 = param_1;
              func_0x00010c253f40();
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar12;
              func_0x00010c27dd80();
              _objc_release(puVar12);
              if (puVar13 != (undefined *)0xc) goto LAB_1071933c8;
              puVar13 = param_1;
              func_0x00010c253f40();
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar13;
              func_0x00010c271a80();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar13 = *(undefined **)(param_1 + lVar14);
              _objc_retain(puVar13);
              puVar12 = puVar13;
              func_0x00010c06db00();
              if ((int)puVar12 == 0) {
                puVar12 = (undefined *)0x0;
              }
              else {
                puVar12 = puVar13;
                func_0x00010bf5d7c0();
                _objc_retainAutoreleasedReturnValue();
              }
            }
            _objc_release(puVar13);
            if (puVar12 == (undefined *)0x0) goto LAB_1071933c8;
LAB_107193370:
            puVar13 = puVar12;
            func_0x00010bf96da0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR_PTR_1126ba838;
            _objc_opt_class(PTR_PTR_1126ba838);
            puVar8 = puVar13;
            _objc_opt_isKindOfClass(puVar13,puVar7);
            _objc_release(puVar13);
            if (((ulong)puVar8 & 1) == 0) {
              if (*(long *)(param_1 + _DAT_112764ad8) == 0) {
                puVar13 = puVar12;
                func_0x00010bf96da0();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = PTR_PTR_1126ba880;
                _objc_opt_class(PTR_PTR_1126ba880);
                puVar8 = puVar13;
                _objc_opt_isKindOfClass(puVar13,puVar7);
                if ((((ulong)puVar8 & 1) == 0) || (param_1[_DAT_112764ad4] == '\x01')) {
                  _objc_release(puVar13);
                }
                else {
                  lVar14 = *(long *)(param_1 + lVar15);
                  _objc_release(puVar13);
                  if (lVar14 == 0) {
                    func_0x00010be24020(param_1);
                    _objc_retainAutoreleasedReturnValue();
                    goto LAB_107193544;
                  }
                }
              }
              func_0x00010be45b80(param_1);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x00010bdf77e0(param_1);
              _objc_retainAutoreleasedReturnValue();
            }
          }
          else {
            func_0x00010c0843c0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar12 != (undefined *)0x0) goto LAB_107193370;
LAB_1071933c8:
            _objc_retain(puVar6);
            puVar13 = param_1;
            func_0x00010beb3280();
            puVar12 = puVar6;
            if ((int)puVar13 == 0) {
LAB_107193524:
              func_0x00010bec2a20(param_1);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar13 = puVar6;
              func_0x00010c0840e0();
              lVar14 = (long)_DAT_112764ba8;
              puVar12 = *(undefined **)(param_1 + lVar14);
              func_0x00010c084fc0();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar12;
              func_0x00010bf529e0();
              _objc_release(puVar12);
              puVar12 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
              if (puVar7 <= puVar13) {
                func_0x00010c0840e0(puVar6);
                uVar9 = *(undefined8 *)(param_1 + lVar14);
                func_0x00010c084fc0(uVar9);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf529e0();
                func_0x00010c1554e0(puVar6);
                func_0x00010bfed020(puVar12);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar6);
                _objc_release(uVar9);
                goto LAB_107193524;
              }
              func_0x00010bdc9a20(param_1);
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar6;
            }
          }
LAB_107193544:
          _objc_release(puVar12);
        }
        else {
          func_0x00010bdf77e0(param_1);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        func_0x00010be363e0(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(puVar6);
  }
  else {
    puVar12 = param_4;
    func_0x00010c142240();
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    if ((long)puVar6 <= (long)puVar12) {
      func_0x00010c0840e0(param_4);
      func_0x00010c1554e0(param_4);
      func_0x00010bfed020();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      goto LAB_107192ff0;
    }
    func_0x00010c142240(param_4);
    puVar2 = puVar5;
    func_0x00010c0dfd40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(puVar2);
    func_0x00010bddc220(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_4;
  }
  _objc_release(puVar5);
  param_4 = puVar2;
LAB_10719323c:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1071935b4; end: 10719362b;  */

void FUN_1071935b4(long param_1,long param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010be67e80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10719362c; end: 107193683; -[SCStickerPickerCategoryCell _indexPathForCTAInPreviewIsValid:] */

bool FUN_10719362c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c142240();
  if (lVar2 == 3) {
    lVar2 = param_3;
    func_0x00010c1554e0(param_3);
    bVar1 = lVar2 == 1;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107193684; end: 1071936db; -[SCStickerPickerCategoryCell _shouldUpdateIndexPathAfterCTAIsInPreview:] */

bool FUN_107193684(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1554e0();
  if (lVar1 == 1) {
    lVar1 = param_3;
    func_0x00010c0840e0(param_3);
    bVar2 = 2 < lVar1;
  }
  else {
    bVar2 = false;
  }
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 1071936dc; end: 107193a07; -[SCStickerPickerCategoryCell _querySuggestorCellForItemAtIndexPath:collectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071936dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined *puVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf6e0c0(param_8,param_6,&PTR____CFConstantStringClassReference_110ea1038,param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_112764acc;
  uVar3 = *(undefined8 *)(param_5 + lVar24);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_5 + lVar24);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_5 + lVar24);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21300(param_8);
  _objc_release(uVar3);
  puVar19 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar4 = *(long *)(param_5 + lVar24);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_5 + lVar24);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_5 + lVar24);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_5 + lVar24);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar18;
  func_0x00010beef8c0(puVar19);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar3);
  _objc_release(lVar25);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar22) {
    ___stack_chk_fail();
    _objc_retain(puVar21);
    _objc_retain(param_9);
    lVar25 = (long)_DAT_112764b64;
    iVar2 = (int)*(undefined8 *)(lVar4 + lVar25);
    func_0x00010c230ee0();
    puVar19 = PTR_PTR_1126d4f78;
    if (iVar2 == 0) {
      param_8 = 0;
    }
    else {
      uVar23 = *(ulong *)(lVar4 + lVar25);
      _objc_retain(uVar23);
      _objc_opt_class(puVar19);
      uVar20 = uVar23;
      _objc_opt_isKindOfClass(uVar23,puVar19);
      uVar1 = uVar23;
      if ((uVar20 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar23);
      if (uVar1 == 0) {
        lVar25 = *(long *)(lVar4 + lVar25);
        func_0x00010c255420(lVar25);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c085160(uVar23);
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar23;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        lVar25 = lVar4;
        func_0x00010be363a0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar20);
        _objc_release(uVar23);
      }
      lVar5 = lVar4;
      func_0x00010be41300();
      param_8 = param_9;
      if ((int)lVar5 == 0) {
        func_0x00010bf6e0c0(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18b5e0();
        uVar3 = param_8;
        func_0x00010bf40120(param_8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4c7c0();
        uVar7 = param_1;
        _objc_release(uVar3);
        uVar3 = param_8;
        func_0x00010bf40120(param_8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _CGRectGetWidth();
        _objc_release(uVar3);
        func_0x00010be4c420(uVar7,lVar4);
        uVar3 = param_8;
        func_0x00010bf40120(param_8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c181f80(param_1,param_2,param_3,param_4);
        _objc_release(uVar3);
        _objc_initWeak(auStack_158,lVar4);
        _objc_copyWeak(auStack_160,auStack_158);
        _objc_retain(puVar21);
        func_0x00010c215360(param_8);
        func_0x00010c20bcc0(param_8);
        func_0x00010be45d20(uVar7,lVar4);
        func_0x00010c138ea0(param_8);
        _objc_release(puVar21);
        _objc_destroyWeak(auStack_160);
        _objc_destroyWeak(auStack_158);
      }
      else {
        func_0x00010bf6e0c0(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18b5e0();
        func_0x00010c1ef000(param_8);
        func_0x00010c20bc80(param_8);
      }
      _objc_release(uVar1);
      _objc_release(lVar25);
    }
    _objc_release(param_9);
    _objc_release(puVar21);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_8);
  return;
}



/* Entry: 107193a08; end: 107193d97; -[SCStickerPickerCategoryCell _horizontallyScrollingCellForItemAtIndexPath:correctedSection:collectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107193a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  
  _objc_retain(param_7);
  _objc_retain(param_9);
  lVar9 = (long)_DAT_112764b64;
  iVar2 = (int)*(undefined8 *)(param_5 + lVar9);
  func_0x00010c230ee0();
  puVar3 = PTR_PTR_1126d4f78;
  if (iVar2 == 0) {
    uVar8 = 0;
  }
  else {
    uVar7 = *(ulong *)(param_5 + lVar9);
    _objc_retain(uVar7);
    _objc_opt_class(puVar3);
    uVar4 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar3);
    uVar1 = uVar7;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar7);
    if (uVar1 == 0) {
      lVar9 = *(long *)(param_5 + lVar9);
      func_0x00010c255420(lVar9);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c085160(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_5;
      func_0x00010be363a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar7);
    }
    lVar5 = param_5;
    func_0x00010be41300();
    uVar8 = param_9;
    if ((int)lVar5 == 0) {
      func_0x00010bf6e0c0(param_9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0();
      uVar6 = uVar8;
      func_0x00010bf40120(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4c7c0();
      uVar10 = param_1;
      _objc_release(uVar6);
      uVar6 = uVar8;
      func_0x00010bf40120(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      _objc_release(uVar6);
      func_0x00010be4c420(uVar10,param_5);
      uVar6 = uVar8;
      func_0x00010bf40120(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c181f80(param_1,param_2,param_3,param_4);
      _objc_release(uVar6);
      _objc_initWeak(auStack_88,param_5);
      _objc_copyWeak(auStack_90,auStack_88);
      _objc_retain(param_7);
      func_0x00010c215360(uVar8);
      func_0x00010c20bcc0(uVar8);
      func_0x00010be45d20(uVar10,param_5);
      func_0x00010c138ea0(uVar8);
      _objc_release(param_7);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_88);
    }
    else {
      func_0x00010bf6e0c0(param_9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0();
      func_0x00010c1ef000(uVar8);
      func_0x00010c20bc80(uVar8);
    }
    _objc_release(uVar1);
    _objc_release(lVar9);
  }
  _objc_release(param_9);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 107193d98; end: 107193dfb;  */

void FUN_107193d98(undefined8 param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained(param_2);
  func_0x00010bece160(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107193dfc; end: 107193f87; -[SCStickerPickerCategoryCell _lineSpacingForItems:width:] */

double FUN_107193dfc(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
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
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  dVar10 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar6 = auStack_e8;
  lVar3 = param_4;
  func_0x00010bf52a60();
  if (lVar3 == 0) {
    dVar11 = 0.0;
  }
  else {
    lVar8 = *plStack_120;
    dVar11 = 0.0;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_4);
        }
        puVar2 = PTR_DAT_1126a5210;
        lVar7 = *(long *)(lStack_128 + lVar9 * 8);
        _objc_retain(lVar7);
        lVar4 = lVar7;
        func_0x00010010fab4(lVar7,puVar2);
        lVar1 = lVar7;
        if ((int)lVar4 == 0) {
          lVar1 = 0;
        }
        _objc_retain(lVar1);
        _objc_release(lVar7);
        if (lVar1 == 0) {
          dVar10 = 56.0;
        }
        else {
          func_0x00010c069a00(lVar7);
        }
        dVar11 = dVar11 + dVar10;
        _objc_release(lVar1);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      puVar6 = auStack_e8;
      lVar3 = param_4;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  lVar3 = param_4;
  func_0x00010bf529e0();
  dVar11 = (param_1 - dVar11) / (double)(lVar3 + 1);
  dVar10 = 6.0;
  if (6.0 <= dVar11) {
    dVar10 = dVar11;
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return dVar10;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf6e0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar6,PTR_s_dequeueReusableCellWithReuseIden_1125b91d8,
             &PTR____CFConstantStringClassReference_110ea10b8,puVar5);
  return dVar11;
}



/* Entry: 107193f88; end: 107193f9b; -[SCStickerPickerCategoryCell _dummyCellForItemAtIndexPath:collectionView:] */

void FUN_107193f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6e0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_4,PTR_s_dequeueReusableCellWithReuseIden_1125b91d8,
             &PTR____CFConstantStringClassReference_110ea10b8,param_3);
  return;
}



/* Entry: 107193f9c; end: 107194023; -[SCStickerPickerCategoryCell _bitmojiCTAUpsellCellForItemAtIndexPath:collectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107193f9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bf6e0c0(param_4,param_2,&PTR____CFConstantStringClassReference_110ea1138,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1705c0();
  func_0x00010c205f20(param_4,param_2,*(undefined8 *)(param_1 + _DAT_112764b00));
  func_0x00010c237c80(param_4,param_2,*(long *)(param_1 + _DAT_112764ad8) == 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 107194024; end: 1071940b3; -[SCStickerPickerCategoryCell _giphySectionCellForItemAtIndexPath:collectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107194024(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf6e0c0(param_4,param_2,&PTR____CFConstantStringClassReference_110ea10d8,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112764ac0);
  lVar1 = param_1;
  func_0x00010c0849a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a3ce0(param_4,param_2,uVar2,lVar1);
  _objc_release(lVar1);
  func_0x00010c18b5e0(param_4,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 1071940b4; end: 10719414b; -[SCStickerPickerCategoryCell isGiphySectionAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1071940b4(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + _DAT_112764ad4) & 1) != 0) {
    return false;
  }
  lVar4 = (long)_DAT_112764b64;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010c074720();
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + lVar4);
    puVar3 = PTR_PTR_1126d4ed0;
    _objc_opt_class(PTR_PTR_1126d4ed0);
    _objc_opt_isKindOfClass(uVar2,puVar3);
    if ((uVar2 & 1) == 0) {
      bVar1 = false;
    }
    else {
      lVar4 = *(long *)(param_1 + lVar4);
      func_0x00010c155500(lVar4);
      bVar1 = lVar4 == 0x10;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10719414c; end: 107194493; -[SCStickerPickerCategoryCell customStickerCreateCell:collectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719414c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf6e0c0(param_4,param_2,&PTR____CFConstantStringClassReference_110ea1018,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(ulong *)(param_1 + _DAT_112764ad8) & 0xfffffffffffffffd;
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (uVar14 == 1) {
    func_0x00010c23bba0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126d4fa8;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000108e86880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051400();
  _objc_release(puVar3);
  puVar4 = PTR_PTR_1126d4fb0;
  _objc_alloc();
  func_0x00010c061ce0();
  func_0x00010c20eaa0();
  func_0x00010c219b60(puVar4);
  uVar5 = param_4;
  func_0x00010bf4dce0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar5);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010bf4dce0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  puStack_78 = puVar8;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010bf4dce0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(puVar6);
  if (uVar14 == 1) {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107194494;
    puStack_90 = &UNK_110841f80;
    lStack_88 = param_1;
    _objc_retain(puVar4);
    puStack_80 = puVar4;
    func_0x000100162d98("APPSTORE",&puStack_a8);
    _objc_release(puStack_80);
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdcdd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + 0x20),PTR_s__applyChatDrawerStylingToPillVie_1125510e0,
             *(undefined8 *)(puVar1 + 0x28));
  return;
}



/* Entry: 107194494; end: 10719449f;  */

void FUN_107194494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcdd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__applyChatDrawerStylingToPillVie_1125510e0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1071944a0; end: 1071947e3; -[SCStickerPickerCategoryCell _locationButtonCell:collectionView:] */

void FUN_1071944a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

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
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf6e0c0(param_4,param_2,&PTR____CFConstantStringClassReference_110ea1158,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_4;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  _objc_release();
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c23bba0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d4fa8;
    _objc_alloc();
    puVar2 = puVar3;
    func_0x000108e86898();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051400();
    _objc_release(puVar2);
    puVar4 = PTR_PTR_1126d4fb0;
    _objc_alloc();
    func_0x00010c061ce0();
    func_0x00010c20eaa0();
    func_0x00010c219b60(puVar4);
    func_0x00010c160fc0(puVar4);
    puVar2 = param_4;
    func_0x00010bf4dce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar4;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_4;
    func_0x00010bf4dce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    puStack_78 = puVar8;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_4;
    func_0x00010bf4dce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1071947e4;
    puStack_90 = &UNK_110841f80;
    uStack_88 = param_1;
    puStack_80 = puVar4;
    _objc_retain(puVar4);
    func_0x000100162d98("APPSTORE",&puStack_a8);
    _objc_release(puStack_80);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdcdd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + 0x20),PTR_s__applyChatDrawerStylingToPillVie_1125510e0,
             *(undefined8 *)(puVar1 + 0x28));
  return;
}



/* Entry: 1071947e4; end: 1071947ef;  */

void FUN_1071947e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcdd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__applyChatDrawerStylingToPillVie_1125510e0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1071947f0; end: 107194b33; -[SCStickerPickerCategoryCell _planButtonCell:collectionView:] */

void FUN_1071947f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

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
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf6e0c0(param_4,param_2,&PTR____CFConstantStringClassReference_110ea1178,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_4;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  _objc_release();
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c23bba0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d4fa8;
    _objc_alloc();
    puVar2 = puVar3;
    func_0x000108e868b0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051400();
    _objc_release(puVar2);
    puVar4 = PTR_PTR_1126d4fb0;
    _objc_alloc();
    func_0x00010c061ce0();
    func_0x00010c20eaa0();
    func_0x00010c219b60(puVar4);
    func_0x00010c160fc0(puVar4);
    puVar2 = param_4;
    func_0x00010bf4dce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar4;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_4;
    func_0x00010bf4dce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    puStack_78 = puVar8;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_4;
    func_0x00010bf4dce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107194b34;
    puStack_90 = &UNK_110841f80;
    uStack_88 = param_1;
    puStack_80 = puVar4;
    _objc_retain(puVar4);
    func_0x000100162d98("APPSTORE",&puStack_a8);
    _objc_release(puStack_80);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdcdd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + 0x20),PTR_s__applyChatDrawerStylingToPillVie_1125510e0,
             *(undefined8 *)(puVar1 + 0x28));
  return;
}



/* Entry: 107194b34; end: 107194b3f;  */

void FUN_107194b34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcdd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__applyChatDrawerStylingToPillVie_1125510e0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107194b40; end: 107194ecf; -[SCStickerPickerCategoryCell _pollButtonCell:collectionView:] */

void FUN_107194b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

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
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf6e0c0(param_4,param_2,&PTR____CFConstantStringClassReference_110ea1198,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_4;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  _objc_release();
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c23bba0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (puVar3 != (undefined *)0x0) {
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc1020();
      func_0x00010c14e120(puVar1);
      func_0x00010bfe9260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = puVar2;
    }
    puVar3 = PTR_PTR_1126d4fa8;
    _objc_alloc();
    puVar2 = puVar3;
    func_0x000108e868c8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051400();
    _objc_release(puVar2);
    puVar4 = PTR_PTR_1126d4fb0;
    _objc_alloc();
    func_0x00010c061ce0();
    func_0x00010c20eaa0();
    func_0x00010c219b60(puVar4);
    func_0x00010c160fc0(puVar4);
    puVar2 = param_4;
    func_0x00010bf4dce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar4;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_4;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    puStack_78 = puVar8;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_4;
    func_0x00010bf4dce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107194ed0;
    puStack_90 = &UNK_110841f80;
    uStack_88 = param_1;
    puStack_80 = puVar4;
    _objc_retain(puVar4);
    func_0x000100162d98("APPSTORE",&puStack_a8);
    _objc_release(puStack_80);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdcdd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + 0x20),PTR_s__applyChatDrawerStylingToPillVie_1125510e0,
             *(undefined8 *)(puVar1 + 0x28));
  return;
}



/* Entry: 107194ed0; end: 107194edb;  */

void FUN_107194ed0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcdd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__applyChatDrawerStylingToPillVie_1125510e0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107194edc; end: 107194edf; -[SCStickerPickerCategoryCell _applyChatDrawerStylingToPillView:] */

void FUN_107194edc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcdd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyColorTokensToView__112551100);
  return;
}



/* Entry: 107194ee0; end: 1071950f7; -[SCStickerPickerCategoryCell _applyColorTokensToView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107194ee0(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_class(PTR__OBJC_CLASS___UILabel_1126aec30);
  puVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  puVar4 = param_3;
  if (((ulong)puVar5 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  _objc_retain(puVar4);
  if (puVar4 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(param_3);
    _objc_release(puVar5);
  }
  puVar5 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0();
  bVar2 = false;
  bVar3 = false;
  bVar1 = NAN((double)CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))));
  if (!bVar1) {
    bVar2 = (double)CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0))))))) < 0.0;
    bVar3 = (double)CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0))))))) == 0.0;
  }
  if ((!bVar3 && bVar2 == bVar1) &&
     (puVar6 = param_3, func_0x00010c074c20(), ((ulong)puVar6 & 1) == 0)) {
    puVar6 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_class(PTR__OBJC_CLASS___UILabel_1126aec30);
    puVar11 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar11 & 1) == 0) {
      puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_opt_class(PTR__OBJC_CLASS___UIImageView_1126aec28);
      puVar11 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      _objc_release(puVar5);
      if (((ulong)puVar11 & 1) != 0) goto LAB_107195014;
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(param_3);
    }
  }
  _objc_release(puVar5);
LAB_107195014:
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  puVar5 = param_3;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_d8;
  puVar6 = puVar5;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar10 = *plStack_110;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(puVar5);
        }
        func_0x00010bdcdd80(param_1);
        puVar11 = puVar11 + 1;
      } while (puVar6 != puVar11);
      puVar8 = auStack_d8;
      puVar6 = puVar5;
      puVar7 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar9 = *(undefined8 *)(param_3 + _DAT_112764b64);
  _objc_retain(puVar8);
  _objc_retain(puVar7);
  func_0x00010c0843c0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be45b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1071950f8; end: 107195193; -[SCStickerPickerCategoryCell _customStickerCellForItemAtIndexPath:collectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071950f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764b64);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0843c0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be45b80(param_1,param_2,uVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107195194; end: 1071954ef; -[SCStickerPickerCategoryCell _stickerCellForItemAtIndexPath:itemIndexPath:collectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107195194(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_1;
  func_0x00010c253f40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27dd80();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea0fd8;
  if (uVar3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ea0ff8;
  }
  _objc_retain(ppuVar1);
  uVar4 = param_5;
  func_0x00010bf6e0c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  func_0x00010c215360(uVar4);
  func_0x00010c18b5e0(uVar4);
  func_0x00010c207200(uVar4);
  uVar3 = param_1;
  func_0x00010c0849a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c271a80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c10f580(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  func_0x00010c20a800(uVar4);
  _objc_retain(uVar2);
  puVar7 = PTR_PTR_1126b0d08;
  _objc_opt_class(PTR_PTR_1126b0d08);
  uVar5 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar7);
  uVar3 = uVar2;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar2);
  if (((uVar3 != 0) && (*(long *)(param_1 + (long)_DAT_112764b4c) != 2)) &&
     (uVar5 = uVar2, func_0x00010c27dd80(), puVar7 = PTR_PTR_1126b0d00, uVar5 == 1)) {
    uVar5 = uVar2;
    func_0x00010c26b700(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27fca0();
    _objc_release(uVar5);
    if ((int)puVar7 != 0) {
      lVar8 = *(long *)(param_1 + (long)_DAT_112764afc);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c26b700(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf8e860();
      _objc_release(uVar5);
      _objc_release(lVar8);
      if (lVar9 != 0) {
        func_0x00010bf07060(param_1);
      }
    }
  }
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(ppuVar1);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1071954f0; end: 10719555b;  */

void FUN_1071954f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    func_0x00010bece160(param_1,param_2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10719555c; end: 107195703; -[SCStickerPickerCategoryCell _trackSticker:timeToDisplay:indexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719555c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = (long)_DAT_112764ae4;
  lVar4 = *(long *)(param_2 + lVar6);
  uVar3 = param_5;
  func_0x00010c1554e0(param_5);
  func_0x00010c0df780(puVar1,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar4 == 0) {
    puVar2 = PTR_PTR_1126d4fb8;
    _objc_alloc_init(PTR_PTR_1126d4fb8);
    uVar3 = *(undefined8 *)(param_2 + _DAT_112764b4c);
    func_0x000108d12f1c(uVar3);
    func_0x00010c20b960(puVar2,param_3,uVar3);
    uVar3 = param_4;
    func_0x00010c27dd80(param_4);
    func_0x000108d12ea8();
    func_0x00010c20b540(puVar2,param_3,uVar3);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar5 = *(undefined8 *)(param_2 + lVar6);
    uVar3 = param_5;
    func_0x00010c1554e0(param_5);
    func_0x00010c0df780(puVar1,param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5,param_3,puVar2,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_2 + lVar6);
  uVar3 = param_5;
  func_0x00010c1554e0(param_5);
  func_0x00010c0df780(puVar1,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c278940(param_1);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107195704; end: 107195b53; -[SCStickerPickerCategoryCell collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107195704(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,ulong param_7,ulong param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_5;
  uVar8 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_6;
  func_0x00010c1554e0();
  if ((uVar2 == 0) && ((*(byte *)(param_3 + (long)_DAT_112764ad0) & 1) != 0)) goto LAB_107195a88;
  uVar2 = param_5;
  uVar5 = param_6;
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    lVar3 = *(long *)(param_3 + (long)_DAT_112764bb0);
    uVar5 = uVar2;
    func_0x00010bf32f60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d4f28;
    if (lVar3 == 0) {
      _objc_retain(uVar2);
      _objc_opt_class(puVar4);
      uVar5 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar4);
      uVar1 = uVar2;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      func_0x00010c1554e0(param_6);
      uVar6 = param_3;
      func_0x00010be49d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf529e0();
      if (((uVar5 & 1) == 0) || (uVar5 = uVar2, func_0x00010c075d60(), (int)uVar5 == 0)) {
        uVar5 = param_6;
        func_0x00010c0840e0();
        if ((long)uVar7 <= (long)uVar5) {
          uVar7 = param_3;
          uVar5 = param_6;
          func_0x00010be38da0();
          if (((((int)uVar7 == 0) || (*(char *)(param_3 + (long)_DAT_112764ba0) != '\x01')) ||
              (*(long *)(param_3 + (long)_DAT_112764ad8) != 0)) ||
             (*(long *)(param_3 + (long)_DAT_112764b4c) != 3)) {
            uVar5 = param_3;
            func_0x00010bec2a40();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar5;
            func_0x00010c253880();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR_PTR_1126d4fc0;
            _objc_opt_class(PTR_PTR_1126d4fc0);
            uVar7 = uVar8;
            _objc_opt_isKindOfClass(uVar8,puVar4);
            if ((uVar7 & 1) == 0) {
              puVar4 = PTR_PTR_1126bab40;
              func_0x00010bfee100();
              if (puVar4 == (undefined *)0x5) {
                func_0x00010be004a0(param_3);
                goto LAB_107195a28;
              }
              puVar4 = PTR_PTR_1126bab40;
              func_0x00010bfee100();
              if (puVar4 == (undefined *)0x16) {
                func_0x00010c0840e0(param_6);
                func_0x00010be002e0(param_3);
                goto LAB_107195a28;
              }
              puVar4 = PTR_PTR_1126bab40;
              func_0x00010bfee100();
              if (puVar4 == (undefined *)0x6) {
                func_0x00010beccb80(param_3);
                goto LAB_107195a28;
              }
              uVar7 = uVar5;
              func_0x00010c07fa60();
              if ((int)uVar7 == 0) {
                uVar7 = uVar5;
                func_0x00010bf2da60();
                if ((int)uVar7 != 0) {
                  uVar10 = *(undefined8 *)(param_3 + (long)_DAT_112764aec);
                  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c128de0(uVar10);
                  goto LAB_107195988;
                }
                goto LAB_107195a28;
              }
              _objc_retain(uVar8);
              uVar11 = uVar5;
              func_0x00010c254100(uVar5);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar8;
            }
            else {
              puVar4 = (undefined *)(param_3 + (long)_DAT_112764bb4);
              _objc_loadWeakRetained(puVar4);
              func_0x00010c0840e0(param_6);
              func_0x00010bf33280(puVar4);
LAB_107195988:
              _objc_release(puVar4);
LAB_107195a28:
              uVar11 = 0;
              uVar7 = 0;
            }
            _objc_release(uVar8);
            _objc_release(uVar5);
            goto LAB_107195a40;
          }
          uVar7 = param_3 + (long)_DAT_112764bb4;
          _objc_loadWeakRetained();
          func_0x00010bf1afc0();
          goto LAB_107195a64;
        }
        func_0x00010c0840e0(param_6);
        uVar7 = uVar6;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar7;
        func_0x00010c067fc0();
        _objc_release(uVar7);
        func_0x00010be31c60(param_3);
      }
      else {
        uVar7 = param_3;
        func_0x00010bec2ac0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = 0;
LAB_107195a40:
        uVar5 = uVar7;
        uVar8 = uVar2;
        param_7 = uVar11;
        param_8 = param_6;
        func_0x00010be00460(param_3);
        _objc_release(uVar11);
LAB_107195a64:
        _objc_release(uVar7);
      }
      _objc_release(uVar6);
      _objc_release(uVar1);
    }
    else {
      func_0x00010bf7a5c0(lVar3);
    }
    _objc_release(lVar3);
  }
  _objc_release(uVar2);
LAB_107195a88:
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  if (uVar5 != 0) {
    _objc_retain(param_8);
    _objc_retain(param_7);
    _objc_retain(uVar8);
    _objc_retain(uVar5);
    uVar2 = uVar8;
    func_0x00010c262ca0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf345e0(uVar8);
    _objc_release(uVar8);
    func_0x00010bf512a0(param_1,param_2,uVar2);
    _objc_release(uVar2);
    lVar9 = param_5 + (long)_DAT_112764bb4;
    _objc_loadWeakRetained(lVar9);
    func_0x00010bec2b60(param_5);
    func_0x00010bf332a0(param_1,param_2,lVar9);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar9);
    return;
  }
  return;
}



/* Entry: 107195b54; end: 107195c6b; -[SCStickerPickerCategoryCell _didSelectSticker:cell:thumbnailImage:indexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107195b54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_5 != 0) {
    _objc_retain(param_8);
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_5);
    uVar1 = param_6;
    func_0x00010c262ca0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf345e0(param_6);
    _objc_release(param_6);
    func_0x00010bf512a0(param_1,param_2,uVar1,param_4,param_3);
    _objc_release(uVar1);
    lVar2 = param_3 + _DAT_112764bb4;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_3;
    func_0x00010bec2b60(param_3);
    func_0x00010bf332a0(param_1,param_2,lVar2,param_4,param_3,param_5,param_7,param_8,lVar3);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 107195c6c; end: 107195f43; -[SCStickerPickerCategoryCell collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107195c6c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = param_3;
  if ((((*(byte *)(param_1 + (long)_DAT_112764ad0) & 1) == 0) ||
      (lVar6 = param_5, func_0x00010c1554e0(), lVar6 != 0)) ||
     (uVar1 = param_4, func_0x00010c0720c0(), (int)uVar1 == 0)) {
    func_0x00010c1554e0(param_5);
    func_0x00010bde9de0(param_1);
    uVar1 = param_4;
    func_0x00010c0720c0();
    if ((int)uVar1 == 0) {
      uVar1 = param_4;
      func_0x00010c0720c0();
      if ((int)uVar1 == 0) {
        uVar4 = 0;
      }
      else {
        puVar2 = PTR_PTR_1126d4f58;
        func_0x00010c13fda0(PTR_PTR_1126d4f58);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6e120(param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
      }
    }
    else {
      puVar2 = PTR_PTR_1126d4f40;
      func_0x00010c13fda0(PTR_PTR_1126d4f40);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e120(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      lVar6 = (long)_DAT_112764b64;
      uVar5 = *(ulong *)(param_1 + lVar6);
      if ((*(ulong *)(param_1 + (long)_DAT_112764ad8) & 0xfffffffffffffffd) == 1) {
        func_0x00010c271380(uVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2283e0(uVar4);
        _objc_release(puVar2);
        uVar3 = uVar5;
      }
      else {
        puVar2 = PTR_PTR_1126d4ed0;
        _objc_opt_class(PTR_PTR_1126d4ed0);
        _objc_opt_isKindOfClass(uVar5,puVar2);
        uVar3 = *(ulong *)(param_1 + lVar6);
        if ((uVar5 & 1) == 0) {
          func_0x00010c271380(uVar3);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c2713a0();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c229b40(uVar4);
      }
      _objc_release(uVar3);
      uVar5 = param_1;
      func_0x00010beb95e0();
      if ((uVar5 & 1) == 0) {
        func_0x00010bebe7e0(0,param_1);
      }
      func_0x00010c1ba220(uVar4);
    }
  }
  else {
    puVar2 = PTR_PTR_1126d4f40;
    func_0x00010c13fda0(PTR_PTR_1126d4f40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6e120(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c229b40(uVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107195f44; end: 107196233; -[SCStickerPickerCategoryCell collectionView:willDisplayCell:forItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107195f44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,ulong param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126b0d10;
  _objc_opt_class(PTR_PTR_1126b0d10);
  uVar2 = param_8;
  _objc_opt_isKindOfClass(param_8,puVar1);
  puVar1 = PTR_PTR_1126b0d10;
  uVar5 = param_8;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126d4f28;
    _objc_opt_class(PTR_PTR_1126d4f28);
    uVar2 = param_8;
    _objc_opt_isKindOfClass(param_8,puVar1);
    puVar1 = PTR_PTR_1126d4f28;
    if ((uVar2 & 1) == 0) goto LAB_1071960a4;
    _objc_retain(param_8);
    _objc_opt_class(puVar1);
    uVar2 = param_8;
    _objc_opt_isKindOfClass(param_8,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_8);
    uVar2 = uVar5;
    func_0x00010c252440();
    if (uVar2 == 3) {
      func_0x00010be886a0(param_5);
    }
  }
  else {
    _objc_retain(param_8);
    _objc_opt_class(puVar1);
    uVar2 = param_8;
    _objc_opt_isKindOfClass(param_8,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_8);
    lVar3 = param_5;
    func_0x00010bf6b020(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c253880(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2546a0(lVar3);
    _objc_release(uVar2);
    _objc_release(lVar3);
  }
  func_0x00010c2a5f80(uVar5);
  _objc_release(uVar5);
LAB_1071960a4:
  if (*(long *)(param_5 + _DAT_112764ba8) != 0) {
    lVar3 = *(long *)(param_5 + _DAT_112764bb0);
    func_0x00010bf32f60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010c0840e0(param_9);
      func_0x00010c2a6060(lVar3);
    }
    _objc_release(lVar3);
  }
  func_0x00010c1554e0(param_9);
  lVar3 = param_5;
  func_0x00010bde9de0();
  lVar6 = (long)_DAT_112764b64;
  lVar4 = *(long *)(param_5 + lVar6);
  func_0x00010c1558c0();
  if (lVar3 < lVar4) {
    puVar1 = PTR_PTR_1126d4f50;
    _objc_opt_class(PTR_PTR_1126d4f50);
    uVar5 = param_8;
    _objc_opt_isKindOfClass(param_8,puVar1);
    puVar1 = PTR_PTR_1126d4ed0;
    if ((uVar5 & 1) != 0) {
      uVar7 = *(ulong *)(param_5 + lVar6);
      _objc_retain(uVar7);
      _objc_opt_class(puVar1);
      uVar2 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar1);
      uVar5 = uVar7;
      if ((uVar2 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar7);
      uVar2 = uVar5;
      func_0x00010bf5d8c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_5;
      func_0x00010bde86a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)_DAT_112764aec;
      func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar4));
      func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar4));
      _objc_release(uVar5);
      func_0x00010c20bca0(0,param_2,0,param_4,param_8);
      _objc_release(lVar3);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 107196234; end: 10719632f; -[SCStickerPickerCategoryCell collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

void FUN_107196234(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong in_x3;
  
  _objc_retain(in_x3);
  puVar1 = PTR_PTR_1126b0d10;
  _objc_opt_class(PTR_PTR_1126b0d10);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf75820(in_x3);
  }
  puVar1 = PTR_PTR_1126d4f50;
  _objc_opt_class(PTR_PTR_1126d4f50);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf75820(in_x3);
  }
  puVar1 = PTR_PTR_1126d4f28;
  _objc_opt_class(PTR_PTR_1126d4f28);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  puVar1 = PTR_PTR_1126d4f28;
  if ((uVar2 & 1) != 0) {
    _objc_retain(in_x3);
    _objc_opt_class(puVar1);
    uVar3 = in_x3;
    _objc_opt_isKindOfClass(in_x3,puVar1);
    uVar2 = in_x3;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(in_x3);
    uVar3 = uVar2;
    func_0x00010c084e00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2dba0();
    _objc_release(uVar3);
    func_0x00010bf75820(uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 107196330; end: 1071963fb; -[SCStickerPickerCategoryCell collectionView:willDisplaySupplementaryView:forElementKind:atIndexPath:] */

void FUN_107196330(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  int param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  func_0x00010c0720c0();
  if (param_5 != 0) {
    puVar1 = PTR_PTR_1126d4f58;
    _objc_opt_class(PTR_PTR_1126d4f58);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    if ((uVar2 & 1) != 0) {
      _objc_retain(param_4);
      func_0x00010c18b5e0(param_4);
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c275a60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      func_0x00010c28cf40(param_4);
      _objc_release(param_4);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071963fc; end: 10719641b; -[SCStickerPickerCategoryCell _correctSectionIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1071963fc(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return param_3 - (ulong)*(byte *)(param_1 + _DAT_112764ad0);
  }
  return 0;
}



/* Entry: 10719641c; end: 10719642f; -[SCStickerPickerCategoryCell _uncorrectSectionIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10719641c(long param_1,undefined8 param_2,long param_3)

{
  return param_3 + (ulong)*(byte *)(param_1 + _DAT_112764ad0);
}



/* Entry: 107196430; end: 1071965ff; -[SCStickerPickerCategoryCell _contextsForNetworkRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107196430(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *unaff_x20;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + _DAT_112764ad8);
  if (lVar5 < 2) {
    if (lVar5 == 0) {
      param_1 = PTR_PTR_1126b19f8;
      func_0x00010c2545e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b19f8;
      puStack_58 = param_1;
      func_0x00010bf28e60();
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_50 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_58,2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar5 != 1) goto LAB_1071965c8;
LAB_10719648c:
      param_1 = PTR_PTR_1126b19f8;
      func_0x00010c2545e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b19f8;
      puStack_78 = param_1;
      func_0x00010c0cbb20();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126b19f8;
      puStack_70 = puVar3;
      func_0x00010c258040();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b19f8;
      puStack_68 = puVar1;
      func_0x00010bf81400();
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_60 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    _objc_release(puVar3);
  }
  else {
    if (lVar5 != 2) {
      if (lVar5 != 3) goto LAB_1071965c8;
      goto LAB_10719648c;
    }
    param_1 = PTR_PTR_1126b19f8;
    func_0x00010c2545e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = param_1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release();
LAB_1071965c8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    lVar5 = (long)_DAT_112764bb8;
    func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar5));
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 107196600; end: 107196633; -[SCStickerPickerCategoryCell _disposeIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107196600(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764bb8;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107196634; end: 1071967b3; -[SCStickerPickerCategoryCell _subscribeToFeedCategoryIfAppropriate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107196634(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar7 = (long)_DAT_112764b64;
  uVar5 = *(ulong *)(param_1 + lVar7);
  puVar1 = PTR_PTR_1126d4f78;
  _objc_opt_class(PTR_PTR_1126d4f78);
  _objc_opt_isKindOfClass(uVar5,puVar1);
  if ((uVar5 & 1) != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    _objc_retain(uVar6);
    uVar2 = uVar6;
    func_0x00010c085240();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e0e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(uVar2);
    _objc_copyWeak(auStack_50,auStack_48);
    uVar2 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112764bb8);
    *(undefined8 *)(param_1 + _DAT_112764bb8) = uVar2;
    _objc_release(uVar4);
    func_0x00010bee2b00(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 1071967b4; end: 10719685b;  */

void FUN_1071967b4(long param_1,undefined8 param_2)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10719685c;
  puStack_40 = &UNK_1108434b0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10719685c; end: 107196887;  */

void FUN_10719685c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee2b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107196888; end: 107196a5f; -[SCStickerPickerCategoryCell _updateUIStateForFeedCategory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107196888(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  puVar2 = PTR_PTR_1126d4f78;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *(ulong *)(param_1 + _DAT_112764b64);
  _objc_retain(uVar9);
  _objc_opt_class(puVar2);
  uVar3 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar2);
  uVar7 = uVar9;
  if ((uVar3 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar9);
  if (uVar7 != 0) {
    uVar3 = uVar9;
    func_0x00010c076be0();
    if ((int)uVar3 == 0) {
      uVar4 = uVar9;
      func_0x00010c085180();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (uVar3 != 0) {
        uVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar4);
          }
          lVar5 = *(long *)(uVar10 * 8);
          func_0x00010c084fc0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010bf529e0();
          _objc_release(lVar5);
          if (lVar6 != 0) {
            _objc_release(uVar4);
            param_3 = 2;
            goto LAB_107196a10;
          }
          uVar10 = uVar10 + 1;
        } while (uVar3 != uVar10);
        uVar3 = uVar4;
        func_0x00010bf52a60();
      }
      _objc_release(uVar4);
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      param_3 = 3;
      if (uVar9 != 0) {
        param_3 = 4;
      }
    }
    else {
      param_3 = 1;
    }
LAB_107196a10:
    func_0x00010bee2ae0(param_1);
    func_0x00010be8a740(param_1);
  }
  _objc_release(uVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return uVar7;
  }
  ___stack_chk_fail();
  func_0x00010c085180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 107196a60; end: 107196a9f; -[SCStickerPickerCategoryCell _numberOfSectionsForFeedCategory:collectionView:] */

undefined8 FUN_107196a60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c085180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107196aa0; end: 107196c33; -[SCStickerPickerCategoryCell _numberOfItemsInSection:forFeedCategory:collectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107196aa0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be49d40(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  lVar1 = param_4;
  if (lVar2 < 1) {
    if (((*(char *)(param_1 + _DAT_112764ba0) == '\x01') &&
        (*(long *)(param_1 + _DAT_112764b4c) == 3)) && (*(long *)(param_1 + _DAT_112764ad8) == 0)) {
      func_0x00010c085160(param_4,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf529e0();
      lVar5 = lVar5 + 1;
    }
    else {
      lVar2 = param_1;
      func_0x00010beb3280();
      func_0x00010c085160(param_4,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf529e0();
      if ((int)lVar2 != 0) {
        lVar3 = *(long *)(param_1 + _DAT_112764ba8);
        func_0x00010c084fc0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar3;
        func_0x00010bf529e0();
        lVar5 = lVar2 + lVar5;
        _objc_release(lVar3);
      }
    }
  }
  else {
    func_0x00010c085160(param_4,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    lVar5 = lVar5 + lVar2;
  }
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(param_4);
  return lVar5;
}



/* Entry: 107196c34; end: 107196e43; -[SCStickerPickerCategoryCell _itemCellForItem:atIndexPath:collectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107196c34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar1 = *(undefined ***)(param_1 + _DAT_112764ac0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_5;
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar2 = ppuVar1;
    func_0x00010c29e140(ppuVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar2 = ppuVar1;
      func_0x00010c29e140(ppuVar1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e0c0(param_5,param_2,ppuVar2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0();
      lVar3 = param_1;
      func_0x00010c253f40(param_1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c271a60();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        func_0x00010c0849a0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_1;
        func_0x00010c10f580();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
        puVar6 = PTR_PTR_1126bc960;
        func_0x00010c2904a0(PTR_PTR_1126bc960,param_2,lVar5,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar1;
        func_0x00010c29ce00(ppuVar1,param_2,lVar4,0xc,puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28c8e0(uVar8,param_2,ppuVar7,lVar3);
        _objc_release(ppuVar7);
        _objc_release(puVar6);
        _objc_release(lVar5);
      }
      _objc_release(lVar4);
      _objc_release(lVar3);
      goto LAB_107196df8;
    }
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ea0ff8;
  func_0x00010bf6e0c0(param_5,param_2,&PTR____CFConstantStringClassReference_110ea0ff8,param_4);
  _objc_retainAutoreleasedReturnValue();
LAB_107196df8:
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 107196e44; end: 107196fb7; -[SCStickerPickerCategoryCell _refreshItemCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107196e44(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c075d60();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      lVar2 = *(long *)(param_1 + _DAT_112764ac0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        lVar3 = param_1;
        func_0x00010bec2ac0(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          lVar4 = lVar3;
          func_0x00010c271a60();
          _objc_retainAutoreleasedReturnValue();
          if (lVar4 != 0) {
            func_0x00010c0849a0(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = param_1;
            func_0x00010c10f580();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            puVar6 = PTR_PTR_1126bc960;
            func_0x00010c2904a0(PTR_PTR_1126bc960,param_2,lVar5,0);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar2;
            func_0x00010c29ce00(lVar2,param_2,lVar4,0xc,puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c28c8e0(param_3,param_2,lVar7,lVar3);
            _objc_release(lVar7);
            _objc_release(puVar6);
            _objc_release(lVar5);
          }
          _objc_release(lVar4);
        }
        _objc_release(lVar3);
      }
      _objc_release(lVar2);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107196fb8; end: 10719710b; -[SCStickerPickerCategoryCell appendSkinTone:cell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107196fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c253880();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0d08;
  _objc_opt_class(PTR_PTR_1126b0d08);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b0d00;
  uVar2 = uVar1;
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bfc50e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b0d08;
  _objc_alloc(PTR_PTR_1126b0d08);
  func_0x00010c00f540();
  func_0x00010bde86a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a800(param_4);
  _objc_release(param_1);
  func_0x00010c2a5f80(param_4);
  _objc_release(param_4);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10719710c; end: 1071973b7; -[SCStickerPickerCategoryCell showSkinTonePicker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719710c(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112764bbc;
  if (*(long *)(param_1 + lVar7) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110ea1258);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar2,param_2,puVar3);
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar2;
    _objc_release(uVar6);
    _objc_release(puVar3);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar7));
  }
  lVar8 = (long)_DAT_112764b88;
  dVar9 = 0.2;
  dVar12 = 0.3;
  func_0x00010c1d4c00(0x3fc999999999999a,0x3fd3333333333333,param_1,param_2,0,
                      *(undefined8 *)(param_1 + lVar8));
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + _DAT_112764aec),param_2,0);
  lVar4 = param_1 + _DAT_112764bb4;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c09fd80();
  _objc_release(lVar4);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c262ca0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0(*(undefined8 *)(param_1 + lVar8));
  func_0x00010bf512a0(uVar6,param_2,param_1);
  dVar10 = dVar9;
  _objc_release(uVar6);
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar8));
  _CGRectGetWidth();
  dVar10 = dVar10 * 0.5;
  dVar13 = 6.0;
  dVar14 = dVar10 + 6.0;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bfe6ac0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar10 = dVar10 * 0.5;
  dVar14 = dVar14 + dVar10;
  _objc_release(uVar6);
  func_0x00010c09ef00(*(undefined8 *)(param_1 + _DAT_112764b0c),param_2,param_3);
  dVar11 = dVar10;
  func_0x00010bf20c00(param_3);
  _CGRectGetWidth();
  dVar10 = dVar10 / dVar11;
  if (0.5 <= dVar10) {
LAB_1071972dc:
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bfe6ac0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar11 = dVar11 * 0.5;
    dVar15 = dVar9 + dVar14 + dVar11;
    func_0x00010bf20c00(param_1);
    _CGRectGetWidth();
    bVar1 = dVar11 < dVar15;
    _objc_release(uVar5);
    if (0.5 <= dVar10) goto LAB_107197334;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bfe6ac0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar13 = -0.5;
    dVar11 = (dVar9 - dVar14) + dVar11 * -0.5;
    if (dVar11 < 0.0) goto LAB_1071972dc;
    bVar1 = true;
  }
  _objc_release(uVar6);
LAB_107197334:
  dVar10 = -dVar14;
  if (!bVar1) {
    dVar10 = dVar14;
  }
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bfe6ac0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar13 = dVar13 * 0.5;
  func_0x00010becd3c0(dVar13,param_1,param_2,param_3);
  _objc_release(uVar6);
  func_0x00010c17a6a0(dVar9 + dVar10,dVar12 + dVar13,*(undefined8 *)(param_1 + lVar7));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar7),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071973b8; end: 107197433; -[SCStickerPickerCategoryCell hideSkinTonePicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071973b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c1d4c00(0x3ff0000000000000,0x3fc3333333333333,param_1,param_2,1,0);
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + _DAT_112764aec));
  lVar1 = param_1 + _DAT_112764bb4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c280d60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112764bbc),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 107197434; end: 10719747b; -[SCStickerPickerCategoryCell touchInSkinTonePickerRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107197434(double param_1,double param_2,long param_3)

{
  if (param_2 < 0.0) {
    return false;
  }
  func_0x00010bf20c00(*(undefined8 *)(param_3 + _DAT_112764bbc));
  _CGRectGetHeight();
  return param_2 < param_1;
}



/* Entry: 10719747c; end: 10719755b; -[SCStickerPickerCategoryCell skinToneFromLoc:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10719747c(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b0d00;
  func_0x00010bf8e8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010bf20c00(*(undefined8 *)(param_3 + _DAT_112764bbc));
    _CGRectGetHeight();
    puVar4 = puVar1;
    func_0x00010bf529e0();
    puVar3 = (undefined *)(long)(param_2 / (param_1 / (double)puVar4));
    puVar4 = puVar1;
    func_0x00010bf529e0();
    if (puVar3 < puVar4) {
      puVar2 = puVar1;
      func_0x00010c0dfd20(puVar1,param_4,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c067ec0();
      puVar4 = (undefined *)(long)(int)puVar4;
      _objc_release(puVar2);
    }
    else {
      puVar4 = puVar1;
      func_0x00010bf529e0(puVar1);
      puVar4 = puVar4 + -1;
    }
  }
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 10719755c; end: 1071976f3; -[SCStickerPickerCategoryCell setOpacityForVisibleEmojis:userInteractionEnabled:selectedStickerCell:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719755c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  lVar2 = *(long *)(param_3 + _DAT_112764aec);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      lVar5 = *(long *)(lVar6 * 8);
      if (lVar5 != param_6) {
        func_0x00010bf03400(param_2,PTR__OBJC_CLASS___UIView_1126aec20);
        func_0x00010c21e900(lVar5);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_6 + 0x28),*(undefined8 *)(param_6 + 0x20),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1071976f4; end: 107197703;  */

void FUN_1071976f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107197704; end: 1071977ef; -[SCStickerPickerCategoryCell presentTooltipForCell:title:dismissalDelay:] */

void FUN_107197704(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010bebb340(param_2);
    _objc_initWeak(auStack_48,param_2);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1071977f0;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x000100c749e0((float)param_1,"APPSTORE",&puStack_70);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1071977f0; end: 10719781b;  */

void FUN_1071977f0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be35dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10719781c; end: 1071979ef; -[SCStickerPickerCategoryCell _showStickerTooltipForCell:title:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719781c(double param_1,double param_2,double param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_6);
  uVar1 = param_7;
  _objc_retain(param_7);
  FUN_107197c8c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d660(param_7,param_5,uVar1);
  dVar3 = param_1;
  dVar4 = param_2;
  _objc_release(uVar1);
  dVar5 = param_1 + 16.0;
  func_0x00010bf345e0(param_6);
  func_0x00010bf345e0(param_6);
  dVar6 = dVar5 * 0.5;
  dVar3 = dVar3 - dVar6;
  dVar7 = dVar3 + -16.0;
  func_0x00010bf345e0(param_6);
  lVar2 = (long)_DAT_112764aec;
  func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar2));
  if (0.0 <= dVar7) {
    dVar3 = dVar6 + dVar3 + 16.0;
    if (dVar3 <= param_3) {
      func_0x00010bf345e0(param_6);
      dVar3 = (dVar3 - dVar6) + 15.0;
    }
    else {
      func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar2));
      dVar3 = (param_3 - dVar5) + -16.0;
      func_0x00010bfb68e0(param_6);
      dVar6 = dVar5 + param_3 * -0.5;
    }
  }
  else {
    func_0x00010bfb68e0(param_6);
    dVar6 = param_3 * 0.5;
    dVar3 = 8.0;
  }
  func_0x00010be3a660(dVar3,dVar4 + 35.0,dVar5,param_2 + 4.0,param_4,param_5,param_6);
  func_0x00010bea89a0(param_1,param_2,param_4,param_5,param_7);
  func_0x00010c1a7f60(*(undefined8 *)(param_4 + _DAT_112764bc0),param_5,0);
  func_0x00010bea89c0(param_4);
  func_0x00010bea8920(dVar6,dVar3,dVar4 + 35.0,dVar5,param_2 + 4.0,param_4);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1071979f0; end: 107197b9b; -[SCStickerPickerCategoryCell _initStickerTooltipWithCell:tooltipEdges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071979f0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b52f0;
  lVar3 = (long)_DAT_112764bc0;
  if (*(long *)(param_5 + lVar3) != 0) {
    return;
  }
  _objc_retain(param_7);
  _objc_alloc();
  func_0x00010c013de0(param_1,param_2,param_3,param_4);
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  *(undefined **)(param_5 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010bf20c00(param_7);
  _objc_release(param_7);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1 / 12.0);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_5 + lVar3));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_5,PTR_s_addSubview__11259c880,*(undefined8 *)(param_5 + lVar3));
  return;
}



/* Entry: 107197b9c; end: 107197c8b; -[SCStickerPickerCategoryCell _setTooltipTitle:textSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107197b9c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c013de0(0x4020000000000000,0x4000000000000000,param_1,param_2);
  func_0x00010c212f20();
  _objc_release(param_5);
  FUN_107197c8c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_4,uVar2);
  _objc_release(uVar2);
  _objc_release(param_5);
  func_0x00010c1cfce0(puVar1,param_4,1);
  func_0x00010c213040(puVar1,param_4,0);
  func_0x00010befbb60(*(undefined8 *)(param_3 + _DAT_112764bc0),param_4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107197c8c; end: 107197d37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107197c8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _CGAffineTransformMakeScale(&uStack_c0,0x3fb999999999999a,0x3ff0000000000000);
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  uStack_d8 = uStack_a8;
  uStack_e0 = uStack_b0;
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  func_0x00010c219960(puVar1);
  func_0x00010c1677c0(0,puVar1);
  if (*(long *)(puVar1 + _DAT_112764bc0) == 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_f0);
  }
  _objc_initWeak(auStack_f8,puVar1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_107197f00;
  puStack_138 = &UNK_1108f3228;
  _objc_copyWeak(auStack_130,auStack_f8);
  uStack_120 = uStack_e8;
  uStack_128 = uStack_f0;
  uStack_110 = uStack_d8;
  uStack_118 = uStack_e0;
  uStack_100 = uStack_c8;
  uStack_108 = uStack_d0;
  func_0x00010bf02ee0(0x3fd6666666666666,0,puVar1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_copyWeak(auStack_158,auStack_f8);
  func_0x00010bf03460(0x3fd6666666666666,0,0x3feb333333333333,0x403e000000000000,puVar1);
  _objc_destroyWeak(auStack_158);
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_f8);
  return;
}



/* Entry: 107197d38; end: 107197eff; -[SCStickerPickerCategoryCell _setTooltipTransform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107197d38(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _CGAffineTransformMakeScale(&uStack_80,0x3fb999999999999a,0x3ff0000000000000);
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  func_0x00010c219960(param_1);
  func_0x00010c1677c0(0,param_1);
  if (*(long *)(param_1 + _DAT_112764bc0) == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_b0);
  }
  _objc_initWeak(auStack_b8,param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_107197f00;
  puStack_f8 = &UNK_1108f3228;
  _objc_copyWeak(auStack_f0,auStack_b8);
  uStack_e0 = uStack_a8;
  uStack_e8 = uStack_b0;
  uStack_d0 = uStack_98;
  uStack_d8 = uStack_a0;
  uStack_c0 = uStack_88;
  uStack_c8 = uStack_90;
  func_0x00010bf02ee0(0x3fd6666666666666,0,puVar1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_copyWeak(auStack_118,auStack_b8);
  func_0x00010bf03460(0x3fd6666666666666,0,0x3feb333333333333,0x403e000000000000,puVar1);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_b8);
  return;
}



/* Entry: 107197f00; end: 10719803b;  */

void FUN_107197f00(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10719803c;
  puStack_a0 = &UNK_1108f3228;
  _objc_copyWeak(auStack_98,param_1 + 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0x30);
  uStack_90 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = *(undefined8 *)(param_1 + 0x40);
  uStack_80 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = *(undefined8 *)(param_1 + 0x50);
  uStack_70 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bef95a0(0,0x3fe0000000000000,puVar1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_copyWeak(auStack_f0,param_1 + 0x20);
  uStack_e0 = *(undefined8 *)(param_1 + 0x30);
  uStack_e8 = *(undefined8 *)(param_1 + 0x28);
  uStack_d0 = *(undefined8 *)(param_1 + 0x40);
  uStack_d8 = *(undefined8 *)(param_1 + 0x38);
  uStack_c0 = *(undefined8 *)(param_1 + 0x50);
  uStack_c8 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bef95a0(0x3fe0000000000000,0x3fe0000000000000,puVar1);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_98);
  return;
}



/* Entry: 10719803c; end: 10719818f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719803c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x30);
    uStack_80 = *(undefined8 *)(param_1 + 0x28);
    uStack_68 = *(undefined8 *)(param_1 + 0x40);
    uStack_70 = *(undefined8 *)(param_1 + 0x38);
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    uStack_60 = *(undefined8 *)(param_1 + 0x48);
    _CGAffineTransformTranslate(&uStack_50,0xc014000000000000,0,&uStack_80);
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    uStack_58 = uStack_28;
    uStack_60 = uStack_30;
    func_0x00010c219960(*(undefined8 *)(lVar1 + _DAT_112764bc0),param_2,&uStack_80);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107198190; end: 107198277; -[SCStickerPickerCategoryCell _setTooltipPathWithTooltipPathCenter:tooltipEdges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107198190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_6;
  func_0x000107d5e5a8();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112764bc0;
  func_0x00010c19f0e0(param_2,param_3,param_4,param_5,*(undefined8 *)(param_6 + lVar3));
  _objc_retainAutorelease(lVar1);
  func_0x00010bdc1040();
  uVar2 = *(undefined8 *)(param_6 + lVar3);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar2);
  _objc_retainAutorelease(lVar1);
  func_0x00010bdc1040();
  uVar2 = *(undefined8 *)(param_6 + lVar3);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107198278; end: 10719828b; -[SCStickerPickerCategoryCell _hideStickerTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107198278(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112764bc0),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 10719828c; end: 10719828f; -[SCStickerPickerCategoryCell bitmojiFriendmojiPickerComplete] */

void FUN_10719828c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becd230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__tooltipBalloonDismissed_112590e30);
  return;
}



/* Entry: 107198290; end: 107198347; -[SCStickerPickerCategoryCell bitmojiFriendmojiPickerUserSelected:] */

void FUN_107198290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107198348;
  puStack_30 = &UNK_110904f68;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x107198350;
  puStack_58 = &UNK_110862228;
  uStack_50 = param_1;
  uStack_28 = param_1;
  _objc_retain(param_3);
  func_0x00010c0bf0a0(param_3,param_2,&puStack_48,&puStack_70);
  func_0x00010bf1bea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1b780();
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 107198348; end: 10719835b;  */

void FUN_107198348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfcc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didCloseAvatarPickerWithoutSele_11255ccb8);
  return;
}



/* Entry: 10719835c; end: 1071986af; -[SCStickerPickerCategoryCell _avatarPickerBitmojiUserSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719835c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar12 = (long)_DAT_112764ac4;
  lVar1 = *(long *)(param_1 + lVar12);
  func_0x00010c088c60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + lVar12);
  func_0x00010c088c80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf51e00();
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(lVar3);
  func_0x00010bf0a0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010befa120(puVar4);
  }
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(lVar3);
      }
      uVar13 = *(ulong *)(lVar11 * 8);
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar13;
      func_0x00010bc823d8(uVar13,lVar5);
      _objc_release(lVar5);
      _objc_release(uVar13);
      if ((uVar6 & 1) == 0) {
        func_0x00010befa120(puVar4);
      }
      lVar11 = lVar11 + 1;
    } while (lVar2 != lVar11);
    lVar2 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  func_0x00010c28c540(*(undefined8 *)(param_1 + lVar12));
  lVar12 = (long)_DAT_112764bb4;
  lVar2 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar2);
  lVar7 = param_3;
  func_0x00010bf1bae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar7;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c254740(lVar2);
  _objc_release(lVar11);
  _objc_release(lVar7);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf1bae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112764adc);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(lVar7);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar2);
  lVar12 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar12);
  lVar2 = (long)_DAT_112764bc4;
  func_0x00010bfb96c0();
  _objc_release(lVar12);
  uVar9 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar9);
  lVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed4040(param_1);
  _objc_release(lVar2);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = param_3 + _DAT_112764bb4;
  _objc_loadWeakRetained(lVar3);
  lVar1 = (long)_DAT_112764bc4;
  func_0x00010bfb96c0();
  _objc_release(lVar3);
  uVar9 = *(undefined8 *)(param_3 + lVar1);
  *(undefined8 *)(param_3 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 1071986b0; end: 10719870b; -[SCStickerPickerCategoryCell _didCloseAvatarPickerWithoutSelectingAvatar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071986b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_112764bb4;
  _objc_loadWeakRetained(lVar1);
  lVar3 = (long)_DAT_112764bc4;
  func_0x00010bfb96c0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10719870c; end: 10719876f; -[SCStickerPickerCategoryCell _tooltipBalloonDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719870c(long param_1,undefined8 param_2)

{
  func_0x00010c1d4c00(0x3ff0000000000000,0x3fc3333333333333,param_1,param_2,1,0);
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + _DAT_112764aec),param_2,1);
  param_1 = param_1 + _DAT_112764bb4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c280d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107198770; end: 107198773; -[SCStickerPickerCategoryCell bitmojiFriendmojiHintComplete] */

void FUN_107198770(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becd230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__tooltipBalloonDismissed_112590e30);
  return;
}



/* Entry: 107198774; end: 107198803; -[SCStickerPickerCategoryCell _showFriendmojiPickerFromStickerCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107198774(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beb9380(param_1,param_2,param_3);
  if ((int)lVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2540c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112764bc4);
    *(undefined8 *)(param_1 + _DAT_112764bc4) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 107198804; end: 10719890b; -[SCStickerPickerCategoryCell _showFriendmojiPickerFromItemCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107198804(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beb9380();
  if ((int)lVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c084de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ba800;
    _objc_opt_class(PTR_PTR_1126ba800);
    uVar5 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar4);
    _objc_release(uVar2);
    if ((uVar5 & 1) != 0) {
      uVar2 = uVar3;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010bf41a00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + _DAT_112764bc4);
      *(ulong *)(param_1 + _DAT_112764bc4) = uVar5;
      _objc_release(uVar6);
      _objc_release(uVar2);
    }
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10719890c; end: 107198a37; -[SCStickerPickerCategoryCell _showFriendmojiPickerFromCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10719890c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_112764ac4);
  func_0x00010c088c80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    lVar6 = (long)_DAT_112764bb4;
    lVar2 = param_1 + lVar6;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf130a0();
    _objc_release(lVar2);
    if ((int)lVar3 != 0) {
      func_0x00010c1d4c00(0x3fc999999999999a,0x3fd3333333333333,param_1,param_2,0,param_3);
      uVar4 = *(undefined8 *)(param_1 + _DAT_112764b54);
      func_0x00010c087020();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0738a0();
      _objc_release(uVar4);
      if ((int)uVar5 != 0) {
        func_0x00010c1f7b20(*(undefined8 *)(param_1 + _DAT_112764aec),param_2,0);
      }
      param_1 = param_1 + lVar6;
      _objc_loadWeakRetained(param_1);
      func_0x00010c09fd80();
      _objc_release(param_1);
      uVar5 = 1;
      goto LAB_107198a10;
    }
  }
  uVar5 = 0;
LAB_107198a10:
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 107198a38; end: 107198b43; -[SCStickerPickerCategoryCell showFriendmojiHintIfPossible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107198a38(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = *(long *)(param_1 + _DAT_112764ac4);
  func_0x00010c088c80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdd3f80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf529e0();
  if (lVar3 != 0 && lVar2 != 0) {
    lVar6 = (long)_DAT_112764bb4;
    lVar3 = param_1 + lVar6;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bfb9800();
    _objc_release(lVar3);
    if ((int)lVar4 != 0) {
      func_0x00010c1d4c00(0x3fc999999999999a,0x3fd3333333333333,param_1,param_2,0,lVar2);
      func_0x00010c1f7b20(*(undefined8 *)(param_1 + _DAT_112764aec),param_2,0);
      param_1 = param_1 + lVar6;
      _objc_loadWeakRetained(param_1);
      func_0x00010c09fd80();
      _objc_release(param_1);
      uVar5 = 1;
      goto LAB_107198b1c;
    }
  }
  uVar5 = 0;
LAB_107198b1c:
  _objc_release(lVar2);
  _objc_release(lVar1);
  return uVar5;
}



/* Entry: 107198b44; end: 107198c23; -[SCStickerPickerCategoryCell _tooltipYOffsetForCell:extraHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107198b44(double param_1,double param_2,long param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = param_1;
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c262ca0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0(param_5);
  _objc_release(param_5);
  func_0x00010bf512a0(dVar2,uVar1,param_4,param_3);
  _objc_release(uVar1);
  dVar2 = param_2 - param_1;
  if (*(double *)(param_3 + _DAT_112764ae0) <= dVar2) {
    func_0x00010bf20c00(param_3);
    _CGRectGetHeight();
    dVar3 = 0.0;
    if (dVar2 < param_1 + param_2) {
      func_0x00010bf20c00(0,param_3);
      _CGRectGetHeight();
      dVar3 = dVar3 - (param_1 + param_2);
    }
  }
  else {
    dVar3 = *(double *)(param_3 + _DAT_112764ae0) - dVar2;
  }
  return dVar3;
}



/* Entry: 107198c24; end: 107198ea7; -[SCStickerPickerCategoryCell _bestCellForFriendmojiHint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107198c24(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  double dStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar6 = (long)_DAT_112764aec;
  uVar2 = *(undefined8 *)(param_4 + lVar6);
  func_0x00010c29fc60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x107198d60;
  puStack_50 = &UNK_110990e70;
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_48 = param_4;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_5,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfaea40(uVar2,param_5,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar6));
  dStack_78 = param_3 * 0.5;
  puStack_98 = puVar1;
  uStack_90 = 0xc0000000;
  pcStack_88 = FUN_107198ea8;
  puStack_80 = &UNK_110990ea0;
  uStack_70 = 0;
  uVar2 = uVar4;
  func_0x00010c246ca0(uVar4,param_5,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107198ea8; end: 107198f43;  */

bool FUN_107198ea8(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  double dVar1;
  double dVar2;
  
  _objc_retain(param_5);
  func_0x00010bf345e0(param_4);
  param_1 = *(double *)(param_3 + 0x20) - param_1;
  param_2 = *(double *)(param_3 + 0x28) - param_2;
  param_2 = param_2 * param_2;
  dVar1 = param_2 + param_1 * param_1;
  dVar2 = SQRT(dVar1);
  func_0x00010bf345e0(param_5);
  _objc_release(param_5);
  dVar1 = *(double *)(param_3 + 0x20) - dVar1;
  param_2 = *(double *)(param_3 + 0x28) - param_2;
  return SQRT(param_2 * param_2 + dVar1 * dVar1) < dVar2;
}



/* Entry: 107198f44; end: 107198fb7; -[SCStickerPickerCategoryCell _cellForGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107198f44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112764aec;
  func_0x00010c09ef00(param_3,param_2,*(undefined8 *)(param_1 + lVar3));
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bfed040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf33b60(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107198fb8; end: 10719906b; -[SCStickerPickerCategoryCell _stickerCellFromCollectionViewCell:gestureRecognizer:] */

void FUN_107198fb8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b0d10;
  _objc_opt_class(PTR_PTR_1126b0d10);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar3 = param_3;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126d4f30;
    _objc_opt_class(PTR_PTR_1126d4f30);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      func_0x00010c253ac0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_retain(param_3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10719906c; end: 1071990e3; -[SCStickerPickerCategoryCell _stickerCellForGestureRecognizer:] */

void FUN_10719906c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bddc200(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec2a40(param_1,param_2,uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1071990e4; end: 107199147; -[SCStickerPickerCategoryCell _itemCellForGestureRecognizer:] */

void FUN_1071990e4(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x00010bddc200();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d4f28;
  _objc_opt_class(PTR_PTR_1126d4f28);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    _objc_retain(param_1);
    uVar2 = param_1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107199148; end: 107199207; -[SCStickerPickerCategoryCell collectionViewTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107199148(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112764aec;
  func_0x00010c09ef00(param_3,param_2,*(undefined8 *)(param_1 + lVar2));
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010bfed040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1554e0();
  if ((lVar2 != 0) || ((*(byte *)(param_1 + _DAT_112764ad0) & 1) == 0)) {
    lVar2 = param_1;
    func_0x00010bddc200(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2546c0();
      _objc_release(param_1);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107199208; end: 1071998fb; -[SCStickerPickerCategoryCell collectionViewLongPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107199208(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  
  _objc_retain(param_5);
  lVar15 = (long)_DAT_112764aec;
  func_0x00010c09ef00(param_5);
  lVar2 = *(long *)(param_3 + lVar15);
  func_0x00010bfed040();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar2;
  func_0x00010c1554e0();
  if ((lVar15 == 0) && ((param_3[_DAT_112764ad0] & 1) != 0)) goto LAB_107199798;
  puVar16 = (undefined *)(long)_DAT_112764b88;
  if ((*(long *)(param_3 + (long)puVar16) == 0) ||
     (puVar3 = param_3, func_0x00010be05a40(), ((ulong)puVar3 & 1) != 0)) {
    lVar15 = param_5;
    func_0x00010c252440();
    if (lVar15 != 1) goto LAB_107199798;
    puVar13 = param_3;
    func_0x00010bec2a00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010be45b60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar13;
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b0d08;
    _objc_opt_class(PTR_PTR_1126b0d08);
    puVar6 = puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar3);
    puVar3 = puVar5;
    if (((ulong)puVar6 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar5);
    if ((((puVar3 != (undefined *)0x0) && (*(long *)(param_3 + _DAT_112764b4c) != 2)) &&
        (puVar6 = puVar5, func_0x00010c27dd80(), puVar6 == (undefined *)0x1)) &&
       (puVar7 = param_3, func_0x00010be05a40(), puVar6 = PTR_PTR_1126b0d00,
       ((ulong)puVar7 & 1) == 0)) {
      func_0x00010c26b700(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27fca0();
      _objc_release(puVar5);
      if ((int)puVar6 == 0) goto LAB_1071993bc;
      _objc_retain(puVar13);
      uVar8 = *(undefined8 *)(param_3 + (long)puVar16);
      *(undefined **)(param_3 + (long)puVar16) = puVar13;
      _objc_release(uVar8);
      func_0x00010c239f80(param_3);
      func_0x00010bfcf9a0(*(undefined8 *)(param_3 + (long)puVar16));
      goto LAB_107199780;
    }
LAB_1071993bc:
    puVar5 = puVar13;
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c27dd80();
    puVar7 = puVar4;
    if (puVar6 == (undefined *)0x3) {
LAB_107199404:
      puVar9 = puVar13;
      func_0x00010c253880();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      puVar10 = param_3;
      func_0x00010be05a40();
      if (((ulong)puVar10 & 1) != 0) {
        _objc_release(puVar9);
        if (puVar6 != (undefined *)0x3) goto LAB_10719944c;
        goto LAB_107199454;
      }
      puVar10 = puVar4;
      func_0x00010c0840e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf96f00();
      puVar14 = param_3;
      func_0x00010be059c0();
      _objc_release(puVar10);
      _objc_release(puVar9);
      if (puVar6 != (undefined *)0x3) {
        _objc_release(puVar16);
      }
      _objc_release(puVar5);
      if (((ulong)puVar14 & 1) != 0) goto LAB_107199630;
      lVar15 = param_5;
      func_0x00010c252440();
      if (lVar15 != 1) goto LAB_107199780;
      if (puVar13 != (undefined *)0x0) {
        puVar16 = puVar13;
        func_0x00010c253880();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar16;
        func_0x00010c271a80();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar16);
        puVar16 = PTR_PTR_1126ba800;
        _objc_opt_class(PTR_PTR_1126ba800);
        puVar5 = puVar6;
        _objc_opt_isKindOfClass(puVar6,puVar16);
        puVar16 = puVar6;
        if (((ulong)puVar5 & 1) == 0) {
          puVar16 = (undefined *)0x0;
        }
        _objc_retain(puVar16);
        _objc_release(puVar6);
        puVar5 = puVar16;
        func_0x00010bf1c500();
        _objc_release(puVar16);
        if (puVar5 == (undefined *)0x2) {
          func_0x00010beb93c0(param_3);
        }
        goto LAB_107199780;
      }
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar7;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126ba800;
      _objc_opt_class(PTR_PTR_1126ba800);
      puVar6 = puVar16;
      _objc_opt_isKindOfClass(puVar16,puVar5);
      _objc_release(puVar16);
      if (((ulong)puVar6 & 1) != 0) {
        puVar16 = puVar7;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar16;
        func_0x00010bf1c500();
        if (puVar5 == (undefined *)0x2) {
          func_0x00010beb93a0(param_3);
        }
        goto LAB_107199774;
      }
LAB_107199778:
      _objc_release(puVar7);
    }
    else {
      puVar16 = puVar4;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar16;
      func_0x00010bf96f00();
      if (puVar9 == (undefined *)0x2) goto LAB_107199404;
LAB_10719944c:
      _objc_release(puVar16);
LAB_107199454:
      _objc_release(puVar5);
LAB_107199630:
      puVar16 = puVar13;
      func_0x00010c253880(puVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      puVar5 = param_3;
      func_0x00010be05a40();
      if ((int)puVar5 != 0) {
        _objc_release(puVar16);
LAB_1071996a0:
        puVar16 = puVar13;
        func_0x00010c253880();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar16;
        func_0x00010c271a80();
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 == (undefined *)0x0) {
          func_0x00010c0840e0(puVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_retain(puVar5);
          puVar7 = puVar5;
        }
        _objc_release(puVar5);
        _objc_release(puVar16);
        puVar5 = param_3;
        func_0x00010c0849a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar5;
        func_0x00010c10f580();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        param_3 = param_3 + _DAT_112764bb4;
        _objc_loadWeakRetained(param_3);
        func_0x00010c254680();
        _objc_release(param_3);
LAB_107199774:
        _objc_release(puVar16);
        goto LAB_107199778;
      }
      puVar5 = puVar4;
      func_0x00010c0840e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf96f00();
      puVar6 = param_3;
      func_0x00010be059c0();
      _objc_release(puVar5);
      _objc_release(puVar16);
      if ((int)puVar6 != 0) goto LAB_1071996a0;
    }
LAB_107199780:
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  else {
    lVar15 = param_5;
    func_0x00010c252440();
    if (lVar15 != 3) {
      func_0x00010c09ef00(param_5);
      puVar16 = param_3;
      func_0x00010c277280();
      if ((int)puVar16 != 0) {
        func_0x00010c23df00(param_1,param_2,param_3);
        func_0x00010bf07060(param_3);
      }
      goto LAB_107199798;
    }
    uVar11 = *(ulong *)(param_3 + (long)puVar16);
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b0d08;
    _objc_opt_class(PTR_PTR_1126b0d08);
    uVar12 = uVar11;
    _objc_opt_isKindOfClass(uVar11,puVar3);
    uVar1 = uVar11;
    if ((uVar12 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar11);
    puVar3 = PTR_PTR_1126b0d00;
    uVar12 = uVar1;
    func_0x00010c26b700(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23dee0(puVar3);
    _objc_release(uVar12);
    puVar13 = PTR_PTR_1126b0d00;
    uVar12 = uVar1;
    func_0x00010c26b700(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c27fcc0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    uVar8 = *(undefined8 *)(param_3 + _DAT_112764afc);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c202ee0();
    _objc_release(uVar8);
    func_0x00010c23b360(*(undefined8 *)(param_3 + (long)puVar16));
    func_0x00010bfe27e0(param_3);
    uVar8 = *(undefined8 *)(param_3 + (long)puVar16);
    *(undefined8 *)(param_3 + (long)puVar16) = 0;
    _objc_release(uVar8);
  }
  _objc_release(puVar13);
LAB_107199798:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1071998fc; end: 107199917; -[SCStickerPickerCategoryCell _doesStickerTypeSupportDisplayingStickerMenu:] */

uint FUN_1071998fc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(0xd < param_3) | 0x10aeU >> (ulong)((uint)param_3 & 0x1f) & 1;
}



/* Entry: 107199918; end: 107199933; -[SCStickerPickerCategoryCell _doesEntityTypeSupportDisplayingStickerMenu:] */

uint FUN_107199918(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(0x11 < param_3) | 0x246eU >> (ulong)((uint)param_3 & 0x1f) & 1;
}



/* Entry: 107199934; end: 107199983; -[SCStickerPickerCategoryCell querySuggestControllerDidSelectItem:] */

void FUN_107199934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c254e40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107199984; end: 107199a93; -[SCStickerPickerCategoryCell sectionCell:stickerSelected:center:thumbnail:index:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107199984(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_3 + _DAT_112764aec);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bfecfa0(uVar4,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3 + _DAT_112764bb4;
  _objc_loadWeakRetained(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  uVar2 = uVar4;
  func_0x00010c1554e0(uVar4);
  func_0x00010bfed020(puVar3,param_4,param_8,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf332a0(param_1,param_2,lVar1,param_4,param_3,param_6,param_7,puVar3,
                      0xffffffffffffffff);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107199a94; end: 107199a97; -[SCStickerPickerCategoryCell willDisplayHorizontalStickerPickerItemCell:] */

void FUN_107199a94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a6270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_willDisplayStickerPickerItemCell_1126872c0);
  return;
}



/* Entry: 107199a98; end: 107199a9b; -[SCStickerPickerCategoryCell stickerPickerHorizontalItemCell:didDisplayContentInTime:] */

void FUN_107199a98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c254970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stickerPickerItemCell_didDisplay_112672c80);
  return;
}



/* Entry: 107199a9c; end: 107199b43; -[SCStickerPickerCategoryCell gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107199a9c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 == *(long *)(param_1 + _DAT_112764b58)) {
    lVar2 = 1;
  }
  else {
    lVar2 = (long)_DAT_112764aec;
    uVar1 = *(ulong *)(param_1 + lVar2);
    func_0x00010c070400();
    if ((uVar1 & 1) == 0) {
      uVar1 = *(ulong *)(param_1 + lVar2);
      func_0x00010c070ea0();
      if ((uVar1 & 1) == 0) {
        param_1 = param_1 + _DAT_112764bb4;
        _objc_loadWeakRetained(param_1);
        lVar2 = param_1;
        func_0x00010c254760();
        _objc_release(param_1);
        goto LAB_107199b28;
      }
    }
    lVar2 = 0;
  }
LAB_107199b28:
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 107199b44; end: 107199c67; -[SCStickerPickerCategoryCell gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107199b44(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar4 = *(ulong *)(param_1 + _DAT_112764b58);
  if (param_3 == uVar4 || param_4 == uVar4) {
    uVar1 = param_4;
    if (param_3 != uVar4) {
      uVar1 = param_3;
    }
    _objc_retain(uVar1);
    puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    uVar4 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar3);
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      uVar4 = uVar1;
      func_0x00010c29bf00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126d4fc8;
      _objc_opt_class(PTR_PTR_1126d4fc8);
      uVar2 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar3);
      uVar5 = (uint)uVar2;
      _objc_release(uVar4);
    }
    _objc_release(uVar1);
  }
  else {
    if (param_3 == *(ulong *)(param_1 + _DAT_112764b0c)) {
      puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
      _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
      uVar4 = param_4;
      _objc_opt_isKindOfClass(param_4,puVar3);
      if ((uVar4 & 1) != 0) {
        uVar5 = 0;
        goto LAB_107199c40;
      }
    }
    uVar5 = 1;
  }
LAB_107199c40:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5 & 1;
}



/* Entry: 107199c68; end: 107199cff; -[SCStickerPickerCategoryCell gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

undefined8 FUN_107199c68(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  _objc_release(param_3);
  if ((uVar2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = 1;
      goto LAB_107199ce4;
    }
  }
  uVar3 = 0;
LAB_107199ce4:
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 107199d00; end: 107199e1b; -[SCStickerPickerCategoryCell gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107199d00(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == *(ulong *)(param_1 + _DAT_112764b58)) {
    lVar5 = (long)_DAT_112764aec;
    func_0x00010c09ef00(param_4);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf20c00(uVar4);
    _CGRectContainsPoint();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_opt_class(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      lVar5 = (long)_DAT_112764aec;
      func_0x00010c09ef00(param_4);
      lVar3 = *(long *)(param_1 + lVar5);
      func_0x00010bfed040();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c1554e0();
      if ((lVar5 == 0) && ((*(byte *)(param_1 + _DAT_112764ad0) & 1) != 0)) {
        _objc_release(lVar3);
        uVar4 = 0;
        goto LAB_107199df4;
      }
      _objc_release(lVar3);
    }
    uVar4 = 1;
  }
LAB_107199df4:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107199e1c; end: 107199f23; -[SCStickerPickerCategoryCell categoryCellScrollbar:didScrollToSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107199e1c(double param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_2 + _DAT_112764b64);
  func_0x00010c22fb00();
  lVar5 = (long)_DAT_112764aec;
  lVar3 = *(long *)(param_2 + lVar5);
  if (iVar1 == 0) {
    func_0x00010c08c980(lVar3,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c08c9c0(lVar3,param_3,
                        *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  if (lVar3 != 0) {
    lVar6 = (long)_DAT_112764bc8;
    *(undefined1 *)(param_2 + lVar6) = 1;
    uVar4 = *(undefined8 *)(param_2 + lVar5);
    func_0x00010bf4cdc0(uVar4);
    dVar7 = param_1;
    func_0x00010bfb68e0(lVar3);
    _CGRectGetMinY();
    dVar8 = dVar7;
    func_0x00010bf4c7c0(*(undefined8 *)(param_2 + lVar5));
    func_0x00010c182300(param_1,dVar7 - dVar8,uVar4,param_3,0);
    *(undefined1 *)(param_2 + lVar6) = 0;
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107199f24; end: 107199fcf; -[SCStickerPickerCategoryCell scrollViewWillBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107199f24(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = (long)_DAT_112764bb4;
  _objc_retain(param_4);
  lVar1 = param_2 + lVar1;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c254720();
  _objc_release(lVar1);
  func_0x00010c2a5a80(*(undefined8 *)(param_2 + _DAT_112764b94));
  func_0x00010c0b33a0(param_2);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112764b40);
  func_0x00010bf49220(*(undefined8 *)(param_2 + _DAT_112764b48));
  uVar3 = param_1;
  func_0x00010bde1d40(param_2);
  func_0x00010c152cc0(param_1,uVar3,uVar2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107199fd0; end: 10719a0cb; -[SCStickerPickerCategoryCell scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107199fd0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  lVar2 = param_2;
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c254700();
  _objc_release(lVar2);
  uVar1 = *(ulong *)(param_2 + _DAT_112764b78);
  if (((uVar1 != 0) && (func_0x00010c074c20(), (uVar1 & 1) == 0)) &&
     ((*(byte *)(param_2 + _DAT_112764bc8) & 1) == 0)) {
    func_0x00010be9bf40(param_2,param_3,1);
  }
  lVar2 = *(long *)(param_2 + _DAT_112764b40);
  lVar3 = (long)_DAT_112764b48;
  func_0x00010bf49220(*(undefined8 *)(param_2 + lVar3));
  uVar5 = param_1;
  func_0x00010bde1d40(param_2);
  func_0x00010c153da0(param_1,uVar5,lVar2,param_3,param_4);
  fVar4 = (float)param_1;
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010bfb2c80(lVar2);
    func_0x00010c181140((double)fVar4,*(undefined8 *)(param_2 + lVar3));
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10719a0cc; end: 10719a0df; -[SCStickerPickerCategoryCell scrollViewWillEndDragging:withVelocity:targetContentOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719a0cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_1 + _DAT_112764b40),
             PTR_s_scrollViewWillEndDraggingWithTar_112632560);
  return;
}



/* Entry: 10719a0e0; end: 10719a223; -[SCStickerPickerCategoryCell scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10719a0e0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2546e0();
  _objc_release(lVar1);
  func_0x00010bf759a0(*(undefined8 *)(param_2 + _DAT_112764b94),param_3,param_5);
  func_0x00010c0b33a0(param_2);
  lVar1 = *(long *)(param_2 + _DAT_112764b40);
  lVar2 = (long)_DAT_112764b48;
  func_0x00010bf49220(*(undefined8 *)(param_2 + lVar2));
  uVar4 = param_1;
  func_0x00010bde1d40(param_2);
  func_0x00010c153d80(param_1,uVar4,lVar1,param_3,param_4,param_5);
  fVar3 = (float)param_1;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (lVar1 != 0) {
    func_0x00010bfb2c80(lVar1);
    func_0x00010c181140((double)fVar3,*(undefined8 *)(param_2 + lVar2));
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10719a224;
    puStack_60 = &UNK_110842e18;
    lStack_58 = param_2;
    func_0x00010bf03400(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_3,&puStack_78);
  }
  _objc_release(lVar1);
  return;
}


