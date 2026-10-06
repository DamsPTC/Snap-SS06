/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100839ec8; end: 10083a21b; +[IMPMonetizationSetting descriptor] */

void FUN_100839ec8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2660 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51c90,
                        &PTR____CFConstantStringClassReference_110f4d558,&PTR_s_impala_113357488,
                        &PTR_DAT_11335c180,9,0x38,0x1c);
    puRam00000001137f2660 = puVar1;
  }
  return;
}



/* Entry: 10083a21c; end: 10083a287; +[IMPCreatorMonetizationEligibility descriptor] */

void FUN_10083a21c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2658 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51c40,
                        &PTR____CFConstantStringClassReference_110f4d538,&PTR_s_impala_113357488,
                        &PTR_DAT_113359400,3,0x10,0x1c);
    puRam00000001137f2658 = puVar1;
  }
  return;
}



/* Entry: 10083a288; end: 10083a2f3; +[IMPCreatorDiscoveryForBrandsSettings descriptor] */

void FUN_10083a288(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2688 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51e20,
                        &PTR____CFConstantStringClassReference_110f4d5f8,&PTR_s_impala_113357488,
                        &PTR_DAT_11335a6a0,4,0x28,0x1c);
    puRam00000001137f2688 = puVar1;
  }
  return;
}



/* Entry: 10083a2f4; end: 10083a35f; +[IMPCreatorDiscoveryForBrandsSetting descriptor] */

void FUN_10083a2f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2690 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51e70,
                        &PTR____CFConstantStringClassReference_110f4d618,&PTR_s_impala_113357488,
                        &PTR_DAT_1133594c0,3,0x18,0x1c);
    puRam00000001137f2690 = puVar1;
  }
  return;
}



/* Entry: 10083a360; end: 10083a3c7; +[IMPActivityFeedSettings descriptor] */

void FUN_10083a360(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2670 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51d30,
                        &PTR____CFConstantStringClassReference_110f4d598,&PTR_s_impala_113357488,
                        &PTR_DAT_1133577a0,1,4,0x1c);
    puRam00000001137f2670 = puVar1;
  }
  return;
}



/* Entry: 10083a3c8; end: 10083a44b; +[IMPBusinessProfileSettings_SpotlightSettings descriptor] */

undefined * FUN_10083a3c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f26a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c577a8,
                        &PTR____CFConstantStringClassReference_110f09118,&PTR_s_impala_113357488,
                        &PTR_DAT_1133577c0,1,4,0x1c);
    func_0x000107c5a88c();
    puRam00000001137f26a0 = puVar1;
  }
  return puRam00000001137f26a0;
}



/* Entry: 10083a44c; end: 10083a453;  */

void FUN_10083a44c(void)

{
  return;
}



/* Entry: 10083a454; end: 10083a45b; -[SCCacheDataHandlerCacheEntry cacheData] */

undefined8 FUN_10083a454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10083a45c; end: 10083a463; -[SCCacheKeyKindEntry expirationDate] */

undefined8 FUN_10083a45c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10083a464; end: 10083a6ff; -[SCCache _writeToCacheType:cacheObject:encodedData:dataEncoding:forKey:expiration:dispatchGroup:finishBlock:failBlock:] */

void FUN_10083a464(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
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
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined1 auStack_80 [16];
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61144(auStack_80,param_1);
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_10083a8c0;
  puStack_d8 = &UNK_110d60dc8;
  func_0x000107c6111c(auStack_90,auStack_80);
  lStack_88 = param_3;
  func_0x000107c61174(param_9);
  uStack_d0 = param_9;
  func_0x000107c61174(param_5);
  uStack_c8 = param_5;
  func_0x000107c61174(param_6);
  uStack_a8 = param_6;
  func_0x000107c61174(param_4);
  uStack_c0 = param_4;
  func_0x000107c61174(param_7);
  uStack_b8 = param_7;
  func_0x000107c61174(param_11);
  uStack_a0 = param_11;
  func_0x000107c61174(param_8);
  uStack_b0 = param_8;
  func_0x000107c61174(param_10);
  uStack_98 = param_10;
  ppuVar1 = &puStack_f0;
  func_0x000107c61184();
  if (param_3 == 0) {
    lVar2 = 0x60;
  }
  else {
    if (param_3 != 1) {
      uVar3 = 0;
      goto LAB_10083a5dc;
    }
    lVar2 = 0x68;
  }
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  func_0x000107c61174(uVar3);
LAB_10083a5dc:
  func_0x000107c61174(ppuVar1);
  func_0x000107c4e5e8(uVar3);
  func_0x000107c61170(ppuVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(ppuVar1);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(uStack_b0);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61170(uStack_b8);
  func_0x000107c61170(uStack_c0);
  func_0x000107c61170(uStack_a8);
  func_0x000107c61170(uStack_c8);
  func_0x000107c61170(uStack_d0);
  func_0x000107c61120(auStack_90);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 10083a700; end: 10083a77f;  */

void FUN_10083a700(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x30));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x38));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x40));
  func_0x000107c60bc8(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
  func_0x000107c60bc8(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),7);
  func_0x000107c60bc8(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x60,param_2 + 0x60);
  return;
}



/* Entry: 10083a780; end: 10083a8b3; -[SCCache _executeCompletionBlock:withKey:object:] */

void FUN_10083a780(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  if (param_3 != 0) {
    func_0x000107c61144(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    func_0x000107c6111c(auStack_50,auStack_48);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c4e524(uVar1);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61120(auStack_50);
    func_0x000107c61120(auStack_48);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10083a8b4; end: 10083a8bf;  */

void FUN_10083a8b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010083a8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10083a8c0; end: 10083abe7;  */

void FUN_10083a8c0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  ppuVar6 = &puStack_b0;
  lVar1 = param_1 + 0x60;
  func_0x000107c61148();
  if (lVar1 == 0) goto LAB_10083abc0;
  uVar2 = *(ulong *)(lVar1 + 0x58);
  func_0x000107c4a680();
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(lVar1 + 0x58);
    func_0x000107c5d1ec();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar1 + 0x58);
      func_0x000107c5d1ec();
      func_0x000107c61180();
      (**(code **)(lVar3 + 0x10))();
      func_0x000107c61170(lVar3);
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c60f38();
  }
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x000107c61174(lVar3);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x48);
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 0x30);
      func_0x000107c61174(lVar3);
    }
    else {
      (**(code **)(lVar3 + 0x10))(lVar3,*(undefined8 *)(param_1 + 0x30));
      func_0x000107c61180();
      if (lVar3 == 0) {
        lVar3 = *(long *)(param_1 + 0x50);
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 0x10))(lVar3,lVar1,*(undefined8 *)(param_1 + 0x38),0);
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          func_0x000107c60f3c();
        }
        goto LAB_10083abc0;
      }
    }
  }
  puVar4 = PTR_PTR_1126e13f8;
  func_0x000107c610fc(PTR_PTR_1126e13f8);
  func_0x000107c559a4();
  func_0x000107c611b0();
  func_0x000107c559d4(puVar4);
  func_0x000107c611b0();
  func_0x000107c547a4(puVar4);
  func_0x000107c611b0();
  func_0x000107c558b0(puVar4);
  func_0x000107c611b0();
  puVar5 = puVar4;
  func_0x000107c3ecc8(puVar4);
  func_0x000107c61180();
  if (*(long *)(param_1 + 0x68) == 1) {
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    puStack_a0 = &UNK_10b7bfb6c;
    puStack_98 = &UNK_110d60d98;
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar7);
    uStack_90 = uVar7;
    func_0x000107c61184(&puStack_b0);
    uVar9 = *(undefined8 *)(lVar1 + 0x50);
    uVar7 = *(undefined8 *)(lVar1 + 0x20);
    func_0x000107c4a8c8(uVar7);
    func_0x000107c61180();
    func_0x000107c56be0(uVar9);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(ppuVar6);
    uVar7 = uStack_90;
