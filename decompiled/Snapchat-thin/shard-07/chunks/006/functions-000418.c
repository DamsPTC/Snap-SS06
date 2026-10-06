/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057a91d0; end: 1057a9493; -[SCScreenshopDataModelsDocStore assetMetadataForId:] */

void FUN_1057a91d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_1b4;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined4 uStack_190;
  undefined4 uStack_180;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined1 uStack_121;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  undefined2 uStack_106;
  undefined1 *puStack_e8;
  undefined ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126be380);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar2 = &uStack_121;
  FUN_1057a96ac();
  uStack_190 = 0xf;
  uStack_180 = 0x100;
  _objc_retain(param_3);
  ppuStack_198 = &PTR_SUB_110862760;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  plStack_138 = (long *)0x0;
  uStack_140 = 0;
  plStack_130 = (long *)0x0;
  uStack_106 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_118 = 10;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_FUN_110862700;
  uStack_d0 = 0;
  uStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  puStack_1b0 = (undefined8 *)0x0;
  puStack_1a8 = (undefined8 *)0x0;
  uStack_1a0 = 0;
  uStack_1b4 = 0;
  puVar3 = &uStack_b0;
  uStack_168 = param_3;
  puStack_e8 = puVar2;
  pppuStack_e0 = &ppuStack_198;
  func_0x0001000e77a0(puVar3,&ppuStack_120,&puStack_1b0,&uStack_1b4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (puStack_1b0 != (undefined8 *)0x0) {
    puStack_1a8 = puStack_1b0;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_FUN_110862700;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1b0 = &uStack_d8;
  func_0x000100105004(&puStack_1b0);
  plVar1 = plStack_130;
  ppuStack_198 = &PTR_SUB_110862760;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_138;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1b0 = &uStack_150;
  func_0x000100105004(&puStack_1b0);
  _objc_release(uStack_168);
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1057a9494; end: 1057a95cf; -[SCScreenshopDataModelsDocStore storeAssetMetadata:completion:] */

void FUN_1057a9494(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    func_0x00010bf87660(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1057a95d0;
    puStack_50 = &UNK_11084f688;
    _objc_retain(param_3);
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1057a965c;
    puStack_78 = &UNK_11084f6b8;
    uStack_48 = param_3;
    _objc_retain(param_4);
    lStack_70 = param_4;
    func_0x00010c0f8500(param_1,param_2,&puStack_68,0,&puStack_90);
    _objc_release(param_1);
    _objc_release(lStack_70);
    _objc_release(uStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057a95d0; end: 1057a965b;  */

void FUN_1057a95d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1057aa0c0(uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057a965c; end: 1057a9667;  */

void FUN_1057a965c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057a9664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1057a9668; end: 1057a966f; -[SCScreenshopDataModelsDocStore docObjectContext] */

undefined8 FUN_1057a9668(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057a9670; end: 1057a969f; -[SCScreenshopDataModelsDocStore setDocObjectContext:] */

void FUN_1057a9670(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1057a96a0; end: 1057a96ab; -[SCScreenshopDataModelsDocStore .cxx_destruct] */

void FUN_1057a96a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057a96ac; end: 1057a970f;  */

undefined ** FUN_1057a96ac(void)

{
  int iVar1;
  
  if ((bRam000000011381a040 & 1) == 0) {
    iVar1 = 0x1381a040;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130ff718,0x100000000);
      ___cxa_guard_release(0x11381a040);
    }
  }
  return &PTR_PTR_1130ff718;
}



/* Entry: 1057a9710; end: 1057a9797;  */

void FUN_1057a9710(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057a9798; end: 1057a9823;  */

void FUN_1057a9798(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c09da80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c09da80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057a9824; end: 1057a98df;  */

undefined8 FUN_1057a9824(void)

{
  int iVar1;
  
  if ((bRam000000011381a0b8 & 1) == 0) {
    iVar1 = 0x1381a0b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381a050 = 0xe;
      puRam000000011381a058 = &UNK_10f2f90e0;
      uRam000000011381a060 = 0x1010000;
      pcRam000000011381a068 = FUN_1057a98e0;
      pcRam000000011381a070 = FUN_1057a9914;
      ppuRam000000011381a048 = &PTR_FUN_11086d7d0;
      uRam000000011381a088 = 0;
      uRam000000011381a080 = 0;
      uRam000000011381a098 = 0;
      uRam000000011381a090 = 0;
      uRam000000011381a0a8 = 0;
      uRam000000011381a0a0 = 0;
      uRam000000011381a0b0 = 0;
      ___cxa_atexit(FUN_105187b98,0x11381a048,0x100000000);
      ___cxa_guard_release(0x11381a0b8);
    }
  }
  return 0x11381a048;
}



/* Entry: 1057a98e0; end: 1057a9913;  */

undefined8 FUN_1057a98e0(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  uVar3 = 0xbff0000000000000;
  if ((0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar2 != 0)) {
    uVar3 = *(undefined8 *)((long)piVar1 + uVar2);
  }
  return uVar3;
}



/* Entry: 1057a9914; end: 1057a996f;  */

undefined8 FUN_1057a9914(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  _objc_retain();
  _objc_retain(param_2);
  *param_3 = 0;
  func_0x00010c09dee0(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1057a9970; end: 1057a9a2b;  */

undefined8 FUN_1057a9970(void)

{
  int iVar1;
  
  if ((bRam000000011381a130 & 1) == 0) {
    iVar1 = 0x1381a130;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381a0c8 = 0xe;
      puRam000000011381a0d0 = &UNK_10f2f90f5;
      uRam000000011381a0d8 = 0x1010000;
      pcRam000000011381a0e0 = FUN_1057a9a2c;
      pcRam000000011381a0e8 = FUN_1057a9a6c;
      ppuRam000000011381a0c0 = &PTR_SUB_1108629c8;
      uRam000000011381a100 = 0;
      uRam000000011381a0f8 = 0;
      uRam000000011381a110 = 0;
      uRam000000011381a108 = 0;
      uRam000000011381a120 = 0;
      uRam000000011381a118 = 0;
      uRam000000011381a128 = 0;
      ___cxa_atexit(0x105007830,0x11381a0c0,0x100000000);
      ___cxa_guard_release(0x11381a130);
    }
  }
  return 0x11381a0c0;
}



/* Entry: 1057a9a2c; end: 1057a9a6b;  */

bool FUN_1057a9a2c(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((0x14 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[10], uVar2 != 0)) {
    return *(char *)((long)piVar1 + uVar2) != '\0';
  }
  return false;
}



/* Entry: 1057a9a6c; end: 1057a9abf;  */

undefined8 FUN_1057a9a6c(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf33220(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1057a9ac0; end: 1057a9b7b;  */

undefined8 FUN_1057a9ac0(void)

{
  int iVar1;
  
  if ((bRam000000011381a1a8 & 1) == 0) {
    iVar1 = 0x1381a1a8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381a140 = 0xe;
      puRam000000011381a148 = &UNK_10f2f9101;
      uRam000000011381a150 = 0x1010000;
      pcRam000000011381a158 = FUN_1057a9b7c;
      pcRam000000011381a160 = FUN_1057a9bbc;
      ppuRam000000011381a138 = &PTR_SUB_1108629c8;
      uRam000000011381a178 = 0;
      uRam000000011381a170 = 0;
      uRam000000011381a188 = 0;
      uRam000000011381a180 = 0;
      uRam000000011381a198 = 0;
      uRam000000011381a190 = 0;
      uRam000000011381a1a0 = 0;
      ___cxa_atexit(0x105007830,0x11381a138,0x100000000);
      ___cxa_guard_release(0x11381a1a8);
    }
  }
  return 0x11381a138;
}



/* Entry: 1057a9b7c; end: 1057a9bbb;  */

bool FUN_1057a9b7c(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((0x18 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xc], uVar2 != 0)) {
    return *(char *)((long)piVar1 + uVar2) != '\0';
  }
  return false;
}



/* Entry: 1057a9bbc; end: 1057a9c0f;  */

undefined8 FUN_1057a9bbc(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c07de00(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1057a9c10; end: 1057a9c1b; +[SCScreenshopAssetMetadata table] */

undefined * FUN_1057a9c10(void)

{
  return &UNK_10f2f910d;
}



/* Entry: 1057a9c1c; end: 1057a9f23; +[SCScreenshopAssetMetadata immutableObjectParse:bufferSize:] */

void FUN_1057a9c1c(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  long lVar11;
  ushort *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar7 = PTR_PTR_1126be380;
  _objc_alloc(PTR_PTR_1126be380);
  lVar11 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar11);
  if (uVar3 < 5) {
    puVar14 = (undefined *)0x0;
    bVar4 = false;
    lVar11 = 0;
    uVar16 = 0;
    uVar15 = 0xbff0000000000000;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)piVar1 - lVar11))[2];
    if (uVar13 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar13);
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar11);
    }
    uVar15 = 0xbff0000000000000;
    if (uVar3 < 9) {
      bVar4 = false;
      lVar11 = 0;
      uVar16 = 0;
    }
    else {
      uVar13 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar11));
      if (uVar13 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined8 *)((long)piVar1 + uVar13);
      }
      if (uVar3 < 0xb) {
        bVar4 = false;
      }
      else {
        uVar13 = (ulong)*(ushort *)((long)piVar1 + (10 - lVar11));
        if (uVar13 == 0) {
          bVar4 = false;
        }
        else {
          bVar4 = *(char *)((long)piVar1 + uVar13) != '\0';
        }
        if (0xc < uVar3) {
          uVar13 = (ulong)*(ushort *)((long)piVar1 + (0xc - lVar11));
          if (uVar13 != 0) {
            uVar15 = *(undefined8 *)((long)piVar1 + uVar13);
          }
          if ((0xe < uVar3) &&
             (uVar13 = (ulong)*(ushort *)((long)piVar1 + (0xe - lVar11)), uVar13 != 0)) {
            puVar2 = (uint *)((long)piVar1 + uVar13);
            lVar11 = (long)puVar2 + (ulong)*puVar2;
            goto LAB_1057a9d64;
          }
        }
      }
      lVar11 = 0;
    }
  }
LAB_1057a9d64:
  FUN_1057ab0e4(lVar11);
  _objc_retainAutoreleasedReturnValue();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x11) ||
     (uVar13 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8], uVar13 == 0)) {
    lVar8 = 0;
  }
  else {
    puVar2 = (uint *)((long)piVar1 + uVar13);
    lVar8 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_1057ab0e4(lVar8);
  _objc_retainAutoreleasedReturnValue();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) ||
     (uVar13 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar13 == 0)) {
    lVar9 = 0;
  }
  else {
    puVar2 = (uint *)((long)piVar1 + uVar13);
    lVar9 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_1057ab0e4(lVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar3 = *puVar12;
  if (uVar3 < 0x15) {
    uVar10 = 0;
    bVar5 = false;
  }
  else {
    if ((ulong)puVar12[10] == 0) {
      bVar5 = false;
    }
    else {
      bVar5 = *(char *)((long)piVar1 + (ulong)puVar12[10]) != '\0';
    }
    if (uVar3 < 0x17) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      if ((ulong)puVar12[0xb] != 0) {
        uVar10 = *(undefined4 *)((long)piVar1 + (ulong)puVar12[0xb]);
      }
      if (0x18 < uVar3) {
        bVar6 = false;
        if ((ulong)puVar12[0xc] != 0) {
          bVar6 = *(char *)((long)piVar1 + (ulong)puVar12[0xc]) != '\0';
        }
        goto LAB_1057a9e6c;
      }
    }
  }
  bVar6 = false;
LAB_1057a9e6c:
  func_0x00010c0268a0(uVar16,uVar15,puVar7,param_2,puVar14,bVar4,lVar11,lVar8,lVar9,bVar5,uVar10,
                      bVar6);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar11);
  _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1057a9f24; end: 1057a9f47; +[SCScreenshopAssetMetadata objectClassFunctionPointer] */

