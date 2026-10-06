/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10675af84; end: 10675bd6f;  */

void FUN_10675af84(undefined8 param_1,undefined **param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  undefined **ppuVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined **ppuVar28;
  undefined *puVar29;
  undefined **ppuVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined **ppuStack_140;
  undefined1 uStack_100;
  undefined **ppuStack_a8;
  
  _objc_retain();
  ppuVar1 = param_2;
  func_0x00010bfda420();
  if (((int)ppuVar1 == 0) || (ppuVar1 = param_2, func_0x00010bfda440(), (int)ppuVar1 == 0)) {
    puVar29 = (undefined *)0x0;
    goto LAB_10675bd3c;
  }
  ppuVar1 = param_2;
  func_0x00010c0fd100();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_2;
  func_0x00010c0fd1a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf33420();
  _objc_retainAutoreleasedReturnValue();
  ppuVar28 = ppuVar1;
  func_0x00010c117040();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010bfe8f00();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar4 == (undefined **)0x0) {
    ppuStack_a8 = ppuVar2;
    func_0x00010bf33420();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(ppuVar4);
    ppuStack_a8 = ppuVar4;
  }
  _objc_release(ppuVar4);
  _objc_release(ppuVar28);
  ppuVar28 = ppuVar1;
  func_0x00010c117040();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010bfe8ee0();
  if ((int)ppuVar4 == 1) {
    uStack_100 = 1;
  }
  else {
    ppuVar4 = ppuStack_a8;
    func_0x00010c0720c0(ppuStack_a8,param_3,ppuVar3);
    uStack_100 = SUB81(ppuVar4,0);
  }
  _objc_release(ppuVar28);
  puVar29 = PTR_PTR_1126cd890;
  _objc_alloc();
  ppuVar4 = param_2;
  func_0x00010c0fd0e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar1;
  func_0x00010c112bc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  FUN_10675a64c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar28 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar28 = ppuVar7;
  }
  ppuVar8 = ppuVar1;
  func_0x00010bf33560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar1;
  func_0x00010befd640();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar1;
  func_0x00010bf49d80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar10;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar11;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar1;
  func_0x00010c0fb360();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar1;
  func_0x00010bf49d80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar14;
  func_0x00010c2a46a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar1;
  func_0x00010c2a46e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar1;
  func_0x00010bfc1860();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = ppuVar17;
  func_0x00010bf34aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  ppuVar19 = ppuVar1;
  uVar31 = param_1;
  func_0x00010bfc1860();
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = ppuVar19;
  func_0x00010bf34aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09abe0();
  uVar32 = uVar31;
  _objc_retain(ppuVar1);
  ppuVar30 = ppuVar1;
  func_0x00010c137f40();
  if (ppuVar30 == (undefined **)0x0) {
    ppuStack_140 = (undefined **)0x0;
  }
  else {
    ppuVar30 = ppuVar1;
    func_0x00010c137f20();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_140 = ppuVar30;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar30);
  }
  _objc_release(ppuVar1);
  _objc_retain(ppuVar1);
  ppuVar30 = ppuVar1;
  func_0x00010c0eca40();
  if (ppuVar30 == (undefined **)0x0) {
    ppuVar30 = (undefined **)0x0;
  }
  else {
    ppuVar21 = ppuVar1;
    func_0x00010c0eca20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar30 = ppuVar21;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar21);
  }
  _objc_release(ppuVar1);
  _objc_retain(ppuVar2);
  ppuVar21 = ppuVar2;
  func_0x00010bfd4ca0();
  if ((int)ppuVar21 == 0) {
LAB_10675b498:
    ppuVar21 = ppuVar2;
    func_0x00010bfd76c0();
    if ((int)ppuVar21 == 0) {
LAB_10675b574:
      puVar26 = PTR_PTR_1126b1d80;
      _objc_alloc(PTR_PTR_1126b1d80);
      func_0x00010c0219a0(0,0);
    }
    else {
      ppuVar21 = ppuVar2;
      func_0x00010bfc1860();
      _objc_retainAutoreleasedReturnValue();
      ppuVar22 = ppuVar21;
      func_0x00010bfd5300();
      _objc_release(ppuVar21);
      if ((int)ppuVar22 == 0) goto LAB_10675b574;
      puVar26 = PTR_PTR_1126b1d80;
      _objc_alloc(PTR_PTR_1126b1d80);
      ppuVar21 = ppuVar2;
      func_0x00010bfc1860(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar22 = ppuVar21;
      func_0x00010bf34aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08aca0();
      ppuVar23 = ppuVar2;
      uVar33 = uVar32;
      func_0x00010bfc1860(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar25 = ppuVar23;
      func_0x00010bf34aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09abe0();
      func_0x00010c0219a0(uVar32,uVar33,puVar26);
      _objc_release(ppuVar25);
      _objc_release(ppuVar23);
      _objc_release(ppuVar22);
      _objc_release(ppuVar21);
    }
    puVar27 = PTR_PTR_1126b1eb8;
    _objc_alloc();
    func_0x00010c04faa0();
  }
  else {
    ppuVar21 = ppuVar2;
    func_0x00010bf20c00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = ppuVar21;
    func_0x00010bfd9f00();
    if (((ulong)ppuVar22 & 1) == 0) {
      _objc_release(ppuVar21);
      goto LAB_10675b498;
    }
    ppuVar22 = ppuVar2;
    func_0x00010bf20c00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = ppuVar22;
    func_0x00010bfd9f20();
    _objc_release(ppuVar22);
    _objc_release(ppuVar21);
    if ((int)ppuVar23 == 0) goto LAB_10675b498;
    puVar26 = PTR_PTR_1126b1d80;
    _objc_alloc(PTR_PTR_1126b1d80);
    ppuVar21 = ppuVar2;
    func_0x00010bf20c00(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = ppuVar21;
    func_0x00010c0f07a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aca0();
    ppuVar23 = ppuVar2;
    uVar33 = uVar32;
    func_0x00010bf20c00(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar25 = ppuVar23;
    func_0x00010c0f07a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09abe0();
    func_0x00010c0219a0(uVar32,uVar33,puVar26);
    _objc_release(ppuVar25);
    _objc_release(ppuVar23);
    _objc_release(ppuVar22);
    _objc_release(ppuVar21);
    puVar24 = PTR_PTR_1126b1d80;
    _objc_alloc(PTR_PTR_1126b1d80);
    ppuVar21 = ppuVar2;
    func_0x00010bf20c00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = ppuVar21;
    func_0x00010c0f07c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aca0();
    ppuVar23 = ppuVar2;
    uVar33 = uVar32;
    func_0x00010bf20c00(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar25 = ppuVar23;
    func_0x00010c0f07c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09abe0();
    func_0x00010c0219a0(uVar32,uVar33,puVar24);
    _objc_release(ppuVar25);
    _objc_release(ppuVar23);
    _objc_release(ppuVar22);
    _objc_release(ppuVar21);
    puVar27 = PTR_PTR_1126b1eb8;
    _objc_alloc();
    func_0x00010c04faa0();
    _objc_release(puVar24);
  }
  _objc_release(puVar26);
  _objc_release(ppuVar2);
  func_0x00010c0fd6a0();
  func_0x00010c2391c0();
  func_0x00010c072ac0();
  ppuVar21 = ppuVar1;
  func_0x00010c257d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c036500(param_1,uVar31,puVar29,param_3,ppuVar4,ppuVar5,ppuVar28,ppuVar8,ppuVar9,
                      ppuVar12,ppuVar13,ppuVar15,ppuVar16,ppuStack_a8,uStack_100);
  _objc_release(ppuVar21);
  _objc_release(puVar27);
  _objc_release(ppuVar30);
  _objc_release(ppuStack_140);
  _objc_release(ppuVar20);
  _objc_release(ppuVar19);
  _objc_release(ppuVar18);
  _objc_release(ppuVar17);
  _objc_release(ppuVar16);
  _objc_release(ppuVar15);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  ppuVar28 = ppuVar2;
  func_0x00010c070500();
  if ((int)ppuVar28 == 0) {
    ppuVar28 = ppuVar2;
    func_0x00010c0870c0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b7020(puVar29,param_3,ppuVar28);
    _objc_release(ppuVar28);
  }
  else {
    func_0x00010c1b7020(puVar29,param_3,&PTR____CFConstantStringClassReference_110f4c9d8);
  }
  ppuVar28 = ppuVar2;
  func_0x00010c0f4ba0(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9400(puVar29,param_3,ppuVar28);
  _objc_release(ppuVar28);
  ppuVar28 = ppuVar1;
  func_0x00010c0ca920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c08fa60();
  _objc_release(ppuVar4);
  _objc_release(ppuVar28);
  ppuVar28 = ppuVar1;
  if (ppuVar5 == (undefined **)0x0) {
    ppuVar4 = ppuVar1;
    func_0x00010c0ca940();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c08fa60();
    _objc_release(ppuVar4);
    if (ppuVar5 != (undefined **)0x0) {
      puVar26 = PTR_PTR_1126cd898;
      _objc_alloc(PTR_PTR_1126cd898);
      func_0x00010c0ca940(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02b160(puVar26,param_3,ppuVar28);
      goto LAB_10675b8c8;
    }
  }
  else {
    puVar26 = PTR_PTR_1126cd898;
    _objc_alloc(PTR_PTR_1126cd898);
    ppuVar4 = ppuVar1;
    func_0x00010c0ca920(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b160(puVar26,param_3,ppuVar5);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    func_0x00010c0ca920(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010c119b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1896e0(puVar26,param_3,ppuVar4);
    _objc_release(ppuVar4);
LAB_10675b8c8:
    _objc_release(ppuVar28);
    func_0x00010c1c6b40(puVar29,param_3,puVar26);
    _objc_release(puVar26);
  }
  ppuVar28 = ppuVar1;
  func_0x00010bfd3dc0();
  if ((int)ppuVar28 != 0) {
    puVar26 = PTR_PTR_1126cd8a0;
    _objc_alloc();
    ppuVar28 = ppuVar1;
    func_0x00010befd580();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010befd5a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar1;
    func_0x00010befd580();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010befd5c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar1;
    func_0x00010befd580();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c09e300();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar1;
    func_0x00010befd580();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar9;
    func_0x00010c125a80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar1;
    func_0x00010befd580(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar11;
    func_0x00010c105600();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar1;
    func_0x00010befd580(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar13;
    func_0x00010bf53220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff25a0(puVar26,param_3,ppuVar4,ppuVar6,ppuVar8,ppuVar10,ppuVar12,ppuVar14);
    func_0x00010c1e77a0(puVar29,param_3,puVar26);
    _objc_release(puVar26);
    _objc_release(ppuVar14);
    _objc_release(ppuVar13);
    _objc_release(ppuVar12);
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar28);
  }
  ppuVar28 = ppuVar1;
  func_0x00010befea00();
  if (ppuVar28 == (undefined **)0x0) {
    ppuVar28 = ppuVar1;
    func_0x00010bf45b40(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010bf04920();
    _objc_release(ppuVar28);
    ppuVar28 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b18c0(puVar29,param_3,ppuVar28);
  }
  else {
    _objc_retain(ppuVar1);
    ppuVar28 = ppuVar1;
    func_0x00010befea00();
    if (ppuVar28 == (undefined **)0x0) {
      ppuVar28 = (undefined **)0x0;
    }
    else {
      ppuVar4 = ppuVar1;
      func_0x00010befe9e0(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar28 = ppuVar4;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
    }
    _objc_release(ppuVar1);
    func_0x00010c166560(puVar29,param_3,ppuVar28);
  }
  _objc_release(ppuVar28);
  ppuVar28 = ppuVar1;
  func_0x00010c0fb7c0();
  if (ppuVar28 != (undefined **)0x0) {
    _objc_retain(ppuVar1);
    ppuVar28 = ppuVar1;
    func_0x00010c0fb7c0();
    if (ppuVar28 == (undefined **)0x0) {
      ppuVar28 = (undefined **)0x0;
    }
    else {
      ppuVar4 = ppuVar1;
      func_0x00010c0fb7a0(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar28 = ppuVar4;
      FUN_10675a374();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
    }
    _objc_release(ppuVar1);
    func_0x00010c1dc4c0(puVar29,param_3,ppuVar28);
    _objc_release(ppuVar28);
  }
  ppuVar28 = ppuVar1;
  func_0x00010bfd9b40();
  if ((int)ppuVar28 != 0) {
    ppuVar28 = ppuVar1;
    func_0x00010c0e9e60(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010675a700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d52c0(puVar29,param_3,ppuVar4);
    _objc_release(ppuVar4);
    _objc_release(ppuVar28);
  }
  ppuVar28 = ppuVar1;
  func_0x00010bf0a900();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010c08fa60();
  _objc_release(ppuVar28);
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar28 = ppuVar1;
    func_0x00010bf0a900(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174420(puVar29,param_3,ppuVar28);
    _objc_release(ppuVar28);
  }
  ppuVar28 = param_2;
  func_0x00010bfda460();
  if ((int)ppuVar28 != 0) {
    puVar27 = PTR_PTR_1126cd800;
    _objc_alloc_init(PTR_PTR_1126cd800);
    puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar28 = param_2;
    func_0x00010c0fd500(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010bfa0fc0();
    func_0x00010c0df7c0(puVar26,param_3,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19a780(puVar27,param_3,puVar26);
    _objc_release(puVar26);
    _objc_release(ppuVar28);
    ppuVar28 = param_2;
    func_0x00010c0fd500(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010c09e580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf5c0(puVar27,param_3,ppuVar4);
    _objc_release(ppuVar4);
    _objc_release(ppuVar28);
    func_0x00010c1dc360(puVar29,param_3,puVar27);
    _objc_release(puVar27);
  }
  _objc_release(ppuStack_a8);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
LAB_10675bd3c:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar29);
  return;
}



/* Entry: 10675bd70; end: 10675bd8f;  */

bool FUN_10675bd70(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c119b40(param_2);
  return (int)param_2 == 0x37;
}



/* Entry: 10675bd90; end: 10675c3cf;  */

void FUN_10675bd90(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  puVar2 = PTR_PTR_1126cd8a8;
  _objc_retain();
  _objc_alloc(puVar2);
  lVar3 = param_1;
  func_0x00010c0fd0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c036360(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  FUN_10675af84(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac4e0(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bfda3e0();
  if ((int)lVar3 == 0) {
LAB_10675bef4:
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c0fcf20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar3;
    func_0x00010bf25b40();
    _objc_release(lVar3);
    if (lVar10 == 0) goto LAB_10675bef4;
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lVar3 = param_1;
    func_0x00010c0fcf20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar3;
    func_0x00010bf25b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = (code *)0x106759ea0;
    puStack_80 = &UNK_110842ff8;
    _objc_retain(puVar11);
    puStack_78 = puVar11;
    func_0x00010bf980c0(lVar10,param_2,&puStack_98);
    _objc_release(puStack_78);
    _objc_release(lVar10);
  }
  _objc_release(param_1);
  func_0x00010c161820(puVar2,param_2,puVar11);
  _objc_release(puVar11);
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bfda640();
  if ((int)lVar3 == 0) {
LAB_10675c02c:
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c103c20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar3;
    func_0x00010bfe4840();
    _objc_release(lVar3);
    if (lVar10 == 0) goto LAB_10675c02c;
    lVar3 = param_1;
    func_0x00010c103c20(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lVar10 = lVar3;
    func_0x00010bfe4820(lVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106759e58;
    puStack_80 = &UNK_110842ff8;
    puStack_78 = puVar4;
    _objc_retain(puVar4);
    func_0x00010bf980c0(lVar10,param_2,&puStack_98);
    _objc_release(lVar10);
    puVar11 = PTR_PTR_1126cd830;
    _objc_alloc(PTR_PTR_1126cd830);
    lVar10 = lVar3;
    func_0x00010bf86480(lVar3);
    lVar5 = lVar3;
    func_0x00010bf856c0(lVar3);
    func_0x00010c01aba0((double)(int)lVar10,(double)(int)lVar5,puVar11,param_2,puVar4);
    _objc_release(puStack_78);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  func_0x00010c1dece0(puVar2,param_2,puVar11);
  _objc_release(puVar11);
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bfdd680();
  if ((int)lVar3 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c271180();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar3;
    func_0x00010c140520();
    _objc_release(lVar3);
    puVar11 = (undefined *)0x0;
    if (lVar10 != 0) {
      lVar3 = param_1;
      func_0x00010c271180();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar3;
      func_0x00010c140500();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar10;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      puVar11 = PTR_PTR_1126cd820;
      _objc_alloc(PTR_PTR_1126cd820);
      func_0x00010c0401c0();
      lVar10 = lVar3;
      func_0x00010c1403e0();
      if (lVar10 != 0) {
        lVar10 = lVar3;
        func_0x00010c1403c0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar10;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
        func_0x00010c1edec0(puVar11,param_2,lVar6);
        _objc_release(lVar6);
      }
      _objc_release(lVar5);
      _objc_release(lVar3);
    }
  }
  _objc_release(param_1);
  func_0x00010c1edf20(puVar2,param_2,puVar11);
  _objc_release(puVar11);
  lVar3 = param_1;
  func_0x00010c0fd1c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_retain(lVar3);
  if (lVar3 == 0) {
    puVar11 = (undefined *)0x0;
    goto LAB_10675c384;
  }
  lVar10 = lVar3;
  func_0x00010c0b5b00();
  uVar1 = (int)lVar10 - 1;
  if (uVar1 < 3) {
    lVar10 = *(long *)(&PTR_PTR_1109392b0)[uVar1];
    _objc_retain(lVar10);
  }
  else {
    lVar10 = 0;
  }
  lVar5 = lVar3;
  func_0x00010bf0b8c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar6 = lVar3;
    func_0x00010c27ca40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = (undefined *)0x0;
    if (lVar6 != 0) {
      lVar7 = lVar3;
      func_0x00010bf1bec0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar7 != 0) {
        lVar8 = lVar3;
        func_0x00010c2711a0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar8 != 0) {
          lVar9 = lVar3;
          func_0x00010c260dc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar8);
          _objc_release(lVar7);
          _objc_release(lVar6);
          _objc_release(lVar5);
          puVar11 = (undefined *)0x0;
          if ((lVar9 == 0) || (lVar10 == 0)) goto LAB_10675c37c;
          puVar11 = PTR_PTR_1126cd8c8;
          _objc_alloc(PTR_PTR_1126cd8c8);
          lVar5 = lVar3;
          func_0x00010bf0b8c0(lVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar3;
          func_0x00010c27ca40(lVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar3;
          func_0x00010bf1bec0(lVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar3;
          func_0x00010c2711a0(lVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar3;
          func_0x00010c260dc0(lVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bffcfe0(puVar11,param_2,lVar5,lVar6,lVar7,lVar8,lVar9,lVar10);
          _objc_release(lVar9);
          _objc_release(lVar8);
          _objc_release(lVar7);
          _objc_release(lVar6);
          _objc_release(lVar5);
          lVar5 = lVar3;
          func_0x00010bf2fba0(lVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c178460(puVar11,param_2,lVar5);
          goto LAB_10675c374;
        }
        _objc_release(lVar7);
      }
      _objc_release(lVar6);
      puVar11 = (undefined *)0x0;
    }
LAB_10675c374:
    _objc_release(lVar5);
  }
LAB_10675c37c:
  _objc_release(lVar10);
LAB_10675c384:
  _objc_release(lVar3);
  func_0x00010c1dc4a0(puVar2,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10675c3d0; end: 10675c47b;  */

void FUN_10675c3d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126cd8b8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf65700(param_2);
  uVar3 = param_2;
  func_0x00010bfe4820(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  FUN_10675a4a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009600((double)(int)uVar2,puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10675c47c; end: 10675c52f;  */

void FUN_10675c47c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126cd8c0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf6e340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bfe4820(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  FUN_10675a4a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00b960(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10675c530; end: 10675c5d3;  */

void FUN_10675c530(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_1 != (undefined *)0x0) {
    _objc_retain(param_2);
    func_0x00010c0b8600(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    puVar1 = param_1;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10675c5d4; end: 10675c9f3;  */

void FUN_10675c5d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1e10;
  _objc_alloc_init(PTR_PTR_1126b1e10);
  lVar2 = param_3;
  func_0x00010c0fd0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc3a0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c09ea00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  func_0x00010c1b9120(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c09ea00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09abe0();
  func_0x00010c1be5e0(puVar1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b1d80;
  _objc_alloc(PTR_PTR_1126b1d80);
  lVar2 = param_3;
  func_0x00010c130700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0f07a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  lVar5 = param_3;
  uVar10 = param_1;
  func_0x00010c130700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0f07a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09abe0();
  func_0x00010c0219a0(param_1,uVar10,puVar3);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126b1d80;
  _objc_alloc(PTR_PTR_1126b1d80);
  lVar2 = param_3;
  func_0x00010c130700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0f07c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  lVar5 = param_3;
  uVar10 = param_1;
  func_0x00010c130700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0f07c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09abe0();
  func_0x00010c0219a0(param_1,uVar10,puVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126b1eb8;
  _objc_alloc(PTR_PTR_1126b1eb8);
  func_0x00010c04faa0();
  func_0x00010c1739a0(puVar1);
  lVar2 = param_3;
  func_0x00010c0fd260(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf600(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf33340(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf520(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bfe5b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a98a0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bfe58c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7020(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0fb7c0();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0fb7a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c1e5380(puVar1);
    _objc_release(lVar4);
  }
  puVar9 = PTR_PTR_1126b1e30;
  _objc_alloc(PTR_PTR_1126b1e30);
  func_0x00010c0305c0(0);
  func_0x00010c20cd20(puVar1);
  lVar2 = param_3;
  func_0x00010bfda960();
  if ((int)lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c112bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    FUN_10675a64c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2920(puVar1);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010bfd9b40();
  if ((int)lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e9e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010675a700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d52c0(puVar1);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(param_3);
  func_0x00010c17fe00(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10675c9f4; end: 10675ca1b;  */

undefined ** FUN_10675c9f4(int param_1)

{
  if (param_1 - 1U < 4) {
    return (undefined **)(&PTR_PTR_1109392c8)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 10675ca1c; end: 10675cba7;  */

void FUN_10675ca1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar4 = PTR_PTR_1126bab10;
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010bf33480(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c260dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010befd580(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298180(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126bab18;
  _objc_alloc(PTR_PTR_1126bab18);
  uVar1 = param_1;
  func_0x00010c0fd0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0d4f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f520(param_1);
  func_0x00010c07c580(param_1);
  func_0x00010bf3cb60();
  _objc_release(param_1);
  func_0x00010c01bb80(puVar5);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10675cba8; end: 10675ccb3;  */

void FUN_10675cba8(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar5 = param_4;
  func_0x00010bf51c80();
  iVar4 = (int)uVar5;
  dVar7 = ABS(param_1);
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (1.1920928955078125e-07 < ABS(param_2)) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(dVar7)) {
      bVar1 = dVar7 < 1.1920928955078125e-07;
      bVar2 = dVar7 == 1.1920928955078125e-07;
      bVar3 = false;
    }
  }
  if ((!bVar2 && bVar1 == bVar3) && (_CLLocationCoordinate2DIsValid(), iVar4 != 0)) {
    uVar5 = param_3;
    func_0x00010bf51c80();
    iVar4 = (int)uVar5;
    dVar7 = ABS(param_1);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (1.1920928955078125e-07 < ABS(param_2)) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar7)) {
        bVar1 = dVar7 < 1.1920928955078125e-07;
        bVar2 = dVar7 == 1.1920928955078125e-07;
        bVar3 = false;
      }
    }
    if ((!bVar2 && bVar1 == bVar3) && (_CLLocationCoordinate2DIsValid(), iVar4 != 0)) {
      func_0x00010bf51c80(param_4);
      dVar7 = param_1;
      dVar6 = param_2;
      func_0x00010bf51c80(param_3);
      func_0x000108d312a8(param_1,param_2,dVar7,dVar6);
      uVar5 = param_5;
      func_0x00010c25d440(param_5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10675cc84;
    }
  }
  uVar5 = 0;
LAB_10675cc84:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10675ccb4; end: 10675ccc7;  */

undefined ** FUN_10675ccb4(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e30398;
  if (param_1 != 4) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 10675ccc8; end: 10675d0e3;  */

void FUN_10675ccc8(undefined8 param_1,undefined **param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b2160;
  _objc_alloc(PTR_PTR_1126b2160);
  ppuVar2 = param_2;
  func_0x00010c0fd0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_2;
  func_0x00010c0fd260(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0364c0(puVar1,param_3,ppuVar2,ppuVar3,0);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126b1d80;
  _objc_alloc(PTR_PTR_1126b1d80);
  ppuVar2 = param_2;
  func_0x00010c130700(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c0f07a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  ppuVar5 = param_2;
  uVar10 = param_1;
  func_0x00010c130700(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c0f07a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09abe0();
  func_0x00010c0219a0(param_1,uVar10,puVar4);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar7 = PTR_PTR_1126b1d80;
  _objc_alloc(PTR_PTR_1126b1d80);
  ppuVar2 = param_2;
  func_0x00010c130700(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c0f07c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  ppuVar5 = param_2;
  uVar10 = param_1;
  func_0x00010c130700(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c0f07c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09abe0();
  func_0x00010c0219a0(param_1,uVar10,puVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar8 = PTR_PTR_1126b1eb8;
  _objc_alloc(PTR_PTR_1126b1eb8);
  func_0x00010c04faa0();
  func_0x00010c1739a0(puVar1,param_3,puVar8);
  ppuVar2 = param_2;
  func_0x00010bf33340(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a060(puVar1,param_3,ppuVar2);
  _objc_release(ppuVar2);
  ppuVar2 = param_2;
  func_0x00010bfe5b40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a98a0(puVar1,param_3,ppuVar2);
  _objc_release(ppuVar2);
  ppuVar2 = param_2;
  func_0x00010c0fb7a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  func_0x00010bfe8f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5360(puVar1,param_3,ppuVar5);
  _objc_release(ppuVar5);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar3 = param_2;
  func_0x00010c112bc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  FUN_10675a64c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar2 = ppuVar5;
  }
  func_0x00010c1e2920(puVar1,param_3,ppuVar2);
  _objc_release(ppuVar5);
  _objc_release(ppuVar3);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar2 = param_2;
  func_0x00010c09ea00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  func_0x00010c0df720(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9120(puVar1,param_3,puVar9);
  _objc_release(puVar9);
  _objc_release(ppuVar2);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar2 = param_2;
  func_0x00010c09ea00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09abe0();
  func_0x00010c0df720(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1be5e0(puVar1,param_3,puVar9);
  _objc_release(puVar9);
  _objc_release(ppuVar2);
  ppuVar2 = param_2;
  func_0x00010bfe58c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7020(puVar1,param_3,ppuVar2);
  _objc_release(ppuVar2);
  ppuVar2 = param_2;
  func_0x00010bfd9b40();
  if ((int)ppuVar2 != 0) {
    ppuVar2 = param_2;
    func_0x00010c0e9e60(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010675a700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d52c0(puVar1,param_3,ppuVar3);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10675d0e4; end: 10675d187;  */

void FUN_10675d0e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf529e0(param_1);
  func_0x00010bf71fe0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10675d188;
  puStack_30 = &UNK_110939280;
  _objc_retain();
  puStack_28 = puVar2;
  func_0x00010bf97ce0(param_1,param_2,&puStack_48);
  _objc_release(param_1);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10675d188; end: 10675d21f;  */

void FUN_10675d188(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN_10675af84();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0fd0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      lVar1 = param_3;
      func_0x00010c0fd0e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3,param_2,param_3,lVar1);
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10675d220; end: 10675d387;  */

void FUN_10675d220(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_1);
  func_0x00010bf0a0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar4 = param_2;
      func_0x00010c0e00e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa140(puVar2);
      _objc_release(uVar4);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126c0308;
    _objc_alloc_init(PTR_PTR_1126c0308);
    if ((lRam00000001138466f0 == 1) || (lRam00000001138466f0 == 2)) {
      func_0x00010c220160(puVar2);
    }
    else {
      puVar5 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
      func_0x00010bf60720(PTR__OBJC_CLASS___UITraitCollection_1126b6d80);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c292b20();
      func_0x00010c220160(puVar2);
      _objc_release(puVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10675d388; end: 10675d41b;  */

void FUN_10675d388(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c0308;
  _objc_alloc_init(PTR_PTR_1126c0308);
  if (lRam00000001138466f0 == 1) {
    uVar4 = 0;
  }
  else {
    if (lRam00000001138466f0 != 2) {
      puVar2 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
      func_0x00010bf60720(PTR__OBJC_CLASS___UITraitCollection_1126b6d80);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c292b20();
      func_0x00010c220160(puVar1,param_2,puVar3 == (undefined *)0x2);
      _objc_release(puVar2);
      goto LAB_10675d40c;
    }
    uVar4 = 1;
  }
  func_0x00010c220160(puVar1,param_2,uVar4);
LAB_10675d40c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10675d41c; end: 10675d7a7;  */

void FUN_10675d41c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  puVar1 = PTR_PTR_1126b2050;
  _objc_retain();
  _objc_alloc_init(puVar1);
  uVar2 = param_2;
  func_0x00010c0fd0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar1);
  _objc_release(uVar2);
  func_0x00010c08aca0(param_2);
  uVar2 = param_1;
  func_0x00010c09abe0(param_2);
  FUN_10676af10(param_1,uVar2,puVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c1e5040(puVar1);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110dd6038;
  uVar2 = param_2;
  func_0x00010c0870c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110dd6038,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(ppuVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110dbf1b8;
  uVar2 = param_2;
  func_0x00010c0d4f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110dbf1b8,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(ppuVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e32618;
  uVar2 = param_2;
  func_0x00010c0fd0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110e32618,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(ppuVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110dad058;
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110dad058,
                &PTR____CFConstantStringClassReference_110e5bd78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e5bb98;
  uVar2 = param_2;
  func_0x00010c072ac0(param_2);
  FUN_10676b0b8(&PTR____CFConstantStringClassReference_110e5bb98,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  uVar2 = param_2;
  func_0x00010c072ac0();
  _objc_release(param_2);
  if ((int)uVar2 != 0) {
    puVar3 = puVar1;
    func_0x00010c118b60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e5bbd8;
    FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5bbd8,
                  &PTR____CFConstantStringClassReference_110e5bf38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(ppuVar4);
    _objc_release(puVar3);
  }
  puVar3 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e5bbb8;
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5bbb8,
                &PTR____CFConstantStringClassReference_110e5bfd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10675d7a8; end: 10675d92f; -[SCMapPlaceFavoritesManager initWithFavoritesService:placeProfileService:notificationPool:deepLinkHandler:circumstanceEngine:] */

undefined1 *
FUN_10675d7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f2ec8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    func_0x00010be11160(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10675d930; end: 10675d93f; -[SCMapPlaceFavoritesManager addCurrentlyActiveMapSDKSession:] */

void FUN_10675d930(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x40),PTR_s_addObject__11259c1f0);
    return;
  }
  return;
}



/* Entry: 10675d940; end: 10675d94f; -[SCMapPlaceFavoritesManager removeInactiveMapSDKSession:] */

void FUN_10675d940(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x40),PTR_s_removeObject__112628ef8);
    return;
  }
  return;
}



/* Entry: 10675d950; end: 10675da77; -[SCMapPlaceFavoritesManager setFavoriteStatus:forPlaceID:] */

void FUN_10675d950(long param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
    func_0x00010bf4b900();
    if (param_3 != iVar1) {
      _objc_initWeak(auStack_38,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_48,auStack_38);
      _objc_retain(param_4);
      uStack_40 = (undefined1)param_3;
      func_0x00010bfa7a60(uVar2);
      _objc_release(uVar2);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_48);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10675da78; end: 10675daf3;  */

void FUN_10675da78(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bed84c0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be76560();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10675daf4; end: 10675db9b; -[SCMapPlaceFavoritesManager _fetchFavorites] */

void FUN_10675daf4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bfa6ae0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10675db9c; end: 10675dc07;  */

void FUN_10675db9c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      uVar1 = param_2;
      func_0x00010c0d3c80();
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = uVar1;
      _objc_release(uVar2);
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10675dc08; end: 10675de8f; -[SCMapPlaceFavoritesManager _updateForPlaceID:favorited:placeInfo:] */

void FUN_10675dc08(long param_1,undefined8 param_2,long param_3,int param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_278 [8];
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined *puStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c1b0e80(param_5);
  if (param_4 == 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x38));
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    lVar7 = *(long *)(param_1 + 0x40);
    _objc_retain(lVar7);
    lVar5 = 0x10;
    lVar1 = lVar7;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar9 = *plStack_1e0;
      lStack_1f8 = param_1;
      do {
        lVar5 = 0;
        do {
          if (*plStack_1e0 != lVar9) {
            _objc_enumerationMutation(lVar7);
          }
          uVar8 = *(undefined8 *)(lStack_1e8 + lVar5 * 8);
          lVar2 = param_5;
          FUN_10675d41c(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef8340(uVar8);
          _objc_release(lVar2);
          lVar5 = lVar5 + 1;
        } while (lVar1 != lVar5);
        lVar5 = 0x10;
        lVar1 = lVar7;
        func_0x00010bf52a60();
        param_1 = lStack_1f8;
      } while (lVar1 != 0);
    }
  }
  else {
    func_0x00010befa120();
    if (param_5 == 0) goto LAB_10675de14;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    lVar7 = *(long *)(param_1 + 0x40);
    _objc_retain(lVar7);
    lVar5 = 0x10;
    lVar1 = lVar7;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar9 = *plStack_1a0;
      lStack_1f8 = param_1;
      do {
        lVar5 = 0;
        do {
          if (*plStack_1a0 != lVar9) {
            _objc_enumerationMutation(lVar7);
          }
          uVar8 = *(undefined8 *)(lStack_1a8 + lVar5 * 8);
          lVar2 = param_5;
          FUN_10675d41c(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef8340(uVar8);
          _objc_release(lVar2);
          lVar5 = lVar5 + 1;
        } while (lVar1 != lVar5);
        lVar5 = 0x10;
        lVar1 = lVar7;
        func_0x00010bf52a60();
        param_1 = lStack_1f8;
      } while (lVar1 != 0);
    }
  }
  _objc_release(lVar7);
LAB_10675de14:
  puVar3 = PTR_PTR_1126cd8d0;
  _objc_alloc();
  func_0x00010c036420();
  puVar4 = puVar3;
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar3);
  _objc_release(param_5);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_208 = FUN_10675de90;
    puStack_230 = puVar3;
    lStack_228 = param_1;
    lStack_220 = param_5;
    lStack_218 = param_3;
    puStack_210 = &stack0xfffffffffffffff0;
    _objc_retain(puVar4);
    _objc_retain(lVar5);
    _objc_initWeak(auStack_238,lVar1);
    uVar8 = *(undefined8 *)(lVar1 + 8);
    if (param_4 == 0) {
      puVar6 = auStack_278;
      _objc_copyWeak(puVar6,auStack_238);
      _objc_retain(puVar4);
      _objc_retain(lVar5);
      func_0x00010c12dac0(uVar8);
      _objc_release(lVar5);
      puVar3 = puVar4;
    }
    else {
      puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_268 = 0xc2000000;
      pcStack_260 = FUN_10675e014;
      puStack_258 = &UNK_11085dbf8;
      puVar6 = auStack_240;
      _objc_copyWeak(puVar6,auStack_238);
      _objc_retain(puVar4);
      puStack_250 = puVar4;
      _objc_retain(lVar5);
      lStack_248 = lVar5;
      func_0x00010befa980(uVar8);
      _objc_release(lStack_248);
      puVar3 = puStack_250;
    }
    _objc_release(puVar3);
    _objc_destroyWeak(puVar6);
    _objc_destroyWeak(auStack_238);
    _objc_release(lVar5);
    _objc_release(puVar4);
    return;
  }
  return;
}



/* Entry: 10675de90; end: 10675e013; -[SCMapPlaceFavoritesManager _postFavoritesChangeForPlaceID:favorited:placeInfo:] */

void FUN_10675de90(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  if (param_4 == 0) {
    puVar1 = auStack_78;
    _objc_copyWeak(puVar1,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010c12dac0(uVar2);
    _objc_release(param_5);
    uVar2 = param_3;
  }
  else {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10675e014;
    puStack_58 = &UNK_11085dbf8;
    puVar1 = auStack_40;
    _objc_copyWeak(puVar1,auStack_38);
    _objc_retain(param_3);
    uStack_50 = param_3;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x00010befa980(uVar2);
    _objc_release(uStack_48);
    uVar2 = uStack_50;
  }
  _objc_release(uVar2);
  _objc_destroyWeak(puVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10675e014; end: 10675e0eb;  */

void FUN_10675e014(long param_1,uint param_2)

{
  long lVar1;
  
  if ((param_2 & 1) == 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bed84c0();
    _objc_release(lVar1);
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb9100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10675e0ec; end: 10675e1b7; -[SCMapPlaceFavoritesManager _showFavoriteNotificationForPlaceInfo:favorited:showError:] */

void FUN_10675e0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10675e1b8;
  puStack_58 = &UNK_110859060;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_5;
  uStack_3f = param_4;
  _objc_retain(param_3);
  uStack_50 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10675e1b8; end: 10675e2bf;  */

void FUN_10675e1b8(long param_1)

{
  undefined1 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      uVar6 = *(undefined8 *)(lVar3 + 0x28);
      func_0x00010bf1f440(uVar6);
    }
    else {
      uVar6 = 0;
    }
    uVar7 = *(undefined8 *)(lVar3 + 0x18);
    uVar1 = *(undefined1 *)(param_1 + 0x31);
    uVar4 = *(undefined8 *)(lVar3 + 0x38);
    func_0x00010bf529e0(uVar4);
    cVar2 = *(char *)(param_1 + 0x30);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10675e2c0;
    puStack_68 = &UNK_110841f80;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uStack_60 = uVar5;
    lStack_58 = lVar3;
    if (cVar2 == '\x01') {
      func_0x000106877358(uVar7);
    }
    else {
      func_0x000106877430(uVar1,uVar4,uVar7,uVar6,&puStack_80);
    }
    _objc_release(uStack_60);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 10675e2c0; end: 10675e3bb;  */

void FUN_10675e2c0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126b1e58;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0fd0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0(*(undefined8 *)(param_2 + 0x20));
  uVar3 = param_1;
  func_0x00010c09abe0(*(undefined8 *)(param_2 + 0x20));
  func_0x00010c0ba320(param_1,uVar3,puVar2,param_3,&PTR____CFConstantStringClassReference_110e5b3d8,
                      0,0,0,0,uVar1,0,&PTR____CFConstantStringClassReference_110e3cd18,7,
                      &PTR____CFConstantStringClassReference_110e5b458,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1bc0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10675e3bc; end: 10675e3c3; -[SCMapPlaceFavoritesManager shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_10675e3bc(void)

{
  return 0;
}



/* Entry: 10675e3c4; end: 10675e3cf; -[SCMapPlaceFavoritesManager pushToValdiMarshaller:] */

undefined8 FUN_10675e3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df448;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 10675e3d0; end: 10675e3db; -[SCMapPlaceFavoritesManager arePlacesFavoritedWithPlaceIds:] */

undefined * FUN_10675e3d0(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 10675e3dc; end: 10675e3e3; -[SCMapPlaceFavoritesManager getFavoriteChangedObservable] */

void FUN_10675e3dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 10675e3e4; end: 10675e3eb; -[SCMapPlaceFavoritesManager getFavoritedPlaceIds] */

void FUN_10675e3e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf00570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_allObjects_11259db00)
  ;
  return;
}



/* Entry: 10675e3ec; end: 10675e3f3; -[SCMapPlaceFavoritesManager isPlaceFavoritedWithPlaceId:] */

void FUN_10675e3ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_containsObject__1125b07e8);
  return;
}



/* Entry: 10675e3f4; end: 10675e403; -[SCMapPlaceFavoritesManager onFavoriteChangedWithPlaceId:willBeFavorited:] */

void FUN_10675e3f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setFavoriteStatus_forPlaceID__1126443c8,param_4,param_3);
  return;
}



/* Entry: 10675e404; end: 10675e52f; -[SCMapPlaceFavoritesManager updateNativePlacePinForPlace:] */

void FUN_10675e404(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10675d41c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x40);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010bef8340(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 10675e530; end: 10675e6b7; -[SCMapPlaceFavoritesManager .cxx_destruct] */

void FUN_10675e530(long param_1)

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



/* Entry: 10675e6b8; end: 10675e82b; -[SCMapPlacesContentServiceProvider _favoritesManagerWithPlaceProfileService:favoritesService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10675e6b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126cd8e0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11274f6e0;
    _objc_loadWeakRetained(lVar6);
  }
  lVar3 = lVar6;
  func_0x00010c0dc640(lVar6);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11274f6e4;
    _objc_loadWeakRetained(lVar7);
  }
  lVar4 = lVar7;
  func_0x00010bf67f80(lVar7);
  _objc_retainAutoreleasedReturnValue();
  FUN_10675e82c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011860(puVar1,param_2,uVar2,param_3,lVar3,lVar4,lVar5);
  _objc_release(param_3);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10675e82c; end: 10675e84f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10675e82c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274f6ec);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10675e850; end: 10675eaaf; -[SCMapPlacesContentServiceProvider _placeDiscoveryServiceWithFavoritesManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10675e850(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = (long)_DAT_11274f6c4;
  _objc_retain(param_3);
  lVar10 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar1 = lVar10;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar10);
  puVar4 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126bc1b8;
  lVar10 = param_1 + _DAT_11274f6c8;
  _objc_loadWeakRetained(lVar10);
  lVar1 = lVar10;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106b13ab0(puVar5,&PTR____CFConstantStringClassReference_110e5b498,lVar3,lVar1,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar10);
  puVar6 = PTR_PTR_1126cd8e8;
  _objc_alloc(PTR_PTR_1126cd8e8);
  func_0x00010c058f80();
  puVar7 = PTR_PTR_1126cd8f0;
  _objc_alloc(PTR_PTR_1126cd8f0);
  lVar10 = param_1;
  FUN_10675eab0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar10;
  func_0x00010c0ba3c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010675ead4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  FUN_10675e82c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0287c0(puVar7);
  _objc_release(param_3);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar10);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10675eab0; end: 10675eaf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10675eab0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274f6d8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10675eaf8; end: 10675ec43; -[SCMapPlacesContentServiceProvider _placeFavoritesService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10675eaf8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126cd8f8;
  _objc_alloc(PTR_PTR_1126cd8f8);
  lVar2 = param_1;
  FUN_10675eab0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ba3c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11274f6dc;
    _objc_loadWeakRetained(lVar8);
  }
  lVar4 = lVar8;
  func_0x00010c0b9680(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010675ead4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  FUN_10675e82c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0287e0(puVar1,param_2,lVar3,lVar4,lVar6,lVar7);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10675ec44; end: 10675ede3; -[SCMapPlacesContentServiceProvider _visitsUpdater] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10675ec44(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  lVar1 = param_1 + _DAT_11274f6c4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126bc1b8;
  lVar1 = param_1 + _DAT_11274f6c8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106b139c8(puVar5,&PTR____CFConstantStringClassReference_110e5b4b8,lVar4,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126cd900;
  _objc_alloc(PTR_PTR_1126cd900);
  func_0x00010c058f80();
  puVar7 = PTR_PTR_1126cd908;
  _objc_alloc_init(PTR_PTR_1126cd908);
  puVar8 = PTR_PTR_1126cd910;
  _objc_alloc(PTR_PTR_1126cd910);
  param_1 = param_1 + _DAT_11274f6cc;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00ecc0(puVar8);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10675ede4; end: 10675ee87; -[SCMapPlacesContentServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10675ede4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274f6cc);
  _objc_destroyWeak(param_1 + _DAT_11274f6c4);
  _objc_destroyWeak(param_1 + _DAT_11274f6ec);
  _objc_destroyWeak(param_1 + _DAT_11274f6c8);
  _objc_destroyWeak(param_1 + _DAT_11274f6e8);
  _objc_destroyWeak(param_1 + _DAT_11274f6e4);
  _objc_destroyWeak(param_1 + _DAT_11274f6e0);
  _objc_destroyWeak(param_1 + _DAT_11274f6dc);
  _objc_destroyWeak(param_1 + _DAT_11274f6d8);
  _objc_destroyWeak(param_1 + _DAT_11274f6d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274f6d0);
  return;
}



/* Entry: 10675ee88; end: 10675ef67; -[SCMapPlacesContentServicesMapSetupEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10675ee88(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  FUN_10675ef68();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0fd080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11274f6f0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c1530a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7b80(lVar3,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10675ef68; end: 10675ef8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10675ef68(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274f6f8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10675ef8c; end: 10675f0a3; -[SCMapPlacesContentServicesMapSetupEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10675ef8c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_60;
  undefined *puStack_58;
  
  lVar1 = param_1;
  FUN_10675ef68();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0fd080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11274f6f0;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c1530a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cb20(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_58 = PTR_PTR_1126f2ed0;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10675f0a4; end: 10675f0e7; -[SCMapPlacesContentServicesMapSetupEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10675f0a4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274f6f8);
  _objc_destroyWeak(param_1 + _DAT_11274f6f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274f6f4);
  return;
}



/* Entry: 10675f0e8; end: 10675f2bb; -[SCMapPlaceDiscoveryService initWithMapUserNetworking:docObjectContext:placeFavoritesManager:mapSearchProxy:circumstanceEngine:] */

long * FUN_10675f0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                    undefined8 param_9,long *param_10,long param_11,long param_12,long param_13,
                    long param_14,undefined8 param_15)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_10;
  lVar9 = param_14;
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_70 = PTR_PTR_1126f2ed8;
  plVar2 = &lStack_78;
  lStack_78 = param_8;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  if (plVar2 != (long *)0x0) {
    _objc_retain(param_10);
    lVar3 = plVar2[1];
    plVar2[1] = (long)param_10;
    _objc_release(lVar3);
    _objc_retain(param_11);
    lVar3 = plVar2[2];
    plVar2[2] = param_11;
    _objc_release(lVar3);
    _objc_retain(param_12);
    lVar3 = plVar2[3];
    plVar2[3] = param_12;
    _objc_release(lVar3);
    *(undefined1 *)(plVar2 + 5) = 0;
    _objc_retain(&PTR____CFConstantStringClassReference_110e5b558);
    lVar3 = plVar2[4];
    plVar2[4] = (long)&PTR____CFConstantStringClassReference_110e5b558;
    _objc_release();
    *(undefined1 *)((long)plVar2 + 0x29) = 0;
    func_0x000109021db8();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      ppuStack_68 = &PTR____CFConstantStringClassReference_110dadcb8;
      plVar8 = &lStack_60;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_60 = lVar3;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = plVar2[6];
      plVar2[6] = (long)puVar4;
      _objc_release(lVar10);
    }
    _objc_retain(param_13);
    lVar10 = plVar2[7];
    plVar2[7] = param_13;
    _objc_release(lVar10);
    _objc_retain(param_14);
    lVar10 = plVar2[8];
    plVar2[8] = param_14;
    _objc_release(lVar10);
    _objc_release(lVar3);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar2;
  }
  ___stack_chk_fail();
  lVar3 = lStack_78;
  _objc_retain(plVar8);
  _objc_retain(lVar9);
  _objc_retain(param_15);
  _objc_retain(uStack_80);
  _objc_retain(lVar3);
  plVar2 = plVar8;
  func_0x00010c0fd320();
  _objc_retainAutoreleasedReturnValue();
  plVar5 = plVar2;
  func_0x00010c071f40();
  if (((int)plVar5 == 0) || (lVar10 = lVar9, func_0x00010c08fa60(), lVar10 == 0)) {
    _objc_release(plVar2);
  }
  else {
    iVar1 = (int)param_10[8];
    func_0x000109021f08();
    _objc_release(plVar2);
    if (iVar1 != 0) {
      func_0x00010be13c20(param_2,param_3,param_4,param_5,param_6,param_7,param_10);
      goto LAB_10675f5bc;
    }
  }
  plVar2 = param_10;
  func_0x00010be74180();
  _objc_retainAutoreleasedReturnValue();
  plVar5 = param_10;
  func_0x00010bdf1640(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  plVar6 = plVar5;
  func_0x00010c1c27a0();
  FUN_10675d388();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189420(plVar5);
  _objc_release(plVar6);
  puVar4 = PTR_PTR_1126bf180;
  _objc_alloc(PTR_PTR_1126bf180);
  _objc_opt_class(PTR_PTR_1126cd918);
  func_0x00010c05a180(puVar4);
  lVar7 = param_10[3];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar7;
  func_0x00010bfc5620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = param_10[1];
  func_0x00010c269d40(lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar3);
  _objc_retain(plVar8);
  _objc_retain(lVar10);
  _objc_retain(plVar5);
  func_0x00010bf9b020(lVar7);
  _objc_release(lVar7);
  _objc_release(lVar10);
  _objc_release(plVar8);
  _objc_release(lVar3);
  _objc_release(plVar5);
  _objc_release(lVar10);
  _objc_release(plVar5);
  _objc_release(puVar4);
  _objc_release(plVar2);
LAB_10675f5bc:
  _objc_release(lVar3);
  _objc_release(uStack_80);
  _objc_release(param_15);
  _objc_release(lVar9);
  _objc_release(plVar8);
  return plVar8;
}



/* Entry: 10675f2bc; end: 10675f613; -[SCMapPlaceDiscoveryService fetchPlacesDiscoveryWithPlacePivot:zoomLevel:boundingBox:initialOpen:userLocation:respectUserLocation:searchThisArea:searchQuery:networkSessionId:styleName:completion:] */

void FUN_10675f2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13,long param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  _objc_retain(param_10);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  uVar8 = param_10;
  func_0x00010c0fd320();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010c071f40();
  if (((int)uVar7 == 0) || (lVar2 = param_14, func_0x00010c08fa60(), lVar2 == 0)) {
    _objc_release(uVar8);
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_8 + 0x40);
    func_0x000109021f08();
    _objc_release(uVar8);
    if (iVar1 != 0) {
      func_0x00010be13c20(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_14,
                          param_13,param_16,param_17);
      goto LAB_10675f5bc;
    }
  }
  lVar2 = param_8;
  func_0x00010be74180(param_8,param_9,&PTR____CFConstantStringClassReference_110e5b518);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_8;
  func_0x00010bdf1640(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13,param_14,0,param_15,0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1c27a0();
  FUN_10675d388();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189420(lVar3,param_9,lVar4);
  _objc_release(lVar4);
  puVar5 = PTR_PTR_1126bf180;
  _objc_alloc(PTR_PTR_1126bf180);
  uVar8 = *(undefined8 *)(param_8 + 0x30);
  puVar6 = PTR_PTR_1126cd918;
  _objc_opt_class(PTR_PTR_1126cd918);
  func_0x00010c05a180(puVar5,param_9,lVar2,lVar3,uVar8,0,puVar6,0);
  uVar7 = *(undefined8 *)(param_8 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfc5620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_8 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10675f614;
  puStack_d0 = &UNK_1109393d8;
  lStack_c8 = lVar3;
  _objc_retain(param_17);
  uStack_b0 = param_17;
  _objc_retain(param_10);
  uStack_c0 = param_10;
  uStack_b8 = uVar8;
  _objc_retain(uVar8);
  _objc_retain(lVar3);
  func_0x00010bf9b020(uVar7,param_9,puVar5,&puStack_e8);
  _objc_release(uVar7);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_b0);
  _objc_release(lStack_c8);
  _objc_release(uVar8);
  _objc_release(lVar3);
  _objc_release(puVar5);
  _objc_release(lVar2);
LAB_10675f5bc:
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_10);
  return;
}



/* Entry: 10675f614; end: 10675fc6f;  */

void FUN_10675f614(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined *puVar27;
  long lVar28;
  undefined **ppuVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined8 uVar35;
  
  lVar32 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 == 0) {
    lVar28 = param_2;
    func_0x00010c0fdce0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar28 == 0) {
      lVar33 = *(long *)(param_1 + 0x38);
      ppuVar29 = &PTR____CFConstantStringClassReference_110e5b578;
      FUN_10675fc70(&PTR____CFConstantStringClassReference_110e5b578);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar33 + 0x10))(lVar33,0,0,0,ppuVar29);
      _objc_release(ppuVar29);
    }
    uVar30 = *(undefined8 *)(param_1 + 0x28);
    FUN_106758798(uVar30,lVar28,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    lVar33 = param_2;
    func_0x00010c0fd360(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar31 = lVar33;
    FUN_1067590dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar33);
    lVar34 = *(long *)(param_1 + 0x38);
    lVar33 = param_2;
    func_0x00010c11fa80(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar34 + 0x10))(lVar34,uVar30,lVar31,lVar33,0);
    _objc_release(lVar33);
    _objc_release(lVar31);
    _objc_release(uVar30);
    _objc_release(lVar28);
  }
  else {
    uVar35 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar35);
    func_0x00010c2bf220(uVar35);
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar30 = uVar35;
    func_0x00010bf20c00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar30;
    func_0x00010c0f07a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aca0();
    uVar3 = uVar35;
    func_0x00010bf20c00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0f07a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09abe0();
    uVar5 = uVar35;
    func_0x00010bf20c00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0f07c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aca0();
    uVar7 = uVar35;
    func_0x00010bf20c00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0f07c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09abe0();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c13b620();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar11 = uVar35;
    func_0x00010c292ce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aca0();
    uVar12 = uVar35;
    func_0x00010c292ce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09abe0();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar14 = uVar35;
    func_0x00010c153ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c1545c0();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar17 = uVar35;
    func_0x00010c0fd360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar19 = uVar35;
    func_0x00010c0ba120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar21 = uVar35;
    func_0x00010bf634c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar23 = uVar35;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar25 = uVar35;
    func_0x00010c11fac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar35);
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar26);
    _objc_release(uVar25);
    _objc_release(puVar24);
    _objc_release(uVar23);
    _objc_release(puVar22);
    _objc_release(uVar21);
    _objc_release(puVar20);
    _objc_release(uVar19);
    _objc_release(puVar18);
    _objc_release(uVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar30);
    _objc_release(puVar1);
    func_0x00010c0fdd00(param_2);
    _objc_release(puVar27);
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,0,0,param_3);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar32) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10675fc70; end: 10675fce3;  */

void FUN_10675fc70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,param_1,
                      *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e5b5b8,200,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10675fce4; end: 10675fe77; -[SCMapPlaceDiscoveryService fetchPlacePivotsForPlaceIds:completion:] */

void FUN_10675fce4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be74180(param_1,param_2,&PTR____CFConstantStringClassReference_110e5b538);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cd920;
  _objc_alloc_init(PTR_PTR_1126cd920);
  uVar5 = param_3;
  func_0x00010c0d3c80(param_3);
  _objc_release(param_3);
  func_0x00010c1dc3c0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  FUN_10675d388();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189420(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126bf180;
  _objc_alloc(PTR_PTR_1126bf180);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar4 = PTR_PTR_1126cd928;
  _objc_opt_class(PTR_PTR_1126cd928);
  func_0x00010c05a180(puVar3,param_2,lVar1,puVar2,uVar5,0,puVar4,0);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10675fe78;
  puStack_50 = &UNK_110939408;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010bf9b020(uVar5,param_2,puVar3,&puStack_68);
  _objc_release(uVar5);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 10675fe78; end: 10675feff;  */

void FUN_10675fe78(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010675fea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
    return;
  }
  func_0x00010c0fc900(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000106759414();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10675ff00; end: 106760147; -[SCMapPlaceDiscoveryService _fetchSearchResultsViaProxy:boundingBox:userLocation:searchThisArea:styleName:completion:] */

void FUN_10675ff00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_9);
  func_0x000109021f1c();
  puVar1 = PTR_PTR_1126cd930;
  _objc_alloc_init(PTR_PTR_1126cd930);
  func_0x00010c1e6360();
  _objc_release();
  FUN_1067586d8(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(puVar1);
  _objc_release();
  _CLLocationCoordinate2DIsValid(param_5,param_6);
  if ((int)param_9 != 0) {
    FUN_106758688(param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21eb20(puVar1);
    _objc_release(param_9);
  }
  func_0x00010c1f8bc0(puVar1);
  func_0x00010c206c40(puVar1);
  func_0x00010c1c27a0(puVar1);
  _objc_release(param_11);
  uVar2 = *(undefined8 *)(param_7 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc5620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126bc1b8;
  func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_7 + 0x38);
  _objc_retain(uVar3);
  _objc_retain(param_12);
  func_0x00010c154980(uVar2);
  _objc_release(uVar3);
  _objc_release(param_12);
  _objc_release(uVar3);
  _objc_release(param_12);
  _objc_release(puVar4);
  _objc_release(puVar1);
  return;
}



/* Entry: 106760148; end: 106760257;  */

void FUN_106760148(long param_1,undefined **param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    if (param_2 == (undefined **)0x0) {
      lVar3 = *(long *)(param_1 + 0x28);
      ppuVar2 = &PTR____CFConstantStringClassReference_110e5b598;
      FUN_10675fc70(&PTR____CFConstantStringClassReference_110e5b598);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,0,0,0,ppuVar2);
    }
    else {
      ppuVar1 = param_2;
      func_0x00010c0fdc80(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar1;
      FUN_106759590();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
                (*(long *)(param_1 + 0x28),ppuVar2,PTR____NSArray0__struct_11034ab48,0,0);
    }
    _objc_release(ppuVar2);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0,0,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106760258; end: 1067602eb; -[SCMapPlaceDiscoveryService _placeDiscoveryUrlWithEndpoint:] */

void FUN_106760258(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e06c58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067602ec; end: 106760523; -[SCMapPlaceDiscoveryService _createPlaceDiscoveryRequest:zoomLevel:boundingBox:initialOpen:userLocation:respectUserLocation:searchThisArea:searchQuery:showRankingDebug:networkSessionId:rankingFlavorId:] */

void FUN_1067602ec(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,int param_12,
                  undefined8 param_13,long param_14,undefined4 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_10);
  _objc_retain(param_16);
  puVar1 = PTR_PTR_1126cd938;
  _objc_retain(param_17);
  _objc_retain(param_14);
  _objc_alloc_init(puVar1);
  func_0x00010c1d7e80();
  func_0x00010c1da5a0(puVar1,param_9,0x1e);
  puVar2 = PTR_PTR_1126cd940;
  _objc_alloc_init(PTR_PTR_1126cd940);
  func_0x00010c1d8b20();
  func_0x00010c227be0(puVar2,param_9,(int)param_1);
  puVar3 = puVar2;
  func_0x00010c227c20(param_1,puVar2);
  FUN_1067586d8(param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(puVar2,param_9,puVar3);
  _objc_release(puVar3);
  func_0x00010c1ece60(puVar2,param_9,param_11);
  func_0x00010c1f8bc0(puVar2,param_9,param_13);
  func_0x00010c1f86a0(puVar2,param_9,param_14);
  _objc_release(param_14);
  if (param_10 != 0) {
    param_14 = param_10;
    FUN_106758ef4(param_10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_9,param_14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc640(puVar2,param_9,puVar3);
    _objc_release(puVar3);
    _objc_release(param_14);
  }
  if (param_12 != 0) {
    FUN_106758688(param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21eb20(puVar2,param_9,param_14);
    _objc_release(param_14);
  }
  func_0x00010c1fda20(puVar2,param_9,param_16);
  func_0x00010c1e72e0(puVar2,param_9,param_15);
  func_0x00010c1e7340(puVar2,param_9,param_17);
  _objc_release(param_17);
  _objc_release(puVar1);
  _objc_release(param_16);
  _objc_release(param_10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106760524; end: 10676058f; -[SCMapPlaceDiscoveryService .cxx_destruct] */

void FUN_106760524(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106760590; end: 106760683; -[SCMapPlaceFavoritesService initWithMapUserNetworking:mapPeopleFriendsProvider:docObjectContext:circumstanceEngine:] */

undefined1 *
FUN_106760590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f2ee0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = 0;
    _objc_retain(&PTR____CFConstantStringClassReference_110e5b7d8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined ***)((long)puVar1 + 0x28) = &PTR____CFConstantStringClassReference_110e5b7d8;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106760684; end: 10676083f; -[SCMapPlaceFavoritesService fetchFavoritedPlacesWithCompletion:] */

void FUN_106760684(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bde6dc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_1;
    func_0x00010be0e860(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cd948;
    _objc_alloc_init(PTR_PTR_1126cd948);
    puVar4 = PTR_PTR_1126bf180;
    _objc_opt_class(PTR_PTR_1126cd950);
    func_0x00010c1371c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,param_1);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bf9b020(uVar5);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_60);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3,lVar1,0);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106760840; end: 106760a3b;  */

void FUN_106760840(long param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_150;
  long lStack_148;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar1 = param_2;
    func_0x00010c0fd180();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0fdc80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    param_4 = auStack_e8;
    lVar1 = lVar2;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      unaff_x25 = *plStack_120;
      do {
        unaff_x26 = 0;
        do {
          if (*plStack_120 != unaff_x25) {
            _objc_enumerationMutation(lVar2);
          }
          unaff_x24 = *(undefined8 *)(lStack_128 + unaff_x26 * 8);
          func_0x00010c0fd0e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(param_3);
          _objc_release(unaff_x24);
          unaff_x26 = unaff_x26 + 1;
        } while (lVar1 != unaff_x26);
        param_4 = auStack_e8;
        lVar1 = lVar2;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar2);
    unaff_x22 = *(undefined **)(param_1 + 0x20);
    unaff_x23 = param_3;
    func_0x00010bf51e00();
    puVar6 = (undefined *)0x0;
    (**(code **)(unaff_x22 + 0x10))(unaff_x22,unaff_x23);
    _objc_release(unaff_x23);
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      unaff_x22 = param_3;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = unaff_x22;
      func_0x00010bedd0c0(lVar1);
      _objc_release(unaff_x22);
      _objc_release(lVar1);
      param_1 = lVar1;
    }
    _objc_release(param_3);
  }
  else {
    puVar6 = param_3;
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
  lVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106760a3c;
  lStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  uStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  lStack_158 = param_1;
  puStack_150 = param_3;
  lStack_148 = param_2;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(param_4);
  lVar2 = lVar1;
  func_0x00010be0e860(lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cd958;
  _objc_alloc_init(PTR_PTR_1126cd958);
  func_0x00010c1dc3a0();
  puVar4 = PTR_PTR_1126bf180;
  _objc_opt_class(PTR_PTR_1126cd960);
  func_0x00010c1371c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_188,lVar1);
  uVar5 = *(undefined8 *)(lVar1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_copyWeak(auStack_190,auStack_188);
  _objc_retain(puVar6);
  func_0x00010bf9b020(uVar5);
  _objc_release(uVar5);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_190);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_188);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(puVar6);
  return;
}



/* Entry: 106760a3c; end: 106760bef; -[SCMapPlaceFavoritesService addPlaceToFavoritesWithPlaceID:completion:] */

void FUN_106760a3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be0e860(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cd958;
  _objc_alloc_init(PTR_PTR_1126cd958);
  func_0x00010c1dc3a0();
  puVar3 = PTR_PTR_1126bf180;
  _objc_opt_class(PTR_PTR_1126cd960);
  func_0x00010c1371c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010bf9b020(uVar4);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106760bf0; end: 106760c4f;  */

void FUN_106760bf0(long param_1,undefined8 param_2,long param_3)

{
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_3 == 0);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bedd0e0(param_1);
    func_0x00010bde0be0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106760c50; end: 106760e03; -[SCMapPlaceFavoritesService removePlaceFromFavoritesWithPlaceID:completion:] */

void FUN_106760c50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be0e860(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cd968;
  _objc_alloc_init(PTR_PTR_1126cd968);
  func_0x00010c1dc3a0();
  puVar3 = PTR_PTR_1126bf180;
  _objc_opt_class(PTR_PTR_1126cd970);
  func_0x00010c1371c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010bf9b020(uVar4);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106760e04; end: 106760e73;  */

void FUN_106760e04(long param_1,undefined8 param_2,long param_3)

{
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_3 == 0);
  if (param_3 == 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      func_0x00010bedd0e0();
      func_0x00010bde0be0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 106760e74; end: 106760f07; -[SCMapPlaceFavoritesService _favoritesUrlWithEndpoint:] */

void FUN_106760e74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e06c58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106760f08; end: 106760ff3; -[SCMapPlaceFavoritesService _constructPlaceFavoritesFromCacheResponse] */

void FUN_106760f08(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_106765bd0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = lVar2;
    func_0x00010c15eb00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1900(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106760ff4; end: 106761143; -[SCMapPlaceFavoritesService _updatePlaceFavoritesCacheWithFavoritesArray:] */

void FUN_106760ff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long lStack_48;
  
  _objc_retain(param_3);
  lStack_48 = 0;
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_48;
  _objc_retain(lStack_48);
  if (lVar1 == 0) {
    _objc_initWeak(auStack_50,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_50);
    _objc_retain(puVar2);
    func_0x00010c0f8500(uVar3);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106761144; end: 10676119f;  */

void FUN_106761144(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    FUN_106766064(param_2,*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067611a0; end: 10676126b; -[SCMapPlaceFavoritesService _updatePlaceFavoritesCacheWithPlaceID:isFavorited:] */

void FUN_1067611a0(ulong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bde6dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  if (uVar2 != 0) {
    uVar1 = uVar2;
    func_0x00010bf4b900(uVar2,param_2,param_3);
    if (param_4 == 0) {
      if ((int)uVar1 == 0) goto LAB_10676124c;
      func_0x00010c12d360(uVar2,param_2,param_3);
    }
    else {
      if ((uVar1 & 1) != 0) goto LAB_10676124c;
      func_0x00010befa120(uVar2,param_2,param_3);
    }
    uVar1 = uVar2;
    func_0x00010bf00560(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedd0c0(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
LAB_10676124c:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10676126c; end: 10676138b; -[SCMapPlaceFavoritesService _clearPlaceAnnotationsCacheItemForPlaceID:] */

void FUN_10676126c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e5b7f8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_106765bd0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0f8500(uVar4);
    _objc_release(uVar4);
    _objc_release(puVar1);
  }
  _objc_release(lVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 10676138c; end: 10676139b;  */

void FUN_10676138c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  lVar1 = param_2;
  FUN_106765bd0(param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126cda38;
    FUN_106766dd4(PTR_PTR_1126cda38,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10676139c; end: 1067613ef; -[SCMapPlaceFavoritesService .cxx_destruct] */

void FUN_10676139c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067613f0; end: 106761597; -[SCMapPlaceProfileService initWithMapUserNetworking:docObjectContext:mapNetworkCacheManager:circumstanceEngine:userLocationHelpers:basemapPersonalization:] */

undefined1 *
FUN_1067613f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f2ee8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cd978;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x000109021da4();
    *(char *)((long)puVar1 + 0x31) = (char)uVar2;
    *(undefined1 *)((long)puVar1 + 0x30) = 0;
    func_0x000109021e0c();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 0x32) = 0;
    puVar3 = PTR__OBJC_CLASS___MKDistanceFormatter_1126b1f88;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106761598; end: 1067618b3; -[SCMapPlaceProfileService fetchPlaceProfileForPlaceID:source:styleName:completion:] */

void FUN_106761598(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_2;
  func_0x00010bde6de0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) || ((*(byte *)(param_2 + 0x32) & 1) != 0)) {
    lVar2 = param_2;
    func_0x00010be74240(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cd980;
    _objc_alloc_init(PTR_PTR_1126cd980);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc3c0(puVar3);
    _objc_release(puVar4);
    func_0x00010c1ebc00(puVar3);
    func_0x00010c1c27a0(puVar3);
    func_0x00010c222c00(puVar3);
    puVar4 = PTR_PTR_1126ae740;
    _objc_opt_new(PTR_PTR_1126ae740);
    func_0x00010befc800();
    func_0x00010befc800(puVar4);
    func_0x00010befc800(puVar4);
    func_0x00010befc800(puVar4);
    func_0x00010befc800(puVar4);
    func_0x00010befc800(puVar4);
    func_0x00010befc800(puVar4);
    func_0x00010c1c8f80(puVar3);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126bf180;
    _objc_alloc(PTR_PTR_1126bf180);
    _objc_opt_class(PTR_PTR_1126cd988);
    func_0x00010c05a180(puVar4);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f320();
    _objc_release(puVar5);
    _objc_initWeak(auStack_78,param_2);
    uVar6 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_78);
    _objc_retain(param_7);
    uStack_80 = param_1;
    _objc_retain(param_4);
    func_0x00010bf9b020(uVar6);
    _objc_release(uVar6);
    _objc_release(param_4);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  else {
    (**(code **)(param_7 + 0x10))(param_7,lVar1,0);
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1067618b4; end: 106761b83;  */

void FUN_1067618b4(long param_1,undefined **param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_106761b4c;
  if (param_3 != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,param_3);
    goto LAB_106761b4c;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010be545c0(uVar10,lVar1);
  ppuVar2 = param_2;
  func_0x00010c0fd440();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  if (ppuVar3 == (undefined **)0x0) {
    lVar9 = *(long *)(param_1 + 0x28);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e5b8f8;
    FUN_106761b84(&PTR____CFConstantStringClassReference_110e5b8f8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar9 + 0x10))(lVar9,0,ppuVar2);
  }
  else {
    ppuVar8 = ppuVar3;
    func_0x00010c0fd100();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar8;
    func_0x00010bfc1860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar4;
    func_0x00010bf34aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(ppuVar8);
    if (ppuVar2 == (undefined **)0x0) {
      lVar9 = *(long *)(param_1 + 0x28);
      ppuVar8 = &PTR____CFConstantStringClassReference_110e5b918;
LAB_106761b10:
      FUN_106761b84(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar9 + 0x10))(lVar9,0,ppuVar8);
    }
    else {
      ppuVar8 = ppuVar3;
      func_0x00010bfda420();
      if (((ulong)ppuVar8 & 1) == 0) {
        lVar9 = *(long *)(param_1 + 0x28);
        ppuVar8 = &PTR____CFConstantStringClassReference_110e5b938;
        goto LAB_106761b10;
      }
      ppuVar8 = ppuVar3;
      func_0x00010bfda440();
      if (((ulong)ppuVar8 & 1) == 0) {
        lVar9 = *(long *)(param_1 + 0x28);
        ppuVar8 = &PTR____CFConstantStringClassReference_110e5b958;
        goto LAB_106761b10;
      }
      ppuVar8 = ppuVar3;
      func_0x00010bfda3e0();
      if (((ulong)ppuVar8 & 1) == 0) {
        lVar9 = *(long *)(param_1 + 0x28);
        ppuVar8 = &PTR____CFConstantStringClassReference_110e5b978;
        goto LAB_106761b10;
      }
      ppuVar8 = ppuVar3;
      FUN_10675bd90(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar8;
      func_0x00010bfedda0(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08aca0();
      ppuVar6 = ppuVar8;
      uVar11 = uVar10;
      func_0x00010bfedda0(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09abe0();
      uVar7 = uVar5;
      func_0x00010bfc5c20(uVar10,uVar11,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c190aa0(ppuVar8);
      _objc_release(uVar7);
      _objc_release(ppuVar6);
      _objc_release(ppuVar4);
      _objc_release(uVar5);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),ppuVar8,0);
      func_0x00010bedd140(lVar1);
    }
    _objc_release(ppuVar8);
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar3);
LAB_106761b4c:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106761b84; end: 106761bf7;  */

void FUN_106761b84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,param_1,
                      *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e5ba78,200,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106761bf8; end: 106761d43; -[SCMapPlaceProfileService fetchInfoForPlaceID:source:sourceSpecific:styleName:completion:] */

void FUN_106761bf8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  puVar2 = puVar1;
  func_0x00010bfa7a80(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)(param_3 + 0x20);
  if (puVar2 != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000106761d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar3,0);
    return;
  }
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106761d44; end: 106761da7;  */

void FUN_106761d44(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106761d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106761da8; end: 10676239f; -[SCMapPlaceProfileService fetchInfoForPlaces:source:sourceSpecific:respectOrder:styleName:completion:] */

void FUN_106761da8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,byte param_6,long param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  code *pcVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined1 auStack_158 [8];
  byte bStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar7 = param_1;
  func_0x00010be74240();
  _objc_retainAutoreleasedReturnValue();
  if ((*(byte *)(param_1 + 0x32) & 1) == 0) {
    puVar6 = *(undefined **)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126cd990);
    puVar12 = puVar6;
    func_0x00010bf166a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  else {
    puVar12 = (undefined *)0x0;
  }
  puVar1 = puVar12;
  func_0x00010bf26f60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar1 != (undefined *)0x0) {
    puVar6 = puVar1;
  }
  _objc_retain(puVar6);
  _objc_release(puVar1);
  puVar1 = puVar12;
  func_0x00010c0ceb40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010bf529e0();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (puVar3 == (undefined *)0x0) {
    puVar1 = puVar6;
    FUN_10675d0e4();
    _objc_retainAutoreleasedReturnValue();
    if ((param_6 & 1) == 0) {
      puVar3 = puVar1;
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = param_3;
      FUN_10675d220(param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar13 = puVar3;
    func_0x00010bf529e0();
    if (puVar13 == (undefined *)0x0) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110e5b998;
      FUN_106761b84();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = (undefined *)0x0;
      ppuVar9 = ppuVar10;
      (**(code **)(param_8 + 0x10))(param_8);
      _objc_release(ppuVar10);
    }
    else {
      ppuVar9 = (undefined **)0x0;
      puVar13 = puVar3;
      (**(code **)(param_8 + 0x10))(param_8);
    }
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  else {
    func_0x00010bf529e0(puVar2);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(param_3);
    puVar3 = param_3;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar15 = *plStack_130;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_130 != lVar15) {
            _objc_enumerationMutation(param_3);
          }
          puVar4 = puVar2;
          func_0x00010bf4b900();
          if (((int)puVar4 != 0) &&
             (puVar4 = puVar1, func_0x00010bf4b900(), ((ulong)puVar4 & 1) == 0)) {
            func_0x00010befa120(puVar1);
          }
          puVar13 = puVar13 + 1;
        } while (puVar3 != puVar13);
        puVar3 = param_3;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(param_3);
    puVar3 = PTR_PTR_1126cd980;
    _objc_alloc_init();
    func_0x00010c1dc3c0();
    func_0x00010c1ebc00(puVar3);
    lVar15 = param_7;
    func_0x00010c08fa60();
    if (lVar15 == 0) {
      lVar15 = param_1;
      func_0x00010bdf97a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c27a0(puVar3);
      _objc_release(lVar15);
    }
    else {
      func_0x00010c1c27a0(puVar3);
    }
    func_0x00010c222c00(puVar3);
    puVar4 = PTR_PTR_1126ae740;
    _objc_opt_new();
    func_0x00010befc800();
    func_0x00010befc800(puVar4);
    func_0x00010befc800(puVar4);
    func_0x00010c1c8f80(puVar3);
    ppuVar10 = (undefined **)PTR_PTR_1126bf180;
    _objc_alloc();
    _objc_opt_class(PTR_PTR_1126cd988);
    func_0x00010c05a180();
    _objc_initWeak(auStack_148,param_1);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = auStack_148;
    _objc_copyWeak(auStack_158);
    _objc_retain(param_5);
    _objc_retain(puVar2);
    _objc_retain(param_8);
    _objc_retain(puVar6);
    _objc_retain(param_3);
    _objc_retain(lVar7);
    ppuVar9 = ppuVar10;
    bStack_150 = param_6;
    func_0x00010bf9b020(uVar5);
    _objc_release(uVar5);
    _objc_release(lVar7);
    _objc_release(param_3);
    _objc_release(puVar6);
    _objc_release(param_8);
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_158);
    _objc_destroyWeak(auStack_148);
    _objc_release(ppuVar10);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar12);
  _objc_release(lVar7);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_158);
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume();
  _objc_retain(puVar13);
  _objc_retain(ppuVar9);
  if (ppuVar9 != (undefined **)0x0) {
    puVar12 = param_3 + 0x50;
    _objc_loadWeakRetained(puVar12);
    func_0x00010bf529e0(*(undefined8 *)(param_3 + 0x28));
    func_0x00010be545a0(puVar12);
    _objc_release(puVar12);
    (**(code **)(*(long *)(param_3 + 0x48) + 0x10))(*(long *)(param_3 + 0x48),0,ppuVar9);
    goto LAB_106762528;
  }
  puVar12 = puVar13;
  func_0x00010c0fd460();
  puVar6 = *(undefined **)(param_3 + 0x28);
  func_0x00010bf529e0();
  if (puVar12 < puVar6) {
    func_0x00010bf529e0(*(undefined8 *)(param_3 + 0x28));
    func_0x00010c0fd460(puVar13);
    puVar12 = param_3 + 0x50;
    _objc_loadWeakRetained(puVar12);
    func_0x00010be545a0();
    _objc_release(puVar12);
    puVar12 = puVar13;
    func_0x00010c0fd460();
    if (puVar12 != (undefined *)0x0) goto LAB_10676248c;
    lVar7 = *(long *)(param_3 + 0x30);
    func_0x00010bf529e0();
    if (lVar7 != 0) goto LAB_10676248c;
    lVar7 = *(long *)(param_3 + 0x48);
    ppuVar10 = &PTR____CFConstantStringClassReference_110e5b998;
    FUN_106761b84(&PTR____CFConstantStringClassReference_110e5b998);
    _objc_retainAutoreleasedReturnValue();
    pcVar11 = *(code **)(lVar7 + 0x10);
    ppuVar8 = (undefined **)0x0;
    ppuVar14 = ppuVar10;
LAB_1067624e4:
    (*pcVar11)(lVar7,ppuVar8,ppuVar10);
    ppuVar8 = ppuVar14;
  }
  else {
LAB_10676248c:
    ppuVar10 = (undefined **)(param_3 + 0x50);
    _objc_loadWeakRetained();
    ppuVar8 = ppuVar10;
    func_0x00010be741c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar10);
    ppuVar10 = ppuVar8;
    func_0x00010bf529e0();
    lVar7 = *(long *)(param_3 + 0x48);
    if (ppuVar10 != (undefined **)0x0) {
      pcVar11 = *(code **)(lVar7 + 0x10);
      ppuVar10 = (undefined **)0x0;
      ppuVar14 = ppuVar8;
      goto LAB_1067624e4;
    }
    ppuVar10 = &PTR____CFConstantStringClassReference_110e5b9b8;
    FUN_106761b84(&PTR____CFConstantStringClassReference_110e5b9b8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar7 + 0x10))(lVar7,0,ppuVar10);
    _objc_release(ppuVar10);
  }
  _objc_release(ppuVar8);
LAB_106762528:
  _objc_release(ppuVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar13);
  return;
}



/* Entry: 1067623a0; end: 106762577;  */

void FUN_1067623a0(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  code *pcVar6;
  undefined **ppuVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar3 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010be545a0(lVar3);
    _objc_release(lVar3);
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0,param_3);
    goto LAB_106762528;
  }
  uVar1 = param_2;
  func_0x00010c0fd460();
  uVar2 = *(ulong *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c0fd460(param_2);
    lVar3 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar3);
    func_0x00010be545a0();
    _objc_release(lVar3);
    uVar1 = param_2;
    func_0x00010c0fd460();
    if (uVar1 != 0) goto LAB_10676248c;
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010bf529e0();
    if (lVar3 != 0) goto LAB_10676248c;
    lVar3 = *(long *)(param_1 + 0x48);
    ppuVar5 = &PTR____CFConstantStringClassReference_110e5b998;
    FUN_106761b84(&PTR____CFConstantStringClassReference_110e5b998);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = *(code **)(lVar3 + 0x10);
    ppuVar4 = (undefined **)0x0;
    ppuVar7 = ppuVar5;
LAB_1067624e4:
    (*pcVar6)(lVar3,ppuVar4,ppuVar5);
    ppuVar4 = ppuVar7;
  }
  else {
LAB_10676248c:
    ppuVar5 = (undefined **)(param_1 + 0x50);
    _objc_loadWeakRetained();
    ppuVar4 = ppuVar5;
    func_0x00010be741c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    ppuVar5 = ppuVar4;
    func_0x00010bf529e0();
    lVar3 = *(long *)(param_1 + 0x48);
    if (ppuVar5 != (undefined **)0x0) {
      pcVar6 = *(code **)(lVar3 + 0x10);
      ppuVar5 = (undefined **)0x0;
      ppuVar7 = ppuVar4;
      goto LAB_1067624e4;
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110e5b9b8;
    FUN_106761b84(&PTR____CFConstantStringClassReference_110e5b9b8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,0,ppuVar5);
    _objc_release(ppuVar5);
  }
  _objc_release(ppuVar4);
LAB_106762528:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106762578; end: 106762923; -[SCMapPlaceProfileService _placeInfoModelsFromResponse:cachedProfilesById:placeIds:sourceSpecific:url:respectOrder:] */

void FUN_106762578(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  FUN_10675d0e4();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c0fd440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      lVar15 = *(long *)(lVar16 * 8);
      lVar7 = lVar15;
      func_0x00010c0fd100();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bfc1860();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf34aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar7);
      if (lVar9 == 0) {
        func_0x00010be545a0(param_1);
      }
      else {
        FUN_10675af84();
        _objc_retainAutoreleasedReturnValue();
        if (lVar15 == 0) {
          func_0x00010be545a0(param_1);
        }
        else {
          lVar7 = lVar15;
          func_0x00010c0fd0e0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010c08fa60();
          if (lVar8 == 0) {
            func_0x00010be545a0(param_1);
          }
          else {
            func_0x00010befa120(puVar2);
            func_0x00010c1d0640(puVar3);
            func_0x00010c1d0640(puVar4);
          }
          _objc_release(lVar7);
        }
        _objc_release(lVar15);
      }
      _objc_release(lVar9);
      lVar16 = lVar16 + 1;
    } while (lVar6 != lVar16);
    lVar6 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  func_0x00010bdd2ca0(param_1);
  func_0x00010bf529e0(puVar2);
  uVar12 = 1;
  func_0x00010be545a0(param_1);
  if (param_8 == 0) {
    uVar14 = param_4;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar14;
    func_0x00010c0d3c80();
    _objc_release(uVar14);
    puVar11 = puVar2;
    func_0x00010befa160(uVar10);
  }
  else {
    uVar14 = param_4;
    func_0x00010c0d3c80(param_4);
    puVar11 = puVar3;
    func_0x00010bef7f60();
    uVar10 = param_5;
    FUN_10675d220(param_5,uVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
    return;
  }
  ___stack_chk_fail();
  if ((*(byte *)(param_3 + 0x32) & 1) != 0) {
    return;
  }
  uVar14 = *(undefined8 *)(param_3 + 0x18);
  _objc_retain(uVar12);
  _objc_retain(puVar11);
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf16680(0x40cc200000000000);
  _objc_release(uVar12);
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar14);
  return;
}



/* Entry: 106762924; end: 1067629af; -[SCMapPlaceProfileService _batchCachePlaceProfiles:forUrl:] */

void FUN_106762924(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x32) & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf16680(0x40cc200000000000);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067629b0; end: 106762be7; -[SCMapPlaceProfileService fetchComponentsForPlaceID:placeComponentType:topN:styleName:usePlaceCards:completion:] */

void FUN_1067629b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_8);
  lVar1 = param_1;
  func_0x00010be74240(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cd998;
  _objc_alloc_init(PTR_PTR_1126cd998);
  func_0x00010c1dc3a0();
  func_0x00010c217540(puVar2);
  func_0x00010c1c27a0(puVar2);
  func_0x00010c1dc300(puVar2);
  puVar3 = PTR_PTR_1126ae740;
  _objc_opt_new(PTR_PTR_1126ae740);
  func_0x00010befc800();
  func_0x00010c1dc2e0(puVar2);
  puVar4 = PTR_PTR_1126bf180;
  _objc_alloc(PTR_PTR_1126bf180);
  _objc_opt_class(PTR_PTR_1126cd9a0);
  func_0x00010c05a180(puVar4);
  _objc_initWeak(auStack_68,param_1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_8);
  uStack_70 = param_7;
  func_0x00010bf9b020(uVar5);
  _objc_release(uVar5);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 106762be8; end: 106762d4b;  */

void FUN_106762be8(long param_1,undefined **param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      ppuVar2 = param_2;
      func_0x00010c0fcf00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar2 == (undefined **)0x0) {
        lVar4 = *(long *)(param_1 + 0x20);
        ppuVar2 = &PTR____CFConstantStringClassReference_110e5b9d8;
        FUN_106761b84(&PTR____CFConstantStringClassReference_110e5b9d8);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar4 + 0x10))(lVar4,0,ppuVar2);
      }
      else {
        ppuVar3 = param_2;
        func_0x00010c0fcf00(param_2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar3;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),ppuVar2,0);
      }
      _objc_release(ppuVar2);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_3);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106762d4c; end: 106762ef7;  */

void FUN_106762d4c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0fcee0(param_2);
  FUN_10675c9f4();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b20f0;
  _objc_alloc(PTR_PTR_1126b20f0);
  lVar3 = param_2;
  func_0x00010bf44520(param_2);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010c000680(puVar2);
  }
  else {
    lVar4 = param_2;
    func_0x00010c0fdd20(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    FUN_10675c530();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000680(puVar2);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  if ((*(char *)(param_1 + 0x28) == '\x01') && (lVar3 = param_2, func_0x00010c0fdd40(), lVar3 != 0))
  {
    lVar3 = param_2;
    func_0x00010c0fdd20(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010c1dc2c0(puVar2);
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106762ef8; end: 10676300f;  */

void FUN_106762ef8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_10675ccc8();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08aca0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c09abe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c08aca0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      lVar2 = param_3;
      uVar5 = param_1;
      func_0x00010c09abe0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      uVar4 = uVar3;
      func_0x00010bfc5c20(param_1,uVar5,uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c190aa0(param_3);
      _objc_release(uVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106763010; end: 10676328b; -[SCMapPlaceProfileService fetchCheckInNearbyPlacesForLocation:placesLimit:source:completion:] */

void FUN_106763010(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010be74240(param_1,param_2,&PTR____CFConstantStringClassReference_110e505d8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126befb8;
  _objc_alloc_init(PTR_PTR_1126befb8);
  func_0x00010bf51c80(param_3);
  func_0x00010c1b9120(puVar2);
  func_0x00010bf51c80(param_3);
  func_0x00010c1be5e0(puVar2);
  func_0x00010c1dcdc0(puVar2,param_2,param_4);
  func_0x00010bfe4080(param_3);
  func_0x00010c1a3ee0(puVar2);
  FUN_10675af60(param_5);
  func_0x00010c1cbba0(puVar2,param_2,param_5);
  func_0x00010c1cbb80(puVar2,param_2,0);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf51c80(param_3);
  func_0x00010bf51c80(param_3);
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e5b9f8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cd9a8;
  _objc_alloc(PTR_PTR_1126cd9a8);
  func_0x00010c01bc00(0x4072c00000000000);
  puVar5 = PTR_PTR_1126bf180;
  _objc_alloc(PTR_PTR_1126bf180);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  puVar6 = PTR_PTR_1126cac58;
  _objc_opt_class(PTR_PTR_1126cac58);
  func_0x00010c05a180(puVar5,param_2,lVar1,puVar2,uVar7,puVar4,puVar6,0);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar8);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10676328c;
  puStack_90 = &UNK_110939618;
  uStack_88 = param_3;
  uStack_80 = uVar8;
  uStack_78 = param_6;
  _objc_retain(uVar8);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010bf9b020(uVar7,param_2,puVar5,&puStack_a8);
  _objc_release(uVar7);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_78);
  _objc_release(uVar8);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 10676328c; end: 1067633e7;  */

void FUN_10676328c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar2 = param_2;
    func_0x00010c0d6fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x30);
      ppuVar3 = &PTR____CFConstantStringClassReference_110e5ba18;
      FUN_106761b84(&PTR____CFConstantStringClassReference_110e5ba18);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,0,ppuVar3);
    }
    else {
      lVar2 = param_2;
      func_0x00010c0d6fe0(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = *(undefined ***)(param_1 + 0x20);
      _objc_retain(ppuVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar4);
      lVar1 = lVar2;
      func_0x00010c0b8600(lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),lVar1,0);
      _objc_release(lVar1);
      _objc_release(uVar4);
    }
    _objc_release(ppuVar3);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067633e8; end: 1067634f3;  */

void FUN_1067633e8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
  _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
  uVar2 = param_3;
  func_0x00010c09ea00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  uVar3 = param_3;
  uVar5 = param_1;
  func_0x00010c09ea00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09abe0();
  func_0x00010c021a60(param_1,uVar5,puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0fd6a0();
  if ((int)uVar2 == 1) {
    puVar4 = puVar1;
    FUN_10675cba8(puVar1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  uVar2 = param_3;
  FUN_10675ca1c(param_3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1067634f4; end: 1067636a7; -[SCMapPlaceProfileService fetchNearbyPlacesFromLat:lng:placesLimit:source:completion:] */

void FUN_1067634f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010be74240(param_3,param_4,&PTR____CFConstantStringClassReference_110e505d8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126befb8;
  _objc_alloc_init(PTR_PTR_1126befb8);
  func_0x00010c1b9120(param_1);
  func_0x00010c1be5e0(param_2,puVar2);
  func_0x00010c1dcdc0(puVar2,param_4,param_5);
  func_0x00010c1a3ee0(0x4049000000000000,puVar2);
  uVar5 = param_6;
  FUN_10675af60(param_6);
  func_0x00010c1cbba0(puVar2,param_4,uVar5);
  func_0x00010c1cbb80(puVar2,param_4,0);
  puVar3 = PTR_PTR_1126bf180;
  _objc_alloc(PTR_PTR_1126bf180);
  uVar5 = *(undefined8 *)(param_3 + 0x38);
  puVar4 = PTR_PTR_1126cac58;
  _objc_opt_class(PTR_PTR_1126cac58);
  func_0x00010c05a180(puVar3,param_4,lVar1,puVar2,uVar5,0,puVar4,0);
  uVar5 = *(undefined8 *)(param_3 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1067636a8;
  puStack_88 = &UNK_1109396b8;
  lStack_80 = param_3;
  uStack_78 = param_7;
  uStack_70 = param_5;
  uStack_68 = param_6;
  _objc_retain(param_7);
  func_0x00010bf9b020(uVar5,param_4,puVar3,&puStack_a0);
  _objc_release(uVar5);
  _objc_release(uStack_78);
  _objc_release(param_7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 1067636a8; end: 106763883;  */

void FUN_1067636a8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar5 = param_2;
    func_0x00010c0d6fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      lVar5 = *(long *)(param_1 + 0x28);
      ppuVar4 = &PTR____CFConstantStringClassReference_110e5ba18;
      FUN_106761b84(&PTR____CFConstantStringClassReference_110e5ba18);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,0,ppuVar4);
    }
    else {
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2;
      func_0x00010c0d6fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(ppuVar4);
      lVar1 = lVar5;
      func_0x00010bfaea20();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(lVar5);
      lVar5 = lVar2;
      func_0x00010bf529e0();
      if (lVar5 == 0) {
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
                  (*(long *)(param_1 + 0x28),PTR____NSArray0__struct_11034ab48,0);
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        uVar3 = *(undefined8 *)(param_1 + 0x38);
        FUN_10675ccb4(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7a80(uVar6);
        _objc_release(uVar3);
      }
      _objc_release(lVar2);
      _objc_release(ppuVar4);
    }
    _objc_release(ppuVar4);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106763884; end: 10676390b;  */

bool FUN_106763884(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0fd6a0();
  if ((int)uVar1 != 1) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = param_2;
    func_0x00010c0fd0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = param_2;
  func_0x00010c0fd6a0(param_2);
  _objc_release(param_2);
  return (int)uVar1 == 1;
}



/* Entry: 10676390c; end: 106763913;  */

void FUN_10676390c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fd0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_placeId_11261ce58);
  return;
}



/* Entry: 106763914; end: 106763b3f; -[SCMapPlaceProfileService fetchPlaceRatingsAndReviewsForPlaceId:completion:] */

void FUN_106763914(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126cd9b0;
  _objc_alloc_init(PTR_PTR_1126cd9b0);
  func_0x00010c1dc3a0();
  lVar2 = param_2;
  func_0x00010be74240(param_2);
  _objc_retainAutoreleasedReturnValue();
  if ((*(byte *)(param_2 + 0x32) & 1) == 0) {
    puVar6 = PTR_PTR_1126cd9a8;
    _objc_alloc(PTR_PTR_1126cd9a8);
    param_1 = 0x40cc200000000000;
    func_0x00010c01bc00();
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  puVar3 = PTR_PTR_1126bf180;
  _objc_alloc(PTR_PTR_1126bf180);
  _objc_opt_class(PTR_PTR_1126cd9b8);
  func_0x00010c05a180(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar4);
  _objc_initWeak(auStack_68,param_2);
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_1;
  func_0x00010bf9b020(uVar5);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106763b40; end: 106763be7;  */

void FUN_106763b40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be545c0(*(undefined8 *)(param_1 + 0x38));
    _objc_release(lVar1);
    uVar2 = param_2;
    FUN_10675aac0(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar2,0);
    _objc_release(uVar2);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106763be8; end: 106763e13; -[SCMapPlaceProfileService fetchPlacePhotosForPlaceId:completion:] */

void FUN_106763be8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126cd9c0;
  _objc_alloc_init(PTR_PTR_1126cd9c0);
  func_0x00010c1dc3a0();
  lVar2 = param_2;
  func_0x00010be74240(param_2);
  _objc_retainAutoreleasedReturnValue();
  if ((*(byte *)(param_2 + 0x32) & 1) == 0) {
    puVar6 = PTR_PTR_1126cd9a8;
    _objc_alloc(PTR_PTR_1126cd9a8);
    param_1 = 0x40cc200000000000;
    func_0x00010c01bc00();
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  puVar3 = PTR_PTR_1126bf180;
  _objc_alloc(PTR_PTR_1126bf180);
  _objc_opt_class(PTR_PTR_1126cd9c8);
  func_0x00010c05a180(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar4);
  _objc_initWeak(auStack_68,param_2);
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_1;
  func_0x00010bf9b020(uVar5);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}