LAB_10083ab88:
    func_0x000107c61170(uVar7);
  }
  else if (*(long *)(param_1 + 0x68) == 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10083bf34;
    puStack_70 = &UNK_110d60d68;
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar7);
    ppuVar6 = &puStack_88;
    uStack_68 = uVar7;
    func_0x000107c61184(ppuVar6);
    lVar8 = *(long *)(lVar1 + 0x48);
    if (lVar8 == 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        func_0x000107c60f3c();
      }
    }
    else {
      uVar7 = *(undefined8 *)(lVar1 + 0x18);
      func_0x000107c4a8c8(uVar7);
      func_0x000107c61180();
      func_0x000107c4adac(lVar3);
      func_0x000107c56bdc(lVar8);
      func_0x000107c61170(uVar7);
    }
    func_0x000107c61170(ppuVar6);
    uVar7 = uStack_68;
    goto LAB_10083ab88;
  }
  lVar8 = *(long *)(param_1 + 0x58);
  if (lVar8 != 0) {
    (**(code **)(lVar8 + 0x10))
              (lVar8,lVar1,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),lVar3);
  }
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar3);
LAB_10083abc0:
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 10083abe8; end: 10083abef; -[SCCacheManager isUserAvailable] */

undefined1 FUN_10083abe8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 10083abf0; end: 10083abf7; -[SCCacheManager unavailableWarningCallback] */

undefined8 FUN_10083abf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10083abf8; end: 10083ac57; -[SCCacheKeyKindEntryBuilder setKey:] */

long FUN_10083abf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c40794();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 10083ac58; end: 10083acb7; -[SCCacheKeyKindEntryBuilder setKind:] */

long FUN_10083ac58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c40794();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 10083acb8; end: 10083ad17; -[SCCacheKeyKindEntryBuilder setExpirationDate:] */

long FUN_10083acb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c40794();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 10083ad18; end: 10083ad1f; -[SCCacheKeyKindEntryBuilder setIsUnwrappedData:] */

void FUN_10083ad18(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10083ad20; end: 10083ad57; -[SCCacheKeyKindEntryBuilder build] */

void FUN_10083ad20(void)

{
  func_0x000107c610f4(PTR_PTR_1126e13f0);
  func_0x000107c47054();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10083ad58; end: 10083aebb; -[SCCacheKeyKindEntry initWithKey:kind:expirationDate:referenceCount:isUnwrappedData:] */

undefined1 *
FUN_10083ad58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_11270af78;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10083aebc; end: 10083b097; -[PINMemoryCache setObjectAsync:forKey:cost:metadata:completion:] */

void FUN_10083aebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61144(auStack_58,param_1);
  func_0x000107c4dfa0(param_1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_68,auStack_58);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uStack_60 = param_5;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c3d7d4(param_1);
  func_0x000107c611b0();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_68);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10083b098; end: 10083b0e7;  */

void FUN_10083b098(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x30));
  func_0x000107c60bc8(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x40,param_2 + 0x40);
  return;
}



/* Entry: 10083b0e8; end: 10083b1d3; -[SCCacheKeyKindEntryBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010083b100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083b118: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010083b104) */
/* WARNING: Removing unreachable block (ram,0x00010083b11c) */

void FUN_10083b0e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10083b1d4; end: 10083b26b;  */

/* WARNING: Possible PIC construction at 0x00010083b228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083b250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010083b22c) */
/* WARNING: Removing unreachable block (ram,0x00010083b254) */

void FUN_10083b1d4(void)

{
  undefined8 in_x3;
  
  func_0x000107c61174(in_x3);
  func_0x000107c3ef08(in_x3);
  func_0x000107c61180();
  func_0x000107c3ef20(in_x3);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 10083b26c; end: 10083b273; -[SCCacheDataHandlerCacheEntry cacheMetadata] */

undefined8 FUN_10083b26c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10083b274; end: 10083b2df;  */

/* WARNING: Possible PIC construction at 0x00010083b2c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010083b2c4) */

void FUN_10083b274(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x28);
  func_0x000107c3c194();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10083b2e0; end: 10083b43b; -[SCImpalaManagedBusinessProfilesCache _processDataFromCache:metadata:completion:] */

void FUN_10083b2e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  if (param_3 == 0) {
LAB_10083b358:
    (**(code **)(param_5 + 0x10))(param_5,0,0,0);
  }
  else {
    lVar2 = param_1;
    func_0x000107c3bad8();
    if ((int)lVar2 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
      func_0x000107c2aa2c();
      if (iVar1 != 0) {
        iVar1 = 100;
        func_0x000107c60ecc();
        if (iVar1 == 0) {
          func_0x000107c2aa20(*(undefined8 *)(param_1 + 0x30),100);
        }
        goto LAB_10083b358;
      }
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    lVar2 = param_3;
    func_0x000107c4f3e0(param_3);
    func_0x000107c61180();
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_4);
    func_0x000107c5d4a4(uVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10083b43c; end: 10083b5f7; -[SCImpalaManagedBusinessProfilesCache _isCrossAccountResponse:] */

undefined1 * FUN_10083b43c(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *unaff_x21;
  undefined1 *unaff_x22;
  long lVar7;
  undefined1 *puVar8;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  puVar8 = param_3;
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c4adac();
  if (lVar1 == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    unaff_x21 = param_3;
    func_0x000107c4f3e0();
    func_0x000107c61180();
    param_4 = auStack_e8;
    puVar8 = unaff_x21;
    func_0x000107c4080c();
    if (puVar8 != (undefined1 *)0x0) {
      lVar1 = *plStack_120;
      unaff_x22 = puVar8;
      do {
        puVar8 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar1) {
            func_0x000107c61128(unaff_x21);
          }
          lVar7 = *(long *)(lStack_128 + (long)puVar8 * 8);
          lVar2 = lVar7;
          func_0x000107c5d918();
          func_0x000107c61180();
          lVar3 = lVar2;
          func_0x000107c49ec8();
          func_0x000107c61170(lVar2);
          if ((int)lVar3 != 0) {
            func_0x000107c3ee4c();
            func_0x000107c61180();
            lVar2 = lVar7;
            func_0x000107c44f0c();
            func_0x000107c61180();
            func_0x000107c61170(lVar7);
            lVar3 = lVar2;
            func_0x000107c4adac();
            if (lVar3 != 0) {
              puVar5 = *(undefined8 **)(param_1 + 0x20);
              lVar3 = lVar2;
              func_0x000107c49d0c();
              if ((int)lVar3 == 0) {
                func_0x000107c61170(lVar2);
                puVar6 = (undefined1 *)0x1;
                goto LAB_10083b5a8;
              }
            }
            func_0x000107c61170(lVar2);
          }
          puVar8 = puVar8 + 1;
        } while (unaff_x22 != puVar8);
        param_4 = auStack_e8;
        unaff_x22 = unaff_x21;
        puVar5 = &uStack_130;
        func_0x000107c4080c();
      } while (unaff_x22 != (undefined1 *)0x0);
    }
    puVar6 = (undefined1 *)0x0;
LAB_10083b5a8:
    func_0x000107c61170(unaff_x21);
    puVar8 = (undefined1 *)puVar5;
  }
  puVar4 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar6;
  }
  func_0x000107c60e78();
  pcStack_138 = FUN_10083b5f8;
  puStack_160 = unaff_x22;
  puStack_158 = unaff_x21;
  puStack_150 = puVar6;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x000107c61174(puVar8);
  puVar6 = param_4;
  func_0x000107c61174(param_4);
  FUN_100078e94();
  func_0x000107c61180();
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_190 = 0xc2000000;
  puStack_188 = &UNK_100c671f4;
  puStack_180 = &UNK_11084a9e8;
  puStack_178 = puVar4;
  puStack_170 = puVar8;
  puStack_168 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar8);
  func_0x000107c4e590(puVar6,param_2,&puStack_198);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puStack_168);
  func_0x000107c61170(puStack_170);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar8);
  return puVar8;
}



/* Entry: 10083b5f8; end: 10083b6c3; -[SCImpalaBusinessProfileHandlers updateHandlersForBusinessProfiles:completion:] */