undefined1  [16] FUN_1057a9f24(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1057a9f40;
  auVar1._0_8_ = 0x1057a9f38;
  return auVar1;
}



/* Entry: 1057a9f48; end: 1057aa0bf;  */

undefined1 *
FUN_1057a9f48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined1 param_12)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_80;
  undefined *puStack_78;
  
  plVar1 = &lStack_80;
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar3 = (undefined1 *)0x0;
  if (param_3 != 0) {
    puStack_78 = PTR_PTR_1126ea3a8;
    lStack_80 = param_3;
    _objc_msgSendSuper2(&lStack_80,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_4;
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      _objc_release(uVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_6;
      *(undefined8 *)((long)plVar1 + 0x28) = param_1;
      *(undefined8 *)((long)plVar1 + 0x30) = param_2;
      _objc_retain(param_7);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x38);
      *(undefined8 *)((long)plVar1 + 0x38) = param_7;
      _objc_release(uVar2);
      _objc_retain(param_8);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x40);
      *(undefined8 *)((long)plVar1 + 0x40) = param_8;
      _objc_release(uVar2);
      _objc_retain(param_9);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x48);
      *(undefined8 *)((long)plVar1 + 0x48) = param_9;
      _objc_release(uVar2);
      *(undefined1 *)((long)plVar1 + 0x15) = param_10;
      *(undefined4 *)((long)plVar1 + 0x18) = param_11;
      *(undefined1 *)((long)plVar1 + 0x16) = param_12;
    }
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  return puVar3;
}



