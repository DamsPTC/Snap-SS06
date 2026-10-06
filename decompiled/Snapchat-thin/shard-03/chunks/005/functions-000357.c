/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029bd430; end: 1029bd4af;  */

undefined * FUN_1029bd430(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_1029bd4b0();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1029bd4b0; end: 1029bd50b;  */

void FUN_1029bd4b0(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x000103eed1c4();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112ed40f0;
  plVar5 = (long *)&UNK_10dafcdd8;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1029bd50c; end: 1029bd72b;  */

ulong FUN_1029bd50c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029bd634);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1029bd430(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029bd630);
      (*pcVar1)();
    }
    func_0x0001029bd634(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1029bd72c; end: 1029bd77f;  */

void FUN_1029bd72c(void)

{
  FUN_1029bfb24();
  return;
}



/* Entry: 1029bd780; end: 1029bd7d7;  */

void FUN_1029bd780(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1029bd7d8; end: 1029bd7fb;  */

void FUN_1029bd7d8(long param_1,long param_2)

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



/* Entry: 1029bd7fc; end: 1029bd87f;  */

void FUN_1029bd7fc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1029bd880; end: 1029bd893;  */

void FUN_1029bd880(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c53d74(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1029bd894; end: 1029bdab3;  */

void FUN_1029bd894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_6;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  return;
}



/* Entry: 1029bdab4; end: 1029bdb5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029bdab4(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_48;
  long lStack_40;
  undefined1 auStack_38 [24];
  
  puVar2 = &UNK_11057bff0;
  func_0x000107c613fc(&UNK_11057bff0,0x18,7);
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648(param_1);
  func_0x000107c61644(puVar2 + 0x10,param_1);
  func_0x000107c61574(param_1);
  lVar3 = 0;
  FUN_1029be9c8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112ed41e8);
  *puVar1 = FUN_1029be9e8;
  puVar1[1] = puVar2;
  lStack_48 = lVar4;
  lStack_40 = lVar3;
  func_0x000107c61154(&lStack_48,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029bdb60; end: 1029bdb67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029bdb60(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lStack_48;
  long lStack_40;
  undefined1 auStack_38 [24];
  
  puVar2 = &UNK_11057bff0;
  func_0x000107c613fc(&UNK_11057bff0,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648(lVar3);
  func_0x000107c61644(puVar2 + 0x10,lVar3);
  func_0x000107c61574(lVar3);
  lVar4 = 0;
  FUN_1029be9c8();
  lVar3 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112ed41e8);
  *puVar1 = FUN_1029be9e8;
  puVar1[1] = puVar2;
  lStack_48 = lVar3;
  lStack_40 = lVar4;
  func_0x000107c61154(&lStack_48,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029bdb68; end: 1029bdbef;  */

undefined8 FUN_1029bdb68(undefined8 param_1,undefined8 param_2,uint param_3,long param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 == 0) {
    param_1 = 0;
  }
  else {
    FUN_1029bdbf0(param_1,param_2,param_3 & 1);
    func_0x000107c61574(param_4);
  }
  return param_1;
}



/* Entry: 1029bdbf0; end: 1029be563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1029bdbf0(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar18;
  undefined8 auStack_110 [4];
  undefined8 uStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  
  puVar2 = (undefined8 *)0x0;
  func_0x000107c5f804();
  lStack_c0 = puVar2[-1];
  puVar3 = puVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_c8 = (long)&uStack_f0 + lVar1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  uVar18 = 0xd00000000000002d;
  func_0x0001000a9a18(0xd00000000000002d,0x800000010f0d4e60);
  func_0x000107c61170(uVar4);
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fb9bb8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 != 0) {
    uVar4 = 0;
    FUN_1029beb34(0,0x112d60fb0,&PTR_PTR_1126b3568);
    func_0x000107c5fc48(param_1,uVar4);
    lVar6 = lVar5;
    func_0x000107c40b74();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar6 != 0) {
      uVar7 = *(ulong *)(unaff_x20 + 0x28);
      puStack_d0 = puVar2;
      func_0x000107c3fa04();
      func_0x000107c61180();
      if (uVar7 != 0) {
        uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_112ff2c78);
        puVar8 = PTR_PTR_1126ae720;
        lStack_e0 = lVar5;
        uStack_d8 = uVar18;
        func_0x000107c61168();
        puVar9 = &UNK_11057c040;
        func_0x000107c613fc(&UNK_11057c040,0x18,7);
        *(long *)(puVar9 + 0x10) = lVar6;
        puVar16 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x1029be9f0;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        puStack_a8 = (undefined *)0x1029beb94;
        puStack_a0 = &UNK_11057c058;
        ppuVar10 = &puStack_b8;
        puStack_90 = puVar9;
        func_0x000107c60bc4(ppuVar10);
        puVar9 = puStack_90;
        func_0x000107c61174();
        func_0x000107c615f0(lVar6);
        func_0x000107c61574(puVar9);
        func_0x000107c3e4fc();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar10);
        puVar11 = PTR_PTR_1126ae720;
        func_0x000107c61168();
        puVar9 = &UNK_11057c090;
        func_0x000107c613fc(&UNK_11057c090,0x28,7);
        *(ulong *)(puVar9 + 0x10) = uVar7;
        *(undefined8 *)(puVar9 + 0x18) = uVar4;
        *(undefined **)(puVar9 + 0x20) = puVar8;
        uStack_98 = 0x1029be9f8;
        puStack_b8 = puVar16;
        uStack_b0 = 0x42000000;
        puStack_a8 = (undefined *)0x1029beb9c;
        puStack_a0 = &UNK_11057c0a8;
        ppuVar10 = &puStack_b8;
        puStack_90 = puVar9;
        func_0x000107c60bc4(ppuVar10);
        puVar9 = puStack_90;
        func_0x000107c61174();
        uStack_f0 = uVar4;
        func_0x000107c615f0(uVar7);
        func_0x000107c61174();
        puStack_e8 = puVar8;
        func_0x000107c61574(puVar9);
        func_0x000107c3e4fc();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar10);
        uVar18 = *(undefined8 *)(unaff_x20 + 0x18);
        uVar12 = uVar18;
        func_0x000107c40110();
        func_0x000107c61180();
        func_0x000107c5d178();
        func_0x000107c61180();
        uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
        func_0x000107c5da30();
        func_0x000107c61180();
        lVar5 = 0;
        func_0x0001029bcdb4();
        func_0x000107c613fc();
        *(long *)(lVar5 + 0x10) = lVar6;
        *(undefined **)(lVar5 + 0x18) = puVar11;
        *(undefined8 *)(lVar5 + 0x20) = uVar12;
        *(undefined8 *)(lVar5 + 0x28) = uVar18;
        *(undefined8 *)(lVar5 + 0x30) = uVar13;
        *(ulong *)(lVar5 + 0x38) = uVar7;
        puVar9 = &UNK_11057c0e0;
        func_0x000107c613fc(&UNK_11057c0e0,0x18,7);
        *(ulong *)(puVar9 + 0x10) = uVar7;
        func_0x0001000285a8(0x112ed4218,&UNK_10dafce98);
        func_0x000107c613fc();
        func_0x000107c615f4(uVar7,2);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        uVar18 = 0x1029bea04;
        func_0x0001000bdd8c(0x1029bea04,puVar9);
        *(undefined8 *)(lVar5 + 0x40) = uVar18;
        puVar9 = &UNK_11057c108;
        func_0x000107c613fc(&UNK_11057c108,0x18,7);
        *(ulong *)(puVar9 + 0x10) = uVar7;
        uVar18 = 0x112d382e8;
        func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
        func_0x000107c613fc();
        func_0x000107c615f0(uVar7);
        uVar4 = 0x1029bea0c;
        func_0x0001000bdd8c(0x1029bea0c,puVar9);
        *(undefined8 *)(lVar5 + 0x48) = uVar4;
        puVar9 = &UNK_11057c130;
        func_0x000107c613fc(&UNK_11057c130,0x18,7);
        *(ulong *)(puVar9 + 0x10) = uVar7;
        func_0x0001000285a8(0x112ed4220,&UNK_10dafcea8);
        func_0x000107c613fc();
        func_0x000107c615f0(uVar7);
        uVar4 = 0x1029bea14;
        func_0x0001000bdd8c(0x1029bea14,puVar9);
        *(undefined8 *)(lVar5 + 0x50) = uVar4;
        puVar9 = &UNK_11057c158;
        func_0x000107c613fc(&UNK_11057c158,0x18,7);
        *(ulong *)(puVar9 + 0x10) = uVar7;
        func_0x0001000285a8(0x112ed4228,&UNK_10dafceb0);
        func_0x000107c613fc();
        func_0x000107c615f0(uVar7);
        uVar4 = 0x1029bea1c;
        func_0x0001000bdd8c(0x1029bea1c,puVar9);
        *(undefined8 *)(lVar5 + 0x58) = uVar4;
        puVar9 = &UNK_11057c180;
        func_0x000107c613fc(&UNK_11057c180,0x18,7);
        *(undefined8 *)(puVar9 + 0x10) = uVar12;
        func_0x000107c613fc(uVar18,0x18,7);
        func_0x000107c61174();
        uVar4 = 0x1029bea24;
        func_0x0001000bdd8c(0x1029bea24,puVar9);
        *(undefined8 *)(lVar5 + 0x60) = uVar4;
        puVar9 = &UNK_11057c1a8;
        func_0x000107c613fc(&UNK_11057c1a8,0x18,7);
        *(undefined8 *)(puVar9 + 0x10) = uVar12;
        func_0x0001000285a8(0x112deed20,&UNK_10d9bbf88);
        func_0x000107c613fc();
        func_0x000107c61174();
        uVar4 = 0x1029bea2c;
        func_0x0001000bdd8c(0x1029bea2c,puVar9);
        *(undefined8 *)(lVar5 + 0x68) = uVar4;
        puVar9 = &UNK_11057c1d0;
        func_0x000107c613fc(&UNK_11057c1d0,0x18,7);
        *(undefined8 *)(puVar9 + 0x10) = uVar13;
        uVar13 = uVar18;
        func_0x000107c613fc(uVar18,0x18,7);
        uVar4 = 0x1029bea34;
        func_0x0001000bdd8c(0x1029bea34,puVar9,uVar13);
        *(undefined8 *)(lVar5 + 0x70) = uVar4;
        puVar9 = &UNK_11057c1f8;
        func_0x000107c613fc(&UNK_11057c1f8,0x18,7);
        *(undefined8 *)(puVar9 + 0x10) = uVar12;
        func_0x0001000285a8(0x112ed4230,&UNK_10dafcec0);
        func_0x000107c613fc();
        func_0x000107c61174();
        uVar4 = 0x1029bea3c;
        func_0x0001000bdd8c(0x1029bea3c,puVar9);
        *(undefined8 *)(lVar5 + 0x78) = uVar4;
        puVar9 = &UNK_11057c220;
        func_0x000107c613fc(&UNK_11057c220,0x18,7);
        *(undefined8 *)(puVar9 + 0x10) = uVar12;
        func_0x000107c613fc(uVar18,0x18,7);
        uVar4 = 0x1029bea44;
        func_0x0001000bdd8c(0x1029bea44,puVar9,uVar18);
        *(undefined8 *)(lVar5 + 0x80) = uVar4;
        puVar8 = PTR_PTR_1126b5220;
        func_0x000107c610f8();
        *(undefined8 *)((long)auStack_110 + lVar1) = 0;
        *(undefined8 *)((long)auStack_110 + lVar1 + 8) = 0;
        *(undefined8 *)((long)auStack_110 + lVar1 + 0x10) = 0;
        func_0x000107c46f6c();
        puVar9 = &UNK_11057c248;
        func_0x000107c613fc(&UNK_11057c248,0x20,7);
        *(undefined **)(puVar9 + 0x10) = puVar11;
        *(undefined **)(puVar9 + 0x18) = puVar8;
        func_0x000107c61174();
        func_0x000107c61174(puVar8);
        uVar18 = 0xd00000000000002a;
        func_0x000107c5fadc(0xd00000000000002a,0x800000010f0d4e90);
        uVar14 = uVar7;
        func_0x000107c3ebd4();
        func_0x000107c61170(uVar18);
        func_0x000107c615e8(uVar7);
        puVar16 = puStack_e8;
        uVar18 = uStack_f0;
        if ((uVar14 & 1) == 0) {
          puVar17 = puVar11;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(puVar11);
          lVar1 = lStack_e0;
          if (puVar17 != (undefined *)0x0) {
            puVar11 = PTR_PTR_1126ae6b8;
            func_0x000107c61168(PTR_PTR_1126ae6b8);
            func_0x000107c4a8a4();
            func_0x000107c61180();
            func_0x000107c58e3c(puVar17);
            func_0x000107c615e8(puVar17);
            func_0x000107c61170(puVar11);
          }
          func_0x000107c61170(puVar8);
          func_0x000107c61574(puVar9);
          func_0x000107c61170(uVar18);
          func_0x000107c61170(puVar16);
          func_0x000107c615e8(lVar1);
          uVar18 = uStack_d8;
        }
        else {
          func_0x000107c61170(puVar11);
          FUN_1029beb34(0,0x112d56378,&PTR_PTR_1126ae790);
          lVar6 = lStack_c0;
          lVar1 = lStack_c8;
          puVar2 = puStack_d0;
          (**(code **)(lStack_c0 + 0x68))
                    (lStack_c8,
                     *(undefined4 *)
                      PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,puStack_d0)
          ;
          lVar15 = lVar1;
          func_0x000104188018(lVar1,0,0);
          (**(code **)(lVar6 + 8))(lVar1,puVar2);
          puVar16 = &UNK_11057c270;
          func_0x000107c613fc(&UNK_11057c270,0x20,7);
          *(undefined8 *)(puVar16 + 0x10) = 0x1029bea4c;
          *(undefined **)(puVar16 + 0x18) = puVar9;
          uStack_98 = 0x1029bea54;
          puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b0 = 0x42000000;
          puStack_a8 = &UNK_1000f6b44;
          puStack_a0 = &UNK_11057c288;
          ppuVar10 = &puStack_b8;
          puStack_90 = puVar16;
          func_0x000107c60bc4(ppuVar10);
          puVar16 = puStack_90;
          func_0x000107c6157c(puVar9);
          func_0x000107c61574(puVar16);
          func_0x000107c4e524(lVar15);
          func_0x000107c61574(puVar9);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(uStack_f0);
          func_0x000107c61170(puStack_e8);
          func_0x000107c615e8(lStack_e0);
          func_0x000107c60bd0(ppuVar10);
          func_0x000107c61170(lVar15);
          uVar18 = uStack_d8;
        }
        goto LAB_1029be470;
      }
      func_0x000107c615e8(lVar5);
      lVar5 = lVar6;
    }
    func_0x000107c615e8(lVar5);
  }
  lVar5 = 0;
LAB_1029be470:
  func_0x000107c61428(puVar3,&puStack_b8,0,0);
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  func_0x0001000aa0a8(uVar18);
  func_0x000107c61170(uVar4);
  return lVar5;
}



/* Entry: 1029be564; end: 1029be57f;  */

void FUN_1029be564(long param_1,long param_2)

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



/* Entry: 1029be580; end: 1029be737;  */

undefined * FUN_1029be580(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x00010697a2c8();
  func_0x000107c61180();
  puVar1 = &UNK_11057c2c0;
  func_0x000107c613fc(&UNK_11057c2c0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = PTR_PTR_1126c4e98;
  func_0x000107c610f8(PTR_PTR_1126c4e98);
  uStack_50 = 0x1029bea5c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1029bea64;
  puStack_58 = &UNK_11057c2d8;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c45e18(puVar2);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(puStack_48);
  return puVar2;
}



/* Entry: 1029be738; end: 1029be76f;  */

void FUN_1029be738(long param_1)

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



/* Entry: 1029be770; end: 1029be7a3;  */

/* WARNING: Possible PIC construction at 0x0001029be77c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029be78c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029be780) */
/* WARNING: Removing unreachable block (ram,0x0001029be790) */

void FUN_1029be770(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1029be7a4; end: 1029be807;  */

void FUN_1029be7a4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1029be808; end: 1029be88b;  */

void FUN_1029be808(undefined8 param_1)

{
  if (lRam0000000112ed4120 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7044e0);
  return;
}



/* Entry: 1029be88c; end: 1029be8af;  */

void FUN_1029be88c(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001029bd940();
  *param_1 = param_2;
  return;
}



/* Entry: 1029be8b0; end: 1029be953; -[_TtC27PostableContentDestinationsP33_4E082A1931D836927B2F99BADA10291F49ClosurePostableContentDestinationsServicesFactory createServicesWithPreSelectedItems:snapSource:isEligibleForSpotlight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029be8b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  FUN_1029beb34(0,0x112d60fb0,&PTR_PTR_1126b3568);
  func_0x000107c5fc54(param_3,uVar2);
  pcVar1 = *(code **)(param_1 + _DAT_112ed41e8);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  (*pcVar1)(param_3,param_4,param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1029be954; end: 1029be9b3; -[_TtC27PostableContentDestinationsP33_4E082A1931D836927B2F99BADA10291F49ClosurePostableContentDestinationsServicesFactory init] */

void FUN_1029be954(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PostableContentDestinations.ClosurePostableContentDestinationsServicesFactory"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029be980);
  (*pcVar1)();
}



/* Entry: 1029be9b4; end: 1029be9c7; -[_TtC27PostableContentDestinationsP33_4E082A1931D836927B2F99BADA10291F49ClosurePostableContentDestinationsServicesFactory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029be9b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed41e8 + 8));
  return;
}



/* Entry: 1029be9c8; end: 1029be9e7;  */

void FUN_1029be9c8(void)

{
  func_0x000107c61168(&PTR_PTR_112879830);
  return;
}



/* Entry: 1029be9e8; end: 1029bea63;  */

undefined8 FUN_1029be9e8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    FUN_1029bdbf0(param_1,param_2,param_3 & 1);
    func_0x000107c61574(lVar1);
  }
  return param_1;
}



/* Entry: 1029bea64; end: 1029beb33;  */

void FUN_1029bea64(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_1029beb34(0,0x112e3c238,&PTR_PTR_1126c51c8);
  uVar5 = uVar3;
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(uVar2);
  lVar4 = param_2;
  (*pcVar1)(param_2,param_3,uVar5);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar5);
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar4;
    func_0x000107c5fc48(lVar4,uVar3);
    func_0x000107c6142c(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1029beb34; end: 1029beb73;  */

void FUN_1029beb34(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1029beb74; end: 1029beb9f;  */

void FUN_1029beb74(long param_1,long param_2)

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



/* Entry: 1029beba0; end: 1029bfb23;  */

undefined8 FUN_1029beba0(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined **ppuVar24;
  undefined8 unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 auStack_80 [2];
  
  uVar3 = 0;
  func_0x000103eed7e8();
  func_0x000103eed340();
  puVar4 = &UNK_11057c6e8;
  auStack_80[0] = uVar3;
  func_0x000107c613fc(&UNK_11057c6e8,0x18,7);
  *(undefined8 **)(puVar4 + 0x10) = auStack_80;
  puVar5 = &UNK_11057c710;
  func_0x000107c613fc(&UNK_11057c710,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1029bfe14;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_90 = (code *)0x1029c00c8;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  pcStack_a0 = (code *)&UNK_101eee6c4;
  puStack_98 = &UNK_11057c728;
  ppuVar6 = &puStack_b0;
  puStack_88 = puVar5;
  func_0x000107c60bc4();
  puVar7 = puStack_88;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_11057c760;
  func_0x000107c613fc(&UNK_11057c760,0x18,7);
  *(undefined8 **)(puVar7 + 0x10) = auStack_80;
  puVar8 = &UNK_11057c788;
  func_0x000107c613fc(&UNK_11057c788,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_1029bfe44;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  pcStack_90 = (code *)0x1029bfe7c;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = (code *)&UNK_101eee964;
  puStack_98 = &UNK_11057c7a0;
  ppuVar9 = &puStack_b0;
  puStack_88 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar10 = puStack_88;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_11057c7d8;
  func_0x000107c613fc(&UNK_11057c7d8,0x18,7);
  *(undefined8 **)(puVar10 + 0x10) = auStack_80;
  puVar11 = &UNK_11057c800;
  func_0x000107c613fc(&UNK_11057c800,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = 0x1029bfe9c;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  pcStack_90 = (code *)0x1029c0074;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = (code *)&UNK_101eeeca8;
  puStack_98 = &UNK_11057c818;
  ppuVar12 = &puStack_b0;
  puStack_88 = puVar11;
  func_0x000107c60bc4();
  puVar13 = puStack_88;
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar13);
  puVar13 = &UNK_11057c850;
  func_0x000107c613fc(&UNK_11057c850,0x18,7);
  *(undefined8 **)(puVar13 + 0x10) = auStack_80;
  puVar14 = &UNK_11057c878;
  func_0x000107c613fc(&UNK_11057c878,0x20,7);
  *(code **)(puVar14 + 0x10) = FUN_1029bfed4;
  *(undefined **)(puVar14 + 0x18) = puVar13;
  pcStack_90 = (code *)0x1029c00cc;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = (code *)&UNK_101eef0ac;
  puStack_98 = &UNK_11057c890;
  ppuVar15 = &puStack_b0;
  puStack_88 = puVar14;
  func_0x000107c60bc4(ppuVar15);
  puVar16 = puStack_88;
  func_0x000107c6157c(puVar14);
  func_0x000107c61574(puVar16);
  puVar16 = &UNK_11057c8c8;
  func_0x000107c613fc(&UNK_11057c8c8,0x18,7);
  *(undefined8 **)(puVar16 + 0x10) = auStack_80;
  puVar17 = &UNK_11057c8f0;
  func_0x000107c613fc(&UNK_11057c8f0,0x20,7);
  *(code **)(puVar17 + 0x10) = FUN_1029bff04;
  *(undefined **)(puVar17 + 0x18) = puVar16;
  pcStack_90 = FUN_1029bff3c;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_1029bcf24;
  puStack_98 = &UNK_11057c908;
  ppuVar18 = &puStack_b0;
  puStack_88 = puVar17;
  func_0x000107c60bc4();
  puVar19 = puStack_88;
  func_0x000107c6157c(puVar17);
  func_0x000107c61574(puVar19);
  puVar19 = &UNK_11057c940;
  func_0x000107c613fc(&UNK_11057c940,0x18,7);
  *(undefined8 **)(puVar19 + 0x10) = auStack_80;
  puVar20 = &UNK_11057c968;
  func_0x000107c613fc(&UNK_11057c968,0x20,7);
  *(code **)(puVar20 + 0x10) = FUN_1029bff90;
  *(undefined **)(puVar20 + 0x18) = puVar19;
  pcStack_90 = (code *)0x1029bffc8;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_102411350;
  puStack_98 = &UNK_11057c980;
  ppuVar21 = &puStack_b0;
  puStack_88 = puVar20;
  func_0x000107c60bc4();
  puVar22 = puStack_88;
  func_0x000107c6157c(puVar20);
  func_0x000107c61574(puVar22);
  puVar22 = &UNK_11057c9b8;
  func_0x000107c613fc(&UNK_11057c9b8,0x18,7);
  *(undefined8 **)(puVar22 + 0x10) = auStack_80;
  puVar23 = &UNK_11057c9e0;
  func_0x000107c613fc(&UNK_11057c9e0,0x20,7);
  *(undefined8 *)(puVar23 + 0x10) = 0x1029bffe8;
  *(undefined **)(puVar23 + 0x18) = puVar22;
  pcStack_90 = (code *)0x1029c00d0;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = (code *)&UNK_101eef450;
  puStack_98 = &UNK_11057c9f8;
  ppuVar24 = &puStack_b0;
  puStack_88 = puVar23;
  func_0x000107c60bc4();
  puVar1 = puStack_88;
  func_0x000107c6157c(puVar23);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6a8(unaff_x20);
  func_0x000107c60bd0(ppuVar24);
  func_0x000107c60bd0(ppuVar21);
  func_0x000107c60bd0(ppuVar18);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  uVar3 = auStack_80[0];
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x70,0x13,0x16,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1029bf1fc);
    (*pcVar2)();
  }
  puVar4 = puVar8;
  func_0x000107c61544(puVar8,"",0x70,0x1f,0x15,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1029bf200);
    (*pcVar2)();
  }
  puVar4 = puVar11;
  func_0x000107c61544(puVar11,"",0x70,0x21,0x1a,1);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1029bf204);
    (*pcVar2)();
  }
  puVar4 = puVar14;
  func_0x000107c61544(puVar14,"",0x70,0x23,0x18,1);
  func_0x000107c61574(puVar16);
  func_0x000107c61574(puVar14);
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = puVar17;
    func_0x000107c61544(puVar17,"",0x70,0x33,0x1b,1);
    func_0x000107c61574(puVar19);
    func_0x000107c61574(puVar17);
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029bf20c);
      (*pcVar2)();
    }
    puVar4 = puVar20;
    func_0x000107c61544(puVar20,"",0x70,0x35,0x1d,1);
    func_0x000107c61574(puVar22);
    func_0x000107c61574(puVar20);
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = puVar23;
      func_0x000107c61544(puVar23,"",0x70,0x37,0x19,1);
      func_0x000107c61574(puVar23);
      if (((ulong)puVar4 & 1) == 0) {
        return uVar3;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029bf214);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1029bf210);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029bf208);
  (*pcVar2)();
}