void FUN_10083b5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  FUN_100078e94();
  func_0x000107c61180();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  puStack_58 = &UNK_100c671f4;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c4e590(uVar1,param_2,&puStack_68);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10083b6c4; end: 10083b6cb;  */

void FUN_10083b6c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10083b6cc; end: 10083b73f;  */

void FUN_10083b6cc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x40;
  func_0x000107c61148();
  if (lVar1 != 0) {
    func_0x000107c56bd4(lVar1);
    lVar2 = *(long *)(param_1 + 0x38);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))
                (lVar2,lVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x20));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10083b740; end: 10083bd0b; -[PINMemoryCache setObject:forKey:cost:metadata:] */

/* WARNING: Possible PIC construction at 0x00010083b88c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083b8cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083b8dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083b914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083b948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083b990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083b9e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083ba1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083ba78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083bafc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083bb2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083bb74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083bb84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083bb94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083bba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083bcd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083bce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083bcf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083bd7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010083bcf4) */
/* WARNING: Removing unreachable block (ram,0x00010083bd04) */
/* WARNING: Removing unreachable block (ram,0x00010083bd8c) */
/* WARNING: Removing unreachable block (ram,0x00010083bdc8) */
/* WARNING: Removing unreachable block (ram,0x00010083bd90) */
/* WARNING: Removing unreachable block (ram,0x00010083bd50) */
/* WARNING: Removing unreachable block (ram,0x00010083bce4) */
/* WARNING: Removing unreachable block (ram,0x00010083bcd4) */
/* WARNING: Removing unreachable block (ram,0x00010083bbf4) */
/* WARNING: Removing unreachable block (ram,0x00010083bcc4) */
/* WARNING: Removing unreachable block (ram,0x00010083bba8) */
/* WARNING: Removing unreachable block (ram,0x00010083bbe4) */
/* WARNING: Removing unreachable block (ram,0x00010083bbc0) */
/* WARNING: Removing unreachable block (ram,0x00010083bb98) */
/* WARNING: Removing unreachable block (ram,0x00010083bb88) */
/* WARNING: Removing unreachable block (ram,0x00010083bb78) */
/* WARNING: Removing unreachable block (ram,0x00010083bb00) */
/* WARNING: Removing unreachable block (ram,0x00010083bb0c) */
/* WARNING: Removing unreachable block (ram,0x00010083ba7c) */
/* WARNING: Removing unreachable block (ram,0x00010083bb28) */
/* WARNING: Removing unreachable block (ram,0x00010083bab4) */
/* WARNING: Removing unreachable block (ram,0x00010083babc) */
/* WARNING: Removing unreachable block (ram,0x00010083bac0) */
/* WARNING: Removing unreachable block (ram,0x00010083bad0) */
/* WARNING: Removing unreachable block (ram,0x00010083bad8) */
/* WARNING: Removing unreachable block (ram,0x00010083ba20) */
/* WARNING: Removing unreachable block (ram,0x00010083bb30) */
/* WARNING: Removing unreachable block (ram,0x00010083bb40) */
/* WARNING: Removing unreachable block (ram,0x00010083bb5c) */
/* WARNING: Removing unreachable block (ram,0x00010083bb64) */
/* WARNING: Removing unreachable block (ram,0x00010083bb70) */
/* WARNING: Removing unreachable block (ram,0x00010083ba40) */
/* WARNING: Removing unreachable block (ram,0x00010083b9e4) */
/* WARNING: Removing unreachable block (ram,0x00010083b994) */
/* WARNING: Removing unreachable block (ram,0x00010083b9e8) */
/* WARNING: Removing unreachable block (ram,0x00010083b998) */
/* WARNING: Removing unreachable block (ram,0x00010083b94c) */
/* WARNING: Removing unreachable block (ram,0x00010083b918) */
/* WARNING: Removing unreachable block (ram,0x00010083b8d0) */
/* WARNING: Removing unreachable block (ram,0x00010083b890) */
/* WARNING: Removing unreachable block (ram,0x00010083bd80) */
/* WARNING: Removing unreachable block (ram,0x00010083bdb4) */
/* WARNING: Removing unreachable block (ram,0x00010083bd88) */
/* WARNING: Removing unreachable block (ram,0x00010083bdcc) */

void FUN_10083b740(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined *param_6)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  lVar1 = param_4;
  func_0x000107c4adac();
  if (param_3 != 0 && lVar1 != 0) {
    func_0x000107c4b940(param_1);
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x000107c61184();
    func_0x000107c61184();
    func_0x000107c5d278(param_1);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_4,param_6,param_3);
    }
    func_0x000107c4b940(param_1);
    lVar1 = *(long *)(param_1 + 0x88);
    func_0x000107c4d9e8();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c56bd8(*(undefined8 *)(param_1 + 0x78));
      param_6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x000107c610fc(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x000107c56bd8(*(undefined8 *)(param_1 + 0x80));
    }
    else {
      param_6 = *(undefined **)(param_1 + 0x90);
      func_0x000107c4d9e8();
      func_0x000107c61180();
      if (param_6 != (undefined *)0x0) {
        lVar2 = lVar1;
        func_0x000107c5d388();
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - lVar2;
        func_0x000107c4a91c(param_6);
        func_0x000107c61180();
        func_0x000107c5d388(lVar1);
        func_0x000107c3bdc4(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10083bd0c; end: 10083be0f; -[PINMemoryCache _locked_adjustKindCost:byValue:] */

/* WARNING: Possible PIC construction at 0x00010083bd7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010083bd80) */
/* WARNING: Removing unreachable block (ram,0x00010083bd88) */

void FUN_10083bd0c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 0xa0);
  func_0x000107c4d9e8(lVar1,param_2,param_3);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0) {
    if (param_4 < 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
      func_0x000107c61180();
      if (puVar3 != (undefined *)0x0) {
        func_0x000107c56bd8(*(undefined8 *)(param_1 + 0xa0),param_2,puVar3,param_3);
      }
    }
    func_0x000107c61170(puVar3);
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5d388(lVar1);
    func_0x000107c4d974(puVar3,param_2,lVar2 + param_4);
    func_0x000107c61180();
    param_3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10083be10; end: 10083bf33; -[PINMemoryCache _locked_computeTotalCostsFromKinds] */

long FUN_10083be10(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_1 + 0xa0);
  func_0x000107c3dbc0();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4080c();
  lVar4 = 0;
  if (lVar2 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          func_0x000107c61128(lVar1);
        }
        lVar3 = *(long *)(lStack_108 + lVar6 * 8);
        func_0x000107c5d388(lVar3);
        lVar4 = lVar3 + lVar4;
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar1;
      func_0x000107c4080c(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  lVar2 = lVar1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar4;
  }
  func_0x000107c60e78();
  func_0x000107c61170(lVar1);
  func_0x000107c60bd8();
  lVar4 = *(long *)(lVar2 + 0x20);
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_group_leave_11034c080)();
    return lVar4;
  }
  return 0;
}



/* Entry: 10083bf34; end: 10083bf43;  */

void FUN_10083bf34(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_group_leave_11034c080)();
    return;
  }
  return;
}



/* Entry: 10083bf44; end: 10083bf83;  */

/* WARNING: Possible PIC construction at 0x00010083bf60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083bf70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010083bf64) */
/* WARNING: Removing unreachable block (ram,0x00010083bf74) */

void FUN_10083bf44(long param_1)

