/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10348ef94; end: 10348efe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348ef94(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 auStack_68 [24];
  
  lVar7 = 0;
  func_0x000100b91584();
  uVar9 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar10 = uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff);
  uVar9 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + uVar10 + 7 & 0xfffffffffffffff8;
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + uVar9);
  puVar1 = (undefined8 *)(unaff_x20 + uVar9 + 8);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  lVar6 = unaff_x20 + uVar10;
  func_0x000107c61428(lVar7 + 0x10,auStack_68,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    uVar11 = *(undefined8 *)(lVar7 + _DAT_112f71a10);
    uVar4 = uVar11;
    func_0x000107c614f0(uVar11);
    func_0x000107c615f0(uVar11);
    lVar5 = lVar7;
    func_0x000107c61174();
    func_0x00010418bbf4(lVar6,uVar8,uVar2,uVar3,lVar7,0,0,uVar4);
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(lVar5);
    func_0x000107c42c1c(*(undefined8 *)(lVar5 + _DAT_112f71a08));
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 10348efe8; end: 10348f023;  */

void FUN_10348efe8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10348f024; end: 10348f067;  */

long FUN_10348f024(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10348f068; end: 10348f073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348f068(double param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar3 = 0x112f71aa0;
  func_0x0001000285a8(0x112f71aa0,&UNK_10dbcd6c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_90 + -extraout_x8;
  lVar4 = 0;
  func_0x000100b913d8();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d3b130;
  func_0x0001000285a8(0x112d3b130,&UNK_10d904950);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar9 - extraout_x8_01;
  lVar3 = lVar2 + _DAT_112f71a40;
  func_0x000107c61428(lVar3,auStack_88,0x21,0);
  pcVar12 = *(code **)(lVar11 + 0x30);
  lVar11 = lVar3;
  (*pcVar12)(lVar3,1,lVar4);
  if ((int)lVar11 == 0) {
    func_0x000107c61174(*(undefined8 *)(lVar5 + _DAT_113067470));
    func_0x0001041b86fc(lVar10);
    lVar5 = 0;
    func_0x000100b91584();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar10,0,1,lVar5);
    func_0x00010348f0bc(lVar10,lVar3 + *(int *)(lVar4 + 0x18),0x112d3b130,&UNK_10d904950);
  }
  lVar5 = lVar3;
  (*pcVar12)(lVar3,1,lVar4);
  if ((int)lVar5 == 0) {
    dVar13 = 0.0;
    if (*(long *)(lVar7 + _DAT_113067de0) != 0) {
      func_0x000107c4223c();
      dVar13 = param_1;
    }
    dVar14 = 0.0;
    if (*(long *)(lVar7 + _DAT_113067dd0) != 0) {
      func_0x000107c4223c();
      dVar14 = param_1;
    }
    func_0x000107c61168(PTR_PTR_1126afec0);
    dVar13 = dVar13 - dVar14;
    func_0x000107c4cec4();
    *(double *)(lVar3 + *(int *)(lVar4 + 0x1c)) = dVar13;
  }
  func_0x000107c614a8(auStack_88);
  func_0x00010348f074(lVar3,puVar8,0x112f71aa0,&UNK_10dbcd6c0);
  puVar6 = puVar8;
  (*pcVar12)(puVar8,1,lVar4);
  if ((int)puVar6 == 1) {
    FUN_10348f220(puVar8,0x112f71aa0,&UNK_10dbcd6c0);
  }
  else {
    func_0x00010348f29c(puVar8,lVar9,&SUB_100b913d8);
    lVar2 = lVar2 + _DAT_112f71a00;
    uVar1 = *(undefined8 *)(lVar2 + 0x18);
    lVar3 = *(long *)(lVar2 + 0x20);
    func_0x0001000a8868(lVar2,uVar1);
    (**(code **)(lVar3 + 0x10))(lVar9,uVar1,lVar3);
    func_0x00010348f260(lVar9,&SUB_100b913d8);
  }
  FUN_10348db58();
  return;
}



/* Entry: 10348f074; end: 10348f103;  */

undefined8 FUN_10348f074(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10348f104; end: 10348f217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348f104(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_113807320;
  func_0x000107c61428(unaff_x20 + _DAT_113807320,auStack_58,0,0);
  if (*(char *)(unaff_x20 + lVar2) == '\x01') {
    plVar6 = *(long **)(unaff_x20 + _DAT_112f71a30);
    puVar1 = &UNK_11065b700;
    func_0x000107c613fc(&UNK_11065b700,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    pcVar8 = FUN_10348f218;
    puVar4 = puVar1;
    (**(code **)(*plVar6 + 0x60))();
    func_0x000107c61574(puVar1);
    plVar6 = (long *)(unaff_x20 + _DAT_112f71a50);
    lVar2 = *plVar6;
    *plVar6 = (long)pcVar8;
    plVar6[1] = (long)puVar4;
    func_0x000107c615e8(lVar2);
    lVar2 = *plVar6;
    if (lVar2 != 0) {
      lVar7 = plVar6[1];
      lVar3 = lVar2;
      func_0x000107c614f0(lVar2);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f71a20);
      pcVar8 = *(code **)(lVar7 + 0x10);
      func_0x000107c615f0(lVar2);
      (*pcVar8)(uVar5,lVar3,lVar7);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 10348f218; end: 10348f21f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348f218(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f71a08;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112f71a08);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c61170(lVar2);
    }
    else {
      func_0x000107c61170();
      uVar4 = *(undefined8 *)(lVar2 + lVar1);
      func_0x000107c4ffe8(uVar4);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(uVar4);
    }
  }
  return;
}



/* Entry: 10348f220; end: 10348f2df;  */

undefined8 FUN_10348f220(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10348f2e0; end: 10348f2f7;  */

void FUN_10348f2e0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10348f2f8; end: 10348f33f;  */

undefined8 FUN_10348f2f8(int param_1)

{
  long unaff_x20;
  
  func_0x000107c4a4d8();
  if (param_1 == 0) {
    return 0;
  }
  if ((*(char *)(unaff_x20 + 0x18) != '\x01') && (*(int *)(unaff_x20 + 0x10) == 0)) {
    return 2;
  }
  return 1;
}



/* Entry: 10348f340; end: 10348f34f;  */

void FUN_10348f340(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10348f350; end: 10348f407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10348f350(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar3 = _DAT_112f71bc8;
  uVar4 = *(ulong *)(unaff_x20 + _DAT_112f71bc8);
  uVar5 = uVar4;
  if (uVar4 == 0) {
    lVar1 = unaff_x20 + _DAT_112f71b50;
    uVar6 = *(undefined8 *)(lVar1 + 0x18);
    lVar2 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar6);
    uVar5 = 0x30000020100 >> (((ulong)*(byte *)(unaff_x20 + _DAT_112f71b98) & 7) << 3);
    (**(code **)(lVar2 + 8))(uVar5,uVar6,lVar2);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar3);
    *(ulong *)(unaff_x20 + lVar3) = uVar5;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar6);
    uVar4 = 0;
  }
  func_0x000107c615f0(uVar4);
  return uVar5;
}



/* Entry: 10348f408; end: 10348f4db; -[_TtC23SponsoredLensCTAHandler27SponsoredLensCTAHandlerImpl attachmentTypeForLens:] */

void FUN_10348f408(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  lVar2 = param_3;
  func_0x000107c44300();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c3e318();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec(lVar1);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar1);
      func_0x000107c5fadc(lVar2,param_2);
      func_0x000107c6142c(param_2);
      goto LAB_10348f4c8;
    }
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  lVar2 = 0;
LAB_10348f4c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10348f4dc; end: 10348f53f; -[_TtC23SponsoredLensCTAHandler27SponsoredLensCTAHandlerImpl canHandleAttachmentForLens:] */

long FUN_10348f4dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar1 = param_3;
  func_0x000107c44300();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c44730();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_3);
  return lVar2;
}



/* Entry: 10348f540; end: 10348f59b; -[_TtC23SponsoredLensCTAHandler27SponsoredLensCTAHandlerImpl hasExcludedAttachmentForLens:] */

