/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1064cb46c; end: 1064cb593;  */

bool FUN_1064cb46c(double param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  bool bVar5;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_5 & 1) == 0) {
    lVar1 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067fc0();
    _objc_release(lVar1);
    bVar5 = false;
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(puVar3);
      lVar1 = param_3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0b4fe0();
      if (lVar2 < (long)(param_1 * 1000.0)) {
        lVar2 = param_4;
        func_0x00010c269d40(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010c0b4fe0();
        bVar5 = (long)(param_1 * 1000.0) < lVar4;
        _objc_release(lVar2);
      }
      else {
        bVar5 = false;
      }
      _objc_release(lVar1);
    }
  }
  else {
    bVar5 = false;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return bVar5;
}



/* Entry: 1064cb594; end: 1064cbbff;  */

void FUN_1064cb594(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined **ppuVar8;
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
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar2 = param_1;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bef0e60();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0 && uVar3 == 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110e52798;
    _objc_retain(&PTR____CFConstantStringClassReference_110e52798);
    goto LAB_1064cbb70;
  }
  uVar4 = param_1;
  func_0x000107cfb628(param_1,param_4,param_5);
  if ((uVar3 == 0) && ((int)uVar4 != 0)) {
    uVar5 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf1f3c0();
    _objc_release(uVar5);
    if ((int)uVar6 == 0) goto LAB_1064cb6b4;
    ppuVar8 = &PTR____CFConstantStringClassReference_110e52798;
LAB_1064cbb18:
    _objc_retain(ppuVar8);
    goto LAB_1064cbb70;
  }
LAB_1064cb6b4:
  func_0x000100bf39e4();
  uVar4 = param_1;
  func_0x000107cfb350();
  if ((int)uVar4 != 0) {
    uVar4 = uVar2;
    func_0x00010c0cb940();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x000107cfef1c();
    _objc_release(uVar4);
    if ((uVar7 & 1) == 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110e527b8;
      goto LAB_1064cbb18;
    }
  }
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1064cbe08;
  uStack_88 = 0x1064cbe18;
  uStack_80 = 0;
  uVar4 = uVar3;
  func_0x000100bf4a30();
  uVar7 = uVar2;
  if ((int)uVar4 == 0) {
    uVar4 = uVar2;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar1 = puStack_a0;
    if (uVar4 == 0) {
      _objc_retain(&PTR____CFConstantStringClassReference_110e52798);
      uVar7 = puVar1[5];
      puVar1[5] = &PTR____CFConstantStringClassReference_110e52798;
      goto LAB_1064cbb44;
    }
    if (param_3 == 0) {
LAB_1064cb86c:
      uVar4 = uVar2;
      func_0x00010c0cb340();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar2);
      _objc_retain(param_1);
      _objc_retain(param_2);
      _objc_retain(param_7);
      _objc_retain(param_8);
      _objc_retain(uVar2);
      _objc_retain(uVar2);
      _objc_retain(uVar2);
      _objc_retain(uVar2);
      _objc_retain(param_2);
      _objc_retain(uVar2);
      _objc_retain(param_2);
      _objc_retain(uVar2);
      _objc_retain(param_2);
      func_0x00010c0bfe20(uVar4);
      _objc_release(uVar4);
      _objc_release(param_2);
      _objc_release(uVar2);
      _objc_release(param_2);
      _objc_release(uVar2);
      _objc_release(param_2);
      _objc_release(uVar2);
      _objc_release(uVar2);
      _objc_release(uVar2);
      _objc_release(uVar2);
      _objc_release(param_8);
      _objc_release(param_7);
      _objc_release(param_2);
      _objc_release(param_1);
      goto LAB_1064cbb44;
    }
    func_0x00010c0c0200(param_3);
    ppuVar8 = (undefined **)puStack_a0[5];
    if (ppuVar8 == (undefined **)0x0) goto LAB_1064cb86c;
  }
  else {
    uVar4 = uVar3;
    func_0x00010c10ac80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar2);
    func_0x00010c0bcd20(uVar4);
    _objc_release(uVar4);
LAB_1064cbb44:
    _objc_release(uVar7);
    ppuVar8 = (undefined **)puStack_a0[5];
  }
  _objc_retain(ppuVar8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
LAB_1064cbb70:
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return;
}



/* Entry: 1064cbc00; end: 1064cbd5b; -[SCFriendsFeedIconGenerator iconDescriptorForFriendsFeedItem:staleContent:birthday:hasConsumableContent:] */

void FUN_1064cbc00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000100bf39e4();
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  FUN_1064cb594(param_3,param_5,param_4,*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),puVar1,
                *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f3c0();
  uVar5 = uVar2;
  FUN_1064ce84c(uVar2,uVar4,puVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40),
                param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1064cbd5c; end: 1064cbd9b;  */

