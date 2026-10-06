/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ed0de0; end: 104ed0ef3;  */

void FUN_104ed0de0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(lVar1 + 0x118);
    *(undefined8 *)(lVar1 + 0x118) = param_4;
    _objc_release(uVar2);
    if (param_5 == 0) {
      lVar3 = param_2;
      func_0x00010bf529e0();
      if (lVar3 == 0) {
        func_0x00010be840e0(lVar1);
      }
      lVar3 = param_2;
      func_0x00010bf529e0();
      if (lVar3 != 0) {
        func_0x00010c0ac460(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(lVar1 + 0xe0));
        func_0x00010bedd120(lVar1);
        func_0x00010be11e00(*(undefined8 *)(param_1 + 0x30),lVar1);
      }
    }
    else {
      func_0x00010be840e0(lVar1);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ed0ef4; end: 104ed104b; -[SCMapVisualPlacesTrayController _fetchInitialVisualTrayPlacesDataForDiscoveryPlaces:pivots:trayDetails:startTimestamp:] */

void FUN_104ed0ef4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_2);
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar1 = param_6;
  func_0x00010c0fd300(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_6);
  _objc_retain(param_5);
  uStack_60 = param_1;
  func_0x00010bfa7aa0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104ed104c; end: 104ed116b;  */

void FUN_104ed104c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be840e0(lVar1);
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c0fd300();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0fd320();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c071f40();
    if ((uVar4 & 1) == 0) {
      ppuVar5 = *(undefined ***)(param_1 + 0x20);
      func_0x00010c0fd300(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010c0fc8e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
    }
    else {
      ppuVar6 = &PTR____CFConstantStringClassReference_110db9e78;
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar7 = *(undefined8 *)(lVar1 + 0xe0);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf529e0(param_2);
    func_0x00010c0b1cc0(uVar8,uVar7);
    _objc_release(ppuVar6);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ed116c; end: 104ed12f7; -[SCMapVisualPlacesTrayController _fetchPlaceThumbnailsDataForPlaceID:] */

void FUN_104ed116c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0xf8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104ed12f8;
  puStack_60 = &UNK_110858fe0;
  _objc_retain(param_3);
  uStack_58 = param_3;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c259320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf09a20();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xf0);
    _objc_retain(uVar4);
    _objc_initWeak(auStack_80,param_1);
    uVar5 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_3);
    _objc_retain(uVar4);
    func_0x00010bfa93e0(uVar5);
    _objc_release(uVar4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 104ed12f8; end: 104ed133f;  */

undefined8 FUN_104ed12f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0fd0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 104ed1340; end: 104ed1393;  */

void FUN_104ed1340(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf9b20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ed1394; end: 104ed14e7; -[SCMapVisualPlacesTrayController _removeVisitedAnnotationForPlace:] */

void FUN_104ed1394(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf51e00();
  lVar2 = param_3;
  func_0x00010c0fd340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010bfaea20(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc620(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x000106769c18(lVar1,&PTR____CFConstantStringClassReference_110e5bff8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0fd340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e5bbf8;
    func_0x00010676b02c(&PTR____CFConstantStringClassReference_110e5bbf8,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c118b60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(lVar3);
    _objc_release(ppuVar5);
  }
  func_0x00010bef8340(*(undefined8 *)(param_1 + 0x48));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ed14e8; end: 104ed1533;  */

uint FUN_104ed14e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0fc8e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 104ed1534; end: 104ed180b; -[SCMapVisualPlacesTrayController _updateBasemapWithPlaces:pivot:] */

void FUN_104ed1534(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(param_3);
  puVar4 = param_3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_3);
      }
      uVar10 = *(undefined8 *)((long)puVar9 * 8);
      uVar5 = uVar10;
      func_0x00010c0fd0e0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(uVar5);
      func_0x000106769c18(uVar10,&PTR____CFConstantStringClassReference_110e5c018);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(uVar10);
      puVar9 = puVar9 + 1;
    } while (puVar4 != puVar9);
    puVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar9 = *(undefined **)(param_1 + 0x68);
  puVar4 = puVar2;
  func_0x00010c072060();
  if (((ulong)puVar4 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bfc8d60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_1 + 0x68);
    if (lVar6 != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c4c0(uVar10);
      _objc_release(lVar6);
      uVar10 = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x68) = 0;
      _objc_release(uVar10);
    }
    puVar4 = param_3;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      puVar9 = PTR____NSArray0__struct_11034ab48;
      func_0x00010c2238a0(uVar5);
    }
    else {
      _objc_retain(puVar2);
      uVar10 = *(undefined8 *)(param_1 + 0x68);
      *(undefined **)(param_1 + 0x68) = puVar2;
      _objc_release(uVar10);
      func_0x00010bef83c0(*(undefined8 *)(param_1 + 0x48));
      puVar4 = param_4;
      func_0x00010c0fc8e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x000106768a60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar9 = puVar7;
      func_0x00010c2238a0(uVar5);
      func_0x00010c29fd40(*(undefined8 *)(param_1 + 0x40));
      iVar1 = (int)*(undefined8 *)(param_1 + 0xf0);
      func_0x00010c232380();
      if (iVar1 != 0) {
        puVar9 = param_3;
        func_0x00010bddc5e0(param_1);
      }
      _objc_release(puVar7);
    }
    _objc_release(uVar5);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bef8350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x48),PTR_s_addFeature_feature__11259ba78,
             &PTR____CFConstantStringClassReference_110e30138,puVar9);
  return;
}



/* Entry: 104ed180c; end: 104ed1823; -[SCMapVisualPlacesTrayController _showPlacePinForPlaceFeature:] */

void FUN_104ed180c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef8350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_addFeature_feature__11259ba78,
             &PTR____CFConstantStringClassReference_110e30138,param_3);
  return;
}



/* Entry: 104ed1824; end: 104ed1883; -[SCMapVisualPlacesTrayController _hidePlacePinForPlaceId:] */

void FUN_104ed1824(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_3);
  func_0x00010c135460(uVar1,param_2,&PTR____CFConstantStringClassReference_110e30138,param_3);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x68),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ed1884; end: 104ed1aaf; -[SCMapVisualPlacesTrayController _centerDiscoveryPlaces:] */

