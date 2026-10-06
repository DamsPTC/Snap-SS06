/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000d6158; end: 1000d619f;  */

void FUN_1000d6158(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126e02d8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return;
}



/* Entry: 1000d61a0; end: 1000d65f7;  */

void FUN_1000d61a0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,byte param_15,undefined4 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  uint uStack_d4;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_b0 = param_14;
  uStack_98 = param_18;
  uStack_130 = param_17;
  uStack_d4 = (uint)param_15;
  uStack_e0 = param_13;
  uStack_f0 = param_12;
  uStack_f8 = param_11;
  uStack_100 = param_10;
  lVar7 = 0x112da1580;
  uStack_120 = param_1;
  uStack_114 = param_2;
  uStack_110 = param_3;
  uStack_104 = param_4;
  uStack_c0 = param_8;
  uStack_80 = param_7;
  uStack_78 = param_6;
  uStack_70 = param_5;
  FUN_1000285a8(0x112da1580,&UNK_10d944880);
  lStack_c8 = *(long *)(lVar7 + -8);
  lStack_b8 = *(long *)(lStack_c8 + 0x40);
  lStack_88 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lStack_b8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x112da1570;
  lStack_90 = (long)&lStack_140 - extraout_x8;
  FUN_1000285a8(0x112da1570,&UNK_10d944870);
  lStack_a0 = *(long *)(lVar7 + -8);
  lVar13 = *(long *)(lStack_a0 + 0x40);
  lStack_d0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar13 + 0xfU & 0xfffffffffffffff0);
  lVar16 = ((long)&lStack_140 - extraout_x8) - extraout_x8_00;
  lVar7 = 0x112da1578;
  lStack_138 = lVar16;
  FUN_1000285a8(0x112da1578,&UNK_10dcd5b50);
  lStack_e8 = *(long *)(lVar7 + -8);
  lVar11 = *(long *)(lStack_e8 + 0x40);
  lStack_a8 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar11 + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar16 - extraout_x8_01;
  lVar7 = 0x112d453c8;
  lStack_140 = lVar10;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lStack_128 = lVar10 - extraout_x8_02;
  FUN_1000d6600();
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined **)(unaff_x20 + 0x10) = puVar6;
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_120;
  *(char *)(unaff_x20 + 0x20) = (char)uStack_114;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_110;
  *(char *)(unaff_x20 + 0x30) = (char)uStack_104;
  FUN_1000d6cd4(param_8,unaff_x20 + 0x98);
  uVar19 = *param_9;
  uVar18 = param_9[3];
  uVar17 = param_9[2];
  *(undefined8 *)(unaff_x20 + 0x60) = param_9[1];
  *(undefined8 *)(unaff_x20 + 0x58) = uVar19;
  uVar9 = param_9[5];
  uVar19 = param_9[4];
  *(undefined8 *)(unaff_x20 + 0x70) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar19;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x90) = param_9[1];
  *(char *)(unaff_x20 + 0xc0) = (char)uStack_d4;
  lVar7 = 0;
  FUN_1000d6d18();
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x10) = 0;
  *(undefined2 *)(lVar7 + 0x18) = 0x201;
  FUN_1000d6d38();
  *(undefined **)(lVar7 + 0x20) = puVar8;
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(undefined1 *)(lVar7 + 0x30) = 1;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined1 *)(lVar7 + 0x40) = 1;
  *(long *)(unaff_x20 + 200) = lVar7;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_17;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_98;
  lVar7 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar10 - extraout_x8_02,1,1,lVar7);
  lVar4 = lStack_a8;
  lVar7 = lStack_e8;
  (**(code **)(lStack_e8 + 0x10))(lVar10,uStack_70,lStack_a8);
  lVar5 = lStack_a0;
  lVar10 = lStack_d0;
  (**(code **)(lStack_a0 + 0x10))(lVar16,uStack_78,lStack_d0);
  lVar16 = lStack_c8;
  (**(code **)(lStack_c8 + 0x10))(lStack_90,uStack_80,lStack_88);
  bVar1 = *(byte *)(lVar7 + 0x50);
  uVar15 = (ulong)bVar1 + 0x30 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  bVar2 = *(byte *)(lVar5 + 0x50);
  uVar12 = lVar11 + (ulong)bVar2 + uVar15 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  bVar3 = *(byte *)(lVar16 + 0x50);
  uVar14 = lVar13 + (ulong)bVar3 + uVar12 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  puVar8 = &UNK_1107449b0;
  func_0x000107c613fc(&UNK_1107449b0,uVar14 + lStack_b8,bVar1 | bVar2 | bVar3 | 7);
  uVar18 = uStack_b0;
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  *(long *)(puVar8 + 0x20) = unaff_x20;
  *(undefined8 *)(puVar8 + 0x28) = uStack_b0;
  (**(code **)(lVar7 + 0x20))(puVar8 + uVar15,lStack_140,lVar4);
  lVar4 = lStack_a0;
  (**(code **)(lStack_a0 + 0x20))(puVar8 + uVar12,lStack_138,lVar10);
  lVar5 = lStack_88;
  (**(code **)(lVar16 + 0x20))(puVar8 + uVar14,lStack_90,lStack_88);
  uVar19 = uStack_98;
  uVar17 = uStack_130;
  FUN_1000d6e04(uStack_130,uStack_98);
  func_0x000107c615f0(uVar18);
  func_0x000107c6157c();
  uVar9 = 0;
  FUN_1000abba4(0,0,lStack_128,&UNK_10dcd5dd0,puVar8);
  func_0x000107c615e8(uVar18);
  func_0x000107c61574(uVar9);
  func_0x0001000d6e14(uVar17,uVar19);
  func_0x0001000834e4(uStack_c0);
  (**(code **)(lVar16 + 8))(uStack_80,lVar5);
  (**(code **)(lVar4 + 8))(uStack_78,lVar10);
  (**(code **)(lVar7 + 8))(uStack_70,lStack_a8);
  return;
}



/* Entry: 1000d65f8; end: 1000d65ff;  */

