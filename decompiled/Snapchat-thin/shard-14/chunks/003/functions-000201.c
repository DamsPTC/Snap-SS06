/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0bb924; end: 10b0bba0b; -[SCSnapcodeMetadata isEqual:] */

long FUN_10b0bb924(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0bb9e4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0bb9f0;
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
              goto LAB_10b0bb9f0;
            }
            goto LAB_10b0bb9e4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0bb9f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0bba0c; end: 10b0bba13; -[SCSnapcodeMetadata useCase] */

undefined8 FUN_10b0bba0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0bba14; end: 10b0bba1b; -[SCSnapcodeMetadata payload] */

undefined8 FUN_10b0bba14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0bba1c; end: 10b0bba23; -[SCSnapcodeMetadata stringData] */

undefined8 FUN_10b0bba1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0bba24; end: 10b0bba2b; -[SCSnapcodeMetadata identifier] */

undefined8 FUN_10b0bba24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0bba2c; end: 10b0bba33; -[SCSnapcodeMetadata scannableId] */

undefined8 FUN_10b0bba2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0bba34; end: 10b0bba7b; -[SCSnapcodeMetadata .cxx_destruct] */

void FUN_10b0bba34(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0bba7c; end: 10b0bbb8b; +[SCLensDownloadStatisticLogger incrementLensDownloadForResourceType:cacheDomain:] */

void FUN_10b0bba7c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if ((param_3 == 3) &&
     (func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f5daf8),
     (int)param_4 != 0)) {
    puVar1 = PTR_PTR_1126bb928;
    func_0x00010c0927e0(PTR_PTR_1126bb928);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110f22bf8,
                        &PTR____CFConstantStringClassReference_110e6e5b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010b256a70();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c094240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10b0bbb8c; end: 10b0bbb8f;  */

void FUN_10b0bbb8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRelease_11034a768)();
  return;
}



/* Entry: 10b0bbb90; end: 10b0bbcbb; -[SCLensBitmojiListManager fetchBitmojiList:requestSettings:completionBlock:] */

void FUN_10b0bbb90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar2 = &PTR____CFConstantStringClassReference_110f5da38;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f5da38,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10b0bbcbc;
  puStack_70 = &UNK_110852488;
  lStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_48 = param_5;
  _objc_retain();
  ppuStack_50 = ppuVar2;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_88);
  ppuVar1 = ppuStack_50;
  _objc_retain(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_48);
  _objc_release(uStack_60);
  _objc_release(ppuVar2);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10b0bbcbc; end: 10b0bbd8b;  */

void FUN_10b0bbcbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b0bbd8c;
  puStack_60 = &UNK_110cb8570;
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar3;
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar4;
  _objc_retain(uVar5);
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar5;
  _objc_retain(uVar3);
  uStack_40 = uVar3;
  func_0x00010be5af20(uVar1,param_2,uVar2,&puStack_78);
  _objc_release(uStack_40);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_38);
  return;
}



/* Entry: 10b0bbd8c; end: 10b0bbf3b;  */

void FUN_10b0bbd8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010bfa9580();
    if (lVar2 != 1) {
      func_0x00010be45b20(*(undefined8 *)(param_1 + 0x30));
      goto LAB_10b0bbf08;
    }
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10b0bbfa0;
    puStack_90 = &UNK_11084aaa8;
    puVar4 = *(undefined **)(param_1 + 0x40);
    _objc_retain(puVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_80 = puVar4;
    _objc_retain(uVar3);
    uStack_88 = uVar3;
    func_0x000107c312d0("APPSTORE",&puStack_a8);
    _objc_release(uStack_88);
    puVar4 = puStack_80;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar1 = puVar4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10b0bbf3c;
    puStack_60 = &UNK_11084a9e8;
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_58 = puVar1;
    uStack_48 = uVar5;
    _objc_retain(uVar3);
    uStack_50 = uVar3;
    _objc_retain(puVar1);
    func_0x000107c312d0("APPSTORE",&puStack_78);
    _objc_release(uStack_50);
    _objc_release(puStack_58);
    _objc_release(uStack_48);
    _objc_release(puVar1);
  }
  _objc_release(puVar4);
LAB_10b0bbf08:
  _objc_release(param_4);
  return;
}



/* Entry: 10b0bbf3c; end: 10b0bbf9f;  */

void FUN_10b0bbf3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f43618);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1,*(undefined8 *)(param_1 + 0x28),0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0bbfa0; end: 10b0bbfbb;  */