void FUN_1064cbd5c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar3 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  FUN_1064cb46c(uVar2,*(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x38),
                *(undefined1 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 1064cbd9c; end: 1064cbe07; -[SCFriendsFeedIconGenerator .cxx_destruct] */

void FUN_1064cbd9c(long param_1)

{
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



/* Entry: 1064cbe08; end: 1064cbe23;  */

void FUN_1064cbe08(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1064cbe24; end: 1064cbea3;  */

void FUN_1064cbe24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107cfdba8();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110e52838);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined ***)(lVar3 + 0x28) = &PTR____CFConstantStringClassReference_110e52838;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1064cbea4; end: 1064cbedf;  */

void FUN_1064cbea4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(&PTR____CFConstantStringClassReference_110e52fb8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110e52fb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064cbee0; end: 1064cbee3;  */

void FUN_1064cbee0(void)

{
  return;
}



/* Entry: 1064cbee4; end: 1064cbf5b;  */

void FUN_1064cbee4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(&PTR____CFConstantStringClassReference_110e52f78);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110e52f78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064cbf5c; end: 1064cc493;  */

void FUN_1064cbf5c(long param_1,ulong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cb940();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x000107cff274();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cb940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  uVar4 = *(ulong *)(param_1 + 0x28);
  func_0x000100bf39e4();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf866a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  FUN_1064cc494();
  _objc_release(uVar5);
  uVar12 = param_2;
  func_0x00010c0757e0();
  uVar8 = param_2;
  if ((int)uVar12 == 0) {
joined_r0x0001064cc0cc:
    if ((int)uVar2 == 0) {
      if ((int)uVar13 == 0) {
LAB_1064cc248:
        uVar8 = *(ulong *)(param_1 + 0x20);
        func_0x00010c0cb940();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = param_2;
        func_0x00010c2420e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar12;
        func_0x00010bfdc680();
        _objc_retain(uVar8);
        uVar6 = uVar8;
        func_0x00010c08fa60();
        if ((uVar6 == 0) || (uVar6 = uVar8, func_0x00010c0720c0(), (uVar6 & 1) != 0)) {
          uVar13 = 0;
        }
        else {
          if ((int)uVar4 == 0) {
            if (lRam00000001136c3918 != -1) {
              puVar14 = (undefined8 *)0x1136c3910;
              ppuVar9 = &PTR___NSConcreteGlobalBlock_1109266c8;
              goto LAB_1064cc488;
            }
            puVar14 = (undefined8 *)0x1136c3910;
          }
          else if (lRam00000001136c3908 == -1) {
            puVar14 = (undefined8 *)0x1136c3900;
          }
          else {
            puVar14 = (undefined8 *)0x1136c3900;
            ppuVar9 = &PTR___NSConcreteGlobalBlock_1109266a8;
LAB_1064cc488:
            func_0x00010002a2fc(puVar14 + 1,ppuVar9);
          }
          uVar13 = *puVar14;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(uVar8);
        lVar11 = *(long *)(*(long *)(param_1 + 0x48) + 8);
        uVar2 = *(undefined8 *)(lVar11 + 0x28);
        *(undefined8 *)(lVar11 + 0x28) = uVar13;
        _objc_release(uVar2);
        goto LAB_1064cc3a4;
      }
      uVar12 = param_2;
      func_0x00010bf419a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar12;
      func_0x00010c281e40();
      _objc_release(uVar12);
      if ((long)uVar6 < 1 || (uVar4 & 1) != 0) {
        if ((int)uVar3 == 0) {
          uVar2 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar2;
          func_0x00010bf1f3c0();
          _objc_release(uVar2);
          if ((int)uVar13 == 0) goto LAB_1064cc248;
          lVar10 = *(long *)(param_1 + 0x40);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010c067fc0();
          _objc_release(lVar10);
          if (lVar11 == 2) {
            func_0x00010c2420e0();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar8;
            func_0x00010bfdc680();
            bVar1 = (int)uVar12 == 0;
            lVar10 = 0x68;
            lVar11 = 0x60;
          }
          else {
            if (lVar11 != 1) goto LAB_1064cc3b4;
            func_0x00010c2420e0();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar8;
            func_0x00010bfdc680();
            bVar1 = (int)uVar12 == 0;
            lVar10 = 0x58;
            lVar11 = 0x50;
          }
        }
        else {
          func_0x00010c2420e0();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar8;
          func_0x00010bfdc680();
          bVar1 = (int)uVar12 == 0;
          lVar10 = 0x48;
          lVar11 = 0x40;
        }
      }
      else if ((int)uVar3 == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar2;
        func_0x00010bf1f3c0();
        _objc_release(uVar2);
        if ((int)uVar13 == 0) {
          func_0x00010c2420e0();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar8;
          func_0x00010bfdc680();
          bVar1 = (int)uVar12 == 0;
          lVar10 = 0x120;
          lVar11 = 0x128;
        }
        else {
          lVar10 = *(long *)(param_1 + 0x40);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010c067fc0();
          _objc_release(lVar10);
          if (lVar11 == 2) {
            func_0x00010c2420e0();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar8;
            func_0x00010bfdc680();
            bVar1 = (int)uVar12 == 0;
            lVar10 = 0x150;
            lVar11 = 0x158;
          }
          else {
            if (lVar11 != 1) goto LAB_1064cc3b4;
            func_0x00010c2420e0();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar8;
            func_0x00010bfdc680();
            bVar1 = (int)uVar12 == 0;
            lVar10 = 0x140;
            lVar11 = 0x148;
          }
        }
      }
      else {
        func_0x00010c2420e0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar8;
        func_0x00010bfdc680();
        bVar1 = (int)uVar12 == 0;
        lVar10 = 0x130;
        lVar11 = 0x138;
      }
    }
    else {
      func_0x00010c2420e0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar8;
      func_0x00010bfdc680();
      bVar1 = (int)uVar12 == 0;
      lVar10 = 0x118;
      lVar11 = 0xc0;
    }
    if (bVar1) {
      lVar11 = lVar10;
    }
    uVar13 = *(undefined8 *)((long)&PTR_PTR_110927868 + lVar11);
    lVar11 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    _objc_retain(uVar13);
    uVar12 = *(ulong *)(lVar11 + 0x28);
    *(undefined8 *)(lVar11 + 0x28) = uVar13;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x20);
    func_0x00010c0cb940();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar6;
    func_0x00010c0720c0();
    if ((uVar12 & 1) == 0) {
      _objc_release(uVar6);
      goto joined_r0x0001064cc0cc;
    }
    uVar12 = param_2;
    func_0x00010c281c20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar12;
    func_0x00010c08fa60();
    _objc_release(uVar12);
    _objc_release(uVar6);
    if (uVar7 != 0) goto joined_r0x0001064cc0cc;
    func_0x00010c2420e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar8;
    func_0x00010bfdc680();
    lVar11 = 0xa8;
    if ((int)uVar12 == 0) {
      lVar11 = 0x100;
    }
    uVar13 = *(undefined8 *)((long)&PTR_PTR_110927868 + lVar11);
    _objc_retain(uVar13);
    lVar11 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    uVar12 = *(ulong *)(lVar11 + 0x28);
    *(undefined8 *)(lVar11 + 0x28) = uVar13;
  }
LAB_1064cc3a4:
  _objc_release(uVar12);
  _objc_release(uVar8);
LAB_1064cc3b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064cc494; end: 1064cc7e3;  */

undefined * FUN_1064cc494(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  if ((param_3 & 1) == 0) {
    puVar1 = (undefined *)0x0;
    if ((param_1 != 0) && (param_2 != 0)) {
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010c0702e0(PTR__OBJC_CLASS___NSDate_1126ae770);
    }
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 1064cc7e4; end: 1064cc877;  */

void FUN_1064cc7e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0cb940();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c08fa60();
  uVar2 = 0;
  if (lVar4 != 0) {
    if (lRam00000001136c3988 != -1) {
      func_0x00010002a2fc(0x1136c3988,&PTR___NSConcreteGlobalBlock_1109267a8);
    }
    uVar2 = uRam00000001136c3980;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064cc878; end: 1064cced3;  */

void FUN_1064cc878(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  undefined8 *puStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined8 *puStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined8 *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 *puStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  puStack_1a8 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  puStack_180 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  puStack_1f8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  puStack_220 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x2020000000;
  uStack_b8 = 0;
  puStack_248 = &uStack_f0;
  uStack_f0 = 0;
  uStack_e0 = 0x2020000000;
  uStack_d8 = 0;
  puStack_178 = &uStack_110;
  uStack_110 = 0;
  uStack_100 = 0x2020000000;
  uStack_f8 = 0;
  puStack_298 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x2020000000;
  uStack_118 = 0;
  puStack_2c0 = &uStack_150;
  uStack_150 = 0;
  uStack_140 = 0x2020000000;
  uStack_138 = 0;
  puStack_310 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x2020000000;
  uStack_158 = 0;
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  uStack_190 = 0x1064ccee0;
  puStack_188 = &UNK_1108d77a0;
  puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0xc2000000;
  uStack_1b8 = 0x1064ccf04;
  puStack_1b0 = &UNK_1108431e0;
  puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e8 = 0xc2000000;
  uStack_1e0 = 0x1064ccf18;
  puStack_1d8 = &UNK_110847180;
  puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_210 = 0xc2000000;
  uStack_208 = 0x1064ccf2c;
  puStack_200 = &UNK_110847180;
  puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_238 = 0xc2000000;
  uStack_230 = 0x1064ccf44;
  puStack_228 = &UNK_110868438;
  puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_260 = 0xc2000000;
  uStack_258 = 0x1064ccf58;
  puStack_250 = &UNK_110847658;
  puStack_290 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_288 = 0xc2000000;
  uStack_280 = 0x1064ccf6c;
  puStack_278 = &UNK_110847180;
  puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2b0 = 0xc2000000;
  uStack_2a8 = 0x1064ccf80;
  puStack_2a0 = &UNK_110847180;
  puStack_2e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2d8 = 0xc2000000;
  pcStack_2d0 = FUN_1064ccf94;
  puStack_2c8 = &UNK_1108d7530;
  puStack_308 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_300 = 0xc2000000;
  uStack_2f8 = 0x1064cd034;
  puStack_2f0 = &UNK_1108d74e0;
  puStack_330 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_328 = 0xc2000000;
  uStack_320 = 0x1064cd048;
  puStack_318 = &UNK_1108d74e0;
  puStack_2e8 = puStack_310;
  puStack_270 = puStack_298;
  puStack_1d0 = puStack_1f8;
  puStack_168 = puStack_310;
  puStack_148 = puStack_2c0;
  puStack_128 = puStack_298;
  puStack_108 = puStack_178;
  puStack_e8 = puStack_248;
  puStack_c8 = puStack_220;
  puStack_a8 = puStack_1f8;
  puStack_88 = puStack_180;
  puStack_68 = puStack_1a8;
  func_0x00010c0bc660(param_2,&UNK_1108d77a0,&PTR___NSConcreteGlobalBlock_110926568,
                      &PTR___NSConcreteGlobalBlock_110926588,&PTR___NSConcreteGlobalBlock_1109265a8,
                      &puStack_1a0,&puStack_1c8,&puStack_1f0,&puStack_218,
                      &PTR___NSConcreteGlobalBlock_1109265c8,&puStack_240,&puStack_268,&puStack_290,
                      &puStack_2b8,&puStack_2e0,&puStack_308,&puStack_330);
  ppuVar10 = &PTR_PTR_110ca9880;
  if (*(char *)(puStack_68 + 3) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0cb940();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar9 == 0) goto LAB_1064ccb30;
    ppuVar10 = &PTR____CFConstantStringClassReference_110e52e98;
  }
  else {
LAB_1064ccb30:
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c0cb940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if ((uVar3 & 1) == 0) {
      ppuVar10 = *(undefined ***)(param_1 + 0x20);
      func_0x00010c0cb940();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar10;
      func_0x00010c0720c0();
      if (((ulong)ppuVar4 & 1) != 0) goto LAB_1064ccb7c;
      _objc_release(ppuVar10);
      _objc_release(uVar2);
    }
    else {
LAB_1064ccb7c:
      uVar5 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf866a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      FUN_1064cc494();
      _objc_release(uVar5);
      if ((uVar3 & 1) == 0) {
        _objc_release(ppuVar10);
        _objc_release(uVar2);
        if ((uVar6 & 1) != 0) goto LAB_1064ccbd0;
      }
      else {
        _objc_release(uVar2);
        if ((int)uVar6 != 0) {
LAB_1064ccbd0:
          ppuVar10 = &PTR____CFConstantStringClassReference_110e52858;
          goto LAB_1064ccc74;
        }
      }
    }
    if (*(char *)(puStack_a8 + 3) == '\x01') {
      lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      *(undefined8 *)(lVar8 + 0x28) = 0;
      goto LAB_1064ccc8c;
    }
    if (*(char *)(puStack_88 + 3) == '\x01') {
      lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      if (*(char *)(puStack_108 + 3) == '\x01') {
        ppuVar10 = &PTR____CFConstantStringClassReference_110e52eb8;
      }
      else {
        ppuVar10 = &PTR____CFConstantStringClassReference_110e52ed8;
      }
      _objc_retain(ppuVar10);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      *(undefined ***)(lVar8 + 0x28) = ppuVar10;
      goto LAB_1064ccc8c;
    }
    if (((*(byte *)(puStack_c8 + 3) & 1) == 0) && (*(char *)(puStack_148 + 3) != '\x01')) {
      if (*(char *)(puStack_e8 + 3) != '\x01') {
        if (*(char *)(puStack_128 + 3) == '\x01') {
          uVar1 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c0cb940();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar1;
          func_0x000107cff274();
          _objc_release(uVar1);
          lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
          if ((int)uVar9 == 0) {
            ppuVar10 = &PTR____CFConstantStringClassReference_110e52f38;
          }
          else {
            ppuVar10 = &PTR____CFConstantStringClassReference_110e52f58;
          }
        }
        else {
          uVar9 = *(undefined8 *)(param_1 + 0x20);
          if (*(char *)(puStack_168 + 3) != '\x01') {
            func_0x00010c0cb940();
            _objc_retainAutoreleasedReturnValue();
            uVar1 = uVar9;
            FUN_1064cd05c();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
            uVar7 = *(undefined8 *)(lVar8 + 0x28);
            *(undefined8 *)(lVar8 + 0x28) = uVar1;
            _objc_release(uVar7);
            goto LAB_1064ccc8c;
          }
          func_0x00010c0cb940();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar9;
          func_0x000107cff274();
          _objc_release(uVar9);
          lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
          if ((int)uVar1 == 0) {
            ppuVar10 = &PTR____CFConstantStringClassReference_110e52ff8;
          }
          else {
            ppuVar10 = &PTR____CFConstantStringClassReference_110e52fd8;
          }
        }
        _objc_retain(ppuVar10);
        uVar9 = *(undefined8 *)(lVar8 + 0x28);
        *(undefined ***)(lVar8 + 0x28) = ppuVar10;
        goto LAB_1064ccc8c;
      }
      ppuVar10 = &PTR____CFConstantStringClassReference_110e52f18;
    }
    else {
      ppuVar10 = &PTR____CFConstantStringClassReference_110e52ef8;
    }
  }
LAB_1064ccc74:
  lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain(ppuVar10);
  uVar9 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined ***)(lVar8 + 0x28) = ppuVar10;
LAB_1064ccc8c:
  _objc_release(uVar9);
  __Block_object_dispose(&uStack_170,8);
  __Block_object_dispose(&uStack_150,8);
  __Block_object_dispose(&uStack_130,8);
  __Block_object_dispose(&uStack_110,8);
  __Block_object_dispose(&uStack_f0,8);
  __Block_object_dispose(&uStack_d0,8);
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_2);
  return;
}



/* Entry: 1064cced4; end: 1064ccf93;  */

void FUN_1064cced4(void)

{
  return;
}



/* Entry: 1064ccf94; end: 1064cd00b;  */

void FUN_1064ccf94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1064cd00c;
  puStack_20 = &UNK_110868438;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1064cd020;
  puStack_48 = &UNK_110868438;
  uStack_18 = uStack_40;
  func_0x00010c0c0360(param_3,param_2,0,&puStack_38,&puStack_60);
  return;
}



/* Entry: 1064cd00c; end: 1064cd05b;  */

void FUN_1064cd00c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1064cd05c; end: 1064cd153;  */

void FUN_1064cd05c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c08fa60();
  if ((uVar1 == 0) || (uVar1 = param_1, func_0x00010c0720c0(), (uVar1 & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    if (lRam00000001136c3998 != -1) {
      func_0x00010002a2fc(0x1136c3998,&PTR___NSConcreteGlobalBlock_1109267c8);
    }
    uVar2 = uRam00000001136c3990;
    func_0x00010c0e00e0(uRam00000001136c3990);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1064cd154; end: 1064cd21f;  */

void FUN_1064cd154(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010c0bf7e0(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064cd220; end: 1064cd367;  */

void FUN_1064cd220(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong unaff_x22;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0cb940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    unaff_x22 = *(ulong *)(param_1 + 0x20);
    func_0x00010c0cb940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = unaff_x22;
    func_0x00010c0720c0();
    if ((uVar3 & 1) != 0) goto LAB_1064cd28c;
    _objc_release(unaff_x22);
    _objc_release(uVar1);
  }
  else {
LAB_1064cd28c:
    uVar4 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf866a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    FUN_1064cc494();
    _objc_release(uVar4);
    if ((uVar2 & 1) == 0) {
      _objc_release(unaff_x22);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) goto LAB_1064cd2e0;
    }
    else {
      _objc_release(uVar1);
      if ((int)uVar3 != 0) {
LAB_1064cd2e0:
        lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        _objc_retain(&PTR____CFConstantStringClassReference_110e52858);
        uVar5 = *(undefined8 *)(lVar8 + 0x28);
        *(undefined ***)(lVar8 + 0x28) = &PTR____CFConstantStringClassReference_110e52858;
        goto LAB_1064cd350;
      }
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cb940();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  FUN_1064cd05c();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = uVar6;
  _objc_release(uVar7);
LAB_1064cd350:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1064cd368; end: 1064cd3a3;  */

void FUN_1064cd368(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(&PTR____CFConstantStringClassReference_110e52818);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110e52818;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064cd3a4; end: 1064cd4eb;  */

void FUN_1064cd3a4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong unaff_x22;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0cb940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    unaff_x22 = *(ulong *)(param_1 + 0x20);
    func_0x00010c0cb940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = unaff_x22;
    func_0x00010c0720c0();
    if ((uVar3 & 1) != 0) goto LAB_1064cd410;
    _objc_release(unaff_x22);
    _objc_release(uVar1);
  }
  else {
LAB_1064cd410:
    uVar4 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf866a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    FUN_1064cc494();
    _objc_release(uVar4);
    if ((uVar2 & 1) == 0) {
      _objc_release(unaff_x22);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) goto LAB_1064cd464;
    }
    else {
      _objc_release(uVar1);
      if ((int)uVar3 != 0) {
LAB_1064cd464:
        lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        _objc_retain(&PTR____CFConstantStringClassReference_110e52858);
        uVar5 = *(undefined8 *)(lVar8 + 0x28);
        *(undefined ***)(lVar8 + 0x28) = &PTR____CFConstantStringClassReference_110e52858;
        goto LAB_1064cd4d4;
      }
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cb940();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  FUN_1064cd05c();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = uVar6;
  _objc_release(uVar7);
LAB_1064cd4d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1064cd4ec; end: 1064cd75f;  */

void FUN_1064cd4ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  int iVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuStack_5f8;
  undefined **ppuStack_5f0;
  undefined **ppuStack_5e8;
  undefined **ppuStack_5e0;
  undefined **ppuStack_5d8;
  undefined **ppuStack_5d0;
  undefined **ppuStack_5c8;
  undefined **ppuStack_5c0;
  undefined **ppuStack_5b8;
  undefined **ppuStack_5b0;
  undefined **ppuStack_5a8;
  undefined **ppuStack_5a0;
  undefined **ppuStack_598;
  undefined **ppuStack_590;
  long lStack_588;
  undefined8 ***pppuStack_580;
  undefined8 uStack_578;
  undefined **ppuStack_568;
  undefined **ppuStack_560;
  undefined **ppuStack_558;
  undefined **ppuStack_550;
  undefined **ppuStack_548;
  undefined **ppuStack_540;
  undefined **ppuStack_538;
  undefined **ppuStack_530;
  long lStack_528;
  undefined8 ***pppuStack_520;
  undefined8 uStack_518;
  undefined **ppuStack_508;
  undefined **ppuStack_500;
  undefined **ppuStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined **ppuStack_4d8;
  undefined **ppuStack_4d0;
  long lStack_4c8;
  undefined8 ***pppuStack_4c0;
  undefined8 uStack_4b8;
  undefined **ppuStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined **ppuStack_490;
  undefined **ppuStack_488;
  undefined **ppuStack_480;
  undefined **ppuStack_478;
  undefined **ppuStack_470;
  long lStack_468;
  undefined8 ***pppuStack_460;
  undefined8 uStack_458;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  long lStack_408;
  undefined8 ***pppuStack_400;
  undefined8 uStack_3f8;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  long lStack_3a8;
  undefined8 ***pppuStack_3a0;
  undefined8 uStack_398;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  long lStack_348;
  undefined1 ***pppuStack_340;
  undefined8 uStack_338;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  long lStack_2e8;
  undefined1 **ppuStack_2e0;
  code *pcStack_2d8;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  long lStack_188;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110e45eb8;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110e36318;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110e527b8;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110e52978;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110e81a98;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110f483f8;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110e52998;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e529b8;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110f48418;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110f48438;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110e529f8;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e52a18;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110f48618;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110f48478;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e529f8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e52938;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110f48498;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110f48458;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e52958;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e529d8;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110f484b8;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f48558;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110e52a38;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e52a18;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110f48518;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110f484f8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e52938;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e52958;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110f484d8;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110f48538;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e52a18;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e52a18;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110f48598;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110f48578;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e52a18;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110e52a18;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110f485b8;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e52a38;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_c0,&ppuStack_158,
                      0x13);
  iVar7 = (int)param_2;
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c3900;
  puRam00000001136c3900 = puVar2;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  uStack_168 = 0x1064cd624;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_2c8 = &PTR____CFConstantStringClassReference_110e45eb8;
  ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e36318;
  ppuStack_228 = &PTR____CFConstantStringClassReference_110e527b8;
  ppuStack_220 = &PTR____CFConstantStringClassReference_110e52ab8;
  ppuStack_2b8 = &PTR____CFConstantStringClassReference_110e81a98;
  ppuStack_2b0 = &PTR____CFConstantStringClassReference_110f483f8;
  ppuStack_218 = &PTR____CFConstantStringClassReference_110e52ad8;
  ppuStack_210 = &PTR____CFConstantStringClassReference_110e52af8;
  ppuStack_2a8 = &PTR____CFConstantStringClassReference_110f48418;
  ppuStack_2a0 = &PTR____CFConstantStringClassReference_110f48438;
  ppuStack_298 = &PTR____CFConstantStringClassReference_110f48618;
  ppuStack_290 = &PTR____CFConstantStringClassReference_110ecc178;
  ppuStack_288 = &PTR____CFConstantStringClassReference_110f48478;
  ppuStack_280 = &PTR____CFConstantStringClassReference_110f48498;
  ppuStack_1f8 = &PTR____CFConstantStringClassReference_110e52b38;
  ppuStack_1f0 = &PTR____CFConstantStringClassReference_110e52b38;
  ppuStack_208 = &PTR____CFConstantStringClassReference_110e52b38;
  ppuStack_200 = &PTR____CFConstantStringClassReference_110e52b58;
  ppuStack_278 = &PTR____CFConstantStringClassReference_110f48458;
  ppuStack_270 = &PTR____CFConstantStringClassReference_110f484b8;
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110e52b18;
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110e52b78;
  ppuStack_268 = &PTR____CFConstantStringClassReference_110f48558;
  ppuStack_1e8 = &PTR____CFConstantStringClassReference_110e52a78;
  ppuStack_1e0 = &PTR____CFConstantStringClassReference_110e52a98;
  ppuStack_258 = &PTR____CFConstantStringClassReference_110f48518;
  ppuStack_260 = &PTR____CFConstantStringClassReference_110f484f8;
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110e52b58;
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110e52a78;
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110e52a98;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110e52b58;
  ppuStack_250 = &PTR____CFConstantStringClassReference_110f484d8;
  ppuStack_248 = &PTR____CFConstantStringClassReference_110f48538;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110e52b58;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110e52b58;
  ppuStack_240 = &PTR____CFConstantStringClassReference_110f48578;
  ppuStack_238 = &PTR____CFConstantStringClassReference_110f48598;
  ppuStack_230 = &PTR____CFConstantStringClassReference_110f485b8;
  ppuStack_198 = &PTR____CFConstantStringClassReference_110e52b58;
  ppuStack_190 = &PTR____CFConstantStringClassReference_110e52b78;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c3910;
  puRam00000001136c3910 = puVar2;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2d8 = FUN_1064cd760;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_328 = &PTR____CFConstantStringClassReference_110e81a98;
  ppuStack_320 = &PTR____CFConstantStringClassReference_110f483f8;
  ppuStack_308 = &PTR____CFConstantStringClassReference_110e52c98;
  ppuStack_300 = &PTR____CFConstantStringClassReference_110e52c78;
  ppuStack_318 = &PTR____CFConstantStringClassReference_110f48418;
  ppuStack_310 = &PTR____CFConstantStringClassReference_110f48438;
  ppuStack_2f8 = &PTR____CFConstantStringClassReference_110e52cb8;
  ppuStack_2f0 = &PTR____CFConstantStringClassReference_110e52cd8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_2e0 = &puStack_170;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c3920;
  puRam00000001136c3920 = puVar2;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  uStack_338 = 0x1064cd808;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_388 = &PTR____CFConstantStringClassReference_110e81a98;
  ppuStack_380 = &PTR____CFConstantStringClassReference_110f483f8;
  ppuStack_368 = &PTR____CFConstantStringClassReference_110e52d58;
  ppuStack_360 = &PTR____CFConstantStringClassReference_110e52d38;
  ppuStack_378 = &PTR____CFConstantStringClassReference_110f48418;
  ppuStack_370 = &PTR____CFConstantStringClassReference_110f48438;
  ppuStack_358 = &PTR____CFConstantStringClassReference_110e52d98;
  ppuStack_350 = &PTR____CFConstantStringClassReference_110e52d78;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  pppuStack_340 = &ppuStack_2e0;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c3930;
  puRam00000001136c3930 = puVar2;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  uStack_398 = 0x1064cd8b0;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_3e8 = &PTR____CFConstantStringClassReference_110e81a98;
  ppuStack_3e0 = &PTR____CFConstantStringClassReference_110f483f8;
  ppuStack_3c8 = &PTR____CFConstantStringClassReference_110e52c98;
  ppuStack_3c0 = &PTR____CFConstantStringClassReference_110e52c78;
  ppuStack_3d8 = &PTR____CFConstantStringClassReference_110f48418;
  ppuStack_3d0 = &PTR____CFConstantStringClassReference_110f48438;
  ppuStack_3b8 = &PTR____CFConstantStringClassReference_110e52d18;
  ppuStack_3b0 = &PTR____CFConstantStringClassReference_110e52cf8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  pppuStack_3a0 = &pppuStack_340;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c3940;
  puRam00000001136c3940 = puVar2;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  uStack_3f8 = 0x1064cd958;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_448 = &PTR____CFConstantStringClassReference_110e81a98;
  ppuStack_440 = &PTR____CFConstantStringClassReference_110f483f8;
  ppuStack_428 = &PTR____CFConstantStringClassReference_110e52d58;
  ppuStack_420 = &PTR____CFConstantStringClassReference_110e52d38;
  ppuStack_438 = &PTR____CFConstantStringClassReference_110f48418;
  ppuStack_430 = &PTR____CFConstantStringClassReference_110f48438;
  ppuStack_418 = &PTR____CFConstantStringClassReference_110e52dd8;
  ppuStack_410 = &PTR____CFConstantStringClassReference_110e52db8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  pppuStack_400 = &pppuStack_3a0;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c3950;
  puRam00000001136c3950 = puVar2;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  uStack_458 = 0x1064cda00;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_4a8 = &PTR____CFConstantStringClassReference_110e81a98;
  ppuStack_498 = &PTR____CFConstantStringClassReference_110f48418;
  ppuStack_4a0 = &PTR____CFConstantStringClassReference_110f483f8;
  ppuStack_488 = &PTR____CFConstantStringClassReference_110e52e58;
  ppuStack_480 = &PTR____CFConstantStringClassReference_110e52e38;
  ppuStack_490 = &PTR____CFConstantStringClassReference_110f48438;
  ppuStack_478 = &PTR____CFConstantStringClassReference_110e52e58;
  ppuStack_470 = &PTR____CFConstantStringClassReference_110e52e38;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  pppuStack_460 = &pppuStack_400;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c3960;
  puRam00000001136c3960 = puVar2;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return;
  }
  ___stack_chk_fail();
  uStack_4b8 = 0x1064cdaac;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_508 = &PTR____CFConstantStringClassReference_110e81a98;
  ppuStack_4f8 = &PTR____CFConstantStringClassReference_110f48418;
  ppuStack_500 = &PTR____CFConstantStringClassReference_110f483f8;
  ppuStack_4e8 = &PTR____CFConstantStringClassReference_110e52e18;
  ppuStack_4e0 = &PTR____CFConstantStringClassReference_110e52df8;
  ppuStack_4f0 = &PTR____CFConstantStringClassReference_110f48438;
  ppuStack_4d8 = &PTR____CFConstantStringClassReference_110e52e18;
  ppuStack_4d0 = &PTR____CFConstantStringClassReference_110e52df8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  pppuStack_4c0 = &pppuStack_460;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c3970;
  puRam00000001136c3970 = puVar2;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return;
  }
  ___stack_chk_fail();
  uStack_518 = 0x1064cdb58;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_568 = &PTR____CFConstantStringClassReference_110e81a98;
  ppuStack_540 = &PTR____CFConstantStringClassReference_110e527f8;
  ppuStack_548 = &PTR____CFConstantStringClassReference_110e527d8;
  ppuStack_558 = &PTR____CFConstantStringClassReference_110f48418;
  ppuStack_560 = &PTR____CFConstantStringClassReference_110f483f8;
  ppuStack_550 = &PTR____CFConstantStringClassReference_110f48438;
  ppuStack_538 = &PTR____CFConstantStringClassReference_110e52838;
  ppuStack_530 = &PTR____CFConstantStringClassReference_110e52818;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  pppuStack_520 = &pppuStack_4c0;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c3980;
  puRam00000001136c3980 = puVar2;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return;
  }
  ___stack_chk_fail();
  uStack_578 = 0x1064cdc08;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_5f8 = &PTR____CFConstantStringClassReference_110e45eb8;
  ppuStack_5f0 = &PTR____CFConstantStringClassReference_110e36318;
  ppuStack_5c0 = &PTR____CFConstantStringClassReference_110e527b8;
  ppuStack_5b8 = &PTR____CFConstantStringClassReference_110e228d8;
  ppuStack_5e8 = &PTR____CFConstantStringClassReference_110e81a98;
  ppuStack_5b0 = &PTR____CFConstantStringClassReference_110e527d8;
  ppuStack_5a8 = &PTR____CFConstantStringClassReference_110e527f8;
  ppuStack_5d8 = &PTR____CFConstantStringClassReference_110f48418;
  ppuStack_5e0 = &PTR____CFConstantStringClassReference_110f483f8;
  ppuStack_5a0 = &PTR____CFConstantStringClassReference_110e52838;
  ppuStack_598 = &PTR____CFConstantStringClassReference_110e52818;
  ppuStack_5d0 = &PTR____CFConstantStringClassReference_110f48438;
  ppuStack_5c8 = &PTR____CFConstantStringClassReference_110f48618;
  ppuStack_590 = &PTR____CFConstantStringClassReference_110e52838;
  pppuVar8 = &ppuStack_5c0;
  pppuVar9 = &ppuStack_5f8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  pppuStack_580 = &pppuStack_520;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = (ulong)puRam00000001136c3990;
  puRam00000001136c3990 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(pppuVar8);
  _objc_retain(pppuVar9);
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51a98;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51ab8;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51ad8;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51af8;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51b18;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51b38;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((((uVar4 & 1) != 0) || (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) != 0)) ||
     (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) != 0)) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51b58;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51b78;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51b98;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51bb8;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51bd8;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51bf8;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51c18;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  ppuVar11 = &PTR____CFConstantStringClassReference_110e51c38;
  if ((uVar4 & 1) != 0) goto LAB_1064cddfc;
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((int)uVar4 == 0) {
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      uVar4 = uVar3;
      func_0x00010c0720c0();
      if ((int)uVar4 != 0) {
        pppuVar5 = pppuVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        pppuVar6 = pppuVar5;
        func_0x00010bf1f3c0();
        _objc_release(pppuVar5);
        if ((int)pppuVar6 != 0) {
          pppuVar5 = pppuVar9;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          pppuVar6 = pppuVar5;
          func_0x00010c067fc0();
          _objc_release(pppuVar5);
          if (pppuVar6 == (undefined ***)0x1) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110e51cf8;
            goto LAB_1064cddfc;
          }
          if (pppuVar6 == (undefined ***)0x2) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110e51d18;
            goto LAB_1064cddfc;
          }
        }
        ppuVar10 = &PTR____CFConstantStringClassReference_110e51d38;
        goto LAB_1064ce05c;
      }
      uVar4 = uVar3;
      func_0x00010c0720c0();
      if ((int)uVar4 == 0) {
        uVar4 = uVar3;
        func_0x00010c0720c0();
        if ((int)uVar4 != 0) {
          ppuVar10 = &PTR____CFConstantStringClassReference_110e51d98;
          goto LAB_1064ce088;
        }
        uVar4 = uVar3;
        func_0x00010c0720c0();
        if ((int)uVar4 == 0) {
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((int)uVar4 != 0) {
            ppuVar10 = &PTR____CFConstantStringClassReference_110e51df8;
            goto LAB_1064ce114;
          }
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((int)uVar4 != 0) {
            ppuVar10 = &PTR____CFConstantStringClassReference_110e51e18;
            goto LAB_1064ce114;
          }
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((uVar4 & 1) != 0) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110e51e38;
            goto LAB_1064cddfc;
          }
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((uVar4 & 1) != 0) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110e51e58;
            goto LAB_1064cddfc;
          }
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((uVar4 & 1) != 0) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110e51e78;
            goto LAB_1064cddfc;
          }
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((uVar4 & 1) != 0) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110e51e98;
            goto LAB_1064cddfc;
          }
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((uVar4 & 1) != 0) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110e51eb8;
            goto LAB_1064cddfc;
          }
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((uVar4 & 1) != 0) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110e51ed8;
            goto LAB_1064cddfc;
          }
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((uVar4 & 1) != 0) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110e51ef8;
            goto LAB_1064cddfc;
          }
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((int)uVar4 == 0) {
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((int)uVar4 != 0) {
              ppuVar10 = &PTR____CFConstantStringClassReference_110e51f58;
              goto LAB_1064ce294;
            }
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((int)uVar4 != 0) {
              ppuVar10 = &PTR____CFConstantStringClassReference_110e51f78;
              goto LAB_1064ce294;
            }
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((uVar4 & 1) != 0) goto LAB_1064cddfc;
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((uVar4 & 1) != 0) {
              ppuVar11 = &PTR____CFConstantStringClassReference_110e51f98;
              goto LAB_1064cddfc;
            }
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((uVar4 & 1) != 0) {
              ppuVar11 = &PTR____CFConstantStringClassReference_110e51fb8;
              goto LAB_1064cddfc;
            }
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((uVar4 & 1) != 0) {
              ppuVar11 = &PTR____CFConstantStringClassReference_110e51fd8;
              goto LAB_1064cddfc;
            }
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((uVar4 & 1) != 0) {
              ppuVar11 = &PTR____CFConstantStringClassReference_110e51ff8;
              goto LAB_1064cddfc;
            }
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((uVar4 & 1) != 0) {
              ppuVar11 = &PTR____CFConstantStringClassReference_110e52018;
              goto LAB_1064cddfc;
            }
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((uVar4 & 1) != 0) {
              ppuVar11 = &PTR____CFConstantStringClassReference_110e52038;
              goto LAB_1064cddfc;
            }
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((uVar4 & 1) != 0) {
              ppuVar11 = &PTR____CFConstantStringClassReference_110e52058;
              goto LAB_1064cddfc;
            }
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((uVar4 & 1) != 0) {
              ppuVar11 = &PTR____CFConstantStringClassReference_110e52078;
              goto LAB_1064cddfc;
            }
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((int)uVar4 == 0) {
              uVar4 = uVar3;
              func_0x00010c0720c0();
              if (((int)uVar4 == 0) && (uVar4 = uVar3, func_0x00010c0720c0(), (int)uVar4 == 0)) {
                uVar4 = uVar3;
                func_0x00010c0720c0();
                if (((int)uVar4 == 0) && (uVar4 = uVar3, func_0x00010c0720c0(), (int)uVar4 == 0)) {
                  uVar4 = uVar3;
                  func_0x00010c0720c0();
                  if ((uVar4 & 1) == 0) {
                    uVar4 = uVar3;
                    func_0x00010c0720c0();
                    if ((uVar4 & 1) == 0) {
                      uVar4 = uVar3;
                      func_0x00010c0720c0();
                      if ((uVar4 & 1) == 0) {
                        uVar4 = uVar3;
                        func_0x00010c0720c0();
                        if ((uVar4 & 1) == 0) {
                          uVar4 = uVar3;
                          func_0x00010c0720c0();
                          if ((uVar4 & 1) == 0) {
                            uVar4 = uVar3;
                            func_0x00010c0720c0();
                            if ((uVar4 & 1) == 0) {
                              uVar4 = uVar3;
                              func_0x00010c0720c0();
                              if ((uVar4 & 1) == 0) {
                                uVar4 = uVar3;
                                func_0x00010c0720c0();
                                if ((uVar4 & 1) == 0) {
                                  uVar4 = uVar3;
                                  func_0x00010c0720c0();
                                  if ((uVar4 & 1) == 0) {
                                    uVar4 = uVar3;
                                    func_0x00010c0720c0();
                                    if ((uVar4 & 1) == 0) {
                                      uVar4 = uVar3;
                                      func_0x00010c0720c0();
                                      if ((uVar4 & 1) == 0) {
                                        uVar4 = uVar3;
                                        func_0x00010c0720c0();
                                        if ((uVar4 & 1) == 0) {
                                          uVar4 = uVar3;
                                          func_0x00010c0720c0();
                                          if ((uVar4 & 1) == 0) {
                                            uVar4 = uVar3;
                                            func_0x00010c0720c0();
                                            if (((((int)uVar4 == 0) &&
                                                 (uVar4 = uVar3, func_0x00010c0720c0(),
                                                 (int)uVar4 == 0)) &&
                                                (uVar4 = uVar3, func_0x00010c0720c0(),
                                                (int)uVar4 == 0)) &&
                                               ((uVar4 = uVar3, func_0x00010c0720c0(),
                                                (int)uVar4 == 0 &&
                                                (uVar4 = uVar3, func_0x00010c0720c0(),
                                                (int)uVar4 == 0)))) {
                                              uVar4 = uVar3;
                                              func_0x00010c0720c0();
                                              if ((uVar4 & 1) == 0) {
                                                uVar4 = uVar3;
                                                func_0x00010c0720c0();
                                                if ((uVar4 & 1) == 0) {
                                                  uVar4 = uVar3;
                                                  func_0x00010c0720c0();
                                                  if ((uVar4 & 1) == 0) {
                                                    uVar4 = uVar3;
                                                    func_0x00010c0720c0();
                                                    if ((uVar4 & 1) == 0) {
                                                      uVar4 = uVar3;
                                                      func_0x00010c0720c0();
                                                      if ((uVar4 & 1) == 0) {
                                                        uVar4 = uVar3;
                                                        func_0x00010c0720c0();
                                                        if ((uVar4 & 1) == 0) {
                                                          uVar4 = uVar3;
                                                          func_0x00010c0720c0();
                                                          if ((uVar4 & 1) == 0) {
                                                            uVar4 = uVar3;
                                                            func_0x00010c0720c0();
                                                            ppuVar11 = &
                                                  PTR____CFConstantStringClassReference_110e523b8;
                                                  if ((int)uVar4 == 0) {
                                                    ppuVar11 = (undefined **)0x0;
                                                  }
                                                  }
                                                  else {
                                                    ppuVar11 = &
                                                  PTR____CFConstantStringClassReference_110e52398;
                                                  }
                                                  }
                                                  else {
                                                    ppuVar11 = &
                                                  PTR____CFConstantStringClassReference_110e52378;
                                                  }
                                                  }
                                                  else {
                                                    ppuVar11 = &
                                                  PTR____CFConstantStringClassReference_110e52358;
                                                  }
                                                  }
                                                  else {
                                                    ppuVar11 = &
                                                  PTR____CFConstantStringClassReference_110e52338;
                                                  }
                                                  }
                                                  else {
                                                    ppuVar11 = &
                                                  PTR____CFConstantStringClassReference_110e52318;
                                                  }
                                                }
                                                else {
                                                  ppuVar11 = &
                                                  PTR____CFConstantStringClassReference_110e522f8;
                                                }
                                              }
                                              else {
                                                ppuVar11 = &
                                                  PTR____CFConstantStringClassReference_110e522d8;
                                              }
                                            }
                                            else {
                                              ppuVar11 = (undefined **)PTR_PTR_1126c2cb0;
                                              func_0x00010bfe5860(PTR_PTR_1126c2cb0);
                                              _objc_retainAutoreleasedReturnValue();
                                            }
                                          }
                                          else {
                                            ppuVar11 = &
                                                  PTR____CFConstantStringClassReference_110e522b8;
                                          }
                                        }
                                        else {
                                          ppuVar11 = &
                                                  PTR____CFConstantStringClassReference_110e52298;
                                        }
                                      }
                                      else {
                                        ppuVar11 = &PTR____CFConstantStringClassReference_110e52278;
                                      }
                                    }
                                    else {
                                      ppuVar11 = &PTR____CFConstantStringClassReference_110e52258;
                                    }
                                  }
                                  else {
                                    ppuVar11 = &PTR____CFConstantStringClassReference_110e52238;
                                  }
                                }
                                else {
                                  ppuVar11 = &PTR____CFConstantStringClassReference_110e52218;
                                }
                              }
                              else {
                                ppuVar11 = &PTR____CFConstantStringClassReference_110e521f8;
                              }
                            }
                            else {
                              ppuVar11 = &PTR____CFConstantStringClassReference_110e521d8;
                            }
                          }
                          else {
                            ppuVar11 = &PTR____CFConstantStringClassReference_110e521b8;
                          }
                        }
                        else {
                          ppuVar11 = &PTR____CFConstantStringClassReference_110e52198;
                        }
                      }
                      else {
                        ppuVar11 = &PTR____CFConstantStringClassReference_110e52178;
                      }
                    }
                    else {
                      ppuVar11 = &PTR____CFConstantStringClassReference_110e52158;
                    }
                  }
                  else {
                    ppuVar11 = &PTR____CFConstantStringClassReference_110e52138;
                  }
                  goto LAB_1064cddfc;
                }
                ppuVar10 = &PTR____CFConstantStringClassReference_110e52118;
              }
              else {
                ppuVar10 = &PTR____CFConstantStringClassReference_110e520f8;
              }
              ppuVar11 = &PTR____CFConstantStringClassReference_110e520d8;
            }
            else {
              ppuVar10 = &PTR____CFConstantStringClassReference_110e520b8;
              ppuVar11 = &PTR____CFConstantStringClassReference_110e52098;
            }
          }
          else {
            ppuVar10 = &PTR____CFConstantStringClassReference_110e51f38;
LAB_1064ce294:
            ppuVar11 = &PTR____CFConstantStringClassReference_110e51f18;
          }
        }
        else {
          ppuVar10 = &PTR____CFConstantStringClassReference_110e51dd8;
LAB_1064ce114:
          ppuVar11 = &PTR____CFConstantStringClassReference_110e51db8;
        }
      }
      else {
        ppuVar10 = &PTR____CFConstantStringClassReference_110e51d78;
LAB_1064ce088:
        ppuVar11 = &PTR____CFConstantStringClassReference_110e51d58;
      }
    }
    else {
      pppuVar5 = pppuVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      pppuVar6 = pppuVar5;
      func_0x00010bf1f3c0();
      _objc_release(pppuVar5);
      if ((int)pppuVar6 != 0) {
        pppuVar5 = pppuVar9;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        pppuVar6 = pppuVar5;
        func_0x00010c067fc0();
        _objc_release(pppuVar5);
        if (pppuVar6 == (undefined ***)0x1) {
          ppuVar11 = &PTR____CFConstantStringClassReference_110e51c78;
          goto LAB_1064cddfc;
        }
        if (pppuVar6 == (undefined ***)0x2) {
          ppuVar11 = &PTR____CFConstantStringClassReference_110e51c98;
          goto LAB_1064cddfc;
        }
      }
      ppuVar10 = &PTR____CFConstantStringClassReference_110e51cd8;
LAB_1064ce05c:
      ppuVar11 = &PTR____CFConstantStringClassReference_110e51cb8;
    }
    if (iVar7 == 0) {
      ppuVar11 = ppuVar10;
    }
  }
  else {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51c38;
    if (iVar7 == 0) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110e51c58;
    }
  }
  _objc_retain(ppuVar11);