void FUN_1000d65f8(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  lVar1 = 0x112da1578;
  FUN_1000285a8(0x112da1578,&UNK_10dcd5b50);
  lVar7 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar7 + 0x50) + 0x30 &
          ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff);
  lVar6 = *(long *)(lVar7 + 0x40);
  lVar2 = 0x112da1570;
  FUN_1000285a8(0x112da1570,&UNK_10d944870);
  lVar9 = *(long *)(lVar2 + -8);
  uVar10 = uVar4 + lVar6 + (ulong)*(byte *)(lVar9 + 0x50) &
           ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff);
  lVar5 = *(long *)(lVar9 + 0x40);
  lVar6 = 0x112da1580;
  FUN_1000285a8(0x112da1580,&UNK_10d944880);
  lVar8 = *(long *)(lVar6 + -8);
  uVar3 = (ulong)*(byte *)(lVar8 + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  (**(code **)(lVar7 + 8))(unaff_x20 + uVar4,lVar1);
  (**(code **)(lVar9 + 8))(unaff_x20 + uVar10,lVar2);
  (**(code **)(lVar8 + 8))
            (unaff_x20 + (uVar10 + lVar5 + uVar3 & (uVar3 ^ 0xffffffffffffffff)),lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000d6600; end: 1000d67af;  */

undefined * FUN_1000d6600(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  ulong uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = 0x112e034a8;
  FUN_1000285a8(0x112e034a8,&UNK_10d9d5e98);
  lVar9 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffa0 + -extraout_x8;
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    FUN_1000285a8(0x112e034a0,&UNK_10d9d5e88);
    puVar3 = puVar8;
    func_0x000107c60498();
    iVar1 = *(int *)(lVar10 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
    lVar10 = *(long *)(lVar9 + 0x48);
    func_0x000107c6157c();
    do {
      puVar5 = puVar7;
      func_0x000101b45b84(param_1,puVar7,0x112e034a8,&UNK_10d9d5e98);
      puVar4 = puVar7;
      FUN_1000c8928();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d67ac);
        (*pcVar2)();
      }
      uVar6 = (ulong)puVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) =
           *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << ((ulong)puVar4 & 0x3f);
      lVar11 = *(long *)(puVar3 + 0x30);
      lVar9 = 0;
      func_0x000107c5eec8();
      (**(code **)(*(long *)(lVar9 + -8) + 0x20))
                (lVar11 + *(long *)(*(long *)(lVar9 + -8) + 0x48) * (long)puVar4,puVar7,lVar9);
      lVar11 = *(long *)(puVar3 + 0x38);
      lVar9 = 0x112e009e8;
      FUN_1000285a8(0x112e009e8,&UNK_10d9d5e80);
      (**(code **)(*(long *)(lVar9 + -8) + 0x20))
                (lVar11 + *(long *)(*(long *)(lVar9 + -8) + 0x48) * (long)puVar4,puVar7 + iVar1,
                 lVar9);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d67b0);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + lVar10;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 1000d67b0; end: 1000d6853; -[SCApplicationStorageServices initWithPreferences:docObjectContext:] */

undefined1 *
FUN_1000d67b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270b940;
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
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000d6854; end: 1000d687f;  */

void FUN_1000d6854(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000d6880; end: 1000d6887; -[SCApplicationStorageServices preferences] */

undefined8 FUN_1000d6880(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1000d6888; end: 1000d68db;  */

void FUN_1000d6888(void)

{
  func_0x000107c61168(&PTR_PTR_112980b08);
  return;
}



/* Entry: 1000d68dc; end: 1000d6927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d68dc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113059890) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000d6928; end: 1000d6933;  */

void FUN_1000d6928(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0x112d453c8;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x113097380;
  FUN_1000285a8(0x113097380,&UNK_10dd3d460);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)(auStack_a0 + -extraout_x8) - extraout_x8_00;
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar10 = *(long *)(lVar3 + -8);
  lVar13 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar14 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  uVar15 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c4b940(uVar15);
  if ((*(byte *)(lVar1 + 0x40) & 1) == 0) {
    pcStack_90 = *(code **)(lVar10 + 0x10);
    (*pcStack_90)(lVar12,uStack_80,lVar3);
    lVar4 = 0x1130971c8;
    FUN_1000285a8(0x1130971c8,&UNK_10dd3d3b0);
    lVar8 = *(long *)(lVar4 + -8);
    puStack_98 = auStack_a0 + -extraout_x8;
    (**(code **)(lVar8 + 0x10))(lVar14,param_1,lVar4);
    (**(code **)(lVar8 + 0x38))(lVar14,0,1,lVar4);
    func_0x000107c61428(lVar1 + 0x48,auStack_78,0x21,0);
    func_0x000104895130(lVar14,lVar12);
    func_0x000107c614a8(auStack_78);
    func_0x000107c5d278(uVar15);
    lVar14 = 0;
    func_0x000107c5fd0c();
    puVar2 = puStack_98;
    (**(code **)(*(long *)(lVar14 + -8) + 0x38))(puStack_98,1,1,lVar14);
    puVar5 = &UNK_1107ad538;
    func_0x000107c613fc(&UNK_1107ad538,0x18,7);
    func_0x000107c61644(puVar5 + 0x10,lVar1);
    (*pcStack_90)(lVar12,uStack_80,lVar3);
    uVar7 = (ulong)*(byte *)(lVar10 + 0x50);
    uVar9 = uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff);
    uVar11 = lVar13 + uVar9 + 7 & 0xfffffffffffffff8;
    puVar6 = &UNK_1107ad560;
    func_0x000107c613fc(&UNK_1107ad560,uVar11 + 8,uVar7 | 7);
    *(undefined8 *)(puVar6 + 0x10) = 0;
    *(undefined8 *)(puVar6 + 0x18) = 0;
    *(undefined **)(puVar6 + 0x20) = puVar5;
    (**(code **)(lVar10 + 0x20))(puVar6 + uVar9,lVar12,lVar3);
    *(undefined8 *)(puVar6 + uVar11) = uStack_88;
    FUN_1000abba4(0,0,puVar2,&UNK_10dd3d470,puVar6);
    func_0x000107c61574();
  }
  else {
    func_0x000107c5d278(uVar15);
    auStack_78[0] = 1;
    uVar15 = 0x1130971c8;
    FUN_1000285a8(0x1130971c8,&UNK_10dd3d3b0);
    func_0x000107c5fcb4(auStack_78,uVar15);
  }
  return;
}



/* Entry: 1000d6934; end: 1000d6be3;  */

void FUN_1000d6934(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0x112d453c8;
  uStack_88 = param_4;
  uStack_80 = param_3;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x113097380;
  FUN_1000285a8(0x113097380,&UNK_10dd3d460);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)(auStack_a0 + -extraout_x8) - extraout_x8_00;
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar9 = *(long *)(lVar2 + -8);
  lVar12 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar13 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c4b940(uVar14);
  if ((*(byte *)(param_2 + 0x40) & 1) == 0) {
    pcStack_90 = *(code **)(lVar9 + 0x10);
    (*pcStack_90)(lVar11,uStack_80,lVar2);
    lVar3 = 0x1130971c8;
    FUN_1000285a8(0x1130971c8,&UNK_10dd3d3b0);
    lVar7 = *(long *)(lVar3 + -8);
    puStack_98 = auStack_a0 + -extraout_x8;
    (**(code **)(lVar7 + 0x10))(lVar13,param_1,lVar3);
    (**(code **)(lVar7 + 0x38))(lVar13,0,1,lVar3);
    func_0x000107c61428(param_2 + 0x48,auStack_78,0x21,0);
    func_0x000104895130(lVar13,lVar11);
    func_0x000107c614a8(auStack_78);
    func_0x000107c5d278(uVar14);
    lVar13 = 0;
    func_0x000107c5fd0c();
    puVar1 = puStack_98;
    (**(code **)(*(long *)(lVar13 + -8) + 0x38))(puStack_98,1,1,lVar13);
    puVar4 = &UNK_1107ad538;
    func_0x000107c613fc(&UNK_1107ad538,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,param_2);
    (*pcStack_90)(lVar11,uStack_80,lVar2);
    uVar6 = (ulong)*(byte *)(lVar9 + 0x50);
    uVar8 = uVar6 + 0x28 & (uVar6 ^ 0xffffffffffffffff);
    uVar10 = lVar12 + uVar8 + 7 & 0xfffffffffffffff8;
    puVar5 = &UNK_1107ad560;
    func_0x000107c613fc(&UNK_1107ad560,uVar10 + 8,uVar6 | 7);
    *(undefined8 *)(puVar5 + 0x10) = 0;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    *(undefined **)(puVar5 + 0x20) = puVar4;
    (**(code **)(lVar9 + 0x20))(puVar5 + uVar8,lVar11,lVar2);
    *(undefined8 *)(puVar5 + uVar10) = uStack_88;
    FUN_1000abba4(0,0,puVar1,&UNK_10dd3d470,puVar5);
    func_0x000107c61574();
  }
  else {
    func_0x000107c5d278(uVar14);
    auStack_78[0] = 1;
    uVar14 = 0x1130971c8;
    FUN_1000285a8(0x1130971c8,&UNK_10dd3d3b0);
    func_0x000107c5fcb4(auStack_78,uVar14);
  }
  return;
}