uint FUN_10348f540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103492920(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10348f59c; end: 10349021b;  */

/* WARNING: Removing unreachable block (ram,0x00010348f970) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348f59c(undefined **param_1)

{
  byte bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  char *pcVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  char *pcVar17;
  undefined8 *puVar18;
  char *pcVar19;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar20;
  char *unaff_x20;
  char *pcVar21;
  undefined8 *puVar22;
  char *pcVar23;
  long lVar24;
  uint uVar25;
  undefined **ppuVar26;
  undefined **unaff_x23;
  code *pcVar27;
  undefined **ppuVar28;
  undefined8 *puVar29;
  char acStack_4a0 [8];
  char acStack_498 [24];
  char acStack_480 [8];
  char acStack_478 [8];
  char acStack_470 [8];
  char acStack_468 [8];
  char acStack_460 [8];
  char acStack_458 [8];
  long lStack_450;
  char acStack_448 [8];
  undefined **appuStack_440 [5];
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined8 *puStack_400;
  undefined **ppuStack_3f0;
  undefined1 auStack_3c0 [24];
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  code *pcStack_388;
  undefined **ppuStack_380;
  char *apcStack_378 [97];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = 0x112f71aa0;
  func_0x0001000285a8(0x112f71aa0,&UNK_10dbcd6c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)appuStack_440 - extraout_x8;
  ppuVar3 = (undefined **)0x0;
  func_0x000100b913d8();
  ppuVar26 = (undefined **)ppuVar3[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(ppuVar26[8]);
  puVar29 = (undefined8 *)(lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar15 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  ppuVar28 = (undefined **)((long)puVar29 - extraout_x8_01);
  lVar15 = 0x112d3b128;
  pcVar13 = &UNK_10d996bb0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar21 = (char *)((long)ppuVar28 - extraout_x8_02);
  ppuVar4 = param_1;
  func_0x000107c44300();
  func_0x000107c61180();
  uVar12 = 0;
  pcVar7 = unaff_x20;
  pcVar23 = pcVar21;
  if (ppuVar4 == (undefined **)0x0) goto LAB_10348fbac;
  unaff_x23 = ppuVar4;
  func_0x000107c44730();
  func_0x000107c615e8(ppuVar4);
  ppuVar11 = _DAT_112f71bb8;
  if ((int)unaff_x23 != 0) {
    ppuVar5 = *(undefined ***)(unaff_x20 + (long)_DAT_112f71bb8);
    pcVar17 = pcVar13;
    if (ppuVar5 == (undefined **)0x0) {
LAB_10348f8c0:
      ppuVar4 = param_1;
      func_0x000107c44300();
      func_0x000107c61180();
      if (ppuVar4 == (undefined **)0x0) {
        pcVar19 = (char *)0x800000010f1539f0;
        func_0x0001048db000(0xd000000000000023,0x800000010f1539f0,0xd000000000000062,
                            0x800000010f153a20,0x8c);
      }
      else {
        puVar8 = *(undefined **)(unaff_x20 + _DAT_112f71b58);
        func_0x000107c5d17c();
        func_0x000107c61180();
        if (puVar8 != (undefined *)0x0) {
          ppuVar5 = param_1;
          func_0x000107c5d2d8();
          func_0x000107c61180();
          ppuVar6 = (undefined **)0x0;
          if (ppuVar5 == (undefined **)0x0) {
LAB_10348f9c0:
            ppuVar28 = ppuVar6;
            ppuVar5 = (undefined **)0x0;
            puVar22 = (undefined8 *)0xe000000000000000;
          }
          else {
            ppuVar6 = ppuVar5;
            func_0x000107c3d2dc();
            func_0x000107c61180();
            func_0x000107c61170(ppuVar5);
            if (ppuVar6 == (undefined **)0x0) {
              lVar15 = 0;
              func_0x000107c5eec8();
              (**(code **)(*(long *)(lVar15 + -8) + 0x38))(ppuVar28,1,1,lVar15);
              func_0x00010349325c(ppuVar28,0x112d3bc20,&UNK_10d904ef0);
              ppuVar6 = ppuVar28;
              goto LAB_10348f9c0;
            }
            ppuVar5 = ppuVar6;
            func_0x000107c5ee30(ppuVar6);
            func_0x000107c61170(ppuVar6);
            func_0x00010006c00c(ppuVar5,pcVar17);
            func_0x0001048dacb4(ppuVar28,ppuVar5,pcVar17);
            func_0x00010006c090(ppuVar5,pcVar17);
            lVar15 = 0;
            func_0x000107c5eec8();
            lVar24 = *(long *)(lVar15 + -8);
            puVar22 = (undefined8 *)0x0;
            ppuVar5 = ppuVar28;
            (**(code **)(lVar24 + 0x38))(ppuVar28,0,1,lVar15);
            func_0x000107c5eeac();
            (**(code **)(lVar24 + 8))(ppuVar28,lVar15);
          }
          func_0x000103490394();
          ppuVar6 = ppuVar28;
          FUN_10348f350();
          ppuStack_410 = ppuVar5;
          puStack_400 = puVar22;
          func_0x000107c5fadc();
          ppuVar9 = param_1;
          func_0x000107c5d2d8(param_1);
          func_0x000107c61180();
          func_0x000107c61174();
          unaff_x23 = param_1;
          func_0x000107c4b1dc();
          func_0x000107c61180();
          puVar18 = puVar22;
          if (unaff_x23 == (undefined **)0x0) {
            func_0x000107c5faec();
            puVar18 = puVar22;
            func_0x000107c5fadc();
            func_0x000107c6142c(puVar22);
          }
          apcStack_378[0] = (char *)0x0;
          ppuVar10 = ppuVar6;
          func_0x000107c3d244();
          func_0x000107c61180();
          func_0x000107c615e8(ppuVar6);
          func_0x000107c61170(ppuVar5);
          func_0x000107c61170(ppuVar9);
          func_0x000107c61170(ppuVar28);
          func_0x000107c61170(unaff_x23);
          pcVar7 = apcStack_378[0];
          if (ppuVar10 == (undefined **)0x0) {
            pcVar13 = apcStack_378[0];
            func_0x000107c61174();
            func_0x000107c6142c(puStack_400);
            func_0x000107c5ed30();
            func_0x000107c61170(pcVar13);
            func_0x000107c61654();
            func_0x000107c615e8(ppuVar4);
            func_0x000107c615e8(puVar8);
            func_0x000107c61170(ppuVar28);
            func_0x000107c614ac(pcVar7);
            pcVar23 = pcVar7;
            ppuVar4 = ppuVar28;
            ppuVar28 = ppuVar5;
            goto LAB_10348fba8;
          }
          uVar16 = *(undefined8 *)(unaff_x20 + (long)ppuVar11);
          *(undefined ***)(unaff_x20 + (long)ppuVar11) = param_1;
          appuStack_440[4] = ppuVar10;
          ppuStack_408 = ppuVar4;
          func_0x000107c61174();
          func_0x000107c61170(uVar16);
          func_0x000107c61174();
          ppuVar4 = param_1;
          func_0x000107c5d2d8();
          func_0x000107c61180();
          if (ppuVar4 == (undefined **)0x0) {
LAB_10348fbe4:
            ppuStack_3f0 = (undefined **)0x0;
            appuStack_440[3] = (undefined **)0xe000000000000000;
          }
          else {
            ppuVar11 = ppuVar4;
            func_0x000107c3d470();
            func_0x000107c61180();
            func_0x000107c61170(ppuVar4);
            if (ppuVar11 == (undefined **)0x0) goto LAB_10348fbe4;
            ppuStack_3f0 = ppuVar11;
            func_0x000107c5faec();
            appuStack_440[3] = (undefined **)puVar18;
            func_0x000107c61170(ppuVar11);
          }
          ppuVar4 = param_1;
          func_0x000107c5d2d8();
          func_0x000107c61180();
          ppuStack_418 = ppuVar28;
          if (ppuVar4 == (undefined **)0x0) {
LAB_10348fc40:
            appuStack_440[1] = (undefined **)0xe000000000000000;
            appuStack_440[2] = (undefined **)0x0;
          }
          else {
            ppuVar28 = ppuVar4;
            func_0x000107c3d474();
            func_0x000107c61180();
            func_0x000107c61170(ppuVar4);
            if (ppuVar28 == (undefined **)0x0) goto LAB_10348fc40;
            ppuVar4 = ppuVar28;
            func_0x000107c5faec();
            appuStack_440[1] = (undefined **)puVar18;
            appuStack_440[2] = ppuVar4;
            func_0x000107c61170(ppuVar28);
          }
          puVar22 = puStack_400;
          func_0x000107c61434(puStack_400);
          ppuVar28 = param_1;
          func_0x000107c4b1dc();
          func_0x000107c61180();
          ppuVar4 = ppuVar28;
          func_0x000107c5faec();
          func_0x000107c61170(ppuVar28);
          func_0x000107c5eea0((long)puVar29 + (long)*(int *)(ppuVar3 + 4));
          iVar2 = *(int *)(ppuVar3 + 3);
          lVar15 = 0;
          func_0x000100b91584();
          (**(code **)(*(long *)(lVar15 + -8) + 0x38))((long)puVar29 + (long)iVar2,1,1,lVar15);
          *(undefined8 *)((long)puVar29 + (long)*(int *)((long)ppuVar3 + 0x1c)) = 0;
          iVar2 = *(int *)((long)ppuVar3 + 0x24);
          lVar15 = 0;
          func_0x000107c5eea4();
          pcVar27 = *(code **)(*(long *)(lVar15 + -8) + 0x38);
          (*pcVar27)((long)puVar29 + (long)iVar2,1,1,lVar15);
          (*pcVar27)((long)puVar29 + (long)*(int *)(ppuVar3 + 5),1,1,lVar15);
          iVar2 = *(int *)((long)ppuVar3 + 0x2c);
          lVar15 = 0;
          func_0x000100b91acc();
          (**(code **)(*(long *)(lVar15 + -8) + 0x38))((long)puVar29 + (long)iVar2,1,1,lVar15);
          *(undefined8 *)((long)puVar29 + (long)*(int *)(ppuVar3 + 6)) = 0;
          *(undefined1 *)((long)puVar29 + (long)*(int *)((long)ppuVar3 + 0x34)) = 0;
          *(undefined1 *)((long)puVar29 + (long)*(int *)(ppuVar3 + 7)) = 0;
          iVar2 = *(int *)((long)ppuVar3 + 0x3c);
          func_0x00010178e4b4(apcStack_378);
          func_0x000107c610b4((long)puVar29 + (long)iVar2,apcStack_378,0x301);
          *puVar29 = ppuVar4;
          puVar29[1] = puVar18;
          ppuVar28 = ppuStack_410;
          puVar29[2] = ppuStack_410;
          puVar29[3] = puVar22;
          puVar29[4] = ppuStack_3f0;
          puVar29[5] = appuStack_440[3];
          puVar29[6] = appuStack_440[2];
          puVar29[7] = appuStack_440[1];
          puVar29[9] = 0x13;
          puVar29[8] = 9;
          puVar29[0xb] = 0;
          puVar29[10] = 0;
          puVar29[0xd] = 0;
          puVar29[0xc] = 0;
          *(undefined1 *)(puVar29 + 0xe) = 1;
          puVar29[0xf] = 0;
          func_0x00010349329c(puVar29,lVar20);
          (*(code *)ppuVar26[7])(lVar20,0,1,ppuVar3);
          lVar15 = _DAT_112f71bb0;
          func_0x000107c61428(unaff_x20 + _DAT_112f71bb0,&puStack_3a8,0x21,0);
          func_0x0001034930d0(lVar20,unaff_x20 + lVar15,0x112f71aa0,&UNK_10dbcd6c0);
          func_0x000107c614a8(&puStack_3a8);
          lVar15 = *(long *)(unaff_x20 + _DAT_112f71bc8);
          func_0x000107c615f0(lVar15);
          puVar18 = puVar22;
          func_0x000107c5fadc(ppuVar28,puVar22);
          func_0x000107c6142c(puVar22);
          ppuVar26 = param_1;
          func_0x000107c5d2d8(param_1);
          func_0x000107c61180();
          func_0x000107c4b1dc();
          func_0x000107c61180();
          if (param_1 == (undefined **)0x0) {
            func_0x000107c5faec();
            func_0x000107c5fadc();
            func_0x000107c6142c(puVar18);
          }
          lVar20 = lVar15;
          func_0x000107c3d3a8();
          func_0x000107c61180();
          func_0x000107c615e8(lVar15);
          func_0x000107c61170(ppuVar28);
          func_0x000107c61170(ppuVar26);
          func_0x000107c61170(param_1);
          if (lVar20 != 0) {
            func_0x000107c61170(lVar20);
          }
          pcVar13 = unaff_x20 + _DAT_112f71b60;
          uVar16 = *(undefined8 *)(pcVar13 + 0x18);
          lVar15 = *(long *)(pcVar13 + 0x20);
          func_0x0001000a8868(pcVar13,uVar16);
          (**(code **)(lVar15 + 8))(puVar29,lVar20 != 0,uVar16,lVar15);
          FUN_1034904f0(0,0);
          ppuVar4 = ppuStack_408;
          bVar1 = unaff_x20[_DAT_112f71b98];
          if (bVar1 < 3) {
            if (bVar1 == 0) {
              pcVar13 = "lens_carousel_sponsored_lens";
            }
            else {
              if (bVar1 == 1) {
                uVar12 = 0x800000010f153900;
                pcVar23 = (char *)0xd00000000000001f;
                goto LAB_1034900cc;
              }
              pcVar13 = "talk_carousel_sponsored_lens";
            }
            pcVar23 = (char *)0xd00000000000001c;
            uVar12 = (ulong)(pcVar13 + -0x20) | 0x8000000000000000;
          }
          else if (bVar1 == 3) {
            uVar12 = 0x800000010f1538c0;
            pcVar23 = (char *)0xd000000000000013;
          }
          else if (bVar1 == 4) {
            uVar12 = 0x800000010f1538a0;
            pcVar23 = (char *)0xd000000000000014;
          }
          else {
            uVar12 = 0xed00006174635f74;
            pcVar23 = (char *)0x6e65697069636572;
          }
LAB_1034900cc:
          uVar16 = 0;
          func_0x0001041bb580(0);
          func_0x000107c610f8();
          func_0x0001041bb40c(pcVar23,uVar12,uVar16);
          pcVar7 = "handleCTATapped(_:)";
          func_0x0001000c10c0();
          func_0x000107c61180();
          puVar14 = &UNK_11065b8e0;
          func_0x000107c613fc(&UNK_11065b8e0,0x18,7);
          func_0x000107c61614(puVar14 + 0x10,unaff_x20);
          ppuVar3 = (undefined **)&UNK_11065ba48;
          func_0x000107c613fc(&UNK_11065ba48,0x30,7);
          ppuVar28 = appuStack_440[4];
          ppuVar3[2] = puVar14;
          ppuVar3[3] = (undefined *)appuStack_440[4];
          ppuVar3[4] = puVar8;
          ppuVar3[5] = pcVar23;
          pcStack_388 = FUN_1034932e0;
          puStack_3a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_3a0 = 0x42000000;
          puStack_398 = &UNK_1000f6b44;
          puStack_390 = &UNK_11065ba60;
          ppuVar26 = &puStack_3a8;
          ppuStack_380 = ppuVar3;
          func_0x000107c60bc4();
          unaff_x23 = ppuStack_380;
          func_0x000107c61174();
          func_0x000107c615f0(puVar8);
          func_0x000107c61174();
          func_0x000107c61574(unaff_x23);
          func_0x000107c4e590(pcVar7);
          func_0x000107c615e8(ppuVar4);
          func_0x000107c60bd0(ppuVar26);
          func_0x000107c61170(ppuStack_418);
          func_0x000107c61170(ppuVar28);
          func_0x000107c615e8(puVar8);
          func_0x000107c61170(pcVar23);
          func_0x000107c615e8(pcVar7);
          func_0x000103493094(puVar29,&SUB_100b913d8);
          uVar12 = 1;
          goto LAB_10348fbac;
        }
        pcVar19 = (char *)0x800000010f153a90;
        func_0x0001048db000(0xd000000000000017,0x800000010f153a90,0xd000000000000062,
                            0x800000010f153a20,0x8d);
        func_0x000107c615e8(ppuVar4);
        unaff_x20 = pcVar19;
      }
    }
    else {
      puStack_400 = puVar29;
      func_0x000107c61174();
      ppuVar6 = ppuVar5;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      ppuVar4 = ppuVar6;
      func_0x000107c5faec();
      pcVar19 = pcVar13;
      func_0x000107c61170(ppuVar6);
      unaff_x23 = param_1;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      ppuVar6 = unaff_x23;
      func_0x000107c5faec();
      func_0x000107c61170(unaff_x23);
      if ((ppuVar4 != ppuVar6) || (pcVar13 != pcVar19)) {
        pcVar17 = pcVar13;
        func_0x000107c605b8(ppuVar4,pcVar13,ppuVar6,pcVar19,0);
        func_0x000107c6142c(pcVar13);
        func_0x000107c6142c(pcVar19);
        if (((ulong)ppuVar4 & 1) != 0) {
          func_0x000107c61170(ppuVar5);
          goto LAB_10348fba8;
        }
        lVar15 = *(long *)(unaff_x20 + _DAT_112f71b68);
        func_0x000107c5194c();
        func_0x000107c61180();
        if (lVar15 == 0) {
          uVar25 = 0;
          puVar29 = puStack_400;
        }
        else {
          pcVar13 = unaff_x20 + _DAT_112f71bb0;
          func_0x000107c61428(pcVar13,auStack_3c0,0,0);
          pcVar7 = pcVar13;
          (*(code *)ppuVar26[6])(pcVar13,1,ppuVar3);
          puVar29 = puStack_400;
          if ((int)pcVar7 == 0) {
            func_0x000103493214(pcVar13 + *(int *)((long)ppuVar3 + 0x2c),pcVar21,0x112d3b128,
                                &UNK_10d996bb0);
          }
          else {
            lVar24 = 0;
            func_0x000100b91acc();
            (**(code **)(*(long *)(lVar24 + -8) + 0x38))(pcVar21,1,1,lVar24);
          }
          lVar24 = lVar15;
          FUN_103492aa0(lVar15,pcVar21);
          uVar25 = (uint)lVar24;
          func_0x000107c61170(lVar15);
          pcVar17 = (char *)0x112d3b128;
          func_0x00010349325c(pcVar21,0x112d3b128,&UNK_10d996bb0);
          unaff_x23 = ppuVar3;
        }
        FUN_10349021c(uVar25 & 1);
        func_0x000107c61170(ppuVar5);
        goto LAB_10348f8c0;
      }
      func_0x000107c61170(ppuVar5);
      func_0x000107c6142c(pcVar13);
      ppuVar11 = ppuVar4;
    }
    func_0x000107c6142c(pcVar19);
    pcVar7 = unaff_x20;
    ppuVar4 = ppuVar11;
  }
LAB_10348fba8:
  ppuVar26 = ppuVar4;
  uVar12 = 0;
LAB_10348fbac:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    *(undefined ***)(pcVar21 + -0x40) = ppuVar28;
    *(undefined ***)(pcVar21 + -0x38) = unaff_x23;
    *(undefined ***)(pcVar21 + -0x30) = ppuVar26;
    *(char **)(pcVar21 + -0x28) = pcVar23;
    *(char **)(pcVar21 + -0x20) = pcVar7;
    *(undefined ****)(pcVar21 + -0x18) = appuStack_440;
    *(undefined1 **)(pcVar21 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(pcVar21 + -8) = FUN_10349021c;
    lVar15 = 0x112f71aa0;
    func_0x0001000285a8(0x112f71aa0,&UNK_10dbcd6c0);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar15 = 0;
    func_0x000100b913d8();
    (**(code **)(*(long *)(lVar15 + -8) + 0x38))(pcVar21 + (-0x60 - extraout_x8_03),1,1,lVar15);
    lVar15 = _DAT_112f71bb0;
    func_0x000107c61428(pcVar7 + _DAT_112f71bb0,pcVar21 + -0x58,0x21,0);
    func_0x0001034930d0(pcVar21 + (-0x60 - extraout_x8_03),pcVar7 + lVar15,0x112f71aa0,
                        &UNK_10dbcd6c0);
    func_0x000107c614a8(pcVar21 + -0x58);
    FUN_1034904f0(2,uVar12 & 1);
    uVar16 = *(undefined8 *)(pcVar7 + (long)_DAT_112f71bb8);
    pcVar13 = pcVar7 + (long)_DAT_112f71bb8;
    pcVar13[0] = '\0';
    pcVar13[1] = '\0';
    pcVar13[2] = '\0';
    pcVar13[3] = '\0';
    pcVar13[4] = '\0';
    pcVar13[5] = '\0';
    pcVar13[6] = '\0';
    pcVar13[7] = '\0';
    func_0x000107c61170(uVar16);
    lVar15 = *(long *)(pcVar7 + _DAT_112f71bc0);
    if (lVar15 != 0) {
      lVar24 = *(long *)((long)(pcVar7 + _DAT_112f71bc0) + 8);
      lVar20 = lVar15;
      func_0x000107c614f0(lVar15);
      pcVar27 = *(code **)(lVar24 + 8);
      func_0x000107c615f0(lVar15);
      (*pcVar27)(lVar20,lVar24);
      func_0x000107c615e8(lVar15);
    }
    lVar20 = *(long *)(pcVar7 + _DAT_112f71b68);
    lVar15 = lVar20;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar15 != 0) {
      func_0x000107c61170();
      func_0x000107c4ffe8(lVar20);
      func_0x000107c61180();
      func_0x000107c615e8();
    }
    return;
  }
  return;
}



/* Entry: 10349021c; end: 1034904ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349021c(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112f71aa0;
  func_0x0001000285a8(0x112f71aa0,&UNK_10dbcd6c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000100b913d8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(auStack_60 + -extraout_x8,1,1,lVar1);
  lVar1 = _DAT_112f71bb0;
  func_0x000107c61428(unaff_x20 + _DAT_112f71bb0,auStack_58,0x21,0);
  func_0x0001034930d0(auStack_60 + -extraout_x8,unaff_x20 + lVar1,0x112f71aa0,&UNK_10dbcd6c0);
  func_0x000107c614a8(auStack_58);
  FUN_1034904f0(2,param_1 & 1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f71bb8);
  *(undefined8 *)(unaff_x20 + _DAT_112f71bb8) = 0;
  func_0x000107c61170(uVar2);
  lVar1 = *(long *)(unaff_x20 + _DAT_112f71bc0);
  if (lVar1 != 0) {
    lVar4 = ((long *)(unaff_x20 + _DAT_112f71bc0))[1];
    lVar3 = lVar1;
    func_0x000107c614f0(lVar1);
    pcVar5 = *(code **)(lVar4 + 8);
    func_0x000107c615f0(lVar1);
    (*pcVar5)(lVar3,lVar4);
    func_0x000107c615e8(lVar1);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112f71b68);
  lVar1 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar3);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  return;
}



/* Entry: 1034904f0; end: 10349081b;  */

/* WARNING: Removing unreachable block (ram,0x0001034905f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034904f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_70 [16];
  
  lVar5 = 0x112d3bc20;
  puVar6 = &UNK_10d904ef0;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_70 + -extraout_x8;
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112f71bb8);
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x000107c44300();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar1;
    func_0x000107c5d2d8();
    func_0x000107c61180();
    puVar10 = (undefined1 *)0x0;
    if (puVar3 == (undefined *)0x0) {
LAB_103490644:
      puVar8 = puVar10;
      puVar10 = (undefined1 *)0x0;
      uVar11 = 0xe000000000000000;
    }
    else {
      puVar4 = puVar3;
      func_0x000107c3d2dc();
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      if (puVar4 == (undefined *)0x0) {
        lVar5 = 0;
        func_0x000107c5eec8();
        (**(code **)(*(long *)(lVar5 + -8) + 0x38))(puVar8,1,1,lVar5);
        func_0x00010349325c(puVar8,0x112d3bc20,&UNK_10d904ef0);
        puVar10 = puVar8;
        goto LAB_103490644;
      }
      puVar3 = puVar4;
      func_0x000107c5ee30(puVar4);
      func_0x000107c61170(puVar4);
      func_0x00010006c00c(puVar3,puVar6);
      func_0x0001048dacb4(puVar8,puVar3,puVar6);
      func_0x00010006c090(puVar3,puVar6);
      lVar5 = 0;
      func_0x000107c5eec8();
      lVar12 = *(long *)(lVar5 + -8);
      uVar11 = 0;
      puVar10 = puVar8;
      (**(code **)(lVar12 + 0x38))(puVar8,0,1,lVar5);
      func_0x000107c5eeac();
      (**(code **)(lVar12 + 8))(puVar8,lVar5);
    }
    FUN_10348f350();
    uVar9 = uVar11;
    func_0x000107c5fadc(puVar10,uVar11);
    func_0x000107c6142c(uVar11);
    puVar6 = puVar1;
    func_0x000107c5d2d8(puVar1);
    func_0x000107c61180();
    puVar3 = puVar1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar9);
    }
    puVar7 = puVar8;
    func_0x000107c3d3a8();
    func_0x000107c61180();
    func_0x000107c615e8(puVar8);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(puVar2);
    if ((puVar7 != (undefined1 *)0x0) && (func_0x000107c61170(puVar7), param_1 - 1U < 2))
    goto LAB_1034907a0;
  }
  func_0x000107c61174();
  puVar6 = puVar1;
  func_0x000107c44300();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
    func_0x000107c61170(puVar1);
  }
  else {
    puVar2 = puVar6;
    func_0x000107c44884();
    func_0x000107c615e8(puVar6);
    func_0x000107c61170(puVar1);
    if (((ulong)puVar2 & 1) != 0) goto LAB_1034907a0;
  }
  puVar6 = PTR_PTR_1126ad2f8;
  func_0x000107c610f8(PTR_PTR_1126ad2f8);
  func_0x000107c47358();
  func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112f71b78));
  func_0x000107c61170(puVar1);
  puVar1 = puVar6;
LAB_1034907a0:
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10349081c; end: 103490907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349081c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112f71b70);
    uVar1 = uVar3;
    func_0x000107c614f0(uVar3);
    func_0x000107c615f0(uVar3);
    lVar2 = param_1;
    func_0x000107c61174();
    func_0x00010418bb88(param_2,param_3,param_4,param_1,uVar1);
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c42c1c(*(undefined8 *)(lVar2 + _DAT_112f71b68));
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103490908; end: 103490963; -[_TtC23SponsoredLensCTAHandler27SponsoredLensCTAHandlerImpl handleCTATapped:] */

uint FUN_103490908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10348f59c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103490964; end: 1034909ab; -[_TtC23SponsoredLensCTAHandler27SponsoredLensCTAHandlerImpl isPresented] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103490964(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f71b68);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
  }
  return lVar1 != 0;
}



