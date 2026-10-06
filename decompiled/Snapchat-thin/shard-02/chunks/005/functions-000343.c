/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e0c444; end: 101e0c7bf;  */

void FUN_101e0c444(long param_1,undefined *param_2,ulong param_3,undefined8 param_4,long param_5,
                  code *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  ulong param_10,code *param_11,undefined4 param_12,undefined4 param_13,
                  undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
                  undefined8 param_18,undefined8 param_19)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  if ((param_3 & 1) != 0) {
    func_0x000107c50558(param_4,param_2,0);
  }
  func_0x000107c61428(param_5 + 0x10,auStack_80,0,0);
  puVar1 = (undefined1 *)(param_5 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined1 *)0x0) {
    FUN_101e0df2c();
    puVar7 = &UNK_1104896f8;
    func_0x000107c613f8(&UNK_1104896f8,puVar1,0,0);
    *puVar1 = 9;
    (*param_6)();
  }
  else {
    uVar2 = param_10;
    func_0x000107c49b28();
    if ((uVar2 & 1) != 0) {
      puVar3 = (undefined1 *)0x2;
      (*param_11)(2,0);
      FUN_101e0df2c();
      puVar7 = &UNK_1104896f8;
      func_0x000107c613f8(&UNK_1104896f8,puVar3,0,0);
      *puVar3 = 0xb;
      (*param_6)();
      func_0x000107c614ac(puVar7);
      func_0x000107c61170(puVar1);
      return;
    }
    if (param_2 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = param_2;
      func_0x000107c5ed2c(param_2);
    }
    lVar4 = param_1;
    func_0x000107e62780(param_1,puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    if (lVar4 != 0) {
      uVar5 = 0;
      (*param_11)(0,0);
      FUN_101e0a2d0();
      puVar7 = &UNK_110489808;
      func_0x000107c613fc(&UNK_110489808,0x78,7);
      *(undefined1 **)(puVar7 + 0x10) = puVar1;
      *(long *)(puVar7 + 0x18) = lVar4;
      *(undefined8 *)(puVar7 + 0x20) = param_14;
      *(undefined8 *)(puVar7 + 0x28) = param_15;
      *(ulong *)(puVar7 + 0x30) = param_10;
      *(code **)(puVar7 + 0x38) = param_6;
      *(undefined8 *)(puVar7 + 0x40) = param_7;
      *(undefined8 *)(puVar7 + 0x48) = param_16;
      *(undefined8 *)(puVar7 + 0x50) = param_8;
      *(undefined8 *)(puVar7 + 0x58) = param_9;
      *(undefined8 *)(puVar7 + 0x60) = param_17;
      *(undefined8 *)(puVar7 + 0x68) = param_18;
      *(undefined8 *)(puVar7 + 0x70) = param_19;
      pcStack_90 = FUN_101e0e3e8;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_1000f6b44;
      puStack_98 = &UNK_110489820;
      ppuVar6 = &puStack_b0;
      puStack_88 = puVar7;
      func_0x000107c60bc4(ppuVar6);
      puVar7 = puStack_88;
      func_0x000107c61174(puVar1);
      func_0x000107c61174(lVar4);
      func_0x000107c615f0(param_14);
      func_0x000107c61174(param_15);
      func_0x000107c615f0(param_10);
      func_0x000107c6157c(param_7);
      func_0x000107c615f0(param_16);
      func_0x000107c61434(param_9);
      func_0x000107c615f0(param_17);
      func_0x000107c615f0(param_18);
      func_0x000107c61174(param_19);
      func_0x000107c61574(puVar7);
      func_0x000107c4e524(uVar5);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(puVar1);
      func_0x000107c61170(lVar4);
      func_0x000107c615e8(uVar5);
      return;
    }
    if ((param_1 == 0) || (param_2 != (undefined *)0x0)) {
      puVar3 = (undefined1 *)0x1;
      (*param_11)(1,param_2);
      puVar7 = param_2;
      if (param_2 == (undefined *)0x0) {
        FUN_101e0df2c();
        puVar7 = &UNK_1104896f8;
        func_0x000107c613f8(&UNK_1104896f8,puVar3,0,0);
        *puVar3 = 7;
      }
      func_0x000107c614b0(param_2);
    }
    else {
      puVar3 = (undefined1 *)0x1;
      (*param_11)(1,0);
      FUN_101e0df2c();
      puVar7 = &UNK_1104896f8;
      func_0x000107c613f8(&UNK_1104896f8,puVar3,0,0);
      *puVar3 = 8;
    }
    (*param_6)();
    func_0x000107c61170(puVar1);
  }
  func_0x000107c614ac(puVar7);
  return;
}



/* Entry: 101e0c7c0; end: 101e0d6e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e0c7c0(double param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined1 *param_6,code *param_7,undefined8 param_8,ulong param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  int iVar14;
  long extraout_x8;
  long lVar15;
  long extraout_x8_00;
  long extraout_x12;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  undefined8 auStack_230 [4];
  undefined2 auStack_210 [4];
  ulong auStack_208 [2];
  undefined1 auStack_1f8 [8];
  undefined8 auStack_1f0 [2];
  undefined1 auStack_1e0 [8];
  ulong auStack_1d8 [17];
  undefined1 auStack_150 [8];
  ulong uStack_148;
  ulong uStack_140;
  long lStack_138;
  undefined *puStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined *puStack_118;
  code *pcStack_110;
  code *pcStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  uStack_e0 = param_13;
  uStack_d8 = param_14;
  uStack_d0 = param_11;
  uStack_f0 = param_12;
  uStack_e8 = param_10;
  lVar5 = 0x112d373d8;
  uStack_c8 = param_9;
  uStack_b8 = param_2;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puStack_c0 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = (long)(auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar21 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar16 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_f8 = param_4;
  lStack_b0 = param_3;
  FUN_101e0e424(param_3,param_4,param_5);
  func_0x000107c49b28();
  if (((ulong)param_6 & 1) != 0) {
    FUN_101e0df2c();
    puVar6 = &UNK_1104896f8;
    func_0x000107c613f8(&UNK_1104896f8,param_6,0,0);
    *param_6 = 0xb;
    (*param_7)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar6);
    return;
  }
  puVar6 = PTR_PTR_1126bcf30;
  pcStack_108 = param_7;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5eea0(lVar16);
  func_0x000107c5ee8c();
  pcStack_110 = *(code **)(lVar21 + 8);
  lVar20 = lVar5;
  (*pcStack_110)(lVar16);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x101e0cfa8);
    (*pcVar19)();
  }
  if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x101e0cfac);
    (*pcVar19)();
  }
  if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x101e0cfb0);
    (*pcVar19)();
  }
  func_0x000107c59340(puVar6);
  lVar22 = lStack_b0;
  func_0x000107c59df8(lStack_b0);
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (lVar22 == 0) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x101e0cfb8);
    (*pcVar19)();
  }
  lVar17 = lVar22;
  func_0x000107c4e8ec();
  func_0x000107c61180();
  func_0x000107c61170(lVar22);
  uVar24 = uStack_c8;
  if (lVar17 == 0) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x101e0cfbc);
    (*pcVar19)();
  }
  puVar7 = PTR_PTR_1126b25e8;
  func_0x000107c610f8(PTR_PTR_1126b25e8);
  func_0x000107c453e4();
  func_0x000107c55388(lVar17);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(puVar7);
  uVar23 = uVar24;
  func_0x000107c43c94();
  uVar8 = uVar24;
  func_0x000107c3fba8();
  lStack_100 = lVar21;
  if ((int)uVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x101e0cfb4);
    (*pcVar19)();
  }
  uVar8 = uVar8 & 0xffffffff;
  uStack_128 = uVar23;
  func_0x000107c307d8();
  uStack_120 = uVar8;
  func_0x0001000d224c(&puStack_a8);
  puVar7 = puStack_a8;
  func_0x000107c5ad1c();
  func_0x000107c615e8(puStack_a8);
  lVar21 = lVar20;
  if (((ulong)puVar7 & 1) == 0) {
    uVar23 = uVar24;
    func_0x000107c42c98();
    func_0x000107c61180();
    lVar21 = lVar20;
    if (uVar23 != 0) {
      uVar8 = uVar23;
      func_0x000107c5faec();
      lVar21 = lVar20;
      uStack_148 = uVar8;
      func_0x000107c61170(uVar23);
      goto LAB_101e0cae0;
    }
  }
  uStack_148 = 0;
  lVar20 = 0;
LAB_101e0cae0:
  func_0x000107c3fba8(uVar24);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  uVar23 = uVar24;
  puStack_130 = puVar7;
  func_0x000107c5c7d8();
  func_0x000107c61180();
  if (uVar23 == 0) {
    uStack_140 = 0;
    lVar17 = 0;
    lVar22 = lVar21;
  }
  else {
    uVar8 = uVar23;
    func_0x000107c5faec();
    lVar22 = lVar21;
    uStack_140 = uVar8;
    func_0x000107c61170(uVar23);
    lVar17 = lVar21;
  }
  lVar21 = lStack_f8;
  func_0x000107c3fd5c();
  func_0x000107c61180();
  puStack_118 = puVar6;
  if (lVar21 == 0) {
    lVar25 = 0;
    lVar22 = 0;
  }
  else {
    lVar25 = lVar21;
    func_0x000107c5faec();
    func_0x000107c61170(lVar21);
  }
  pcVar19 = *(code **)(lStack_100 + 0x38);
  lVar21 = 1;
  lStack_138 = lVar20;
  lStack_f8 = param_8;
  (*pcVar19)(lVar15,1,1,lVar5);
  func_0x000107c42ee8();
  func_0x000107c61180();
  if (uVar24 == 0) {
    uVar23 = 0;
    lVar21 = 0;
  }
  else {
    uVar23 = uVar24;
    func_0x000107c5faec();
    func_0x000107c61170(uVar24);
  }
  (*pcVar19)(puStack_c0,1,1,lVar5);
  if (lVar17 == 0) {
    uVar24 = 0;
  }
  else {
    uVar24 = uStack_140;
    func_0x000107c5fadc(uStack_140,lVar17);
    func_0x000107c6142c(lVar17);
  }
  if (lVar22 == 0) {
    lVar25 = 0;
  }
  else {
    func_0x000107c5fadc(lVar25,lVar22);
    func_0x000107c6142c(lVar22);
  }
  pcVar19 = *(code **)(lStack_100 + 0x30);
  lVar20 = lVar15;
  (*pcVar19)(lVar15,1,lVar5);
  if ((int)lVar20 == 1) {
    lVar20 = 0;
  }
  else {
    func_0x000107c5ee70();
    (*pcStack_110)(lVar15,lVar5);
  }
  if (lVar21 == 0) {
    uVar23 = 0;
  }
  else {
    func_0x000107c5fadc(uVar23,lVar21);
    func_0x000107c6142c(lVar21);
  }
  puVar4 = puStack_c0;
  lVar15 = lStack_138;
  puVar18 = puStack_c0;
  (*pcVar19)(puStack_c0,1,lVar5);
  if ((int)puVar18 == 1) {
    puVar18 = (undefined1 *)0x0;
  }
  else {
    func_0x000107c5ee70();
    (*pcStack_110)(puVar4,lVar5);
  }
  pcVar19 = pcStack_108;
  iVar14 = (int)uStack_128;
  if (lVar15 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = uStack_148;
    func_0x000107c5fadc(uStack_148,lVar15);
    func_0x000107c6142c(lVar15);
  }
  puVar7 = PTR_PTR_1126bf820;
  func_0x000107c610f8();
  *(ulong *)(lVar16 + -0x10) = uVar8;
  *(long *)(lVar16 + -8) = (long)iVar14;
  *(undefined1 **)(lVar16 + -0x20) = puVar18;
  *(undefined8 *)(lVar16 + -0x18) = 0;
  *(undefined8 *)(lVar16 + -0x28) = 0;
  *(undefined8 *)(lVar16 + -0x30) = 0;
  *(long *)(lVar16 + -0x40) = lVar20;
  *(ulong *)(lVar16 + -0x38) = uVar23;
  *(undefined8 *)(lVar16 + -0x48) = 0;
  *(undefined8 *)(lVar16 + -0x50) = 0;
  *(ulong *)(lVar16 + -0x60) = uVar24;
  *(long *)(lVar16 + -0x58) = lVar25;
  *(undefined8 *)(lVar16 + -0x68) = 0;
  *(undefined8 *)(lVar16 + -0x70) = 0;
  *(undefined8 *)(lVar16 + -0x78) = 0;
  puVar6 = puStack_130;
  *(undefined8 *)(lVar16 + -0x88) = 0;
  *(undefined **)(lVar16 + -0x80) = puVar6;
  *(undefined1 *)(lVar16 + -0x90) = 0;
  *(undefined8 *)(lVar16 + -0x98) = 0;
  *(undefined8 *)(lVar16 + -0xa0) = 0;
  *(undefined1 *)(lVar16 + -0xa8) = 0;
  uVar1 = uStack_120;
  *(undefined8 *)(lVar16 + -0xb8) = 0;
  *(ulong *)(lVar16 + -0xb0) = uVar1;
  *(undefined2 *)(lVar16 + -0xc0) = 0;
  *(undefined8 *)(lVar16 + -0xd8) = 0;
  *(undefined8 *)(lVar16 + -0xe0) = 0;
  *(undefined8 *)(lVar16 + -200) = 0;
  *(undefined8 *)(lVar16 + -0xd0) = 0;
  lVar15 = lStack_b0;
  func_0x000107c48728();
  puStack_c0 = puVar7;
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(uVar8);
  uVar9 = uStack_f0;
  func_0x000107c516a8(uStack_f0);
  func_0x000107c61180();
  pcVar10 = 
  "performSave(snapDoc:snap:entry:snapId:memoriesSnapDocSaveManager:mergedDataSource:docObjectContext:completion:)"
  ;
  func_0x0001000c10c0(
                     "performSave(snapDoc:snap:entry:snapId:memoriesSnapDocSaveManager:mergedDataSource:docObjectContext:completion:)"
                     );
  func_0x000107c61180();
  uVar11 = uVar9;
  func_0x000107c4da88(uVar9);
  func_0x000107c61180();
  func_0x000107c615e8(pcVar10);
  puVar6 = &UNK_110489200;
  func_0x000107c613fc(&UNK_110489200,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,uStack_b8);
  puVar7 = &UNK_110489858;
  func_0x000107c613fc(&UNK_110489858,0x50,7);
  uVar3 = uStack_d0;
  uVar2 = uStack_d8;
  uVar13 = uStack_e0;
  lVar5 = lStack_f8;
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(code **)(puVar7 + 0x18) = pcVar19;
  *(long *)(puVar7 + 0x20) = lStack_f8;
  *(undefined8 *)(puVar7 + 0x28) = uStack_e0;
  *(undefined8 *)(puVar7 + 0x30) = uStack_d8;
  *(undefined8 *)(puVar7 + 0x38) = uStack_e8;
  *(undefined8 *)(puVar7 + 0x40) = uStack_d0;
  *(long *)(puVar7 + 0x48) = lVar15;
  pcStack_88 = FUN_101e0e578;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  uStack_98 = 0x101e0ded0;
  puStack_90 = &UNK_110489870;
  ppuVar12 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4(ppuVar12);
  puVar6 = puStack_80;
  func_0x000107c6157c(lVar5);
  func_0x000107c615f0(uVar13);
  func_0x000107c61174(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61174(lVar15);
  func_0x000107c61574(puVar6);
  uVar13 = uVar11;
  func_0x000107c5c320(uVar11);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c3e924(uVar13);
  func_0x000107c61170(puStack_118);
  func_0x000107c61170(puStack_c0);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  return;
}



/* Entry: 101e0d6e8; end: 101e0d873; -[_TtC31SCMemoriesOperaSaveServicesImpl28MemoriesOperaSaveManagerImpl saveFromOperaWithSnapId:presentingViewController:pausePlayback:resumePlayback:completion:] */