/* Entry: 1057aa0c0; end: 1057aa8c7;  */

void FUN_1057aa0c0(undefined8 param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain();
  puVar17 = PTR_PTR_1126be388;
  _objc_retain(param_2);
  _objc_opt_self(puVar17);
  _objc_retain(param_2);
  if (param_2 == 0) {
LAB_1057aa5ec:
    lVar11 = 0;
LAB_1057aa5f0:
    _objc_release(lVar11);
  }
  else {
    lVar1 = param_2;
    func_0x00010c1422e0();
    if (lVar1 < 0) {
      lVar1 = param_2;
      func_0x00010c09da80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar11 = param_2;
      if (lVar1 != 0) {
        puVar17 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar17;
        func_0x00010bf636c0();
        _objc_release(puVar17);
        func_0x0001001b9e08(puVar2,&UNK_10f2f9129);
        if (puVar2 != (undefined *)0x0) {
          lVar1 = param_2;
          func_0x00010c09da80(param_2);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          lVar3 = lVar1;
          _objc_retainAutorelease(lVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar2,1,lVar3,0xffffffff,0xffffffffffffffff);
          _objc_release(lVar1);
          _objc_release(lVar1);
          puVar17 = puVar2;
          _sqlite3_step();
          if ((int)puVar17 == 100) {
            puVar17 = puVar2;
            _sqlite3_column_int64(puVar2,0);
            puVar4 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126be380);
            _sqlite3_column_blob(puVar2,1);
            _sqlite3_column_bytes(puVar2,1);
            puVar5 = puVar4;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_2);
            _objc_release(puVar4);
            _sqlite3_reset(puVar2);
            if (puVar5 == (undefined *)0x0) goto LAB_1057aa5ec;
            puVar2 = PTR_PTR_1126be388;
            _objc_alloc();
            puStack_78 = puVar5;
            func_0x00010c09da80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c089b20(puVar5);
            puVar4 = puVar5;
            uVar18 = param_1;
            func_0x00010c269a80(puVar5);
            func_0x00010c09dee0(puVar5);
            puStack_80 = puVar5;
            func_0x00010bf33060();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010bf416c0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar5;
            func_0x00010c0f5ae0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar5;
            func_0x00010bf33220(puVar5);
            puVar9 = puVar5;
            func_0x00010c22cc00();
            puVar10 = puVar5;
            func_0x00010c07de00();
            FUN_1057a9f48(param_1,uVar18,puVar2,puVar17,puStack_78,puVar4,puStack_80,puVar6,puVar7,
                          puVar8,(int)puVar9,(char)puVar10);
            goto LAB_1057aa264;
          }
        }
      }
      goto LAB_1057aa5f0;
    }
    lVar1 = param_2;
    func_0x00010c1422e0(param_2);
    puVar17 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126be380);
    puVar5 = puVar17;
    func_0x00010c0dfea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(puVar17);
    if (puVar5 == (undefined *)0x0) goto LAB_1057aa5ec;
    puVar2 = PTR_PTR_1126be388;
    _objc_alloc();
    puStack_78 = puVar5;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c089b20(puVar5);
    puVar17 = puVar5;
    uVar18 = param_1;
    func_0x00010c269a80(puVar5);
    func_0x00010c09dee0(puVar5);
    puStack_80 = puVar5;
    func_0x00010bf33060();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf416c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c0f5ae0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bf33220(puVar5);
    puVar8 = puVar5;
    func_0x00010c22cc00();
    puVar9 = puVar5;
    func_0x00010c07de00();
    FUN_1057a9f48(param_1,uVar18,puVar2,lVar1,puStack_78,puVar17,puStack_80,puVar6,puVar7,puVar4,
                  (int)puVar8,(char)puVar9);
LAB_1057aa264:
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puStack_80);
    _objc_release(puStack_78);
    _objc_release(puVar5);
    if (puVar2 != (undefined *)0x0) {
      *(undefined4 *)(puVar2 + 0x10) = 2;
      _objc_release(param_2);
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 0;
      }
      lVar1 = param_2;
      func_0x00010c09da80(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      func_0x00010c089b20(param_2);
      *(undefined8 *)(puVar2 + 0x28) = param_1;
      lVar1 = param_2;
      func_0x00010c269a80();
      puVar2[0x14] = (char)lVar1;
      func_0x00010c09dee0(param_2);
      *(undefined8 *)(puVar2 + 0x30) = param_1;
      lVar1 = param_2;
      func_0x00010bf33060(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      lVar1 = param_2;
      func_0x00010bf416c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      lVar1 = param_2;
      func_0x00010c0f5ae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      lVar1 = param_2;
      func_0x00010bf33220();
      puVar2[0x15] = (char)lVar1;
      lVar1 = param_2;
      func_0x00010c22cc00();
      *(int *)(puVar2 + 0x18) = (int)lVar1;
      lVar1 = param_2;
      func_0x00010c07de00();
      puVar2[0x16] = (char)lVar1;
      _objc_retain(puVar2);
      puVar17 = puVar2;
      goto LAB_1057aa744;
    }
  }
  _objc_release(param_2);
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 1;
  }
  puVar17 = PTR_PTR_1126be388;
  _objc_retain(param_2);
  _objc_opt_self(puVar17);
  puVar2 = PTR_PTR_1126be388;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c09da80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c089b20(param_2);
    lVar11 = param_2;
    uVar18 = param_1;
    func_0x00010c269a80(param_2);
    func_0x00010c09dee0(param_2);
    lVar3 = param_2;
    func_0x00010bf33060(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_2;
    func_0x00010bf416c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_2;
    func_0x00010c0f5ae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_2;
    func_0x00010bf33220(param_2);
    lVar15 = param_2;
    func_0x00010c22cc00();
    lVar16 = param_2;
    func_0x00010c07de00();
    FUN_1057a9f48(param_1,uVar18,puVar2,0xffffffffffffffff,lVar1,lVar11,lVar3,lVar12,lVar13,lVar14,
                  (int)lVar15,(char)lVar16);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar2 + 0x10) = 1;
  _objc_release(param_2);
  puVar17 = (undefined *)0x0;