/* Entry: 1034909ac; end: 103490a73; -[_TtC23SponsoredLensCTAHandler27SponsoredLensCTAHandlerImpl ctaPresentationStyleForLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1034909ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  long lStack_40;
  
  FUN_103493214(param_1 + _DAT_112f71ba0,auStack_58,0x112f712d8,&UNK_10dbcd2f0);
  if (lStack_40 == 0) {
    func_0x00010349325c(auStack_58,0x112f712d8,&UNK_10dbcd2f0);
    uVar1 = 0;
  }
  else {
    func_0x0001000a8868();
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    uVar1 = param_3;
    FUN_10348f2f8(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
    func_0x0001000834e4(auStack_58);
  }
  return uVar1;
}



/* Entry: 103490a74; end: 103490ad3; -[_TtC23SponsoredLensCTAHandler27SponsoredLensCTAHandlerImpl init] */

void FUN_103490a74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredLensCTAHandler.SponsoredLensCTAHandlerImpl",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103490aa0);
  (*pcVar1)();
}



/* Entry: 103490ad4; end: 103490bfb; -[_TtC23SponsoredLensCTAHandler27SponsoredLensCTAHandlerImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103490b00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103490b30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103490be0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103490b34) */
/* WARNING: Removing unreachable block (ram,0x000103490b04) */
/* WARNING: Removing unreachable block (ram,0x000103490be4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103490ad4(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112f71b50);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f71b58));
  return;
}



/* Entry: 103490bfc; end: 103490c03;  */