uint FUN_101e0d6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  if (param_5 == 0) {
    puVar4 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar4 = &UNK_110489768;
    func_0x000107c613fc(&UNK_110489768,0x18,7);
    *(long *)(puVar4 + 0x10) = param_5;
    uVar1 = 0x101e0e818;
  }
  if (param_6 == 0) {
    puVar6 = (undefined *)0x0;
    uVar5 = 0;
  }
  else {
    puVar6 = &UNK_110489740;
    func_0x000107c613fc(&UNK_110489740,0x18,7);
    *(long *)(puVar6 + 0x10) = param_6;
    uVar5 = 0x101e0e1ec;
  }
  puVar2 = &UNK_110489718;
  func_0x000107c613fc(&UNK_110489718,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  uVar3 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101e0a694(param_3,param_2,param_4,uVar1,puVar4,uVar5,puVar6,FUN_101e0e1e4,puVar2);
  func_0x000107c61574(puVar2);
  func_0x00010058d43c(uVar5,puVar6);
  func_0x00010058d43c(uVar1,puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 101e0d874; end: 101e0d8fb;  */

/* WARNING: Possible PIC construction at 0x000101e0d8d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e0d8d8) */

void FUN_101e0d874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc7f8;
  func_0x000107c61168();
  func_0x000107c3f7ac();
  func_0x000107c61180();
  if (puVar1 != (undefined *)0x0) {
    func_0x000107c5ee20(param_2,param_3);
    func_0x000107c59350(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 101e0d8fc; end: 101e0d8ff;  */

void FUN_101e0d8fc(void)

{
  return;
}



/* Entry: 101e0d900; end: 101e0dd87;  */

void FUN_101e0d900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar3 = &UNK_1104898a8;
  func_0x000107c613fc(&UNK_1104898a8,0x48,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  *(undefined8 *)(puVar3 + 0x40) = param_8;
  puVar4 = &UNK_1104898d0;
  func_0x000107c613fc(&UNK_1104898d0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x101e0e57c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_80 = FUN_101e0e590;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x101dc2098;
  puStack_88 = &UNK_1104898e8;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_78;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61434(param_8);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_110489920;
  func_0x000107c613fc(&UNK_110489920,0x28,7);
  *(undefined8 *)(puVar6 + 0x10) = param_9;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  puVar7 = &UNK_110489948;
  func_0x000107c613fc(&UNK_110489948,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_101e0e5b0;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = (code *)0x101e0e810;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_110489960;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar1 = puStack_78;
  func_0x000107c6157c(param_4);
  func_0x000107c61174(param_9);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x61,0x19f,0x21,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e0db78);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x61,0x1b1,0x18,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e0db7c);
  (*pcVar2)();
}



/* Entry: 101e0dd88; end: 101e0ddc7;  */

void FUN_101e0dd88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107dfdeb0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101e0ddc8; end: 101e0de5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e0ddc8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e2fad0);
  func_0x000103a715ac(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_4);
  func_0x000103a71560(param_3,param_4,1);
  func_0x000107c4dc80(uVar1);
  func_0x000107c61170(param_3);
  (*param_5)(0);
  return;
}



/* Entry: 101e0de5c; end: 101e0df1b;  */

void FUN_101e0de5c(undefined *param_1,undefined8 param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar1 = param_1;
    FUN_101e0df2c();
    puVar2 = &UNK_1104896f8;
    func_0x000107c613f8(&UNK_1104896f8,puVar1,0,0);
    *puVar1 = 10;
  }
  func_0x000107c614b0(param_1);
  (*param_3)(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
  return;
}



/* Entry: 101e0df1c; end: 101e0df2b;  */

void FUN_101e0df1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  ppuVar9 = &puStack_80;
  pcVar7 = "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
  ;
  func_0x0001000c10c0(
                     "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
                     );
  func_0x000107c61180();
  puVar8 = &UNK_110489ba0;
  func_0x000107c613fc(&UNK_110489ba0,0x48,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar1;
  *(undefined8 *)(puVar8 + 0x18) = uVar4;
  *(undefined8 *)(puVar8 + 0x20) = uVar2;
  *(undefined8 *)(puVar8 + 0x28) = uVar5;
  *(undefined8 *)(puVar8 + 0x30) = uVar3;
  *(undefined8 *)(puVar8 + 0x38) = uVar6;
  *(undefined8 *)(puVar8 + 0x40) = param_1;
  uStack_60 = 0x101e0e83c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110489bb8;
  puStack_58 = puVar8;
  func_0x000107c60bc4(&puStack_80);
  puVar8 = puStack_58;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c614b0(param_1);
  func_0x000107c61574(puVar8);
  func_0x000107c4e524(pcVar7);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c615e8(pcVar7);
  return;
}



/* Entry: 101e0df2c; end: 101e0df6b;  */

void FUN_101e0df2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2faa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da187c0;
  func_0x000107c61520(&UNK_10da187c0,&UNK_1104896f8);
  puRam0000000112e2faa8 = puVar1;
  return;
}



/* Entry: 101e0df6c; end: 101e0df6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e0df6c(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar3 = *(code **)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0,pcVar3,*(undefined8 *)(unaff_x20 + 0x38));
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    func_0x000107c61428(lVar1 + 0x10,auStack_80,1,0);
    *(undefined1 *)(lVar1 + 0x10) = 1;
    func_0x000107c61428(lVar4 + 0x10,auStack_98,0,0);
    lVar4 = lVar4 + 0x10;
    func_0x000107c61618();
    lVar1 = _DAT_112e2fa90;
    if (lVar4 != 0) {
      func_0x000107c4b940(*(undefined8 *)(lVar4 + _DAT_112e2fa90));
      func_0x000107c61428(lVar4 + _DAT_112e2fa98,auStack_b0,0x21,0);
      func_0x0001010af1e4(uVar2,uVar5);
      func_0x000107c614a8(auStack_b0);
      func_0x000107c6142c(uVar5);
      func_0x000107c5d278(*(undefined8 *)(lVar4 + lVar1));
      func_0x000107c61170(lVar4);
    }
    (*pcVar3)(uVar6);
  }
  return;
}



/* Entry: 101e0df70; end: 101e0dfab;  */

void FUN_101e0df70(void)

{
  long unaff_x20;
  
  func_0x000101e0cfbc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101e0dfac; end: 101e0dfcf;  */

/* WARNING: Possible PIC construction at 0x000101e0be98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e0be9c) */

void FUN_101e0dfac(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar3 = *(undefined1 **)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  FUN_101e0df2c();
  puVar2 = &UNK_1104896f8;
  func_0x000107c613f8(&UNK_1104896f8,puVar3,0,0);
  *puVar3 = uVar1;
  func_0x000107c5ed2c();
  func_0x000107c5ed2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 101e0dfd0; end: 101e0e013;  */

void FUN_101e0dfd0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_101e0c444(param_1,param_2,*(undefined1 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 101e0e014; end: 101e0e01b;  */

void FUN_101e0e014(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = 0;
  func_0x000107c5fcec(0);
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  func_0x000100f7a598(FUN_101e0e3bc,auStack_50,
                      "SCMemoriesOperaSaveServicesImpl/MemoriesOperaSaveManagerImpl.swift",0x42,2,
                      0xe4,uVar3);
  return;
}



/* Entry: 101e0e01c; end: 101e0e03b;  */

void FUN_101e0e01c(void)

{
  func_0x000107c61168(&PTR_PTR_112805280);
  return;
}



/* Entry: 101e0e03c; end: 101e0e1a3;  */

int FUN_101e0e03c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf4 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xb) {
      iVar2 = 4;
    }
    if (param_2 + 0xb >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101e0e0b8;
        goto LAB_101e0e09c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101e0e09c:
      return ((uint)*param_1 | uVar1 << 8) - 0xb;
    }
  }
LAB_101e0e0b8:
  iVar2 = *param_1 - 0xc;
  if (*param_1 < 0xc) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101e0e1a4; end: 101e0e1e3;  */

void FUN_101e0e1a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2fb20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da18798;
  func_0x000107c61520(&UNK_10da18798,&UNK_1104896f8);
  puRam0000000112e2fb20 = puVar1;
  return;
}



/* Entry: 101e0e1e4; end: 101e0e1f7;  */

void FUN_101e0e1e4(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e0e1f8; end: 101e0e39b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e0e1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  puVar1 = &UNK_110489790;
  func_0x000107c613fc(&UNK_110489790,0x18,7);
  *(long *)(puVar1 + 0x10) = param_4;
  lVar2 = param_4;
  func_0x000107c60bc4(param_4);
  func_0x0001000d224c(&puStack_80);
  puVar5 = puStack_80;
  if (puStack_80 == (undefined *)0x0) {
    func_0x000103a715ac(0);
    func_0x000107c610f8();
    func_0x000107c61434(param_2);
    func_0x000103a71560(param_1,param_2,0);
    (**(code **)(param_4 + 0x10))(param_4,param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c61170(param_1);
  }
  else {
    FUN_101e0a2d0();
    puVar3 = &UNK_1104897b8;
    func_0x000107c613fc(&UNK_1104897b8,0x38,7);
    *(undefined **)(puVar3 + 0x10) = puStack_80;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    *(code **)(puVar3 + 0x28) = FUN_101e0e39c;
    *(undefined **)(puVar3 + 0x30) = puVar1;
    uStack_60 = 0x101e0e838;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1104897d0;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c61174(puVar5);
    func_0x000107c61434(param_2);
    func_0x000107c6157c(puVar1);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar1);
    func_0x000107c61170(puVar5);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 101e0e39c; end: 101e0e3bb;  */

void FUN_101e0e39c(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101e0e3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 101e0e3bc; end: 101e0e3e7;  */

void FUN_101e0e3bc(void)

{
  long unaff_x20;
  
  FUN_101e0e840(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101e0e3e8; end: 101e0e423;  */

void FUN_101e0e3e8(void)

{
  long unaff_x20;
  
  FUN_101e0c7c0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 101e0e424; end: 101e0e577;  */

void FUN_101e0e424(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar5 = &puStack_90;
  uVar6 = param_2;
  func_0x000107c41214();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
    puVar3 = &UNK_110489a38;
    func_0x000107c613fc(&UNK_110489a38,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    *(long *)(puVar3 + 0x18) = lVar2;
    *(undefined8 *)(puVar3 + 0x20) = uVar6;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = (code *)0x101e0e608;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110489a50;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c615f0(param_2);
    func_0x00010006c00c(lVar2,uVar6);
    func_0x000107c61574(puVar3);
    pcStack_70 = FUN_101e0d8fc;
    puStack_68 = (undefined *)0x0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1013b7310;
    puStack_78 = &UNK_110489a78;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c4e560(param_3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x00010006c090(lVar2,uVar6);
  }
  return;
}



/* Entry: 101e0e578; end: 101e0e58f;  */

void FUN_101e0e578(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101e0d900(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 101e0e590; end: 101e0e5af;  */

void FUN_101e0e590(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101e0e5b0; end: 101e0e5c3;  */

void FUN_101e0e5b0(undefined *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  puVar3 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar2 = param_1;
    FUN_101e0df2c(0,*(undefined8 *)(unaff_x20 + 0x10),pcVar1,*(undefined8 *)(unaff_x20 + 0x20));
    puVar3 = &UNK_1104896f8;
    func_0x000107c613f8(&UNK_1104896f8,puVar2,0,0);
    *puVar2 = 10;
  }
  func_0x000107c614b0(param_1);
  (*pcVar1)(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar3);
  return;
}



/* Entry: 101e0e5c4; end: 101e0e5f7;  */

void FUN_101e0e5c4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101e0e5f8; end: 101e0e61f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e0e5f8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar2 = *(code **)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e2fad0);
  func_0x000103a715ac(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar1);
  func_0x000103a71560(uVar3,uVar1,1);
  func_0x000107c4dc80(uVar4);
  func_0x000107c61170(uVar3);
  (*pcVar2)(0);
  return;
}



/* Entry: 101e0e620; end: 101e0e63b;  */

void FUN_101e0e620(void)

{
  long unaff_x20;
  
  FUN_101e0c1b4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101e0e63c; end: 101e0e663;  */

void FUN_101e0e63c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101e0e664; end: 101e0e67b;  */

void FUN_101e0e664(void)

{
  code *pcVar1;
  code *pcVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  bVar3 = *(byte *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  pcVar2 = *(code **)(unaff_x20 + 0x38);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  }
  if (((lVar7 != 0) && ((bVar3 & 1) == 0)) && (lVar4 != 0)) {
    func_0x000107c61174(lVar4);
    func_0x000107c61174();
    func_0x000107c614b0(lVar7);
    lVar5 = lVar7;
    func_0x000107c5ed2c(lVar7);
    lVar6 = lVar5;
    func_0x000107c5ed2c();
    func_0x000107c61170(lVar5);
    func_0x000107dffcbc(lVar4,lVar6);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar6);
    func_0x000107c614ac(lVar7);
  }
  (*pcVar2)();
  return;
}



/* Entry: 101e0e67c; end: 101e0e73b;  */

void FUN_101e0e67c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101e0e73c; end: 101e0e83f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e0e73c(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar3 = *(code **)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0,pcVar3,*(undefined8 *)(unaff_x20 + 0x38));
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    func_0x000107c61428(lVar1 + 0x10,auStack_80,1,0);
    *(undefined1 *)(lVar1 + 0x10) = 1;
    func_0x000107c61428(lVar4 + 0x10,auStack_98,0,0);
    lVar4 = lVar4 + 0x10;
    func_0x000107c61618();
    lVar1 = _DAT_112e2fa90;
    if (lVar4 != 0) {
      func_0x000107c4b940(*(undefined8 *)(lVar4 + _DAT_112e2fa90));
      func_0x000107c61428(lVar4 + _DAT_112e2fa98,auStack_b0,0x21,0);
      func_0x0001010af1e4(uVar2,uVar5);
      func_0x000107c614a8(auStack_b0);
      func_0x000107c6142c(uVar5);
      func_0x000107c5d278(*(undefined8 *)(lVar4 + lVar1));
      func_0x000107c61170(lVar4);
    }
    (*pcVar3)(uVar6);
  }
  return;
}



/* Entry: 101e0e840; end: 101e0eb57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e0e840(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar2 = unaff_x20 + _DAT_112e2fb48;
  func_0x000107c61604(lVar2,param_1);
  if (*(code **)(unaff_x20 + _DAT_112e2fb38) != (code *)0x0) {
    (**(code **)(unaff_x20 + _DAT_112e2fb38))();
  }
  func_0x000108dfddac();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e0eb50);
    (*pcVar1)();
  }
  func_0x000107c5faec();
  func_0x000107c61170(lVar2);
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar9 = 0x30;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  lVar3 = lVar2;
  func_0x000108dfdddc();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e0eb54);
    (*pcVar1)();
  }
  lVar4 = lVar3;
  func_0x000107c5faec();
  func_0x000107c61170(lVar3);
  *(long *)(lVar2 + 0x20) = lVar4;
  *(undefined8 *)(lVar2 + 0x28) = uVar9;
  uVar5 = 0;
  func_0x0001038dabac(0);
  uVar9 = uVar5;
  func_0x000107c610f8();
  func_0x000107c610f8(uVar5);
  func_0x000107c61174();
  lVar2 = unaff_x20;
  func_0x0001038dabcc();
  uVar5 = uVar9;
  func_0x000107c614f0(uVar9);
  func_0x000107c61464(uVar9,uVar5,0x88,7);
  func_0x000107c5677c(lVar2);
  lVar3 = lVar2;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar9 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010f012520);
    func_0x000107c520f4(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar9);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e2fb50);
    *(long *)(unaff_x20 + _DAT_112e2fb50) = lVar2;
    func_0x000107c61174(lVar2);
    func_0x000107c61174();
    func_0x000107c61170(uVar9);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e2fb28);
    pcVar6 = "present(on:)";
    func_0x0001000c10c0("present(on:)");
    func_0x000107c61180();
    func_0x000107c4da88(uVar5);
    func_0x000107c61180();
    func_0x000107c615e8(pcVar6);
    puVar7 = &UNK_110489c50;
    func_0x000107c613fc(&UNK_110489c50,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,lVar2);
    func_0x000107c61170(lVar2);
    uStack_60 = 0x101e0eebc;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100b5fdac;
    puStack_68 = &UNK_110489c68;
    ppuVar8 = &puStack_80;
    puStack_58 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c61574(puStack_58);
    uVar9 = uVar5;
    func_0x000107c5c320(uVar5);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(uVar5);
    func_0x000107c3e924(uVar9);
    func_0x000107c61170(uVar9);
    func_0x000107c4f018(param_1);
    func_0x000107c61170(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e0eb58);
  (*pcVar1)();
}



/* Entry: 101e0eb58; end: 101e0ebcf;  */

void FUN_101e0eb58(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  puVar1 = (ulong *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (ulong *)0x0) {
    func_0x000107c4223c(param_1);
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar1) + 0x188))();
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 101e0ebd0; end: 101e0ec8b;  */

void FUN_101e0ebd0(code *param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
                  code *param_6)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  if (((param_3 != 0) && ((param_4 & 1) == 0)) && (param_5 != 0)) {
    func_0x000107c61174(param_5);
    func_0x000107c61174();
    func_0x000107c614b0(param_3);
    lVar1 = param_3;
    func_0x000107c5ed2c(param_3);
    lVar2 = lVar1;
    func_0x000107c5ed2c();
    func_0x000107c61170(lVar1);
    func_0x000107dffcbc(param_5,lVar2);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_5);
    func_0x000107c61170(lVar2);
    func_0x000107c614ac(param_3);
  }
  (*param_6)();
  return;
}



/* Entry: 101e0ec8c; end: 101e0ed23;  */

void FUN_101e0ec8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110489d08;
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(uVar1);
  func_0x000107c420a8(param_2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101e0ed24; end: 101e0ed83; -[_TtC31SCMemoriesOperaSaveServicesImpl36MemoriesOperaSaveProgressCoordinator init] */

void FUN_101e0ed24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesOperaSaveServicesImpl.MemoriesOperaSaveProgressCoordinator",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e0ed50);
  (*pcVar1)();
}



/* Entry: 101e0ed84; end: 101e0ee13; -[_TtC31SCMemoriesOperaSaveServicesImpl36MemoriesOperaSaveProgressCoordinator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101e0eda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e0edf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e0eda4) */
/* WARNING: Removing unreachable block (ram,0x000101e0edfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e0ed84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e2fb28));
  return;
}



/* Entry: 101e0ee14; end: 101e0ee33;  */

void FUN_101e0ee14(void)

{
  func_0x000107c61168(&PTR_PTR_1128053a0);
  return;
}



/* Entry: 101e0ee34; end: 101e0ee8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e0ee34(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_112e2fb60) = 1;
  func_0x000107c3f474(*(undefined8 *)(unaff_x20 + _DAT_112e2fb30));
  lVar1 = _DAT_112e2fb50;
  uVar2 = 0;
  if (*(long *)(unaff_x20 + _DAT_112e2fb50) != 0) {
    func_0x000107c420a8(*(long *)(unaff_x20 + _DAT_112e2fb50),param_2,1,0);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101e0ee90; end: 101e0eeb7; -[_TtC31SCMemoriesOperaSaveServicesImpl36MemoriesOperaSaveProgressCoordinator didTapCancel] */

void FUN_101e0ee90(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101e0ee34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e0eeb8; end: 101e0eedf; -[_TtC31SCMemoriesOperaSaveServicesImpl36MemoriesOperaSaveProgressCoordinator didTapRetry] */

void FUN_101e0eeb8(void)

{
  return;
}



/* Entry: 101e0eee0; end: 101e0efdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e0eee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_7;
  func_0x000107c610f8();
  func_0x000107c61614(lVar3 + _DAT_112e2fb48,0);
  *(undefined8 *)(lVar3 + _DAT_112e2fb50) = 0;
  lVar2 = _DAT_112e2fb58;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + lVar2) = puVar4;
  *(undefined1 *)(lVar3 + _DAT_112e2fb60) = 0;
  *(undefined8 *)(lVar3 + _DAT_112e2fb28) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112e2fb30) = param_2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112e2fb38);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112e2fb40);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  lStack_70 = lVar3;
  lStack_68 = param_7;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101e0efdc; end: 101e0f13f;  */

void FUN_101e0efdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  ppuVar4 = &puStack_70;
  lVar1 = param_1;
  func_0x000107c49aa8();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x000107c5cf40();
    func_0x000107c61180();
    if (lVar1 != 0) {
      puVar2 = &UNK_110489cc8;
      func_0x000107c613fc(&UNK_110489cc8,0x28,7);
      *(long *)(puVar2 + 0x10) = param_1;
      *(undefined8 *)(puVar2 + 0x18) = param_2;
      *(undefined8 *)(puVar2 + 0x20) = param_3;
      pcStack_50 = FUN_101e0f140;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1013c1f34;
      puStack_58 = &UNK_110489ce0;
      puStack_48 = puVar2;
      func_0x000107c60bc4(&puStack_70);
      puVar2 = puStack_48;
      func_0x000107c61174(param_1);
      func_0x000107c6157c(param_3);
      func_0x000107c61574(puVar2);
      func_0x000107c3dcb8(lVar1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar1);
      return;
    }
  }
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110489c90;
  pcStack_50 = (code *)param_2;
  puStack_48 = (undefined *)param_3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 101e0f140; end: 101e0f163;  */

void FUN_101e0f140(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar3 = &puStack_60;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110489d08;
  uStack_38 = uVar4;
  func_0x000107c60bc4(&puStack_60);
  uVar2 = uStack_38;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c420a8(uVar1);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 101e0f164; end: 101e0fd0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e0f164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  long *plVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long unaff_x20;
  undefined8 uVar17;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112e2fb90,&UNK_10da18830);
  uVar15 = param_2;
  func_0x000107c51694();
  func_0x000107c61180();
  uVar3 = uVar15;
  func_0x0001000bda74();
  func_0x000107c61170(uVar15);
  func_0x0001000285a8(0x112d51878,&UNK_10d9186c0);
  uVar15 = param_3;
  func_0x000107c4cb6c();
  func_0x000107c61180();
  uVar4 = uVar15;
  func_0x0001000bda74();
  func_0x000107c61170(uVar15);
  func_0x0001000285a8(0x112d51728,&UNK_10d918550);
  uVar15 = param_4;
  func_0x000107c4cd6c();
  func_0x000107c61180();
  uVar5 = uVar15;
  func_0x0001000bda74();
  func_0x000107c61170(uVar15);
  func_0x0001000285a8(0x112e2fb98,&UNK_10da84c50);
  uVar15 = param_5;
  func_0x000107c421c8();
  func_0x000107c61180();
  uVar6 = uVar15;
  func_0x0001000bda74();
  func_0x000107c61170(uVar15);
  lVar7 = 0;
  func_0x000101e0fed0();
  func_0x000107c613fc();
  puVar8 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar7 + 0x10) = puVar8;
  func_0x0001000285a8(0x112d51708,&UNK_10d918530);
  func_0x000107c6157c(lVar7);
  uVar15 = param_7;
  func_0x000107c4cca8();
  func_0x000107c61180();
  uVar9 = uVar15;
  func_0x0001000bda74();
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_6 + _DAT_1130806b8);
  puVar8 = &UNK_110489d40;
  func_0x000107c613fc(&UNK_110489d40,0x18,7);
  *(undefined8 *)(puVar8 + 0x10) = param_8;
  func_0x0001000285a8(0x112e2fba0,&UNK_10da18838);
  func_0x000107c613fc();
  func_0x000107c6157c(lVar7);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar17);
  func_0x000107c6157c(uVar9);
  func_0x000107c61174();
  uVar15 = 0x101e0fd84;
  func_0x0001000bdd8c(0x101e0fd84,puVar8);
  lVar10 = 0;
  FUN_101e0e01c();
  lVar11 = lVar10;
  func_0x000107c610f8();
  *(undefined8 *)(lVar11 + _DAT_112e2fad8) = 0;
  lVar2 = _DAT_112e2fa90;
  puVar8 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar11 + lVar2) = puVar8;
  *(undefined **)(lVar11 + _DAT_112e2fa98) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(lVar11 + _DAT_112e2fab0) = uVar3;
  *(undefined8 *)(lVar11 + _DAT_112e2faa0) = uVar4;
  *(undefined8 *)(lVar11 + _DAT_112e2fab8) = uVar5;
  *(undefined8 *)(lVar11 + _DAT_112e2fa88) = uVar6;
  *(long *)(lVar11 + _DAT_112e2fad0) = lVar7;
  puVar8 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c6157c(lVar7);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c453e4();
  *(undefined **)(lVar11 + _DAT_112e2fae0) = puVar8;
  puVar8 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar11 + _DAT_112e2fae8) = puVar8;
  *(undefined8 *)(lVar11 + _DAT_112e2fac0) = uVar17;
  *(undefined8 *)(lVar11 + _DAT_112e2fac8) = uVar9;
  *(undefined8 *)(lVar11 + _DAT_112e2faf0) = uVar15;
  plVar13 = &lStack_88;
  lStack_88 = lVar11;
  lStack_80 = lVar10;
  func_0x000107c61154(plVar13,PTR_s_init_1125d9248);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(lVar7);
  puVar16 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar8 = &UNK_110489d68;
  func_0x000107c613fc(&UNK_110489d68,0x18,7);
  *(long **)(puVar8 + 0x10) = plVar13;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x101e0fe4c;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  uStack_a8 = 0x101e0fe58;
  puStack_a0 = &UNK_110489d80;
  ppuVar12 = &puStack_b8;
  puStack_90 = puVar8;
  func_0x000107c60bc4(ppuVar12);
  puVar8 = puStack_90;
  func_0x000107c61174();
  func_0x000107c61574(puVar8);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar12);
  puVar14 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar8 = &UNK_110489db8;
  func_0x000107c613fc(&UNK_110489db8,0x18,7);
  *(long *)(puVar8 + 0x10) = lVar7;
  uStack_98 = 0x101e0fdac;
  puStack_b8 = puVar1;
  uStack_b0 = 0x42000000;
  uStack_a8 = 0x101e0fe5c;
  puStack_a0 = &UNK_110489dd0;
  ppuVar12 = &puStack_b8;
  puStack_90 = puVar8;
  func_0x000107c60bc4();
  puVar8 = puStack_90;
  func_0x000107c6157c(lVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar12);
  uVar15 = 0;
  func_0x0001002cc928();
  func_0x000107c610f8();
  func_0x000103a71724(puVar16,puVar14,uVar15);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(plVar13);
  func_0x000107c61574(uVar9);
  func_0x000107c61578(lVar7,2);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar3);
  *(undefined **)(unaff_x20 + 0x10) = puVar16;
  return;
}



