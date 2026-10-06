/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100b79328; end: 100b793e3; -[SCMixerNamespaceService startUpdatingWithParameters:] */

/* WARNING: Possible PIC construction at 0x000100b7937c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b793a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b793c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b793a4) */
/* WARNING: Removing unreachable block (ram,0x000100b79380) */
/* WARNING: Removing unreachable block (ram,0x000100b793cc) */

void FUN_100b79328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c4062c(param_3);
  func_0x000107c61180();
  func_0x000107c3cd3c(param_1,param_2,param_3);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100b793e4; end: 100b79407;  */

void FUN_100b793e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100b79408; end: 100b79497; -[_TtC34AdaptiveLensFetchingImplementation31AdaptiveLensFetchingFactoryImpl createAdaptiveLensDataFetcherAndReturnError:] */

/* WARNING: Removing unreachable block (ram,0x000100b79444) */
/* WARNING: Removing unreachable block (ram,0x000100b79478) */
/* WARNING: Removing unreachable block (ram,0x000100b79448) */

void FUN_100b79408(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_100b7960c();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b79498; end: 100b7949f; -[SCMixerUpdateParameters contextualInfo] */

undefined8 FUN_100b79498(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100b794a0; end: 100b795d7;  */

undefined *
FUN_100b794a0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100b795d8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = param_1;
    (*param_5)();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    FUN_1000285a8(param_6,param_7);
    func_0x000107c6140c(puVar1,puVar4,uVar6,param_6);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 100b795d8; end: 100b7960b;  */

void FUN_100b795d8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100b794a0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 100b7960c; end: 100b79cbb;  */

void FUN_100b7960c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long unaff_x20;
  ulong uVar15;
  code *pcVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  
  uVar17 = *(ulong *)(unaff_x20 + 0x40);
  if (uVar17 >> 0x3e == 0) {
    uVar18 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar18 = uVar17 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar17) {
      uVar18 = uVar17;
    }
    func_0x000107c60480();
  }
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar18 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100b795d8(0,uVar18 & ((long)uVar18 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar12 = puStack_68;
    if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100b79ba8);
      (*pcVar16)();
    }
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    uVar19 = 0;
    do {
      if ((uVar17 & 0xc000000000000001) == 0) {
        uVar15 = *(ulong *)(uVar17 + uVar19 * 8 + 0x20);
        func_0x000107c6157c(uVar15);
      }
      else {
        uVar15 = uVar19;
        func_0x0001019c2438(uVar19,uVar17);
      }
      ppuStack_78 = (undefined **)&UNK_1019c25ec;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_1019c1c1c;
      puStack_80 = &UNK_110425b40;
      ppuVar14 = &puStack_98;
      uStack_70 = uVar15;
      func_0x000107c60bc4(ppuVar14);
      uVar2 = uStack_70;
      func_0x000107c6157c(uVar15);
      func_0x000107c61574(uVar2);
      puVar4 = puVar3;
      func_0x000107c3e4fc();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar14);
      func_0x000107c61574(uVar15);
      uVar15 = *(ulong *)(puVar12 + 0x10);
      puStack_68 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar15) {
        FUN_100b795d8(1 < *(ulong *)(puVar12 + 0x18),uVar15 + 1,1);
      }
      uVar19 = uVar19 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar15 + 1;
      *(undefined **)(puStack_68 + uVar15 * 8 + 0x20) = puVar4;
      puVar12 = puStack_68;
    } while (uVar18 != uVar19);
  }
  FUN_1000d224c(&puStack_98);
  puVar3 = puStack_98;
  if (puStack_98 != (undefined *)0x0) {
    uVar11 = 0x112de6120;
    FUN_1000285a8(0x112de6120,&UNK_10d9b0cc0);
    puVar4 = puVar12;
    func_0x000107c5fc48(puVar12,uVar11);
    func_0x000107c6142c(puVar12);
    puVar12 = puVar3;
    func_0x000107c3d568();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    FUN_1000285a8(0x112de6128,&UNK_10d9b0cc8);
    puVar4 = puVar12;
    FUN_1000bda74();
    uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
    lVar9 = *(long *)(unaff_x20 + 0x68);
    FUN_1000a8868(unaff_x20 + 0x48,uVar5);
    pcVar16 = *(code **)(lVar9 + 8);
    func_0x000107c6157c(puVar4);
    (*pcVar16)(uVar5,lVar9);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
    lVar9 = *(long *)(unaff_x20 + 0x68);
    FUN_1000a8868(unaff_x20 + 0x48,uVar6);
    (**(code **)(lVar9 + 0x10))(uVar6,lVar9);
    puVar7 = (undefined *)0x0;
    FUN_100b7be78();
    puVar8 = puVar7;
    func_0x000107c613fc();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x78);
    uVar18 = *(ulong *)(unaff_x20 + 0x80);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x70);
    ppuStack_78 = &PTR_DAT_110426118;
    lVar9 = 0;
    puStack_98 = puVar8;
    puStack_80 = puVar7;
    FUN_100b7bf50();
    func_0x000107c613fc();
    *(undefined8 *)(lVar9 + 0x90) = 0;
    FUN_1000285a8(0x112de6130,&UNK_10d9b0cd0);
    func_0x000107c613fc();
    func_0x000107c61434(uVar17);
    func_0x000107c61434(uVar18);
    puVar7 = puVar8;
    func_0x000107c6157c();
    FUN_1000c2754();
    *(undefined **)(lVar9 + 0x98) = puVar7;
    uVar11 = 0x112de6138;
    FUN_1000285a8(0x112de6138,&UNK_10d9b0cd8);
    func_0x000107c613fc();
    FUN_1000c2754();
    *(undefined8 *)(lVar9 + 0xa0) = uVar11;
    uVar11 = 0x112de6140;
    FUN_1000285a8(0x112de6140,&UNK_10d9b0ce0);
    func_0x000107c613fc();
    FUN_1000c2754();
    *(undefined8 *)(lVar9 + 0xa8) = uVar11;
    uVar11 = 0x112de6148;
    FUN_1000285a8(0x112de6148,&UNK_10d9b0ce8);
    func_0x000107c613fc();
    FUN_1000c2754();
    *(undefined8 *)(lVar9 + 0xb0) = uVar11;
    lVar10 = 0;
    FUN_100b9c674();
    func_0x000107c613fc();
    FUN_1000285a8(0x112de6150,&UNK_10d9b0cf0);
    func_0x000107c613fc();
    uVar11 = 1;
    FUN_10008747c();
    *(undefined8 *)(lVar10 + 0x10) = uVar11;
    FUN_1000285a8(0x112de6158,&UNK_10d9b0cf8);
    func_0x000107c613fc();
    uVar11 = 1;
    FUN_10008747c();
    *(undefined8 *)(lVar10 + 0x18) = uVar11;
    FUN_1000285a8(0x112de6160,&UNK_10d9b0d00);
    func_0x000107c613fc();
    uVar11 = 1;
    FUN_10008747c();
    *(undefined8 *)(lVar10 + 0x20) = uVar11;
    FUN_1000285a8(0x112de6168,&UNK_10d9b0d08);
    func_0x000107c613fc();
    uVar11 = 1;
    FUN_10008747c();
    *(undefined8 *)(lVar10 + 0x28) = uVar11;
    uVar11 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    FUN_1000c6580();
    *(undefined8 *)(lVar10 + 0x30) = uVar11;
    *(long *)(lVar9 + 0xb8) = lVar10;
    *(undefined8 *)(lVar9 + 0xd0) = 0;
    *(undefined **)(lVar9 + 0x10) = puVar4;
    *(undefined8 *)(lVar9 + 0x18) = uVar5;
    *(undefined8 *)(lVar9 + 0x20) = uVar6;
    FUN_100b9d548(unaff_x20 + 0x18,lVar9 + 0x28);
    *(ulong *)(lVar9 + 0x50) = uVar17;
    FUN_100b9d548(&puStack_98,lVar9 + 0x58);
    *(undefined8 *)(lVar9 + 0x80) = uVar1;
    *(undefined8 *)(lVar9 + 0x88) = uVar13;
    if (uVar18 >> 0x3e == 0) {
      uVar17 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar17 = uVar18 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar18) {
        uVar17 = uVar18;
      }
      func_0x000107c60480();
    }
    if (uVar17 == 0) {
      func_0x000107c6157c(puVar4);
      func_0x000107c6157c(uVar13);
      func_0x000107c6157c(uVar1);
      func_0x000107c6142c(uVar18);
      lVar10 = 0;
      ppuVar14 = (undefined **)0x0;
    }
    else {
      func_0x000107c6157c(puVar4);
      func_0x000107c6157c(uVar13);
      func_0x000107c6157c(uVar1);
      FUN_1000d224c(&puStack_68);
      puVar7 = puStack_68;
      lVar10 = 0;
      func_0x000100b9d69c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar10 + 0x28) = 0;
      func_0x000107c61614(lVar10 + 0x20,0);
      *(ulong *)(lVar10 + 0x10) = uVar18;
      *(undefined **)(lVar10 + 0x18) = puVar7;
      ppuVar14 = &PTR_DAT_110425f00;
    }
    *(long *)(lVar9 + 0xc0) = lVar10;
    *(undefined ***)(lVar9 + 200) = ppuVar14;
    FUN_100b9d79c();
    lVar10 = *(long *)(lVar9 + 0xc0);
    if (lVar10 != 0) {
      *(undefined ***)(lVar10 + 0x28) = &PTR_DAT_110425c10;
      func_0x000107c61604(lVar10 + 0x20,lVar9);
    }
    func_0x000107c6157c(lVar9);
    FUN_100b9e600();
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(lVar9);
    func_0x0001000834e4(&puStack_98);
    FUN_1000d224c(&puStack_98);
    func_0x000107c615e8(puVar3);
    func_0x000107c61170(puVar12);
    puVar12 = puStack_98;
    lVar10 = 0;
    func_0x000100b9e804();
    func_0x000107c613fc();
    *(undefined8 *)(lVar10 + 0x38) = 0;
    *(undefined8 *)(lVar10 + 0x40) = 0;
    *(undefined8 *)(lVar10 + 0x30) = 0;
    *(long *)(lVar10 + 0x10) = lVar9;
    *(undefined ***)(lVar10 + 0x18) = &PTR_DAT_110425c28;
    *(undefined **)(lVar10 + 0x20) = puVar4;
    *(undefined **)(lVar10 + 0x28) = puVar12;
    return;
  }
  func_0x000107c6142c(puVar12);
  func_0x0001019c2618();
  func_0x000107c613f8(&UNK_110776410,puVar12,0,0);
  func_0x000107c61654();
  return;
}