void FUN_103490bfc(void)

{
  if (lRam0000000112f71bf8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e769d90);
  return;
}



/* Entry: 103490c04; end: 103490e37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103490c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  undefined8 uVar8;
  long alStack_120 [4];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  func_0x000100b91584();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&uStack_100 + lVar1;
  func_0x000103490394();
  lVar4 = lVar3;
  FUN_10348f350();
  func_0x000107c5ee20(param_1,param_2);
  uStack_100 = param_5;
  func_0x000107c5fadc(param_5,param_6);
  uStack_f8 = param_3;
  uStack_f0 = param_4;
  func_0x000107c5fadc(param_3,param_4);
  uStack_e0 = 0;
  lVar5 = lVar4;
  func_0x000107c3d248();
  func_0x000107c61180();
  func_0x000107c615e8(lVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  uVar8 = uStack_e0;
  if (lVar5 == 0) {
    uVar7 = uStack_e0;
    func_0x000107c61174();
    func_0x000107c5ed30(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61654();
    func_0x000107c61170(lVar3);
    func_0x000107c614ac(uVar8);
    uVar2 = (uint)uVar8;
    uVar8 = 0;
  }
  else {
    uStack_e0 = uStack_100;
    uStack_c8 = 0xe000000000000000;
    uStack_d0 = 0;
    uStack_b8 = 0xe000000000000000;
    uStack_c0 = 0;
    uStack_a8 = 0x13;
    uStack_b0 = 9;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 1;
    uStack_78 = 0;
    uStack_d8 = param_6;
    func_0x000107c61174();
    func_0x000107c61434(param_6);
    func_0x000107c61174(lVar5);
    func_0x0001041b86fc(lVar6);
    uVar8 = uStack_f8;
    FUN_10348d284(uStack_f8,uStack_f0,lVar6,&uStack_e0);
    func_0x000107c61170(lVar3);
    func_0x00010192246c(&uStack_e0);
    func_0x000107c61170(lVar5);
    func_0x000103493094(lVar6,&SUB_100b91584);
    uVar2 = (uint)lVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return (uint)uVar8 & 1;
  }
  func_0x000107c60e78();
  *(undefined8 *)((long)alStack_120 + lVar1) = uVar8;
  *(long *)((long)alStack_120 + lVar1 + 8) = lVar3;
  *(undefined1 **)((long)alStack_120 + lVar1 + 0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_120 + lVar1 + 0x18) = FUN_103490e38;
  FUN_103490c04();
  return uVar2 & 1;
}



/* Entry: 103490e38; end: 103490e5b;  */

uint FUN_103490e38(uint param_1)

{
  FUN_103490c04();
  return param_1 & 1;
}



/* Entry: 103490e5c; end: 10349110f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103490e5c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_6d8 [776];
  undefined1 auStack_3d0 [776];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar5 = lVar2 + _DAT_112f71bb0;
    func_0x000107c61428(lVar5,auStack_80,0x21,0);
    lVar3 = 0;
    func_0x000100b913d8();
    lVar4 = lVar5;
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar5,1,lVar3);
    if ((int)lVar4 == 0) {
      func_0x000107c61174(param_1);
      func_0x0001042c3e04(auStack_6d8);
      func_0x00010178e4b0(auStack_6d8);
      iVar1 = *(int *)(lVar3 + 0x3c);
      func_0x000107c610b4(auStack_3d0,lVar5 + iVar1,0x301);
      func_0x000107c610b4(lVar5 + iVar1,auStack_6d8,0x301);
      func_0x000107c614a8(auStack_80);
      func_0x00010349325c(auStack_3d0,0x112dcbc48,&UNK_10d98e2c0);
    }
    else {
      func_0x000107c614a8(auStack_80);
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_3d0,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar5 = lVar2 + _DAT_112f71bb0;
    func_0x000107c61428(lVar5,auStack_6d8,1,0);
    lVar3 = 0;
    func_0x000100b913d8();
    lVar4 = lVar5;
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar5,1,lVar3);
    if ((int)lVar4 == 0) {
      *(undefined8 *)(lVar5 + *(int *)(lVar3 + 0x30)) = *(undefined8 *)(param_1 + _DAT_11306ba00);
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_80,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar5 = lVar2 + _DAT_112f71bb0;
    func_0x000107c61428(lVar5,auStack_98,1,0);
    lVar3 = 0;
    func_0x000100b913d8();
    lVar4 = lVar5;
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar5,1,lVar3);
    if ((int)lVar4 == 0) {
      *(undefined1 *)(lVar5 + *(int *)(lVar3 + 0x34)) = *(undefined1 *)(param_1 + _DAT_11306b9f8);
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_b0,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = param_2 + _DAT_112f71bb0;
    func_0x000107c61428(lVar2,auStack_c8,1,0);
    lVar4 = 0;
    func_0x000100b913d8();
    lVar5 = lVar2;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar2,1,lVar4);
    if ((int)lVar5 == 0) {
      *(undefined1 *)(lVar2 + *(int *)(lVar4 + 0x38)) = *(undefined1 *)(param_1 + _DAT_11306b9f0);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103491110; end: 103491263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103491110(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d3b128;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_70 + -extraout_x8;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2 + _DAT_112f71bb0;
    func_0x000107c61428(lVar1,auStack_70,0x21,0);
    lVar2 = 0;
    func_0x000100b913d8();
    lVar3 = lVar1;
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar1,1,lVar2);
    if ((int)lVar3 == 0) {
      if (param_1 != 0) {
        func_0x000107c61174(param_1);
        func_0x0001041c25dc(puVar4);
      }
      lVar3 = 0;
      func_0x000100b91acc();
      (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar4,param_1 == 0,1,lVar3);
      func_0x0001034930d0(puVar4,lVar1 + *(int *)(lVar2 + 0x2c),0x112d3b128,&UNK_10d996bb0);
    }
    func_0x000107c614a8(auStack_70);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103491264; end: 10349126b;  */

void FUN_103491264(void)

{
  return;
}



