/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aeac8fc; end: 10aeac913;  */

void FUN_10aeac8fc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10aeac914; end: 10aeac983;  */

void FUN_10aeac914(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d8840;
  func_0x00010c0840e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5cde0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10aeac984; end: 10aeac99b; +[SCMixerNamespaceService _namespaceIdsFromNamespaces:] */

void FUN_10aeac984(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_compactMap__1125ae648,&PTR___NSConcreteGlobalBlock_110c8e748);
  return;
}



/* Entry: 10aeac99c; end: 10aeaca2b; -[SCMixerNamespaceService .cxx_destruct] */

void FUN_10aeac99c(long param_1)

{
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



/* Entry: 10aeaca2c; end: 10aeaca33; -[SCMixerNamespaceServiceFactory mixerServiceForServiceType:updateStrategy:] */

void FUN_10aeaca2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cf190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_mixerServiceForServiceType_updat_112611678,param_3,param_4,0);
  return;
}



/* Entry: 10aeaca34; end: 10aeaca3f; -[SCMixerNamespaceServiceFactory mixerServiceForServiceType:snapSource:] */

void FUN_10aeaca34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cf190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_mixerServiceForServiceType_updat_112611678,param_3,
             *(undefined8 *)(param_1 + 0x30),param_4);
  return;
}



/* Entry: 10aeaca40; end: 10aeacc6b; -[SCMixerNamespaceServiceFactory mixerServiceForNamespaces:groupId:] */

void FUN_10aeaca40(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126de458;
  func_0x00010bee8360();
  _objc_retainAutoreleasedReturnValue();
  if ((param_4 == 0) && (puVar10 = puVar1, func_0x00010bf529e0(), puVar10 == (undefined *)0x0)) {
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar9);
    uVar2 = uVar7;
    func_0x00010c0cefa0();
    if ((int)uVar2 == 0) {
      puVar11 = PTR_PTR_1126de658;
      _objc_opt_new();
    }
    else {
      puVar11 = *(undefined **)(param_1 + 0x30);
      _objc_retain(puVar11);
    }
    puVar10 = PTR_PTR_1126ae720;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10aeacc6c;
    puStack_b0 = &UNK_110c8e798;
    uStack_a8 = uVar3;
    _objc_retain(puVar1);
    puStack_a0 = puVar1;
    uStack_98 = uVar4;
    uStack_90 = uVar5;
    puStack_88 = puVar11;
    uStack_80 = uVar9;
    uStack_78 = uVar6;
    uStack_70 = uVar8;
    lStack_68 = param_4;
    _objc_retain(uVar8);
    _objc_retain(uVar6);
    _objc_retain(uVar9);
    _objc_retain(puVar11);
    _objc_retain(uVar5);
    _objc_retain(uVar4);
    _objc_retain(uVar3);
    func_0x00010bf11fe0(puVar10,param_2,&puStack_c8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(puStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(puStack_a0);
    _objc_release(uStack_a8);
    _objc_release(puVar11);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10aeacc6c; end: 10aeacd87;  */

void FUN_10aeacc6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0cc7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar4 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    puVar5 = PTR_PTR_1126de660;
    _objc_alloc(PTR_PTR_1126de660);
    func_0x00010c018ac0();
  }
  else {
    puVar5 = PTR_PTR_1126de650;
    _objc_alloc(PTR_PTR_1126de650);
    func_0x00010c041c80();
  }
  puVar6 = PTR_PTR_1126de640;
  _objc_alloc(PTR_PTR_1126de640);
  func_0x00010c02de00();
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10aeacd88; end: 10aeacf23; -[SCMixerNamespaceServiceFactory nonCachingMixerServiceForServiceType:] */

void FUN_10aeacd88(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_1;
  func_0x00010be9b2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar8);
  puVar2 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10aeacf24;
  puStack_90 = &UNK_110c8e7c8;
  uStack_88 = uVar3;
  lStack_80 = lVar1;
  uStack_78 = uVar4;
  uStack_70 = uVar5;
  uStack_68 = uVar8;
  uStack_60 = uVar6;
  uStack_58 = uVar7;
  _objc_retain(uVar7);
  _objc_retain(uVar6);
  _objc_retain(uVar8);
  _objc_retain(uVar5);
  _objc_retain(uVar4);
  _objc_retain(lVar1);
  _objc_retain(uVar3);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(lStack_80);
  _objc_release(uStack_88);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeacf24; end: 10aead03b;  */

void FUN_10aeacf24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0cc7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126de658;
  _objc_opt_new(PTR_PTR_1126de658);
  puVar5 = PTR_PTR_1126de650;
  _objc_alloc(PTR_PTR_1126de650);
  func_0x00010c041c80();
  puVar6 = PTR_PTR_1126de640;
  _objc_alloc(PTR_PTR_1126de640);
  func_0x00010c02de00();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10aead03c; end: 10aead043; -[SCMixerNamespaceServiceFactory _scheduleNamespacesForServiceType:] */

void FUN_10aead03c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9b310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__scheduleNamespacesForServiceTyp_112584668,param_3,0);
  return;
}