LAB_1064cddfc:
  _objc_release(pppuVar9);
  _objc_release(pppuVar8);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar11);
  return;
}



/* Entry: 1064cd760; end: 1064cdcdb;  */

void FUN_1064cd760(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  int iVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  long lStack_2b8;
  undefined8 ***pppuStack_2b0;
  undefined8 uStack_2a8;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  long lStack_258;
  undefined8 ***pppuStack_250;
  undefined8 uStack_248;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  long lStack_1f8;
  undefined8 ***pppuStack_1f0;
  undefined8 uStack_1e8;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined8 ***pppuStack_190;
  undefined8 uStack_188;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  long lStack_138;
  undefined1 ***pppuStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined1 **ppuStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e81a98;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110f483f8;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110e52c98;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e52c78;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f48418;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f48438;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110e52cb8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e52cd8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_38,&ppuStack_58,4);
  iVar7 = (int)param_2;
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c3920;
  puRam00000001136c3920 = puVar2;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  uStack_68 = 0x1064cd808;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110e81a98;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f483f8;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e52d58;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e52d38;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110f48418;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110f48438;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e52d98;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e52d78;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c3930;
  puRam00000001136c3930 = puVar2;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  uStack_c8 = 0x1064cd8b0;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110e81a98;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110f483f8;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110e52c98;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110e52c78;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110f48418;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f48438;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110e52d18;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110e52cf8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_d0 = &puStack_70;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c3940;
  puRam00000001136c3940 = puVar2;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  uStack_128 = 0x1064cd958;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_178 = &PTR____CFConstantStringClassReference_110e81a98;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110f483f8;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110e52d58;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110e52d38;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110f48418;
  ppuStack_160 = &PTR____CFConstantStringClassReference_110f48438;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110e52dd8;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110e52db8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  pppuStack_130 = &ppuStack_d0;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c3950;
  puRam00000001136c3950 = puVar2;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  uStack_188 = 0x1064cda00;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110e81a98;
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110f48418;
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110f483f8;
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110e52e58;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110e52e38;
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110f48438;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110e52e58;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110e52e38;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  pppuStack_190 = &pppuStack_130;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c3960;
  puRam00000001136c3960 = puVar2;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  uStack_1e8 = 0x1064cdaac;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_238 = &PTR____CFConstantStringClassReference_110e81a98;
  ppuStack_228 = &PTR____CFConstantStringClassReference_110f48418;
  ppuStack_230 = &PTR____CFConstantStringClassReference_110f483f8;
  ppuStack_218 = &PTR____CFConstantStringClassReference_110e52e18;
  ppuStack_210 = &PTR____CFConstantStringClassReference_110e52df8;
  ppuStack_220 = &PTR____CFConstantStringClassReference_110f48438;
  ppuStack_208 = &PTR____CFConstantStringClassReference_110e52e18;
  ppuStack_200 = &PTR____CFConstantStringClassReference_110e52df8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  pppuStack_1f0 = &pppuStack_190;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c3970;
  puRam00000001136c3970 = puVar2;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return;
  }
  ___stack_chk_fail();
  uStack_248 = 0x1064cdb58;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_298 = &PTR____CFConstantStringClassReference_110e81a98;
  ppuStack_270 = &PTR____CFConstantStringClassReference_110e527f8;
  ppuStack_278 = &PTR____CFConstantStringClassReference_110e527d8;
  ppuStack_288 = &PTR____CFConstantStringClassReference_110f48418;
  ppuStack_290 = &PTR____CFConstantStringClassReference_110f483f8;
  ppuStack_280 = &PTR____CFConstantStringClassReference_110f48438;
  ppuStack_268 = &PTR____CFConstantStringClassReference_110e52838;
  ppuStack_260 = &PTR____CFConstantStringClassReference_110e52818;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  pppuStack_250 = &pppuStack_1f0;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c3980;
  puRam00000001136c3980 = puVar2;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  uStack_2a8 = 0x1064cdc08;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_328 = &PTR____CFConstantStringClassReference_110e45eb8;
  ppuStack_320 = &PTR____CFConstantStringClassReference_110e36318;
  ppuStack_2f0 = &PTR____CFConstantStringClassReference_110e527b8;
  ppuStack_2e8 = &PTR____CFConstantStringClassReference_110e228d8;
  ppuStack_318 = &PTR____CFConstantStringClassReference_110e81a98;
  ppuStack_2e0 = &PTR____CFConstantStringClassReference_110e527d8;
  ppuStack_2d8 = &PTR____CFConstantStringClassReference_110e527f8;
  ppuStack_308 = &PTR____CFConstantStringClassReference_110f48418;
  ppuStack_310 = &PTR____CFConstantStringClassReference_110f483f8;
  ppuStack_2d0 = &PTR____CFConstantStringClassReference_110e52838;
  ppuStack_2c8 = &PTR____CFConstantStringClassReference_110e52818;
  ppuStack_300 = &PTR____CFConstantStringClassReference_110f48438;
  ppuStack_2f8 = &PTR____CFConstantStringClassReference_110f48618;
  ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e52838;
  pppuVar8 = &ppuStack_2f0;
  pppuVar9 = &ppuStack_328;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  pppuStack_2b0 = &pppuStack_250;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = (ulong)puRam00000001136c3990;
  puRam00000001136c3990 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(pppuVar8);
  _objc_retain(pppuVar9);
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51a98;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51ab8;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51ad8;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51af8;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51b18;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51b38;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((((uVar4 & 1) != 0) || (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) != 0)) ||
     (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) != 0)) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51b58;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51b78;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51b98;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51bb8;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51bd8;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51bf8;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) != 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51c18;
    goto LAB_1064cddfc;
  }
  uVar4 = uVar3;
  func_0x00010c0720c0();
  ppuVar11 = &PTR____CFConstantStringClassReference_110e51c38;
  if ((uVar4 & 1) != 0) goto LAB_1064cddfc;
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((int)uVar4 == 0) {
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      uVar4 = uVar3;
      func_0x00010c0720c0();
      if ((int)uVar4 != 0) {
        pppuVar5 = pppuVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        pppuVar6 = pppuVar5;
        func_0x00010bf1f3c0();
        _objc_release(pppuVar5);
        if ((int)pppuVar6 != 0) {
          pppuVar5 = pppuVar9;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          pppuVar6 = pppuVar5;
          func_0x00010c067fc0();
          _objc_release(pppuVar5);
          if (pppuVar6 == (undefined ***)0x1) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110e51cf8;
            goto LAB_1064cddfc;
          }
          if (pppuVar6 == (undefined ***)0x2) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110e51d18;
            goto LAB_1064cddfc;
          }
        }
        ppuVar10 = &PTR____CFConstantStringClassReference_110e51d38;
        goto LAB_1064ce05c;
      }
      uVar4 = uVar3;
      func_0x00010c0720c0();
      if ((int)uVar4 == 0) {
        uVar4 = uVar3;
        func_0x00010c0720c0();
        if ((int)uVar4 != 0) {
          ppuVar10 = &PTR____CFConstantStringClassReference_110e51d98;
          goto LAB_1064ce088;
        }
        uVar4 = uVar3;
        func_0x00010c0720c0();
        if ((int)uVar4 == 0) {
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((int)uVar4 != 0) {
            ppuVar10 = &PTR____CFConstantStringClassReference_110e51df8;
            goto LAB_1064ce114;
          }
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((int)uVar4 != 0) {
            ppuVar10 = &PTR____CFConstantStringClassReference_110e51e18;
            goto LAB_1064ce114;
          }
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((uVar4 & 1) != 0) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110e51e38;
            goto LAB_1064cddfc;
          }
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((uVar4 & 1) != 0) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110e51e58;
            goto LAB_1064cddfc;
          }
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((uVar4 & 1) != 0) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110e51e78;
            goto LAB_1064cddfc;
          }
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((uVar4 & 1) != 0) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110e51e98;
            goto LAB_1064cddfc;
          }
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((uVar4 & 1) != 0) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110e51eb8;
            goto LAB_1064cddfc;
          }
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((uVar4 & 1) != 0) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110e51ed8;
            goto LAB_1064cddfc;
          }
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((uVar4 & 1) != 0) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110e51ef8;
            goto LAB_1064cddfc;
          }
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((int)uVar4 == 0) {
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((int)uVar4 != 0) {
              ppuVar10 = &PTR____CFConstantStringClassReference_110e51f58;
              goto LAB_1064ce294;
            }
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((int)uVar4 != 0) {
              ppuVar10 = &PTR____CFConstantStringClassReference_110e51f78;
              goto LAB_1064ce294;
            }
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((uVar4 & 1) != 0) goto LAB_1064cddfc;
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((uVar4 & 1) != 0) {
              ppuVar11 = &PTR____CFConstantStringClassReference_110e51f98;
              goto LAB_1064cddfc;
            }
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((uVar4 & 1) != 0) {
              ppuVar11 = &PTR____CFConstantStringClassReference_110e51fb8;
              goto LAB_1064cddfc;
            }
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((uVar4 & 1) != 0) {
              ppuVar11 = &PTR____CFConstantStringClassReference_110e51fd8;
              goto LAB_1064cddfc;
            }
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((uVar4 & 1) != 0) {
              ppuVar11 = &PTR____CFConstantStringClassReference_110e51ff8;
              goto LAB_1064cddfc;
            }
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((uVar4 & 1) != 0) {
              ppuVar11 = &PTR____CFConstantStringClassReference_110e52018;
              goto LAB_1064cddfc;
            }
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((uVar4 & 1) != 0) {
              ppuVar11 = &PTR____CFConstantStringClassReference_110e52038;
              goto LAB_1064cddfc;
            }
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((uVar4 & 1) != 0) {
              ppuVar11 = &PTR____CFConstantStringClassReference_110e52058;
              goto LAB_1064cddfc;
            }
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((uVar4 & 1) != 0) {
              ppuVar11 = &PTR____CFConstantStringClassReference_110e52078;
              goto LAB_1064cddfc;
            }
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((int)uVar4 == 0) {
              uVar4 = uVar3;
              func_0x00010c0720c0();
              if (((int)uVar4 == 0) && (uVar4 = uVar3, func_0x00010c0720c0(), (int)uVar4 == 0)) {
                uVar4 = uVar3;
                func_0x00010c0720c0();
                if (((int)uVar4 == 0) && (uVar4 = uVar3, func_0x00010c0720c0(), (int)uVar4 == 0)) {
                  uVar4 = uVar3;
                  func_0x00010c0720c0();
                  if ((uVar4 & 1) == 0) {
                    uVar4 = uVar3;
                    func_0x00010c0720c0();
                    if ((uVar4 & 1) == 0) {
                      uVar4 = uVar3;
                      func_0x00010c0720c0();
                      if ((uVar4 & 1) == 0) {
                        uVar4 = uVar3;
                        func_0x00010c0720c0();
                        if ((uVar4 & 1) == 0) {
                          uVar4 = uVar3;
                          func_0x00010c0720c0();
                          if ((uVar4 & 1) == 0) {
                            uVar4 = uVar3;
                            func_0x00010c0720c0();
                            if ((uVar4 & 1) == 0) {
                              uVar4 = uVar3;
                              func_0x00010c0720c0();
                              if ((uVar4 & 1) == 0) {
                                uVar4 = uVar3;
                                func_0x00010c0720c0();
                                if ((uVar4 & 1) == 0) {
                                  uVar4 = uVar3;
                                  func_0x00010c0720c0();
                                  if ((uVar4 & 1) == 0) {
                                    uVar4 = uVar3;
                                    func_0x00010c0720c0();
                                    if ((uVar4 & 1) == 0) {
                                      uVar4 = uVar3;
                                      func_0x00010c0720c0();
                                      if ((uVar4 & 1) == 0) {
                                        uVar4 = uVar3;
                                        func_0x00010c0720c0();
                                        if ((uVar4 & 1) == 0) {
                                          uVar4 = uVar3;
                                          func_0x00010c0720c0();
                                          if ((uVar4 & 1) == 0) {
                                            uVar4 = uVar3;
                                            func_0x00010c0720c0();
                                            if (((((int)uVar4 == 0) &&
                                                 (uVar4 = uVar3, func_0x00010c0720c0(),
                                                 (int)uVar4 == 0)) &&
                                                (uVar4 = uVar3, func_0x00010c0720c0(),
                                                (int)uVar4 == 0)) &&
                                               ((uVar4 = uVar3, func_0x00010c0720c0(),
                                                (int)uVar4 == 0 &&
                                                (uVar4 = uVar3, func_0x00010c0720c0(),
                                                (int)uVar4 == 0)))) {
                                              uVar4 = uVar3;
                                              func_0x00010c0720c0();
                                              if ((uVar4 & 1) == 0) {
                                                uVar4 = uVar3;
                                                func_0x00010c0720c0();
                                                if ((uVar4 & 1) == 0) {
                                                  uVar4 = uVar3;
                                                  func_0x00010c0720c0();
                                                  if ((uVar4 & 1) == 0) {
                                                    uVar4 = uVar3;
                                                    func_0x00010c0720c0();
                                                    if ((uVar4 & 1) == 0) {
                                                      uVar4 = uVar3;
                                                      func_0x00010c0720c0();
                                                      if ((uVar4 & 1) == 0) {
                                                        uVar4 = uVar3;
                                                        func_0x00010c0720c0();
                                                        if ((uVar4 & 1) == 0) {
                                                          uVar4 = uVar3;
                                                          func_0x00010c0720c0();
                                                          if ((uVar4 & 1) == 0) {
                                                            uVar4 = uVar3;
                                                            func_0x00010c0720c0();
                                                            ppuVar11 = &
                                                  PTR____CFConstantStringClassReference_110e523b8;
                                                  if ((int)uVar4 == 0) {
                                                    ppuVar11 = (undefined **)0x0;
                                                  }
                                                  }
                                                  else {
                                                    ppuVar11 = &
                                                  PTR____CFConstantStringClassReference_110e52398;
                                                  }
                                                  }
                                                  else {
                                                    ppuVar11 = &
                                                  PTR____CFConstantStringClassReference_110e52378;
                                                  }
                                                  }
                                                  else {
                                                    ppuVar11 = &
                                                  PTR____CFConstantStringClassReference_110e52358;
                                                  }
                                                  }
                                                  else {
                                                    ppuVar11 = &
                                                  PTR____CFConstantStringClassReference_110e52338;
                                                  }
                                                  }
                                                  else {
                                                    ppuVar11 = &
                                                  PTR____CFConstantStringClassReference_110e52318;
                                                  }
                                                }
                                                else {
                                                  ppuVar11 = &
                                                  PTR____CFConstantStringClassReference_110e522f8;
                                                }
                                              }
                                              else {
                                                ppuVar11 = &
                                                  PTR____CFConstantStringClassReference_110e522d8;
                                              }
                                            }
                                            else {
                                              ppuVar11 = (undefined **)PTR_PTR_1126c2cb0;
                                              func_0x00010bfe5860(PTR_PTR_1126c2cb0);
                                              _objc_retainAutoreleasedReturnValue();
                                            }
                                          }
                                          else {
                                            ppuVar11 = &
                                                  PTR____CFConstantStringClassReference_110e522b8;
                                          }
                                        }
                                        else {
                                          ppuVar11 = &
                                                  PTR____CFConstantStringClassReference_110e52298;
                                        }
                                      }
                                      else {
                                        ppuVar11 = &PTR____CFConstantStringClassReference_110e52278;
                                      }
                                    }
                                    else {
                                      ppuVar11 = &PTR____CFConstantStringClassReference_110e52258;
                                    }
                                  }
                                  else {
                                    ppuVar11 = &PTR____CFConstantStringClassReference_110e52238;
                                  }
                                }
                                else {
                                  ppuVar11 = &PTR____CFConstantStringClassReference_110e52218;
                                }
                              }
                              else {
                                ppuVar11 = &PTR____CFConstantStringClassReference_110e521f8;
                              }
                            }
                            else {
                              ppuVar11 = &PTR____CFConstantStringClassReference_110e521d8;
                            }
                          }
                          else {
                            ppuVar11 = &PTR____CFConstantStringClassReference_110e521b8;
                          }
                        }
                        else {
                          ppuVar11 = &PTR____CFConstantStringClassReference_110e52198;
                        }
                      }
                      else {
                        ppuVar11 = &PTR____CFConstantStringClassReference_110e52178;
                      }
                    }
                    else {
                      ppuVar11 = &PTR____CFConstantStringClassReference_110e52158;
                    }
                  }
                  else {
                    ppuVar11 = &PTR____CFConstantStringClassReference_110e52138;
                  }
                  goto LAB_1064cddfc;
                }
                ppuVar10 = &PTR____CFConstantStringClassReference_110e52118;
              }
              else {
                ppuVar10 = &PTR____CFConstantStringClassReference_110e520f8;
              }
              ppuVar11 = &PTR____CFConstantStringClassReference_110e520d8;
            }
            else {
              ppuVar10 = &PTR____CFConstantStringClassReference_110e520b8;
              ppuVar11 = &PTR____CFConstantStringClassReference_110e52098;
            }
          }
          else {
            ppuVar10 = &PTR____CFConstantStringClassReference_110e51f38;
LAB_1064ce294:
            ppuVar11 = &PTR____CFConstantStringClassReference_110e51f18;
          }
        }
        else {
          ppuVar10 = &PTR____CFConstantStringClassReference_110e51dd8;
LAB_1064ce114:
          ppuVar11 = &PTR____CFConstantStringClassReference_110e51db8;
        }
      }
      else {
        ppuVar10 = &PTR____CFConstantStringClassReference_110e51d78;
LAB_1064ce088:
        ppuVar11 = &PTR____CFConstantStringClassReference_110e51d58;
      }
    }
    else {
      pppuVar5 = pppuVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      pppuVar6 = pppuVar5;
      func_0x00010bf1f3c0();
      _objc_release(pppuVar5);
      if ((int)pppuVar6 != 0) {
        pppuVar5 = pppuVar9;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        pppuVar6 = pppuVar5;
        func_0x00010c067fc0();
        _objc_release(pppuVar5);
        if (pppuVar6 == (undefined ***)0x1) {
          ppuVar11 = &PTR____CFConstantStringClassReference_110e51c78;
          goto LAB_1064cddfc;
        }
        if (pppuVar6 == (undefined ***)0x2) {
          ppuVar11 = &PTR____CFConstantStringClassReference_110e51c98;
          goto LAB_1064cddfc;
        }
      }
      ppuVar10 = &PTR____CFConstantStringClassReference_110e51cd8;
LAB_1064ce05c:
      ppuVar11 = &PTR____CFConstantStringClassReference_110e51cb8;
    }
    if (iVar7 == 0) {
      ppuVar11 = ppuVar10;
    }
  }
  else {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e51c38;
    if (iVar7 == 0) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110e51c58;
    }
  }
  _objc_retain(ppuVar11);