/* Entry: 101e0fd0c; end: 101e0fd43;  */

void FUN_101e0fd0c(long param_1)

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



/* Entry: 101e0fd44; end: 101e0fd53;  */

void FUN_101e0fd44(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101e0fd54; end: 101e0fd77;  */

void FUN_101e0fd54(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e0fd78; end: 101e0fdb3;  */

void FUN_101e0fd78(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101e0fdb4; end: 101e0fe2f;  */

void FUN_101e0fdb4(undefined8 param_1)

{
  if (lRam0000000112e2fbd0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6922b4);
  return;
}



/* Entry: 101e0fe30; end: 101e0fe5f;  */

void FUN_101e0fe30(long param_1,long param_2)

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



/* Entry: 101e0fe60; end: 101e0fea3;  */

long FUN_101e0fe60(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Entry: 101e0fea4; end: 101e0feab; -[_TtC31SCMemoriesOperaSaveServicesImpl31MemoriesOperaSaveStatusObserver saveEvent] */

void FUN_101e0fea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 101e0feac; end: 101e0feef;  */

void FUN_101e0feac(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e0fef0; end: 101e0fef7; -[_TtC31SCMemoriesOperaSaveServicesImpl31MemoriesOperaSaveStatusObserver onOperaSnapSaveWithSaveState:] */

void FUN_101e0fef0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_next__112614028);
  return;
}



/* Entry: 101e0fef8; end: 101e0ff3b;  */

void FUN_101e0fef8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e0ff3c; end: 101e101eb;  */

void FUN_101e0ff3c(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  ulong uVar7;
  byte bStack_39;
  undefined8 uStack_38;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_38 = param_1;
  func_0x000107c614b0();
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  pbVar4 = &bStack_39;
  func_0x000107c6147c(pbVar4,&uStack_38,uVar3,&UNK_1106e3080,6);
  if ((int)pbVar4 == 0) {
    uVar3 = 0x4e574f4e4b4e55;
    uVar7 = 0xe700000000000000;
  }
  else {
    uVar1 = 0x800000010f0125b0;
    uVar5 = 0xd000000000000028;
    if (bStack_39 != 3) {
      uVar1 = 0xed000059454b5f52;
      uVar5 = 0x455453414d5f4f4e;
    }
    uVar7 = 0x800000010f0125e0;
    uVar3 = 0xd000000000000011;
    if (bStack_39 != 2) {
      uVar7 = uVar1;
      uVar3 = uVar5;
    }
    uVar5 = 0xd000000000000017;
    pcVar2 = "_CLOUD_SYNC_ADD_SNAP_ENTITY";
    if (bStack_39 != 0) {
      uVar5 = 0xd000000000000011;
      pcVar2 = "FAILED_TO_ENCRYPT";
    }
    if (bStack_39 < 2) {
      uVar3 = uVar5;
      uVar7 = (ulong)pcVar2 | 0x8000000000000000;
    }
  }
  func_0x000107c5fadc(uVar3,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x0001058db120(uVar6,uVar3,1);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101e101ec; end: 101e1020b;  */

void FUN_101e101ec(void)

{
  long *plVar1;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(*unaff_x20 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108bd7a0,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 101e1020c; end: 101e1022b;  */

void FUN_101e1020c(void)

{
  FUN_101e0ff3c();
  return;
}



/* Entry: 101e1022c; end: 101e1024b;  */

void FUN_101e1022c(void)

{
  long *plVar1;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(*unaff_x20 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108bd890,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 101e1024c; end: 101e1026b;  */

void FUN_101e1024c(void)

{
  func_0x000101e10094();
  return;
}



/* Entry: 101e1026c; end: 101e102cb; -[_TtC39SCMemoriesSnapDocEncryptionServicesImpl36MemoriesSnapDocEncryptionManagerImpl init] */

void FUN_101e1026c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesSnapDocEncryptionServicesImpl.MemoriesSnapDocEncryptionManagerImpl"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e10298);
  (*pcVar1)();
}



/* Entry: 101e102cc; end: 101e10313; -[_TtC39SCMemoriesSnapDocEncryptionServicesImpl36MemoriesSnapDocEncryptionManagerImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101e102e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e102ec) */
/* WARNING: Removing unreachable block (ram,0x0001000834e4) */
/* WARNING: Removing unreachable block (ram,0x0001000834fc) */
/* WARNING: Removing unreachable block (ram,0x0001000834f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e102cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2fdb8));
  return;
}



/* Entry: 101e10314; end: 101e10333;  */

void FUN_101e10314(void)

{
  func_0x000107c61168(&PTR_PTR_112805498);
  return;
}



/* Entry: 101e10334; end: 101e103d7;  */

undefined * FUN_101e10334(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined *puStack_28;
  
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e103d8);
    (*pcVar1)();
  }
  lVar2 = unaff_x20;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(unaff_x20);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 != 0) {
    puStack_28 = (undefined *)0x0;
    uVar3 = 0;
    FUN_101e131ec(0,0x112d55598,&PTR_PTR_1126b25d0);
    func_0x000107c5fc50(lVar2,&puStack_28,uVar3);
    func_0x000107c61170(lVar2);
    if (puStack_28 != (undefined *)0x0) {
      puVar4 = puStack_28;
    }
  }
  return puVar4;
}



/* Entry: 101e103d8; end: 101e10433; -[_TtC39SCMemoriesSnapDocEncryptionServicesImpl36MemoriesSnapDocEncryptionManagerImpl isMasterKeyEncryptedSnapDoc:] */

uint FUN_101e103d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101e127f0(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101e10434; end: 101e107cb;  */

void FUN_101e10434(long *param_1,long *param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  
  lVar7 = *param_2;
  lVar2 = lVar7;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e10784);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c44978();
  func_0x000107c61170(lVar2);
  lVar2 = lVar7;
  func_0x000107c4c930();
  func_0x000107c61180();
  if ((int)lVar3 == 0) {
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e1078c);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c44850();
    func_0x000107c61170(lVar2);
    lVar2 = lVar7;
    func_0x000107c4c930();
    func_0x000107c61180();
    if ((int)lVar3 == 0) {
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e107a8);
        (*pcVar1)();
      }
      lVar3 = lVar2;
      func_0x000107c4484c();
      func_0x000107c61170(lVar2);
      if ((int)lVar3 != 0) {
        func_0x000107c4c930();
        func_0x000107c61180();
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e107c0);
          (*pcVar1)();
        }
        lVar2 = lVar7;
        func_0x000107c427c8();
        func_0x000107c61180();
        func_0x000107c61170();
        if (lVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e107c4);
          (*pcVar1)();
        }
        FUN_101e107cc();
        func_0x000107c61170(lVar2);
        if (lVar7 != 0) {
          func_0x000107c61174();
          lVar2 = lVar7;
          func_0x000107c4a8c4();
          func_0x000107c61180();
          if (lVar2 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101e107c8);
            (*pcVar1)();
          }
          lVar3 = lVar2;
          func_0x000107c5ee30();
          lVar5 = param_3;
          func_0x000107c61170(lVar2);
          lVar2 = lVar7;
          func_0x000107c4a804();
          func_0x000107c61180();
          if (lVar2 != 0) {
            lVar4 = lVar2;
            func_0x000107c5ee30();
            func_0x000107c61170(lVar7);
            func_0x000107c61170(lVar7);
            func_0x000107c61170(lVar2);
            *param_1 = lVar3;
            param_1[1] = param_3;
            param_1[2] = lVar4;
            param_1[3] = lVar5;
            *(undefined1 *)(param_1 + 4) = 0;
            return;
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e107cc);
          (*pcVar1)();
        }
      }
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      uVar6 = 4;
    }
    else {
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e107a4);
        (*pcVar1)();
      }
      lVar3 = lVar2;
      func_0x000107c427cc();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e107ac);
        (*pcVar1)();
      }
      lVar2 = lVar3;
      func_0x000107c4a8c4();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e107b0);
        (*pcVar1)();
      }
      lVar3 = lVar2;
      func_0x000107c5ee30();
      lVar5 = param_3;
      func_0x000107c61170(lVar2);
      func_0x000107c4c930();
      func_0x000107c61180();
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e107b4);
        (*pcVar1)();
      }
      lVar2 = lVar7;
      func_0x000107c427cc();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e107b8);
        (*pcVar1)();
      }
      lVar7 = lVar2;
      func_0x000107c4a804();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e107bc);
        (*pcVar1)();
      }
      lVar2 = lVar7;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar7);
      *param_1 = lVar3;
      param_1[1] = param_3;
      param_1[2] = lVar2;
      param_1[3] = lVar5;
      uVar6 = 1;
    }
  }
  else {
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e10788);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c4c570();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e10790);
      (*pcVar1)();
    }
    lVar2 = lVar3;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e10794);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c5ee30();
    lVar5 = param_3;
    func_0x000107c61170(lVar2);
    func_0x000107c4c930();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e10798);
      (*pcVar1)();
    }
    lVar2 = lVar7;
    func_0x000107c4c570();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e1079c);
      (*pcVar1)();
    }
    lVar7 = lVar2;
    func_0x000107c4a804();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e107a0);
      (*pcVar1)();
    }
    lVar2 = lVar7;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar7);
    *param_1 = lVar3;
    param_1[1] = param_3;
    param_1[2] = lVar2;
    param_1[3] = lVar5;
    uVar6 = 2;
  }
  *(undefined1 *)(param_1 + 4) = uVar6;
  return;
}