/* Entry: 10349126c; end: 10349142f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349126c(undefined8 param_1,byte param_2,byte param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_78,0,0);
  lVar1 = param_4 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar4 = lVar1 + _DAT_112f71bb0;
    func_0x000107c61428(lVar4,auStack_90,1,0);
    lVar2 = 0;
    func_0x000100b913d8();
    lVar3 = lVar4;
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar4,1,lVar2);
    if ((int)lVar3 == 0) {
      *(undefined8 *)(lVar4 + *(int *)(lVar2 + 0x30)) = param_1;
    }
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61428(param_4 + 0x10,auStack_a8,0,0);
  lVar1 = param_4 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar4 = lVar1 + _DAT_112f71bb0;
    func_0x000107c61428(lVar4,auStack_c0,1,0);
    lVar2 = 0;
    func_0x000100b913d8();
    lVar3 = lVar4;
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar4,1,lVar2);
    if ((int)lVar3 == 0) {
      *(byte *)(lVar4 + *(int *)(lVar2 + 0x34)) = param_2 & 1;
    }
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61428(param_4 + 0x10,auStack_d8,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    lVar1 = param_4 + _DAT_112f71bb0;
    func_0x000107c61428(lVar1,auStack_f0,1,0);
    lVar3 = 0;
    func_0x000100b913d8();
    lVar4 = lVar1;
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar1,1,lVar3);
    if ((int)lVar4 == 0) {
      *(byte *)(lVar1 + *(int *)(lVar3 + 0x38)) = param_3 & 1;
    }
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 103491430; end: 1034917c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103491430(double param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  
  lVar3 = 0x112d3b128;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_90 + -extraout_x8;
  lVar3 = 0x112f71aa0;
  func_0x0001000285a8(0x112f71aa0,&UNK_10dbcd6c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)puVar7 - extraout_x8_00;
  lVar2 = 0;
  func_0x000100b913d8();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar8 = lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d3b130;
  func_0x0001000285a8(0x112d3b130,&UNK_10d904950);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar8 - extraout_x8_02;
  lVar3 = param_2 + _DAT_112f71bb0;
  func_0x000107c61428(lVar3,auStack_88,0x21,0);
  pcVar6 = *(code **)(lVar5 + 0x30);
  lVar5 = lVar3;
  (*pcVar6)(lVar3,1,lVar2);
  if ((int)lVar5 == 0) {
    func_0x000107c61174(*(undefined8 *)(param_3 + _DAT_113067470));
    func_0x0001041b86fc(lVar9);
    lVar5 = 0;
    func_0x000100b91584();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar9,0,1,lVar5);
    func_0x0001034930d0(lVar9,lVar3 + *(int *)(lVar2 + 0x18),0x112d3b130,&UNK_10d904950);
  }
  lVar5 = lVar3;
  (*pcVar6)(lVar3,1,lVar2);
  if ((int)lVar5 == 0) {
    dVar10 = 0.0;
    if (*(long *)(param_4 + _DAT_113067de0) != 0) {
      func_0x000107c4223c();
      dVar10 = param_1;
    }
    dVar11 = 0.0;
    if (*(long *)(param_4 + _DAT_113067dd0) != 0) {
      func_0x000107c4223c();
      dVar11 = param_1;
    }
    func_0x000107c61168(PTR_PTR_1126afec0);
    dVar10 = dVar10 - dVar11;
    func_0x000107c4cec4();
    *(double *)(lVar3 + *(int *)(lVar2 + 0x1c)) = dVar10;
  }
  func_0x000107c614a8(auStack_88);
  FUN_103493214(lVar3,lVar4,0x112f71aa0,&UNK_10dbcd6c0);
  lVar5 = lVar4;
  (*pcVar6)(lVar4,1,lVar2);
  if ((int)lVar5 == 1) {
    func_0x00010349325c(lVar4,0x112f71aa0,&UNK_10dbcd6c0);
  }
  else {
    func_0x000103493050(lVar4,lVar8,&SUB_100b913d8);
    param_2 = param_2 + _DAT_112f71b60;
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    lVar5 = *(long *)(param_2 + 0x20);
    func_0x0001000a8868(param_2,uVar1);
    (**(code **)(lVar5 + 0x10))(lVar8,uVar1,lVar5);
    func_0x000103493094(lVar8,&SUB_100b913d8);
  }
  lVar5 = lVar3;
  (*pcVar6)(lVar3,1,lVar2);
  if ((int)lVar5 == 0) {
    FUN_103493214(lVar3 + *(int *)(lVar2 + 0x2c),puVar7,0x112d3b128,&UNK_10d996bb0);
  }
  else {
    lVar3 = 0;
    func_0x000100b91acc();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar7,1,1,lVar3);
  }
  FUN_103492aa0(param_3,puVar7);
  func_0x00010349325c(puVar7,0x112d3b128,&UNK_10d996bb0);
  FUN_10349021c((uint)param_3 & 1);
  return;
}



/* Entry: 1034917c4; end: 103491daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034917c4(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  
  lVar2 = 0;
  func_0x000100b91acc();
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar12 = (long)&lStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x112dd42b0;
  lStack_110 = lVar12;
  func_0x0001000285a8(0x112dd42b0,&UNK_10d996f10);
  lStack_f0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar12 - extraout_x8_00;
  lVar7 = 0x112d3b128;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar7 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_e0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar8 = lVar7 - extraout_x12;
  uStack_108 = uVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = uVar8 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar9 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12_02;
  lVar7 = 0;
  func_0x000100b91584();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar13 = lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_f8 = unaff_x20 + _DAT_112f71b88;
  FUN_1034932ec(lStack_f8,auStack_90);
  func_0x0001000a8868(auStack_90,uStack_78);
  uStack_d8 = param_1;
  func_0x000107c61174(*(undefined8 *)(param_1 + _DAT_113067470));
  func_0x0001041b86fc(lVar13);
  lVar7 = unaff_x20 + _DAT_112f71bb0;
  func_0x000107c61428(lVar7,auStack_a8,0,0);
  lVar3 = 0;
  func_0x000100b913d8();
  pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x30);
  lVar4 = lVar7;
  (*pcVar6)(lVar7,1,lVar3);
  if ((int)lVar4 == 0) {
    func_0x000103493214(lVar7 + *(int *)(lVar3 + 0x2c),lVar11,0x112d3b128,&UNK_10d996bb0);
  }
  else {
    (**(code **)(lVar15 + 0x38))(lVar11,1,1,lVar2);
  }
  (**(code **)(lStack_70 + 0x20))(1,lVar13,lVar11,uStack_78,lStack_70);
  func_0x00010349325c(lVar11,0x112d3b128,&UNK_10d996bb0);
  func_0x000103493094(lVar13,&SUB_100b91584);
  func_0x0001000834e4(auStack_90);
  lVar4 = lVar7;
  (*pcVar6)(lVar7,1,lVar3);
  lStack_e8 = lVar7;
  if ((int)lVar4 == 0) {
    func_0x000103493214(lVar7 + *(int *)(lVar3 + 0x2c),lVar10,0x112d3b128,&UNK_10d996bb0);
    pcStack_100 = *(code **)(lVar15 + 0x38);
  }
  else {
    pcStack_100 = *(code **)(lVar15 + 0x38);
    (*pcStack_100)(lVar10,1,1,lVar2);
  }
  (*pcStack_100)(lVar9,1,1,lVar2);
  lVar7 = (long)*(int *)(lStack_f0 + 0x30);
  func_0x000103493214(lVar10,lVar12,0x112d3b128,&UNK_10d996bb0);
  func_0x000103493214(lVar9,lVar12 + lVar7,0x112d3b128,&UNK_10d996bb0);
  pcVar14 = *(code **)(lVar15 + 0x30);
  lVar4 = lVar12;
  (*pcVar14)(lVar12,1,lVar2);
  uVar8 = uStack_108;
  if ((int)lVar4 == 1) {
    func_0x00010349325c(lVar9,0x112d3b128,&UNK_10d996bb0);
    func_0x00010349325c(lVar10,0x112d3b128,&UNK_10d996bb0);
    lVar7 = lVar12 + lVar7;
    (*pcVar14)(lVar7,1,lVar2);
    if ((int)lVar7 == 1) {
      func_0x00010349325c(lVar12,0x112d3b128,&UNK_10d996bb0);
      goto LAB_103491c6c;
    }
LAB_103491c2c:
    func_0x00010349325c(lVar12,0x112dd42b0,&UNK_10d996f10);
  }
  else {
    func_0x000103493214(lVar12,uStack_108,0x112d3b128,&UNK_10d996bb0);
    lVar4 = lVar12 + lVar7;
    (*pcVar14)(lVar4,1,lVar2);
    lVar11 = lStack_110;
    if ((int)lVar4 == 1) {
      func_0x00010349325c(lVar9,0x112d3b128,&UNK_10d996bb0);
      func_0x00010349325c(lVar10,0x112d3b128,&UNK_10d996bb0);
      func_0x000103493094(uVar8,&SUB_100b91acc);
      goto LAB_103491c2c;
    }
    func_0x000103493050(lVar12 + lVar7,lStack_110,&SUB_100b91acc);
    uVar5 = uVar8;
    func_0x00010419fb70(uVar8,lVar11);
    func_0x000103493094(lVar11,&SUB_100b91acc);
    func_0x00010349325c(lVar9,0x112d3b128,&UNK_10d996bb0);
    func_0x00010349325c(lVar10,0x112d3b128,&UNK_10d996bb0);
    func_0x000103493094(uVar8,&SUB_100b91acc);
    func_0x00010349325c(lVar12,0x112d3b128,&UNK_10d996bb0);
    if ((uVar5 & 1) != 0) goto LAB_103491c6c;
  }
  uVar1 = *(undefined8 *)(lStack_f8 + 0x18);
  lVar7 = *(long *)(lStack_f8 + 0x20);
  func_0x0001000a8868(lStack_f8,uVar1);
  (**(code **)(lVar7 + 0x30))(uVar1,lVar7);
LAB_103491c6c:
  lVar7 = lStack_e8;
  lVar12 = lStack_e8;
  (*pcVar6)(lStack_e8,1,lVar3);
  lVar4 = lStack_e0;
  if ((int)lVar12 == 0) {
    func_0x000103493214(lVar7 + *(int *)(lVar3 + 0x2c),lStack_e0,0x112d3b128,&UNK_10d996bb0);
  }
  else {
    (*pcStack_100)(lStack_e0,1,1,lVar2);
  }
  uVar8 = uStack_d8;
  FUN_103492aa0(uStack_d8,lVar4);
  func_0x00010349325c(lVar4,0x112d3b128,&UNK_10d996bb0);
  FUN_1034904f0(1,uVar8 & 1);
  return;
}



/* Entry: 103491db0; end: 103491dff; -[_TtC23SponsoredLensCTAHandler27SponsoredLensCTAHandlerImpl adAttachmentHandlerDidPresent:] */

/* WARNING: Possible PIC construction at 0x000103491de8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103491dec) */

void FUN_103491db0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1034917c4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103491e00; end: 103491e97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103491e00(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f71b68;
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + _DAT_112f71b68);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(param_2);
    }
    else {
      func_0x000107c61170();
      uVar3 = *(undefined8 *)(param_2 + lVar1);
      func_0x000107c4ffe8(uVar3);
      func_0x000107c61180();
      func_0x000107c61170(param_2);
      func_0x000107c615e8(uVar3);
    }
  }
  return;
}



/* Entry: 103491e98; end: 103491ee3; -[_TtC23SponsoredLensCTAHandler27SponsoredLensCTAHandlerImpl adAttachmentHandlerViewWillFullyAppear:] */

/* WARNING: Possible PIC construction at 0x000103491ecc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103491ed0) */

void FUN_103491e98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103493118();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103491ee4; end: 103492007; -[_TtC23SponsoredLensCTAHandler27SponsoredLensCTAHandlerImpl adAttachmentHandlerViewDidFullyAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103491ee4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  lVar1 = param_1 + _DAT_112f71bb0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  lVar2 = 0;
  func_0x000100b913d8();
  lVar3 = lVar1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar1,1,lVar2);
  func_0x000107c61174(param_1);
  if ((int)lVar3 == 0) {
    func_0x000107c5eea0(puVar4);
    lVar3 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar4,0,1,lVar3);
    func_0x0001034930d0(puVar4,lVar1 + *(int *)(lVar2 + 0x24),0x112d373d8,&UNK_10d9014c0);
  }
  func_0x000107c614a8(auStack_58);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103492008; end: 10349212b; -[_TtC23SponsoredLensCTAHandler27SponsoredLensCTAHandlerImpl adAttachmentHandlerViewWillFullyDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103492008(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  lVar1 = param_1 + _DAT_112f71bb0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  lVar2 = 0;
  func_0x000100b913d8();
  lVar3 = lVar1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar1,1,lVar2);
  func_0x000107c61174(param_1);
  if ((int)lVar3 == 0) {
    func_0x000107c5eea0(puVar4);
    lVar3 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar4,0,1,lVar3);
    func_0x0001034930d0(puVar4,lVar1 + *(int *)(lVar2 + 0x28),0x112d373d8,&UNK_10d9014c0);
  }
  func_0x000107c614a8(auStack_58);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10349212c; end: 10349212f; -[_TtC23SponsoredLensCTAHandler27SponsoredLensCTAHandlerImpl adAttachmentHandlerViewDidFullyDisappear:] */

void FUN_10349212c(void)

{
  return;
}



/* Entry: 103492130; end: 103492363;  */

void FUN_103492130(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  puVar3 = &UNK_11065b908;
  func_0x000107c613fc(&UNK_11065b908,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar4 = &UNK_11065b930;
  func_0x000107c613fc(&UNK_11065b930,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x1034924f0;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1034924f8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_102456760;
  puStack_88 = &UNK_11065b948;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11065b980;
  func_0x000107c613fc(&UNK_11065b980,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar6 + 0x18) = param_1;
  puVar7 = &UNK_11065b9a8;
  func_0x000107c613fc(&UNK_11065b9a8,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_103492534;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = (code *)0x103493348;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_11065b9c0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c61174(unaff_x20);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_2);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x62,0x206,0x1d,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103492360);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x62,0x208,0x14,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103492364);
  (*pcVar2)();
}



/* Entry: 103492364; end: 10349246b;  */