/* Entry: 1029bfb24; end: 1029bfb3b;  */

void FUN_1029bfb24(void)

{
  undefined1 *in_stack_00000050;
  
  *in_stack_00000050 = 1;
  return;
}



/* Entry: 1029bfb3c; end: 1029bfb9f;  */

void FUN_1029bfb3c(void)

{
  undefined8 uVar1;
  long in_x4;
  undefined8 uVar2;
  undefined8 *in_stack_00000018;
  
  uVar1 = 0;
  func_0x000103eed7e8();
  if (in_x4 == 2) {
    func_0x000103eed350();
  }
  else if (in_x4 == 1) {
    func_0x000103eed360();
  }
  else {
    func_0x000103eed340();
  }
  uVar2 = *in_stack_00000018;
  *in_stack_00000018 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1029bfba0; end: 1029bfbc7;  */

void FUN_1029bfba0(void)

{
  return;
}



/* Entry: 1029bfbc8; end: 1029bfc67;  */

void FUN_1029bfbc8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *in_stack_00000018;
  
  uVar1 = 0;
  func_0x000103eed7e8();
  if (param_3 < 3) {
    if (param_3 == 1) {
      func_0x000103eed3a0();
      goto LAB_1029bfc4c;
    }
  }
  else {
    if (param_3 == 3) {
      func_0x000103eed3c0();
      goto LAB_1029bfc4c;
    }
    if (param_3 == 4) {
      func_0x000103eed3d0();
      goto LAB_1029bfc4c;
    }
    if (param_3 == 6) {
      func_0x000103eed3e0();
      goto LAB_1029bfc4c;
    }
  }
  func_0x000103eed3b0();
LAB_1029bfc4c:
  uVar2 = *in_stack_00000018;
  *in_stack_00000018 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1029bfc68; end: 1029bfc83;  */

void FUN_1029bfc68(void)

{
  return;
}



/* Entry: 1029bfc84; end: 1029bfe13;  */

void FUN_1029bfc84(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1029bfe14; end: 1029bfe43;  */

void FUN_1029bfe14(void)

{
  FUN_1029bfb3c();
  return;
}



/* Entry: 1029bfe44; end: 1029bfed3;  */

void FUN_1029bfe44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = 0;
  func_0x000103eed7e8();
  func_0x000103eed390();
  uVar2 = *puVar3;
  *puVar3 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1029bfed4; end: 1029bff03;  */

void FUN_1029bfed4(void)

{
  FUN_1029bfbc8();
  return;
}



/* Entry: 1029bff04; end: 1029bff3b;  */

void FUN_1029bff04(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = 0;
  func_0x000103eed7e8();
  func_0x000103eed3f0();
  uVar2 = *puVar3;
  *puVar3 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1029bff3c; end: 1029bff8f;  */

void FUN_1029bff3c(void)

{
  FUN_1029bcecc();
  return;
}



/* Entry: 1029bff90; end: 1029c001f;  */

void FUN_1029bff90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = 0;
  func_0x000103eed7e8();
  func_0x000103eed340();
  uVar2 = *puVar3;
  *puVar3 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1029c0020; end: 1029c00d3;  */

void FUN_1029c0020(long param_1,long param_2)

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



/* Entry: 1029c00d4; end: 1029c00e3; -[PostableContentDestinationsServices factory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c00d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ed4238));
  return;
}



/* Entry: 1029c00e4; end: 1029c017b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c00e4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed4238) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029c017c; end: 1029c01db; -[PostableContentDestinationsServices init] */

void FUN_1029c017c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PostableContentDestinationsServices.PostableContentDestinationsServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029c01a8);
  (*pcVar1)();
}



/* Entry: 1029c01dc; end: 1029c0213; -[PostableContentDestinationsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c01dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed4238));
  return;
}



/* Entry: 1029c0214; end: 1029c0303;  */

void FUN_1029c0214(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1029c0304; end: 1029c0317;  */

undefined1  [16] FUN_1029c0304(void)

{
  return ZEXT816(0x11057cbc0);
}



/* Entry: 1029c0318; end: 1029c035b;  */

void FUN_1029c0318(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ed42b8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000101eece54(0xff);
  puVar2 = &UNK_10dafd04c;
  func_0x000107c61520(&UNK_10dafd04c,uVar1);
  puRam0000000112ed42b8 = puVar2;
  return;
}



/* Entry: 1029c035c; end: 1029c036b;  */

void FUN_1029c035c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1029c036c; end: 1029c069b;  */

void FUN_1029c036c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9c398,&UNK_10daaa290);
  puVar1 = &UNK_11057cc58;
  func_0x000107c613fc(&UNK_11057cc58,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x0001000823a8(FUN_1029c069c,puVar1);
  return;
}



/* Entry: 1029c069c; end: 1029c06cf;  */

void FUN_1029c069c(void)

{
  long unaff_x20;
  
  func_0x0001029c0480(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1029c06d0; end: 1029c083b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c06d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed42c0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed42c8) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed42d0);
  *puVar1 = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed42d8);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed42e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed42e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ed42f0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ed42f8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ed4300) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ed4308) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ed4310) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ed4318) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ed4320) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ed4328) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ed4330) = param_10;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029c083c; end: 1029c096f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c083c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [40];
  
  lVar1 = _DAT_112ed42c0;
  func_0x000107c61428(unaff_x20 + _DAT_112ed42c0,auStack_90,0,0);
  func_0x0001029c25a0(unaff_x20 + lVar1,auStack_b8,0x112ed4368,&UNK_10dafd130);
  if (lStack_a0 == 0) {
    func_0x0001029c2560(auStack_b8,0x112ed4368,&UNK_10dafd130);
    lVar2 = 0;
    func_0x0001029c5dc0();
    lVar3 = lVar2;
    func_0x000107c613fc();
    puVar4 = PTR_PTR_1126abc50;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar3 + 0x10) = puVar4;
    param_1[3] = lVar2;
    param_1[4] = (long)&PTR_DAT_11057d0e0;
    *param_1 = lVar3;
    FUN_1029c28b0(param_1,auStack_78);
    func_0x000107c61428(unaff_x20 + lVar1,auStack_b8,0x21,0);
    func_0x0001029c25e8(auStack_78,unaff_x20 + lVar1,0x112ed4368,&UNK_10dafd130);
    func_0x000107c614a8(auStack_b8);
  }
  else {
    func_0x000100d15850(auStack_b8,auStack_78);
    func_0x000100d15850(auStack_78,param_1);
  }
  return;
}