/* Entry: 101e107cc; end: 101e10d03;  */

undefined * FUN_101e107cc(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x20;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = unaff_x20;
  func_0x000107c4a8c4();
  func_0x000107c61180();
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e10aec);
    (*pcVar1)();
  }
  uVar3 = uVar2;
  func_0x000107c5ee30();
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  func_0x000101286fac(uVar3,param_2);
  func_0x00010006c090(uVar3);
  if (((uint)uVar2 & 0xff00) == 0x100 || ((uint)uVar2 & 0xff) != 10) {
    uVar4 = unaff_x20;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e10af4);
      (*pcVar1)();
    }
    uVar2 = uVar4;
    func_0x000107c5ee30();
    uVar3 = param_2;
    func_0x000107c61170(uVar4);
  }
  else {
    uVar2 = unaff_x20;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e10af8);
      (*pcVar1)();
    }
    uVar3 = uVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar2);
    func_0x000101287044(&uStack_70,1,uVar3,param_2);
    uVar2 = uStack_70;
    param_2 = uStack_68;
  }
  uVar4 = unaff_x20;
  func_0x000107c4a804();
  func_0x000107c61180();
  if (uVar4 != 0) {
    uVar5 = uVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar4);
    uVar4 = uVar5;
    func_0x000101286fac(uVar5,uVar3);
    func_0x00010006c090(uVar5);
    if ((((uint)uVar4 & 0xff00) == 0x100) || (((uint)uVar4 & 0xff) != 10)) {
      func_0x000107c4a804();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e10afc);
        (*pcVar1)();
      }
      uVar4 = unaff_x20;
      func_0x000107c5ee30();
      func_0x000107c61170(unaff_x20);
    }
    else {
      func_0x000107c4a804();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e10b00);
        (*pcVar1)();
      }
      uVar4 = unaff_x20;
      func_0x000107c5ee30();
      func_0x000107c61170(unaff_x20);
      func_0x000101287044(&uStack_70,1,uVar4,uVar3);
      uVar4 = uStack_70;
      uVar3 = uStack_68;
    }
    uVar5 = uVar2;
    uVar9 = param_2;
    func_0x000107c5ee04(uVar2,param_2,0);
    if (uVar9 >> 0x3c < 0xf) {
      uVar7 = uVar4;
      uVar10 = uVar3;
      func_0x000107c5ee04(uVar4,uVar3,0);
      if (uVar10 >> 0x3c < 0xf) {
        puVar6 = PTR_PTR_1126d5750;
        func_0x000107c610f8(PTR_PTR_1126d5750);
        func_0x000107c453e4();
        func_0x000107c61180();
        uVar8 = uVar5;
        func_0x000107c5ee20(uVar5,uVar9);
        func_0x000107c559a4(puVar6);
        func_0x000107c61170(uVar8);
        uVar8 = uVar7;
        func_0x000107c5ee20(uVar7,uVar10);
        func_0x000107c55938(puVar6);
        func_0x000107c61170(puVar6);
        func_0x0001000b44c0(uVar7,uVar10);
        func_0x0001000b44c0(uVar5,uVar9);
        func_0x000107c61170(uVar8);
        func_0x00010006c090(uVar4,uVar3);
        func_0x00010006c090(uVar2,param_2);
      }
      else {
        func_0x00010006c090(uVar4,uVar3);
        func_0x00010006c090(uVar2,param_2);
        func_0x0001000b44c0(uVar5,uVar9);
        puVar6 = (undefined *)0x0;
      }
    }
    else {
      func_0x00010006c090(uVar4,uVar3);
      func_0x00010006c090(uVar2,param_2);
      puVar6 = (undefined *)0x0;
    }
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e10af0);
  (*pcVar1)();
}