void FUN_10b0bbfa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b0bbfb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20),1,0);
  return;
}



/* Entry: 10b0bbfbc; end: 10b0bc323; -[SCLensBitmojiListManager _issueBitmojiListFetch:requestSettings:requestKey:completionBlock:] */

void FUN_10b0bbfbc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_138 = param_4;
  _objc_retain(param_4);
  uStack_140 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c2673e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = puVar2;
  _objc_release(puVar1);
  _objc_initWeak(auStack_b8,param_1);
  uStack_148 = *(undefined8 *)(param_1 + 0x18);
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110df0f38;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f5dab8;
  puStack_90 = puStack_128;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_88 = param_3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b19f8;
  puStack_130 = puVar1;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b19f8;
  puStack_b0 = puVar3;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a8 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uStack_138;
  func_0x00010c113c80();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___dispatch_main_q_11034be20;
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_10b0bc324;
  puStack_d8 = &UNK_110cb85a0;
  puVar13 = auStack_b8;
  _objc_copyWeak(auStack_c0,puVar13);
  _objc_retain(param_3);
  lStack_d0 = param_3;
  _objc_retain(param_6);
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_10b0bc544;
  puStack_108 = &UNK_1109916a8;
  uStack_c8 = param_6;
  _objc_retain(param_6);
  uStack_f8 = param_6;
  _objc_retain(param_3);
  ppuStack_158 = &puStack_120;
  ppuStack_160 = &puStack_f0;
  puStack_168 = puVar2;
  ppuVar14 = &PTR____CFConstantStringClassReference_110f5da18;
  uStack_178 = 1;
  uStack_180 = 1;
  uStack_190 = 3;
  uStack_188 = uVar15;
  uStack_170 = uVar7;
  lStack_100 = param_3;
  func_0x00010c25f6e0(uStack_148);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puStack_130);
  _objc_release(lStack_100);
  _objc_release(uStack_f8);
  _objc_release(uStack_c8);
  _objc_release(lStack_d0);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(puStack_128);
  _objc_release(param_6);
  _objc_release(uStack_140);
  _objc_release(uStack_138);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  lVar8 = param_3;
  __Unwind_Resume();
  puStack_1d0 = puVar1;
  puStack_1b8 = puVar2;
  pcStack_198 = FUN_10b0bc324;
  uStack_1e0 = uVar7;
  puStack_1d8 = puVar3;
  puStack_1c8 = puVar6;
  uStack_1c0 = param_6;
  uStack_1b0 = uVar15;
  lStack_1a8 = param_3;
  puStack_1a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar13);
  _objc_retain(ppuVar14);
  lVar9 = lVar8 + 0x30;
  _objc_loadWeakRetained();
  if (lVar9 != 0) {
    puVar10 = puVar13;
    func_0x00010bf001c0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar9;
    func_0x00010bed05e0(lVar9);
    _objc_release(puVar11);
    _objc_release(puVar10);
    uVar15 = *(undefined8 *)(lVar9 + 8);
    puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600((double)lVar12,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0500(uVar15);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_210 = 0xc2000000;
    pcStack_208 = FUN_10b0bc4e0;
    puStack_200 = &UNK_11084a9e8;
    uVar15 = *(undefined8 *)(lVar8 + 0x28);
    _objc_retain(uVar15);
    uStack_1e8 = uVar15;
    _objc_retain(ppuVar14);
    uVar15 = *(undefined8 *)(lVar8 + 0x20);
    ppuStack_1f8 = ppuVar14;
    _objc_retain(uVar15);
    uStack_1f0 = uVar15;
    func_0x000107c312d0("APPSTORE",&puStack_218);
    _objc_release(uStack_1f0);
    _objc_release(ppuStack_1f8);
    _objc_release(uStack_1e8);
  }
  _objc_release(lVar9);
  _objc_release(ppuVar14);
  _objc_release(puVar13);
  return;
}



/* Entry: 10b0bc324; end: 10b0bc4df;  */

void FUN_10b0bc324(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar6 = param_2;
    func_0x00010bf001c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bed05e0(lVar1);
    _objc_release(uVar2);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(lVar1 + 8);
    puVar4 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600((double)lVar3,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0500(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10b0bc4e0;
    puStack_70 = &UNK_11084a9e8;
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    uStack_58 = uVar6;
    _objc_retain(param_3);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uStack_68 = param_3;
    _objc_retain(uVar6);
    uStack_60 = uVar6;
    func_0x000107c312d0("APPSTORE",&puStack_88);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10b0bc4e0; end: 10b0bc543;  */

void FUN_10b0bc4e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f43618);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1,*(undefined8 *)(param_1 + 0x28),0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0bc544; end: 10b0bc55f;  */

void FUN_10b0bc544(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010b0bc55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20),0,param_3);
  return;
}



