/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1010ee114; end: 1010ee153;  */

void FUN_1010ee114(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5d570 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d923cb0;
  func_0x000107c61520(&UNK_10d923cb0,&UNK_110383ca0);
  puRam0000000112d5d570 = puVar1;
  return;
}



/* Entry: 1010ee154; end: 1010ee1c7;  */

undefined8 FUN_1010ee154(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1010ee1c8; end: 1010ee1eb;  */

void FUN_1010ee1c8(void)

{
  FUN_1010ec910();
  return;
}



/* Entry: 1010ee1ec; end: 1010ee22b;  */

void FUN_1010ee1ec(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(lVar1 + 0x48);
  *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  func_0x000107c504e8(*(undefined8 *)(lVar1 + 0x28));
  return;
}



/* Entry: 1010ee22c; end: 1010ee253;  */

void FUN_1010ee22c(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 1010ee254; end: 1010ee293;  */

void FUN_1010ee254(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1010ee294; end: 1010ee383;  */

uint FUN_1010ee294(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1010ee384; end: 1010ee3c3;  */

void FUN_1010ee384(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5d578 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d923c88;
  func_0x000107c61520(&UNK_10d923c88,&UNK_110383ca0);
  puRam0000000112d5d578 = puVar1;
  return;
}



/* Entry: 1010ee3c4; end: 1010ee3cb;  */

void FUN_1010ee3c4(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 1010ee3cc; end: 1010ee3f3;  */

void FUN_1010ee3cc(void)

{
  FUN_1010ee1c8();
  return;
}



/* Entry: 1010ee3f4; end: 1010ee407;  */

bool FUN_1010ee3f4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1010ee408; end: 1010ee4b3;  */

void FUN_1010ee408(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1010ee4b4; end: 1010ee4c3;  */

void FUN_1010ee4b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1010ee4c4; end: 1010eedb3;  */

long FUN_1010ee4c4(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  code *param_6,undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  uint uVar15;
  long extraout_x8;
  ulong uVar16;
  undefined8 *unaff_x20;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar22 = *unaff_x20;
  lVar2 = 0;
  uStack_e0 = param_4;
  uStack_d8 = param_5;
  lStack_b0 = param_2;
  uStack_98 = param_3;
  func_0x000107c5ede0();
  lVar17 = *(long *)(lVar2 + -8);
  lVar21 = *(long *)(lVar17 + 0x40);
  lStack_a0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)&puStack_f0 - (lVar21 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d5d568;
  puVar6 = &UNK_10d9392e0;
  lStack_a8 = lVar5;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar19 = (undefined8 *)(lVar5 - extraout_x8);
  func_0x0001000d224c(&puStack_90);
  if (puStack_90 == (undefined *)0x0) {
    puVar13 = (undefined1 *)0x3;
    func_0x0001007d6c6c(3,0xd000000000000046,0x800000010ef26540,uVar22,&PTR_DAT_110383d18);
    FUN_1010eee24();
    puVar6 = &UNK_110383e40;
    func_0x000107c613f8(&UNK_110383e40,puVar13,0,0);
    *puVar13 = 0;
    *puVar19 = puVar6;
    func_0x000107c6159c(puVar19,lVar2,1);
    (*param_6)(puVar19);
    goto LAB_1010ee7d0;
  }
  puStack_c8 = puStack_90;
  puVar3 = (undefined8 *)PTR_PTR_1126b08b0;
  lStack_e8 = lVar2;
  uStack_d0 = uVar22;
  pcStack_c0 = param_6;
  uStack_b8 = param_7;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c5ed70();
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar6);
  func_0x000107c3f71c();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar14 = 0x30;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  func_0x000107c61174();
  puVar4 = puVar3;
  func_0x00010448d8b0();
  uVar22 = *puVar4;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar22;
  *(undefined8 *)(lVar2 + 0x28) = uVar14;
  puVar6 = PTR_PTR_1126b17d8;
  func_0x000107c610f8();
  lVar5 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar2);
  func_0x000107c460ec();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar5);
  if (puVar6 == (undefined *)0x0) {
    puVar13 = (undefined1 *)0x3;
    func_0x0001007d6c6c(3,0xd00000000000004a,0x800000010ef26590,uStack_d0,&PTR_DAT_110383d18);
    FUN_1010eee24();
    puVar6 = &UNK_110383e40;
    func_0x000107c613f8(&UNK_110383e40,puVar13,0,0);
    *puVar13 = 1;
    *puVar19 = puVar6;
    func_0x000107c6159c(puVar19,lStack_e8,1);
    (*pcStack_c0)(puVar19);
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(puStack_c8);
    goto LAB_1010ee7d0;
  }
  func_0x000107c56498(puVar6);
  uVar16 = uStack_98;
  lVar2 = lStack_b0;
  if (0xe < uStack_98 >> 0x3c) goto LAB_1010ee95c;
  uVar1 = (uint)(uStack_98 >> 0x20);
  uVar15 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar15 == 0) {
      if ((uStack_98 & 0xff000000000000) == 0) goto LAB_1010ee950;
    }
    else {
      if ((long)(int)lStack_b0 == lStack_b0 >> 0x20) goto LAB_1010ee95c;
LAB_1010ee80c:
      FUN_100de78a0(lStack_b0,uStack_98);
    }
    puVar7 = PTR_PTR_1126df998;
    puStack_f0 = puVar3;
    func_0x000107c610f8(PTR_PTR_1126df998);
    func_0x000107c453e4();
    uVar22 = 0;
    func_0x000107c5ee24(0,lVar2,uVar16);
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar2);
    func_0x000107c54580(puVar7);
    func_0x000107c61170(uVar22);
    uVar22 = 0;
    if (uStack_d8 >> 0x3c < 0xf) {
      uVar22 = uStack_e0;
    }
    uVar16 = 0xc000000000000000;
    if (uStack_d8 >> 0x3c < 0xf) {
      uVar16 = uStack_d8;
    }
    uVar8 = 0;
    func_0x000107c5ee24(0,uVar22,uVar16);
    uVar14 = uVar22;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar22);
    func_0x000107c5457c(puVar7);
    func_0x000107c61170(uVar8);
    puVar9 = PTR_PTR_1126b7fa8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c55bf8();
    puVar10 = puVar9;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar10 == (undefined *)0x0) {
      puVar13 = (undefined1 *)0x3;
      func_0x0001007d6c6c(3,0xd00000000000005a,0x800000010ef265e0,uStack_d0,&PTR_DAT_110383d18);
      FUN_1010eee24();
      puVar10 = &UNK_110383e40;
      func_0x000107c613f8(&UNK_110383e40,puVar13,0,0);
      *puVar13 = 2;
      *puVar19 = puVar10;
      func_0x000107c6159c(puVar19,lStack_e8,1);
      (*pcStack_c0)(puVar19);
      func_0x000107c61170(puVar9);
      func_0x000107c615e8(puStack_c8);
      func_0x000107c61170(puVar6);
      func_0x0001000b44c0(lStack_b0,uStack_98);
      func_0x000107c61170(puStack_f0);
      func_0x000107c61170(puVar7);
LAB_1010ee7d0:
      FUN_1010ee08c(puVar19);
      return 0;
    }
    puVar11 = puVar10;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar10);
    puVar10 = puVar11;
    func_0x000107c5ee20(puVar11,uVar14);
    func_0x000107c57600(puVar6);
    func_0x000107c61170(puVar10);
    func_0x00010006c090(puVar11,uVar14);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar9);
    puVar3 = puStack_f0;
  }
  else if (uVar15 == 2) {
    if (*(long *)(lStack_b0 + 0x10) == *(long *)(lStack_b0 + 0x18)) goto LAB_1010ee95c;
    goto LAB_1010ee80c;
  }