/* Entry: 10aead044; end: 10aead0df; -[SCMixerNamespaceServiceFactory .cxx_destruct] */

void FUN_10aead044(long param_1)

{
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



/* Entry: 10aead0e0; end: 10aead12f; -[SCMixerScheduleNamespaceServiceAdapter startUpdatingWithParameters:] */

void FUN_10aead0e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251680();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aead130; end: 10aead19f; -[SCMixerScheduleNamespaceServiceAdapter cachedNamespaceData] */

void FUN_10aead130(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf27380();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10aead1a0; end: 10aead1af;  */

void FUN_10aead1a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9b2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126de668,PTR_s__scheduleNamespaceDataFromMixerN_112584658,param_2);
  return;
}



/* Entry: 10aead1b0; end: 10aead34b; -[SCMixerScheduleNamespaceServiceAdapter cachedNamespaceDataDictionary] */

void FUN_10aead1b0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf273a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0();
  func_0x00010bf71fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      lVar7 = *(long *)(lVar8 * 8);
      func_0x00010c14ffc0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar7;
      func_0x00010c0d53e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      lVar7 = lVar4;
      func_0x00010c08fa60();
      if (lVar7 != 0) {
        func_0x00010c1d0640(puVar2);
      }
      _objc_release(lVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar5 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10aead34c; end: 10aead363;  */

void FUN_10aead34c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10aead364; end: 10aead36f; -[SCMixerScheduleNamespaceServiceAdapter .cxx_destruct] */

void FUN_10aead364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aead370; end: 10aead433; -[SCMixerScheduleNamespaceServiceFactoryAdapter serviceForLensScheduleNamespaces:updateStrategy:] */

void FUN_10aead370(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10aead434;
  puStack_48 = &UNK_110c8e8c8;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0b8600(uVar1,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aead434; end: 10aead487;  */

void FUN_10aead434(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c0cf100(param_2,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126de668;
  _objc_alloc(PTR_PTR_1126de668);
  func_0x00010c02c400();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aead488; end: 10aead553; -[SCMixerScheduleNamespaceServiceFactoryAdapter serviceForLensScheduleNamespaces:updateStrategy:throttlingEligible:] */

void FUN_10aead488(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10aead554;
  puStack_50 = &UNK_110c8e8f8;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0b8600(uVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aead554; end: 10aead5ab;  */

void FUN_10aead554(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c0cf120(param_2,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126de668;
  _objc_alloc(PTR_PTR_1126de668);
  func_0x00010c02c400();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aead5ac; end: 10aead64f; -[SCMixerScheduleNamespaceServiceFactoryAdapter serviceForServiceType:updateStrategy:] */

void FUN_10aead5ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10aead650;
  puStack_48 = &UNK_110c8e948;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_4);
  func_0x00010c0b8600(uVar1,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aead650; end: 10aead6a3;  */

void FUN_10aead650(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c0cf160(param_2,param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126de668;
  _objc_alloc(PTR_PTR_1126de668);
  func_0x00010c02c400();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aead6a4; end: 10aead6ff; -[SCMixerScheduleNamespaceServiceFactoryAdapter nonCachingServiceForServiceType:] */

void FUN_10aead6a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_10aead700;
  puStack_20 = &UNK_110c8e928;
  uStack_18 = param_3;
  func_0x00010c0b8600(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aead700; end: 10aead753;  */

void FUN_10aead700(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c0dab00(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126de668;
  _objc_alloc(PTR_PTR_1126de668);
  func_0x00010c02c400();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aead754; end: 10aead75f; -[SCMixerScheduleNamespaceServiceFactoryAdapter .cxx_destruct] */

void FUN_10aead754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aead760; end: 10aead7af; -[SCMixerFeedMetadataStoreProvider cleanupStorage:] */

void FUN_10aead760(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf39ec0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aead7b0; end: 10aead7bb; -[SCMixerFeedMetadataStoreProvider .cxx_destruct] */

void FUN_10aead7b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aead7bc; end: 10aead84b; -[SCMixerNamespaceInMemoryStore init] */

undefined1 * FUN_10aead7bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701658;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10aead84c; end: 10aead8fb; -[SCMixerNamespaceInMemoryStore namespaceDataForNamespaces:] */

void FUN_10aead84c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10aead8fc;
  puStack_40 = &UNK_110c8e9c8;
  uVar1 = param_3;
  lStack_38 = param_1;
  func_0x00010bf43280(param_3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aead8fc; end: 10aead907;  */

void FUN_10aead8fc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be61e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__namespaceDataForNamespace__112576120,param_2);
  return;
}



/* Entry: 10aead908; end: 10aead9db; -[SCMixerNamespaceInMemoryStore namespaceDataObservableForNamespaces:] */

void FUN_10aead908(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10aead9dc;
  puStack_40 = &UNK_110c8e9f8;
  uVar1 = param_3;
  lStack_38 = param_1;
  func_0x00010bf43280(param_3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010c0cab40(PTR_PTR_1126ae6b8,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aead9dc; end: 10aeada2f;  */

void FUN_10aead9dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf267e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bec5cc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aeada30; end: 10aeada33; -[SCMixerNamespaceInMemoryStore warmupNamespacesIfNeeded:] */

void FUN_10aeada30(void)

{
  return;
}



/* Entry: 10aeada34; end: 10aeadd4f; -[SCMixerNamespaceInMemoryStore saveNamespaceData:completion:] */

ulong FUN_10aeada34(long param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0();
  _os_unfair_lock_lock(param_1 + 0x18);
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(uVar1);
      }
      uVar10 = *(undefined8 *)(uVar9 * 8);
      func_0x00010c14ffc0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar10;
      func_0x00010bf267e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10));
      lVar5 = param_1;
      func_0x00010bec5cc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(lVar5);
      _objc_release(uVar4);
      uVar9 = uVar9 + 1;
    } while (uVar3 != uVar9);
    uVar3 = uVar1;
    func_0x00010bf52a60();
  }
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(uVar1);
      }
      uVar10 = *(undefined8 *)(uVar9 * 8);
      func_0x00010c14ffc0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar10;
      func_0x00010c0d53e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c0e00e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar10);
      func_0x00010bf85be0(PTR_PTR_1126de5b8);
      func_0x00010c0d9840(puVar6);
      _objc_release(puVar6);
      uVar9 = uVar9 + 1;
    } while (uVar3 != uVar9);
    uVar3 = uVar1;
    func_0x00010bf52a60();
  }
  _objc_release(uVar1);
  if (param_4 != 0) {
    param_2 = 1;
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010c14ffc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08fa60();
  _objc_release(lVar7);
  _objc_release(param_2);
  return (ulong)(lVar8 != 0);
}



/* Entry: 10aeadd50; end: 10aeaddb3;  */

bool FUN_10aeadd50(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c14ffc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar2 != 0;
}



/* Entry: 10aeaddb4; end: 10aeade5b; -[SCMixerNamespaceInMemoryStore _namespaceDataForNamespace:] */

void FUN_10aeaddb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_assert_owner(param_1 + 0x18);
  uVar1 = param_3;
  func_0x00010bf267e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined **)(param_1 + 0x10);
  func_0x00010c0e00e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126de680;
    func_0x00010be08800(PTR_PTR_1126de680,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,puVar2,uVar1);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeade5c; end: 10aeadedb; -[SCMixerNamespaceInMemoryStore _subjectForCacheKey:] */

void FUN_10aeade5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_assert_owner(param_1 + 0x18);
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae568;
    _objc_opt_new(PTR_PTR_1126ae568);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeadedc; end: 10aeadf4b; +[SCMixerNamespaceInMemoryStore _emptyDataForNamespace:] */

void FUN_10aeadedc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de5b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c041be0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeadf4c; end: 10aeadf7b; -[SCMixerNamespaceInMemoryStore .cxx_destruct] */

void FUN_10aeadf4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeadf7c; end: 10aeadfef; -[SCMixerNamespaceInMemoryStoreProvider init] */

undefined1 * FUN_10aeadf7c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701660;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10aeadff0; end: 10aeae00b;  */

void FUN_10aeadff0(void)

{
  _objc_opt_new(PTR_PTR_1126de680);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aeae00c; end: 10aeae033; -[SCMixerNamespaceInMemoryStoreProvider metadataStoreForScheduleNamespaces:] */

void FUN_10aeae00c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aeae034; end: 10aeae03f; -[SCMixerNamespaceInMemoryStoreProvider .cxx_destruct] */

void FUN_10aeae034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeae040; end: 10aeae08f; -[SCMixerNamespaceMetadataStoreProvider cleanupStorage:] */

void FUN_10aeae040(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf39ec0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aeae090; end: 10aeae09b; -[SCMixerNamespaceMetadataStoreProvider .cxx_destruct] */

void FUN_10aeae090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeae09c; end: 10aeae167; -[SCMixerNamespaceSelectingStore initWithPrimaryStore:secondaryStore:storeSelector:] */

undefined1 *
FUN_10aeae09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112701670;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aeae168; end: 10aeae16f; -[SCMixerNamespaceSelectingStore namespaceDataForNamespaces:] */

void FUN_10aeae168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d52f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_namespaceDataForNamespaces__112612ed0);
  return;
}



/* Entry: 10aeae170; end: 10aeae26f; -[SCMixerNamespaceSelectingStore namespaceDataObservableForNamespaces:] */

void FUN_10aeae170(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0d5380(lVar5,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d5380(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126ae6b8;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_48 = lVar5;
  uStack_40 = uVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0cab40(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  uVar1 = *(undefined8 *)(lVar5 + 8);
  _objc_retain(puVar4);
  func_0x00010c2a1fe0(uVar1,param_2,puVar4);
  func_0x00010c2a1fe0(*(undefined8 *)(lVar5 + 0x10),param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10aeae270; end: 10aeae2bf; -[SCMixerNamespaceSelectingStore warmupNamespacesIfNeeded:] */

void FUN_10aeae270(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c2a1fe0(uVar1,param_2,param_3);
  func_0x00010c2a1fe0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aeae2c0; end: 10aeae667; -[SCMixerNamespaceSelectingStore saveNamespaceData:completion:] */

void FUN_10aeae2c0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0();
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
      func_0x00010c2354e0();
      puVar6 = puVar3;
      if (iVar2 == 0) {
        puVar6 = puVar4;
      }
      func_0x00010befa120(puVar6);
      lVar14 = lVar14 + 1;
    } while (lVar5 != lVar14);
    lVar5 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar6 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  puVar7 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  puVar8 = puVar3;
  func_0x00010bf529e0();
  if (puVar8 == (undefined *)0x0) {
    func_0x00010bf43d60(puVar6);
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar6);
    func_0x00010c14aa20(uVar13);
    _objc_release(puVar6);
  }
  puVar8 = puVar4;
  func_0x00010bf529e0();
  if (puVar8 == (undefined *)0x0) {
    func_0x00010bf43d60(puVar7);
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(puVar7);
    func_0x00010c14aa20(uVar13);
    _objc_release(puVar7);
  }
  puVar8 = PTR_PTR_1126ae558;
  puVar9 = puVar6;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beffb40(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c297260(puVar8);
  _objc_release(puVar8);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  uVar13 = *(undefined8 *)(param_3 + 0x20);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10aeae668; end: 10aeae6f7;  */

void FUN_10aeae668(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10aeae6f8; end: 10aeae777;  */

void FUN_10aeae6f8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (param_3 == 0) {
      uVar2 = param_2;
      func_0x00010c0bc7a0(param_2);
      lVar1 = *(long *)(param_1 + 0x20);
      pcVar3 = *(code **)(lVar1 + 0x10);
    }
    else {
      pcVar3 = *(code **)(lVar1 + 0x10);
      uVar2 = 0;
    }
    (*pcVar3)(lVar1,uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10aeae778; end: 10aeae77f;  */

void FUN_10aeae778(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 10aeae780; end: 10aeae7bb; -[SCMixerNamespaceSelectingStore .cxx_destruct] */

void FUN_10aeae780(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeae7bc; end: 10aeae803; -[SCMixerGroupNamespaceManager initWithGroupId:] */

void FUN_10aeae7bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701678;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10aeae804; end: 10aeae80f; -[SCMixerGroupNamespaceManager scheduleNamespaces] */

undefined * FUN_10aeae804(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 10aeae810; end: 10aeae8d3; -[SCMixerGroupNamespaceManager namespaceDataObservableWithNamespaceProvider:feedDataProvider:] */

void FUN_10aeae810(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010bfa3a00(param_4,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10aeae8d4;
  puStack_48 = &UNK_110c8eb28;
  uStack_40 = param_3;
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c2656e0(param_4,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aeae8d4; end: 10aeae95b;  */

void FUN_10aeae8d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126de660;
  func_0x00010be0da40(PTR_PTR_1126de660,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2a1fe0(*(undefined8 *)(param_1 + 0x20));
    puVar2 = *(undefined **)(param_1 + 0x20);
    func_0x00010c0d5380(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeae95c; end: 10aeaea33; -[SCMixerGroupNamespaceManager cachedNamespaceDataWithNamespaceProvider:feedDataProvider:] */

void FUN_10aeae95c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010bfa39c0(param_4,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126de660;
  func_0x00010be0da40(PTR_PTR_1126de660,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_3;
    func_0x00010c0d52e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aeaea34; end: 10aeaea43;  */

void FUN_10aeaea34(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d5310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126de6a0,PTR_s_namespaceDataFromInternalNamespa_112612ed8,param_2);
  return;
}



/* Entry: 10aeaea44; end: 10aeaea53; -[SCMixerGroupNamespaceManager feedsObservableWithFeedDataProvider:] */

void FUN_10aeaea44(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa3a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_feedDataObservableForGroupId__1125c6828,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10aeaea54; end: 10aeaea63; -[SCMixerGroupNamespaceManager cachedFeedDataWithProvider:] */

void FUN_10aeaea54(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa39d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_feedDataForGroupId__1125c6818,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10aeaea64; end: 10aeaeb5b; -[SCMixerGroupNamespaceManager namespacesToUpdateWithParameters:namespaceDataProvider:feedDataProvider:updateStrategy:feedUpdateStrategy:] */

void FUN_10aeaea64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_7);
  func_0x00010bfce920(param_5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_7;
  func_0x00010c235040(param_7,param_2,param_5);
  _objc_release(param_7);
  if ((uVar1 & 1) == 0) {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126de6a8;
    _objc_alloc(PTR_PTR_1126de6a8);
    func_0x00010c02dea0();
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aeaeb5c; end: 10aeaeb6b; +[SCMixerGroupNamespaceManager _extractDefaultNamespacesFromFeeds:] */

void FUN_10aeaeb5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_compactMap__1125ae648,&PTR___NSConcreteGlobalBlock_110c8eb98);
  return;
}



/* Entry: 10aeaeb6c; end: 10aeaec0f;  */

void FUN_10aeaeb6c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf69d40();
  if ((int)lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_2;
    func_0x00010c0d53e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = (undefined *)0x0;
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126b6868;
      _objc_alloc(PTR_PTR_1126b6868);
      lVar1 = param_2;
      func_0x00010c0d53e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02dd60(puVar2);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aeaec10; end: 10aeaedf3; +[SCMixerGroupNamespaceManager _feedDiagnosticStringFromFeeds:] */

void FUN_10aeaec10(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined **ppuVar14;
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
  ppuVar1 = param_3;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (param_3 == (undefined **)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    ppuVar1 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0(puVar2,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    ppuVar1 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    if (ppuVar1 != (undefined **)0x0) {
      lVar13 = *plStack_120;
      do {
        ppuVar14 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar13) {
            _objc_enumerationMutation(param_3);
          }
          puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uVar12 = *(undefined8 *)(lStack_128 + (long)ppuVar14 * 8);
          func_0x00010c0d53e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf69d40();
          func_0x00010c14de00(puVar11,param_2,&PTR____CFConstantStringClassReference_110f2f518);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2,param_2,puVar11);
          _objc_release(puVar11);
          _objc_release(uVar12);
          ppuVar14 = (undefined **)((long)ppuVar14 + 1);
        } while (ppuVar1 != ppuVar14);
        ppuVar1 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
      } while (ppuVar1 != (undefined **)0x0);
    }
    _objc_release(param_3);
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbf078;
    puVar11 = puVar2;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126de6a0;
    _objc_retain(ppuVar1);
    ppuVar14 = ppuVar1;
    func_0x00010bef09a0(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cc560(puVar2,param_2,ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    puVar3 = PTR_PTR_1126de6a0;
    ppuVar14 = ppuVar1;
    func_0x00010c105c40(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cc560(puVar3,param_2,ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    puVar11 = PTR_PTR_1126de648;
    _objc_alloc();
    ppuVar14 = ppuVar1;
    func_0x00010c14ffc0(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar1;
    func_0x00010c27d100();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar1;
    func_0x00010c08a660(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar1;
    func_0x00010c0da7c0(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar1;
    func_0x00010bf93ca0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar1;
    func_0x00010c089660();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar1;
    func_0x00010bfa81c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar1;
    func_0x00010c0cf080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    func_0x00010c041be0(puVar11,param_2,ppuVar14,puVar2,puVar3,ppuVar4,ppuVar5,ppuVar6,ppuVar7,
                        ppuVar8,ppuVar9,ppuVar10);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar14);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10aeaedf4; end: 10aeaeff3; +[SCMixerNamespaceDataTransformationUtils namespaceDataFromInternalNamespaceData:] */

void FUN_10aeaedf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar2 = PTR_PTR_1126de6a0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bef09a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cc560(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126de6a0;
  uVar1 = param_3;
  func_0x00010c105c40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cc560(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126de648;
  _objc_alloc();
  uVar1 = param_3;
  func_0x00010c14ffc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c27d100();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c08a660(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c0da7c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf93ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c089660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bfa81c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010c0cf080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c041be0(puVar4,param_2,uVar1,puVar2,puVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11
                     );
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10aeaeff4; end: 10aeaf013; +[SCMixerNamespaceDataTransformationUtils metadataItemsArrayFromInternalMetadataItemsArray:] */

void FUN_10aeaeff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_compactMap__1125ae648,&PTR___NSConcreteGlobalBlock_110c8ebd8);
  return;
}



/* Entry: 10aeaf014; end: 10aeaf10f; +[SCMixerNamespaceDataTransformationUtils metadataItemFromInternalMetadataItem:] */

void FUN_10aeaf014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_38 = FUN_10aeaf110;
  uStack_30 = 0x10aeaf120;
  uStack_28 = 0;
  func_0x00010c0bd220(param_3);
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



/* Entry: 10aeaf110; end: 10aeaf127;  */

void FUN_10aeaf110(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10aeaf128; end: 10aeaf197;  */

void FUN_10aeaf128(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d8840;
  func_0x00010c0840e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5cde0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10aeaf198; end: 10aeaf1df;  */

void FUN_10aeaf198(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d8840;
  func_0x00010c098140(PTR_PTR_1126d8840,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10aeaf1e0; end: 10aeaf237; -[SCMixerScheduledNamespaceManager cachedNamespaceDataWithNamespaceProvider:feedDataProvider:] */

void FUN_10aeaf1e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0d52e0(param_3,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aeaf238; end: 10aeaf247;  */

void FUN_10aeaf238(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d5310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126de6a0,PTR_s_namespaceDataFromInternalNamespa_112612ed8,param_2);
  return;
}



/* Entry: 10aeaf248; end: 10aeaf257; -[SCMixerScheduledNamespaceManager feedsObservableWithFeedDataProvider:] */

void FUN_10aeaf248(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa3a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_feedDataObservableForGroupId__1125c6828,*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10aeaf258; end: 10aeaf267; -[SCMixerScheduledNamespaceManager cachedFeedDataWithProvider:] */

void FUN_10aeaf258(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa39d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_feedDataForGroupId__1125c6818,*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10aeaf268; end: 10aeaf27f; +[SCMixerScheduledNamespaceManager _namespaceIdsFromNamespaces:] */

void FUN_10aeaf268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_compactMap__1125ae648,&PTR___NSConcreteGlobalBlock_110c8ec88);
  return;
}



/* Entry: 10aeaf280; end: 10aeaf28b; -[SCMixerScheduledNamespaceManager .cxx_destruct] */

void FUN_10aeaf280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeaf28c; end: 10aeaf2ff; -[SCLensOnboardingMetadataStoreUpdater initWithLensMetadataStore:] */

undefined1 * FUN_10aeaf28c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701688;
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



/* Entry: 10aeaf300; end: 10aeaf33b; -[SCLensOnboardingMetadataStoreUpdater updateData] */

void FUN_10aeaf300(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2873a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aeaf33c; end: 10aeaf347; -[SCLensOnboardingMetadataStoreUpdater .cxx_destruct] */

void FUN_10aeaf33c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeaf348; end: 10aeaf46b; -[SCPredefinedLensMetadataStore pickLens:] */

void FUN_10aeaf348(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10aeaf46c;
  puStack_50 = &UNK_110ae0b58;
  uStack_48 = param_3;
  _objc_retain(param_3);
  puVar1 = puVar3;
  func_0x00010bfece40(puVar3,param_2,&puStack_68);
  if (puVar1 != (undefined *)0x7fffffffffffffff) {
    func_0x00010c12d3c0(puVar3,param_2,puVar1);
  }
  func_0x00010c066b00(puVar3,param_2,param_3,0);
  func_0x00010c2873a0(param_1,param_2,puVar3);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10aeaf46c; end: 10aeaf4db;  */

undefined8 FUN_10aeaf46c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 10aeaf4dc; end: 10aeaf543; -[SCPredefinedLensMetadataStore cleanupPickedLenses] */

void FUN_10aeaf4dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c2873a0(param_1,param_2,PTR____NSArray0__struct_11034ab48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10aeaf544; end: 10aeaf56b;  */

void FUN_10aeaf544(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10aeaf56c; end: 10aeaf667; -[SCPredefinedLensMetadataStore cleanupPickedLensWithIdentifier:] */

bool FUN_10aeaf56c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c098240(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf51e00();
  _objc_release(lVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10aeaf668;
  puStack_50 = &UNK_110857a38;
  uStack_48 = param_3;
  _objc_retain(param_3);
  lVar1 = lVar2;
  func_0x00010bfaea20(lVar2,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf529e0();
  lVar4 = lVar2;
  func_0x00010bf529e0(lVar2);
  func_0x00010c2873a0(param_1,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(lVar2);
  return lVar3 != lVar4;
}



/* Entry: 10aeaf668; end: 10aeaf6af;  */

uint FUN_10aeaf668(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10aeaf6b0; end: 10aeaf783; -[SCPredefinedLensMetadataStore cleanupPickedLensesWithIdentifiers:] */

void FUN_10aeaf6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c098240(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10aeaf784;
  puStack_40 = &UNK_110857a38;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = uVar2;
  func_0x00010bfaea20(uVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2873a0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10aeaf784; end: 10aeaf7cf;  */

uint FUN_10aeaf784(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10aeaf7d0; end: 10aeaf87f; -[SCPredefinedLensMetadataStore containsLensWithIdentifier:] */

undefined8 FUN_10aeaf7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010bf51e00();
  func_0x00010c098240(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10aeaf880;
  puStack_40 = &UNK_110857a38;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf04920(param_1,param_2,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10aeaf880; end: 10aeaf8c7;  */

undefined8 FUN_10aeaf880(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10aeaf8c8; end: 10aeaf977; -[SCPredefinedLensMetadataStore initWithLensesObservable:announcerPerformer:] */

undefined1 *
FUN_10aeaf8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701690;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bcc50;
    _objc_alloc();
    func_0x00010bff31c0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    func_0x00010beadb80(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aeaf978; end: 10aeafa27; -[SCPredefinedLensMetadataStore initWithLensesMetadataObservable:announcerPerformer:] */

undefined1 *
FUN_10aeaf978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701690;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bcc50;
    _objc_alloc();
    func_0x00010bff31c0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    func_0x00010beadb60(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aeafa28; end: 10aeafaff; -[SCPredefinedLensMetadataStore _setupLensesMetadataObservable:] */

void FUN_10aeafa28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10aeafb00; end: 10aeafb83;  */

void FUN_10aeafb00(long param_1,undefined8 param_2)

{
  func_0x00010c0b8620(param_2,param_2,&PTR___NSConcreteGlobalBlock_110c8ecc8,0);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2873a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10aeafb84; end: 10aeafc5b; -[SCPredefinedLensMetadataStore _setupLensesObservable:] */

void FUN_10aeafb84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10aeafc5c; end: 10aeafca3;  */

void FUN_10aeafc5c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2873a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10aeafca4; end: 10aeafcbb; -[SCPredefinedLensMetadataStore updateLenses:] */

void FUN_10aeafca4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2873b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_updateLenses__11267f710,puVar1);
  return;
}