/* Entry: 10b0bc560; end: 10b0bc5af; -[SCLensBitmojiListManager boostRequest:setting:] */

void FUN_10b0bc560(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c113c80(param_4);
  func_0x00010bf1f800(uVar1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0bc5b0; end: 10b0bc603; -[SCLensBitmojiListManager _initBitmojiListCache] */

void FUN_10b0bc5b0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126ced20;
  func_0x00010c0902e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c12c270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeExpiredContentWithBlock__112628ab8,0);
  return;
}



/* Entry: 10b0bc604; end: 10b0bc667; -[SCLensBitmojiListManager _lookupInCache:block:] */

void FUN_10b0bc604(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be395c0(param_1);
  func_0x00010c0dff40(*(undefined8 *)(param_1 + 8),param_2,param_3,0,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0bc668; end: 10b0bc773; -[SCLensBitmojiListManager _ttlFromCacheControlHeader:] */

long FUN_10b0bc668(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar4 = 600;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    func_0x00010c127e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(param_3);
    puVar2 = puVar1;
    func_0x00010bfb1800();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      lVar4 = 600;
    }
    else {
      func_0x00010c11f2c0(puVar2);
      lVar3 = param_3;
      func_0x00010c260c80(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c067fc0();
      _objc_release(lVar3);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b0bc774; end: 10b0bc77b; -[SCLensBitmojiListManager resetCache] */

void FUN_10b0bc774(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1383b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetCacheWithCompletion__11262bb08,0);
  return;
}



/* Entry: 10b0bc77c; end: 10b0bc80b; -[SCLensBitmojiListManager resetCacheWithCompletion:] */

void FUN_10b0bc77c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b0bc80c;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0bc80c; end: 10b0bc857;  */

void FUN_10b0bc80c(long param_1)

{
  func_0x00010be395c0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c12aec0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b0bc848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b0bc858; end: 10b0bc85f; -[SCLensBitmojiListManager lensUserProvider] */

void FUN_10b0bc858(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 10b0bc860; end: 10b0bc8a7; -[SCLensBitmojiListManager .cxx_destruct] */

void FUN_10b0bc860(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0bc8a8; end: 10b0bc8af; -[SCLensDownloadMetadataCacheManager cachedContentPathForLensMetadata:] */

void FUN_10b0bc8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4cf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_contentPath_1125b0d68);
  return;
}



/* Entry: 10b0bc8b0; end: 10b0bc913; -[SCLensDownloadMetadataCacheManager cachedPathsForAssets:] */

void FUN_10b0bc8b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR____NSDictionary0__struct_11034ab58;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ae6a8;
    func_0x00010c1375a0(PTR_PTR_1126ae6a8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0bc914; end: 10b0bc91b; -[SCLensDownloadMetadataCacheManager isFetchedLensMetadata:] */

void FUN_10b0bc914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c072d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_isFetched_1125fa558);
  return;
}



/* Entry: 10b0bc91c; end: 10b0bc927; -[SCLensDownloadMetadataCacheManager cacheContentPath:lensMetadata:] */

void FUN_10b0bc91c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf26530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae6a8,PTR_s_cacheContentPath_forLens__1125a72f0);
  return;
}



/* Entry: 10b0bc928; end: 10b0bc933; -[SCLensDownloadMetadataCacheManager cachePath:asset:] */

void FUN_10b0bc928(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf26bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae6a8,PTR_s_cacheRequiredAssetPath_forLensAs_1125a74a0);
  return;
}



/* Entry: 10b0bc934; end: 10b0bc93f; -[SCLensDownloadMetadataCacheManager setExternalDataFetchedForLens:] */

void FUN_10b0bc934(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae6a8,PTR_s_externalDataFetchedForLens__1125c51a0);
  return;
}



/* Entry: 10b0bc940; end: 10b0bc967; -[SCLensDownloadMetadataCacheManager clearLensDownloadCache] */

void FUN_10b0bc940(void)