/* Entry: 1029c0970; end: 1029c09d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1029c0970(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ed42c8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed42c8);
  lVar3 = lVar2;
  if (lVar2 == 1) {
    FUN_1029c09d8();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = param_1;
    func_0x000107c61174();
    FUN_1029c23a8(uVar4);
    lVar3 = param_1;
  }
  FUN_1029c28a0(lVar2);
  return lVar3;
}



/* Entry: 1029c09d8; end: 1029c0f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1029c09d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long alStack_240 [2];
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined1 *puStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 auStack_1c8 [3];
  long lStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 auStack_1a0 [3];
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined8 auStack_178 [3];
  long lStack_160;
  undefined **ppuStack_158;
  undefined8 auStack_150 [3];
  undefined *puStack_138;
  undefined **ppuStack_130;
  undefined1 auStack_128 [24];
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_98 [56];
  
  FUN_1029c0f44(&uStack_d0);
  if (lStack_b8 == 0) {
    uVar12 = 0x112ed4380;
    puVar11 = &UNK_10dafd148;
    lVar7 = -0xc0;
  }
  else {
    func_0x000100d15850(&uStack_d0,auStack_98);
    FUN_1029c1080(&uStack_100);
    if (lStack_e8 != 0) {
      uStack_c8 = uStack_f8;
      uStack_d0 = uStack_100;
      lStack_b8 = lStack_e8;
      uStack_c0 = uStack_f0;
      uStack_a8 = uStack_d8;
      uStack_b0 = uStack_e0;
      lVar7 = *(long *)(unaff_x20 + _DAT_112ed42e8);
      func_0x000107c3fa04();
      func_0x000107c61180();
      if (lVar7 == 0) {
        lStack_1e0 = 0;
      }
      else {
        lVar8 = lVar7;
        func_0x000108faa3f0();
        func_0x000107c615e8(lVar7);
        lStack_1e0 = lVar8;
        if (lVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1029c0a78);
          (*pcVar6)();
        }
      }
      uStack_220 = *(undefined8 *)(unaff_x20 + _DAT_112ed4308);
      uStack_218 = *(undefined8 *)(unaff_x20 + _DAT_112ed4330);
      uStack_210 = *(undefined8 *)(unaff_x20 + _DAT_112ed4318);
      FUN_1029c28b0(auStack_98,&uStack_100);
      FUN_1029c083c(auStack_128);
      uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112ed4310);
      uStack_208 = *(undefined8 *)(unaff_x20 + _DAT_112ed42f0);
      uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112ed4320);
      uStack_200 = *(undefined8 *)(unaff_x20 + _DAT_112ed4328);
      uStack_1f8 = *(undefined8 *)(unaff_x20 + _DAT_112ed4300);
      func_0x0001000c6518(&uStack_100,lStack_e8);
      puStack_1e8 = (undefined1 *)alStack_240;
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lStack_e8 + -8) + 0x40));
      puVar15 = (undefined8 *)((long)alStack_240 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12 + 0x10))(puVar15);
      func_0x0001000c6518(auStack_128,lStack_110);
      puStack_1f0 = puVar15;
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lStack_110 + -8) + 0x40));
      puVar13 = (undefined8 *)((long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12_00 + 0x10))(puVar13);
      auStack_150[0] = *puVar15;
      uVar12 = *puVar13;
      puStack_138 = &UNK_11057cbc0;
      ppuStack_130 = &PTR_DAT_11057cbd8;
      lVar8 = 0;
      func_0x0001029c5dc0();
      ppuStack_158 = &PTR_DAT_11057d0e0;
      lVar9 = 0;
      auStack_178[0] = uVar12;
      lStack_160 = lVar8;
      FUN_1029c4614();
      alStack_240[1] = lVar9;
      func_0x000107c610f8();
      func_0x0001000c6518(auStack_150,&UNK_11057cbc0);
      puStack_228 = puVar13;
      (*(code *)PTR____chkstk_darwin_11034bd40)(uRam0000000114146f40);
      puVar13 = (undefined8 *)((long)puVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12_01 + 0x10))(puVar13);
      func_0x0001000c6518(auStack_178,lVar8);
      puStack_230 = puVar13;
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
      puVar15 = (undefined8 *)((long)puVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12_02 + 0x10))(puVar15);
      auStack_1a0[0] = *puVar13;
      auStack_1c8[0] = *puVar15;
      puStack_188 = &UNK_11057cbc0;
      ppuStack_180 = &PTR_DAT_11057cbd8;
      ppuStack_1a8 = &PTR_DAT_11057d0e0;
      lVar7 = lVar9 + _DAT_112ed45b0;
      *(undefined8 *)(lVar7 + 8) = 0;
      lStack_1b0 = lVar8;
      func_0x000107c61614(lVar7,0);
      puVar13 = (undefined8 *)(lVar9 + _DAT_112ed45f8);
      *puVar13 = 0;
      *(undefined1 *)(puVar13 + 1) = 1;
      puVar13 = (undefined8 *)(lVar9 + _DAT_112ed4600);
      *puVar13 = 0;
      *(undefined1 *)(puVar13 + 1) = 1;
      *(undefined8 *)(lVar9 + _DAT_112ed4608) = 0;
      puVar13 = (undefined8 *)(lVar9 + _DAT_112ed4630);
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13 = (undefined8 *)(lVar9 + _DAT_112ed4638);
      *puVar13 = 0;
      puVar13[1] = 0;
      lVar7 = _DAT_112ed4640;
      lVar8 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lVar9 + lVar7,1,1,lVar8);
      uVar12 = uStack_220;
      *(undefined8 *)(lVar9 + _DAT_112ed45b8) = uStack_220;
      FUN_1029c22e4(&uStack_d0,lVar9 + _DAT_112ed45c0);
      uVar2 = uStack_210;
      uVar1 = uStack_218;
      *(undefined8 *)(lVar9 + _DAT_112ed45c8) = uStack_218;
      *(undefined8 *)(lVar9 + _DAT_112ed45d0) = uStack_210;
      FUN_1029c28b0(auStack_1a0,lVar9 + _DAT_112ed45d8);
      FUN_1029c28b0(auStack_1c8,lVar9 + _DAT_112ed45e0);
      uVar5 = uStack_1f8;
      uVar4 = uStack_200;
      uVar3 = uStack_208;
      *(undefined8 *)(lVar9 + _DAT_112ed45e8) = uVar14;
      *(long *)(lVar9 + _DAT_112ed45f0) = lStack_1e0;
      *(undefined8 *)(lVar9 + _DAT_112ed4610) = uStack_208;
      *(undefined8 *)(lVar9 + _DAT_112ed4618) = uVar16;
      *(undefined8 *)(lVar9 + _DAT_112ed4620) = uStack_200;
      *(undefined8 *)(lVar9 + _DAT_112ed4628) = uStack_1f8;
      puVar11 = PTR_s_init_1125d9248;
      lStack_1d0 = alStack_240[1];
      lStack_1d8 = lVar9;
      func_0x000107c61174(uVar12);
      func_0x000107c61174(uVar1);
      func_0x000107c61174(uVar2);
      func_0x000107c61174(uVar14);
      func_0x000107c61174(uVar3);
      func_0x000107c61174(uVar16);
      func_0x000107c61174(uVar4);
      func_0x000107c61174(uVar5);
      plVar10 = &lStack_1d8;
      func_0x000107c61154(plVar10,puVar11);
      func_0x0001029c2320(&uStack_d0);
      func_0x0001000834e4(auStack_98);
      func_0x0001000834e4(auStack_1c8);
      func_0x0001000834e4(auStack_1a0);
      func_0x0001000834e4(auStack_178);
      func_0x0001000834e4(auStack_150);
      func_0x0001000834e4(auStack_128);
      func_0x0001000834e4(&uStack_100);
      return plVar10;
    }
    func_0x0001000834e4(auStack_98);
    uVar12 = 0x112ed4338;
    puVar11 = &UNK_10dafd0c8;
    lVar7 = -0xf0;
  }
  func_0x0001029c2560(&stack0xfffffffffffffff0 + lVar7,uVar12,puVar11);
  return (long *)0x0;
}



/* Entry: 1029c0f44; end: 1029c107f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c0f44(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long unaff_x20;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [48];
  
  lVar1 = _DAT_112ed42d0;
  func_0x000107c61428(unaff_x20 + _DAT_112ed42d0,auStack_78,0,0);
  func_0x0001029c25a0(unaff_x20 + lVar1,&lStack_a0,0x112ed4370,&UNK_10dafd138);
  if (lStack_88 == 1) {
    func_0x0001029c2560(&lStack_a0,0x112ed4370,&UNK_10dafd138);
    lVar2 = *(long *)(unaff_x20 + _DAT_112ed42e8);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar2 == 0) {
      puVar4 = (undefined *)0x0;
      ppuVar3 = (undefined **)0x0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      ppuVar3 = &PTR_DAT_11057cbd8;
      puVar4 = &UNK_11057cbc0;
    }
    *param_1 = lVar2;
    param_1[3] = (long)puVar4;
    param_1[4] = (long)ppuVar3;
    func_0x0001029c25a0(param_1,auStack_60,0x112ed4380,&UNK_10dafd148);
    func_0x000107c61428(unaff_x20 + lVar1,&lStack_a0,0x21,0);
    func_0x0001029c25e8(auStack_60,unaff_x20 + lVar1,0x112ed4370,&UNK_10dafd138);
    func_0x000107c614a8(&lStack_a0);
  }
  else {
    param_1[1] = lStack_98;
    *param_1 = lStack_a0;
    param_1[3] = lStack_88;
    param_1[2] = lStack_90;
    param_1[4] = lStack_80;
  }
  return;
}



/* Entry: 1029c1080; end: 1029c118b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c1080(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [48];
  
  lVar1 = _DAT_112ed42d8;
  func_0x000107c61428(unaff_x20 + _DAT_112ed42d8,auStack_88,0,0);
  func_0x0001029c25a0(unaff_x20 + lVar1,&uStack_b8,0x112ed4378,&UNK_10dafd140);
  if (lStack_a0 == 1) {
    func_0x0001029c2560(&uStack_b8,0x112ed4378,&UNK_10dafd140);
    FUN_1029c118c(param_1);
    func_0x0001029c25a0(param_1,auStack_70,0x112ed4338,&UNK_10dafd0c8);
    func_0x000107c61428(unaff_x20 + lVar1,&uStack_b8,0x21,0);
    func_0x0001029c25e8(auStack_70,unaff_x20 + lVar1,0x112ed4378,&UNK_10dafd140);
    func_0x000107c614a8(&uStack_b8);
  }
  else {
    param_1[1] = uStack_b0;
    *param_1 = uStack_b8;
    param_1[3] = lStack_a0;
    param_1[2] = uStack_a8;
    param_1[5] = uStack_90;
    param_1[4] = uStack_98;
  }
  return;
}



/* Entry: 1029c118c; end: 1029c1253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c118c(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_80 [24];
  long lStack_68;
  undefined1 auStack_58 [40];
  
  FUN_1029c0f44(auStack_80);
  if (lStack_68 == 0) {
    func_0x0001029c2560(auStack_80,0x112ed4380,&UNK_10dafd148);
  }
  else {
    func_0x000100d15850(auStack_80,auStack_58);
    lVar2 = *(long *)(unaff_x20 + _DAT_112ed42f8);
    func_0x000107c42eac();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029c1254);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      func_0x000100d15850(auStack_58,param_1);
      param_1[5] = lVar3;
      return;
    }
    func_0x0001000834e4(auStack_58);
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 1029c1254; end: 1029c12b3; -[_TtC18ContentShareUpsell24ContentShareUpsellPlugin init] */