void FUN_104ed1884(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  byte bStack_5f;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) goto LAB_104ed1a70;
  iVar1 = (int)*(undefined8 *)(param_1 + 0xf0);
  func_0x00010c232380();
  if (iVar1 == 0) goto LAB_104ed1a70;
  lVar2 = param_1 + 0x108;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bef07e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    _objc_release(lVar2);
    goto LAB_104ed1a70;
  }
  lVar4 = param_1 + 0x108;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bef07e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf5fb20();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar6 == 0x10) goto LAB_104ed1a70;
  uVar7 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c0fd300();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0fd320();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010c071f40();
  if ((int)uVar10 == 0) {
LAB_104ed1974:
    bVar11 = 0;
  }
  else {
    uVar9 = *(ulong *)(param_1 + 0xf0);
    func_0x00010c1545c0();
    if ((uVar9 & 1) != 0) goto LAB_104ed1974;
    bVar11 = *(byte *)(param_1 + 0xe8) ^ 1;
  }
  _objc_release(uVar8);
  _objc_release(uVar7);
  uVar10 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c0e9800();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 3;
  func_0x00010bb01b4c(3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c0720c0();
  _objc_release(uVar7);
  _objc_release(uVar10);
  _objc_initWeak(auStack_58,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104ed1ab0;
  puStack_78 = &UNK_110859060;
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = (undefined1)uVar8;
  _objc_retain(param_3);
  lStack_70 = param_3;
  bStack_5f = bVar11 & 1;
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  _objc_release(lStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
LAB_104ed1a70:
  _objc_release(param_3);
  return;
}



/* Entry: 104ed1ab0; end: 104ed1c27;  */

void FUN_104ed1ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = param_5 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bdd85a0();
  uVar5 = param_1;
  _objc_release(lVar2);
  if (*(char *)(param_5 + 0x30) == '\x01') {
    lVar2 = *(long *)(param_5 + 0x20);
    func_0x00010bfb1920(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5 + 0x28;
    _objc_loadWeakRetained(lVar3);
    uVar4 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c08aca0(lVar2);
    uVar6 = uVar5;
    func_0x00010c09abe0(lVar2);
    _CLLocationCoordinate2DMake(uVar5,uVar6);
    func_0x00010bde7300(param_1,param_2,param_3,param_4,uVar5,uVar6,lVar3,param_6,uVar4);
    _objc_release(lVar3);
  }
  else {
    lVar2 = param_5 + 0x28;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bdcf2a0();
    if ((int)lVar3 == 0) {
      _objc_release(lVar2);
    }
    else {
      bVar1 = *(byte *)(param_5 + 0x31);
      _objc_release(lVar2);
      if ((bVar1 & 1) == 0) {
        lVar2 = param_5 + 0x28;
        _objc_loadWeakRetained(lVar2);
        func_0x00010bde72e0(param_1,param_2,param_3,param_4,
                            *(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98,
                            *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8));
        goto LAB_104ed1c08;
      }
    }
    lVar2 = param_5 + 0x28;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bde7300(param_1,param_2,param_3,param_4,
                        *(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98,
                        *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8));
  }
LAB_104ed1c08:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104ed1c28; end: 104ed1f9f; -[SCMapVisualPlacesTrayController _containBoundedDiscoveryPlaces:edgePadding:anchorCoordinate:] */

void FUN_104ed1c28(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double in_d3;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 uVar13;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 == 0) goto LAB_104ed1f50;
  uVar6 = in_d4;
  uVar12 = in_d5;
  _CLLocationCoordinate2DIsValid(in_d4,in_d5);
  if ((uVar1 & 1) == 0) {
    func_0x00010bf34640(*(undefined8 *)(param_1 + 0x40));
    in_d5 = uVar12;
    in_d4 = uVar6;
  }
  uVar1 = param_3;
  func_0x00010c0d3c80(param_3);
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    uVar2 = *(ulong *)(param_1 + 0xf0);
    func_0x00010c0fd300();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0fd320();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c071f40();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) goto LAB_104ed1d08;
  }
  else {
LAB_104ed1d08:
    puVar5 = PTR_PTR_1126b1e10;
    _objc_alloc_init(PTR_PTR_1126b1e10);
    func_0x00010c1b9120(in_d4);
    func_0x00010c1be5e0(in_d5,puVar5);
    func_0x00010befa120(uVar1);
    _objc_release(puVar5);
  }
  func_0x000108d31a2c(uVar1,&PTR___NSConcreteGlobalBlock_1108590b0);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf2b200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b1e20;
  _objc_alloc(PTR_PTR_1126b1e20);
  dVar8 = 1.0;
  func_0x00010c00eb00();
  func_0x00010bf01f00(uVar6);
  dVar9 = dVar8;
  func_0x00010c0fc7c0(uVar6);
  dVar11 = dVar9;
  func_0x00010bf34640(uVar6);
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x38));
  dVar9 = 1.5707963267948966 - (dVar9 * 3.141592653589793) / 180.0;
  _sin();
  dVar10 = 0.2617993877991494;
  _tan();
  dVar11 = (dVar11 * 3.141592653589793) / 180.0;
  _cos();
  dVar11 = ((dVar11 * 6.283185307179586 * 6378137.0) /
           ((dVar10 * (dVar8 / dVar9 + dVar8 / dVar9)) / in_d3)) * 0.001953125;
  _log2();
  puVar5 = PTR_PTR_1126b1e08;
  uVar12 = 0x402e000000000000;
  uVar13 = NEON_fminnm(dVar11,0x402e000000000000);
  func_0x00010bf34640(uVar6);
  dVar9 = dVar11;
  func_0x00010c0fc7c0(uVar6);
  func_0x00010bf29880(dVar11,uVar12,uVar13,dVar9,0,puVar5);
  _objc_retainAutoreleasedReturnValue();
  *(undefined1 *)(param_1 + 0x58) = 1;
  _objc_initWeak(auStack_98,param_1);
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar6);
  uStack_a0 = uVar13;
  _objc_copyWeak(auStack_a8,auStack_98);
  func_0x00010c176120(uVar12);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar1);
LAB_104ed1f50:
  _objc_release(param_3);
  return;
}



/* Entry: 104ed1fa0; end: 104ed1ff3;  */

void FUN_104ed1fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c08aca0(param_3);
  uVar1 = param_1;
  func_0x00010c09abe0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CLLocationCoordinate2DMake_110349b58)(param_1,uVar1);
  return;
}



/* Entry: 104ed1ff4; end: 104ed201f;  */

void FUN_104ed1ff4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ed2020; end: 104ed2397; -[SCMapVisualPlacesTrayController _containUnboundedDiscoveryPlaces:edgePadding:anchorCoordinate:] */