/* Entry: 1000d6be4; end: 1000d6c07;  */

void FUN_1000d6be4(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000d6c08; end: 1000d6c87;  */

void FUN_1000d6c08(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000d6c88; end: 1000d6c8f; -[SCAudioCaptureServices captureSessionProviderLazy] */

undefined8 FUN_1000d6c88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1000d6c90; end: 1000d6cd3;  */

void FUN_1000d6c90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da0498 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a70a8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112da0498 = puVar1;
  return;
}



/* Entry: 1000d6cd4; end: 1000d6d17;  */

long FUN_1000d6cd4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1000d6d18; end: 1000d6d37;  */

void FUN_1000d6d18(void)

{
  func_0x000107c61168(&PTR_PTR_1130608f0);
  return;
}



/* Entry: 1000d6d38; end: 1000d6e03;  */

undefined * FUN_1000d6d38(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar6 != (undefined *)0x0) {
    uVar4 = 0;
    FUN_1000285a8(0x1130606d8);
    puVar2 = puVar6;
    func_0x000107c60498();
    puVar3 = puVar2;
    func_0x000107c6157c();
    puVar7 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar8 = *puVar7;
      FUN_1000afb9c();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d6e00);
        (*pcVar1)();
      }
      uVar5 = (ulong)puVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar5 + 0x40) =
           *(ulong *)(puVar2 + uVar5 + 0x40) | 1L << ((ulong)puVar3 & 0x3f);
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + (long)puVar3 * 8) = uVar8;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d6e04);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar6 = puVar6 + -1;
      puVar7 = puVar7 + 1;
    } while (puVar6 != (undefined *)0x0);
    func_0x000107c61574(puVar2);
  }
  return puVar2;
}



/* Entry: 1000d6e04; end: 1000d6e23;  */

void FUN_1000d6e04(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1000d6e24; end: 1000d704b;  */

/* WARNING: Possible PIC construction at 0x0001000d6f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000d6f34) */
/* WARNING: Removing unreachable block (ram,0x0001000d6f54) */
/* WARNING: Removing unreachable block (ram,0x0001000d6f7c) */
/* WARNING: Removing unreachable block (ram,0x0001000d6fa4) */
/* WARNING: Removing unreachable block (ram,0x0001000d7004) */
/* WARNING: Removing unreachable block (ram,0x0001000d6f84) */
/* WARNING: Removing unreachable block (ram,0x0001000d7048) */
/* WARNING: Removing unreachable block (ram,0x0001000d6f8c) */
/* WARNING: Removing unreachable block (ram,0x0001000d7008) */
/* WARNING: Removing unreachable block (ram,0x0001000d6f94) */
/* WARNING: Removing unreachable block (ram,0x0001000d6fa0) */

void FUN_1000d6e24(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_78 [24];
  
  lVar1 = 0x1130971c8;
  FUN_1000285a8(0x1130971c8,&UNK_10dd3d3b0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4b940(uVar4);
  if ((*(byte *)(unaff_x20 + 0x40) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x40) = 1;
    func_0x000107c61428(unaff_x20 + 0x18,auStack_78,0x21,0);
    FUN_100083374(unaff_x20 + 0x18,param_1);
    func_0x000107c614a8(auStack_78);
    func_0x000107c61428(unaff_x20 + 0x48,auStack_78,1,0);
    func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x48));
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1000d751c();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined **)(unaff_x20 + 0x48) = puVar2;
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 1000d704c; end: 1000d7053; -[SCCameraRequestHandlerServices requestHandler] */

undefined8 FUN_1000d704c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1000d7054; end: 1000d750b; -[SCCameraHardwareServicesAPIImpl initWithCameraHardwareResource:managedCaptureSession:deviceCapacityAnalyzer:audioCaptureSessionProvider:audioSessionServices:applicationState:userPreferences:systemConfiguration:cameraRequestManager:featureStartupEventBus:appStartExperimentReader:captureDeviceManager:systemLaunchTabCache:] */

undefined8 *
FUN_1000d7054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  puStack_70 = PTR_PTR_1126e75e0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_14;
    func_0x000107c61170(uVar2);
    FUN_1000d76cc("APPSTORE",&PTR___NSConcreteGlobalBlock_1108769f0);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_13;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b7020;
    func_0x000107c610f4();
    uVar2 = puVar1[1];
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c45d0c();
    uVar7 = puVar1[10];
    puVar1[10] = puVar3;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b7028;
    func_0x000107c610f4();
    uVar2 = puVar1[0x10];
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c45c38();
    uVar7 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_80,puVar1);
    uVar4 = puVar1[0x10];
    func_0x000107c5c734(uVar4);
    func_0x000107c61180();
    uVar2 = uVar4;
    func_0x000107c5d6fc();
    func_0x000107c61180();
    uVar7 = uVar2;
    FUN_100078e94();
    func_0x000107c61180();
    uVar5 = uVar2;
    func_0x000107c4da88(uVar2);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_88,auStack_80);
    uVar6 = uVar5;
    func_0x000107c5c320(uVar5);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_80);
  }
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1000d750c; end: 1000d751b;  */

void FUN_1000d750c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1000d751c; end: 1000d76cb;  */