LAB_1010ee950:
  func_0x0001000b44c0(lStack_b0,uStack_98);
LAB_1010ee95c:
  puVar7 = &UNK_110383d58;
  func_0x000107c613fc(&UNK_110383d58,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  lVar5 = lStack_a0;
  lVar2 = lStack_a8;
  (**(code **)(lVar17 + 0x10))(lStack_a8,param_1,lStack_a0);
  uVar16 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar18 = uVar16 + 0x28 & (uVar16 ^ 0xffffffffffffffff);
  uVar20 = lVar21 + uVar18 + 7 & 0xfffffffffffffff8;
  puVar9 = &UNK_110383d80;
  func_0x000107c613fc(&UNK_110383d80,uVar20 + 8,uVar16 | 7);
  uVar22 = uStack_b8;
  *(undefined **)(puVar9 + 0x10) = puVar7;
  *(code **)(puVar9 + 0x18) = pcStack_c0;
  *(undefined8 *)(puVar9 + 0x20) = uStack_b8;
  (**(code **)(lVar17 + 0x20))(puVar9 + uVar18,lVar2,lVar5);
  *(undefined8 *)(puVar9 + uVar20) = uStack_d0;
  pcStack_70 = FUN_1010eee64;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100f17d9c;
  puStack_78 = &UNK_110383d98;
  ppuVar12 = &puStack_90;
  puStack_68 = puVar9;
  func_0x000107c60bc4(ppuVar12);
  puVar7 = puStack_68;
  func_0x000107c6157c(uVar22);
  func_0x000107c61574(puVar7);
  puVar7 = puStack_c8;
  puVar9 = puStack_c8;
  func_0x000107c5078c(puStack_c8);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c615e8(puVar7);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar6);
  return (long)puVar9;
}



/* Entry: 1010eedb4; end: 1010eedff;  */

void FUN_1010eedb4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010eee00; end: 1010eee23;  */

void FUN_1010eee00(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001010eee10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1010eee24; end: 1010eee63;  */

void FUN_1010eee24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5d628 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d923df4;
  func_0x000107c61520(&UNK_10d923df4,&UNK_110383e40);
  puRam0000000112d5d628 = puVar1;
  return;
}



/* Entry: 1010eee64; end: 1010eeebb;  */

void FUN_1010eee64(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined1 *apuStack_a0 [2];
  long lStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined1 auStack_78 [24];
  
  lVar6 = 0;
  func_0x000107c5ede0();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar8 = uVar8 + 0x28 & (uVar8 ^ 0xffffffffffffffff);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcStack_80 = *(code **)(unaff_x20 + 0x18);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar6 + -8) + 0x40) + uVar8 + 7 & 0xffffffffffffff8));
  lVar6 = 0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0,pcStack_80,uStack_88,unaff_x20 + uVar8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined8 *)((long)apuStack_a0 - extraout_x8);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar12 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_78;
  func_0x000107c61428(lVar2 + 0x10,puVar4,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar3 = param_1;
    func_0x000107c44314();
    if (lVar3 == 0) {
      func_0x000107c4407c();
      func_0x000107c61180();
      if (param_1 != 0) {
        lVar3 = param_1;
        func_0x000107c5faec();
        uVar9 = *(undefined8 *)(lVar2 + 0x18);
        uVar7 = uVar9;
        apuStack_a0[1] = puVar4;
        lStack_90 = lVar3;
        func_0x000107c615f0(uVar9);
        func_0x000107c5ed70();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar4);
        func_0x000107c4faa0(uVar9);
        func_0x000107c615e8(uVar9);
        func_0x000107c61170(param_1);
        func_0x000107c61170(uVar7);
        puVar4 = apuStack_a0[1];
        func_0x000107c5ed80(lVar12,lStack_90,apuStack_a0[1]);
        func_0x000107c6142c(puVar4);
        (**(code **)(lVar10 + 0x10))(puVar11,lVar12,lVar1);
        func_0x000107c6159c(puVar11,lVar6,0);
        (*pcStack_80)(puVar11);
        func_0x000107c61574(lVar2);
        FUN_1010ee08c(puVar11);
        (**(code **)(lVar10 + 8))(lVar12,lVar1);
        return;
      }
    }
    func_0x000107c61574(lVar2);
  }
  puVar4 = (undefined1 *)0x3;
  func_0x0001007d6c6c(3,0xd000000000000059,0x800000010ef26640,uVar7,&PTR_DAT_110383d18);
  FUN_1010eee24();
  puVar5 = &UNK_110383e40;
  func_0x000107c613f8(&UNK_110383e40,puVar4,0,0);
  *puVar4 = 3;
  *puVar11 = puVar5;
  func_0x000107c6159c(puVar11,lVar6,1);
  (*pcStack_80)(puVar11);
  FUN_1010ee08c(puVar11);
  return;
}



/* Entry: 1010eeebc; end: 1010ef03f;  */

void FUN_1010eeebc(long param_1,long param_2)

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



/* Entry: 1010ef040; end: 1010ef07f;  */

void FUN_1010ef040(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5d630 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d923dcc;
  func_0x000107c61520(&UNK_10d923dcc,&UNK_110383e40);
  puRam0000000112d5d630 = puVar1;
  return;
}



/* Entry: 1010ef080; end: 1010ef0db; -[_TtC26LensSkipRecordingApiPlugin32NoOpLensApiServiceRequestHandler handleRequest:] */