void FUN_104ed2020(double param_1,undefined8 param_2,double param_3,double param_4,double param_5,
                  double param_6,long param_7,undefined8 param_8,ulong param_9)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar14 = param_3;
  dVar15 = param_4;
  _objc_retain(param_9);
  uVar5 = param_9;
  func_0x00010bf529e0();
  if (uVar5 != 0) {
    dVar12 = param_5;
    dVar17 = param_6;
    _CLLocationCoordinate2DIsValid();
    func_0x00010c29fd40(*(undefined8 *)(param_7 + 0x40));
    dVar16 = param_6;
    dVar13 = param_5;
    if ((uVar5 & 1) == 0) {
      dVar13 = (dVar12 + dVar14) * 0.5;
      dVar16 = (dVar17 + dVar15) * 0.5;
      _CLLocationCoordinate2DMake();
    }
    func_0x000108d312a8(dVar14,dVar15,dVar12);
    func_0x000108d31f58();
    uVar6 = param_9;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf529e0();
    uVar8 = param_9;
    func_0x00010bf529e0();
    if (uVar8 >> 1 < uVar7) {
      func_0x00010bde72e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
    else {
      dVar15 = param_5;
      dVar12 = param_6;
      if ((uVar5 & 1) == 0) {
        func_0x00010bf34640(*(undefined8 *)(param_7 + 0x40));
        dVar15 = dVar13;
        dVar12 = dVar16;
      }
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d320d0();
      func_0x00010c29fd40(*(undefined8 *)(param_7 + 0x40));
      func_0x00010c2bf200(*(undefined8 *)(param_7 + 0x40));
      func_0x000108d31d88();
      dVar16 = (dVar15 + dVar14) * 0.5;
      dVar17 = (dVar12 + dVar17) * 0.5;
      _CLLocationCoordinate2DMake();
      dVar15 = param_1;
      func_0x00010be20600(param_1,param_2,param_3,param_4,param_7);
      dVar12 = param_6;
      dVar14 = param_5;
      if ((int)uVar5 == 0) {
        dVar12 = dVar17;
        dVar14 = dVar16;
      }
      puVar11 = puVar9;
      func_0x00010bf529e0();
      dVar16 = 10.0;
      func_0x000106c1c7a0();
      dVar17 = dVar14;
      if (-1 < (long)(puVar11 + -1)) {
        do {
          puVar11 = puVar11 + -1;
          puVar10 = puVar9;
          func_0x00010c14da60();
          _objc_retainAutoreleasedReturnValue();
          if (puVar10 == (undefined *)0x0) {
LAB_104ed2318:
            puVar11 = puVar9;
            func_0x00010c25e980(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bde72e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
            _objc_release(puVar11);
            break;
          }
          func_0x00010c08aca0();
          dVar13 = dVar17;
          func_0x00010c09abe0(puVar10);
          _CLLocationCoordinate2DMake();
          bVar2 = false;
          bVar3 = true;
          if (dVar14 <= dVar17) {
            bVar2 = false;
            bVar3 = true;
            if (!NAN(dVar17) && !NAN(dVar16)) {
              bVar2 = dVar17 == dVar16;
              bVar3 = dVar16 <= dVar17;
            }
          }
          bVar1 = true;
          bVar4 = false;
          if (!bVar3 || bVar2) {
            bVar1 = false;
            bVar4 = true;
            if (!NAN(dVar13) && !NAN(dVar12)) {
              bVar1 = dVar13 < dVar12;
              bVar4 = false;
            }
          }
          bVar2 = false;
          bVar3 = true;
          if (bVar1 == bVar4) {
            bVar2 = false;
            bVar3 = true;
            if (!NAN(dVar13) && !NAN(dVar15)) {
              bVar2 = dVar13 == dVar15;
              bVar3 = dVar15 <= dVar13;
            }
          }
          if (!bVar3 || bVar2) {
            _objc_release(puVar10);
            goto LAB_104ed2318;
          }
          _objc_release(puVar10);
        } while (0 < (long)puVar11);
      }
      _objc_release(puVar9);
    }
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_9);
  return;
}



/* Entry: 104ed2398; end: 104ed2473;  */

bool FUN_104ed2398(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  func_0x00010c08aca0(param_3);
  dVar5 = param_1;
  func_0x00010c09abe0(param_3);
  _objc_release(param_3);
  _CLLocationCoordinate2DMake();
  dVar6 = *(double *)(param_2 + 0x30);
  bVar2 = false;
  bVar3 = true;
  if (*(double *)(param_2 + 0x20) <= param_1) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_1) && !NAN(dVar6)) {
      bVar2 = param_1 == dVar6;
      bVar3 = dVar6 <= param_1;
    }
  }
  bVar1 = true;
  bVar4 = false;
  if (!bVar3 || bVar2) {
    bVar1 = false;
    bVar4 = true;
    if (!NAN(dVar5) && !NAN(*(double *)(param_2 + 0x28))) {
      bVar1 = dVar5 < *(double *)(param_2 + 0x28);
      bVar4 = false;
    }
  }
  if (bVar1 == bVar4) {
    bVar2 = dVar5 <= *(double *)(param_2 + 0x38);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 104ed2474; end: 104ed25cf; -[SCMapVisualPlacesTrayController _arePlacesBounded] */

bool FUN_104ed2474(long param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = *(ulong *)(param_1 + 0xf0);
  func_0x00010c0fd300();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0fd320();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c071f40();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0xf0);
    func_0x00010c0fd300();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c08fa60();
    _objc_release(lVar6);
    _objc_release(lVar5);
    if (lVar7 == 0) {
      lVar7 = *(long *)(param_1 + 0xf0);
      func_0x00010c0fd300();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar7;
      func_0x00010c0fc8e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      lVar7 = lVar6;
      func_0x00010c08fa60();
      if (lVar7 == 0) {
        bVar1 = true;
      }
      else {
        lVar7 = lVar6;
        func_0x00010bf32ee0(lVar6,param_2,&PTR____CFConstantStringClassReference_110e5b3d8);
        if ((lVar7 == 0) ||
           (lVar7 = lVar6,
           func_0x00010bf32ee0(lVar6,param_2,&PTR____CFConstantStringClassReference_110dba018),
           lVar7 == 0)) {
          bVar1 = false;
        }
        else {
          lVar7 = lVar6;
          func_0x00010bf32ee0(lVar6,param_2,&PTR____CFConstantStringClassReference_110e5bb18);
          bVar1 = lVar7 != 0;
        }
      }
      _objc_release(lVar6);
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 104ed25d0; end: 104ed25d7; -[SCMapVisualPlacesTrayController _onCenteringAnimationCompleted] */

void FUN_104ed25d0(long param_1)

{
  *(undefined1 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010beddd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePreviousSearchViewport_112595108);
  return;
}



/* Entry: 104ed25d8; end: 104ed26a7; -[SCMapVisualPlacesTrayController _calculateEdgePaddingForVisibleTrayHeight] */

undefined8 FUN_104ed25d8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c0d26a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a0140();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x4034000000000000;
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c0d26a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b8920();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar2 = param_1;
  }
  return uVar2;
}



