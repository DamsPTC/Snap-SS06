/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f9516c; end: 108f957e3;  */

void FUN_108f9516c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  ,undefined8 param_10,long param_11,undefined4 param_12,undefined4 param_13,
                  undefined8 param_14,undefined8 param_15,undefined4 param_16,undefined4 param_17,
                  long param_18,ulong param_19,long param_20,undefined4 param_21,undefined4 param_22
                  ,long param_23,long param_24,long param_25)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined *puVar17;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  puVar1 = PTR_PTR_1126dcc48;
  _objc_opt_new(PTR_PTR_1126dcc48);
  ppuVar13 = &PTR___NSConcreteGlobalBlock_110acfaf0;
  lVar2 = param_1;
  func_0x000107c31908();
  _CACurrentMediaTime();
  func_0x00010c1fde40(puVar1);
  if (param_1 != 0) {
    func_0x00010c18c4c0(puVar1);
  }
  lVar3 = param_23;
  func_0x00010bf8a940();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    lVar3 = param_23;
    func_0x00010bf8a940(param_23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c191f80(puVar1);
    _objc_release(lVar3);
  }
  func_0x000108f950e4(param_2);
  func_0x00010c18c3c0(puVar1);
  func_0x00010c1fede0(puVar1);
  func_0x00010c1fcc00(puVar1);
  func_0x00010c179280(puVar1);
  FUN_108f957fc(param_7);
  func_0x00010c206c40(puVar1);
  func_0x00010c18aaa0(puVar1);
  func_0x000108f95820(param_10);
  func_0x00010c18aa00(puVar1);
  func_0x00010c1fee60(puVar1);
  func_0x00010c1c5440(puVar1);
  func_0x00010c1feb20(puVar1);
  uVar5 = param_15;
  func_0x00010c094540(param_15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c240(puVar1);
  _objc_release(uVar5);
  uVar5 = param_15;
  func_0x00010bef2c20(param_15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar1);
  _objc_release(uVar5);
  uVar5 = param_15;
  func_0x00010bef4d20(param_15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164480(puVar1);
  _objc_release(uVar5);
  func_0x00010c1a7400(puVar1);
  func_0x00010c198f40(puVar1);
  if (param_20 != -1) {
    func_0x00010c1e3cc0(puVar1);
  }
  lVar3 = param_18;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c1ffbc0(puVar1);
  }
  lVar3 = param_25;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c204680(puVar1);
  }
  lVar3 = param_24;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c1df700(puVar1);
  }
  if ((param_11 - 3U < 2) && (uVar6 = param_19, func_0x00010bf529e0(), uVar6 != 0)) {
    uVar6 = param_19;
    func_0x000107c31908(param_19,&PTR___NSConcreteGlobalBlock_110acfb10);
    ppuVar13 = &PTR___NSConcreteGlobalBlock_110acfad0;
    uVar7 = uVar6;
    func_0x000107c31908();
    uVar8 = uVar7;
    func_0x00010bf51e00();
    _objc_release(uVar7);
    func_0x00010c1a7520(puVar1);
    _objc_release(uVar8);
    _objc_release(uVar6);
  }
  uVar6 = param_19;
  func_0x00010bf529e0();
  if (1 < uVar6) {
    func_0x00010bf529e0(param_19);
  }
  func_0x00010c1c9660(puVar1);
  lVar3 = param_9;
  func_0x00010c08fa60();
  puVar10 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  if (lVar3 == 0) {
    if (param_8 != 0) {
      puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
      func_0x00010c04e820();
      func_0x00010bf44780();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar11 = puVar10;
      func_0x00010c11d4e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar11;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      while (puVar9 != (undefined *)0x0) {
        puVar17 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(puVar11);
          }
          uVar16 = *(undefined8 *)((long)puVar17 * 8);
          uVar5 = uVar16;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar5;
          func_0x00010c0720c0();
          _objc_release(uVar5);
          if ((int)uVar12 != 0) {
            func_0x00010c296d80(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1feca0(puVar1);
            _objc_release(uVar16);
            goto LAB_108f956dc;
          }
          puVar17 = puVar17 + 1;
        } while (puVar9 != puVar17);
        puVar9 = puVar11;
        func_0x00010bf52a60();
      }
LAB_108f956dc:
      _objc_release(puVar11);
      _objc_release(puVar10);
    }
  }
  else {
    func_0x00010c1feca0(puVar1);
  }
  uVar5 = param_6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c067ec0();
  ppuVar15 = &PTR____CFConstantStringClassReference_110daafd8;
  if (((uint)ppuVar13 < 0x20) && ((0xe0ffffffU >> (ulong)((uint)ppuVar13 & 0x1f) & 1) != 0)) {
    ppuVar15 = *(undefined ***)(&PTR_PTR_110acfce8)[(ulong)ppuVar13 & 0xffffffff];
    _objc_retain(ppuVar15);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar15);
  return;
}



/* Entry: 108f957e4; end: 108f957fb;  */

void FUN_108f957e4(undefined8 param_1,ulong param_2)