undefined * FUN_1000d751c(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  ulong uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = 0x113097390;
  FUN_1000285a8(0x113097390,&UNK_10dd3d490);
  lVar9 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffa0 + -extraout_x8;
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    FUN_1000285a8(0x113097388,&UNK_10dd3d480);
    puVar3 = puVar8;
    func_0x000107c60498();
    iVar1 = *(int *)(lVar10 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
    lVar10 = *(long *)(lVar9 + 0x48);
    func_0x000107c6157c();
    do {
      puVar5 = puVar7;
      func_0x000104896524(param_1,puVar7,0x113097390,&UNK_10dd3d490);
      puVar4 = puVar7;
      FUN_1000c8928();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d76c8);
        (*pcVar2)();
      }
      uVar6 = (ulong)puVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) =
           *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << ((ulong)puVar4 & 0x3f);
      lVar11 = *(long *)(puVar3 + 0x30);
      lVar9 = 0;
      func_0x000107c5eec8();
      (**(code **)(*(long *)(lVar9 + -8) + 0x20))
                (lVar11 + *(long *)(*(long *)(lVar9 + -8) + 0x48) * (long)puVar4,puVar7,lVar9);
      lVar11 = *(long *)(puVar3 + 0x38);
      lVar9 = 0x1130971c8;
      FUN_1000285a8(0x1130971c8,&UNK_10dd3d3b0);
      (**(code **)(*(long *)(lVar9 + -8) + 0x20))
                (lVar11 + *(long *)(*(long *)(lVar9 + -8) + 0x48) * (long)puVar4,puVar7 + iVar1,
                 lVar9);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d76cc);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + lVar10;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 1000d76cc; end: 1000d783b;  */

/* WARNING: Possible PIC construction at 0x0001000d7714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d779c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000d7750) */
/* WARNING: Removing unreachable block (ram,0x0001000d7718) */
/* WARNING: Removing unreachable block (ram,0x0001000d77a0) */

void FUN_1000d76cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61174(param_2);
  func_0x000107c4a02c();
  if ((int)puVar1 == 0) {
    func_0x0001000d77b8();
    func_0x000107c61180();
  }
  else {
    FUN_1005855a8();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1000d783c; end: 1000d7843;  */

void FUN_1000d783c(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 1000d7844; end: 1000d788f;  */

void FUN_1000d7844(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000d7890; end: 1000d791f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1000d7890(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  FUN_1000d7920(param_1,unaff_x20 + _DAT_1130975b0);
  FUN_1000d7920(param_2,unaff_x20 + _DAT_1130975b8);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_2);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 1000d7920; end: 1000d7963;  */

long FUN_1000d7920(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1000d7964; end: 1000d798f;  */

void FUN_1000d7964(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000d7990; end: 1000d799f;  */

void FUN_1000d7990(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1000d79a0; end: 1000d79db;  */

void FUN_1000d79a0(void)

{
  long unaff_x20;
  
  FUN_10007d980(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000d79dc; end: 1000d79e3;  */

void FUN_1000d79dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000d79e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 1000d79e4; end: 1000d7a43;  */

void FUN_1000d79e4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    func_0x000107c3e498(lVar1,param_2,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
    *(char *)(*(long *)(param_1 + 0x20) + 0x10) = (char)lVar1;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000d7a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined1 *)(*(long *)(param_1 + 0x20) + 0x10));
    return;
  }
  return;
}



/* Entry: 1000d7a44; end: 1000d7a83; -[SCCaptureDeviceAuthorizationCheckerImpl authorizedForMediaType:] */

bool FUN_1000d7a44(undefined *param_1,undefined8 param_2,long param_3)

{
  if (param_3 == *(long *)PTR__AVMediaTypeVideo_110348090) {
    func_0x000107c3e494();
  }
  else {
    param_1 = PTR_PTR_1126b7018;
    func_0x000107c3e490(PTR_PTR_1126b7018);
  }
  return param_1 == (undefined *)0x3;
}



/* Entry: 1000d7a84; end: 1000d7baf; -[SCCaptureDeviceAuthorizationCheckerImpl authorizationStatusForVideoCapture] */

undefined * FUN_1000d7a84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b7018;
  func_0x000107c3e490(PTR_PTR_1126b7018,param_2,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d95c(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar1 == (undefined *)0x3);
  func_0x000107c61180();
  func_0x000107c4d664(uVar3,param_2,puVar2);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 1000d7bb0; end: 1000d7bbb; +[SCCaptureDevice authorizationStatusForMediaType:] */

void FUN_1000d7bb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf11010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0,
             PTR_s_authorizationStatusForMediaType__1125a1da8);
  return;
}



/* Entry: 1000d7bbc; end: 1000d7c3b; -[SCQueuePerformer stopThrottling] */

void FUN_1000d7bbc(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = param_1 + 0x44;
  func_0x000107c611ec();
  if ((*(char *)(param_1 + 0x40) == '\x01') && (*(char *)(param_1 + 0x41) == '\x01')) {
    func_0x000100c79c94();
    iVar1 = (int)uVar2;
    if ((uVar2 & 1) == 0) {
      FUN_100a01fa0();
      if (iVar1 == 0) {
        func_0x000107c3c58c(param_1,param_2,*(undefined4 *)(param_1 + 0x28));
      }
      else {
        func_0x000107c60f68(*(undefined8 *)(param_1 + 0x10));
      }
      *(undefined1 *)(param_1 + 0x41) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x44);
  return;
}



/* Entry: 1000d7c3c; end: 1000d7ce7;  */

void FUN_1000d7c3c(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar4 = 0x113060268;
  FUN_1000285a8(0x113060268,&UNK_10dcd5808);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar3 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar3 + 7 & 0xffffffffffffff8));
  plVar2 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)&UNK_1040b8e4c;
  plVar2[5] = unaff_x20 + uVar3;
  plVar2[6] = lVar4;
  lVar4 = 0x113060418;
  FUN_1000285a8(0x113060418,&UNK_10dcd58d8,uVar1);
  plVar2[7] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[8] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[9] = uVar3;
  lVar4 = 0x113060420;
  FUN_1000285a8(0x113060420,&UNK_10dcd58e0);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[10] = uVar3;
  lVar4 = 0x113060428;
  FUN_1000285a8(0x113060428,&UNK_10dcd58e8);
  plVar2[0xb] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[0xc] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xd] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000d9ab8,0,0);
  return;
}



/* Entry: 1000d7ce8; end: 1000d7db3;  */

void FUN_1000d7ce8(void)

{
  ulong uVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x30) = in_x4;
  lVar2 = 0x113060418;
  FUN_1000285a8(0x113060418,&UNK_10dcd58d8);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar1;
  lVar2 = 0x113060420;
  FUN_1000285a8(0x113060420,&UNK_10dcd58e0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar1;
  lVar2 = 0x113060428;
  FUN_1000285a8(0x113060428,&UNK_10dcd58e8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000d9ab8,0,0);
  return;
}



/* Entry: 1000d7db4; end: 1000d7de3;  */

/* WARNING: Possible PIC construction at 0x0001000d7dc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000d7dcc) */