/* Entry: 104ed26a8; end: 104ed2707; -[SCMapVisualPlacesTrayController _getMapViewSizeWithEdgePadding:] */

undefined1  [16]
FUN_104ed26a8(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  dVar1 = param_3;
  dVar2 = param_4;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x38));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x38));
  auVar3._8_8_ = (dVar2 - param_3) - param_1;
  auVar3._0_8_ = (dVar1 - param_2) - param_4;
  return auVar3;
}



/* Entry: 104ed2708; end: 104ed27af; -[SCMapVisualPlacesTrayController _delayedRefreshData] */

void FUN_104ed2708(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104ed27b0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104ed27b0; end: 104ed2823;  */

void FUN_104ed27b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c069d00(*(undefined8 *)(param_1 + 0x60));
    puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c1503c0(0x3fe999999999999a,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                        PTR_s__refreshPlaceDiscoveryTrayData_1125269f8,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined **)(param_1 + 0x60) = puVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ed2824; end: 104ed2a63; -[SCMapVisualPlacesTrayController _updatePlacePivotInTrayDetailsIfNeededWithPlacePivots:] */

void FUN_104ed2824(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_5);
  lVar2 = *(long *)(param_3 + 0xf0);
  func_0x00010c0fd300();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_3 + 0xf0);
    func_0x00010c0fd300();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0fc8a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((lVar5 == 0) && (lVar2 = param_5, func_0x00010bf529e0(), lVar2 != 0)) {
      uVar6 = *(undefined8 *)(param_3 + 0xf0);
      func_0x00010c0fd300();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0fc8e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uVar6 = 0xc2000000;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_104ed2a64;
      puStack_80 = &UNK_110859110;
      _objc_retain(uVar7);
      lVar2 = param_5;
      uStack_78 = uVar7;
      func_0x00010bfb2040(param_5,param_4,&puStack_98);
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        puVar8 = PTR_PTR_1126b1e18;
        _objc_alloc();
        uVar1 = (undefined4)*(undefined8 *)(param_3 + 0xf0);
        func_0x00010c232380();
        uVar9 = *(undefined8 *)(param_3 + 0xf0);
        func_0x00010c0640a0(uVar9);
        uVar10 = *(undefined8 *)(param_3 + 0xf0);
        func_0x00010c1545c0(uVar10);
        uVar11 = *(undefined8 *)(param_3 + 0xf0);
        func_0x00010c13b640(uVar11);
        func_0x00010c0fd1a0(*(undefined8 *)(param_3 + 0xf0));
        uVar12 = *(undefined8 *)(param_3 + 0xf0);
        func_0x00010c0e9800(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(param_3 + 0xf0);
        func_0x00010c247b60();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = *(undefined8 *)(param_3 + 0xf0);
        func_0x00010bfb4260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0366e0(uVar6,param_2,puVar8,param_4,lVar2,uVar1,uVar9,uVar10,uVar11,uVar12,
                            uVar13,uVar14);
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar12);
        uVar6 = *(undefined8 *)(param_3 + 0xf0);
        *(undefined **)(param_3 + 0xf0) = puVar8;
        _objc_release(uVar6);
      }
      _objc_release(lVar2);
      _objc_release(uStack_78);
      _objc_release(uVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104ed2a64; end: 104ed2aab;  */

undefined8 FUN_104ed2a64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0fc8e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 104ed2aac; end: 104ed2ae3; -[SCMapVisualPlacesTrayController _updatePreviousSearchViewport] */

void FUN_104ed2aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  func_0x00010c29fd40(*(undefined8 *)(param_5 + 0x40));
  *(undefined8 *)(param_5 + 0x98) = param_1;
  *(undefined8 *)(param_5 + 0xa0) = param_2;
  *(undefined8 *)(param_5 + 0xa8) = param_3;
  *(undefined8 *)(param_5 + 0xb0) = param_4;
  func_0x00010c2bf200(*(undefined8 *)(param_5 + 0x40));
  *(undefined8 *)(param_5 + 0xb8) = param_1;
  return;
}



/* Entry: 104ed2ae4; end: 104ed2d8f; -[SCMapVisualPlacesTrayController _handleStoriesLoadedEventForPlace:thumbnailsData:] */