void FUN_1010ef080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_1010ef110(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1010ef0dc; end: 1010ef0ef; -[_TtC26LensSkipRecordingApiPlugin32NoOpLensApiServiceRequestHandler reset] */

void FUN_1010ef0dc(void)

{
  return;
}



/* Entry: 1010ef0f0; end: 1010ef10f;  */

void FUN_1010ef0f0(void)

{
  func_0x000107c61168(&PTR_PTR_112d5d678);
  return;
}



/* Entry: 1010ef110; end: 1010ef217;  */

undefined * FUN_1010ef110(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (param_1 != 0) {
    func_0x000107c50374();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar4 = PTR_PTR_1126b0278;
    func_0x000107c610f8(PTR_PTR_1126b0278);
    puVar5 = puVar3;
    func_0x000107c5f9dc(puVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar3);
    func_0x000107c48368(puVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar5);
    func_0x000107c4a8a4(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010ef218);
  (*pcVar1)();
}



/* Entry: 1010ef218; end: 1010ef223; -[SCLensSkipRecordingApiPluginEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ef218(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5d6d0;
  func_0x000107c61428(param_1 + _DAT_112d5d6d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010ef224; end: 1010ef22f; -[SCLensSkipRecordingApiPluginEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ef224(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5d6d0;
  func_0x000107c61428(param_1 + _DAT_112d5d6d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010ef230; end: 1010ef23b; -[SCLensSkipRecordingApiPluginEntryPoint cameraUIScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ef230(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5d6d8;
  func_0x000107c61428(param_1 + _DAT_112d5d6d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010ef23c; end: 1010ef247; -[SCLensSkipRecordingApiPluginEntryPoint setCameraUIScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ef23c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5d6d8;
  func_0x000107c61428(param_1 + _DAT_112d5d6d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010ef248; end: 1010ef253; -[SCLensSkipRecordingApiPluginEntryPoint lensViewControllerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ef248(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5d6e0;
  func_0x000107c61428(param_1 + _DAT_112d5d6e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010ef254; end: 1010ef25f; -[SCLensSkipRecordingApiPluginEntryPoint setLensViewControllerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ef254(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5d6e0;
  func_0x000107c61428(param_1 + _DAT_112d5d6e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010ef260; end: 1010ef26b; -[SCLensSkipRecordingApiPluginEntryPoint lensPerformerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ef260(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5d6e8;
  func_0x000107c61428(param_1 + _DAT_112d5d6e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010ef26c; end: 1010ef277; -[SCLensSkipRecordingApiPluginEntryPoint setLensPerformerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ef26c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5d6e8;
  func_0x000107c61428(param_1 + _DAT_112d5d6e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010ef278; end: 1010ef283; -[SCLensSkipRecordingApiPluginEntryPoint contentDeliveryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ef278(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5d6f0;
  func_0x000107c61428(param_1 + _DAT_112d5d6f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010ef284; end: 1010ef28f; -[SCLensSkipRecordingApiPluginEntryPoint setContentDeliveryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ef284(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5d6f0;
  func_0x000107c61428(param_1 + _DAT_112d5d6f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010ef290; end: 1010ef29b; -[SCLensSkipRecordingApiPluginEntryPoint lensRemoteMediaService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ef290(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5d6f8;
  func_0x000107c61428(param_1 + _DAT_112d5d6f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010ef29c; end: 1010ef2df;  */

void FUN_1010ef29c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1010ef2e0; end: 1010ef2eb; -[SCLensSkipRecordingApiPluginEntryPoint setLensRemoteMediaService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ef2e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5d6f8;
  func_0x000107c61428(param_1 + _DAT_112d5d6f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010ef2ec; end: 1010ef33f;  */

void FUN_1010ef2ec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010ef340; end: 1010ef56b;  */

/* WARNING: Possible PIC construction at 0x0001010ef468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010ef478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010ef488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010ef530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010ef540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010ef510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010ef520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010ef500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010ef524) */
/* WARNING: Removing unreachable block (ram,0x0001010ef514) */
/* WARNING: Removing unreachable block (ram,0x0001010ef544) */
/* WARNING: Removing unreachable block (ram,0x0001010ef534) */
/* WARNING: Removing unreachable block (ram,0x0001010ef48c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001010ef47c) */
/* WARNING: Removing unreachable block (ram,0x0001010ef46c) */
/* WARNING: Removing unreachable block (ram,0x0001010ef504) */

void FUN_1010ef340(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3f284();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4b544();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c4b2f4();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c40434();
          func_0x000107c61180();
          if (lVar5 != 0) {
            func_0x000107c4b3b4();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              lVar6 = 0;
              FUN_1010ec5c8();
              func_0x000107c613fc();
              *(long *)(lVar6 + 0x10) = lVar1;
              *(long *)(lVar6 + 0x18) = lVar2;
              *(long *)(lVar6 + 0x20) = lVar3;
              *(long *)(lVar6 + 0x28) = lVar5;
              *(long *)(lVar6 + 0x30) = lVar4;
              *(long *)(lVar6 + 0x38) = unaff_x20;
              func_0x000107c61174(lVar1);
              func_0x000107c61174(lVar2);
              func_0x000107c61174(lVar3);
              func_0x000107c61174(lVar4);
              func_0x000107c61174(lVar5);
              func_0x000107c61174(unaff_x20);
              FUN_1010ebc30();
              lVar1 = unaff_x20;
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1010ef56c; end: 1010ef593; -[SCLensSkipRecordingApiPluginEntryPoint begin] */

void FUN_1010ef56c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010ef340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1010ef594; end: 1010ef5d7; -[SCLensSkipRecordingApiPluginEntryPoint end] */

void FUN_1010ef594(undefined8 param_1)

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



/* Entry: 1010ef5d8; end: 1010ef92b;  */

void FUN_1010ef5d8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0x49556172656d6163;
      if (((param_2 == 0x49556172656d6163) && (param_3 == -0x12ffff9a8f909cad)) ||
         (func_0x000107c605b8(0x49556172656d6163,0xed000065706f6353,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c530ec();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10d9960)) ||
           (func_0x000107c605b8(0xd00000000000001a,0x800000010ef266a0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55f14();
        }
        else {
          uVar2 = 0xd000000000000015;
          if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10e0a10)) ||
             (func_0x000107c605b8(0xd000000000000015,0x800000010ef1f5f0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55df4();
          }
          else {
            uVar2 = 0xd000000000000017;
            if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10e6230)) ||
               (func_0x000107c605b8(0xd000000000000017,0x800000010ef19dd0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c53808();
            }
            else {
              uVar2 = 0;
              if (((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10d9940)) &&
                 (func_0x000107c605b8(0xd000000000000016,0x800000010ef266c0,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "LensSkipRecordingApiPlugin/SCLensSkipRecordingApiPluginEntryPoint.swift"
                                    ,0x47,2,0x40,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1010ef92c);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55e4c();
            }
          }
        }
      }
      goto LAB_1010ef66c;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_1010ef66c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1010ef92c; end: 1010ef9d7; -[SCLensSkipRecordingApiPluginEntryPoint setValue:forIvarName:] */

void FUN_1010ef92c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1010ef5d8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1010ef9d8; end: 1010efa9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ef9d8(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d5d6d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5d6d8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5d6e0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5d6e8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5d6f0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5d6f8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d5d700) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010efa9c; end: 1010efabb; -[SCLensSkipRecordingApiPluginEntryPoint init] */

void FUN_1010efa9c(void)

{
  FUN_1010ef9d8();
  return;
}



/* Entry: 1010efabc; end: 1010efaef;  */

void FUN_1010efabc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010efaf0; end: 1010efb77; -[SCLensSkipRecordingApiPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010efaf0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d5d6d0);
  func_0x000107c61610(param_1 + _DAT_112d5d6d8);
  func_0x000107c61610(param_1 + _DAT_112d5d6e0);
  func_0x000107c61610(param_1 + _DAT_112d5d6e8);
  func_0x000107c61610(param_1 + _DAT_112d5d6f0);
  func_0x000107c61610(param_1 + _DAT_112d5d6f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d5d700));
  return;
}



/* Entry: 1010efb78; end: 1010efb97;  */

void FUN_1010efb78(void)

{
  func_0x000107c61168(&PTR_PTR_1127af698);
  return;
}



/* Entry: 1010efb98; end: 1010f02cf;  */

void FUN_1010efb98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long unaff_x20;
  
  func_0x000107c61170(param_3);
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  return;
}



/* Entry: 1010f02d0; end: 1010f02ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f02d0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long unaff_x20;
  long lVar15;
  undefined1 uVar16;
  long lStack_70;
  long lStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar5 = *(long *)(unaff_x20 + 0x40);
  lVar15 = *(long *)(unaff_x20 + 0x48);
  func_0x0001000285a8(0x112d5a608,&UNK_10d921390);
  func_0x000107c4af30();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  func_0x0001000285a8(0x112d5d810,&UNK_10d923f50);
  func_0x000107c4ac68();
  func_0x000107c61180();
  uVar2 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar4 = *(undefined8 *)(lVar5 + _DAT_113083868);
  func_0x0001000bda74();
  lVar5 = 0;
  FUN_1010f1910();
  func_0x000107c613fc();
  uVar6 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar5 + 0x58) = uVar6;
  *(undefined8 *)(lVar5 + 0x60) = 0;
  *(undefined8 *)(lVar5 + 0x68) = 0;
  *(undefined8 *)(lVar5 + 0x70) = 0;
  *(undefined1 *)(lVar5 + 0x78) = 0;
  *(undefined8 *)(lVar5 + 0x10) = uVar1;
  *(undefined8 *)(lVar5 + 0x18) = uVar3;
  *(undefined8 *)(lVar5 + 0x20) = uVar9;
  *(undefined8 *)(lVar5 + 0x28) = uVar10;
  *(undefined8 *)(lVar5 + 0x30) = uVar11;
  *(undefined8 *)(lVar5 + 0x38) = uVar2;
  lVar7 = 0;
  func_0x0001010f4430();
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x10) = uVar4;
  puVar8 = PTR_PTR_1126a6368;
  func_0x000107c610f8();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c453e4();
  *(undefined **)(lVar7 + 0x18) = puVar8;
  *(long *)(lVar5 + 0x48) = lVar7;
  *(long *)(lVar5 + 0x50) = lVar15;
  lVar15 = *(long *)(lVar15 + _DAT_1130344b8);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar15 == 0) {
    uVar16 = 0;
  }
  else {
    lVar12 = lVar15;
    func_0x000107c4a5a8();
    func_0x000107c615e8(lVar15);
    uVar16 = (undefined1)lVar12;
    *(undefined1 *)(lVar5 + 0x78) = uVar16;
  }
  lVar13 = 0;
  FUN_1010f41e8();
  lVar12 = lVar13;
  func_0x000107c610f8();
  lVar15 = _DAT_112d5dad0;
  puVar8 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c6157c(lVar7);
  func_0x000107c453e4();
  *(undefined **)(lVar12 + lVar15) = puVar8;
  *(undefined8 *)(lVar12 + _DAT_112d5dad8) = 0;
  *(undefined8 *)(lVar12 + _DAT_112d5daa8) = uVar9;
  *(undefined8 *)(lVar12 + _DAT_112d5dab0) = uVar10;
  *(undefined8 *)(lVar12 + _DAT_112d5dab8) = uVar11;
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  func_0x000107c414e4();
  func_0x000107c61180();
  *(undefined8 *)(lVar12 + _DAT_112d5dac0) = uVar11;
  *(long *)(lVar12 + _DAT_112d5dac8) = lVar7;
  *(undefined1 *)(lVar12 + _DAT_112d5dae0) = uVar16;
  plVar14 = &lStack_70;
  lStack_70 = lVar12;
  lStack_68 = lVar13;
  func_0x000107c61154(plVar14,PTR_s_init_1125d9248);
  *(long **)(lVar5 + 0x40) = plVar14;
  FUN_1010f095c();
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar4);
  *param_1 = lVar5;
  return;
}



/* Entry: 1010f02f0; end: 1010f036b;  */

void FUN_1010f02f0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1010f036c; end: 1010f038b;  */

void FUN_1010f036c(void)

{
  func_0x0001010efc1c();
  return;
}



/* Entry: 1010f038c; end: 1010f0393;  */

undefined8 FUN_1010f038c(void)

{
  return 0;
}



/* Entry: 1010f0394; end: 1010f03b3;  */

void FUN_1010f0394(void)

{
  func_0x000107c61168(&PTR_PTR_112d5d770);
  return;
}



/* Entry: 1010f03b4; end: 1010f03eb;  */

void FUN_1010f03b4(void)

{
  undefined8 uVar1;
  
  func_0x0001044e4d64(0);
  func_0x000107c610f8();
  uVar1 = 0x1d;
  func_0x0001044e4b78();
  uRam00000001137ff230 = uVar1;
  return;
}



/* Entry: 1010f03ec; end: 1010f08b3;  */

void FUN_1010f03ec(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  FUN_100f0c488();
  func_0x000107c61534();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  if (lRam0000000112d5d818 != -1) {
    func_0x000107c61568(0x112d5d818,FUN_1010f03b4);
  }
  uVar4 = uRam00000001137ff230;
  *(undefined8 *)(param_1 + 0x20) = uRam00000001137ff230;
  func_0x0001000285a8(0x112d4ad10,&UNK_10d937bb0);
  lVar3 = 1;
  func_0x000107c602e8();
  func_0x000107c61174(uVar4);
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010f05c4);
      (*pcVar2)();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar4 = 0;
    FUN_100f060ac(0,param_1);
  }
  lVar1 = lVar3 + 0x38;
  uVar5 = *(ulong *)(lVar3 + 0x28);
  func_0x000107c60114();
  uVar9 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar9 ^ 0xffffffffffffffff);
  uVar6 = uVar5 >> 6;
  uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
  uVar8 = 1L << (uVar5 & 0x3f);
  if ((uVar8 & uVar7) != 0) {
    func_0x0001044e4d64(0);
    do {
      uVar7 = *(ulong *)(*(long *)(lVar3 + 0x30) + uVar5 * 8);
      func_0x000107c61174();
      uVar6 = uVar7;
      func_0x000107c60118();
      func_0x000107c61170(uVar7);
      if ((uVar6 & 1) != 0) {
        func_0x000107c61170(uVar4);
        goto LAB_1010f0558;
      }
      uVar5 = uVar5 + 1 & ~uVar9;
      uVar6 = uVar5 >> 6;
      uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
      uVar8 = 1L << (uVar5 & 0x3f);
    } while ((uVar8 & uVar7) != 0);
  }
  *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
  *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar5 * 8) = uVar4;
  if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010f05c0);
    (*pcVar2)();
  }
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
LAB_1010f0558:
  func_0x000107c61588(param_1);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = 0;
  func_0x0001044e4d64(0);
  func_0x000107c61408(param_1 + 0x20,uVar10,uVar4);
  lRam00000001137ff238 = lVar3;
  return;
}