{
  func_0x000107c61120(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10083bf84; end: 10083bfc3; -[SIGHeaderButtonOptionView setOption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083bf84(void)

{
  func_0x000107c5ba60();
  func_0x000107c611b0();
  return;
}



/* Entry: 10083bfc4; end: 10083c413; -[SIGHeaderButtonOptionView startAnimationForTransitionTo:firstOption:lastOption:backgroundStyle:buttonTheme:style:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083bfc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126df778;
  func_0x000107c610f4(PTR_PTR_1126df778);
  func_0x000107c4611c();
  lVar4 = (long)_DAT_112794b6c;
  func_0x000107c61174(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  func_0x000107c61170(uVar2);
  func_0x000107c59eb8(*(undefined8 *)(param_1 + _DAT_112794b68));
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_10083c4d4;
  pcStack_98 = FUN_10083dfa4;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x000107c61174(uVar2);
  uStack_90 = uVar2;
  func_0x000107c61170(0);
  *(undefined8 *)(param_1 + _DAT_112794b70) = param_6;
  *(undefined8 *)(param_1 + _DAT_112794b74) = param_7;
  puVar3 = PTR_PTR_1126df778;
  func_0x000107c40610(PTR_PTR_1126df778);
  func_0x000107c61180();
  func_0x000107c3f778(puVar1);
  func_0x000107c61170(puVar3);
  lVar4 = param_1;
  func_0x000107c3aff4();
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  if ((int)lVar4 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c4e5fc(puVar3);
    func_0x000107c526c0(0,*(undefined8 *)(param_1 + _DAT_112794b34));
    func_0x000107c526c0(*(undefined8 *)(param_1 + _DAT_112794b38));
    func_0x000107c3ae68();
    func_0x000107c3b9bc();
    func_0x000107c3ae80();
    func_0x000107c49fe0();
    func_0x000107c49fe0();
    func_0x000107c30a4c(param_1,param_8 == 2);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c453e0(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c3dcc0(puVar3);
    puVar3 = PTR_PTR_1126df778;
    func_0x000107c40610(PTR_PTR_1126df778);
    func_0x000107c61180();
    func_0x000107c3f778(puVar1);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_3);
  }
  else {
    func_0x000107c3b144(param_1);
    func_0x000107c3b108(param_1);
    func_0x000107c3b10c(param_1);
    func_0x000107c3b130(param_1);
    func_0x000107c3b104(param_1);
    func_0x000107c3b134(param_1);
    func_0x000107c4abfc(param_1);
  }
  func_0x000107c60bcc(&uStack_b8,8);
  func_0x000107c61170(uStack_90);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10083c414; end: 10083c463; +[SIGAnimationContext contextWithBlock:] */

void FUN_10083c414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df778;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c45ee8();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10083c464; end: 10083c4d3; -[SIGAnimationContext initWithCompletion:cancellingOnDeallocation:] */

long FUN_10083c464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c4611c(param_1,param_2,0,param_4);
  if (param_1 != 0) {
    uVar1 = param_3;
    func_0x000107c61184();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 10083c4d4; end: 10083c4e3;  */

void FUN_10083c4d4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10083c4e4; end: 10083c4eb; -[SIGAnimationContext chainContext:] */

void FUN_10083c4e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 10083c4ec; end: 10083c613; -[SIGHeaderButtonOptionView _canTransitionInPlaceTo:buttonTheme:backgroundStyle:animationStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10083c4ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  
  func_0x000107c61174(param_3);
  if (param_6 == 0) {
    uVar5 = 1;
  }
  else {
    lVar6 = (long)_DAT_112794b68;
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x000107c49cec(uVar2,param_2,param_3);
    if ((((int)uVar2 != 0) && (*(long *)(param_1 + _DAT_112794b0c) == param_5)) &&
       (*(long *)(param_1 + _DAT_112794b08) == param_4)) {
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x000107c5c82c();
      func_0x000107c61180();
      uVar2 = param_3;
      func_0x000107c5c82c(param_3);
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c49d0c(uVar3,param_2,uVar2);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar3);
      if ((int)uVar4 != 0) {
        iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
        func_0x000107c4a5d0();
        uVar2 = param_3;
        func_0x000107c4a5d0();
        if (iVar1 == (int)uVar2) {
          uVar4 = *(undefined8 *)(param_1 + lVar6);
          func_0x000107c49fe0(uVar4);
          uVar2 = param_3;
          func_0x000107c49fe0(param_3);
          uVar5 = (uint)uVar4 ^ (uint)uVar2 ^ 1;
          goto LAB_10083c5d4;
        }
      }
    }
    uVar5 = 0;
  }
LAB_10083c5d4:
  func_0x000107c61170(param_3);
  return uVar5;
}



/* Entry: 10083c614; end: 10083cb4b; -[SIGHeaderButtonOptionView _configureTextLabel:relativeToImage:forOption:theme:constraints:] */

long FUN_10083c614(undefined *param_1,undefined8 param_2,long param_3,undefined *param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  func_0x000107c413a0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,param_7);
  func_0x000107c4fe7c(param_7);
  lVar1 = param_5;
  func_0x000107c5c82c(param_5);
  func_0x000107c61180();
  func_0x000107c59c6c(param_3,param_2,lVar1);
  func_0x000107c61170(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  func_0x000107c61180();
  func_0x000107c59c78(param_3,param_2,puVar2);
  func_0x000107c61170(puVar2);
  lVar1 = param_5;
  func_0x000107c5d100(param_5);
  func_0x000107c5a100(param_3,param_2,lVar1);
  lVar9 = 1;
  func_0x000107c59c74(param_3,param_2,1);
  func_0x000107c5638c(0x4034cccccccccccd,param_3);
  lVar1 = param_5;
  func_0x000107c5c82c();
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c4adac();
  if (lVar3 != 0) {
    lVar9 = param_5;
    func_0x000107c49fe0(param_5);
  }
  func_0x000107c550d8(param_3,param_2,lVar9);
  func_0x000107c61170(lVar1);
  puVar2 = param_1;
  func_0x000107c3b598(param_1,param_2,param_5,param_6);
  if (puVar2 == (undefined *)0x2) {
    puVar2 = param_1;
    func_0x000107c3b588(param_1,param_2,param_5);
    func_0x000107c61180();
  }
  else {
    if (puVar2 == (undefined *)0x1) {
      uVar7 = 0xd5;
    }
    else {
      if (puVar2 != (undefined *)0x0) goto LAB_10083c7d0;
      uVar7 = 0x7e;
    }
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar7);
    func_0x000107c61180();
  }
  func_0x000107c59c78(param_3,param_2,puVar2);
  func_0x000107c61170(puVar2);
LAB_10083c7d0:
  lVar1 = param_5;
  func_0x000107c4a5d0();
  lVar3 = param_5;
  func_0x000107c44f7c();
  func_0x000107c61180();
  func_0x000107c61170();
  lVar9 = param_3;
  puVar2 = param_4;
  if ((int)lVar1 == 0) {
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar1 = lVar9;
    lVar4 = param_3;
    if (lVar3 == 0) {
      puVar2 = param_1;
      func_0x000107c4acb0(param_1);
      func_0x000107c61180();
      func_0x000107c40284(0x4034000000000000,lVar9,param_2,puVar2);
      func_0x000107c61180();
      lStack_98 = lVar1;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      puVar5 = param_1;
      func_0x000107c5ce8c(param_1);
      func_0x000107c61180();
      lVar3 = lVar4;
      func_0x000107c40284(0xc034000000000000,lVar4,param_2,puVar5);
      func_0x000107c61180();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_90 = lVar3;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_98,2);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(puVar5);
    }
    else {
      func_0x000107c5ce8c();
      func_0x000107c61180();
      func_0x000107c40284(0x4020000000000000,lVar9,param_2,puVar2);
      func_0x000107c61180();
      lStack_88 = lVar1;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      puVar5 = param_1;
      func_0x000107c5ce8c(param_1);
      func_0x000107c61180();
      lVar3 = lVar4;
      func_0x000107c40284(0xc034000000000000,lVar4,param_2,puVar5);
      func_0x000107c61180();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_80 = lVar3;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,2);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(puVar5);
    }
    func_0x000107c61170(lVar4);
  }
  else {
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar1 = lVar9;
    if (lVar3 == 0) {
      puVar2 = param_1;
      func_0x000107c5ce8c(param_1);
      func_0x000107c61180();
      func_0x000107c40284(0xc034000000000000,lVar9,param_2,puVar2);
      func_0x000107c61180();
      plVar8 = &lStack_78;
      lStack_78 = lVar1;
    }
    else {
      func_0x000107c4acb0(param_4);
      func_0x000107c61180();
      func_0x000107c40284(0xc020000000000000,lVar9,param_2,puVar2);
      func_0x000107c61180();
      plVar8 = &lStack_70;
      lStack_70 = lVar1;
    }
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,plVar8,1);
    func_0x000107c61180();
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar9);
  func_0x000107c528e4(param_7,param_2,puVar6);
  lVar1 = param_3;
  func_0x000107c3f764(param_3);
  func_0x000107c61180();
  func_0x000107c3f764(param_1);
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c40280(lVar1,param_2,param_1);
  func_0x000107c61180();
  func_0x000107c3d798(param_7,param_2,lVar3);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar1);
  func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,param_7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  func_0x000107c60e78();
  return *(long *)(param_3 + 0x38);
}