LAB_1064cddfc:
  _objc_release(pppuVar9);
  _objc_release(pppuVar8);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar11);
  return;
}



/* Entry: 1064cdcdc; end: 1064ce84b;  */

void FUN_1064cdcdc(ulong param_1,int param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0720c0();
  if ((uVar1 & 1) != 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e51a98;
    goto LAB_1064cddfc;
  }
  uVar1 = param_1;
  func_0x00010c0720c0();
  if ((uVar1 & 1) != 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e51ab8;
    goto LAB_1064cddfc;
  }
  uVar1 = param_1;
  func_0x00010c0720c0();
  if ((uVar1 & 1) != 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e51ad8;
    goto LAB_1064cddfc;
  }
  uVar1 = param_1;
  func_0x00010c0720c0();
  if ((uVar1 & 1) != 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e51af8;
    goto LAB_1064cddfc;
  }
  uVar1 = param_1;
  func_0x00010c0720c0();
  if ((uVar1 & 1) != 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e51b18;
    goto LAB_1064cddfc;
  }
  uVar1 = param_1;
  func_0x00010c0720c0();
  if ((uVar1 & 1) != 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e51b38;
    goto LAB_1064cddfc;
  }
  uVar1 = param_1;
  func_0x00010c0720c0();
  if ((((uVar1 & 1) != 0) || (uVar1 = param_1, func_0x00010c0720c0(), (uVar1 & 1) != 0)) ||
     (uVar1 = param_1, func_0x00010c0720c0(), (uVar1 & 1) != 0)) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e51b58;
    goto LAB_1064cddfc;
  }
  uVar1 = param_1;
  func_0x00010c0720c0();
  if ((uVar1 & 1) != 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e51b78;
    goto LAB_1064cddfc;
  }
  uVar1 = param_1;
  func_0x00010c0720c0();
  if ((uVar1 & 1) != 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e51b98;
    goto LAB_1064cddfc;
  }
  uVar1 = param_1;
  func_0x00010c0720c0();
  if ((uVar1 & 1) != 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e51bb8;
    goto LAB_1064cddfc;
  }
  uVar1 = param_1;
  func_0x00010c0720c0();
  if ((uVar1 & 1) != 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e51bd8;
    goto LAB_1064cddfc;
  }
  uVar1 = param_1;
  func_0x00010c0720c0();
  if ((uVar1 & 1) != 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e51bf8;
    goto LAB_1064cddfc;
  }
  uVar1 = param_1;
  func_0x00010c0720c0();
  if ((uVar1 & 1) != 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e51c18;
    goto LAB_1064cddfc;
  }
  uVar1 = param_1;
  func_0x00010c0720c0();
  ppuVar7 = &PTR____CFConstantStringClassReference_110e51c38;
  if ((uVar1 & 1) != 0) goto LAB_1064cddfc;
  uVar1 = param_1;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar1 = param_1;
    func_0x00010c0720c0();
    if ((int)uVar1 == 0) {
      uVar1 = param_1;
      func_0x00010c0720c0();
      if ((int)uVar1 != 0) {
        uVar2 = param_3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf1f3c0();
        _objc_release(uVar2);
        if ((int)uVar3 != 0) {
          lVar4 = param_4;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c067fc0();
          _objc_release(lVar4);
          if (lVar5 == 1) {
            ppuVar7 = &PTR____CFConstantStringClassReference_110e51cf8;
            goto LAB_1064cddfc;
          }
          if (lVar5 == 2) {
            ppuVar7 = &PTR____CFConstantStringClassReference_110e51d18;
            goto LAB_1064cddfc;
          }
        }
        ppuVar6 = &PTR____CFConstantStringClassReference_110e51d38;
        goto LAB_1064ce05c;
      }
      uVar1 = param_1;
      func_0x00010c0720c0();
      if ((int)uVar1 == 0) {
        uVar1 = param_1;
        func_0x00010c0720c0();
        if ((int)uVar1 != 0) {
          ppuVar6 = &PTR____CFConstantStringClassReference_110e51d98;
          goto LAB_1064ce088;
        }
        uVar1 = param_1;
        func_0x00010c0720c0();
        if ((int)uVar1 == 0) {
          uVar1 = param_1;
          func_0x00010c0720c0();
          if ((int)uVar1 != 0) {
            ppuVar6 = &PTR____CFConstantStringClassReference_110e51df8;
            goto LAB_1064ce114;
          }
          uVar1 = param_1;
          func_0x00010c0720c0();
          if ((int)uVar1 != 0) {
            ppuVar6 = &PTR____CFConstantStringClassReference_110e51e18;
            goto LAB_1064ce114;
          }
          uVar1 = param_1;
          func_0x00010c0720c0();
          if ((uVar1 & 1) != 0) {
            ppuVar7 = &PTR____CFConstantStringClassReference_110e51e38;
            goto LAB_1064cddfc;
          }
          uVar1 = param_1;
          func_0x00010c0720c0();
          if ((uVar1 & 1) != 0) {
            ppuVar7 = &PTR____CFConstantStringClassReference_110e51e58;
            goto LAB_1064cddfc;
          }
          uVar1 = param_1;
          func_0x00010c0720c0();
          if ((uVar1 & 1) != 0) {
            ppuVar7 = &PTR____CFConstantStringClassReference_110e51e78;
            goto LAB_1064cddfc;
          }
          uVar1 = param_1;
          func_0x00010c0720c0();
          if ((uVar1 & 1) != 0) {
            ppuVar7 = &PTR____CFConstantStringClassReference_110e51e98;
            goto LAB_1064cddfc;
          }
          uVar1 = param_1;
          func_0x00010c0720c0();
          if ((uVar1 & 1) != 0) {
            ppuVar7 = &PTR____CFConstantStringClassReference_110e51eb8;
            goto LAB_1064cddfc;
          }
          uVar1 = param_1;
          func_0x00010c0720c0();
          if ((uVar1 & 1) != 0) {
            ppuVar7 = &PTR____CFConstantStringClassReference_110e51ed8;
            goto LAB_1064cddfc;
          }
          uVar1 = param_1;
          func_0x00010c0720c0();
          if ((uVar1 & 1) != 0) {
            ppuVar7 = &PTR____CFConstantStringClassReference_110e51ef8;
            goto LAB_1064cddfc;
          }
          uVar1 = param_1;
          func_0x00010c0720c0();
          if ((int)uVar1 == 0) {
            uVar1 = param_1;
            func_0x00010c0720c0();
            if ((int)uVar1 != 0) {
              ppuVar6 = &PTR____CFConstantStringClassReference_110e51f58;
              goto LAB_1064ce294;
            }
            uVar1 = param_1;
            func_0x00010c0720c0();
            if ((int)uVar1 != 0) {
              ppuVar6 = &PTR____CFConstantStringClassReference_110e51f78;
              goto LAB_1064ce294;
            }
            uVar1 = param_1;
            func_0x00010c0720c0();
            if ((uVar1 & 1) != 0) goto LAB_1064cddfc;
            uVar1 = param_1;
            func_0x00010c0720c0();
            if ((uVar1 & 1) != 0) {
              ppuVar7 = &PTR____CFConstantStringClassReference_110e51f98;
              goto LAB_1064cddfc;
            }
            uVar1 = param_1;
            func_0x00010c0720c0();
            if ((uVar1 & 1) != 0) {
              ppuVar7 = &PTR____CFConstantStringClassReference_110e51fb8;
              goto LAB_1064cddfc;
            }
            uVar1 = param_1;
            func_0x00010c0720c0();
            if ((uVar1 & 1) != 0) {
              ppuVar7 = &PTR____CFConstantStringClassReference_110e51fd8;
              goto LAB_1064cddfc;
            }
            uVar1 = param_1;
            func_0x00010c0720c0();
            if ((uVar1 & 1) != 0) {
              ppuVar7 = &PTR____CFConstantStringClassReference_110e51ff8;
              goto LAB_1064cddfc;
            }
            uVar1 = param_1;
            func_0x00010c0720c0();
            if ((uVar1 & 1) != 0) {
              ppuVar7 = &PTR____CFConstantStringClassReference_110e52018;
              goto LAB_1064cddfc;
            }
            uVar1 = param_1;
            func_0x00010c0720c0();
            if ((uVar1 & 1) != 0) {
              ppuVar7 = &PTR____CFConstantStringClassReference_110e52038;
              goto LAB_1064cddfc;
            }
            uVar1 = param_1;
            func_0x00010c0720c0();
            if ((uVar1 & 1) != 0) {
              ppuVar7 = &PTR____CFConstantStringClassReference_110e52058;
              goto LAB_1064cddfc;
            }
            uVar1 = param_1;
            func_0x00010c0720c0();
            if ((uVar1 & 1) != 0) {
              ppuVar7 = &PTR____CFConstantStringClassReference_110e52078;
              goto LAB_1064cddfc;
            }
            uVar1 = param_1;
            func_0x00010c0720c0();
            if ((int)uVar1 == 0) {
              uVar1 = param_1;
              func_0x00010c0720c0();
              if (((int)uVar1 == 0) && (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)) {
                uVar1 = param_1;
                func_0x00010c0720c0();
                if (((int)uVar1 == 0) && (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0))
                {
                  uVar1 = param_1;
                  func_0x00010c0720c0();
                  if ((uVar1 & 1) == 0) {
                    uVar1 = param_1;
                    func_0x00010c0720c0();
                    if ((uVar1 & 1) == 0) {
                      uVar1 = param_1;
                      func_0x00010c0720c0();
                      if ((uVar1 & 1) == 0) {
                        uVar1 = param_1;
                        func_0x00010c0720c0();
                        if ((uVar1 & 1) == 0) {
                          uVar1 = param_1;
                          func_0x00010c0720c0();
                          if ((uVar1 & 1) == 0) {
                            uVar1 = param_1;
                            func_0x00010c0720c0();
                            if ((uVar1 & 1) == 0) {
                              uVar1 = param_1;
                              func_0x00010c0720c0();
                              if ((uVar1 & 1) == 0) {
                                uVar1 = param_1;
                                func_0x00010c0720c0();
                                if ((uVar1 & 1) == 0) {
                                  uVar1 = param_1;
                                  func_0x00010c0720c0();
                                  if ((uVar1 & 1) == 0) {
                                    uVar1 = param_1;
                                    func_0x00010c0720c0();
                                    if ((uVar1 & 1) == 0) {
                                      uVar1 = param_1;
                                      func_0x00010c0720c0();
                                      if ((uVar1 & 1) == 0) {
                                        uVar1 = param_1;
                                        func_0x00010c0720c0();
                                        if ((uVar1 & 1) == 0) {
                                          uVar1 = param_1;
                                          func_0x00010c0720c0();
                                          if ((uVar1 & 1) == 0) {
                                            uVar1 = param_1;
                                            func_0x00010c0720c0();
                                            if (((((int)uVar1 == 0) &&
                                                 (uVar1 = param_1, func_0x00010c0720c0(),
                                                 (int)uVar1 == 0)) &&
                                                (uVar1 = param_1, func_0x00010c0720c0(),
                                                (int)uVar1 == 0)) &&
                                               ((uVar1 = param_1, func_0x00010c0720c0(),
                                                (int)uVar1 == 0 &&
                                                (uVar1 = param_1, func_0x00010c0720c0(),
                                                (int)uVar1 == 0)))) {
                                              uVar1 = param_1;
                                              func_0x00010c0720c0();
                                              if ((uVar1 & 1) == 0) {
                                                uVar1 = param_1;
                                                func_0x00010c0720c0();
                                                if ((uVar1 & 1) == 0) {
                                                  uVar1 = param_1;
                                                  func_0x00010c0720c0();
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0();
                                                    if ((uVar1 & 1) == 0) {
                                                      uVar1 = param_1;
                                                      func_0x00010c0720c0();
                                                      if ((uVar1 & 1) == 0) {
                                                        uVar1 = param_1;
                                                        func_0x00010c0720c0();
                                                        if ((uVar1 & 1) == 0) {
                                                          uVar1 = param_1;
                                                          func_0x00010c0720c0();
                                                          if ((uVar1 & 1) == 0) {
                                                            uVar1 = param_1;
                                                            func_0x00010c0720c0();
                                                            ppuVar7 = &
                                                  PTR____CFConstantStringClassReference_110e523b8;
                                                  if ((int)uVar1 == 0) {
                                                    ppuVar7 = (undefined **)0x0;
                                                  }
                                                  }
                                                  else {
                                                    ppuVar7 = &
                                                  PTR____CFConstantStringClassReference_110e52398;
                                                  }
                                                  }
                                                  else {
                                                    ppuVar7 = &
                                                  PTR____CFConstantStringClassReference_110e52378;
                                                  }
                                                  }
                                                  else {
                                                    ppuVar7 = &
                                                  PTR____CFConstantStringClassReference_110e52358;
                                                  }
                                                  }
                                                  else {
                                                    ppuVar7 = &
                                                  PTR____CFConstantStringClassReference_110e52338;
                                                  }
                                                  }
                                                  else {
                                                    ppuVar7 = &
                                                  PTR____CFConstantStringClassReference_110e52318;
                                                  }
                                                }
                                                else {
                                                  ppuVar7 = &
                                                  PTR____CFConstantStringClassReference_110e522f8;
                                                }
                                              }
                                              else {
                                                ppuVar7 = &
                                                  PTR____CFConstantStringClassReference_110e522d8;
                                              }
                                            }
                                            else {
                                              ppuVar7 = (undefined **)PTR_PTR_1126c2cb0;
                                              func_0x00010bfe5860(PTR_PTR_1126c2cb0);
                                              _objc_retainAutoreleasedReturnValue();
                                            }
                                          }
                                          else {
                                            ppuVar7 = &
                                                  PTR____CFConstantStringClassReference_110e522b8;
                                          }
                                        }
                                        else {
                                          ppuVar7 = &PTR____CFConstantStringClassReference_110e52298
                                          ;
                                        }
                                      }
                                      else {
                                        ppuVar7 = &PTR____CFConstantStringClassReference_110e52278;
                                      }
                                    }
                                    else {
                                      ppuVar7 = &PTR____CFConstantStringClassReference_110e52258;
                                    }
                                  }
                                  else {
                                    ppuVar7 = &PTR____CFConstantStringClassReference_110e52238;
                                  }
                                }
                                else {
                                  ppuVar7 = &PTR____CFConstantStringClassReference_110e52218;
                                }
                              }
                              else {
                                ppuVar7 = &PTR____CFConstantStringClassReference_110e521f8;
                              }
                            }
                            else {
                              ppuVar7 = &PTR____CFConstantStringClassReference_110e521d8;
                            }
                          }
                          else {
                            ppuVar7 = &PTR____CFConstantStringClassReference_110e521b8;
                          }
                        }
                        else {
                          ppuVar7 = &PTR____CFConstantStringClassReference_110e52198;
                        }
                      }
                      else {
                        ppuVar7 = &PTR____CFConstantStringClassReference_110e52178;
                      }
                    }
                    else {
                      ppuVar7 = &PTR____CFConstantStringClassReference_110e52158;
                    }
                  }
                  else {
                    ppuVar7 = &PTR____CFConstantStringClassReference_110e52138;
                  }
                  goto LAB_1064cddfc;
                }
                ppuVar6 = &PTR____CFConstantStringClassReference_110e52118;
              }
              else {
                ppuVar6 = &PTR____CFConstantStringClassReference_110e520f8;
              }
              ppuVar7 = &PTR____CFConstantStringClassReference_110e520d8;
            }
            else {
              ppuVar6 = &PTR____CFConstantStringClassReference_110e520b8;
              ppuVar7 = &PTR____CFConstantStringClassReference_110e52098;
            }
          }
          else {
            ppuVar6 = &PTR____CFConstantStringClassReference_110e51f38;
LAB_1064ce294:
            ppuVar7 = &PTR____CFConstantStringClassReference_110e51f18;
          }
        }
        else {
          ppuVar6 = &PTR____CFConstantStringClassReference_110e51dd8;
LAB_1064ce114:
          ppuVar7 = &PTR____CFConstantStringClassReference_110e51db8;
        }
      }
      else {
        ppuVar6 = &PTR____CFConstantStringClassReference_110e51d78;
LAB_1064ce088:
        ppuVar7 = &PTR____CFConstantStringClassReference_110e51d58;
      }
    }
    else {
      uVar2 = param_3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf1f3c0();
      _objc_release(uVar2);
      if ((int)uVar3 != 0) {
        lVar4 = param_4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c067fc0();
        _objc_release(lVar4);
        if (lVar5 == 1) {
          ppuVar7 = &PTR____CFConstantStringClassReference_110e51c78;
          goto LAB_1064cddfc;
        }
        if (lVar5 == 2) {
          ppuVar7 = &PTR____CFConstantStringClassReference_110e51c98;
          goto LAB_1064cddfc;
        }
      }
      ppuVar6 = &PTR____CFConstantStringClassReference_110e51cd8;
LAB_1064ce05c:
      ppuVar7 = &PTR____CFConstantStringClassReference_110e51cb8;
    }
    if (param_2 == 0) {
      ppuVar7 = ppuVar6;
    }
  }
  else {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e51c38;
    if (param_2 == 0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110e51c58;
    }
  }
  _objc_retain(ppuVar7);
LAB_1064cddfc:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 1064ce84c; end: 1064cf2f3;  */