void FUN_103492364(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  if (param_1 != 0) {
    ppuVar3 = &puStack_70;
    func_0x000107c61174();
    pcVar1 = "handleAttachmentHandlerCompleted(with:scope:)";
    func_0x0001000c10c0("handleAttachmentHandlerCompleted(with:scope:)");
    func_0x000107c61180();
    puVar2 = &UNK_11065b9f8;
    func_0x000107c613fc(&UNK_11065b9f8,0x28,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    *(long *)(puVar2 + 0x20) = param_1;
    pcStack_50 = FUN_103493044;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_11065ba10;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 10349246c; end: 1034924d7; -[_TtC23SponsoredLensCTAHandler27SponsoredLensCTAHandlerImpl adAttachmentHandlerDidComplete:result:] */

/* WARNING: Possible PIC construction at 0x0001034924b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034924bc) */

void FUN_10349246c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103492130(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1034924d8; end: 1034924f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034924d8(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_6d8 [776];
  undefined1 auStack_3d0 [776];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar1 = lVar3 + _DAT_112f71bb0;
    func_0x000107c61428(lVar1,auStack_80,0x21,0);
    lVar4 = 0;
    func_0x000100b913d8();
    lVar5 = lVar1;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
    if ((int)lVar5 == 0) {
      func_0x000107c61174(param_1);
      func_0x0001042c3e04(auStack_6d8);
      func_0x00010178e4b0(auStack_6d8);
      iVar2 = *(int *)(lVar4 + 0x3c);
      func_0x000107c610b4(auStack_3d0,lVar1 + iVar2,0x301);
      func_0x000107c610b4(lVar1 + iVar2,auStack_6d8,0x301);
      func_0x000107c614a8(auStack_80);
      func_0x00010349325c(auStack_3d0,0x112dcbc48,&UNK_10d98e2c0);
    }
    else {
      func_0x000107c614a8(auStack_80);
    }
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_3d0,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar1 = lVar3 + _DAT_112f71bb0;
    func_0x000107c61428(lVar1,auStack_6d8,1,0);
    lVar4 = 0;
    func_0x000100b913d8();
    lVar5 = lVar1;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
    if ((int)lVar5 == 0) {
      *(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x30)) = *(undefined8 *)(param_1 + _DAT_11306ba00);
    }
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_80,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar1 = lVar3 + _DAT_112f71bb0;
    func_0x000107c61428(lVar1,auStack_98,1,0);
    lVar4 = 0;
    func_0x000100b913d8();
    lVar5 = lVar1;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
    if ((int)lVar5 == 0) {
      *(undefined1 *)(lVar1 + *(int *)(lVar4 + 0x34)) = *(undefined1 *)(param_1 + _DAT_11306b9f8);
    }
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_b0,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar1 = lVar3 + _DAT_112f71bb0;
    func_0x000107c61428(lVar1,auStack_c8,1,0);
    lVar4 = 0;
    func_0x000100b913d8();
    lVar5 = lVar1;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
    if ((int)lVar5 == 0) {
      *(undefined1 *)(lVar1 + *(int *)(lVar4 + 0x38)) = *(undefined1 *)(param_1 + _DAT_11306b9f0);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1034924f8; end: 103492517;  */

void FUN_1034924f8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103492518; end: 103492533;  */

void FUN_103492518(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103492534; end: 103492557;  */

void FUN_103492534(void)

{
  long unaff_x20;
  
  func_0x000103492db8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103492558; end: 10349291f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103492558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,long param_10,long param_11)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  undefined8 in_stack_00000028;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined8 uStack_70;
  
  lStack_78 = param_11;
  uStack_70 = in_stack_00000028;
  func_0x0001000c5db4(auStack_90);
  (**(code **)(*(long *)(param_11 + -8) + 0x20))();
  lVar2 = param_10;
  func_0x000107c610f8();
  lVar8 = _DAT_112f71bb0;
  lVar3 = 0;
  func_0x000100b913d8();
  pcVar10 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar10)(lVar2 + lVar8,1,1,lVar3);
  *(undefined8 *)(lVar2 + _DAT_112f71bb8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f71bc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_112f71bc8) = 0;
  FUN_1034932ec(param_1,lVar2 + _DAT_112f71b50);
  *(undefined8 *)(lVar2 + _DAT_112f71b58) = param_2;
  FUN_1034932ec(auStack_90,lVar2 + _DAT_112f71b60);
  *(undefined8 *)(lVar2 + _DAT_112f71b68) = param_8;
  *(undefined8 *)(lVar2 + _DAT_112f71b70) = param_9;
  puVar4 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c615f0(param_2);
  func_0x000107c61174();
  func_0x000107c615f0(param_9);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + _DAT_112f71b78) = puVar4;
  uVar5 = 0;
  func_0x0001000c6560();
  uVar6 = uVar5;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar2 + _DAT_112f71b80) = uVar6;
  FUN_1034932ec(param_5,lVar2 + _DAT_112f71b88);
  *(undefined8 *)(lVar2 + _DAT_112f71b90) = param_4;
  *(undefined1 *)(lVar2 + _DAT_112f71b98) = param_6;
  FUN_103493214(param_7,lVar2 + _DAT_112f71ba0,0x112f712d8,&UNK_10dbcd2f0);
  lVar7 = 0;
  func_0x000100b925e4();
  lVar8 = lVar7;
  func_0x000107c610f8();
  (*pcVar10)(lVar8 + _DAT_112f71a40,1,1,lVar3);
  puVar1 = (undefined8 *)(lVar8 + _DAT_112f71a48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112f71a50);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar8 + _DAT_113807320) = 1;
  *(undefined8 *)(lVar8 + _DAT_112f719f8) = param_2;
  FUN_1034932ec(auStack_90,lVar8 + _DAT_112f71a00);
  *(undefined8 *)(lVar8 + _DAT_112f71a30) = param_4;
  FUN_1034932ec(param_5,lVar8 + _DAT_112f71a28);
  *(undefined1 *)(lVar8 + _DAT_112f71a38) = param_6;
  *(undefined8 *)(lVar8 + _DAT_112f71a08) = param_8;
  *(undefined8 *)(lVar8 + _DAT_112f71a10) = param_9;
  func_0x0001000285a8(0x112f712e0,&UNK_10dbcd380);
  func_0x000107c613fc();
  func_0x000107c61580(param_4,2);
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_8);
  func_0x000107c615f0();
  func_0x0001000c2754();
  *(undefined8 *)(lVar8 + _DAT_112f71a18) = param_9;
  func_0x000107c613fc(uVar5,0x20,7);
  func_0x0001000c6580();
  *(undefined8 *)(lVar8 + _DAT_112f71a20) = uVar5;
  plVar9 = &lStack_a0;
  lStack_a0 = lVar8;
  lStack_98 = lVar7;
  func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  *(long **)(lVar2 + _DAT_112f71ba8) = plVar9;
  lStack_a8 = param_10;
  plVar9 = &lStack_b0;
  lStack_b0 = lVar2;
  func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  func_0x00010349325c(param_7,0x112f712d8,&UNK_10dbcd2f0);
  func_0x0001000834e4(param_5);
  func_0x0001000834e4(param_1);
  func_0x0001000834e4(auStack_90);
  return plVar9;
}



/* Entry: 103492920; end: 103492a9f;  */

/* WARNING: Removing unreachable block (ram,0x000103492a9c) */

void FUN_103492920(undefined **param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  ppuVar1 = param_1;
  func_0x000107c44300();
  func_0x000107c61180();
  if (ppuVar1 == (undefined **)0x0) {
    return;
  }
  ppuVar2 = ppuVar1;
  func_0x000107c44730();
  if ((int)ppuVar2 != 0) {
    ppuVar2 = param_1;
    func_0x000107c4d420();
    func_0x000107c61180();
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar5 = (undefined **)0x0;
      lVar4 = 0;
      lVar3 = param_2;
    }
    else {
      ppuVar5 = ppuVar2;
      func_0x000107c5faec();
      lVar3 = param_2;
      func_0x000107c61170(ppuVar2);
      lVar4 = param_2;
    }
    ppuVar6 = &PTR____CFConstantStringClassReference_110f78658;
    ppuVar2 = ppuVar6;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f78658);
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar2);
    if (lVar4 == 0) {
      func_0x000107c6142c(lVar3);
    }
    else {
      if (ppuVar5 == ppuVar6 && lVar4 == lVar3) {
        func_0x000107c6142c(lVar4);
        func_0x000107c6142c(lVar3);
      }
      else {
        func_0x000107c605b8(ppuVar5,lVar4,ppuVar6,lVar3,0);
        func_0x000107c6142c(lVar4);
        func_0x000107c6142c(lVar3);
        if (((ulong)ppuVar5 & 1) == 0) goto LAB_103492a78;
      }
      func_0x000107c61174();
      ppuVar2 = param_1;
      func_0x000107c44300();
      func_0x000107c61180();
      if (ppuVar2 != (undefined **)0x0) {
        func_0x000107c44884();
        func_0x000107c615e8(ppuVar2);
        func_0x000107c61170(param_1);
        func_0x000107c615e8(ppuVar1);
        return;
      }
      func_0x000107c61170(param_1);
    }
  }
LAB_103492a78:
  func_0x000107c615e8(ppuVar1);
  return;
}



/* Entry: 103492aa0; end: 103493043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103492aa0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  
  lVar1 = 0;
  func_0x000100b91acc();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112dd42b0;
  func_0x0001000285a8(0x112dd42b0,&UNK_10d996f10);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)puVar6 - extraout_x8_00;
  uVar2 = 0x112d3b128;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(uVar2 - 8) + 0x40));
  lVar7 = lVar3 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - extraout_x12;
  func_0x000104191a9c();
  if (9 < uVar2) {
    uStack_68 = uVar2;
    func_0x000107c60614(&UNK_11074f6a8,&uStack_68,&UNK_11074f6a8,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x103492db8);
    (*pcVar5)();
  }
  if (uVar2 == 3) {
    (**(code **)(lVar9 + 0x38))(lVar8,1,1,lVar1);
    lVar10 = (long)*(int *)(lVar10 + 0x30);
    FUN_103493214(param_2,lVar3,0x112d3b128,&UNK_10d996bb0);
    FUN_103493214(lVar8,lVar3 + lVar10,0x112d3b128,&UNK_10d996bb0);
    pcVar5 = *(code **)(lVar9 + 0x30);
    lVar9 = lVar3;
    (*pcVar5)(lVar3,1,lVar1);
    if ((int)lVar9 == 1) {
      func_0x00010349325c(lVar8,0x112d3b128,&UNK_10d996bb0);
      lVar10 = lVar3 + lVar10;
      (*pcVar5)(lVar10,1,lVar1);
      if ((int)lVar10 == 1) {
        func_0x00010349325c(lVar3,0x112d3b128,&UNK_10d996bb0);
        uVar4 = 1;
        goto LAB_103492bc4;
      }
    }
    else {
      FUN_103493214(lVar3,lVar7,0x112d3b128,&UNK_10d996bb0);
      lVar9 = lVar3 + lVar10;
      (*pcVar5)(lVar9,1,lVar1);
      if ((int)lVar9 != 1) {
        func_0x000103493050(lVar3 + lVar10,puVar6,&SUB_100b91acc);
        lVar10 = lVar7;
        func_0x00010419fb70(lVar7,puVar6);
        uVar4 = (uint)lVar10;
        func_0x000103493094(puVar6,&SUB_100b91acc);
        func_0x00010349325c(lVar8,0x112d3b128,&UNK_10d996bb0);
        func_0x000103493094(lVar7,&SUB_100b91acc);
        func_0x00010349325c(lVar3,0x112d3b128,&UNK_10d996bb0);
        goto LAB_103492bc4;
      }
      func_0x00010349325c(lVar8,0x112d3b128,&UNK_10d996bb0);
      func_0x000103493094(lVar7,&SUB_100b91acc);
    }
    func_0x00010349325c(lVar3,0x112dd42b0,&UNK_10d996f10);
  }
  uVar4 = 0;
LAB_103492bc4:
  return uVar4 & 1;
}



/* Entry: 103493044; end: 10349304f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103493044(double param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar7;
  long unaff_x20;
  long lVar8;
  code *pcVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  lVar4 = 0x112d3b128;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_90 + -extraout_x8;
  lVar4 = 0x112f71aa0;
  func_0x0001000285a8(0x112f71aa0,&UNK_10dbcd6c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar10 - extraout_x8_00;
  lVar2 = 0;
  func_0x000100b913d8();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar11 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112d3b130;
  func_0x0001000285a8(0x112d3b130,&UNK_10d904950);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar11 - extraout_x8_02;
  lVar4 = lVar3 + _DAT_112f71bb0;
  func_0x000107c61428(lVar4,auStack_88,0x21,0);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar8 = lVar4;
  (*pcVar9)(lVar4,1,lVar2);
  if ((int)lVar8 == 0) {
    func_0x000107c61174(*(undefined8 *)(lVar5 + _DAT_113067470));
    func_0x0001041b86fc(lVar12);
    lVar8 = 0;
    func_0x000100b91584();
    (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lVar12,0,1,lVar8);
    func_0x0001034930d0(lVar12,lVar4 + *(int *)(lVar2 + 0x18),0x112d3b130,&UNK_10d904950);
  }
  lVar8 = lVar4;
  (*pcVar9)(lVar4,1,lVar2);
  if ((int)lVar8 == 0) {
    dVar13 = 0.0;
    if (*(long *)(lVar6 + _DAT_113067de0) != 0) {
      func_0x000107c4223c();
      dVar13 = param_1;
    }
    dVar14 = 0.0;
    if (*(long *)(lVar6 + _DAT_113067dd0) != 0) {
      func_0x000107c4223c();
      dVar14 = param_1;
    }
    func_0x000107c61168(PTR_PTR_1126afec0);
    dVar13 = dVar13 - dVar14;
    func_0x000107c4cec4();
    *(double *)(lVar4 + *(int *)(lVar2 + 0x1c)) = dVar13;
  }
  func_0x000107c614a8(auStack_88);
  FUN_103493214(lVar4,lVar7,0x112f71aa0,&UNK_10dbcd6c0);
  lVar8 = lVar7;
  (*pcVar9)(lVar7,1,lVar2);
  if ((int)lVar8 == 1) {
    func_0x00010349325c(lVar7,0x112f71aa0,&UNK_10dbcd6c0);
  }
  else {
    func_0x000103493050(lVar7,lVar11,&SUB_100b913d8);
    lVar3 = lVar3 + _DAT_112f71b60;
    uVar1 = *(undefined8 *)(lVar3 + 0x18);
    lVar8 = *(long *)(lVar3 + 0x20);
    func_0x0001000a8868(lVar3,uVar1);
    (**(code **)(lVar8 + 0x10))(lVar11,uVar1,lVar8);
    func_0x000103493094(lVar11,&SUB_100b913d8);
  }
  lVar3 = lVar4;
  (*pcVar9)(lVar4,1,lVar2);
  if ((int)lVar3 == 0) {
    FUN_103493214(lVar4 + *(int *)(lVar2 + 0x2c),puVar10,0x112d3b128,&UNK_10d996bb0);
  }
  else {
    lVar4 = 0;
    func_0x000100b91acc();
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar10,1,1,lVar4);
  }
  FUN_103492aa0(lVar5,puVar10);
  func_0x00010349325c(puVar10,0x112d3b128,&UNK_10d996bb0);
  FUN_10349021c((uint)lVar5 & 1);
  return;
}



/* Entry: 103493050; end: 103493117;  */

