/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10629addc; end: 10629ae9f; -[SCContextSpotlightSubscriptionSessionProvider initWithSnapchatterServices:userSession:subscriptionStore:] */

undefined1 *
FUN_10629addc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f0b10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
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



/* Entry: 10629aea0; end: 10629b00b; -[SCContextSpotlightSubscriptionSessionProvider sessionForParams:logger:] */

void FUN_10629aea0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10629b00c;
  uStack_60 = 0x10629b01c;
  uStack_58 = 0;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(param_4);
    _objc_retain(param_4);
    func_0x00010c0c0040(param_3);
    uVar1 = puStack_78[5];
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_release(param_4);
  }
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10629b00c; end: 10629b023;  */

void FUN_10629b00c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10629b024; end: 10629b14f;  */

void FUN_10629b024(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    puVar4 = PTR_PTR_1126c94c8;
    _objc_alloc(PTR_PTR_1126c94c8);
    func_0x00010c049060();
    puVar5 = PTR_PTR_1126c94d0;
    _objc_alloc();
    func_0x00010c01dfe0();
    lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar5;
    _objc_release(uVar6);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10629b150; end: 10629b197;  */

void FUN_10629b150(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bec8940(uVar1,param_2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10629b198; end: 10629b2db; -[SCContextSpotlightSubscriptionSessionProvider _subscriptionSessionFromPublisherId:logger:] */

void FUN_10629b198(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db3bb8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c0720c0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (((ulong)puVar4 & 1) == 0) {
    puVar5 = PTR_PTR_1126b64a8;
    _objc_alloc(PTR_PTR_1126b64a8);
    func_0x00010c010060();
    puVar4 = PTR_PTR_1126c94d8;
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar7);
    _objc_alloc(puVar4);
    func_0x00010c04f1c0();
    _objc_release(uVar7);
    puVar6 = PTR_PTR_1126c94d0;
    _objc_alloc(PTR_PTR_1126c94d0);
    func_0x00010c01dfe0();
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10629b2dc; end: 10629b313; -[SCContextSpotlightSubscriptionSessionProvider .cxx_destruct] */

void FUN_10629b2dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10629b314; end: 10629b3ab;  */

void FUN_10629b314(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  _objc_retain();
  func_0x00010c0b6ba0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e0e80(param_1,param_2,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110919ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10629b3ac; end: 10629ba73;  */

void FUN_10629b3ac(undefined8 param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_2);
  ppuVar7 = param_2;
  func_0x00010bf529e0();
  if (ppuVar7 == (undefined **)0x2) {
    ppuVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c93c8;
    _objc_opt_class(PTR_PTR_1126c93c8);
    ppuVar9 = ppuVar1;
    _objc_opt_isKindOfClass(ppuVar1,puVar2);
    ppuVar7 = ppuVar1;
    if (((ulong)ppuVar9 & 1) == 0) {
      ppuVar7 = (undefined **)0x0;
    }
    _objc_retain(ppuVar7);
    _objc_release(ppuVar1);
  }
  else {
    ppuVar7 = (undefined **)0x0;
  }
  ppuVar9 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c93c0;
  _objc_opt_class(PTR_PTR_1126c93c0);
  ppuVar8 = ppuVar9;
  _objc_opt_isKindOfClass(ppuVar9,puVar2);
  ppuVar1 = ppuVar9;
  if (((ulong)ppuVar8 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar9);
  if (ppuVar7 == (undefined **)0x0) {
    ppuVar9 = (undefined **)0x0;
    goto LAB_10629b7f8;
  }
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar7);
  ppuVar9 = ppuVar7;
  func_0x00010bf0eac0();
  if ((int)ppuVar9 == 6) {
    ppuVar8 = ppuVar7;
    func_0x00010bf0ea60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    func_0x00010bfd3a00();
    if ((int)ppuVar9 == 0) {
      ppuVar9 = (undefined **)0x0;
    }
    else {
      ppuVar3 = ppuVar8;
      func_0x00010beedca0(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar3;
      func_0x00010629b830();
      _objc_retainAutoreleasedReturnValue();
LAB_10629b7d8:
      _objc_release(ppuVar3);
    }
    _objc_release(ppuVar8);
  }
  else {
    ppuVar9 = ppuVar7;
    func_0x00010bf0eac0();
    if ((int)ppuVar9 != 0) {
      ppuVar9 = ppuVar7;
      func_0x00010bf0ea40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar9;
      func_0x00010bfd3a00();
      _objc_release(ppuVar9);
      ppuVar3 = ppuVar7;
      func_0x00010bf0ea40();
      _objc_retainAutoreleasedReturnValue();
      if ((int)ppuVar8 == 0) {
        ppuVar9 = ppuVar3;
        func_0x00010c290fa0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
        ppuVar8 = ppuVar9;
        func_0x00010bfdc440();
        if ((int)ppuVar8 == 0) {
          ppuVar8 = (undefined **)0x0;
        }
        else {
          ppuVar8 = ppuVar9;
          func_0x00010c2427c0();
          _objc_retainAutoreleasedReturnValue();
        }
        ppuVar3 = ppuVar8;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar3;
        func_0x00010c08fa60();
        if (ppuVar4 == (undefined **)0x0) {
          ppuVar4 = ppuVar9;
          func_0x00010bf25140();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          ppuVar4 = ppuVar8;
          func_0x00010bfe5ea0();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(ppuVar3);
        _objc_release(ppuVar8);
        _objc_release(ppuVar9);
        ppuVar9 = ppuVar4;
        func_0x00010c08fa60();
        ppuVar8 = ppuVar4;
        if (ppuVar9 == (undefined **)0x0) {
          ppuVar9 = ppuVar1;
          func_0x00010c160280(ppuVar1);
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar9;
          func_0x00010c290fa0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar3;
          func_0x00010bf25140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar4);
          _objc_release(ppuVar3);
          _objc_release(ppuVar9);
        }
        ppuVar9 = ppuVar7;
        func_0x00010bf0ea40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar9;
        func_0x00010c290fa0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar3;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
        _objc_release(ppuVar9);
        ppuVar9 = ppuVar4;
        func_0x00010c08fa60();
        ppuVar3 = ppuVar4;
        if (ppuVar9 == (undefined **)0x0) {
          ppuVar9 = ppuVar1;
          func_0x00010c160280(ppuVar1);
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar9;
          func_0x00010c290fa0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar5;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar6;
          func_0x000108437e88();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar4);
          _objc_release(ppuVar6);
          _objc_release(ppuVar5);
          _objc_release(ppuVar9);
        }
        ppuVar9 = (undefined **)PTR_PTR_1126c94e0;
        _objc_alloc(PTR_PTR_1126c94e0);
        ppuVar4 = ppuVar1;
        func_0x00010c160280(ppuVar1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar4;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff9d60(ppuVar9);
      }
      else {
        ppuVar4 = ppuVar3;
        func_0x00010beedca0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar7;
        func_0x00010bf0ea40(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar5;
        func_0x00010c290fa0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar8;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar4;
        func_0x00010629b830(ppuVar4,ppuVar1,ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar6);
        _objc_release(ppuVar8);
        ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      goto LAB_10629b7d8;
    }
    ppuVar9 = (undefined **)0x0;
  }
  _objc_release(ppuVar7);
  _objc_release(ppuVar1);
LAB_10629b7f8:
  _objc_release(ppuVar1);
  _objc_release(ppuVar7);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return;
}



/* Entry: 10629ba74; end: 10629c897; -[SCContextSpotlightEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10629ba74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
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
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  undefined8 uVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  long lVar93;
  long lVar94;
  undefined8 uStack_1a8;
  undefined8 uStack_170;
  undefined8 uStack_148;
  undefined8 uStack_140;
  
  if (param_1 == 0) {
    lVar90 = 0;
  }
  else {
    lVar90 = param_1 + _DAT_112744a20;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar90;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar90);
  if (param_1 == 0) {
    lVar90 = 0;
  }
  else {
    lVar90 = param_1 + _DAT_112744a40;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar90;
  func_0x00010bfab9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar90);
  puVar4 = PTR_PTR_1126c94e8;
  _objc_alloc();
  lVar90 = param_1;
  FUN_10629c898(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010629c8bc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar93 = 0;
  }
  else {
    lVar93 = param_1 + _DAT_112744a84;
    _objc_loadWeakRetained(lVar93);
  }
  lVar6 = lVar93;
  func_0x00010c2609c0(lVar93);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049580(puVar4,param_2,lVar90,lVar5,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar93);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar90);
  puVar8 = PTR_PTR_1126c94f0;
  _objc_alloc();
  lVar90 = param_1;
  func_0x00010629c8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar90;
  func_0x00010c0f3900();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010629c8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar93 = lVar5;
  func_0x00010c098cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010629c8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c069720();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010629c8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010beee580();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010629c8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar67 = 0;
  }
  else {
    lVar67 = param_1 + _DAT_112744a78;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar67;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010629c8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c1168a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar68 = 0;
  }
  else {
    lVar68 = param_1 + _DAT_112744a34;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar68;
  func_0x00010c08d300();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar69 = 0;
  }
  else {
    lVar69 = param_1 + _DAT_112744a0c;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar69;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010629c904();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c0c57a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar70 = 0;
  }
  else {
    lVar70 = param_1 + _DAT_112744a38;
    _objc_loadWeakRetained();
  }
  lVar20 = lVar70;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar71 = 0;
  }
  else {
    lVar71 = param_1 + _DAT_112744a10;
    _objc_loadWeakRetained();
  }
  lVar21 = lVar71;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar72 = 0;
  }
  else {
    lVar72 = param_1 + _DAT_112744a3c;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar72;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010629c8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c0ea480();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar73 = 0;
  }
  else {
    lVar73 = param_1 + _DAT_112744a50;
    _objc_loadWeakRetained();
  }
  lVar25 = lVar73;
  func_0x00010c131960();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1;
  func_0x00010629c904();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x00010bf9c660();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar74 = 0;
  }
  else {
    lVar74 = param_1 + _DAT_112744a08;
    _objc_loadWeakRetained();
  }
  lVar29 = lVar74;
  func_0x00010c2779e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar75 = 0;
  }
  else {
    lVar75 = param_1 + _DAT_112744a48;
    _objc_loadWeakRetained();
  }
  lVar30 = lVar75;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar76 = 0;
  }
  else {
    lVar76 = param_1 + _DAT_112744a58;
    _objc_loadWeakRetained();
  }
  lVar31 = lVar76;
  func_0x00010c264f60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar77 = 0;
  }
  else {
    lVar77 = param_1 + _DAT_112744a4c;
    _objc_loadWeakRetained();
  }
  lVar32 = lVar77;
  func_0x00010c26a520();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar78 = 0;
  }
  else {
    lVar78 = param_1 + _DAT_112744a54;
    _objc_loadWeakRetained();
  }
  lVar33 = lVar78;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar33;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1;
  func_0x00010629c928();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar35;
  func_0x00010bfe7720();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar79 = 0;
  }
  else {
    lVar79 = param_1 + _DAT_112744a60;
    _objc_loadWeakRetained();
  }
  lVar37 = lVar79;
  func_0x00010c084e20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar91 = 0;
  }
  else {
    uVar91 = *(undefined8 *)(param_1 + _DAT_112744a8c);
  }
  _objc_retain(uVar91);
  uVar38 = uVar91;
  func_0x00010c071800();
  if ((int)uVar38 == 0) {
    uStack_1a8 = 0;
  }
  else {
    if (param_1 == 0) {
      uStack_1a8 = 0;
    }
    else {
      uStack_1a8 = *(undefined8 *)(param_1 + _DAT_112744a8c);
    }
    _objc_retain();
  }
  if (param_1 == 0) {
    uStack_170 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    lVar80 = 0;
  }
  else {
    uStack_140 = param_1 + _DAT_112744a90;
    _objc_loadWeakRetained();
    uStack_148 = param_1 + _DAT_112744a18;
    _objc_loadWeakRetained();
    uStack_170 = param_1 + _DAT_112744a1c;
    _objc_loadWeakRetained();
    lVar80 = param_1 + _DAT_112744a64;
    _objc_loadWeakRetained();
  }
  lVar39 = lVar80;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1;
  FUN_10629c898();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = lVar40;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1;
  FUN_10629c898();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = lVar42;
  func_0x00010c244da0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar81 = 0;
  }
  else {
    lVar81 = param_1 + _DAT_112744a2c;
    _objc_loadWeakRetained();
  }
  lVar44 = lVar81;
  func_0x00010bfce9a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar82 = 0;
  }
  else {
    lVar82 = param_1 + _DAT_112744a68;
    _objc_loadWeakRetained();
  }
  lVar45 = lVar82;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar83 = 0;
  }
  else {
    lVar83 = param_1 + _DAT_112744a24;
    _objc_loadWeakRetained();
  }
  lVar46 = lVar83;
  func_0x00010bf4e6e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar92 = 0;
  }
  else {
    uVar92 = *(undefined8 *)(param_1 + _DAT_112744a94);
  }
  _objc_retain(uVar92);
  lVar47 = param_1;
  func_0x00010629c8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = lVar47;
  func_0x00010c0eb8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1;
  func_0x00010c2589e0();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = lVar49;
  func_0x00010c12a480();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1;
  func_0x00010629c8bc();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = lVar51;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = lVar52;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1;
  func_0x00010629c928();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = lVar54;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = param_1;
  func_0x00010c13b2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = lVar56;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = param_1;
  func_0x00010629c8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = lVar58;
  func_0x00010c0eb100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar84 = 0;
  }
  else {
    lVar84 = param_1 + _DAT_1127449fc;
    _objc_loadWeakRetained();
  }
  lVar60 = lVar84;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar85 = 0;
  }
  else {
    lVar85 = param_1 + _DAT_112744a70;
    _objc_loadWeakRetained();
  }
  lVar61 = lVar85;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar86 = 0;
  }
  else {
    lVar86 = param_1 + _DAT_112744a74;
    _objc_loadWeakRetained();
  }
  lVar62 = lVar86;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar87 = 0;
  }
  else {
    lVar87 = param_1 + _DAT_112744a44;
    _objc_loadWeakRetained();
  }
  lVar63 = lVar87;
  func_0x00010bfe0ca0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar88 = 0;
  }
  else {
    lVar88 = param_1 + _DAT_112744a7c;
    _objc_loadWeakRetained();
  }
  lVar64 = lVar88;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  lVar65 = param_1;
  FUN_10629c898();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar89 = 0;
  }
  else {
    lVar89 = param_1 + _DAT_112744a80;
    _objc_loadWeakRetained();
  }
  lVar66 = lVar89;
  func_0x00010c15a920();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar94 = 0;
  }
  else {
    lVar94 = param_1 + _DAT_112744a88;
    _objc_loadWeakRetained();
  }
  func_0x00010c033860(puVar8,param_2,lVar2,lVar93,lVar3,lVar7,lVar10,lVar12,lVar13,lVar15,lVar16,
                      puVar4,lVar17,lVar19,lVar20,lVar1,lVar21,lVar22,lVar24,lVar26,lVar28,lVar29,
                      lVar30,lVar31,lVar32,lVar34,lVar36,lVar37,uStack_1a8,uStack_140,uStack_148,
                      uStack_170,lVar39,lVar41,lVar43,lVar44,lVar45,lVar46,uVar92,lVar48,lVar50,
                      lVar53,lVar55,lVar57,lVar59,lVar60,lVar61,lVar62,lVar63,lVar64,lVar65,lVar66,
                      lVar94);
  _objc_release(uVar92);
  _objc_release(lVar94);
  _objc_release(lVar66);
  _objc_release(lVar89);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(lVar88);
  _objc_release(lVar63);
  _objc_release(lVar87);
  _objc_release(lVar62);
  _objc_release(lVar86);
  _objc_release(lVar61);
  _objc_release(lVar85);
  _objc_release(lVar60);
  _objc_release(lVar84);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar83);
  _objc_release(lVar45);
  _objc_release(lVar82);
  _objc_release(lVar44);
  _objc_release(lVar81);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar80);
  _objc_release(uStack_170);
  _objc_release(uStack_148);
  _objc_release(uStack_140);
  if ((int)uVar38 != 0) {
    _objc_release(uStack_1a8);
  }
  _objc_release(uVar91);
  _objc_release(lVar37);
  _objc_release(lVar79);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar78);
  _objc_release(lVar32);
  _objc_release(lVar77);
  _objc_release(lVar31);
  _objc_release(lVar76);
  _objc_release(lVar30);
  _objc_release(lVar75);
  _objc_release(lVar29);
  _objc_release(lVar74);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar73);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar72);
  _objc_release(lVar21);
  _objc_release(lVar71);
  _objc_release(lVar20);
  _objc_release(lVar70);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar69);
  _objc_release(lVar16);
  _objc_release(lVar68);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar67);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar93);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar90);
  func_0x00010629c8e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar90 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar90);
  _objc_release(param_1);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10629c898; end: 10629c94b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10629c898(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112744a28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10629c94c; end: 10629c9d7; -[SCContextSpotlightEntryPoint end] */

void FUN_10629c94c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010629c8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126f0b18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10629c9d8; end: 10629c9db;  */

void FUN_10629c9d8(void)

{
  return;
}



/* Entry: 10629c9dc; end: 10629c9fb; -[SCContextSpotlightEntryPoint storiesPlaybackServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10629c9dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112744a00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10629c9fc; end: 10629ca0f; -[SCContextSpotlightEntryPoint setStoriesPlaybackServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10629c9fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112744a00,param_3);
  return;
}



/* Entry: 10629ca10; end: 10629ca2f; -[SCContextSpotlightEntryPoint resourceDownloaderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10629ca10(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112744a6c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10629ca30; end: 10629ca43; -[SCContextSpotlightEntryPoint setResourceDownloaderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10629ca30(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112744a6c,param_3);
  return;
}



/* Entry: 10629ca44; end: 10629cc3f; -[SCContextSpotlightEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10629ca44(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112744a94,0);
  _objc_destroyWeak(param_1 + _DAT_112744a90);
  _objc_storeStrong(param_1 + _DAT_112744a8c,0);
  _objc_destroyWeak(param_1 + _DAT_112744a88);
  _objc_destroyWeak(param_1 + _DAT_112744a84);
  _objc_destroyWeak(param_1 + _DAT_112744a80);
  _objc_destroyWeak(param_1 + _DAT_112744a7c);
  _objc_destroyWeak(param_1 + _DAT_112744a78);
  _objc_destroyWeak(param_1 + _DAT_112744a74);
  _objc_destroyWeak(param_1 + _DAT_112744a70);
  _objc_destroyWeak(param_1 + _DAT_112744a6c);
  _objc_destroyWeak(param_1 + _DAT_112744a68);
  _objc_destroyWeak(param_1 + _DAT_112744a64);
  _objc_destroyWeak(param_1 + _DAT_112744a60);
  _objc_destroyWeak(param_1 + _DAT_112744a5c);
  _objc_destroyWeak(param_1 + _DAT_112744a58);
  _objc_destroyWeak(param_1 + _DAT_112744a54);
  _objc_destroyWeak(param_1 + _DAT_112744a50);
  _objc_destroyWeak(param_1 + _DAT_112744a4c);
  _objc_destroyWeak(param_1 + _DAT_112744a48);
  _objc_destroyWeak(param_1 + _DAT_112744a44);
  _objc_destroyWeak(param_1 + _DAT_112744a40);
  _objc_destroyWeak(param_1 + _DAT_112744a3c);
  _objc_destroyWeak(param_1 + _DAT_112744a38);
  _objc_destroyWeak(param_1 + _DAT_112744a34);
  _objc_destroyWeak(param_1 + _DAT_112744a30);
  _objc_destroyWeak(param_1 + _DAT_112744a2c);
  _objc_destroyWeak(param_1 + _DAT_112744a28);
  _objc_destroyWeak(param_1 + _DAT_112744a24);
  _objc_destroyWeak(param_1 + _DAT_112744a20);
  _objc_destroyWeak(param_1 + _DAT_112744a1c);
  _objc_destroyWeak(param_1 + _DAT_112744a18);
  _objc_destroyWeak(param_1 + _DAT_112744a14);
  _objc_destroyWeak(param_1 + _DAT_112744a10);
  _objc_destroyWeak(param_1 + _DAT_112744a0c);
  _objc_destroyWeak(param_1 + _DAT_112744a08);
  _objc_destroyWeak(param_1 + _DAT_112744a04);
  _objc_destroyWeak(param_1 + _DAT_112744a00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127449fc);
  return;
}



/* Entry: 10629cc40; end: 10629cd67; +[SCContextSpotlightInFeedSurveyImpressionCaps capsFromStoriesConfig:] */

void FUN_10629cc40(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b12d0;
  if (param_4 != 0) {
    _objc_retain(param_4);
    func_0x00010bfeb4c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c067e20(param_4,param_3,puVar1);
    *param_1 = lVar2;
    puVar3 = PTR_PTR_1126b12d0;
    func_0x00010bfeb540(PTR_PTR_1126b12d0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c067e20(param_4,param_3,puVar3);
    param_1[1] = lVar2;
    puVar4 = PTR_PTR_1126b12d0;
    func_0x00010bfeb500(PTR_PTR_1126b12d0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c067e20(param_4,param_3,puVar4);
    param_1[2] = lVar2;
    puVar5 = PTR_PTR_1126b12d0;
    func_0x00010bfeb4e0(PTR_PTR_1126b12d0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c067e20(param_4,param_3,puVar5);
    _objc_release(param_4);
    param_1[3] = (long)(double)lVar2;
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10629cd68; end: 10629cdf3; +[SCContextSpotlightInFeedSurveyImpressionCaps _storedTimestampsForPreferences:] */

void FUN_10629cd68(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e476d8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = param_3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(param_3);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10629cdf4; end: 10629cf63; +[SCContextSpotlightInFeedSurveyImpressionCaps _countOfTimestamps:after:] */

undefined1 * FUN_10629cdf4(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  puVar6 = &uStack_140;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  dVar13 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar7 = auStack_f8;
  lVar2 = param_4;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    puVar8 = (undefined1 *)0x0;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    lVar11 = *plStack_130;
    do {
      lVar12 = 0;
      do {
        dVar14 = dVar13;
        if (*plStack_130 != lVar11) {
          _objc_enumerationMutation(param_4);
          dVar14 = dVar13;
        }
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar10 = *(ulong *)(lStack_138 + lVar12 * 8);
        _objc_retain(uVar10);
        _objc_opt_class(puVar3);
        uVar4 = uVar10;
        _objc_opt_isKindOfClass(uVar10,puVar3);
        uVar1 = uVar10;
        if ((uVar4 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar10);
        func_0x00010bf885a0(uVar1);
        dVar13 = dVar14;
        _objc_release(uVar1);
        if (param_1 < dVar14) {
          puVar8 = puVar8 + 1;
        }
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      puVar7 = auStack_f8;
      lVar2 = param_4;
      puVar6 = &uStack_140;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    if ((*(long *)(puVar7 + 0x10) < 1) || (dVar14 = *(double *)(puVar7 + 0x18), dVar14 <= 0.0)) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      puVar9 = (undefined1 *)puVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar5 = puVar9;
      _objc_opt_isKindOfClass(puVar9,puVar3);
      puVar8 = puVar9;
      if (((ulong)puVar5 & 1) == 0) {
        puVar8 = (undefined1 *)0x0;
      }
      _objc_retain(puVar8);
      _objc_release(puVar9);
      if (puVar8 == (undefined1 *)0x0) {
        puVar9 = (undefined1 *)0x0;
      }
      else {
        func_0x00010bf885a0(puVar9);
        puVar9 = puVar8;
        if (dVar13 < dVar14 + *(double *)(puVar7 + 0x18)) {
          puVar9 = (undefined1 *)0x0;
        }
        _objc_retain(puVar9);
      }
      _objc_release(puVar8);
    }
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  return puVar8;
}



/* Entry: 10629cf64; end: 10629d04f; +[SCContextSpotlightInFeedSurveyImpressionCaps _servedCapHitWithPreferences:nowInterval:caps:] */

void FUN_10629cf64(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  
  _objc_retain(param_4);
  if ((*(long *)(param_5 + 0x10) < 1) || (dVar5 = *(double *)(param_5 + 0x18), dVar5 <= 0.0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    if (uVar1 == 0) {
      uVar4 = 0;
    }
    else {
      func_0x00010bf885a0(uVar4);
      uVar4 = uVar1;
      if (param_1 < dVar5 + *(double *)(param_5 + 0x18)) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10629d050; end: 10629d22b; +[SCContextSpotlightInFeedSurveyImpressionCaps _isFatigueBlockingWithPreferences:nowInterval:timestamps:caps:] */

bool FUN_10629d050(double param_1,ulong param_2,undefined8 param_3,ulong param_4,long param_5,
                  long param_6)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_6 + 0x10) < 1) {
    bVar2 = false;
  }
  else {
    dVar8 = *(double *)(param_6 + 0x18);
    if (dVar8 <= 0.0) {
      func_0x00010bde9f60(param_1 + -2592000.0,param_2);
      bVar2 = *(ulong *)(param_6 + 0x10) <= param_2;
    }
    else {
      uVar3 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      uVar1 = uVar3;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar3);
      if (uVar1 == 0) {
        uVar5 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar6 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar4);
        uVar3 = uVar5;
        if ((uVar6 & 1) == 0) {
          uVar3 = 0;
        }
        _objc_retain(uVar3);
        _objc_release(uVar5);
        uVar5 = uVar3;
        func_0x00010c2827c0();
        _objc_release(uVar3);
        if (uVar5 < *(ulong *)(param_6 + 0x10)) {
          bVar2 = false;
        }
        else {
          lVar7 = param_5;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          if (lVar7 == 0) {
            bVar2 = false;
          }
          else {
            func_0x00010bf885a0(lVar7);
            bVar2 = param_1 < dVar8 + *(double *)(param_6 + 0x18);
          }
          _objc_release(lVar7);
        }
      }
      else {
        func_0x00010bf885a0(uVar3);
        bVar2 = param_1 < dVar8 + *(double *)(param_6 + 0x18);
      }
      _objc_release(uVar1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return bVar2;
}



/* Entry: 10629d22c; end: 10629d393; +[SCContextSpotlightInFeedSurveyImpressionCaps canShowSurveyWithPreferences:now:caps:] */

uint FUN_10629d22c(double param_1,ulong param_2,undefined8 param_3,long param_4,long param_5,
                  ulong *param_6)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  _objc_retain(param_4);
  uVar3 = 1;
  if ((param_4 == 0) || (param_5 == 0)) goto LAB_10629d36c;
  func_0x00010c26f320(param_5);
  uVar1 = param_2;
  func_0x00010bec4300(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = param_6[1];
  uStack_70 = *param_6;
  uStack_58 = param_6[3];
  uStack_60 = param_6[2];
  uVar2 = param_2;
  dVar4 = param_1;
  func_0x00010bea1500(param_2,param_3,param_4,&uStack_70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar2);
  if ((long)*param_6 < 1) {
LAB_10629d300:
    if (0 < (long)param_6[1]) {
      if (dVar4 <= param_1 + -604800.0) {
        dVar4 = param_1 + -604800.0;
      }
      uVar2 = param_2;
      func_0x00010bde9f60(dVar4,param_2,param_3,uVar1);
      if (param_6[1] <= uVar2) goto LAB_10629d360;
    }
    uStack_68 = param_6[1];
    uStack_70 = *param_6;
    uStack_58 = param_6[3];
    uStack_60 = param_6[2];
    func_0x00010be405a0(param_1,param_2,param_3,param_4,uVar1,&uStack_70);
    uVar3 = (uint)param_2 ^ 1;
  }
  else {
    dVar5 = dVar4;
    if (dVar4 <= param_1 + -86400.0) {
      dVar5 = param_1 + -86400.0;
    }
    uVar2 = param_2;
    func_0x00010bde9f60(dVar5,param_2,param_3,uVar1);
    if (uVar2 < *param_6) goto LAB_10629d300;
LAB_10629d360:
    uVar3 = 0;
  }
  _objc_release(uVar1);
LAB_10629d36c:
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 10629d394; end: 10629d69f; +[SCContextSpotlightInFeedSurveyImpressionCaps recordSurveyImpressionForPreferences:now:caps:] */

void FUN_10629d394(double param_1,long param_2,undefined8 param_3,ulong param_4,undefined **param_5,
                  ulong param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_4;
  ppuVar9 = param_5;
  _objc_retain(param_4);
  if ((param_4 != 0) && (param_5 != (undefined **)0x0)) {
    func_0x00010c26f320(param_5);
    lVar2 = param_2;
    func_0x00010bea1500(param_1);
    _objc_retainAutoreleasedReturnValue();
    dVar14 = -2592000.0;
    func_0x00010bf885a0();
    if (dVar14 <= param_1 + -2592000.0) {
      dVar14 = param_1 + -2592000.0;
    }
    lVar3 = param_2;
    func_0x00010bec4300();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0();
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    dVar15 = 0.0;
    _objc_retain(lVar3);
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar13 = *(ulong *)(lVar11 * 8);
        _objc_retain(uVar13);
        _objc_opt_class(puVar5);
        uVar6 = uVar13;
        _objc_opt_isKindOfClass(uVar13,puVar5);
        uVar8 = uVar13;
        if ((uVar6 & 1) == 0) {
          uVar8 = 0;
        }
        _objc_retain(uVar8);
        _objc_release(uVar13);
        func_0x00010bf885a0(uVar8);
        if (dVar14 < dVar15) {
          func_0x00010befa120(puVar12);
        }
        _objc_release(uVar8);
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar12);
    _objc_release(puVar5);
    puVar5 = puVar12;
    func_0x00010bf529e0();
    if ((undefined *)0x1f4 < puVar5) {
      func_0x00010bf529e0(puVar12);
      func_0x00010c12d520(puVar12);
    }
    puVar5 = puVar12;
    func_0x00010bf51e00();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar5);
    param_6 = (ulong)(lVar2 != 0);
    func_0x00010bdc97a0(param_1,param_2);
    func_0x00010c1d0640(param_4);
    func_0x00010c1d0640(param_4);
    ppuVar9 = &PTR____CFConstantStringClassReference_110e47e18;
    uVar8 = 0;
    func_0x00010c1d0640(param_4);
    _objc_release(puVar12);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    _objc_retain(uVar8);
    if (((long)ppuVar9[2] < 1) || ((double)ppuVar9[3] <= 0.0)) {
      func_0x00010c1d0640(uVar8);
      func_0x00010c1d0640(uVar8);
    }
    else {
      uVar13 = uVar8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar7 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar12);
      uVar6 = uVar13;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar13);
      if ((param_6 & 1) == 0) {
        uVar13 = uVar6;
        func_0x00010c2827c0();
        puVar12 = (undefined *)(uVar13 + 1);
      }
      else {
        puVar12 = (undefined *)0x1;
      }
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar8);
      _objc_release(puVar5);
      if (puVar12 < ppuVar9[2]) {
        func_0x00010c1d0640(uVar8);
      }
      else {
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar8);
        _objc_release(puVar12);
      }
      _objc_release(uVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar8);
    return;
  }
  return;
}



/* Entry: 10629d6a0; end: 10629d843; +[SCContextSpotlightInFeedSurveyImpressionCaps _advanceFatigueCycleForPreferences:nowInterval:caps:cooldownWasServed:] */

void FUN_10629d6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  if ((*(long *)(param_5 + 0x10) < 1) || (*(double *)(param_5 + 0x18) <= 0.0)) {
    func_0x00010c1d0640(param_4);
    func_0x00010c1d0640(param_4);
  }
  else {
    uVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    if ((param_6 & 1) == 0) {
      uVar4 = uVar1;
      func_0x00010c2827c0();
      uVar4 = uVar4 + 1;
    }
    else {
      uVar4 = 1;
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar2);
    if (uVar4 < *(ulong *)(param_5 + 0x10)) {
      func_0x00010c1d0640(param_4);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      _objc_release(puVar2);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10629d844; end: 10629dc17; -[SCContextSpotlightUpsellTriggerManager initWithActions:operaEventAnnouncer:spotlightParams:userPreferences:storiesConfigProvider:circumstanceEngine:featureSettingsService:isOneTapToShareEnabled:] */

undefined8 *
FUN_10629d844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_78 = PTR_PTR_1126f0b20;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x79) = param_10;
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[3];
    puVar4 = puVar1;
    func_0x00010be6dde0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(uVar2);
    _objc_release(puVar4);
    _objc_initWeak(auStack_88,puVar1);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c0e0e80(param_5);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10629dc18;
    puStack_98 = &UNK_110919310;
    _objc_copyWeak(auStack_90,auStack_88);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0e0e80(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,auStack_88);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10629dc18; end: 10629dca7;  */

void FUN_10629dc18(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedcbc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10629dca8; end: 10629dccf; -[SCContextSpotlightUpsellTriggerManager upsellTriggerObservable] */

void FUN_10629dca8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10629dcd0; end: 10629dcf7; -[SCContextSpotlightUpsellTriggerManager resetUpsellObservable] */

void FUN_10629dcd0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10629dcf8; end: 10629dd1f; -[SCContextSpotlightUpsellTriggerManager focusOnShareButtonObservable] */

void FUN_10629dcf8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10629dd20; end: 10629dd83; -[SCContextSpotlightUpsellTriggerManager setIsShareUpsold:] */

void FUN_10629dd20(long param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(byte *)(param_1 + 0x88) = param_3;
  if ((param_3 & 1) != 0) {
    return;
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x70),param_2,PTR____kCFBooleanFalse_11034ab60);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10629dd84; end: 10629de3f; -[SCContextSpotlightUpsellTriggerManager setDidUpsellQuickShare:] */

void FUN_10629dd84(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f320();
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1824c0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4d100();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1824e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10629de40; end: 10629de83; -[SCContextSpotlightUpsellTriggerManager recordUserShareAttemptOnCurrentStory] */

void FUN_10629de40(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x80),param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10629de84; end: 10629df13; -[SCContextSpotlightUpsellTriggerManager recordUserTriggeredQuickShare] */

void FUN_10629de84(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10629df14; end: 10629df6b; -[SCContextSpotlightUpsellTriggerManager _didUserShareOnCurrentStory] */

undefined8 FUN_10629df14(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010bf4b900(uVar2,param_2,lVar3);
  }
  _objc_release(lVar3);
  return uVar2;
}



/* Entry: 10629df6c; end: 10629dfef; -[SCContextSpotlightUpsellTriggerManager _upsellShareStatusFromSpotlightActionParams:] */

void FUN_10629df6c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (((*(char *)(param_1 + 0x32) == '\x01') && ((*(byte *)(param_1 + 0x31) & 1) == 0)) &&
     ((*(byte *)(param_1 + 0x88) & 1) == 0)) {
    lVar1 = param_3;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010bf1f900();
    *(bool *)(param_1 + 0x30) = lVar1 == 1;
    func_0x00010becfee0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10629dff0; end: 10629e353; -[SCContextSpotlightUpsellTriggerManager _updateParams:] */

void FUN_10629dff0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(param_1 + 0x28) = uVar2;
  _objc_release(uVar7);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9b320();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06b7e0();
  *(char *)(param_1 + 0x31) = (char)uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08bda0();
  *(byte *)(param_1 + 0x32) = 0x22 < uVar2 | (byte)(0x2ee000000 >> (uVar2 & 0x3f)) & 1;
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d2280();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c1581e0();
  *(bool *)(param_1 + 0x50) = 1 < uVar4;
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25b720();
  *(bool *)(param_1 + 0x51) = uVar3 == 0xb;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b12d0;
  func_0x00010c24bd20(PTR_PTR_1126b12d0);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf1f320();
  *(char *)(param_1 + 0x52) = (char)uVar7;
  _objc_release(puVar6);
  _objc_release(uVar5);
  uVar1 = param_3;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29d360();
  *(bool *)(param_1 + 0x7b) = uVar2 == 0x62;
  _objc_release(uVar1);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10629e354;
  uStack_60 = 0x10629e364;
  uStack_58 = 0;
  uVar1 = param_3;
  func_0x00010c160280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa29a0();
  _objc_retainAutoreleasedReturnValue();
  fVar8 = -32.0;
  func_0x00010c0bed40();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b12d0;
  func_0x00010c0e89a0(PTR_PTR_1126b12d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c20(uVar7);
  fVar9 = fVar8;
  _objc_release(puVar6);
  _objc_release(uVar7);
  func_0x00010bfb2c80(puStack_78[5]);
  *(bool *)(param_1 + 0x7a) = fVar8 <= fVar9;
  func_0x00010c1b4480(param_1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10629e354; end: 10629e36b;  */

void FUN_10629e354(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10629e36c; end: 10629e3a3;  */

void FUN_10629e36c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 in_stack_00000010;
  
  _objc_retain(in_stack_00000010);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = in_stack_00000010;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10629e3a4; end: 10629e4c3; -[SCContextSpotlightUpsellTriggerManager _operaRegisteredEvents] */

void FUN_10629e3a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar2 = PTR_PTR_1126b2338;
  func_0x00010c0c6900(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2338;
  func_0x00010c299d40(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c9400;
  func_0x00010c272ac0(PTR_PTR_1126c9400);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c29e820(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2638;
  func_0x00010c13d5c0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10629e4c4; end: 10629e503; -[SCContextSpotlightUpsellTriggerManager _triggerShareButtonPulseUpsell] */

void FUN_10629e4c4(ulong param_1)

{
  ulong uVar1;
  
  if (((*(byte *)(param_1 + 0x88) & 1) == 0) &&
     (uVar1 = param_1, func_0x00010be43b00(), (uVar1 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010becff50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__triggerUpsellWithType__112591978,1);
    return;
  }
  return;
}



/* Entry: 10629e504; end: 10629e59b; -[SCContextSpotlightUpsellTriggerManager _isShareButtonPulseUpsellInCooldown] */

bool FUN_10629e504(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  dVar4 = param_1;
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  return param_1 < dVar4;
}



/* Entry: 10629e59c; end: 10629e64f; -[SCContextSpotlightUpsellTriggerManager _triggerUpsellFromBoost] */

void FUN_10629e59c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((((*(char *)(param_1 + 0x30) == '\x01') && ((*(byte *)(param_1 + 0x78) & 1) == 0)) &&
      (*(char *)(param_1 + 0x32) == '\x01')) && ((*(byte *)(param_1 + 0x31) & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    if ((int)uVar2 != 0) {
      uVar1 = param_1;
      func_0x00010beb6cc0();
      if ((int)uVar1 == 0) {
        uVar1 = param_1;
        func_0x00010be01980();
        if ((uVar1 & 1) != 0) {
          return;
        }
        uVar1 = param_1;
        func_0x00010be43100();
        if (((int)uVar1 == 0) || (uVar1 = param_1, func_0x00010beb6d60(), (int)uVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010becfdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (param_1,PTR_s__triggerShareButtonPulseUpsell_112591920);
          return;
        }
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
      }
                    /* WARNING: Could not recover jumptable at 0x00010becff50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__triggerUpsellWithType__112591978,uVar2);
      return;
    }
  }
  return;
}



/* Entry: 10629e650; end: 10629e6db; -[SCContextSpotlightUpsellTriggerManager _triggerUpsellFromPause] */

void FUN_10629e650(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0720c0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  if (((((int)uVar1 != 0) && (*(char *)(param_1 + 0x7b) == '\x01')) &&
      ((*(byte *)(param_1 + 0x31) & 1) == 0)) &&
     ((((*(byte *)(param_1 + 0x78) & 1) == 0 &&
       (uVar2 = param_1, func_0x00010be01980(), (uVar2 & 1) == 0)) &&
      (uVar2 = param_1, func_0x00010beb6d40(), (int)uVar2 != 0)))) {
    func_0x00010becff40(param_1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010be878f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__recordPauseShareUpsellShown_11257f7d8);
    return;
  }
  return;
}



/* Entry: 10629e6dc; end: 10629e78f; -[SCContextSpotlightUpsellTriggerManager _recordPauseShareUpsellShown] */

void FUN_10629e6dc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2088c0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24b9c0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2088e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10629e790; end: 10629e7ff; -[SCContextSpotlightUpsellTriggerManager _pauseShareUpsellTreatment] */

undefined8 FUN_10629e790(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0e00;
  func_0x00010c24b9e0(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c067e20(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10629e800; end: 10629e96b; -[SCContextSpotlightUpsellTriggerManager _shouldTriggerPauseShareUpsell] */

bool FUN_10629e800(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = param_2;
  func_0x00010be70ee0();
  if (lVar1 == 1) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f320();
    _objc_release(puVar2);
    lVar3 = *(long *)(param_2 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c24b9a0();
    _objc_release(lVar3);
    lVar4 = *(long *)(param_2 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c0e00;
    func_0x00010c24ba00(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c067e20(lVar4,param_3,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar4);
    if ((double)(lVar3 + lVar1) < param_1) {
      uVar5 = *(ulong *)(param_2 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126c0e00;
      func_0x00010c24ba20(PTR_PTR_1126c0e00);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c067e20(uVar5,param_3,puVar2);
      _objc_release(puVar2);
      _objc_release(uVar5);
      if (0 < (long)uVar6) {
        uVar7 = *(ulong *)(param_2 + 0x58);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar7;
        func_0x00010c24b9c0();
        _objc_release(uVar7);
        return uVar5 < uVar6;
      }
      return true;
    }
  }
  return false;
}



/* Entry: 10629e96c; end: 10629e9c7; -[SCContextSpotlightUpsellTriggerManager _triggerUpsellWithType:] */

void FUN_10629e96c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  *(undefined1 *)(param_1 + 0x78) = 1;
  return;
}



/* Entry: 10629e9c8; end: 10629eb5b; -[SCContextSpotlightUpsellTriggerManager incrementShareButtonPulseUpsellCount] */

void FUN_10629e9c8(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_2 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2827c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,lVar3 + 1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar5);
  _objc_release(puVar4);
  if (lVar3 == -1) {
    return;
  }
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 + 259200.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar5);
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10629eb5c; end: 10629ebef; -[SCContextSpotlightUpsellTriggerManager _shouldTriggerQuickShareUpsell] */

ulong FUN_10629eb5c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(char *)(param_2 + 0x52) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f320();
    _objc_release(puVar1);
    uVar3 = param_2;
    func_0x00010be430e0(param_1);
    if ((int)uVar3 != 0) {
      uVar2 = *(ulong *)(param_2 + 0x58);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf4d100();
      _objc_release(uVar2);
      uVar3 = (ulong)(uVar3 < 4);
    }
    return uVar3;
  }
  return 0;
}



/* Entry: 10629ebf0; end: 10629ecff; -[SCContextSpotlightUpsellTriggerManager _isQuickShareUpsellCooldownElapsed:] */

bool FUN_10629ebf0(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  lVar1 = *(long *)(param_2 + 0x40);
  dVar7 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b12d0;
  func_0x00010c11e9c0(PTR_PTR_1126b12d0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c067e20(lVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar4 = *(long *)(param_2 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf4d0e0();
  dVar8 = (double)lVar1;
  _objc_release(lVar4);
  dVar9 = dVar8;
  if (lVar3 == 1) {
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    dVar9 = dVar7;
    if (dVar7 <= dVar8) {
      dVar9 = dVar8;
    }
  }
  return dVar9 + 259200.0 < param_1;
}



/* Entry: 10629ed00; end: 10629ed9f; -[SCContextSpotlightUpsellTriggerManager _shouldTriggerDoubleTapToFavoriteUpsell] */

byte FUN_10629ed00(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  
  if (*(char *)(param_1 + 0x52) == '\x01') {
    uVar1 = *(ulong *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (((uVar3 & 1) == 0) && ((*(byte *)(param_1 + 0x51) & 1) == 0)) {
      bVar4 = *(byte *)(param_1 + 0x50) ^ 1;
    }
    else {
      bVar4 = 0;
    }
  }
  else {
    bVar4 = 0;
  }
  return bVar4 & 1;
}



/* Entry: 10629eda0; end: 10629ee07; -[SCContextSpotlightUpsellTriggerManager _triggerUpsellFromCompleteWatch] */

void FUN_10629eda0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0720c0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  if (((((int)uVar1 != 0) && (*(char *)(param_1 + 0x7b) == '\x01')) &&
      ((*(byte *)(param_1 + 0x31) & 1) == 0)) &&
     (((*(byte *)(param_1 + 0x78) & 1) == 0 && (lVar2 = param_1, func_0x00010bde3500(), lVar2 != 0))
     )) {
                    /* WARNING: Could not recover jumptable at 0x00010becff50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__triggerUpsellWithType__112591978,lVar2);
    return;
  }
  return;
}



/* Entry: 10629ee08; end: 10629ee97; -[SCContextSpotlightUpsellTriggerManager _completeWatchUpsellType] */

undefined8 FUN_10629ee08(ulong param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010be01980();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010be43100(param_1,param_2,2);
    if ((int)uVar2 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
      func_0x000108f4a48c();
      if (iVar1 == 0) {
        uVar2 = param_1;
        func_0x00010beb6d60();
        if ((uVar2 & 1) != 0) {
          return 2;
        }
      }
      else if (((*(byte *)(param_1 + 0x88) & 1) == 0) &&
              (uVar2 = param_1, func_0x00010be43b00(), (uVar2 & 1) == 0)) {
        return 5;
      }
    }
    if ((*(char *)(param_1 + 0x79) == '\x01') && ((*(byte *)(param_1 + 0x7a) & 1) != 0)) {
      return 4;
    }
  }
  return 0;
}



/* Entry: 10629ee98; end: 10629ef0f; -[SCContextSpotlightUpsellTriggerManager _isQuickShareUpsellTriggerEnabled:] */

bool FUN_10629ee98(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b12d0;
  func_0x00010c11e9e0(PTR_PTR_1126b12d0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c067e20(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return (uVar3 & param_3) != 0;
}



/* Entry: 10629ef10; end: 10629f2fb; -[SCContextSpotlightUpsellTriggerManager operaViewDidSendEvent:page:params:] */

void FUN_10629ef10(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2338;
  func_0x00010c0c6900(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    puVar1 = PTR_PTR_1126b2338;
    func_0x00010c299d40(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    if ((int)uVar2 == 0) {
      puVar1 = PTR_PTR_1126c9400;
      func_0x00010c272ac0(PTR_PTR_1126c9400);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar1);
      if ((int)uVar2 == 0) {
        puVar1 = PTR_PTR_1126b2330;
        func_0x00010c29e820(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar1);
        if ((int)uVar2 == 0) {
          puVar1 = PTR_PTR_1126b2638;
          func_0x00010c13d5c0(PTR_PTR_1126b2638);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_3;
          func_0x00010c0720c0();
          _objc_release(puVar1);
          if ((int)uVar2 != 0) {
            func_0x00010c1b4480(param_1);
          }
        }
        else {
          uVar3 = param_4;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          puVar1 = PTR_PTR_1126b2390;
          _objc_opt_class(PTR_PTR_1126b2390);
          uVar5 = uVar4;
          _objc_opt_isKindOfClass(uVar4,puVar1);
          uVar3 = uVar4;
          if ((uVar5 & 1) == 0) {
            uVar3 = 0;
          }
          _objc_retain(uVar3);
          _objc_release(uVar4);
          if (*(long *)(param_1 + 0x28) != 0) {
            uVar4 = uVar3;
            func_0x00010c259cc0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010c0720c0();
            _objc_release(uVar4);
            if ((int)uVar5 != 0) {
              func_0x00010c1b4480(param_1);
            }
          }
          _objc_release(uVar3);
        }
      }
      else {
        puVar1 = PTR_PTR_1126c9408;
        func_0x00010c0fe400(PTR_PTR_1126c9408);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf1f3c0();
        _objc_release(uVar3);
        _objc_release(puVar1);
        if ((uVar4 & 1) == 0) {
          func_0x00010becff20(param_1);
        }
      }
    }
    else {
      func_0x00010becff00(param_1);
    }
  }
  else {
    uVar3 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c067fc0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if (((((uVar5 - 0x49 < 0x1a) && ((1L << (uVar5 - 0x49 & 0x3f) & 0x2020001U) != 0)) ||
         (uVar3 = uVar5 - 0x57 >> 1,
         (uVar3 | uVar5 - 0x57 << 0x3f) < 8 && (1L << (uVar3 & 0x3f) & 0xb1U) != 0)) ||
        ((uVar5 - 0x42 < 0x2a && ((1L << (uVar5 - 0x42 & 0x3f) & 0x3c000100701U) != 0)))) &&
       (((*(byte *)(param_1 + 0x31) & 1) == 0 && ((*(byte *)(param_1 + 0x88) & 1) == 0)))) {
      uVar3 = param_4;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar1 = PTR_PTR_1126b2390;
      _objc_opt_class(PTR_PTR_1126b2390);
      uVar5 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar1);
      uVar3 = uVar4;
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar4);
      uVar4 = uVar3;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      *(ulong *)(param_1 + 0x20) = uVar4;
      _objc_release(uVar2);
      func_0x00010becfee0(param_1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10629f2fc; end: 10629f313; -[SCContextSpotlightUpsellTriggerManager delegate] */

void FUN_10629f2fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10629f314; end: 10629f31f; -[SCContextSpotlightUpsellTriggerManager setDelegate:] */

void FUN_10629f314(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x90,param_3);
  return;
}



/* Entry: 10629f320; end: 10629f327; -[SCContextSpotlightUpsellTriggerManager isShareUpsold] */

undefined1 FUN_10629f320(long param_1)

{
  return *(undefined1 *)(param_1 + 0x88);
}



/* Entry: 10629f328; end: 10629f3e3; -[SCContextSpotlightUpsellTriggerManager .cxx_destruct] */

void FUN_10629f328(long param_1)

{
  _objc_destroyWeak(param_1 + 0x90);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10629f3e4; end: 10629f443; -[SCContextSpotlightViewVisibilityModel initWithViewType:shouldShow:animated:] */

void FUN_10629f3e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f0b28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  return;
}



/* Entry: 10629f444; end: 10629f44b; -[SCContextSpotlightViewVisibilityModel viewType] */

undefined8 FUN_10629f444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10629f44c; end: 10629f453; -[SCContextSpotlightViewVisibilityModel shouldShow] */

undefined1 FUN_10629f44c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10629f454; end: 10629f45b; -[SCContextSpotlightViewVisibilityModel animated] */

undefined1 FUN_10629f454(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10629f45c; end: 10629f80b; -[SCContextSpotlightViewVisibilityManager initWithSpotlightParams:actionParams:userPreferences:storiesConfigProvider:upsellTriggerObservable:] */

undefined8 *
FUN_10629f45c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  _objc_retain(param_7);
  puStack_80 = PTR_PTR_1126f0b30;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0e0e80(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10629f80c;
    puStack_a0 = &UNK_110919310;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0e0e80(param_4);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x10629f854;
    puStack_c8 = &UNK_1109191d0;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_7;
    func_0x00010c0e0e60(param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e8,auStack_90);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10629f80c; end: 10629f8db;  */

void FUN_10629f80c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdffa60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10629f8dc; end: 10629f91b; -[SCContextSpotlightViewVisibilityManager _didReceiveSpotlightParams:] */

void FUN_10629f8dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be94eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__resolveVisibilityWithAnimated_f_112582d48,0,0);
  return;
}



/* Entry: 10629f91c; end: 10629f95b; -[SCContextSpotlightViewVisibilityManager _didReceiveActionParams:] */

void FUN_10629f91c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be94eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__resolveVisibilityWithAnimated_f_112582d48,0,0);
  return;
}



/* Entry: 10629f95c; end: 10629f97b; -[SCContextSpotlightViewVisibilityManager _didReceiveUpsellTrigger:] */

void FUN_10629f95c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 4) {
    *(undefined1 *)(param_1 + 0x38) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be94eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__resolveVisibilityWithAnimated_f_112582d48,1,0);
    return;
  }
  return;
}



/* Entry: 10629f97c; end: 10629f9a3; -[SCContextSpotlightViewVisibilityManager visibilityModelObservable] */

void FUN_10629f97c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10629f9a4; end: 10629f9f7; -[SCContextSpotlightViewVisibilityManager didPerformAction:] */

void FUN_10629f9a4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (lVar1 = param_3, func_0x00010beeed20(), (int)lVar1 == 0x62)) {
    *(undefined1 *)(param_1 + 0x38) = 0;
    func_0x00010be94ea0(param_1,param_2,1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10629f9f8; end: 10629fa17; -[SCContextSpotlightViewVisibilityManager setOneTapToShareRenderable:] */

void FUN_10629f9f8(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x39) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x39) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be94eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__resolveVisibilityWithAnimated_f_112582d48,1,0);
  return;
}



/* Entry: 10629fa18; end: 10629fa37; -[SCContextSpotlightViewVisibilityManager setReplyBarRenderable:] */

void FUN_10629fa18(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x3a) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x3a) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be94eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__resolveVisibilityWithAnimated_f_112582d48,1,0);
  return;
}



/* Entry: 10629fa38; end: 10629fa43; -[SCContextSpotlightViewVisibilityManager refreshVisibilityCommands] */

void FUN_10629fa38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be94eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__resolveVisibilityWithAnimated_f_112582d48,0,1);
  return;
}



/* Entry: 10629fa44; end: 10629fb4b; -[SCContextSpotlightViewVisibilityManager _resolveVisibilityWithAnimated:forceEmitAll:] */

/* WARNING: Possible PIC construction at 0x00010629faec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010629fb1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010629faf0) */
/* WARNING: Removing unreachable block (ram,0x00010629fb20) */

void FUN_10629fa44(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x3a);
  if (((bVar1 & 1) == 0) &&
     (((*(char *)(param_1 + 0x38) != '\x01' || ((*(byte *)(param_1 + 0x39) & 1) == 0)) &&
      (uVar2 = param_1, func_0x00010be44720(param_1,param_2,*(undefined8 *)(param_1 + 0x28)),
      (uVar2 & 1) == 0)))) {
    func_0x00010be42f80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be086d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__emitVisibilityForViewType_shoul_11255fb50,3,bVar1,param_3,param_4);
  return;
}



/* Entry: 10629fb4c; end: 10629fc4b; -[SCContextSpotlightViewVisibilityManager _emitVisibilityForViewType:shouldShow:animated:forceEmitAll:] */

void FUN_10629fb4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  if (((param_6 & 1) != 0) || ((int)param_4 != (int)uVar3)) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar4,puVar1);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126c94f8;
    _objc_alloc(PTR_PTR_1126c94f8);
    func_0x00010c062240();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18),param_2,puVar4);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10629fc4c; end: 10629fc5b; -[SCContextSpotlightViewVisibilityManager _isPrimaryCTAEligible] */

bool FUN_10629fc4c(long param_1)

{
  return *(long *)(param_1 + 0x30) != 0;
}



/* Entry: 10629fc5c; end: 10629ff9f; -[SCContextSpotlightViewVisibilityManager _isSurveyEligibleWithSpotlightParams:] */

undefined * FUN_10629fc5c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 auStack_c8 [32];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c160280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puStack_78 = &uStack_80;
      uStack_80 = 0;
      uStack_70 = 0x3032000000;
      pcStack_68 = FUN_10629ffa0;
      uStack_60 = 0x10629ffb0;
      uStack_58 = 0;
      lVar1 = param_3;
      func_0x00010c160280(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      func_0x00010bfa29a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_10629ffb8;
      puStack_90 = &UNK_11086fcd8;
      puStack_88 = &uStack_80;
      func_0x00010c0bed40();
      _objc_release(lVar7);
      _objc_release(lVar1);
      uVar2 = puStack_78[5];
      if (uVar2 == 0) goto LAB_10629feb0;
      func_0x00010c13ba60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf529e0();
      if (uVar3 < 2) {
        puVar10 = (undefined *)0x0;
LAB_10629ff40:
        _objc_release(uVar2);
      }
      else {
        uVar4 = puStack_78[5];
        func_0x00010c104fa0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        func_0x00010bf529e0();
        if (uVar3 < 2) {
          puVar10 = (undefined *)0x0;
LAB_10629ff38:
          _objc_release(uVar4);
          goto LAB_10629ff40;
        }
        lVar5 = puStack_78[5];
        func_0x00010c13ba60();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar5;
        func_0x00010bf529e0();
        lVar6 = puStack_78[5];
        func_0x00010c104fa0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf529e0();
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(uVar4);
        _objc_release(uVar2);
        if (lVar1 == lVar7) {
          lVar7 = puStack_78[5];
          func_0x00010bf67b20();
          _objc_retainAutoreleasedReturnValue();
          lVar1 = lVar7;
          func_0x00010c08fa60();
          if (lVar1 == 0) {
            _objc_release(lVar7);
          }
          else {
            uVar4 = *(ulong *)(param_1 + 8);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = puStack_78[5];
            func_0x00010bf67b20(uVar8);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010bf1f3c0();
            _objc_release(uVar2);
            _objc_release(uVar8);
            _objc_release(uVar4);
            _objc_release(lVar7);
            if ((uVar3 & 1) != 0) goto LAB_10629feb0;
          }
          uVar2 = *(ulong *)(param_1 + 0x40);
          func_0x00010c269d40(uVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR_PTR_1126c9458;
          uVar4 = *(ulong *)(param_1 + 8);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf2fb60(auStack_c8,PTR_PTR_1126c9458);
          func_0x00010bf2d7e0(puVar10);
          _objc_release(puVar9);
          goto LAB_10629ff38;
        }
LAB_10629feb0:
        puVar10 = (undefined *)0x0;
      }
      __Block_object_dispose(&uStack_80,8);
      _objc_release(uStack_58);
      goto LAB_10629ff5c;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_10629ff5c:
  _objc_release(param_3);
  return puVar10;
}



/* Entry: 10629ffa0; end: 10629ffb7;  */

void FUN_10629ffa0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10629ffb8; end: 10629ffef;  */

void FUN_10629ffb8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 in_stack_00000000;
  
  _objc_retain(in_stack_00000000);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = in_stack_00000000;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10629fff0; end: 1062a005b; -[SCContextSpotlightViewVisibilityManager .cxx_destruct] */

void FUN_10629fff0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 1062a005c; end: 1062a0177; -[SCContextSpotlightAvatarSubscribeButtonParams copyWithZone:] */

undefined8 FUN_1062a005c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  func_0x00010bf00e40();
  func_0x00010bfee200();
  uVar2 = param_1;
  func_0x00010bf5b360(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185bc0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfd6300(param_1);
  func_0x00010c1a5ce0(uVar1,param_2,uVar2);
  uVar2 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf1aae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1706a0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf1c040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171440(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c0e9620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4fc0(uVar1,param_2,param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1062a0178; end: 1062a017f; -[SCContextSpotlightAvatarSubscribeButtonParams creatorDisplayIcon] */

undefined8 FUN_1062a0178(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1062a0180; end: 1062a0187; -[SCContextSpotlightAvatarSubscribeButtonParams setCreatorDisplayIcon:] */

void FUN_1062a0180(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1062a0188; end: 1062a018f; -[SCContextSpotlightAvatarSubscribeButtonParams hasDefaultIcon] */

undefined1 FUN_1062a0188(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1062a0190; end: 1062a0197; -[SCContextSpotlightAvatarSubscribeButtonParams setHasDefaultIcon:] */

void FUN_1062a0190(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1062a0198; end: 1062a019f; -[SCContextSpotlightAvatarSubscribeButtonParams userId] */

undefined8 FUN_1062a0198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1062a01a0; end: 1062a01a7; -[SCContextSpotlightAvatarSubscribeButtonParams setUserId:] */

void FUN_1062a01a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1062a01a8; end: 1062a01af; -[SCContextSpotlightAvatarSubscribeButtonParams bitmojiAvatar] */

undefined8 FUN_1062a01a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1062a01b0; end: 1062a01b7; -[SCContextSpotlightAvatarSubscribeButtonParams setBitmojiAvatar:] */

void FUN_1062a01b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1062a01b8; end: 1062a01bf; -[SCContextSpotlightAvatarSubscribeButtonParams bitmojiSelfie] */

undefined8 FUN_1062a01b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1062a01c0; end: 1062a01c7; -[SCContextSpotlightAvatarSubscribeButtonParams setBitmojiSelfie:] */

void FUN_1062a01c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1062a01c8; end: 1062a01cf; -[SCContextSpotlightAvatarSubscribeButtonParams openPublicProfile] */

undefined8 FUN_1062a01c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1062a01d0; end: 1062a01d7; -[SCContextSpotlightAvatarSubscribeButtonParams setOpenPublicProfile:] */

void FUN_1062a01d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1062a01d8; end: 1062a022b; -[SCContextSpotlightAvatarSubscribeButtonParams .cxx_destruct] */

void FUN_1062a01d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1062a022c; end: 1062a040f; -[SCContextSpotlightHeaderParams copyWithZone:] */

undefined8 FUN_1062a022c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  func_0x00010bf00e40();
  func_0x00010bfee200();
  uVar2 = param_1;
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0520(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aac20(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c2711a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c260dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f6c0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010beedca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161620(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c078f60(param_1);
  func_0x00010c1b2ee0(uVar1,param_2,uVar2);
  uVar2 = param_1;
  func_0x00010c260880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f560(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfe6ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0ea8e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5540(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c129880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea040(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c095b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc500(uVar1,param_2,param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1062a0410; end: 1062a0417; -[SCContextSpotlightHeaderParams imageView] */

undefined8 FUN_1062a0410(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1062a0418; end: 1062a0447; -[SCContextSpotlightHeaderParams setImageView:] */

void FUN_1062a0418(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062a0448; end: 1062a044f; -[SCContextSpotlightHeaderParams logger] */

undefined8 FUN_1062a0448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