/* Entry: 101e10d04; end: 101e10dbf; -[_TtC39SCMemoriesSnapDocEncryptionServicesImpl36MemoriesSnapDocEncryptionManagerImpl getEncryptionInfoFromSnapDoc:] */

void FUN_101e10d04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000101e10b00(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e10dc0; end: 101e10f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e10dc0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lStack_58;
  
  lVar6 = param_1;
  func_0x000107c44978();
  if ((int)lVar6 == 0) {
    lVar6 = param_1;
    func_0x000107c44850();
    if ((int)lVar6 != 0) {
      lVar6 = param_1;
      func_0x000107c427cc();
      func_0x000107c61180();
      if (lVar6 != 0) {
        return;
      }
    }
    lVar6 = param_1;
    func_0x000107c4484c();
    if ((int)lVar6 != 0) {
      func_0x000107c427c8();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101e10f60);
        (*pcVar5)();
      }
      FUN_101e107cc();
      func_0x000107c61170(param_1);
    }
  }
  else {
    func_0x0001000d224c(&lStack_58);
    if (lStack_58 != 0) {
      lVar6 = lStack_58;
      func_0x000107c4c560();
      func_0x000107c61180();
      func_0x000107c615e8(lStack_58);
      if (lVar6 != 0) {
        uVar1 = *(undefined8 *)(lVar6 + _DAT_11302c658);
        uVar3 = ((undefined8 *)(lVar6 + _DAT_11302c658))[1];
        uVar2 = *(undefined8 *)(lVar6 + _DAT_11302c660);
        uVar4 = ((undefined8 *)(lVar6 + _DAT_11302c660))[1];
        func_0x00010006c00c(uVar1,uVar3);
        func_0x00010006c00c(uVar2,uVar4);
        func_0x000107c4c570();
        func_0x000107c61180();
        if (param_1 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101e10f5c);
          (*pcVar5)();
        }
        func_0x000101e12adc();
        func_0x000107c61170(lVar6);
        func_0x00010006c090(uVar1,uVar3);
        func_0x00010006c090(uVar2,uVar4);
        func_0x000107c61170(param_1);
      }
    }
  }
  return;
}



/* Entry: 101e10f60; end: 101e10f73; -[_TtC39SCMemoriesSnapDocEncryptionServicesImpl36MemoriesSnapDocEncryptionManagerImpl generateNewEncryptionInfo] */

void FUN_101e10f60(void)

{
  FUN_101e12de8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101e10f74; end: 101e11783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e10f74(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  long unaff_x20;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined1 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *apuStack_80 [4];
  undefined8 uStack_58;
  
  lVar1 = unaff_x20 + _DAT_112e2fdc8;
  uVar7 = *(undefined8 *)(lVar1 + 0x18);
  lVar4 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar7);
  (**(code **)(lVar4 + 0x20))(uVar7,lVar4);
  func_0x000107c40794(param_1);
  func_0x000107c60234(apuStack_80);
  func_0x000107c615e8(param_1);
  uVar7 = 0;
  FUN_101e131ec(0,0x112d50c78,&PTR_PTR_1126b25c0);
  puVar8 = &uStack_58;
  func_0x000107c6147c(puVar8,apuStack_80,PTR___sypN_11034f1a8 + 8,uVar7,6);
  if ((int)puVar8 == 0) {
    FUN_101e125f4();
    puVar12 = &UNK_1106e3080;
    func_0x000107c613f8(&UNK_1106e3080,puVar8,0,0);
    *(undefined1 *)puVar8 = 0;
    func_0x000107c61654();
  }
  else {
    FUN_101e10334();
    puVar23 = (undefined8 *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((ulong)puVar8 >> 0x3e == 0) {
      puVar25 = (undefined8 *)puVar23[2];
      puVar22 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar25 = puVar23;
      if ((undefined8 *)0x7fffffffffffffff < puVar8) {
        puVar25 = puVar8;
      }
      func_0x000107c60480();
      puVar22 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = (undefined *)puVar22;
    if (puVar25 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
      do {
        while( true ) {
          if (((ulong)puVar8 & 0xc000000000000001) == 0) {
            if ((undefined8 *)puVar23[2] <= puVar11) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x101e111d8);
              (*pcVar6)();
            }
            puVar9 = (undefined8 *)puVar8[(long)((long)puVar11 + 4)];
            func_0x000107c61174();
          }
          else {
            puVar9 = puVar11;
            FUN_101e12634(puVar11,puVar8,&PTR_PTR_1126b25d0,0x112d55598);
          }
          if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101e111d4);
            (*pcVar6)();
          }
          puVar26 = (undefined8 *)((long)puVar11 + 1);
          func_0x000107c61174();
          puVar10 = puVar9;
          func_0x000107c4c930();
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar9);
          if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101e111dc);
            (*pcVar6)();
          }
          puVar9 = puVar10;
          func_0x000107c44850();
          if ((((ulong)puVar9 & 1) == 0) &&
             (puVar9 = puVar10, func_0x000107c4484c(), ((ulong)puVar9 & 1) == 0)) break;
          puVar11 = puVar22;
          func_0x000107c61558();
          apuStack_80[0] = puVar22;
          if (((ulong)puVar11 & 1) == 0) {
            func_0x000101df6b84(0,puVar22[2] + 1,1);
          }
          uVar2 = apuStack_80[0][2];
          if ((ulong)apuStack_80[0][3] >> 1 <= uVar2) {
            func_0x000101df6b84(1 < (ulong)apuStack_80[0][3],uVar2 + 1,1);
          }
          apuStack_80[0][2] = uVar2 + 1;
          apuStack_80[0][uVar2 + 4] = puVar10;
          puVar22 = apuStack_80[0];
          puVar11 = puVar26;
          if (puVar26 == puVar25) goto LAB_101e111f8;
        }
        func_0x000107c61170(puVar10);
        puVar11 = (undefined8 *)((long)puVar11 + 1);
      } while (puVar26 != puVar25);
    }