/* Entry: 1010f08b4; end: 1010f095b;  */

void FUN_1010f08b4(void)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eb0c();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  uVar2 = 0;
  func_0x000107c5eb24();
  func_0x000107c613fc();
  func_0x000107c5eb20();
  (**(code **)(lVar3 + 0x68))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)
              PTR___s10Foundation11JSONDecoderC19KeyDecodingStrategyO14useDefaultKeysyA2EmFWC_110350308
             ,lVar1);
  func_0x000107c5eb10(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uRam00000001137ff240 = uVar2;
  return;
}



/* Entry: 1010f095c; end: 1010f0a8f;  */

void FUN_1010f095c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  long unaff_x20;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    lVar1 = lStack_48;
    func_0x000107c51c8c(lStack_48);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_48);
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    lVar2 = lVar1;
    func_0x0001000b637c(lVar1);
    uVar3 = 0;
    FUN_100c70ba8(0);
    pcVar4 = FUN_1010f150c;
    func_0x0001000d5158(FUN_1010f150c,0,uVar3);
    func_0x000107c61574(lVar2);
    puVar5 = &UNK_110383fe8;
    func_0x000107c613fc(&UNK_110383fe8,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    pcVar6 = FUN_1010f1cfc;
    puVar7 = puVar5;
    (**(code **)(*(long *)pcVar4 + 0x60))(FUN_1010f1cfc);
    func_0x000107c61574(pcVar4);
    func_0x000107c61574(puVar5);
    pcVar4 = pcVar6;
    func_0x000107c614f0(pcVar6);
    (**(code **)(puVar7 + 0x10))(*(undefined8 *)(unaff_x20 + 0x58),pcVar4,puVar7);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(pcVar6);
  }
  return;
}



/* Entry: 1010f0a90; end: 1010f0d5b;  */

