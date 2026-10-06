/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105758228; end: 1057582a3;  */

void FUN_105758228(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bdbd8;
    _objc_alloc(PTR_PTR_1126bdbd8);
    func_0x00010c054280();
  }
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1057582a4; end: 105758487; -[SCAdContentDeliveryApiImpl _retrieveProfileIcon:pageInfo:completion:] */

void FUN_1057582a4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c116960();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar3 = param_3;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      _objc_initWeak(auStack_58,param_1);
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c116a20(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x0001084c44f4();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_5);
      func_0x00010c13e560(uVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(uVar4);
      _objc_release(param_5);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      goto LAB_105758430;
    }
  }
  (**(code **)(param_5 + 0x10))(param_5,0);
LAB_105758430:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105758488; end: 105758547;  */

void FUN_105758488(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105758548; end: 1057585b3;  */

void FUN_105758548(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) && (func_0x00010bfcaaa0(), lVar1 == 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010b7f5374(uVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010575857c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  return;
}



/* Entry: 1057585b4; end: 105758ae7; -[SCAdContentDeliveryApiImpl _retrieveBottomContentForMedia:mediaId:pageInfo:completion:] */

void FUN_1057585b4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  ulong uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 *puStack_178;
  undefined4 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
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
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_105757b50;
  uStack_88 = 0x105757b60;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_105757b50;
  uStack_b8 = 0x105757b60;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_105757b50;
  uStack_e8 = 0x105757b60;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar1;
  _dispatch_group_create();
  uVar2 = param_3;
  func_0x00010bef60a0();
  if ((long)uVar2 < 10) {
    if (uVar2 == 1) {
      func_0x00010be96140(param_1);
      goto LAB_105758a24;
    }
    if (uVar2 == 6) {
      _dispatch_group_enter(puVar1);
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_4;
      func_0x0001084c29b4(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar9;
      func_0x0001084c44f4();
      _objc_retainAutoreleasedReturnValue();
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      pcStack_128 = FUN_105758ae8;
      puStack_120 = &UNK_1108a6ae8;
      puStack_110 = &uStack_a8;
      _objc_retain(puVar1);
      puStack_118 = puVar1;
      func_0x00010c13e560(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar9);
      _objc_release(uVar3);
      puVar8 = puStack_118;
      goto LAB_105758970;
    }
  }
  else if (uVar2 == 0x14) {
    _dispatch_group_enter(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_4;
    func_0x0001084c29fc(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x0001084c44f4();
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    uStack_158 = 0x105758b44;
    puStack_150 = &UNK_1108a6ae8;
    puStack_140 = &uStack_d8;
    _objc_retain(puVar1);
    puStack_148 = puVar1;
    func_0x00010c13e560(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar3);
    puVar8 = puStack_148;
LAB_105758970:
    _objc_release(puVar8);
  }
  else if (uVar2 == 10) {
    uVar10 = 0;
    while( true ) {
      uVar4 = param_3;
      func_0x00010bf3fc80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf529e0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      if (uVar6 <= uVar10) break;
      _dispatch_group_enter(puVar1);
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_4;
      func_0x0001084c2a44(param_4,uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar9;
      func_0x0001084c44f4();
      _objc_retainAutoreleasedReturnValue();
      puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a0 = 0xc2000000;
      pcStack_198 = FUN_105758ba0;
      puStack_190 = &UNK_1108af720;
      puStack_178 = &uStack_108;
      _objc_retain(param_4);
      uStack_170 = (undefined4)uVar10;
      uStack_188 = param_4;
      _objc_retain(puVar1);
      puStack_180 = puVar1;
      func_0x00010c13e560(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar9);
      _objc_release(uVar3);
      _objc_release(puStack_180);
      _objc_release(uStack_188);
      uVar10 = uVar10 + 1;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f8 = 0xc2000000;
  pcStack_1f0 = FUN_105758c2c;
  puStack_1e8 = &UNK_1108af750;
  uStack_1b0 = uVar2;
  _objc_retain(param_6);
  puStack_1c8 = &uStack_a8;
  uStack_1d0 = param_6;
  _objc_retain(param_3);
  puStack_1c0 = &uStack_108;
  uStack_1e0 = param_3;
  _objc_retain(param_4);
  puStack_1b8 = &uStack_d8;
  uStack_1d8 = param_4;
  func_0x000100bc0718(puVar1,uVar9,&puStack_200);
  _objc_release(uVar9);
  _objc_release(uStack_1d8);
  _objc_release(uStack_1e0);
  _objc_release(uStack_1d0);
LAB_105758a24:
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(puStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105758ae8; end: 105758b9f;  */

void FUN_105758ae8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105758ba0; end: 105758c2b;  */

void FUN_105758ba0(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x38);
    _objc_retain(param_2);
    func_0x0001084c2a44(uVar3,(long)iVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2);
    _objc_release(param_2);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105758c2c; end: 105758f7b;  */

void FUN_105758c2c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  code *pcVar12;
  
  uVar11 = *(ulong *)(param_1 + 0x50);
  if ((long)uVar11 < 6) {
    if ((3 < uVar11 - 2 && uVar11 != 0) && (uVar11 != 1)) {
      return;
    }
    goto LAB_105758ce8;
  }
  if (uVar11 < 0x18) {
    if ((1L << (uVar11 & 0x3f) & 0xeffb80U) != 0) goto LAB_105758ce8;
    if (uVar11 != 10) {
      if (uVar11 != 0x14) goto LAB_105758d18;
      lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
      if ((lVar1 == 0) || (func_0x00010bfcaaa0(), puVar10 = PTR_PTR_1126bdbe0, lVar1 != 0))
      goto LAB_105758ce8;
      uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
      func_0x00010b7f5374(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c129520(puVar10);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105758d70;
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010bf3fc80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    _objc_release(lVar4);
    if (lVar5 != 0) {
      uVar11 = 0;
      do {
        lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        func_0x0001084c2a44(uVar2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        if ((lVar1 != 0) && (lVar5 = lVar1, func_0x00010bfcaaa0(), lVar5 == 0)) {
          lVar5 = lVar1;
          func_0x00010b7f5374(lVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(puVar10);
          _objc_release(lVar5);
        }
        _objc_release(lVar1);
        uVar11 = uVar11 + 1;
        uVar6 = *(ulong *)(param_1 + 0x20);
        func_0x00010bf3fc80();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bf529e0();
        _objc_release(uVar7);
        _objc_release(uVar6);
      } while (uVar11 < uVar8);
    }
    puVar9 = puVar3;
    func_0x00010bf529e0();
    puVar10 = PTR_PTR_1126bdbe0;
    if (puVar9 != (undefined *)0x0) {
      puVar9 = puVar3;
      func_0x00010bf51e00(puVar3);
      func_0x00010bf40b20(puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar10);
      _objc_release(puVar10);
      goto LAB_105758f60;
    }
    lVar1 = *(long *)(param_1 + 0x30);
    pcVar12 = *(code **)(lVar1 + 0x10);
    puVar10 = (undefined *)0x0;
  }
  else {
LAB_105758d18:
    if (uVar11 != 6) {
      return;
    }
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    if ((lVar1 == 0) || (func_0x00010bfcaaa0(), puVar10 = PTR_PTR_1126bdbe0, lVar1 != 0)) {
LAB_105758ce8:
                    /* WARNING: Could not recover jumptable at 0x000105758d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
      return;
    }
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    func_0x00010b7f5374(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf689e0(puVar10);
    _objc_retainAutoreleasedReturnValue();
LAB_105758d70:
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 0x30);
    pcVar12 = *(code **)(lVar1 + 0x10);
    puVar3 = puVar10;
  }
  (*pcVar12)(lVar1,puVar10);
LAB_105758f60:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105758f7c; end: 10575909f; -[SCAdContentDeliveryApiImpl _retrieveAppInstallContentForMedia:pageInfo:completion:] */

void FUN_105758f7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x0001084c2918(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x0001084c44f4(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1057590a0;
  puStack_50 = &UNK_110860410;
  uStack_48 = param_5;
  _objc_retain(param_5);
  func_0x00010c13e560(uVar3,param_2,uVar2,param_4,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1057590a0; end: 10575914f;  */

void FUN_1057590a0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  if ((param_2 == 0) ||
     (lVar1 = param_2, func_0x00010bfcaaa0(), puVar2 = PTR_PTR_1126bdbe0, lVar1 != 0)) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010b7f5374(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf05780(puVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105759150; end: 10575984b; -[SCAdContentDeliveryApiImpl _retrieveTopContentForMedia:mediaId:pageInfo:prefetchDurationMs:completion:] */

void FUN_105759150(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined *param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  long lStack_250;
  undefined *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  long lStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_7;
  _objc_retain();
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_105757b50;
  uStack_78 = 0x105757b60;
  uStack_70 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_105757b50;
  uStack_a8 = 0x105757b60;
  uStack_a0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_105757b50;
  uStack_d8 = 0x105757b60;
  uStack_d0 = 0;
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x3032000000;
  pcStack_110 = FUN_105757b50;
  uStack_108 = 0x105757b60;
  uStack_100 = 0;
  _dispatch_group_create();
  lVar2 = param_3;
  func_0x00010c0c6c20();
  if (lVar2 == 1) {
    _dispatch_group_enter(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_4;
    func_0x0001084c28d0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x0001084c44f4();
    _objc_retainAutoreleasedReturnValue();
    puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1e0 = 0xc2000000;
    uStack_1d8 = 0x105759960;
    puStack_1d0 = &UNK_1108a6ae8;
    puStack_1c0 = &uStack_f8;
    _objc_retain(puVar1);
    puStack_1c8 = puVar1;
    func_0x00010c13e560(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar10);
    _objc_release(uVar3);
    puVar4 = puStack_1c8;
  }
  else if (lVar2 == 2) {
    _dispatch_group_enter(puVar1);
    _dispatch_group_enter(puVar1);
    if (param_6 < 1) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = param_4;
      func_0x0001084c2840(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar10;
      func_0x0001084c44f4();
      _objc_retainAutoreleasedReturnValue();
      puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_180 = 0xc2000000;
      uStack_178 = 0x1057598a8;
      puStack_170 = &UNK_1108a6ae8;
      puStack_160 = &uStack_98;
      _objc_retain(puVar1);
      puStack_168 = puVar1;
      func_0x00010c13e560(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar10);
      _objc_release(uVar3);
      puVar4 = puStack_168;
    }
    else {
      puVar4 = PTR_PTR_1126b7fc8;
      _objc_alloc();
      func_0x00010c0631e0();
      puVar5 = PTR_PTR_1126b7fd0;
      _objc_alloc();
      func_0x00010c0291a0();
      puVar6 = PTR_PTR_1126b1378;
      _objc_alloc();
      func_0x00010c03cd40();
      puVar7 = PTR_PTR_1126b8010;
      _objc_alloc();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0003a0();
      _objc_release(puVar8);
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = param_4;
      func_0x0001084c2840(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar10;
      func_0x0001084c44f4();
      _objc_retainAutoreleasedReturnValue();
      puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_150 = 0xc2000000;
      pcStack_148 = FUN_10575984c;
      puStack_140 = &UNK_1108a6ae8;
      puStack_130 = &uStack_98;
      _objc_retain(puVar1);
      puStack_138 = puVar1;
      func_0x00010c13e5a0(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar10);
      _objc_release(uVar3);
      _objc_release(puStack_138);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_4;
    func_0x0001084c2888(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x0001084c44f4();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b0 = 0xc2000000;
    uStack_1a8 = 0x105759904;
    puStack_1a0 = &UNK_1108a6ae8;
    puStack_190 = &uStack_c8;
    _objc_retain(puVar1);
    puStack_198 = puVar1;
    func_0x00010c13e560(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar10);
    _objc_release(uVar3);
    puVar4 = puStack_198;
  }
  else {
    if (lVar2 != 4) goto LAB_1057596d0;
    _dispatch_group_enter(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_4;
    func_0x0001084c296c(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x0001084c44f4();
    _objc_retainAutoreleasedReturnValue();
    puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_210 = 0xc2000000;
    uStack_208 = 0x1057599bc;
    puStack_200 = &UNK_1108a6ae8;
    puStack_1f0 = &uStack_128;
    _objc_retain(puVar1);
    puStack_1f8 = puVar1;
    func_0x00010c13e560(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar10);
    _objc_release(uVar3);
    puVar4 = puStack_1f8;
  }
  _objc_release(puVar4);
LAB_1057596d0:
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_268 = 0xc2000000;
  pcStack_260 = FUN_105759a18;
  puStack_258 = &UNK_1108af780;
  puStack_240 = &uStack_98;
  puStack_238 = &uStack_c8;
  puStack_230 = &uStack_f8;
  puStack_228 = &uStack_128;
  lStack_250 = param_3;
  puStack_248 = param_7;
  lStack_220 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_7);
  func_0x000100bc0718(puVar1,uVar10,&puStack_270);
  _objc_release(uVar10);
  _objc_release(lStack_250);
  _objc_release(puStack_248);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_128,8);
  _objc_release(uStack_100);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(uStack_a0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10575984c; end: 105759a17;  */

void FUN_10575984c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105759a18; end: 105759ea3;  */

void FUN_105759a18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  
  lVar11 = *(long *)(param_1 + 0x50);
  if (lVar11 < 2) {
    if (lVar11 == 0) {
LAB_105759b58:
                    /* WARNING: Could not recover jumptable at 0x000105759b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
      return;
    }
    if (lVar11 != 1) {
      return;
    }
    lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    if ((lVar11 == 0) || (func_0x00010bfcaaa0(), puVar12 = PTR_PTR_1126bdbe8, lVar11 != 0))
    goto LAB_105759b58;
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    func_0x00010b7f5374(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    func_0x00010bfc79a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1ee80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe72a0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
LAB_105759b98:
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar12);
    goto LAB_105759e74;
  }
  if (lVar11 == 4) {
    lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
    if ((lVar11 == 0) || (func_0x00010bfcaaa0(), lVar11 != 0)) goto LAB_105759b58;
    puVar12 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
    func_0x00010bfc5880();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar12;
    func_0x00010c08fa60();
    if (puVar4 == (undefined *)0x0) {
      _objc_release(puVar12);
      goto LAB_105759b58;
    }
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010c0feac0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar5;
    func_0x00010c0fed40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    if (lVar11 == 0) {
      _objc_retain(puVar6);
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
      func_0x00010bf44780();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0f7d40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c08fa60();
      if (puVar9 == (undefined *)0x0) {
        puVar9 = puVar7;
        func_0x00010c0f7d20();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c08fa60();
        _objc_release(puVar9);
        _objc_release(puVar8);
        if (puVar10 != (undefined *)0x0) goto LAB_105759d40;
        _objc_retain(puVar6);
      }
      else {
        _objc_release(puVar8);
LAB_105759d40:
        puVar8 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
        _objc_alloc_init();
        func_0x00010c1f6900();
        func_0x00010c1a9200(puVar8);
        puVar9 = puVar6;
        func_0x00010c0f5800(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d9820(puVar8);
        _objc_release(puVar9);
        puVar9 = puVar7;
        func_0x00010c0f7d40(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1da640(puVar8);
        _objc_release(puVar9);
        puVar9 = puVar7;
        func_0x00010c0f7d20(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1da620(puVar8);
        _objc_release(puVar9);
        puVar9 = puVar8;
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        if (puVar9 != (undefined *)0x0) {
          puVar4 = puVar9;
        }
        _objc_retain(puVar4);
        _objc_release(puVar9);
        _objc_release(puVar8);
      }
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    _objc_release(lVar11);
    _objc_release(lVar5);
    lVar11 = *(long *)(param_1 + 0x28);
    puVar6 = PTR_PTR_1126bdbe8;
    func_0x00010c0feb20(PTR_PTR_1126bdbe8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar11 + 0x10))(lVar11,puVar6);
    _objc_release(puVar6);
  }
  else {
    if (lVar11 == 3) {
      puVar12 = PTR_PTR_1126bdbe8;
      func_0x00010bf8ebe0(PTR_PTR_1126bdbe8);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105759b98;
    }
    if (lVar11 != 2) {
      return;
    }
    lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    if ((lVar11 == 0) || (func_0x00010bfcaaa0(), lVar11 != 0)) goto LAB_105759b58;
    lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    if ((lVar11 == 0) || (func_0x00010bfcaaa0(), lVar11 != 0)) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      func_0x00010b7f5374(puVar12);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = PTR_PTR_1126bdbe8;
    puVar6 = PTR_PTR_1126bdbf0;
    _objc_alloc(PTR_PTR_1126bdbf0);
    func_0x00010c061140();
    func_0x00010c299940(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar4);
  }
  _objc_release(puVar4);
LAB_105759e74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 105759ea4; end: 10575a0bb; -[SCAdContentDeliveryApiImpl _fetchCompleteContentIfNecessary:metrics:cacheKey:isVideo:preferredVideoDeliveryMethod:pageInfo:forceFullDownload:completion:] */

void FUN_105759ea4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_11);
  if ((param_3 == 0) && (param_6 != 0)) {
    _objc_initWeak(auStack_68,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x0001084c44f4(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_68);
    uStack_78 = param_7;
    _objc_retain(param_5);
    uStack_70 = param_9;
    _objc_retain(param_11);
    func_0x00010c13e560(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_11);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_68);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_11);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_4);
    _objc_release(param_11);
  }
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10575a0bc; end: 10575a117;  */

void FUN_10575a0bc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be10740();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10575a118; end: 10575a183;  */

void FUN_10575a118(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined1 *)(param_1 + 0x38);
  uVar4 = uVar6;
  func_0x00010c0d7ca0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f66a0();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,uVar6,uVar3,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10575a184; end: 10575a35b; -[SCAdContentDeliveryApiImpl _fetchCompleteStreamingContentIfNecessaryForContentResult:preferredVideoDeliveryMethod:contentKey:forceFullDownload:completion:] */

void FUN_10575a184(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  uint param_6,undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar2 = param_3;
  func_0x00010bfcaaa0();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010bfc68a0();
    uVar1 = 0;
    if (param_4 != 2) {
      uVar1 = param_6 ^ 1;
    }
    if (((uVar1 & 1) == 0) && ((int)lVar2 != 0)) {
      _objc_initWeak(auStack_48,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c11de00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_10575a35c;
      puStack_68 = &UNK_1108af810;
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      lStack_60 = param_3;
      _objc_retain(param_7);
      uStack_58 = param_7;
      func_0x000107adfd18(param_3,uVar3,&puStack_80);
      _objc_release(uVar3);
      _objc_release(uStack_58);
      _objc_release(lStack_60);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      goto LAB_10575a23c;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_7);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(param_3);
  _objc_release(param_7);
LAB_10575a23c:
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10575a35c; end: 10575a3b7;  */

void FUN_10575a35c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd8d00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10575a3b8; end: 10575a46f;  */

void FUN_10575a3b8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bfcaaa0(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfc79a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfc68a0();
  uVar1 = 3;
  if (iVar3 == 0) {
    uVar1 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfc79a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0d7ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0f66a0();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4,uVar5,uVar1,uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10575a470; end: 10575a5c3; -[SCAdContentDeliveryApiImpl _callMediaDownloadCompletionWithFullPrefetchResult:success:contentResult:completion:] */

void FUN_10575a470(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if ((param_4 == 0) || (param_3 == 0)) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10575a5c4;
    puStack_58 = &UNK_11084aaa8;
    _objc_retain(param_6);
    uStack_48 = param_6;
    _objc_retain(param_5);
    uStack_50 = param_5;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_70);
    _objc_release(uStack_50);
    uVar1 = uStack_48;
  }
  else {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10575a610;
    puStack_90 = &UNK_11084a9e8;
    _objc_retain(param_6);
    uStack_78 = param_6;
    _objc_retain(param_5);
    uStack_88 = param_5;
    _objc_retain(param_3);
    lStack_80 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_a8);
    _objc_release(lStack_80);
    _objc_release(uStack_88);
    uVar1 = uStack_78;
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10575a5c4; end: 10575a60f;  */

void FUN_10575a5c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bfc79a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,1,uVar2,2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10575a610; end: 10575a673;  */

void FUN_10575a610(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfc79a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c08fa60(uVar2);
  (**(code **)(lVar3 + 0x10))(lVar3,0,uVar1,2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10575a674; end: 10575ae03; -[SCAdContentDeliveryApiImpl _downloadContentForAdMedia:cacheKeyToUrls:optionalDownloadableCacheKey:videoCacheKey:mediaId:contexts:expirationDate:preferredVideoDeliveryMethod:forceFullDownload:successBlock:failureBlock:] */

void FUN_10575a674(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined **param_9,
                  undefined8 param_10,byte param_11,undefined4 param_12,undefined *param_13,
                  undefined8 param_14)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_488 [8];
  long lStack_480;
  long lStack_478;
  undefined8 uStack_470;
  undefined *puStack_468;
  undefined **ppuStack_460;
  undefined *puStack_458;
  long lStack_450;
  undefined **ppuStack_448;
  undefined1 *puStack_440;
  code *pcStack_438;
  long lStack_428;
  undefined *puStack_420;
  undefined8 uStack_418;
  uint uStack_40c;
  undefined8 uStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined **ppuStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  int iStack_3c4;
  long lStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  long lStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  code *pcStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined **ppuStack_300;
  undefined *puStack_2f8;
  undefined **ppuStack_2f0;
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [8];
  undefined8 uStack_2d8;
  undefined1 uStack_2d0;
  undefined1 uStack_2cf;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_428 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_3d8 = param_5;
  _objc_retain(param_5);
  uStack_3e0 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  ppuStack_3f0 = param_9;
  _objc_retain(param_9);
  puStack_420 = param_13;
  _objc_retain(param_13);
  uStack_418 = param_14;
  _objc_retain(param_14);
  puVar2 = PTR_PTR_1126b1060;
  _objc_alloc();
  uStack_3e8 = param_8;
  func_0x00010c032f60();
  puVar3 = PTR_PTR_1126b1378;
  puStack_400 = puVar2;
  func_0x00010c1081a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x2020000000;
  uStack_110 = 0;
  puStack_150 = &uStack_158;
  uStack_158 = 0;
  uStack_148 = 0x3032000000;
  pcStack_140 = FUN_105757b50;
  uStack_138 = 0x105757b60;
  uStack_130 = 0;
  puStack_170 = &uStack_178;
  uStack_178 = 0;
  uStack_168 = 0x2020000000;
  uStack_160 = 1;
  puStack_190 = &uStack_198;
  uStack_198 = 0;
  uStack_188 = 0x2020000000;
  uStack_180 = 0;
  puStack_1b0 = &uStack_1b8;
  uStack_1b8 = 0;
  uStack_1a8 = 0x2020000000;
  uStack_408 = param_10;
  uStack_1a0 = param_10;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puStack_3f8 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf1f480();
  iStack_3c4 = (int)uVar9;
  _objc_release();
  _dispatch_group_create();
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  _objc_retain(param_4);
  lVar5 = param_4;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    uStack_40c = (uint)param_11;
    lStack_3d0 = *plStack_1f0;
    do {
      lVar8 = 0;
      lStack_3c0 = lVar5;
      do {
        if (*plStack_1f0 != lStack_3d0) {
          _objc_enumerationMutation(param_4);
        }
        param_13 = *(undefined **)(lStack_1f8 + lVar8 * 8);
        if ((iStack_3c4 == 0) || (puVar2 = param_13, func_0x0001084c2960(), (int)puVar2 == 0)) {
          _dispatch_group_enter(uVar4);
          puStack_2c8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_2c0 = 0xc2000000;
          pcStack_2b8 = FUN_10575af84;
          puStack_2b0 = &UNK_1108af870;
          lStack_2a8 = param_1;
          _objc_retain(param_7);
          uVar9 = uStack_3d8;
          uStack_2a0 = param_7;
          puStack_298 = param_13;
          _objc_retain(uStack_3d8);
          uStack_290 = uVar9;
          puStack_280 = &uStack_128;
          puStack_278 = &uStack_158;
          puStack_270 = &uStack_178;
          puStack_268 = &uStack_198;
          puStack_260 = &uStack_1b8;
          _objc_retain(uVar4);
          param_9 = &puStack_2c8;
          uStack_288 = uVar4;
          _objc_retainBlock();
          uVar6 = uStack_3e0;
          func_0x00010bf4b900();
          _objc_initWeak(auStack_208,param_1);
          _objc_initWeak(auStack_210,*(undefined8 *)(param_1 + 8));
          uVar10 = *(undefined8 *)(param_1 + 0x28);
          puStack_348 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_340 = 0xc2000000;
          pcStack_338 = FUN_10575b1dc;
          puStack_330 = &UNK_1108af8d0;
          _objc_copyWeak(auStack_2e8,auStack_210);
          puStack_328 = param_13;
          _objc_retain(param_7);
          uStack_320 = param_7;
          _objc_retain(param_4);
          uVar9 = uStack_3e8;
          lStack_318 = param_4;
          _objc_retain(uStack_3e8);
          puVar2 = puStack_3f8;
          uStack_2d0 = (undefined1)uVar6;
          uStack_310 = uVar9;
          uStack_2d8 = uStack_408;
          _objc_retain(puStack_3f8);
          ppuVar1 = ppuStack_3f0;
          puStack_308 = puVar2;
          _objc_retain(ppuStack_3f0);
          ppuStack_300 = ppuVar1;
          _objc_copyWeak(auStack_2e0,auStack_208);
          param_13 = puStack_400;
          _objc_retain(puStack_400);
          puStack_2f8 = param_13;
          uStack_2cf = (undefined1)uStack_40c;
          _objc_retain(param_9);
          ppuStack_2f0 = param_9;
          func_0x00010c0f7fc0(uVar10);
          _objc_release(ppuStack_2f0);
          _objc_release(puStack_2f8);
          _objc_destroyWeak(auStack_2e0);
          _objc_release(ppuStack_300);
          _objc_release(puStack_308);
          _objc_release(uStack_310);
          _objc_release(lStack_318);
          _objc_release(uStack_320);
          _objc_destroyWeak(auStack_2e8);
          _objc_destroyWeak(auStack_210);
          _objc_destroyWeak(auStack_208);
          _objc_release(param_9);
          _objc_release(uStack_288);
          _objc_release(uStack_290);
          _objc_release(uStack_2a0);
        }
        else {
          _objc_initWeak(auStack_208,param_1);
          _objc_initWeak(auStack_210,*(undefined8 *)(param_1 + 0x10));
          uVar9 = *(undefined8 *)(param_1 + 0x28);
          puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_250 = 0xc2000000;
          pcStack_248 = FUN_10575ae04;
          puStack_240 = &UNK_1108af840;
          _objc_copyWeak(auStack_220,auStack_210);
          _objc_retain(param_4);
          lStack_238 = param_4;
          puStack_230 = param_13;
          _objc_copyWeak(auStack_218,auStack_208);
          _objc_retain(param_7);
          uStack_228 = param_7;
          func_0x00010c0f7fc0(uVar9);
          _objc_release(uStack_228);
          _objc_destroyWeak(auStack_218);
          _objc_release(lStack_238);
          _objc_destroyWeak(auStack_220);
          _objc_destroyWeak(auStack_210);
          _objc_destroyWeak(auStack_208);
        }
        lVar8 = lVar8 + 1;
      } while (lStack_3c0 != lVar8);
      lVar5 = param_4;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(param_4);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puStack_420;
  puStack_3b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3b0 = 0xc2000000;
  pcStack_3a8 = FUN_10575b5f8;
  puStack_3a0 = &UNK_1108af900;
  puStack_370 = &uStack_128;
  puStack_368 = &uStack_158;
  puStack_380 = puStack_420;
  puStack_360 = &uStack_178;
  puStack_358 = &uStack_198;
  puStack_350 = &uStack_1b8;
  uStack_378 = uStack_418;
  lStack_398 = param_1;
  uStack_390 = param_7;
  lStack_388 = param_4;
  _objc_retain();
  _objc_retain(puVar2);
  _objc_retain(param_4);
  _objc_retain(param_7);
  func_0x000100bc0718(uVar4,uVar9,&puStack_3b8);
  _objc_release(uVar9);
  _objc_release(uStack_378);
  _objc_release(puStack_380);
  _objc_release(lStack_388);
  _objc_release(uStack_390);
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_1b8,8);
  __Block_object_dispose(&uStack_198,8);
  __Block_object_dispose(&uStack_178,8);
  __Block_object_dispose(&uStack_158,8);
  _objc_release(uStack_130);
  _objc_release(uStack_418);
  _objc_release(puStack_420);
  _objc_release(param_4);
  _objc_release(param_7);
  __Block_object_dispose(&uStack_128,8);
  _objc_release(puStack_3f8);
  _objc_release(puStack_400);
  _objc_release(ppuStack_3f0);
  _objc_release(uStack_3e8);
  _objc_release(uStack_3e0);
  _objc_release(uStack_3d8);
  lVar5 = lStack_428;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_1b8,8);
  __Block_object_dispose(&uStack_198,8);
  __Block_object_dispose(&uStack_178,8);
  __Block_object_dispose(&uStack_158,8);
  __Block_object_dispose(&uStack_128,8);
  lVar7 = lVar5;
  __Unwind_Resume();
  puStack_458 = puVar2;
  pcStack_438 = FUN_10575ae04;
  lVar8 = lVar7 + 0x38;
  lStack_480 = param_1;
  lStack_478 = param_4;
  uStack_470 = param_7;
  puStack_468 = param_13;
  ppuStack_460 = param_9;
  lStack_450 = lVar5;
  ppuStack_448 = &puStack_3b8;
  puStack_440 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained(lVar8);
  lVar5 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar7 + 0x20);
  func_0x00010c0e00e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b17d8;
  _objc_retain();
  _objc_alloc(puVar2);
  puVar3 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  func_0x00010c003a80(puVar2);
  _objc_release(puVar3);
  _objc_copyWeak(auStack_488,lVar7 + 0x40);
  uVar4 = *(undefined8 *)(lVar7 + 0x30);
  _objc_retain(uVar4);
  func_0x00010c13e600(lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar9);
  _objc_release(lVar5);
  _objc_release(lVar8);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_488);
  return;
}



/* Entry: 10575ae04; end: 10575af7f;  */

void FUN_10575ae04(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b17d8;
  _objc_retain();
  _objc_alloc(puVar4);
  puVar5 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c003a80(puVar4);
  _objc_release(puVar5);
  _objc_copyWeak(auStack_58,param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  func_0x00010c13e600(lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10575af80; end: 10575af83;  */

void FUN_10575af80(void)

{
  return;
}



/* Entry: 10575af84; end: 10575b0cb;  */

void FUN_10575af84(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x38);
  func_0x00010bf4b900();
  if ((uVar2 & 1) == 0) {
    if (param_2 - 1U < 4) {
      uVar2 = *(ulong *)(&UNK_10ddbd008 + (param_2 - 1U) * 8);
    }
    else {
      uVar2 = 0;
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    uVar6 = *(long *)(lVar5 + 0x18) - 1;
    if (uVar6 < 4) {
      uVar6 = *(ulong *)(&UNK_10ddbd008 + uVar6 * 8);
    }
    else {
      uVar6 = 0;
    }
    if (uVar6 < uVar2) {
      *(long *)(lVar5 + 0x18) = param_2;
      lVar5 = param_3;
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar5;
      func_0x00010b7f5498();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(*(long *)(param_1 + 0x50) + 8);
      uVar3 = *(undefined8 *)(lVar4 + 0x28);
      *(long *)(lVar4 + 0x28) = lVar1;
      _objc_release(uVar3);
      _objc_release(lVar5);
    }
  }
  lVar5 = param_3;
  func_0x00010c09c1e0();
  if (lVar5 != 1) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18) = 0;
  }
  lVar5 = param_3;
  func_0x00010c0d7ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x60) + 8);
    *(long *)(lVar5 + 0x18) = *(long *)(lVar5 + 0x18) + param_5;
  }
  if (param_4 != 0) {
    *(long *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x18) = param_4;
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10575b0cc; end: 10575b1db;  */

void FUN_10575b0cc(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  return;
}



/* Entry: 10575b1dc; end: 10575b497;  */

void FUN_10575b1dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  
  lVar3 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10575b498;
  puStack_98 = &UNK_1108af8a0;
  _objc_copyWeak(auStack_78,param_1 + 0x68);
  uStack_90 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = *(undefined1 *)(param_1 + 0x78);
  uStack_70 = *(undefined8 *)(param_1 + 0x70);
  uVar11 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar11);
  uStack_67 = *(undefined1 *)(param_1 + 0x79);
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  uStack_88 = uVar11;
  _objc_retain(uVar10);
  uStack_80 = uVar10;
  _objc_retain(uVar2);
  _objc_retain(uVar9);
  _objc_retain(&puStack_b0);
  puVar5 = PTR_PTR_1126b4960;
  _objc_retain(uVar8);
  _objc_retain(uVar1);
  _objc_retain(lVar3);
  func_0x00010bf58680(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219380();
  _objc_release(uVar8);
  puVar6 = PTR_PTR_1126b9f60;
  _objc_alloc(PTR_PTR_1126b9f60);
  func_0x00010c040f00();
  lVar7 = lVar3;
  func_0x00010c269d40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uVar8 = uVar1;
  func_0x0001084c44f4(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf88aa0(lVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(&puStack_b0);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 10575b498; end: 10575b513;  */

void FUN_10575b498(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be10720();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10575b514; end: 10575b5f7;  */

void FUN_10575b514(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),7);
  _objc_copyWeak(param_1 + 0x60,param_2 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x68,param_2 + 0x68);
  return;
}



/* Entry: 10575b5f8; end: 10575b65f;  */

void FUN_10575b5f8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010575b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
              (*(long *)(param_1 + 0x40),lVar1,
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28),
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x18));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010575b65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),
             *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x18),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x18));
  return;
}



/* Entry: 10575b660; end: 10575b703;  */

void FUN_10575b660(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  return;
}



/* Entry: 10575b704; end: 10575b7c3; -[SCAdContentDeliveryApiImpl monitorDownloadProgressWithMediaItemId:] */

void FUN_10575b704(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6b8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10575b7c4;
  puStack_48 = &UNK_11084f340;
  uStack_40 = uVar1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf54280(puVar2,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10575b7c4; end: 10575b8cb;  */

void FUN_10575b7c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x0001084c44f4(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0d0c20(uVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10575b8cc; end: 10575b937;  */

void FUN_10575b8cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0d9840(uVar1);
  uVar1 = param_2;
  func_0x00010c072f20();
  _objc_release(param_2);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760)
    ;
    return;
  }
  return;
}



/* Entry: 10575b938; end: 10575b93f;  */

void FUN_10575b938(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10575b940; end: 10575b993; -[SCAdContentDeliveryApiImpl .cxx_destruct] */

void FUN_10575b940(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10575b994; end: 10575ba03; -[SCAdMediaCoordinator initWithAdConfigProvider:] */

undefined1 * FUN_10575b994(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea120;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10575ba04; end: 10575bad3; -[SCAdMediaCoordinator mediaLoadStatusForMediaId:] */

undefined8 FUN_10575ba04(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0e00e0(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c067fc0();
      _objc_release(uVar2);
    }
    _objc_release(lVar1);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10575bad4; end: 10575bb43; -[SCAdMediaCoordinator willStartFetchingForMediaId:] */

void FUN_10575bad4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x10);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c16a8,param_3);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10575bb44; end: 10575bbcf; -[SCAdMediaCoordinator didFailFetchingMediaWithId:error:] */

void FUN_10575bb44(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x10);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c16c0,param_3);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10575bbd0; end: 10575bc6f; -[SCAdMediaCoordinator didFinishMatchingMediaToAdResponse:success:error:] */

void FUN_10575bbd0(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  undefined **ppuVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    _os_unfair_lock_lock(param_1 + 0x10);
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c16d8;
    if (param_4 == 0) {
      ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c16c0;
    }
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,ppuVar1,param_3);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10575bc70; end: 10575bc7b; -[SCAdMediaCoordinator .cxx_destruct] */

void FUN_10575bc70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10575bc7c; end: 10575bd07;  */

void FUN_10575bc7c(long param_1,int param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  if (param_1 < 3) {
    if (param_1 == 1) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db6dd8;
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db8b78;
      if (param_1 == 2) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110dfbed8;
        if (param_2 == 0) {
          ppuVar2 = &PTR____CFConstantStringClassReference_110de7678;
        }
        _objc_retain(ppuVar2);
      }
    }
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
    if (param_1 == 3) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dfbef8;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110dfbf18;
    if (param_1 != 4) {
      ppuVar2 = ppuVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10575bd08; end: 10575bf4f; -[SCAdMediaFetcher initWithAdContentDelivery:snapAdsMediaCoordinator:promotedStoryStateProvider:adLifecycleWatermarkEventsTracker:grapheneRegistry:adConfigProvider:adConfigProviderV2:mediaMetricsManager:webViewHtmlPrefetcher:] */

undefined8 *
FUN_10575bd08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

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
  puStack_68 = PTR_PTR_1126ea128;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_7);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_release(param_7);
  }
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



/* Entry: 10575bf50; end: 10575bf97;  */

void FUN_10575bf50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10575bf98; end: 10575c2cb; -[SCAdMediaFetcher fetchMediaV2:adSnapIndex:contexts:isPromotedStory:forceFullDownload:adProductType:completion:] */

void FUN_10575bf98(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long in_stack_00000000;
  undefined8 uStack_90;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(in_stack_00000000);
  if (param_3 == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a65a0();
    _objc_release(uVar8);
  }
  else {
    lVar1 = param_3;
    func_0x00010bef60a0();
    if (lVar1 != 0x12) {
      lVar1 = param_3;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010bf925a0();
      lVar1 = lVar2;
      func_0x0001084c4f90(lVar2,uVar3,uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar3);
      lVar5 = lVar2;
      func_0x00010c130960();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c0c6e00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar5);
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010bf1f480();
      uStack_90 = param_3;
      if ((int)uVar8 == 0) {
LAB_10575c178:
        func_0x00010bf20fa0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar5 = lVar2;
        func_0x00010bf5b580();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 == 0) goto LAB_10575c178;
        func_0x00010bf5b640();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
      }
      _objc_release(uVar3);
      func_0x00010c081480();
      lVar5 = lVar2;
      func_0x00010c242040(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c106a40();
      lVar9 = param_3;
      func_0x00010bef2c20();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_3;
      func_0x00010c15ed20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef60a0();
      func_0x00010be12820(param_1);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(uStack_90);
      _objc_release(lVar7);
      _objc_release(lVar1);
      _objc_release(lVar2);
      goto LAB_10575c298;
    }
  }
  if (in_stack_00000000 != 0) {
    (**(code **)(in_stack_00000000 + 0x10))(in_stack_00000000,0);
  }
LAB_10575c298:
  _objc_release(in_stack_00000000);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10575c2cc; end: 10575c817; -[SCAdMediaFetcher prefetchPromotedStoryMedia:numberOfSnapsToFetch:completion:] */

void FUN_10575c2cc(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
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
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar15 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar15);
  _objc_retain(param_3);
  uVar17 = param_3;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar17;
  func_0x00010bf529e0();
  _objc_release(uVar17);
  if (uVar1 != 0) {
    uVar17 = 0;
    do {
      uVar1 = param_3;
      func_0x00010bef52c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar14 = uVar15;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x0001084c659c(param_3,uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar14;
      func_0x00010c06b960();
      _objc_release(uVar1);
      _objc_release(uVar14);
      _objc_release(uVar2);
      if ((int)uVar3 == 0) goto LAB_10575c424;
      uVar17 = uVar17 + 1;
      uVar1 = param_3;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf529e0();
      _objc_release(uVar1);
    } while (uVar17 < uVar2);
  }
  uVar17 = 0;
LAB_10575c424:
  _objc_release(param_3);
  _objc_release();
  _dispatch_group_create();
  if (param_4 != 0) {
    lVar16 = 0;
    do {
      uVar1 = param_3;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf529e0();
      _objc_release(uVar1);
      if (uVar2 <= uVar17 + lVar16) break;
      uVar1 = param_3;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar4;
      func_0x00010bf925a0();
      uVar1 = uVar2;
      func_0x0001084c4f90(uVar2,uVar3,uVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar5 = uVar2;
      func_0x00010c130960();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0c6e00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar5);
      func_0x00010c081480(uVar2);
      _dispatch_group_enter(uVar15);
      uVar5 = uVar2;
      func_0x00010c242040(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010bf20fa0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126b19f8;
      func_0x00010bf81400();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126b19f8;
      puStack_90 = puVar9;
      func_0x00010c23f2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_88 = puVar10;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c106a40();
      uVar12 = param_3;
      func_0x00010bef2c20();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = param_3;
      func_0x00010c15ed20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef60a0();
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_10575c818;
      puStack_a0 = &UNK_110841f20;
      _objc_retain(uVar15);
      uStack_98 = uVar15;
      func_0x00010be12820(param_1);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uStack_98);
      _objc_release(uVar7);
      _objc_release(uVar1);
      _objc_release(uVar2);
      lVar16 = lVar16 + 1;
    } while (param_4 != lVar16);
  }
  func_0x00010be77040(param_1);
  uVar14 = 0x11;
  func_0x0001000819a8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x10575c820;
  puStack_c8 = &UNK_110849530;
  uStack_c0 = param_5;
  _objc_retain(param_5);
  func_0x000100bc0718(uVar15,uVar14,&puStack_e0);
  _objc_release(uVar14);
  _objc_release(uStack_c0);
  _objc_release(param_5);
  _objc_release(uVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 10575c818; end: 10575c837;  */

void FUN_10575c818(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10575c838; end: 10575c8f7; -[SCAdMediaFetcher prefetchScriptWithAdResponse:] */

void FUN_10575c838(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined1 auStack_178 [8];
  double dStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  long lStack_120;
  undefined1 auStack_118 [8];
  double dStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [16];
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_1 + 0x48);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = puVar1;
  func_0x00010c107da0(lVar9);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(lVar9 + 0x48);
  _objc_retain(puVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar6 = puVar2;
  func_0x00010c107da0(lVar9);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(uVar7);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(puVar5);
  _objc_retain(param_3);
  _objc_retain(&stack0xfffffffffffffff0);
  _objc_retain(param_3);
  if ((puVar6 == (undefined *)0x0) || (param_6 == 0)) {
    uVar3 = *(undefined8 *)(lVar9 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a65a0();
    _objc_release(uVar3);
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
  else {
    uVar3 = *(undefined8 *)(lVar9 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a6ce0();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(lVar9 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c0e2340(uVar3);
    _objc_release(uVar3);
    lVar4 = *(long *)(lVar9 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar4;
    func_0x00010c067f60();
    _objc_release(lVar4);
    dVar10 = (double)(lVar8 * 0x15180);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600();
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    _objc_initWeak(auStack_100,lVar9);
    uVar3 = *(undefined8 *)(lVar9 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_10575cdd4;
    puStack_148 = &UNK_1108af960;
    _objc_copyWeak(auStack_118,auStack_100);
    _objc_retain(param_6);
    lStack_140 = param_6;
    _objc_retain(puVar6);
    puStack_138 = puVar6;
    dStack_110 = dVar10;
    _objc_retain(param_8);
    uStack_130 = param_8;
    _objc_retain(&stack0xfffffffffffffff0);
    puStack_128 = &stack0xfffffffffffffff0;
    puStack_108 = puVar1;
    _objc_retain(param_3);
    lStack_120 = param_3;
    _objc_copyWeak(auStack_178,auStack_100);
    _objc_retain(param_6);
    _objc_retain(puVar6);
    dStack_170 = dVar10;
    _objc_retain(param_8);
    _objc_retain(&stack0xfffffffffffffff0);
    puStack_168 = puVar1;
    _objc_retain(param_3);
    func_0x00010bf88a80(uVar3);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_release(&stack0xfffffffffffffff0);
    _objc_release(param_8);
    _objc_release(puVar6);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_178);
    _objc_release(lStack_120);
    _objc_release(puStack_128);
    _objc_release(uStack_130);
    _objc_release(puStack_138);
    _objc_release(lStack_140);
    _objc_destroyWeak(auStack_118);
    _objc_destroyWeak(auStack_100);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  _objc_release(&stack0xfffffffffffffff0);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar7);
  _objc_release(puVar6);
  return;
}



/* Entry: 10575c8f8; end: 10575c9b7; -[SCAdMediaFetcher _prefetchAssetForPromotedStoryIfNeeded:] */

void FUN_10575c8f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9
                  )

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 unaff_x19;
  long lVar7;
  undefined8 unaff_x29;
  double dVar8;
  undefined1 auStack_138 [8];
  double dStack_130;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [8];
  double dStack_d0;
  undefined1 auStack_c0 [16];
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_1 + 0x48);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = puVar1;
  func_0x00010c107da0(lVar7);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_retain(uVar5);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_3);
  _objc_retain(unaff_x19);
  _objc_retain(unaff_x29);
  _objc_retain(param_9);
  if ((puVar4 == (undefined *)0x0) || (param_6 == 0)) {
    uVar2 = *(undefined8 *)(lVar7 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a65a0();
    _objc_release(uVar2);
    (**(code **)(param_9 + 0x10))(param_9,0);
  }
  else {
    uVar2 = *(undefined8 *)(lVar7 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a6ce0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(lVar7 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c0e2340(uVar2);
    _objc_release(uVar2);
    lVar3 = *(long *)(lVar7 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c067f60();
    _objc_release(lVar3);
    dVar8 = (double)(lVar6 * 0x15180);
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600();
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    _objc_initWeak(auStack_c0,lVar7);
    uVar2 = *(undefined8 *)(lVar7 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_10575cdd4;
    puStack_108 = &UNK_1108af960;
    _objc_copyWeak(auStack_d8,auStack_c0);
    _objc_retain(param_6);
    lStack_100 = param_6;
    _objc_retain(puVar4);
    puStack_f8 = puVar4;
    dStack_d0 = dVar8;
    _objc_retain(param_8);
    uStack_f0 = param_8;
    _objc_retain(unaff_x29);
    uStack_e8 = unaff_x29;
    _objc_retain(param_9);
    lStack_e0 = param_9;
    _objc_copyWeak(auStack_138,auStack_c0);
    _objc_retain(param_6);
    _objc_retain(puVar4);
    dStack_130 = dVar8;
    _objc_retain(param_8);
    _objc_retain(unaff_x29);
    _objc_retain(param_9);
    func_0x00010bf88a80(uVar2);
    _objc_release(uVar2);
    _objc_release(param_9);
    _objc_release(unaff_x29);
    _objc_release(param_8);
    _objc_release(puVar4);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_138);
    _objc_release(lStack_e0);
    _objc_release(uStack_e8);
    _objc_release(uStack_f0);
    _objc_release(puStack_f8);
    _objc_release(lStack_100);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_c0);
    _objc_release(puVar1);
  }
  _objc_release(param_9);
  _objc_release(unaff_x29);
  _objc_release(unaff_x19);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(puVar4);
  return;
}



/* Entry: 10575c9b8; end: 10575cdd3; -[SCAdMediaFetcher _fetchMediaV2IfNeeded:profileInfo:endpoint:mediaId:isTopSnapStreamingVideo:adClientRequestId:contexts:index:forceFullDownload:preferredDownloadMethod:adProductType:adId:adServeItemId:adType:completion:] */

void FUN_10575c9b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  double dVar5;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000040;
  undefined1 auStack_f8 [8];
  double dStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  double dStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000040);
  if ((param_3 == 0) || (param_6 == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a65a0();
    _objc_release(uVar1);
    (**(code **)(in_stack_00000040 + 0x10))(in_stack_00000040,0);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a6ce0();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c0e2340(uVar1);
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067f60();
    _objc_release(lVar2);
    dVar5 = (double)(lVar3 * 0x15180);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600();
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    _objc_initWeak(auStack_80,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_10575cdd4;
    puStack_c8 = &UNK_1108af960;
    _objc_copyWeak(auStack_98,auStack_80);
    _objc_retain(param_6);
    lStack_c0 = param_6;
    _objc_retain(param_3);
    lStack_b8 = param_3;
    dStack_90 = dVar5;
    _objc_retain(param_8);
    uStack_b0 = param_8;
    _objc_retain(in_stack_00000030);
    uStack_a8 = in_stack_00000030;
    uStack_88 = in_stack_00000018;
    _objc_retain(in_stack_00000040);
    lStack_a0 = in_stack_00000040;
    _objc_copyWeak(auStack_f8,auStack_80);
    _objc_retain(param_6);
    _objc_retain(param_3);
    dStack_f0 = dVar5;
    _objc_retain(param_8);
    _objc_retain(in_stack_00000030);
    uStack_e8 = in_stack_00000018;
    _objc_retain(in_stack_00000040);
    func_0x00010bf88a80(uVar1);
    _objc_release(uVar1);
    _objc_release(in_stack_00000040);
    _objc_release(in_stack_00000030);
    _objc_release(param_8);
    _objc_release(param_3);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_f8);
    _objc_release(lStack_a0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(lStack_b8);
    _objc_release(lStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar4);
  }
  _objc_release(in_stack_00000040);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000028);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10575cdd4; end: 10575ce4b;  */

void FUN_10575cdd4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfd660(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10575ce4c; end: 10575cee7;  */

void FUN_10575ce4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar3 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = param_3;
  func_0x00010bf3ec40(param_3);
  _objc_release(param_3);
  func_0x00010bdfdb20(*(undefined8 *)(param_1 + 0x50),lVar3,param_2,uVar1,uVar2,uVar4,
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x58),param_4,*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10575cee8; end: 10575d0b3; -[SCAdMediaFetcher _didDownloadAdMediaOnContentDeliveryWithMediaId:adMedia:isFromCache:payloadSize:downloadStartTimestamp:adRequestClientId:adServeItemId:preferredDownloadMethod:usedVideoDeliveryMethod:completion:] */

void FUN_10575cee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000010;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(in_stack_00000010);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20();
  func_0x00010be1cbc0();
  uVar2 = param_5;
  func_0x0001084c4380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010bedbb00(param_1,param_2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10575d0b4;
  puStack_98 = &UNK_11084a9e8;
  uStack_80 = in_stack_00000010;
  uStack_90 = param_2;
  uStack_88 = param_4;
  _objc_retain(in_stack_00000010);
  _objc_retain(param_4);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_b0);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(in_stack_00000010);
  _objc_release(param_4);
  return;
}



/* Entry: 10575d0b4; end: 10575d11b;  */

void FUN_10575d0b4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf76c20();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010575d10c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,1);
    return;
  }
  return;
}



/* Entry: 10575d11c; end: 10575d2d7; -[SCAdMediaFetcher _didFailToDownloadAdMediaOnContentDeliveryWithMediaId:adMedia:errorCode:downloadStartTimestamp:adRequestClientId:adServeItemId:preferredDownloadMethod:usedVideoDeliveryMethod:completion:] */

void FUN_10575d11c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000008;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(in_stack_00000008);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20();
  func_0x00010be1cbc0();
  uVar2 = param_5;
  func_0x0001084c4380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010bedbb00(param_1,param_2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10575d2d8;
  puStack_98 = &UNK_11084a9e8;
  uStack_80 = in_stack_00000008;
  uStack_90 = param_2;
  uStack_88 = param_4;
  _objc_retain(in_stack_00000008);
  _objc_retain(param_4);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_b0);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(in_stack_00000008);
  _objc_release(param_4);
  return;
}



/* Entry: 10575d2d8; end: 10575d36b;  */

void FUN_10575d2d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110dfbf78,
                      &PTR____CFConstantStringClassReference_110dfbf98,3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf76200();
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10575d36c; end: 10575d9e7; -[SCAdMediaFetcher _updateMetricsForMediaDownloadingCompletionWithSuccess:errorCode:downloadMethod:preferredDownloadMethod:isPromotedStories:isCached:payloadSize:adMediaType:adMediaLocationType:isStreaming:adRequestClientId:adServeItemId:mediaURL:downloadStartTimestamp:] */

void FUN_10575d36c(double param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong in_x7;
  undefined8 uVar7;
  double dVar8;
  undefined8 in_stack_00000008;
  undefined1 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  dVar8 = param_1;
  _objc_retain();
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000020);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain();
  func_0x00010bef3540(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = puVar4;
  func_0x00010c2ac460(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bfec2a0(uVar7);
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain();
  func_0x00010bef3600(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bfec2a0(uVar7);
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(uVar7);
  if ((in_x7 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _CACurrentMediaTime();
    puVar1 = PTR_PTR_1126b8d98;
    func_0x00010bef3580(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    dVar8 = dVar8 - param_1;
    puVar2 = puVar1;
    func_0x00010c2ac460(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c2ac460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    uVar7 = in_stack_00000008;
    FUN_10575bc7c(in_stack_00000008,in_stack_00000018);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
    func_0x00010c2ac460(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar7);
    func_0x00010befc000(dVar8,uVar5);
    _objc_release(uVar5);
    _objc_release(puVar1);
    _objc_release(uVar5);
    if (param_4 != 0) {
      uVar7 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126b8d98;
      _objc_retain();
      func_0x00010bef36c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c2ac460(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      FUN_10575bc7c(in_stack_00000008,in_stack_00000018);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010c2ac460(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(in_stack_00000008);
      func_0x00010bef9180(uVar7);
      _objc_release(uVar7);
      _objc_release(puVar1);
      _objc_release(uVar7);
    }
  }
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec0c0();
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f480();
  func_0x00010c0e2320(dVar8,uVar7);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 10575d9e8; end: 10575db17; -[SCAdMediaFetcher _getAdMediaLocationTypeForAdMediaType:] */

long FUN_10575d9e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c0c6c20();
  _objc_release(lVar1);
  if (lVar5 != 4) {
    lVar1 = param_3;
    if (lVar5 == 2) {
      func_0x00010c274c60(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c299160();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfb1260();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c09ea00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0c57e0();
      _objc_release(lVar4);
    }
    else {
      if (lVar5 != 1) {
        lVar5 = 5;
        goto LAB_10575daf8;
      }
      func_0x00010c274c60(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c09ea00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c0c57e0();
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
LAB_10575daf8:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 10575db18; end: 10575dcdb; -[SCAdMediaFetcher .cxx_destruct] */

void FUN_10575db18(long param_1)

{
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



/* Entry: 10575dcdc; end: 10575dd17; -[SCAdPrefetchServiceProvider end] */

void FUN_10575dcdc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ea130;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10575dd18; end: 10575dd93; -[SCAdPrefetchServiceProvider _discoverTileTapContextBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10575dd18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bdc00;
  _objc_alloc(PTR_PTR_1126bdc00);
  param_1 = param_1 + _DAT_112728e14;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1340(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10575dd94; end: 10575e13b; -[SCAdPrefetchServiceProvider _fusAdPrefetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10575dd94(long param_1,undefined8 param_2)

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
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  
  puVar1 = PTR_PTR_1126bdc08;
  _objc_alloc();
  lVar32 = (long)_DAT_112728e18;
  lVar2 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bef3620();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112728e1c;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112728e14;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bef6440();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar10 = lVar32;
  func_0x00010bef6420();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112728e20;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010befe120();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112728e24;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112728e28;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf81860();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112728e2c;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112728e30;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c29f380();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112728e34;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112728e38;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_112728e3c;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010c098e80();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_112728e40;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010bef42e0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_112728e44;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112728e48;
  _objc_loadWeakRetained();
  lVar31 = param_1;
  func_0x00010bf157e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1920(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar10,lVar12,lVar14,lVar16,lVar18,
                      lVar20,lVar22,lVar24,lVar26,lVar28,lVar30,lVar31);
  _objc_release(lVar31);
  _objc_release(param_1);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar32);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10575e13c; end: 10575e347; -[SCAdPrefetchServiceProvider _contentDeepLinkPrefetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10575e13c(long param_1,undefined8 param_2)

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
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  puVar1 = PTR_PTR_1126bdc10;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112728e40;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bef42e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_112728e18;
  lVar4 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bef3620();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112728e1c;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112728e14;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar10 = lVar16;
  func_0x00010bef6440();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112728e20;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010befe120();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112728e24;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112728e3c;
  _objc_loadWeakRetained();
  lVar15 = param_1;
  func_0x00010c098e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1bc0(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar10,lVar12,lVar14,lVar15);
  _objc_release(lVar15);
  _objc_release(param_1);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar16);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10575e348; end: 10575e553; -[SCAdPrefetchServiceProvider _adPrefetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10575e348(long param_1,undefined8 param_2)

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
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  puVar1 = PTR_PTR_1126bdc18;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112728e40;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bef42e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_112728e18;
  lVar4 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bef3620();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112728e1c;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112728e14;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar10 = lVar16;
  func_0x00010bef6440();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112728e20;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010befe120();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112728e24;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112728e3c;
  _objc_loadWeakRetained();
  lVar15 = param_1;
  func_0x00010c098e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1bc0(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar10,lVar12,lVar14,lVar15);
  _objc_release(lVar15);
  _objc_release(param_1);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar16);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10575e554; end: 10575e813; -[SCAdPrefetchServiceProvider _spotlightPrefetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10575e554(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bdc20;
  _objc_alloc();
  lVar3 = param_1 + _DAT_112728e40;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bef42e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112728e18;
  lVar5 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bef3620();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112728e1c;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112728e14;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + lVar17;
  _objc_loadWeakRetained(lVar17);
  lVar11 = lVar17;
  func_0x00010bef6440();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112728e20;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010befe120();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112728e24;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112728e3c;
  _objc_loadWeakRetained();
  lVar16 = param_1;
  func_0x00010c098e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1be0();
  _objc_release(lVar16);
  _objc_release(param_1);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar17);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10575e814; end: 10575e853;  */

void FUN_10575e814(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be021e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10575e854; end: 10575e927; -[SCAdPrefetchServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10575e854(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112728e48);
  _objc_destroyWeak(param_1 + _DAT_112728e44);
  _objc_destroyWeak(param_1 + _DAT_112728e3c);
  _objc_destroyWeak(param_1 + _DAT_112728e2c);
  _objc_destroyWeak(param_1 + _DAT_112728e28);
  _objc_destroyWeak(param_1 + _DAT_112728e40);
  _objc_destroyWeak(param_1 + _DAT_112728e38);
  _objc_destroyWeak(param_1 + _DAT_112728e30);
  _objc_destroyWeak(param_1 + _DAT_112728e34);
  _objc_destroyWeak(param_1 + _DAT_112728e24);
  _objc_destroyWeak(param_1 + _DAT_112728e18);
  _objc_destroyWeak(param_1 + _DAT_112728e20);
  _objc_destroyWeak(param_1 + _DAT_112728e14);
  _objc_destroyWeak(param_1 + _DAT_112728e1c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112728e4c);
  return;
}



/* Entry: 10575e928; end: 10575e977; -[SCAdUserStoriesAdPrefetcher initWithAdMediaFetcher:adConfigProvider:adConfigProviderV2:adWebViewPrefetchHintsManager:adWebViewAssetPrefetcher:adsPreferencesProvider:grapheneRegistry:friendStoriesDataCoordinator:discoverFeedDataFetcher:adViewingHistory:userTrackedLogger:storiesMetadataCoordinator:lifecycleTracker:adProvider:circumstanceEngine:bandwidthEstimator:] */

void FUN_10575e928(void)

{
  func_0x00010bff1900();
  return;
}



/* Entry: 10575e978; end: 10575edd3; -[SCAdUserStoriesAdPrefetcher initWithAdMediaFetcher:adConfigProvider:adConfigProviderV2:adWebViewPrefetchHintsManager:adWebViewAssetPrefetcher:adsPreferencesProvider:grapheneRegistry:friendStoriesDataCoordinator:discoverFeedDataFetcher:adPrefetchHelper:adPrefetchRuleTracker:adViewingHistory:userTrackedLogger:storiesMetadataCoordinator:lifecycleTracker:adProvider:circumstanceEngine:bandwidthEstimator:] */

undefined8 *
FUN_10575e978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined4 param_19,undefined4 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_18);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126ea138;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[1];
    puVar1[1] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[2];
    puVar1[2] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[3];
    puVar1[3] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[6];
    puVar1[6] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[7];
    puVar1[7] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_17;
    _objc_release(uVar2);
    if (puVar1[6] == 0) {
      puVar3 = PTR_PTR_1126bdc18;
      _objc_alloc();
      func_0x00010bff1bc0();
      uVar2 = puVar1[6];
      puVar1[6] = puVar3;
      _objc_release(uVar2);
    }
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    if (puVar1[7] == 0) {
      puVar3 = PTR_PTR_1126bdc28;
      _objc_alloc();
      func_0x00010bff1b20();
      uVar2 = puVar1[7];
      puVar1[7] = puVar3;
      _objc_release(uVar2);
    }
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_21);
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



/* Entry: 10575edd4; end: 10575eeab; -[SCAdUserStoriesAdPrefetcher startPrefetchAdsIfNeededFromSource:] */

void FUN_10575edd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = PTR_PTR_1126b8c98;
  func_0x00010bfb4b60();
  if ((int)puVar1 == 0) {
    if ((*(byte *)(param_1 + 0x69) & 1) != 0) {
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x69) = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = param_3;
  *(undefined2 *)(param_1 + 0x68) = 0x101;
  _objc_initWeak(auStack_28,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10575eeac; end: 10575eed7;  */

void FUN_10575eeac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddd240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10575eed8; end: 10575ef0b; -[SCAdUserStoriesAdPrefetcher recordTileTap] */

void FUN_10575eed8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7d940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10575ef0c; end: 10575ef97; -[SCAdUserStoriesAdPrefetcher prefetchUserStoriesOnNavBarTapFromSource:] */

void FUN_10575ef0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR_PTR_1126b8c98;
    func_0x00010bfb4b60();
    _objc_release(uVar1);
    if (((ulong)puVar3 & 1) == 0) {
      return;
    }
  }
  else {
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c24ffb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_startPrefetchAdsIfNeededFromSour_112671a10,param_3);
  return;
}



/* Entry: 10575ef98; end: 10575efab; -[SCAdUserStoriesAdPrefetcher prefetchAdOnTileTapFromSource:] */

void FUN_10575ef98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1071d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_prefetchAdOnTileTapFromSource_pr_11261f690,param_3,0,0,0xffffffffffffffff
             ,0xffffffffffffffff);
  return;
}



/* Entry: 10575efac; end: 10575f1e7; -[SCAdUserStoriesAdPrefetcher prefetchAdOnTileTapFromSource:precomputedFriendStoryIds:tappedFriendStoryId:interstitialInsertIndex:upcomingNonFriendStoryCount:] */

void FUN_10575efac(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) goto LAB_10575f194;
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010bfe6380();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf1f480();
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar3);
    if ((int)uVar6 != 0) goto LAB_10575f0c8;
  }
  else {
    uVar2 = uVar1;
    func_0x00010bf1f480();
    if ((uVar2 & 1) != 0) {
LAB_10575f0c8:
      _objc_initWeak(auStack_68,param_1);
      puVar3 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf60700();
      _objc_release(puVar3);
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      puStack_88 = puVar5;
      _objc_copyWeak(auStack_90,auStack_68);
      lStack_80 = param_3;
      _objc_retain(param_4);
      _objc_retain(param_5);
      uStack_78 = param_6;
      uStack_70 = param_7;
      func_0x00010c0f7fc0(uVar6);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_68);
    }
  }
  _objc_release(uVar1);
LAB_10575f194:
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10575f1e8; end: 10575f287;  */

void FUN_10575f1e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf60700();
  func_0x00010c067040(puVar1,param_2,uVar4,puVar3,&PTR____CFConstantStringClassReference_110dfc0b8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10575f288; end: 10575f61f; -[SCAdUserStoriesAdPrefetcher _performTileTapPrefetchFromSource:precomputedFriendStoryIds:tappedFriendStoryId:interstitialInsertIndex:upcomingNonFriendStoryCount:] */

void FUN_10575f288(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar5 = param_1;
  func_0x00010bdca1e0();
  if (*(byte *)(param_1 + 0x6a) != 1 || (uint)lVar5 != 0) {
    if (((uint)*(byte *)(param_1 + 0x6a) & (uint)lVar5) == 1) {
      puVar1 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf18ba0();
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95660();
      _objc_release(puVar1);
    }
    *(undefined1 *)(param_1 + 0x6a) = 1;
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf17be0();
    _objc_release(puVar1);
    if (*(long *)(param_1 + 0x30) == 0) {
      puVar1 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf94200();
      _objc_release(puVar1);
      *(undefined1 *)(param_1 + 0x6a) = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010bf1f480();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf1f480();
      _objc_release(uVar3);
      uVar3 = 4;
      if (param_3 != 2) {
        uVar3 = 6;
      }
      if ((int)uVar7 == 0) {
        uVar3 = 0;
      }
      lVar5 = *(long *)(param_1 + 0x78);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      if (((int)uVar4 == 0) || (lVar5 == 0)) {
        func_0x00010be17b40(param_1);
      }
      else {
        _objc_initWeak(auStack_68,param_1);
        if (param_4 == 0) {
          puVar1 = PTR_PTR_1126ae4e8;
          func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11c9a0();
          _objc_release(puVar1);
          puVar1 = PTR_PTR_1126ae4e8;
          func_0x00010c22b6a0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar1;
          func_0x00010bf17b60();
          _objc_release(puVar1);
          uVar7 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c269d40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          puStack_98 = puVar6;
          _objc_copyWeak(auStack_a0,auStack_68);
          puStack_90 = puVar2;
          _objc_retain(lVar5);
          uStack_88 = uVar3;
          lStack_80 = param_3;
          _objc_retain(param_5);
          uStack_78 = param_6;
          uStack_70 = param_7;
          func_0x00010bfa9a40(uVar7);
          _objc_release(uVar7);
          _objc_release(param_5);
          _objc_release(lVar5);
          _objc_destroyWeak(auStack_a0);
        }
        else {
          puVar1 = PTR_PTR_1126ae4e8;
          func_0x00010c22b6a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11c9a0();
          _objc_release(puVar1);
          func_0x00010bde8a20(param_1);
        }
        _objc_destroyWeak(auStack_68);
      }
      _objc_release(lVar5);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10575f620; end: 10575f71f;  */

void FUN_10575f620(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94200();
  }
  else {
    puVar2 = param_2;
    func_0x0001006372a4(param_2,&PTR___NSConcreteGlobalBlock_1108afb18);
    puVar1 = puVar2;
    func_0x000100504554();
    _objc_release(puVar2);
    func_0x00010bde8a20(param_1);
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10575f720; end: 10575f7ab;  */

bool FUN_10575f720(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bfddf20();
  if ((((int)uVar2 == 0) || (uVar2 = param_2, func_0x00010c07fc80(), (uVar2 & 1) != 0)) ||
     (uVar2 = param_2, func_0x00010c07fde0(), (uVar2 & 1) != 0)) {
    bVar1 = false;
  }
  else {
    uVar2 = param_2;
    func_0x00010c259cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08fa60();
    bVar1 = uVar3 != 0;
    _objc_release(uVar2);
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 10575f7ac; end: 10575f7b3;  */

void FUN_10575f7ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storyId_112674158);
  return;
}



/* Entry: 10575f7b4; end: 10575fa47; -[SCAdUserStoriesAdPrefetcher _continueTileTapPrefetchWithFriendStoryIds:coordinator:adViewLocation:source:tappedFriendStoryId:interstitialInsertIndex:upcomingNonFriendStoryCount:cookie:] */

void FUN_10575f7b4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_initWeak(auStack_70,param_1);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10575fa48;
    puStack_b0 = &UNK_1108afba8;
    puVar5 = auStack_a0;
    _objc_copyWeak(puVar5,auStack_70);
    uStack_98 = param_10;
    uStack_90 = param_5;
    uStack_88 = param_6;
    _objc_retain(param_7);
    uStack_78 = param_9;
    lStack_a8 = param_7;
    uStack_80 = param_8;
    func_0x00010c0f7fc0(uVar6);
    lVar1 = lStack_a8;
  }
  else {
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf17b60();
    _objc_release(puVar2);
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_10575fae8;
    puStack_118 = &UNK_1108afc08;
    puVar5 = auStack_100;
    puStack_f8 = puVar3;
    _objc_copyWeak(puVar5,auStack_70);
    uStack_f0 = param_10;
    _objc_retain(param_3);
    lStack_110 = param_3;
    uStack_e8 = param_5;
    uStack_e0 = param_6;
    _objc_retain(param_7);
    uStack_d0 = param_9;
    ppuVar4 = &puStack_130;
    lStack_108 = param_7;
    uStack_d8 = param_8;
    _objc_retainBlock(ppuVar4);
    lVar1 = param_1;
    func_0x00010be77ce0();
    if ((int)lVar1 == 0) {
      func_0x00010c25b3a0(param_4);
    }
    else {
      func_0x00010be77d00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25b3a0(param_4);
      _objc_release(param_1);
    }
    _objc_release(ppuVar4);
    _objc_release(lStack_108);
    lVar1 = lStack_110;
  }
  _objc_release(lVar1);
  _objc_destroyWeak(puVar5);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10575fa48; end: 10575fae7;  */

void FUN_10575fa48(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94200();
    _objc_release(puVar2);
  }
  else {
    func_0x00010be17b20(lVar1,param_2,PTR____NSArray0__struct_11034ab48,
                        PTR____NSDictionary0__struct_11034ab58,*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                        *(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10575fae8; end: 10575fca7;  */

void FUN_10575fae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf60700();
  _objc_release(puVar1);
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94200();
    _objc_release(puVar1);
  }
  else {
    uVar6 = *(undefined8 *)(lVar3 + 0x58);
    puStack_80 = puVar2;
    _objc_copyWeak(auStack_88,param_1 + 0x30);
    uStack_78 = *(undefined8 *)(param_1 + 0x40);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    _objc_retain(param_2);
    uStack_68 = *(undefined8 *)(param_1 + 0x50);
    uStack_70 = *(undefined8 *)(param_1 + 0x48);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uStack_58 = *(undefined8 *)(param_1 + 0x60);
    uStack_60 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c0f7fc0(uVar6);
    _objc_release(uVar5);
    _objc_release(param_2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10575fca8; end: 10575fd9b;  */

void FUN_10575fca8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf60700();
  func_0x00010c067040(puVar1,param_2,uVar5,puVar3,&PTR____CFConstantStringClassReference_110dfc1b8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94200();
    _objc_release(puVar1);
  }
  else {
    func_0x00010be17b20(lVar4,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x50),
                        *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                        *(undefined8 *)(param_1 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10575fd9c; end: 10575fde3; -[SCAdUserStoriesAdPrefetcher _prepTrimEnabled] */

undefined8 FUN_10575fd9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10575fde4; end: 105760247; -[SCAdUserStoriesAdPrefetcher _prepTrimmedSnapsInfoFetchStoryIdsWithRankedStoryIds:source:tappedFriendStoryId:interstitialInsertIndex:upcomingNonFriendStoryCount:] */

void FUN_10575fde4(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c2180();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010575fff4(param_3,param_5,param_6,
                      param_7 & ((long)param_7 >> 0x3f ^ 0xffffffffffffffffU));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  if (0 < (long)uVar2) {
    uVar9 = uVar1;
    func_0x00010bf529e0();
    uVar8 = uVar2;
    if (uVar9 <= uVar2) {
      uVar8 = uVar9;
    }
    if (uVar9 != 0) {
      uVar9 = 0;
      do {
        uVar5 = uVar1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar7 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar6);
        if (((uVar7 & 1) != 0) && (puVar6 = puVar4, func_0x00010bf4b900(), ((ulong)puVar6 & 1) == 0)
           ) {
          func_0x00010befa120(puVar4);
          func_0x00010befa120(puVar3);
        }
        _objc_release(uVar5);
        uVar9 = uVar9 + 1;
      } while (uVar8 != uVar9);
    }
  }
  if (param_4 != 2) {
    if ((long)uVar2 < 2) {
      uVar2 = 1;
    }
    uVar8 = param_3;
    func_0x00010bf529e0();
    if (uVar8 <= uVar2) {
      uVar2 = uVar8;
    }
    if (uVar8 != 0) {
      uVar8 = 0;
      do {
        uVar9 = param_3;
        func_0x00010c0dfd40(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010bf4b900();
        if (((ulong)puVar6 & 1) == 0) {
          func_0x00010befa120(puVar4);
          func_0x00010befa120(puVar3);
        }
        _objc_release(uVar9);
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
  }
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105760248; end: 105760843; -[SCAdUserStoriesAdPrefetcher _fireTileTapEarlyFetchOnPerformerWithRankedStoryIds:snapPlaybackInfoMap:adViewLocation:source:tappedFriendStoryId:interstitialInsertIndex:upcomingNonFriendStoryCount:cookie:] */

void FUN_105760248(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar2;
  func_0x00010c0c2180();
  _objc_release(uVar2);
  uVar3 = param_3;
  func_0x00010575fff4(param_3,param_7,param_8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar2 = uVar16;
  if ((long)uVar16 < 2) {
    uVar2 = 1;
  }
  if (0 < (long)uVar16) {
    uVar15 = uVar3;
    func_0x00010bf529e0();
    if (uVar15 <= uVar16) {
      uVar16 = uVar15;
    }
    if (uVar15 != 0) {
      uVar15 = 0;
      do {
        uVar4 = uVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar6 = uVar4;
        _objc_opt_isKindOfClass(uVar4,puVar5);
        if ((uVar6 & 1) != 0) {
          lVar7 = param_4;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010bef2d20();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010bef3aa0();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010c08fa60();
          _objc_release(lVar10);
          _objc_release(lVar9);
          _objc_release(lVar8);
          if (lVar11 != 0) {
            lVar8 = lVar7;
            func_0x00010bfb1920(lVar7);
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar8;
            func_0x00010bef2d20();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar9;
            func_0x00010bef3aa0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1);
            _objc_release(lVar10);
            _objc_release(lVar9);
            _objc_release(lVar8);
          }
          _objc_release(lVar7);
        }
        _objc_release(uVar4);
        uVar15 = uVar15 + 1;
      } while (uVar16 != uVar15);
    }
  }
  if (param_6 == 2) {
    uVar16 = 0;
  }
  else {
    uVar16 = param_3;
    func_0x0001057605e4(param_3,param_4,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf529e0();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126bdc30;
  _objc_alloc(PTR_PTR_1126bdc30);
  func_0x00010c059460();
  puVar14 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar14);
  func_0x00010bf529e0();
  func_0x00010be17b40(param_1);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar5);
  _objc_release(uVar16);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105760844; end: 105760a7b; -[SCAdUserStoriesAdPrefetcher _fireTileTapEarlyFetchWithAdOrganicSignals:upcomingStoriesContext:engagement:adViewLocation:cookie:] */

void FUN_105760844(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  lVar2 = param_1;
  func_0x00010becabc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef4240();
  _objc_release(lVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc0000000;
  pcStack_88 = FUN_105760a7c;
  puStack_80 = &UNK_1108afc38;
  ppuVar4 = &puStack_98;
  uStack_78 = param_7;
  lStack_70 = lVar3;
  _objc_retainBlock();
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105760b54;
  puStack_a8 = &UNK_1108afc58;
  _objc_copyWeak(auStack_a0,auStack_68);
  ppuVar5 = &puStack_c0;
  _objc_retainBlock();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  lVar2 = param_1;
  if (param_4 == 0 && param_5 == 0) {
    func_0x00010becabc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8bec0(uVar7);
  }
  else {
    func_0x00010becabc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8bec0(uVar7);
  }
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(ppuVar5);
  _objc_destroyWeak(auStack_a0);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105760a7c; end: 105760b53;  */

void FUN_105760a7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = PTR_PTR_1126b8cd8;
  func_0x00010c25d840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bf94200(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105760b54; end: 105760c3b;  */

void FUN_105760b54(long param_1,undefined1 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x6a) = 0;
    uVar2 = *(undefined8 *)(lVar1 + 0x50);
    _objc_copyWeak(auStack_50,param_1 + 0x20);
    _objc_retain(param_3);
    uStack_48 = param_2;
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105760c3c; end: 105760c73;  */

void FUN_105760c3c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be76f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105760c74; end: 105760cbb; -[SCAdUserStoriesAdPrefetcher _allowConcurrentTileTapPrefetchEnabled] */

undefined8 FUN_105760c74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105760cbc; end: 105760e27; -[SCAdUserStoriesAdPrefetcher _performPageOpenPrefetch] */

void FUN_105760cbc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 auStack_48 [8];
  
  if (((*(byte *)(param_1 + 0x6b) & 1) == 0) && (*(long *)(param_1 + 0x30) != 0)) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f480();
    _objc_release(uVar1);
    uVar3 = *(ulong *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf1f480();
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f480();
    _objc_release(uVar4);
    if (((uVar2 & 1) != 0) || (((uVar1 & 1) != 0 || ((int)uVar5 != 0)))) {
      *(undefined1 *)(param_1 + 0x6b) = 1;
      _objc_initWeak(auStack_48,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      _objc_copyWeak(auStack_58,auStack_48);
      uStack_50 = (undefined1)uVar2;
      uStack_4f = (undefined1)uVar1;
      uStack_4e = (undefined1)uVar5;
      func_0x00010c0f7fc0(uVar4);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_48);
    }
  }
  return;
}



/* Entry: 105760e28; end: 105760e63;  */

void FUN_105760e28(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be17a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105760e64; end: 1057612e3; -[SCAdUserStoriesAdPrefetcher _firePageOpenPrefetchRequestsWithFUS:discover:spotlight:] */

void FUN_105760e64(long param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  int iVar11;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  iVar11 = (int)uVar6;
  if (param_3 != 0) {
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf17b60();
    _objc_release(puVar2);
    puStack_a0 = puVar10;
    uStack_98 = 0xc0000000;
    pcStack_90 = FUN_1057612e4;
    puStack_88 = &UNK_1108afcb8;
    ppuVar4 = &puStack_a0;
    puStack_80 = puVar3;
    _objc_retainBlock(ppuVar4);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    lVar5 = param_1;
    func_0x00010becabc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    if (iVar11 == 0) {
      func_0x00010c1072c0(uVar1);
    }
    else {
      func_0x00010c1072a0();
    }
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(ppuVar4);
  }
  puStack_118 = puVar10;
  if (param_4 != 0) {
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf17b60();
    _objc_release(puVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110dfbff8;
    func_0x0001063fa06c(&PTR____CFConstantStringClassReference_110dfbff8,1,uVar6,
                        *(undefined8 *)(param_1 + 0x28),5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puStack_c8 = puVar10;
    uStack_c0 = 0xc0000000;
    uStack_b8 = 0x105761324;
    puStack_b0 = &UNK_1108afcb8;
    ppuVar7 = &puStack_c8;
    puStack_a8 = puVar3;
    _objc_retainBlock(ppuVar7);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    if (iVar11 == 0) {
      func_0x00010c1072c0(uVar1);
    }
    else {
      func_0x00010c1072a0();
    }
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf17b60();
    _objc_release(puVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR____CFConstantStringClassReference_110dfbff8;
    func_0x0001063fa06c(&PTR____CFConstantStringClassReference_110dfbff8,2,uVar6,
                        *(undefined8 *)(param_1 + 0x28),5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puStack_f0 = puVar10;
    uStack_e8 = 0xc0000000;
    uStack_e0 = 0x105761364;
    puStack_d8 = &UNK_1108afcb8;
    ppuVar9 = &puStack_f0;
    puStack_d0 = puVar3;
    _objc_retainBlock(ppuVar9);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    if (iVar11 == 0) {
      func_0x00010c1072c0(uVar1);
    }
    else {
      func_0x00010c1072a0();
    }
    _objc_release(uVar6);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar4);
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  }
  if (param_5 != 0) {
    puVar10 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar10;
    func_0x00010bf17b60();
    _objc_release(puVar10);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110dfc018;
    func_0x0001063fa06c(&PTR____CFConstantStringClassReference_110dfc018,0x16,uVar6,
                        *(undefined8 *)(param_1 + 0x28),6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uStack_110 = 0xc0000000;
    uStack_108 = 0x1057613a4;
    puStack_100 = &UNK_1108afcb8;
    ppuVar7 = &puStack_118;
    puStack_f8 = puVar2;
    _objc_retainBlock(ppuVar7);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    if (iVar11 == 0) {
      func_0x00010c1072c0(uVar1);
    }
    else {
      func_0x00010c1072a0();
    }
    _objc_release(uVar6);
    _objc_release(ppuVar7);
    _objc_release(ppuVar4);
  }
  return;
}



/* Entry: 1057612e4; end: 1057613e3;  */

void FUN_1057612e4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1057613e4; end: 10576147b; -[SCAdUserStoriesAdPrefetcher didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_1057613e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb64f8);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb6538);
    if ((int)uVar1 == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb6518);
      if ((int)uVar1 != 0) {
        *(undefined1 *)(param_1 + 0x68) = 0;
        *(undefined1 *)(param_1 + 0x6b) = 0;
      }
    }
    else {
      func_0x00010c24ffa0(param_1,param_2,1);
    }
  }
  else {
    func_0x00010be722c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10576147c; end: 105761543; -[SCAdUserStoriesAdPrefetcher _checkAdPrefetchPrerequisite] */

void FUN_10576147c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bfa9a40(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}