LAB_101e111f8:
    func_0x000107c6142c();
    if (((long)puVar22 < 0) || (((ulong)puVar22 >> 0x3e & 1) != 0)) {
      puVar23 = puVar22;
      func_0x000107c60480();
      puVar8 = puVar23;
    }
    else {
      puVar23 = (undefined8 *)puVar22[2];
    }
    if (puVar23 == (undefined8 *)0x0) {
LAB_101e11704:
      func_0x000107c61574(puVar22);
      uVar7 = *(undefined8 *)(lVar1 + 0x18);
      lVar4 = *(long *)(lVar1 + 0x20);
      func_0x0001000a8868(lVar1,uVar7);
      (**(code **)(lVar4 + 0x28))(uVar7,lVar4);
      return;
    }
    func_0x0001000d224c(apuStack_80);
    puVar25 = apuStack_80[0];
    if (apuStack_80[0] != (undefined8 *)0x0) {
      puVar11 = apuStack_80[0];
      func_0x000107c4c560();
      func_0x000107c61180();
      func_0x000107c615e8();
      puVar8 = puVar25;
      if (puVar11 != (undefined8 *)0x0) {
        uVar7 = *(undefined8 *)((long)puVar11 + _DAT_11302c658);
        uVar5 = ((undefined8 *)((long)puVar11 + _DAT_11302c658))[1];
        uVar3 = *(undefined8 *)((long)puVar11 + _DAT_11302c660);
        puVar8 = (undefined8 *)((undefined8 *)((long)puVar11 + _DAT_11302c660))[1];
        func_0x00010006c00c(uVar7);
        puVar25 = puVar8;
        func_0x00010006c00c(uVar3,puVar8);
        func_0x000107c61170(puVar11);
        puVar24 = (undefined1 *)0x0;
        do {
          if (((ulong)puVar22 & 0xc000000000000001) == 0) {
            if ((undefined1 *)puVar22[2] <= puVar24) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x101e11760);
              (*pcVar6)();
            }
            puVar13 = (undefined1 *)puVar22[(long)(puVar24 + 4)];
            func_0x000107c61174();
            puVar11 = puVar25;
          }
          else {
            puVar13 = puVar24;
            puVar11 = puVar22;
            FUN_101e12634(puVar24,puVar22,&PTR_PTR_1126b25c8,0x112e2f0c8);
          }
          puVar9 = (undefined8 *)(puVar24 + 1);
          if (SCARRY8((long)puVar24,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101e1175c);
            (*pcVar6)();
          }
          puVar14 = puVar13;
          func_0x000107c44850();
          if ((int)puVar14 == 0) {
            puVar14 = puVar13;
            func_0x000107c427c8();
            func_0x000107c61180();
            if (puVar14 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x101e11784);
              (*pcVar6)();
            }
            puVar15 = puVar14;
            FUN_101e107cc();
            func_0x000107c61170(puVar14);
          }
          else {
            puVar15 = puVar13;
            func_0x000107c427cc();
            func_0x000107c61180();
          }
          if (puVar15 == (undefined1 *)0x0) {
LAB_101e1164c:
            puVar24 = puVar15;
            FUN_101e125f4();
            puVar12 = &UNK_1106e3080;
            func_0x000107c613f8(&UNK_1106e3080,puVar24,0,0);
            *puVar24 = 2;
            func_0x000107c61654();
            func_0x000107c61170(puVar15);
            func_0x00010006c090(uVar7,uVar5);
            func_0x00010006c090(uVar3,puVar8);
            func_0x000107c61170(puVar13);
            func_0x000107c61170(uStack_58);
            goto LAB_101e116b4;
          }
          puVar14 = puVar15;
          func_0x000107c61174();
          puVar16 = puVar14;
          func_0x000107c4a8c4();
          func_0x000107c61180();
          if (puVar16 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101e1177c);
            (*pcVar6)();
          }
          puVar17 = puVar16;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar16);
          puVar16 = puVar17;
          func_0x000107c5ee20(puVar17,puVar11);
          uVar18 = uVar7;
          func_0x000107c5ee20(uVar7,uVar5);
          uVar19 = uVar3;
          puVar25 = puVar8;
          func_0x000107c5ee20(uVar3);
          puVar20 = puVar16;
          func_0x000107c51bb8();
          func_0x000107c61180();
          func_0x000107c61170(puVar16);
          func_0x000107c61170(uVar18);
          func_0x000107c61170(uVar19);
          if (puVar20 == (undefined1 *)0x0) {
            func_0x00010006c090(puVar17,puVar11);
            func_0x000107c61170(puVar14);
            goto LAB_101e1164c;
          }
          puVar16 = puVar20;
          func_0x000107c5ee30(puVar20);
          func_0x000107c61170(puVar20);
          func_0x00010006c090(puVar17,puVar11);
          puVar17 = puVar14;
          func_0x000107c4a804();
          func_0x000107c61180();
          if (puVar17 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101e11780);
            (*pcVar6)();
          }
          puVar20 = puVar17;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar17);
          puVar17 = puVar20;
          func_0x000107c5ee20(puVar20,puVar11);
          uVar18 = uVar7;
          func_0x000107c5ee20(uVar7,uVar5);
          uVar19 = uVar3;
          puVar10 = puVar8;
          func_0x000107c5ee20(uVar3,puVar8);
          puVar21 = puVar17;
          func_0x000107c51bb8();
          func_0x000107c61180();
          func_0x000107c61170(puVar17);
          func_0x000107c61170(uVar18);
          func_0x000107c61170(uVar19);
          if (puVar21 == (undefined1 *)0x0) {
            func_0x00010006c090(puVar20,puVar11);
            func_0x000107c61170(puVar14);
            func_0x00010006c090(puVar16,puVar25);
            goto LAB_101e1164c;
          }
          puVar15 = puVar21;
          func_0x000107c5ee30(puVar21);
          func_0x000107c61170(puVar21);
          func_0x00010006c090(puVar20,puVar11);
          puVar12 = PTR_PTR_1126d5750;
          func_0x000107c610f8(PTR_PTR_1126d5750);
          func_0x000107c453e4();
          func_0x000107c61180();
          puVar17 = puVar16;
          func_0x000107c5ee20(puVar16,puVar25);
          func_0x000107c559a4(puVar12);
          func_0x000107c61170(puVar17);
          puVar17 = puVar15;
          func_0x000107c5ee20(puVar15,puVar10);
          func_0x000107c55938(puVar12);
          func_0x000107c61170(puVar12);
          func_0x00010006c090(puVar15,puVar10);
          func_0x00010006c090(puVar16);
          func_0x000107c61170(puVar17);
          func_0x000107c56318(puVar13);
          func_0x000107c54578(puVar13);
          func_0x000107c54574(puVar13);
          func_0x000107c61170(puVar13);
          func_0x000107c61170(puVar14);
          func_0x000107c61170(puVar14);
          func_0x000107c61170(puVar12);
          puVar24 = puVar24 + 1;
        } while (puVar9 != puVar23);
        func_0x00010006c090(uVar7,uVar5);
        func_0x00010006c090(uVar3,puVar8);
        goto LAB_101e11704;
      }
    }
    FUN_101e125f4();
    puVar12 = &UNK_1106e3080;
    func_0x000107c613f8(&UNK_1106e3080,puVar8,0,0);
    *(undefined1 *)puVar8 = 4;
    func_0x000107c61654();
    func_0x000107c61170(uStack_58);
LAB_101e116b4:
    func_0x000107c61574(puVar22);
  }
  uVar7 = *(undefined8 *)(lVar1 + 0x18);
  lVar4 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar7);
  (**(code **)(lVar4 + 0x30))(puVar12,uVar7,lVar4);
  func_0x000107c61654();
  return;
}



/* Entry: 101e11784; end: 101e117a7; -[_TtC39SCMemoriesSnapDocEncryptionServicesImpl36MemoriesSnapDocEncryptionManagerImpl masterKeyEncryptSnapDoc:error:] */

/* WARNING: Removing unreachable block (ram,0x000101e12448) */
/* WARNING: Removing unreachable block (ram,0x000101e1247c) */
/* WARNING: Removing unreachable block (ram,0x000101e1244c) */

void FUN_101e11784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101e10f74(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e117a8; end: 101e1185f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e117a8(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  long lVar7;
  
  lVar1 = _DAT_112e2fdc8;
  lVar7 = *(long *)(unaff_x22 + 0x40);
  *(long *)(unaff_x22 + 0x48) = _DAT_112e2fdc8;
  lVar1 = lVar7 + lVar1;
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar4 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar3);
  (**(code **)(lVar4 + 0x20))(uVar3,lVar4);
  lVar7 = lVar7 + _DAT_112e2fdc0;
  uVar3 = *(undefined8 *)(lVar7 + 0x18);
  lVar1 = *(long *)(lVar7 + 0x20);
  func_0x0001000a8868(lVar7,uVar3);
  piVar6 = *(int **)(lVar1 + 8);
  iVar2 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101e11860;
                    /* WARNING: Could not recover jumptable at 0x000101e1185c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar6))(uVar3,lVar1);
  return;
}



/* Entry: 101e11860; end: 101e118c7;  */

void FUN_101e11860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x58) = param_1;
  *(undefined8 *)(lVar2 + 0x60) = param_2;
  *(undefined8 *)(lVar2 + 0x68) = param_3;
  *(undefined8 *)(lVar2 + 0x70) = param_4;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101e118c8;
  }
  else {
    pcVar1 = FUN_101e11e38;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e118c8; end: 101e11e37;  */

void FUN_101e118c8(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  long unaff_x22;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c40794(uVar11);
  func_0x000107c60234(unaff_x22 + 0x10);
  func_0x000107c615e8(uVar11);
  uVar11 = 0;
  FUN_101e131ec(0,0x112d50c78,&PTR_PTR_1126b25c0);
  puVar15 = (undefined1 *)(unaff_x22 + 0x30);
  func_0x000107c6147c(puVar15,unaff_x22 + 0x10,PTR___sypN_11034f1a8 + 8,uVar11,6);
  if ((int)puVar15 == 0) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
    FUN_101e125f4();
    puVar14 = &UNK_1106e3080;
    func_0x000107c613f8(&UNK_1106e3080,puVar15,0,0);
    *puVar15 = 0;
    func_0x000107c61654();
    func_0x00010006c090(uVar2,uVar4);
    func_0x00010006c090(uVar11,uVar5);
LAB_101e11d28:
    lVar3 = *(long *)(unaff_x22 + 0x40) + *(long *)(unaff_x22 + 0x48);
    uVar11 = *(undefined8 *)(lVar3 + 0x18);
    lVar8 = *(long *)(lVar3 + 0x20);
    func_0x0001000a8868(lVar3,uVar11);
    (**(code **)(lVar8 + 0x30))(puVar14,uVar11,lVar8);
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101e11d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x30);
  FUN_101e10334();
  puVar18 = (undefined1 *)((ulong)puVar15 & 0xffffffffffffff8);
  if ((ulong)puVar15 >> 0x3e == 0) {
    puVar17 = *(undefined1 **)(puVar18 + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar17 = puVar18;
    if ((undefined1 *)0x7fffffffffffffff < puVar15) {
      puVar17 = puVar15;
    }
    func_0x000107c60480();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
  if (puVar17 != (undefined1 *)0x0) {
    puVar13 = (undefined1 *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar15 & 0xc000000000000001) == 0) {
          if (*(undefined1 **)(puVar18 + 0x10) <= puVar13) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x101e11af8);
            (*pcVar10)();
          }
          puVar12 = *(undefined1 **)(puVar15 + (long)puVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar12 = puVar13;
          FUN_101e12634(puVar13,puVar15,&PTR_PTR_1126b25d0,0x112d55598);
        }
        if (SCARRY8((long)puVar13,1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x101e11af4);
          (*pcVar10)();
        }
        puVar19 = puVar13 + 1;
        func_0x000107c61174();
        puVar16 = puVar12;
        func_0x000107c4c930();
        func_0x000107c61180();
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar12);
        if (puVar16 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x101e11afc);
          (*pcVar10)();
        }
        puVar12 = puVar16;
        func_0x000107c44850();
        if ((((ulong)puVar12 & 1) == 0) &&
           (puVar12 = puVar16, func_0x000107c4484c(), ((ulong)puVar12 & 1) == 0)) break;
        puVar13 = puVar9;
        func_0x000107c61558();
        if (((ulong)puVar13 & 1) == 0) {
          func_0x000101df6b84(0,*(long *)(puVar9 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(puVar9 + 0x10);
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
          func_0x000101df6b84(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
        *(undefined1 **)(puVar9 + uVar1 * 8 + 0x20) = puVar16;
        puVar13 = puVar19;
        if (puVar19 == puVar17) goto LAB_101e11b18;
      }
      func_0x000107c61170(puVar16);
      puVar13 = puVar13 + 1;
    } while (puVar19 != puVar17);
  }
LAB_101e11b18:
  func_0x000107c6142c(puVar15);
  if (((long)puVar9 < 0) || (((ulong)puVar9 >> 0x3e & 1) != 0)) {
    puVar15 = puVar9;
    func_0x000107c60480();
  }
  else {
    puVar15 = *(undefined1 **)(puVar9 + 0x10);
  }
  if (puVar15 != (undefined1 *)0x0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x00010006c00c(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
    func_0x00010006c00c(uVar2,uVar5);
    puVar18 = (undefined1 *)0x0;
    do {
      if (((ulong)puVar9 & 0xc000000000000001) == 0) {
        if (*(undefined1 **)(puVar9 + 0x10) <= puVar18) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x101e11e20);
          (*pcVar10)();
        }
        puVar17 = *(undefined1 **)(puVar9 + (long)puVar18 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar17 = puVar18;
        FUN_101e12634(puVar18,puVar9,&PTR_PTR_1126b25c8,0x112e2f0c8);
      }
      puVar13 = puVar18 + 1;
      if (SCARRY8((long)puVar18,1)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x101e11e1c);
        (*pcVar10)();
      }
      puVar12 = puVar17;
      func_0x000107c44850();
      if ((int)puVar12 == 0) {
        puVar12 = puVar17;
        func_0x000107c427c8();
        func_0x000107c61180();
        if (puVar12 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x101e11e38);
          (*pcVar10)();
        }
        puVar16 = puVar12;
        FUN_101e107cc();
        func_0x000107c61170(puVar12);
      }
      else {
        puVar16 = puVar17;
        func_0x000107c427cc();
        func_0x000107c61180();
      }
      puVar12 = *(undefined1 **)(unaff_x22 + 0x68);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
      if (puVar16 == (undefined1 *)0x0) {
        func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
        func_0x00010006c090(puVar12,uVar2);
        puVar16 = (undefined1 *)0x0;
LAB_101e11cb8:
        uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
        uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
        uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
        FUN_101e125f4();
        puVar14 = &UNK_1106e3080;
        func_0x000107c613f8(&UNK_1106e3080,puVar12,0,0);
        *puVar12 = 2;
        func_0x000107c61654();
        func_0x000107c61170(puVar16);
        func_0x00010006c090(uVar5,uVar6);
        func_0x00010006c090(uVar2,uVar4);
        func_0x000107c61574(puVar9);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(puVar17);
        goto LAB_101e11d28;
      }
      func_0x000107c61174();
      puVar12 = puVar16;
      FUN_101e12f6c();
      if (puVar12 == (undefined1 *)0x0) {
        uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
        uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
        func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
        func_0x00010006c090(uVar2,uVar5);
        puVar12 = puVar16;
        func_0x000107c61170();
        goto LAB_101e11cb8;
      }
      func_0x000107c56318(puVar17);
      func_0x000107c54578(puVar17);
      func_0x000107c54574(puVar17);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(puVar16);
      func_0x000107c61170(puVar16);
      func_0x000107c61170(puVar17);
      puVar18 = puVar18 + 1;
    } while (puVar13 != puVar15);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
    func_0x00010006c090(uVar2,uVar5);
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar3 = *(long *)(unaff_x22 + 0x40);
  lVar8 = *(long *)(unaff_x22 + 0x48);
  func_0x000107c61574(puVar9);
  lVar3 = lVar3 + lVar8;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  lVar8 = *(long *)(lVar3 + 0x20);
  func_0x0001000a8868(lVar3,uVar4);
  (**(code **)(lVar8 + 0x28))(uVar4,lVar8);
  func_0x00010006c090(uVar5,uVar7);
  func_0x00010006c090(uVar2,uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101e11e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar11);
  return;
}