undefined * FUN_1010f0a90(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  bool bVar10;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c453e4();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1010f0d5c);
    (*pcVar1)();
  }
  lVar3 = param_1;
  func_0x000107c428b4();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5faec();
  func_0x000107c61170(lVar3);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (lVar3 == 0) {
    bVar10 = false;
  }
  else {
    if (lVar3 != 1) {
      lStack_88 = 0;
      lStack_80 = 0xe000000000000000;
      func_0x000107c602fc(0x13);
      func_0x000107c6142c(lStack_80);
      lStack_88 = -0x2fffffffffffffef;
      lStack_80 = -0x7ffffffef10da330;
      lVar3 = param_1;
      func_0x000107c428b4(param_1);
      func_0x000107c61180();
      lVar8 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      func_0x000107c5fb78(lVar8,lVar4);
      func_0x000107c6142c(lVar4);
      lVar4 = lStack_80;
      func_0x000103dac9b4(param_1,5,puVar2,lStack_88,lStack_80);
      goto LAB_1010f0d30;
    }
    bVar10 = true;
  }
  lVar3 = param_1;
  FUN_1010f0d5c();
  uVar9 = *(undefined8 *)(unaff_x20 + 0x70);
  *(long *)(unaff_x20 + 0x68) = lVar3;
  *(long *)(unaff_x20 + 0x70) = lVar4;
  lVar8 = lVar4;
  func_0x000107c61434(lVar4);
  func_0x000107c6142c(uVar9);
  if (lVar4 == 0) {
    func_0x000103dac9b4(param_1,5,puVar2,0xd00000000000002a,0x800000010ef26740);
    return puVar2;
  }
  if (bVar10) {
    lVar5 = *(long *)(unaff_x20 + 0x60);
    if (lVar5 != 0) {
      func_0x000107c61174();
      lVar6 = lVar5;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      lVar7 = lVar6;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
      lVar6 = lVar5;
      func_0x000107c5d2f0();
      func_0x000107c61180();
      lStack_88 = lVar6;
      lStack_80 = lVar7;
      lStack_78 = lVar8;
      lStack_70 = lVar3;
      lStack_68 = lVar4;
      func_0x000107c61434(lVar4);
      FUN_1010f2d90(&lStack_88);
      func_0x000103dac9b4(param_1,1,puVar2,0,0);
      func_0x000107c61170(lVar5);
      func_0x000107c61430(lVar4,2);
      func_0x000107c6142c(lVar8);
      func_0x000107c61170(lVar6);
      return puVar2;
    }
    func_0x000103dac9b4(param_1,5,puVar2,0x746f6e20736e654c,0xee00646e756f6620);
  }
  else {
    FUN_1010f0ff4(param_1,puVar2,lVar3,lVar4);
  }
LAB_1010f0d30:
  func_0x000107c6142c(lVar4);
  return puVar2;
}



/* Entry: 1010f0d5c; end: 1010f0ff3;  */

undefined1  [16] FUN_1010f0d5c(undefined8 param_1,long param_2)

{
  char cVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  undefined1 auVar10 [16];
  
  ppuVar3 = *(undefined ***)(unaff_x20 + 0x60);
  ppuVar6 = ppuVar3;
  if (ppuVar3 != (undefined **)0x0) {
    cVar1 = *(char *)(unaff_x20 + 0x78);
    func_0x000107c61174();
    if (((cVar1 == '\x01') && (FUN_1010f1430(param_1), *(char *)(unaff_x20 + 0x78) == '\x01')) &&
       (*(long *)(unaff_x20 + 0x70) != 0)) {
      func_0x000107c61170(ppuVar3);
      ppuVar6 = *(undefined ***)(unaff_x20 + 0x68);
      lVar7 = *(long *)(unaff_x20 + 0x70);
      func_0x000107c61434(lVar7);
      goto LAB_1010f0f00;
    }
    ppuVar4 = ppuVar3;
    func_0x000107c5d2f0();
    func_0x000107c61180();
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar6 = ppuVar4;
      func_0x000107c3e318();
      func_0x000107c61180();
      if (ppuVar6 != (undefined **)0x0) {
        ppuVar5 = ppuVar6;
        func_0x000107c5faec();
        lVar7 = param_2;
        func_0x000107c61170(ppuVar6);
        ppuVar6 = &PTR____CFConstantStringClassReference_110e45458;
        func_0x000107c5faec();
        lVar8 = lVar7;
        if (ppuVar6 == ppuVar5 && lVar7 == param_2) {
          func_0x000107c6142c(param_2);
          param_2 = lVar7;
LAB_1010f0e78:
          func_0x000107c6142c(param_2);
          ppuVar6 = ppuVar4;
          func_0x000107c5e214();
          func_0x000107c61180();
          if (ppuVar6 == (undefined **)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1010f0fe8);
            (*pcVar2)();
          }
          ppuVar5 = ppuVar6;
          func_0x000107c5e264();
          func_0x000107c61180();
          func_0x000107c61170(ppuVar6);
          if (ppuVar5 == (undefined **)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1010f0fec);
            (*pcVar2)();
          }
          ppuVar6 = ppuVar5;
          func_0x000107c5faec(ppuVar5);
          func_0x000107c61170(ppuVar5);
          lVar7 = lVar8;
          FUN_1010f1970(ppuVar6,lVar8);
          lVar9 = lVar8;
        }
        else {
          func_0x000107c605b8();
          func_0x000107c6142c(lVar7);
          if (((ulong)ppuVar6 & 1) != 0) goto LAB_1010f0e78;
          ppuVar6 = &PTR____CFConstantStringClassReference_110e35d58;
          func_0x000107c5faec();
          lVar9 = lVar8;
          if ((ppuVar6 == ppuVar5) && (lVar8 == param_2)) {
            func_0x000107c6142c(param_2);
            func_0x000107c6142c(lVar8);
          }
          else {
            func_0x000107c605b8();
            func_0x000107c6142c(param_2);
            func_0x000107c6142c(lVar8);
            if (((ulong)ppuVar6 & 1) == 0) {
              func_0x000107c61170(ppuVar3);
              ppuVar3 = ppuVar4;
              goto LAB_1010f0e60;
            }
          }
          ppuVar6 = ppuVar4;
          func_0x000107c414c4();
          func_0x000107c61180();
          if (ppuVar6 == (undefined **)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1010f0ff0);
            (*pcVar2)();
          }
          ppuVar5 = ppuVar6;
          func_0x000107c5d7e0();
          func_0x000107c61180();
          func_0x000107c61170(ppuVar6);
          if (ppuVar5 == (undefined **)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1010f0ff4);
            (*pcVar2)();
          }
          ppuVar6 = ppuVar5;
          func_0x000107c5faec(ppuVar5);
          func_0x000107c61170(ppuVar5);
          lVar7 = lVar9;
          func_0x0001010f1b08(ppuVar6,lVar9);
        }
        func_0x000107c61170(ppuVar3);
        func_0x000107c61170(ppuVar4);
        func_0x000107c6142c(lVar9);
        goto LAB_1010f0f00;
      }
      func_0x000107c61170(ppuVar4);
    }
LAB_1010f0e60:
    func_0x000107c61170(ppuVar3);
    ppuVar6 = (undefined **)0x0;
  }
  lVar7 = 0;
LAB_1010f0f00:
  auVar10._8_8_ = lVar7;
  auVar10._0_8_ = ppuVar6;
  return auVar10;
}



/* Entry: 1010f0ff4; end: 1010f13d3;  */

/* WARNING: Possible PIC construction at 0x0001010f12d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f139c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f11fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010f13a0) */
/* WARNING: Removing unreachable block (ram,0x0001010f12d8) */
/* WARNING: Removing unreachable block (ram,0x0001010f1200) */
/* WARNING: Removing unreachable block (ram,0x0001010f121c) */
/* WARNING: Removing unreachable block (ram,0x0001010f1294) */