void FUN_1000d7db4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1000d7de4; end: 1000d7e8f; -[SCManagedCapturerARSessionHandler initWithCaptureResource:managedCaptureSession:] */

undefined1 *
FUN_1000d7de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e7608;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_4);
    uVar2 = 0;
    func_0x000107c60f6c();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000d7e90; end: 1000d8017;  */

/* WARNING: Possible PIC construction at 0x0001000d7ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d7f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d7f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d7f8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d7ff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000d7f90) */
/* WARNING: Removing unreachable block (ram,0x0001000d7f44) */
/* WARNING: Removing unreachable block (ram,0x0001000d7f48) */
/* WARNING: Removing unreachable block (ram,0x0001000d7f98) */
/* WARNING: Removing unreachable block (ram,0x0001000d7f58) */
/* WARNING: Removing unreachable block (ram,0x0001000d7f34) */
/* WARNING: Removing unreachable block (ram,0x0001000d7edc) */
/* WARNING: Removing unreachable block (ram,0x0001000d7ee0) */
/* WARNING: Removing unreachable block (ram,0x0001000d7ff4) */

void FUN_1000d7e90(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x000107c5bcc0(uVar1);
    func_0x000107c61180();
    func_0x000107c3e0d8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000d8018; end: 1000d817f; -[SCStartupCaptureHardwareWarmerImpl initWithCameraRequestHandler:systemConfiguration:featureStartupEventBus:systemLaunchTabCache:] */

undefined1 *
FUN_1000d8018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126e75f8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x30),param_3);
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000d8180; end: 1000d81c7; -[SCCameraHardwareResourceImpl state] */

void FUN_1000d8180(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1000d81c8; end: 1000d81ef; -[SCCameraHardwareRequestHandler updates] */

void FUN_1000d81c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000d81f0; end: 1000d81f7; -[SCObservable observeOnPerformer:] */

void FUN_1000d81f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_observeOnPerformer_preferSynchro_112615dc8,param_3,0);
  return;
}



/* Entry: 1000d81f8; end: 1000d825b; -[SCObservable observeOnPerformer:preferSynchronous:] */

void FUN_1000d81f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2f10;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c47d88();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1000d825c; end: 1000d82ff; -[SCQueuePerformerObservable initWithParentObservable:performer:preferSynchronous:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1000d825c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_11270e4c8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_initWithParentObservable__1125ea888,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127966d0;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127966d4) = param_5;
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1000d8300; end: 1000d83a7; -[SCQueuePerformerObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d8300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c4e358(param_1);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126e2f20;
  func_0x000107c610f4(PTR_PTR_1126e2f20);
  func_0x000107c47b6c();
  func_0x000107c61170(param_3);
  uVar2 = param_1;
  func_0x000107c5c310(param_1,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1000d83a8; end: 1000d847b; -[SCQueuePerformerObserver initWithObservable:observer:performer:preferSynchronous:] */

undefined1 *
FUN_1000d83a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_11270e4d0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000d847c; end: 1000d848f; -[SCQueuePerformerObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d847c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127966d0,0);
  return;
}



/* Entry: 1000d8490; end: 1000d8513;  */

void FUN_1000d8490(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000d8514; end: 1000d851b;  */

void FUN_1000d8514(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x78);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1000d851c; end: 1000d856f;  */

void FUN_1000d851c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x78);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1000d8570; end: 1000d8d47;  */

void FUN_1000d8570(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_10009e3f8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  uVar10 = uStack_b0;
  func_0x000107c61174();
  uVar11 = uStack_b8;
  func_0x000107c61174();
  uVar12 = uStack_c0;
  func_0x000107c61174(uStack_c0);
  func_0x000107c615f0(uStack_c8);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7238;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef85580);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar14 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef855a0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar14 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85560);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef10e10);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef855c0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef855e0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar15);
  uVar14 = 0x5370757472617473;
  func_0x000107c5fadc(0x5370757472617473,0xef73656369767265);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c615f0(uStack_c8);
  func_0x000107c61174(uVar15);
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85600);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c615e8(uStack_c8);
  func_0x000107c61170(uVar14);
  lVar16 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar15);
  func_0x000107c61174();
  uVar14 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef85620);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(uVar14);
  func_0x000107c3e740(uVar15);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar16 != 0) {
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c615e8(uStack_c8);
    *(long *)(param_2 + 0x78) = lVar16;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d8d48);
  (*pcVar1)();
}



/* Entry: 1000d8d48; end: 1000d8d83;  */

void FUN_1000d8d48(void)

{
  long unaff_x20;
  
  FUN_1000d8570(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1000d8d84; end: 1000d8d8b;  */

void FUN_1000d8d84(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1000d8d8c; end: 1000d8ddf;  */

void FUN_1000d8d8c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1000d8de0; end: 1000d8def;  */

void FUN_1000d8de0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_10009e238();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a7230;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85500);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85540);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85560);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  uVar9 = uVar10;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar1 + 0x40) = uVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 1000d8df0; end: 1000d91bf;  */

void FUN_1000d8df0(long *param_1,long param_2)

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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_10009e238();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a7230;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85500);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85540);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85560);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  uVar8 = uVar9;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(param_2 + 0x40) = uVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 1000d91c0; end: 1000d91c7;  */

void FUN_1000d91c0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1000d91c8; end: 1000d921b;  */

void FUN_1000d91c8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1000d921c; end: 1000d922f;  */

void FUN_1000d921c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_10009c418();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  puVar2 = PTR_PTR_1126a7440;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85560);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar10 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85ee0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  uVar10 = uVar11;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined8 *)(lVar1 + 0x48) = uVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 1000d9230; end: 1000d969b;  */

void FUN_1000d9230(long *param_1,long param_2)

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
  undefined8 uVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_10009c418();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  puVar1 = PTR_PTR_1126a7440;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85560);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85ee0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  uVar9 = uVar10;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 1000d969c; end: 1000d96a3;  */

void FUN_1000d969c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_40);
  uVar1 = 0;
  FUN_100095c1c(0);
  func_0x000107c610f8();
  func_0x0001000d9704(uStack_40,uStack_38,uVar1);
  *param_1 = uStack_40;
  return;
}



/* Entry: 1000d96a4; end: 1000d978f;  */

void FUN_1000d96a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_40);
  uVar1 = 0;
  FUN_100095c1c(0);
  func_0x000107c610f8();
  func_0x0001000d9704(uStack_40,uStack_38,uVar1);
  *param_1 = uStack_40;
  return;
}



/* Entry: 1000d9790; end: 1000d9797;  */