undefined8 FUN_103493050(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103493118; end: 10349320b;  */

/* WARNING: Possible PIC construction at 0x00010349319c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034931a0) */
/* WARNING: Removing unreachable block (ram,0x0001034931f8) */
/* WARNING: Removing unreachable block (ram,0x0001034931a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103493118(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  long *plVar6;
  
  plVar6 = *(long **)(unaff_x20 + _DAT_112f71b90);
  puVar2 = &UNK_11065b8e0;
  func_0x000107c613fc(&UNK_11065b8e0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcVar3 = FUN_10349320c;
  puVar5 = puVar2;
  (**(code **)(*plVar6 + 0x60))();
  func_0x000107c61574(puVar2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f71bc0);
  uVar4 = *puVar1;
  *puVar1 = pcVar3;
  puVar1[1] = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar4);
  return;
}



/* Entry: 10349320c; end: 103493213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349320c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f71b68;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112f71b68);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c61170(lVar2);
    }
    else {
      func_0x000107c61170();
      uVar4 = *(undefined8 *)(lVar2 + lVar1);
      func_0x000107c4ffe8(uVar4);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(uVar4);
    }
  }
  return;
}



/* Entry: 103493214; end: 1034932df;  */

undefined8 FUN_103493214(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1034932e0; end: 1034932eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034932e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar7 = *(undefined8 *)(lVar3 + _DAT_112f71b70);
    uVar4 = uVar7;
    func_0x000107c614f0(uVar7);
    func_0x000107c615f0(uVar7);
    lVar5 = lVar3;
    func_0x000107c61174();
    func_0x00010418bb88(uVar6,uVar1,uVar2,lVar3,uVar4);
    func_0x000107c615e8(uVar7);
    func_0x000107c61170(lVar5);
    func_0x000107c42c1c(*(undefined8 *)(lVar5 + _DAT_112f71b68));
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 1034932ec; end: 10349332f;  */

long FUN_1034932ec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103493330; end: 10349334f;  */

void FUN_103493330(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103493350; end: 10349339b; -[_TtC23SponsoredLensCTAHandler26SponsoredLensCTAUIProvider uiContainer] */

void FUN_103493350(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c4d068();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10349339c; end: 1034933bf;  */

void FUN_10349339c(void)

{
  long unaff_x20;
  
  FUN_103493598(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1034933c0; end: 10349344f; -[_TtC23SponsoredLensCTAHandler33SponsoredLensPreviewCTAUIProvider uiContainer] */

void FUN_1034933c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x000107c6157c();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c5d180();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar1;
    func_0x000107c4d070(lVar1,param_2,1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103493450; end: 103493493;  */

void FUN_103493450(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103493494; end: 103493513; -[_TtC23SponsoredLensCTAHandler30SponsoredLensDeckCTAUIProvider uiContainer] */

void FUN_103493494(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126b0320;
  func_0x000107c61168(PTR_PTR_1126b0320);
  func_0x000107c6157c(param_1);
  func_0x000107c4d044(puVar1);
  func_0x000107c61180();
  func_0x000107c4d048(uVar2,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61574(param_1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103493514; end: 103493557;  */

void FUN_103493514(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103493558; end: 103493597; -[_TtC23SponsoredLensCTAHandler33SponsoredLensCallingCTAUIProvider uiContainer] */

void FUN_103493558(long param_1)

{
  func_0x000107c5d17c(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103493598; end: 1034935bb;  */

undefined8 FUN_103493598(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1034935bc; end: 1034935bf;  */

void FUN_1034935bc(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1034935c0; end: 103493b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1034935c0(undefined *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  char *pcVar11;
  code **ppcVar12;
  undefined8 uVar13;
  long lVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar15;
  long extraout_x12;
  long unaff_x20;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long alStack_e0 [6];
  long lStack_a8;
  undefined1 auStack_a7 [7];
  long alStack_a0 [2];
  code *apcStack_90 [6];
  
  lVar5 = 0;
  func_0x000100b91584();
  alStack_e0[4] = *(long *)(lVar5 + -8);
  lVar19 = *(long *)(alStack_e0[4] + 0x40);
  alStack_e0[3] = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)alStack_e0 - (lVar19 + 0xfU & 0xfffffffffffffff0);
  alStack_e0[5] = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12;
  lVar6 = 0;
  lStack_a8 = lVar14;
  func_0x000100b915bc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar14 = lVar14 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar14 - extraout_x8_00;
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar17 = *(long *)(lVar5 + -8);
  alStack_a0[1] = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  alStack_a0[0] = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar7 = PTR_PTR_1126c7d48;
  func_0x000107c61168();
  puVar8 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  puVar9 = puVar7;
  func_0x000107c4a678();
  func_0x000107c61170(puVar8);
  if ((int)puVar9 == 0) {
LAB_103493784:
    func_0x000107c61434(param_2);
  }
  else {
    puVar8 = param_1;
    uVar13 = param_2;
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c42750();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    if (puVar7 == (undefined *)0x0) goto LAB_103493784;
    param_1 = puVar7;
    func_0x000107c5faec(puVar7);
    func_0x000107c61170(puVar7);
    param_2 = uVar13;
  }
  func_0x000107c5edd0(lVar16,param_1,param_2);
  func_0x000107c6142c(param_2);
  lVar3 = alStack_a0[1];
  lVar10 = lVar16;
  (**(code **)(lVar17 + 0x30))(lVar16,1,alStack_a0[1]);
  lVar5 = alStack_a0[0];
  if ((int)lVar10 == 1) {
    func_0x0001000293e4(lVar16);
    return 0;
  }
  (**(code **)(lVar17 + 0x20))(alStack_a0[0],lVar16,lVar3);
  lVar16 = *(long *)(unaff_x20 + _DAT_112f71e88);
  func_0x000107c5d17c();
  func_0x000107c61180();
  if (lVar16 == 0) {
    (**(code **)(lVar17 + 8))(lVar5,lVar3);
    return 0;
  }
  alStack_e0[2] = lVar16;
  (**(code **)(lVar17 + 0x10))(lVar14,lVar5,lVar3);
  *(undefined8 *)(lVar14 + *(int *)(lVar6 + 0x14)) = 0;
  puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar6 + 0x18));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x39) = 0;
  *(undefined8 *)((long)puVar1 + 0x31) = 0;
  *(undefined8 *)(lVar14 + *(int *)(lVar6 + 0x1c)) = 0;
  puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar6 + 0x20));
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0x13;
  puVar1[6] = 9;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0xc) = 1;
  puVar1[0xd] = 0;
  puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar6 + 0x24));
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar6 + 0x28));
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar14 + *(int *)(lVar6 + 0x2c)) = 0;
  puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar6 + 0x30));
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar14 + *(int *)(lVar6 + 0x34)) = 0;
  lVar5 = lStack_a8;
  FUN_103493e18(lVar14,lStack_a8,&SUB_100b915bc);
  func_0x000107c6159c(lVar5,alStack_e0[3],0);
  bVar2 = *(byte *)(unaff_x20 + _DAT_112f71ea0);
  if (bVar2 < 3) {
    if (bVar2 == 0) {
      pcVar11 = "lens_carousel_sponsored_lens";
    }
    else {
      if (bVar2 == 1) {
        alStack_e0[3] = 0x800000010f153900;
        alStack_e0[1] = 0xd00000000000001f;
        goto LAB_1034939f0;
      }
      pcVar11 = "talk_carousel_sponsored_lens";
    }
    alStack_e0[1] = 0xd00000000000001c;
    alStack_e0[3] = (ulong)(pcVar11 + -0x20) | 0x8000000000000000;
  }
  else if (bVar2 == 3) {
    alStack_e0[3] = 0x800000010f1538c0;
    alStack_e0[1] = 0xd000000000000013;
  }
  else if (bVar2 == 4) {
    alStack_e0[3] = 0x800000010f1538a0;
    alStack_e0[1] = 0xd000000000000014;
  }
  else {
    alStack_e0[3] = 0xed00006174635f74;
    alStack_e0[1] = 0x6e65697069636572;
  }
LAB_1034939f0:
  pcVar11 = "presentWebView(forURL:)";
  func_0x0001000c10c0("presentWebView(forURL:)");
  func_0x000107c61180();
  puVar7 = &UNK_11065baa0;
  func_0x000107c613fc(&UNK_11065baa0,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,unaff_x20);
  lVar6 = lStack_a8;
  lVar5 = alStack_e0[5];
  FUN_103493e18(lStack_a8,alStack_e0[5],&SUB_100b91584);
  uVar15 = (ulong)*(byte *)(alStack_e0[4] + 0x50);
  uVar18 = uVar15 + 0x18 & (uVar15 ^ 0xffffffffffffffff);
  uVar20 = lVar19 + uVar18 + 7 & 0xfffffffffffffff8;
  puVar8 = &UNK_11065bac8;
  func_0x000107c613fc(&UNK_11065bac8,uVar20 + 0x18,uVar15 | 7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  func_0x000102c86288(lVar5,puVar8 + uVar18);
  lVar5 = alStack_e0[2];
  *(long *)(puVar8 + uVar20) = alStack_e0[2];
  *(long *)(puVar8 + uVar20 + 8) = alStack_e0[1];
  *(long *)((long)(puVar8 + uVar20 + 8) + 8) = alStack_e0[3];
  apcStack_90[4] = FUN_103493e5c;
  apcStack_90[0] = (code *)PTR___NSConcreteStackBlock_11034bd00;
  apcStack_90[1] = (code *)0x42000000;
  apcStack_90[2] = (code *)&UNK_1000f6b44;
  apcStack_90[3] = (code *)&UNK_11065bae0;
  ppcVar12 = apcStack_90;
  apcStack_90[5] = (code *)puVar8;
  func_0x000107c60bc4(ppcVar12);
  pcVar4 = apcStack_90[5];
  func_0x000107c615f0(lVar5);
  func_0x000107c61574(pcVar4);
  func_0x000107c4e590(pcVar11);
  func_0x000107c60bd0(ppcVar12);
  func_0x000107c615e8(lVar5);
  func_0x000107c615e8(pcVar11);
  FUN_103493ecc(lVar6,&SUB_100b91584);
  FUN_103493ecc(lVar14,&SUB_100b915bc);
  (**(code **)(lVar17 + 8))(alStack_a0[0],alStack_a0[1]);
  return 1;
}



/* Entry: 103493b74; end: 103493c6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103493b74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112f71e98);
    uVar1 = uVar3;
    func_0x000107c614f0(uVar3);
    func_0x000107c615f0(uVar3);
    lVar2 = param_1;
    func_0x000107c61174();
    func_0x00010418bbf4(param_2,param_3,param_4,param_5,param_1,0,0,uVar1);
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c42c1c(*(undefined8 *)(lVar2 + _DAT_112f71e90));
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103493c70; end: 103493cd7; -[_TtC23SponsoredLensCTAHandler34SponsoredLensOrganicCTAHandlerImpl presentWebViewForURL:] */

uint FUN_103493c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1034935c0(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 103493cd8; end: 103493d37; -[_TtC23SponsoredLensCTAHandler34SponsoredLensOrganicCTAHandlerImpl init] */

void FUN_103493cd8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredLensCTAHandler.SponsoredLensOrganicCTAHandlerImpl",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103493d04);
  (*pcVar1)();
}



/* Entry: 103493d38; end: 103493d7f; -[_TtC23SponsoredLensCTAHandler34SponsoredLensOrganicCTAHandlerImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103493d54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103493d58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103493d38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f71e88));
  return;
}



/* Entry: 103493d80; end: 103493d83; -[_TtC23SponsoredLensCTAHandler34SponsoredLensOrganicCTAHandlerImpl adAttachmentHandlerViewWillFullyAppear:] */

void FUN_103493d80(void)

{
  return;
}



/* Entry: 103493d84; end: 103493d87; -[_TtC23SponsoredLensCTAHandler34SponsoredLensOrganicCTAHandlerImpl adAttachmentHandlerViewDidFullyAppear:] */

void FUN_103493d84(void)

{
  return;
}



/* Entry: 103493d88; end: 103493d8b; -[_TtC23SponsoredLensCTAHandler34SponsoredLensOrganicCTAHandlerImpl adAttachmentHandlerViewWillFullyDisappear:] */

void FUN_103493d88(void)

{
  return;
}



/* Entry: 103493d8c; end: 103493d8f; -[_TtC23SponsoredLensCTAHandler34SponsoredLensOrganicCTAHandlerImpl adAttachmentHandlerViewDidFullyDisappear:] */

void FUN_103493d8c(void)

{
  return;
}



/* Entry: 103493d90; end: 103493d93; -[_TtC23SponsoredLensCTAHandler34SponsoredLensOrganicCTAHandlerImpl adAttachmentHandlerDidPresent:] */

void FUN_103493d90(void)

{
  return;
}



/* Entry: 103493d94; end: 103493e17; -[_TtC23SponsoredLensCTAHandler34SponsoredLensOrganicCTAHandlerImpl adAttachmentHandlerDidComplete:result:] */

/* WARNING: Possible PIC construction at 0x000103493dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103493dec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103493dd4) */
/* WARNING: Removing unreachable block (ram,0x000103493df0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103493d94(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 103493e18; end: 103493e5b;  */

undefined8 FUN_103493e18(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103493e5c; end: 103493eaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103493e5c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 auStack_68 [24];
  
  lVar7 = 0;
  func_0x000100b91584();
  uVar9 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar10 = uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff);
  uVar9 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + uVar10 + 7 & 0xfffffffffffffff8;
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + uVar9);
  puVar1 = (undefined8 *)(unaff_x20 + uVar9 + 8);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  lVar6 = unaff_x20 + uVar10;
  func_0x000107c61428(lVar7 + 0x10,auStack_68,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    uVar11 = *(undefined8 *)(lVar7 + _DAT_112f71e98);
    uVar4 = uVar11;
    func_0x000107c614f0(uVar11);
    func_0x000107c615f0(uVar11);
    lVar5 = lVar7;
    func_0x000107c61174();
    func_0x00010418bbf4(lVar6,uVar8,uVar2,uVar3,lVar7,0,0,uVar4);
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(lVar5);
    func_0x000107c42c1c(*(undefined8 *)(lVar5 + _DAT_112f71e90));
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 103493eb0; end: 103493ecb;  */

void FUN_103493eb0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103493ecc; end: 103493f07;  */

undefined8 FUN_103493ecc(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103493f08; end: 103493f13; -[SCSponsoredAttachmentHandlingServiceProvider systemScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103493f08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71ed0;
  func_0x000107c61428(param_1 + _DAT_112f71ed0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103493f14; end: 103493f1f; -[SCSponsoredAttachmentHandlingServiceProvider setSystemScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103493f14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f71ed0;
  func_0x000107c61428(param_1 + _DAT_112f71ed0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103493f20; end: 103493f2b; -[SCSponsoredAttachmentHandlingServiceProvider adRenderDataGrapheneLoggerFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103493f20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71ed8;
  func_0x000107c61428(param_1 + _DAT_112f71ed8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103493f2c; end: 103493f37; -[SCSponsoredAttachmentHandlingServiceProvider setAdRenderDataGrapheneLoggerFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103493f2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f71ed8;
  func_0x000107c61428(param_1 + _DAT_112f71ed8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103493f38; end: 103493f43; -[SCSponsoredAttachmentHandlingServiceProvider adAttachmentHandlerScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103493f38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71ee0;
  func_0x000107c61428(param_1 + _DAT_112f71ee0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103493f44; end: 103493f87;  */

void FUN_103493f44(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103493f88; end: 103493f93; -[SCSponsoredAttachmentHandlingServiceProvider setAdAttachmentHandlerScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103493f88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f71ee0;
  func_0x000107c61428(param_1 + _DAT_112f71ee0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103493f94; end: 103493fe7;  */

void FUN_103493f94(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103493fe8; end: 10349402f; -[SCSponsoredAttachmentHandlingServiceProvider adAttachmentHandlerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103493fe8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71ee8;
  func_0x000107c61428(param_1 + _DAT_112f71ee8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103494030; end: 103494093; -[SCSponsoredAttachmentHandlingServiceProvider setAdAttachmentHandlerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103494030(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f71ee8;
  func_0x000107c61428(param_1 + _DAT_112f71ee8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103494094; end: 103494277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103494094(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  lVar1 = unaff_x20;
  func_0x000107c5c634();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3d400();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c3d230();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c3d228();
        func_0x000107c61180();
        if (lVar4 != 0) {
          lVar5 = 0;
          FUN_103485508();
          func_0x000107c613fc();
          *(long *)(lVar5 + 0x10) = lVar1;
          *(long *)(lVar5 + 0x18) = lVar2;
          *(long *)(lVar5 + 0x20) = lVar4;
          *(long *)(lVar5 + 0x28) = lVar3;
          uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f71ef0);
          *(long *)(unaff_x20 + _DAT_112f71ef0) = lVar5;
          func_0x000107c61174(lVar1);
          func_0x000107c61174(lVar2);
          func_0x000107c61174(lVar3);
          func_0x000107c61174(lVar4);
          func_0x000107c6157c(lVar5);
          func_0x000107c61574(uVar8);
          puVar6 = &UNK_11065bb18;
          func_0x000107c613fc(&UNK_11065bb18,0x18,7);
          func_0x000107c61644(puVar6 + 0x10,lVar5);
          uVar8 = 0x112f711e0;
          func_0x0001000285a8(0x112f711e0,&UNK_10dbcd270);
          func_0x000107c613fc();
          pcVar7 = FUN_103494278;
          func_0x0001000bdd8c(FUN_103494278,puVar6,uVar8);
          uVar8 = 0;
          FUN_1037dd5b0(0);
          func_0x000107c610f8();
          func_0x0001037dd4f4(pcVar7,uVar8);
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar4);
          func_0x000107c61574(lVar5);
          return;
        }
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        lVar1 = lVar3;
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103494278; end: 10349427f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103494278(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(lVar1);
    uVar5 = *(undefined8 *)(lVar3 + _DAT_113091b70);
    func_0x000107c615f0(uVar5);
    func_0x000107c61170(lVar3);
    uVar2 = uVar5;
    func_0x000107c41b80();
    func_0x000107c61180();
    func_0x000107c615e8(uVar5);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_c8,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar1 == 0) {
      func_0x000107c61170(uVar2);
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      lVar3 = *(long *)(lVar1 + 0x18);
      func_0x000107c61174();
      func_0x000107c61574(lVar1);
      uVar5 = *(undefined8 *)(lVar3 + _DAT_113012cf0);
      func_0x000107c6157c(uVar5);
      func_0x000107c61170(lVar3);
      func_0x0001000d224c(&uStack_b0);
      func_0x000107c61574(uVar5);
      if (lStack_98 != 0) {
        FUN_1034855d0(&uStack_b0,auStack_80);
        func_0x000107c61428(unaff_x20 + 0x10,&uStack_b0,0,0);
        lVar1 = unaff_x20 + 0x10;
        func_0x000107c61648();
        if (lVar1 != 0) {
          uVar5 = *(undefined8 *)(lVar1 + 0x20);
          func_0x000107c61174();
          func_0x000107c61574(lVar1);
          func_0x000107c61428(unaff_x20 + 0x10,auStack_e0,0,0);
          lVar1 = unaff_x20 + 0x10;
          func_0x000107c61648();
          if (lVar1 != 0) {
            uVar4 = *(undefined8 *)(lVar1 + 0x28);
            func_0x000107c61174();
            func_0x000107c61574(lVar1);
            lVar3 = 0;
            func_0x00010348cba0();
            lVar1 = lVar3;
            func_0x000107c613fc();
            *(undefined8 *)(lVar1 + 0x10) = uVar5;
            *(undefined8 *)(lVar1 + 0x18) = uVar4;
            FUN_1034855e8(auStack_80,lVar1 + 0x20);
            *(undefined8 *)(lVar1 + 0x48) = uVar2;
            param_1[3] = lVar3;
            param_1[4] = (long)&PTR_DAT_11065b668;
            *param_1 = lVar1;
            func_0x0001000834e4(auStack_80);
            return;
          }
          func_0x000107c61170(uVar2);
          uVar2 = uVar5;
        }
        func_0x000107c61170(uVar2);
        func_0x0001000834e4(auStack_80);
        goto LAB_1034853b4;
      }
      func_0x000107c61170(uVar2);
    }
    FUN_103485588(&uStack_b0);
  }
LAB_1034853b4:
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 103494280; end: 10349430b; -[SCSponsoredAttachmentHandlingServiceProvider provide] */

void FUN_103494280(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_103494094();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "SponsoredLensCTAHandler/SCSponsoredAttachmentHandlingServiceProvider.swift",
                      0x4a,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10349430c);
  (*pcVar1)();
}



/* Entry: 10349430c; end: 10349433f; -[SCSponsoredAttachmentHandlingServiceProvider __safeProvide] */

void FUN_10349430c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103494094();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103494340; end: 103494383; -[SCSponsoredAttachmentHandlingServiceProvider end] */

void FUN_103494340(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103494384; end: 1034945f7;  */

void FUN_103494384(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0x63536d6574737973;
  if ((param_2 == 0x63536d6574737973 && param_3 == -0x14ffffffff9a8f91) ||
     (func_0x000107c605b8(0x63536d6574737973,0xeb0000000065706f,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59b6c();
  }
  else {
    uVar2 = 0xd000000000000029;
    if (((param_2 == -0x2fffffffffffffd7) && (param_3 == -0x7ffffffef0eac480)) ||
       (func_0x000107c605b8(0xd000000000000029,0x800000010f153b80,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52398();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef0fa3c10)) ||
         (func_0x000107c605b8(0xd000000000000020,0x800000010f05c3f0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5226c();
      }
      else {
        if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0fa3950)) {
          uVar2 = 0xd00000000000001f;
          func_0x000107c605b8(0xd00000000000001f,0x800000010f05c6b0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SponsoredLensCTAHandler/SCSponsoredAttachmentHandlingServiceProvider.swift"
                                ,0x4a,2,0x3f,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1034945f8);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52264();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1034945f8; end: 1034946a3; -[SCSponsoredAttachmentHandlingServiceProvider setValue:forIvarName:] */

void FUN_1034945f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103494384(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1034946a4; end: 103494737; -[SCSponsoredAttachmentHandlingServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034946a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f71ed0,0);
  func_0x000107c61614(param_1 + _DAT_112f71ed8,0);
  func_0x000107c61614(param_1 + _DAT_112f71ee0,0);
  *(undefined8 *)(param_1 + _DAT_112f71ee8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f71ef0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103494738; end: 10349476b;  */

void FUN_103494738(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