/* Entry: 101e11e38; end: 101e11eab;  */

void FUN_101e11e38(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar1 = *(long *)(unaff_x22 + 0x40) + *(long *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 0x30))(uVar4,uVar2,lVar3);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101e11ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e11eac; end: 101e123d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e11eac(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  long unaff_x20;
  undefined1 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *apuStack_80 [4];
  undefined8 uStack_58;
  
  lVar1 = unaff_x20 + _DAT_112e2fdc8;
  uVar8 = *(undefined8 *)(lVar1 + 0x18);
  lVar4 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar8);
  (**(code **)(lVar4 + 8))(uVar8,lVar4);
  func_0x000107c40794(param_1);
  func_0x000107c60234(apuStack_80);
  func_0x000107c615e8(param_1);
  uVar8 = 0;
  FUN_101e131ec(0,0x112d50c78,&PTR_PTR_1126b25c0);
  puVar9 = &uStack_58;
  func_0x000107c6147c(puVar9,apuStack_80,PTR___sypN_11034f1a8 + 8,uVar8,6);
  if ((int)puVar9 == 0) {
    FUN_101e125f4();
    puVar13 = &UNK_1106e3080;
    func_0x000107c613f8(&UNK_1106e3080,puVar9,0,0);
    *(undefined1 *)puVar9 = 0;
    func_0x000107c61654();
  }
  else {
    FUN_101e10334();
    puVar21 = (undefined8 *)((ulong)puVar9 & 0xffffffffffffff8);
    if ((ulong)puVar9 >> 0x3e == 0) {
      puVar20 = (undefined8 *)puVar21[2];
      puVar19 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar20 = puVar21;
      if ((undefined8 *)0x7fffffffffffffff < puVar9) {
        puVar20 = puVar9;
      }
      func_0x000107c60480();
      puVar19 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = (undefined *)puVar19;
    if (puVar20 != (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
      do {
        while( true ) {
          if (((ulong)puVar9 & 0xc000000000000001) == 0) {
            if ((undefined8 *)puVar21[2] <= puVar12) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x101e120fc);
              (*pcVar7)();
            }
            puVar10 = (undefined8 *)puVar9[(long)((long)puVar12 + 4)];
            func_0x000107c61174();
          }
          else {
            puVar10 = puVar12;
            FUN_101e12634(puVar12,puVar9,&PTR_PTR_1126b25d0,0x112d55598);
          }
          if (SCARRY8((long)puVar12,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101e120f8);
            (*pcVar7)();
          }
          puVar17 = (undefined8 *)((long)puVar12 + 1);
          func_0x000107c61174();
          puVar11 = puVar10;
          func_0x000107c4c930();
          func_0x000107c61180();
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar10);
          if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101e12100);
            (*pcVar7)();
          }
          puVar10 = puVar11;
          func_0x000107c44978();
          if (((ulong)puVar10 & 1) == 0) break;
          puVar12 = puVar19;
          func_0x000107c61558();
          apuStack_80[0] = puVar19;
          if (((ulong)puVar12 & 1) == 0) {
            func_0x000101df6b84(0,puVar19[2] + 1,1);
          }
          uVar2 = apuStack_80[0][2];
          if ((ulong)apuStack_80[0][3] >> 1 <= uVar2) {
            func_0x000101df6b84(1 < (ulong)apuStack_80[0][3],uVar2 + 1,1);
          }
          apuStack_80[0][2] = uVar2 + 1;
          apuStack_80[0][uVar2 + 4] = puVar11;
          puVar12 = puVar17;
          puVar19 = apuStack_80[0];
          if (puVar17 == puVar20) goto LAB_101e12120;
        }
        func_0x000107c61170(puVar11);
        puVar12 = (undefined8 *)((long)puVar12 + 1);
      } while (puVar17 != puVar20);
    }
LAB_101e12120:
    func_0x000107c6142c();
    if (((long)puVar19 < 0) || (((ulong)puVar19 >> 0x3e & 1) != 0)) {
      puVar21 = puVar19;
      func_0x000107c60480();
      puVar9 = puVar21;
    }
    else {
      puVar21 = (undefined8 *)puVar19[2];
    }
    if (puVar21 == (undefined8 *)0x0) {
LAB_101e12314:
      func_0x000107c61574(puVar19);
      uVar8 = *(undefined8 *)(lVar1 + 0x18);
      lVar4 = *(long *)(lVar1 + 0x20);
      func_0x0001000a8868(lVar1,uVar8);
      (**(code **)(lVar4 + 0x10))(uVar8,lVar4);
      return;
    }
    func_0x0001000d224c(apuStack_80);
    puVar20 = apuStack_80[0];
    if (apuStack_80[0] != (undefined8 *)0x0) {
      puVar12 = apuStack_80[0];
      func_0x000107c4c560();
      func_0x000107c61180();
      func_0x000107c615e8();
      puVar9 = puVar20;
      if (puVar12 != (undefined8 *)0x0) {
        uVar8 = *(undefined8 *)((long)puVar12 + _DAT_11302c658);
        uVar5 = ((undefined8 *)((long)puVar12 + _DAT_11302c658))[1];
        uVar3 = *(undefined8 *)((long)puVar12 + _DAT_11302c660);
        uVar6 = ((undefined8 *)((long)puVar12 + _DAT_11302c660))[1];
        func_0x00010006c00c(uVar8,uVar5);
        func_0x00010006c00c(uVar3,uVar6);
        func_0x000107c61170(puVar12);
        puVar18 = (undefined1 *)0x0;
        do {
          if (((ulong)puVar19 & 0xc000000000000001) == 0) {
            if ((undefined1 *)puVar19[2] <= puVar18) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x101e123c0);
              (*pcVar7)();
            }
            puVar14 = (undefined1 *)puVar19[(long)(puVar18 + 4)];
            func_0x000107c61174();
          }
          else {
            puVar14 = puVar18;
            FUN_101e12634(puVar18,puVar19,&PTR_PTR_1126b25c8,0x112e2f0c8);
          }
          puVar9 = (undefined8 *)(puVar18 + 1);
          if (SCARRY8((long)puVar18,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101e123bc);
            (*pcVar7)();
          }
          puVar15 = puVar14;
          func_0x000107c44978();
          if ((int)puVar15 != 0) {
            puVar15 = puVar14;
            func_0x000107c4c570();
            func_0x000107c61180();
            if (puVar15 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x101e123d8);
              (*pcVar7)();
            }
            puVar16 = puVar15;
            func_0x000101e12adc();
            func_0x000107c61170();
            if (puVar16 == (undefined1 *)0x0) {
              FUN_101e125f4();
              puVar13 = &UNK_1106e3080;
              func_0x000107c613f8(&UNK_1106e3080,puVar15,0,0);
              *puVar15 = 1;
              func_0x000107c61654();
              func_0x00010006c090(uVar8,uVar5);
              func_0x00010006c090(uVar3,uVar6);
              func_0x000107c61170(puVar14);
              goto LAB_101e122b8;
            }
            func_0x000107c54578(puVar14);
            func_0x000107c56318(puVar14);
            func_0x000107c61170(puVar16);
          }
          func_0x000107c61170(puVar14);
          puVar18 = puVar18 + 1;
        } while (puVar9 != puVar21);
        func_0x00010006c090(uVar8,uVar5);
        func_0x00010006c090(uVar3,uVar6);
        goto LAB_101e12314;
      }
    }
    FUN_101e125f4();
    puVar13 = &UNK_1106e3080;
    func_0x000107c613f8(&UNK_1106e3080,puVar9,0,0);
    *(undefined1 *)puVar9 = 4;
    func_0x000107c61654();
LAB_101e122b8:
    func_0x000107c61170(uStack_58);
    func_0x000107c61574(puVar19);
  }
  uVar8 = *(undefined8 *)(lVar1 + 0x18);
  lVar4 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar8);
  (**(code **)(lVar4 + 0x18))(puVar13,uVar8,lVar4);
  func_0x000107c61654();
  return;
}



/* Entry: 101e123d8; end: 101e123e3; -[_TtC39SCMemoriesSnapDocEncryptionServicesImpl36MemoriesSnapDocEncryptionManagerImpl masterKeyDecryptSnapDoc:error:] */

/* WARNING: Removing unreachable block (ram,0x000101e12448) */
/* WARNING: Removing unreachable block (ram,0x000101e1247c) */
/* WARNING: Removing unreachable block (ram,0x000101e1244c) */

void FUN_101e123d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101e11eac(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e123e4; end: 101e1249f;  */

/* WARNING: Removing unreachable block (ram,0x000101e12448) */
/* WARNING: Removing unreachable block (ram,0x000101e1247c) */
/* WARNING: Removing unreachable block (ram,0x000101e1244c) */

void FUN_101e123e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  (*param_5)(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e124a0; end: 101e124df;  */

void FUN_101e124a0(undefined8 *param_1)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x000101e12918(&uStack_48);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[3] = uStack_30;
  param_1[2] = uStack_38;
  *(undefined1 *)(param_1 + 4) = uStack_28;
  return;
}



/* Entry: 101e124e0; end: 101e124e3;  */

undefined1  [16] FUN_101e124e0(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  FUN_101e10334();
  if (param_1 >> 0x3e == 0) {
    uVar8 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar8 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101e10cb8);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_1 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar9;
        FUN_101e12634(uVar9,param_1,&PTR_PTR_1126b25d0,0x112d55598);
      }
      uVar1 = uVar9 + 1;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e10cb4);
        (*pcVar2)();
      }
      uVar4 = uVar3;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e10d00);
        (*pcVar2)();
      }
      uVar5 = uVar4;
      func_0x000107c3e240();
      func_0x000107c61170(uVar4);
      if ((int)uVar5 == 5) {
        uVar4 = uVar3;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101e10d04);
          (*pcVar2)();
        }
        uVar5 = uVar4;
        func_0x000107c44978();
        if ((uVar5 & 1) == 0) {
          uVar5 = uVar4;
          func_0x000107c44850();
          if ((uVar5 & 1) != 0) {
            puVar6 = &UNK_11048a018;
            goto LAB_101e10c38;
          }
          uVar5 = uVar4;
          func_0x000107c4484c();
          func_0x000107c61170(uVar4);
          if ((uVar5 & 1) == 0) goto LAB_101e10b50;
          puVar6 = &UNK_110489ff0;
        }
        else {
          puVar6 = &UNK_11048a040;
LAB_101e10c38:
          func_0x000107c61170(uVar4);
        }
        func_0x000107c6142c(param_1);
        uVar7 = 0x18;
        func_0x000107c613fc(puVar6,0x18,7);
        *(undefined8 *)(puVar6 + 0x10) = unaff_x20;
        func_0x000107c61174();
        func_0x000107c61174(uVar3);
        uVar8 = uVar3;
        FUN_101e1322c();
        func_0x000107c61574(puVar6);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar3);
        goto LAB_101e10ce0;
      }