void FUN_1000d9790(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  FUN_1000285a8(0x112d9fd40,&UNK_10d942208);
  func_0x000107c6157c();
  puVar1 = &UNK_10145304c;
  FUN_1000823a8();
  puVar2 = puVar1;
  func_0x0001000ad7c4();
  puVar3 = puVar2;
  func_0x0001000ad7c4();
  uVar4 = 0;
  FUN_10009b588(0);
  func_0x000107c610f8();
  func_0x0001000d983c(puVar2,puVar3,uVar4);
  func_0x000107c61574(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1000d9798; end: 1000d989f;  */

void FUN_1000d9798(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  FUN_1000285a8(0x112d9fd40,&UNK_10d942208);
  func_0x000107c6157c(param_2);
  puVar1 = &UNK_10145304c;
  FUN_1000823a8(&UNK_10145304c,param_2);
  puVar2 = puVar1;
  func_0x0001000ad7c4();
  puVar3 = puVar2;
  func_0x0001000ad7c4();
  uVar4 = 0;
  FUN_10009b588(0);
  func_0x000107c610f8();
  func_0x0001000d983c(puVar2,puVar3,uVar4);
  func_0x000107c61574(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1000d98a0; end: 1000d98a7;  */

void FUN_1000d98a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  puVar3 = PTR_PTR_1126dfd30;
  func_0x000107c610f8();
  func_0x000107c46ba0();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1000d98a8; end: 1000d9917;  */

void FUN_1000d98a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x0001000ad7c4();
  uVar1 = param_2;
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126dfd30;
  func_0x000107c610f8();
  func_0x000107c46ba0();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1000d9918; end: 1000d99bb; -[SCGrapheneServices initWithGrapheneFlusher:grapheneRegistry:] */

undefined1 *
FUN_1000d9918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270e420;
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
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000d99bc; end: 1000d99e7;  */

void FUN_1000d99bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000d99e8; end: 1000d99ef;  */

void FUN_1000d99e8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a7110;
  func_0x000107c610f8();
  func_0x000107c457d0();
  func_0x000107c61170(unaff_x20);
  *param_1 = puVar1;
  return;
}



/* Entry: 1000d99f0; end: 1000d9a43;  */

void FUN_1000d99f0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a7110;
  func_0x000107c610f8();
  func_0x000107c457d0();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1000d9a44; end: 1000d9ab7; -[SCAsyncQueueServices initWithAsyncQueueProvider:] */

undefined1 * FUN_1000d9a44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702f10;
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



/* Entry: 1000d9ab8; end: 1000d9b53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d9ab8(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  FUN_1000285a8(0x113060268,&UNK_10dcd5808);
  func_0x000107c5fd34(uVar3);
  *(undefined8 *)(unaff_x22 + 0x70) = _DAT_113060288;
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(lVar1 + _DAT_113060290);
  *(undefined8 *)(unaff_x22 + 0x80) = 0;
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1000ee9f4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar2,*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 1000d9b54; end: 1000d9b9b;  */

void FUN_1000d9b54(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x120));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000d9b9c,0,0);
  return;
}



/* Entry: 1000d9b9c; end: 1000d9d17;  */

void FUN_1000d9b9c(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x22;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x110);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x118);
  bVar1 = *(byte *)(unaff_x22 + 0x128);
  func_0x000107c61428(puVar6,unaff_x22 + 0x90,0,0);
  uVar3 = *puVar6;
  func_0x000107c61174(uVar3);
  FUN_100069b5c(uVar5);
  func_0x000107c61170(uVar3);
  if ((bVar1 & 1) == 0) {
    puVar6 = *(undefined8 **)(unaff_x22 + 0x110);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x129);
    func_0x000107c61428(puVar6,unaff_x22 + 0xa8,0,0);
    uVar4 = *puVar6;
    func_0x000107c61174(uVar4);
    func_0x000107c602fc(0x12);
    func_0x000107c6142c(0xe000000000000000);
    FUN_10007c170(uVar5,uVar3,uVar2);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar3);
    uVar5 = 0xd000000000000010;
    func_0x000100029b28(0xd000000000000010,0x800000010f2131a0);
    func_0x000107c6142c(0x800000010f2131a0);
    func_0x000107c61170(uVar4);
    func_0x000107c61428(puVar6,unaff_x22 + 0xc0,0,0);
    uVar3 = *puVar6;
    func_0x000107c61174(uVar3);
    FUN_100069b5c(uVar5);
    func_0x000107c61170(uVar3);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  (**(code **)(*(long *)(unaff_x22 + 0x100) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001000d9d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1000d9d18; end: 1000d9d8f;  */

void FUN_1000d9d18(long param_1,long param_2,undefined1 param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *unaff_x20;
  plVar1 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)&UNK_1040bd858;
  plVar1[0xd] = param_4;
  plVar1[0xe] = lVar4;
  *(undefined1 *)(plVar1 + 0x19) = param_3;
  plVar1[0xb] = param_1;
  plVar1[0xc] = param_2;
  lVar4 = 0x112d453c8;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xf] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x10] = uVar3;
  lVar4 = 0;
  func_0x000107c5fd0c();
  plVar1[0x11] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar1[0x12] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x13] = uVar3;
  if (lRam00000001130606f0 != -1) {
    func_0x000107c61568(0x1130606f0,FUN_1000da650);
  }
  lVar4 = lRam0000000113813118;
  plVar1[0x14] = lRam0000000113813118;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000f0f24,lVar4,0);
  return;
}



/* Entry: 1000d9d90; end: 1000d9dbb;  */

void FUN_1000d9d90(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b7040;
  func_0x000107c610fc();
  uVar1 = puRam00000001137f3ff0;
  puRam00000001137f3ff0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000d9dbc; end: 1000d9ed3;  */

void FUN_1000d9dbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar3 = 0;
  func_0x000107c5f83c();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar8 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  uVar7 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar8 + 7 & 0xfffffffffffffff8;
  lVar3 = 0;
  func_0x000107c5eec8();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar9 = uVar7 + uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff);
  lVar6 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  lVar3 = 0x113060140;
  FUN_1000285a8(0x113060140,&UNK_10dcd5728);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + uVar7);
  plVar4 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)&UNK_100c87f6c;
  plVar4[7] = unaff_x20 + uVar9;
  plVar4[8] = unaff_x20 + (uVar9 + lVar6 + uVar5 & (uVar5 ^ 0xffffffffffffffff));
  plVar4[5] = unaff_x20 + uVar8;
  plVar4[6] = lVar3;
  lVar3 = 0;
  FUN_1000c2d68(0,uVar1,uVar2);
  plVar4[9] = lVar3;
  uVar5 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[10] = uVar5;
  lVar3 = 0x113060130;
  FUN_1000285a8(0x113060130,&UNK_10dcd5720);
  plVar4[0xb] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar4[0xc] = lVar3;
  uVar5 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xd] = uVar5;
  lVar3 = 0;
  func_0x000107c5f83c();
  plVar4[0xe] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar4[0xf] = lVar3;
  uVar5 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x10] = uVar5;
  lVar3 = 0x113060240;
  FUN_1000285a8(0x113060240,&UNK_10dcd57d8);
  uVar5 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x11] = uVar5;
  lVar3 = 0;
  func_0x000107c5f7f0();
  plVar4[0x12] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar4[0x13] = lVar3;
  uVar5 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar7 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x14] = uVar7;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x15] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000d9ff0,0,0);
  return;
}