/* Entry: 10083cb4c; end: 10083cb53; -[SIGHeaderButtonOption typeStyle] */

undefined8 FUN_10083cb4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10083cb54; end: 10083cb7f; -[SIGHeaderButtonOptionView _effectiveThemeForOption:theme:] */

undefined8 FUN_10083cb54(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c3c7f8();
  uVar1 = 2;
  if (param_1 == 0) {
    uVar1 = param_4;
  }
  return uVar1;
}



/* Entry: 10083cb80; end: 10083cc4f; -[SIGHeaderButtonOptionView _shouldUseCustomBackgroundForBadgedOption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10083cb80(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x000107c61174(param_3);
  uVar2 = param_3;
  func_0x000107c5db48();
  if ((int)uVar2 == 0) {
    bVar1 = false;
  }
  else {
    uVar2 = param_3;
    func_0x000107c3e614();
    func_0x000107c61180();
    if (uVar2 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = param_3;
      func_0x000107c3e614();
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c49eac();
      if ((uVar4 & 1) == 0) {
        if (*(long *)(param_1 + _DAT_112794b1c) == 0) {
          bVar1 = *(long *)(param_1 + _DAT_112794b18) != 0;
        }
        else {
          bVar1 = true;
        }
      }
      else {
        bVar1 = false;
      }
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return bVar1;
}



/* Entry: 10083cc50; end: 10083cc57; -[SIGHeaderButtonOption usesCustomBackgroundWhenBadged] */

undefined1 FUN_10083cc50(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2a);
}



/* Entry: 10083cc58; end: 10083cc5f; -[SIGHeaderButtonOption isTextPositionLeading] */

undefined1 FUN_10083cc58(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 10083cc60; end: 10083cc67; -[SIGHeaderButtonOption icon] */

undefined8 FUN_10083cc60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10083cc68; end: 10083cda3; -[SIGHeaderButtonOptionView _configureBadgeView:forOption:] */

/* WARNING: Possible PIC construction at 0x00010083ccd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083cd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083cd7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083cd8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010083cd80) */
/* WARNING: Removing unreachable block (ram,0x00010083cd18) */
/* WARNING: Removing unreachable block (ram,0x00010083cd30) */
/* WARNING: Removing unreachable block (ram,0x00010083cd44) */
/* WARNING: Removing unreachable block (ram,0x00010083cd3c) */
/* WARNING: Removing unreachable block (ram,0x00010083cd50) */
/* WARNING: Removing unreachable block (ram,0x00010083ccdc) */
/* WARNING: Removing unreachable block (ram,0x00010083cd90) */

void FUN_10083cc68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c3e614(param_4);
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c3fdb8();
  func_0x000107c5af88(puVar1,param_2,param_4);
  func_0x000107c61180();
  func_0x000107c53598(param_3,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10083cda4; end: 10083ce2f; -[SIGBadgeView setColor:] */

/* WARNING: Possible PIC construction at 0x00010083ce04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010083ce08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083cda4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  uVar2 = param_3;
  func_0x000107c61178();
  func_0x000107c3ab24();
  lVar3 = (long)_DAT_112795128;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x000107c3ab24(uVar1);
  func_0x000107c608b0(uVar2,uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x000107c61174(param_3);
    uVar2 = *(ulong *)(param_1 + lVar3);
    *(ulong *)(param_1 + lVar3) = param_3;
    param_3 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10083ce30; end: 10083ce7f; -[SIGBadgeView setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083ce30(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_112795120) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_112795120) = param_3;
  func_0x000107c3b408();
  func_0x000107c3aca4(param_1);
  func_0x000107c3c680(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 10083ce80; end: 10083cf7f; -[SIGBadgeView setText:] */

/* WARNING: Possible PIC construction at 0x00010083cee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083cf10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010083cee4) */
/* WARNING: Removing unreachable block (ram,0x00010083cef4) */
/* WARNING: Removing unreachable block (ram,0x00010083cf14) */
/* WARNING: Removing unreachable block (ram,0x00010083cf2c) */
/* WARNING: Removing unreachable block (ram,0x00010083cf64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083ce80(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    lVar2 = (long)_DAT_112795148;
    uVar1 = param_3;
    func_0x000107c49cec(param_3,param_2,*(undefined8 *)(param_1 + lVar2));
    if (((uVar1 & 1) == 0) && (*(long *)(param_1 + _DAT_112795120) != 2)) {
      func_0x000107c61174(param_3);
      uVar1 = *(ulong *)(param_1 + lVar2);
      *(ulong *)(param_1 + lVar2) = param_3;
      param_3 = uVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10083cf80; end: 10083cf8f; -[SIGBadgeView setAnimationStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083cf80(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112795124) = param_3;
  return;
}



/* Entry: 10083cf90; end: 10083d01b; -[SIGHeaderButtonOptionView _configureBottomBadgeView:forOption:] */

/* WARNING: Possible PIC construction at 0x00010083cffc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010083d000) */

void FUN_10083cf90(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar1 = param_4;
  func_0x000107c3ec20();
  func_0x000107c61180();
  func_0x000107c55258(param_3,param_2,lVar1);
  if (lVar1 == 0) {
    param_4 = 1;
  }
  else {
    func_0x000107c49fe0(param_4);
  }
  func_0x000107c550d8(param_3,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10083d01c; end: 10083d023; -[SIGHeaderButtonOption bottomBadge] */

undefined8 FUN_10083d01c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10083d024; end: 10083d34b; -[SIGHeaderButtonOptionView _configureImageView:forOption:theme:constraints:] */

ulong FUN_10083d024(undefined *param_1,undefined8 param_2,ulong param_3,long param_4,
                   undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  double dVar8;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c413a0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,param_6);
  func_0x000107c4fe7c(param_6);
  lVar1 = param_4;
  func_0x000107c44f7c(param_4);
  func_0x000107c61180();
  func_0x000107c55258(param_3,param_2,lVar1);
  func_0x000107c61170(lVar1);
  lVar1 = param_4;
  func_0x000107c44f7c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = param_4;
    func_0x000107c49fe0(param_4);
  }
  func_0x000107c550d8(param_3,param_2,lVar6);
  func_0x000107c61170(lVar1);
  puVar2 = param_1;
  func_0x000107c3b598(param_1,param_2,param_4,param_5);
  if (puVar2 == (undefined *)0x2) {
    puVar2 = param_1;
    func_0x000107c3b588(param_1,param_2,param_4);
    func_0x000107c61180();
  }
  else {
    if (puVar2 != (undefined *)0x1) {
      if (puVar2 != (undefined *)0x0) goto LAB_10083d1cc;
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7e);
      func_0x000107c61180();
      func_0x000107c59e10(param_3,param_2,puVar2);
      func_0x000107c61170(puVar2);
      puVar2 = param_1;
      func_0x000107c5ce94();
      func_0x000107c61180();
      puVar3 = puVar2;
      func_0x000107c5d9c8();
      func_0x000107c61170(puVar2);
      if (puVar3 != (undefined *)0x2) goto LAB_10083d1cc;
    }
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    func_0x000107c61180();
  }
  func_0x000107c59e10(param_3,param_2,puVar2);
  func_0x000107c61170(puVar2);
LAB_10083d1cc:
  lVar1 = param_4;
  func_0x000107c5c82c();
  func_0x000107c61180();
  lVar6 = lVar1;
  func_0x000107c4adac();
  dVar8 = 0.0;
  if (lVar6 != 0) {
    dVar8 = 12.0;
  }
  func_0x000107c61170(lVar1);
  lVar1 = param_4;
  func_0x000107c4a5d0();
  uVar4 = param_3;
  if ((int)lVar1 == 0) {
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c4acb0(param_1);
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c40284(dVar8,uVar4,param_2,param_1);
    func_0x000107c61180();
    puVar7 = &uStack_78;
    uStack_78 = uVar5;
  }
  else {
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c5ce8c(param_1);
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c40284(-dVar8,uVar4,param_2,param_1);
    func_0x000107c61180();
    puVar7 = &uStack_70;
    uStack_70 = uVar5;
  }
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar7,1);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c528e4(param_6,param_2,puVar2);
  func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,param_6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    return (ulong)*(byte *)(param_3 + 0x29);
  }
  return param_3;
}



