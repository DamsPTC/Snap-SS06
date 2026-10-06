/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d2f454; end: 106d2f48f;  */

void FUN_106d2f454(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d2f490; end: 106d2f4bf; -[SCGalleryOperaLoadingProgressProvider .cxx_destruct] */

void FUN_106d2f490(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d2f4c0; end: 106d2f73b;  */

void FUN_106d2f4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_106d2f73c;
  uStack_88 = 0x106d2f74c;
  uVar1 = param_4;
  puStack_a0 = &uStack_a8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = uVar2;
  _objc_release(uVar1);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x106d2f754;
  puStack_c0 = &UNK_1108647e8;
  _objc_retain(param_6);
  ppuVar3 = &puStack_d8;
  uStack_b8 = param_6;
  puStack_b0 = &uStack_a8;
  _objc_retainBlock();
  if (puStack_a0[5] == 0) {
    ppuVar4 = ppuVar3;
    _dispatch_group_create();
    uVar1 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf588a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _dispatch_group_enter(ppuVar4);
    _objc_retain(param_4);
    _objc_retain(param_1);
    _objc_retain(ppuVar4);
    func_0x00010bfbff80(uVar2);
    func_0x000100bc0718(ppuVar4,param_5,ppuVar3);
    _objc_release(ppuVar4);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(uVar2);
    _objc_release(ppuVar4);
  }
  else {
    func_0x00010007380c(param_5,ppuVar3);
  }
  _objc_release(ppuVar3);
  _objc_release(uStack_b8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 106d2f73c; end: 106d2f777;  */

void FUN_106d2f73c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106d2f778; end: 106d2f87b;  */

void FUN_106d2f778(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    uVar1 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106d2f87c;
    puStack_50 = &UNK_110848ba8;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uStack_48 = uVar3;
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    lStack_40 = param_2;
    _objc_retain(uVar3);
    uStack_38 = uVar3;
    func_0x00010007380c(uVar1,&puStack_68);
    _objc_release(uVar1);
    lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
    _objc_release(uStack_38);
    _objc_release(lStack_40);
    _objc_release(uStack_48);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
  _objc_release(param_2);
  return;
}



/* Entry: 106d2f87c; end: 106d2f8b7;  */

void FUN_106d2f87c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d2f8b8; end: 106d2f9db;  */

void FUN_106d2f8b8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_3);
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    if (lVar1 == 0) {
      uVar4 = 0;
    }
    else {
      puVar2 = PTR_PTR_1126d24a8;
      _objc_alloc_init(PTR_PTR_1126d24a8);
      uVar4 = param_3;
      func_0x00010c269d40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bf54ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      func_0x00010c1d8f60(uVar3);
      uVar4 = uVar3;
      func_0x00010bf0f320(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(puVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106d2f9dc; end: 106d2fac7; -[SCMemoriesOperaSnapChromeViewModel initWithGallerySnap:entryInfo:currentUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106d2f9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f6948;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11275cffc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275d000;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275d004);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275d004) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d2fac8; end: 106d2fb53; -[SCMemoriesOperaSnapChromeViewModel chromeDisplayTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2fac8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11275d000;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bf3fcc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf393c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + lVar3);
    func_0x00010c2711a0(lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106d2fb54; end: 106d2fecb; -[SCMemoriesOperaSnapChromeViewModel chromeDisplaySubTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2fb54(undefined *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  
  lVar15 = (long)_DAT_11275cffc;
  lVar3 = *(long *)(param_1 + lVar15);
  func_0x00010bf393a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar7 != 0) {
    puVar4 = *(undefined **)(param_1 + lVar15);
    func_0x00010bf393a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_106d2fc54;
  }
  lVar14 = (long)_DAT_11275d000;
  lVar3 = *(long *)(param_1 + lVar14);
  func_0x00010bf3fcc0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010bf393a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  puVar5 = *(undefined **)(param_1 + lVar14);
  if (lVar7 == 0) {
    func_0x00010bf977c0();
    if ((int)puVar5 != 7) {
      uVar1 = (uint)*(undefined8 *)(param_1 + lVar14);
      func_0x00010bf977c0();
      if (0x12 < uVar1 || (1 << (ulong)(uVar1 & 0x1f) & 0x40300U) == 0) {
        iVar2 = (int)*(undefined8 *)(param_1 + lVar14);
        func_0x00010bf977c0();
        if (iVar2 != 0xf) {
          iVar2 = (int)*(undefined8 *)(param_1 + lVar14);
          func_0x00010bf977c0();
          if (iVar2 == 0x33) {
LAB_106d2fcd4:
            puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            puVar5 = *(undefined **)(param_1 + lVar15);
            func_0x00010b5f7a24(puVar5);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            iVar2 = (int)*(undefined8 *)(param_1 + lVar14);
            func_0x00010bf977c0();
            puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            if (iVar2 != 0x32) {
              iVar2 = (int)*(undefined8 *)(param_1 + lVar14);
              func_0x00010bf977c0();
              if (iVar2 != 0x3e) {
                puVar5 = param_1;
                func_0x00010bebd360();
                _objc_retainAutoreleasedReturnValue();
                lVar7 = *(long *)(param_1 + lVar14);
                func_0x00010bf97860();
                func_0x00010b5fa33c();
                puVar4 = puVar5;
                if (lVar7 == 3) {
                  ppuVar8 = *(undefined ***)(param_1 + lVar15);
                  func_0x00010bf0e960();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar9 = ppuVar8;
                  func_0x00010c089820();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar10 = ppuVar9;
                  func_0x00010b5f723c();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar9);
                  _objc_release(ppuVar8);
                  uVar11 = *(undefined8 *)(param_1 + lVar15);
                  func_0x00010bf0e960();
                  _objc_retainAutoreleasedReturnValue();
                  uVar12 = uVar11;
                  func_0x00010c089820();
                  _objc_retainAutoreleasedReturnValue();
                  uVar13 = uVar12;
                  func_0x00010b5f7434();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar12);
                  _objc_release(uVar11);
                  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                  ppuVar9 = &PTR____CFConstantStringClassReference_110e848f8;
                  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e848f8,0);
                  _objc_retainAutoreleasedReturnValue();
                  uVar12 = uVar13;
                  func_0x00010c0720c0();
                  ppuVar8 = ppuVar10;
                  if ((int)uVar12 != 0) {
                    ppuVar8 = &PTR____CFConstantStringClassReference_110e07258;
                    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e07258,0);
                    _objc_retainAutoreleasedReturnValue();
                  }
                  func_0x00010c14de00(puVar4);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar5);
                  if ((int)uVar12 != 0) {
                    _objc_release(ppuVar8);
                  }
                  _objc_release(ppuVar9);
                  _objc_release(uVar13);
                  _objc_release(ppuVar10);
                }
                goto LAB_106d2fc54;
              }
              goto LAB_106d2fcd4;
            }
            puVar5 = *(undefined **)(param_1 + lVar15);
            func_0x00010bf59960(puVar5);
            _objc_retainAutoreleasedReturnValue();
          }
          puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb5960(puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          goto LAB_106d2fc4c;
        }
      }
      puVar4 = PTR_PTR_1126cdc70;
      func_0x00010bf85580(PTR_PTR_1126cdc70);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106d2fc54;
    }
    puVar5 = *(undefined **)(param_1 + lVar15);
    func_0x00010b5f7a24(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x000108dfd174();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf3fcc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bf393a0();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_106d2fc4c:
  _objc_release(puVar5);
LAB_106d2fc54:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106d2fecc; end: 106d2fed3; -[SCMemoriesOperaSnapChromeViewModel chromeDisplaySecondLineSubTitle] */

undefined8 FUN_106d2fecc(void)

{
  return 0;
}



/* Entry: 106d2fed4; end: 106d2ffcb; -[SCMemoriesOperaSnapChromeViewModel shouldDisplayChromeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106d2fed4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11275d000;
  uVar1 = *(ulong *)(param_1 + lVar7);
  func_0x00010bf97860();
  func_0x00010b5fa33c();
  uVar6 = 0;
  if (uVar1 < 8) {
    if ((1L << (uVar1 & 0x3f) & 0xa6U) == 0) {
      if ((1L << (uVar1 & 0x3f) & 0x48U) != 0) {
        lVar7 = *(long *)(param_1 + lVar7);
        func_0x00010c2711a0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 == 0) {
          uVar6 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(param_1 + _DAT_11275cffc);
          func_0x00010bf0e960(uVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          uVar5 = uVar3;
          _objc_opt_isKindOfClass(uVar3,puVar4);
          uVar6 = (uint)uVar5;
          _objc_release(uVar3);
          _objc_release(uVar2);
        }
        _objc_release(lVar7);
      }
    }
    else {
      uVar6 = 1;
    }
  }
  return uVar6 & 1;
}



/* Entry: 106d2ffcc; end: 106d30117; -[SCMemoriesOperaSnapChromeViewModel _snapTimeFormattedString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2ffcc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275cffc);
  func_0x00010b5f7a24(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf44640();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2bedc0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf44640(puVar2,param_2,4,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2bedc0();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  if (puVar4 == puVar6) {
    func_0x00010c22d3a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0c7400(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = puVar2;
  func_0x00010c25d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106d30118; end: 106d30167; -[SCMemoriesOperaSnapChromeViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d30118(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275d004,0);
  _objc_storeStrong(param_1 + _DAT_11275d000,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275cffc,0);
  return;
}



/* Entry: 106d30168; end: 106d308b7; +[SCMemoriesSnapContentPageModelResolver convertInitialPageDataWithConfiguration:entryType:isPrivate:loadingState:mediaType:singleDataSourceId:snapHighlightState:snapId:progressBarModel:] */

void FUN_106d30168(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9
                  ,undefined8 param_10,long param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar1 = PTR_PTR_1126b2368;
  _objc_retain(param_8);
  _objc_opt_new();
  func_0x00010c2b53a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_10;
  func_0x000108018afc(param_10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab660(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010c1531a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c99e0;
  func_0x00010bf24b40(PTR_PTR_1126c99e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,param_8,puVar4);
  _objc_release(param_8);
  _objc_release(puVar4);
  if (10 < param_7 - 2U) {
    func_0x00010c1d0640(puVar3,param_2,PTR____kCFBooleanTrue_11034ab68,
                        &PTR____CFConstantStringClassReference_110f0bd78);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0e9fe0(param_1,param_2,param_7);
  func_0x00010c0df840(puVar4,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110f0be98);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c99e0;
  func_0x00010bf24a80(PTR_PTR_1126c99e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,puVar4,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar3,param_2,param_10,&PTR____CFConstantStringClassReference_110f0c998);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010b5f9ff0(param_7);
  func_0x00010c0df780(puVar4,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110db9478);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110f0bc38);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6 != 0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c99e0;
  func_0x00010bf24be0(PTR_PTR_1126c99e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,puVar4,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar3,param_2,PTR____kCFBooleanTrue_11034ab68,
                      &PTR____CFConstantStringClassReference_110f0bcf8);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_9);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c99e0;
  func_0x00010bf24ba0(PTR_PTR_1126c99e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,puVar4,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  lVar6 = param_3;
  func_0x00010c2300e0();
  if ((int)lVar6 != 0) {
    func_0x00010c1d0640(puVar3,param_2,PTR____kCFBooleanTrue_11034ab68,
                        &PTR____CFConstantStringClassReference_110f0dc58);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110f0e438);
  _objc_release(puVar4);
  lVar6 = param_3;
  func_0x00010bf617e0();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (lVar6 != 0) {
    puVar7 = puVar3;
    func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110f0e2b8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    if (puVar7 != (undefined *)0x0) {
      puVar5 = puVar7;
    }
    _objc_retain(puVar5);
    _objc_release(puVar7);
    lVar6 = param_3;
    func_0x00010bf617e0(param_3);
    puVar7 = puVar5;
    func_0x00010bf09f60(puVar5,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c1d0640(puVar3,param_2,puVar7,&PTR____CFConstantStringClassReference_110f0e2b8);
    _objc_release(puVar7);
  }
  if (param_11 != 0) {
    puVar7 = puVar3;
    func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110f0e2b8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    if (puVar7 != (undefined *)0x0) {
      puVar5 = puVar7;
    }
    _objc_retain(puVar5);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126b3b00;
    _objc_opt_class(PTR_PTR_1126b3b00);
    puVar8 = puVar5;
    func_0x00010bf09f60(puVar5,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c1d0640(puVar3,param_2,puVar8,&PTR____CFConstantStringClassReference_110f0e2b8);
    puVar7 = PTR_PTR_1126b3af0;
    _objc_alloc(PTR_PTR_1126b3af0);
    lVar6 = param_11;
    func_0x00010c23fa00(param_11);
    lVar9 = param_11;
    func_0x00010c2415a0(param_11);
    func_0x00010c054900(puVar7,param_2,lVar6,lVar9,0);
    func_0x00010c1d0640(puVar3,param_2,puVar7,&PTR____CFConstantStringClassReference_110eb9618);
    puVar5 = PTR____kCFBooleanTrue_11034ab68;
    func_0x00010c1d0640(puVar3,param_2,PTR____kCFBooleanTrue_11034ab68,
                        &PTR____CFConstantStringClassReference_110f0d618);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(0x402e000000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3,param_2,puVar10,&PTR____CFConstantStringClassReference_110f0d5f8);
    _objc_release(puVar10);
    func_0x00010c1d0640(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111184d90,
                        &PTR____CFConstantStringClassReference_110eb9638);
    func_0x00010c1d0640(puVar3,param_2,puVar5,&PTR____CFConstantStringClassReference_110eb9658);
    _objc_release(puVar7);
    _objc_release(puVar8);
  }
  lVar6 = param_3;
  func_0x00010c072c20();
  if ((int)lVar6 != 0) {
    lVar6 = param_3;
    func_0x00010c0eaa60();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    if (lVar9 != 0) {
      puVar5 = puVar3;
      func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110f0e2b8);
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 != (undefined *)0x0) {
        puVar4 = puVar5;
      }
      _objc_retain(puVar4);
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126d2400;
      _objc_opt_class(PTR_PTR_1126d2400);
      puVar7 = puVar4;
      func_0x00010bf09f60(puVar4,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010c1d0640(puVar3,param_2,puVar7,&PTR____CFConstantStringClassReference_110f0e2b8);
      _objc_release(puVar7);
    }
  }
  lVar6 = param_3;
  func_0x00010c0eaa60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010bf529e0();
  _objc_release(lVar6);
  if (lVar9 != 0) {
    lVar6 = param_3;
    func_0x00010c0eaa60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar3,param_2,lVar6);
    _objc_release(lVar6);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = param_3;
  func_0x00010bfa32a0(param_3);
  func_0x00010c0df840(puVar4,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c99e0;
  func_0x00010bf249c0(PTR_PTR_1126c99e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,puVar4,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b23e0;
  _objc_alloc(PTR_PTR_1126b23e0);
  func_0x00010c033240();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106d308b8; end: 106d30ddf; +[SCMemoriesSnapContentPageModelResolver convertPageDataFromSnap:entryInfo:snapHighlightState:isFailedEntry:existingProperties:configuration:memoriesBackupManager:userId:circumstanceEngine:showInternalFtSRows:] */

void FUN_106d308b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_10);
  func_0x00010c0d3c80();
  func_0x00010bf97860(param_4);
  func_0x00010b5fa33c();
  func_0x00010bf21520(param_8);
  uVar1 = param_1;
  func_0x00010be6f580(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(param_7);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126d24b0;
  _objc_alloc();
  func_0x00010c017100();
  _objc_release(param_10);
  puVar3 = PTR_PTR_1126d23f0;
  func_0x00010bdc1340(PTR_PTR_1126d23f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(param_7);
  _objc_release(puVar3);
  uVar1 = param_8;
  func_0x00010c22ff80();
  if ((int)uVar1 != 0) {
    func_0x00010c1d0640(param_7);
    func_0x00010c1d0640(param_7);
    func_0x00010c1d0640(param_7);
    func_0x00010c2337c0(param_8);
    func_0x00010c233f20(param_8);
    func_0x00010c233e80();
    uVar1 = param_1;
    func_0x00010beee960(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_7);
    _objc_release(uVar1);
    func_0x00010bdc44c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_7);
    _objc_release(param_1);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf8b160(param_3);
  func_0x00010c0df740(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_7);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010b5fa528(param_3);
  func_0x00010c0df6e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_7);
  _objc_release(puVar3);
  func_0x00010c1d0640(param_7);
  puVar3 = puVar2;
  func_0x00010c22f4a0();
  if ((int)puVar3 != 0) {
    puVar3 = puVar2;
    func_0x00010bf39220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    _objc_release(puVar3);
    if (puVar4 != (undefined *)0x0) {
      func_0x00010c1d0640(param_7);
    }
  }
  uVar1 = param_8;
  func_0x00010c2337c0();
  uVar5 = param_4;
  func_0x00010c07b240();
  if (((int)uVar1 != 0) && ((int)uVar5 == 0)) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_7);
    _objc_release(puVar3);
  }
  puVar4 = param_7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (puVar4 != (undefined *)0x0) {
    puVar3 = puVar4;
  }
  _objc_retain(puVar3);
  _objc_release(puVar4);
  _objc_opt_class(PTR_PTR_1126d2410);
  puVar4 = puVar3;
  func_0x00010bf09f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c1d0640(param_7);
  func_0x00010b5fc6f0(param_3,param_11);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126d24b8;
  func_0x00010bf8c2a0(PTR_PTR_1126d24b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_7);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b23e0;
  _objc_alloc(PTR_PTR_1126b23e0);
  func_0x00010c033240();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106d30de0; end: 106d31343; +[SCMemoriesSnapContentPageModelResolver actionMenuBarButtonsForSnap:entryInfo:snapHighlightState:isFailedEntry:shouldShowFavoriteButton:shouldShowRemixButton:memoriesBackupManager:circumstanceEngine:showPromoteSnapButton:showInternalFtSRows:] */

undefined *
FUN_106d30de0(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
             undefined4 param_6,uint param_7,uint param_8,undefined8 param_9,undefined8 param_10,
             undefined4 param_11)

{
  uint uVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined **ppuVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined **ppuVar18;
  ulong uVar19;
  uint uVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined **ppuStack_288;
  undefined *puStack_280;
  long lStack_278;
  ulong uStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  ulong uStack_250;
  undefined ***pppuStack_248;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined *puStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined1 uStack_1b0;
  undefined1 uStack_1af;
  undefined1 uStack_1ae;
  undefined1 uStack_1ad;
  undefined1 uStack_1ac;
  undefined1 uStack_1ab;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined1 uStack_197;
  ulong uStack_190;
  undefined1 uStack_188;
  undefined1 uStack_187;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined *puStack_178;
  uint uStack_170;
  uint uStack_16c;
  int iStack_168;
  uint uStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined **ppuStack_130;
  long lStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_138 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_148 = param_9;
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  puStack_140 = puVar21;
  func_0x00010bf97860();
  func_0x00010b5fa33c();
  if (uVar5 == 8) {
    uStack_170 = 0;
  }
  else {
    lVar6 = param_3;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_170 = (uint)(lVar6 == 0);
    _objc_release();
  }
  uVar5 = param_4;
  func_0x00010bf97860();
  func_0x00010b5fa33c();
  uStack_15c = param_6;
  if (uVar5 == 8) {
    lVar6 = param_3;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = (uint)(lVar6 != 0);
    _objc_release();
  }
  else {
    uVar20 = 1;
  }
  uVar5 = param_4;
  func_0x00010c07b240();
  uVar7 = param_10;
  func_0x000108435e70();
  uStack_160 = param_8;
  if ((int)uVar7 == 0) {
    ppuVar18 = (undefined **)0x0;
  }
  else {
    lVar6 = param_3;
    func_0x00010b5fa70c();
    ppuVar18 = (undefined **)(ulong)((uint)lVar6 ^ 1);
  }
  lVar6 = param_3;
  func_0x00010b5fa70c();
  uStack_164 = (uint)lVar6 ^ 1;
  lVar6 = param_3;
  func_0x00010b5fc6f0(param_3,param_10);
  lVar17 = param_3;
  func_0x00010b5f8c08();
  iStack_168 = (int)lVar17;
  if (iStack_168 == 0) {
    uStack_16c = 0;
  }
  else {
    uVar19 = param_4;
    func_0x00010bf3d240();
    uStack_16c = (uint)((uVar19 & 0xffe0) == 0);
  }
  uStack_158 = param_10;
  uVar1 = param_7 & uVar20 & ((uint)uVar5 ^ 1);
  uVar19 = (ulong)uVar1;
  uVar5 = param_4;
  func_0x00010bf97860();
  func_0x00010b5fa33c();
  uVar2 = (undefined1)uVar1;
  lStack_150 = param_3;
  if (uVar5 == 0) {
LAB_106d30f9c:
    puStack_178 = PTR_PTR_1126d2420;
    uVar5 = param_4;
    func_0x00010bf97860();
    uStack_17c = (undefined4)uVar5;
    uVar5 = param_4;
    func_0x00010c071a80();
    uStack_180 = (undefined4)uVar5;
    uVar5 = param_4;
    func_0x00010c07b240();
    func_0x00010c079d00(param_4);
    func_0x00010b5fa528(param_3);
    uVar20 = uStack_160 & uVar20;
    puVar21 = (undefined *)(ulong)uVar20;
    uVar22 = param_4;
    func_0x00010bf3d240();
    uStack_188 = (undefined1)param_11;
    uStack_197 = (undefined1)uStack_16c;
    uStack_198 = (undefined1)iStack_168;
    uStack_1a8 = uStack_138;
    uStack_1a0 = uStack_148;
    uStack_1ac = (undefined1)uStack_164;
    uStack_1ae = (undefined1)uStack_170;
    uStack_1af = (undefined1)uVar20;
    puVar10 = puStack_178;
    uStack_1b0 = uVar2;
    uStack_1ad = (char)ppuVar18;
    uStack_190 = uVar22;
    uStack_187 = (char)lVar6;
    func_0x00010beeeba0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar5 = param_4;
    func_0x00010bf97860();
    func_0x00010b5fa33c();
    puVar21 = PTR_PTR_1126d2420;
    if (uVar5 == 8) goto LAB_106d30f9c;
    uVar5 = param_4;
    func_0x00010bf97860();
    uStack_170 = (uint)uVar5;
    uVar5 = param_4;
    func_0x00010c071a80();
    puStack_178 = (undefined *)CONCAT44(puStack_178._4_4_,(int)uVar5);
    uVar5 = param_4;
    func_0x00010c07b240();
    uStack_17c = (undefined4)uVar5;
    uVar5 = param_4;
    func_0x00010c080cc0();
    uStack_180 = (undefined4)uVar5;
    uVar5 = param_4;
    func_0x00010bf977c0();
    uVar22 = param_4;
    func_0x00010c079e40();
    uVar8 = param_4;
    func_0x00010bf3d240();
    if (param_11._1_1_ == '\0') {
      uStack_187 = false;
    }
    else {
      uVar9 = param_4;
      func_0x00010bf97860();
      func_0x00010b5fa33c();
      uStack_187 = uVar9 == 5;
    }
    uStack_1b0 = (int)uVar5 == 9;
    uStack_197 = (undefined1)uStack_16c;
    uStack_198 = (undefined1)iStack_168;
    uStack_1a8 = uStack_138;
    uStack_1a0 = uStack_148;
    uStack_1ab = (undefined1)uStack_164;
    uStack_1ad = (undefined1)uStack_160;
    uStack_1af = (undefined1)uVar22;
    uVar5 = (ulong)puStack_178 & 0xffffffff;
    puVar10 = puVar21;
    uStack_1ae = uVar2;
    uStack_1ac = (char)ppuVar18;
    uStack_190 = uVar8;
    uStack_188 = (char)lVar6;
    func_0x00010beeeb80();
    _objc_retainAutoreleasedReturnValue();
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  ppuStack_130 = (undefined **)0x0;
  uStack_118 = 0;
  puStack_120 = (ulong *)0x0;
  _objc_retain();
  pppuVar14 = &ppuStack_130;
  puVar16 = auStack_f0;
  lVar17 = 0x10;
  puVar11 = puVar10;
  func_0x00010bf52a60();
  if (puVar11 != (undefined *)0x0) {
    uVar19 = *puStack_120;
    ppuVar18 = &PTR_PTR_1126d2000;
    do {
      puVar21 = (undefined *)0x0;
      do {
        if (*puStack_120 != uVar19) {
          _objc_enumerationMutation(puVar10);
        }
        uVar22 = *(ulong *)(lStack_128 + (long)puVar21 * 8);
        if ((int)lVar6 == 0) {
          bVar3 = false;
        }
        else {
          uVar8 = uVar22;
          func_0x00010c0ec1e0();
          if ((((uVar8 == 3) || (uVar8 = uVar22, func_0x00010c0ec1e0(), uVar8 == 0xf)) ||
              (uVar8 = uVar22, func_0x00010c0ec1e0(), uVar8 == 4)) ||
             ((uVar8 = uVar22, func_0x00010c0ec1e0(), uVar8 == 0 ||
              (uVar8 = uVar22, func_0x00010c0ec1e0(), uVar8 == 10)))) {
            bVar3 = true;
          }
          else {
            uVar8 = uVar22;
            func_0x00010c0ec1e0();
            bVar3 = uVar8 == 0xb;
          }
        }
        uVar8 = uVar22;
        func_0x00010c0ec300();
        if (((uVar8 & 1) != 0) || (func_0x00010c0ec1e0(), uVar22 == 5 || bVar3)) {
          puVar12 = PTR_PTR_1126d2420;
          func_0x00010c07b240(param_4);
          func_0x00010bf515c0(puVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puStack_140);
          _objc_release(puVar12);
        }
        puVar21 = puVar21 + 1;
      } while (puVar11 != puVar21);
      pppuVar14 = &ppuStack_130;
      puVar16 = auStack_f0;
      lVar17 = 0x10;
      puVar11 = puVar10;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined *)0x0);
  }
  _objc_release(puVar10);
  puVar11 = puStack_140;
  puVar12 = puStack_140;
  func_0x00010bf51e00();
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(uStack_158);
  _objc_release(uStack_148);
  _objc_release(param_4);
  _objc_release(lStack_150);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puStack_1c8 = puVar11;
  pcStack_1b8 = FUN_106d31344;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = (undefined **)pppuVar14;
  uStack_1e0 = uVar19;
  puStack_1d8 = puVar12;
  ppuStack_1d0 = ppuVar18;
  puStack_1c0 = &stack0xfffffffffffffff0;
  _objc_retain(pppuVar14);
  _objc_retain(uVar5);
  if (lVar17 == 2) {
    if (puVar16 != (undefined1 *)0x4) {
      pppuVar13 = pppuVar14;
      func_0x00010c0d21e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (pppuVar13 == (undefined ***)0x0) {
        ppuStack_228 = &PTR____CFConstantStringClassReference_110f0c258;
        ppuStack_220 = &PTR____CFConstantStringClassReference_110f0bc78;
        ppuStack_218 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8fe0;
        puStack_210 = PTR____kCFBooleanFalse_11034ab60;
        ppuVar15 = (undefined **)&ppuStack_218;
        goto LAB_106d31670;
      }
      goto LAB_106d31438;
    }
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
LAB_106d314f4:
    pppuVar13 = pppuVar14;
    func_0x00010bfed740();
    if (((int)pppuVar13 != 0) &&
       (pppuVar13 = pppuVar14, func_0x00010b5fa088(), 10 < (long)pppuVar13 - 2U))
    goto LAB_106d315b0;
    func_0x00010c1d0640(puVar10);
    ppuVar15 = (undefined **)PTR____kCFBooleanTrue_11034ab68;
    func_0x00010c1d0640(puVar10);
    pppuVar13 = pppuVar14;
    func_0x00010b5fa088();
    iVar4 = (int)pppuVar13;
    func_0x00010b5fa4c8();
    if (iVar4 != 0) {
LAB_106d3155c:
      pppuVar13 = (undefined ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf8b160(pppuVar14);
      func_0x00010c0df740();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = (undefined **)pppuVar13;
      func_0x00010c1d0640(puVar10);
      _objc_release(pppuVar13);
    }
LAB_106d315dc:
    puVar12 = puVar10;
    func_0x00010bf51e00();
    _objc_release(puVar10);
  }
  else {
    if (lVar17 != 1) {
LAB_106d31438:
      puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      if ((undefined1 *)0x7 < puVar16) goto LAB_106d315dc;
      if ((1L << ((ulong)puVar16 & 0x3f) & 0x6eU) == 0) {
        if ((1L << ((ulong)puVar16 & 0x3f) & 0x81U) == 0) goto LAB_106d314f4;
LAB_106d315b0:
        func_0x00010c1d0640(puVar10);
        ppuVar15 = (undefined **)PTR____kCFBooleanFalse_11034ab60;
      }
      else {
        pppuVar13 = pppuVar14;
        func_0x00010bfed740();
        if ((int)pppuVar13 != 0) goto LAB_106d315b0;
        func_0x00010c1d0640(puVar10);
        ppuVar15 = (undefined **)PTR____kCFBooleanTrue_11034ab68;
        func_0x00010c1d0640(puVar10);
        pppuVar13 = pppuVar14;
        func_0x00010b5fa088();
        iVar4 = (int)pppuVar13;
        func_0x00010b5fa4c8();
        if (iVar4 == 0) goto LAB_106d315dc;
        if (puVar16 != (undefined1 *)0x5) goto LAB_106d3155c;
        ppuVar15 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184db0;
      }
      func_0x00010c1d0640(puVar10);
      goto LAB_106d315dc;
    }
    pppuVar13 = pppuVar14;
    func_0x00010c0d21e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (pppuVar13 != (undefined ***)0x0) goto LAB_106d31438;
    ppuStack_208 = &PTR____CFConstantStringClassReference_110f0c258;
    ppuStack_200 = &PTR____CFConstantStringClassReference_110f0bc78;
    ppuStack_1f8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8fe0;
    puStack_1f0 = PTR____kCFBooleanFalse_11034ab60;
    ppuVar15 = (undefined **)&ppuStack_1f8;
LAB_106d31670:
    puVar10 = (undefined *)0x0;
    puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar5);
  _objc_release(pppuVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_238 = FUN_106d3168c;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_270 = param_4;
  puStack_268 = puVar21;
  puStack_260 = puVar12;
  puStack_258 = puVar10;
  uStack_250 = uVar5;
  pppuStack_248 = pppuVar14;
  ppuStack_240 = &puStack_1c0;
  _objc_retain(ppuVar15);
  pppuVar14 = (undefined ***)ppuVar15;
  func_0x00010b5f7a24(ppuVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0b4a80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c26f200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar10);
  ppuVar18 = &PTR____CFConstantStringClassReference_110e278f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e278f8,0);
  _objc_retainAutoreleasedReturnValue();
  pppuVar13 = (undefined ***)ppuVar15;
  func_0x00010b5fa088();
  _objc_release(ppuVar15);
  if ((long)pppuVar13 - 2U < 0xb) {
    _objc_release(ppuVar18);
LAB_106d317b0:
    ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = (undefined **)0x0;
    bVar3 = true;
  }
  else {
    if (ppuVar18 == (undefined **)0x0) goto LAB_106d317b0;
    bVar3 = false;
    ppuVar15 = ppuVar18;
  }
  pppuVar13 = &ppuStack_288;
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_288 = ppuVar15;
  puStack_280 = puVar21;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (bVar3) {
    _objc_release(ppuVar15);
  }
  _objc_release(ppuVar18);
  _objc_release(puVar21);
  _objc_release(pppuVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
    ___stack_chk_fail();
    if (pppuVar13 < (undefined ***)0xd) {
      if ((1L << ((ulong)pppuVar13 & 0x3f) & 0x1564U) != 0) {
        return (undefined *)0x5;
      }
      if ((1L << ((ulong)pppuVar13 & 0x3f) & 0xa98U) != 0) {
        return (undefined *)0x2;
      }
      if (pppuVar13 == (undefined ***)0x1) {
        return (undefined *)0x6;
      }
    }
    return (undefined *)(ulong)(pppuVar13 != (undefined ***)0x270f);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return puVar12;
}



/* Entry: 106d31344; end: 106d3168b; +[SCMemoriesSnapContentPageModelResolver _pagePropertiesForMediaPlayabackWithSnap:entryType:browseStyle:circumstanceEngine:] */

undefined *
FUN_106d31344(undefined8 param_1,undefined8 param_2,undefined ***param_3,ulong param_4,long param_5,
             undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined ***pppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = (undefined **)param_3;
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (param_5 == 2) {
    if (param_4 != 4) {
      pppuVar4 = param_3;
      func_0x00010c0d21e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (pppuVar4 == (undefined ***)0x0) {
        ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8fe0;
        puStack_60 = PTR____kCFBooleanFalse_11034ab60;
        ppuVar8 = (undefined **)&ppuStack_68;
        goto LAB_106d31670;
      }
      goto LAB_106d31438;
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
LAB_106d314f4:
    pppuVar4 = param_3;
    func_0x00010bfed740();
    if (((int)pppuVar4 != 0) &&
       (pppuVar4 = param_3, func_0x00010b5fa088(), 10 < (long)pppuVar4 - 2U)) goto LAB_106d315b0;
    func_0x00010c1d0640(puVar3);
    ppuVar8 = (undefined **)PTR____kCFBooleanTrue_11034ab68;
    func_0x00010c1d0640(puVar3);
    pppuVar4 = param_3;
    func_0x00010b5fa088();
    iVar2 = (int)pppuVar4;
    func_0x00010b5fa4c8();
    if (iVar2 != 0) {
LAB_106d3155c:
      pppuVar4 = (undefined ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf8b160(param_3);
      func_0x00010c0df740();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = (undefined **)pppuVar4;
      func_0x00010c1d0640(puVar3);
      _objc_release(pppuVar4);
    }
LAB_106d315dc:
    puVar5 = puVar3;
    func_0x00010bf51e00();
    _objc_release(puVar3);
  }
  else {
    if (param_5 != 1) {
LAB_106d31438:
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      if (7 < param_4) goto LAB_106d315dc;
      if ((1L << (param_4 & 0x3f) & 0x6eU) == 0) {
        if ((1L << (param_4 & 0x3f) & 0x81U) == 0) goto LAB_106d314f4;
LAB_106d315b0:
        func_0x00010c1d0640(puVar3);
        ppuVar8 = (undefined **)PTR____kCFBooleanFalse_11034ab60;
      }
      else {
        pppuVar4 = param_3;
        func_0x00010bfed740();
        if ((int)pppuVar4 != 0) goto LAB_106d315b0;
        func_0x00010c1d0640(puVar3);
        ppuVar8 = (undefined **)PTR____kCFBooleanTrue_11034ab68;
        func_0x00010c1d0640(puVar3);
        pppuVar4 = param_3;
        func_0x00010b5fa088();
        iVar2 = (int)pppuVar4;
        func_0x00010b5fa4c8();
        if (iVar2 == 0) goto LAB_106d315dc;
        if (param_4 != 5) goto LAB_106d3155c;
        ppuVar8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184db0;
      }
      func_0x00010c1d0640(puVar3);
      goto LAB_106d315dc;
    }
    pppuVar4 = param_3;
    func_0x00010c0d21e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (pppuVar4 != (undefined ***)0x0) goto LAB_106d31438;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110f0c258;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110f0bc78;
    ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8fe0;
    puStack_40 = PTR____kCFBooleanFalse_11034ab60;
    ppuVar8 = (undefined **)&ppuStack_48;
LAB_106d31670:
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_6);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar8);
  pppuVar4 = (undefined ***)ppuVar8;
  func_0x00010b5f7a24(ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0b4a80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c26f200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  ppuVar9 = &PTR____CFConstantStringClassReference_110e278f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e278f8,0);
  _objc_retainAutoreleasedReturnValue();
  pppuVar7 = (undefined ***)ppuVar8;
  func_0x00010b5fa088();
  _objc_release(ppuVar8);
  if ((long)pppuVar7 - 2U < 0xb) {
    _objc_release(ppuVar9);
LAB_106d317b0:
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = (undefined **)0x0;
    bVar1 = true;
  }
  else {
    if (ppuVar9 == (undefined **)0x0) goto LAB_106d317b0;
    bVar1 = false;
    ppuVar8 = ppuVar9;
  }
  pppuVar7 = &ppuStack_d8;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_d8 = ppuVar8;
  puStack_d0 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (bVar1) {
    _objc_release(ppuVar8);
  }
  _objc_release(ppuVar9);
  _objc_release(puVar3);
  _objc_release(pppuVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    if (pppuVar7 < (undefined ***)0xd) {
      if ((1L << ((ulong)pppuVar7 & 0x3f) & 0x1564U) != 0) {
        return (undefined *)0x5;
      }
      if ((1L << ((ulong)pppuVar7 & 0x3f) & 0xa98U) != 0) {
        return (undefined *)0x2;
      }
      if (pppuVar7 == (undefined ***)0x1) {
        return (undefined *)0x6;
      }
    }
    return (undefined *)(ulong)(pppuVar7 != (undefined ***)0x270f);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 106d3168c; end: 106d31863; +[SCMemoriesSnapContentPageModelResolver _actionMenuHeaderForSnap:] */

undefined * FUN_106d3168c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010b5f7a24(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0b4a80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c26f200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  ppuVar9 = &PTR____CFConstantStringClassReference_110e278f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e278f8,0);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010b5fa088();
  _objc_release(param_3);
  if (lVar6 - 2U < 0xb) {
    _objc_release(ppuVar9);
  }
  else if (ppuVar9 != (undefined **)0x0) {
    bVar1 = false;
    ppuVar7 = ppuVar9;
    goto LAB_106d317d0;
  }
  ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = (undefined **)0x0;
  bVar1 = true;
LAB_106d317d0:
  pppuVar8 = &ppuStack_58;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_58 = ppuVar7;
  puStack_50 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (bVar1) {
    _objc_release(ppuVar7);
  }
  _objc_release(ppuVar9);
  _objc_release(puVar5);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  if (pppuVar8 < (undefined ***)0xd) {
    if ((1L << ((ulong)pppuVar8 & 0x3f) & 0x1564U) != 0) {
      return (undefined *)0x5;
    }
    if ((1L << ((ulong)pppuVar8 & 0x3f) & 0xa98U) != 0) {
      return (undefined *)0x2;
    }
    if (pppuVar8 == (undefined ***)0x1) {
      return (undefined *)0x6;
    }
  }
  return (undefined *)(ulong)(pppuVar8 != (undefined ***)0x270f);
}



/* Entry: 106d31864; end: 106d318c7; +[SCMemoriesSnapContentPageModelResolver operaBaseLayerTypeForSnapMediaType:] */

undefined1 FUN_106d31864(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0xd) {
    if ((1L << (param_3 & 0x3f) & 0x1564U) != 0) {
      return 5;
    }
    if ((1L << (param_3 & 0x3f) & 0xa98U) != 0) {
      return 2;
    }
    if (param_3 == 1) {
      return 6;
    }
  }
  return param_3 != 9999;
}



/* Entry: 106d318c8; end: 106d321ef; -[SCGalleryOperaMediaManager initWithDataObjectContext:userSession:musicMediaLoader:spectaclesAuxiliaryContentServices:userTrackedLogger:circumstanceEngine:previewAssetVideoProviderFactory:spectaclesContentDataSource:ngsmePlayerFactory:snapDocOperaParser:memoriesStreamingManager:memoriesMergedDataSource:snapDocManager:encryptedContentManager:voiceoverMediaLoader:memoriesCloudFS:memoriesCachingMediaHelper:galleryLogger:cachingMediaManager:gallerySearchIndexer:memoriesTrackingImageProcessCommandScopeExposer:audioProcessingSessionFactory:reverseAudioCache:snapDocDownloadingService:memoriesSnapDocEncryptionManager:memoriesExperimentService:creativeToolsMemoriesResources:grapheneRegistry:cameraConfig:coreConfigProvider:musicServices:cloudFSServices:genAIDreamsService:previewABProvider:] */

undefined8 *
FUN_106d318c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain();
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
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  puStack_70 = PTR_PTR_1126f6950;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[4];
    puVar1[4] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_22;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x26,param_23);
    _objc_retain(param_24);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_34;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    lVar4 = param_8;
    func_0x000108ec1730();
    *(bool *)(puVar1 + 0x33) = 0 < lVar4;
    lVar4 = param_8;
    func_0x000108ec1730();
    puVar1[0x34] = lVar4;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar5);
    puVar3 = PTR_PTR_1126d24c0;
    _objc_alloc();
    func_0x00010c034960();
    uVar2 = puVar1[0x37];
    puVar1[0x37] = puVar3;
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_36;
    _objc_release(uVar2);
  }
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106d321f0; end: 106d3223b; -[SCGalleryOperaMediaManager dealloc] */

void FUN_106d321f0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bde0100();
  func_0x00010bdda380(param_1);
  puStack_28 = PTR_PTR_1126f6950;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106d3223c; end: 106d3223f; -[SCGalleryOperaMediaManager startToLoadThumbnailForSnap:snapDetail:completion:] */

void FUN_106d3223c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadGallerySnapFirstFrame_snapD_112570f28);
  return;
}



/* Entry: 106d32240; end: 106d32243; -[SCGalleryOperaMediaManager startToLoadGallerySnap:isPrivateSnap:isFromMiniCarousel:shouldShowSoundPill:snapDetail:entryInfo:completion:] */

void FUN_106d32240(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec1c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startToLoadGallerySnap_isPrivat_11258e0c8);
  return;
}



/* Entry: 106d32244; end: 106d324eb; -[SCGalleryOperaMediaManager _startToLoadSnapDocBasedOperaSnap:snap:entryInfo:snapDetail:shouldShowSoundPill:isFromMiniCarousel:completion:completionQueue:] */

/* WARNING: Removing unreachable block (ram,0x000106d32358) */

void FUN_106d32244(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  func_0x00010c251240(param_1);
  lVar1 = param_4;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000108020568();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(lVar1);
  if (lVar2 == 0) {
    (**(code **)(in_stack_00000000 + 0x10))(in_stack_00000000,0,0,0,0);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x140);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0bc460();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_release(lVar2);
    _objc_release(uVar3);
    lVar1 = param_4;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000108017660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar3 = param_5;
    func_0x00010bf977c0();
    if ((int)uVar3 != 0) {
      func_0x00010bf3d240();
    }
    func_0x00010c07b240(param_5);
    _objc_retain(in_stack_00000008);
    _objc_retain(in_stack_00000000);
    func_0x00010be19d60(param_1);
    _objc_release(in_stack_00000000);
    _objc_release(in_stack_00000008);
    _objc_release(lVar2);
    _objc_release(0);
    _objc_release(uVar4);
  }
  _objc_release(0);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d324ec; end: 106d325cb;  */

void FUN_106d324ec(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

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
  undefined1 uStack_48;
  undefined1 uStack_47;
  
  _objc_retain(param_2);
  _objc_retain(param_5);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106d325cc;
  puStack_68 = &UNK_11084e040;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_60 = param_2;
  uStack_58 = param_5;
  uStack_50 = uVar2;
  uStack_48 = param_3;
  uStack_47 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(param_2);
  return;
}



/* Entry: 106d325cc; end: 106d325e7;  */

void FUN_106d325cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d325e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined1 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x39),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106d325e8; end: 106d32837; -[SCGalleryOperaMediaManager _startToLoadTimelineSnap:snaps:entryInfo:entryAssets:snapDetail:shouldShowSoundPill:isFromMiniCarousel:completion:] */

void FUN_106d325e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  uVar1 = param_4;
  func_0x00010bfb1920(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251240(param_1);
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010bf97200(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_11);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_6f = param_9;
  uStack_70 = param_8;
  func_0x00010bfa6820(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_11);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d32838; end: 106d32923;  */

void FUN_106d32838(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (((lVar1 == 0) || (param_2 != 0)) || (param_3 == 0)) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0,0,0,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf97200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3d240(*(undefined8 *)(param_1 + 0x30));
    func_0x00010be19c60(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d32924; end: 106d32927; -[SCGalleryOperaMediaManager startToLoadMemoriesOperaSnap:snapDetail:shouldShowSoundPill:isFromMiniCarousel:completion:] */

void FUN_106d32924(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec1cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startToLoadMemoriesOperaSnap_sn_11258e0d8);
  return;
}



/* Entry: 106d32928; end: 106d32a9b; -[SCGalleryOperaMediaManager _startToLoadMemoriesOperaSnap:snapDetail:shouldShowSoundPill:isFromMiniCarousel:completion:] */

void FUN_106d32928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106d32aa4;
  puStack_90 = &UNK_110977078;
  uStack_88 = param_1;
  _objc_retain(param_3);
  uStack_80 = param_3;
  _objc_retain(param_4);
  uStack_78 = param_4;
  uStack_68 = param_5;
  uStack_67 = param_6;
  _objc_retain(param_7);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_106d32ae8;
  puStack_d8 = &UNK_1109770a8;
  uStack_d0 = param_1;
  uStack_c8 = param_3;
  uStack_c0 = param_4;
  uStack_b8 = param_7;
  uStack_b0 = param_5;
  uStack_af = param_6;
  uStack_70 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0bfe60(param_3,param_2,&PTR___NSConcreteGlobalBlock_110977038,
                      &PTR___NSConcreteGlobalBlock_110977058,&puStack_a8,&puStack_f0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d32a9c; end: 106d32aa3;  */

void FUN_106d32a9c(void)

{
  return;
}



/* Entry: 106d32aa4; end: 106d32ae7;  */

void FUN_106d32aa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bec1d00(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x30),
                      *(undefined1 *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x41));
  return;
}



/* Entry: 106d32ae8; end: 106d32bcf;  */

void FUN_106d32ae8(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_2;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  _objc_release();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec1ce0(uVar1);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d32bd0; end: 106d32d0f; -[SCGalleryOperaMediaManager fetchSnapDetailForSnap:completion:completionQueue:] */

void FUN_106d32bd0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_4 != 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106d32d10;
    puStack_78 = &UNK_1109770d8;
    _objc_retain(param_5);
    uStack_70 = param_5;
    _objc_retain(param_4);
    ppuVar2 = &puStack_90;
    lStack_68 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_106d32de0;
    puStack_b0 = &UNK_11084a9e8;
    _objc_retain(param_3);
    uStack_a8 = param_3;
    lStack_a0 = param_1;
    ppuStack_98 = ppuVar2;
    _objc_retain(ppuVar2);
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_c8);
    _objc_release(ppuStack_98);
    _objc_release(uStack_a8);
    _objc_release(ppuVar2);
    _objc_release(lStack_68);
    _objc_release(uStack_70);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d32d10; end: 106d32dcf;  */

void FUN_106d32d10(long param_1,undefined8 param_2)

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
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106d32dd0;
    puStack_48 = &UNK_11084aaa8;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    _objc_retain(param_2);
    uStack_40 = param_2;
    func_0x00010007380c(lVar1,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(uStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 106d32dd0; end: 106d32ddf;  */

void FUN_106d32dd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d32ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106d32de0; end: 106d32e57;  */

void FUN_106d32de0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010be12380(uVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000106d32e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  return;
}



/* Entry: 106d32e58; end: 106d32e9b; -[SCGalleryOperaMediaManager unloadGallerySnap:] */

void FUN_106d32e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bddab60(param_1,param_2,param_3);
  func_0x00010be8bf60(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d32e9c; end: 106d32f0b; -[SCGalleryOperaMediaManager _requiredLensMediaCloudFileForSnap:] */

void FUN_106d32e9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c13a8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d32f0c; end: 106d32f73; -[SCGalleryOperaMediaManager mediaExistLocallyForGallerySnap:] */

undefined8 FUN_106d32f0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000108018b38(param_3,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 106d32f74; end: 106d3304b; -[SCGalleryOperaMediaManager mediaExistLocallyForMemoriesOperaSnap:] */

undefined1 FUN_106d32f74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 1;
  func_0x00010c0bfe60(param_3);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106d3304c; end: 106d33053;  */

void FUN_106d3304c(void)

{
  return;
}



/* Entry: 106d33054; end: 106d3329b;  */

void FUN_106d33054(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c0c4d60();
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar2;
      lVar5 = param_2;
      if (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) != '\x01') goto LAB_106d33244;
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 = param_4, lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x20);
      uVar4 = param_3;
      func_0x00010bf97200(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be5e720();
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar2;
      _objc_release(uVar4);
      if (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) != '\x01') goto LAB_106d33244;
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = param_4;
    func_0x00010bf52a60();
  }
LAB_106d33244:
  _objc_release(lVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 106d3329c; end: 106d3329f;  */

void FUN_106d3329c(void)

{
  return;
}



/* Entry: 106d332a0; end: 106d3338b; -[SCGalleryOperaMediaManager _mediaExistLocallyForEntryAsset:entryId:] */

undefined8 FUN_106d332a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x108);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf0b260(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf0b760();
  _objc_release(param_3);
  if ((uint)uVar3 < 0x16) {
    func_0x00010b697928(uVar3);
  }
  else {
    uVar3 = 0xfffffffffbadbeef;
  }
  uVar2 = uVar4;
  func_0x00010c13a860(uVar4,param_2,param_4,uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar1 = uVar2;
  func_0x00010c06cde0(uVar2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 106d3338c; end: 106d334a3; -[SCGalleryOperaMediaManager _requireDirectAccessToCloudFileForSnap:snapDetail:] */

ulong FUN_106d3338c(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  int iVar1;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010b5fa088();
  iVar1 = (int)uVar2;
  func_0x00010b5fa4c8();
  puVar4 = PTR_PTR_1126bfb98;
  if ((param_4 == 0) || (iVar1 == 0)) {
LAB_106d33400:
    uVar2 = param_3;
    func_0x00010b5fa088();
    if (10 < uVar2 - 2) {
      uVar2 = param_3;
      func_0x00010b5fa088();
      if (((0xb < uVar2 - 1) || ((0xab3U >> (ulong)((uint)(uVar2 - 1) & 0x1f) & 1) == 0)) &&
         (uVar2 = param_3, func_0x00010b697ae8(param_3,2), (uVar2 & 1) == 0)) {
        uVar5 = 1;
        uVar2 = param_3;
        func_0x00010b697ae8(param_3,1);
        if ((uVar2 & 1) != 0) goto LAB_106d33448;
        uVar2 = param_3;
        func_0x00010b697ae8(param_3,4);
        if ((uVar2 & 1) == 0) {
          uVar5 = param_3;
          func_0x00010b697ae8(param_3,8);
          goto LAB_106d33448;
        }
      }
    }
  }
  else {
    lVar3 = param_4;
    func_0x00010c0ef4a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b580();
    _objc_release(lVar3);
    if (((ulong)puVar4 & 1) == 0) goto LAB_106d33400;
  }
  uVar5 = 1;
LAB_106d33448:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 106d334a4; end: 106d3368f; -[SCGalleryOperaMediaManager _loadUIImage:forSnap:isPrivateSnap:isFromMiniCarousel:shouldShowSoundPill:snapDetail:clientProcessingBitMaskType:completion:] */

void FUN_106d334a4(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 in_stack_fffffffffffffeb0;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)0x0;
  puVar12 = param_7;
  uVar9 = param_8;
  if (param_3 != 0) {
    _objc_retain(param_10);
    _objc_retain(param_8);
    _objc_retain(param_4);
    _objc_retain(param_3);
    uStack_a0 = 0;
    uStack_98 = param_10;
    func_0x00010be4df00(param_1,param_2,param_4,param_5,param_6,param_8,1,param_9);
    puVar11 = PTR_PTR_1126cdc70;
    puVar1 = param_4;
    func_0x00010c241220(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1304c0(puVar11,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x58),param_2,param_3,puVar11);
    _objc_release(param_3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110f0c078;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110f0bc38;
    ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9010;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_78 = puVar11;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_78,&ppuStack_88,2)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72020(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    param_6 = 0;
    puVar1 = param_4;
    param_5 = param_8;
    puVar12 = puVar2;
    uVar9 = param_10;
    func_0x00010be4c980(param_1);
    _objc_release(param_10);
    _objc_release(param_8);
    _objc_release(param_4);
    _objc_release(puVar2);
    _objc_release(puVar11);
    param_4 = param_7;
  }
  uVar3 = (ulong)(param_3 != 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined *)0x0;
  puVar11 = param_4;
  uVar5 = uVar9;
  if (puVar1 != (undefined *)0x0) {
    _objc_retain(uStack_98);
    _objc_retain(uVar9);
    _objc_retain(param_4);
    _objc_retain(puVar1);
    in_stack_fffffffffffffeb0 = 0;
    func_0x00010be4df00(uVar3,param_2,param_4,param_5,param_6,uVar9,1,uStack_a0,0,uStack_98);
    puVar4 = PTR_PTR_1126cdc70;
    puVar2 = param_4;
    func_0x00010c241220(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c120460(puVar4,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c1d0640(*(undefined8 *)(uVar3 + 0x60),param_2,puVar1,puVar4);
    _objc_release(puVar1);
    puVar11 = PTR_PTR_1126bfb98;
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_138 = &PTR____CFConstantStringClassReference_110f0c298;
    ppuStack_130 = &PTR____CFConstantStringClassReference_110f0bc38;
    ppuStack_118 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9010;
    ppuStack_128 = &PTR____CFConstantStringClassReference_110e9e918;
    puStack_120 = puVar4;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0efc0(puVar11,param_2,uVar5);
    func_0x00010c0df6e0(puVar2,param_2,puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_110 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_120,&ppuStack_138,
                        3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72020(puVar6,param_2,puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar2);
    _objc_release(uVar5);
    puVar11 = (undefined *)((ulong)puVar12 & 0xffffffff);
    param_6 = 0;
    puVar2 = param_4;
    param_5 = uVar9;
    puVar12 = puVar6;
    uVar5 = uStack_98;
    func_0x00010be4c980(uVar3,param_2,param_4,puVar11,uVar9,0,puVar6);
    _objc_release(uStack_98);
    _objc_release(uVar9);
    _objc_release(param_4);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
  uVar3 = (ulong)(puVar1 != (undefined *)0x0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  _objc_retain(puVar12);
  _objc_retain(uVar5);
  _objc_retain(in_stack_fffffffffffffeb0);
  func_0x00010bf8b0c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar7 = uVar3;
  func_0x00010c0c4d60(uVar3,param_2,puVar2);
  uVar8 = uVar3;
  func_0x00010be91de0(uVar3,param_2,puVar2,puVar12);
  if (((int)uVar7 == 0) && ((uVar8 & 1) != 0)) {
    uVar9 = *(undefined8 *)(uVar3 + 0x118);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ea040();
    _objc_release(uVar9);
    puVar1 = puVar2;
    func_0x00010b5fa088();
    puVar6 = puVar2;
    func_0x00010bf3d2a0(puVar2);
    lVar10 = (long)(int)puVar6;
    func_0x00010b5fc82c(lVar10);
    if ((puVar1 < (undefined *)0xd) && ((0x1566U >> (ulong)((uint)puVar1 & 0x1f) & 1) != 0)) {
      func_0x00010be14be0(uVar3,param_2,puVar2,puVar11,param_5,param_6,puVar12,lVar10,uVar5,
                          in_stack_fffffffffffffeb0);
    }
    else {
      func_0x00010be19dc0(uVar3,param_2,puVar2,puVar11,param_5,param_6,puVar12,lVar10,uVar5,
                          in_stack_fffffffffffffeb0);
    }
  }
  else {
    puVar1 = puVar2;
    func_0x00010bf3d2a0(puVar2);
    lVar10 = (long)(int)puVar1;
    func_0x00010b5fc82c(lVar10);
    func_0x00010be4d5e0(uVar3,param_2,puVar2,puVar11,param_5,param_6,puVar12,lVar10,uVar5,
                        in_stack_fffffffffffffeb0);
    uVar9 = *(undefined8 *)(uVar3 + 0x118);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ea040();
    _objc_release(uVar9);
  }
  _objc_release(in_stack_fffffffffffffeb0);
  _objc_release(uVar5);
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106d33690; end: 106d338e7; -[SCGalleryOperaMediaManager _loadAVAsset:forSnap:isPrivateSnap:isFromMiniCarousel:shouldShowSoundPill:snapDetail:clientProcessingBitMaskType:completion:] */

void FUN_106d33690(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined *param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 in_stack_ffffffffffffff50;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = 0;
  uVar12 = param_4;
  uVar3 = param_8;
  if (param_3 != 0) {
    _objc_retain(param_10);
    _objc_retain(param_8);
    _objc_retain(param_4);
    _objc_retain(param_3);
    in_stack_ffffffffffffff50 = 0;
    func_0x00010be4df00(param_1,param_2,param_4,param_5,param_6,param_8,1,param_9,0,param_10);
    puVar2 = PTR_PTR_1126cdc70;
    uVar1 = param_4;
    func_0x00010c241220(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c120460(puVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60),param_2,param_3,puVar2);
    _objc_release(param_3);
    puVar4 = PTR_PTR_1126bfb98;
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110f0c298;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110f0bc38;
    ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9010;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110e9e918;
    puStack_80 = puVar2;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0efc0(puVar4,param_2,uVar3);
    func_0x00010c0df6e0(puVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_80,&ppuStack_98,3)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72020(puVar6,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(uVar3);
    uVar12 = (ulong)param_7 & 0xffffffff;
    param_6 = 0;
    uVar1 = param_4;
    param_5 = param_8;
    param_7 = puVar6;
    uVar3 = param_10;
    func_0x00010be4c980(param_1,param_2,param_4,uVar12,param_8,0,puVar6);
    _objc_release(param_10);
    _objc_release(param_8);
    _objc_release(param_4);
    _objc_release(puVar6);
    _objc_release(puVar2);
  }
  uVar7 = (ulong)(param_3 != 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar1);
  _objc_retain(param_7);
  _objc_retain(uVar3);
  _objc_retain(in_stack_ffffffffffffff50);
  func_0x00010bf8b0c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar8 = uVar7;
  func_0x00010c0c4d60(uVar7,param_2,uVar1);
  uVar9 = uVar7;
  func_0x00010be91de0(uVar7,param_2,uVar1,param_7);
  if (((int)uVar8 == 0) && ((uVar9 & 1) != 0)) {
    uVar10 = *(undefined8 *)(uVar7 + 0x118);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ea040();
    _objc_release(uVar10);
    uVar8 = uVar1;
    func_0x00010b5fa088();
    uVar9 = uVar1;
    func_0x00010bf3d2a0(uVar1);
    lVar11 = (long)(int)uVar9;
    func_0x00010b5fc82c(lVar11);
    if ((uVar8 < 0xd) && ((0x1566U >> (ulong)((uint)uVar8 & 0x1f) & 1) != 0)) {
      func_0x00010be14be0(uVar7,param_2,uVar1,uVar12,param_5,param_6,param_7,lVar11,uVar3,
                          in_stack_ffffffffffffff50);
    }
    else {
      func_0x00010be19dc0(uVar7,param_2,uVar1,uVar12,param_5,param_6,param_7,lVar11,uVar3,
                          in_stack_ffffffffffffff50);
    }
  }
  else {
    uVar8 = uVar1;
    func_0x00010bf3d2a0(uVar1);
    lVar11 = (long)(int)uVar8;
    func_0x00010b5fc82c(lVar11);
    func_0x00010be4d5e0(uVar7,param_2,uVar1,uVar12,param_5,param_6,param_7,lVar11,uVar3,
                        in_stack_ffffffffffffff50);
    uVar10 = *(undefined8 *)(uVar7 + 0x118);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ea040();
    _objc_release(uVar10);
  }
  _objc_release(in_stack_ffffffffffffff50);
  _objc_release(uVar3);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d338e8; end: 106d33abf; -[SCGalleryOperaMediaManager _startToLoadGallerySnap:isPrivateSnap:isFromMiniCarousel:shouldShowSoundPill:snapDetail:entryInfo:completion:] */

void FUN_106d338e8(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010bf8b0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar1 = param_1;
  func_0x00010c0c4d60(param_1,param_2,param_3);
  uVar2 = param_1;
  func_0x00010be91de0(param_1,param_2,param_3,param_7);
  if (((int)uVar1 == 0) && ((uVar2 & 1) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x118);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ea040();
    _objc_release(uVar3);
    uVar1 = param_3;
    func_0x00010b5fa088();
    uVar2 = param_3;
    func_0x00010bf3d2a0(param_3);
    lVar4 = (long)(int)uVar2;
    func_0x00010b5fc82c(lVar4);
    if ((uVar1 < 0xd) && ((0x1566U >> (ulong)((uint)uVar1 & 0x1f) & 1) != 0)) {
      func_0x00010be14be0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,lVar4,param_8,
                          param_9);
    }
    else {
      func_0x00010be19dc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,lVar4,param_8,
                          param_9);
    }
  }
  else {
    uVar1 = param_3;
    func_0x00010bf3d2a0(param_3);
    lVar4 = (long)(int)uVar1;
    func_0x00010b5fc82c(lVar4);
    func_0x00010be4d5e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,lVar4,param_8,
                        param_9);
    uVar3 = *(undefined8 *)(param_1 + 0x118);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ea040();
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d33ac0; end: 106d33c53; -[SCGalleryOperaMediaManager _fetchStreamingPackageForSnap:isPrivateSnap:isFromMiniCarousel:shouldShowSoundPill:snapDetail:clientProcessingBitMaskType:entryInfo:completion:] */

void FUN_106d33ac0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25c840();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106d33c54;
  puStack_a0 = &UNK_1109771c8;
  uStack_80 = param_9;
  uStack_78 = param_10;
  uStack_98 = param_3;
  lStack_90 = param_1;
  uStack_88 = param_7;
  uStack_70 = param_8;
  uStack_68 = param_4;
  uStack_67 = param_5;
  uStack_66 = param_6;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_3);
  func_0x00010bfaaa20(uVar2,param_2,param_3,param_7,uVar3,&puStack_b8);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_98);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 106d33c54; end: 106d33def;  */

void FUN_106d33c54(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined2 uStack_37;
  
  _objc_retain(param_3);
  if ((param_2 == 0) && (param_3 != 0)) {
    lVar1 = param_3;
    func_0x00010bf93be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x000108019d00(*(undefined8 *)(param_1 + 0x20));
    }
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 0x28);
      func_0x00010be12380(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar1);
    }
    func_0x00010be4df00(*(undefined8 *)(param_1 + 0x28));
    func_0x00010be4d640(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106d33df0;
    puStack_70 = &UNK_110977198;
    auVar4 = *(undefined1 (*) [16])(param_1 + 0x20);
    _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x20));
    auVar4 = NEON_ext(auVar4,auVar4,8,1);
    lStack_60 = auVar4._8_8_;
    uStack_68 = auVar4._0_8_;
    uStack_38 = *(undefined1 *)(param_1 + 0x50);
    uStack_37 = *(undefined2 *)(param_1 + 0x51);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    uStack_40 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uStack_58 = uVar2;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = uVar3;
    _objc_retain(uVar2);
    uStack_48 = uVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_88);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    lVar1 = lStack_60;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106d33df0; end: 106d33e2b;  */

void FUN_106d33df0(long param_1,undefined8 param_2)

{
  func_0x00010be19dc0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined1 *)(param_1 + 0x50),*(undefined1 *)(param_1 + 0x51),
                      *(undefined1 *)(param_1 + 0x52),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 106d33e2c; end: 106d344ab; -[SCGalleryOperaMediaManager _fullCloudFSMediaDownloadForTimelineSnap:snaps:entryId:entryAssets:snapDoc:entryClientProcessingBitMaskType:shouldShowSoundPill:isFromMiniCarousel:entryInfo:completion:] */

void FUN_106d33e2c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined **param_5,undefined8 param_6,undefined **param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  long param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  undefined **ppuStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined1 auStack_270 [8];
  undefined8 uStack_268;
  undefined1 uStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined1 auStack_230 [8];
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
  undefined8 uStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_13);
  lVar10 = param_2;
  func_0x00010c0c4d80();
  if ((int)lVar10 == 0) {
    ppuStack_98 = &PTR____CFConstantStringClassReference_110f0c978;
    ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9028;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_13 + 0x10))(param_13,puVar2,1,0,0);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    _objc_retain(param_5);
    ppuVar3 = param_5;
    func_0x00010bf52a60();
    if (ppuVar3 != (undefined **)0x0) {
      lVar10 = *plStack_1d0;
      do {
        ppuVar8 = (undefined **)0x0;
        do {
          if (*plStack_1d0 != lVar10) {
            _objc_enumerationMutation(param_5);
          }
          lVar4 = *(long *)(param_2 + 0x108);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c13a8c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          if (lVar5 == 0) {
            (**(code **)(param_13 + 0x10))(param_13,0,0,0,0);
          }
          func_0x00010befa120(puVar2);
          lVar4 = param_2;
          func_0x00010be91e20();
          _objc_retainAutoreleasedReturnValue();
          if (lVar4 != 0) {
            func_0x00010befa120(puVar2);
          }
          _objc_release(lVar4);
          _objc_release(lVar5);
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        } while (ppuVar3 != ppuVar8);
        ppuVar3 = param_5;
        func_0x00010bf52a60();
      } while (ppuVar3 != (undefined **)0x0);
    }
    _objc_release(param_5);
    param_1 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    lStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    plStack_210 = (long *)0x0;
    _objc_retain(param_7);
    ppuVar3 = param_7;
    func_0x00010bf52a60();
    if (ppuVar3 != (undefined **)0x0) {
      lVar10 = *plStack_210;
      do {
        ppuVar8 = (undefined **)0x0;
        do {
          if (*plStack_210 != lVar10) {
            _objc_enumerationMutation(param_7);
          }
          uVar7 = *(undefined8 *)(lStack_218 + (long)ppuVar8 * 8);
          lVar5 = *(long *)(param_2 + 0x108);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar7;
          func_0x00010bf0b260(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0b760();
          if ((uint)uVar7 < 0x16) {
            func_0x00010b697928();
          }
          lVar4 = lVar5;
          func_0x00010c13a860();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          _objc_release(lVar5);
          if (lVar4 != 0) {
            func_0x00010befa120(puVar2);
          }
          _objc_release(lVar4);
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        } while (ppuVar3 != ppuVar8);
        ppuVar3 = param_7;
        func_0x00010bf52a60();
      } while (ppuVar3 != (undefined **)0x0);
    }
    _objc_release(param_7);
    _objc_initWeak(auStack_228,param_2);
    lVar10 = param_2;
    _objc_opt_class();
    ppuVar6 = param_5;
    func_0x00010bfb1920(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c080ca0();
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c11de00(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_250 = 0xc2000000;
    pcStack_248 = FUN_106d344ac;
    puStack_240 = &UNK_110966f30;
    ppuVar3 = &puStack_258;
    _objc_copyWeak(auStack_230,auStack_228);
    _objc_retain(param_4);
    lStack_238 = param_4;
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_2b8 = puVar1;
    uStack_2b0 = 0xc2000000;
    pcStack_2a8 = FUN_106d34524;
    puStack_2a0 = &UNK_1109771f8;
    ppuVar8 = &puStack_2b8;
    _objc_copyWeak(auStack_270,auStack_228);
    _objc_retain(param_13);
    lStack_278 = param_13;
    _objc_retain(param_4);
    lStack_298 = param_4;
    _objc_retain(param_5);
    uStack_260 = param_10;
    ppuStack_290 = param_5;
    _objc_retain(param_8);
    uStack_288 = param_8;
    uStack_268 = param_9;
    _objc_retain(param_12);
    uStack_280 = param_12;
    func_0x00010be05dc0(lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar9);
    _objc_release(ppuVar6);
    uVar9 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010be060e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar9);
    _objc_release(param_2);
    _objc_release(lVar10);
    _objc_release(uStack_280);
    _objc_release(uStack_288);
    _objc_release(ppuStack_290);
    _objc_release(lStack_298);
    _objc_release(lStack_278);
    _objc_destroyWeak(auStack_270);
    _objc_release(lStack_238);
    _objc_destroyWeak(auStack_230);
    _objc_destroyWeak(auStack_228);
    _objc_release(puVar2);
  }
  else {
    ppuVar3 = param_5;
    func_0x00010bfb1920(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4e760(param_2);
    _objc_release(ppuVar3);
    ppuVar8 = param_5;
    ppuVar3 = param_7;
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_destroyWeak(ppuVar8 + 9);
    _objc_destroyWeak(ppuVar3 + 5);
    _objc_destroyWeak(auStack_228);
    __Unwind_Resume();
    param_4 = param_4 + 0x28;
    _objc_loadWeakRetained();
    if (param_4 != 0) {
      uVar9 = *(undefined8 *)(param_4 + 0x1b8);
      lVar10 = param_4;
      func_0x00010be060e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf79380(param_1,uVar9);
      _objc_release(lVar10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}



/* Entry: 106d344ac; end: 106d34523;  */

void FUN_106d344ac(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x1b8);
    lVar2 = lVar1;
    func_0x00010be060e0(lVar1,param_3,*(undefined8 *)(param_2 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf79380(param_1,uVar3,param_3,lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d34524; end: 106d3466f;  */

void FUN_106d34524(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    pcVar3 = *(code **)(lVar4 + 0x10);
LAB_106d34638:
    (*pcVar3)(lVar4,0,0,0,0);
  }
  else {
    uVar5 = *(undefined8 *)(lVar1 + 0x30);
    lVar4 = lVar1;
    func_0x00010be060e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar5);
    _objc_release(lVar4);
    if ((param_2 == 0) && (param_3 == 0)) {
      puVar2 = *(undefined **)(param_1 + 0x28);
      func_0x00010bfb1920(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be4e760(lVar1);
    }
    else {
      lVar4 = *(long *)(param_1 + 0x40);
      if (param_2 != 2) {
        pcVar3 = *(code **)(lVar4 + 0x10);
        goto LAB_106d34638;
      }
      puVar2 = PTR_PTR_1126cdc70;
      func_0x00010c09ce20(PTR_PTR_1126cdc70);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,puVar2,1,0,0);
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d34670; end: 106d349f3; -[SCGalleryOperaMediaManager _fullSnapdocMediaDownloadForSnapDocOperaSnap:snap:snapDocKey:snapDoc:isPrivate:isFromMiniCarousel:shouldShowSoundPill:clientProcessingBitMaskType:entryInfo:completion:] */

void FUN_106d34670(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined **param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,long param_14)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_13);
  _objc_retain(param_14);
  lVar1 = param_2;
  func_0x00010bdd9fa0();
  if ((int)lVar1 == 0) {
    ppuStack_90 = &PTR____CFConstantStringClassReference_110f0c978;
    ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9028;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_14 + 0x10))(param_14,puVar2,1,0,0);
    _objc_release(puVar2);
    _objc_initWeak(auStack_98,param_2);
    uVar3 = *(undefined8 *)(param_2 + 0x138);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000108017f48();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_106d349f4;
    puStack_b0 = &UNK_110966f30;
    _objc_copyWeak(auStack_a0,auStack_98);
    uVar5 = param_5;
    _objc_retain();
    uStack_a8 = param_5;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_128 = puVar2;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_106d34a68;
    puStack_110 = &UNK_110977228;
    ppuVar6 = &puStack_128;
    _objc_copyWeak(auStack_e0,auStack_98);
    _objc_retain(param_14);
    lStack_e8 = param_14;
    _objc_retain(param_4);
    lStack_108 = param_4;
    _objc_retain(param_5);
    uStack_d0 = param_10;
    uStack_cf = SUB81(param_9,0);
    uStack_100 = param_5;
    _objc_retain(param_7);
    uStack_d8 = param_12;
    uStack_f8 = param_7;
    _objc_retain(param_13);
    uStack_f0 = param_13;
    func_0x00010bf892a0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uStack_f0);
    _objc_release(uStack_f8);
    _objc_release(uStack_100);
    _objc_release(lStack_108);
    _objc_release(lStack_e8);
    _objc_destroyWeak(auStack_e0);
    _objc_release(uStack_a8);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
  }
  else {
    func_0x00010be4e760(param_2);
    ppuVar6 = param_9;
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar6 + 9);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume();
  lVar1 = param_4 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + 0x1b8);
    uVar4 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010c241220(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf79380(param_1,uVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d349f4; end: 106d34a67;  */

void FUN_106d349f4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x1b8);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c241220(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf79380(param_1,uVar3,param_3,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d34a68; end: 106d34c8b;  */

void FUN_106d34a68(long param_1,int param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0,0,0,0);
    goto LAB_106d34c68;
  }
  lVar2 = lVar1;
  func_0x00010be060e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010c241220(lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
  func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 0x30));
  if (param_2 == 0) {
    lVar2 = param_4;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c0720c0();
    if ((int)lVar6 == 0) {
      _objc_release(lVar2);
    }
    else {
      lVar6 = param_4;
      func_0x00010bf3ec40();
      _objc_release(lVar2);
      if (lVar6 == 3) {
        (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0,0,0,0);
        goto LAB_106d34c60;
      }
    }
    lVar2 = lVar1;
    func_0x00010bebca00();
    puVar4 = PTR_PTR_1126cdc70;
    lVar6 = *(long *)(param_1 + 0x40);
    if ((int)lVar2 == 0) {
      puVar5 = PTR_PTR_1126cdc70;
      func_0x00010c09ce20(PTR_PTR_1126cdc70);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar6 + 0x10))(lVar6,puVar5,1,0,0);
    }
    else {
      puVar5 = PTR_PTR_1126ba158;
      func_0x00010bf3efe0(PTR_PTR_1126ba158);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ce20(puVar4);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar6 + 0x10))(lVar6,puVar4,1,0,0);
      _objc_release(puVar4);
    }
    _objc_release(puVar5);
  }
  else {
    func_0x00010be4e760(lVar1);
  }
LAB_106d34c60:
  _objc_release(lVar3);
LAB_106d34c68:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106d34c8c; end: 106d34cbb; -[SCGalleryOperaMediaManager _canSkipDownloadingSnapDoc:] */

undefined8 FUN_106d34c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_release(param_3);
  return 0;
}



/* Entry: 106d34cbc; end: 106d34fbf; -[SCGalleryOperaMediaManager _snapDocHasCodecDownloadBlockedVideoLayer:] */

undefined8 FUN_106d34cbc(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *unaff_x20;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_220 = param_1;
  _objc_retain(param_3);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  puStack_1a0 = (undefined8 *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puStack_210 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_3;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = &uStack_1b0;
  puVar1 = puVar6;
  puStack_200 = puVar6;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    puVar6 = (undefined *)*puStack_1a0;
    puStack_218 = puVar6;
    do {
      puVar7 = (undefined *)0x0;
      puStack_208 = puVar1;
      do {
        if ((undefined *)*puStack_1a0 != puVar6) {
          _objc_enumerationMutation(puStack_200);
        }
        puVar10 = *(undefined8 **)(lStack_1a8 + (long)puVar7 * 8);
        puVar2 = puVar10;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bfd8fc0();
        _objc_release(puVar2);
        if ((int)puVar3 != 0) {
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          puVar1 = puStack_210;
          puStack_1f8 = puVar7;
          func_0x00010c0c6280();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar1;
          func_0x00010bf52a60();
          if (puVar6 != (undefined *)0x0) {
            lVar9 = *plStack_1e0;
            do {
              unaff_x20 = (undefined *)0x0;
              do {
                if (*plStack_1e0 != lVar9) {
                  _objc_enumerationMutation(puVar1);
                }
                puVar11 = *(undefined8 **)(lStack_1e8 + (long)unaff_x20 * 8);
                puVar2 = puVar11;
                func_0x00010c0c55e0();
                puVar3 = puVar10;
                func_0x00010c0c3fe0();
                _objc_retainAutoreleasedReturnValue();
                puVar4 = puVar3;
                func_0x00010c0c5180();
                _objc_retainAutoreleasedReturnValue();
                puVar5 = puVar4;
                func_0x00010c0c55e0();
                _objc_release(puVar4);
                _objc_release(puVar3);
                if (puVar2 == puVar5) {
                  puVar3 = puVar10;
                  func_0x00010c0c3fe0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0c6c20(puVar11);
                  puVar2 = puVar3;
                  func_0x00010b5fb7f4(puVar3,(int)puVar11 == 3);
                  puVar6 = PTR_PTR_1126ba150;
                  if (((ulong)puVar2 & 1) == 0) {
                    _objc_release(puVar3);
                    goto LAB_106d34f20;
                  }
                  func_0x00010c0c3fe0(puVar10);
                  _objc_retainAutoreleasedReturnValue();
                  puVar2 = puVar10;
                  func_0x00010b5fb84c();
                  func_0x00010bf88960();
                  _objc_release(puVar10);
                  _objc_release(puVar3);
                  if (((ulong)puVar6 & 1) == 0) goto LAB_106d34f20;
                  _objc_release(puVar1);
                  uVar8 = 1;
                  goto LAB_106d34f70;
                }
                unaff_x20 = unaff_x20 + 1;
              } while (puVar6 != unaff_x20);
              puVar6 = puVar1;
              func_0x00010bf52a60();
            } while (puVar6 != (undefined *)0x0);
          }
LAB_106d34f20:
          _objc_release(puVar1);
          puVar6 = puStack_218;
          puVar1 = puStack_208;
          puVar7 = puStack_1f8;
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar1);
      puVar2 = &uStack_1b0;
      puVar1 = puStack_200;
      func_0x00010bf52a60();
      unaff_x20 = (undefined *)0x0;
    } while (puVar1 != (undefined *)0x0);
  }
  uVar8 = 0;
LAB_106d34f70:
  _objc_release(puStack_200);
  _objc_release(puStack_210);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_228 = FUN_106d34fc0;
    puStack_240 = unaff_x20;
    puStack_238 = puVar6;
    puStack_230 = &stack0xfffffffffffffff0;
    _objc_retain(puVar2);
    puStack_268 = &uStack_270;
    uStack_270 = 0;
    uStack_260 = 0x3032000000;
    pcStack_258 = FUN_106d350dc;
    uStack_250 = 0x106d350ec;
    uStack_248 = 0;
    func_0x00010c0bfe60(puVar2);
    uVar8 = puStack_268[5];
    _objc_retain(uVar8);
    __Block_object_dispose(&uStack_270,8);
    _objc_release(uStack_248);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
    return uVar8;
  }
  return uVar8;
}



/* Entry: 106d34fc0; end: 106d350db; -[SCGalleryOperaMediaManager _downloadRequestIdForOperaSnap:] */

void FUN_106d34fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106d350dc;
  uStack_30 = 0x106d350ec;
  uStack_28 = 0;
  func_0x00010c0bfe60(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d350dc; end: 106d350f3;  */

void FUN_106d350dc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106d350f4; end: 106d35133;  */

void FUN_106d350f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d35134; end: 106d35137;  */

void FUN_106d35134(void)

{
  return;
}



/* Entry: 106d35138; end: 106d351cf;  */

void FUN_106d35138(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d351d0; end: 106d356d3; -[SCGalleryOperaMediaManager _fullyMediaDownloadWithCloudFSForRegularSnap:isPrivateSnap:isFromMiniCarousel:shouldShowSoundPill:snapDetail:clientProcessingBitMaskType:entryInfo:completion:] */

void FUN_106d351d0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  ppuStack_90 = &PTR____CFConstantStringClassReference_110f0c978;
  ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9028;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_11 + 0x10))(param_11,puVar1,1,0,0);
  _objc_release(puVar1);
  lVar2 = *(long *)(param_2 + 0x108);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c13a8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    (**(code **)(param_11 + 0x10))(param_11,0,0,0,0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_98 = lVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c0d3c80();
    _objc_release(puVar1);
    lVar5 = *(long *)(param_2 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c13a8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    if (lVar2 != 0) {
      func_0x00010befa120(puVar4);
    }
    lVar6 = *(long *)(param_2 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010c13a8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    if (lVar5 != 0) {
      func_0x00010befa120(puVar4);
    }
    lVar7 = *(long *)(param_2 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00010c13a8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    if (lVar6 != 0) {
      func_0x00010befa120(puVar4);
    }
    lVar7 = param_2;
    func_0x00010be91e20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) {
      func_0x00010befa120(puVar4);
    }
    _objc_initWeak(auStack_a0,param_2);
    lVar8 = param_2;
    _objc_opt_class();
    func_0x00010c080ca0(param_4);
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c11de00(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_106d356d4;
    puStack_b8 = &UNK_110966f30;
    _objc_copyWeak(auStack_a8,auStack_a0);
    _objc_retain(param_4);
    lStack_b0 = param_4;
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_e8,auStack_a0);
    _objc_retain(param_11);
    _objc_retain(param_4);
    uStack_e0 = param_9;
    uStack_d8 = param_5;
    uStack_d7 = param_6;
    uStack_d6 = param_7;
    _objc_retain(param_10);
    func_0x00010be05dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(param_2 + 0x30);
    lVar10 = param_4;
    func_0x00010c241220(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar9);
    _objc_release(lVar10);
    _objc_release(lVar8);
    _objc_release(param_10);
    _objc_release(param_4);
    _objc_release(param_11);
    _objc_destroyWeak(auStack_e8);
    _objc_release(lStack_b0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_a0);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume();
  lVar3 = param_4 + 0x28;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar11 = *(undefined8 *)(lVar3 + 0x1b8);
    uVar9 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010c241220(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf79380(param_1,uVar11);
    _objc_release(uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106d356d4; end: 106d35747;  */

void FUN_106d356d4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x1b8);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c241220(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf79380(param_1,uVar3,param_3,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d35748; end: 106d35883;  */

void FUN_106d35748(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar5 = *(long *)(param_1 + 0x30);
    pcVar4 = *(code **)(lVar5 + 0x10);
  }
  else {
    uVar6 = *(undefined8 *)(lVar1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar6);
    _objc_release(uVar2);
    if ((param_2 == 0) && (param_3 == 0)) {
      func_0x000108019bb0(*(undefined8 *)(param_1 + 0x20));
      func_0x00010be88140(lVar1);
      goto LAB_106d35860;
    }
    lVar5 = *(long *)(param_1 + 0x30);
    if (param_2 == 2) {
      puVar3 = PTR_PTR_1126cdc70;
      func_0x00010c09ce20(PTR_PTR_1126cdc70);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,puVar3,1,0,0);
      _objc_release(puVar3);
      goto LAB_106d35860;
    }
    pcVar4 = *(code **)(lVar5 + 0x10);
  }
  (*pcVar4)(lVar5,0,0,0,0);
LAB_106d35860:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d35884; end: 106d35c3b; -[SCGalleryOperaMediaManager _loadGallerySnapStreamingVideo:shouldShowSoundPill:snapDetail:streamingPackage:completion:] */

void FUN_106d35884(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined1 auStack_198 [8];
  undefined1 uStack_190;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = param_3;
  func_0x00010b5fa088();
  _dispatch_group_create();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_106d350dc;
  uStack_88 = 0x106d350ec;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_106d350dc;
  uStack_b8 = 0x106d350ec;
  uStack_b0 = 0;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_106d350dc;
  uStack_e8 = 0x106d350ec;
  uStack_e0 = 0;
  puStack_100 = &uStack_108;
  _dispatch_group_enter();
  uVar3 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___dispatch_main_q_11034be20;
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_106d35c3c;
  puStack_128 = &UNK_110977308;
  _objc_retain(param_3);
  uStack_120 = param_3;
  puStack_110 = &uStack_108;
  _objc_retain(uVar2);
  uStack_118 = uVar2;
  func_0x00010c135a80(uVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar3);
  _dispatch_group_enter(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x00010bf93be0(param_6);
  _objc_retainAutoreleasedReturnValue();
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  uStack_170 = 0x106d35d08;
  puStack_168 = &UNK_110977338;
  puStack_150 = &uStack_a8;
  puStack_148 = &uStack_d8;
  _objc_retain(param_3);
  uStack_160 = param_3;
  _objc_retain(uVar2);
  uStack_158 = uVar2;
  func_0x00010c136040(uVar4);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_initWeak(auStack_188,param_1);
  puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e8 = 0xc2000000;
  pcStack_1e0 = FUN_106d35dd0;
  puStack_1d8 = &UNK_1109773c8;
  _objc_copyWeak(auStack_198,auStack_188);
  puStack_1a0 = &uStack_108;
  uStack_1d0 = param_3;
  uStack_1c8 = param_5;
  uStack_1c0 = param_6;
  uStack_1b8 = param_7;
  puStack_1b0 = &uStack_a8;
  puStack_1a8 = &uStack_d8;
  uStack_190 = param_4;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x000100bc0718(uVar2,puVar1,&puStack_1f0);
  _objc_release(puVar1);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1d0);
  _objc_destroyWeak(auStack_198);
  _objc_destroyWeak(auStack_188);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 106d35c3c; end: 106d35dcf;  */

void FUN_106d35c3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126bfca8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010bf15d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = param_3;
  func_0x00010bf15d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c020b60();
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106d35dd0; end: 106d36127;  */

void FUN_106d35dd0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (lVar1 != 0) {
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110f0bc38;
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110f0e158;
    ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9010;
    puStack_a0 = PTR____kCFBooleanTrue_11034ab68;
    puStack_98 = PTR____kCFBooleanTrue_11034ab68;
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110f0c478;
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110f0d418;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2a5040(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe0640(uVar3);
    func_0x00010c2971c0((double)(int)uVar2,(double)(int)uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110f0c198;
    puStack_90 = puVar4;
    func_0x00010b5fa7fc(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126bfb98;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110e9e918;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puStack_88 = puVar5;
    func_0x00010c0ef4a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0efc0(puVar7);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar6;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0d3c80();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107dc2fa4(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar8);
    _objc_release(uVar2);
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_106d36128;
    puStack_120 = &UNK_110977368;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uStack_118 = uVar2;
    _objc_retain(uVar3);
    uStack_e8 = *(undefined8 *)(param_1 + 0x48);
    uStack_f0 = *(undefined8 *)(param_1 + 0x40);
    uStack_e0 = *(undefined1 *)(param_1 + 0x60);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    lStack_110 = lVar1;
    puStack_108 = puVar8;
    uStack_f8 = uVar3;
    _objc_retain(uVar2);
    uStack_100 = uVar2;
    _objc_retain(puVar8);
    ppuVar9 = &puStack_138;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(lVar1 + 0xe8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_3 = *(long *)(param_1 + 0x30);
    _objc_retain(ppuVar9);
    func_0x00010bf4cae0(uVar2);
    _objc_release(uVar2);
    _objc_release(ppuVar9);
    _objc_release(ppuVar9);
    _objc_release(uStack_100);
    _objc_release(puStack_108);
    _objc_release(uStack_f8);
    _objc_release(uStack_118);
    _objc_release(puVar8);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126cdc70;
  if (param_3 == 0) {
    if (param_2 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010c241220(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c120460(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(lVar1 + 0x28) + 0x60));
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x30));
      _objc_release(puVar4);
    }
  }
  else {
    lVar10 = param_3;
    func_0x00010c14d160();
    lVar11 = *(long *)(lVar1 + 0x40);
    if ((int)lVar10 != 0) {
      puVar4 = PTR_PTR_1126cdc70;
      func_0x00010c09ce20(PTR_PTR_1126cdc70);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar11 + 0x10))(lVar11,puVar4,1,0,0);
      _objc_release(puVar4);
      goto LAB_106d3629c;
    }
    (**(code **)(lVar11 + 0x10))(lVar11,0,0,1,param_3);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(lVar1 + 0x30);
  func_0x00010bdd7ba0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(uVar3);
  _objc_release(uVar2);
  func_0x00010be4c980(*(undefined8 *)(lVar1 + 0x28));
LAB_106d3629c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d36128; end: 106d362bb;  */

void FUN_106d36128(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126cdc70;
  if (param_3 == 0) {
    if (param_2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c241220(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c120460(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60));
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
      _objc_release(puVar4);
    }
  }
  else {
    lVar2 = param_3;
    func_0x00010c14d160();
    lVar5 = *(long *)(param_1 + 0x40);
    if ((int)lVar2 != 0) {
      puVar4 = PTR_PTR_1126cdc70;
      func_0x00010c09ce20(PTR_PTR_1126cdc70);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,puVar4,1,0,0);
      _objc_release(puVar4);
      goto LAB_106d3629c;
    }
    (**(code **)(lVar5 + 0x10))(lVar5,0,0,1,param_3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bdd7ba0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(uVar1);
  _objc_release(uVar3);
  func_0x00010be4c980(*(undefined8 *)(param_1 + 0x28));
LAB_106d3629c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d362bc; end: 106d36327;  */

void FUN_106d362bc(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  return;
}



/* Entry: 106d36328; end: 106d36333;  */

void FUN_106d36328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d36330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106d36334; end: 106d36417;  */

void FUN_106d36334(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x58,param_2 + 0x58);
  return;
}



/* Entry: 106d36418; end: 106d364eb; -[SCGalleryOperaMediaManager _loadMetaDataForGallerySnap:isPrivateSnap:isFromMiniCarousel:snapDetail:shouldLoadContext:clientProcessingBitMaskType:entryInfo:completion:] */

void FUN_106d36418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010be4d600(param_1,param_2,param_3,param_10);
  if (param_7 != 0) {
    func_0x00010be4cf40(param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9,param_10);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d364ec; end: 106d3673b; -[SCGalleryOperaMediaManager _loadContextPropertiesForSnap:isPrivateSnap:isFromMiniCarousel:snapDetail:clientProcessingBitMaskType:entryInfo:completion:] */

void FUN_106d364ec(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  lVar6 = param_3;
  func_0x00010bf9e420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 == 0) {
    puVar7 = (undefined *)0x0;
    lVar6 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010b5f7abc();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010c08fa60();
    _objc_release(lVar6);
    lVar6 = 0;
    if (lVar2 != 0) {
      lVar6 = lVar1;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = PTR_PTR_1126b5c10;
    func_0x00010c0cb140(PTR_PTR_1126b5c10);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010b5f8748(lVar1,uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0d3c80();
    func_0x00010c1c6a60(puVar7);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(uVar3);
    lVar2 = param_3;
    func_0x00010b5f88e4();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfd5900();
    if ((int)lVar4 != 0) {
      lVar4 = lVar2;
      func_0x00010bf45f00(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bb340(puVar7);
      _objc_release(lVar4);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  uVar3 = param_6;
  func_0x00010c0e0160(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_6;
  func_0x00010c0ef4a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010be4cf20(param_1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar7);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d3673c; end: 106d368d3; -[SCGalleryOperaMediaManager _loadContextPropertiesForSnap:contextClientInfo:isPrivateSnap:isFromMiniCarousel:snapDetailId:overlay:clientProcessingBitMaskType:ctItems:lensId:entryInfo:completion:] */

void FUN_106d3673c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_13);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106d368d4;
  puStack_80 = &UNK_11084aaa8;
  uStack_70 = param_13;
  puStack_78 = puVar1;
  _objc_retain(param_13);
  _objc_retain(puVar1);
  ppuVar2 = &puStack_98;
  _objc_retainBlock();
  func_0x00010be15c00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,puVar1,param_12,ppuVar2);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(ppuVar2);
  _objc_release(uStack_70);
  _objc_release(puStack_78);
  _objc_release(param_13);
  _objc_release(puVar1);
  return;
}



/* Entry: 106d368d4; end: 106d369a7;  */

void FUN_106d368d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106d369a8;
    puStack_48 = &UNK_11084aaa8;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uStack_38 = uVar4;
    _objc_retain(uVar3);
    uStack_40 = uVar3;
    func_0x00010c0f7fc0(lVar1,param_2,&puStack_60);
    _objc_release(lVar1);
    _objc_release(uStack_40);
    _objc_release(uStack_38);
  }
  return;
}



/* Entry: 106d369a8; end: 106d369eb;  */

void FUN_106d369a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,1,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106d369ec; end: 106d36c4f; -[SCGalleryOperaMediaManager _fillContextPropertiesForSnap:contextClientInfo:isPrivateSnap:isFromMiniCarousel:snapDetailId:overlay:clientProcessingBitMaskType:ctItems:lensId:pageProperties:entryInfo:completion:] */

void FUN_106d369ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined **ppuVar1;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_initWeak(auStack_70,param_1);
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_106d36c50;
  puStack_d8 = &UNK_1109773f8;
  _objc_copyWeak(auStack_88,auStack_70);
  _objc_retain(param_3);
  uStack_d0 = param_3;
  _objc_retain(param_4);
  uStack_c8 = param_4;
  uStack_78 = param_5;
  uStack_77 = param_6;
  _objc_retain(param_7);
  uStack_c0 = param_7;
  _objc_retain(param_8);
  uStack_80 = param_9;
  uStack_b8 = param_8;
  _objc_retain(param_10);
  uStack_b0 = param_10;
  _objc_retain(param_11);
  uStack_a8 = param_11;
  _objc_retain(param_13);
  uStack_a0 = param_13;
  _objc_retain(param_12);
  uStack_98 = param_12;
  _objc_retain(param_14);
  uStack_90 = param_14;
  ppuVar1 = &puStack_f0;
  _objc_retainBlock(ppuVar1);
  func_0x00010bdcff40(param_1);
  _objc_release(ppuVar1);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d36c50; end: 106d36d03;  */

void FUN_106d36c50(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_2 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010c277e80(param_2);
    func_0x00010c0df880(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be15c20();
  _objc_release(lVar1);
  (**(code **)(*(long *)(param_1 + 0x60) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106d36d04; end: 106d36fb3; -[SCGalleryOperaMediaManager _fillContextPropertiesForSnap:musicTrackId:contextClientInfo:isPrivateSnap:isFromMiniCarousel:snapDetailId:overlay:clientProcessingBitMaskType:ctItems:lensId:entryInfo:pageProperties:] */

void FUN_106d36d04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  long param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_14);
  uVar1 = param_14;
  func_0x00010bf977c0();
  if ((int)uVar1 != 0x4d) {
    func_0x00010bf977c0();
  }
  _objc_release(param_14);
  puVar5 = PTR_PTR_1126b2390;
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_13;
  if (param_13 == 0) {
    lVar3 = param_9;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x168);
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f3a20(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (param_13 == 0) {
    _objc_release(lVar3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x000107b281fc(param_15,puVar5);
  _objc_release(puVar5);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d36fb4; end: 106d370ff; -[SCGalleryOperaMediaManager _loadGallerySnapAddress:completion:] */

void FUN_106d36fb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010befd720(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d37100; end: 106d37217;  */

void FUN_106d37100(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar8 = *(long *)(param_1 + 0x20);
    puVar2 = param_3;
    if (param_3 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined *)0x1;
    param_4 = 0;
    param_5 = 0;
    (**(code **)(lVar8 + 0x10))(lVar8,puVar3,1,0);
    _objc_release(puVar3);
    if (param_3 == (undefined *)0x0) {
      _objc_release(puVar2);
    }
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_b8,param_3);
  puVar2 = PTR_PTR_1126cdc70;
  func_0x00010c2316e0();
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = puVar6;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 == (undefined *)0x0) goto LAB_106d373c0;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x120);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ec16c0(*(undefined8 *)(param_3 + 0xc0));
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_c0,auStack_b8);
  _objc_retain(puVar6);
  _objc_retain(param_5);
  uVar5 = uVar4;
  func_0x00010c134ca0(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_3 + 0x38);
  puVar2 = puVar6;
  func_0x00010c241220(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(param_5);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_c0);
LAB_106d373c0:
  _objc_destroyWeak(auStack_b8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar6);
  return;
}



/* Entry: 106d37218; end: 106d37427; -[SCGalleryOperaMediaManager _loadGallerySnapFirstFrame:snapDetail:completion:] */

void FUN_106d37218(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126cdc70;
  func_0x00010c2316e0();
  if (((ulong)puVar1 & 1) == 0) {
    lVar2 = param_3;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) goto LAB_106d373c0;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ec16c0(*(undefined8 *)(param_1 + 0xc0));
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar4 = uVar3;
  func_0x00010c134ca0(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
LAB_106d373c0:
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d37428; end: 106d37647;  */

void FUN_106d37428(double param_1,double param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long in_x6;
  long lVar8;
  double dVar9;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = param_3 + 0x30;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126cdc70;
  if (lVar1 != 0) {
    if (param_4 == 0) {
      param_5 = 0;
      (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),0,0,0,0);
    }
    else {
      uVar2 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010c241220(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb12a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      ppuStack_68 = &PTR____CFConstantStringClassReference_110f0c0b8;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0d3c80();
      _objc_release(puVar4);
      lVar6 = *(long *)(param_3 + 0x20);
      func_0x00010b5fa088();
      if (lVar6 - 2U < 0xb) {
        func_0x00010c23d0a0(param_4);
        dVar9 = param_1;
        func_0x000109023974(*(undefined8 *)(param_3 + 0x20));
        if (dVar9 <= param_1) {
          func_0x00010c23d0a0(param_4);
          dVar9 = param_2;
          func_0x000109023974(*(undefined8 *)(param_3 + 0x20));
          if (dVar9 <= param_2) goto LAB_106d37564;
        }
        param_5 = 0;
        (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),0,0,0,0);
      }
      else {
LAB_106d37564:
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        func_0x000107dc2fa4(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(puVar5);
        _objc_release(uVar2);
        func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x58));
        lVar6 = *(long *)(param_3 + 0x28);
        puVar4 = puVar5;
        func_0x00010bf51e00();
        param_5 = 1;
        (**(code **)(lVar6 + 0x10))(lVar6,puVar4,1,0,0);
        _objc_release(puVar4);
      }
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  _objc_retain(in_x6);
  _objc_retain(uStack_70);
  _objc_retain(ppuStack_68);
  uVar7 = param_5;
  func_0x00010b5fa088();
  if (((uVar7 < 0xd) && ((1L << (uVar7 & 0x3f) & 0x1566U) != 0)) && (in_x6 == 0)) {
    func_0x00010be88140(param_4);
  }
  else {
    uVar7 = param_5;
    func_0x00010b5fa088();
    puVar3 = PTR_PTR_1126bfb98;
    if (uVar7 < 0xd) {
      if ((1L << (uVar7 & 0x3f) & 0x1566U) == 0) {
        if ((1L << (uVar7 & 0x3f) & 0xa98U) == 0) {
          lVar1 = in_x6;
          func_0x00010c0ef4a0(in_x6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4b580();
          _objc_release(lVar1);
          if ((int)puVar3 != 0) {
            func_0x00010be4d5a0(param_4);
            goto LAB_106d37798;
          }
        }
        func_0x00010be4d5c0(param_4);
      }
      else {
        func_0x00010be4df00(param_4);
        func_0x00010be4d660(param_4);
      }
    }
  }
LAB_106d37798:
  _objc_release(ppuStack_68);
  _objc_release(uStack_70);
  _objc_release(in_x6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106d37648; end: 106d3783b; -[SCGalleryOperaMediaManager _loadGallerySnap:isPrivateSnap:isFromMiniCarousel:shouldShowSoundPill:snapDetail:clientProcessingBitMaskType:entryInfo:completion:] */

void FUN_106d37648(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = param_3;
  func_0x00010b5fa088();
  if (((uVar1 < 0xd) && ((1L << (uVar1 & 0x3f) & 0x1566U) != 0)) && (param_7 == 0)) {
    func_0x00010be88140(param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9,param_10);
  }
  else {
    uVar1 = param_3;
    func_0x00010b5fa088();
    puVar3 = PTR_PTR_1126bfb98;
    if (uVar1 < 0xd) {
      if ((1L << (uVar1 & 0x3f) & 0x1566U) == 0) {
        if ((1L << (uVar1 & 0x3f) & 0xa98U) == 0) {
          lVar2 = param_7;
          func_0x00010c0ef4a0(param_7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4b580(puVar3,param_2,lVar2);
          _objc_release(lVar2);
          if ((int)puVar3 != 0) {
            func_0x00010be4d5a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                param_9,param_10);
            goto LAB_106d37798;
          }
        }
        func_0x00010be4d5c0(param_1,param_2,param_3,param_7,param_4,param_5,param_6,param_8,param_9,
                            param_10);
      }
      else {
        func_0x00010be4df00(param_1,param_2,param_3,param_4,param_5,param_7,1,param_8,param_9,
                            param_10);
        func_0x00010be4d660(param_1,param_2,param_3,param_6,param_7,0,param_10);
      }
    }
  }
LAB_106d37798:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d3783c; end: 106d37c87; -[SCGalleryOperaMediaManager _loadGalleryAnimatedImageSnap:isPrivateSnap:isFromMiniCarousel:shouldShowSoundPill:snapDetail:clientProcessingBitMaskType:entryInfo:completion:] */

void FUN_106d3783c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined1 auStack_f8 [8];
  undefined1 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar2 = *(ulong *)(param_1 + 0x148);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf036e0();
  if ((uVar3 & 1) == 0) {
    _objc_release(uVar2);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c13a8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(uVar2);
    if (lVar6 != 0) {
      func_0x00010be4df00(param_1);
      lVar5 = *(long *)(param_1 + 0x108);
      func_0x00010c269d40(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010c13a8c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      func_0x00010be4d680(param_1);
      goto LAB_106d37c0c;
    }
  }
  func_0x00010c0c4d60(param_1);
  func_0x00010be4df00(param_1);
  lVar6 = *(long *)(param_1 + 0x108);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010c13a8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _dispatch_group_create();
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_106d350dc;
  uStack_88 = 0x106d350ec;
  uStack_80 = 0;
  puStack_a0 = &uStack_a8;
  _dispatch_group_enter();
  uVar7 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106d37c88;
  puStack_c8 = &UNK_110977488;
  puStack_b0 = &uStack_a8;
  _objc_retain(param_3);
  uStack_c0 = param_3;
  _objc_retain(lVar6);
  lStack_b8 = lVar6;
  func_0x00010c136020(uVar7);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar7);
  lVar5 = param_1;
  func_0x00010be61760();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_e8;
  _objc_initWeak(puVar8,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = puVar1;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_106d37cd4;
  puStack_138 = &UNK_1109774e8;
  _objc_retain(param_3);
  uStack_130 = param_3;
  lStack_128 = lVar4;
  _objc_retain(param_7);
  uStack_120 = param_7;
  lStack_118 = param_1;
  _objc_retain(lVar4);
  _objc_copyWeak(auStack_f8,auStack_e8);
  _objc_retain(param_10);
  puStack_100 = &uStack_a8;
  uStack_110 = param_10;
  lStack_108 = lVar5;
  uStack_f0 = param_6;
  _objc_retain(lVar5);
  func_0x000100bc0718(lVar6,puVar9,&puStack_150);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lStack_108);
  _objc_release(uStack_110);
  _objc_destroyWeak(auStack_f8);
  _objc_release(uStack_120);
  _objc_release(lStack_128);
  _objc_release(uStack_130);
  _objc_release(lVar5);
  _objc_destroyWeak(auStack_e8);
  _objc_release(lStack_b8);
  _objc_release(uStack_c0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
LAB_106d37c0c:
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 106d37c88; end: 106d37cd3;  */

void FUN_106d37c88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c1511c0(param_2,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106d37cd4; end: 106d37e37;  */

void FUN_106d37cd4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 uStack_68;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  lVar5 = *(long *)(param_1 + 0x38);
  uVar7 = *(undefined8 *)(lVar5 + 0x10);
  uVar8 = *(undefined8 *)(lVar5 + 0x110);
  uVar3 = *(undefined8 *)(lVar5 + 0x160);
  uVar6 = *(undefined8 *)(lVar5 + 0x168);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106d37e38;
  puStack_a0 = &UNK_1109774b8;
  _objc_copyWeak(auStack_70,param_1 + 0x58);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  uStack_98 = uVar9;
  _objc_retain(uVar10);
  uStack_78 = *(undefined8 *)(param_1 + 0x50);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  uStack_88 = uVar10;
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  uStack_90 = uVar9;
  _objc_retain(uVar10);
  uStack_68 = *(undefined1 *)(param_1 + 0x60);
  uStack_80 = uVar10;
  FUN_106d47ce4(uVar1,uVar4,uVar2,uVar7,uVar8,uVar6,uVar3,PTR___dispatch_main_q_11034be20,
                &puStack_b8);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uStack_80);
  _objc_release(uStack_90);
  _objc_release(uStack_88);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_70);
  return;
}



/* Entry: 106d37e38; end: 106d381b3;  */

void FUN_106d37e38(long param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126cdc70;
  if (lVar1 == 0) goto LAB_106d380fc;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1304c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  if (param_3 == 0) {
LAB_106d380d0:
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,0,0,0);
  }
  else {
    uVar9 = param_2;
    func_0x00010bf529e0();
    if ((uVar9 == 0) || (lVar7 = param_4, func_0x00010bf529e0(), lVar7 == 0)) {
      if (puVar3 != (undefined *)0x0) {
        lVar7 = *(long *)(lVar1 + 0x58);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar7 == 0) {
          func_0x00010c1d0640(puVar4);
          func_0x00010c1d0640(puVar4);
          func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x58));
          lVar7 = *(long *)(param_1 + 0x30);
          puVar8 = puVar4;
          func_0x00010bf51e00(puVar4);
          (**(code **)(lVar7 + 0x10))(lVar7,puVar8,1,0,0);
          _objc_release(puVar8);
          goto LAB_106d380ec;
        }
      }
      goto LAB_106d380d0;
    }
    func_0x00010c1d0640(puVar4);
    func_0x00010c1d0640(puVar4);
    func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x58));
    func_0x00010c1d0640(puVar4);
    uVar9 = param_2;
    func_0x00010bf529e0();
    if (uVar9 != 0) {
      uVar9 = 0;
      do {
        uVar5 = param_2;
        func_0x00010c0dfd40(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(lVar1 + 0x58);
        lVar7 = param_4;
        func_0x00010c0dfd40(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar7;
        func_0x00010bfe7fa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar2);
        _objc_release(lVar6);
        _objc_release(lVar7);
        _objc_release(uVar5);
        uVar9 = uVar9 + 1;
        uVar5 = param_2;
        func_0x00010bf529e0();
      } while (uVar9 < uVar5);
    }
    lVar7 = lVar1;
    func_0x00010bdd7ba0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar4);
    _objc_release(lVar7);
    lVar7 = lVar1;
    func_0x00010be0dd00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c99e0;
    func_0x00010c281320(PTR_PTR_1126c99e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar8);
    _objc_release(lVar7);
    FUN_106d381b4(puVar4,*(undefined8 *)(param_1 + 0x38));
    func_0x00010be4c980(lVar1);
  }
LAB_106d380ec:
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_106d380fc:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d381b4; end: 106d382eb;  */

void FUN_106d381b4(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  if (param_2 != 0) {
    _objc_retain(param_2);
    _objc_retain(param_1);
    puVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar3 = puVar1;
    _objc_opt_isKindOfClass(puVar1,puVar2);
    puVar2 = puVar1;
    if (((ulong)puVar3 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (puVar2 != (undefined *)0x0) {
      puVar1 = puVar2;
    }
    _objc_retain(puVar1);
    _objc_release(puVar2);
    _objc_opt_class(PTR_PTR_1126d24d8);
    puVar2 = puVar1;
    func_0x00010bf09f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c1d0640(param_1);
    _objc_release(puVar2);
    lVar4 = param_2;
    _objc_retainBlock(param_2);
    _objc_release(param_2);
    func_0x00010c1d0640(param_1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 106d382ec; end: 106d38363;  */

void FUN_106d382ec(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x58,param_2 + 0x58);
  return;
}



/* Entry: 106d38364; end: 106d38db7; -[SCGalleryOperaMediaManager _loadGalleryImageSnap:snapDetail:isPrivateSnap:isFromMiniCarousel:shouldShowSoundPill:clientProcessingBitMaskType:entryInfo:completion:] */

void FUN_106d38364(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5,undefined **param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_3e0;
  undefined *puStack_3d0;
  undefined8 uStack_3c8;
  code *pcStack_3c0;
  undefined *puStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  undefined **ppuStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  code *pcStack_388;
  undefined *puStack_380;
  long lStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long lStack_358;
  undefined1 auStack_350 [8];
  undefined8 uStack_348;
  undefined1 uStack_340;
  undefined1 uStack_33f;
  undefined1 uStack_33e;
  undefined1 uStack_33d;
  undefined *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined1 auStack_2c0 [8];
  undefined8 uStack_2b8;
  undefined1 uStack_2b0;
  undefined1 uStack_2af;
  undefined1 uStack_2ae;
  undefined1 uStack_2ad;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  long lStack_288;
  long lStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined1 auStack_220 [8];
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar2 = param_1;
  func_0x00010be91de0();
  if ((int)lVar2 == 0) {
    uStack_3e0 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_3e0 = uVar3;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0xc0);
  func_0x00010bf1f440();
  ppuVar16 = param_6;
  func_0x00010be4df00(param_1);
  lVar2 = param_1;
  func_0x00010be61760();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_90,param_1);
  lVar4 = param_3;
  func_0x00010b5fa85c();
  if ((int)lVar4 == 0) {
    _objc_initWeak(&uStack_c0,param_1);
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_398 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_390 = 0xc2000000;
    pcStack_388 = FUN_106d394a0;
    puStack_380 = &UNK_1109775d8;
    _objc_copyWeak(auStack_350,&uStack_c0);
    _objc_retain(param_3);
    lStack_378 = param_3;
    _objc_retain(param_4);
    uStack_370 = param_4;
    _objc_retain(param_10);
    uStack_360 = param_10;
    uStack_348 = param_8;
    uStack_340 = param_5;
    uStack_33f = (char)param_6;
    _objc_retain(param_9);
    uStack_368 = param_9;
    uStack_33e = uVar1;
    _objc_retain(lVar2);
    ppuVar10 = &puStack_398;
    lStack_358 = lVar2;
    uStack_33d = param_7;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    lVar4 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2dba0();
    _objc_release(uVar3);
    _objc_release(lVar4);
    ppuVar11 = ppuVar10;
    (*(code *)ppuVar10[2])();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    lVar4 = param_3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar11;
    func_0x00010c1d0640(uVar3);
    _objc_release(lVar4);
    if ((*(byte *)(param_1 + 0x198) & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      lVar4 = param_3;
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar3);
      _objc_release(lVar4);
      uVar3 = 0;
      _dispatch_time(0,*(long *)(param_1 + 0x1a0) * 1000000000);
      puStack_3d0 = puVar5;
      uStack_3c8 = 0xc2000000;
      pcStack_3c0 = FUN_106d39ae8;
      puStack_3b8 = &UNK_11084a9e8;
      lStack_3b0 = param_1;
      _objc_retain(param_3);
      lStack_3a8 = param_3;
      _objc_retain(ppuVar10);
      ppuVar15 = &puStack_3d0;
      ppuStack_3a0 = ppuVar10;
      func_0x00010058c530(uVar3,PTR___dispatch_main_q_11034be20);
      _objc_release(ppuStack_3a0);
      _objc_release(lStack_3a8);
    }
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    _objc_release(lStack_358);
    _objc_release(uStack_368);
    _objc_release(uStack_360);
    _objc_release(uStack_370);
    _objc_release(lStack_378);
    _objc_destroyWeak(auStack_350);
    _objc_destroyWeak(&uStack_c0);
  }
  else {
    puStack_b8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b0 = 0x3032000000;
    pcStack_a8 = FUN_106d350dc;
    uStack_a0 = 0x106d350ec;
    uStack_98 = 0;
    puStack_e8 = &uStack_f0;
    uStack_f0 = 0;
    uStack_e0 = 0x3032000000;
    pcStack_d8 = FUN_106d350dc;
    uStack_d0 = 0x106d350ec;
    uStack_c8 = 0;
    puStack_118 = &uStack_120;
    uStack_120 = 0;
    uStack_110 = 0x3032000000;
    pcStack_108 = FUN_106d350dc;
    uStack_100 = 0x106d350ec;
    uStack_f8 = 0;
    puStack_148 = &uStack_150;
    uStack_150 = 0;
    uStack_140 = 0x3032000000;
    pcStack_138 = FUN_106d350dc;
    uStack_130 = 0x106d350ec;
    uStack_128 = 0;
    puStack_178 = &uStack_180;
    uStack_180 = 0;
    uStack_170 = 0x3032000000;
    pcStack_168 = FUN_106d350dc;
    uStack_160 = 0x106d350ec;
    uStack_158 = 0;
    puStack_1a8 = &uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a0 = 0x3032000000;
    pcStack_198 = FUN_106d350dc;
    uStack_190 = 0x106d350ec;
    uStack_188 = 0;
    _dispatch_group_create();
    _dispatch_group_enter();
    lVar14 = param_3;
    func_0x000109023a28();
    if ((int)lVar14 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_260 = 0xc2000000;
      pcStack_258 = FUN_106d390ac;
      puStack_250 = &UNK_1108bab48;
      _objc_copyWeak(auStack_220,auStack_90);
      _objc_retain(lVar4);
      puStack_228 = &uStack_c0;
      lStack_248 = lVar4;
      _objc_retain(param_3);
      lStack_240 = param_3;
      _objc_retain(param_4);
      uStack_238 = param_4;
      _objc_retain(uStack_3e0);
      uStack_230 = uStack_3e0;
      func_0x00010c0f7fc0(uVar3);
      _objc_release(uStack_230);
      _objc_release(uStack_238);
      _objc_release(lStack_240);
      _objc_release(lStack_248);
      _objc_destroyWeak(auStack_220);
    }
    else {
      puVar5 = PTR_PTR_1126bfb80;
      _objc_alloc();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_88 = param_3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0xa8);
      func_0x00010c1307e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a1a0();
      _objc_release(uVar3);
      _objc_release(uVar7);
      _objc_release(puVar6);
      uVar7 = *(undefined8 *)(param_1 + 0xa8);
      func_0x00010bf0b480();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x100);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_210 = 0xc2000000;
      pcStack_208 = FUN_106d38db8;
      puStack_200 = &UNK_110977518;
      _objc_copyWeak(auStack_1b8,auStack_90);
      _objc_retain(param_3);
      lStack_1f8 = param_3;
      _objc_retain(lVar4);
      puStack_1d8 = &uStack_c0;
      puStack_1d0 = &uStack_150;
      puStack_1c8 = &uStack_180;
      lStack_1f0 = lVar4;
      _objc_retain(puVar5);
      puStack_1e8 = puVar5;
      _objc_retain(param_4);
      puStack_1c0 = &uStack_1b0;
      uStack_1e0 = param_4;
      func_0x00010c1357e0(uVar3);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar3);
      _objc_release(uVar7);
      _objc_release(uStack_1e0);
      _objc_release(puStack_1e8);
      _objc_release(lStack_1f0);
      _objc_release(lStack_1f8);
      _objc_destroyWeak(auStack_1b8);
      _objc_release(puVar5);
    }
    _dispatch_group_enter(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11de00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2a0 = 0xc2000000;
    pcStack_298 = FUN_106d39168;
    puStack_290 = &UNK_110977338;
    _objc_retain(param_3);
    puStack_278 = &uStack_120;
    puStack_270 = &uStack_f0;
    lStack_288 = param_3;
    _objc_retain(lVar4);
    ppuVar16 = &PTR____CFConstantStringClassReference_110e849b8;
    lStack_280 = lVar4;
    func_0x00010c136020(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar3);
    puStack_338 = puVar5;
    uStack_330 = 0xc2000000;
    pcStack_328 = FUN_106d39200;
    puStack_320 = &UNK_110977548;
    _objc_copyWeak(auStack_2c0,auStack_90);
    puStack_2f0 = &uStack_c0;
    _objc_retain(param_10);
    uStack_300 = param_10;
    _objc_retain(param_3);
    lStack_318 = param_3;
    _objc_retain(param_4);
    puStack_2e8 = &uStack_150;
    puStack_2e0 = &uStack_1b0;
    puStack_2d8 = &uStack_180;
    puStack_2d0 = &uStack_120;
    puStack_2c8 = &uStack_f0;
    uStack_310 = param_4;
    uStack_2b0 = uVar1;
    uStack_2af = param_5;
    uStack_2ae = (char)param_6;
    _objc_retain(lVar2);
    lStack_2f8 = lVar2;
    uStack_2b8 = param_8;
    _objc_retain(param_9);
    uStack_308 = param_9;
    ppuVar15 = &puStack_338;
    uStack_2ad = param_7;
    func_0x000100bc0718(lVar4,PTR___dispatch_main_q_11034be20);
    _objc_release(uStack_308);
    _objc_release(lStack_2f8);
    _objc_release(uStack_310);
    _objc_release(lStack_318);
    _objc_release(uStack_300);
    _objc_destroyWeak(auStack_2c0);
    _objc_release(lStack_280);
    _objc_release(lStack_288);
    _objc_release(lVar4);
    __Block_object_dispose(&uStack_1b0,8);
    _objc_release(uStack_188);
    __Block_object_dispose(&uStack_180,8);
    _objc_release(uStack_158);
    __Block_object_dispose(&uStack_150,8);
    _objc_release(uStack_128);
    __Block_object_dispose(&uStack_120,8);
    _objc_release(uStack_f8);
    __Block_object_dispose(&uStack_f0,8);
    _objc_release(uStack_c8);
    __Block_object_dispose(&uStack_c0,8);
    _objc_release(uStack_98);
  }
  _objc_destroyWeak(auStack_90);
  _objc_release(lVar2);
  _objc_release(uStack_3e0);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1b8);
  __Block_object_dispose(&uStack_1b0,8);
  __Block_object_dispose(&uStack_180,8);
  __Block_object_dispose(&uStack_150,8);
  __Block_object_dispose(&uStack_120,8);
  __Block_object_dispose(&uStack_f0,8);
  lVar14 = 8;
  __Block_object_dispose(&uStack_c0);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = lVar14;
  _objc_retain(lVar14);
  _objc_retain(ppuVar15);
  lVar2 = param_3 + 0x60;
  _objc_loadWeakRetained();
  if ((ppuVar16 == (undefined **)0x0) && (lVar2 != 0)) {
    lVar18 = *(long *)(*(long *)(param_3 + 0x40) + 8);
    _objc_retain(lVar14);
    uVar3 = *(undefined8 *)(lVar18 + 0x28);
    *(long *)(lVar18 + 0x28) = lVar14;
    _objc_release(uVar3);
    lVar18 = *(long *)(*(long *)(param_3 + 0x48) + 8);
    _objc_retain(ppuVar15);
    uVar3 = *(undefined8 *)(lVar18 + 0x28);
    *(undefined ***)(lVar18 + 0x28) = ppuVar15;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010bfb2080();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = *(long *)(*(long *)(param_3 + 0x50) + 8);
    uVar7 = *(undefined8 *)(lVar18 + 0x28);
    *(undefined8 *)(lVar18 + 0x28) = uVar3;
    _objc_release(uVar7);
    lVar12 = *(long *)(lVar2 + 0x110);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar2 + 0x110);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bfc04e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ed100(*(undefined8 *)(param_3 + 0x20));
    uVar8 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010c0ef4a0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c2a5040(uVar9);
    uVar13 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bfe0640(uVar13);
    lVar18 = lVar12;
    func_0x00010bfe8560((double)(int)uVar9,(double)(int)uVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(lVar12);
    if (lVar18 != 0) {
      puVar5 = PTR_PTR_1126b26e8;
      _objc_alloc();
      func_0x00010bfffdc0();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = *(long *)(*(long *)(param_3 + 0x58) + 8);
      uVar3 = *(undefined8 *)(lVar12 + 0x28);
      *(undefined **)(lVar12 + 0x28) = puVar6;
      _objc_release(uVar3);
      _objc_release(puVar5);
    }
    _dispatch_group_leave(*(undefined8 *)(param_3 + 0x28));
    _objc_release(lVar18);
  }
  else {
    _dispatch_group_leave(*(undefined8 *)(param_3 + 0x28));
  }
  _objc_release(lVar2);
  _objc_release(ppuVar15);
  _objc_release(lVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(*(undefined8 *)(lVar4 + 0x20));
  _objc_retain(*(undefined8 *)(lVar4 + 0x28));
  _objc_retain(*(undefined8 *)(lVar4 + 0x30));
  _objc_retain(*(undefined8 *)(lVar4 + 0x38));
  __Block_object_assign(lVar14 + 0x40,*(undefined8 *)(lVar4 + 0x40),8);
  __Block_object_assign(lVar14 + 0x48,*(undefined8 *)(lVar4 + 0x48),8);
  __Block_object_assign(lVar14 + 0x50,*(undefined8 *)(lVar4 + 0x50),8);
  __Block_object_assign(lVar14 + 0x58,*(undefined8 *)(lVar4 + 0x58),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(lVar14 + 0x60,lVar4 + 0x60);
  return;
}



/* Entry: 106d38db8; end: 106d39023;  */

void FUN_106d38db8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if ((param_5 == 0) && (lVar1 != 0)) {
    lVar12 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar12 + 0x28);
    *(long *)(lVar12 + 0x28) = param_2;
    _objc_release(uVar2);
    lVar12 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(lVar12 + 0x28);
    *(undefined8 *)(lVar12 + 0x28) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bfb2080();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    uVar11 = *(undefined8 *)(lVar12 + 0x28);
    *(undefined8 *)(lVar12 + 0x28) = uVar2;
    _objc_release(uVar11);
    lVar3 = *(long *)(lVar1 + 0x110);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar1 + 0x110);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar11;
    func_0x00010bfc04e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ed100(*(undefined8 *)(param_1 + 0x20));
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0ef4a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2a5040(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe0640(uVar6);
    lVar12 = lVar3;
    func_0x00010bfe8560((double)(int)uVar5,(double)(int)uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar11);
    _objc_release(lVar3);
    if (lVar12 != 0) {
      puVar7 = PTR_PTR_1126b26e8;
      _objc_alloc();
      func_0x00010bfffdc0();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 8);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined **)(lVar3 + 0x28) = puVar8;
      _objc_release(uVar2);
      _objc_release(puVar7);
    }
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
    _objc_release(lVar12);
  }
  else {
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(*(undefined8 *)(lVar9 + 0x20));
  _objc_retain(*(undefined8 *)(lVar9 + 0x28));
  _objc_retain(*(undefined8 *)(lVar9 + 0x30));
  _objc_retain(*(undefined8 *)(lVar9 + 0x38));
  __Block_object_assign(param_2 + 0x40,*(undefined8 *)(lVar9 + 0x40),8);
  __Block_object_assign(param_2 + 0x48,*(undefined8 *)(lVar9 + 0x48),8);
  __Block_object_assign(param_2 + 0x50,*(undefined8 *)(lVar9 + 0x50),8);
  __Block_object_assign(param_2 + 0x58,*(undefined8 *)(lVar9 + 0x58),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_2 + 0x60,lVar9 + 0x60);
  return;
}



/* Entry: 106d39024; end: 106d390ab;  */

void FUN_106d39024(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x60,param_2 + 0x60);
  return;
}



/* Entry: 106d390ac; end: 106d39167;  */

void FUN_106d390ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x110);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0ef4a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfbf380(uVar2,param_2,uVar5,uVar3,*(undefined8 *)(param_1 + 0x38),0,1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar6 + 0x28) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d39168; end: 106d391ff;  */

void FUN_106d39168(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x000109023a28();
  if (iVar1 != 0) {
    uVar2 = param_2;
    func_0x00010c0c5d00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  uVar2 = param_2;
  func_0x00010c1511c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