/* Entry: 1000d9ed4; end: 1000d9fef;  */

void FUN_1000d9ed4(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x40) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x28) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x30) = in_x4;
  lVar1 = 0;
  FUN_1000c2d68();
  *(long *)(unaff_x22 + 0x48) = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  lVar1 = 0x113060130;
  FUN_1000285a8(0x113060130,&UNK_10dcd5720);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  lVar1 = 0;
  func_0x000107c5f83c();
  *(long *)(unaff_x22 + 0x70) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  lVar1 = 0x113060240;
  FUN_1000285a8(0x113060240,&UNK_10dcd57d8);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  lVar1 = 0;
  func_0x000107c5f7f0();
  *(long *)(unaff_x22 + 0x90) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000d9ff0,0,0);
  return;
}



/* Entry: 1000d9ff0; end: 1000da24b;  */

void FUN_1000d9ff0(undefined8 param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar1 = *(long *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar4 = *(long *)(unaff_x22 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar8 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c5f830(uVar7);
  func_0x000107c5f838(uVar5);
  FUN_1000c8210();
  (**(code **)(lVar4 + 8))(uVar7,uVar9);
  bVar2 = (param_2 & 0xff) != 1;
  if (bVar2 && 0 < lVar8) {
    (**(code **)(*(long *)(unaff_x22 + 0x98) + 0x20))(*(undefined8 *)(unaff_x22 + 0x88));
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))
              (*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x90));
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar4 = *(long *)(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
  (**(code **)(lVar1 + 0x38))(uVar7,!bVar2 || 0 >= lVar8,1,uVar5);
  (**(code **)(lVar4 + 0x30))(uVar7,1,uVar5);
  if ((int)uVar7 == 1) {
    uVar3 = *(ulong *)(unaff_x22 + 0x88);
    func_0x0001000c8414(uVar3,0x113060240,&UNK_10dcd57d8);
    func_0x000107c5fd5c();
    if ((uVar3 & 1) == 0) {
      *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x38);
      FUN_100075034(unaff_x22 + 0xc0,&UNK_1040b85e8,unaff_x22 + 0x10,PTR___sSbN_11034dd40);
      if (*(char *)(unaff_x22 + 0xc0) == '\x01') {
        lVar1 = *(long *)(unaff_x22 + 0x60);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
        lVar4 = 0;
        func_0x000107c5eec8();
        (**(code **)(*(long *)(lVar4 + -8) + 0x10))(uVar7,uVar11,lVar4);
        func_0x000107c6159c(uVar7,uVar5,1);
        uVar5 = 0x113060140;
        FUN_1000285a8(0x113060140,&UNK_10dcd5728);
        func_0x000107c5fd28(uVar9,uVar7,uVar5);
        (**(code **)(lVar1 + 8))(uVar9,uVar10);
      }
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xa8));
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar9);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar10);
    func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001000da1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x88),
             *(undefined8 *)(unaff_x22 + 0x90));
  plVar6 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)&UNK_100c87e80;
  plVar6[5] = *(long *)(unaff_x22 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000da264,0,0);
  return;
}



/* Entry: 1000da24c; end: 1000da263;  */

void FUN_1000da24c(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000da264,0,0);
  return;
}



/* Entry: 1000da264; end: 1000da453;  */

void FUN_1000da264(ulong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  code *pcVar8;
  long unaff_x22;
  long lVar9;
  
  FUN_1000c8210();
  if ((param_2 & 0xff) == 1 || (long)param_1 < 1) {
    func_0x0001040ba6cc();
    func_0x000107c613f8(&UNK_110744738,param_1,0,0);
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x0001000da2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  iVar2 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar2 != 0) {
    lVar3 = 0;
    func_0x000107c603b4();
    *(long *)(unaff_x22 + 0x30) = lVar3;
    lVar9 = *(long *)(lVar3 + -8);
    uVar5 = *(long *)(lVar9 + 0x40) + 0xf;
    uVar4 = uVar5 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x38) = uVar4;
    uVar5 = uVar5 & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar5);
    func_0x000107c603ac(uVar5);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1;
    func_0x000107c603b0(uVar4,param_1 * 1000000000,SUB168(auVar1 * ZEXT816(1000000000),8));
    pcVar8 = *(code **)(lVar9 + 8);
    *(code **)(unaff_x22 + 0x40) = pcVar8;
    (*pcVar8)(uVar5,lVar3);
    func_0x000107c615c0(uVar5);
    *(undefined8 *)(unaff_x22 + 0x18) = 0;
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    *(undefined1 *)(unaff_x22 + 0x20) = 1;
    lVar3 = 0;
    func_0x000107c603bc();
    *(long *)(unaff_x22 + 0x48) = lVar3;
    lVar9 = *(long *)(lVar3 + -8);
    *(long *)(unaff_x22 + 0x50) = lVar9;
    uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x58) = uVar5;
    func_0x000107c60630(uVar5);
    plVar6 = (long *)(ulong)*(uint *)(
                                     PTR___sScTss5NeverORszABRs_rlE5sleep5until9tolerance5clocky7InstantQyd___8DurationQyd__Sgqd__tYaKs5ClockRd__lFZTu_11034fe18
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar6;
    plVar7 = plVar6;
    FUN_1000da454();
    *plVar6 = unaff_x22;
    plVar6[1] = (long)&UNK_100c87d6c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___sScTss5NeverORszABRs_rlE5sleep5until9tolerance5clocky7InstantQyd___8DurationQyd__Sgqd__tYaKs5ClockRd__lFZ_11034fe10
    )(uVar4,(undefined8 *)(unaff_x22 + 0x10),uVar5,lVar3,plVar7);
    return;
  }
  plVar7 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)&UNK_1040baaf8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(param_1);
  return;
}



/* Entry: 1000da454; end: 1000da497;  */

void FUN_1000da454(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e00a30 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c603bc(0xff);
  puVar2 = PTR___ss15ContinuousClockVs0B0sMc_11034ff98;
  func_0x000107c61520(PTR___ss15ContinuousClockVs0B0sMc_11034ff98,uVar1);
  puRam0000000112e00a30 = puVar2;
  return;
}



/* Entry: 1000da498; end: 1000da5a7;  */

void FUN_1000da498(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long unaff_x22;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = 0x112da1578;
  FUN_1000285a8(0x112da1578,&UNK_10dcd5b50);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar6 = uVar3 + 0x30 & (uVar3 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar1 = 0x112da1570;
  FUN_1000285a8(0x112da1570,&UNK_10d944870);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar7 = uVar6 + lVar4 + uVar3 & (uVar3 ^ 0xffffffffffffffff);
  lVar5 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar1 = 0x112da1580;
  FUN_1000285a8(0x112da1580,&UNK_10d944880);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar2 = (long *)0x1e0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)&UNK_1040be0cc;
  plVar2[0x35] = unaff_x20 + uVar7;
  plVar2[0x36] = unaff_x20 + (uVar7 + lVar5 + uVar3 & (uVar3 ^ 0xffffffffffffffff));
  plVar2[0x33] = lVar4;
  plVar2[0x34] = unaff_x20 + uVar6;
  plVar2[0x32] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000da5c8,0,0);
  return;
}