void FUN_1029c1254(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContentShareUpsell.ContentShareUpsellPlugin",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029c1280);
  (*pcVar1)();
}



/* Entry: 1029c12b4; end: 1029c13ef; -[_TtC18ContentShareUpsell24ContentShareUpsellPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c12b4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4308));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed42f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed42f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4320));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4328));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4300));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed42e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4330));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4318));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4310));
  func_0x0001029c2560(param_1 + _DAT_112ed42c0,0x112ed4368,&UNK_10dafd130);
  FUN_1029c23a8(*(undefined8 *)(param_1 + _DAT_112ed42c8));
  func_0x0001029c2560(param_1 + _DAT_112ed42d0,0x112ed4370,&UNK_10dafd138);
  func_0x0001029c2560(param_1 + _DAT_112ed42d8,0x112ed4378,&UNK_10dafd140);
  if (*(long *)(param_1 + _DAT_112ed42e0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112ed42e0))[1]);
    return;
  }
  return;
}



/* Entry: 1029c13f0; end: 1029c13ff; -[_TtC18ContentShareUpsell24ContentShareUpsellPlugin type] */

void FUN_1029c13f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(PTR_PTR_113187388);
  return;
}



/* Entry: 1029c1400; end: 1029c16cb;  */

undefined * FUN_1029c1400(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long extraout_x8;
  undefined8 uVar9;
  long lVar10;
  ulong auStack_a0 [6];
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  uVar8 = (long)auStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1029c0970();
  if (lVar4 != 0) {
    func_0x000107c61170();
    uVar5 = param_1;
    FUN_1029c16cc();
    if ((uVar5 & 1) != 0) {
      FUN_1029c1080(auStack_70);
      if (lStack_58 == 0) {
        func_0x0001029c2560(auStack_70,0x112ed4338,&UNK_10dafd0c8);
      }
      else {
        FUN_1029c22e4(auStack_70,auStack_a0);
        func_0x0001029c2560(auStack_70,0x112ed4338,&UNK_10dafd0c8);
        func_0x000107c5eea0(uVar8);
        uVar5 = uVar8;
        FUN_1029c5994();
        (**(code **)(lVar10 + 8))(uVar8,lVar3);
        func_0x0001029c2320(auStack_a0);
        if ((uVar5 & 1) == 0) {
          puVar6 = PTR_PTR_1126b3540;
          func_0x000107c61168(PTR_PTR_1126b3540);
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c45a48();
          func_0x000107c5061c(puVar6);
          goto LAB_1029c167c;
        }
      }
      FUN_1029c083c(auStack_70);
      func_0x0001000a8868(auStack_70,lStack_58);
      uVar8 = param_1;
      func_0x000107c40534();
      func_0x000107c61180();
      uVar5 = uVar8;
      func_0x000107c404fc();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      func_0x000107c61174();
      uVar8 = uVar5;
      func_0x000103913bd0();
      if (2 < uVar8) {
        auStack_a0[0] = uVar8;
        func_0x000107c60614(&UNK_1106abf80,auStack_a0,&UNK_1106abf80,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1029c16cc);
        (*pcVar2)();
      }
      uVar9 = *(undefined8 *)(&UNK_10dafd178 + uVar8 * 8);
      func_0x000107c61170(uVar5);
      func_0x000107c40534();
      func_0x000107c61180();
      uVar5 = param_1;
      func_0x000107c5b634();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      func_0x000103913ed0();
      uVar8 = uVar5;
      if (uVar5 != 2) {
        uVar8 = 4;
      }
      uVar1 = 0xf;
      if (uVar5 != 3) {
        uVar1 = uVar8;
      }
      FUN_1029c5bc0(uVar9,uVar1);
      func_0x0001000834e4(auStack_70);
      puVar6 = PTR_PTR_1126b3540;
      func_0x000107c61168(PTR_PTR_1126b3540);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c5061c(puVar6);
      goto LAB_1029c167c;
    }
  }
  puVar6 = PTR_PTR_1126b3540;
  func_0x000107c61168(PTR_PTR_1126b3540);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c5061c(puVar6);
LAB_1029c167c:
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  return puVar6;
}