LAB_1057aa744:
  _objc_release(puVar17);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057aa8c8; end: 1057aa953;  */

void FUN_1057aa8c8(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126be380;
    _objc_alloc(PTR_PTR_1126be380);
    func_0x00010c0268a0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057aa954; end: 1057aa99b; -[SCScreenshopAssetMetadataChangeRequest .cxx_destruct] */

void FUN_1057aa954(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1057aa99c; end: 1057aa9a7; -[SCScreenshopAssetMetadataChangeRequest table] */

undefined * FUN_1057aa99c(void)

{
  return &UNK_10f2f910d;
}



/* Entry: 1057aa9a8; end: 1057aa9ef; -[SCScreenshopAssetMetadataChangeRequest createTableWithSQLite:] */

void FUN_1057aa9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddbdaa3,0x9b,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1057aa9f0; end: 1057aad77; -[SCScreenshopAssetMetadataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1057aa9f0(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_1057aa8c8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1057aad78(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2f91b2);
    if (lVar6 == 0) goto LAB_1057aad14;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_1057aad14;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126be380);
    func_0x00010c21c9a0(puVar7);
LAB_1057aacfc:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f2f917b);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126be380);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1057aad20;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_1057aad20;
    }
    FUN_1057aa8c8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1057aad78(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f2f91ff);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126be380);
        func_0x00010c21c9a0(puVar7);
        goto LAB_1057aacfc;
      }
    }
LAB_1057aad14:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_1057aad20:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1057aad78; end: 1057ab0e3;  */