/* Entry: 1000da5a8; end: 1000da5c7;  */

void FUN_1000da5a8(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1a8) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x1b0) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x198) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x1a0) = in_x5;
  *(undefined8 *)(unaff_x22 + 400) = in_x3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000da5c8,0,0);
  return;
}



/* Entry: 1000da5c8; end: 1000da64f;  */

void FUN_1000da5c8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  if (lRam00000001130606f0 != -1) {
    func_0x000107c61568(0x1130606f0,FUN_1000da650);
  }
  uVar1 = uRam0000000113813118;
  *(undefined8 *)(unaff_x22 + 0x1b8) = uRam0000000113813118;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000ec8e4,uVar1,0);
  return;
}



/* Entry: 1000da650; end: 1000da687;  */

void FUN_1000da650(undefined8 param_1)

{
  func_0x0001000da630();
  func_0x000107c613fc();
  func_0x000107c61474();
  uRam0000000113813118 = param_1;
  return;
}



/* Entry: 1000da688; end: 1000da68f;  */

void FUN_1000da688(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b898(param_1,param_2,0);
  FUN_1000da70c();
  return;
}



/* Entry: 1000da690; end: 1000da6df;  */

undefined1 * FUN_1000da690(void)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [24];
  
  FUN_1000da688(auStack_38);
  puVar1 = auStack_38;
  FUN_1000da870(puVar1);
  FUN_1000dad48();
  return puVar1;
}



/* Entry: 1000da6e0; end: 1000da70b;  */

void FUN_1000da6e0(void)

{
  func_0x00010002b898();
  FUN_1000da70c();
  return;
}



/* Entry: 1000da70c; end: 1000da737;  */

void FUN_1000da70c(long param_1,long *param_2)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_58 [24];
  
  cVar1 = *(char *)((long)param_2 + 0x17);
  plVar3 = (long *)*param_2;
  if (-1 < (long)cVar1) {
    plVar3 = param_2;
  }
  lVar4 = param_2[1];
  if (-1 < cVar1) {
    lVar4 = (long)cVar1;
  }
  lVar4 = (long)plVar3 + lVar4;
  func_0x0001000da72c();
  uVar7 = (ulong)*(char *)(param_1 + 0x17);
  uVar2 = lVar4 - (long)plVar3;
  if ((long)uVar7 < 0) {
    if (uVar2 == 0) {
      return;
    }
    uVar8 = unaff_x19[1];
    lVar4 = (unaff_x19[2] & 0x7fffffffffffffff) - 1;
    puVar6 = (undefined8 *)*unaff_x19;
    uVar7 = (ulong)unaff_x19[2] >> 0x38;
  }
  else {
    if (uVar2 == 0) {
      return;
    }
    lVar4 = 0x16;
    puVar6 = unaff_x19;
    uVar8 = uVar7;
  }
  uVar5 = (uint)uVar7;
  if (unaff_x20 < puVar6 || (undefined8 *)((long)puVar6 + uVar8 + 1) <= unaff_x20) {
    if (lVar4 - uVar8 < uVar2) {
      FUN_1000644b8();
      uVar5 = (uint)*(byte *)((long)unaff_x19 + 0x17);
    }
    puVar6 = unaff_x19;
    if ((uVar5 >> 7 & 1) != 0) {
      puVar6 = (undefined8 *)*unaff_x19;
    }
    func_0x000107c610b8((long)puVar6 + uVar8);
    *(undefined1 *)((long)puVar6 + uVar8 + uVar2) = 0;
    if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
      unaff_x19[1] = uVar8 + uVar2;
    }
    else {
      *(byte *)((long)unaff_x19 + 0x17) = (byte)(uVar8 + uVar2) & 0x7f;
    }
  }
  else {
    func_0x00010533b3bc(auStack_58);
    func_0x000107c60c5c();
    FUN_1000e1074();
  }
  return;
}



/* Entry: 1000da738; end: 1000da86f;  */

void FUN_1000da738(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_58 [24];
  
  func_0x0001000da72c();
  uVar5 = (ulong)*(char *)(param_1 + 0x17);
  uVar1 = param_3 - param_2;
  if ((long)uVar5 < 0) {
    if (uVar1 == 0) {
      return;
    }
    uVar6 = unaff_x19[1];
    lVar2 = (unaff_x19[2] & 0x7fffffffffffffff) - 1;
    puVar4 = (undefined8 *)*unaff_x19;
    uVar5 = (ulong)unaff_x19[2] >> 0x38;
  }
  else {
    if (uVar1 == 0) {
      return;
    }
    lVar2 = 0x16;
    puVar4 = unaff_x19;
    uVar6 = uVar5;
  }
  uVar3 = (uint)uVar5;
  if (unaff_x20 < puVar4 || (undefined8 *)((long)puVar4 + uVar6 + 1) <= unaff_x20) {
    if (lVar2 - uVar6 < uVar1) {
      FUN_1000644b8();
      uVar3 = (uint)*(byte *)((long)unaff_x19 + 0x17);
    }
    puVar4 = unaff_x19;
    if ((uVar3 >> 7 & 1) != 0) {
      puVar4 = (undefined8 *)*unaff_x19;
    }
    func_0x000107c610b8((long)puVar4 + uVar6);
    *(undefined1 *)((long)puVar4 + uVar6 + uVar1) = 0;
    if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
      unaff_x19[1] = uVar6 + uVar1;
    }
    else {
      *(byte *)((long)unaff_x19 + 0x17) = (byte)(uVar6 + uVar1) & 0x7f;
    }
  }
  else {
    func_0x00010533b3bc(auStack_58);
    func_0x000107c60c5c();
    FUN_1000e1074();
  }
  return;
}



/* Entry: 1000da870; end: 1000da9bb;  */

bool FUN_1000da870(undefined8 param_1)

{
  char acStack_18 [8];
  
  func_0x000107c60d80(acStack_18,param_1,0);
  return acStack_18[0] != '\0' && acStack_18[0] != -1;
}



/* Entry: 1000da9bc; end: 1000daa1f;  */

void FUN_1000da9bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001000daa1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1000daa20; end: 1000daaa3;  */

void FUN_1000daa20(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001000daa58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1000daaa4; end: 1000dab03;  */

void FUN_1000daaa4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c61428(puVar1,unaff_x22 + 0x28,0,0);
  uVar3 = *puVar1;
  func_0x000107c61174(uVar3);
  FUN_100069b5c(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001000dab00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