/* Entry: 1029c16cc; end: 1029c18db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1029c16cc(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long unaff_x20;
  long lStack_38;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed42e8);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c615e8();
    uVar3 = *(ulong *)(unaff_x20 + _DAT_112ed4318);
    func_0x000107c4f3e4();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (uVar4 != 0) {
      uVar3 = uVar4;
      func_0x000107c44f14();
      func_0x000107c615e8(uVar4);
      lVar2 = param_1;
      func_0x000107c40534();
      func_0x000107c61180();
      lVar5 = lVar2;
      func_0x000107c404fc();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000103913bd0();
      func_0x000107c40534(param_1);
      func_0x000107c61180();
      lVar2 = param_1;
      func_0x000107c5b634();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      func_0x000103913ed0(lVar2);
      if (lVar5 == 0) {
        uVar6 = 0x112ed43c8;
        func_0x0001000285a8(0x112ed43c8,&UNK_10dafd150);
        func_0x000107c61538();
        FUN_1029c2630();
        uVar7 = 0x112ed4408;
        func_0x0001000285a8(0x112ed4408,&UNK_10dafd158);
        func_0x000107c61538();
        func_0x0001029c2768();
        FUN_1029c216c(uVar3,uVar6);
        func_0x000107c6142c(uVar6);
        if ((uVar3 & 1) == 0) {
          uVar8 = 0;
        }
        else {
          func_0x0001029c2228(lVar2,uVar7);
          uVar8 = (uint)lVar2;
        }
      }
      else {
        if (lVar5 == 2) goto LAB_1029c17c8;
        if (lVar5 != 1) {
          lStack_38 = lVar5;
          func_0x000107c60614(&UNK_1106abf80,&lStack_38,&UNK_1106abf80,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1029c18dc);
          (*pcVar1)();
        }
        uVar7 = 0x112ed43c8;
        func_0x0001000285a8(0x112ed43c8,&UNK_10dafd150);
        func_0x000107c61538();
        FUN_1029c2630();
        FUN_1029c216c(uVar3,uVar7);
        uVar8 = (uint)uVar3;
      }
      func_0x000107c6142c(uVar7);
      goto LAB_1029c18a0;
    }
  }
LAB_1029c17c8:
  uVar8 = 0;
LAB_1029c18a0:
  return uVar8 & 1;
}



/* Entry: 1029c18dc; end: 1029c1a2f; -[_TtC18ContentShareUpsell24ContentShareUpsellPlugin canApplyWithParams:] */

void FUN_1029c18dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1029c1400(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029c1a30; end: 1029c1daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c1a30(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  uVar5 = param_1 + 0x10;
  func_0x000107c61618();
  if (uVar5 == 0) {
    return;
  }
  uVar6 = uVar5;
  FUN_1029c1db0();
  if ((uVar6 & 1) != 0) {
    uVar6 = param_2;
    func_0x000107c40534();
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c404fc();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61174();
    uVar6 = uVar7;
    func_0x000103913bd0();
    if (uVar6 - 1 < 2) {
      func_0x000107c61170(uVar7);
      func_0x000107c40534();
      func_0x000107c61180();
      uVar6 = param_2;
      func_0x000107c4dda0();
      func_0x000107c61180();
      func_0x000107c61170(param_2);
      (**(code **)(uVar6 + 0x10))(uVar6);
      func_0x000107c60bd0(uVar6);
      goto LAB_1029c1cd4;
    }
    if (uVar6 != 0) goto LAB_1029c1d8c;
    func_0x000107c61170(uVar7);
  }
  uVar6 = param_2;
  func_0x000107c40534();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c4dda0();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  puVar8 = &UNK_11057cd28;
  func_0x000107c613fc(&UNK_11057cd28,0x18,7);
  *(ulong *)(puVar8 + 0x10) = uVar7;
  plVar1 = (long *)(uVar5 + _DAT_112ed42e0);
  lVar11 = *plVar1;
  uVar7 = plVar1[1];
  *plVar1 = 0x1029c23b8;
  plVar1[1] = (long)puVar8;
  func_0x00010058d43c(lVar11,uVar7);
  FUN_1029c0970();
  if (lVar11 != 0) {
    lVar2 = lVar11 + _DAT_112ed45b0;
    *(undefined ***)(lVar2 + 8) = &PTR_DAT_11057cce8;
    uVar7 = uVar5;
    func_0x000107c61604(lVar2,uVar5);
    func_0x000107c61170(lVar11);
  }
  lVar11 = *(long *)(uVar5 + _DAT_112ed42c8);
  if (lVar11 != 0) {
    func_0x000107c61174(lVar11);
    uVar6 = param_2;
    func_0x000107c40534();
    func_0x000107c61180();
    uVar14 = uVar6;
    func_0x000107c404fc();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61174();
    uVar6 = uVar14;
    func_0x000103913bd0();
    if (uVar6 < 3) {
      uVar12 = *(undefined8 *)(&UNK_10dafd178 + uVar6 * 8);
      func_0x000107c61170(uVar14);
      uVar6 = param_2;
      func_0x000107c40534(param_2);
      func_0x000107c61180();
      uVar14 = uVar6;
      func_0x000107c5b2d0();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      uVar6 = uVar14;
      func_0x000107c5faec(uVar14);
      uVar13 = uVar7;
      func_0x000107c61170(uVar14);
      uVar14 = param_2;
      func_0x000107c40534();
      func_0x000107c61180();
      uVar9 = uVar14;
      func_0x000107c4f38c();
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      if (uVar9 == 0) {
        uVar14 = 0;
        uVar13 = 0;
      }
      else {
        uVar14 = uVar9;
        func_0x000107c5faec(uVar9);
        func_0x000107c61170(uVar9);
      }
      func_0x000107c40534();
      func_0x000107c61180();
      uVar10 = param_2;
      func_0x000107c5b634();
      func_0x000107c61180();
      func_0x000107c61170(param_2);
      func_0x000103913ed0();
      uVar9 = uVar10;
      if (uVar10 != 2) {
        uVar9 = 4;
      }
      uVar3 = 0xf;
      if (uVar10 != 3) {
        uVar3 = uVar9;
      }
      FUN_1029c3440(uVar12,uVar6,uVar7,uVar14,uVar13,uVar3);
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(uVar5);
      func_0x000107c6142c(uVar13);
      FUN_1029c23a8(lVar11);
      return;
    }
LAB_1029c1d8c:
    uStack_80 = uVar6;
    func_0x000107c60614(&UNK_1106abf80,&uStack_80,&UNK_1106abf80,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1029c1db0);
    (*pcVar4)();
  }
LAB_1029c1cd4:
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 1029c1db0; end: 1029c1fe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1029c1db0(void)

{
  byte bVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long *plVar10;
  undefined8 uVar11;
  
  puVar3 = *(undefined8 **)(unaff_x20 + _DAT_112ed42e8);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  puVar4 = puVar3;
  FUN_1029c5554();
  func_0x000107c61534();
  puVar4[3] = 5;
  puVar4[2] = 2;
  puVar5 = puVar4;
  func_0x000103f1dc3c();
  puVar5 = (undefined8 *)*puVar5;
  plVar10 = puVar4 + 4;
  *plVar10 = (long)puVar5;
  func_0x000107c61174();
  func_0x000103f1dce8();
  puVar4[5] = *puVar5;
  func_0x000107c61174();
  if (((ulong)puVar4 & 0xc000000000000001) == 0) {
    if (puVar4[2] == 0) goto LAB_1029c1fc0;
    lVar6 = *plVar10;
    func_0x000107c61174();
  }
  else {
    lVar6 = 0;
    FUN_1029c23c4(0,puVar4);
  }
  uVar11 = *(undefined8 *)(lVar6 + _DAT_11302e940);
  func_0x000107c5fadc(uVar11,((undefined8 *)(lVar6 + _DAT_11302e940))[1]);
  puVar5 = puVar3;
  func_0x000107c3ebd8();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  if (puVar5 == (undefined8 *)0x0) {
    bVar1 = *(byte *)(lVar6 + _DAT_11302e950);
    func_0x000107c61170(lVar6);
    if ((bVar1 & 1) != 0) goto LAB_1029c1ed4;
  }
  else {
    puVar7 = puVar5;
    func_0x000107c3ebcc();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(puVar5);
    if ((int)puVar7 != 0) {
LAB_1029c1ed4:
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        if ((ulong)puVar4[2] < 2) {
LAB_1029c1fc0:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1029c1fc4);
          (*pcVar2)();
        }
        lVar6 = puVar4[5];
        func_0x000107c61174();
      }
      else {
        lVar6 = 1;
        FUN_1029c23c4(1,puVar4);
      }
      uVar11 = *(undefined8 *)(lVar6 + _DAT_11302e940);
      func_0x000107c5fadc(uVar11,((undefined8 *)(lVar6 + _DAT_11302e940))[1]);
      puVar5 = puVar3;
      func_0x000107c3ebd8();
      func_0x000107c61180();
      func_0x000107c61170(uVar11);
      if (puVar5 == (undefined8 *)0x0) {
        bVar1 = *(byte *)(lVar6 + _DAT_11302e950);
        func_0x000107c61170(lVar6);
        if ((bVar1 & 1) == 0) goto LAB_1029c1f70;
      }
      else {
        puVar7 = puVar5;
        func_0x000107c3ebcc();
        func_0x000107c61170(lVar6);
        func_0x000107c61170(puVar5);
        if (((ulong)puVar7 & 1) == 0) goto LAB_1029c1f70;
      }
      uVar11 = 1;
      goto LAB_1029c1f74;
    }
  }
LAB_1029c1f70:
  uVar11 = 0;
LAB_1029c1f74:
  func_0x000107c615e8(puVar3);
  func_0x000107c61588(puVar4);
  uVar9 = puVar4[2];
  uVar8 = 0;
  func_0x000100442c3c(0);
  func_0x000107c61408(plVar10,uVar9,uVar8);
  return uVar11;
}