ulong FUN_1057aad78(undefined8 param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lStack_b8;
  long lStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  uVar6 = param_3;
  func_0x00010bf33060(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057ab1d0(&lStack_88,param_2,uVar6);
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010bf416c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057ab1d0(&lStack_a0,param_2,uVar6);
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c0f5ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057ab1d0(&lStack_b8,param_2,uVar6);
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c09da80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  FUN_1057ab340(param_2,uVar6);
  func_0x00010c089b20(param_3);
  uVar8 = param_3;
  uVar15 = param_1;
  func_0x00010c269a80();
  func_0x00010c09dee0(param_3);
  lVar1 = 0x1130c2400;
  lVar2 = lVar1;
  if (lStack_80 - lStack_88 != 0) {
    lVar2 = lStack_88;
  }
  uVar9 = param_2;
  func_0x000100c47e34(param_2,lVar2,lStack_80 - lStack_88 >> 2);
  lVar2 = lVar1;
  if (lStack_98 - lStack_a0 != 0) {
    lVar2 = lStack_a0;
  }
  uVar10 = param_2;
  func_0x000100c47e34(param_2,lVar2,lStack_98 - lStack_a0 >> 2);
  if (lStack_b0 - lStack_b8 != 0) {
    lVar1 = lStack_b8;
  }
  uVar11 = param_2;
  func_0x000100c47e34(param_2,lVar1,lStack_b0 - lStack_b8 >> 2);
  uVar12 = param_3;
  func_0x00010bf33220();
  uVar13 = param_3;
  func_0x00010c22cc00(param_3);
  uVar14 = param_3;
  func_0x00010c07de00(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar4 = *(int *)(param_2 + 0x30);
  iVar5 = *(int *)(param_2 + 0x28);
  func_0x0001001ce11c(uVar15,0xbff0000000000000,param_2,0xc);
  func_0x0001001ce11c(param_1,0,param_2,8);
  func_0x0001001ce354(param_2,0x16,uVar13,0);
  func_0x000100c47f00(param_2,0x12,uVar11 & 0xffffffff);
  func_0x000100c47f00(param_2,0x10,uVar10 & 0xffffffff);
  func_0x000100c47f00(param_2,0xe,uVar9 & 0xffffffff);
  func_0x0001001ce2e4(param_2,4,uVar7 & 0xffffffff);
  func_0x000100ab13ac(param_2,0x18,uVar14,0);
  func_0x000100ab13ac(param_2,0x14,uVar12 & 0xffffffff,0);
  func_0x000100ab13ac(param_2,10,uVar8 & 0xffffffff,0);
  func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
  _objc_release(uVar6);
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    __ZdlPv();
  }
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  _objc_release(param_3);
  return param_2;
}



/* Entry: 1057ab0e4; end: 1057ab1cf;  */

void FUN_1057ab0e4(uint *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  
  puVar2 = (undefined *)0x0;
  if (param_1 != (uint *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1 + 1;
    if (*param_1 != 0) {
      do {
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar3 + (ulong)*puVar3 + 4);
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 != (undefined *)0x0) {
          func_0x00010befa120(puVar1,param_2,puVar2);
        }
        _objc_release(puVar2);
        puVar3 = puVar3 + 1;
      } while (puVar3 != param_1 + 1 + *param_1);
    }
    puVar2 = puVar1;
    func_0x00010bf51e00(puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057ab1d0; end: 1057ab33f;  */

long FUN_1057ab1d0(long *param_1,int *param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int aiStack_124 [3];
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar5 = param_2;
  _objc_retain(param_3);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lStack_118 = 0;
  aiStack_124[1] = 0;
  aiStack_124[2] = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        piVar5 = *(int **)(lStack_118 + lVar8 * 8);
        piVar1 = param_2;
        FUN_1057ab340();
        aiStack_124[0] = (int)piVar1;
        if (aiStack_124[0] != 0) {
          piVar5 = aiStack_124;
          func_0x000100c47d40(param_1);
        }
        lVar8 = lVar8 + 1;
      } while (lVar6 != lVar8);
      lVar6 = param_3;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(param_3);
  lVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar6;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  _objc_release(param_3);
  __Unwind_Resume(lVar6);
  _objc_retain(piVar5);
  if (piVar5 == (int *)0x0) {
    lVar6 = 0;
    goto LAB_1057ab420;
  }
  piVar1 = piVar5;
  _CFStringGetCStringPtr(piVar5,0x8000100);
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1;
    _strlen(piVar1);
    func_0x0001001cde08(lVar6,piVar1,piVar2);
    goto LAB_1057ab420;
  }
  piVar1 = piVar5;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (piVar1 == (int *)0x0) {
    piVar1 = piVar5;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (piVar1 != (int *)0x0) goto LAB_1057ab3e0;
    lVar6 = 0;
  }
  else {
LAB_1057ab3e0:
    piVar3 = piVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    piVar4 = piVar1;
    func_0x00010c08fa60(piVar1);
    piVar2 = (int *)"";
    if (piVar3 != (int *)0x0) {
      piVar2 = piVar3;
    }
    func_0x0001001cde08(lVar6,piVar2,piVar4);
  }
  _objc_release(piVar1);
LAB_1057ab420:
  _objc_release(piVar5);
  return lVar6;
}



/* Entry: 1057ab340; end: 1057ab46f;  */

undefined8 FUN_1057ab340(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_1057ab420;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_1057ab420;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_1057ab3e0;
    param_1 = 0;
  }
  else {
LAB_1057ab3e0:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x0001001cde08(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_1057ab420:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1057ab470; end: 1057ab65f; -[SCCommerceDataServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057ab470(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1057ab660;
  puStack_78 = &UNK_1108b1f18;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_c0 = puVar3;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x1057ab6a0;
  puStack_a8 = &UNK_1108b1f48;
  _objc_copyWeak(auStack_98,auStack_68);
  puStack_a0 = puVar1;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_c8,auStack_68);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126be390;
  _objc_alloc(PTR_PTR_1126be390);
  func_0x00010bfeff00();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112729788));
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1057ab660; end: 1057ab727;  */

void FUN_1057ab660(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf4d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057ab728; end: 1057ab897; -[SCCommerceDataServicesEntryPoint _createAccountProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057ab728(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126be398;
  _objc_alloc(PTR_PTR_1126be398);
  lVar2 = param_1;
  FUN_1057ab898(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
    lVar10 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112729794;
    _objc_loadWeakRetained(lVar9);
    lVar10 = param_1 + _DAT_11272979c;
    _objc_loadWeakRetained(lVar10);
  }
  lVar4 = lVar10;
  func_0x00010bfcdfa0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = 0;
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_1127297a0;
    _objc_loadWeakRetained(lVar6);
  }
  lVar7 = lVar6;
  func_0x00010bfcfa00(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05eb00(puVar1,param_2,lVar3,lVar9,lVar5,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057ab898; end: 1057ab8bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057ab898(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112729790);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057ab8bc; end: 1057aba73; -[SCCommerceDataServicesEntryPoint _createPaymentInfoProviderWithTokenizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057ab8bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  puVar1 = PTR_PTR_1126be3a0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1;
  FUN_1057aba74();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_1057aba74();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar7 = param_1;
  FUN_1057ab898(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = 0;
  if (param_1 != 0) {
    lVar10 = param_1 + _DAT_112729798;
    _objc_loadWeakRetained(lVar10);
  }
  lVar11 = lVar10;
  func_0x00010bfe5f40(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c24d0c0();
  func_0x00010c01acc0(puVar1,param_2,lVar3,lVar5,uVar6,lVar9,lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057aba74; end: 1057aba97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057aba74(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272978c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057aba98; end: 1057abb53; -[SCCommerceDataServicesEntryPoint _createTokenizer] */

void FUN_1057aba98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126be3a8;
  _objc_alloc(PTR_PTR_1126be3a8);
  uVar2 = param_1;
  FUN_1057aba74(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  FUN_1057aba74(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ac20(puVar1,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057abb54; end: 1057abbcb; -[SCCommerceDataServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057abb54(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112729788,0);
  _objc_destroyWeak(param_1 + _DAT_1127297a0);
  _objc_destroyWeak(param_1 + _DAT_11272979c);
  _objc_destroyWeak(param_1 + _DAT_112729798);
  _objc_destroyWeak(param_1 + _DAT_112729794);
  _objc_destroyWeak(param_1 + _DAT_112729790);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272978c);
  return;
}



/* Entry: 1057abbcc; end: 1057abccb; -[SCCommercePaymentsInfraServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057abbcc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126be3b0;
  _objc_alloc(PTR_PTR_1126be3b0);
  func_0x00010c0347c0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_1127297a4));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1057abccc; end: 1057abd0b;  */

void FUN_1057abccc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf4d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057abd0c; end: 1057abdc7; -[SCCommercePaymentsInfraServicesEntryPoint _createTokenizer] */

void FUN_1057abd0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126be3a8;
  _objc_alloc(PTR_PTR_1126be3a8);
  uVar2 = param_1;
  FUN_1057abdc8(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  FUN_1057abdc8(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ac20(puVar1,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057abdc8; end: 1057abdeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057abdc8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127297a8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057abdec; end: 1057abebf; -[SCCommercePaymentsInfraServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057abdec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127297a4,0);
  _objc_destroyWeak(param_1 + _DAT_1127297b0);
  _objc_destroyWeak(param_1 + _DAT_1127297ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127297a8);
  return;
}



/* Entry: 1057abec0; end: 1057ac057; -[SCCommerceServiceProvider _createStoreFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057abec0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126be3c0;
  _objc_alloc(PTR_PTR_1126be3c0);
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_1127297b4;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar10;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_1127297c4;
    _objc_loadWeakRetained(lVar11);
  }
  lVar4 = lVar11;
  func_0x00010bf42360(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_1057ac058(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = 0;
  if (param_1 != 0) {
    lVar8 = param_1 + _DAT_1127297c0;
    _objc_loadWeakRetained(lVar8);
  }
  lVar9 = lVar8;
  func_0x00010bfcfa00(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05aea0(puVar1,param_2,lVar3,lVar4,lVar7,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057ac058; end: 1057ac07b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057ac058(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127297bc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057ac07c; end: 1057ac1cf; -[SCCommerceServiceProvider _createPixelMetricsLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057ac07c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126be3c8;
  _objc_alloc(PTR_PTR_1126be3c8);
  puVar2 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_1127297b8;
    _objc_loadWeakRetained(lVar6);
  }
  lVar3 = param_1;
  FUN_1057ac058(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f440(puVar1,param_2,puVar2,lVar6,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(puVar2);
  lVar6 = 0;
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_1127297c8;
    _objc_loadWeakRetained(lVar6);
  }
  lVar3 = lVar6;
  func_0x00010bf398e0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1f440();
  _objc_release(lVar3);
  _objc_release(lVar6);
  func_0x00010c171ca0(puVar1,param_2,(uint)lVar4 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057ac1d0; end: 1057ac237; -[SCCommerceServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057ac1d0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127297c8);
  _objc_destroyWeak(param_1 + _DAT_1127297c4);
  _objc_destroyWeak(param_1 + _DAT_1127297c0);
  _objc_destroyWeak(param_1 + _DAT_1127297bc);
  _objc_destroyWeak(param_1 + _DAT_1127297b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127297b4);
  return;
}



/* Entry: 1057ac238; end: 1057ac2ab; -[UNIAccountInfoService initWithUnifiedGrpcService:] */

undefined1 * FUN_1057ac238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea3b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057ac2ac; end: 1057ac38f; -[UNIAccountInfoService getAccountInfoWithRequest:callOptionsBuilder:handler:] */

void FUN_1057ac2ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be3d0;
  _objc_opt_class(PTR_PTR_1126be3d0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e01ff8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057ac390; end: 1057ac473; -[UNIAccountInfoService updateContactDetailsWithRequest:callOptionsBuilder:handler:] */

void FUN_1057ac390(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be3d8;
  _objc_opt_class(PTR_PTR_1126be3d8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e02018,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057ac474; end: 1057ac557; -[UNIAccountInfoService addNewShippingAddressWithRequest:callOptionsBuilder:handler:] */

void FUN_1057ac474(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be3e0;
  _objc_opt_class(PTR_PTR_1126be3e0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e02038,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057ac558; end: 1057ac63b; -[UNIAccountInfoService updateShippingAddressWithRequest:callOptionsBuilder:handler:] */

void FUN_1057ac558(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be3e8;
  _objc_opt_class(PTR_PTR_1126be3e8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e02058,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057ac63c; end: 1057ac71f; -[UNIAccountInfoService deleteShippingAddressWithRequest:callOptionsBuilder:handler:] */

void FUN_1057ac63c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126be3f0;
  _objc_opt_class(PTR_PTR_1126be3f0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e02078,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057ac720; end: 1057ac72b; -[UNIAccountInfoService .cxx_destruct] */

void FUN_1057ac720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057ac72c; end: 1057ac9c7; -[SCCommerceAccountsProvider initWithUserSession:userInfoServices:grapheneRegistry:unifiedGRPCClientFactory:] */

undefined1 *
FUN_1057ac72c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ea3b8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf8d9a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar7;
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0fb000();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar7;
    _objc_release(uVar6);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0468;
    _objc_alloc();
    func_0x00010c0184a0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b0380;
    func_0x00010c291260(PTR_PTR_1126b0380);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21dec0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c1eeba0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar5);
    uVar2 = param_6;
    func_0x00010bf56360(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126be3f8;
    _objc_alloc();
    func_0x00010c058f80();
    uVar7 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar4;
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057ac9c8; end: 1057acab3; -[SCCommerceAccountsProvider _vendCallOptions] */

void FUN_1057ac9c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar5 = PTR_PTR_113185418;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(PTR_PTR_113185418);
  puVar6 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c6a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (puVar5 != (undefined *)0x0) {
    ppuStack_48 = &PTR____CFConstantStringClassReference_110dadcb8;
    puStack_40 = puVar5;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&ppuStack_48,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9140(puVar6,param_2,puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    uVar2 = *(undefined8 *)(puVar5 + 8);
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0fafc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar5 = *(undefined **)(puVar5 + 8);
      func_0x00010bf60aa0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0cf3c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1057acab4; end: 1057acb53; -[SCCommerceAccountsProvider prefillPhone] */

void FUN_1057acab4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fafc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0();
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf60aa0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0cf3c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1057acb54; end: 1057acb9b; -[SCCommerceAccountsProvider prefillPhoneCode] */

void FUN_1057acb54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf60aa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fafc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1057acb9c; end: 1057acbe3; -[SCCommerceAccountsProvider prefillEmail] */

void FUN_1057acb9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf60aa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1057acbe4; end: 1057acc8b; -[SCCommerceAccountsProvider prefillUserInfoFromUserAccount:completionBlock:] */

void FUN_1057acbe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c108400(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c108420(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b05a8;
  _objc_alloc(PTR_PTR_1126b05a8);
  func_0x00010c00f3a0();
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,puVar2,0);
  }
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057acc8c; end: 1057ace2b; -[SCCommerceAccountsProvider _handleAccountInfoResponse:error:completion:] */

void FUN_1057acc8c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  FUN_1057c9188(param_3,lVar1,&PTR____CFConstantStringClassReference_110e02098,param_4,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar5);
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = param_3;
    func_0x00010beed4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bfd5aa0();
    if ((int)lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar3 = lVar1;
      func_0x00010bf49cc0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x0001060e4d78();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    lVar3 = lVar1;
    func_0x00010c22c9c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000100504554();
    _objc_release(lVar3);
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,lVar5,lVar4,0);
    }
    _objc_release(lVar4);
    _objc_release(lVar5);
    _objc_release(lVar1);
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5,0,0,lVar2);
  }
  _objc_release(lVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057ace2c; end: 1057ace33;  */

void FUN_1057ace2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_2;
  func_0x00010bfb18a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80();
  _objc_release(uVar1);
  if ((int)puVar10 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126b05b0;
    _objc_alloc();
    uVar1 = param_2;
    func_0x0001060e4ae4();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar3 = param_2;
    func_0x00010befd680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340(puVar2);
    func_0x00010c070480(param_2);
    uVar4 = param_2;
    func_0x00010c08a8a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_2;
    func_0x00010c28d1e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010bf5a4a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff25e0(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1057ace34; end: 1057ad007; -[SCCommerceAccountsProvider fetchAccountInfoCompletionQueue:context:completionBlock:] */

void FUN_1057ace34(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126be400;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100576d08();
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar4);
  }
  func_0x00010c21e620(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_58,param_2);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010bee7fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_68 = param_1;
  _objc_retain(puVar1);
  _objc_retain(param_6);
  func_0x00010bfc1ea0(uVar3);
  _objc_release(param_2);
  _objc_release(param_6);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1057ad008; end: 1057ad167;  */

void FUN_1057ad008(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfcdf40();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c15ebe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c15ebe0(param_2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_2;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98940();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7120(lVar2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25040();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057ad168; end: 1057ad24b; -[SCCommerceAccountsProvider _updateContactDetailsHelper:completion:error:] */

void FUN_1057ad168(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  FUN_1057c9188(param_3,lVar1,&PTR____CFConstantStringClassReference_110e02098,param_5,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (param_4 != 0 || lVar3 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,0,lVar3);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057ad24c; end: 1057ad4b3; -[SCCommerceAccountsProvider updateContactDetails:context:completionQueue:completion:] */

void FUN_1057ad24c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126be408;
  func_0x00010c0cb140(PTR_PTR_1126be408);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf8d6c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194080(puVar1);
  _objc_release(uVar4);
  uVar4 = param_4;
  func_0x00010c0faaa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1db060(puVar1);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126be410;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181300();
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100576d08();
  if ((int)uVar4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar5);
  }
  func_0x00010c21e620(puVar2);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_68,param_2);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010bee7fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_68);
  uStack_78 = param_1;
  _objc_retain(puVar2);
  _objc_retain(param_7);
  func_0x00010c2848c0(uVar4);
  _objc_release(param_2);
  _objc_release(param_7);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1057ad4b4; end: 1057ad613;  */

void FUN_1057ad4b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfcdf40();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c15ebe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c15ebe0(param_2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_2;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98940();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7120(lVar2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5e20();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057ad614; end: 1057ad6f7; -[SCCommerceAccountsProvider _handleAddShippingResponse:error:completion:] */

void FUN_1057ad614(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  FUN_1057c9188(param_3,lVar1,&PTR____CFConstantStringClassReference_110e02098,param_4,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (param_5 != 0 || lVar3 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,0,lVar3);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1057ad6f8; end: 1057ad90f; -[SCCommerceAccountsProvider addShippingAddress:context:completionQueue:completion:] */

void FUN_1057ad6f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126be418;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100576d08();
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar4);
  }
  func_0x00010c21e620(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  uVar3 = param_4;
  func_0x0001060e3a10(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff680(puVar1);
  _objc_release(uVar3);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_68,param_2);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010bee7fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_68);
  uStack_78 = param_1;
  _objc_retain(puVar1);
  _objc_retain(param_7);
  func_0x00010befa020(uVar3);
  _objc_release(param_2);
  _objc_release(param_7);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1057ad910; end: 1057ada6f;  */

void FUN_1057ad910(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfcdf40();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c15ebe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c15ebe0(param_2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_2;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98940();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7120(lVar2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25700();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057ada70; end: 1057adb53; -[SCCommerceAccountsProvider _handleUpdateShippingResponse:error:completion:] */

void FUN_1057ada70(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  FUN_1057c9188(param_3,lVar1,&PTR____CFConstantStringClassReference_110e02098,param_4,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (param_5 != 0 || lVar3 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,0,lVar3);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1057adb54; end: 1057add6b; -[SCCommerceAccountsProvider updateShippingAddress:context:completionQueue:completion:] */

void FUN_1057adb54(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126be420;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100576d08();
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar4);
  }
  func_0x00010c21e620(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  uVar3 = param_4;
  func_0x0001060e3a10(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff680(puVar1);
  _objc_release(uVar3);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_68,param_2);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010bee7fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_68);
  uStack_78 = param_1;
  _objc_retain(puVar1);
  _objc_retain(param_7);
  func_0x00010c289e00(uVar3);
  _objc_release(param_2);
  _objc_release(param_7);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1057add6c; end: 1057adecb;  */

void FUN_1057add6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfcdf40();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c15ebe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c15ebe0(param_2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_2;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98940();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7120(lVar2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be329a0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057adecc; end: 1057adfab; -[SCCommerceAccountsProvider _handleDeleteShippingResponse:error:completion:] */

void FUN_1057adecc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  FUN_1057c9188(param_3,lVar1,&PTR____CFConstantStringClassReference_110e02098,param_4,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (param_5 != 0 || lVar3 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,lVar3);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1057adfac; end: 1057ae1c7; -[SCCommerceAccountsProvider deleteShippingAddress:context:completionQueue:completion:] */

void FUN_1057adfac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126be428;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100576d08();
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar4);
  }
  func_0x00010c21e620(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  uVar3 = param_4;
  func_0x00010bf64920(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165ca0(puVar1);
  _objc_release(uVar3);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_68,param_2);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010bee7fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_68);
  uStack_78 = param_1;
  _objc_retain(puVar1);
  _objc_retain(param_7);
  func_0x00010bf6c800(uVar3);
  _objc_release(param_2);
  _objc_release(param_7);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1057ae1c8; end: 1057ae327;  */

void FUN_1057ae1c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfcdf40();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c15ebe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c15ebe0(param_2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_2;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98940();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7120(lVar2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28280();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057ae328; end: 1057ae32f; -[SCCommerceAccountsProvider grapheneNetworkLogger] */

undefined8 FUN_1057ae328(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1057ae330; end: 1057ae35f; -[SCCommerceAccountsProvider setGrapheneNetworkLogger:] */

void FUN_1057ae330(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057ae360; end: 1057ae3d7; -[SCCommerceAccountsProvider .cxx_destruct] */

void FUN_1057ae360(long param_1)

{
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



/* Entry: 1057ae3d8; end: 1057ae43f; +[AddNewShippingAddressRequest descriptor] */

void FUN_1057ae3d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0610 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a68dc0,
                        &PTR____CFConstantStringClassReference_110e020b8,&PTR_DAT_1130ff7f0,
                        &PTR_s_userId_1130ff828,2,0x18,0x1c);
    puRam00000001136c0610 = puVar1;
  }
  return;
}



/* Entry: 1057ae440; end: 1057ae4cb; +[AddNewShippingAddressResponse descriptor] */

undefined * FUN_1057ae440(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0618 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a68e10,
                        &PTR____CFConstantStringClassReference_110e020d8,&PTR_DAT_1130ff7f0,
                        &PTR_s_error_1130ff868,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c0618 = puVar1;
  }
  return puRam00000001136c0618;
}



/* Entry: 1057ae4cc; end: 1057ae547; +[AddNewShippingAddressResponse_AddNewShippingAddressResult descriptor] */

undefined * FUN_1057ae4cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0620 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a68e60,
                        &PTR____CFConstantStringClassReference_110e020f8,&PTR_DAT_1130ff7f0,
                        &PTR_s_addressId_1130ff808,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c0620 = puVar1;
  }
  return puRam00000001136c0620;
}



/* Entry: 1057ae548; end: 1057ae5af; +[DeleteShippingAddressRequest descriptor] */

void FUN_1057ae548(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0628 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a68f00,
                        &PTR____CFConstantStringClassReference_110e02118,&PTR_DAT_1130ff8d0,
                        &PTR_s_userId_1130ff8e8,2,0x18,0x1c);
    puRam00000001136c0628 = puVar1;
  }
  return;
}



/* Entry: 1057ae5b0; end: 1057ae63b; +[DeleteShippingAddressResponse descriptor] */

undefined * FUN_1057ae5b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0630 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a68f50,
                        &PTR____CFConstantStringClassReference_110e02138,&PTR_DAT_1130ff8d0,
                        &PTR_s_error_1130ff928,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136c0630 = puVar1;
  }
  return puRam00000001136c0630;
}



/* Entry: 1057ae63c; end: 1057ae6a3; +[GetAccountInfoRequest descriptor] */

void FUN_1057ae63c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0638 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a68ff0,
                        &PTR____CFConstantStringClassReference_110e02158,&PTR_DAT_1130ff970,
                        &PTR_s_userId_1130ff988,1,0x10,0x1c);
    puRam00000001136c0638 = puVar1;
  }
  return;
}



/* Entry: 1057ae6a4; end: 1057ae72f; +[GetAccountInfoResponse descriptor] */

undefined * FUN_1057ae6a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0640 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a69040,
                        &PTR____CFConstantStringClassReference_110e02178,&PTR_DAT_1130ff970,
                        &PTR_s_accountInfo_1130ff9a8,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c0640 = puVar1;
  }
  return puRam00000001136c0640;
}



/* Entry: 1057ae730; end: 1057ae797; +[AccountInfo descriptor] */

void FUN_1057ae730(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0648 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a690e0,
                        &PTR____CFConstantStringClassReference_110db24b8,&PTR_DAT_1130ffa08,
                        &PTR_s_contactDetails_1130ffa20,2,0x18,0x1c);
    puRam00000001136c0648 = puVar1;
  }
  return;
}



/* Entry: 1057ae798; end: 1057ae7ff; +[UpdateContactDetailsRequest descriptor] */

void FUN_1057ae798(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0650 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a69180,
                        &PTR____CFConstantStringClassReference_110e02198,&PTR_DAT_1130ffa68,
                        &PTR_s_userId_1130ffa80,2,0x18,0x1c);
    puRam00000001136c0650 = puVar1;
  }
  return;
}



/* Entry: 1057ae800; end: 1057ae88b; +[UpdateContactDetailsResponse descriptor] */

undefined * FUN_1057ae800(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0658 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a691d0,
                        &PTR____CFConstantStringClassReference_110e021b8,&PTR_DAT_1130ffa68,
                        &PTR_s_error_1130ffac0,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136c0658 = puVar1;
  }
  return puRam00000001136c0658;
}



/* Entry: 1057ae88c; end: 1057ae8f3; +[UpdateShippingAddressRequest descriptor] */

void FUN_1057ae88c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0660 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a69270,
                        &PTR____CFConstantStringClassReference_110e021d8,&PTR_DAT_1130ffb08,
                        &PTR_s_userId_1130ffb20,2,0x18,0x1c);
    puRam00000001136c0660 = puVar1;
  }
  return;
}



/* Entry: 1057ae8f4; end: 1057ae97f; +[UpdateShippingAddressResponse descriptor] */

undefined * FUN_1057ae8f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0668 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a692c0,
                        &PTR____CFConstantStringClassReference_110e021f8,&PTR_DAT_1130ffb08,
                        &PTR_s_error_1130ffb60,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136c0668 = puVar1;
  }
  return puRam00000001136c0668;
}



/* Entry: 1057ae980; end: 1057aead3; -[SCCommerceAPIGatewayPaymentInfoProvider initWithHttpMetadataService:httpRequestModifier:paymentTokenizer:userId:deviceId:] */

undefined8 *
FUN_1057ae980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ea3c0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    uVar2 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1057aead4; end: 1057aec2f; -[SCCommerceAPIGatewayPaymentInfoProvider fetchPaymentMethodsCompletionQueue:context:completionBlock:] */

void FUN_1057aead4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126be430;
  func_0x00010c0cb140(PTR_PTR_1126be430);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620();
  _objc_initWeak(auStack_48,param_1);
  puVar2 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bec65e0(param_1);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1057aec30; end: 1057aec9b;  */

void FUN_1057aec30(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be298e0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057aec9c; end: 1057aedbf; -[SCCommerceAPIGatewayPaymentInfoProvider addPaymentMethod:context:completionQueue:completionBlock:] */

void FUN_1057aec9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c2733c0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1057aedc0; end: 1057aee37;  */

void FUN_1057aedc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32280();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057aee38; end: 1057aef8b; -[SCCommerceAPIGatewayPaymentInfoProvider updatePaymentMethod:paymentIdentifier:context:completionQueue:completionBlock:] */

void FUN_1057aee38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c2733c0(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