undefined1  [16]
FUN_1010f0ff4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 unaff_x19;
  undefined *puVar10;
  long *unaff_x20;
  long *plVar11;
  undefined *puVar12;
  undefined *puVar13;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 unaff_x24;
  undefined *puVar14;
  undefined8 unaff_x25;
  undefined *puVar15;
  long unaff_x26;
  undefined *puVar16;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_98;
  
  puVar5 = &stack0xfffffffffffffff0;
  lVar9 = unaff_x20[0xc];
  if (lVar9 == 0) {
    uVar7 = 0x746f6e20736e654c;
    lVar8 = -0x11ff9b918a9099e0;
    uVar6 = 5;
    plVar11 = unaff_x20;
    lVar9 = unaff_x21;
  }
  else {
    uVar7 = param_2;
    uStack_d8 = param_4;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    unaff_x26 = lVar9;
    if (lVar9 == 0) {
      func_0x000107c5faec();
      uVar6 = uVar7;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar7);
      unaff_x26 = 0;
      func_0x000107c5faec();
      uVar7 = uVar6;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar6);
    }
    plVar11 = (long *)unaff_x20[3];
    func_0x000107c61174();
    func_0x0001000d224c(&lStack_c8);
    lVar8 = lStack_c8;
    unaff_x19 = param_2;
    unaff_x22 = param_1;
    unaff_x29 = puVar5;
    if (lStack_c8 != 0) {
      lVar2 = lStack_c8;
      func_0x000107c4b3f8();
      func_0x000107c61180();
      func_0x000107c615e8(lVar8);
      if (lVar2 != 0) {
        lVar8 = lVar2;
        func_0x000107c5faec();
        unaff_x25 = uVar7;
        lStack_e8 = lVar8;
        func_0x000107c61170(lVar2);
        func_0x0001000d224c(&lStack_c8);
        lVar8 = lStack_c8;
        uVar6 = uVar7;
        if (lStack_c8 != 0) {
          lVar2 = lStack_c8;
          uStack_e0 = uVar7;
          func_0x000107c4b474();
          func_0x000107c61180();
          func_0x000107c615e8(lVar8);
          if (lVar2 != 0) {
            func_0x000107c61170(lVar9);
            lVar9 = lVar2;
            func_0x000107c5faec();
            uVar7 = unaff_x25;
            lStack_f0 = lVar9;
            func_0x000107c61170(lVar2);
            lVar9 = param_1;
            func_0x000107c3eb80();
            func_0x000107c61180();
            if (lVar9 == 0) {
              lVar8 = 0;
              uVar7 = 0xc000000000000000;
            }
            else {
              lVar8 = lVar9;
              func_0x000107c5ee30();
              func_0x000107c61170(lVar9);
            }
            if (lRam0000000112d5d980 != -1) {
              lVar9 = 0x112d5d980;
              func_0x000107c61568(0x112d5d980,FUN_1010f08b4);
            }
            func_0x0001010f1930();
            func_0x000107c5eb1c(&lStack_c8,&UNK_110384218,lVar8,uVar7,&UNK_110384218,lVar9);
            func_0x000107c61170(unaff_x26);
            func_0x00010006c090(lVar8,uVar7);
            lVar9 = lStack_a8;
            plVar1 = plStack_b0;
            func_0x0001000d224c(&lStack_c8);
            plVar11 = &lStack_c8;
            func_0x0001000a8868(plVar11,plStack_b0);
            unaff_x24 = uStack_e0;
            (**(code **)(lStack_a8 + 0x30))
                      (lStack_c8,uStack_c0,uStack_b8,plVar1,lVar9,param_3,uStack_d8,lStack_e8,
                       uStack_e0,lStack_f0,unaff_x25,plStack_b0,lStack_a8);
            func_0x0001000834e4(&lStack_c8);
            uVar6 = 1;
            uVar7 = 0;
            lVar8 = 0;
            unaff_x30 = 0x1010f13a0;
            register0x00000008 = (BADSPACEBASE *)&lStack_f0;
            lVar9 = lStack_98;
            unaff_x23 = plStack_b0;
            unaff_x26 = lStack_a8;
            goto code_r0x000103dac9b4;
          }
          plVar11 = (long *)0x0;
          uVar6 = uStack_e0;
        }
        func_0x000107c6142c(uVar6);
        unaff_x24 = uVar7;
      }
    }
    func_0x000107c61170(unaff_x26);
    uVar7 = 0xd000000000000024;
    lVar8 = -0x7ffffffef10da310;
    uVar6 = 10;
    unaff_x30 = 0x1010f1200;
    register0x00000008 = (BADSPACEBASE *)&lStack_f0;
    unaff_x23 = unaff_x20;
    unaff_x25 = param_3;
  }