/* Entry: 100b79cbc; end: 100b79cf3;  */

void FUN_100b79cbc(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  lVar3 = 0x112de6120;
  puVar4 = (ulong *)0x112de6720;
  plVar5 = (long *)&UNK_10db00fa0;
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if ((iVar1 != 0) && (FUN_1000285a8(0x112de6120,&UNK_10d9b0cc0), lVar3 != 0)) {
    puVar4 = (ulong *)0x112d36e60;
    plVar5 = (long *)&UNK_10d901170;
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100b79cf4; end: 100b79d9b; -[SCMixerNamespaceService _updatedContextualInfoFromInfo:] */

void FUN_100b79cf4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)0x0;
  if (param_3 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c5b41c(param_3);
    func_0x000107c3f27c(param_3);
    func_0x000107c5b3f0(param_3);
    lVar1 = param_3;
    func_0x000107c4ec30(param_3);
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    puVar2 = PTR_PTR_1126d8860;
    func_0x000107c610f4(PTR_PTR_1126d8860);
    func_0x000107c487fc();
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100b79d9c; end: 100b79ddb;  */

void FUN_100b79d9c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3acc0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100b79ddc; end: 100b79fab; -[SCAdaptiveContentFetchingServiceProvider _adaptiveContentFetcherFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b79ddc(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126b9f58;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_11272498c;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar4 = param_1 + _DAT_112724990;
  func_0x000107c61148();
  lVar5 = lVar4;
  func_0x000107c3de48();
  func_0x000107c61180();
  lVar13 = (long)_DAT_112724994;
  lVar6 = param_1 + lVar13;
  func_0x000107c61148();
  lVar7 = lVar6;
  func_0x000107c40430();
  func_0x000107c61180();
  lVar14 = (long)_DAT_112724998;
  lVar8 = param_1 + lVar14;
  func_0x000107c61148();
  lVar9 = lVar8;
  func_0x000107c40430();
  func_0x000107c61180();
  lVar13 = param_1 + lVar13;
  func_0x000107c61148(lVar13);
  lVar10 = lVar13;
  func_0x000107c5b034();
  func_0x000107c61180();
  lVar14 = param_1 + lVar14;
  func_0x000107c61148(lVar14);
  lVar11 = lVar14;
  func_0x000107c5b034();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_11272499c;
  func_0x000107c61148();
  lVar12 = param_1;
  func_0x000107c3e270();
  func_0x000107c61180();
  func_0x000107c45de0(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar10,lVar11,lVar12);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b79fac; end: 100b79fb3; -[SCMixerUpdateParameters updatingMode] */

undefined8 FUN_100b79fac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100b79fb4; end: 100b79fbb; -[SCSystemContentDeliveryServices simpleContentFetcher] */

undefined8 FUN_100b79fb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100b79fbc; end: 100b79fc7; -[SCMixerUpdateParameters .cxx_destruct] */

void FUN_100b79fbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100b79fc8; end: 100b79fd3; -[SCMainCameraDeepLinkEntryPoint setMainCameraDeepLinkScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b79fc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d330;
  func_0x000107c61428(param_1 + _DAT_112d4d330,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b79fd4; end: 100b7a14f; -[SCAdaptiveContentFetcherFactoryImpl initWithCircumstanceEngine:experimentReader:userContentDeliveryLazy:systemContentDeliveryLazy:userSimpleContentFetcherLazy:systemSimpleContentFetcherLazy:asyncQueueProviderLazy:] */

undefined1 *
FUN_100b79fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_58 = PTR_PTR_1126e8ad8;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b7a150; end: 100b7a1b3; -[SCMainCameraDeepLinkEntryPoint setMainCameraDeepLinkScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7a150(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d338;
  func_0x000107c61428(param_1 + _DAT_112d4d338,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b7a1b4; end: 100b7a1db; -[SCMainCameraDeepLinkEntryPoint begin] */

void FUN_100b7a1b4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b7a1dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b7a1dc; end: 100b7a417;  */

/* WARNING: Possible PIC construction at 0x000100b7a358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7a374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7a384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7a394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7a3e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7a3d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b7a3ec) */
/* WARNING: Removing unreachable block (ram,0x000100b7a398) */
/* WARNING: Removing unreachable block (ram,0x000100b7a388) */
/* WARNING: Removing unreachable block (ram,0x000100b7a378) */
/* WARNING: Removing unreachable block (ram,0x000100b7a35c) */
/* WARNING: Removing unreachable block (ram,0x000100b7a3dc) */

void FUN_100b7a1dc(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  lVar2 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar1 = unaff_x20;
  func_0x000107c4c144();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar1 = unaff_x20;
    func_0x000107c4c138();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c4c130();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        lVar2 = 0;
        FUN_100b7a4ec();
        func_0x000107c613fc();
        puVar3 = PTR_PTR_1126ae810;
        func_0x000107c610f8();
        func_0x000107c453e4();
        *(long *)(lVar2 + 0x18) = unaff_x20;
        *(undefined **)(lVar2 + 0x20) = puVar3;
        *(long *)(lVar2 + 0x10) = lVar1;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(unaff_x20);
        func_0x000107c4c134(lVar1);
        func_0x000107c61180();
        puVar3 = &UNK_11036c238;
        func_0x000107c613fc(&UNK_11036c238,0x18,7);
        func_0x000107c61644(puVar3 + 0x10,lVar2);
        puStack_70 = &UNK_100f45158;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_100f45154;
        puStack_78 = &UNK_11036c250;
        puStack_68 = puVar3;
        func_0x000107c60bc4(&puStack_90);
        puVar3 = puStack_68;
        func_0x000107c6157c(lVar2);
        func_0x000107c61574(puVar3);
        func_0x000107c5c320(lVar1);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar4);
        lVar2 = lVar1;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100b7a418; end: 100b7a43b;  */

void FUN_100b7a418(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b7a43c; end: 100b7a447; -[SCMainCameraDeepLinkEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7a43c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d320;
  func_0x000107c61428(param_1 + _DAT_112d4d320,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7a448; end: 100b7a48b;  */

void FUN_100b7a448(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7a48c; end: 100b7a497; -[SCMainCameraDeepLinkEntryPoint mainCameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7a48c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d328;
  func_0x000107c61428(param_1 + _DAT_112d4d328,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7a498; end: 100b7a4a3; -[SCMainCameraDeepLinkEntryPoint mainCameraDeepLinkScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7a498(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d330;
  func_0x000107c61428(param_1 + _DAT_112d4d330,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7a4a4; end: 100b7a4eb; -[SCMainCameraDeepLinkEntryPoint mainCameraDeepLinkScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7a4a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d338;
  func_0x000107c61428(param_1 + _DAT_112d4d338,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b7a4ec; end: 100b7a50b;  */

void FUN_100b7a4ec(void)

{
  func_0x000107c61168(&PTR_PTR_112d4d2b0);
  return;
}



/* Entry: 100b7a50c; end: 100b7a527; -[SCMainCameraDeepLinkScopeServices mainCameraDeepLinkScopePublishSubject] */

undefined8 FUN_100b7a50c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100b7a528; end: 100b7a58b;  */

void FUN_100b7a528(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3bf74();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100b7a58c; end: 100b7a71f; -[SCMixerNamespaceService _namespacesToUpdateWithParameters:] */

void FUN_100b7a58c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(param_3);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c4d43c(uVar2,param_2,param_3,uVar3,uVar1,*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x20));
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100b7a720; end: 100b7a84b; -[SCAdaptiveContentFetcherFactoryImpl adaptiveContentFetcherLazyForFeatureType:featureProvidedSignals:useSystemContentDeliveryScope:externalFetchersList:] */

void FUN_100b7a720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61144(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_60,auStack_48);
  uStack_58 = param_3;
  func_0x000107c61174(param_4);
  uStack_50 = param_5;
  func_0x000107c61174(param_6);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b7a84c; end: 100b7a8bf; -[SCLensMetadataTransformer initWithLensExtensionSerializer:] */

undefined1 * FUN_100b7a84c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127016b8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b7a8c0; end: 100b7a91f; -[SCSCCameraFeatureScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7a8c0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eea788,0);
  *(undefined8 *)(param_1 + _DAT_112eea790) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b7a920; end: 100b7a93f;  */

void FUN_100b7a920(void)

{
  func_0x000107c61168(&PTR_PTR_112de6ea8);
  return;
}



/* Entry: 100b7a940; end: 100b7aadb;  */

long FUN_100b7a940(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long alStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar1 = 0;
  FUN_100b7a920();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar8;
  uVar3 = 0;
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c615f0();
  FUN_1000c6580();
  *(undefined8 *)(lVar2 + 0x18) = uVar8;
  lVar4 = 0x112de7030;
  FUN_1000285a8(0x112de7030,&UNK_10d9b1b10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(long *)(lVar4 + 0x38) = lVar1;
  *(undefined ***)(lVar4 + 0x40) = &PTR_DAT_110426d68;
  *(long *)(lVar4 + 0x20) = lVar2;
  func_0x000107c6157c(lVar2);
  FUN_1000d224c(alStack_78);
  lVar1 = alStack_78[0];
  if (alStack_78[0] == 0) {
    func_0x000107c61574(lVar2);
  }
  else {
    lVar5 = 0;
    FUN_100b7b708();
    lVar6 = lVar5;
    func_0x000107c613fc();
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(undefined8 *)(lVar6 + 0x10) = 200;
    func_0x000107c613fc(uVar3,0x20,7);
    lVar7 = alStack_78[0];
    func_0x000107c615f0();
    FUN_1000c6580();
    *(long *)(lVar6 + 0x28) = lVar7;
    *(long *)(lVar6 + 0x30) = alStack_78[0];
    *(undefined8 *)(lVar6 + 0x20) = 5;
    lVar7 = 1;
    FUN_100b7b79c(1,2,1,lVar4);
    ppuStack_58 = &PTR_DAT_110426da8;
    *(undefined8 *)(lVar7 + 0x10) = 2;
    alStack_78[0] = lVar6;
    lStack_60 = lVar5;
    func_0x000100b7b8ec(alStack_78,lVar7 + 0x48);
    func_0x000107c61574(lVar2);
    func_0x000107c615e8(lVar1);
    lVar4 = lVar7;
  }
  return lVar4;
}



/* Entry: 100b7aadc; end: 100b7aafb;  */

void FUN_100b7aadc(void)

{
  FUN_100b7a940();
  return;
}



/* Entry: 100b7aafc; end: 100b7ab6f; -[SCLensMetadataModelTransformer initWithLensExtensionSerializer:] */

undefined1 * FUN_100b7aafc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127016b0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b7ab70; end: 100b7ad3b; -[SCSCCameraFeatureScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100b7ab70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  func_0x000100b7ac1c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b7ad3c; end: 100b7ad93; -[SCSCCameraFeatureScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7ad3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eea788;
  func_0x000107c61428(param_1 + _DAT_112eea788,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b7ad94; end: 100b7adbb; -[SCSCCameraFeatureScopedServicesSaberEntryPoint begin] */

void FUN_100b7ad94(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b7adbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b7adbc; end: 100b7ae93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7adbc(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_100b7aedc();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112eea2c8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    FUN_100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b7ae94);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112eea2d0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112eea790);
    *(long **)(unaff_x20 + _DAT_112eea790) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 100b7ae94; end: 100b7aedb; -[SCSCCameraFeatureScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7ae94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eea788;
  func_0x000107c61428(param_1 + _DAT_112eea788,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7aedc; end: 100b7aefb;  */

void FUN_100b7aedc(void)

{
  func_0x000107c61168(&PTR_PTR_112885590);
  return;
}



/* Entry: 100b7aefc; end: 100b7afbf;  */

void FUN_100b7aefc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bb9a8;
  func_0x000107c610f4(PTR_PTR_1126bb9a8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c4c020();
  func_0x000107c61180();
  func_0x000107c4721c(puVar1,param_2,uVar2,uVar3,uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b7afc0; end: 100b7b163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7afc0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126c3070;
    func_0x000107c610f4(PTR_PTR_1126c3070);
    lVar1 = param_1 + _DAT_112731f84;
    func_0x000107c61148();
    lVar2 = lVar1;
    func_0x000107c444a4();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c4b1a4();
    func_0x000107c61180();
    lVar5 = param_1 + _DAT_112731f8c;
    func_0x000107c61148(lVar5);
    lVar6 = lVar5;
    func_0x000107c5dac4();
    func_0x000107c61180();
    lVar7 = param_1 + _DAT_112731f90;
    func_0x000107c61148(lVar7);
    lVar8 = lVar7;
    func_0x000107c4b518();
    func_0x000107c61180();
    puVar9 = PTR_PTR_1126bbad8;
    func_0x000107c61160(PTR_PTR_1126bbad8);
    lVar10 = param_1 + _DAT_112731f70;
    func_0x000107c61148(lVar10);
    lVar11 = lVar10;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c46b74(puVar12,param_2,lVar4,lVar6,lVar8,puVar9,lVar11);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 100b7b164; end: 100b7b1d7; -[SCSCLensCreatorProfilePresentationServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7b164(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f9e958,0);
  func_0x000107c61614(param_1 + _DAT_112f9e960,0);
  *(undefined8 *)(param_1 + _DAT_112f9e968) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b7b1d8; end: 100b7b2fb; -[SCLensRemoteAssetLogger initWithGraphene:blizzardLogger:lensUserProvider:grapheneLoggerV2:circumstanceEngine:] */

undefined1 *
FUN_100b7b1d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_1126ec4b0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b7b2fc; end: 100b7b3a7; -[SCSCLensCreatorProfilePresentationServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b7b2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100b7b510(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b7b3a8; end: 100b7b49b; -[SCLensDownloadLoggerManager initWithLensContentDownloadLogger:lensAssetsDownloadLogger:loggingPerformer:] */

undefined1 *
FUN_100b7b3a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126f0598;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b7800;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c539f8(*(undefined8 *)((long)puVar1 + 0x18));
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b7b49c; end: 100b7b50f; -[SCLensScheduleNamespaceDataTransformer initWithLensMetadataTransformer:] */

undefined1 * FUN_100b7b49c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127016c8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b7b510; end: 100b7b6a7;  */

void FUN_100b7b510(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e91f30)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f16e0d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensUserNavigationScopeGraphBridge/SCSCLensCreatorProfilePresentationServicesSaberServiceProvider.swift"
                            ,0x67,2,0x40,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b7b6a8);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55ee4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b7b6a8; end: 100b7b6b3; -[SCSCLensCreatorProfilePresentationServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7b6a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f9e958;
  func_0x000107c61428(param_1 + _DAT_112f9e958,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b7b6b4; end: 100b7b707;  */

void FUN_100b7b6b4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b7b708; end: 100b7b727;  */

void FUN_100b7b708(void)

{
  func_0x000107c61168(&PTR_PTR_112de6f80);
  return;
}



/* Entry: 100b7b728; end: 100b7b79b; -[SCLensScheduleNamespaceDataModelTransformer initWithLensMetadataModelTransformer:] */

undefined1 * FUN_100b7b728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127016c0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b7b79c; end: 100b7b8df;  */

undefined * FUN_100b7b79c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100b7b8e0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112de7030;
    FUN_1000285a8(0x112de7030,&UNK_10d9b1b10);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112de70f8;
    FUN_1000285a8(0x112de70f8,&UNK_10d9b1b80);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 100b7b8e0; end: 100b7b903; -[SCSCLensCreatorProfilePresentationServicesSaberServiceProvider setLensUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7b8e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f9e960;
  func_0x000107c61428(param_1 + _DAT_112f9e960,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b7b904; end: 100b7b923;  */

void FUN_100b7b904(void)

{
  func_0x000107c61168(&PTR_PTR_112de6dc8);
  return;
}



/* Entry: 100b7b924; end: 100b7b9d7;  */

void FUN_100b7b924(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  FUN_100b7b904();
  lVar4 = lVar3;
  func_0x000107c613fc();
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c615f0(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c453e4();
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  *(undefined **)(lVar4 + 0x20) = puVar5;
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  lVar6 = 0x112de7038;
  FUN_1000285a8(0x112de7038,&UNK_10d9b1b18);
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  *(long *)(lVar6 + 0x38) = lVar3;
  *(undefined ***)(lVar6 + 0x40) = &PTR_DAT_110426a58;
  *(long *)(lVar6 + 0x20) = lVar4;
  return;
}



/* Entry: 100b7b9d8; end: 100b7b9f7;  */

void FUN_100b7b9d8(void)

{
  FUN_100b7b924();
  return;
}



/* Entry: 100b7b9f8; end: 100b7ba2b; -[SCSCLensCreatorProfilePresentationServicesSaberServiceProvider __safeProvide] */

void FUN_100b7b9f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b7ba2c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b7ba2c; end: 100b7bb13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7ba2c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4b510();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b7bda0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112f9e3f0);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f9e968);
      *(long *)(unaff_x20 + _DAT_112f9e968) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100b7bb14; end: 100b7bb1f; -[SCSCLensCreatorProfilePresentationServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7bb14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f9e958;
  func_0x000107c61428(param_1 + _DAT_112f9e958,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7bb20; end: 100b7bb63;  */

void FUN_100b7bb20(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7bb64; end: 100b7bd93; -[SCMixerNamespaceDocObjectStore initWithDocObjectContext:namespaceDataTransformer:namespaceDataModelTransformer:performer:lensDataConfigProvider:storedDateManager:] */

undefined1 *
FUN_100b7bb64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_68 = PTR_PTR_112701780;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x50) = 0;
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b7bd94; end: 100b7bd9f; -[SCSCLensCreatorProfilePresentationServicesSaberServiceProvider lensUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7bd94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f9e960;
  func_0x000107c61428(param_1 + _DAT_112f9e960,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7bda0; end: 100b7be1b;  */

void FUN_100b7bda0(undefined8 param_1)

{
  if (lRam0000000112f9dae8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e781e6c);
  return;
}



/* Entry: 100b7be1c; end: 100b7be23;  */

void FUN_100b7be1c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b7be24; end: 100b7be77;  */

void FUN_100b7be24(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b7be78; end: 100b7be97;  */

void FUN_100b7be78(void)

{
  func_0x000107c61168(&PTR_PTR_112de69b8);
  return;
}



/* Entry: 100b7be98; end: 100b7bea3;  */

void FUN_100b7be98(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100340cf4();
  func_0x000107c613fc();
  FUN_100b7c08c(uStack_48,uStack_50,uStack_58,uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b7bea4; end: 100b7bf4f;  */

void FUN_100b7bea4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100340cf4();
  func_0x000107c613fc();
  FUN_100b7c08c(uStack_48,uStack_50,uStack_58,uStack_60);
  *param_1 = param_2;
  return;
}



/* Entry: 100b7bf50; end: 100b7bf6f;  */

void FUN_100b7bf50(void)

{
  func_0x000107c61168(&PTR_PTR_112de62e8);
  return;
}



/* Entry: 100b7bf70; end: 100b7bf77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7bf70(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002b0b84();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_113071aa8) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 100b7bf78; end: 100b7bfe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7bf78(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002b0b84();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_113071aa8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100b7bfe4; end: 100b7bff3;  */

undefined1  [16] FUN_100b7bfe4(void)

{
  return ZEXT816(0x110427088);
}



/* Entry: 100b7bff4; end: 100b7c00b;  */

undefined1  [16] FUN_100b7bff4(void)

{
  return ZEXT816(0x110427120);
}



/* Entry: 100b7c00c; end: 100b7c087;  */

void FUN_100b7c00c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e40998,&UNK_10da2ecd8);
  func_0x000107c613fc();
  puVar1 = &UNK_101f20f50;
  FUN_1000841f8(&UNK_101f20f50,param_2);
  FUN_100084214(&UNK_10da2eca0,0x30,2);
  *param_1 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100b7c088; end: 100b7c08b;  */

void FUN_100b7c088(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100b7c08c; end: 100b7c32f;  */

void FUN_100b7c08c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  FUN_1000285a8(0x112e47de0,&UNK_10da40610);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  uVar2 = param_4;
  func_0x000107c6157c(param_4);
  FUN_10017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126ac520;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f03ef70);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f10e4b0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return;
}



/* Entry: 100b7c330; end: 100b7c367;  */

void FUN_100b7c330(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c5e0f8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 100b7c368; end: 100b7c43f; -[SCMixerNamespaceDocObjectStore warmupNamespacesIfNeeded:] */

/* WARNING: Possible PIC construction at 0x000100b7c400: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b7c404) */

void FUN_100b7c368(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x50);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_100b7c440;
  puStack_40 = &UNK_110c8fb78;
  lStack_38 = param_1;
  func_0x000107c43518(param_3,param_2,&puStack_58);
  func_0x000107c61180();
  func_0x000107c611f0(param_1 + 0x50);
  lVar1 = param_3;
  func_0x000107c40808();
  if (lVar1 != 0) {
    func_0x000107c3ce24(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100b7c440; end: 100b7c533;  */

bool FUN_100b7c440(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  func_0x000107c61174(param_2);
  uVar4 = *(ulong *)(param_1 + 0x20);
  lVar2 = param_2;
  func_0x000107c4d420(param_2);
  func_0x000107c61180();
  func_0x000107c3c750();
  func_0x000107c61170(lVar2);
  if ((uVar4 & 1) == 0) {
    lVar2 = param_2;
    func_0x000107c3ef0c();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c4adac();
    if (lVar3 == 0) {
      bVar1 = false;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x48);
      func_0x000107c4d9e8(lVar3);
      func_0x000107c61180();
      bVar1 = lVar3 == 0;
      func_0x000107c61170();
    }
    func_0x000107c61170(lVar2);
  }
  else {
    bVar1 = false;
  }
  func_0x000107c61170(param_2);
  return bVar1;
}



/* Entry: 100b7c534; end: 100b7c5eb; -[SCMixerNamespaceDocObjectStore _shouldFilterOutNamespaceData:] */

bool FUN_100b7c534(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  
  func_0x000107c61174(param_4);
  lVar1 = *(long *)(param_2 + 0x38);
  func_0x000107c4aa8c(lVar1,param_3,param_4);
  func_0x000107c61180();
  if (lVar1 == 0) {
    bVar3 = false;
  }
  else {
    uVar2 = *(ulong *)(param_2 + 0x30);
    func_0x000107c4aac8(uVar2,param_3,param_4);
    bVar3 = false;
    if (uVar2 != 0) {
      func_0x000107c5c9e4(lVar1);
      bVar3 = (ulong)(long)param_1 < uVar2;
    }
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_4);
  return bVar3;
}



/* Entry: 100b7c5ec; end: 100b7c813; -[SCLensNamespaceStoredDateManager lastUpdateDateFor:] */

void FUN_100b7c5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  
  lVar1 = 0x112d373d8;
  puVar4 = &UNK_10d9014c0;
  FUN_1000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  func_0x000100b7c6e8(puVar5,param_3,puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(puVar4);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar1 + -8);
  puVar2 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ee70(0);
    (**(code **)(lVar6 + 8))(puVar5,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100b7c814; end: 100b7c91b; -[SCLensCreatorProfilePresentionServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7c814(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (param_1 == 0) {
    func_0x000107c61174();
    uVar3 = 0;
    param_1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11275a124);
    func_0x000107c61174(uVar3);
    param_1 = param_1 + _DAT_11275a128;
    func_0x000107c61148();
  }
  puVar1 = PTR_PTR_1126ae720;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  puStack_50 = &UNK_106bd19d0;
  puStack_48 = &UNK_1108f0cb0;
  uStack_40 = uVar3;
  lStack_38 = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar3);
  func_0x000107c3e4fc(puVar1,param_2,&puStack_60);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126d1230;
  func_0x000107c610f4(PTR_PTR_1126d1230);
  func_0x000107c4625c();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lStack_38);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100b7c91c; end: 100b7c973; -[_TtC23SCLensCreatorProfileAPI40SCLensCreatorProfilePresentationServices initWithCreatorProfilePresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7c91c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113071a50) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100b7c974; end: 100b7c9af;  */

void FUN_100b7c974(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b7c9b0; end: 100b7ca23; -[SCSCLensInfoCardActionHandlingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7c9b0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e73f80,0);
  func_0x000107c61614(param_1 + _DAT_112e73f88,0);
  *(undefined8 *)(param_1 + _DAT_112e73f90) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b7ca24; end: 100b7cacf; -[SCSCLensInfoCardActionHandlingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b7ca24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100b7cad0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b7cad0; end: 100b7cc67;  */

void FUN_100b7cad0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0f886c0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000026,0x800000010f077940,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "UserNavigationScopeGraphBridge/SCSCLensInfoCardActionHandlingServicesSaberServiceProvider.swift"
                            ,0x5f,2,0x3ea,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b7cc68);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a3a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b7cc68; end: 100b7cc73; -[SCSCLensInfoCardActionHandlingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7cc68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e73f80;
  func_0x000107c61428(param_1 + _DAT_112e73f80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b7cc74; end: 100b7ccc7;  */

void FUN_100b7cc74(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b7ccc8; end: 100b7ccd3; -[SCSCLensInfoCardActionHandlingServicesSaberServiceProvider setUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7ccc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e73f88;
  func_0x000107c61428(param_1 + _DAT_112e73f88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b7ccd4; end: 100b7cd07; -[SCSCLensInfoCardActionHandlingServicesSaberServiceProvider __safeProvide] */

void FUN_100b7ccd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b7cd08();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b7cd08; end: 100b7cdef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7cd08(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5d9f8();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b7ce4c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112e6e928);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e73f90);
      *(long *)(unaff_x20 + _DAT_112e73f90) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100b7cdf0; end: 100b7cdfb; -[SCSCLensInfoCardActionHandlingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7cdf0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e73f80;
  func_0x000107c61428(param_1 + _DAT_112e73f80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7cdfc; end: 100b7ce3f;  */

void FUN_100b7cdfc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7ce40; end: 100b7ce4b; -[SCSCLensInfoCardActionHandlingServicesSaberServiceProvider userNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7ce40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e73f88;
  func_0x000107c61428(param_1 + _DAT_112e73f88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7ce4c; end: 100b7cec7;  */

void FUN_100b7ce4c(undefined8 param_1)

{
  if (lRam0000000112e6a700 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6bcf60);
  return;
}



/* Entry: 100b7cec8; end: 100b7cfcb;  */

void FUN_100b7cec8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar4 = &UNK_110519650;
  func_0x000107c613fc(&UNK_110519650,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  puStack_50 = &UNK_1024fd9c4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1024fdad0;
  puStack_58 = &UNK_110519668;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar4 = PTR_PTR_1126aa990;
  func_0x000107c610f8();
  func_0x000107c47334();
  func_0x000107c61170(puVar3);
  *param_1 = puVar4;
  return;
}