void FUN_104ed2ae4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  double dVar13;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b1e28;
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c010e40();
  uVar2 = param_5;
  func_0x00010c259360();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar4);
  if (uVar3 == 0) {
    dVar13 = 0.0;
  }
  else {
    uVar2 = param_5;
    func_0x00010c251000();
    dVar13 = (param_1 - (double)uVar2) * 1000.0;
  }
  puStack_c8 = PTR_PTR_113184b28;
  uVar5 = param_4;
  func_0x00010c0fd0e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR_PTR_113184b68;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_a0 = uVar5;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_b8 = PTR_PTR_113184b50;
  uVar2 = param_5;
  puStack_98 = puVar6;
  func_0x00010c0de4c0(param_5);
  func_0x00010c0df840(puVar4,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR_PTR_113184b58;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar4;
  func_0x00010c0df720(dVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a8 = PTR_PTR_113184b60;
  uVar8 = param_4;
  puStack_88 = puVar7;
  func_0x00010c119ba0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar9 = uVar8;
  func_0x00010bf529e0(uVar8);
  func_0x00010c0df840(puVar10,param_3,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar10;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&uStack_a0,&puStack_c8,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189480(puVar1,param_3,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(uVar5);
  puVar4 = puVar1;
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x20),param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b1e30;
  _objc_retain(puVar4);
  _objc_alloc(puVar1);
  puVar10 = puVar4;
  func_0x00010c259320(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df1e0();
  puVar6 = puVar4;
  func_0x00010c259320(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf09a20();
  puVar11 = puVar4;
  func_0x00010c259320(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c11f900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0305c0(dVar13,puVar1,param_3,puVar7,puVar12);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_release(puVar10);
  puVar10 = puVar4;
  func_0x00010c259320(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar10;
  func_0x00010bfd7e20(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a60e0(puVar1,param_3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ed2d90; end: 104ed2ecb; -[SCMapVisualPlacesTrayController _prevPlaceStoryCarouselDataForPlace:] */

void FUN_104ed2d90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b1e30;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010c259320(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df1e0();
  uVar3 = param_4;
  func_0x00010c259320(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf09a20();
  uVar5 = param_4;
  func_0x00010c259320(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c11f900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0305c0(param_1,puVar1,param_3,uVar4,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c259320(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010bfd7e20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a60e0(puVar1,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ed2ecc; end: 104ed2ef3; -[SCMapVisualPlacesTrayController _clearPlaceThumbnailsDataDictionary] */

void FUN_104ed2ecc(long param_1)

{
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 200),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 104ed2ef4; end: 104ed30c3; -[SCMapVisualPlacesTrayController removeVisitationForPlace:] */

void FUN_104ed2ef4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0xf8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104ed30c4;
  puStack_70 = &UNK_110858fe0;
  _objc_retain(param_3);
  uStack_68 = param_3;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xf8);
    func_0x00010c0d3c80();
    uVar3 = *(undefined8 *)(param_1 + 0x100);
    _objc_retain(uVar3);
    _objc_initWeak(auStack_90,param_1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_98,auStack_90);
    _objc_retain(uVar1);
    _objc_retain(uVar3);
    _objc_retain(lVar2);
    func_0x00010c12f240(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0xf8);
    func_0x00010c0d3c80(uVar4);
    func_0x00010c12d360();
    func_0x00010be840e0(param_1);
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
  _objc_release(uStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 104ed30c4; end: 104ed310b;  */

undefined8 FUN_104ed30c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0fd0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 104ed310c; end: 104ed3167;  */

void FUN_104ed310c(long param_1,long param_2)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010be8df60(param_1);
  }
  else {
    func_0x00010be840e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ed3168; end: 104ed321b; -[SCMapVisualPlacesTrayController removePlace:] */

void FUN_104ed3168(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104ed321c;
  puStack_40 = &UNK_110858fe0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bfaea20(uVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be840e0(param_1,param_2,2,uVar1,*(undefined8 *)(param_1 + 0x100));
  _objc_release(uVar1);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ed321c; end: 104ed3263;  */

uint FUN_104ed321c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0fd0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 104ed3264; end: 104ed326b; -[SCMapVisualPlacesTrayController trayDetails] */

undefined8 FUN_104ed3264(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 104ed326c; end: 104ed3273; -[SCMapVisualPlacesTrayController visiblePlaces] */

undefined8 FUN_104ed326c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 104ed3274; end: 104ed327b; -[SCMapVisualPlacesTrayController visiblePlacePivots] */

undefined8 FUN_104ed3274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 104ed327c; end: 104ed3293; -[SCMapVisualPlacesTrayController delegate] */

void FUN_104ed327c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x108);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ed3294; end: 104ed329f; -[SCMapVisualPlacesTrayController setDelegate:] */

void FUN_104ed3294(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x108,param_3);
  return;
}



/* Entry: 104ed32a0; end: 104ed32a7; -[SCMapVisualPlacesTrayController networkSessionId] */

undefined8 FUN_104ed32a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 104ed32a8; end: 104ed32af; -[SCMapVisualPlacesTrayController rankingDebugHtml] */

undefined8 FUN_104ed32a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 104ed32b0; end: 104ed32c7; -[SCMapVisualPlacesTrayController sessionIdsProvider] */

void FUN_104ed32b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ed32c8; end: 104ed32d3; -[SCMapVisualPlacesTrayController setSessionIdsProvider:] */

void FUN_104ed32c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x120,param_3);
  return;
}



/* Entry: 104ed32d4; end: 104ed33eb; -[SCMapVisualPlacesTrayController .cxx_destruct] */

void FUN_104ed32d4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x120);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_destroyWeak(param_1 + 0x108);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 104ed33ec; end: 104ed34d3; -[SCMapVisualPlacesTrayViewController initWithValdiRootView:trayFeatureName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104ed33ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e4db8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1931e0(puVar1);
    puVar2 = PTR_PTR_1126b1e38;
    _objc_alloc();
    func_0x00010c05fb60();
    lVar4 = (long)_DAT_11271629c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar4));
    lVar4 = (long)_DAT_1127162a0;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ed34d4; end: 104ed34e3; -[SCMapVisualPlacesTrayViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ed34d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_11271629c));
  return;
}



/* Entry: 104ed34e4; end: 104ed352f; -[SCMapVisualPlacesTrayViewController viewDidLoad] */

void FUN_104ed34e4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4db8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c189400(param_1);
  return;
}



/* Entry: 104ed3530; end: 104ed353f; -[SCMapVisualPlacesTrayViewController scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ed3530(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c065590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271629c),PTR_s_innerScrollView_1125f6f70);
  return;
}



/* Entry: 104ed3540; end: 104ed358b; -[SCMapVisualPlacesTrayViewController handleGripperAreaTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ed3540(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271629c);
  func_0x00010c065580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182300(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ed358c; end: 104ed3593; -[SCMapVisualPlacesTrayViewController autoSizingEnabled] */

undefined8 FUN_104ed358c(void)

{
  return 0;
}



/* Entry: 104ed3594; end: 104ed359b; -[SCMapVisualPlacesTrayViewController autoSizingFullishEnabled] */

undefined8 FUN_104ed3594(void)

{
  return 0;
}



/* Entry: 104ed359c; end: 104ed35cb; -[SCMapVisualPlacesTrayViewController trayFeatureName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ed359c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127162a0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ed35cc; end: 104ed360b; -[SCMapVisualPlacesTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ed35cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127162a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271629c,0);
  return;
}



/* Entry: 104ed360c; end: 104ed391f; -[SCMapPlaceDiscoveryTrayRouter initWithMultiTrayServices:composerServices:placeDiscoveryScope:mapPlacesContentServices:placeDiscoveryController:placeDiscoveryContextCreator:storyPlaybackScopeExposer:storyPlaybackScopeServices:operaPresenterViewController:circumstanceEngine:placeSharingScopeExposer:mapPlaceProfileFactoryServices:mapVisitedBySharingFactoryServices:] */

undefined8 *
FUN_104ed360c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
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
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126e4dc0;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[2];
    puVar2[2] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[3];
    puVar2[3] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[4];
    puVar2[4] = param_6;
    _objc_release(uVar3);
    _objc_storeWeak(puVar2 + 7,param_7);
    _objc_retain();
    func_0x00010c18b5e0(param_7);
    _objc_release(param_7);
    _objc_retain(param_8);
    uVar3 = puVar2[8];
    puVar2[8] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar2[6];
    puVar2[6] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[0xc];
    puVar2[0xc] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[0xd];
    puVar2[0xd] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar2[0xe];
    puVar2[0xe] = param_12;
    _objc_release(uVar3);
    func_0x00010bdf2ee0(puVar2);
    uVar1 = (undefined1)puVar2[0xe];
    func_0x000109021f58();
    *(undefined1 *)(puVar2 + 0x10) = uVar1;
    _objc_retain(param_14);
    uVar3 = puVar2[0x11];
    puVar2[0x11] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar2[0x13];
    puVar2[0x13] = param_15;
    _objc_release(uVar3);
  }
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
  return puVar2;
}



/* Entry: 104ed3920; end: 104ed39a3; -[SCMapPlaceDiscoveryTrayRouter updateWithTrayDetails:] */

void FUN_104ed3920(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0fd300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0fcf80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fcfe0();
    _objc_release(uVar2);
  }
  else {
    func_0x00010c10d8a0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ed39a4; end: 104ed3b0f; -[SCMapPlaceDiscoveryTrayRouter presentPlaceDiscoveryResultsTrayWithTrayDetails:] */

void FUN_104ed39a4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar5 = param_1;
  func_0x00010be434c0();
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      uVar7 = 0x3fd851eb851eb852;
      if (*(char *)(param_1 + 0x80) == '\0') {
        uVar7 = 0;
      }
      puVar3 = PTR_PTR_1126b1e40;
      _objc_alloc();
      uVar4 = 0;
      func_0x000104edb834(0);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = (ulong)*(byte *)(param_1 + 0x80);
      FUN_104edb8d4(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 8);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      lVar6 = param_1 + 0x38;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c055580(uVar7,puVar3,param_2,uVar4,uVar5,uVar1,uVar2,lVar6,param_1,
                          *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      *(undefined **)(param_1 + 0x28) = puVar3;
      _objc_release(uVar7);
      _objc_release(lVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    func_0x00010be02fc0(param_1);
    func_0x00010c10eb00(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
    lVar6 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c1600e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fdaa0(lVar6,param_2,uVar7);
    _objc_release(uVar7);
    _objc_release(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ed3b10; end: 104ed3bc3; -[SCMapPlaceDiscoveryTrayRouter closeAllTrays:] */

void FUN_104ed3b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104ed3bc4;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104ed3bc4; end: 104ed3cf7;  */

void FUN_104ed3bc4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010bfaf680(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010be8d2c0(lVar1);
    func_0x00010be02fc0(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c27b460(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa140(puVar2,param_2,uVar3);
    _objc_release(uVar3);
    puVar4 = puVar2;
    func_0x00010bf529e0();
    if (puVar4 != (undefined *)0x0) {
      lVar5 = lVar1;
      func_0x00010be1e5e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b33e0();
      uVar6 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c0d26a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12ed60();
      _objc_release(uVar3);
      _objc_release(uVar6);
      _objc_release(lVar5);
    }
    lVar5 = lVar1 + 0x38;
    _objc_loadWeakRetained(lVar5);
    func_0x00010bf3a200();
    _objc_release(lVar5);
    func_0x00010bfaf680(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ed3cf8; end: 104ed3dcf; -[SCMapPlaceDiscoveryTrayRouter didRemoveTray:] */

void FUN_104ed3cf8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be1e5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x00010c0b33e0();
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  else {
    func_0x00010c0b33e0();
  }
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c27b460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  if (param_3 == lVar2) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar3);
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    func_0x00010be8d2c0(param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0fcf80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fcfe0();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ed3dd0; end: 104ed3f3b; -[SCMapPlaceDiscoveryTrayRouter updateTrayPositionToPosition:] */

void FUN_104ed3dd0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c27b460();
  _objc_retainAutoreleasedReturnValue();
  if (((lVar1 != 0) && (lVar2 = lVar1, func_0x00010bf5fb20(), lVar2 != 2)) &&
     (lVar2 = lVar1, func_0x00010bf5fb20(), lVar2 != param_3)) {
    _objc_initWeak(auStack_38,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x104ed3ec0;
    puStack_58 = &UNK_110842a68;
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(lVar1);
    lStack_50 = lVar1;
    lStack_40 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_70);
    _objc_release(lStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104ed3f3c; end: 104ed3fe3; -[SCMapPlaceDiscoveryTrayRouter handleDismissKeyboard] */

void FUN_104ed3f3c(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104ed3fe4;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104ed3fe4; end: 104ed401b;  */

void FUN_104ed3fe4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    func_0x00010bf83c40();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ed401c; end: 104ed418f; -[SCMapPlaceDiscoveryTrayRouter launchPlaceProfileWithPlace:coordinate:bounds:sourceType:] */

void FUN_104ed401c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  double dVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  double dStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  dVar2 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_5;
  func_0x00010c259320(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df1e0();
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_3);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104ed4190;
  puStack_98 = &UNK_110859190;
  _objc_copyWeak(auStack_78,auStack_58);
  uStack_60 = 2.0 <= dVar2;
  _objc_retain(param_7);
  uStack_90 = param_7;
  _objc_retain(param_5);
  uStack_88 = param_5;
  dStack_70 = param_1;
  uStack_68 = param_2;
  _objc_retain(param_6);
  uStack_80 = param_6;
  func_0x0001000d76cc("APPSTORE",&puStack_b0);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 104ed4190; end: 104ed42f3;  */

void FUN_104ed4190(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010be1e5e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined1 *)(param_1 + 0x50);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001068771cc(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010ba1c784();
    lVar5 = lVar3;
    func_0x00010c29f680(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010be60460(lVar2,param_2,0x65,uVar1,uVar7,0,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(uVar4);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0fd0e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010be18520(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),lVar2,
                        param_2,uVar7,lVar6,*(undefined8 *)(param_1 + 0x30),0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    lVar8 = lVar2;
    func_0x00010c0b9800(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10d8c0();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar5);
    _objc_release(lVar6);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104ed42f4; end: 104ed4363; -[SCMapPlaceDiscoveryTrayRouter handleEditSearchWithSearchQuery:] */

void FUN_104ed42f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c0fcf80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fcfa0();
  _objc_release(param_3);
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x50) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bfd0850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_handleCloseButtonTapped_1125d1bb8);
  return;
}



/* Entry: 104ed4364; end: 104ed443b; -[SCMapPlaceDiscoveryTrayRouter handleCloseButtonTapped] */

void FUN_104ed4364(long param_1)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = param_1;
  func_0x00010bef07e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_28,param_1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104ed443c;
    puStack_40 = &UNK_110841fb0;
    _objc_copyWeak(auStack_30,auStack_28);
    _objc_retain(lVar1);
    lStack_38 = lVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
    _objc_release(lStack_38);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104ed443c; end: 104ed44b3;  */

void FUN_104ed443c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0d26a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12ed20();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ed44b4; end: 104ed44ef; -[SCMapPlaceDiscoveryTrayRouter activeDiscoveryTray] */

void FUN_104ed44b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be434c0();
  if ((int)lVar1 != 0) {
    func_0x00010c27b460(*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ed44f0; end: 104ed4517; -[SCMapPlaceDiscoveryTrayRouter searchStatusButton] */

void FUN_104ed44f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ed4518; end: 104ed460f; -[SCMapPlaceDiscoveryTrayRouter placesBasemapLayer:placeWasTapped:screenPoint:touchWorldLocation:shouldPlayStory:] */

void FUN_104ed4518(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_3 + 0x78);
  *(undefined8 *)(param_3 + 0x78) = 0;
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010be1e5e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_6;
  func_0x00010bfe5ec0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1840(lVar2,param_4,uVar1);
  _objc_release(uVar1);
  if (param_7 == 0) {
    func_0x00010beaedc0(param_3,param_4,param_6);
  }
  else {
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_3 + 0x78);
    *(undefined8 *)(param_3 + 0x78) = param_6;
    _objc_release(uVar1);
    uVar1 = param_6;
    func_0x00010bfe5ec0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be47c20(param_1,param_2,param_3,param_4,uVar1);
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 104ed4610; end: 104ed46a3; -[SCMapPlaceDiscoveryTrayRouter handleOpenPlaceForBasemapPlace:] */

void FUN_104ed4610(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010be1e5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1840(lVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010beaedc0(param_1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ed46a4; end: 104ed46a7; -[SCMapPlaceDiscoveryTrayRouter handlePlayPlaceStoryForPlaceID:touchPoint:] */

void FUN_104ed46a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be47c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__launchMediaPinStoryForPlaceId_t_11256f8a8);
  return;
}



/* Entry: 104ed46a8; end: 104ed46ab; -[SCMapPlaceDiscoveryTrayRouter handlePlayFriendStoryForPlaceID:friendID:touchPoint:] */

void FUN_104ed46a8(void)

{
  return;
}



/* Entry: 104ed46ac; end: 104ed46af; -[SCMapPlaceDiscoveryTrayRouter handleOpenPlaceCalloutWithPlaceID:userID:location:] */

void FUN_104ed46ac(void)

{
  return;
}



/* Entry: 104ed46b0; end: 104ed46e3; -[SCMapPlaceDiscoveryTrayRouter mapStoryDidFinishPresentingWithTransitionAnimator:] */

void FUN_104ed46b0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    func_0x00010beaedc0();
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104ed46e4; end: 104ed472b; -[SCMapPlaceDiscoveryTrayRouter mapStoryDidDismiss] */

void FUN_104ed46e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x60));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104ed472c; end: 104ed4773; -[SCMapPlaceDiscoveryTrayRouter mapStoryManifestRequestDidFailWithResult:] */

void FUN_104ed472c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x60));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104ed4774; end: 104ed49d7; -[SCMapPlaceDiscoveryTrayRouter _launchMediaPinStoryForPlaceId:touchPoint:] */

void FUN_104ed4774(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_5);
  lVar1 = *(long *)(param_3 + 0x60);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,0x3ff0000000000000,0x3ff0000000000000);
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    lVar1 = param_3;
    func_0x00010be1e5e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010c1600e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar9;
    func_0x00010c1600a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c29f6a0(lVar4);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c067fc0();
    uVar8 = param_5;
    func_0x00010c14de00(puVar7,param_4,&PTR____CFConstantStringClassReference_110db9eb8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b1e48;
    func_0x00010c0fd380(PTR_PTR_1126b1e48,param_4,param_5,0,0,1,puVar7,3,puVar6,uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b1e50;
    _objc_alloc(PTR_PTR_1126b1e50);
    func_0x00010c0b9ce0(lVar4);
    lVar10 = (long)param_1;
    func_0x00010c29f6a0(lVar4);
    lVar9 = (long)param_1;
    func_0x00010c2a0680(lVar4);
    func_0x00010c028600(puVar6,param_4,lVar10,lVar9,(long)param_1,0x65,0x22,9,0xe,0);
    uVar8 = *(undefined8 *)(param_3 + 0x68);
    func_0x00010bf235c0(uVar8,param_4,puVar3,puVar2,0,param_5,puVar6,0,param_3,0,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_3 + 0x60),param_4,uVar8);
    _objc_release(uVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104ed49d8; end: 104ed4b3f; -[SCMapPlaceDiscoveryTrayRouter _setupPlaceProfileTrayForPlace:] */

void FUN_104ed49d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be1e5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c26d760(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  uVar4 = 0;
  func_0x00010ba1c784(0);
  uVar5 = uVar1;
  func_0x00010c29f680(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010be60460(param_1,param_2,0x22,lVar3 != 0,uVar4,0,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  lVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80(param_3);
  uVar5 = param_1;
  func_0x00010be18520(param_1,param_2,lVar2,uVar6,0,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  func_0x00010c0b9800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d8c0();
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ed4b40; end: 104ed4b7b; -[SCMapPlaceDiscoveryTrayRouter _dismissOpenPlaceProfile] */

void FUN_104ed4b40(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x90);
  if (lVar1 != 0) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3dca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104ed4b7c; end: 104ed4bcb; -[SCMapPlaceDiscoveryTrayRouter _isResultsTrayActive] */

bool FUN_104ed4b7c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c27b460();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf5fb20();
    bVar1 = lVar3 != 2;
    _objc_release(lVar2);
  }
  return bVar1;
}



/* Entry: 104ed4bcc; end: 104ed4bf3; -[SCMapPlaceDiscoveryTrayRouter _getCurrentTrayForLogging] */

void FUN_104ed4bcc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ed4bf4; end: 104ed4bf7; -[SCMapPlaceDiscoveryTrayRouter _createSearchStatusButton] */

void FUN_104ed4bf4(void)

{
  return;
}



/* Entry: 104ed4bf8; end: 104ed4c23; -[SCMapPlaceDiscoveryTrayRouter _removeSearchStatusButton] */

void FUN_104ed4bf8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf65d60(*(undefined8 *)(param_1 + 0x48));
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ed4c24; end: 104ed4f4b; -[SCMapPlaceDiscoveryTrayRouter launchVisitationLongPressMenu:] */

void FUN_104ed4c24(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = auStack_90;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x0001068752ec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_104ed4f4c;
  puStack_a8 = &UNK_110852d00;
  _objc_copyWeak(auStack_98,auStack_90);
  _objc_retain(param_3);
  puVar3 = puVar2;
  lStack_a0 = param_3;
  func_0x00010bf1d200(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b10a0;
  func_0x000106875304();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar1 = auStack_90;
  _objc_copyWeak(auStack_c8,puVar1);
  _objc_retain(param_3);
  puVar5 = puVar4;
  func_0x00010bf1d200(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b10a0;
  func_0x000106874f8c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010bf1d200(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar2;
  puStack_80 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f40(puVar5);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  func_0x00010c10c360(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puVar4);
  _objc_release(lStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_90);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  _objc_retain(puVar1);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010bde1300();
  _objc_release(param_3);
  func_0x00010bf82fe0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ed4f4c; end: 104ed4ffb;  */

void FUN_104ed4f4c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde1300();
  _objc_release(param_1);
  func_0x00010bf82fe0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ed4ffc; end: 104ed5003;  */

void FUN_104ed4ffc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dismissActionSheet_1125be5a0);
  return;
}



/* Entry: 104ed5004; end: 104ed5287; -[SCMapPlaceDiscoveryTrayRouter _launchPlaceSharingScope:] */

void FUN_104ed5004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf20ae0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c264480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  uVar8 = param_1;
  func_0x00010c09abe0(uVar2);
  _CLLocationCoordinate2DMake(param_1,uVar8);
  uVar3 = uVar1;
  uVar9 = param_1;
  func_0x00010c0d6e60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  uVar10 = uVar9;
  func_0x00010c09abe0(uVar3);
  _CLLocationCoordinate2DMake(uVar9,uVar10);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b1e58;
  uVar1 = param_4;
  func_0x00010c0fd0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ba3a0(uVar9,uVar10,param_1,uVar8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126b1e58;
  uVar1 = param_4;
  func_0x00010c0fd0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c09e640(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0baca0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar6 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar7 = PTR_PTR_1126b1e60;
  _objc_alloc();
  uVar1 = param_4;
  func_0x00010c0fd0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c057500();
  _objc_release(uVar1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104ed5288;
  puStack_88 = &UNK_110841f80;
  uStack_80 = param_2;
  puStack_78 = puVar7;
  _objc_retain(puVar7);
  func_0x000100162d98("APPSTORE",&puStack_a0);
  _objc_release(puStack_78);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  return;
}



/* Entry: 104ed5288; end: 104ed5293;  */

void FUN_104ed5288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),PTR_s_exposeScope__1125c4f30,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104ed5294; end: 104ed530b; -[SCMapPlaceDiscoveryTrayRouter _clearVisitationForPlace:] */

void FUN_104ed5294(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_3;
    func_0x00010c0fd0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c12f220(param_1,param_2,lVar1);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104ed530c; end: 104ed54a3; -[SCMapPlaceDiscoveryTrayRouter launchVisitedBySharingFlow:numPlaces:] */

void FUN_104ed530c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xa0) == 0) {
    lVar1 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar4 = PTR_PTR_1126b1e68;
      _objc_alloc(PTR_PTR_1126b1e68);
      lVar1 = param_3;
      func_0x00010c0fc8e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c058660(puVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      uVar5 = *(undefined8 *)(param_1 + 0x98);
      func_0x00010bf24820();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf21f80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0xa0);
      *(undefined8 *)(param_1 + 0xa0) = uVar6;
      _objc_release(uVar7);
      _objc_release(uVar5);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_104ed54a4;
      puStack_60 = &UNK_110842e18;
      lStack_58 = param_1;
      func_0x000100162d98("APPSTORE",&puStack_78);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104ed54a4; end: 104ed54af;  */

void FUN_104ed54a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15cff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0),PTR_s_sendToChat_112634e18);
  return;
}



/* Entry: 104ed54b0; end: 104ed54f7; -[SCMapPlaceDiscoveryTrayRouter mapPlaceShareEnded] */

void FUN_104ed54b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104ed54f8; end: 104ed55bb; -[SCMapPlaceDiscoveryTrayRouter mapPlaceProfilePresenter] */

void FUN_104ed54f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x90);
  if (lVar6 == 0) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar2 = PTR_PTR_1126b1e70;
    _objc_alloc(PTR_PTR_1126b1e70);
    func_0x00010c00ae60();
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar6 = *(long *)(param_1 + 0x90);
  }
  _objc_retain(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 104ed55bc; end: 104ed56a7; -[SCMapPlaceDiscoveryTrayRouter _metricsDataWithOpenSource:hasMediaPin:placesSourceType:sourceSessionId:viewportSessionData:] */

void FUN_104ed55bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1e78;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_alloc(puVar1);
  func_0x00010c031b60();
  func_0x00010c1a6440();
  func_0x00010c1dce20(puVar1,param_2,param_5);
  func_0x00010c207140(puVar1,param_2,param_6);
  _objc_release(param_6);
  uVar2 = param_7;
  func_0x00010c29f6a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a080(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_7;
  func_0x00010c0d8020(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c1cc8a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ed56a8; end: 104ed5833; -[SCMapPlaceDiscoveryTrayRouter _focusedPlaceWithPlaceId:metricsData:coordinate:bounds:basemapPlace:isPromoted:] */

void FUN_104ed56a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b1e80;
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c0364a0();
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010c1dc320(param_1,param_2,puVar1);
  _objc_retain(param_7);
  uVar2 = param_7;
  func_0x00010c264480(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  uVar4 = param_1;
  func_0x00010c09abe0(uVar2);
  _CLLocationCoordinate2DMake(param_1,uVar4);
  uVar3 = param_7;
  uVar5 = param_1;
  func_0x00010c0d6e60(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c08aca0(uVar3);
  uVar6 = uVar5;
  func_0x00010c09abe0(uVar3);
  _CLLocationCoordinate2DMake(uVar5,uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1dc220(param_1,uVar4,uVar5,uVar6,puVar1);
  func_0x00010c16f5e0(puVar1,param_4,param_8);
  _objc_release(param_8);
  func_0x00010c1b39c0(puVar1,param_4,param_9);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ed5834; end: 104ed5867; -[SCMapPlaceDiscoveryTrayRouter onPlaceProfileHidden] */

void FUN_104ed5834(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3dca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ed5868; end: 104ed5877; -[SCMapPlaceDiscoveryTrayRouter onPlaceProfileRemoved] */

void FUN_104ed5868(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ed5878; end: 104ed594b; -[SCMapPlaceDiscoveryTrayRouter onPlaceVisitRemovedForPlaceId:] */

void FUN_104ed5878(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c27b240();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0fd300();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0fc8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0720c0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar5 != 0) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12daa0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