void FUN_1064ce84c(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c08fa60();
  if (uVar1 == 0) {
    puVar4 = (undefined *)0x0;
    goto LAB_1064cec3c;
  }
  _objc_retain(param_1);
  _objc_retain(param_3);
  if (param_5 - 1U < 3) {
    uVar1 = param_1;
    func_0x00010c0720c0();
    if (((((((int)uVar1 == 0) && (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)) &&
          (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)) &&
         ((uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0 &&
          (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)))) &&
        (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)) &&
       ((uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0 &&
        (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)))) {
      uVar1 = param_1;
      func_0x00010c0720c0();
      if ((int)uVar1 == 0) {
        uVar1 = param_1;
        func_0x00010c0720c0();
        if ((int)uVar1 == 0) {
          uVar1 = param_1;
          func_0x00010c0720c0();
          if ((((((int)uVar1 == 0) && (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)) &&
               (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)) &&
              (((uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0 &&
                (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)) &&
               ((uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0 &&
                ((uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0 &&
                 (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)))))))) &&
             ((((uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0 &&
                (((uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0 &&
                  (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)) &&
                 (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)))) &&
               (((((uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0 &&
                   (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)) &&
                  (((uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0 &&
                    ((uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0 &&
                     (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)))) &&
                   (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)))) &&
                 ((((((uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0 &&
                      (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)) &&
                     (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)) &&
                    ((uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0 &&
                     (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)))) &&
                   ((uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0 &&
                    ((uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0 &&
                     (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)))))) &&
                  (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)))) &&
                ((((((uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0 &&
                     (uVar1 = param_1, func_0x00010c0720c0(), (uVar1 & 1) == 0)) &&
                    (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)) &&
                   (((uVar1 = param_1, func_0x00010c0720c0(), (uVar1 & 1) == 0 &&
                     (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)) &&
                    ((uVar1 = param_1, func_0x00010c0720c0(), (uVar1 & 1) == 0 &&
                     ((uVar1 = param_1, func_0x00010c0720c0(), (uVar1 & 1) == 0 &&
                      (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)))))))) &&
                  (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)) &&
                 (((uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0 &&
                   (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)) &&
                  (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)))))))) &&
              (((uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0 &&
                (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0)) &&
               ((uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0 &&
                ((uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0 &&
                 (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 == 0))))))))))
          goto LAB_1064ceb04;
          goto LAB_1064ceb4c;
        }
        uVar1 = param_3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf1f3c0();
        _objc_release(uVar1);
      }
      else {
        uVar1 = param_3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf1f3c0();
        _objc_release(uVar1);
      }
      if ((uVar2 & 1) != 0) goto LAB_1064ceb04;
    }
LAB_1064ceb4c:
    puVar5 = PTR_PTR_1126cb138;
    func_0x00010c23b840();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_1064ceb04:
    puVar5 = (undefined *)0x0;
  }
  _objc_release(param_3);
  _objc_release(param_1);
  if (puVar5 == (undefined *)0x0) {
    uVar1 = param_1;
    FUN_1064cdcdc(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c08fa60();
    if (uVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126c2cb0;
      func_0x00010bfe5b20();
      puVar4 = PTR_PTR_1126cb138;
      if (puVar3 == (undefined *)0x0) {
        func_0x00010bfe57c0(PTR_PTR_1126cb138);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c23b840(PTR_PTR_1126cb138);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(uVar1);
  }
  else {
    _objc_retain(puVar5);
    puVar4 = puVar5;
  }
  _objc_release(puVar5);
LAB_1064cec3c:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1064cf2f4; end: 1064cf377; -[SCFeedAppUserLifecycleObserver onUserLoggedIn] */

void FUN_1064cf2f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2836e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f2c0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064cf378; end: 1064cf3fb; -[SCFeedAppUserLifecycleObserver onUserRegistered] */

void FUN_1064cf378(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2836e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f2c0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064cf3fc; end: 1064cf51b; -[SCFeedAppUserLifecycleObserver onAppWillEnterForeground] */

void FUN_1064cf3fc(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2836e0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47000();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47000();
  _objc_release(uVar2);
  cVar1 = *(char *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (cVar1 == '\x01') {
    func_0x00010c24f2c0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286120();
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + 0x18) = 0;
    return;
  }
  func_0x00010c24f2c0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1064cf51c; end: 1064cf57b; -[SCFeedAppUserLifecycleObserver onAppDidEnterBackground] */

void FUN_1064cf51c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2836e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064cf57c; end: 1064cf57f; -[SCFeedAppUserLifecycleObserver onAppWillResignActive] */

void FUN_1064cf57c(void)

{
  return;
}



/* Entry: 1064cf580; end: 1064cf5df; -[SCFeedAppUserLifecycleObserver onAppWillTerminate] */

void FUN_1064cf580(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2836e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064cf5e0; end: 1064cf60f; -[SCFeedAppUserLifecycleObserver .cxx_destruct] */

void FUN_1064cf5e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064cf610; end: 1064cfa27;  */

undefined8 *** FUN_1064cf610(undefined8 ***param_1)

{
  undefined8 uVar1;
  undefined8 **ppuVar2;
  undefined1 uVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  undefined8 ***pppuVar12;
  undefined8 ***pppuVar13;
  undefined8 ***pppuVar14;
  undefined8 ***pppuVar15;
  undefined8 ***pppuVar16;
  undefined8 ***pppuVar17;
  undefined8 ***pppuVar18;
  undefined8 ***pppuVar19;
  undefined *puVar20;
  undefined8 ***pppuVar21;
  undefined8 **ppuVar22;
  undefined ***pppuVar23;
  undefined8 **ppuVar24;
  undefined1 in_w5;
  undefined1 in_w6;
  undefined8 **in_x7;
  undefined8 **ppuStack_2c0;
  undefined *puStack_2b8;
  undefined8 **ppuStack_2b0;
  undefined8 **ppuStack_2a8;
  undefined8 **ppuStack_2a0;
  undefined8 **ppuStack_298;
  undefined8 **ppuStack_290;
  undefined8 **ppuStack_288;
  undefined8 **ppuStack_280;
  undefined8 **ppuStack_278;
  undefined8 **ppuStack_270;
  undefined8 **ppuStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined8 **ppuStack_250;
  undefined8 *puStack_248;
  undefined8 **ppuStack_240;
  undefined8 **ppuStack_238;
  undefined8 **ppuStack_230;
  undefined8 **ppuStack_228;
  undefined8 **ppuStack_220;
  undefined8 **ppuStack_218;
  undefined8 **ppuStack_210;
  undefined8 **ppuStack_208;
  undefined8 **ppuStack_200;
  undefined8 **ppuStack_1f8;
  undefined8 **ppuStack_1f0;
  undefined8 **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined8 **ppuStack_128;
  undefined8 **ppuStack_120;
  undefined8 **ppuStack_118;
  undefined8 **ppuStack_110;
  undefined8 **ppuStack_108;
  undefined8 **ppuStack_100;
  undefined8 **ppuStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 **ppuStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined8 **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar9 = param_1;
  func_0x00010b0af02c();
  _objc_retainAutoreleasedReturnValue();
  pppuVar10 = pppuVar9;
  if (*(char *)(param_1 + 4) == '\x01') {
    pppuVar10 = (undefined8 ***)PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuStack_250 = pppuVar9;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  ppuStack_1e0 = &PTR____CFConstantStringClassReference_110e36318;
  ppuStack_228 = pppuVar10;
  func_0x00010b0af044();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110e45eb8;
  ppuStack_1e8 = pppuVar9;
  ppuStack_128 = pppuVar9;
  func_0x00010b0af05c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110e81a98;
  ppuStack_1f0 = pppuVar9;
  ppuStack_120 = pppuVar9;
  func_0x00010b0af074();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110f483f8;
  ppuStack_1f8 = pppuVar9;
  ppuStack_118 = pppuVar9;
  func_0x00010b0af08c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110f48458;
  ppuStack_200 = pppuVar9;
  ppuStack_110 = pppuVar9;
  func_0x00010b0af0a4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110f48478;
  ppuStack_208 = pppuVar9;
  ppuStack_108 = pppuVar9;
  func_0x00010b0af0bc();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110f48498;
  ppuStack_210 = pppuVar9;
  ppuStack_100 = pppuVar9;
  func_0x00010b0af0d4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110f48418;
  ppuStack_218 = pppuVar9;
  ppuStack_f8 = pppuVar9;
  func_0x00010b0af0ec();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110f48438;
  ppuStack_220 = pppuVar9;
  ppuStack_f0 = pppuVar9;
  func_0x00010b0aefcc();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_198 = &PTR____CFConstantStringClassReference_110f485f8;
  ppuStack_230 = pppuVar9;
  ppuStack_e8 = pppuVar9;
  func_0x00010b0af104();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_190 = &PTR____CFConstantStringClassReference_110f48618;
  ppuStack_188 = &PTR____CFConstantStringClassReference_110f48538;
  ppuStack_180 = &PTR____CFConstantStringClassReference_110f48578;
  ppuStack_238 = pppuVar9;
  ppuStack_e0 = pppuVar9;
  ppuStack_d8 = pppuVar10;
  ppuStack_d0 = pppuVar10;
  func_0x00010b0af29c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_178 = &PTR____CFConstantStringClassReference_110f48558;
  ppuStack_240 = pppuVar9;
  ppuStack_c8 = pppuVar9;
  func_0x00010b0af11c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_170 = &PTR____CFConstantStringClassReference_110f48598;
  pppuVar11 = pppuVar9;
  ppuStack_c0 = pppuVar9;
  func_0x00010b0af2b4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_168 = &PTR____CFConstantStringClassReference_110f484f8;
  pppuVar12 = pppuVar11;
  ppuStack_b8 = pppuVar11;
  func_0x00010b0af0bc();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_160 = &PTR____CFConstantStringClassReference_110f48518;
  pppuVar13 = pppuVar12;
  ppuStack_b0 = pppuVar12;
  func_0x00010b0af0d4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_158 = &PTR____CFConstantStringClassReference_110f484d8;
  pppuVar14 = pppuVar13;
  ppuStack_a8 = pppuVar13;
  func_0x00010b0aefcc();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_150 = &PTR____CFConstantStringClassReference_110f484b8;
  pppuVar15 = pppuVar14;
  ppuStack_a0 = pppuVar14;
  func_0x00010b0af2cc();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_148 = &PTR____CFConstantStringClassReference_110f485b8;
  pppuVar16 = pppuVar15;
  ppuStack_98 = pppuVar15;
  func_0x00010b0af2cc();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_140 = &PTR____CFConstantStringClassReference_110ecc178;
  pppuVar17 = pppuVar16;
  ppuStack_90 = pppuVar16;
  func_0x00010b0aeec4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_138 = &PTR____CFConstantStringClassReference_110f485d8;
  pppuVar18 = pppuVar17;
  ppuStack_88 = pppuVar17;
  func_0x00010b0af2e4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_130 = &PTR____CFConstantStringClassReference_110f483d8;
  pppuVar19 = pppuVar18;
  ppuStack_80 = pppuVar18;
  func_0x00010b0af134();
  _objc_retainAutoreleasedReturnValue();
  pppuVar10 = &ppuStack_128;
  pppuVar23 = &ppuStack_1e0;
  ppuVar24 = (undefined8 **)0x17;
  puVar20 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_78 = pppuVar19;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c39a0;
  puRam00000001136c39a0 = puVar20;
  _objc_release(uVar1);
  _objc_release(pppuVar19);
  _objc_release(pppuVar18);
  _objc_release(pppuVar17);
  _objc_release(pppuVar16);
  _objc_release(pppuVar15);
  _objc_release(pppuVar14);
  _objc_release(pppuVar13);
  _objc_release(pppuVar12);
  _objc_release(pppuVar11);
  _objc_release(pppuVar9);
  _objc_release(ppuStack_240);
  _objc_release(ppuStack_238);
  _objc_release(ppuStack_230);
  _objc_release(ppuStack_220);
  _objc_release(ppuStack_218);
  _objc_release(ppuStack_210);
  _objc_release(ppuStack_208);
  _objc_release(ppuStack_200);
  _objc_release(ppuStack_1f8);
  _objc_release(ppuStack_1f0);
  _objc_release(ppuStack_1e8);
  pppuVar21 = (undefined8 ***)ppuStack_228;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppuVar21;
  }
  ___stack_chk_fail();
  ppuVar8 = ppuStack_218;
  ppuVar7 = ppuStack_220;
  ppuVar6 = ppuStack_228;
  ppuVar5 = ppuStack_230;
  ppuVar4 = ppuStack_238;
  ppuVar2 = ppuStack_250;
  pcStack_258 = FUN_1064cfa28;
  ppuStack_2b0 = pppuVar16;
  ppuStack_2a8 = pppuVar15;
  ppuStack_2a0 = pppuVar14;
  ppuStack_298 = pppuVar13;
  ppuStack_290 = pppuVar12;
  ppuStack_288 = pppuVar11;
  ppuStack_280 = pppuVar9;
  ppuStack_278 = pppuVar19;
  ppuStack_270 = pppuVar17;
  ppuStack_268 = pppuVar18;
  puStack_260 = &stack0xfffffffffffffff0;
  _objc_retain(pppuVar10);
  _objc_retain(pppuVar23);
  _objc_retain(ppuVar24);
  _objc_retain(in_x7);
  _objc_retain(ppuVar2);
  _objc_retain(puStack_248);
  _objc_retain(ppuVar4);
  _objc_retain(ppuVar5);
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar7);
  _objc_retain(ppuVar8);
  puStack_2b8 = PTR_PTR_1126f17f8;
  pppuVar9 = &ppuStack_2c0;
  ppuStack_2c0 = pppuVar21;
  _objc_msgSendSuper2(pppuVar9,PTR_s_init_1125d9248);
  if (pppuVar9 != (undefined8 ***)0x0) {
    uVar3 = ppuStack_240._0_1_;
    _objc_retain(pppuVar10);
    ppuVar22 = pppuVar9[1];
    pppuVar9[1] = pppuVar10;
    _objc_release(ppuVar22);
    _objc_retain(pppuVar23);
    ppuVar22 = pppuVar9[2];
    pppuVar9[2] = pppuVar23;
    _objc_release(ppuVar22);
    _objc_retain(ppuVar24);
    ppuVar22 = pppuVar9[3];
    pppuVar9[3] = ppuVar24;
    _objc_release(ppuVar22);
    *(undefined1 *)(pppuVar9 + 4) = in_w5;
    *(undefined1 *)((long)pppuVar9 + 0x21) = in_w6;
    _objc_retain(in_x7);
    ppuVar22 = pppuVar9[5];
    pppuVar9[5] = in_x7;
    _objc_release(ppuVar22);
    _objc_retain(ppuVar2);
    ppuVar22 = pppuVar9[6];
    pppuVar9[6] = ppuVar2;
    _objc_release(ppuVar22);
    _objc_retain(puStack_248);
    ppuVar22 = pppuVar9[7];
    pppuVar9[7] = (undefined8 **)puStack_248;
    _objc_release(ppuVar22);
    *(undefined1 *)(pppuVar9 + 0xd) = uVar3;
    _objc_retain(ppuVar4);
    ppuVar22 = pppuVar9[8];
    pppuVar9[8] = ppuVar4;
    _objc_release(ppuVar22);
    _objc_retain(ppuVar5);
    ppuVar22 = pppuVar9[9];
    pppuVar9[9] = ppuVar5;
    _objc_release(ppuVar22);
    _objc_retain(ppuVar6);
    ppuVar22 = pppuVar9[10];
    pppuVar9[10] = ppuVar6;
    _objc_release(ppuVar22);
    _objc_retain(ppuVar7);
    ppuVar22 = pppuVar9[0xb];
    pppuVar9[0xb] = ppuVar7;
    _objc_release(ppuVar22);
    _objc_retain(ppuVar8);
    ppuVar22 = pppuVar9[0xc];
    pppuVar9[0xc] = ppuVar8;
    _objc_release(ppuVar22);
  }
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(puStack_248);
  _objc_release(ppuVar2);
  _objc_release(in_x7);
  _objc_release(ppuVar24);
  _objc_release(pppuVar23);
  _objc_release(pppuVar10);
  return pppuVar9;
}



/* Entry: 1064cfa28; end: 1064cfcc3; -[SCFriendsFeedActionTextGenerator initWithFriendsFeedIconGenerator:sponsoredSnapAdResponseParser:userId:isRTL:tapToContinueEnabled:isHideStaleTimestampsEnabled:merlinSublabelVariant:dttrSublabelEducationVariant:disableLegacyGroupsFeedDataCoordinator:myAIFriendsFeedRotationStringsProvider:suggestionInFriendsFeedEnabled:enableFFSublabelColorChange:friendsFeedFontSizeVariant:enableAvenirNextVariable:] */

undefined8 *
FUN_1064cfa28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_68 = PTR_PTR_1126f17f8;
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
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 4) = param_6;
    *(undefined1 *)((long)puVar1 + 0x21) = param_7;
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xd) = param_11;
    _objc_retain(param_13);
    uVar2 = puVar1[8];
    puVar1[8] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[9];
    puVar1[9] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[10];
    puVar1[10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_17;
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1064cfcc4; end: 1064d03cb; -[SCFriendsFeedActionTextGenerator actionTextForFeedItem:isJustViewedSnap:staleContent:] */

void FUN_1064cfcc4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 in_stack_fffffffffffffe70;
  undefined4 uVar21;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  uVar21 = (undefined4)((ulong)in_stack_fffffffffffffe70 >> 0x20);
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar4 = &UNK_10f380244;
  func_0x0001000ba800(&UNK_10f380244);
  uVar6 = param_3;
  func_0x00010bef0e60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x000100bf4a30();
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x000107cfb628(param_3,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x48));
  uVar1 = (uint)uVar10 ^ 1;
  if ((uVar1 & (uint)uVar6) == 1) {
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar5;
    func_0x00010bf1f3c0();
    _objc_release(uVar5);
    if ((int)uVar20 == 0) {
      uVar7 = *(ulong *)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010c2827c0();
      _objc_release(uVar7);
      if (uVar6 == 2) {
        func_0x00010b0af98c();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x000107d05a0c();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1064d0338;
      }
      if (uVar6 == 1) {
        func_0x00010b0af974();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x000107d05a0c();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1064d0338;
      }
      goto LAB_1064cfe28;
    }
    uVar6 = *(ulong *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfc9aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar6 = uVar7;
    func_0x00010c08fa60();
    if (uVar6 != 0) {
      uVar6 = uVar7;
      func_0x000107d05a0c(uVar7,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1064d0338;
    }
    uVar10 = *(ulong *)(param_1 + 0x40);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010bfc5580();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x000107d05a0c();
    _objc_retainAutoreleasedReturnValue();
LAB_1064d00ec:
    _objc_release(uVar8);
  }
  else {
LAB_1064cfe28:
    uVar6 = param_3;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    if (uVar6 == 0) {
LAB_1064cfe8c:
      if ((uVar10 & 1) == 0) {
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x000107cf97e4();
        _objc_release(uVar7);
        if ((int)uVar6 == 0) {
          func_0x00010b0af14c();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar7;
          func_0x000107d05a0c();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010b0afb24();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar7;
          func_0x000107d05a0c();
          _objc_retainAutoreleasedReturnValue();
        }
        goto LAB_1064d0338;
      }
    }
    else {
      uVar8 = param_3;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c0cb940();
      _objc_retainAutoreleasedReturnValue();
      if (uVar9 == 0) {
        _objc_release(uVar8);
        _objc_release(uVar6);
        goto LAB_1064cfe8c;
      }
      _objc_release();
      _objc_release(uVar8);
      _objc_release(uVar6);
    }
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c0cb940();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar6);
    _objc_release(uVar7);
    if (((uint)uVar8 & uVar1) == 1) {
      func_0x00010b0afddc();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x000107d05a0c();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1064d0338;
    }
    uVar6 = param_3;
    func_0x000107cf83f8(param_3,*(undefined8 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x68));
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x000107cf8184();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if ((uint)uVar10 != 0) {
      uVar10 = param_3;
      func_0x00010bef0e60(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      func_0x00010bef0c80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_3;
      func_0x00010bf96da0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar10;
      FUN_1064d03cc(uVar10,uVar8,uVar9,*(undefined8 *)(param_1 + 0x18),uVar7,
                    *(undefined1 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x50),
                    *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      goto LAB_1064d00ec;
    }
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x3032000000;
    pcStack_80 = FUN_1064d06f4;
    uStack_78 = 0x1064d0704;
    uStack_70 = 0;
    if (param_5 == 0) {
LAB_1064d0148:
      uVar10 = param_3;
      FUN_1064d0994(param_3,*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x000100bf39e4();
      uVar8 = param_3;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c0cb340();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = param_3;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c0cb940();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)(param_1 + 0x18);
      uVar13 = param_3;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = param_3;
      func_0x000107cfb350();
      uVar15 = param_3;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x00010c06f680();
      uVar2 = *(undefined1 *)(param_1 + 0x20);
      uVar3 = *(undefined1 *)(param_1 + 0x21);
      uVar17 = param_3;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c11ed40();
      uVar19 = param_3;
      FUN_1064d0aa8(param_3,uVar9,uVar12,uVar10,uVar7,param_4,uVar20,uVar13,
                    CONCAT71(CONCAT61(CONCAT51(CONCAT41(uVar21,uVar3),uVar2),(char)uVar16),
                             (char)uVar14),uVar18,(char)uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = puStack_90[5];
      puStack_90[5] = uVar19;
      _objc_release(uVar20);
      _objc_release(uVar17);
      _objc_release(uVar15);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar9);
      _objc_release(uVar8);
      uVar6 = puStack_90[5];
      if (uVar6 == 0) {
        func_0x00010b0af14c();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar8;
        func_0x000107d05ce0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
      }
      else {
        _objc_retain(uVar6);
      }
      _objc_release(uVar10);
    }
    else {
      func_0x00010c0c0200(param_5);
      uVar6 = puStack_90[5];
      if (uVar6 == 0) goto LAB_1064d0148;
      _objc_retain(uVar6);
    }
    __Block_object_dispose(&uStack_98,8);
    uVar10 = uStack_70;
  }
  _objc_release(uVar10);
LAB_1064d0338:
  _objc_release(uVar7);
  func_0x0001000e2a84(puVar4);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1064d03cc; end: 1064d06f3;  */

void FUN_1064d03cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = &UNK_10f380299;
  func_0x0001000ba800();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1064d06f4;
  uStack_88 = 0x1064d0704;
  uStack_80 = 0;
  uVar2 = param_1;
  func_0x00010c10ac80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_3);
  func_0x00010c0bcd20(uVar2);
  _objc_release(uVar2);
  uVar2 = puStack_a0[5];
  _objc_retain(uVar2);
  _objc_release(param_3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1064d06f4; end: 1064d070f;  */

void FUN_1064d06f4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1064d0710; end: 1064d085f;  */

void FUN_1064d0710(double param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x58);
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x60);
  _objc_retain(uVar4);
  _objc_retain(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  func_0x00010bf8d020(param_3);
  func_0x00010c0523a0(-param_1,puVar2);
  func_0x00010bfb5aa0(0x404e000000000000,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar5 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar6 = lVar5;
  func_0x00010c08fa60();
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar5;
    func_0x000107d05ce0(lVar5,puVar3,uVar4,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar5);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar4);
  lVar5 = *(long *)(*(long *)(param_2 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1064d0860; end: 1064d0993;  */

void FUN_1064d0860(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  _objc_retain(param_2);
  _objc_retain(uVar3);
  _objc_retain(uVar1);
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010c0cb9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    _objc_release();
    if (lVar5 == 0) {
      func_0x00010b0af8fc();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x000107d05a0c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar4 = param_2;
      FUN_1064d3930();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010b0af914();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x000107d05ce0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    _objc_release(lVar4);
  }
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar5;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064d0994; end: 1064d0aa7;  */

void FUN_1064d0994(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf866a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x000100bf39e4();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x000107cffb6c(uVar2,8);
  if ((int)uVar3 == 0) {
    if ((uVar1 & 1) == 0) goto LAB_1064d0a44;
  }
  else {
    uVar4 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    if ((((uint)uVar5 | (uint)uVar1) & 1) == 0) {
LAB_1064d0a44:
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bfb5aa0(0x4024000000000000,PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1064d0a80;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_1064d0a80:
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1064d0aa8; end: 1064d1677;  */

void FUN_1064d0aa8(undefined *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  char in_stack_00000010;
  undefined *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined *puStack_478;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000038);
  puVar2 = &UNK_10f380359;
  func_0x0001000ba800();
  if (in_stack_00000010 == '\0') {
    ppuStack_d8 = &puStack_e0;
    puStack_e0 = (undefined *)0x0;
    pcStack_d0 = (code *)0x3032000000;
    pcStack_c8 = FUN_1064d06f4;
    uStack_c0 = 0x1064d0704;
    uStack_b8 = 0;
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(in_stack_00000030);
    _objc_retain(in_stack_00000038);
    _objc_retain(param_2);
    _objc_retain(param_1);
    _objc_retain(param_5);
    _objc_retain(param_7);
    _objc_retain(in_stack_00000020);
    _objc_retain(in_stack_00000028);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(in_stack_00000028);
    _objc_retain(in_stack_00000030);
    _objc_retain(in_stack_00000038);
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(in_stack_00000028);
    _objc_retain(in_stack_00000030);
    _objc_retain(in_stack_00000038);
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(in_stack_00000028);
    _objc_retain(in_stack_00000030);
    _objc_retain(in_stack_00000038);
    _objc_retain(in_stack_00000028);
    _objc_retain(param_2);
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(in_stack_00000030);
    _objc_retain(in_stack_00000038);
    _objc_retain(param_7);
    _objc_retain(in_stack_00000030);
    _objc_retain(in_stack_00000038);
    _objc_retain(param_4);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_retain(param_7);
    _objc_retain(in_stack_00000028);
    _objc_retain(in_stack_00000030);
    _objc_retain(in_stack_00000038);
    _objc_retain(param_5);
    _objc_retain(param_7);
    _objc_retain(param_4);
    _objc_retain(in_stack_00000028);
    _objc_retain(in_stack_00000030);
    _objc_retain(in_stack_00000038);
    func_0x00010c0bfe20(param_2);
    puVar12 = ppuStack_d8[5];
    _objc_retain(puVar12);
    _objc_release(in_stack_00000038);
    _objc_release(in_stack_00000030);
    _objc_release(in_stack_00000028);
    _objc_release(param_4);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(in_stack_00000038);
    _objc_release(in_stack_00000030);
    _objc_release(in_stack_00000028);
    _objc_release(param_7);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_4);
    _objc_release(in_stack_00000038);
    _objc_release(in_stack_00000030);
    _objc_release(param_7);
    _objc_release(in_stack_00000038);
    _objc_release(in_stack_00000030);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(in_stack_00000028);
    _objc_release(in_stack_00000038);
    _objc_release(in_stack_00000030);
    _objc_release(in_stack_00000028);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(in_stack_00000038);
    _objc_release(in_stack_00000030);
    _objc_release(in_stack_00000028);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(in_stack_00000038);
    _objc_release(in_stack_00000030);
    _objc_release(in_stack_00000028);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(in_stack_00000028);
    _objc_release(in_stack_00000020);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_1);
    _objc_release(param_2);
    _objc_release(in_stack_00000038);
    _objc_release(in_stack_00000030);
    _objc_release(param_4);
    _objc_release(param_3);
    __Block_object_dispose(&puStack_e0,8);
    _objc_release(uStack_b8);
    goto LAB_1064d15b0;
  }
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000038);
  puVar3 = in_stack_00000018;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x000107cfb510();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar4 == (undefined *)0x0) || (puVar12 = puVar3, func_0x00010c07b4e0(), (int)puVar12 == 0))
  {
LAB_1064d1288:
    puVar5 = (undefined *)0x0;
    puStack_478 = (undefined *)0x0;
    bVar1 = true;
  }
  else {
    puStack_478 = puVar3;
    func_0x00010c0f3e20();
    _objc_retainAutoreleasedReturnValue();
    if (puStack_478 == (undefined *)0x0) goto LAB_1064d1288;
    puVar5 = puVar3;
    func_0x00010c117da0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
  }
  puVar12 = puVar5;
  func_0x00010c08fa60();
  if ((puVar5 == (undefined *)0x0) || (puVar12 == (undefined *)0x0)) {
    puVar12 = param_1;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar12;
    func_0x000107cf6f88();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c08fa60();
    if (puVar7 == (undefined *)0x0) {
      _objc_release(puVar6);
      _objc_release(puVar12);
    }
    else {
      puVar7 = param_1;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x000107cf6f88();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar12);
      if (puVar8 != (undefined *)0x0) goto LAB_1064d1394;
    }
    if (bVar1) {
      puStack_478 = puVar3;
      func_0x00010c0f3e20();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar12 = puStack_478;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar12;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf20ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar12);
  }
  else {
    _objc_retain(puVar5);
    puVar8 = puVar5;
  }
LAB_1064d1394:
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1064d06f4;
  uStack_88 = 0x1064d0704;
  puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_a0 = &uStack_a8;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_d8 = (undefined **)0xc2000000;
  pcStack_d0 = FUN_1064d796c;
  pcStack_c8 = (code *)&UNK_110926d58;
  puStack_80 = puVar12;
  _objc_retain(param_3);
  uStack_c0 = param_3;
  _objc_retain(in_stack_00000028);
  uStack_b8 = in_stack_00000028;
  puStack_b0 = &uStack_a8;
  _objc_retain(param_3);
  _objc_retain(in_stack_00000028);
  func_0x00010c0bfe20(param_2);
  uVar9 = param_3;
  func_0x000107cff274();
  puVar12 = puVar8;
  if (((uVar9 & 1) == 0) && (uVar9 = param_3, func_0x00010c0720c0(), (int)uVar9 == 0)) {
    func_0x000107d05a0c(puVar8,in_stack_00000030,in_stack_00000038);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar11 = puStack_a0[5];
    uVar10 = in_stack_00000030;
    func_0x000107d0561c(in_stack_00000030,in_stack_00000038);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107d05a80(puVar8,uVar11,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
  }
  _objc_release(in_stack_00000028);
  _objc_release(param_3);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(puStack_80);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puStack_478);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000018);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_1);
LAB_1064d15b0:
  func_0x0001000e2a84(puVar2);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1064d1678; end: 1064d19ef; -[SCFriendsFeedActionTextGenerator condensedActionTextForFeedItem:isJustViewedSnap:] */

void FUN_1064d1678(long param_1,undefined8 param_2,undefined *param_3,undefined4 param_4)

{
  undefined2 uVar1;
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
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 in_stack_ffffffffffffff20;
  undefined4 uVar17;
  
  uVar17 = (undefined4)((ulong)in_stack_ffffffffffffff20 >> 0x20);
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x000107cf83f8(param_3,*(undefined8 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x68));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010bef0e60();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar3;
  func_0x000100bf4a30();
  _objc_release(puVar3);
  puVar3 = param_3;
  puVar14 = param_3;
  if ((int)puVar16 == 0) {
    puVar16 = param_3;
    FUN_1064d0994(param_3,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    if (puVar16 == (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      goto LAB_1064d19bc;
    }
    puVar4 = puVar16;
    func_0x00010b0afe0c();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar16;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    puVar6 = puVar16;
    if ((int)puVar5 != 0) {
      func_0x00010b0afe0c();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c09e420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      _objc_release(puVar4);
    }
    puVar16 = param_3;
    func_0x000100bf39e4();
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c0cb940();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    puVar8 = param_3;
    func_0x00010bf96da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_3;
    func_0x000107cfb350();
    puVar10 = param_3;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c06f680();
    uVar1 = *(undefined2 *)(param_1 + 0x20);
    puVar12 = param_3;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c11ed40();
    FUN_1064d0aa8(param_3,puVar4,puVar7,puVar6,puVar2,param_4,uVar15,puVar8,
                  CONCAT71(CONCAT61(CONCAT42(uVar17,uVar1),(char)puVar11),(char)puVar9),puVar13,
                  (char)puVar16);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (puVar14 == (undefined *)0x0) {
      func_0x00010b0af14c();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar3;
      func_0x000107d05ce0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = puVar14;
      func_0x00010bf0e760(puVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x00010c04e840();
    }
  }
  else {
    puVar6 = param_3;
    func_0x00010bef0e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef0c80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf96da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar6;
    FUN_1064d03cc(puVar6,puVar14,puVar3,*(undefined8 *)(param_1 + 0x18),puVar2,
                  *(undefined1 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x50),
                  *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release(puVar14);
  _objc_release(puVar6);
LAB_1064d19bc:
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 1064d19f0; end: 1064d1cd7; -[SCFriendsFeedActionTextGenerator actionTextWithFeedIconForFeedItem:isJustViewedSnap:birthday:] */

void FUN_1064d19f0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  func_0x000107d05810(uVar2,*(undefined8 *)(param_2 + 0x60));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2f960();
  lVar3 = param_2;
  dVar8 = param_1;
  func_0x00010beef160();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    lVar4 = lVar3;
    func_0x00010bf0dde0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      func_0x00010bf2f960(lVar4);
      param_1 = dVar8;
    }
    _objc_release(lVar4);
  }
  lVar5 = *(long *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100bf377c(param_4);
  lVar4 = lVar5;
  func_0x00010bfe5520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_retain(lVar4);
  if (lVar4 != 0) {
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_1064d06f4;
    uStack_80 = 0x1064d0704;
    uStack_78 = 0;
    func_0x00010c0be400(lVar4);
    lVar5 = puStack_98[5];
    _objc_retain(lVar5);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
    _objc_release(lVar4);
    if (lVar5 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
      _objc_opt_new(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
      func_0x00010c1a9f00();
      func_0x00010c1739e0(0,(param_1 + -20.0) * 0.5,0x4034000000000000,0x4034000000000000,puVar6);
      puVar7 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      func_0x00010bf0e420(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf069e0(puVar1);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(lVar5);
    }
  }
  func_0x00010bf069e0(puVar1);
  puVar6 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1064d1cd8; end: 1064d1ddb; -[SCFriendsFeedActionTextGenerator shortenedActionTextForFeedItem:staleContent:] */

void FUN_1064d1cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1064d06f4;
  uStack_40 = 0x1064d0704;
  uStack_38 = 0;
  func_0x00010c0c0200(param_4);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064d1ddc; end: 1064d1f0f;  */

void FUN_1064d1ddc(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  _objc_retain(param_2);
  _objc_retain(uVar3);
  _objc_retain(uVar1);
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010c0cb9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    _objc_release();
    if (lVar5 == 0) {
      func_0x00010b0af8fc();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x000107d05a0c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar4 = param_2;
      FUN_1064d3930();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010b0af92c();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x000107d05ce0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    _objc_release(lVar4);
  }
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar5;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064d1f10; end: 1064d1fab; -[SCFriendsFeedActionTextGenerator .cxx_destruct] */

void FUN_1064d1f10(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064d1fac; end: 1064d221b;  */

void FUN_1064d1fac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107d0561c(uVar1,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_2);
  _objc_retain(uVar5);
  uVar6 = param_2;
  func_0x00010c07cb80();
  if ((int)uVar6 == 0) {
    uVar3 = param_2;
    func_0x00010bf28700();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_1064d06f4;
    uStack_80 = 0x1064d0704;
    uStack_78 = 0;
    _objc_retain();
    _objc_retain(uVar3);
    _objc_retain(param_2);
    func_0x00010c0c0020(uVar5);
    uVar6 = puStack_98[5];
    _objc_retain(uVar6);
    _objc_release(param_2);
    _objc_release(uVar3);
    _objc_release(uVar3);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
    _objc_release(uVar3);
  }
  else {
    func_0x00010b0afd64();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar5);
  _objc_release(param_2);
  uVar5 = uVar6;
  func_0x000107d05a80(uVar6,puVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar5;
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1064d221c; end: 1064d25b7;  */

void FUN_1064d221c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_2);
  lVar10 = param_2;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar10;
  func_0x000100504554();
  _objc_release(lVar10);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000107cfe034();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if ((uVar3 & 1) == 0) {
    func_0x000107d0573c(uVar4,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107d0561c();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf50280(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar1);
  _objc_retain(uVar12);
  _objc_retain(uVar5);
  lVar7 = lVar1;
  func_0x00010bf529e0();
  lVar10 = 0;
  if ((lVar7 == 0) || (lVar10 = lVar1, func_0x00010bf04920(), (int)lVar10 != 0)) {
    func_0x00010b0afcec();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar10;
    func_0x00010b0afd1c();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010b0afd4c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b0afcd4();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar10;
    func_0x00010b0afd04();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010b0afd34();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1064d06f4;
  uStack_88 = 0x1064d0704;
  uStack_80 = 0;
  _objc_retain(lVar10);
  _objc_retain(lVar1);
  _objc_retain(lVar7);
  _objc_retain(lVar10);
  _objc_retain(lVar8);
  func_0x00010c0c0020(uVar12);
  uVar11 = puStack_a0[5];
  _objc_retain(uVar11);
  _objc_release(lVar8);
  _objc_release(lVar10);
  _objc_release(lVar7);
  _objc_release(lVar1);
  _objc_release(lVar10);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar10);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(lVar1);
  uVar12 = uVar11;
  func_0x000107d05a80(uVar11,puVar6,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar9 = *(undefined8 *)(lVar10 + 0x28);
  *(undefined8 *)(lVar10 + 0x28) = uVar12;
  _objc_release(uVar9);
  _objc_release(uVar11);
  _objc_release(uVar5);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1064d25b8; end: 1064d266f;  */

void FUN_1064d25b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b60f8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c27e1c0(param_2);
  _objc_release(param_2);
  func_0x00010c0df840(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0134e0(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064d2670; end: 1064d29d3;  */

void FUN_1064d2670(long param_1,undefined **param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined8 *puStack_e8;
  undefined1 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_2);
  ppuVar3 = param_2;
  func_0x00010bef08c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  ppuVar3 = param_2;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  func_0x00010bf529e0();
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar5 = ppuVar4;
    func_0x00010c08fa60();
    _objc_release(ppuVar3);
    if (ppuVar5 == (undefined **)0x0) goto LAB_1064d2988;
    ppuVar3 = *(undefined ***)(param_1 + 0x20);
    func_0x000107d0561c(ppuVar3,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_2;
    func_0x00010bef08c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar5;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    _objc_release(ppuVar5);
    ppuVar5 = param_2;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_1064d29d4;
    puStack_128 = &UNK_110926958;
    _objc_retain(ppuVar4);
    ppuVar7 = ppuVar5;
    ppuStack_120 = ppuVar4;
    func_0x0001006372a4(ppuVar5,&puStack_140);
    _objc_release(ppuVar5);
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined1 *)(param_1 + 0x40);
    _objc_retain(ppuVar7);
    _objc_retain(uVar12);
    _objc_retain(ppuVar8);
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_1064d06f4;
    uStack_88 = 0x1064d0704;
    uStack_80 = 0;
    ppuVar9 = ppuVar8;
    puStack_a0 = &uStack_a8;
    func_0x00010c08fa60();
    ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar5 = ppuVar8;
    }
    _objc_retain(ppuVar5);
    puStack_d8 = puVar2;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_1064d35a0;
    puStack_c0 = &UNK_110855170;
    puStack_b0 = &uStack_a8;
    _objc_retain(ppuVar5);
    puStack_118 = puVar2;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_1064d36a4;
    puStack_100 = &UNK_1108da890;
    ppuStack_b8 = ppuVar5;
    _objc_retain(ppuVar7);
    ppuStack_f8 = ppuVar7;
    puStack_e8 = &uStack_a8;
    uStack_e0 = uVar1;
    _objc_retain(ppuVar5);
    ppuStack_f0 = ppuVar5;
    func_0x00010c0c0020(uVar12);
    ppuVar9 = ppuStack_f0;
    uVar13 = puStack_a0[5];
    _objc_retain(uVar13);
    _objc_release(ppuVar9);
    _objc_release(ppuStack_f8);
    _objc_release(ppuStack_b8);
    _objc_release(ppuVar5);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_release(ppuVar8);
    _objc_release(uVar12);
    _objc_release(ppuVar7);
    uVar12 = uVar13;
    func_0x000107d05a80(uVar13,puVar6,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar10 = *(undefined8 *)(lVar11 + 0x28);
    *(undefined8 *)(lVar11 + 0x28) = uVar12;
    _objc_release(uVar10);
    _objc_release(uVar13);
    _objc_release(ppuVar7);
    _objc_release(ppuStack_120);
    _objc_release(ppuVar8);
    _objc_release(puVar6);
  }
  _objc_release(ppuVar3);
LAB_1064d2988:
  _objc_release(ppuVar4);
  _objc_release(param_2);
  return;
}



/* Entry: 1064d29d4; end: 1064d2a6f;  */

undefined8 FUN_1064d29d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c15ffa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1064d2a70; end: 1064d3083;  */

void FUN_1064d2a70(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010bf28220();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x1064d2d4c;
    puStack_58 = &UNK_1109269b8;
    _objc_retain(param_2);
    uStack_48 = *(undefined1 *)(param_1 + 0x38);
    lVar3 = lVar2;
    lStack_50 = param_2;
    func_0x000100504554(lVar2,&puStack_70);
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bf529e0();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar2 == 0) {
      func_0x00010b0afd94();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      lVar6 = *(long *)(lVar7 + 0x28);
      *(long *)(lVar7 + 0x28) = lVar2;
    }
    else {
      func_0x00010b0afdc4();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x0001064d2e80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar1 = *(undefined8 *)(lVar7 + 0x28);
      *(undefined **)(lVar7 + 0x28) = puVar4;
      _objc_release(uVar1);
      _objc_release(lVar6);
      lVar6 = lVar2;
    }
    _objc_release(lVar6);
    _objc_release(lVar3);
    lVar3 = lStack_50;
    goto LAB_1064d2d28;
  }
  lVar2 = param_2;
  func_0x00010c2925c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(lVar2);
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    lVar2 = lVar3;
    func_0x00010c280540();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar6 = lVar3;
      func_0x00010c244340();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = 0;
      goto LAB_1064d2c9c;
    }
    _objc_retain();
    lVar7 = lVar2;
    _objc_release(lVar2);
LAB_1064d2cb0:
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010b0afdac();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar1 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar4;
    _objc_release(uVar1);
    lVar6 = lVar7;
  }
  else {
    lVar7 = lVar3;
    func_0x00010c244340();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x000107cfadc4(param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
LAB_1064d2c9c:
    _objc_release(lVar6);
    _objc_release();
    if (lVar2 != 0) goto LAB_1064d2cb0;
    func_0x00010b0afd7c();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    lVar6 = *(long *)(lVar5 + 0x28);
    *(long *)(lVar5 + 0x28) = lVar7;
  }
  _objc_release(lVar6);
  _objc_release(lVar2);
LAB_1064d2d28:
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064d3084; end: 1064d30b3;  */

void FUN_1064d3084(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1064d30b4; end: 1064d33c7;  */

void FUN_1064d30b4(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  uVar2 = *(ulong *)(param_1 + 0x20);
  if (lVar1 == 1) {
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar6);
    uVar2 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    if (uVar2 == 0) goto LAB_1064d33a8;
    uVar2 = param_2;
    func_0x00010c2925c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar4 == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      _objc_retain(uVar7);
      uVar2 = *(ulong *)(lVar1 + 0x28);
      *(undefined8 *)(lVar1 + 0x28) = uVar7;
    }
    else {
      if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
        uVar2 = uVar4;
        func_0x00010c280540();
        _objc_retainAutoreleasedReturnValue();
        if (uVar2 == 0) {
          uVar10 = uVar4;
          func_0x00010c244340();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar10;
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar10);
          uVar10 = 0;
        }
        else {
          _objc_retain();
          uVar10 = uVar2;
        }
      }
      else {
        uVar10 = uVar4;
        func_0x00010c244340(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar10;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_2;
        func_0x000107cfadc4(param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
      }
      _objc_release(uVar10);
      uVar10 = uVar2;
      func_0x000107cf8184();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      uVar7 = *(undefined8 *)(lVar1 + 0x28);
      *(undefined **)(lVar1 + 0x28) = puVar6;
      _objc_release(uVar7);
      _objc_release(uVar10);
    }
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
  else {
    func_0x00010bf529e0();
    if (uVar2 < 2) goto LAB_1064d33a8;
    lVar9 = *(long *)(param_1 + 0x20);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1064d33c8;
    puStack_68 = &UNK_1109269e8;
    _objc_retain(param_2);
    uStack_58 = *(undefined1 *)(param_1 + 0x48);
    uStack_60 = param_2;
    func_0x000100504554(lVar9,&puStack_80);
    lVar1 = lVar9;
    func_0x00010bf529e0();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar1 == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      _objc_retain(uVar7);
      lVar1 = *(long *)(lVar8 + 0x28);
      *(undefined8 *)(lVar8 + 0x28) = uVar7;
    }
    else {
      lVar1 = lVar9;
      func_0x0001064d2e80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      uVar7 = *(undefined8 *)(lVar8 + 0x28);
      *(undefined **)(lVar8 + 0x28) = puVar6;
      _objc_release(uVar7);
    }
    _objc_release(lVar1);
    _objc_release(lVar9);
    uVar3 = uStack_60;
  }
  _objc_release(uVar3);
LAB_1064d33a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064d33c8; end: 1064d3523;  */

void FUN_1064d33c8(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  if (uVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010c2925c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      lVar4 = lVar5;
      func_0x00010c280540();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        lVar7 = lVar5;
        func_0x00010c244340(lVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar7;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
      }
      else {
        _objc_retain(lVar4);
        lVar6 = lVar4;
      }
      _objc_release(lVar4);
    }
    else {
      lVar6 = *(long *)(param_1 + 0x20);
      func_0x000107cfadc4(lVar6,param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar4 = lVar6;
    func_0x000107cf8184(lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1064d3524; end: 1064d359f;  */

ulong FUN_1064d3524(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c154b60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  uVar3 = uVar1;
  func_0x00010c071f40(uVar1);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1064d35a0; end: 1064d36a3;  */

void FUN_1064d35a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = param_2;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x000107cf8184();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
  }
  else {
    lVar2 = lVar1;
    func_0x000107cf8184();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010b0af884();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064d36a4; end: 1064d392f;  */

void FUN_1064d36a4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 == 1) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar1 == 0) goto LAB_1064d3910;
    lVar4 = param_2;
    func_0x00010c2925c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar2 == 0) {
      func_0x00010b0af89c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      lVar8 = *(long *)(lVar5 + 0x28);
      *(undefined **)(lVar5 + 0x28) = puVar3;
    }
    else {
      if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
        lVar4 = lVar2;
        func_0x00010c280540();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 == 0) {
          lVar8 = lVar2;
          func_0x00010c244340();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar8;
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar8);
          lVar8 = 0;
        }
        else {
          _objc_retain();
          lVar8 = lVar4;
        }
      }
      else {
        lVar8 = lVar2;
        func_0x00010c244340(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar8;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_2;
        func_0x000107cfadc4(param_2,lVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
      }
      _objc_release(lVar8);
      lVar8 = lVar4;
      func_0x000107cf8184();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar5 = lVar8;
      func_0x00010b0af884();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar6 = *(undefined8 *)(lVar7 + 0x28);
      *(undefined **)(lVar7 + 0x28) = puVar3;
      _objc_release(uVar6);
      _objc_release(lVar5);
    }
    _objc_release(lVar8);
    _objc_release(lVar4);
  }
  else {
    func_0x00010b0af8b4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    lVar2 = *(long *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar3;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_1064d3910:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064d3930; end: 1064d3b2f;  */

void FUN_1064d3930(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c0cb3a0();
  if ((undefined *)0x1 < puVar1) {
    puVar4 = param_1;
    func_0x00010c0cb9a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
    FUN_1064d3b30();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1064d3b04;
  }
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010c0cb9a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf44660(puVar1,param_2,4,puVar2,puVar3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = puVar4;
  func_0x00010c2bedc0();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((long)puVar2 < 2) {
    if (puVar2 == (undefined *)0x1) {
      func_0x00010b0af8e4();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar1,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1064d3ad0;
    }
    puVar2 = param_1;
    func_0x00010c0cb9a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    FUN_1064d3b30();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = puVar2;
    func_0x00010b0af8cc();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
LAB_1064d3ad0:
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
LAB_1064d3b04:
  _objc_release(puVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064d3b30; end: 1064d3ba3;  */

void FUN_1064d3b30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_retain();
  _objc_alloc_init(puVar1);
  func_0x00010c189b60();
  puVar2 = puVar1;
  func_0x00010c25d400(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1064d3ba4; end: 1064d46cf;  */

void FUN_1064d3ba4(long param_1,undefined **param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined **ppuVar24;
  undefined8 uVar25;
  undefined **ppuStack_c8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  char cStack_68;
  
  _objc_retain(param_2);
  ppuVar9 = param_2;
  func_0x00010c0757e0();
  if ((int)ppuVar9 != 0) {
    iVar8 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0();
    if (iVar8 != 0) {
      ppuVar9 = param_2;
      func_0x00010c281c20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar9;
      func_0x00010c08fa60();
      _objc_release();
      if (ppuVar10 == (undefined **)0x0) {
        func_0x00010b0aefcc();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar9;
        func_0x000107d05ce0();
        _objc_retainAutoreleasedReturnValue();
        lVar22 = *(long *)(*(long *)(param_1 + 0x70) + 8);
        uVar20 = *(undefined8 *)(lVar22 + 0x28);
        *(undefined ***)(lVar22 + 0x28) = ppuVar10;
        _objc_release(uVar20);
        _objc_release(ppuVar9);
      }
    }
  }
  uVar11 = *(ulong *)(param_1 + 0x40);
  func_0x000107cfe528();
  uVar20 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(ulong *)(param_1 + 0x50);
  ppuVar9 = *(undefined ***)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  cVar4 = *(char *)(param_1 + 0x78);
  uVar25 = *(undefined8 *)(param_1 + 0x58);
  cVar5 = *(char *)(param_1 + 0x79);
  cVar6 = *(char *)(param_1 + 0x7a);
  bVar7 = *(byte *)(param_1 + 0x7b);
  ppuVar12 = param_2;
  func_0x00010bf419a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = param_2;
  func_0x00010c2420e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = *(undefined ***)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uVar21 = *(undefined8 *)(param_1 + 0x30);
  uVar23 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar20);
  _objc_retain(ppuVar9);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  _objc_retain(uVar25);
  _objc_retain(ppuVar12);
  _objc_retain(ppuVar13);
  _objc_retain(ppuVar10);
  _objc_retain(uVar3);
  _objc_retain(uVar21);
  _objc_retain(uVar23);
  ppuVar24 = ppuVar9;
  if (cVar5 == '\x01') {
    ppuVar24 = &PTR____CFConstantStringClassReference_110e45eb8;
    _objc_retain(&PTR____CFConstantStringClassReference_110e45eb8);
    _objc_release(ppuVar9);
  }
  ppuVar9 = ppuVar24;
  func_0x00010c0720c0();
  if (((int)ppuVar9 == 0) || (ppuVar9 = ppuVar12, func_0x00010c281e40(), (long)ppuVar9 < 1)) {
    ppuVar9 = ppuVar24;
    func_0x00010c0720c0();
    if ((int)ppuVar9 == 0) {
      ppuVar9 = ppuVar24;
      func_0x00010c0720c0();
      if ((int)ppuVar9 == 0) {
        ppuVar9 = ppuVar24;
        func_0x00010c0720c0();
        if (((ulong)ppuVar9 & 1) == 0) {
          ppuVar9 = ppuVar24;
          func_0x00010c0720c0();
          if (((long)uVar11 < 2) || (((ulong)ppuVar9 & 1) == 0)) goto LAB_1064d3f38;
LAB_1064d3f1c:
          ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (9 < uVar11) {
            func_0x00010b0af494();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1064d409c;
          }
          func_0x00010b0af47c();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          if (1 < (long)uVar11) goto LAB_1064d3f1c;
LAB_1064d3f38:
          puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_80 = 0xc0000000;
          pcStack_78 = FUN_1064cf610;
          puStack_70 = &UNK_110926818;
          cStack_68 = cVar6;
          if (lRam00000001136c39a8 != -1) {
            func_0x00010002a2fc(0x1136c39a8,&puStack_88);
          }
          ppuVar9 = ppuRam00000001136c39a0;
          _objc_retain(ppuRam00000001136c39a0);
          ppuVar14 = ppuVar9;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(ppuVar9);
        ppuVar9 = ppuVar14;
      }
      else {
        ppuVar9 = ppuVar10;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar9;
        func_0x00010c2827c0();
        _objc_release();
        if (ppuVar14 == (undefined **)0x3) {
          func_0x00010b0aeffc();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010b0aefcc();
          _objc_retainAutoreleasedReturnValue();
        }
      }
    }
    else if ((bVar7 & 1) == 0) {
      func_0x00010b0af02c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010b0af464();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    ppuVar9 = ppuVar12;
    func_0x00010c281e40();
    ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((long)uVar11 < 2) {
      if ((long)ppuVar9 < 2) {
        func_0x00010b0af164();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1064d4064;
      }
      func_0x00010b0af38c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
LAB_1064d4060:
      _objc_release(ppuVar9);
      ppuVar9 = ppuVar14;
    }
    else if ((long)ppuVar9 < 2) {
      if (uVar11 < 10) {
        func_0x00010b0af434();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1064d403c;
      }
      func_0x00010b0af44c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (uVar11 < 10) {
        func_0x00010b0af404();
        _objc_retainAutoreleasedReturnValue();
LAB_1064d403c:
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1064d4060;
      }
      func_0x00010b0af41c();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_1064d4064:
    if (cVar6 != '\0') {
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      ppuVar9 = ppuVar14;
    }
  }
LAB_1064d409c:
  uVar15 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf1f3c0();
  _objc_release(uVar15);
  if ((int)uVar16 == 0) {
    func_0x00010bfdc680();
  }
  puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar24;
  func_0x00010c0720c0();
  ppuVar19 = ppuVar9;
  if ((int)ppuVar14 != 0) {
    uVar15 = uVar21;
    func_0x000107d0561c(uVar21,uVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107d05a80(ppuVar9,puVar17,uVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
    goto LAB_1064d4248;
  }
  ppuVar14 = ppuVar24;
  func_0x00010c0720c0();
  if ((int)ppuVar14 != 0) {
LAB_1064d4180:
    func_0x000107d05d70(ppuVar9,uVar2,puVar17,uVar21,uVar23);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1064d4248;
  }
  ppuVar14 = ppuVar24;
  func_0x00010c0720c0();
  if ((int)ppuVar14 != 0) {
LAB_1064d41b4:
    func_0x000107d05ce0(ppuVar9,uVar2,uVar21,uVar23);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1064d4248;
  }
  ppuVar14 = ppuVar24;
  func_0x00010c0720c0();
  if (((((int)ppuVar14 != 0) || (ppuVar14 = ppuVar24, func_0x00010c0720c0(), (int)ppuVar14 != 0)) ||
      (ppuVar14 = ppuVar24, func_0x00010c0720c0(), (int)ppuVar14 != 0)) ||
     (ppuVar14 = ppuVar24, func_0x00010c0720c0(), (int)ppuVar14 != 0)) {
    func_0x000107d05a0c(ppuVar9,uVar21,uVar23);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1064d4248;
  }
  ppuVar14 = ppuVar24;
  func_0x000107cff210();
  if ((int)ppuVar14 != 0) goto LAB_1064d4180;
  ppuStack_c8 = ppuVar24;
  func_0x00010c0720c0();
  if (((ulong)ppuStack_c8 & 1) == 0) {
    ppuStack_c8 = ppuVar24;
    func_0x00010c0720c0();
    if ((uVar1 == 0) || (((ulong)ppuStack_c8 & 1) == 0)) goto LAB_1064d4374;
LAB_1064d434c:
    ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010b0afb54();
    _objc_retainAutoreleasedReturnValue();
LAB_1064d445c:
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuStack_c8);
    ppuStack_c8 = ppuVar14;
LAB_1064d4484:
    ppuVar19 = ppuStack_c8;
    func_0x000107d05ce0(ppuStack_c8,uVar2,uVar21,uVar23);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (uVar1 != 0) goto LAB_1064d434c;
LAB_1064d4374:
    ppuStack_c8 = ppuVar24;
    func_0x00010c0720c0();
    if ((((ulong)ppuStack_c8 & 1) == 0) &&
       (ppuStack_c8 = ppuVar24, func_0x00010c0720c0(), (int)ppuStack_c8 == 0)) {
      ppuStack_c8 = ppuVar24;
      func_0x00010c0720c0();
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar11 = uVar1;
      if (((ulong)ppuStack_c8 & 1) == 0) {
        ppuStack_c8 = ppuVar24;
        func_0x00010c0720c0();
        if (uVar1 != 0) {
          ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          uVar11 = (ulong)ppuStack_c8 & 1;
          goto joined_r0x0001064d4434;
        }
      }
      else {
joined_r0x0001064d4434:
        PTR__OBJC_CLASS___NSString_1126ae4d0 = (undefined *)ppuVar14;
        if (uVar11 != 0) {
          func_0x00010b0afb84();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1064d445c;
        }
      }
      ppuVar14 = ppuVar24;
      func_0x00010c0720c0();
      ppuStack_c8 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((uVar1 == 0) || ((int)ppuVar14 == 0)) {
        ppuVar14 = ppuVar24;
        func_0x00010c0720c0();
        ppuVar18 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar11 = uVar1;
        if (((ulong)ppuVar14 & 1) == 0) {
          ppuVar14 = ppuVar24;
          func_0x00010c0720c0();
          if (uVar1 != 0) {
            ppuVar18 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            uVar11 = (ulong)ppuVar14 & 1;
            goto joined_r0x0001064d455c;
          }
        }
        else {
joined_r0x0001064d455c:
          PTR__OBJC_CLASS___NSString_1126ae4d0 = (undefined *)ppuVar18;
          if (uVar11 != 0) {
            func_0x00010b0afb3c();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14de00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar14);
            ppuVar19 = ppuVar18;
            func_0x000107d05ce0(ppuVar18,uVar2,uVar21,uVar23);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar18);
            goto LAB_1064d4248;
          }
        }
        ppuVar14 = ppuVar24;
        func_0x00010c0720c0();
        if ((int)ppuVar14 == 0) {
          ppuVar14 = ppuVar24;
          func_0x00010c0720c0();
          if ((int)ppuVar14 == 0) {
            func_0x000107d05ce0(ppuVar9,uVar2,uVar21,uVar23);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x00010b0af2e4();
            _objc_retainAutoreleasedReturnValue();
            ppuVar19 = ppuVar14;
            func_0x000107d05ce0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar14);
          }
        }
        else {
          uVar15 = uVar21;
          func_0x000107d0561c(uVar21,uVar23);
          _objc_retainAutoreleasedReturnValue();
          func_0x000107d05a80(ppuVar9,puVar17,uVar15);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar15);
        }
        goto LAB_1064d4248;
      }
      func_0x00010b0afb9c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar14);
      goto LAB_1064d4484;
    }
    ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (cVar4 == '\0') {
      if (uVar1 == 0) goto LAB_1064d41b4;
      func_0x00010b0afb6c();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1064d445c;
    }
    func_0x00010b0af14c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuStack_c8;
    func_0x000107d05a0c();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuStack_c8);
LAB_1064d4248:
  _objc_release(puVar17);
  _objc_release(ppuVar9);
  _objc_release(uVar23);
  _objc_release(uVar21);
  _objc_release(uVar3);
  _objc_release(ppuVar10);
  _objc_release(ppuVar13);
  _objc_release(ppuVar12);
  _objc_release(uVar25);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(ppuVar24);
  _objc_release(uVar20);
  lVar22 = *(long *)(*(long *)(param_1 + 0x70) + 8);
  uVar20 = *(undefined8 *)(lVar22 + 0x28);
  *(undefined ***)(lVar22 + 0x28) = ppuVar19;
  _objc_release(uVar20);
  _objc_release(ppuVar13);
  _objc_release(ppuVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064d46d0; end: 1064d47bf;  */

void FUN_1064d46d0(long param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  return;
}



/* Entry: 1064d47c0; end: 1064d4de7;  */

void FUN_1064d47c0(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 unaff_x26;
  
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf283e0();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar8);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  _objc_retain(uVar3);
  _objc_retain(uVar10);
  uVar6 = uVar1;
  if (param_2 < 2) {
    if (lRam00000001136c39c8 != -1) {
      func_0x00010002a2fc(0x1136c39c8,&PTR___NSConcreteGlobalBlock_110926dd8);
    }
    uVar4 = uRam00000001136c39c0;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010c0720c0();
    if ((int)uVar5 != 0) {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      goto LAB_1064d4908;
    }
LAB_1064d495c:
    unaff_x26 = uVar4;
    func_0x000107d05ce0(uVar4,uVar2,uVar3,uVar10);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_2 != 2) goto LAB_1064d4984;
    if (lRam00000001136c39b8 != -1) {
      func_0x00010002a2fc(0x1136c39b8,&PTR___NSConcreteGlobalBlock_110926db8);
    }
    uVar4 = uRam00000001136c39b0;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010c0720c0();
    if ((int)uVar5 == 0) goto LAB_1064d495c;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
LAB_1064d4908:
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    unaff_x26 = uVar4;
    func_0x000107d05d70(uVar4,uVar2,puVar7,uVar3,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  _objc_release(uVar4);
LAB_1064d4984:
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar8);
  lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar8 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = unaff_x26;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 1064d4de8; end: 1064d5807;  */

void FUN_1064d4de8(long param_1,undefined8 param_2)

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
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar11);
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar12);
  uVar13 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar13);
  uVar14 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar14);
  uVar15 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar15);
  uVar16 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar16);
  uVar17 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar17);
  uVar18 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar18);
  uVar19 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar19);
  uVar20 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar20);
  uVar21 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar21);
  uVar22 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar22);
  uVar23 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar23);
  uVar24 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar24);
  uVar25 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar25);
  uVar26 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar26);
  uVar27 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar27);
  uVar28 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar28);
  uVar29 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar29);
  uVar30 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar30);
  uVar31 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar31);
  uVar32 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar32);
  uVar33 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar33);
  uVar34 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar34);
  uVar35 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar35);
  uVar36 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar36);
  uVar37 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar37);
  uVar38 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar38);
  uVar39 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar39);
  uVar40 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar40);
  uVar41 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar41);
  uVar42 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar42);
  uVar43 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar43);
  uVar44 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar44);
  uVar45 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar45);
  uVar46 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar46);
  uVar47 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar47);
  uVar48 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar48);
  uVar49 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar49);
  uVar50 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar50);
  uVar51 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar51);
  uVar52 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar52);
  uVar53 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar53);
  uVar54 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar54);
  uVar55 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar55);
  uVar56 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar56);
  uVar57 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar57);
  uVar58 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar58);
  uVar59 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar59);
  uVar60 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar60);
  uVar61 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar61);
  uVar62 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar62);
  uVar63 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar63);
  uVar64 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar64);
  uVar65 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar65);
  uVar66 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar66);
  uVar67 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar67);
  uVar68 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar68);
  uVar69 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar69);
  uVar70 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar70);
  uVar71 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar71);
  uVar72 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar72);
  uVar73 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar73);
  uVar74 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar74);
  uVar75 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar75);
  uVar76 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar76);
  uVar77 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar77);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
  func_0x00010c0bc660(param_2);
  _objc_release(uVar1);
  _objc_release(uVar77);
  _objc_release(uVar76);
  _objc_release(uVar75);
  _objc_release(uVar74);
  _objc_release(uVar73);
  _objc_release(uVar72);
  _objc_release(uVar71);
  _objc_release(uVar70);
  _objc_release(uVar69);
  _objc_release(uVar68);
  _objc_release(uVar67);
  _objc_release(uVar66);
  _objc_release(uVar65);
  _objc_release(uVar64);
  _objc_release(uVar63);
  _objc_release(uVar62);
  _objc_release(uVar61);
  _objc_release(uVar60);
  _objc_release(uVar59);
  _objc_release(uVar58);
  _objc_release(uVar57);
  _objc_release(uVar56);
  _objc_release(uVar55);
  _objc_release(uVar54);
  _objc_release(uVar53);
  _objc_release(uVar52);
  _objc_release(uVar51);
  _objc_release(uVar50);
  _objc_release(uVar49);
  _objc_release(uVar48);
  _objc_release(uVar47);
  _objc_release(uVar46);
  _objc_release(uVar45);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
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
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1064d5808; end: 1064d58d3;  */