/* Entry: 1029c1fe4; end: 1029c2033; -[_TtC18ContentShareUpsell24ContentShareUpsellPlugin applyWithParams:] */

/* WARNING: Possible PIC construction at 0x0001029c201c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029c2020) */

void FUN_1029c1fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001029c1938(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1029c2034; end: 1029c2137;  */

undefined * FUN_1029c2034(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1029c1080(&uStack_80);
  if (lStack_68 == 0) {
    func_0x0001029c2560(&uStack_80,0x112ed4338,&UNK_10dafd0c8);
    puVar1 = PTR_PTR_1126b3540;
    func_0x000107c61168(PTR_PTR_1126b3540);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    func_0x000107c5061c(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
  }
  else {
    uStack_48 = uStack_78;
    uStack_50 = uStack_80;
    lStack_38 = lStack_68;
    uStack_40 = uStack_70;
    uStack_28 = uStack_58;
    uStack_30 = uStack_60;
    puVar1 = PTR_PTR_1126b3540;
    func_0x000107c61168(PTR_PTR_1126b3540);
    func_0x000107c5b968(uStack_28);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    func_0x000107c5061c(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x0001029c2320(&uStack_50);
  }
  return puVar1;
}



/* Entry: 1029c2138; end: 1029c216b; -[_TtC18ContentShareUpsell24ContentShareUpsellPlugin getLastAppliedUnixTimestamp] */

void FUN_1029c2138(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1029c2034();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029c216c; end: 1029c22e3;  */

undefined1 FUN_1029c216c(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_78 [72];
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  func_0x000107c6068c(auStack_78,*(undefined8 *)(param_2 + 0x28));
  uVar1 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(ulong *)(*(long *)(param_2 + 0x30) + uVar1 * 8) == param_1) {
        return 1;
      }
      uVar1 = uVar1 + 1 & ~uVar2;
    } while ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 1029c22e4; end: 1029c2353;  */

undefined8 FUN_1029c22e4(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x1029c5828)(param_2,param_1);
  return param_2;
}



/* Entry: 1029c2354; end: 1029c2387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c2354(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_80;
  undefined1 auStack_78 [24];
  
  lVar11 = *(long *)(unaff_x20 + 0x10);
  uVar10 = *(ulong *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar11 + 0x10,auStack_78,0,0);
  uVar5 = lVar11 + 0x10;
  func_0x000107c61618();
  if (uVar5 == 0) {
    return;
  }
  uVar6 = uVar5;
  FUN_1029c1db0();
  if ((uVar6 & 1) != 0) {
    uVar6 = uVar10;
    func_0x000107c40534();
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c404fc();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61174();
    uVar6 = uVar7;
    func_0x000103913bd0();
    if (uVar6 - 1 < 2) {
      func_0x000107c61170(uVar7);
      func_0x000107c40534();
      func_0x000107c61180();
      uVar6 = uVar10;
      func_0x000107c4dda0();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      (**(code **)(uVar6 + 0x10))(uVar6);
      func_0x000107c60bd0(uVar6);
      goto LAB_1029c1cd4;
    }
    if (uVar6 != 0) goto LAB_1029c1d8c;
    func_0x000107c61170(uVar7);
  }
  uVar6 = uVar10;
  func_0x000107c40534();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c4dda0();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  puVar8 = &UNK_11057cd28;
  func_0x000107c613fc(&UNK_11057cd28,0x18,7);
  *(ulong *)(puVar8 + 0x10) = uVar7;
  plVar1 = (long *)(uVar5 + _DAT_112ed42e0);
  lVar11 = *plVar1;
  uVar7 = plVar1[1];
  *plVar1 = 0x1029c23b8;
  plVar1[1] = (long)puVar8;
  func_0x00010058d43c(lVar11,uVar7);
  FUN_1029c0970();
  if (lVar11 != 0) {
    lVar2 = lVar11 + _DAT_112ed45b0;
    *(undefined ***)(lVar2 + 8) = &PTR_DAT_11057cce8;
    uVar7 = uVar5;
    func_0x000107c61604(lVar2,uVar5);
    func_0x000107c61170(lVar11);
  }
  lVar11 = *(long *)(uVar5 + _DAT_112ed42c8);
  if (lVar11 != 0) {
    func_0x000107c61174(lVar11);
    uVar6 = uVar10;
    func_0x000107c40534();
    func_0x000107c61180();
    uVar14 = uVar6;
    func_0x000107c404fc();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61174();
    uVar6 = uVar14;
    func_0x000103913bd0();
    if (uVar6 < 3) {
      uVar12 = *(undefined8 *)(&UNK_10dafd178 + uVar6 * 8);
      func_0x000107c61170(uVar14);
      uVar6 = uVar10;
      func_0x000107c40534(uVar10);
      func_0x000107c61180();
      uVar14 = uVar6;
      func_0x000107c5b2d0();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      uVar6 = uVar14;
      func_0x000107c5faec(uVar14);
      uVar13 = uVar7;
      func_0x000107c61170(uVar14);
      uVar14 = uVar10;
      func_0x000107c40534();
      func_0x000107c61180();
      uVar9 = uVar14;
      func_0x000107c4f38c();
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      if (uVar9 == 0) {
        uVar14 = 0;
        uVar13 = 0;
      }
      else {
        uVar14 = uVar9;
        func_0x000107c5faec(uVar9);
        func_0x000107c61170(uVar9);
      }
      func_0x000107c40534();
      func_0x000107c61180();
      uVar9 = uVar10;
      func_0x000107c5b634();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      func_0x000103913ed0();
      uVar10 = uVar9;
      if (uVar9 != 2) {
        uVar10 = 4;
      }
      uVar3 = 0xf;
      if (uVar9 != 3) {
        uVar3 = uVar10;
      }
      FUN_1029c3440(uVar12,uVar6,uVar7,uVar14,uVar13,uVar3);
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(uVar5);
      func_0x000107c6142c(uVar13);
      FUN_1029c23a8(lVar11);
      return;
    }
LAB_1029c1d8c:
    uStack_80 = uVar6;
    func_0x000107c60614(&UNK_1106abf80,&uStack_80,&UNK_1106abf80,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1029c1db0);
    (*pcVar4)();
  }
LAB_1029c1cd4:
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 1029c2388; end: 1029c23a7;  */

void FUN_1029c2388(void)

{
  func_0x000107c61168(&PTR_PTR_1128799b0);
  return;
}



/* Entry: 1029c23a8; end: 1029c23c3;  */

void FUN_1029c23a8(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1029c23c4; end: 1029c262f;  */

ulong FUN_1029c23c4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029c2494);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029c2498);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000100442c3c(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000100442c3c(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000001f,0x800000010f0d4f50);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029c2560);
  (*pcVar2)();
}



/* Entry: 1029c2630; end: 1029c289f;  */

undefined * FUN_1029c2630(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined1 auStack_a8 [72];
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112ed4458,&UNK_10dafd168);
    puVar2 = puVar9;
    func_0x000107c602e8();
    puVar11 = (undefined *)0x0;
    do {
      uVar10 = *(ulong *)(param_1 + 0x20 + (long)puVar11 * 8);
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar2 + 0x28));
      uVar3 = uVar10;
      func_0x000107c60690();
      func_0x000107c606a8();
      uVar8 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar3 = uVar3 & (uVar8 ^ 0xffffffffffffffff);
      uVar5 = uVar3 >> 6;
      uVar6 = *(ulong *)(puVar2 + uVar5 * 8 + 0x38);
      uVar7 = 1L << (uVar3 & 0x3f);
      lVar4 = *(long *)(puVar2 + 0x30);
      if ((uVar7 & uVar6) != 0) {
        do {
          if (*(ulong *)(lVar4 + uVar3 * 8) == uVar10) goto LAB_1029c26b4;
          uVar3 = uVar3 + 1 & ~uVar8;
          uVar5 = uVar3 >> 6;
          uVar6 = *(ulong *)(puVar2 + uVar5 * 8 + 0x38);
          uVar7 = 1L << (uVar3 & 0x3f);
        } while ((uVar7 & uVar6) != 0);
      }
      *(ulong *)(puVar2 + uVar5 * 8 + 0x38) = uVar7 | uVar6;
      *(ulong *)(lVar4 + uVar3 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029c2768);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
LAB_1029c26b4:
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar9);
  }
  return puVar2;
}



/* Entry: 1029c28a0; end: 1029c28af;  */

void FUN_1029c28a0(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1029c28b0; end: 1029c28f3;  */

long FUN_1029c28b0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1029c28f4; end: 1029c2a4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1029c28f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x80) = 1;
  lVar2 = *(long *)(param_1 + _DAT_11380bb98);
  *(long *)(unaff_x20 + 0x10) = param_1;
  *(long *)(unaff_x20 + 0x18) = lVar2;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11380bba0);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  *(undefined8 *)(unaff_x20 + 0x40) = param_5;
  *(undefined8 *)(unaff_x20 + 0x48) = param_6;
  *(undefined8 *)(unaff_x20 + 0x50) = param_7;
  *(undefined8 *)(unaff_x20 + 0x58) = param_8;
  *(undefined8 *)(unaff_x20 + 0x68) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_9;
  *(undefined8 *)(unaff_x20 + 0x70) = param_11;
  *(undefined8 *)(unaff_x20 + 0x78) = param_12;
  lVar1 = lVar2 + _DAT_112f9cac0;
  func_0x000107c61428(lVar1,auStack_78,1,0);
  *(undefined ***)(lVar1 + 8) = &PTR_DAT_11057cde0;
  func_0x000107c61604(lVar1,unaff_x20);
  lVar1 = *(long *)(unaff_x20 + 0x20) + _DAT_112f9ca90;
  func_0x000107c61428(lVar1,auStack_90,1,0);
  *(undefined ***)(lVar1 + 8) = &PTR_DAT_11057ce00;
  func_0x000107c61604(lVar1,unaff_x20);
  func_0x000107c61174(lVar2);
  func_0x000107c61174(uVar3);
  return unaff_x20;
}