LAB_101e10b50:
      func_0x000107c61170(uVar3);
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar8);
  }
  func_0x000107c6142c(param_1);
  uVar8 = 0;
  uVar7 = 0;
LAB_101e10ce0:
  auVar10._8_8_ = uVar7;
  auVar10._0_8_ = uVar8;
  return auVar10;
}



/* Entry: 101e124e4; end: 101e1253f;  */

undefined1  [16] FUN_101e124e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  func_0x000107c4c930();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar1 = 0;
    param_2 = 0;
  }
  else {
    lVar1 = param_1;
    FUN_101e10dc0();
    func_0x000107c61170(param_1);
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 101e12540; end: 101e12543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e12540(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lStack_58;
  
  lVar6 = param_1;
  func_0x000107c44978();
  if ((int)lVar6 == 0) {
    lVar6 = param_1;
    func_0x000107c44850();
    if ((int)lVar6 != 0) {
      lVar6 = param_1;
      func_0x000107c427cc();
      func_0x000107c61180();
      if (lVar6 != 0) {
        return;
      }
    }
    lVar6 = param_1;
    func_0x000107c4484c();
    if ((int)lVar6 != 0) {
      func_0x000107c427c8();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101e10f60);
        (*pcVar5)();
      }
      FUN_101e107cc();
      func_0x000107c61170(param_1);
    }
  }
  else {
    func_0x0001000d224c(&lStack_58);
    if (lStack_58 != 0) {
      lVar6 = lStack_58;
      func_0x000107c4c560();
      func_0x000107c61180();
      func_0x000107c615e8(lStack_58);
      if (lVar6 != 0) {
        uVar1 = *(undefined8 *)(lVar6 + _DAT_11302c658);
        uVar3 = ((undefined8 *)(lVar6 + _DAT_11302c658))[1];
        uVar2 = *(undefined8 *)(lVar6 + _DAT_11302c660);
        uVar4 = ((undefined8 *)(lVar6 + _DAT_11302c660))[1];
        func_0x00010006c00c(uVar1,uVar3);
        func_0x00010006c00c(uVar2,uVar4);
        func_0x000107c4c570();
        func_0x000107c61180();
        if (param_1 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101e10f5c);
          (*pcVar5)();
        }
        func_0x000101e12adc();
        func_0x000107c61170(lVar6);
        func_0x00010006c090(uVar1,uVar3);
        func_0x00010006c090(uVar2,uVar4);
        func_0x000107c61170(param_1);
      }
    }
  }
  return;
}



/* Entry: 101e12544; end: 101e1255f;  */

void FUN_101e12544(void)

{
  FUN_101e12de8();
  return;
}



/* Entry: 101e12560; end: 101e125ab;  */

void FUN_101e12560(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101e125ac;
  plVar1[7] = param_1;
  plVar1[8] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e117a8,0,0);
  return;
}



/* Entry: 101e125ac; end: 101e125f3;  */

void FUN_101e125ac(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e125f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e125f4; end: 101e12633;  */

void FUN_101e125f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2fdf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc618f8;
  func_0x000107c61520(&UNK_10dc618f8,&UNK_1106e3080);
  puRam0000000112e2fdf8 = puVar1;
  return;
}



/* Entry: 101e12634; end: 101e127ef;  */

ulong FUN_101e12634(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e12718);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e1271c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101e131ec(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e127f0);
  (*pcVar2)();
}



/* Entry: 101e127f0; end: 101e12de7;  */

bool FUN_101e127f0(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  FUN_101e10334();
  uVar7 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    uVar6 = uVar7;
    if (0x7fffffffffffffff < param_1) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  uVar2 = 0;
  do {
    uVar5 = uVar2;
    if (uVar6 == uVar5) break;
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar7 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e12900);
        (*pcVar1)();
      }
      uVar2 = *(ulong *)(param_1 + uVar5 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar2 = uVar5;
      FUN_101e12634(uVar5,param_1,&PTR_PTR_1126b25d0,0x112d55598);
    }
    if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e128fc);
      (*pcVar1)();
    }
    uVar3 = uVar2;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e12918);
      (*pcVar1)();
    }
    uVar4 = uVar3;
    func_0x000107c44978();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    uVar2 = uVar5 + 1;
  } while ((int)uVar4 == 0);
  func_0x000107c6142c(param_1);
  return uVar6 != uVar5;
}



/* Entry: 101e12de8; end: 101e12f6b;  */

undefined *
FUN_101e12de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long **pplVar12;
  undefined *puVar13;
  long **pplVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61168(PTR_PTR_1126bec38);
  plStack_68 = (long *)0x0;
  lStack_60 = 0;
  plVar17 = &lStack_60;
  pplVar14 = &plStack_68;
  func_0x000107c51bc0();
  lVar4 = lStack_60;
  puVar2 = (undefined *)0x0;
  if (lStack_60 != 0 && plStack_68 != (long *)0x0) {
    plVar3 = plStack_68;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar4;
    func_0x000107c5edfc();
    plVar6 = plVar3;
    uVar15 = param_2;
    func_0x000107c5edfc();
    puVar2 = PTR_PTR_1126d5750;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61180();
    lVar7 = lVar5;
    func_0x000107c5ee20(lVar5,param_2);
    func_0x000107c559a4(puVar2);
    func_0x000107c61170(lVar7);
    plVar8 = plVar6;
    func_0x000107c5ee20(plVar6,uVar15);
    plVar17 = plVar8;
    func_0x000107c55938(puVar2);
    func_0x000107c61170(puVar2);
    func_0x00010006c090(plVar6,uVar15);
    func_0x00010006c090(lVar5,param_2);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(plVar3);
    func_0x000107c61170(plVar3);
    func_0x000107c61170(plVar8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  func_0x000107c60e78();
  puVar9 = puVar2;
  uVar15 = param_2;
  func_0x000107c4a8c4();
  func_0x000107c61180();
  if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e131e8);
    (*pcVar1)();
  }
  puVar10 = puVar9;
  func_0x000107c5ee30();
  func_0x000107c61170(puVar9);
  puVar9 = puVar10;
  func_0x000107c5ee20(puVar10,uVar15);
  uVar11 = param_2;
  func_0x000107c5ee20(param_2,plVar17);
  pplVar12 = pplVar14;
  uVar16 = param_5;
  func_0x000107c5ee20(pplVar14,param_5);
  puVar13 = puVar9;
  func_0x000107c51bb8();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(pplVar12);
  if (puVar13 != (undefined *)0x0) {
    puVar9 = puVar13;
    func_0x000107c5ee30(puVar13);
    func_0x000107c61170(puVar13);
    func_0x00010006c090(puVar10,uVar15);
    func_0x000107c4a804();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e131ec);
      (*pcVar1)();
    }
    puVar10 = puVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar2);
    puVar2 = puVar10;
    func_0x000107c5ee20(puVar10,uVar15);
    func_0x000107c5ee20(param_2,plVar17);
    func_0x000107c5ee20(pplVar14,param_5);
    puVar13 = puVar2;
    func_0x000107c51bb8();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(param_2);
    func_0x000107c61170(pplVar14);
    if (puVar13 != (undefined *)0x0) {
      puVar2 = puVar13;
      func_0x000107c5ee30(puVar13);
      func_0x000107c61170(puVar13);
      func_0x00010006c090(puVar10,uVar15);
      puVar10 = PTR_PTR_1126d5750;
      func_0x000107c610f8(PTR_PTR_1126d5750);
      func_0x000107c453e4();
      func_0x000107c61180();
      puVar13 = puVar9;
      func_0x000107c5ee20(puVar9,uVar16);
      func_0x000107c559a4(puVar10);
      func_0x000107c61170(puVar13);
      puVar13 = puVar2;
      func_0x000107c5ee20(puVar2,param_5);
      func_0x000107c55938(puVar10);
      func_0x000107c61170(puVar10);
      func_0x00010006c090(puVar2,param_5);
      func_0x00010006c090(puVar9,uVar16);
      func_0x000107c61170(puVar13);
      return puVar10;
    }
    func_0x00010006c090(puVar10,uVar15);
    puVar10 = puVar9;
    uVar15 = uVar16;
  }
  func_0x00010006c090(puVar10,uVar15);
  return (undefined *)0x0;
}



/* Entry: 101e12f6c; end: 101e131eb;  */

undefined *
FUN_101e12f6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = param_1;
  uVar9 = param_2;
  func_0x000107c4a8c4();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e131e8);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c5ee30();
  func_0x000107c61170(lVar2);
  lVar2 = lVar3;
  func_0x000107c5ee20(lVar3,uVar9);
  uVar4 = param_2;
  func_0x000107c5ee20(param_2,param_3);
  uVar5 = param_4;
  uVar10 = param_5;
  func_0x000107c5ee20(param_4,param_5);
  lVar6 = lVar2;
  func_0x000107c51bb8();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  if (lVar6 != 0) {
    lVar2 = lVar6;
    func_0x000107c5ee30(lVar6);
    func_0x000107c61170(lVar6);
    func_0x00010006c090(lVar3,uVar9);
    func_0x000107c4a804();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e131ec);
      (*pcVar1)();
    }
    lVar3 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
    lVar6 = lVar3;
    func_0x000107c5ee20(lVar3,uVar9);
    func_0x000107c5ee20(param_2,param_3);
    func_0x000107c5ee20(param_4,param_5);
    lVar7 = lVar6;
    func_0x000107c51bb8();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    if (lVar7 != 0) {
      lVar6 = lVar7;
      func_0x000107c5ee30(lVar7);
      func_0x000107c61170(lVar7);
      func_0x00010006c090(lVar3,uVar9);
      puVar8 = PTR_PTR_1126d5750;
      func_0x000107c610f8(PTR_PTR_1126d5750);
      func_0x000107c453e4();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c5ee20(lVar2,uVar10);
      func_0x000107c559a4(puVar8);
      func_0x000107c61170(lVar3);
      lVar3 = lVar6;
      func_0x000107c5ee20(lVar6,param_5);
      func_0x000107c55938(puVar8);
      func_0x000107c61170(puVar8);
      func_0x00010006c090(lVar6,param_5);
      func_0x00010006c090(lVar2,uVar10);
      func_0x000107c61170(lVar3);
      return puVar8;
    }
    func_0x00010006c090(lVar3,uVar9);
    lVar3 = lVar2;
    uVar9 = uVar10;
  }
  func_0x00010006c090(lVar3,uVar9);
  return (undefined *)0x0;
}



/* Entry: 101e131ec; end: 101e1322b;  */

void FUN_101e131ec(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101e1322c; end: 101e13233;  */

undefined1  [16] FUN_101e1322c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4c930(param_1,uVar1);
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar2 = 0;
    uVar1 = 0;
  }
  else {
    lVar2 = param_1;
    FUN_101e10dc0();
    func_0x000107c61170(param_1);
  }
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 101e13234; end: 101e13273;  */

void FUN_101e13234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 101e13274; end: 101e1336f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e13274(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lStack_78;
  long lStack_70;
  long alStack_68 [3];
  long lStack_50;
  undefined **ppuStack_48;
  
  lVar1 = 0;
  func_0x000101e0ff1c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126a95d8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  ppuStack_48 = &PTR_DAT_110489f70;
  lVar4 = 0;
  alStack_68[0] = lVar2;
  lStack_50 = lVar1;
  FUN_101e10314();
  lVar2 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e2fdb8) = param_2;
  func_0x00010077b7ec(param_3,lVar2 + _DAT_112e2fdc0);
  func_0x00010077b7ec(alStack_68,lVar2 + _DAT_112e2fdc8);
  puVar3 = PTR_s_init_1125d9248;
  lStack_78 = lVar2;
  lStack_70 = lVar4;
  func_0x000107c6157c(param_2);
  plVar5 = &lStack_78;
  func_0x000107c61154(plVar5,puVar3);
  func_0x0001000834e4(alStack_68);
  *param_1 = (long)plVar5;
  param_1[1] = (long)&PTR_DAT_110489fa8;
  return;
}