code_r0x000103dac9b4:
  puVar12 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = lVar9;
  *(long **)((long)register0x00000008 + -0x20) = plVar11;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x58) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (lVar8 != 0) {
    *(undefined8 *)((long)register0x00000008 + -0x98) = uVar7;
    *(long *)((long)register0x00000008 + -0x90) = lVar8;
    *(undefined **)((long)register0x00000008 + -0x80) = PTR___sSSN_11034da80;
    func_0x000100102924((undefined1 *)((long)register0x00000008 + -0x98),
                        (undefined1 *)((long)register0x00000008 + -0x78));
    func_0x000107c61434(lVar8);
    puVar16 = puVar12;
    func_0x000107c61558(puVar12);
    *(undefined **)((long)register0x00000008 + -0x98) = puVar12;
    uVar6 = 0x6567617373656d;
    func_0x0001001029e8((undefined1 *)((long)register0x00000008 + -0x78),0x6567617373656d,
                        0xe700000000000000,puVar16);
    puVar12 = *(undefined **)((long)register0x00000008 + -0x98);
  }
  lVar9 = param_1;
  func_0x000107c50374();
  func_0x000107c61180();
  if (lVar9 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar6);
  }
  func_0x000107c4e33c();
  func_0x000107c61180();
  puVar15 = PTR___sSSSHsWP_11034da90;
  puVar16 = PTR___sSSN_11034da80;
  lVar8 = param_1;
  func_0x000107c5f9e8();
  func_0x000107c61170(param_1);
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar14 = puVar12;
  func_0x000107c5f9dc(puVar12,puVar16,PTR___sypN_11034f1a8 + 8,puVar15);
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  uVar7 = *(undefined8 *)((long)register0x00000008 + -0x78);
  func_0x000107c61174(uVar7);
  if (puVar3 == (undefined *)0x0) {
    uVar6 = uVar7;
    func_0x000107c5ed30();
    func_0x000107c61170(uVar7);
    func_0x000107c61654();
    func_0x000107c614ac(uVar6);
    puVar15 = (undefined *)0x0;
    puVar16 = (undefined *)0xf000000000000000;
  }
  else {
    puVar15 = puVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar3);
  }
  lVar2 = lVar8;
  puVar3 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(lVar8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar8);
  if ((ulong)puVar16 >> 0x3c < 0xf) {
    puVar14 = puVar15;
    func_0x000107c5ee20(puVar15,puVar16);
    func_0x0001000b44c0(puVar15,puVar16);
  }
  else {
    puVar14 = (undefined *)0x0;
    puVar16 = puVar3;
  }
  puVar15 = PTR_PTR_1126b0278;
  func_0x000107c610f8();
  func_0x000107c48368();
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar14);
  func_0x000107c4d664(param_2);
  func_0x000107c6142c(puVar12);
  puVar3 = puVar15;
  func_0x000107c61170(puVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
    auVar17._8_8_ = puVar16;
    auVar17._0_8_ = puVar3;
    return auVar17;
  }
  func_0x000107c60e78();
  *(undefined **)((long)register0x00000008 + -0xd0) = puVar15;
  *(long *)((long)register0x00000008 + -200) = lVar2;
  *(undefined **)((long)register0x00000008 + -0xc0) = puVar12;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = param_2;
  *(undefined1 **)((long)register0x00000008 + -0xb0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0xa8) = &UNK_103dacc60;
  *(undefined8 *)((long)register0x00000008 + -0xd8) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar16 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(puVar3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90)
  ;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = *(undefined **)((long)register0x00000008 + -0xe0);
  func_0x000107c61174();
  if (puVar12 == (undefined *)0x0) {
    puVar12 = puVar3;
    func_0x000107c5ed30();
    func_0x000107c61170(puVar3);
    func_0x000107c61654();
    puVar4 = puVar12;
    func_0x000107c614ac(puVar12);
    puVar10 = (undefined *)0x0;
    puVar13 = (undefined *)0xf000000000000000;
    puVar3 = puVar16;
  }
  else {
    puVar10 = puVar12;
    func_0x000107c5ee30();
    puVar4 = puVar12;
    puVar3 = puVar16;
    func_0x000107c61170(puVar12);
    puVar13 = puVar16;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xd8)) {
    auVar18._8_8_ = puVar13;
    auVar18._0_8_ = puVar10;
    return auVar18;
  }
  func_0x000107c60e78();
  *(undefined **)((long)register0x00000008 + -0x130) = puVar14;
  *(long *)((long)register0x00000008 + -0x128) = lVar9;
  *(undefined **)((long)register0x00000008 + -0x120) = puVar15;
  *(undefined **)((long)register0x00000008 + -0x118) = puVar12;
  *(undefined **)((long)register0x00000008 + -0x110) = puVar13;
  *(undefined **)((long)register0x00000008 + -0x108) = puVar10;
  *(undefined1 **)((long)register0x00000008 + -0x100) =
       (undefined1 *)((long)register0x00000008 + -0xb0);
  *(undefined **)((long)register0x00000008 + -0xf8) = &SUB_103dacd78;
  *(undefined8 *)((long)register0x00000008 + -0x138) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)puVar3 >> 0x3c < 0xf) {
    puVar12 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    func_0x00010006c00c(puVar4,puVar3);
    puVar16 = puVar4;
    func_0x000107c5ee20(puVar4,puVar3);
    *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    uVar7 = *(undefined8 *)((long)register0x00000008 + -0x158);
    if (puVar12 != (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c60234((undefined1 *)((long)register0x00000008 + -0x158),puVar12);
      func_0x0001000b44c0(puVar4,puVar3);
      func_0x000107c615e8(puVar12);
      uVar7 = 0x112d472a8;
      func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
      puVar5 = (undefined1 *)((long)register0x00000008 + -0x168);
      puVar3 = (undefined *)((long)register0x00000008 + -0x158);
      func_0x000107c6147c(puVar5,puVar3,PTR___sypN_11034f1a8 + 8,uVar7,6);
      uVar7 = *(undefined8 *)((long)register0x00000008 + -0x168);
      if ((int)puVar5 == 0) {
        uVar7 = 0;
      }
      goto code_r0x000103dacebc;
    }
    uVar6 = uVar7;
    func_0x000107c61174();
    func_0x000107c5ed30(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61654();
    func_0x0001000b44c0(puVar4,puVar3);
    func_0x000107c614ac(uVar7);
  }
  uVar7 = 0;
code_r0x000103dacebc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x138)) {
    auVar19._8_8_ = puVar3;
    auVar19._0_8_ = uVar7;
    return auVar19;
  }
  func_0x000107c60e78(uVar7);
  return ZEXT816(0x11070f3e8);
}



/* Entry: 1010f13d4; end: 1010f142f; -[_TtC27SCLensTappableLinkApiPlugin33LensTappableLinkApiRequestHandler handleRequest:] */

void FUN_1010f13d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_1010f0a90(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1010f1430; end: 1010f1507;  */

/* WARNING: Removing unreachable block (ram,0x0001010f14d4) */

void FUN_1010f1430(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c3eb80();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
    uVar2 = 0;
    func_0x000107c5eb24();
    func_0x000107c613fc();
    func_0x000107c5eb20();
    uVar3 = uVar2;
    FUN_1010f1cbc();
    func_0x000107c5eb1c(&uStack_50,&UNK_110384068,lVar1,param_2,&UNK_110384068,uVar3);
    func_0x00010006c090(lVar1,param_2);
    func_0x000107c61574(uVar2);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
    *(undefined8 *)(unaff_x20 + 0x68) = uStack_50;
    *(undefined8 *)(unaff_x20 + 0x70) = uStack_48;
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 1010f1508; end: 1010f150b; -[_TtC27SCLensTappableLinkApiPlugin33LensTappableLinkApiRequestHandler reset] */

void FUN_1010f1508(void)

{
  return;
}



/* Entry: 1010f150c; end: 1010f153b;  */

void FUN_1010f150c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1010f153c; end: 1010f15af;  */

void FUN_1010f153c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_2 + 0x60) = uVar1;
    func_0x000107c61174(uVar1);
    func_0x000107c61574(param_2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1010f15b0; end: 1010f1643;  */

void FUN_1010f15b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 1010f1644; end: 1010f164b;  */

undefined8 FUN_1010f1644(void)

{
  return 1;
}



/* Entry: 1010f164c; end: 1010f16eb;  */

void FUN_1010f164c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1010f16ec; end: 1010f16fb;  */

undefined1  [16] FUN_1010f16ec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe300000000000000;
  auVar1._0_8_ = 0x6c7275;
  return auVar1;
}



/* Entry: 1010f16fc; end: 1010f177f;  */

void FUN_1010f16fc(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  if (param_2 == 0x6c7275 && param_3 == -0x1d00000000000000) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    bVar1 = 0x75;
    func_0x000107c605b8(0x6c7275,0xe300000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 1010f1780; end: 1010f1797;  */

undefined1  [16] FUN_1010f1780(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1010f1798; end: 1010f17e7;  */

void FUN_1010f1798(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1010f1e10();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1010f17e8; end: 1010f190f;  */

/* WARNING: Removing unreachable block (ram,0x0001010f18ac) */

void FUN_1010f17e8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x112d5d998;
  func_0x0001000285a8(0x112d5d998,&UNK_10d924018);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_1010f1e10();
  puVar5 = &UNK_110384100;
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_110384100,&UNK_110384100,lVar4,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    lVar4 = lVar3;
    func_0x000107c604f4();
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    param_1[1] = lVar4;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 1010f1910; end: 1010f196f;  */

void FUN_1010f1910(void)

{
  func_0x000107c61168(&PTR_PTR_112d5d8c0);
  return;
}



/* Entry: 1010f1970; end: 1010f1cbb;  */

undefined1  [16] FUN_1010f1970(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  uVar6 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edd0(puVar4,param_1,param_2);
  puVar2 = puVar4;
  (**(code **)(lVar7 + 0x30))(puVar4,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar4);
  }
  else {
    uVar3 = uVar6;
    (**(code **)(lVar7 + 0x20))(uVar6,puVar4,lVar1);
    func_0x000107c5edc8();
    if (puVar4 != (undefined1 *)0x0) {
      puVar2 = puVar4;
      puVar5 = puVar4;
      func_0x000107c6142c();
      uVar3 = uVar3 & 0xffffffffffff;
      if (((ulong)puVar4 & 0x2000000000000000) != 0) {
        uVar3 = (ulong)puVar4 >> 0x38 & 0xf;
      }
      if (uVar3 != 0) {
        func_0x000107c5edbc();
        (**(code **)(lVar7 + 8))(uVar6,lVar1);
        if (puVar5 != (undefined1 *)0x0) {
          func_0x000107c6142c(puVar5);
          uVar6 = (ulong)puVar2 & 0xffffffffffff;
          if (((ulong)puVar5 & 0x2000000000000000) != 0) {
            uVar6 = (ulong)puVar5 >> 0x38 & 0xf;
          }
          if (uVar6 != 0) {
            func_0x000107c61434(param_2);
            goto LAB_1010f1aec;
          }
        }
        goto LAB_1010f1ae4;
      }
    }
    (**(code **)(lVar7 + 8))(uVar6,lVar1);
  }
LAB_1010f1ae4:
  param_1 = 0;
  param_2 = 0;
LAB_1010f1aec:
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 1010f1cbc; end: 1010f1cfb;  */

void FUN_1010f1cbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5d990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d923ff0;
  func_0x000107c61520(&UNK_10d923ff0,&UNK_110384068);
  puRam0000000112d5d990 = puVar1;
  return;
}



/* Entry: 1010f1cfc; end: 1010f1d0b;  */

void FUN_1010f1cfc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)(lVar1 + 0x60) = uVar2;
    func_0x000107c61174(uVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 1010f1d0c; end: 1010f1d7b;  */

undefined8 * FUN_1010f1d0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1010f1d7c; end: 1010f1e0f;  */

int FUN_1010f1d7c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1010f1e10; end: 1010f1e4f;  */

void FUN_1010f1e10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5d9a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9240e4;
  func_0x000107c61520(&UNK_10d9240e4,&UNK_110384100);
  puRam0000000112d5d9a0 = puVar1;
  return;
}



/* Entry: 1010f1e50; end: 1010f1f3f;  */

uint FUN_1010f1e50(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1010f1f40; end: 1010f1f7f;  */

void FUN_1010f1f40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5d9a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9240bc;
  func_0x000107c61520(&UNK_10d9240bc,&UNK_110384100);
  puRam0000000112d5d9a8 = puVar1;
  return;
}



/* Entry: 1010f1f80; end: 1010f1f83;  */

void FUN_1010f1f80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5d9b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924054;
  func_0x000107c61520(&UNK_10d924054,&UNK_110384100);
  puRam0000000112d5d9b0 = puVar1;
  return;
}



/* Entry: 1010f1f84; end: 1010f1fc3;  */

void FUN_1010f1f84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5d9b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924054;
  func_0x000107c61520(&UNK_10d924054,&UNK_110384100);
  puRam0000000112d5d9b0 = puVar1;
  return;
}



/* Entry: 1010f1fc4; end: 1010f1fc7;  */

void FUN_1010f1fc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5d9b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d92402c;
  func_0x000107c61520(&UNK_10d92402c,&UNK_110384100);
  puRam0000000112d5d9b8 = puVar1;
  return;
}