{
  func_0x00010c1385a0(PTR_PTR_1126ae6a8);
                    /* WARNING: Could not recover jumptable at 0x00010c139530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae6a8,PTR_s_resetRequiredAssetCache_11262bf68);
  return;
}



/* Entry: 10b0bc968; end: 10b0bcb37;  */

void FUN_10b0bc968(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_1);
  func_0x00010bf0a0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010bf529e0(param_1);
  func_0x00010c225ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  lVar4 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      lVar5 = param_3;
      (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(lVar8 * 8));
      _objc_retainAutoreleasedReturnValue();
      if ((lVar5 != 0) && (puVar6 = puVar3, func_0x00010bf4b900(), ((ulong)puVar6 & 1) == 0)) {
        func_0x00010befa120(puVar2);
        func_0x00010befa120(puVar3);
      }
      _objc_release(lVar5);
      lVar8 = lVar8 + 1;
    } while (lVar4 != lVar8);
    lVar4 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar6 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             &PTR____CFConstantStringClassReference_110f5dbf8,0xffffffffffffff9b,0);
  return;
}



/* Entry: 10b0bcb38; end: 10b0bcb53;  */

void FUN_10b0bcb38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             &PTR____CFConstantStringClassReference_110f5dbf8,0xffffffffffffff9b,0);
  return;
}



/* Entry: 10b0bcb54; end: 10b0bcccb;  */

undefined * FUN_10b0bcb54(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010bf529e0(param_1);
  func_0x00010c225ec0();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        lVar3 = param_3;
        (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(lStack_118 + lVar8 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x00010befa120(puVar1);
        }
        _objc_release(lVar3);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_1;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined1 *)puVar5;
  func_0x00010c08fa60();
  _objc_release(puVar5);
  puVar1 = (undefined *)0x0;
  if (puVar6 != (undefined1 *)0x0) {
    puVar1 = (undefined *)0x3;
  }
  return puVar1;
}



/* Entry: 10b0bcccc; end: 10b0bcd13; -[SCLensUnlockableFetchingRanker requestPriorityForLens:requestTiming:] */

undefined8 FUN_10b0bcccc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c08fa60();
  _objc_release(param_3);
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 10b0bcd14; end: 10b0bcd1b; -[SCLensUnlockableFetchingRanker lensDataFetchPolicy:requestTiming:] */

undefined8 FUN_10b0bcd14(void)

{
  return 0;
}



/* Entry: 10b0bcd1c; end: 10b0bcd23; -[SCLensUnlockableFetchingRanker mustDownloadLens:requestTiming:] */

undefined8 FUN_10b0bcd1c(void)

{
  return 1;
}



/* Entry: 10b0bcd24; end: 10b0bcd87; -[SCLensUnlockableStrategyProvider init] */

