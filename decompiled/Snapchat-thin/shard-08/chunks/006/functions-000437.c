/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10641679c; end: 1064167a7; -[SCAdOperaMediaManager didReceiveMediaServicesWereLostNotification] */

void FUN_10641679c(long param_1)

{
  *(undefined1 *)(param_1 + 0x78) = 1;
  return;
}



/* Entry: 1064167a8; end: 1064167fb; -[SCAdOperaMediaManager didReceiveMediaServicesWereResetNotification] */

void FUN_1064167a8(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1283e0();
    _objc_release(uVar1);
  }
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}



/* Entry: 1064167fc; end: 1064168bb; -[SCAdOperaMediaManager .cxx_destruct] */

void FUN_1064167fc(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064168bc; end: 106416923; +[SCAdsAdRequestNotFullyViewedStoriesContextConfig descriptor] */

void FUN_1064168bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3870 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ade3e0,
                        &PTR____CFConstantStringClassReference_110e4e678,
                        &PTR_s_snapchat_ads_abconfig_11314e150,&PTR_DAT_11314e168,2,0x10,0x1c);
    puRam00000001136c3870 = puVar1;
  }
  return;
}



/* Entry: 106416924; end: 10641699f; +[SCAdsAdRequestNotFullyViewedStoriesContextConfig_PostRoll descriptor] */

undefined * FUN_106416924(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3878 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ade430,
                        &PTR____CFConstantStringClassReference_110e4e698,
                        &PTR_s_snapchat_ads_abconfig_11314e150,&PTR_DAT_11314e1a8,2,0xc,0x1c);
    func_0x00010c228780();
    puRam00000001136c3878 = puVar1;
  }
  return puRam00000001136c3878;
}



/* Entry: 1064169a0; end: 106416b57;  */