{
  undefined **ppuVar1;
  
  func_0x00010c067ec0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (((uint)param_2 < 0x20) && ((0xe0ffffffU >> (ulong)((uint)param_2 & 0x1f) & 1) != 0)) {
    ppuVar1 = *(undefined ***)(&PTR_PTR_110acfce8)[param_2 & 0xffffffff];
    _objc_retain(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108f957fc; end: 108f95843;  */

undefined8 FUN_108f957fc(long param_1)

{
  if (param_1 - 1U < 0x19) {
    return *(undefined8 *)(&UNK_10dfb1210 + (param_1 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 108f95844; end: 108f958af;  */

void FUN_108f95844(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___CNPhoneNumber_1126b4ae0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c04e8c0();
  _objc_release(param_2);
  puVar2 = puVar1;
  FUN_108f92780(puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f958b0; end: 108f95a17;  */

void FUN_108f958b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dcc50;
  _objc_retain(param_9);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  func_0x00010c1fede0();
  _objc_release(param_2);
  func_0x00010c1fed80(puVar1);
  func_0x00010c1fee60(puVar1);
  FUN_108f957fc(param_5);
  func_0x00010c206c40(puVar1);
  func_0x00010c1c5440(puVar1);
  func_0x000108f950e4(param_7);
  func_0x00010c18c3c0(puVar1);
  func_0x000108f95820(param_8);
  func_0x00010c18aa00(puVar1);
  func_0x00010c209180(puVar1);
  _objc_release(param_9);
  uVar2 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c0b2e60(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f95a18; end: 108f95d97;  */

undefined1 FUN_108f95a18(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126dcc40;
  _objc_alloc_init(PTR_PTR_1126dcc40);
  puVar3 = PTR_PTR_1126ae740;
  _objc_alloc_init(PTR_PTR_1126ae740);
  func_0x00010c1fec00(puVar2);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126af7d0;
  _objc_alloc_init(PTR_PTR_1126af7d0);
  puVar4 = puVar2;
  func_0x00010bf63640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  uVar5 = param_2;
  func_0x00010c1195e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar2 = PTR_PTR_1126dcc40;
  _objc_alloc(PTR_PTR_1126dcc40);
  uVar6 = uVar5;
  func_0x00010c296d80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008360(puVar2);
  _objc_release(uVar6);
  puVar3 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  func_0x00010bf980c0();
  uVar1 = *(undefined1 *)(puStack_58 + 3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 108f95d98; end: 108f95ecf;  */

void FUN_108f95d98(long param_1,undefined4 param_2)

{
  switch(param_2) {
  case 1:
    if (*(long *)(param_1 + 0x28) != 0xf && *(long *)(param_1 + 0x28) != 0x19) {
      return;
    }
    break;
  case 2:
    if (*(long *)(param_1 + 0x28) != 0xe) {
      return;
    }
    break;
  case 3:
    if (*(long *)(param_1 + 0x28) != 0xb) {
      return;
    }
    break;
  case 4:
    if (*(long *)(param_1 + 0x28) != 0x11) {
      return;
    }
    break;
  case 5:
    if (*(long *)(param_1 + 0x28) != 6) {
      return;
    }
    break;
  case 6:
    if (*(long *)(param_1 + 0x28) != 10) {
      return;
    }
    break;
  case 7:
    if (*(long *)(param_1 + 0x28) != 0x13) {
      return;
    }
    break;
  case 8:
    if (*(long *)(param_1 + 0x28) != 0x12) {
      return;
    }
    break;
  case 9:
    if (*(long *)(param_1 + 0x28) != 0x10) {
      return;
    }
    break;
  case 10:
    if (*(long *)(param_1 + 0x28) != 1) {
      return;
    }
    break;
  case 0xb:
    if (*(long *)(param_1 + 0x28) != 9) {
      return;
    }
    break;
  case 0xc:
    if (*(long *)(param_1 + 0x28) != 0x14) {
      return;
    }
    break;
  case 0xd:
    if (*(long *)(param_1 + 0x28) != 0x15) {
      return;
    }
    break;
  case 0xe:
    if (*(long *)(param_1 + 0x28) != 0x1b) {
      return;
    }
    break;
  case 0xf:
    if (*(long *)(param_1 + 0x28) != 0x16) {
      return;
    }
    break;
  default:
    goto LAB_108f95ddc;
  case 0x15:
    if (*(long *)(param_1 + 0x28) != 4) {
      return;
    }
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
LAB_108f95ddc:
  return;
}



/* Entry: 108f95ed0; end: 108f95eff;  */

undefined8 FUN_108f95ed0(ulong param_1)

{
  undefined8 uVar1;
  
  func_0x00010c243400();
  if (param_1 < 0x30) {
    uVar1 = *(undefined8 *)(&UNK_10dfb13a0 + param_1 * 8);
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 108f95f00; end: 108f95f47;  */

undefined4 FUN_108f95f00(long param_1)

{
  if (param_1 - 1U < 0x1b) {
    return *(undefined4 *)(&UNK_10dfb1520 + (param_1 - 1U) * 4);
  }
  return 0;
}



/* Entry: 108f95f48; end: 108f95f73;  */

void FUN_108f95f48(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c067ec0(param_2);
  lVar1 = (long)(int)param_2;
  FUN_108f95f00(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithInt__1126157f0,lVar1);
  return;
}



/* Entry: 108f95f74; end: 108f95fe7; -[SCPhoneNumberAsYouTypeFormatterWrapper setRegionCode:] */

void FUN_108f95f74(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c0720c0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126dcc58;
    _objc_alloc();
    func_0x00010c03da20();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f95fe8; end: 108f95fef; -[SCPhoneNumberAsYouTypeFormatterWrapper regionCode] */

undefined8 FUN_108f95fe8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f95ff0; end: 108f95ff7; -[SCPhoneNumberAsYouTypeFormatterWrapper asYouTypeFormatter] */

undefined8 FUN_108f95ff0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f95ff8; end: 108f96027; -[SCPhoneNumberAsYouTypeFormatterWrapper .cxx_destruct] */

void FUN_108f95ff8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f96028; end: 108f96033; -[SCPhoneNumberDefaultFormatter getFormattedCountryCodeForRegion:] */

void FUN_108f96028(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc5b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126aed98,PTR_s_getFormattedCountryCodeForRegion_1125cf080);
  return;
}



/* Entry: 108f96034; end: 108f960d7; -[SCPhoneNumberDefaultFormatter getFormattedCountryCodeWithFlagForRegion:] */

void FUN_108f96034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aed98;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010bfc42c0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc4260(param_1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110f139f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f960d8; end: 108f9618b; -[SCPhoneNumberDefaultFormatter getFormattedFullCountryNameWithFlagForRegion:] */

void FUN_108f960d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aed98;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010bfc42c0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc5f80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110db27b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f9618c; end: 108f962b3; -[SCPhoneNumberDefaultFormatter isValidCountryNameAbbreviation:forCountryCode:] */

undefined * FUN_108f9618c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126aed98;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126aed98;
    func_0x00010c0db420(PTR_PTR_1126aed98,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c067fc0();
    func_0x00010c0df780(puVar4,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc4240(puVar3,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar1);
    puVar4 = puVar3;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
      if (((ulong)puVar4 & 1) == 0) {
        puVar4 = puVar1;
        func_0x00010bf4b900(puVar1,param_2,param_3);
      }
      else {
        puVar4 = (undefined *)0x0;
      }
      _objc_release(puVar1);
    }
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 108f962b4; end: 108f963ff; -[SCPhoneNumberDefaultFormatter getCountryCodeAbbreviation:] */

void FUN_108f962b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_PTR_1126aed98;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR_PTR_1126aed98;
  func_0x00010c0db420(PTR_PTR_1126aed98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c067fc0();
  func_0x00010c0df780(puVar4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc4240(puVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar4 = puVar3;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_1 + 0x10);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c083f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar2);
    if ((((ulong)puVar4 & 1) == 0) &&
       (puVar4 = puVar1, func_0x00010bf4b900(puVar1,param_2,puVar2), (int)puVar4 != 0)) {
      _objc_retain(puVar2);
      puVar4 = puVar2;
    }
    else {
      puVar4 = puVar3;
      func_0x00010bfb1920(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108f96400; end: 108f9664f; -[SCPhoneNumberDefaultFormatter formatPhoneNumber:withCountryCode:phoneLengthConfigMap:] */

void FUN_108f96400(ulong param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = param_3;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126dcc60;
    func_0x00010c069ce0(PTR_PTR_1126dcc60,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    _objc_retain(param_4);
    uVar3 = param_1;
    func_0x00010be42d40(param_1,param_2,param_3);
    puVar4 = param_4;
    puVar7 = param_3;
    if ((int)uVar3 == 0) {
      bVar1 = false;
    }
    else {
      puVar2 = PTR_PTR_1126aed98;
      func_0x00010bf9ed60(PTR_PTR_1126aed98,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = puVar2 != (undefined *)0x0;
      if (puVar2 != (undefined *)0x0) {
        puVar4 = puVar2;
        func_0x00010c0fafc0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_4);
        puVar5 = puVar2;
        func_0x00010c0cf3c0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
        func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c25d0a0(puVar5,param_2,puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_3);
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      _objc_release(puVar2);
    }
    uVar3 = param_1;
    func_0x00010bfb58a0(param_1,param_2,puVar7,puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010be42980(param_1,param_2,puVar7,puVar4,param_5);
    puVar2 = PTR_PTR_1126dcc60;
    if ((uVar8 & 1) == 0) {
      func_0x00010c069ce0(PTR_PTR_1126dcc60,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (bVar1) {
      func_0x00010bfc8be0(param_1,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2966a0(puVar2,param_2,uVar3,param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
    }
    else {
      func_0x00010c296760(PTR_PTR_1126dcc60,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar3);
    _objc_release(puVar4);
    _objc_release(puVar7);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f96650; end: 108f9672b; -[SCPhoneNumberDefaultFormatter formatAsYouTypePhoneNumber:withCountryCode:] */

void FUN_108f96650(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126dcc68;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
    _objc_release(uVar4);
    lVar1 = *(long *)(param_1 + 8);
  }
  func_0x00010c1e96c0(lVar1,param_2,param_4);
  puVar2 = PTR_PTR_1126aed98;
  func_0x00010c0db420(PTR_PTR_1126aed98,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0ab20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c065fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108f9672c; end: 108f96837; -[SCPhoneNumberDefaultFormatter formatAsYouTypeCountryCode:] */

void FUN_108f9672c(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    func_0x00010c25db20(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c08fa60();
    if (uVar2 == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      uVar2 = param_1;
      func_0x00010c08fa60();
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (uVar2 < 4) {
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110e477d8);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar2 = param_1;
        func_0x00010c260c20(param_1,param_2,3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110e477d8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
      }
    }
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 108f96838; end: 108f96843; -[SCPhoneNumberDefaultFormatter normalizeDigitsOnly:] */

void FUN_108f96838(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0db430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aed98,PTR_s_normalizeDigitsOnly__112614720);
  return;
}



/* Entry: 108f96844; end: 108f9684f; -[SCPhoneNumberDefaultFormatter normalizeDigitsWithoutVanity:] */

void FUN_108f96844(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0db450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126aed98,PTR_s_normalizeDigitsWithoutVanity__112614728);
  return;
}



/* Entry: 108f96850; end: 108f9685b; -[SCPhoneNumberDefaultFormatter getCountryCodeForRegion:] */

void FUN_108f96850(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc4270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aed98,PTR_s_getCountryCodeForRegion__1125cea40)
  ;
  return;
}



/* Entry: 108f9685c; end: 108f96927; -[SCPhoneNumberDefaultFormatter getCurrentOrUSDefaultCountryCode] */

void FUN_108f9685c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    ppuVar1 = *(undefined ***)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c083f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    ppuVar1 = ppuVar2;
    func_0x00010c08fa60();
    if (ppuVar1 != (undefined **)0x0) goto LAB_108f96914;
    _objc_release(ppuVar2);
  }
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110daf278;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar2 = ppuVar3;
  }
  _objc_retain(ppuVar2);
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
LAB_108f96914:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 108f96928; end: 108f969ff; -[SCPhoneNumberDefaultFormatter getCountryCodeNumber:] */

void FUN_108f96928(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  lVar2 = param_3;
  if (lVar1 == 0) {
    lVar2 = param_1;
    func_0x00010bfc45a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  puVar3 = PTR_PTR_1126aed98;
  func_0x00010bfc4260(PTR_PTR_1126aed98,param_2,lVar2);
  if ((int)puVar3 == 0) {
    func_0x00010bfc45a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010bfc4260(PTR_PTR_1126aed98,param_2,param_1);
    lVar2 = param_1;
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f13a18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f96a00; end: 108f96a87; -[SCPhoneNumberDefaultFormatter getFullCountryNameFromCountryCodeAbbreviation:] */

void FUN_108f96a00(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010bfc45a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = param_1;
  }
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c09e7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f96a88; end: 108f96a93; -[SCPhoneNumberDefaultFormatter getPhoneCountryCodes] */

void FUN_108f96a88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc8c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aed98,PTR_s_getPhoneCountryCodes_1125cfca8);
  return;
}



/* Entry: 108f96a94; end: 108f96a9f; -[SCPhoneNumberDefaultFormatter getPhoneCountryCodesSuggestions:] */

void FUN_108f96a94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc8c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126aed98,PTR_s_getPhoneCountryCodesWithCountryS_1125cfcb8);
  return;
}



/* Entry: 108f96aa0; end: 108f96aab; -[SCPhoneNumberDefaultFormatter isValidClientPhoneNumberFormat:] */

void FUN_108f96aa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c082c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126aed98,PTR_s_isValidClientPhoneNumberFormat__1125fe518);
  return;
}



/* Entry: 108f96aac; end: 108f96ab7; -[SCPhoneNumberDefaultFormatter stripDigitsFromPhoneNumber:] */

void FUN_108f96aac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25db30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126aed98,PTR_s_stripDigitsFromPhoneNumber__1126750f0);
  return;
}



/* Entry: 108f96ab8; end: 108f96b6f; -[SCPhoneNumberDefaultFormatter formatPhoneNumberFromCurrentPhone:newPhone:range:currentCountryCode:phoneLengthConfigMap:] */

void FUN_108f96ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010c25cf80(param_3,param_2,param_5,param_6,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5d60(param_1,param_2,param_3,param_7,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f96b70; end: 108f96c0f; -[SCPhoneNumberDefaultFormatter getPhoneCountryCodeFromCountryCodeAbbreviation:] */

void FUN_108f96b70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfc42a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc5f80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af250;
  _objc_alloc(PTR_PTR_1126af250);
  func_0x00010c0063a0();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f96c10; end: 108f96cbb; -[SCPhoneNumberDefaultFormatter getAutofillPhoneNumberIfPossible:] */

void FUN_108f96c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010be42d40(param_1,param_2,param_3);
  if ((int)param_1 != 0) {
    puVar1 = PTR_PTR_1126aed98;
    func_0x00010bf9ed60(PTR_PTR_1126aed98,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      puVar2 = PTR_PTR_1126ae750;
      func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      goto LAB_108f96ca0;
    }
  }
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
LAB_108f96ca0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f96cbc; end: 108f96d17; -[SCPhoneNumberDefaultFormatter _isPotentiallyFullPhoneNumber:] */

bool FUN_108f96cbc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dae918);
  if ((int)uVar1 == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = param_3;
    func_0x00010c08fa60(param_3);
    bVar2 = 5 < uVar1;
  }
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 108f96d18; end: 108f96e27; -[SCPhoneNumberDefaultFormatter _isPhoneLengthValid:countryCode:phoneLengthConfigMap:] */

ulong FUN_108f96d18(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126aed98;
  _objc_retain(param_4);
  func_0x00010c0db420(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (uVar2 == 0) {
    uVar2 = param_5;
    func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110db00f8);
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      func_0x00010c082c20(param_1,param_2,puVar1);
      goto LAB_108f96df8;
    }
  }
  puVar3 = puVar1;
  func_0x00010c08fa60();
  uVar4 = uVar2;
  func_0x00010c0cd8a0();
  if (puVar3 < (undefined *)(uVar4 & 0xffffffff)) {
    param_1 = 0;
  }
  else {
    uVar4 = uVar2;
    func_0x00010c0c2540(uVar2);
    param_1 = (ulong)(puVar3 <= (undefined *)(uVar4 & 0xffffffff));
  }
LAB_108f96df8:
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  return param_1;
}



/* Entry: 108f96e28; end: 108f96e57; -[SCPhoneNumberDefaultFormatter .cxx_destruct] */

void FUN_108f96e28(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f96e58; end: 108f96ef7; +[SCPhoneNumberUtils formatPhoneNumber:] */

void FUN_108f96e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  _objc_retain(param_3);
  func_0x00010bf5f320(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aed98;
  func_0x00010bfb5d40(PTR_PTR_1126aed98,param_2,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f96ef8; end: 108f96fff; +[SCPhoneNumberUtils formatPhoneNumber:withCountryCode:] */

void FUN_108f96ef8(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dcc70;
  _objc_retain(param_4);
  func_0x00010c22ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lStack_48 = 0;
  puVar2 = puVar1;
  func_0x00010c0f3dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar4 = lStack_48;
  _objc_retain(lStack_48);
  if (lVar4 == 0) {
    lStack_50 = 0;
    puVar3 = puVar1;
    func_0x00010bfb5860(puVar1,param_2,puVar2,2,&lStack_50);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lStack_50;
    _objc_retain(lStack_50);
    if (lVar4 == 0) goto LAB_108f96fcc;
    _objc_release(puVar3);
  }
  _objc_retain(param_3);
  _objc_release(lVar4);
  puVar3 = param_3;
LAB_108f96fcc:
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f97000; end: 108f971c3; +[SCPhoneNumberUtils formatPhoneNumber:toE164UsingCountryCode:] */

void FUN_108f97000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126dcc70;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  lStack_68 = 0;
  puVar2 = puVar1;
  func_0x00010c0f3dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  lVar8 = lStack_68;
  _objc_retain(lStack_68);
  if (lVar8 == 0) {
    puVar9 = puVar1;
    func_0x00010c082e20(puVar1,param_2,puVar2);
    if ((int)puVar9 != 0) {
      lStack_70 = 0;
      puVar3 = puVar1;
      func_0x00010bfb5860(puVar1,param_2,puVar2,1,&lStack_70);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lStack_70;
      _objc_retain(lStack_70);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010bf66760(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c06a520();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010bf44700(puVar3,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar9,param_2,&PTR____CFConstantStringClassReference_110e477d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      goto LAB_108f97188;
    }
    lVar8 = 0;
  }
  puVar9 = (undefined *)0x0;
LAB_108f97188:
  _objc_release(puVar2);
  _objc_release(lVar8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 108f971c4; end: 108f973b3; +[SCPhoneNumberUtils formatPhoneNumberToE164Normalized:countryCode:] */

void FUN_108f971c4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dae918);
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf66760(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c06a520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = param_3;
  if (((ulong)puVar1 & 1) == 0) {
    _objc_retain(param_3);
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dae918;
    func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110dae918);
    func_0x00010c260c00(param_3,param_2,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = puVar2;
  func_0x00010bf44700(puVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar6;
  if ((int)puVar1 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dae518);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  puVar6 = PTR_PTR_1126aed98;
  func_0x00010bfb5d20(PTR_PTR_1126aed98,param_2,puVar5,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  if (puVar6 != (undefined *)0x0) {
    puVar1 = puVar6;
  }
  _objc_retain(puVar1);
  _objc_release(puVar6);
  puVar6 = puVar1;
  func_0x00010bfda7c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae918);
  if ((int)puVar6 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dae518);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    puVar6 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108f973b4; end: 108f97533; +[SCPhoneNumberUtils formatPhoneNumberShouldShowForeignCountryCode:withPhoneNumber:withCountryCode:] */

void FUN_108f973b4(undefined8 param_1,undefined8 param_2,int param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long alStack_68 [3];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126dcc70;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  alStack_68[2] = 0;
  puVar2 = puVar1;
  func_0x00010c0f3dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = alStack_68[2];
  _objc_retain(alStack_68[2]);
  if (lVar8 == 0) {
    puVar3 = puVar1;
    func_0x00010bfc97e0(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      _objc_retain(param_4);
      puVar4 = param_4;
      goto LAB_108f97448;
    }
    puVar4 = puVar3;
    func_0x00010c0720c0();
    if ((param_3 == 0) || ((int)puVar4 != 0)) {
      alStack_68[0] = 0;
      plVar7 = alStack_68;
      plVar6 = alStack_68;
      uVar5 = 2;
    }
    else {
      alStack_68[1] = 0;
      plVar7 = alStack_68 + 1;
      plVar6 = alStack_68 + 1;
      uVar5 = 1;
    }
    puVar4 = puVar1;
    func_0x00010bfb5860(puVar1,param_2,puVar2,uVar5,plVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *plVar7;
    _objc_retain(lVar8);
    if (lVar8 == 0) {
      _objc_release(puVar3);
      goto LAB_108f97448;
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_retain(param_4);
  _objc_release(lVar8);
  puVar4 = param_4;
LAB_108f97448:
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108f97534; end: 108f975b7; +[SCPhoneNumberUtils getCountryCodeForRegion:] */

undefined * FUN_108f97534(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126dcc70;
  _objc_retain(param_3);
  func_0x00010c22ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfc4260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010c282760(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 108f975b8; end: 108f97633; +[SCPhoneNumberUtils getFormattedCountryCodeForRegion:] */

void FUN_108f975b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010bfc4260(param_1,param_2,param_3);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110eb4298);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f97634; end: 108f976ff; +[SCPhoneNumberUtils getCountryFlagEmojiForRegion:] */

void FUN_108f97634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35920();
  func_0x00010bf35920();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c08fa60(param_3);
  func_0x00010bffa180(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfc8c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108f97700; end: 108f97707; +[SCPhoneNumberUtils getPhoneCountryCodes] */

void FUN_108f97700(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc8c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_getPhoneCountryCodesWithCountryS_1125cfcb8,0)
  ;
  return;
}



/* Entry: 108f97708; end: 108f979ef; +[SCPhoneNumberUtils getPhoneCountryCodesWithCountrySuggestions:] */

undefined * FUN_108f97708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar1 = PTR_PTR_1126dcc78;
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010bf53760();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar3);
  puVar8 = &uStack_130;
  puVar2 = puVar3;
  func_0x00010bf52a60();
  if (puVar2 == (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar13 = (undefined *)0x0;
    puVar11 = (undefined *)0x0;
    lVar12 = *plStack_120;
    do {
      puVar10 = (undefined *)0x0;
      puVar4 = puVar11;
      puVar6 = puVar13;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(puVar3);
        }
        uVar14 = *(undefined8 *)(lStack_128 + (long)puVar10 * 8);
        puVar13 = PTR__OBJC_CLASS___NSLocale_1126af788;
        func_0x00010bf5f320();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar13;
        func_0x00010c09e7a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar13);
        puVar13 = puVar6;
        if (puVar11 != (undefined *)0x0) {
          func_0x00010bfc4260(PTR_PTR_1126aed98,param_2,uVar14);
          puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110f13a38);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          puVar4 = PTR_PTR_1126af250;
          _objc_alloc(PTR_PTR_1126af250);
          func_0x00010c0063a0();
          func_0x00010befa120(puVar9,param_2,puVar4);
          _objc_release(puVar4);
          uVar5 = param_3;
          func_0x00010bf4b900(param_3,param_2,uVar14);
          if ((int)uVar5 != 0) {
            puVar6 = PTR_PTR_1126af250;
            _objc_alloc(PTR_PTR_1126af250);
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            uVar5 = param_3;
            func_0x00010bfecde0(param_3,param_2,uVar14);
            func_0x00010c0df780(puVar4,param_2,uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0063a0(puVar6,param_2,puVar11,uVar14,puVar13,puVar4);
            func_0x00010befa120(puVar9,param_2,puVar6);
            _objc_release(puVar6);
            _objc_release(puVar4);
          }
        }
        puVar10 = puVar10 + 1;
        puVar4 = puVar11;
        puVar6 = puVar13;
      } while (puVar2 != puVar10);
      puVar8 = &uStack_130;
      puVar2 = puVar3;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  puVar2 = puVar9;
  func_0x00010bf51e00(puVar9);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar9);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar8);
    puVar7 = puVar8;
    func_0x00010c08fa60();
    if (puVar7 < (undefined8 *)0x5) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar7 = puVar8;
      func_0x00010c08fa60(puVar8);
      puVar9 = (undefined *)(ulong)(puVar7 < (undefined8 *)0x15);
    }
    _objc_release(puVar8);
    return puVar9;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 108f979f0; end: 108f97a47; +[SCPhoneNumberUtils isValidClientPhoneNumberFormat:] */

bool FUN_108f979f0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c08fa60();
  if (uVar2 < 5) {
    bVar1 = false;
  }
  else {
    uVar2 = param_3;
    func_0x00010c08fa60(param_3);
    bVar1 = uVar2 < 0x15;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108f97a48; end: 108f97aaf; +[SCPhoneNumberUtils stripDigitsFromPhoneNumber:] */

void FUN_108f97a48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08fa60(param_3);
  uVar2 = param_3;
  func_0x00010c25cfe0(param_3,param_2,&PTR____CFConstantStringClassReference_110e40518,
                      &PTR____CFConstantStringClassReference_110daafd8,0x400,0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108f97ab0; end: 108f97b1f; +[SCPhoneNumberUtils normalizeDigitsOnly:] */

void FUN_108f97ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dcc70;
  _objc_retain(param_3);
  func_0x00010c22ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0db3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f97b20; end: 108f97b8f; +[SCPhoneNumberUtils normalizeDigitsWithoutVanity:] */

void FUN_108f97b20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dcc70;
  _objc_retain(param_3);
  func_0x00010c22ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0db420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f97b90; end: 108f97c17; +[SCPhoneNumberUtils formatMobileNumber:countryCodeNumber:] */

void FUN_108f97b90(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = param_3;
  func_0x00010bfda7c0(param_3,param_2,param_4);
  if ((int)ppuVar1 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    uVar2 = param_4;
    func_0x00010c08fa60(param_4);
    ppuVar1 = param_3;
    func_0x00010c260c00(param_3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108f97c18; end: 108f97d5f; +[SCPhoneNumberUtils getCountryCodeAbbreviations:] */

void FUN_108f97c18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126dcc70;
  _objc_retain(param_3);
  func_0x00010c22ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfc9840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bdc17c0(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108f97d60;
  puStack_40 = &UNK_110acff78;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c1063a0(puVar3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bfaea40(puVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puStack_38);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108f97d60; end: 108f97d6b;  */

void FUN_108f97d60(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_containsObject__1125b07e8,param_2);
  return;
}



/* Entry: 108f97d6c; end: 108f97db3; +[SCPhoneNumberUtils getMobileNumberForLogIn:mobileNumber:] */

void FUN_108f97d6c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 108f97db4; end: 108f97e63; +[SCPhoneNumberUtils getExamplePhoneNumber:error:] */

void FUN_108f97db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126dcc70;
  _objc_retain(param_3);
  func_0x00010c22ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfc5400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010c0d55e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108f97e64; end: 108f97f67; +[SCPhoneNumberUtils extractFullPhoneNumber:] */

void FUN_108f97e64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126dcc70;
  _objc_retain(param_3);
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010bf9ec60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_retain(0);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c067ec0();
  if ((int)puVar3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126dcc70;
    func_0x00010c22ba80(PTR_PTR_1126dcc70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bfc97c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126af2d8;
    _objc_alloc(PTR_PTR_1126af2d8);
    func_0x00010c02c420();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f97f68; end: 108f98007; +[SCPhoneNumberUtils formatFullPhoneNumber:] */

void FUN_108f97f68(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf9ed60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0cf3c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0fafc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5d40(param_1,param_2,lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f98008; end: 108f980e7; +[SCPhoneNumberUtils getRegionCodeForUnformattedPhoneNumber:] */

void FUN_108f98008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  _objc_retain(param_3);
  func_0x00010bf5f320(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfb5dc0(param_1,param_2,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bf9ed60(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0fafc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108f980e8; end: 108f98153; +[SCPhoneNumberFormatResult invalidWithPhoneNumber:] */

void FUN_108f980e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dcc60;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f98154; end: 108f981eb; +[SCPhoneNumberFormatResult validFullPhoneNumberWithFormattedNumber:countryCode:] */

void FUN_108f98154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126dcc60;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f981ec; end: 108f9824f; +[SCPhoneNumberFormatResult validWithFormattedNumber:] */

void FUN_108f981ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dcc60;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f98250; end: 108f98273; -[SCPhoneNumberFormatResult copyWithZone:] */

undefined8 FUN_108f98250(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f98274; end: 108f98303; -[SCPhoneNumberFormatResult hash] */

void FUN_108f98274(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126ff968;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f98304; end: 108f98347; -[SCPhoneNumberFormatResult internalInit] */

void FUN_108f98304(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ff968;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f98348; end: 108f9842f; -[SCPhoneNumberFormatResult isEqual:] */

long FUN_108f98348(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f98408:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f98414;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_108f98414;
            }
            goto LAB_108f98408;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f98414:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f98430; end: 108f984e3; -[SCPhoneNumberFormatResult matchValid:validFullPhoneNumber:invalid:] */

void FUN_108f98430(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_108f984c0;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if (lVar2 == 1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
      }
      goto LAB_108f984c0;
    }
    if ((lVar2 != 0) || (param_3 == 0)) goto LAB_108f984c0;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar2 = param_3;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_108f984c0:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f984e4; end: 108f9852b; -[SCPhoneNumberFormatResult .cxx_destruct] */

void FUN_108f984e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f9852c; end: 108f98593; +[SCActivationPbPhoneNumberDynamicLengthRestriction descriptor] */

void FUN_108f9852c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730490 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bdd110,
                        &PTR____CFConstantStringClassReference_110f13a58,&PTR_DAT_1132b18a8,
                        &PTR_DAT_1132b18c0,1,0x10,0x1c);
    puRam0000000113730490 = puVar1;
  }
  return;
}



/* Entry: 108f98594; end: 108f985fb; +[SCActivationPbPhoneNumberDynamicLengthRestrictionConfig descriptor] */

void FUN_108f98594(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730498 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bdd160,
                        &PTR____CFConstantStringClassReference_110f13a78,&PTR_DAT_1132b18a8,
                        &PTR_s_country_1132b18e0,3,0x18,0x1c);
    puRam0000000113730498 = puVar1;
  }
  return;
}



/* Entry: 108f985fc; end: 108f98947; -[NBAsYouTypeFormatter init] */

undefined8 * FUN_108f985fc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ff970;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = 0;
    func_0x00010c187700(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
    func_0x00010c19ed40(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    func_0x00010c1892a0(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_release(0);
    func_0x00010c1caec0(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_release(0);
    func_0x00010c174d80(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_release(0);
    func_0x00010c1f5080(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_release(0);
    func_0x00010c193260(puVar1);
    _objc_release(puVar2);
    func_0x00010c187360(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
    func_0x00010c161440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
    func_0x00010c161420(puVar1);
    _objc_release(puVar2);
    func_0x00010c160a80(puVar1);
    func_0x00010c1ad3e0(puVar1);
    func_0x00010c1b0140(puVar1);
    func_0x00010c1b0c20(puVar1);
    func_0x00010c1b8220(puVar1);
    func_0x00010c1d6700(puVar1);
    func_0x00010c1def60(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
    func_0x00010c1e0760(puVar1);
    _objc_release(puVar2);
    func_0x00010c1ffee0(puVar1);
    func_0x00010c1cb1e0(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
    func_0x00010c1cb1c0(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010c1defe0(puVar1);
    _objc_release(puVar2);
    _objc_release(0);
  }
  return puVar1;
}



/* Entry: 108f98948; end: 108f989bb; -[NBAsYouTypeFormatter initWithRegionCode:] */

undefined8 FUN_108f98948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _objc_retain(param_3);
  func_0x00010c0b6660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03da40(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 108f989bc; end: 108f98aaf; -[NBAsYouTypeFormatter initWithRegionCode:bundle:] */

long FUN_108f989bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126dcc70;
    func_0x00010c22ba80(PTR_PTR_1126dcc70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1db2e0(param_1,param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c18af00(param_1,param_2,param_3);
    lVar2 = param_1;
    func_0x00010bf691a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bfc7900(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c187660(param_1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf5f460(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b100(param_1,param_2,lVar2);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108f98ab0; end: 108f98bc3; -[NBAsYouTypeFormatter getMetadataForRegion_:] */

void FUN_108f98ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126dcc78;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = param_1;
  func_0x00010c0fb240(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc4260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  func_0x00010c0fb240(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfc97c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar4 = puVar1;
  func_0x00010bfc78a0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR_PTR_1126dcc80;
    _objc_alloc_init(PTR_PTR_1126dcc80);
  }
  else {
    _objc_retain(puVar4);
    puVar5 = puVar4;
  }
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108f98bc4; end: 108f98dcb; -[NBAsYouTypeFormatter maybeCreateNewTemplate_] */

undefined8 FUN_108f98bc4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar8 = param_1;
  func_0x00010c1044c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010bf529e0();
  _objc_release(uVar8);
  if (uVar1 != 0) {
    uVar8 = 0;
    do {
      uVar2 = param_1;
      func_0x00010c1044c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126dcc88;
      _objc_opt_class(PTR_PTR_1126dcc88);
      uVar4 = uVar2;
      func_0x00010c0d6e20(uVar2,param_2,uVar8,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = uVar4;
      func_0x00010c0f5aa0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c08fa60();
      if (uVar5 == 0) {
LAB_108f98cd4:
        uVar7 = 0;
LAB_108f98da0:
        _objc_release(uVar2);
        _objc_release(uVar4);
        return uVar7;
      }
      uVar5 = param_1;
      func_0x00010bf5ec00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0720c0();
      _objc_release(uVar5);
      if ((uVar6 & 1) != 0) goto LAB_108f98cd4;
      uVar5 = param_1;
      func_0x00010bf56260(param_1,param_2,uVar4);
      if ((int)uVar5 != 0) {
        func_0x00010c187360(param_1,param_2,uVar2);
        uVar8 = uVar4;
        func_0x00010c0d56c0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar8;
        func_0x00010c08fa60();
        _objc_release(uVar8);
        if (uVar1 == 0) {
          func_0x00010c1ffee0(param_1,param_2,0);
        }
        else {
          uVar8 = param_1;
          func_0x00010bdc1c60();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c0d56c0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar8;
          func_0x00010bfb1800(uVar8,param_2,uVar5,0,0,uVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          _objc_release(uVar8);
          func_0x00010c1ffee0(param_1,param_2,uVar6 != 0);
          _objc_release(uVar6);
        }
        func_0x00010c1b8220(param_1,param_2,0);
        uVar7 = 1;
        goto LAB_108f98da0;
      }
      _objc_release(uVar2);
      _objc_release(uVar4);
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar8);
  }
  func_0x00010c160a80(param_1,param_2,0);
  return 0;
}



/* Entry: 108f98dcc; end: 108f9905f; -[NBAsYouTypeFormatter getAvailableFormats_:] */

void FUN_108f98dcc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c06ee00();
  uVar3 = param_1;
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf5f460();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar1;
    func_0x00010c0699a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar10;
    func_0x00010bf529e0();
    _objc_release(uVar10);
    _objc_release(uVar1);
    if (uVar2 != 0) {
      func_0x00010bf5f460();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c0699a0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108f98e8c;
    }
  }
  func_0x00010bf5f460();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0de980();
  _objc_retainAutoreleasedReturnValue();
LAB_108f98e8c:
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bf529e0();
  if (uVar3 != 0) {
    uVar10 = 0;
    do {
      puVar4 = PTR_PTR_1126dcc88;
      _objc_opt_class(PTR_PTR_1126dcc88);
      uVar2 = uVar1;
      func_0x00010c0d6e20(uVar1,param_2,uVar10,puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010bf5f460();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0d5660();
      _objc_retainAutoreleasedReturnValue();
      if (uVar6 == 0) {
        _objc_release(uVar5);
LAB_108f98fbc:
        uVar5 = uVar2;
        func_0x00010bfb5800(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_1;
        func_0x00010c073560(param_1,param_2,uVar5);
        _objc_release(uVar5);
        if ((int)uVar6 != 0) {
          uVar5 = param_1;
          func_0x00010c1044c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(uVar5);
        }
      }
      else {
        uVar7 = param_1;
        func_0x00010bf5f460();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c0d5660();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c08fa60();
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        if (((uVar9 == 0) || (uVar5 = param_1, func_0x00010c06ee00(), (uVar5 & 1) != 0)) ||
           (uVar5 = uVar2, func_0x00010c0d56e0(), (uVar5 & 1) != 0)) goto LAB_108f98fbc;
        uVar5 = param_1;
        func_0x00010c0fb240();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar2;
        func_0x00010c0d56c0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010bfb6200(uVar5,param_2,uVar6);
        _objc_release(uVar6);
        _objc_release(uVar5);
        if ((int)uVar7 != 0) goto LAB_108f98fbc;
      }
      _objc_release(uVar2);
      uVar10 = uVar10 + 1;
    } while (uVar3 != uVar10);
  }
  func_0x00010c0d55c0(param_1,param_2,param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f99060; end: 108f99107; -[NBAsYouTypeFormatter isFormatEligible_:] */

bool FUN_108f99060(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010bdc1460(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c08fa60(param_3);
    lVar3 = param_1;
    func_0x00010bfb1800(param_1,param_2,param_3,0,0,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108f99108; end: 108f992e3; -[NBAsYouTypeFormatter narrowDownPossibleFormats_:] */

void FUN_108f99108(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c08fa60();
  lVar8 = param_1;
  func_0x00010c1044c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010bf529e0();
  _objc_release(lVar8);
  if (lVar2 != 0) {
    lVar8 = 0;
    do {
      lVar3 = param_1;
      func_0x00010c1044c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126dcc88;
      _objc_opt_class(PTR_PTR_1126dcc88);
      lVar5 = lVar3;
      func_0x00010c0d6e20(lVar3,param_2,lVar8,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = lVar5;
      func_0x00010c08de80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      if (lVar6 == 0) {
        func_0x00010befa120(puVar1,param_2,lVar5);
      }
      else {
        lVar3 = lVar5;
        func_0x00010c08de80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        _objc_release(lVar3);
        lVar3 = lVar5;
        func_0x00010c08de80(lVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar3;
        func_0x00010c0d6e40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        lVar3 = param_1;
        func_0x00010c0fb240();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar3;
        func_0x00010c25d660();
        _objc_release(lVar3);
        if ((int)lVar7 == 0) {
          func_0x00010befa120(puVar1,param_2,lVar5);
        }
        _objc_release(lVar6);
      }
      _objc_release(lVar5);
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
  }
  func_0x00010c1defe0(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f992e4; end: 108f994b3; -[NBAsYouTypeFormatter createFormattingTemplate_:] */

bool FUN_108f992e4(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0f5aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c11f420();
  if (lVar3 == 0x7fffffffffffffff) {
    lVar3 = param_1;
    func_0x00010bdc10c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c08fa60(lVar2);
    lVar5 = lVar3;
    func_0x00010c25cfa0(lVar3,param_2,lVar2,0,0,lVar4,
                        &PTR____CFConstantStringClassReference_110f13b38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bdc2980(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c08fa60(lVar5);
    lVar2 = lVar3;
    func_0x00010c25cfa0(lVar3,param_2,lVar5,0,0,lVar4,
                        &PTR____CFConstantStringClassReference_110f13b38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bfb6220(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e7c0();
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010bfb5800(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bfc5d00(param_1,param_2,lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar4;
    func_0x00010c08fa60();
    bVar1 = lVar3 != 0;
    if (lVar3 != 0) {
      func_0x00010bfb6220(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf070e0();
      _objc_release(param_1);
    }
    _objc_release(lVar4);
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108f994b4; end: 108f99633; -[NBAsYouTypeFormatter getFormattingTemplate_:numberFormat:] */

void FUN_108f994b4(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = param_1;
  func_0x00010c0fb240();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0c1a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar1 = ppuVar2;
  func_0x00010c0d6e40(ppuVar2,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c08fa60();
  ppuVar4 = param_1;
  func_0x00010c0d5620();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c08fa60();
  _objc_release(ppuVar4);
  if (ppuVar3 < ppuVar5) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar3 = param_1;
    func_0x00010c0fb240(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c131120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    func_0x00010c0fb240(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_1;
    func_0x00010c131120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(param_1);
  }
  _objc_release(ppuVar1);
  _objc_release(ppuVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 108f99634; end: 108f99843; -[NBAsYouTypeFormatter clear] */

void FUN_108f99634(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c187700(param_1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  lVar1 = param_1;
  func_0x00010beed700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e7c0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010beed6e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e7c0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfb6220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e7c0();
  _objc_release(lVar1);
  func_0x00010c1b8220(param_1,param_2,0);
  func_0x00010c187360(param_1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  lVar1 = param_1;
  func_0x00010c1084a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e7c0();
  _objc_release(lVar1);
  func_0x00010c1cb1e0(param_1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  lVar1 = param_1;
  func_0x00010c0d5620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e7c0();
  _objc_release(lVar1);
  func_0x00010c160a80(param_1,param_2,1);
  func_0x00010c1ad3e0(param_1,param_2,0);
  func_0x00010c1def60(param_1,param_2,0);
  func_0x00010c1d6700(param_1,param_2,0);
  func_0x00010c1b0140(param_1,param_2,0);
  func_0x00010c1b0c20(param_1,param_2,0);
  lVar1 = param_1;
  func_0x00010c1044c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(lVar1);
  func_0x00010c1ffee0(param_1,param_2,0);
  lVar1 = param_1;
  func_0x00010bf5f460();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf69c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar1 != lVar2) {
    lVar1 = param_1;
    func_0x00010bf691a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bfc7900(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c187660(param_1,param_2,lVar2);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 108f99844; end: 108f99947; -[NBAsYouTypeFormatter removeLastDigitAndRememberPosition] */

void FUN_108f99844(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  
  ppuVar1 = param_1;
  func_0x00010beed700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf51e00();
  _objc_release(ppuVar1);
  func_0x00010bf3a660(param_1);
  ppuVar1 = ppuVar2;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    if (ppuVar1 == (undefined **)0x1) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      lVar5 = 0;
      ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
      do {
        ppuVar3 = ppuVar2;
        func_0x00010c260c80(ppuVar2,param_2,lVar5,1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = param_1;
        func_0x00010c0659a0(param_1,param_2,ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar6);
        _objc_release(ppuVar3);
        lVar5 = lVar5 + 1;
        ppuVar6 = ppuVar4;
      } while ((long)ppuVar1 + -1 != lVar5);
    }
    _objc_retain(ppuVar4);
  }
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 108f99948; end: 108f99a4b; -[NBAsYouTypeFormatter removeLastDigit] */

void FUN_108f99948(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  
  ppuVar1 = param_1;
  func_0x00010beed700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf51e00();
  _objc_release(ppuVar1);
  func_0x00010bf3a660(param_1);
  ppuVar1 = ppuVar2;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    if (ppuVar1 == (undefined **)0x1) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      lVar5 = 0;
      ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
      do {
        ppuVar3 = ppuVar2;
        func_0x00010c260c80(ppuVar2,param_2,lVar5,1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = param_1;
        func_0x00010c065980(param_1,param_2,ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar6);
        _objc_release(ppuVar3);
        lVar5 = lVar5 + 1;
        ppuVar6 = ppuVar4;
      } while ((long)ppuVar1 + -1 != lVar5);
    }
    _objc_retain(ppuVar4);
  }
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 108f99a4c; end: 108f99b1b; -[NBAsYouTypeFormatter inputStringAndRememberPosition:] */

void FUN_108f99a4c(undefined **param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  func_0x00010bf3a660(param_1);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    lVar4 = 0;
    ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
    do {
      lVar2 = param_3;
      func_0x00010c260c80(param_3,param_2,lVar4,1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = param_1;
      func_0x00010c0659a0(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      _objc_release(lVar2);
      lVar4 = lVar4 + 1;
      ppuVar5 = ppuVar3;
    } while (lVar1 != lVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 108f99b1c; end: 108f99beb; -[NBAsYouTypeFormatter inputString:] */

void FUN_108f99b1c(undefined **param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  func_0x00010bf3a660(param_1);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    lVar4 = 0;
    ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
    do {
      lVar2 = param_3;
      func_0x00010c260c80(param_3,param_2,lVar4,1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = param_1;
      func_0x00010c065980(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      _objc_release(lVar2);
      lVar4 = lVar4 + 1;
      ppuVar5 = ppuVar3;
    } while (lVar1 != lVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 108f99bec; end: 108f99c7b; -[NBAsYouTypeFormatter inputDigit:] */

void FUN_108f99bec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (lVar1 = param_3, func_0x00010c08fa60(), lVar1 != 0)) {
    uVar2 = param_1;
    func_0x00010c0659e0(param_1,param_2,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c187700(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  func_0x00010bf5f740(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f99c7c; end: 108f99d0b; -[NBAsYouTypeFormatter inputDigitAndRememberPosition:] */

void FUN_108f99c7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (lVar1 = param_3, func_0x00010c08fa60(), lVar1 != 0)) {
    uVar2 = param_1;
    func_0x00010c0659e0(param_1,param_2,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c187700(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  func_0x00010bf5f740(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f99d0c; end: 108f9a14f; -[NBAsYouTypeFormatter inputDigitWithOptionToRememberPosition_:rememberPosition:] */

void FUN_108f99d0c(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if ((param_3 == (undefined *)0x0) ||
     (puVar1 = param_3, func_0x00010c08fa60(), puVar1 == (undefined *)0x0)) {
    param_1[8] = 0;
    func_0x00010bf5f740(param_1);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_108f99fc8;
  }
  puVar1 = param_1;
  func_0x00010beed700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0();
  _objc_release(puVar1);
  if ((int)param_4 != 0) {
    puVar1 = param_1;
    func_0x00010beed700(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c08fa60();
    func_0x00010c1d6700(param_1,param_2,puVar2);
    _objc_release(puVar1);
  }
  puVar1 = param_1;
  func_0x00010c070980(param_1,param_2,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010c160a80(param_1,param_2,0);
    func_0x00010c1ad3e0(param_1,param_2,1);
  }
  else {
    puVar1 = param_1;
    func_0x00010c0db3c0(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    param_3 = puVar1;
  }
  puVar1 = param_1;
  func_0x00010beec4c0();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = param_1;
    func_0x00010c065b00();
    if ((int)puVar1 == 0) {
      puVar1 = param_1;
      func_0x00010bf0da80();
      if ((int)puVar1 == 0) {
        puVar1 = param_1;
        func_0x00010beec4a0();
        if ((int)puVar1 != 0) {
          puVar1 = param_1;
          func_0x00010c1084a0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf070e0();
          _objc_release(puVar1);
          goto LAB_108f99f94;
        }
      }
      else {
        puVar1 = param_1;
        func_0x00010bf0da60();
        if ((int)puVar1 != 0) {
LAB_108f99f94:
          param_1[8] = 1;
          func_0x00010bf0da40(param_1);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_108f99fc8;
        }
      }
      param_1[8] = 0;
      goto LAB_108f99fb4;
    }
    param_1[8] = 1;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010beed700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25da60(puVar1,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_108f99f58;
  }
  puVar1 = param_1;
  func_0x00010beed6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  if (puVar2 < (undefined *)0x3) {
    param_1[8] = 1;
LAB_108f99fb4:
    func_0x00010beed700(param_1);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_108f99fc8;
  }
  if (puVar2 == (undefined *)0x3) {
    puVar1 = param_1;
    func_0x00010bf0da80();
    if ((int)puVar1 != 0) {
      func_0x00010c1b0c20(param_1,param_2,1);
      goto LAB_108f99ed0;
    }
    puVar1 = param_1;
    func_0x00010c12d280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cb1e0(param_1,param_2,puVar1);
    _objc_release(puVar1);
    param_1[8] = 1;
LAB_108f9a098:
    func_0x00010bf0da20(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_108f99ed0:
    puVar1 = param_1;
    func_0x00010c072400();
    if ((int)puVar1 == 0) {
      puVar1 = param_1;
      func_0x00010c1044c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf529e0();
      _objc_release(puVar1);
      if (puVar2 == (undefined *)0x0) {
        param_1[8] = 0;
        goto LAB_108f9a098;
      }
      puVar2 = param_1;
      func_0x00010c0659c0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bf0daa0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010c08fa60();
      if (puVar1 == (undefined *)0x0) {
        puVar1 = param_1;
        func_0x00010c0d5620(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d55c0(param_1,param_2,puVar1);
        _objc_release(puVar1);
        puVar1 = param_1;
        func_0x00010c0c3820();
        if ((int)puVar1 == 0) {
          puVar1 = param_1;
          func_0x00010beec4c0();
          if ((int)puVar1 == 0) {
            param_1[8] = 0;
            func_0x00010beed700(param_1);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = param_1;
          }
          else {
            param_1[8] = 1;
            func_0x00010bf06d80(param_1,param_2,puVar2);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = param_1;
          }
        }
        else {
          param_1[8] = 1;
          func_0x00010c065680(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = param_1;
        }
      }
      else {
        param_1[8] = 1;
        _objc_retain(puVar3);
        puVar1 = puVar3;
      }
      _objc_release(puVar3);
      param_1 = puVar2;
    }
    else {
      puVar1 = param_1;
      func_0x00010bf0da60();
      if ((int)puVar1 != 0) {
        func_0x00010c1b0c20(param_1,param_2,0);
      }
      param_1[8] = 1;
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar2 = param_1;
      func_0x00010c1084a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d5620();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae518);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      param_1 = puVar2;
    }
LAB_108f99f58:
    _objc_release(param_1);
    param_1 = puVar1;
  }
LAB_108f99fc8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f9a150; end: 108f9a1a3; -[NBAsYouTypeFormatter attemptToChoosePatternWithPrefixExtracted_] */

void FUN_108f9a150(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c160a80(param_1,param_2,1);
  func_0x00010c1b0c20(param_1);
  uVar1 = param_1;
  func_0x00010c1044c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf0da30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_attemptToChooseFormattingPattern_1125a1030);
  return;
}



/* Entry: 108f9a1a4; end: 108f9a36b; -[NBAsYouTypeFormatter ableToExtractLongerNdd_] */

bool FUN_108f9a1a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010c0d5680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c0d5620(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25da60(puVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0d5680(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0d3c80();
    func_0x00010c1cb1c0(param_1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0d5620(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf070e0();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c1084a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf51e00();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0d5680(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c11f440(lVar2,param_2,lVar1,4);
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c260c80(lVar2,param_2,0,lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c0d3c80();
    func_0x00010c1e0760(param_1,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar2);
    _objc_release(puVar3);
  }
  lVar1 = param_1;
  func_0x00010c0d5680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d280(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  return lVar1 != param_1;
}



/* Entry: 108f9a36c; end: 108f9a4f3; -[NBAsYouTypeFormatter isDigitOrLeadingPlusSign_:] */

bool FUN_108f9a36c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110f13b78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f13b98);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0fb240();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0c1b00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c0fb240(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0c1b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar6 = lVar4;
  func_0x00010bf529e0(lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar5 == 0) {
    func_0x00010beed700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c08fa60();
    bVar7 = lVar3 == 1 && lVar6 != 0;
    _objc_release(param_1);
  }
  else {
    bVar7 = true;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  return bVar7;
}



/* Entry: 108f9a4f4; end: 108f9a7eb; -[NBAsYouTypeFormatter attemptToFormatAccruedDigits_] */

void FUN_108f9a4f4(undefined **param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar9 = param_1;
  func_0x00010c0d5620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25da60(puVar1,param_2,ppuVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar9);
  ppuVar9 = param_1;
  func_0x00010c1044c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar9;
  func_0x00010bf529e0();
  _objc_release(ppuVar9);
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar9 = (undefined **)0x0;
    do {
      ppuVar3 = param_1;
      func_0x00010c1044c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      ppuVar3 = ppuVar4;
      func_0x00010c0f5aa0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110f13bb8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = param_1;
      func_0x00010c0fb240();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010c0c1b00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x00010bf529e0();
      _objc_release(ppuVar7);
      _objc_release(ppuVar6);
      if (ppuVar8 != (undefined **)0x0) {
        ppuVar9 = ppuVar4;
        func_0x00010c0d56c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar9;
        func_0x00010c08fa60();
        _objc_release(ppuVar9);
        if (ppuVar2 == (undefined **)0x0) {
          func_0x00010c1ffee0(param_1,param_2,0);
        }
        else {
          ppuVar9 = param_1;
          func_0x00010bdc1c60();
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = ppuVar4;
          func_0x00010c0d56c0(ppuVar4);
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar4;
          func_0x00010c0d56c0(ppuVar4);
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar6;
          func_0x00010c08fa60();
          ppuVar8 = ppuVar9;
          func_0x00010c0c1b40(ppuVar9,param_2,ppuVar2,0,0,ppuVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar6);
          _objc_release(ppuVar2);
          _objc_release(ppuVar9);
          ppuVar9 = ppuVar8;
          func_0x00010bf529e0(ppuVar8);
          func_0x00010c1ffee0(param_1,param_2,ppuVar9 != (undefined **)0x0);
          _objc_release(ppuVar8);
        }
        ppuVar9 = param_1;
        func_0x00010c0fb240(param_1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar4;
        func_0x00010bfb5800(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar9;
        func_0x00010c131120(ppuVar9,param_2,puVar1,ppuVar3,ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar2);
        _objc_release(ppuVar9);
        func_0x00010bf06d80(param_1,param_2,ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar6);
        _objc_release(puVar5);
        _objc_release(ppuVar3);
        _objc_release(ppuVar4);
        goto LAB_108f9a7c0;
      }
      _objc_release(puVar5);
      _objc_release(ppuVar3);
      _objc_release(ppuVar4);
      ppuVar9 = (undefined **)((long)ppuVar9 + 1);
    } while (ppuVar2 != ppuVar9);
  }
  param_1 = &PTR____CFConstantStringClassReference_110daafd8;
LAB_108f9a7c0:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f9a7ec; end: 108f9a92b; -[NBAsYouTypeFormatter appendNationalNumber_:] */

void FUN_108f9a7ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c1084a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  iVar1 = 0x10db2d98;
  func_0x00010bf35920(&PTR____CFConstantStringClassReference_110db2d98,param_2,0);
  lVar2 = param_1;
  func_0x00010c22db80();
  if (((int)lVar2 != 0) && (lVar3 != 0)) {
    lVar2 = param_1;
    func_0x00010c1084a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf35920();
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)lVar3 != iVar1) {
      func_0x00010c1084a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &PTR____CFConstantStringClassReference_110dc5ed8;
      goto LAB_108f9a8f0;
    }
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c1084a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110dae518;
LAB_108f9a8f0:
  func_0x00010c14de00(puVar4,param_2,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108f9a92c; end: 108f9aa17; -[NBAsYouTypeFormatter getRememberedPosition] */

ulong FUN_108f9a92c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = param_1;
  func_0x00010beec4c0();
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0ed750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_originalPosition__112618fe8);
    return param_1;
  }
  uVar1 = param_1;
  func_0x00010beed6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf5f740();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c1043e0();
  if (uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    uVar6 = 0;
    uVar5 = 0;
    do {
      uVar3 = uVar2;
      func_0x00010c08fa60();
      if (uVar3 <= uVar5) break;
      uVar3 = uVar1;
      func_0x00010bf35920();
      uVar4 = uVar2;
      func_0x00010bf35920();
      if ((int)uVar3 == (int)uVar4) {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
      uVar3 = param_1;
      func_0x00010c1043e0();
    } while (uVar6 < uVar3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar5;
}



/* Entry: 108f9aa18; end: 108f9ab07; -[NBAsYouTypeFormatter attemptToChooseFormattingPattern_] */

void FUN_108f9aa18(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c0d5620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c08fa60();
  if (uVar1 < 3) {
    func_0x00010bf06d80(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfc2b80(param_1,param_2,uVar2);
    uVar1 = param_1;
    func_0x00010bf0daa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c08fa60();
    if (uVar3 == 0) {
      uVar3 = param_1;
      func_0x00010c0c3820();
      if ((uVar3 & 1) == 0) {
        func_0x00010beed700(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c065680(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      _objc_retain(uVar1);
      param_1 = uVar1;
    }
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f9ab08; end: 108f9ac5b; -[NBAsYouTypeFormatter inputAccruedNationalNumber_] */

void FUN_108f9ab08(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  ppuVar1 = param_1;
  func_0x00010c0d5620();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf51e00();
  _objc_release(ppuVar1);
  ppuVar1 = ppuVar2;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    func_0x00010c1084a0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar6 = (undefined **)0x0;
    ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
    do {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bf35920(ppuVar2,param_2,ppuVar6);
      func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc1af8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = param_1;
      func_0x00010c0659c0(param_1,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      _objc_release(puVar3);
      ppuVar6 = (undefined **)((long)ppuVar6 + 1);
      ppuVar5 = ppuVar4;
    } while (ppuVar1 != ppuVar6);
    ppuVar1 = param_1;
    func_0x00010beec4c0();
    if (((ulong)ppuVar1 & 1) == 0) {
      func_0x00010beed700(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf06d80(param_1,param_2,ppuVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f9ac5c; end: 108f9ad3f; -[NBAsYouTypeFormatter isNanpaNumberWithNationalPrefix_] */

bool FUN_108f9ac5c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1;
  func_0x00010bf5f460();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf53280();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c071ae0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)uVar4 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c0d5620();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf51e00();
    _objc_release(param_1);
    uVar3 = uVar2;
    func_0x00010bf35920(uVar2,param_2,0);
    if (((int)uVar3 == 0x31) &&
       (uVar3 = uVar2, func_0x00010bf35920(uVar2,param_2,1), (int)uVar3 != 0x30)) {
      uVar3 = uVar2;
      func_0x00010bf35920(uVar2,param_2,1);
      bVar1 = (int)uVar3 != 0x31;
    }
    else {
      bVar1 = false;
    }
    _objc_release(uVar2);
  }
  return bVar1;
}



/* Entry: 108f9ad40; end: 108f9b017; -[NBAsYouTypeFormatter removeNationalPrefixFromNationalNumber_] */

void FUN_108f9ad40(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar7 = param_1;
  func_0x00010c0d5620();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x00010bf51e00();
  _objc_release(puVar7);
  puVar7 = param_1;
  func_0x00010c078740();
  if ((int)puVar7 == 0) {
    puVar2 = param_1;
    func_0x00010bf5f460();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d56a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0) {
      puVar7 = param_1;
      func_0x00010bf5f460();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010c0d56a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c08fa60();
      _objc_release(puVar4);
      _objc_release(puVar7);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar5 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
        goto LAB_108f9af98;
      }
      puVar7 = param_1;
      func_0x00010bf5f460();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar7;
      func_0x00010c0d56a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110f13bf8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar7);
      puVar7 = param_1;
      func_0x00010c0fb240();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar7;
      func_0x00010c0c1a80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar4 = puVar3;
      func_0x00010c0d6e40(puVar3,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)0x0;
      if ((puVar3 != (undefined *)0x0) && (puVar4 != (undefined *)0x0)) {
        puVar7 = puVar4;
        func_0x00010c08fa60();
        if (puVar7 == (undefined *)0x0) {
          puVar7 = (undefined *)0x0;
        }
        else {
          func_0x00010c1b0140(param_1,param_2,1);
          puVar7 = puVar4;
          func_0x00010c08fa60(puVar4);
          puVar5 = param_1;
          func_0x00010c1084a0(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar1;
          func_0x00010c260c80(puVar1,param_2,0,puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf070e0(puVar5,param_2,puVar6);
          _objc_release(puVar6);
          _objc_release(puVar5);
        }
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  else {
    puVar7 = param_1;
    func_0x00010c1084a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ba0();
    _objc_release(puVar7);
    puVar7 = (undefined *)0x1;
    func_0x00010c1b0140(param_1,param_2,1);
  }
LAB_108f9af98:
  puVar2 = puVar1;
  func_0x00010c260c00(puVar1,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  func_0x00010c1cb1c0(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c260c80(puVar1,param_2,0,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f9b018; end: 108f9b23b; -[NBAsYouTypeFormatter attemptToExtractIdd_] */

undefined8 FUN_108f9b018(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar1 = param_1;
  func_0x00010beed6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf51e00();
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_1;
  func_0x00010bf5f460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c069700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110f13c18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0fb240();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0c1a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c0d6e40(lVar3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0;
  if ((lVar3 != 0) && (lVar1 != 0)) {
    lVar5 = lVar1;
    func_0x00010c08fa60();
    if (lVar5 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
      func_0x00010c1b0140(param_1,param_2,1);
      lVar5 = lVar1;
      func_0x00010c08fa60(lVar1);
      lVar6 = lVar2;
      func_0x00010c260c00(lVar2,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c0d3c80();
      func_0x00010c1cb1c0(param_1,param_2,lVar7);
      _objc_release(lVar7);
      _objc_release(lVar6);
      lVar6 = lVar2;
      func_0x00010c260c80(lVar2,param_2,0,lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar6;
      func_0x00010c0d3c80();
      func_0x00010c1e0760(param_1,param_2,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar6);
      lVar5 = lVar2;
      func_0x00010bf35920(lVar2,param_2,0);
      if ((int)lVar5 != 0x2b) {
        func_0x00010c1084a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf070e0();
        _objc_release(param_1);
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(puVar4);
  _objc_release(lVar2);
  return uVar8;
}