undefined1 * FUN_10b0bcd24(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127058e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126df940;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0bcd88; end: 10b0bcda3; -[SCLensUnlockableStrategyProvider warmupStrategy] */

void FUN_10b0bcd88(void)

{
  _objc_opt_new(PTR_PTR_1126df948);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0bcda4; end: 10b0bcdd3; -[SCLensUnlockableStrategyProvider lensContentStrategy] */

void FUN_10b0bcda4(void)

{
  _objc_alloc(PTR_PTR_1126df950);
  func_0x00010c023900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0bcdd4; end: 10b0bcdef; -[SCLensUnlockableStrategyProvider lensIconStrategy] */

void FUN_10b0bcdd4(void)

{
  _objc_opt_new(PTR_PTR_1126bbb30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0bcdf0; end: 10b0bce1f; -[SCLensUnlockableStrategyProvider lensAssetStrategy] */

void FUN_10b0bcdf0(void)

{
  _objc_alloc(PTR_PTR_1126df958);
  func_0x00010c023900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0bce20; end: 10b0bce4f; -[SCLensUnlockableStrategyProvider externalDataDownloadingStrategy] */

void FUN_10b0bce20(void)

{
  _objc_alloc(PTR_PTR_1126df960);
  func_0x00010c023900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0bce50; end: 10b0bce5b; -[SCLensUnlockableStrategyProvider .cxx_destruct] */

void FUN_10b0bce50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0bce5c; end: 10b0bce73; -[SCLensBackendPrefetchFiltersFactory backgroundPrefetchFilter] */

void FUN_10b0bce5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd2130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ddd30,PTR_s__backendPrefetchFilterWithAdditi_1125521e8,3,
             &PTR___NSConcreteGlobalBlock_110cb8610);
  return;
}



/* Entry: 10b0bce74; end: 10b0bcf4b;  */

undefined8 FUN_10b0bce74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1074c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf4b900();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10b0bcf4c; end: 10b0bcf57;  */

void FUN_10b0bcf4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b0bcf54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10b0bcf58; end: 10b0bd0c7; -[SCLensBitmojiAssetDataContentManagerFetcher fetchBitmojiDynamicAsset:lensId:cacheKey:cacheDomain:expirationDate:requestSettings:onProgress:completionQueue:completion:] */

void FUN_10b0bcf58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uVar1 = param_2;
  func_0x00010bde7dc0(param_2,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010be0fea0(param_1,param_2,param_3,param_4,param_5,uVar1,param_7,param_8,param_9,param_10
                      ,param_11,param_12);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010c0c5180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b0bd0c8; end: 10b0bd153; -[SCLensBitmojiAssetDataContentManagerFetcher boostRequest:setting:] */

void FUN_10b0bd0c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bde7dc0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be90c80(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f7c0(*(undefined8 *)(param_1 + 8),param_2,lVar1,param_4,lVar2);
  _objc_release(param_4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0bd154; end: 10b0bd50b; -[SCLensBitmojiAssetDataContentManagerFetcher _fetchBitmojiDynamicAsset:lensId:contentKey:cacheDomain:expirationDate:requestSettings:startTime:onProgress:completionQueue:completion:] */

void FUN_10b0bd154(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_initWeak(auStack_80,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1b8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126df990;
  _objc_alloc(PTR_PTR_1126df990);
  puVar4 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10b0bd50c;
  puStack_90 = &UNK_110850038;
  _objc_retain(uVar2);
  uStack_88 = uVar2;
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010be90c80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa9580(param_9);
  puVar6 = PTR_PTR_1126ae720;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x10b0bd514;
  puStack_b8 = &UNK_11095a438;
  _objc_retain(uVar2);
  uStack_b0 = uVar2;
  func_0x00010bf11fe0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c113c80();
  func_0x00010c003700(puVar3);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(puVar4);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_e0,auStack_80);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_9);
  uStack_d8 = param_1;
  _objc_retain(param_11);
  _objc_retain(param_12);
  func_0x00010bfa5d80(uVar1);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_e0);
  _objc_release(puVar3);
  _objc_release(uStack_b0);
  _objc_release(uStack_88);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10b0bd50c; end: 10b0bd51b;  */

void FUN_10b0bd50c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf88f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_downloadRequestFuture_1125bfd78);
  return;
}



/* Entry: 10b0bd51c; end: 10b0bd5eb;  */

void FUN_10b0bd51c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  func_0x00010bfc5880(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bfa9580(*(undefined8 *)(param_1 + 0x30));
  func_0x00010bde2a40(*(undefined8 *)(param_1 + 0x50),lVar1);
  _objc_release(param_5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0bd5ec; end: 10b0bd63b; -[SCLensBitmojiAssetDataContentManagerFetcher _contentKeyForLensContentWithRequestKey:] */

void FUN_10b0bd5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b08b8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0295e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0bd63c; end: 10b0bd68b; -[SCLensBitmojiAssetDataContentManagerFetcher _requestContextForLensId:] */

void FUN_10b0bd63c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c098440(uVar1,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_10b0c16d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b0bd68c; end: 10b0bd80b; -[SCLensBitmojiAssetDataContentManagerFetcher _completeContentFetchWithContentPath:cacheDomain:isFallback:error:contentKey:fetchPolicy:startTime:fromCache:completionQueue:completion:] */

void FUN_10b0bd68c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long in_stack_00000008;
  long in_stack_00000010;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  _objc_retain(param_5);
  func_0x00010c08fa60(param_4);
  func_0x00010be57ea0(param_1,param_2);
  _objc_release(param_5);
  if (in_stack_00000010 != 0) {
    if (in_stack_00000008 == 0) {
      (**(code **)(in_stack_00000010 + 0x10))(in_stack_00000010,param_4,param_7);
    }
    else {
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_10b0bd80c;
      puStack_90 = &UNK_11084a9e8;
      _objc_retain(in_stack_00000010);
      lStack_78 = in_stack_00000010;
      _objc_retain(param_4);
      uStack_88 = param_4;
      _objc_retain(param_7);
      uStack_80 = param_7;
      func_0x000107c27d8c(in_stack_00000008,&puStack_a8);
      _objc_release(uStack_80);
      _objc_release(uStack_88);
      _objc_release(lStack_78);
    }
  }
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(param_7);
  _objc_release(param_4);
  return;
}



/* Entry: 10b0bd80c; end: 10b0bd81f;  */

void FUN_10b0bd80c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b0bd81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b0bd820; end: 10b0bda9b; -[SCLensBitmojiAssetDataContentManagerFetcher _logRetrieveContentMetricsForCacheDomain:isFallback:fetchPolicy:fromCache:success:error:startTime:] */

void FUN_10b0bd820(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long in_x7;
  long unaff_x25;
  undefined8 uVar5;
  double dVar6;
  
  dVar6 = param_1;
  _objc_retain(param_4);
  _objc_retain(in_x7);
  _CACurrentMediaTime();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  if (in_x7 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    unaff_x25 = in_x7;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40();
    func_0x00010c14de00(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b5dab5c(uVar5,param_4,ppuVar1,puVar2,puVar3,puVar4 != (undefined *)0x0,1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (in_x7 == 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    _objc_release(ppuVar1);
    _objc_release(unaff_x25);
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    param_2 = in_x7;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40();
    func_0x00010c14de00(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b5daee4(uVar5,param_4,ppuVar1,puVar2,puVar3,puVar4 != (undefined *)0x0,
                (long)((dVar6 - param_1) * 1000.0));
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (in_x7 != 0) {
    _objc_release(ppuVar1);
    _objc_release(param_2);
  }
  _objc_release(in_x7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b0bda9c; end: 10b0bdb13; -[SCLensBitmojiAssetDataContentManagerFetcher .cxx_destruct] */

void FUN_10b0bda9c(long param_1)

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



/* Entry: 10b0bdb14; end: 10b0bdee7; -[SCLensBlobDataContentManagerFetcher fetchBlobWithId:url:encryptionKey:encryptionIv:requestSettings:onProgress:completion:] */

void FUN_10b0bdb14(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (param_4 == 0) {
    lVar7 = param_1;
    func_0x00010bdf93c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd8ee0(param_1);
    _objc_release(lVar7);
    lVar7 = 0;
  }
  else {
    _objc_initWeak(auStack_80,param_1);
    uVar6 = param_3;
    func_0x00010b0be7e8(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bde7e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(lVar1);
    _objc_retain(param_4);
    _objc_retain(param_7);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010bf11fe0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126df990;
    _objc_alloc(PTR_PTR_1126df990);
    lVar7 = param_1;
    func_0x00010be90c60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa9580(param_7);
    lVar5 = param_1;
    func_0x00010be0c500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c113c80();
    func_0x00010c003700(puVar4);
    _objc_release(lVar5);
    _objc_release(lVar7);
    uVar6 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_9);
    func_0x00010bfa5d80(uVar6);
    lVar7 = lVar1;
    func_0x00010c0c5180(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_9);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(puVar2);
    _objc_release(param_7);
    _objc_release(param_4);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_88);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 10b0bdee8; end: 10b0be08b;  */

void FUN_10b0bdee8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126ae558;
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010be62aa0(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar4,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b0be08c; end: 10b0be16b;  */

void FUN_10b0be08c(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_5);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10b0be16c;
  puStack_70 = &UNK_110875f40;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_68 = param_2;
  uStack_60 = param_5;
  uStack_58 = uVar1;
  uStack_50 = param_4;
  uStack_48 = param_3;
  _objc_retain(param_5);
  _objc_retain(param_2);
  func_0x000107c312d0("APPSTORE",&puStack_88);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_2);
  return;
}



/* Entry: 10b0be16c; end: 10b0be1c7;  */

void FUN_10b0be16c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfc5880(uVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))
            (lVar2,uVar1,*(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0be1c8; end: 10b0be253; -[SCLensBlobDataContentManagerFetcher boostRequest:setting:] */

void FUN_10b0be1c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bde7e80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010be90c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f7c0(uVar2,param_2,lVar1,param_4,param_1);
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0be254; end: 10b0be323; -[SCLensBlobDataContentManagerFetcher _networkRequestForRemoteBoltRequestKey:trackingInfo:url:] */

void FUN_10b0be254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1050;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_5;
  func_0x00010beec820(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c05a200(puVar1,param_2,uVar2,0,0,0,0,0,param_3,0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0be324; end: 10b0be45f; -[SCLensBlobDataContentManagerFetcher _networkRequestForRequestKey:url:requestSettings:] */

void FUN_10b0be324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c278ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b1058;
    _objc_alloc(PTR_PTR_1126b1058);
    lVar1 = param_5;
    func_0x00010c278ec0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    func_0x00010c279120(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x00010c278f40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b360(puVar2,param_2,lVar1,lVar3,lVar4,0,1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  func_0x00010be62a80(param_1,param_2,param_3,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b0be460; end: 10b0be597; -[SCLensBlobDataContentManagerFetcher _serializedTransformParamsForEncryptionKey:encryptionIv:] */

void FUN_10b0be460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b7fa8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126df998;
  _objc_alloc_init(PTR_PTR_1126df998);
  func_0x00010c1bab60(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c090300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf15da0(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c195ce0(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c090300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf15da0(param_4,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c195cc0(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0be598; end: 10b0be66f; -[SCLensBlobDataContentManagerFetcher _requestContext] */

void FUN_10b0be598(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b19f8;
  puStack_48 = puVar1;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &puStack_48;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_10b0c16d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar4 = PTR_PTR_1126b08b8;
    _objc_retain(ppuVar5);
    _objc_alloc(puVar4);
    func_0x00010c0295e0();
    _objc_release(ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b0be670; end: 10b0be6bf; -[SCLensBlobDataContentManagerFetcher _contentKeyFromRequestKey:] */

void FUN_10b0be670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b08b8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0295e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0be6c0; end: 10b0be6f3; -[SCLensBlobDataContentManagerFetcher _defaultDownloadError] */

void FUN_10b0be6c0(void)

{
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0be6f4; end: 10b0be707; -[SCLensBlobDataContentManagerFetcher _expirationDate] */

void FUN_10b0be6f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf65610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x40f5180000000000,PTR__OBJC_CLASS___NSDate_1126ae770,
             PTR_s_dateWithTimeIntervalSinceNow__1125b6f28);
  return;
}



/* Entry: 10b0be708; end: 10b0be7af; -[SCLensBlobDataContentManagerFetcher _callbackWithError:completion:] */

void FUN_10b0be708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10b0be7b0;
  puStack_38 = &UNK_11084aaa8;
  uStack_30 = param_3;
  uStack_28 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x000107c312d0("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uStack_28);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 10b0be7b0; end: 10b0be7db;  */

void FUN_10b0be7b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b0be7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,0,1,0,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 10b0be7dc; end: 10b0be7f7; -[SCLensBlobDataContentManagerFetcher .cxx_destruct] */

void FUN_10b0be7dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0be7f8; end: 10b0be917; -[SCLensContentDataProvider initWithCachedDataProvider:lifecycleEvent:lensContentCacheLogger:lensDataConfigProvider:performer:] */

undefined1 *
FUN_10b0be7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112705900;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 8) = 0;
    func_0x00010bec6e60(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0be918; end: 10b0be963; -[SCLensContentDataProvider fetchedLensIdsFuture] */

void FUN_10b0be918(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfab880();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0be964; end: 10b0be97b;  */

void FUN_10b0be964(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_compactMap__1125ae648,&PTR___NSConcreteGlobalBlock_110cb87d0);
  return;
}



/* Entry: 10b0be97c; end: 10b0beb2f; -[SCLensContentDataProvider fetchedLensResourceIdsFuture] */

void FUN_10b0be97c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _os_unfair_lock_lock(param_2 + 8);
  lVar4 = *(long *)(param_2 + 0x18);
  if (lVar4 == 0) {
    lVar1 = *(long *)(param_2 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf27220();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_retain(lVar4);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(long *)(param_2 + 0x18) = lVar4;
    _objc_release(uVar3);
    _os_unfair_lock_unlock(param_2 + 8);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    _objc_retain(uVar3);
    _objc_initWeak(auStack_48,param_2);
    _CACurrentMediaTime();
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(uVar3);
    uStack_50 = param_1;
    func_0x00010c297260(lVar4);
    _objc_retain(lVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar3);
    _objc_release(lVar4);
  }
  else {
    _objc_retain(lVar4);
    _os_unfair_lock_unlock(param_2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b0beb30; end: 10b0beb6b;  */

void FUN_10b0beb30(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0beb6c; end: 10b0becb3;  */

void FUN_10b0beb6c(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_4 == 0) {
      _os_unfair_lock_lock(lVar1 + 8);
      uVar2 = param_3;
      func_0x00010bf43280(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c174c00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(lVar1 + 0x10);
      *(undefined8 *)(lVar1 + 0x10) = uVar3;
      _objc_release(uVar4);
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _CACurrentMediaTime();
      dVar5 = *(double *)(param_2 + 0x30);
      func_0x00010bf529e0(param_3);
      func_0x00010c0a9520(param_1 - dVar5,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _os_unfair_lock_unlock(lVar1 + 8);
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a9500();
      _objc_release(uVar2);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0becb4; end: 10b0bed2f;  */

void FUN_10b0becb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126df9a0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c01b540(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0bed30; end: 10b0bee23; -[SCLensContentDataProvider isFetchedLens:] */

long FUN_10b0bed30(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  lVar4 = 0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126df9a0;
    _objc_alloc(PTR_PTR_1126df9a0);
    lVar4 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b540(puVar2,param_2,lVar4,0);
    _objc_release(lVar4);
    _os_unfair_lock_lock(param_1 + 8);
    uVar3 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf4b900(uVar3,param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      lVar4 = param_3;
      func_0x00010c06f460(param_3);
    }
    else {
      lVar4 = 1;
    }
    _os_unfair_lock_unlock(param_1 + 8);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b0bee24; end: 10b0beed3; -[SCLensContentDataProvider isFetchedLensContentForId:checksum:] */

undefined8 FUN_10b0bee24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126df9a0;
  _objc_alloc(PTR_PTR_1126df9a0);
  func_0x00010c01b540();
  _os_unfair_lock_lock(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf4b900(uVar2,param_2,puVar1);
  _os_unfair_lock_unlock(param_1 + 8);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10b0beed4; end: 10b0bf087; -[SCLensContentDataProvider _subscribeOnLifecycleEventsIfNecessary:] */

void FUN_10b0beed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf27180();
  uVar2 = param_3;
  if (lVar1 == 2) {
    func_0x00010bf79200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = auStack_78;
    _objc_copyWeak(puVar5,auStack_48);
    uVar3 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
  }
  else {
    if (lVar1 != 1) goto LAB_10b0bf038;
    func_0x00010bf75dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10b0bf088;
    puStack_58 = &UNK_110846510;
    puVar5 = auStack_50;
    _objc_copyWeak(puVar5,auStack_48);
    uVar3 = uVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    _objc_release(uVar4);
  }
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_destroyWeak(puVar5);
LAB_10b0bf038:
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0bf088; end: 10b0bf0df;  */

void FUN_10b0bf088(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddfa00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0bf0e0; end: 10b0bf143; -[SCLensContentDataProvider _cleanupResources] */

void FUN_10b0bf0e0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _os_unfair_lock_lock(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 10b0bf144; end: 10b0bf1af; -[SCLensContentDataProvider .cxx_destruct] */

void FUN_10b0bf144(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0bf1b0; end: 10b0bf37b; -[SCLensContentFetcherConfig initWithContentKey:lazyNetworkRequestFuture:requestContext:fetchPolicy:lazyTransformParams:lazySerializedFeatureMetadata:expirationDate:userInitiated:shouldCacheContentResult:encryptionKey:encryptionIv:] */

undefined8 *
FUN_10b0bf1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_112705908;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    puVar1[5] = param_6;
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 9) = param_10._1_1_;
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b0bf37c; end: 10b0bf383; -[SCLensContentFetcherConfig contentKey] */

undefined8 FUN_10b0bf37c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0bf384; end: 10b0bf38b; -[SCLensContentFetcherConfig lazyNetworkRequestFuture] */

undefined8 FUN_10b0bf384(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0bf38c; end: 10b0bf393; -[SCLensContentFetcherConfig requestContext] */

undefined8 FUN_10b0bf38c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0bf394; end: 10b0bf39b; -[SCLensContentFetcherConfig fetchPolicy] */

undefined8 FUN_10b0bf394(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0bf39c; end: 10b0bf3a3; -[SCLensContentFetcherConfig lazyTransformParams] */

undefined8 FUN_10b0bf39c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b0bf3a4; end: 10b0bf3ab; -[SCLensContentFetcherConfig lazySerializedFeatureMetadata] */

undefined8 FUN_10b0bf3a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b0bf3ac; end: 10b0bf3b3; -[SCLensContentFetcherConfig expirationDate] */

undefined8 FUN_10b0bf3ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b0bf3b4; end: 10b0bf3bb; -[SCLensContentFetcherConfig userInitiated] */

undefined1 FUN_10b0bf3b4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b0bf3bc; end: 10b0bf3c3; -[SCLensContentFetcherConfig shouldCacheContentResult] */

undefined1 FUN_10b0bf3bc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b0bf3c4; end: 10b0bf3cb; -[SCLensContentFetcherConfig encryptionKey] */

undefined8 FUN_10b0bf3c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}