/* Entry: 1010f1fc8; end: 1010f2007;  */

void FUN_1010f1fc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5d9b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d92402c;
  func_0x000107c61520(&UNK_10d92402c,&UNK_110384100);
  puRam0000000112d5d9b8 = puVar1;
  return;
}



/* Entry: 1010f2008; end: 1010f200f;  */

undefined8 * FUN_1010f2008(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1010f2010; end: 1010f203b;  */

long FUN_1010f2010(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1010f203c; end: 1010f2043;  */

void FUN_1010f203c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1010f2044; end: 1010f2127;  */

undefined8 * FUN_1010f2044(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1010f2128; end: 1010f21f3;  */

int FUN_1010f2128(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1010f21f4; end: 1010f23ef;  */

void FUN_1010f21f4(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,0);
  uVar4 = 0xef73656572676544;
  uVar1 = 0x6e6f697461746f72;
  if (param_1 != 4) {
    uVar4 = 0xe300000000000000;
    uVar1 = 0x6c7275;
  }
  uVar2 = 0x800000010ef25530;
  uVar3 = 0xd000000000000010;
  if (param_1 != 3) {
    uVar2 = uVar4;
    uVar3 = uVar1;
  }
  uVar4 = 0xeb00000000596465;
  if (param_1 != 1) {
    uVar4 = 0xef68746469576465;
  }
  uVar1 = 0xeb00000000586465;
  if (param_1 != 0) {
    uVar1 = uVar4;
  }
  if (param_1 < 3) {
    uVar2 = uVar1;
    uVar3 = 0x7a696c616d726f6e;
  }
  func_0x000107c5fb58(auStack_78,uVar3,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1010f23f0; end: 1010f240b;  */

bool FUN_1010f23f0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1010f240c; end: 1010f24db;  */

void FUN_1010f240c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar5 = 0xef73656572676544;
  uVar1 = 0x6e6f697461746f72;
  if (bVar3 != 4) {
    uVar5 = 0xe300000000000000;
    uVar1 = 0x6c7275;
  }
  uVar2 = 0x800000010ef25530;
  uVar4 = 0xd000000000000010;
  if (bVar3 != 3) {
    uVar2 = uVar5;
    uVar4 = uVar1;
  }
  uVar5 = 0xeb00000000596465;
  if (bVar3 != 1) {
    uVar5 = 0xef68746469576465;
  }
  uVar1 = 0xeb00000000586465;
  if (bVar3 != 0) {
    uVar1 = uVar5;
  }
  if (bVar3 < 3) {
    uVar2 = uVar1;
    uVar4 = 0x7a696c616d726f6e;
  }
  func_0x000107c5fb58(param_1,uVar4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1010f24dc; end: 1010f24e3;  */

void FUN_1010f24dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_78 [72];
  
  bVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_78);
  uVar5 = 0xef73656572676544;
  uVar1 = 0x6e6f697461746f72;
  if (bVar3 != 4) {
    uVar5 = 0xe300000000000000;
    uVar1 = 0x6c7275;
  }
  uVar2 = 0x800000010ef25530;
  uVar4 = 0xd000000000000010;
  if (bVar3 != 3) {
    uVar2 = uVar5;
    uVar4 = uVar1;
  }
  uVar5 = 0xeb00000000596465;
  if (bVar3 != 1) {
    uVar5 = 0xef68746469576465;
  }
  uVar1 = 0xeb00000000586465;
  if (bVar3 != 0) {
    uVar1 = uVar5;
  }
  if (bVar3 < 3) {
    uVar2 = uVar1;
    uVar4 = 0x7a696c616d726f6e;
  }
  func_0x000107c5fb58(auStack_78,uVar4,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1010f24e4; end: 1010f250f;  */

void FUN_1010f24e4(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1010f2774(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1010f2510; end: 1010f269b;  */

void FUN_1010f2510(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar5 = 0xef73656572676544;
  uVar1 = 0x6e6f697461746f72;
  if (bVar3 != 4) {
    uVar5 = 0xe300000000000000;
    uVar1 = 0x6c7275;
  }
  uVar2 = 0x800000010ef25530;
  uVar4 = 0xd000000000000010;
  if (bVar3 != 3) {
    uVar2 = uVar5;
    uVar4 = uVar1;
  }
  uVar5 = 0xeb00000000596465;
  if (bVar3 != 1) {
    uVar5 = 0xef68746469576465;
  }
  uVar1 = 0xeb00000000586465;
  if (bVar3 != 0) {
    uVar1 = uVar5;
  }
  if (bVar3 < 3) {
    uVar2 = uVar1;
    uVar4 = 0x7a696c616d726f6e;
  }
  *param_1 = uVar4;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1010f269c; end: 1010f26bf;  */

void FUN_1010f269c(undefined1 *param_1,undefined1 param_2)

{
  FUN_1010f2774();
  *param_1 = param_2;
  return;
}



/* Entry: 1010f26c0; end: 1010f26d7;  */

undefined1  [16] FUN_1010f26c0(void)

{
  return ZEXT816(1) << 0x40;
}