void FUN_1064d5808(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107cfe528();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_1064d58d4(uVar1,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),param_4,puVar2
                ,*(undefined1 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x48),
                *(undefined8 *)(param_1 + 0x50),uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1064d58d4; end: 1064d63eb;  */

void FUN_1064d58d4(undefined **param_1,long param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,int param_6,undefined **param_7,undefined **param_8,
                  ulong param_9)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  ppuVar1 = param_8;
  _objc_retain(param_8);
  ppuVar5 = param_1;
  if (param_6 != 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e45eb8;
    _objc_retain(&PTR____CFConstantStringClassReference_110e45eb8);
    _objc_release(param_1);
    ppuVar1 = param_1;
  }
  FUN_1064d7d84();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar1 = ppuVar5;
  func_0x00010c0720c0();
  ppuVar4 = ppuVar2;
  if ((int)ppuVar1 == 0) {
    ppuVar1 = ppuVar5;
    func_0x00010c0720c0();
    if ((((ulong)ppuVar1 & 1) != 0) || (ppuVar1 = ppuVar5, func_0x000107cff210(), (int)ppuVar1 != 0)
       ) {
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (1 < (long)param_9) {
        if (param_9 < 10) {
          func_0x00010b0af4ac();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(ppuVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar2);
          ppuVar3 = ppuVar1;
          ppuVar2 = ppuVar4;
        }
        else {
          func_0x00010b0af4c4();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar2;
          ppuVar2 = ppuVar1;
        }
        ppuVar1 = ppuVar3;
        _objc_release(ppuVar1);
      }
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((param_2 != 0) && (param_4 != 0)) {
        func_0x00010b0afbe4();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar2);
        _objc_release(ppuVar1);
        ppuVar2 = ppuVar4;
      }
      ppuVar4 = ppuVar2;
      func_0x000107d05d70(ppuVar2,param_3,param_5,param_7,param_8);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1064d5b20;
    }
    ppuVar1 = ppuVar5;
    func_0x00010c0720c0();
    if ((int)ppuVar1 == 0) {
      ppuVar1 = ppuVar5;
      func_0x00010c0720c0();
      if ((int)ppuVar1 != 0) {
        func_0x000107d05a0c(ppuVar2,param_7,param_8);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1064d5b20;
      }
      ppuVar3 = ppuVar5;
      func_0x00010c0720c0();
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((param_2 != 0) && ((int)ppuVar3 != 0)) {
        func_0x00010b0afb6c();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
        ppuVar4 = ppuVar1;
        func_0x000107d05ce0(ppuVar1,param_3,param_7,param_8);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1064d59e4;
      }
    }
    func_0x000107d05ce0(ppuVar2,param_3,param_7,param_8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar1 = param_7;
    func_0x000107d0561c(param_7,param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107d05a80(ppuVar2,param_5,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
LAB_1064d59e4:
    _objc_release(ppuVar1);
  }
LAB_1064d5b20:
  _objc_release(ppuVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 1064d63ec; end: 1064d6667;  */

void FUN_1064d63ec(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0720c0();
  uVar3 = param_2;
  if (param_1 == 0) {
    func_0x000107d05ce0(param_2,param_3,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x000107d05d70(param_2,param_3,puVar2,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1064d6668; end: 1064d67f7;  */

void FUN_1064d6668(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
  _objc_retain(uVar7);
  _objc_retain(uVar2);
  _objc_retain(uVar9);
  uVar3 = uVar6;
  _objc_retain();
  func_0x00010b0af7ac();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c0720c0();
  _objc_release(uVar6);
  uVar6 = uVar3;
  if ((int)uVar4 == 0) {
    uVar4 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar2;
    func_0x000107d0561c(uVar2,uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107d05a80(uVar3,puVar5,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar5);
  }
  else {
    func_0x000107d05ce0(uVar3,uVar1,uVar2,uVar9);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar1);
  lVar8 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 1064d67f8; end: 1064d683f;  */

void FUN_1064d67f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1064d6840(uVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1064d6840; end: 1064d69cf;  */

void FUN_1064d6840(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain(param_5);
  func_0x00010b0aeec4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0720c0();
  uVar5 = uVar1;
  if (((uVar2 & 1) == 0) && (uVar2 = param_1, func_0x00010c0720c0(), (int)uVar2 == 0)) {
    uVar3 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x000107d0561c(param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107d05a80(uVar1,puVar4,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar4);
  }
  else {
    func_0x000107d05ce0(uVar1,param_2,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1064d69d0; end: 1064d6a17;  */

void FUN_1064d69d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1064d6840(uVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1064d6a18; end: 1064d6b67;  */

void FUN_1064d6a18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  _objc_retain(uVar1);
  uVar2 = uVar6;
  _objc_retain();
  func_0x00010b0af7c4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000107d05ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1064d6b68; end: 1064d6dcb;  */

void FUN_1064d6b68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  lVar3 = param_1;
  func_0x00010b0af944();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001064d6bf8(uVar4,uVar1,uVar5,uVar2,uVar7,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1064d6dcc; end: 1064d6f9f;  */

void FUN_1064d6dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107d05810(uVar1,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  _objc_retain(uVar5);
  _objc_retain(puVar2);
  _objc_retain(uVar1);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1064d06f4;
  uStack_50 = 0x1064d0704;
  uStack_48 = 0;
  func_0x00010c0c0360(param_3);
  uVar3 = puStack_68[5];
  func_0x000107d06094(uVar3,uVar5,puVar2,puVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(param_3);
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1064d6fa0; end: 1064d722b;  */

void FUN_1064d6fa0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar8);
  _objc_retain(uVar3);
  _objc_retain(uVar1);
  _objc_retain(uVar4);
  _objc_retain(uVar2);
  uVar6 = uVar5;
  _objc_retain();
  func_0x00010b0af83c();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  FUN_1064d8080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar6);
  lVar9 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  uVar8 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 1064d722c; end: 1064d72e7;  */

void FUN_1064d722c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c15e080();
  if (param_2 == 1) {
    func_0x00010b0af134();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_2 == 3) {
      func_0x00010b0afdf4();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_2;
      func_0x000107d05ce0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1064d72b4;
    }
    if (param_2 != 2) {
      return;
    }
    func_0x00010b0afddc();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar1 = param_2;
  func_0x000107d05a0c();
  _objc_retainAutoreleasedReturnValue();
LAB_1064d72b4:
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064d72e8; end: 1064d759b;  */

void FUN_1064d72e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_2);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar11 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_2);
  _objc_retain(uVar8);
  _objc_retain(uVar3);
  _objc_retain(uVar1);
  _objc_retain(uVar4);
  _objc_retain(uVar2);
  _objc_retain(uVar5);
  _objc_retain(uVar11);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1064d06f4;
  uStack_88 = 0x1064d0704;
  uStack_80 = 0;
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  _objc_retain(uVar3);
  func_0x00010c0bf7e0(param_2);
  uVar6 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = uVar1;
  func_0x00010c0720c0();
  uVar9 = puStack_a0[5];
  if ((int)uVar6 == 0) {
    func_0x000107d05ce0(uVar9,uVar8,uVar5,uVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107d05d70(uVar9,uVar8,puVar7,uVar5,uVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar7);
  _objc_release(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(uVar11);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(param_2);
  lVar10 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  uVar8 = *(undefined8 *)(lVar10 + 0x28);
  *(undefined8 *)(lVar10 + 0x28) = uVar9;
  _objc_release(uVar8);
  _objc_release(param_2);
  return;
}



/* Entry: 1064d759c; end: 1064d796b;  */

void FUN_1064d759c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  
  _objc_retain(param_2);
  puVar1 = *(undefined **)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  lVar12 = *(long *)(param_1 + 0x58);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar5 = *(undefined **)(param_1 + 0x48);
  _objc_retain(puVar1);
  _objc_retain(uVar11);
  _objc_retain(uVar4);
  _objc_retain(uVar2);
  _objc_retain(puVar5);
  _objc_retain(uVar3);
  uVar6 = param_2;
  func_0x00010c11ed00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar6);
  puVar10 = puVar1;
  if (lVar12 == 1) {
    _objc_retain(puVar1);
    _objc_retain(uVar4);
    _objc_retain(uVar11);
    _objc_retain(uVar2);
    _objc_retain(puVar5);
    func_0x00010c08fa60();
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar10 == (undefined *)0x0) {
      if ((uVar7 & 1) == 0) {
        func_0x00010b0af6ec();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010b0af6d4();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      if ((uVar7 & 1) == 0) {
        func_0x00010b0af6bc();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010b0af6a4();
        _objc_retainAutoreleasedReturnValue();
      }
LAB_1064d7820:
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = puVar8;
    }
  }
  else {
    uVar6 = param_2;
    func_0x00010c07c520();
    if ((int)uVar6 != 0) {
      _objc_retain(uVar11);
      _objc_retain(uVar4);
      _objc_retain(uVar2);
      puVar8 = puVar5;
      _objc_retain();
      func_0x00010b0af764();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      func_0x00010bf1f3c0();
      puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar9 = puVar8;
      func_0x000107d05d70(puVar8,uVar11,puVar10,uVar2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      _objc_release(uVar2);
      _objc_release(puVar5);
      goto LAB_1064d78fc;
    }
    _objc_retain(puVar1);
    _objc_retain(uVar4);
    _objc_retain(uVar11);
    _objc_retain(uVar2);
    _objc_retain(puVar5);
    func_0x00010c08fa60();
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar10 != (undefined *)0x0) {
      if ((uVar7 & 1) == 0) {
        func_0x00010b0af71c();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010b0af704();
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_1064d7820;
    }
    if ((uVar7 & 1) == 0) {
      func_0x00010b0af74c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010b0af734();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  uVar6 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010bf1f3c0();
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar9 = puVar10;
  func_0x000107d05d70(puVar10,uVar11,puVar8,uVar2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(puVar8);
  puVar8 = puVar1;
LAB_1064d78fc:
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar11);
  _objc_release(puVar1);
  lVar12 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  uVar11 = *(undefined8 *)(lVar12 + 0x28);
  *(undefined **)(lVar12 + 0x28) = puVar9;
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064d796c; end: 1064d7d83;  */

void FUN_1064d796c(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x000107cff274();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0();
    if (iVar1 == 0) goto LAB_1064d7a70;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  if ((int)uVar6 == 0) {
    uVar6 = param_2;
    func_0x00010c2420e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfdc680();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain();
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar4);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar4;
  }
  _objc_release(uVar6);
LAB_1064d7a70:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064d7d84; end: 1064d7dd7;  */

void FUN_1064d7d84(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c39d8 != -1) {
    func_0x00010002a2fc(0x1136c39d8,&PTR___NSConcreteGlobalBlock_110926df8);
  }
  uVar1 = uRam00000001136c39d0;
  _objc_retain(uRam00000001136c39d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064d7dd8; end: 1064d7fcb;  */

void FUN_1064d7dd8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110e36318;
  func_0x00010b0af044();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110e45eb8;
  lVar1 = param_1;
  lStack_b0 = param_1;
  func_0x00010b0af05c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110e81a98;
  lVar10 = lVar1;
  lStack_a8 = lVar1;
  func_0x00010b0af074();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110f483f8;
  lVar2 = lVar10;
  lStack_a0 = lVar10;
  func_0x00010b0af08c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110f48418;
  lVar3 = lVar2;
  lStack_98 = lVar2;
  func_0x00010b0af014();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110f48438;
  lVar4 = lVar3;
  lStack_90 = lVar3;
  func_0x00010b0aefcc();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110f48618;
  lVar5 = lVar4;
  lStack_88 = lVar4;
  func_0x00010b0af014();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110f485f8;
  lVar6 = lVar5;
  lStack_80 = lVar5;
  func_0x00010b0af104();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110f483d8;
  lVar7 = lVar6;
  lStack_78 = lVar6;
  func_0x00010b0af134();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_70 = lVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_b0,&ppuStack_f8,9);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = puRam00000001136c39d0;
  puRam00000001136c39d0 = puVar8;
  _objc_release(uVar9);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar10);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = param_1;
  func_0x00010b0af7dc();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar9 = *(undefined8 *)(lVar10 + 0x28);
  *(long *)(lVar10 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 1064d7fcc; end: 1064d807f;  */

void FUN_1064d7fcc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010b0af7dc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1064d8080; end: 1064d828f;  */

void FUN_1064d8080(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar2 = param_2;
  func_0x000107cff274();
  uVar3 = param_2;
  func_0x000107cfef1c();
  uVar6 = param_2;
  if ((uVar3 & 1) == 0) {
    FUN_1064d58d4(param_2,param_3,param_4,0,0,param_5,param_8,param_9,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar1 = (uint)uVar2 ^ 1;
    if (param_6 < 2) {
      uVar1 = 1;
    }
    if ((uVar1 & 1) == 0) {
      FUN_1064d58d4(param_2,param_3,param_4,0,puVar5,param_5 & 0xffffffff,param_8,param_9,param_6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar6 = param_1;
      if ((uint)uVar2 == 0) {
        func_0x000107d05ce0(param_1,param_4,param_8,param_9);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000107d05d70(param_1,param_4,puVar5,param_8,param_9);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(puVar5);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1064d8290; end: 1064d8463;  */

void FUN_1064d8290(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c0720c0();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0();
    if ((param_2 & 1) == 0) {
      if ((int)uVar2 == 0) {
        lVar5 = *(long *)(param_1 + 0x28);
        func_0x00010c08fa60();
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (lVar5 == 0) {
          func_0x00010b0af644();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1064d8424;
        }
        func_0x00010b0af614();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1064d83a4;
      }
      func_0x00010b0af5fc();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if ((int)uVar2 == 0) {
        lVar5 = *(long *)(param_1 + 0x28);
        func_0x00010c08fa60();
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (lVar5 == 0) {
          func_0x00010b0af5cc();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1064d8424;
        }
        func_0x00010b0af5b4();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1064d83a4;
      }
      func_0x00010b0af59c();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    lVar5 = *(long *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    goto LAB_1064d8440;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  func_0x00010c08fa60();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((param_2 & 1) == 0) {
    if (lVar5 == 0) {
      func_0x00010b0af65c();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1064d8424;
    }
    func_0x00010b0af62c();
    _objc_retainAutoreleasedReturnValue();
LAB_1064d83a4:
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain();
    uVar2 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  else {
    if (lVar5 != 0) {
      func_0x00010b0af17c();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1064d83a4;
    }
    func_0x00010b0af5e4();
    _objc_retainAutoreleasedReturnValue();
LAB_1064d8424:
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain();
    puVar3 = *(undefined **)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar5;
  }
  _objc_release(puVar3);
LAB_1064d8440:
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1064d8464; end: 1064d859b;  */

void FUN_1064d8464(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 == 0) {
    func_0x00010b0af68c();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    lVar5 = *(long *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar1;
  }
  else {
    func_0x00010b0af674();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar2;
    _objc_release(uVar3);
    lVar5 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1064d859c; end: 1064d85ef;  */

void FUN_1064d859c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b0c40;
  func_0x00010bfe7b00(0x4034000000000000,0x4034000000000000,PTR_PTR_1126b0c40,param_2,param_2,
                      param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1064d85f0; end: 1064d8aeb; -[SCFriendsFeedActiveSignalProvider initWithFriendsFeedDataCoordinator:graphene:messagingExperimentService:performerProvider:] */

undefined8 *
FUN_1064d85f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_80 = PTR_PTR_1126f1800;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = puVar1[4];
    puVar1[4] = uVar4;
    _objc_release(uVar10);
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0cbf60();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = uVar10;
    func_0x00010c067f00();
    puVar1[5] = (long)(int)uVar2;
    uVar2 = uVar10;
    func_0x00010c067f00();
    puVar1[6] = (long)(int)uVar2;
    _objc_initWeak(auStack_90,puVar1);
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfa42a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1064d8aec;
    puStack_a0 = &UNK_110842a38;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = uVar2;
    func_0x00010c24a800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = uVar2;
    func_0x00010bfba080();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_1064d8b70;
    puStack_c8 = &UNK_110926e68;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar7 = uVar5;
    func_0x00010bf41860();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e8,auStack_90);
    uVar4 = uVar8;
    func_0x00010c14f680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar5 = uVar4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c22ad80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = puVar1[2];
    puVar1[2] = uVar9;
    _objc_release(uVar11);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_e8);
    _objc_release(uVar8);
    _objc_destroyWeak(auStack_c0);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_98);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_90);
    _objc_release(uVar10);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1064d8aec; end: 1064d8b6f;  */

void FUN_1064d8aec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf1f3c0();
    *(char *)(param_1 + 0x38) = (char)uVar1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064d8b70; end: 1064d8cd7;  */

void FUN_1064d8b70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126cb140;
    _objc_alloc(PTR_PTR_1126cb140);
    func_0x00010c01ec20();
  }
  else {
    func_0x00010bf1f3c0(param_3);
    puVar2 = puVar1;
    func_0x00010bde4360(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1064d8cd8; end: 1064d8d07;  */

void FUN_1064d8cd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c06b700(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 1064d8d08; end: 1064d8d2f; -[SCFriendsFeedActiveSignalProvider feedHasHighValueContentObservable] */

void FUN_1064d8d08(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064d8d30; end: 1064d90c7; -[SCFriendsFeedActiveSignalProvider _computeFeedActiveResult:sponsoredSnapPresent:] */

void FUN_1064d8d30(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined **ppuVar1;
  byte bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  bVar2 = *(byte *)(param_1 + 0x38);
  if (param_4 != 0) {
    puVar4 = PTR_PTR_1126cb140;
    _objc_alloc();
    uVar8 = 1;
    goto LAB_1064d9074;
  }
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  _objc_retain(param_3);
  lVar11 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_200,auStack_180,0x10);
  if (lVar11 != 0) {
    lStack_208 = 0;
    lVar12 = *plStack_1f0;
    do {
      lVar14 = 0;
      lVar13 = lVar11 + lStack_208;
      do {
        if (*plStack_1f0 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        if (*(long *)(param_1 + 0x28) <= lStack_208) goto LAB_1064d8e98;
        uVar9 = *(ulong *)(lStack_1f8 + lVar14 * 8);
        uVar7 = uVar9;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar7;
        func_0x000107cfa560();
        _objc_release(uVar7);
        if ((uVar3 & 1) == 0) {
          uVar7 = uVar9;
          func_0x00010bef0c80();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar7;
          func_0x000100bec110();
          _objc_release(uVar7);
          if (((uVar3 & 1) != 0) || (func_0x000100bf377c(), (uVar9 & 1) != 0)) {
            puVar4 = PTR_PTR_1126cb140;
            _objc_alloc();
            uVar8 = 1;
            func_0x00010c01ec20();
            _objc_release(param_3);
            goto LAB_1064d907c;
          }
        }
        lStack_208 = lStack_208 + 1;
        lVar14 = lVar14 + 1;
      } while (lVar11 != lVar14);
      lVar11 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_200,auStack_180,0x10);
      lStack_208 = lVar13;
    } while (lVar11 != 0);
  }
LAB_1064d8e98:
  _objc_release(param_3);
  if ((bVar2 & 1) != 0) {
    puVar4 = PTR_PTR_1126cb140;
    _objc_alloc();
    uVar8 = 0;
    goto LAB_1064d9074;
  }
  lVar11 = *(long *)(param_1 + 0x30);
  _objc_retain(param_3);
  if (lVar11 < 1) {
LAB_1064d9054:
    uVar8 = 0;
  }
  else {
    dVar15 = 0.0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    lVar12 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_1c0,auStack_100,0x10);
    uVar8 = 0;
    if (lVar12 != 0) {
      uVar7 = 0;
      lVar14 = *plStack_1b0;
      do {
        lVar13 = 0;
        do {
          if (*plStack_1b0 != lVar14) {
            _objc_enumerationMutation(param_3);
          }
          uVar10 = *(ulong *)(lStack_1b8 + lVar13 * 8);
          uVar3 = uVar10;
          func_0x00010bf96da0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar3;
          func_0x000107cfa560();
          _objc_release(uVar3);
          if ((uVar9 & 1) == 0) {
            func_0x00010bef0c80();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar10;
            func_0x00010c0891c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar10);
            if ((uVar7 == 0) ||
               (uVar9 = uVar3, func_0x00010bf433a0(uVar3,param_2,uVar7), uVar9 == 1)) {
              _objc_retain(uVar3);
              _objc_release(uVar7);
              uVar7 = uVar3;
            }
            _objc_release(uVar3);
          }
          lVar13 = lVar13 + 1;
        } while (lVar12 != lVar13);
        lVar12 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_1c0,auStack_100,0x10);
      } while (lVar12 != 0);
      if (uVar7 == 0) goto LAB_1064d9054;
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      _objc_release(puVar4);
      uVar8 = (uint)(dVar15 < (double)(ulong)(lVar11 * 0x15180));
      _objc_release(uVar7);
    }
  }
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126cb140;
  _objc_alloc();
LAB_1064d9074:
  func_0x00010c01ec20();
LAB_1064d907c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  func_0x00010c290f20();
  puVar4 = PTR_PTR_1126b2cb0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd24f8;
  if (uVar8 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e52478;
  }
  _objc_retain(ppuVar1);
  func_0x00010bfabd80(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(puVar4);
  uVar6 = *(undefined8 *)(param_3 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1064d90c8; end: 1064d9183; -[SCFriendsFeedActiveSignalProvider _recordComputationMetric:] */

void FUN_1064d90c8(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x00010c290f20();
  puVar2 = PTR_PTR_1126b2cb0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd24f8;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e52478;
  }
  _objc_retain(ppuVar1);
  func_0x00010bfabd80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1064d9184; end: 1064d9297; -[SCFriendsFeedActiveSignalProvider _recordAccuracyMetricWithPrevious:current:] */

void FUN_1064d9184(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  func_0x00010c06b700();
  func_0x00010c06b700();
  puVar2 = PTR_PTR_1126b2cb0;
  func_0x00010bfabda0(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c06b700();
  _objc_release(param_4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if ((int)uVar5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e52478,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1064d9298; end: 1064d92df; -[SCFriendsFeedActiveSignalProvider .cxx_destruct] */

void FUN_1064d9298(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064d92e0; end: 1064d943f;  */

void FUN_1064d92e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf96da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  _objc_retain(param_2);
  func_0x00010c0c0020(uVar1);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = param_2;
  func_0x00010bef0c80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064d9440; end: 1064d9653; -[SCFriendsFeedChatMediaPrefetcher initWithMediaPrefetcher:friendsFeedDataCoordinatorLazy:preloadController:notificationLifecycleEvents:messagingExperimentService:] */

undefined8 *
FUN_1064d9440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_1126f1808;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 0xb) = 0;
    *(undefined4 *)(puVar1 + 0xd) = 0;
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
    _objc_retain(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_7);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_7);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_7);
    _objc_release(param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1064d9654; end: 1064d96df;  */

void FUN_1064d9654(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0cbf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f440();
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1064d96e0; end: 1064d9797;  */

void FUN_1064d96e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c1fa0();
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