/* Entry: 1029c2a4c; end: 1029c2aa3;  */

long FUN_1029c2a4c(long param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x80);
  lVar2 = lVar1;
  if (lVar1 == 1) {
    FUN_1029c2aa4();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
    *(long *)(unaff_x20 + 0x80) = param_1;
    func_0x000107c61174();
    FUN_1029c23a8(uVar3);
    lVar2 = param_1;
  }
  FUN_1029c28a0(lVar1);
  return lVar2;
}



/* Entry: 1029c2aa4; end: 1029c2f07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1029c2aa4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *apuStack_1d0 [4];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 auStack_178 [3];
  long lStack_160;
  undefined **ppuStack_158;
  undefined8 auStack_150 [3];
  undefined *puStack_138;
  undefined **ppuStack_130;
  long alStack_128 [3];
  long lStack_110;
  undefined **ppuStack_108;
  undefined1 auStack_100 [24];
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long alStack_a0 [3];
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(alStack_a0);
  lVar3 = alStack_a0[0];
  lVar2 = alStack_a0[0];
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar2 != 0) {
    func_0x000100083b20(alStack_a0);
    lVar3 = alStack_a0[0];
    func_0x000107c42eac();
    func_0x000107c61180();
    func_0x000107c61170(alStack_a0[0]);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029c2f08);
      (*pcVar1)();
    }
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      func_0x000100083b20(auStack_70);
      uStack_190 = auStack_70[0];
      puStack_88 = &UNK_11057cbc0;
      ppuStack_80 = &PTR_DAT_11057cbd8;
      func_0x000107c615f0(lVar2);
      func_0x000100083b20(&uStack_a8);
      uStack_198 = uStack_a8;
      func_0x000100083b20(&uStack_b0);
      uStack_1a0 = uStack_b0;
      lVar4 = 0;
      func_0x0001029c5dc0();
      lVar3 = lVar4;
      func_0x000107c613fc();
      puVar5 = PTR_PTR_1126abc50;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(lVar3 + 0x10) = puVar5;
      func_0x000100083b20(&uStack_b8);
      uStack_1a8 = uStack_b8;
      func_0x000100083b20(&uStack_c0);
      uStack_1b0 = uStack_c0;
      func_0x000100083b20(&uStack_c8);
      apuStack_1d0[3] = (undefined1 *)uStack_c8;
      func_0x000100083b20(&uStack_d0);
      apuStack_1d0[1] = (undefined1 *)uStack_d0;
      func_0x000100083b20(&puStack_d8);
      apuStack_1d0[0] = puStack_d8;
      puStack_e8 = &UNK_11057cbc0;
      ppuStack_e0 = &PTR_DAT_11057cbd8;
      ppuStack_108 = &PTR_DAT_11057d0e0;
      lVar6 = 0;
      alStack_128[0] = lVar3;
      lStack_110 = lVar4;
      FUN_1029c4614();
      lVar2 = lVar6;
      func_0x000107c610f8();
      func_0x0001000c6518(auStack_100,&UNK_11057cbc0);
      apuStack_1d0[2] = (undefined1 *)apuStack_1d0;
      (*(code *)PTR____chkstk_darwin_11034bd40)(uRam0000000114146f40);
      puVar8 = (undefined8 *)((long)apuStack_1d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12 + 0x10))(puVar8);
      func_0x0001000c6518(alStack_128,lVar4);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
      puVar9 = (undefined8 *)((long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12_00 + 0x10))(puVar9);
      auStack_150[0] = *puVar8;
      auStack_178[0] = *puVar9;
      puStack_138 = &UNK_11057cbc0;
      ppuStack_130 = &PTR_DAT_11057cbd8;
      ppuStack_158 = &PTR_DAT_11057d0e0;
      lVar3 = lVar2 + _DAT_112ed45b0;
      *(undefined8 *)(lVar3 + 8) = 0;
      lStack_160 = lVar4;
      func_0x000107c61614(lVar3,0);
      puVar8 = (undefined8 *)(lVar2 + _DAT_112ed45f8);
      *puVar8 = 0;
      *(undefined1 *)(puVar8 + 1) = 1;
      puVar8 = (undefined8 *)(lVar2 + _DAT_112ed4600);
      *puVar8 = 0;
      *(undefined1 *)(puVar8 + 1) = 1;
      *(undefined8 *)(lVar2 + _DAT_112ed4608) = 0;
      puVar8 = (undefined8 *)(lVar2 + _DAT_112ed4630);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8 = (undefined8 *)(lVar2 + _DAT_112ed4638);
      *puVar8 = 0;
      puVar8[1] = 0;
      lVar3 = _DAT_112ed4640;
      lVar4 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar2 + lVar3,1,1,lVar4);
      *(undefined8 *)(lVar2 + _DAT_112ed45b8) = uStack_190;
      FUN_1029c22e4(alStack_a0,lVar2 + _DAT_112ed45c0);
      *(undefined8 *)(lVar2 + _DAT_112ed45c8) = uStack_198;
      *(undefined8 *)(lVar2 + _DAT_112ed45d0) = uStack_1a0;
      FUN_1029c33fc(auStack_150,lVar2 + _DAT_112ed45d8);
      FUN_1029c33fc(auStack_178,lVar2 + _DAT_112ed45e0);
      *(undefined8 *)(lVar2 + _DAT_112ed45e8) = uStack_1a8;
      *(undefined8 *)(lVar2 + _DAT_112ed45f0) = 0;
      *(undefined8 *)(lVar2 + _DAT_112ed4610) = uStack_1b0;
      *(undefined1 **)(lVar2 + _DAT_112ed4618) = apuStack_1d0[3];
      *(undefined1 **)(lVar2 + _DAT_112ed4620) = apuStack_1d0[1];
      *(undefined1 **)(lVar2 + _DAT_112ed4628) = apuStack_1d0[0];
      plVar7 = &lStack_188;
      lStack_188 = lVar2;
      lStack_180 = lVar6;
      func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
      func_0x0001029c2320(alStack_a0);
      func_0x0001000834e4(auStack_178);
      func_0x0001000834e4(auStack_150);
      func_0x0001000834e4(alStack_128);
      func_0x0001000834e4(auStack_100);
      return plVar7;
    }
    func_0x000107c615e8(lVar2);
  }
  return (long *)0x0;
}



/* Entry: 1029c2f08; end: 1029c2fdb;  */

undefined1  [16] FUN_1029c2f08(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "cleanup()";
  func_0x0001000c10c0("cleanup()");
  func_0x000107c61180();
  puVar2 = &UNK_11057cd80;
  func_0x000107c613fc(&UNK_11057cd80,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcStack_40 = FUN_1029c3094;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11057cd98;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return ZEXT816(0);
}



/* Entry: 1029c2fdc; end: 1029c3093;  */

void FUN_1029c2fdc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c61174(uVar1);
    func_0x000107c6157c(param_1);
    func_0x000103805290();
    func_0x000107c61170(uVar1);
    func_0x000107c61574(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c6157c(param_1);
    func_0x000107c61174(uVar1);
    func_0x000103805114(param_1,&PTR_DAT_11057ce00);
    func_0x000107c61170(uVar1);
    func_0x000107c61578(param_1,2);
  }
  return;
}



/* Entry: 1029c3094; end: 1029c30b7;  */

void FUN_1029c3094(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    func_0x000107c61174(uVar2);
    func_0x000107c6157c(lVar1);
    func_0x000103805290();
    func_0x000107c61170(uVar2);
    func_0x000107c61574(lVar1);
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x000107c6157c(lVar1);
    func_0x000107c61174(uVar2);
    func_0x000103805114(lVar1,&PTR_DAT_11057ce00);
    func_0x000107c61170(uVar2);
    func_0x000107c61578(lVar1,2);
  }
  return;
}



/* Entry: 1029c30b8; end: 1029c317f;  */