/* Entry: 10083d34c; end: 10083d353; -[SIGHeaderButtonOption isLoading] */

undefined1 FUN_10083d34c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x29);
}



/* Entry: 10083d354; end: 10083d3f3; -[SIGHeaderButtonOptionView _configureBackgroundView:forOption:style:theme:] */

/* WARNING: Possible PIC construction at 0x00010083d3c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010083d3c4) */

void FUN_10083d354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c3b584(param_1,param_2,param_4,param_5);
  func_0x000107c59a2c(param_3,param_2,uVar1);
  func_0x000107c3b598(param_1,param_2,param_4,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10083d3f4; end: 10083d41f; -[SIGHeaderButtonOptionView _effectiveBackgroundStyleForOption:style:] */

undefined8 FUN_10083d3f4(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c3c7f8();
  uVar1 = 4;
  if (param_1 == 0) {
    uVar1 = param_4;
  }
  return uVar1;
}



/* Entry: 10083d420; end: 10083d4f7; -[SIGHeaderButtonOptionView _configureLoadingIndicatorView:forOption:theme:] */

/* WARNING: Possible PIC construction at 0x00010083d4e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083d4d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010083d4e4) */

void FUN_10083d420(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar1 = param_4;
  func_0x000107c49fe0();
  if ((int)lVar1 == 0) {
    func_0x000107c5be00(param_3);
    goto code_r0x000107c61170;
  }
  lVar1 = param_1;
  func_0x000107c3b598(param_1,param_2,param_4,param_5);
  if (lVar1 == 2) {
    func_0x000107c3b588(param_1,param_2,param_4);
    func_0x000107c61180();
    func_0x000107c59e14(param_3,param_2,param_1);
    param_4 = param_1;
    goto code_r0x000107c61170;
  }
  if (lVar1 == 1) {
    uVar2 = 0xd5;
LAB_10083d4a0:
    func_0x000107c59e10(param_3,param_2,uVar2);
  }
  else if (lVar1 == 0) {
    uVar2 = 0x7e;
    goto LAB_10083d4a0;
  }
  func_0x000107c5ba54(param_3);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10083d4f8; end: 10083d637; -[SIGLoadingIndicatorView stopAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083d4f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
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
  
  puVar2 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + _DAT_112794f20) = 0;
  if (*(long *)(param_1 + _DAT_112794f0c) != 0) {
    func_0x000107c4fe68();
  }
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar3 = *(long *)(param_1 + _DAT_112794f18);
  func_0x000107c61174(lVar3);
  lVar1 = lVar3;
  func_0x000107c4080c(lVar3,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          func_0x000107c61128(lVar3);
        }
        func_0x000107c3c904(param_1,param_2,*(undefined8 *)(lStack_108 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      puVar2 = &uStack_110;
      func_0x000107c4080c(lVar3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  func_0x000107c61170(lVar3);
  if (*(char *)(param_1 + _DAT_112794f1c) == '\x01') {
    puVar2 = (undefined8 *)0x1;
    func_0x000107c550d8(param_1,param_2,1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  pcStack_118 = FUN_10083d638;
  lStack_130 = lVar3;
  lStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x000107c61174(puVar2);
  func_0x000107c4fe68(puVar2);
  uStack_158 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_160 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_148 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_150 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_138 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_140 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x000107c52580(puVar2,param_2,&uStack_160);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 10083d638; end: 10083d697; -[SIGLoadingIndicatorView _stopAnimatingArcLayer:] */

void FUN_10083d638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  func_0x000107c4fe68(param_3);
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x000107c52580(param_3,param_2,&uStack_50);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10083d698; end: 10083d6a7; -[SIGHeaderButtonBackgroundView intrinsicContentSize] */

void FUN_10083d698(void)

{
  return;
}



/* Entry: 10083d6a8; end: 10083d6ff; -[SIGLoadingIndicatorView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10083d6a8(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  lVar1 = *(long *)(param_1 + _DAT_112794f08);
  if (lVar1 == 0) {
    auVar4._8_8_ = 0x4028000000000000;
    auVar4._0_8_ = 0x4028000000000000;
    return auVar4;
  }
  if (lVar1 != 2) {
    if (lVar1 == 1) {
      auVar2._8_8_ = 0x4034000000000000;
      auVar2._0_8_ = 0x4034000000000000;
      return auVar2;
    }
    return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
  }
  auVar3._8_8_ = 0x4041800000000000;
  auVar3._0_8_ = 0x4041800000000000;
  return auVar3;
}



/* Entry: 10083d700; end: 10083d73b; -[SIGBadgeView intrinsicContentSize] */

undefined1  [16] FUN_10083d700(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  func_0x000107c3ce28();
  uVar1 = param_1;
  func_0x000107c3b968(param_2);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10083d73c; end: 10083d84f; -[SIGBadgeView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083d73c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_11270b650;
  lStack_60 = param_5;
  func_0x000107c61154(&lStack_60,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  if ((*(byte *)(param_5 + _DAT_11279512c) & 1) == 0) {
    lVar4 = (long)_DAT_112795134;
    func_0x000107c3ec60(*(undefined8 *)(param_5 + lVar4));
    uVar1 = *(undefined8 *)(param_5 + lVar4);
    uVar3 = param_1;
    func_0x000107c4aba4(uVar1);
    func_0x000107c61180();
    func_0x000107c407dc();
    func_0x000107c3e8b0(param_1,param_2,param_3,param_4,uVar3,puVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000107c61178(puVar2);
    func_0x000107c3ab30();
    uVar3 = *(undefined8 *)(param_5 + lVar4);
    func_0x000107c4aba4(uVar3);
    func_0x000107c61180();
    func_0x000107c59040();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 10083d850; end: 10083da6f; -[SIGLoadingIndicatorView layoutSublayersOfLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10083d850(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  long lStack_138;
  undefined *puStack_130;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = PTR_PTR_11270b5e8;
  lStack_138 = param_4;
  func_0x000107c61154(&lStack_138,PTR_s_layoutSublayersOfLayer__1125377f8);
  func_0x000107c3ec60(param_4);
  func_0x000107c54b80(*(undefined8 *)(param_4 + _DAT_112794f0c));
  dVar8 = 0.0;
  lVar5 = *(long *)(param_4 + _DAT_112794f18);
  func_0x000107c61174(lVar5);
  lVar2 = lVar5;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar5);
      }
      uVar6 = *(undefined8 *)(lVar7 * 8);
      uVar3 = *(undefined8 *)(param_4 + _DAT_112794f14);
      func_0x000107c4d9c0(uVar3);
      func_0x000107c61180();
      func_0x000107c3dcf4();
      func_0x000107c423ec(uVar3);
      lVar4 = param_4;
      func_0x000107c51838();
      if ((int)lVar4 != 0) {
        func_0x000107c3ec60(param_4);
        dVar8 = param_3 / 12.0;
        func_0x000107c55f94(dVar8,uVar6);
        dVar8 = dVar8 * 2.5;
      }
      func_0x000107c3ec60(param_4);
      func_0x000107c609d0();
      func_0x000107c609d0();
      func_0x000107c54b80(uVar6);
      func_0x000107c61170(uVar3);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar5;
    func_0x000107c4080c();
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
    func_0x000107c60e78();
    return *(double *)(lVar5 + 0x20);
  }
  return dVar8;
}



/* Entry: 10083da70; end: 10083da77; -[SIGLoadingArcConfiguration animationEndLineWidth] */

undefined8 FUN_10083da70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10083da78; end: 10083da7f; -[SIGLoadingArcConfiguration edgeOffsets] */

undefined1  [16] FUN_10083da78(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x58);
}



/* Entry: 10083da80; end: 10083da8f; -[SIGLoadingIndicatorView scaleLineWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10083da80(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794f04);
}



/* Entry: 10083da90; end: 10083db8f; -[SIGLoadingIndicatorLayer layoutSublayers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083da90(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_11270b5d8;
  uStack_60 = param_2;
  func_0x000107c61154(&uStack_60,PTR_s_layoutSublayers_112539578);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c3ec60(param_2);
  func_0x000107c609bc();
  dVar2 = param_1;
  func_0x000107c3ec60(param_2);
  func_0x000107c609c0();
  dVar3 = dVar2;
  func_0x000107c3ec60(param_2);
  func_0x000107c609bc();
  dVar4 = dVar3;
  func_0x000107c4b644(param_2);
  func_0x000107c3e8a0(param_1,dVar2,dVar3 + dVar4 * -0.5,0,0x401921fb54442d18,puVar1);
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c3ab30();
  func_0x000107c57274(param_2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10083db90; end: 10083dc63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083db90(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((param_2 & 1) == 0) {
    lVar4 = (long)_DAT_112794b68;
  }
  else {
    *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794b08) =
         *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794b74);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794b0c) =
         *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794b70);
    func_0x000107c3c910(*(undefined8 *)(param_1 + 0x20));
    lVar1 = *(long *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    lVar4 = (long)_DAT_112794b68;
    func_0x000107c61174(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + lVar4);
    *(undefined8 *)(lVar1 + lVar4) = uVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c59eb8(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4));
  func_0x000107c3c8d0(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794b6c);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794b6c) = 0;
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x000107c4a4d4(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setUserInteractionEnabled__112665468,
             (uint)uVar2 ^ 1);
  return;
}



/* Entry: 10083dc64; end: 10083dcb7; -[SIGHeaderButtonOptionView _stopObservingOption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083dc64(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + _DAT_112794b68) != 0) {
    func_0x000107c4ffa0(*(long *)(param_1 + _DAT_112794b68),param_2,param_1);
    func_0x000107c520f4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c161030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAccessibilityLabel__112635e28,0);
    return;
  }
  return;
}



/* Entry: 10083dcb8; end: 10083dcc3; -[SIGHeaderButtonOption setTooltipDelegate:] */

void FUN_10083dcb8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 10083dcc4; end: 10083dd07; -[SIGHeaderButtonOptionView _startObservingOption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083dcc4(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112794b68;
  if (*(long *)(param_1 + lVar1) != 0) {
    func_0x000107c3c910();
                    /* WARNING: Could not recover jumptable at 0x00010befa210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar1),PTR_s_addObserver__11259c228,param_1);
    return;
  }
  return;
}



/* Entry: 10083dd08; end: 10083ddcb; -[SIGHeaderButtonOption removeObserver:] */

/* WARNING: Possible PIC construction at 0x00010083dd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083dd6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010083dd48) */
/* WARNING: Removing unreachable block (ram,0x00010083dd70) */
/* WARNING: Removing unreachable block (ram,0x00010083dd7c) */
/* WARNING: Removing unreachable block (ram,0x00010083dd80) */
/* WARNING: Removing unreachable block (ram,0x00010083ddac) */
/* WARNING: Removing unreachable block (ram,0x00010083dd94) */
/* WARNING: Removing unreachable block (ram,0x00010083dda8) */
/* WARNING: Removing unreachable block (ram,0x00010083dd4c) */

void FUN_10083dd08(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c3e614(param_1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10083ddcc; end: 10083debf; -[SIGHeaderButtonOption addObserver:] */

/* WARNING: Possible PIC construction at 0x00010083de14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083de80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083dea8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010083de18) */
/* WARNING: Removing unreachable block (ram,0x00010083de84) */
/* WARNING: Removing unreachable block (ram,0x00010083deac) */
/* WARNING: Removing unreachable block (ram,0x00010083de88) */

void FUN_10083ddcc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x000107c5e160();
    func_0x000107c61180();
    *(undefined **)(param_1 + 0x18) = puVar1;
  }
  else {
    func_0x000107c3d7f8();
    uVar2 = param_3;
    func_0x000107c61164(param_3,PTR_s_headerButtonOption_didChangeAcce_1125d5638);
    if ((uVar2 & 1) != 0) {
      func_0x000107c44c80(param_3);
    }
    uVar2 = param_3;
    func_0x000107c61164(param_3,PTR_s_headerButtonOption_didChangeAcce_1125d5640);
    if ((uVar2 & 1) != 0) {
      func_0x000107c44c84(param_3);
    }
    func_0x000107c3e614(param_1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10083dec0; end: 10083df07; -[SIGHeaderButtonOptionView headerButtonOption:didChangeAccessibilityIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083dec0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794b68);
  func_0x000107c3cf00(uVar1);
  func_0x000107c61180();
  func_0x000107c520f4(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10083df08; end: 10083df0f; -[SIGHeaderButtonOption accessibilityIdentifier] */

undefined8 FUN_10083df08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10083df10; end: 10083df57; -[SIGHeaderButtonOptionView headerButtonOption:didChangeAccessibilityLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083df10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794b68);
  func_0x000107c3cf04(uVar1);
  func_0x000107c61180();
  func_0x000107c520fc(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10083df58; end: 10083df5f; -[SIGHeaderButtonOption accessibilityLabel] */

undefined8 FUN_10083df58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10083df60; end: 10083dfa3; -[SIGHeaderButtonOption isSpacer] */

bool FUN_10083df60(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1 + 8;
  func_0x000107c61148();
  if (lVar2 == 0) {
    bVar1 = *(long *)(param_1 + 0x10) == 0;
  }
  else {
    bVar1 = false;
  }
  func_0x000107c61170();
  return bVar1;
}



/* Entry: 10083dfa4; end: 10083dfab;  */

void FUN_10083dfa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10083dfac; end: 10083e137; -[SIGHeaderButtonOptionView completeAnimation:] */

/* WARNING: Possible PIC construction at 0x00010083e0a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083e0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083e0e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083e0f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083e110: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010083e0fc) */
/* WARNING: Removing unreachable block (ram,0x00010083e0e4) */
/* WARNING: Removing unreachable block (ram,0x00010083e0c4) */
/* WARNING: Removing unreachable block (ram,0x00010083e0a4) */
/* WARNING: Removing unreachable block (ram,0x00010083e114) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083dfac(long param_1,undefined8 param_2)

{
  func_0x000107c3b144(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112794b34),
                      *(undefined8 *)(param_1 + _DAT_112794b44),
                      *(undefined8 *)(param_1 + _DAT_112794b68),
                      *(undefined8 *)(param_1 + _DAT_112794b08),
                      *(undefined8 *)(param_1 + _DAT_112794b24));
  func_0x000107c3b108(param_1);
  func_0x000107c3b10c(param_1);
  func_0x000107c3b130(param_1);
  func_0x000107c3b104(param_1);
  func_0x000107c3b134(param_1);
  func_0x000107c3cc00(param_1);
  func_0x000107c4abfc(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + _DAT_112794b38),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10083e138; end: 10083e24f; -[SIGHeaderButtonOptionView _updateIntrinsicContentSizeForOption:configuredLabel:] */

/* WARNING: Possible PIC construction at 0x00010083e190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083e1b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083e220: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010083e1bc) */
/* WARNING: Removing unreachable block (ram,0x00010083e240) */
/* WARNING: Removing unreachable block (ram,0x00010083e1c0) */
/* WARNING: Removing unreachable block (ram,0x00010083e194) */
/* WARNING: Removing unreachable block (ram,0x00010083e198) */
/* WARNING: Removing unreachable block (ram,0x00010083e224) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083e138(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  double *pdVar1;
  bool bVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_4 == 0) {
    pdVar1 = (double *)(param_1 + _DAT_112794b20);
    bVar2 = false;
    if ((*pdVar1 == 40.0) && (bVar2 = false, !NAN(pdVar1[1]))) {
      bVar2 = pdVar1[1] == 40.0;
    }
    if (!bVar2) {
      *pdVar1 = 40.0;
      pdVar1[1] = 40.0;
      func_0x000107c49908(param_1);
    }
  }
  else {
    func_0x000107c5c82c(param_4);
    func_0x000107c61180();
    func_0x000107c4adac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10083e250; end: 10083e3db; -[SIGHeaderButtonBackgroundView _addDefaultShadow] */

/* WARNING: Possible PIC construction at 0x00010083e294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083e2f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083e318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083e364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083e394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010083e3bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010083e398) */
/* WARNING: Removing unreachable block (ram,0x00010083e368) */
/* WARNING: Removing unreachable block (ram,0x00010083e31c) */
/* WARNING: Removing unreachable block (ram,0x00010083e2f8) */
/* WARNING: Removing unreachable block (ram,0x00010083e298) */
/* WARNING: Removing unreachable block (ram,0x00010083e29c) */
/* WARNING: Removing unreachable block (ram,0x00010083e2a0) */
/* WARNING: Removing unreachable block (ram,0x00010083e3c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083e250(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794b84);
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  func_0x000107c407dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10083e3dc; end: 10083e77f; -[SIGHeaderButtonGroup _addConstraintsToButtons:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10083e3dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c40808();
  if (uVar1 == 0) goto LAB_10083e73c;
  lVar10 = (long)_DAT_112794a4c;
  func_0x000107c413a0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar10));
  func_0x000107c4fe7c(*(undefined8 *)(param_1 + lVar10));
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (uVar1 == 0) {
    uVar8 = 0;
    uVar1 = param_3;
LAB_10083e720:
    func_0x000107c61170(uVar1);
  }
  else {
    uVar8 = 0;
    lVar6 = *plStack_120;
    do {
      uVar7 = 0;
      uVar5 = uVar8;
      do {
        if (*plStack_120 != lVar6) {
          func_0x000107c61128(param_3);
        }
        uVar8 = *(ulong *)(lStack_128 + uVar7 * 8);
        uVar9 = *(undefined8 *)(param_1 + lVar10);
        uVar2 = param_1;
        func_0x000107c3c760();
        uVar3 = uVar8;
        if (uVar5 == 0) {
          uVar4 = param_1;
          if ((uVar2 & 1) == 0) {
            func_0x000107c4acb0(uVar8);
            func_0x000107c61180();
            func_0x000107c4acb0(param_1);
            func_0x000107c61180();
          }
          else {
            func_0x000107c4ace0(uVar8);
            func_0x000107c61180();
            func_0x000107c4ace0(param_1);
            func_0x000107c61180();
          }
          uVar2 = uVar3;
          func_0x000107c40280(uVar3,param_2,uVar4);
          func_0x000107c61180();
        }
        else {
          uVar4 = uVar5;
          if ((uVar2 & 1) == 0) {
            func_0x000107c4acb0(uVar8);
            func_0x000107c61180();
            func_0x000107c5ce8c(uVar5);
            func_0x000107c61180();
          }
          else {
            func_0x000107c4ace0(uVar8);
            func_0x000107c61180();
            func_0x000107c50890(uVar5);
            func_0x000107c61180();
          }
          uVar2 = uVar3;
          func_0x000107c40284(0x4020000000000000,uVar3,param_2,uVar4);
          func_0x000107c61180();
        }
        func_0x000107c3d798(uVar9,param_2,uVar2);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar3);
        uVar9 = *(undefined8 *)(param_1 + lVar10);
        uVar2 = uVar8;
        func_0x000107c5cbe4(uVar8);
        func_0x000107c61180();
        uVar3 = param_1;
        func_0x000107c5cbe4(param_1);
        func_0x000107c61180();
        uVar4 = uVar2;
        func_0x000107c40280(uVar2,param_2,uVar3);
        func_0x000107c61180();
        func_0x000107c3d798(uVar9,param_2,uVar4);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar2);
        func_0x000107c61174(uVar8);
        func_0x000107c61170(uVar5);
        uVar7 = uVar7 + 1;
        uVar5 = uVar8;
      } while (uVar1 != uVar7);
      uVar1 = param_3;
      func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (uVar1 != 0);
    func_0x000107c61170(param_3);
    if (uVar8 != 0) {
      uVar9 = *(undefined8 *)(param_1 + lVar10);
      uVar7 = param_1;
      func_0x000107c3c760();
      uVar1 = uVar8;
      uVar5 = param_1;
      if ((uVar7 & 1) == 0) {
        func_0x000107c5ce8c(uVar8);
        func_0x000107c61180();
        func_0x000107c5ce8c(param_1);
        func_0x000107c61180();
      }
      else {
        func_0x000107c50890(uVar8);
        func_0x000107c61180();
        func_0x000107c50890(param_1);
        func_0x000107c61180();
      }
      uVar7 = uVar1;
      func_0x000107c40280(uVar1,param_2,uVar5);
      func_0x000107c61180();
      func_0x000107c3d798(uVar9,param_2,uVar7);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar5);
      goto LAB_10083e720;
    }
  }
  func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar10));
  func_0x000107c61170(uVar8);
LAB_10083e73c:
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  func_0x000107c60e78();
  if (*(char *)(param_3 + (long)_DAT_112794a48) != '\x01') {
    return 0;
  }
  func_0x000107c42450();
  return (ulong)(param_3 == 1);
}



/* Entry: 10083e780; end: 10083e7b7; -[SIGHeaderButtonGroup _shouldIgnoreRTL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10083e780(long param_1)

{
  if (*(char *)(param_1 + _DAT_112794a48) == '\x01') {
    func_0x000107c42450();
    return param_1 == 1;
  }
  return false;
}



/* Entry: 10083e7b8; end: 10083e84b; -[SIGHeaderItem setCustomLeadingAccessoryView:] */

void FUN_10083e7b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_10b856958;
  puStack_40 = &UNK_110d62b40;
  lStack_38 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_58);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10083e84c; end: 10083e8ab; -[SCMainCameraHeaderLayoutController _shouldShowNotificationCenterHeaderButton] */

bool FUN_10083e84c(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4d7c4();
  func_0x000107c61170(uVar2);
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(byte *)(param_1 + 0x30) & 2) == 0;
  }
  return bVar1;
}



/* Entry: 10083e8ac; end: 10083e8e3;  */

void FUN_10083e8ac(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10083e8e4; end: 10083e8ef;  */

long FUN_10083e8e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  FUN_10083e8f0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x28) = 0x2020202;
  *(undefined1 *)(lVar3 + 0x30) = 1;
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  func_0x000107c615f0(uVar1);
  func_0x000107c615f0(uVar2);
  func_0x000107c61174(uVar4);
  return lVar3;
}



/* Entry: 10083e8f0; end: 10083e90f;  */

void FUN_10083e8f0(void)

{
  func_0x000107c61168(&PTR_PTR_112e0c920);
  return;
}



/* Entry: 10083e910; end: 10083e98b;  */

long FUN_10083e910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10083e8f0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x28) = 0x2020202;
  *(undefined1 *)(lVar1 + 0x30) = 1;
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_3);
  return lVar1;
}



/* Entry: 10083e98c; end: 10083e993;  */

void FUN_10083e98c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10083e994; end: 10083e9c7;  */

void FUN_10083e994(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