void FUN_1064169a0(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain();
  ppuVar2 = param_1;
  func_0x00010c105ae0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar2;
  func_0x00010c0810a0();
  _objc_release(ppuVar2);
  if (((ulong)ppuVar1 & 1) == 0) {
    ppuVar2 = param_1;
    func_0x00010c105ae0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar2;
    func_0x00010c07eb80();
    _objc_release(ppuVar2);
    if (((ulong)ppuVar1 & 1) == 0) {
      ppuVar2 = param_1;
      func_0x00010c105ae0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar2;
      func_0x00010c07fda0();
      _objc_release(ppuVar2);
      if (((ulong)ppuVar1 & 1) == 0) {
        ppuVar2 = param_1;
        func_0x00010c105ae0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = ppuVar2;
        func_0x00010c1139e0();
        _objc_release(ppuVar2);
        if (((ulong)ppuVar1 & 1) == 0) {
          ppuVar2 = param_1;
          func_0x00010c105ae0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar1 = ppuVar2;
          func_0x00010bfb3a00();
          _objc_release(ppuVar2);
          if (((ulong)ppuVar1 & 1) == 0) {
            ppuVar2 = param_1;
            func_0x00010c105ae0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar1 = ppuVar2;
            func_0x00010c113a20();
            _objc_release(ppuVar2);
            if (((ulong)ppuVar1 & 1) == 0) {
              ppuVar2 = param_1;
              func_0x00010c105ae0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar1 = ppuVar2;
              func_0x00010bfb3a40();
              _objc_release(ppuVar2);
              if (((ulong)ppuVar1 & 1) == 0) {
                ppuVar2 = param_1;
                func_0x00010c0ebcc0(param_1);
                FUN_106416b58();
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                ppuVar2 = &PTR____CFConstantStringClassReference_110e4e778;
              }
            }
            else {
              ppuVar2 = &PTR____CFConstantStringClassReference_110e4e758;
            }
          }
          else {
            ppuVar2 = &PTR____CFConstantStringClassReference_110e4e738;
          }
        }
        else {
          ppuVar2 = &PTR____CFConstantStringClassReference_110e4e718;
        }
      }
      else {
        ppuVar2 = &PTR____CFConstantStringClassReference_110e4e6f8;
      }
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e4e6d8;
    }
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e4e6b8;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106416b58; end: 106416b7f;  */

undefined ** FUN_106416b58(long param_1)

{
  if (param_1 - 1U < 0x12) {
    return (undefined **)(&PTR_PTR_110921b20)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110db8b78;
}



/* Entry: 106416b80; end: 106416d27;  */

undefined8 FUN_106416b80(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c105ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    uVar4 = 0xffffffffffffffff;
  }
  else {
    uVar1 = param_1;
    func_0x00010c105ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1139e0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c105ae0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfb3a00();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) {
        uVar1 = param_1;
        func_0x00010c105ae0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c113a20();
        if ((int)uVar2 == 0) {
          uVar2 = param_1;
          func_0x00010c105ae0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010bfb3a40();
          _objc_release(uVar2);
          _objc_release(uVar1);
          if ((uVar3 & 1) == 0) {
            uVar1 = param_1;
            func_0x00010c105ae0();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010c0810a0();
            _objc_release(uVar1);
            if ((uVar2 & 1) == 0) {
              uVar1 = param_1;
              func_0x00010c105ae0();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar1;
              func_0x00010c07eb80();
              _objc_release(uVar1);
              if ((uVar2 & 1) == 0) {
                uVar1 = param_1;
                func_0x00010c105ae0();
                _objc_retainAutoreleasedReturnValue();
                uVar2 = uVar1;
                func_0x00010c07fda0();
                _objc_release(uVar1);
                uVar4 = 0x1a;
                if ((int)uVar2 == 0) {
                  uVar4 = 0xffffffffffffffff;
                }
              }
              else {
                uVar4 = 0x19;
              }
            }
            else {
              uVar4 = 0x18;
            }
            goto LAB_106416c78;
          }
        }
        else {
          _objc_release(uVar1);
        }
        uVar4 = 0x21;
      }
      else {
        uVar4 = 0x12;
      }
    }
    else {
      uVar4 = 0x11;
    }
  }
LAB_106416c78:
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 106416d28; end: 106416d67;  */

undefined8 FUN_106416d28(ulong param_1)

{
  if (param_1 < 0x13) {
    return *(undefined8 *)(&UNK_10dddbf30 + param_1 * 8);
  }
  return 0x16;
}



/* Entry: 106416d68; end: 106416e17;  */

void FUN_106416d68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca620;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c03a0e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106416e18; end: 106416eb3;  */

void FUN_106416e18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca620;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c03a0e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106416eb4; end: 106416fbb;  */

void FUN_106416eb4(void)

{
  _objc_alloc(PTR_PTR_1126ca620);
  func_0x00010c03a0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106416fbc; end: 10641701b;  */

void FUN_106416fbc(undefined8 param_1)

{
  _objc_alloc(PTR_PTR_1126ca628);
  func_0x00010c0622c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10641701c; end: 106417123;  */

void FUN_10641701c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ca5e8;
  _objc_retain(param_5);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  if ((param_3 == 0) && (param_4 == 0)) {
    func_0x000106416d48(param_2);
  }
  func_0x00010c018ae0(puVar1);
  _objc_release(param_5);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106417124; end: 10641719f;  */

bool FUN_106417124(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c105ae0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) && (lVar3 = param_1, func_0x00010c0ebcc0(), lVar3 != 6)) {
    lVar3 = param_1;
    func_0x00010c0ebcc0(param_1);
    bVar1 = lVar3 != 7;
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1064171a0; end: 106417383; -[SCAdOpportunityLoggingImpl initWithGrapheneRegistry:adViewingHistory:blizzardLogger:adConfigProvider:flipper:] */

undefined1 *
FUN_1064171a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f1288;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bef2aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar5);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar4;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106417384; end: 10641745b; -[SCAdOpportunityLoggingImpl logAdOpportunity:] */

void FUN_106417384(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10641745c; end: 10641748f;  */

void FUN_10641745c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4fde0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106417490; end: 1064185a7; -[SCAdOpportunityLoggingImpl _logAdOpportunity:] */

void FUN_106417490(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == (undefined **)0x0) goto LAB_106418520;
  puVar1 = PTR_PTR_1126ca630;
  _objc_alloc_init();
  ppuVar2 = param_3;
  func_0x00010bef4240();
  if (ppuVar2 == (undefined **)0x2) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbc380();
    func_0x00010c196400(puVar1);
    _objc_release(uVar3);
  }
  ppuVar2 = param_3;
  func_0x00010c105ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (ppuVar2 == (undefined **)0x0) {
    lVar12 = *(long *)(param_1 + 0x38);
    func_0x00010bef4240(param_3);
    func_0x00010c0df840(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar15);
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar12 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bef4240(param_3);
      func_0x00010c0df840(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3);
      _objc_release(puVar15);
    }
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bef4240(param_3);
    puVar16 = puVar15;
    func_0x00010c0df840(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c0df760(puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar14 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bef4240(param_3);
    func_0x00010c0df840(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar14);
    _objc_release(puVar11);
    _objc_release(puVar15);
    _objc_release(uVar3);
    _objc_release(puVar16);
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bef4240(param_3);
    func_0x00010c0df840(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c1d5b20(puVar1);
  }
  else {
    lVar12 = *(long *)(param_1 + 0x40);
    func_0x00010bef4240(param_3);
    func_0x00010c0df840(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar15);
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar12 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bef4240(param_3);
      func_0x00010c0df840(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3);
      _objc_release(puVar15);
    }
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bef4240(param_3);
    puVar16 = puVar15;
    func_0x00010c0df840(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c0df760(puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar14 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bef4240(param_3);
    func_0x00010c0df840(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar14);
    _objc_release(puVar11);
    _objc_release(puVar15);
    _objc_release(uVar3);
    _objc_release(puVar16);
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bef4240(param_3);
    func_0x00010c0df840(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c1df880(puVar1);
  }
  _objc_release(uVar3);
  _objc_release(puVar15);
  ppuVar2 = param_3;
  func_0x00010c25b040(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c20d9e0(puVar1);
  _objc_release(ppuVar2);
  func_0x00010bef4240(param_3);
  func_0x0001084b952c();
  func_0x00010c163f80(puVar1);
  func_0x00010c29d360(param_3);
  func_0x000108534aa8();
  func_0x00010c222c00(puVar1);
  ppuVar2 = param_3;
  func_0x00010c105ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 == (undefined **)0x0) {
    func_0x00010c0ebcc0(param_3);
    FUN_106416d28();
    func_0x00010c164740(puVar1);
  }
  else {
    FUN_106416b80();
    func_0x00010c1df860(puVar1);
  }
  func_0x00010c120880(param_3);
  func_0x00010c1e7aa0(puVar1);
  ppuVar2 = param_3;
  func_0x00010bef2c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar1);
  _objc_release(ppuVar2);
  ppuVar2 = param_3;
  func_0x00010bef47c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164260(puVar1);
  _objc_release(ppuVar2);
  ppuVar2 = param_3;
  func_0x00010c099300(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166280(puVar1);
  _objc_release(ppuVar2);
  ppuVar2 = param_3;
  func_0x00010c105ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010c113a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2640(puVar1);
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  ppuVar2 = param_3;
  func_0x00010c105ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010bfb3a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cd400(puVar1);
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  ppuVar2 = param_3;
  func_0x00010c105ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c112760();
  func_0x00010c1e2660(puVar1);
  _objc_release(ppuVar2);
  ppuVar2 = param_3;
  func_0x00010c105ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9b60();
  func_0x00010c1cd420(puVar1);
  _objc_release(ppuVar2);
  func_0x00010bf21060();
  func_0x00010c173b80(puVar1);
  ppuVar2 = param_3;
  func_0x00010c105ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1127a0();
  func_0x00010c1e2680(puVar1);
  _objc_release(ppuVar2);
  ppuVar2 = param_3;
  func_0x00010c105ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9be0();
  func_0x00010c1cd460(puVar1);
  _objc_release(ppuVar2);
  ppuVar2 = param_3;
  FUN_1064169a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_3;
  func_0x00010c105ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar4 == (undefined **)0x0) {
    puVar15 = PTR_PTR_1126b8d98;
    func_0x00010bef3a20();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar15;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    ppuVar4 = param_3;
    FUN_106417124();
    if ((int)ppuVar4 == 0) {
      puVar16 = (undefined *)0x0;
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar15 = PTR_PTR_1126b8d98;
      func_0x00010bef3900();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR_PTR_1126b8d98;
      func_0x00010bef38e0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar15 = PTR_PTR_1126b8d98;
    func_0x00010c105ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar15;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    puVar16 = (undefined *)0x0;
    puVar15 = (undefined *)0x0;
    puVar11 = (undefined *)0x0;
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bef4240(param_3);
  func_0x00010c0df840(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar15;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bef4240(param_3);
  func_0x00010c0df840(puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar16;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(puVar5);
  _objc_release(puVar15);
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bef4240(param_3);
  func_0x00010c0df840(puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar11;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar16);
  _objc_release(puVar15);
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bef4240(param_3);
  func_0x00010c0df840(puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar15);
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bef60a0(param_3);
  func_0x00010c0df780(puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar7;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar11);
  _objc_release(puVar15);
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bef60a0(param_3);
  func_0x00010c0df780(puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar11);
  _objc_release(puVar15);
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bef60a0(param_3);
  func_0x00010c0df780(puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar11);
  _objc_release(puVar15);
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bef60a0(param_3);
  func_0x00010c0df780(puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar16;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(puVar11);
  _objc_release(puVar15);
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c276c00(param_3);
  func_0x00010c0df840(puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar15);
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c276c00(param_3);
  func_0x00010c0df840(puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar7;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar11);
  _objc_release(puVar15);
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c276c00(param_3);
  func_0x00010c0df840(puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar11);
  _objc_release(puVar15);
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c276c00(param_3);
  func_0x00010c0df840(puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar11);
  _objc_release(puVar15);
  puVar15 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar15;
  func_0x00010bf5e740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  if (puVar7 == (undefined *)0x0) {
    puStack_100 = (undefined *)0x0;
  }
  else {
    puStack_100 = puVar7;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x10));
  }
  if (puVar6 == (undefined *)0x0) {
    puStack_f8 = (undefined *)0x0;
    if (puVar13 == (undefined *)0x0) goto LAB_106418258;
LAB_1064181d0:
    puVar15 = PTR_PTR_1126b2930;
    func_0x00010bf5e640(PTR_PTR_1126b2930);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar15;
    func_0x00010bfd3880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    puStack_f0 = puVar13;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x10));
    _objc_release(puVar5);
  }
  else {
    puStack_f8 = puVar6;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x10));
    if (puVar13 != (undefined *)0x0) goto LAB_1064181d0;
LAB_106418258:
    puStack_f0 = (undefined *)0x0;
  }
  _objc_initWeak(auStack_98,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_3);
  uVar14 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a0,auStack_98);
  _objc_retain(puVar1);
  _objc_retain(puVar16);
  func_0x00010bef6360(uVar3);
  _objc_release(uVar14);
  _objc_release(uVar3);
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e4fbf8;
  ppuVar4 = param_3;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar4;
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e4fc38;
  ppuVar9 = param_3;
  ppuStack_80 = ppuVar8;
  func_0x00010bef4240();
  func_0x0001084b952c();
  func_0x00010bae7a70();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  if (ppuVar9 == (undefined **)0x0) {
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_78 = ppuVar10;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar9 == (undefined **)0x0) {
    _objc_release(ppuVar10);
  }
  _objc_release(ppuVar9);
  if (ppuVar4 == (undefined **)0x0) {
    _objc_release(ppuVar8);
  }
  _objc_release(ppuVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar13 = puVar1;
  func_0x00010bfc52e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_3;
  func_0x00010bef47c0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110e4ea38;
  }
  else {
    ppuVar8 = param_3;
    func_0x00010bef47c0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = puVar1;
  func_0x00010bf0a640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eeb40(uVar3);
  _objc_release(puVar5);
  if (ppuVar4 != (undefined **)0x0) {
    _objc_release(ppuVar8);
  }
  _objc_release(ppuVar4);
  _objc_release(puVar13);
  _objc_release(puVar15);
  _objc_release(puVar16);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar11);
  _objc_release(ppuVar2);
  _objc_release(puStack_f0);
  _objc_release(puVar16);
  _objc_release(puStack_f8);
  _objc_release(puStack_100);
  _objc_release(puVar1);
LAB_106418520:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume();
  param_3 = param_3 + 6;
  _objc_loadWeakRetained(param_3);
  func_0x00010be52c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064185a8; end: 1064185eb;  */

void FUN_1064185a8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be52c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064185ec; end: 10641870b; -[SCAdOpportunityLoggingImpl _logEventWithAdViewedCount:blizzardEvent:grapheneMetrics:] */

void FUN_1064185ec(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c164780(param_4,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(param_4);
  _objc_release(uVar1);
  if (param_5 != 0) {
    if (param_3 < 10) {
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar2);
    }
    else {
      ppuVar3 = &PTR____CFConstantStringClassReference_110dd2318;
    }
    lVar4 = param_5;
    func_0x00010c2ac460(param_5,param_2,&PTR____CFConstantStringClassReference_110e4ea18,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(ppuVar3);
    func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x10),param_2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 10641870c; end: 106418783; -[SCAdOpportunityLoggingImpl .cxx_destruct] */

void FUN_10641870c(long param_1)

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



/* Entry: 106418784; end: 106418a6b; -[SCAdOpportunityLoggingV2Impl initWithBlizzardLogger:timeProvider:adConfigProviderV2:applicationLifecycleEvents:grapheneRegistry:opportunityNonFatalReporter:] */

undefined8 *
FUN_106418784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f1290;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar4 = puVar1[8];
    func_0x00010bf75dc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar2 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar5);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106418a6c; end: 106418a97;  */

void FUN_106418a6c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcc9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106418a98; end: 106418b6f; -[SCAdOpportunityLoggingV2Impl onSessionStart:] */

void FUN_106418a98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106418b70; end: 106418ba3;  */

void FUN_106418b70(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106418ba4; end: 106418c93; -[SCAdOpportunityLoggingV2Impl onAdRequestStart:storySessionId:viewLocation:] */

void FUN_106418ba4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_3;
  _objc_retain(param_4);
  uStack_50 = param_5;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 106418c94; end: 106418ccb;  */

void FUN_106418c94(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be678e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106418ccc; end: 106418dbb; -[SCAdOpportunityLoggingV2Impl onAdRequestFinish:adResponse:viewLocation:] */

void FUN_106418ccc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_3;
  _objc_retain(param_4);
  uStack_50 = param_5;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 106418dbc; end: 106418df3;  */

void FUN_106418dbc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be678c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106418df4; end: 106418eab; -[SCAdOpportunityLoggingV2Impl onAdMediaDownloadStart:] */

void FUN_106418df4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106418eac; end: 106418edf;  */

void FUN_106418eac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be67760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106418ee0; end: 106418f97; -[SCAdOpportunityLoggingV2Impl onAdMediaDownloadFinish:] */

void FUN_106418ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106418f98; end: 106418fcb;  */

void FUN_106418f98(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be67740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106418fcc; end: 1064190c3; -[SCAdOpportunityLoggingV2Impl onPagedToNextUnviewedStory:adOpportunityMissType:isFromAd:isToAd:storyViewCountSinceLastAd:snapViewCountSinceLastAd:timeViewedMillisSinceLastAd:] */

void FUN_106418fcc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  _objc_copyWeak(auStack_a0,auStack_68);
  uStack_98 = param_4;
  uStack_90 = param_5;
  uStack_88 = param_8;
  uStack_80 = param_9;
  uStack_78 = param_1;
  uStack_70 = param_6;
  uStack_6f = param_7;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1064190c4; end: 106419107;  */

void FUN_1064190c4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be6a960(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106419108; end: 1064191eb; -[SCAdOpportunityLoggingV2Impl onMidRollSlotEnter:adOpportunityMissType:isToAd:snapViewCountSinceLastAd:timeViewedMillisSinceLastAd:] */

void FUN_106419108(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  _objc_copyWeak(auStack_88,auStack_58);
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_7;
  uStack_68 = param_1;
  uStack_60 = param_6;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1064191ec; end: 10641922b;  */

void FUN_1064191ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be6a120(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10641922c; end: 1064192e3; -[SCAdOpportunityLoggingV2Impl onMidRollGroupBoundary:] */

void FUN_10641922c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1064192e4; end: 106419317;  */

void FUN_1064192e4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106419318; end: 1064193d7; -[SCAdOpportunityLoggingV2Impl onIsBrandSafeSlot:adProductType:] */

void FUN_106419318(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_50,auStack_38);
  uStack_48 = param_4;
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1064193d8; end: 10641940f;  */

void FUN_1064193d8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106419410; end: 1064194c7; -[SCAdOpportunityLoggingV2Impl onInsertionRulesSatisfied:] */

void FUN_106419410(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1064194c8; end: 1064194fb;  */

void FUN_1064194c8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be699e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064194fc; end: 1064195fb; -[SCAdOpportunityLoggingV2Impl onInsertionRuleEvaluation:isSatisfied:storyThreshold:snapThreshold:timeThresholdMillis:storyViewCountSinceLastAd:snapViewCountSinceLastAd:timeViewedMillisSinceLastAd:] */

void FUN_1064194fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_3);
  uVar1 = *(undefined8 *)(param_3 + 0x50);
  _objc_copyWeak(auStack_b0,auStack_68);
  uStack_a8 = param_5;
  uStack_a0 = param_7;
  uStack_98 = param_8;
  uStack_90 = param_1;
  uStack_88 = param_9;
  uStack_80 = param_10;
  uStack_78 = param_2;
  uStack_70 = param_6;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1064195fc; end: 106419643;  */

void FUN_1064195fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be699c0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106419644; end: 1064196ff; -[SCAdOpportunityLoggingV2Impl onTryInsertionStarted:adOpportunityMissType:] */

void FUN_106419644(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_50,auStack_38);
  uStack_48 = param_3;
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106419700; end: 106419733;  */

void FUN_106419700(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106419734; end: 1064197eb; -[SCAdOpportunityLoggingV2Impl onInsertionInProgress:] */

void FUN_106419734(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1064197ec; end: 10641981f;  */

void FUN_1064197ec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be699a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106419820; end: 1064198df; -[SCAdOpportunityLoggingV2Impl onInsertionFinished:isSuccessful:] */

void FUN_106419820(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_50,auStack_38);
  uStack_48 = param_3;
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1064198e0; end: 106419917;  */

void FUN_1064198e0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106419918; end: 1064199bf; -[SCAdOpportunityLoggingV2Impl onViewingSessionClosed] */

void FUN_106419918(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1064199c0; end: 1064199eb;  */

void FUN_1064199c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064199ec; end: 106419a2b; -[SCAdOpportunityLoggingV2Impl _onSessionStart:] */

void FUN_1064199ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = param_4;
  _objc_release(uVar1);
  func_0x00010be1e5c0(param_2);
  *(undefined8 *)(param_2 + 0x58) = param_1;
  return;
}



/* Entry: 106419a2c; end: 106419dbf; -[SCAdOpportunityLoggingV2Impl _onAdRequestStart:storySessionId:viewLocation:] */

void FUN_106419a2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = *(long *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c0df840(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar7,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar7 == 0) {
    func_0x00010be3a5e0(param_1,param_2,param_3);
    lVar7 = *(long *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar7,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  lVar2 = lVar7;
  func_0x00010c2bc8c0(lVar7,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a7b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c2ba620(lVar3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar3);
  func_0x00010be1e5c0(param_1);
  lVar3 = lVar2;
  func_0x00010c2a7c20(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar4 = PTR_PTR_1126ca638;
  _objc_alloc(PTR_PTR_1126ca638);
  func_0x00010be1e5c0(param_1);
  func_0x00010c052a00(puVar4,param_2,0);
  func_0x00010befa120(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ca638;
  _objc_alloc(PTR_PTR_1126ca638);
  func_0x00010be1e5c0(param_1);
  func_0x00010c052a00(puVar4,param_2,1);
  func_0x00010befa120(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  lVar2 = lVar3;
  func_0x00010c2ad5a0(lVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126ca640;
  func_0x00010bfe6000(PTR_PTR_1126ca640);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar9,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010c067fc0();
  _objc_release(uVar9);
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010c2a7d60(puVar4,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar5;
  func_0x00010c2a7960(puVar5,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar6 = puVar4;
  func_0x00010c2b9120(puVar4,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar5);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a7d80(lVar2,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar8 = *(undefined8 *)(param_1 + 8);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar8,param_2,lVar3,puVar5);
  _objc_release(puVar5);
  func_0x00010be4fe20(param_1,param_2,param_3,param_5,0,0);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 106419dc0; end: 10641a087; -[SCAdOpportunityLoggingV2Impl _onAdRequestFinish:adResponse:viewLocation:] */

void FUN_106419dc0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  lVar8 = *(long *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar8,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar8 == 0) {
    func_0x00010be3a5e0(param_1,param_2,param_3);
    lVar8 = *(long *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar8,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  lVar2 = lVar8;
  func_0x00010c2bc8c0(lVar8,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a7b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c2a7c40(lVar3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010be1e5c0(param_1);
  lVar3 = lVar2;
  func_0x00010c2a7be0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bed2a20(param_1,param_2,lVar3,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar2;
  if (param_4 != 0) {
    lVar4 = lVar8;
    func_0x00010bef5220();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar5 == 0) goto LAB_10641a058;
    lVar4 = lVar5;
    func_0x00010c2afe80(lVar5,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    lVar6 = lVar8;
    func_0x00010bef5220(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0(puVar1,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    puVar7 = puVar1;
    func_0x00010bf529e0();
    if (puVar7 != (undefined *)0x0) {
      puVar7 = puVar1;
      func_0x00010bf529e0(puVar1);
      func_0x00010c130f40(puVar1,param_2,puVar7 + -1,lVar4);
    }
    func_0x00010c2a7d80(lVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(puVar1);
    _objc_release(lVar4);
    _objc_release(lVar5);
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar9,param_2,lVar3,puVar1);
  _objc_release(puVar1);
  lVar2 = lVar8;
  func_0x00010c29d360(lVar8);
  func_0x00010be4fe20(param_1,param_2,param_3,lVar2,1,param_4);
LAB_10641a058:
  _objc_release(lVar3);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10641a088; end: 10641a1c7; -[SCAdOpportunityLoggingV2Impl _onAdMediaDownloadStart:] */

void FUN_10641a088(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar5,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar5 != 0) {
    _objc_retain(lVar5);
    func_0x00010be1e5c0(param_1);
    lVar2 = lVar5;
    func_0x00010c2a7a20(lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar3 = param_1;
    func_0x00010bed2a20(param_1,param_2,lVar2,3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar6 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar6,param_2,lVar3,puVar1);
    _objc_release(puVar1);
    lVar2 = lVar5;
    func_0x00010c29d360(lVar5);
    lVar4 = lVar5;
    func_0x00010bef4a60(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4fe20(param_1,param_2,param_3,lVar2,3,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 10641a1c8; end: 10641a307; -[SCAdOpportunityLoggingV2Impl _onAdMediaDownloadFinish:] */

void FUN_10641a1c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar5,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar5 != 0) {
    _objc_retain(lVar5);
    func_0x00010be1e5c0(param_1);
    lVar2 = lVar5;
    func_0x00010c2a7a00(lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar3 = param_1;
    func_0x00010bed2a20(param_1,param_2,lVar2,4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar6 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar6,param_2,lVar3,puVar1);
    _objc_release(puVar1);
    lVar2 = lVar5;
    func_0x00010c29d360(lVar5);
    lVar4 = lVar5;
    func_0x00010bef4a60(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4fe20(param_1,param_2,param_3,lVar2,4,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 10641a308; end: 10641a477; -[SCAdOpportunityLoggingV2Impl _onPagedToNextUnviewedStory:adOpportunityMissType:isFromAd:isToAd:storyViewCountSinceLastAd:snapViewCountSinceLastAd:timeViewedMillisSinceLastAd:] */

void FUN_10641a308(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(param_2 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar5 != 0) {
    if ((param_6 & 1) == 0) {
      func_0x00010be0a8c0(param_1,param_2,param_3,param_4,param_5,param_7,param_8,param_9);
    }
    if ((int)param_7 != 0) {
      func_0x00010be9e740(param_2,param_3,param_4);
      uVar6 = *(undefined8 *)(param_2 + 0x18);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar6,param_3,PTR____kCFBooleanFalse_11034ab60,puVar1);
      _objc_release(puVar1);
    }
    lVar2 = lVar5;
    func_0x00010c29d360(lVar5);
    lVar3 = lVar5;
    func_0x00010bef4a60(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c06d860(lVar5);
    func_0x00010be58b20(param_1,param_2,param_3,param_4,lVar2,lVar3,lVar4,param_7,param_8,param_9);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 10641a478; end: 10641aa4b; -[SCAdOpportunityLoggingV2Impl _enterSlotForProductType:adOpportunityMissType:isToAd:storyViewCountSinceLastAd:snapViewCountSinceLastAd:timeViewedMillisSinceLastAd:] */

void FUN_10641a478(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  
  lVar13 = *(long *)(param_2 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar13,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar13 != 0) {
    lVar2 = lVar13;
    func_0x00010bef5220();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      _objc_retain(lVar3);
      func_0x00010be1e5c0(param_2);
      lVar2 = lVar3;
      func_0x00010c2b9100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar4 = lVar2;
      func_0x00010c2b0140(lVar2,param_3,param_6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar4;
      func_0x00010c2ba780(lVar4,param_3,param_7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c2b98a0(lVar2,param_3,param_8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar4;
      func_0x00010c2bb200(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = lVar3;
      func_0x00010bef3000();
      if (lVar4 == 0) {
        ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar6 = (undefined **)0x0;
        if (lVar4 == 1) {
          ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5d10;
        }
        ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5d28;
        if (lVar4 != 3) {
          ppuVar5 = ppuVar6;
        }
      }
      lVar4 = lVar2;
      func_0x00010c2a7a60(lVar2,param_3,ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      if (ppuVar5 != (undefined **)0x0) {
        uVar12 = *(undefined8 *)(param_2 + 0x68);
        ppuVar6 = ppuVar5;
        func_0x00010c067fc0(ppuVar5);
        lVar2 = lVar13;
        func_0x00010bef4a60(lVar13);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar2;
        func_0x00010bef2c20();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar13;
        func_0x00010bef4a60(lVar13);
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar8;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c133580(uVar12,param_3,ppuVar6,param_4,lVar7,lVar14);
        _objc_release(lVar14);
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar2);
      }
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      lVar2 = lVar3;
      func_0x00010c23e9c0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a0c0(puVar1,param_3,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      puVar9 = PTR_PTR_1126ca638;
      _objc_alloc(PTR_PTR_1126ca638);
      func_0x00010be1e5c0(param_2);
      func_0x00010c052a00(puVar9,param_3,0xb);
      func_0x00010befa120(puVar1,param_3,puVar9);
      _objc_release(puVar9);
      lVar2 = lVar13;
      func_0x00010bf99f20(lVar13);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_2;
      func_0x00010be5f740(param_2,param_3,lVar2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar4;
      func_0x00010c2b9120(lVar4,param_3,lVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = lVar13;
      func_0x00010bef5220();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar4;
      func_0x00010c0d3c80();
      _objc_release(lVar4);
      lVar4 = lVar8;
      func_0x00010bf529e0();
      if (lVar4 != 0) {
        lVar4 = lVar8;
        func_0x00010bf529e0(lVar8);
        func_0x00010c130f40(lVar8,param_3,lVar4 + -1,lVar2);
      }
      lVar14 = *(long *)(param_2 + 0x10);
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(lVar14,param_3,puVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar14;
      func_0x00010c067fc0();
      _objc_release(lVar14);
      _objc_release(puVar9);
      if ((int)param_6 != 0) {
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,lVar4 + 1);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = *(undefined8 *)(param_2 + 0x10);
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar12,param_3,puVar9,puVar10);
        _objc_release(puVar10);
        _objc_release(puVar9);
      }
      puVar9 = PTR_PTR_1126ca640;
      func_0x00010bfe6000(PTR_PTR_1126ca640);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c2a7d60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar9 = puVar10;
      func_0x00010c2a7960(puVar10,param_3,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar11 = puVar9;
      func_0x00010c2b9120(puVar9,param_3,puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar10);
      lVar4 = lVar13;
      func_0x00010bef4a60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar9 = puVar11;
      if (lVar4 != 0) {
        func_0x00010c2afe80(puVar11,param_3,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
      }
      func_0x00010befa120(lVar8,param_3,puVar9);
      lVar4 = lVar13;
      func_0x00010c2a7d80(lVar13,param_3,lVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_2 + 8);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar12,param_3,lVar4,puVar10);
      _objc_release(puVar10);
      _objc_release(lVar4);
      _objc_release(puVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(puVar1);
      _objc_release(ppuVar5);
      _objc_release(lVar2);
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar13);
  return;
}



/* Entry: 10641aa4c; end: 10641aba7; -[SCAdOpportunityLoggingV2Impl _onMidRollSlotEnter:adOpportunityMissType:isToAd:snapViewCountSinceLastAd:timeViewedMillisSinceLastAd:] */

void FUN_10641aa4c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(param_2 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar5 != 0) {
    func_0x00010be0a8c0(param_1,param_2,param_3,param_4,param_5,param_6,0,param_7);
    if ((int)param_6 != 0) {
      func_0x00010be9e740(param_2,param_3,param_4);
      uVar6 = *(undefined8 *)(param_2 + 0x18);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar6,param_3,PTR____kCFBooleanFalse_11034ab60,puVar1);
      _objc_release(puVar1);
    }
    lVar2 = lVar5;
    func_0x00010c29d360(lVar5);
    lVar3 = lVar5;
    func_0x00010bef4a60(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c06d860(lVar5);
    func_0x00010be58b20(param_1,param_2,param_3,param_4,lVar2,lVar3,lVar4,param_6,0,param_7);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 10641aba8; end: 10641ac43; -[SCAdOpportunityLoggingV2Impl _onMidRollGroupBoundary:] */

void FUN_10641aba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010be9e740();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,PTR____kCFBooleanTrue_11034ab68,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10641ac44; end: 10641ad57; -[SCAdOpportunityLoggingV2Impl _onIsBrandSafeSlot:adProductType:] */

void FUN_10641ac44(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 uStack_48;
  
  lVar3 = *(long *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar3 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc0000000;
    pcStack_58 = FUN_10641ad58;
    puStack_50 = &UNK_110921c10;
    lVar2 = param_1;
    uStack_48 = param_3;
    func_0x00010bed2ac0(param_1,param_2,lVar3,10,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4,param_2,lVar2,puVar1);
    _objc_release(puVar1);
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 10641ad58; end: 10641ad63;  */

void FUN_10641ad58(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2b02f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_withIsBrandSafe__112689ae0,*(undefined1 *)(param_1 + 0x20));
  return;
}



/* Entry: 10641ad64; end: 10641ae37; -[SCAdOpportunityLoggingV2Impl _onInsertionRulesSatisfied:] */

void FUN_10641ad64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar3 != 0) {
    lVar2 = param_1;
    func_0x00010bed2ac0(param_1,param_2,lVar3,6,&PTR___NSConcreteGlobalBlock_110921c50);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4,param_2,lVar2,puVar1);
    _objc_release(puVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10641ae38; end: 10641ae43;  */

void FUN_10641ae38(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2afeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_withInsertionRulesSatisfied__1126899d0,1);
  return;
}



/* Entry: 10641ae44; end: 10641b00f; -[SCAdOpportunityLoggingV2Impl _onInsertionRuleEvaluation:isSatisfied:storyThreshold:snapThreshold:timeThresholdMillis:storyViewCountSinceLastAd:snapViewCountSinceLastAd:timeViewedMillisSinceLastAd:] */

void FUN_10641ae44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 uStack_78;
  undefined1 uStack_77;
  
  lVar6 = *(long *)(param_3 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar6,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar6 != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bf1f480();
    _objc_release(uVar2);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc0000000;
    pcStack_88 = FUN_10641b010;
    puStack_80 = &UNK_110921c70;
    uStack_78 = (undefined1)param_6;
    uStack_77 = (undefined1)uVar7;
    lVar3 = param_3;
    func_0x00010bed2ac0(param_3,param_4,lVar6,6,&puStack_98);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_3 + 8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7,param_4,lVar3,puVar1);
    _objc_release(puVar1);
    lVar4 = lVar6;
    func_0x00010c29d360(lVar6);
    lVar5 = lVar6;
    func_0x00010bef4a60(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be54d80(param_1,param_2,param_3,param_4,param_5,lVar4,lVar5,param_6,param_7,param_8,
                        param_9,param_10);
    _objc_release(lVar5);
    _objc_release(lVar3);
  }
  _objc_release(lVar6);
  return;
}



/* Entry: 10641b010; end: 10641b077;  */

void FUN_10641b010(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2afea0(param_2,param_2,*(undefined1 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  if (*(char *)(param_1 + 0x21) == '\x01') {
    func_0x00010c2afe80(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10641b078; end: 10641b1df; -[SCAdOpportunityLoggingV2Impl _onTryInsertionStarted:adOpportunityMissType:] */

void FUN_10641b078(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar5 = *(long *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar5,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar5 != 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10641b1e0;
    puStack_60 = &UNK_110921c90;
    lStack_58 = param_1;
    uStack_48 = param_4;
    _objc_retain(lVar5);
    lVar2 = param_1;
    lStack_50 = lVar5;
    func_0x00010bed2ac0(param_1,param_2,lVar5,5,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar6,param_2,lVar2,puVar1);
    _objc_release(puVar1);
    lVar3 = lVar5;
    func_0x00010c29d360(lVar5);
    lVar4 = lVar5;
    func_0x00010bef4a60(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4fe20(param_1,param_2,param_3,lVar3,6,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lStack_50);
  }
  _objc_release(lVar5);
  return;
}



/* Entry: 10641b1e0; end: 10641b27f;  */

void FUN_10641b1e0(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  func_0x00010be1e5c0(uVar2);
  uVar2 = param_3;
  func_0x00010c2b2340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar2;
  if ((*(long *)(param_2 + 0x30) == 0xe) &&
     (func_0x00010c27cd40(*(undefined8 *)(param_2 + 0x28)), param_1 == 0.0)) {
    func_0x00010be1e5c0(*(undefined8 *)(param_2 + 0x20));
    func_0x00010c2bbce0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10641b280; end: 10641b3eb; -[SCAdOpportunityLoggingV2Impl _onInsertionInProgress:] */

void FUN_10641b280(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar5 = *(long *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar5,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x00010c2a7960(lVar5,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10641b3ec;
    puStack_50 = &UNK_110921cc0;
    lVar3 = param_1;
    lStack_48 = param_1;
    func_0x00010bed2ac0(param_1,param_2,lVar2,7,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar6 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar6,param_2,lVar3,puVar1);
    _objc_release(puVar1);
    lVar2 = lVar5;
    func_0x00010c29d360(lVar5);
    lVar4 = lVar5;
    func_0x00010bef4a60(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4fe20(param_1,param_2,param_3,lVar2,8,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar5);
  return;
}



/* Entry: 10641b3ec; end: 10641b45b;  */

void FUN_10641b3ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be1e5c0(uVar2);
  uVar2 = param_2;
  func_0x00010c2afec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar1 = uVar2;
  func_0x00010c2a7960(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10641b45c; end: 10641b5e7; -[SCAdOpportunityLoggingV2Impl _onInsertionFinished:isSuccessful:] */

void FUN_10641b45c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lVar7 = *(long *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar7,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar7 != 0) {
    if (param_4 == 0) {
      ppuVar6 = &PTR___NSConcreteGlobalBlock_110921cf0;
      uVar5 = 9;
    }
    else {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_10641b5e8;
      puStack_60 = &UNK_110921cc0;
      ppuVar6 = &puStack_78;
      uVar5 = 8;
      lStack_58 = param_1;
    }
    lVar2 = param_1;
    func_0x00010bed2ac0(param_1,param_2,lVar7,uVar5,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5,param_2,lVar2,puVar1);
    _objc_release(puVar1);
    lVar3 = lVar7;
    func_0x00010c29d360(lVar7);
    lVar4 = lVar7;
    func_0x00010bef4a60(lVar7);
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == 0) {
      func_0x00010be4fe00(param_1,param_2,param_3,lVar3,10,lVar4,0);
    }
    else {
      func_0x00010be4fe20();
    }
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar7);
  return;
}



/* Entry: 10641b5e8; end: 10641b657;  */

void FUN_10641b5e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be1e5c0(uVar2);
  uVar2 = param_2;
  func_0x00010c2afee0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar1 = uVar2;
  func_0x00010c2a7960(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10641b658; end: 10641b663;  */

void FUN_10641b658(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a7970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_withAdInsertionStatus__112687880,3);
  return;
}



/* Entry: 10641b664; end: 10641b77f; -[SCAdOpportunityLoggingV2Impl _onViewingSessionClosed] */

ulong FUN_10641b664(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  double dVar17;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar17 = 0.0;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar13 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010c067fc0(*(undefined8 *)(lVar16 * 8));
      func_0x00010be9e740(param_1);
      lVar16 = lVar16 + 1;
    } while (lVar13 != lVar16);
    lVar13 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  uVar3 = *(ulong *)(param_1 + 0x18);
  func_0x00010c12adc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar14 = *(ulong *)(uVar3 + 8);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    uVar15 = *(ulong *)(uVar3 + 0x18);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar15;
    func_0x00010bf1f3c0();
    _objc_release(uVar15);
    _objc_release(puVar4);
    uVar15 = uVar14;
    func_0x00010bef5220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar15;
    func_0x00010bfaea40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar15);
    uVar15 = uVar6;
    func_0x00010bf529e0();
    if (uVar15 == 0) {
      uVar11 = *(undefined8 *)(uVar3 + 8);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0(uVar11);
    }
    else {
      puVar4 = PTR_PTR_1126ca648;
      _objc_opt_new();
      func_0x00010c29d360(uVar14);
      func_0x000108534aa8();
      func_0x00010c222c00(puVar4);
      uVar15 = uVar14;
      func_0x00010c25b040(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c20d9e0(puVar4);
      _objc_release(uVar15);
      func_0x00010c1dd800(puVar4);
      func_0x00010bef4240(uVar14);
      func_0x0001084b952c();
      func_0x00010c163f80(puVar4);
      uVar15 = uVar14;
      func_0x00010bef4a60(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar15;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c164260(puVar4);
      _objc_release(uVar7);
      _objc_release(uVar15);
      uVar15 = uVar14;
      func_0x00010bef4a60(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar15;
      func_0x00010bef2c20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c163720(puVar4);
      _objc_release(uVar7);
      _objc_release(uVar15);
      uVar15 = uVar14;
      func_0x00010bef4a60(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar15;
      func_0x00010c15ed20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fd160(puVar4);
      _objc_release(uVar7);
      _objc_release(uVar15);
      uVar15 = uVar14;
      func_0x00010bef4a60(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef60a0();
      func_0x0001084baa08();
      func_0x00010c164dc0(puVar4);
      _objc_release(uVar15);
      uVar15 = uVar14;
      func_0x00010bef4a60(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef60a0();
      func_0x00010c1b2de0(puVar4);
      _objc_release(uVar15);
      uVar15 = uVar14;
      func_0x00010bef4a60(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef5600();
      func_0x00010c1648c0(puVar4);
      _objc_release(uVar15);
      uVar15 = uVar14;
      func_0x00010bef4a60(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar15;
      func_0x00010c15ed60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c107cc0();
      func_0x00010c1b3760(puVar4);
      _objc_release(uVar7);
      _objc_release(uVar15);
      func_0x00010bef4980(uVar14);
      func_0x00010c164300(puVar4);
      func_0x00010bef48a0(uVar14);
      func_0x00010c1642c0(puVar4);
      func_0x00010bef35c0(uVar14);
      func_0x00010c1c4500(puVar4);
      func_0x00010bef35a0(uVar14);
      func_0x00010c1c44e0(puVar4);
      func_0x00010c1b0f80(puVar4);
      func_0x00010c1fdd00(puVar4);
      uVar15 = uVar14;
      func_0x00010bef4a60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar15;
      func_0x00010bef2f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar15);
      puVar9 = PTR_PTR_1126afec0;
      if (uVar7 != 0) {
        uVar15 = uVar14;
        func_0x00010bef4a60(uVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar15;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar14;
        if ((uVar5 & 1) == 0) {
          func_0x00010c0cdca0();
          func_0x00010c155420(puVar9);
          func_0x00010c1c7f00(puVar4);
          _objc_release(uVar7);
          _objc_release(uVar15);
          uVar5 = uVar14;
          func_0x00010bef4a60(uVar14);
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar5;
          func_0x00010bef2f80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0cdaa0();
          func_0x00010c1c7d00(puVar4);
          _objc_release(uVar15);
          _objc_release(uVar5);
          func_0x00010bef4a60(uVar14);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar8;
          func_0x00010bef2f80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0cdb40();
        }
        else {
          func_0x00010c0cdce0();
          func_0x00010c155420(puVar9);
          func_0x00010c1c7f00(puVar4);
          _objc_release(uVar7);
          _objc_release(uVar15);
          uVar5 = uVar14;
          func_0x00010bef4a60(uVar14);
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar5;
          func_0x00010bef2f80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0cdb00();
          func_0x00010c1c7d00(puVar4);
          _objc_release(uVar15);
          _objc_release(uVar5);
          func_0x00010bef4a60(uVar14);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar8;
          func_0x00010bef2f80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0cdba0();
        }
        func_0x00010c1c7e60(puVar4);
        _objc_release(uVar5);
        _objc_release(uVar8);
        uVar5 = uVar14;
        func_0x00010bef4a60(uVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar5;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf48240();
        func_0x00010c180c40(puVar4);
        _objc_release(uVar15);
        _objc_release(uVar5);
        uVar5 = uVar14;
        func_0x00010bef4a60(uVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar5;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf48200();
        func_0x00010c180c00(puVar4);
        _objc_release(uVar15);
        _objc_release(uVar5);
        uVar5 = uVar14;
        func_0x00010bef4a60(uVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar5;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf481e0();
        func_0x00010c180be0(puVar4);
        _objc_release(uVar15);
        _objc_release(uVar5);
      }
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retain(uVar6);
      uVar5 = uVar6;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (uVar5 != 0) {
        uVar15 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar6);
          }
          lVar12 = *(long *)(uVar15 * 8);
          puVar10 = PTR_PTR_1126ca650;
          _objc_opt_new(PTR_PTR_1126ca650);
          func_0x00010bef5200(lVar12);
          func_0x00010c164780(puVar10);
          func_0x00010c23e9a0(lVar12);
          func_0x00010c2032e0(puVar10);
          func_0x00010c06b8e0(lVar12);
          func_0x00010c1af0c0(puVar10);
          func_0x00010c243c00(lVar12);
          func_0x00010c205ae0(puVar10);
          func_0x00010c25b920(lVar12);
          func_0x00010c20dfa0(puVar10);
          func_0x00010c26fbe0(lVar12);
          func_0x00010c215740(puVar10);
          lVar2 = lVar12;
          func_0x00010bef3a40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar2 == 0) {
            func_0x00010c06b8e0();
            func_0x00010c164740(puVar10);
          }
          else {
            lVar2 = lVar12;
            func_0x00010bef3a40();
            _objc_retainAutoreleasedReturnValue();
            lVar16 = lVar2;
            func_0x00010c067ec0();
            FUN_106416d28((long)(int)lVar16);
            func_0x00010c164740(puVar10);
            _objc_release(lVar2);
          }
          func_0x00010c06d860(lVar12);
          func_0x00010c1afa40(puVar10);
          func_0x00010c067460(lVar12);
          func_0x00010c1ad8c0(puVar10);
          func_0x00010c08a580(lVar12);
          func_0x00010c1b8d40(puVar10);
          func_0x00010c27cd40(lVar12);
          func_0x00010c19d7c0(puVar10);
          func_0x00010c067480(lVar12);
          func_0x00010c1ad8e0(puVar10);
          func_0x00010c0674c0(lVar12);
          func_0x00010c1ad920(puVar10);
          uVar7 = uVar3;
          func_0x00010be1cc80(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c203300(puVar10);
          _objc_release(uVar7);
          func_0x00010c067440(lVar12);
          func_0x00010c1ad8a0(puVar10);
          func_0x00010befa120(puVar9);
          _objc_release(puVar10);
          uVar15 = uVar15 + 1;
        } while (uVar5 != uVar15);
        uVar5 = uVar6;
        func_0x00010bf52a60();
      }
      _objc_release(uVar6);
      func_0x00010c1647c0(puVar4);
      uVar11 = *(undefined8 *)(uVar3 + 0x20);
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar11);
      uVar11 = *(undefined8 *)(uVar3 + 8);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0(uVar11);
      _objc_release(puVar10);
      dVar17 = 0.0;
      _objc_retain(uVar6);
      uVar5 = uVar6;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (uVar5 != 0) {
        uVar15 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar6);
          }
          uVar7 = uVar14;
          func_0x00010bef4a60(uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be4fe40(uVar3);
          _objc_release(uVar7);
          uVar15 = uVar15 + 1;
        } while (uVar5 != uVar15);
        uVar5 = uVar6;
        func_0x00010bf52a60();
      }
      _objc_release(uVar6);
      _objc_release(puVar9);
    }
    _objc_release(puVar4);
    _objc_release(uVar6);
    _objc_release(uVar14);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      return uVar14;
    }
    ___stack_chk_fail();
    func_0x00010c23e9a0(param_2);
    return (ulong)(0.0 < dVar17);
  }
  return uVar3;
}



/* Entry: 10641b780; end: 10641c1b7; -[SCAdOpportunityLoggingV2Impl _sendAdOpportunityEventIfNeeded:] */

ulong FUN_10641b780(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = *(ulong *)(param_2 + 8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar14 = *(ulong *)(param_2 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar14;
  func_0x00010bf1f3c0();
  _objc_release(uVar14);
  _objc_release(puVar2);
  uVar14 = uVar13;
  func_0x00010bef5220();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  func_0x00010bfaea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar14);
  uVar14 = uVar4;
  func_0x00010bf529e0();
  if (uVar14 == 0) {
    uVar11 = *(undefined8 *)(param_2 + 8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar11);
  }
  else {
    puVar2 = PTR_PTR_1126ca648;
    _objc_opt_new();
    func_0x00010c29d360(uVar13);
    func_0x000108534aa8();
    func_0x00010c222c00(puVar2);
    uVar14 = uVar13;
    func_0x00010c25b040(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20d9e0(puVar2);
    _objc_release(uVar14);
    func_0x00010c1dd800(puVar2);
    func_0x00010bef4240(uVar13);
    func_0x0001084b952c();
    func_0x00010c163f80(puVar2);
    uVar14 = uVar13;
    func_0x00010bef4a60(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar14;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c164260(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar14);
    uVar14 = uVar13;
    func_0x00010bef4a60(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar14;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163720(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar14);
    uVar14 = uVar13;
    func_0x00010bef4a60(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar14;
    func_0x00010c15ed20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fd160(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar14);
    uVar14 = uVar13;
    func_0x00010bef4a60(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef60a0();
    func_0x0001084baa08();
    func_0x00010c164dc0(puVar2);
    _objc_release(uVar14);
    uVar14 = uVar13;
    func_0x00010bef4a60(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef60a0();
    func_0x00010c1b2de0(puVar2);
    _objc_release(uVar14);
    uVar14 = uVar13;
    func_0x00010bef4a60(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef5600();
    func_0x00010c1648c0(puVar2);
    _objc_release(uVar14);
    uVar14 = uVar13;
    func_0x00010bef4a60(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar14;
    func_0x00010c15ed60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c107cc0();
    func_0x00010c1b3760(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar14);
    func_0x00010bef4980(uVar13);
    func_0x00010c164300(puVar2);
    func_0x00010bef48a0(uVar13);
    func_0x00010c1642c0(puVar2);
    func_0x00010bef35c0(uVar13);
    func_0x00010c1c4500(puVar2);
    func_0x00010bef35a0(uVar13);
    func_0x00010c1c44e0(puVar2);
    func_0x00010c1b0f80(puVar2);
    func_0x00010c1fdd00(puVar2);
    uVar14 = uVar13;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar14;
    func_0x00010bef2f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar14);
    puVar7 = PTR_PTR_1126afec0;
    if (uVar5 != 0) {
      uVar14 = uVar13;
      func_0x00010bef4a60(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar14;
      func_0x00010bef2f80();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar13;
      if ((uVar3 & 1) == 0) {
        func_0x00010c0cdca0();
        func_0x00010c155420(puVar7);
        func_0x00010c1c7f00(puVar2);
        _objc_release(uVar5);
        _objc_release(uVar14);
        uVar3 = uVar13;
        func_0x00010bef4a60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar3;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdaa0();
        func_0x00010c1c7d00(puVar2);
        _objc_release(uVar14);
        _objc_release(uVar3);
        func_0x00010bef4a60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar6;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdb40();
      }
      else {
        func_0x00010c0cdce0();
        func_0x00010c155420(puVar7);
        func_0x00010c1c7f00(puVar2);
        _objc_release(uVar5);
        _objc_release(uVar14);
        uVar3 = uVar13;
        func_0x00010bef4a60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar3;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdb00();
        func_0x00010c1c7d00(puVar2);
        _objc_release(uVar14);
        _objc_release(uVar3);
        func_0x00010bef4a60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar6;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdba0();
      }
      func_0x00010c1c7e60(puVar2);
      _objc_release(uVar3);
      _objc_release(uVar6);
      uVar3 = uVar13;
      func_0x00010bef4a60(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar3;
      func_0x00010bef2f80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf48240();
      func_0x00010c180c40(puVar2);
      _objc_release(uVar14);
      _objc_release(uVar3);
      uVar3 = uVar13;
      func_0x00010bef4a60(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar3;
      func_0x00010bef2f80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf48200();
      func_0x00010c180c00(puVar2);
      _objc_release(uVar14);
      _objc_release(uVar3);
      uVar3 = uVar13;
      func_0x00010bef4a60(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar3;
      func_0x00010bef2f80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf481e0();
      func_0x00010c180be0(puVar2);
      _objc_release(uVar14);
      _objc_release(uVar3);
    }
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retain(uVar4);
    uVar3 = uVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar3 != 0) {
      uVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar4);
        }
        lVar15 = *(long *)(uVar14 * 8);
        puVar8 = PTR_PTR_1126ca650;
        _objc_opt_new(PTR_PTR_1126ca650);
        func_0x00010bef5200(lVar15);
        func_0x00010c164780(puVar8);
        func_0x00010c23e9a0(lVar15);
        func_0x00010c2032e0(puVar8);
        func_0x00010c06b8e0(lVar15);
        func_0x00010c1af0c0(puVar8);
        func_0x00010c243c00(lVar15);
        func_0x00010c205ae0(puVar8);
        func_0x00010c25b920(lVar15);
        func_0x00010c20dfa0(puVar8);
        func_0x00010c26fbe0(lVar15);
        func_0x00010c215740(puVar8);
        lVar9 = lVar15;
        func_0x00010bef3a40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar9 == 0) {
          func_0x00010c06b8e0();
          func_0x00010c164740(puVar8);
        }
        else {
          lVar9 = lVar15;
          func_0x00010bef3a40();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010c067ec0();
          FUN_106416d28((long)(int)lVar10);
          func_0x00010c164740(puVar8);
          _objc_release(lVar9);
        }
        func_0x00010c06d860(lVar15);
        func_0x00010c1afa40(puVar8);
        func_0x00010c067460(lVar15);
        func_0x00010c1ad8c0(puVar8);
        func_0x00010c08a580(lVar15);
        func_0x00010c1b8d40(puVar8);
        func_0x00010c27cd40(lVar15);
        func_0x00010c19d7c0(puVar8);
        func_0x00010c067480(lVar15);
        func_0x00010c1ad8e0(puVar8);
        func_0x00010c0674c0(lVar15);
        func_0x00010c1ad920(puVar8);
        lVar9 = param_2;
        func_0x00010be1cc80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c203300(puVar8);
        _objc_release(lVar9);
        func_0x00010c067440(lVar15);
        func_0x00010c1ad8a0(puVar8);
        func_0x00010befa120(puVar7);
        _objc_release(puVar8);
        uVar14 = uVar14 + 1;
      } while (uVar3 != uVar14);
      uVar3 = uVar4;
      func_0x00010bf52a60();
    }
    _objc_release(uVar4);
    func_0x00010c1647c0(puVar2);
    uVar11 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar11);
    uVar11 = *(undefined8 *)(param_2 + 8);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar11);
    _objc_release(puVar8);
    param_1 = 0.0;
    _objc_retain(uVar4);
    uVar3 = uVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar3 != 0) {
      uVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar4);
        }
        uVar5 = uVar13;
        func_0x00010bef4a60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be4fe40(param_2);
        _objc_release(uVar5);
        uVar14 = uVar14 + 1;
      } while (uVar3 != uVar14);
      uVar3 = uVar4;
      func_0x00010bf52a60();
    }
    _objc_release(uVar4);
    _objc_release(puVar7);
  }
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return uVar13;
  }
  ___stack_chk_fail();
  func_0x00010c23e9a0(param_3);
  return (ulong)(0.0 < param_1);
}



/* Entry: 10641c1b8; end: 10641c1d7;  */

bool FUN_10641c1b8(double param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c23e9a0(param_3);
  return 0.0 < param_1;
}



/* Entry: 10641c1d8; end: 10641c35f; -[SCAdOpportunityLoggingV2Impl _initState:] */

void FUN_10641c1d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5d40,puVar1);
    _objc_release(puVar1);
  }
  lVar5 = *(long *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar5,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar5 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4,param_2,PTR____kCFBooleanTrue_11034ab68,puVar1);
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126ca658;
  func_0x00010bfe6000(PTR_PTR_1126ca658);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10641c360; end: 10641c3b7; -[SCAdOpportunityLoggingV2Impl _appDidEnterBackground] */

void FUN_10641c360(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10641c3b8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x50),param_2,&puStack_38);
  return;
}



/* Entry: 10641c3b8; end: 10641c3bf;  */

void FUN_10641c3b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6c710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onViewingSessionClosed_112578b60);
  return;
}



/* Entry: 10641c3c0; end: 10641c417; -[SCAdOpportunityLoggingV2Impl _getCurrentTimeMillis] */

undefined8 FUN_10641c3c0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afec0;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beec800();
  func_0x00010c155420(puVar1);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 10641c418; end: 10641c4f7; -[SCAdOpportunityLoggingV2Impl _updateAdOpportunityEventHistory:type:] */

void FUN_10641c418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf99f20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ca638;
  _objc_alloc(PTR_PTR_1126ca638);
  func_0x00010be1e5c0(param_1);
  func_0x00010c052a00(puVar3,param_2,param_4);
  func_0x00010befa120(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  uVar1 = param_3;
  func_0x00010c2ad5a0(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10641c4f8; end: 10641c6f3; -[SCAdOpportunityLoggingV2Impl _updateAdSlotEventHistory:type:updateBlock:] */

void FUN_10641c4f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bef5220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar1 = param_3;
  if (lVar2 == 0) {
    _objc_retain(param_3);
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010c23e9c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar5 = PTR_PTR_1126ca638;
    _objc_alloc(PTR_PTR_1126ca638);
    func_0x00010be1e5c0(param_1);
    func_0x00010c052a00(puVar5);
    func_0x00010befa120(puVar4);
    _objc_release(puVar5);
    lVar3 = lVar2;
    func_0x00010c2b9120(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar6 = param_5;
    (**(code **)(param_5 + 0x10))(param_5,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    lVar3 = param_3;
    func_0x00010bef5220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar7 = puVar5;
    func_0x00010bf529e0();
    if (puVar7 != (undefined *)0x0) {
      func_0x00010bf529e0(puVar5);
      func_0x00010c130f40(puVar5);
    }
    func_0x00010c2a7d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar6);
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10641c6f4; end: 10641c767; -[SCAdOpportunityLoggingV2Impl _mergeAdSlotEventHistory:slotEventHistoryList:] */

void FUN_10641c6f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  func_0x00010bf0a0c0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160();
  _objc_release(param_4);
  func_0x00010c246ba0(puVar1,param_2,&PTR___NSConcreteGlobalBlock_110921d70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10641c768; end: 10641c7fb;  */

ulong FUN_10641c768(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c2709c0(param_3);
  dVar2 = param_1;
  func_0x00010c2709c0(param_4);
  if (dVar2 <= param_1) {
    func_0x00010c2709c0(param_3);
    dVar3 = dVar2;
    func_0x00010c2709c0(param_4);
    uVar1 = (ulong)(dVar3 < dVar2);
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10641c7fc; end: 10641c92f; -[SCAdOpportunityLoggingV2Impl _getAdSlotEventHistoryString:] */

void FUN_10641c7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = param_3;
  func_0x00010c23e9c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf97e80(uVar2);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bf446e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10641c930; end: 10641c9b3;  */

void FUN_10641c930(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c27dd80(param_2);
  _objc_release(param_2);
  lVar1 = param_1;
  func_0x00010be1cca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10641c9b4; end: 10641c9db; -[SCAdOpportunityLoggingV2Impl _getAdSlotEventTypeShortName:] */

undefined ** FUN_10641c9b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0xb) {
    return (undefined **)(&PTR_PTR_110921dc0)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e4ea58;
}



/* Entry: 10641c9dc; end: 10641ca47; -[SCAdOpportunityLoggingV2Impl _logAdOpportunityFunnelEvent:viewLocation:stage:adResponse:] */

void FUN_10641c9dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bdea5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209120();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10641ca48; end: 10641cb2f; -[SCAdOpportunityLoggingV2Impl _logInsertionRuleEvaluationFunnelEvent:viewLocation:adResponse:isSatisfied:storyThreshold:snapThreshold:timeThresholdMillis:storyViewCountSinceLastAd:snapViewCountSinceLastAd:timeViewedMillisSinceLastAd:] */

void FUN_10641ca48(double param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  lVar1 = param_3;
  func_0x00010bdea5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209120();
  func_0x00010c20dcc0(lVar1,param_4,in_x6);
  func_0x00010c205800(lVar1,param_4,in_x7);
  func_0x00010c2152a0(lVar1,param_4,(long)param_1);
  func_0x00010c20dfa0(lVar1,param_4,in_stack_00000000);
  func_0x00010c205ae0(lVar1,param_4,in_stack_00000008);
  func_0x00010c215740(lVar1,param_4,(long)param_2);
  func_0x00010c1ad8c0(lVar1,param_4,in_x5);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10641cb30; end: 10641cbdb; -[SCAdOpportunityLoggingV2Impl _logAdOpportunityErrorFunnelEvent:viewLocation:stage:adResponse:error:] */

void FUN_10641cb30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_7);
  lVar1 = param_1;
  func_0x00010bdea5e0(param_1,param_2,param_3,param_4,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209120();
  func_0x00010c196ee0(lVar1,param_2,param_7);
  _objc_release(param_7);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10641cbdc; end: 10641cc9f; -[SCAdOpportunityLoggingV2Impl _logSlotEnterFunnelEvent:viewLocation:adResponse:isBrandSafe:isAd:storyViewCountSinceLastAd:snapViewCountSinceLastAd:timeViewedMillisSinceLastAd:] */

void FUN_10641cbdc(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  
  lVar1 = param_2;
  func_0x00010bdea5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209120();
  func_0x00010c1afa40(lVar1,param_3,in_x5);
  func_0x00010c1af0a0(lVar1,param_3,in_x6);
  func_0x00010c20dfa0(lVar1,param_3,in_x7);
  func_0x00010c205ae0(lVar1,param_3,in_stack_00000000);
  func_0x00010c215740(lVar1,param_3,(long)param_1);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10641cca0; end: 10641cff7; -[SCAdOpportunityLoggingV2Impl _createAdOpportunityFunnelEvent:viewLocation:adResponse:] */

void FUN_10641cca0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  double dVar10;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ca660;
  _objc_opt_new(PTR_PTR_1126ca660);
  func_0x00010c1dd800();
  dVar10 = *(double *)(param_1 + 0x58);
  func_0x00010c1dd820(puVar1,param_2,(long)dVar10);
  uVar2 = param_3;
  func_0x0001084b952c(param_3);
  func_0x00010c163f80(puVar1,param_2,uVar2);
  func_0x000108534aa8(param_4);
  func_0x00010c222c00(puVar1,param_2,param_4);
  func_0x00010be1e5c0(param_1);
  func_0x00010c160b40(puVar1,param_2,(long)dVar10);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar9,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010c0b4ca0();
  func_0x00010c164780(puVar1,param_2,uVar2);
  _objc_release(uVar9);
  _objc_release(puVar3);
  if (param_5 != 0) {
    lVar4 = param_5;
    func_0x00010bfe5ec0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1632e0(puVar1,param_2,lVar4);
    _objc_release(lVar4);
    lVar4 = param_5;
    func_0x00010bef2c20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163720(puVar1,param_2,lVar4);
    _objc_release(lVar4);
    lVar4 = param_5;
    func_0x00010c15ed20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fd160(puVar1,param_2,lVar4);
    _objc_release(lVar4);
    lVar4 = param_5;
    func_0x00010bef60a0(param_5);
    func_0x0001084baa08();
    func_0x00010c164dc0(puVar1,param_2,lVar4);
    lVar4 = param_5;
    func_0x00010c15ed60(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c107cc0();
    func_0x00010c1b37a0(puVar1,param_2,lVar5);
    _objc_release(lVar4);
    lVar4 = param_5;
    func_0x00010bef5600(param_5);
    func_0x00010c1648c0(puVar1,param_2,lVar4);
    uVar8 = *(ulong *)(param_1 + 0x18);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar8,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x00010bf1f3c0();
    _objc_release(uVar8);
    _objc_release(puVar3);
    lVar4 = param_5;
    func_0x00010bef2f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR_PTR_1126afec0;
    if (lVar4 != 0) {
      lVar4 = param_5;
      func_0x00010bef2f80(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_5;
      if ((uVar6 & 1) == 0) {
        func_0x00010c0cdca0();
        func_0x00010c155420(puVar3);
        func_0x00010c2152a0(puVar1,param_2,(long)dVar10);
        _objc_release(lVar4);
        lVar4 = param_5;
        func_0x00010bef2f80(param_5);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar4;
        func_0x00010c0cdaa0();
        func_0x00010c205800(puVar1,param_2,lVar7);
        _objc_release(lVar4);
        func_0x00010bef2f80(param_5);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar5;
        func_0x00010c0cdb40();
      }
      else {
        func_0x00010c0cdce0();
        func_0x00010c155420(puVar3);
        func_0x00010c2152a0(puVar1,param_2,(long)dVar10);
        _objc_release(lVar4);
        lVar4 = param_5;
        func_0x00010bef2f80(param_5);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar4;
        func_0x00010c0cdb00();
        func_0x00010c205800(puVar1,param_2,lVar7);
        _objc_release(lVar4);
        func_0x00010bef2f80(param_5);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar5;
        func_0x00010c0cdba0();
      }
      func_0x00010c20dcc0(puVar1,param_2,lVar4);
      _objc_release(lVar5);
      func_0x00010c194b60(puVar1,param_2,1);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10641cff8; end: 10641d393; -[SCAdOpportunityLoggingV2Impl _logAdOpportunityOperationalMetric:adSlotInfo:adResponse:] */

void FUN_10641cff8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c06d860();
  if ((int)lVar1 == 0) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110e4ebd8;
  }
  else {
    lVar1 = param_4;
    func_0x00010c067440();
    if ((int)lVar1 == 0) {
      ppuVar9 = &PTR____CFConstantStringClassReference_110e4ebf8;
    }
    else {
      lVar1 = param_4;
      func_0x00010c067460();
      ppuVar9 = &PTR____CFConstantStringClassReference_110e4ec18;
      if ((int)lVar1 == 0) {
        ppuVar9 = &PTR____CFConstantStringClassReference_110e4ec38;
      }
    }
  }
  puVar2 = PTR_PTR_1126b8d98;
  func_0x00010bef3a60(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dfb298,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar2 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  lVar1 = param_4;
  func_0x00010c06d860();
  if (((int)lVar1 != 0) && (lVar1 = param_4, func_0x00010c067460(), (int)lVar1 != 0)) {
    lVar1 = param_4;
    func_0x00010c06b8e0();
    if ((int)lVar1 == 0) {
      lVar1 = param_4;
      func_0x00010bef3a40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) {
        ppuVar9 = &PTR____CFConstantStringClassReference_110e4ec98;
      }
      else {
        lVar1 = param_4;
        func_0x00010bef3a40(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar1;
        func_0x00010c067ec0();
        ppuVar9 = (undefined **)(long)(int)lVar8;
        FUN_106416b58(ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
      }
    }
    else {
      lVar1 = param_5;
      func_0x00010bef60a0();
      ppuVar9 = &PTR____CFConstantStringClassReference_110e4ec58;
      if (lVar1 != 7) {
        ppuVar9 = &PTR____CFConstantStringClassReference_110e4ec78;
      }
    }
    puVar3 = PTR_PTR_1126b8d98;
    func_0x00010bef3a80(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar3;
    func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dfb298,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126b8ca0;
    lVar1 = param_5;
    func_0x00010bef60a0(param_5);
    func_0x00010c25d240(puVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar10;
    func_0x00010c2ac460(puVar10,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dfbad8,ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bef2aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(ppuVar9);
  }
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10641d394; end: 10641d43b; -[SCAdOpportunityLoggingV2Impl .cxx_destruct] */

void FUN_10641d394(long param_1)

{
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



/* Entry: 10641d43c; end: 10641d527;  */

void FUN_10641d43c(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  double dVar4;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126b8ca8;
  _objc_retain(param_3);
  func_0x00010c0f0080();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c08fa60();
  if (puVar1 == (undefined *)0x0) {
    func_0x00010bf05e20(param_2);
    dVar4 = param_1;
  }
  else {
    puVar1 = PTR_PTR_1126b8ca8;
    func_0x00010c0f0080(PTR_PTR_1126b8ca8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar4 = param_1;
    _objc_release(puVar1);
  }
  fVar3 = SUB84(dVar4,0);
  _objc_release(puVar2);
  func_0x000106433d54(param_3);
  _objc_release(param_3);
  if ((double)fVar3 <= param_1) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10641d528; end: 10641d95b;  */

void FUN_10641d528(float param_1,undefined *param_2,long param_3,undefined **param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  float fVar9;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = param_2;
  func_0x00010bf3ca00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(puVar2);
  fVar9 = 1.0;
  if (1.0 <= param_1) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar8 = param_2;
    func_0x00010bf3ca00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(puVar8);
    if (2.0 <= fVar9) {
      puVar8 = param_2;
      func_0x00010c2475c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar8;
      func_0x00010c08fa60();
      _objc_release(puVar8);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar3 != (undefined *)0x0) {
        puVar3 = param_2;
        func_0x00010c2475c0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar8);
        _objc_release(puVar3);
      }
      puVar8 = param_2;
      func_0x00010bf3ca00();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar8;
      func_0x00010c08fa60();
      _objc_release(puVar8);
      if (puVar3 != (undefined *)0x0) {
        puVar8 = param_2;
        func_0x00010bf3ca00(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar8);
      }
    }
    puVar8 = param_2;
    func_0x00010bf3c9a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x00010c08fa60();
    _objc_release(puVar8);
    if (puVar3 != (undefined *)0x0) {
      puVar8 = param_2;
      func_0x00010bf3c9a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar8);
    }
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf2bfa0(param_2);
    func_0x00010c0df780(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar8);
    puVar8 = param_2;
    func_0x00010bef38a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x00010c08fa60();
    _objc_release(puVar8);
    if (puVar3 != (undefined *)0x0) {
      puVar8 = param_2;
      func_0x00010bef38a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar8);
    }
    puVar8 = param_2;
    func_0x00010bf3c980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar8 != (undefined *)0x0) {
      puVar8 = param_2;
      func_0x00010bf3c980(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar8);
    }
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c270a60(param_2);
    func_0x00010c0df780(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar8);
    iVar1 = 2;
    param_3 = 0x10;
    func_0x000100029b9c(2,0x10,1,0);
    if (iVar1 != 0) {
      puVar8 = param_2;
      func_0x00010c29e460();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar8;
      func_0x00010c0720c0();
      _objc_release(puVar8);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)puVar3 != 0) {
        func_0x00010c247820(param_2);
        func_0x00010c0df780(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar8);
      }
    }
    param_4 = &puStack_60;
    puStack_60 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar8 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar2);
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(param_3);
    _objc_retain(param_4);
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar2 = param_2;
    func_0x00010bf05300(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b8ca8;
    func_0x00010c0f0060();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    if (puVar3 != (undefined *)0x0) {
      func_0x00010c1d0640(puVar8);
    }
    ppuVar4 = param_4;
    func_0x00010bf8fdc0();
    if ((int)ppuVar4 != 0) {
      puVar3 = PTR_PTR_1126b8ca8;
      func_0x00010c0f0140();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c08fa60();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = param_2;
        func_0x00010c116120(param_2);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar3);
        puVar5 = puVar3;
      }
      func_0x00010c1d0640(puVar8);
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
    lVar6 = param_3;
    FUN_10641d528();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf529e0();
    if (lVar7 != 0) {
      func_0x00010bef7f60(puVar8);
    }
    _objc_release(lVar6);
    _objc_release(puVar2);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10641d95c; end: 10641daeb;  */

void FUN_10641d95c(undefined *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar2 = param_1;
  func_0x00010bf05300(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b8ca8;
  func_0x00010c0f0060();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c1d0640(puVar1);
  }
  uVar4 = param_3;
  func_0x00010bf8fdc0();
  if ((int)uVar4 != 0) {
    puVar3 = PTR_PTR_1126b8ca8;
    func_0x00010c0f0140();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c08fa60();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = param_1;
      func_0x00010c116120(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar3);
      puVar5 = puVar3;
    }
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  lVar6 = param_2;
  FUN_10641d528();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf529e0();
  if (lVar7 != 0) {
    func_0x00010bef7f60(puVar1);
  }
  _objc_release(lVar6);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