void FUN_1029c30b8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  FUN_1029c23a8(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 1029c3180; end: 1029c322b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c3180(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_1029c2a4c();
  lVar1 = _DAT_112ed4608;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112ed4608,auStack_38,0,0);
    lVar1 = *(long *)(param_1 + lVar1);
    if (lVar1 != 0) {
      func_0x000107c615f0(lVar1);
      func_0x000107c4bbdc();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1029c322c; end: 1029c3283;  */

void FUN_1029c322c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1029c2a4c();
  if (lVar1 != 0) {
    FUN_1029c3a08(param_1,param_2,0,0);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1029c3284; end: 1029c3287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c3284(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_1029c2a4c();
  lVar1 = _DAT_112ed4608;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112ed4608,auStack_38,0,0);
    lVar1 = *(long *)(param_1 + lVar1);
    if (lVar1 != 0) {
      func_0x000107c615f0(lVar1);
      func_0x000107c4bbdc();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1029c3288; end: 1029c33c7;  */

void FUN_1029c3288(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c5b900();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5aeec(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1029c33c8; end: 1029c33fb;  */

void FUN_1029c33c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c5b900();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5aeec(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1029c33fc; end: 1029c343f;  */

long FUN_1029c33fc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1029c3440; end: 1029c37ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c3440(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 extraout_x12_00;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar3 = 0x112d36580;
  uStack_80 = param_6;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar13 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x0001029c3cf0(lVar14,param_1,param_2,param_3,param_4,param_5);
  lVar3 = lVar14;
  (**(code **)(lVar11 + 0x30))(lVar14,1,extraout_x12_00);
  if ((int)lVar3 == 1) {
    func_0x0001000293e4(lVar14);
    lVar3 = unaff_x20 + _DAT_112ed45b0;
    func_0x000107c61618();
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + _DAT_112ed42e0);
      pcVar10 = (code *)*puVar4;
      if (pcVar10 == (code *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = puVar4[1];
        func_0x000107c6157c(uVar7);
        (*pcVar10)();
        func_0x00010058d43c(pcVar10,uVar7);
        uVar7 = *puVar4;
      }
      uVar5 = puVar4[1];
      *puVar4 = 0;
      puVar4[1] = 0;
      func_0x00010058d43c(uVar7,uVar5);
      func_0x000107c615e8(lVar3);
    }
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar9,lVar14,extraout_x12_00);
    uVar7 = uStack_80;
    plVar1 = (long *)(unaff_x20 + _DAT_112ed45f8);
    *plVar1 = param_1;
    *(undefined1 *)(plVar1 + 1) = 0;
    puVar4 = (undefined8 *)(unaff_x20 + _DAT_112ed4600);
    *puVar4 = uStack_80;
    *(undefined1 *)(puVar4 + 1) = 0;
    puVar4 = (undefined8 *)(unaff_x20 + _DAT_112ed4630);
    uVar5 = puVar4[1];
    *puVar4 = param_2;
    puVar4[1] = param_3;
    func_0x000107c6142c(uVar5);
    if (param_1 == 3) {
      uStack_78 = 0x3a3a3533;
      uStack_70 = 0xe400000000000000;
      func_0x000107c61434(param_3);
      func_0x000107c5fb78(param_2,param_3);
      func_0x000107c5fb78(0x303a3a,0xe300000000000000);
      puVar4 = (undefined8 *)(unaff_x20 + _DAT_112ed4638);
      uVar5 = puVar4[1];
      *puVar4 = uStack_78;
      puVar4[1] = uStack_70;
      func_0x000107c6142c(uVar5);
    }
    else {
      func_0x000107c61434(param_3);
    }
    (**(code **)(lVar11 + 0x10))(lVar13,lVar9,extraout_x12_00);
    (**(code **)(lVar11 + 0x38))(lVar13,0,1,extraout_x12_00);
    lVar3 = _DAT_112ed4640;
    func_0x000107c61428(unaff_x20 + _DAT_112ed4640,&uStack_78,0x21,0);
    func_0x0001014522e4(lVar13,unaff_x20 + lVar3);
    func_0x000107c614a8(&uStack_78);
    uVar6 = 3;
    if (param_1 != 4) {
      uVar6 = 0;
    }
    lVar3 = param_1;
    FUN_1029c3fd8(param_1);
    uVar5 = 0;
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ed45f0);
    uVar2 = 2;
    if (param_1 != 3) {
      uVar2 = uVar6;
    }
    uVar12 = (ulong)uVar2;
    if (param_1 == 3) {
      puVar4 = (undefined8 *)(unaff_x20 + _DAT_112ed45d8);
      func_0x0001000a8868(puVar4,puVar4[3]);
      uVar5 = *puVar4;
      func_0x000108faa98c(uVar5);
    }
    func_0x000103943230(uVar12,lVar3,uVar7,1,uVar8,uVar5);
    func_0x000107c61170(lVar3);
    lVar3 = _DAT_112ed4608;
    func_0x000107c61428(unaff_x20 + _DAT_112ed4608,&uStack_78,1,0);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar3);
    *(ulong *)(unaff_x20 + lVar3) = uVar12;
    func_0x000107c615f0(uVar12);
    func_0x000107c615e8(uVar7);
    func_0x000107c4ee7c(uVar12);
    func_0x000107c615e8(uVar12);
    (**(code **)(lVar11 + 8))(lVar9,extraout_x12_00);
  }
  return;
}



/* Entry: 1029c37f0; end: 1029c3a07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1029c37f0(long param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  long extraout_x8;
  long unaff_x20;
  ulong uVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar1 = (long *)(unaff_x20 + _DAT_112ed45f8);
  *plVar1 = param_1;
  *(undefined1 *)(plVar1 + 1) = 0;
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_112ed4600);
  *puVar5 = param_2;
  *(undefined1 *)(puVar5 + 1) = 0;
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(auStack_70 + -extraout_x8,1,1,lVar3);
  lVar3 = _DAT_112ed4640;
  func_0x000107c61428(unaff_x20 + _DAT_112ed4640,auStack_68,0x21,0);
  func_0x0001014522e4(auStack_70 + -extraout_x8,unaff_x20 + lVar3);
  func_0x000107c614a8(auStack_68);
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_112ed4630);
  uVar4 = puVar5[1];
  *puVar5 = 0;
  puVar5[1] = 0;
  func_0x000107c6142c(uVar4);
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_112ed4638);
  uVar4 = puVar5[1];
  *puVar5 = 0;
  puVar5[1] = 0;
  func_0x000107c6142c(uVar4);
  uVar7 = 3;
  if (param_1 != 4) {
    uVar7 = 0;
  }
  lVar3 = param_1;
  FUN_1029c3fd8(param_1);
  uVar4 = 0;
  uVar2 = 2;
  if (param_1 != 3) {
    uVar2 = uVar7;
  }
  uVar8 = (ulong)uVar2;
  if (param_1 == 3) {
    puVar5 = (undefined8 *)(unaff_x20 + _DAT_112ed45d8);
    func_0x0001000a8868(puVar5,puVar5[3]);
    uVar4 = *puVar5;
    func_0x000108faa98c(uVar4);
  }
  func_0x000103943230(uVar8,lVar3,param_2,1,0,uVar4);
  func_0x000107c61170(lVar3);
  lVar3 = _DAT_112ed4608;
  func_0x000107c61428(unaff_x20 + _DAT_112ed4608,auStack_68,1,0);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
  *(ulong *)(unaff_x20 + lVar3) = uVar8;
  func_0x000107c615f0(uVar8);
  func_0x000107c615e8(uVar4);
  uVar6 = uVar8;
  func_0x000107c4c204();
  func_0x000107c61180();
  func_0x000107c615e8(uVar8);
  if (uVar6 == 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(undefined8 *)(unaff_x20 + lVar3) = 0;
    func_0x000107c615e8(uVar4);
  }
  return uVar6;
}



/* Entry: 1029c3a08; end: 1029c3fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1029c3a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar6 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar6 - extraout_x12;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lStack_a0 = _DAT_112ed4608;
  lStack_a8 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if ((char)((long *)(unaff_x20 + _DAT_112ed45f8))[1] != '\x01') {
    lStack_98 = *(long *)(unaff_x20 + _DAT_112ed45f8);
    func_0x000107c61428(unaff_x20 + _DAT_112ed4608,auStack_78,0,0);
    if (*(long *)(unaff_x20 + lStack_a0) != 0) {
      func_0x0001029c3cf0(lVar8,lStack_98,param_1,param_2,param_3,param_4);
      lVar4 = lVar8;
      (**(code **)(lVar7 + 0x30))(lVar8,1,lVar3);
      lVar2 = lStack_a8;
      if ((int)lVar4 == 1) {
        func_0x0001000293e4(lVar8);
      }
      else {
        (**(code **)(lVar7 + 0x20))(lStack_a8,lVar8,lVar3);
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed4630);
        uVar5 = puVar1[1];
        *puVar1 = param_1;
        puVar1[1] = param_2;
        func_0x000107c6142c(uVar5);
        if (lStack_98 == 3) {
          uStack_90 = 0x3a3a3533;
          uStack_88 = 0xe400000000000000;
          func_0x000107c61434(param_2);
          func_0x000107c5fb78(param_1,param_2);
          func_0x000107c5fb78(0x303a3a,0xe300000000000000);
          puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed4638);
          uVar5 = puVar1[1];
          *puVar1 = uStack_90;
          puVar1[1] = uStack_88;
          func_0x000107c6142c(uVar5);
        }
        else {
          func_0x000107c61434(param_2);
        }
        (**(code **)(lVar7 + 0x10))(puVar6,lVar2,lVar3);
        (**(code **)(lVar7 + 0x38))(puVar6,0,1,lVar3);
        lVar8 = _DAT_112ed4640;
        func_0x000107c61428(unaff_x20 + _DAT_112ed4640,&uStack_90,0x21,0);
        func_0x0001014522e4(puVar6,unaff_x20 + lVar8);
        func_0x000107c614a8(&uStack_90);
        lVar8 = lStack_a0;
        func_0x000107c61428(unaff_x20 + lStack_a0,&uStack_90,0x20,0);
        lVar8 = *(long *)(unaff_x20 + lVar8);
        if (lVar8 != 0) {
          func_0x000107c614a8(&uStack_90);
          func_0x000107c42910(lVar8);
          (**(code **)(lVar7 + 8))(lVar2,lVar3);
          return lVar8;
        }
        (**(code **)(lVar7 + 8))(lVar2,lVar3);
        func_0x000107c614a8(&uStack_90);
      }
    }
  }
  return 0;
}



/* Entry: 1029c3fd8; end: 1029c40eb;  */

void FUN_1029c3fd8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_11057ce98;
  func_0x000107c613fc(&UNK_11057ce98,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11057d000;
  func_0x000107c613fc(&UNK_11057d000,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  pcStack_40 = FUN_1029c57ac;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1011f6060;
  puStack_48 = &UNK_11057d018;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = 0;
  func_0x000103f5b134(0);
  func_0x000107c610f8();
  func_0x000103f5aeec(puVar1,0,0,0,0,0,uVar5);
  return;
}



/* Entry: 1029c40ec; end: 1029c448b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029c40ec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar7 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar10 - extraout_x12_00;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar9 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ed4640;
  if (param_1 == 0) {
    (**(code **)(lVar13 + 0x38))(lVar12,1,1,lVar2);
  }
  else {
    func_0x000107c61428(param_1 + _DAT_112ed4640,auStack_90,0,0);
    func_0x000100029394(param_1 + lVar1,lVar12);
    func_0x000107c61170(param_1);
    pcVar14 = *(code **)(lVar13 + 0x30);
    lVar1 = lVar12;
    (*pcVar14)(lVar12,1,lVar2);
    if ((int)lVar1 != 1) {
      lVar1 = lVar9;
      (**(code **)(lVar13 + 0x20))(lVar9,lVar12,lVar2);
      func_0x000107c5ed70();
      (**(code **)(lVar13 + 0x10))(lVar10,lVar9,lVar2);
      (**(code **)(lVar13 + 0x38))(lVar10,0,1,lVar2);
      func_0x000107c5fadc(lVar1,lVar12);
      func_0x000107c6142c(lVar12);
      lVar12 = lVar10;
      (*pcVar14)(lVar10,1,lVar2);
      lVar8 = 0;
      if ((int)lVar12 != 1) {
        func_0x000107c5ed90();
        (**(code **)(lVar13 + 8))(lVar10,lVar2);
        lVar8 = lVar12;
      }
      puVar5 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      puVar6 = PTR_PTR_1126b0800;
      func_0x000107c610f8(PTR_PTR_1126b0800);
      func_0x000107c48cbc();
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar8);
      func_0x000107c451b0(puVar5);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      (**(code **)(lVar13 + 8))(lVar9,lVar2);
      return puVar5;
    }
  }
  func_0x0001000293e4(lVar12);
  (**(code **)(lVar13 + 0x38))(puVar7,1,1,lVar2);
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  puVar4 = puVar7;
  (**(code **)(lVar13 + 0x30))(puVar7,1,lVar2);
  puVar11 = (undefined1 *)0x0;
  if ((int)puVar4 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar13 + 8))(puVar7,lVar2);
    puVar11 = puVar4;
  }
  puVar5 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar6 = PTR_PTR_1126b0800;
  func_0x000107c610f8(PTR_PTR_1126b0800);
  func_0x000107c48cbc();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar11);
  func_0x000107c451b0(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  return puVar5;
}



/* Entry: 1029c448c; end: 1029c44eb; -[_TtC18ContentShareUpsell30StoriesPostSendUpsellPresenter init] */

void FUN_1029c448c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContentShareUpsell.StoriesPostSendUpsellPresenter",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029c44b8);
  (*pcVar1)();
}



/* Entry: 1029c44ec; end: 1029c460b; -[_TtC18ContentShareUpsell30StoriesPostSendUpsellPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1029c44ec(long param_1)

{
  long lVar1;
  
  func_0x0001029c5788(param_1 + _DAT_112ed45b0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed45b8));
  func_0x0001029c2320(param_1 + _DAT_112ed45c0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed45c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed45d0));
  func_0x0001000834e4(param_1 + _DAT_112ed45d8);
  func_0x0001000834e4(param_1 + _DAT_112ed45e0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed45e8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed4608));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4610));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4618));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4620));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4628));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ed4630 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ed4638 + 8));
  param_1 = param_1 + _DAT_112ed4640;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1029c460c; end: 1029c4613;  */

void FUN_1029c460c(void)

{
  if (lRam0000000112ed4670 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e704758);
  return;
}


