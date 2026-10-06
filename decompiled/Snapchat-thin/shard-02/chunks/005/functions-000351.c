/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e3f37c; end: 101e3f39b;  */

void FUN_101e3f37c(void)

{
  FUN_101e3f1cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e3f39c; end: 101e4000b;  */

code * FUN_101e3f39c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar10;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 *puVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_150 [8];
  long lStack_148;
  code *pcStack_140;
  long lStack_138;
  long lStack_130;
  long *plStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long alStack_70 [2];
  
  if ((*(byte *)((long)param_1 + 0x31) & 1) == 0) {
    lVar11 = param_1[2];
    lVar5 = *(long *)(lVar11 + 0x10);
    pcVar14 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar5 != 0) {
      pcStack_a8 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_101e4957c(0,lVar5,0);
      puVar9 = (undefined8 *)(lVar11 + 0x20);
      do {
        pcVar14 = pcStack_a8;
        lStack_98 = puVar9[1];
        puStack_a0 = (undefined *)*puVar9;
        uStack_88 = puVar9[3];
        puStack_90 = (undefined8 *)puVar9[2];
        uStack_78 = puVar9[5];
        uStack_80 = puVar9[4];
        alStack_70[0] = puVar9[6];
        FUN_101e49e18(&puStack_a0,&lStack_e0);
        ppuVar3 = &puStack_a0;
        func_0x000101e3fc34(ppuVar3,param_1);
        func_0x000101e49e54(&puStack_a0);
        uVar10 = *(ulong *)(pcVar14 + 0x10);
        pcStack_a8 = pcVar14;
        if (*(ulong *)(pcVar14 + 0x18) >> 1 <= uVar10) {
          FUN_101e4957c(1 < *(ulong *)(pcVar14 + 0x18),uVar10 + 1,1);
        }
        *(ulong *)(pcStack_a8 + 0x10) = uVar10 + 1;
        *(undefined ***)(pcStack_a8 + uVar10 * 8 + 0x20) = ppuVar3;
        puVar9 = puVar9 + 7;
        lVar5 = lVar5 + -1;
        pcVar14 = pcStack_a8;
      } while (lVar5 != 0);
    }
    func_0x0001000285a8(0x112e324d0,&UNK_10da1b8f0);
    pcVar4 = pcVar14;
    func_0x0001000c19f0(pcVar14);
    func_0x000107c6142c(pcVar14);
    return pcVar4;
  }
  lVar5 = 0x112e324c0;
  func_0x0001000285a8(0x112e324c0,&UNK_10da1b8e8);
  lStack_138 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar14 = (code *)(auStack_150 + -extraout_x8);
  lVar5 = 0;
  func_0x000103b2dc40();
  lStack_e8 = *(long *)(lVar5 + -8);
  lStack_e0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e8 + 0x40));
  lVar15 = (long)pcVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = 0x112e32320;
  lStack_108 = lVar15 - extraout_x12;
  func_0x0001000285a8(0x112e32320,&UNK_10da1b8d0);
  lStack_f8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (lVar15 - extraout_x12) - extraout_x8_01;
  lVar5 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  lStack_f0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar5 = lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_120 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar10 = lVar5 - extraout_x12_00;
  uStack_100 = uVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = uVar10 - extraout_x12_01;
  lStack_c8 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = *param_1;
  puVar9 = (undefined8 *)param_1[1];
  puVar6 = &UNK_11048da08;
  func_0x000107c613fc(&UNK_11048da08,0x18,7);
  lStack_d8 = unaff_x20;
  func_0x000107c61644(puVar6 + 0x10,unaff_x20);
  uVar12 = 0x112d445a8;
  puStack_118 = puVar9;
  lStack_110 = lVar5;
  puStack_a0 = puVar6;
  lStack_98 = lVar5;
  puStack_90 = puVar9;
  func_0x0001000285a8(0x112d445a8,&UNK_10d990150);
  puVar9 = &uStack_b0;
  func_0x000100087bd4(alStack_70,0x101e4b8b4,puVar9,uVar12);
  func_0x000107c61574(puVar6);
  if (alStack_70[0] != 0) {
    lVar5 = *(long *)(alStack_70[0] + 0x10);
    lStack_130 = alStack_70[0];
    lStack_148 = lVar15;
    pcStack_140 = pcVar14;
    plStack_128 = param_1;
    if (lVar5 != 0) {
      puVar13 = (undefined8 *)(alStack_70[0] + 0x28);
      lStack_d0 = lVar11 - extraout_x12_02;
      do {
        lVar11 = puVar13[-1];
        puVar9 = (undefined8 *)*puVar13;
        uVar12 = *(undefined8 *)(lStack_d8 + 0x20);
        puVar6 = &UNK_11048d9e0;
        lStack_c0 = lVar5;
        func_0x000107c613fc(&UNK_11048d9e0,0x18,7);
        func_0x000107c61644(puVar6 + 0x10,uVar12);
        puStack_b8 = puVar9;
        puStack_a0 = puVar6;
        lStack_98 = lVar11;
        puStack_90 = puVar9;
        func_0x000107c61434(puVar9);
        lVar1 = lStack_d0;
        func_0x000100087bd4(lStack_d0,0x101e4b8c8,&uStack_b0,lStack_f0);
        func_0x000107c61574(puVar6);
        lVar2 = lStack_c8;
        lVar15 = lStack_e0;
        lVar11 = lStack_e8;
        (**(code **)(lStack_e8 + 0x38))(lStack_c8,1,1,lStack_e0);
        lVar5 = (long)*(int *)(lStack_f8 + 0x30);
        FUN_101e49d50(lVar1,lVar16,0x112e32328,&UNK_10da1b750);
        FUN_101e49d50(lVar2,lVar16 + lVar5,0x112e32328,&UNK_10da1b750);
        pcVar14 = *(code **)(lVar11 + 0x30);
        lVar11 = lVar16;
        (*pcVar14)(lVar16,1,lVar15);
        uVar10 = uStack_100;
        if ((int)lVar11 == 1) {
          FUN_101e4b2d8(lVar2,0x112e32328,&UNK_10da1b750);
          FUN_101e4b2d8(lVar1,0x112e32328,&UNK_10da1b750);
          lVar5 = lVar16 + lVar5;
          (*pcVar14)(lVar5,1,lVar15);
          if ((int)lVar5 == 1) {
            FUN_101e4b2d8(lVar16,0x112e32328,&UNK_10da1b750);
            func_0x000107c6142c(puStack_b8);
LAB_101e3faf8:
            func_0x000107c6142c(lStack_130);
            param_1 = plStack_128;
            goto LAB_101e3fb0c;
          }
LAB_101e3f7b0:
          puVar9 = (undefined8 *)0x112e32320;
          FUN_101e4b2d8(lVar16,0x112e32320,&UNK_10da1b8d0);
          func_0x000107c6142c(puStack_b8);
        }
        else {
          FUN_101e49d50(lVar16,uStack_100,0x112e32328,&UNK_10da1b750);
          lVar11 = lVar16 + lVar5;
          (*pcVar14)(lVar11,1,lVar15);
          lVar15 = lStack_108;
          if ((int)lVar11 == 1) {
            FUN_101e4b2d8(lStack_c8,0x112e32328,&UNK_10da1b750);
            FUN_101e4b2d8(lStack_d0,0x112e32328,&UNK_10da1b750);
            FUN_101e3cee4(uVar10);
            goto LAB_101e3f7b0;
          }
          func_0x000101e3cf20(lVar16 + lVar5,lStack_108);
          uVar7 = uVar10;
          func_0x000103b2dc78(uVar10,lVar15);
          FUN_101e3cee4(lVar15);
          FUN_101e4b2d8(lStack_c8,0x112e32328,&UNK_10da1b750);
          FUN_101e4b2d8(lStack_d0,0x112e32328,&UNK_10da1b750);
          FUN_101e3cee4(uVar10);
          puVar9 = (undefined8 *)0x112e32328;
          FUN_101e4b2d8(lVar16,0x112e32328,&UNK_10da1b750);
          func_0x000107c6142c(puStack_b8);
          if ((uVar7 & 1) != 0) goto LAB_101e3faf8;
        }
        puVar13 = puVar13 + 2;
        lVar5 = lStack_c0 + -1;
      } while (lVar5 != 0);
    }
    lVar5 = lStack_130;
    func_0x000107c6142c();
    param_1 = plStack_128;
    uVar12 = *(undefined8 *)(lStack_d8 + 0x20);
    func_0x000103b252a4();
    puVar6 = &UNK_11048d9e0;
    func_0x000107c613fc(&UNK_11048d9e0,0x18,7);
    func_0x000107c61644(puVar6 + 0x10,uVar12);
    lVar11 = lStack_120;
    puStack_a0 = puVar6;
    lStack_98 = lVar5;
    puStack_90 = puVar9;
    func_0x000100087bd4(lStack_120,0x101e4b8dc,&uStack_b0,lStack_f0);
    func_0x000107c6142c(puVar9);
    func_0x000107c61574(puVar6);
    lVar15 = lVar11;
    (**(code **)(lStack_e8 + 0x30))(lVar11,1,lStack_e0);
    lVar5 = lStack_148;
    if ((int)lVar15 != 1) {
      func_0x000101e3cf20(lVar11,lStack_148);
      func_0x0001000285a8(0x112e324d0,&UNK_10da1b8f0);
      pcVar14 = pcStack_140;
      func_0x000101e3cf64(lVar5,pcStack_140);
      func_0x000107c6159c(pcVar14,lStack_138,0);
      pcVar4 = pcVar14;
      func_0x000100854cb0(pcVar14);
      FUN_101e4b2d8(pcVar14,0x112e324c0,&UNK_10da1b8e8);
      FUN_101e3cee4(lVar5);
      return pcVar4;
    }
    FUN_101e4b2d8(lVar11,0x112e32328,&UNK_10da1b750);
  }
LAB_101e3fb0c:
  func_0x000103bbb728(0);
  uStack_b0 = 0;
  pcStack_a8 = (code *)0xe000000000000000;
  func_0x000107c602fc(0x19);
  func_0x000107c6142c(pcStack_a8);
  uStack_b0 = 0xd000000000000017;
  pcStack_a8 = (code *)0x800000010f014c60;
  func_0x000107c5fb78(lStack_110,puStack_118);
  pcVar14 = pcStack_a8;
  uVar12 = uStack_b0;
  func_0x000103bbb254(uStack_b0,pcStack_a8);
  func_0x000107c6142c(pcVar14);
  puVar6 = &UNK_11048da08;
  func_0x000107c613fc(&UNK_11048da08,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,lStack_d8);
  puVar8 = &UNK_11048daf8;
  func_0x000107c613fc(&UNK_11048daf8,0x58,7);
  lVar5 = *param_1;
  lVar15 = param_1[3];
  lVar11 = param_1[2];
  *(long *)(puVar8 + 0x18) = param_1[1];
  *(long *)(puVar8 + 0x10) = lVar5;
  *(long *)(puVar8 + 0x28) = lVar15;
  *(long *)(puVar8 + 0x20) = lVar11;
  lVar5 = param_1[4];
  *(long *)(puVar8 + 0x38) = param_1[5];
  *(long *)(puVar8 + 0x30) = lVar5;
  *(short *)(puVar8 + 0x40) = (short)param_1[6];
  *(undefined8 *)(puVar8 + 0x48) = uVar12;
  *(undefined **)(puVar8 + 0x50) = puVar6;
  func_0x0001000285a8(0x112e324d8,&UNK_10da1b8f8);
  func_0x000107c613fc();
  FUN_101e3a290(param_1,&uStack_b0);
  pcVar14 = FUN_101e49e88;
  func_0x0001000b64ac(FUN_101e49e88,puVar8);
  return pcVar14;
}



/* Entry: 101e4000c; end: 101e4019f;  */

void FUN_101e4000c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [16];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  puVar3 = &UNK_11048d9e0;
  func_0x000107c613fc(&UNK_11048d9e0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,uVar4);
  uVar4 = 0x112d518a8;
  puStack_70 = puVar3;
  uStack_68 = uVar1;
  uStack_60 = uVar2;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x000100087bd4(auStack_90,0x101e49c78,auStack_80,uVar4);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11048da08;
  func_0x000107c613fc(&UNK_11048da08,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uVar4 = 0x112e324b8;
  puStack_70 = puVar3;
  uStack_68 = uVar1;
  uStack_60 = uVar2;
  func_0x0001000285a8(0x112e324b8,&UNK_10da1b8d8);
  func_0x000100087bd4(auStack_90,0x101e49c94,auStack_80,uVar4);
  uVar4 = auStack_90[0];
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  if ((*(byte *)((long)param_1 + 0x31) & 1) != 0) {
    puVar3 = &UNK_11048da08;
    func_0x000107c613fc(&UNK_11048da08,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    uVar4 = 0x112d445a8;
    puStack_70 = puVar3;
    uStack_68 = uVar1;
    uStack_60 = uVar2;
    func_0x0001000285a8(0x112d445a8,&UNK_10d990150);
    func_0x000100087bd4(auStack_90,0x101e49cb0,auStack_80,uVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c6142c(auStack_90[0]);
  }
  return;
}



/* Entry: 101e401a0; end: 101e405a3;  */

void FUN_101e401a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar9;
  long extraout_x12;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long alStack_120 [3];
  undefined8 *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e0 [16];
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar12 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  lStack_f8 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)alStack_120 - extraout_x8;
  lVar3 = 0;
  func_0x000103b2dc40();
  lStack_100 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_100 + 0x40));
  puVar9 = (undefined8 *)(lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puStack_108 = puVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  alStack_120[2] = (long)puVar9 - extraout_x12;
  lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  if (lVar12 != 0) {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
    alStack_120[1] = *(undefined8 *)(unaff_x20 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    lStack_f0 = param_1;
    do {
      uStack_98 = puVar9[1];
      uStack_a0 = *puVar9;
      uStack_88 = puVar9[3];
      uStack_90 = puVar9[2];
      uStack_78 = puVar9[5];
      uStack_80 = puVar9[4];
      uStack_70 = puVar9[6];
      puVar8 = auStack_e0;
      FUN_101e49e18(&uStack_a0);
      puVar4 = &uStack_a0;
      func_0x000103b25150();
      puVar5 = &UNK_11048d9e0;
      func_0x000107c613fc(&UNK_11048d9e0,0x18,7);
      func_0x000107c61644(puVar5 + 0x10,uVar1);
      puStack_d0 = puVar5;
      puStack_c8 = puVar4;
      puStack_c0 = puVar8;
      func_0x000100087bd4(lVar11,0x101e4b954,auStack_e0,lStack_f8);
      func_0x000107c6142c(puVar8);
      func_0x000107c61574(puVar5);
      lVar6 = lVar11;
      (**(code **)(lStack_100 + 0x30))(lVar11,1,lVar3);
      lVar2 = alStack_120[2];
      if ((int)lVar6 == 1) {
        func_0x000101e49e54(&uStack_a0);
        FUN_101e4b2d8(lVar11,0x112e32328,&UNK_10da1b750);
      }
      else {
        func_0x000101e3cf20(lVar11,alStack_120[2]);
        puVar4 = puStack_108;
        func_0x000101e3cf64(lVar2,puStack_108);
        puVar7 = puVar4;
        func_0x000107c614c4(puVar4,lVar3);
        if ((int)puVar7 == 1) {
          uVar10 = *puVar4;
          func_0x000107c3f494(alStack_120[1]);
          func_0x000101e49e54(&uStack_a0);
          func_0x000107c615e8(uVar10);
          func_0x000101e3cee4(lVar2);
        }
        else {
          func_0x000101e3cee4(lVar2);
          func_0x000101e49e54(&uStack_a0);
          func_0x000101e3cee4(puVar4);
        }
      }
      puVar9 = puVar9 + 7;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



/* Entry: 101e405a4; end: 101e406a7;  */

void FUN_101e405a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [16];
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((*(byte *)((long)param_1 + 0x31) & 1) == 0) {
    func_0x000103b252ec();
  }
  else {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    puVar3 = &UNK_11048da08;
    func_0x000107c613fc(&UNK_11048da08,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    uVar6 = 0x112d445a8;
    puStack_60 = puVar3;
    uStack_58 = uVar1;
    uStack_50 = uVar2;
    func_0x0001000285a8(0x112d445a8,&UNK_10d990150);
    func_0x000100087bd4(&lStack_48,0x101e49c5c,auStack_70,uVar6);
    func_0x000107c61574(puVar3);
    if (lStack_48 == 0) {
      lVar4 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      uVar6 = 0x30;
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      lVar5 = lVar4;
      func_0x000103b252a4();
      *(long *)(lVar4 + 0x20) = lVar5;
      *(undefined8 *)(lVar4 + 0x28) = uVar6;
    }
  }
  return;
}



/* Entry: 101e406a8; end: 101e407ef;  */

undefined4 FUN_101e406a8(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  long extraout_x8;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  
  lVar2 = 0;
  func_0x000103b2dc40();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  plVar7 = (long *)(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000101e3cf64(param_1,plVar7);
  plVar3 = plVar7;
  func_0x000107c614c4(plVar7,lVar2);
  if ((int)plVar3 == 0) {
    func_0x000101e3cee4(plVar7);
  }
  else {
    if ((int)plVar3 == 1) {
      lVar8 = *plVar7;
      lVar2 = lVar8;
      func_0x000107c4d444();
      func_0x000107c61180();
      func_0x000107c615e8(lVar8);
      goto LAB_101e40768;
    }
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(plVar7,lVar2);
  }
  lVar2 = 0;
LAB_101e40768:
  lVar8 = lVar2;
  func_0x000107c51cb8(lVar2);
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c3fa04(uVar4);
  func_0x000107c61180();
  func_0x0001044d77a8(0);
  lVar5 = lVar2;
  func_0x0001044d6abc(lVar2,lVar8,uVar4);
  func_0x000107c61170(lVar8);
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(lVar2);
  uVar6 = 1;
  if (lVar5 != 2) {
    uVar6 = 2;
  }
  uVar1 = 0;
  if (lVar5 != 1) {
    uVar1 = uVar6;
  }
  return uVar1;
}



/* Entry: 101e407f0; end: 101e4080f;  */

void FUN_101e407f0(void)

{
  FUN_101e3f39c();
  return;
}



/* Entry: 101e40810; end: 101e4089f;  */

undefined8 * FUN_101e40810(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [56];
  
  puVar1 = &UNK_11048da30;
  func_0x000107c613fc(&UNK_11048da30,0x42,7);
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  *(undefined8 *)(puVar1 + 0x18) = param_1[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x28) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  uVar2 = param_1[4];
  *(undefined8 *)(puVar1 + 0x38) = param_1[5];
  *(undefined8 *)(puVar1 + 0x30) = uVar2;
  *(undefined2 *)(puVar1 + 0x40) = *(undefined2 *)(param_1 + 6);
  FUN_101e3a290(param_1,auStack_68);
  FUN_101e40ba0(param_1,FUN_101e49ccc,puVar1);
  func_0x000107c61574(puVar1);
  return param_1;
}



/* Entry: 101e408a0; end: 101e408bf;  */

void FUN_101e408a0(void)

{
  FUN_101e4000c();
  return;
}



/* Entry: 101e408c0; end: 101e4099f;  */

uint FUN_101e408c0(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *unaff_x20;
  uVar2 = param_1;
  FUN_101e405a4();
  func_0x000107c6157c(uVar4);
  uVar3 = uVar2;
  FUN_101e4988c(uVar2,uVar4);
  func_0x000107c6142c(uVar2);
  func_0x000107c61574(uVar4);
  if ((uVar3 & 1) == 0) {
    func_0x000101e4040c(param_1);
    uVar1 = (uint)param_1 & 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 101e409a0; end: 101e409c3;  */

uint FUN_101e409a0(uint param_1)

{
  FUN_101e406a8();
  return param_1 & 0xff;
}



/* Entry: 101e409c4; end: 101e40a8f; -[_TtC32SingleSnapPlayerMediaServiceImpl29SingleSnapPlayerMediaResolver resolveMediaForSnap:] */

void FUN_101e409c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_a0 [56];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  func_0x000103b2bff0(&uStack_68,param_3);
  puVar1 = &UNK_11048e368;
  func_0x000107c613fc(&UNK_11048e368,0x42,7);
  *(undefined8 *)(puVar1 + 0x18) = uStack_60;
  *(undefined8 *)(puVar1 + 0x10) = uStack_68;
  *(undefined8 *)(puVar1 + 0x28) = uStack_50;
  *(undefined8 *)(puVar1 + 0x20) = uStack_58;
  *(undefined8 *)(puVar1 + 0x38) = uStack_40;
  *(undefined8 *)(puVar1 + 0x30) = uStack_48;
  *(undefined2 *)(puVar1 + 0x40) = uStack_38;
  FUN_101e3a290(&uStack_68,auStack_a0);
  puVar2 = &uStack_68;
  FUN_101e40ba0(puVar2,FUN_101e4b854,puVar1);
  func_0x000107c61574(puVar1);
  FUN_101ad914c(&uStack_68);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101e40a90; end: 101e40b9f; -[_TtC32SingleSnapPlayerMediaServiceImpl29SingleSnapPlayerMediaResolver resolveMediaForSnap:onComplete:] */

void FUN_101e40a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [56];
  
  func_0x000107c60bc4();
  puVar1 = &UNK_11048e340;
  func_0x000107c613fc(&UNK_11048e340,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  func_0x000103b2bff0(auStack_68,param_3);
  puVar2 = auStack_68;
  FUN_101e40ba0(puVar2,FUN_101e4b820,puVar1);
  FUN_101ad914c(auStack_68);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101e40ba0; end: 101e414d7;  */

undefined * FUN_101e40ba0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined *puVar8;
  long **pplVar9;
  undefined8 unaff_x20;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  
  func_0x000103bbb728(0);
  uStack_a0 = 0;
  uStack_98 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c6142c(uStack_98);
  uStack_a0 = 0xd000000000000010;
  uStack_98 = 0x800000010f014bd0;
  uVar12 = *param_1;
  uVar14 = param_1[1];
  func_0x000107c5fb78(uVar12,uVar14);
  uVar6 = uStack_98;
  uVar2 = uStack_a0;
  func_0x000103bbb254(uStack_a0,uStack_98);
  func_0x000107c6142c(uVar6);
  puVar3 = &UNK_11048da08;
  func_0x000107c613fc(&UNK_11048da08,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uVar6 = 0x112e324b8;
  puStack_90 = puVar3;
  uStack_88 = uVar12;
  uStack_80 = uVar14;
  func_0x0001000285a8(0x112e324b8,&UNK_10da1b8d8);
  func_0x000100087bd4(&plStack_d0,FUN_101e49cd0,&uStack_a0,uVar6);
  func_0x000107c61574(puVar3);
  plVar7 = plStack_d0;
  if (plStack_d0 == (long *)0x0) {
    puVar4 = param_1;
    FUN_101e3f39c(param_1);
    puVar3 = &UNK_11048da08;
    func_0x000107c613fc(&UNK_11048da08,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,unaff_x20);
    puVar5 = &UNK_11048da58;
    func_0x000107c613fc(&UNK_11048da58,0x4a,7);
    *(undefined **)(puVar5 + 0x10) = puVar3;
    uVar6 = *param_1;
    uVar13 = param_1[3];
    uVar11 = param_1[2];
    *(undefined8 *)(puVar5 + 0x20) = param_1[1];
    *(undefined8 *)(puVar5 + 0x18) = uVar6;
    *(undefined8 *)(puVar5 + 0x30) = uVar13;
    *(undefined8 *)(puVar5 + 0x28) = uVar11;
    uVar6 = param_1[4];
    *(undefined8 *)(puVar5 + 0x40) = param_1[5];
    *(undefined8 *)(puVar5 + 0x38) = uVar6;
    *(undefined2 *)(puVar5 + 0x48) = *(undefined2 *)(param_1 + 6);
    FUN_101e3a290(param_1,&uStack_a0);
    pcVar1 = FUN_101e49cec;
    func_0x0001000c0ebc(FUN_101e49cec,puVar5);
    func_0x000107c61574(puVar4);
    func_0x000107c61574();
    func_0x000101e3f134();
    if (((((ulong)puVar5 & 1) == 0) || (*(ulong *)(param_1[2] + 0x10) < 2)) &&
       (func_0x000101e3f09c(), ((ulong)puVar5 & 1) == 0)) {
      plVar7 = (long *)0x1;
      func_0x00010487fe40();
    }
    else {
      uVar6 = 1;
      func_0x00010061b458(1);
      plVar7 = (long *)0x1;
      func_0x00010487fe40();
      func_0x000107c61574(uVar6);
    }
    func_0x000107c6157c(plVar7);
    puVar3 = &UNK_11048da08;
    func_0x000107c613fc(&UNK_11048da08,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,unaff_x20);
    uVar6 = 0x112d518a8;
    puStack_90 = puVar3;
    uStack_88 = uVar12;
    uStack_80 = uVar14;
    plStack_78 = plVar7;
    func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
    func_0x000100087bd4(&plStack_d0,FUN_101e49cf8,&uStack_a0,uVar6);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(plVar7);
    func_0x000107c61574(pcVar1);
  }
  puVar3 = &UNK_11048da80;
  func_0x000107c613fc(&UNK_11048da80,0x60,7);
  uVar6 = *param_1;
  uVar14 = param_1[3];
  uVar12 = param_1[2];
  *(undefined8 *)(puVar3 + 0x18) = param_1[1];
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  *(undefined8 *)(puVar3 + 0x28) = uVar14;
  *(undefined8 *)(puVar3 + 0x20) = uVar12;
  uVar6 = param_1[4];
  *(undefined8 *)(puVar3 + 0x38) = param_1[5];
  *(undefined8 *)(puVar3 + 0x30) = uVar6;
  *(undefined2 *)(puVar3 + 0x40) = *(undefined2 *)(param_1 + 6);
  *(undefined8 *)(puVar3 + 0x48) = uVar2;
  *(undefined8 *)(puVar3 + 0x50) = param_2;
  *(undefined8 *)(puVar3 + 0x58) = param_3;
  pcVar10 = *(code **)(*plVar7 + 0x60);
  FUN_101e3a290(param_1,&uStack_a0);
  func_0x000107c6157c(param_3);
  pcVar1 = FUN_101e49d14;
  puVar8 = puVar3;
  (*pcVar10)();
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11048da08;
  func_0x000107c613fc(&UNK_11048da08,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,unaff_x20);
  puVar5 = &UNK_11048daa8;
  func_0x000107c613fc(&UNK_11048daa8,0x60,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  uVar6 = *param_1;
  uVar14 = param_1[3];
  uVar12 = param_1[2];
  *(undefined8 *)(puVar5 + 0x20) = param_1[1];
  *(undefined8 *)(puVar5 + 0x18) = uVar6;
  *(undefined8 *)(puVar5 + 0x30) = uVar14;
  *(undefined8 *)(puVar5 + 0x28) = uVar12;
  uVar6 = param_1[4];
  *(undefined8 *)(puVar5 + 0x40) = param_1[5];
  *(undefined8 *)(puVar5 + 0x38) = uVar6;
  *(undefined2 *)(puVar5 + 0x48) = *(undefined2 *)(param_1 + 6);
  *(code **)(puVar5 + 0x50) = pcVar1;
  *(undefined **)(puVar5 + 0x58) = puVar8;
  puVar8 = PTR_PTR_1126afd78;
  func_0x000107c610f8();
  uStack_b0 = 0x101e49d24;
  plStack_d0 = (long *)PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_1000f6b44;
  puStack_b8 = &UNK_11048dac0;
  pplVar9 = &plStack_d0;
  puStack_a8 = puVar5;
  func_0x000107c60bc4(pplVar9);
  puVar5 = puStack_a8;
  FUN_101e3a290(param_1,&uStack_a0);
  func_0x000107c6157c(puVar3);
  func_0x000107c615f0(pcVar1);
  func_0x000107c61574(puVar5);
  func_0x000107c45b74();
  func_0x000107c60bd0(pplVar9);
  func_0x000107c61574(puVar3);
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c61574(plVar7);
    func_0x000107c615e8(pcVar1);
    return puVar8;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e40ff8);
  (*pcVar1)();
}



/* Entry: 101e414d8; end: 101e41693;  */

void FUN_101e414d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  undefined8 auStack_70 [2];
  undefined1 auStack_60 [16];
  
  lVar4 = 0x112e324c0;
  func_0x0001000285a8(0x112e324c0,&UNK_10da1b8e8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  puVar7 = (undefined8 *)((long)auStack_70 + lVar3);
  FUN_101e49d50(param_1,puVar7,0x112e324c0,&UNK_10da1b8e8);
  puVar5 = puVar7;
  func_0x000107c614c4(puVar7,lVar4);
  if ((int)puVar5 == 1) {
    uVar8 = *puVar7;
    uVar1 = *(undefined8 *)((long)auStack_70 + lVar3 + 8);
    uVar2 = auStack_60[lVar3];
    func_0x0001000298f0();
    func_0x000107c61428();
    puVar5 = (undefined8 *)*puVar5;
    func_0x000107c61174();
    func_0x000100069b5c(param_3);
    func_0x000107c61170();
    FUN_101e49d98();
    puVar6 = &UNK_1106d42b0;
    func_0x000107c613f8(&UNK_1106d42b0,puVar5,0,0);
    *puVar5 = uVar8;
    puVar5[1] = uVar1;
    *(undefined1 *)(puVar5 + 2) = uVar2;
    FUN_101e49dd8(uVar8,uVar1,uVar2);
    (*param_4)(2,puVar6);
    func_0x000107c614ac(puVar6);
    func_0x000101e49df8(uVar8,uVar1,uVar2);
  }
  else {
    FUN_101e4b2d8(puVar7,0x112e324c0,&UNK_10da1b8e8);
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar8 = *puVar7;
    func_0x000107c61174(uVar8);
    func_0x000100069b5c(param_3);
    func_0x000107c61170(uVar8);
    (*param_4)(1,0);
  }
  return;
}



/* Entry: 101e41694; end: 101e416ff;  */

void FUN_101e41694(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c61574();
    func_0x000107c614f0(param_3);
    (**(code **)(param_4 + 8))();
  }
  return;
}



/* Entry: 101e41700; end: 101e4170b; -[_TtC32SingleSnapPlayerMediaServiceImpl29SingleSnapPlayerMediaResolver clearCachedMediaForSnap:] */

void FUN_101e41700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [56];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  func_0x000103b2bff0(auStack_68,param_3);
  FUN_101e4000c(auStack_68);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
  FUN_101ad914c(auStack_68);
  return;
}



/* Entry: 101e4170c; end: 101e41717; -[_TtC32SingleSnapPlayerMediaServiceImpl29SingleSnapPlayerMediaResolver cancelContentResultForSnap:] */

void FUN_101e4170c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [56];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  func_0x000103b2bff0(auStack_68,param_3);
  FUN_101e401a0(auStack_68);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
  FUN_101ad914c(auStack_68);
  return;
}



/* Entry: 101e41718; end: 101e4178b;  */

void FUN_101e41718(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined1 auStack_68 [56];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  func_0x000103b2bff0(auStack_68,param_3);
  (*param_4)(auStack_68);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
  FUN_101ad914c(auStack_68);
  return;
}



/* Entry: 101e4178c; end: 101e41847; -[_TtC32SingleSnapPlayerMediaServiceImpl29SingleSnapPlayerMediaResolver isMediaCachedForSnap:] */

uint FUN_101e4178c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 auStack_68 [56];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  func_0x000103b2bff0(auStack_68,param_3);
  puVar1 = auStack_68;
  FUN_101e405a4();
  func_0x000107c6157c(param_1);
  puVar2 = puVar1;
  FUN_101e4988c(puVar1,param_1);
  func_0x000107c6142c(puVar1);
  func_0x000107c61574(param_1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = auStack_68;
    func_0x000101e4040c(puVar1);
    uVar3 = (uint)puVar1;
  }
  else {
    uVar3 = 1;
  }
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
  FUN_101ad914c(auStack_68);
  return uVar3 & 1;
}



/* Entry: 101e41848; end: 101e418eb; -[_TtC32SingleSnapPlayerMediaServiceImpl29SingleSnapPlayerMediaResolver isSnapReadyForDisplay:] */

uint FUN_101e41848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [56];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  func_0x000103b2bff0(auStack_68,param_3);
  puVar1 = auStack_68;
  FUN_101e405a4(puVar1);
  func_0x000107c6157c(param_1);
  puVar2 = puVar1;
  FUN_101e4988c(puVar1,param_1);
  func_0x000107c6142c(puVar1);
  func_0x000107c61574(param_1);
  FUN_101ad914c(auStack_68);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
  return (uint)puVar2 & 1;
}



/* Entry: 101e418ec; end: 101e42c97;  */

void FUN_101e418ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
                  ,undefined8 *param_10,undefined8 param_11)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined8 uStack_130;
  uint uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [32];
  
  puStack_108 = param_10;
  lVar10 = 0x112e324c0;
  uStack_130 = param_3;
  uStack_124 = param_4;
  uStack_120 = param_6;
  uStack_118 = param_7;
  uStack_110 = param_2;
  uStack_f8 = param_8;
  func_0x0001000285a8(0x112e324c0,&UNK_10da1b8e8);
  lStack_100 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar12 = (undefined8 *)((long)&uStack_130 + lVar1);
  lVar10 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)puVar12 - extraout_x8_00;
  lVar3 = 0;
  func_0x000103b2dc40();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar14 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_101e49d50(param_1,lVar9,0x112e32328,&UNK_10da1b750);
  lVar10 = lVar9;
  (**(code **)(lVar13 + 0x30))(lVar9,1,lVar3);
  if ((int)lVar10 != 1) {
    func_0x000101e3cf20(lVar9,lVar14);
    func_0x000107c61428(param_5 + 0x10,auStack_80,0,0);
    lVar10 = param_5 + 0x10;
    func_0x000107c61648();
    if (lVar10 != 0) {
      uVar11 = *(undefined8 *)(lVar10 + 0x20);
      func_0x000107c6157c(uVar11);
      func_0x000107c61574(lVar10);
      FUN_101e3acec(lVar14,uStack_120,uStack_118);
      func_0x000107c61574(uVar11);
    }
    func_0x000101e3cf64(lVar14,puVar12);
    func_0x000107c6159c(puVar12,lStack_100,0);
    func_0x000100087f6c(puVar12);
    FUN_101e4b2d8(puVar12,0x112e324c0,&UNK_10da1b8e8);
    if (*(long *)(param_9 + 8) == 0) {
      func_0x000107c61428(param_5 + 0x10,&uStack_b0,0,0);
      param_5 = param_5 + 0x10;
      func_0x000107c61648();
      if (param_5 != 0) {
        puVar5 = &UNK_11048da08;
        func_0x000107c613fc(&UNK_11048da08,0x18,7);
        func_0x000107c61644(puVar5 + 0x10,param_5);
        puVar6 = &UNK_11048e160;
        func_0x000107c613fc(&UNK_11048e160,0x58,7);
        *(undefined **)(puVar6 + 0x10) = puVar5;
        uVar11 = *puStack_108;
        uVar7 = puStack_108[3];
        uVar4 = puStack_108[2];
        *(undefined8 *)(puVar6 + 0x20) = puStack_108[1];
        *(undefined8 *)(puVar6 + 0x18) = uVar11;
        *(undefined8 *)(puVar6 + 0x30) = uVar7;
        *(undefined8 *)(puVar6 + 0x28) = uVar4;
        uVar11 = puStack_108[4];
        *(undefined8 *)(puVar6 + 0x40) = puStack_108[5];
        *(undefined8 *)(puVar6 + 0x38) = uVar11;
        *(undefined2 *)(puVar6 + 0x48) = *(undefined2 *)(puStack_108 + 6);
        *(undefined8 *)(puVar6 + 0x50) = 0;
        FUN_101e3a290(puStack_108,&uStack_f0);
        func_0x000107c6157c(puVar5);
        uVar11 = 0x101e4b9a8;
LAB_101e41d68:
        func_0x000103b2581c(uVar11,puVar6);
        func_0x000107c61574(param_5);
        func_0x000107c61574(puVar6);
        func_0x000101e3cee4(lVar14);
        func_0x000107c61574(puVar5);
        return;
      }
    }
    else if (*(long *)(param_9 + 8) == 1) {
      if (*(long *)(param_9 + 0x10) == 3) {
        func_0x000107c61428(param_5 + 0x10,&uStack_f0,0,0);
        param_5 = param_5 + 0x10;
        func_0x000107c61648();
        if (param_5 != 0) {
          func_0x000101e41f94(puStack_108,lVar14,param_11,1);
          func_0x000107c61574(param_5);
        }
      }
      else {
        func_0x000107c61428(param_5 + 0x10,&uStack_b0,0,0);
        param_5 = param_5 + 0x10;
        func_0x000107c61648();
        if (param_5 != 0) {
          puVar5 = &UNK_11048da08;
          func_0x000107c613fc(&UNK_11048da08,0x18,7);
          func_0x000107c61644(puVar5 + 0x10,param_5);
          puVar6 = &UNK_11048e188;
          func_0x000107c613fc(&UNK_11048e188,0x58,7);
          puVar12 = puStack_108;
          *(undefined **)(puVar6 + 0x10) = puVar5;
          uVar11 = *puStack_108;
          uVar7 = puStack_108[3];
          uVar4 = puStack_108[2];
          *(undefined8 *)(puVar6 + 0x20) = puStack_108[1];
          *(undefined8 *)(puVar6 + 0x18) = uVar11;
          *(undefined8 *)(puVar6 + 0x30) = uVar7;
          *(undefined8 *)(puVar6 + 0x28) = uVar4;
          uVar11 = puStack_108[4];
          *(undefined8 *)(puVar6 + 0x40) = puStack_108[5];
          *(undefined8 *)(puVar6 + 0x38) = uVar11;
          *(undefined2 *)(puVar6 + 0x48) = *(undefined2 *)(puStack_108 + 6);
          *(undefined8 *)(puVar6 + 0x50) = 1;
          func_0x000107c6157c(puVar5);
          FUN_101e3a290(puVar12,&uStack_f0);
          uVar11 = 0x101e4b9ac;
          goto LAB_101e41d68;
        }
      }
    }
    func_0x000101e3cee4(lVar14);
    return;
  }
  FUN_101e4b2d8(lVar9,0x112e32328,&UNK_10da1b750);
  uVar2 = uStack_124;
  uVar11 = uStack_130;
  lVar10 = *(long *)(param_9 + 8);
  if ((lVar10 - 1U & 0xfffffffffffffffd) != 0) {
    return;
  }
  uVar4 = uStack_110;
  uVar7 = uStack_130;
  uVar15 = uStack_124;
  if (((uStack_124 ^ 0xffffffff) & 0xff) != 0) goto LAB_101e41e5c;
  uStack_f0 = 0;
  uStack_e8 = 0xe000000000000000;
  func_0x000107c602fc(0x1e);
  func_0x000107c6142c(uStack_e8);
  uStack_f0 = 0xd000000000000016;
  uStack_e8 = 0x800000010f014f30;
  func_0x000107c5fb78(*puStack_108,puStack_108[1]);
  func_0x000107c5fb78(0x7e,0xe100000000000000);
  if (lVar10 < 2) {
    if (lVar10 == 0) {
      uVar7 = 0xe700000000000000;
      uVar4 = 0x676e6964616f6c;
    }
    else if (lVar10 == 1) {
      uVar7 = 0xe400000000000000;
      uVar4 = 0x65736162;
    }
    else {
LAB_101e41e08:
      uVar7 = 0xe700000000000000;
      uVar4 = 0x6e776f6e6b6e75;
    }
  }
  else if (lVar10 == 2) {
    uVar7 = 0xe800000000000000;
    uVar4 = 0x656c746974627573;
  }
  else if (lVar10 == 3) {
    uVar7 = 0xe700000000000000;
    uVar4 = 0x79616c7265766f;
  }
  else {
    if (lVar10 != 4) goto LAB_101e41e08;
    uVar7 = 0xeb00000000646574;
    uVar4 = 0x726f707075736e75;
  }
  func_0x000107c5fb78(uVar4,uVar7);
  func_0x000107c6142c(uVar7);
  uVar4 = 0xe100000000000000;
  func_0x000107c5fb78(0x7e,0xe100000000000000);
  func_0x000103b24e90();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  uVar15 = 1;
  uVar4 = uStack_f0;
  uVar7 = uStack_e8;
LAB_101e41e5c:
  func_0x000107c61428(param_5 + 0x10,auStack_80,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61648();
  if (param_5 == 0) {
    FUN_101e4b460(uStack_110,uVar11,uVar2);
  }
  else {
    uVar8 = *(undefined8 *)(param_5 + 0x70);
    FUN_101e4b460(uStack_110,uVar11,uVar2);
    func_0x000107c6157c(uVar8);
    func_0x000107c61574(param_5);
    uStack_a8 = puStack_108[1];
    uStack_b0 = *puStack_108;
    uStack_e8 = puStack_108[1];
    uStack_f0 = *puStack_108;
    uStack_e0 = uVar4;
    uStack_d8 = uVar7;
    uStack_d0 = (char)uVar15;
    func_0x000100402194(&uStack_b0,auStack_90);
    FUN_101e49dd8(uVar4,uVar7,uVar15);
    func_0x000100087c34(&uStack_f0);
    func_0x000107c61574(uVar8);
    func_0x000100bcb1dc(&uStack_b0);
    func_0x000101e49df8(uVar4,uVar7,uVar15);
  }
  *puVar12 = uVar4;
  *(undefined8 *)(&stack0xfffffffffffffed8 + lVar1) = uVar7;
  *(char *)((long)&uStack_120 + lVar1) = (char)uVar15;
  func_0x000107c6159c(puVar12,lStack_100,1);
  FUN_101e49dd8(uVar4,uVar7,uVar15);
  func_0x000100087f6c(puVar12);
  func_0x000101e49df8(uVar4,uVar7,uVar15);
  FUN_101e4b2d8(puVar12,0x112e324c0,&UNK_10da1b8e8);
  return;
}



/* Entry: 101e42c98; end: 101e42d4b;  */

void FUN_101e42c98(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  
  if (param_5 != (code *)0x0) {
    func_0x000107c6157c(param_6);
    (*param_5)(param_1,param_2,param_3,param_4);
    func_0x000100cd4104(param_5,param_6);
    param_1 = param_5;
  }
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar1 = *(undefined8 *)param_1;
  func_0x000107c61174(uVar1);
  func_0x000100069b5c(param_9);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101e42d4c; end: 101e43047;  */

undefined1  [16]
FUN_101e42d4c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_c8 [24];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    pcVar7 = (code *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11048da08;
    func_0x000107c613fc(&UNK_11048da08,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,lVar1);
    func_0x000107c61574(lVar1);
    puVar6 = &UNK_11048e070;
    func_0x000107c613fc(&UNK_11048e070,0xa8,7);
    uVar8 = *param_5;
    uVar11 = param_5[3];
    uVar9 = param_5[2];
    *(undefined8 *)(puVar6 + 0x38) = param_5[1];
    *(undefined8 *)(puVar6 + 0x30) = uVar8;
    *(undefined8 *)(puVar6 + 0x48) = uVar11;
    *(undefined8 *)(puVar6 + 0x40) = uVar9;
    uVar8 = param_5[4];
    *(undefined8 *)(puVar6 + 0x58) = param_5[5];
    *(undefined8 *)(puVar6 + 0x50) = uVar8;
    uVar8 = *param_6;
    uVar11 = param_6[3];
    uVar9 = param_6[2];
    *(undefined8 *)(puVar6 + 0x70) = param_6[1];
    *(undefined8 *)(puVar6 + 0x68) = uVar8;
    uVar8 = param_6[4];
    *(undefined8 *)(puVar6 + 0x90) = param_6[5];
    *(undefined8 *)(puVar6 + 0x88) = uVar8;
    *(undefined8 *)(puVar6 + 0x10) = param_7;
    *(undefined8 *)(puVar6 + 0x18) = param_3;
    *(undefined8 *)(puVar6 + 0x20) = param_4;
    *(undefined **)(puVar6 + 0x28) = puVar2;
    *(undefined8 *)(puVar6 + 0x60) = param_5[6];
    *(undefined2 *)(puVar6 + 0x98) = *(undefined2 *)(param_6 + 6);
    *(undefined8 *)(puVar6 + 0x80) = uVar11;
    *(undefined8 *)(puVar6 + 0x78) = uVar9;
    *(undefined8 *)(puVar6 + 0xa0) = param_1;
    func_0x000107c61434(param_4);
    FUN_101e49e18(param_5,&puStack_b0);
    FUN_101e3a290(param_6,&puStack_b0);
    func_0x000107c6157c(param_1);
    pcVar7 = FUN_101e4b4a0;
  }
  FUN_101e3e76c(param_5,param_6);
  func_0x000107c61428(param_2 + 0x10,auStack_c8,0,0);
  lVar3 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar3 + 0x10);
    func_0x000107c615f0(uVar9);
    func_0x000107c61574(lVar3);
    if (lVar1 == 0) {
      ppuVar10 = (undefined **)0x0;
    }
    else {
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      pcStack_a0 = FUN_101e43048;
      puStack_98 = &UNK_11048e0b0;
      ppuVar10 = &puStack_b0;
      pcStack_90 = pcVar7;
      puStack_88 = puVar6;
      func_0x000107c60bc4(ppuVar10);
      puVar2 = puStack_88;
      func_0x000107c6157c(puVar6);
      func_0x000107c61574(puVar2);
    }
    uVar8 = uVar9;
    func_0x000107c505fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c615e8(uVar9);
  }
  puVar2 = &UNK_11048da08;
  func_0x000107c613fc(&UNK_11048da08,0x18,7);
  func_0x000107c61428(param_2 + 0x10,&puStack_b0,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648(param_2);
  func_0x000107c61644(puVar2 + 0x10,param_2);
  func_0x000107c61574(param_2);
  puVar4 = &UNK_11048e098;
  func_0x000107c613fc(&UNK_11048e098,0x38,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  *(undefined8 *)(puVar4 + 0x28) = uVar8;
  *(undefined8 *)(puVar4 + 0x30) = param_7;
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar8);
  func_0x000107c61434(param_4);
  func_0x000107c6157c(puVar2);
  pcVar5 = FUN_101e4b4d4;
  func_0x0001000b6d50(FUN_101e4b4d4,puVar4);
  func_0x000100cd4104(pcVar7,puVar6);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(uVar8);
  auVar12._8_8_ = &PTR_DAT_1107aaa40;
  auVar12._0_8_ = pcVar5;
  return auVar12;
}



/* Entry: 101e43048; end: 101e430b7;  */

void FUN_101e43048(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101e430b8; end: 101e4314f;  */

void FUN_101e430b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  puVar1 = (undefined8 *)(param_1 + 0x10);
  func_0x000107c61648();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61574();
    if (param_4 != (undefined8 *)0x0) {
      func_0x000107c3f474();
      puVar1 = param_4;
    }
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar2 = *puVar1;
    func_0x000107c61174(uVar2);
    func_0x000100069b5c(param_5);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 101e43150; end: 101e435df;  */

undefined1  [16]
FUN_101e43150(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long extraout_x8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined8 auStack_160 [2];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [56];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = 0x112e324c0;
  func_0x0001000285a8(0x112e324c0,&UNK_10da1b8e8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar7 = (undefined8 *)((long)auStack_160 + lVar1);
  lVar12 = param_2[2];
  puVar3 = (undefined8 *)(lVar12 + 0x20);
  lVar10 = *(long *)(lVar12 + 0x10) + 1;
  puVar13 = (undefined8 *)(lVar12 + -0x18);
  do {
    puVar14 = puVar13;
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      if (*(long *)(lVar12 + 0x10) != 0) {
        puVar9 = (undefined8 *)(lVar12 + 0x30);
        puVar11 = (undefined8 *)(lVar12 + 0x38);
        uVar17 = *(undefined8 *)(lVar12 + 0x28);
        puVar15 = (undefined8 *)(lVar12 + 0x40);
        puVar7 = (undefined8 *)(lVar12 + 0x48);
        puVar13 = (undefined8 *)(lVar12 + 0x50);
        goto LAB_101e43238;
      }
      uStack_a0 = 0;
      uStack_98 = 0xe000000000000000;
      func_0x000107c602fc(0x1d);
      func_0x000107c6142c(uStack_98);
      uStack_a0 = 0x70616e732070695a;
      uStack_98 = 0xe900000000000020;
      func_0x000107c5fb78(*param_2,param_2[1]);
      func_0x000107c5fb78(0xd000000000000012,0x800000010f014c80);
      uVar17 = uStack_98;
      *puVar7 = uStack_a0;
      *(undefined8 *)((long)auStack_160 + lVar1 + 8) = uVar17;
      *(undefined1 *)((long)&uStack_150 + lVar1) = 1;
      func_0x000107c6159c(puVar7,lVar2,1);
      func_0x000100087f6c(puVar7);
      FUN_101e4b2d8(puVar7,0x112e324c0,&UNK_10da1b8e8);
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar17 = *puVar7;
      func_0x000107c61174(uVar17);
      func_0x000100069b5c(param_3);
      func_0x000107c61170(uVar17);
      func_0x0001000b6d30(0);
      func_0x000107c613fc();
      pcVar8 = FUN_101e435e0;
      func_0x0001000b6d50(FUN_101e435e0,0);
      goto LAB_101e434ac;
    }
    puVar13 = puVar14 + 7;
  } while (puVar14[8] != 1);
  puVar13 = puVar14 + 0xd;
  puVar7 = puVar14 + 0xc;
  puVar15 = puVar14 + 0xb;
  puVar11 = puVar14 + 10;
  puVar9 = puVar14 + 9;
  uVar17 = 1;
  puVar3 = puVar14 + 7;
LAB_101e43238:
  uVar16 = *puVar3;
  uVar19 = *puVar13;
  uVar18 = *puVar7;
  uVar21 = *puVar15;
  uVar20 = *puVar11;
  uVar22 = *puVar9;
  auStack_160[0] = param_1;
  func_0x000107c61434(uVar19);
  func_0x000107c61174();
  func_0x000107c61434(uVar21);
  puVar3 = &uStack_a0;
  auStack_160[1] = uVar22;
  uStack_150 = uVar20;
  uStack_148 = uVar18;
  uStack_140 = uVar17;
  uStack_a0 = uVar16;
  uStack_98 = uVar17;
  uStack_90 = uVar22;
  uStack_88 = uVar20;
  uStack_80 = uVar21;
  uStack_78 = uVar18;
  uStack_70 = uVar19;
  FUN_101e3e76c(puVar3,param_2);
  func_0x000107c61428(param_4 + 0x10,auStack_b8,0,0);
  lVar2 = param_4 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    uVar17 = 0;
  }
  else {
    uVar18 = *(undefined8 *)(lVar2 + 0x10);
    func_0x000107c615f0(uVar18);
    func_0x000107c61574(lVar2);
    puVar4 = &UNK_11048da08;
    func_0x000107c613fc(&UNK_11048da08,0x18,7);
    func_0x000107c61428(param_4 + 0x10,auStack_d0,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61648(param_4);
    func_0x000107c61644(puVar4 + 0x10,param_4);
    func_0x000107c61574(param_4);
    puVar5 = &UNK_11048db20;
    func_0x000107c613fc(&UNK_11048db20,0x60,7);
    uVar17 = auStack_160[0];
    uVar20 = *param_2;
    uVar23 = param_2[3];
    uVar22 = param_2[2];
    *(undefined8 *)(puVar5 + 0x20) = param_2[1];
    *(undefined8 *)(puVar5 + 0x18) = uVar20;
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x30) = uVar23;
    *(undefined8 *)(puVar5 + 0x28) = uVar22;
    uVar20 = param_2[4];
    *(undefined8 *)(puVar5 + 0x40) = param_2[5];
    *(undefined8 *)(puVar5 + 0x38) = uVar20;
    *(undefined2 *)(puVar5 + 0x48) = *(undefined2 *)(param_2 + 6);
    *(undefined8 *)(puVar5 + 0x50) = param_3;
    *(undefined8 *)(puVar5 + 0x58) = auStack_160[0];
    uStack_e0 = 0x101e49e94;
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0x42000000;
    pcStack_f0 = FUN_101e43bbc;
    puStack_e8 = &UNK_11048db38;
    ppuVar6 = &puStack_100;
    puStack_d8 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar4 = puStack_d8;
    FUN_101e3a290(param_2,auStack_138);
    func_0x000107c6157c(uVar17);
    func_0x000107c61574(puVar4);
    uVar17 = uVar18;
    func_0x000107c50614();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(uVar18);
  }
  puVar4 = &UNK_11048db70;
  func_0x000107c613fc(&UNK_11048db70,0x58,7);
  uVar18 = *param_2;
  uVar22 = param_2[3];
  uVar20 = param_2[2];
  *(undefined8 *)(puVar4 + 0x18) = param_2[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar18;
  *(undefined8 *)(puVar4 + 0x28) = uVar22;
  *(undefined8 *)(puVar4 + 0x20) = uVar20;
  uVar18 = param_2[4];
  *(undefined8 *)(puVar4 + 0x38) = param_2[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar18;
  *(undefined2 *)(puVar4 + 0x40) = *(undefined2 *)(param_2 + 6);
  *(undefined8 *)(puVar4 + 0x48) = uVar17;
  *(undefined8 *)(puVar4 + 0x50) = param_3;
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  FUN_101e3a290(param_2,auStack_138);
  pcVar8 = (code *)0x101e49ea4;
  func_0x0001000b6d50(0x101e49ea4,puVar4);
  func_0x000107c61170(puVar3);
  FUN_101e49eb0(uVar16,uStack_140,auStack_160[1],uStack_150,uVar21,uStack_148,uVar19);
LAB_101e434ac:
  auVar24._8_8_ = &PTR_DAT_1107aaa40;
  auVar24._0_8_ = pcVar8;
  return auVar24;
}



/* Entry: 101e435e0; end: 101e435e3;  */

void FUN_101e435e0(void)

{
  return;
}



/* Entry: 101e435e4; end: 101e4366b;  */

void FUN_101e435e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    FUN_101e4366c(param_1,param_4,param_5,param_6);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 101e4366c; end: 101e43bbb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_101e4366c(ulong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long extraout_x8;
  undefined8 unaff_x20;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *apuStack_e0 [4];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined1 uStack_61;
  
  lVar8 = 0x112e324c0;
  func_0x0001000285a8(0x112e324c0,&UNK_10da1b8e8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = -extraout_x8;
  puVar10 = (undefined8 *)((long)apuStack_e0 + lVar4 + 0x10);
  if (param_1 != 0) {
    uVar14 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar12 = *(ulong *)(uVar14 + 0x10);
    }
    else {
      uVar12 = param_1;
      if (-1 < (long)param_1) {
        uVar12 = uVar14;
      }
      func_0x000107c60480();
    }
    if (uVar12 != 0) {
      uVar13 = 0;
      apuStack_e0[2] = (undefined *)param_4;
      apuStack_e0[3] = (undefined *)param_3;
      do {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar14 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101e43a7c);
            (*pcVar7)();
          }
          uVar18 = *(ulong *)(param_1 + uVar13 * 8 + 0x20);
          func_0x000107c615f0(uVar18);
        }
        else {
          uVar18 = uVar13;
          FUN_101e493d8(uVar13,param_1);
        }
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101e43770);
          (*pcVar7)();
        }
        uVar15 = uVar13 + 1;
        uVar17 = uVar18;
        func_0x000107c40384();
        if (uVar17 == 1) goto LAB_101e43774;
        func_0x000107c615e8(uVar18);
        uVar13 = uVar13 + 1;
      } while (uVar15 != uVar12);
      uVar18 = 0;
LAB_101e43774:
      uVar13 = 0;
      do {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar14 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101e43a80);
            (*pcVar7)();
          }
          uVar17 = *(ulong *)(param_1 + uVar13 * 8 + 0x20);
          func_0x000107c615f0(uVar17);
        }
        else {
          uVar17 = uVar13;
          FUN_101e493d8(uVar13,param_1);
        }
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101e437e4);
          (*pcVar7)();
        }
        uVar16 = uVar13 + 1;
        uVar15 = uVar17;
        func_0x000107c40384();
        if (uVar15 == 3) goto LAB_101e437e8;
        func_0x000107c615e8(uVar17);
        uVar13 = uVar13 + 1;
      } while (uVar16 != uVar12);
      uVar17 = 0;
LAB_101e437e8:
      uVar14 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      uVar11 = 0x30;
      func_0x000107c613fc();
      *(undefined8 *)(uVar14 + 0x18) = 2;
      *(undefined8 *)(uVar14 + 0x10) = 1;
      uVar12 = uVar14;
      func_0x000103b252a4();
      *(ulong *)(uVar14 + 0x20) = uVar12;
      *(undefined8 *)(uVar14 + 0x28) = uVar11;
      if (uVar17 != 0) {
        func_0x000103b2526c();
        uVar13 = *(ulong *)(uVar14 + 0x10);
        uVar15 = uVar14;
        if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar13) {
          uVar15 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
          func_0x0001000d182c(uVar15,uVar13 + 1,1,uVar14);
        }
        *(ulong *)(uVar15 + 0x10) = uVar13 + 1;
        lVar1 = uVar15 + uVar13 * 0x10;
        *(ulong *)(lVar1 + 0x20) = uVar12;
        *(undefined8 *)(lVar1 + 0x28) = uVar11;
        uVar14 = uVar15;
      }
      uVar2 = *param_2;
      uVar3 = param_2[1];
      puVar9 = &UNK_11048da08;
      func_0x000107c613fc(&UNK_11048da08,0x18,7);
      func_0x000107c61644(puVar9 + 0x10,unaff_x20);
      uVar11 = 0x112d518a8;
      puStack_a0 = puVar9;
      uStack_98 = uVar2;
      uStack_90 = uVar3;
      uStack_88 = uVar14;
      func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
      func_0x000100087bd4(&uStack_61,FUN_101e49ee8,&stack0xffffffffffffff50,uVar11);
      func_0x000107c61574(puVar9);
      if (uVar18 != 0) {
        puVar9 = &UNK_11048da08;
        func_0x000107c613fc(&UNK_11048da08,0x18,7);
        func_0x000107c61644(puVar9 + 0x10,unaff_x20);
        func_0x000107c615f0(uVar17);
        func_0x000107c6157c(puVar9);
        FUN_101e3a290(param_2,&stack0xffffffffffffff50);
        puVar5 = apuStack_e0[2];
        func_0x000107c6157c(apuStack_e0[2]);
        *(undefined **)((long)apuStack_e0 + lVar4 + 8) = puVar5;
        puVar6 = apuStack_e0[3];
        *(undefined **)((long)apuStack_e0 + lVar4) = apuStack_e0[3];
        FUN_101e4a118(uVar18,param_2,puVar6,puVar5,unaff_x20,uVar17,puVar9,param_2);
        func_0x000107c61574(puVar9);
        func_0x000107c615e8(uVar18);
        func_0x000107c615ec(uVar17,2);
        FUN_101ad914c(param_2);
        func_0x000107c61574(puVar9);
        func_0x000107c6142c(uVar14);
        func_0x000107c61574(puVar5);
        return;
      }
      uStack_b0 = 0;
      uStack_a8 = 0xe000000000000000;
      func_0x000107c602fc(0x22);
      func_0x000107c6142c(uStack_a8);
      uStack_b0 = 0x70616e732070695a;
      uStack_a8 = 0xe900000000000020;
      func_0x000107c5fb78(uVar2,uVar3);
      func_0x000107c5fb78(0xd000000000000017,0x800000010f014cc0);
      uVar11 = uStack_a8;
      *puVar10 = uStack_b0;
      *(undefined8 *)((long)apuStack_e0 + lVar4 + 0x18) = uVar11;
      (&stack0xffffffffffffff40)[lVar4] = 1;
      func_0x000107c6159c(puVar10,lVar8,1);
      func_0x000100087f6c(puVar10);
      FUN_101e4b2d8(puVar10,0x112e324c0,&UNK_10da1b8e8);
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar11 = *puVar10;
      func_0x000107c61174(uVar11);
      func_0x000100069b5c(apuStack_e0[3]);
      func_0x000107c6142c(uVar14);
      func_0x000107c61170(uVar11);
      func_0x000107c615e8(uVar17);
      return;
    }
  }
  uStack_b0 = 0;
  uStack_a8 = 0xe000000000000000;
  func_0x000107c602fc(0x22);
  func_0x000107c6142c(uStack_a8);
  uStack_b0 = 0x70616e732070695a;
  uStack_a8 = 0xe900000000000020;
  func_0x000107c5fb78(*param_2,param_2[1]);
  func_0x000107c5fb78(0xd000000000000017,0x800000010f014ca0);
  uVar11 = uStack_a8;
  *puVar10 = uStack_b0;
  *(undefined8 *)((long)apuStack_e0 + lVar4 + 0x18) = uVar11;
  (&stack0xffffffffffffff40)[lVar4] = 1;
  func_0x000107c6159c(puVar10,lVar8,1);
  func_0x000100087f6c(puVar10);
  FUN_101e4b2d8(puVar10,0x112e324c0,&UNK_10da1b8e8);
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar11 = *puVar10;
  func_0x000107c61174(uVar11);
  func_0x000100069b5c(param_3);
  func_0x000107c61170(uVar11);
  return;
}



/* Entry: 101e43bbc; end: 101e43c4b;  */

void FUN_101e43bbc(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0x112e324e0;
    func_0x0001000285a8(0x112e324e0,&UNK_10da1b900);
    func_0x000107c5fc54(param_2,uVar3);
  }
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101e43c4c; end: 101e43caf;  */

void FUN_101e43c4c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    func_0x000107c3f474();
    param_1 = param_2;
  }
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  func_0x000100069b5c(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101e43cb0; end: 101e43d83;  */

void FUN_101e43cb0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar1 = *param_1;
    func_0x000107c61174(uVar1);
    func_0x000100069b5c(param_4);
    func_0x000107c61170(uVar1);
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      func_0x000107c615f0(param_1);
      FUN_101e43ddc();
      func_0x000107c61574(param_2);
      func_0x000107c615e8(param_1);
    }
  }
  return;
}



/* Entry: 101e43d84; end: 101e43ddb;  */

void FUN_101e43d84(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  func_0x000100069b5c(param_1);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101e43ddc; end: 101e451db;  */

void FUN_101e43ddc(long *param_1,undefined8 *param_2,undefined8 param_3,undefined *param_4,
                  long *param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long alStack_190 [4];
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  long *plStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  long *plStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long *plStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [40];
  long *aplStack_d8 [3];
  long *plStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar13 = 0x112e324c0;
  plStack_118 = param_5;
  puStack_108 = param_4;
  func_0x0001000285a8(0x112e324c0,&UNK_10da1b8e8);
  lStack_148 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  puStack_140 = (undefined8 *)((long)alStack_190 - extraout_x8);
  func_0x000103b2dc40();
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar12 = ((long)alStack_190 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_190[3] = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12;
  lVar13 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar13 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  alStack_190[2] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar14 = (long *)(lVar13 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plStack_158 = (long *)((long)plVar14 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_130 = ((long)plVar14 - extraout_x12_01) - extraout_x12_02;
  puVar3 = &UNK_11048df58;
  lVar13 = 0x18;
  func_0x000107c613fc(&UNK_11048df58,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_6;
  plVar4 = param_1;
  uStack_160 = param_6;
  puStack_110 = puVar3;
  func_0x000107c614f0();
  plVar7 = param_1;
  plStack_138 = plVar4;
  func_0x000107c40384();
  plVar4 = plVar7;
  alStack_190[1] = lVar12;
  plStack_150 = plVar14;
  lStack_128 = lVar15;
  lStack_120 = lVar2;
  if (plVar7 == (long *)0x1) {
    func_0x000103b252a4();
  }
  else {
    func_0x000103b2526c();
  }
  func_0x000103bbb728(0);
  plStack_c0 = (long *)0x0;
  lStack_b8 = 0xe000000000000000;
  func_0x000107c602fc(0x16);
  func_0x000107c6142c(lStack_b8);
  plStack_c0 = (long *)0xd000000000000014;
  lStack_b8 = -0x7ffffffef0feb320;
  func_0x000107c5fb78(plVar4,lVar13);
  lVar2 = lStack_b8;
  plVar14 = plStack_c0;
  func_0x000103bbb254(plStack_c0,lStack_b8);
  func_0x000107c6142c(lVar2);
  puVar3 = &UNK_11048da08;
  func_0x000107c613fc(&UNK_11048da08,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,plStack_118);
  puVar5 = &UNK_11048df80;
  func_0x000107c613fc(&UNK_11048df80,0x98,7);
  puVar11 = puStack_108;
  puVar10 = puStack_110;
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(long **)(puVar5 + 0x18) = plVar14;
  *(long **)(puVar5 + 0x20) = plVar4;
  *(long *)(puVar5 + 0x28) = lVar13;
  uVar8 = *param_2;
  uVar17 = param_2[3];
  uVar16 = param_2[2];
  *(undefined8 *)(puVar5 + 0x38) = param_2[1];
  *(undefined8 *)(puVar5 + 0x30) = uVar8;
  *(undefined8 *)(puVar5 + 0x48) = uVar17;
  *(undefined8 *)(puVar5 + 0x40) = uVar16;
  uVar8 = param_2[4];
  *(undefined8 *)(puVar5 + 0x58) = param_2[5];
  *(undefined8 *)(puVar5 + 0x50) = uVar8;
  *(undefined2 *)(puVar5 + 0x60) = *(undefined2 *)(param_2 + 6);
  *(undefined **)(puVar5 + 0x68) = puStack_108;
  *(undefined8 *)(puVar5 + 0x70) = param_3;
  *(long **)(puVar5 + 0x78) = plVar7;
  *(long **)(puVar5 + 0x80) = param_1;
  *(code **)(puVar5 + 0x88) = FUN_101e4b3c0;
  *(undefined **)(puVar5 + 0x90) = puStack_110;
  plStack_170 = plVar7;
  uStack_168 = param_3;
  func_0x000107c6157c(puStack_110);
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(puVar11);
  func_0x000107c61434(lVar13);
  func_0x000107c6157c(puVar3);
  FUN_101e3a290(param_2,&plStack_c0);
  func_0x000107c6157c(puVar3);
  func_0x000107c61434(lVar13);
  func_0x000107c6157c(puVar11);
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(puVar10);
  FUN_101e3a290(param_2,&plStack_c0);
  plVar6 = param_1;
  func_0x000107c4ca5c();
  lVar12 = lStack_120;
  lVar2 = lStack_128;
  plVar7 = plStack_150;
  if ((long)plVar6 < 5) {
    if ((undefined *)((long)plVar6 + -1) < (undefined *)0x2) {
      func_0x000101e459ac(param_1,0x101e4b9d4,puVar5);
      func_0x000107c6142c(lVar13);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar5);
      FUN_101ad914c(param_2);
      func_0x000107c61574(puVar3);
LAB_101e44210:
      func_0x000107c6142c(lVar13);
      func_0x000107c61578(puStack_110,2);
      func_0x000107c615e8(param_1);
      puVar3 = puStack_108;
      goto LAB_101e44d2c;
    }
    if (plVar6 == (long *)0x3) goto LAB_101e4423c;
  }
  else {
    if (plVar6 == (long *)0x5) {
LAB_101e4423c:
      plVar7 = plStack_138;
      func_0x000103b24c4c();
      lVar15 = lStack_120;
      lVar12 = lStack_128;
      lVar2 = lStack_130;
      if (plVar7 == (long *)0x0) {
        puVar10 = &UNK_11048da08;
        func_0x000107c613fc(&UNK_11048da08,0x18,7);
        plVar4 = plStack_118;
        func_0x000107c61644(puVar10 + 0x10,plStack_118);
        puVar11 = &UNK_11048dfd0;
        func_0x000107c613fc(&UNK_11048dfd0,0x30,7);
        *(undefined **)(puVar11 + 0x10) = puVar10;
        *(undefined8 *)(puVar11 + 0x18) = 0x101e4b9d4;
        *(undefined **)(puVar11 + 0x20) = puVar5;
        *(long **)(puVar11 + 0x28) = param_1;
        puVar9 = PTR__OBJC_CLASS___NSThread_1126b47e0;
        func_0x000107c61168();
        func_0x000107c615f0(param_1);
        func_0x000107c6157c(puVar10);
        func_0x000107c6157c(puVar5);
        func_0x000107c4a02c();
        if (((ulong)puVar9 & 1) == 0) {
          FUN_101e45e6c(puVar10,0x101e4b9d4,puVar5,param_1);
          func_0x000107c6142c(lVar13);
          func_0x000107c61574(puVar3);
          func_0x000107c61574(puVar5);
        }
        else {
          func_0x000107c61574(puVar10);
          lVar2 = plVar4[6];
          func_0x000107c614f0(lVar2);
          func_0x00010090569c(0x101e4b98c,puVar11,lVar2);
          func_0x000107c6142c(lVar13);
          func_0x000107c61574(puVar3);
          puVar10 = puVar5;
        }
      }
      else {
        alStack_190[0] = lVar13;
        (**(code **)(lStack_128 + 0x38))(lStack_130,1,1,lStack_120);
        func_0x000107c61428(puVar3 + 0x10,aplStack_d8,0,0);
        plVar6 = (long *)(puVar3 + 0x10);
        func_0x000107c61648();
        lVar13 = alStack_190[0];
        plStack_118 = plVar6;
        if (plVar6 != (long *)0x0) {
          plStack_138 = plVar7;
          func_0x0001000298f0();
          func_0x000107c61428();
          lVar13 = *plVar6;
          plStack_150 = plVar6;
          func_0x000107c61174(lVar13);
          func_0x000100069b5c(plVar14);
          func_0x000107c61170(lVar13);
          plVar7 = plStack_158;
          FUN_101e49d50(lVar2,plStack_158,0x112e32328,&UNK_10da1b750);
          plVar14 = plVar7;
          (**(code **)(lVar12 + 0x30))(plVar7,1,lVar15);
          lVar2 = alStack_190[1];
          if ((int)plVar14 == 1) {
            FUN_101e4b2d8(plVar7,0x112e32328,&UNK_10da1b750);
            plVar14 = plStack_118;
            plVar4 = plStack_138;
            uStack_78 = param_2[1];
            uStack_80 = *param_2;
            lStack_b8 = param_2[1];
            plStack_c0 = (long *)*param_2;
            plStack_b0 = plStack_138;
            lStack_a8 = 0;
            uStack_a0 = 0;
            plVar6 = plStack_138;
            func_0x000107c61174(plStack_138);
            func_0x000107c61174();
            func_0x000100402194(&uStack_80,auStack_100);
            func_0x000100087c34(&plStack_c0);
            func_0x000100bcb1dc(&uStack_80);
            func_0x000107c61170(plVar6);
            puVar1 = puStack_140;
            *puStack_140 = plVar4;
            puVar1[1] = 0;
            *(undefined1 *)(puVar1 + 2) = 0;
            func_0x000107c6159c(puVar1,lStack_148,1);
            func_0x000107c61174(plVar6);
            func_0x000100087f6c(puVar1);
            FUN_101e4b2d8(puVar1,0x112e324c0,&UNK_10da1b8e8);
            plVar7 = plStack_150;
            func_0x000107c61428(plStack_150,&plStack_c0,0,0);
            plVar7 = (long *)*plVar7;
            func_0x000107c61174(plVar7);
            func_0x000100069b5c(uStack_168);
            func_0x000107c61574(plVar14);
            func_0x000107c61170(plVar6);
            lVar2 = lStack_130;
            func_0x000107c61170(plVar6);
            lVar13 = alStack_190[0];
          }
          else {
            func_0x000101e3cf20(plVar7,alStack_190[1]);
            plVar7 = plStack_118;
            lVar12 = plStack_118[4];
            func_0x000107c6157c(lVar12);
            lVar13 = alStack_190[0];
            FUN_101e3acec(lVar2,plVar4,alStack_190[0]);
            func_0x000107c61574(lVar12);
            plVar4 = plStack_170;
            if (plStack_170 == (long *)0x1) {
              func_0x000101e41f94(param_2,lVar2,param_1,1);
            }
            else {
              puVar10 = &UNK_11048da08;
              func_0x000107c613fc(&UNK_11048da08,0x18,7);
              func_0x000107c61644(puVar10 + 0x10,plVar7);
              puVar11 = &UNK_11048dff8;
              func_0x000107c613fc(&UNK_11048dff8,0x58,7);
              *(undefined **)(puVar11 + 0x10) = puVar10;
              uVar8 = *param_2;
              uVar17 = param_2[3];
              uVar16 = param_2[2];
              *(undefined8 *)(puVar11 + 0x20) = param_2[1];
              *(undefined8 *)(puVar11 + 0x18) = uVar8;
              *(undefined8 *)(puVar11 + 0x30) = uVar17;
              *(undefined8 *)(puVar11 + 0x28) = uVar16;
              uVar8 = param_2[4];
              *(undefined8 *)(puVar11 + 0x40) = param_2[5];
              *(undefined8 *)(puVar11 + 0x38) = uVar8;
              *(undefined2 *)(puVar11 + 0x48) = *(undefined2 *)(param_2 + 6);
              *(long **)(puVar11 + 0x50) = plVar4;
              FUN_101e3a290(param_2,&plStack_c0);
              func_0x000107c6157c(puVar10);
              func_0x000103b2581c(0x101e4b9a0,puVar11);
              func_0x000107c61574(puVar10);
              func_0x000107c61574(puVar11);
            }
            puVar1 = puStack_140;
            plVar4 = plStack_150;
            func_0x000101e3cf64(lVar2,puStack_140);
            func_0x000107c6159c(puVar1,lStack_148,0);
            func_0x000100087f6c(puVar1);
            FUN_101e4b2d8(puVar1,0x112e324c0,&UNK_10da1b8e8);
            func_0x000107c61428(plVar4,&plStack_c0,0,0);
            lVar12 = *plVar4;
            func_0x000107c61174(lVar12);
            func_0x000100069b5c(uStack_160);
            func_0x000107c61574(plVar7);
            func_0x000107c61170(lVar12);
            func_0x000101e3cee4(lVar2);
            lVar2 = lStack_130;
            plVar7 = plStack_138;
          }
        }
        func_0x000107c61170(plVar7);
        FUN_101e4b2d8(lVar2,0x112e32328,&UNK_10da1b750);
        func_0x000107c6142c(lVar13);
        puVar10 = puVar3;
        puVar11 = puVar5;
      }
      func_0x000107c61574(puVar10);
      func_0x000107c61574(puVar11);
      FUN_101ad914c(param_2);
      func_0x000107c61574(puStack_108);
      func_0x000107c61574(puVar3);
      func_0x000107c6142c(lVar13);
      func_0x000107c61578(puStack_110,2);
      func_0x000107c615e8(param_1);
      return;
    }
    if (plVar6 == (long *)0x9) {
      FUN_101e49f04(param_1,0x101e4b9d4,puVar5);
      func_0x000107c6142c(lVar13);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar5);
      FUN_101ad914c(param_2);
      func_0x000107c61574(puVar3);
      goto LAB_101e44210;
    }
  }
  alStack_190[0] = lVar13;
  (**(code **)(lStack_128 + 0x38))(plStack_150,1,1,lStack_120);
  plStack_c0 = (long *)0x0;
  lStack_b8 = -0x2000000000000000;
  func_0x000107c602fc(0x15);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f014d00);
  plVar6 = param_1;
  func_0x000107c4ca5c();
  uVar8 = 0;
  aplStack_d8[0] = plVar6;
  func_0x000101e3e06c(0);
  func_0x000107c603d0(aplStack_d8,&plStack_c0,uVar8,PTR___ss26DefaultStringInterpolationVN_11034ec00
                      ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  lVar13 = lStack_b8;
  plStack_118 = plStack_c0;
  func_0x000107c61428(puVar3 + 0x10,aplStack_d8,0,0);
  plVar6 = (long *)(puVar3 + 0x10);
  func_0x000107c61648();
  if (plVar6 == (long *)0x0) {
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c6142c(lVar13);
    func_0x000107c61430(alStack_190[0],2);
    FUN_101ad914c(param_2);
    puVar5 = puStack_110;
    func_0x000107c61574(puStack_110);
    func_0x000107c615e8(param_1);
    func_0x000107c61574(puStack_108);
    FUN_101e4b2d8(plVar7,0x112e32328,&UNK_10da1b750);
  }
  else {
    lStack_130 = lVar13;
    plStack_138 = plVar6;
    func_0x0001000298f0();
    func_0x000107c61428();
    lVar13 = *plVar6;
    plStack_158 = plVar6;
    func_0x000107c61174(lVar13);
    func_0x000100069b5c(plVar14);
    func_0x000107c61170(lVar13);
    lVar13 = alStack_190[2];
    FUN_101e49d50(plVar7,alStack_190[2],0x112e32328,&UNK_10da1b750);
    lVar15 = lVar13;
    (**(code **)(lVar2 + 0x30))(lVar13,1,lVar12);
    lVar2 = alStack_190[3];
    if ((int)lVar15 == 1) {
      FUN_101e4b2d8(lVar13,0x112e32328,&UNK_10da1b750);
      plVar4 = plStack_118;
      lVar2 = lStack_130;
      plVar7 = plStack_138;
      uStack_78 = param_2[1];
      uStack_80 = *param_2;
      lStack_b8 = param_2[1];
      plStack_c0 = (long *)*param_2;
      plStack_b0 = plStack_118;
      lStack_a8 = lStack_130;
      uStack_a0 = 1;
      func_0x000107c61438(lStack_130,2);
      func_0x000100402194(&uStack_80,auStack_100);
      func_0x000100087c34(&plStack_c0);
      func_0x000100bcb1dc(&uStack_80);
      func_0x000107c6142c(lVar2);
      puVar1 = puStack_140;
      *puStack_140 = plVar4;
      puVar1[1] = lVar2;
      *(undefined1 *)(puVar1 + 2) = 1;
      func_0x000107c6159c(puVar1,lStack_148,1);
      func_0x000107c61434(lVar2);
      puVar10 = puStack_108;
      func_0x000100087f6c(puVar1);
      FUN_101e4b2d8(puVar1,0x112e324c0,&UNK_10da1b8e8);
      plVar4 = plStack_158;
      func_0x000107c61428(plStack_158,&plStack_c0,0,0);
      lVar12 = *plVar4;
      func_0x000107c61174(lVar12);
      func_0x000100069b5c(uStack_168);
      lVar13 = alStack_190[0];
      func_0x000107c6142c(alStack_190[0]);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar5);
      func_0x000107c6142c(lVar2);
      func_0x000107c61574(plVar7);
      func_0x000107c61170(lVar12);
      FUN_101ad914c(param_2);
      func_0x000107c6142c(lVar13);
      func_0x000107c6142c(lVar2);
      puVar5 = puStack_110;
      func_0x000107c61574(puStack_110);
      func_0x000107c615e8(param_1);
      func_0x000107c61574(puVar10);
      plVar7 = plStack_150;
    }
    else {
      func_0x000101e3cf20(lVar13,alStack_190[3]);
      plVar14 = plStack_138;
      lVar13 = plStack_138[4];
      func_0x000107c6157c(lVar13);
      FUN_101e3acec(lVar2,plVar4,alStack_190[0]);
      func_0x000107c61574(lVar13);
      plVar4 = plStack_170;
      if (plStack_170 == (long *)0x1) {
        func_0x000101e41f94(param_2,lVar2,param_1,1);
      }
      else {
        puVar10 = &UNK_11048da08;
        func_0x000107c613fc(&UNK_11048da08,0x18,7);
        func_0x000107c61644(puVar10 + 0x10,plVar14);
        puVar11 = &UNK_11048dfa8;
        func_0x000107c613fc(&UNK_11048dfa8,0x58,7);
        *(undefined **)(puVar11 + 0x10) = puVar10;
        uVar8 = *param_2;
        uVar17 = param_2[3];
        uVar16 = param_2[2];
        *(undefined8 *)(puVar11 + 0x20) = param_2[1];
        *(undefined8 *)(puVar11 + 0x18) = uVar8;
        *(undefined8 *)(puVar11 + 0x30) = uVar17;
        *(undefined8 *)(puVar11 + 0x28) = uVar16;
        uVar8 = param_2[4];
        *(undefined8 *)(puVar11 + 0x40) = param_2[5];
        *(undefined8 *)(puVar11 + 0x38) = uVar8;
        *(undefined2 *)(puVar11 + 0x48) = *(undefined2 *)(param_2 + 6);
        *(long **)(puVar11 + 0x50) = plVar4;
        FUN_101e3a290(param_2,&plStack_c0);
        func_0x000107c6157c(puVar10);
        func_0x000103b2581c(0x101e4b99c,puVar11);
        func_0x000107c61574(puVar10);
        lVar2 = alStack_190[3];
        func_0x000107c61574(puVar11);
      }
      puVar1 = puStack_140;
      func_0x000101e3cf64(lVar2,puStack_140);
      func_0x000107c6159c(puVar1,lStack_148,0);
      puVar10 = puStack_108;
      func_0x000100087f6c(puVar1);
      FUN_101e4b2d8(puVar1,0x112e324c0,&UNK_10da1b8e8);
      plVar4 = plStack_158;
      func_0x000107c61428(plStack_158,&plStack_c0,0,0);
      lVar12 = *plVar4;
      func_0x000107c61174(lVar12);
      func_0x000100069b5c(uStack_160);
      lVar13 = alStack_190[0];
      func_0x000107c6142c(alStack_190[0]);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar5);
      func_0x000107c6142c(lStack_130);
      func_0x000107c61574(plVar14);
      func_0x000107c61170(lVar12);
      FUN_101ad914c(param_2);
      func_0x000107c6142c(lVar13);
      puVar5 = puStack_110;
      func_0x000107c61574(puStack_110);
      func_0x000107c615e8(param_1);
      func_0x000107c61574(puVar10);
      func_0x000101e3cee4(lVar2);
    }
    FUN_101e4b2d8(plVar7,0x112e32328,&UNK_10da1b750);
  }
  func_0x000107c61574(puVar5);
LAB_101e44d2c:
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 101e451dc; end: 101e451e3;  */

void FUN_101e451dc(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000103b25e5c();
  func_0x000101e3cf64(param_2,(long)param_1 + (long)*(int *)(lVar1 + 0x14));
  *param_1 = 0;
  return;
}



/* Entry: 101e451e4; end: 101e45713;  */

void FUN_101e451e4(undefined8 param_1,long param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0x112e32328;
  uStack_90 = param_4;
  pcStack_88 = param_3;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&uStack_90 - extraout_x8;
  lVar1 = 0;
  func_0x000103b2dc40();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar8 - extraout_x8_01;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar9 = lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  if (param_2 != 0) {
    func_0x000107c5edd0(lVar10,param_1,param_2);
    lVar3 = lVar10;
    (**(code **)(lVar6 + 0x30))(lVar10,1,lVar2);
    if ((int)lVar3 != 1) {
      (**(code **)(lVar6 + 0x20))(lVar9,lVar10,lVar2);
      (**(code **)(lVar6 + 0x10))(lVar8,lVar9,lVar2);
      func_0x000107c6159c(lVar8,lVar1,2);
      func_0x000101e3cf64(lVar8,lVar7);
      (**(code **)(lVar5 + 0x38))(lVar7,0,1,lVar1);
      (*pcStack_88)(lVar7,0,0,0xff);
      FUN_101e4b2d8(lVar7,0x112e32328,&UNK_10da1b750);
      func_0x000101e3cee4(lVar8);
      (**(code **)(lVar6 + 8))(lVar9,lVar2);
      return;
    }
    FUN_101e4b2d8(lVar10,0x112d36580,&UNK_10d9016d0);
  }
  (**(code **)(lVar5 + 0x38))(lVar7,1,1,lVar1);
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x22);
  func_0x000107c5fb78(0xd000000000000020,0x800000010f014e80);
  uVar4 = 0x112d35ff8;
  uStack_80 = param_1;
  lStack_78 = param_2;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x000107c603d0(&uStack_80,&uStack_70,uVar4,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar4 = uStack_68;
  (*pcStack_88)(lVar7,uStack_70,uStack_68,1);
  func_0x000107c6142c(uVar4);
  FUN_101e4b2d8(lVar7,0x112e32328,&UNK_10da1b750);
  return;
}



/* Entry: 101e45714; end: 101e45aaf;  */

void FUN_101e45714(undefined8 param_1,code *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_70 + -extraout_x8;
  lVar1 = 0;
  func_0x000103b2dc40();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,1,1,lVar1);
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x29);
  func_0x000107c5fb78(0xd000000000000027,0x800000010f014e10);
  uVar2 = 0x112e324e8;
  uStack_68 = param_1;
  func_0x0001000285a8(0x112e324e8,&UNK_10da1b910);
  func_0x000107c603d0(&uStack_68,&uStack_60,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar2 = uStack_58;
  (*param_2)(puVar3,uStack_60,uStack_58,1);
  func_0x000107c6142c(uVar2);
  FUN_101e4b2d8(puVar3,0x112e32328,&UNK_10da1b750);
  return;
}



/* Entry: 101e45ab0; end: 101e45b37;  */

void FUN_101e45ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  func_0x000103bbb728(0);
  uVar1 = 0xd000000000000017;
  func_0x000103bbb254(0xd000000000000017,0x800000010f014db0);
  func_0x000107c6157c(param_4);
  FUN_101e3eb68(param_1,param_2,uVar1,param_3,param_4,param_5,param_7,param_8,unaff_x20,unaff_x19,
                unaff_x29,unaff_x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_4);
  return;
}



/* Entry: 101e45b38; end: 101e45e6b;  */

void FUN_101e45b38(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,code *param_7)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 auStack_80 [32];
  
  lVar1 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_80 + -extraout_x8;
  if ((param_5 & 1) == 0) {
    FUN_101e49d50(param_1,puVar3,0x112e32328,&UNK_10da1b750);
  }
  else {
    func_0x000101e45c6c(puVar3);
  }
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  func_0x000100069b5c(param_6);
  func_0x000107c61170(uVar2);
  (*param_7)(puVar3,param_2,param_3,param_4);
  FUN_101e4b2d8(puVar3,0x112e32328,&UNK_10da1b750);
  return;
}



/* Entry: 101e45e6c; end: 101e460bf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_101e45e6c(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long *plVar4;
  long alStack_70 [3];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar4 = (long *)((long)alStack_70 - extraout_x8);
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    func_0x000103b2dc40();
    (**(code **)(*(long *)(param_1 + -8) + 0x38))(plVar4,1,1,param_1);
    (*param_2)(plVar4,0xd000000000000014,0x800000010f014d20,1);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x000107c40940();
    func_0x000107c61180();
    if (lVar1 == 0) {
      alStack_70[1] = 0;
      alStack_70[2] = 0xe000000000000000;
      func_0x000107c602fc(0x41);
      func_0x000107c5fb78(0xd00000000000003f,0x800000010f014d40);
      uVar3 = 0x112e324e0;
      alStack_70[0] = param_4;
      func_0x0001000285a8(0x112e324e0,&UNK_10da1b900);
      func_0x000107c603d0(alStack_70,alStack_70 + 1,uVar3,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c6142c(alStack_70[2]);
      lVar1 = 0;
      func_0x000103b2dc40();
      (**(code **)(*(long *)(lVar1 + -8) + 0x38))(plVar4,1,1,lVar1);
      (*param_2)(plVar4,4,0,2);
    }
    else {
      *plVar4 = lVar1;
      lVar2 = 0;
      func_0x000103b2dc40();
      func_0x000107c6159c(plVar4,lVar2,1);
      (**(code **)(*(long *)(lVar2 + -8) + 0x38))(plVar4,0,1,lVar2);
      func_0x000107c615f4(lVar1,2);
      (*param_2)(plVar4,0,0,0xff);
      func_0x000107c615ec(lVar1,2);
    }
    func_0x000107c61574(param_1);
  }
  FUN_101e4b2d8(plVar4,0x112e32328,&UNK_10da1b750);
  return;
}



/* Entry: 101e460c0; end: 101e47467;  */

void FUN_101e460c0(long param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  ulong uVar10;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  code *pcStack_1c0;
  ulong *puStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  ulong uStack_178;
  long lStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  ulong uStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 auStack_110 [16];
  undefined *puStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar1 = 0;
  func_0x000103b2dc40();
  lStack_138 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_138 + 0x40));
  lVar6 = (long)&pcStack_1c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0x112e32320;
  func_0x0001000285a8(0x112e32320,&UNK_10da1b8d0);
  lStack_128 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  lVar13 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar13 - extraout_x12;
  lVar11 = 0x112e32328;
  lStack_118 = lVar9;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  lStack_130 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  uVar10 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_158 = uVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = uVar10 - extraout_x12_00;
  lStack_148 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_01;
  lStack_140 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar10 = lVar11 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = uVar10 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_120 = lVar11 - extraout_x12_04;
  puVar8 = auStack_80;
  func_0x000107c61428(param_1 + 0x10,puVar8,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    return;
  }
  lVar9 = param_1;
  uStack_190 = param_4;
  uStack_188 = param_3;
  lStack_180 = lVar6;
  lStack_170 = lVar13;
  uStack_160 = uVar10;
  lStack_150 = lVar1;
  func_0x000103b25284();
  puVar2 = PTR_PTR_1126b08b8;
  func_0x000107c610f8();
  lVar1 = lVar9;
  func_0x000107c5fadc(lVar9,puVar8);
  func_0x000107c4766c();
  func_0x000107c61170(lVar1);
  puVar3 = PTR_PTR_1126b1060;
  func_0x000107c610f8();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c47d08();
  func_0x000107c61170(puVar4);
  func_0x000107c61428(param_1 + 0x40,auStack_98,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  uVar10 = *param_2;
  uVar17 = param_2[1];
  func_0x000107c61434(uVar12);
  func_0x000107c61434(uVar17);
  uStack_178 = uVar10;
  func_0x0001000f66f0(uVar10,uVar17,uVar12);
  func_0x000107c6142c(uVar12);
  if ((uVar10 & 1) != 0) {
    func_0x000107c61574(param_1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c6142c(puVar8);
    goto LAB_101e46678;
  }
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  puVar4 = &UNK_11048d9e0;
  puStack_1b8 = param_2;
  uStack_1a8 = uVar17;
  puStack_1a0 = puVar2;
  lStack_198 = param_1;
  puStack_168 = puVar3;
  func_0x000107c613fc(&UNK_11048d9e0,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,uVar12);
  lStack_1b0 = lVar9;
  puStack_100 = puVar4;
  lStack_f8 = lVar9;
  puStack_f0 = puVar8;
  func_0x000107c6157c(uVar12);
  lVar6 = lStack_120;
  func_0x000100087bd4(lStack_120,0x101e4b8f0,auStack_110,lStack_130);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(puVar4);
  lVar13 = lStack_138;
  lVar9 = lStack_150;
  pcStack_1c0 = *(code **)(lStack_138 + 0x38);
  (*pcStack_1c0)(lVar11,1,1,lStack_150);
  lVar16 = lStack_118;
  lVar1 = (long)*(int *)(lStack_128 + 0x30);
  FUN_101e49d50(lVar6,lStack_118,0x112e32328,&UNK_10da1b750);
  FUN_101e49d50(lVar11,lVar16 + lVar1,0x112e32328,&UNK_10da1b750);
  pcVar14 = *(code **)(lVar13 + 0x30);
  lVar13 = lVar16;
  (*pcVar14)(lVar16,1,lVar9);
  uVar10 = uStack_160;
  if ((int)lVar13 == 1) {
    FUN_101e4b2d8(lVar11,0x112e32328,&UNK_10da1b750);
    lVar16 = lStack_118;
    FUN_101e4b2d8(lVar6,0x112e32328,&UNK_10da1b750);
    lVar1 = lVar16 + lVar1;
    (*pcVar14)(lVar1,1,lVar9);
    uVar10 = uStack_1a8;
    if ((int)lVar1 == 1) {
      FUN_101e4b2d8(lVar16,0x112e32328,&UNK_10da1b750);
LAB_101e46734:
      lVar1 = lStack_198;
      func_0x000107c61428(lStack_198 + 0x40,auStack_110,0x21,0);
      func_0x000100403b00(&puStack_d0,uStack_178,uVar10);
      func_0x000107c614a8(auStack_110);
      func_0x000107c6142c(uStack_c8);
      uVar12 = *(undefined8 *)(lVar1 + 0x20);
      puVar2 = &UNK_11048d9e0;
      func_0x000107c613fc(&UNK_11048d9e0,0x18,7);
      func_0x000107c61644(puVar2 + 0x10,uVar12);
      lStack_f8 = lStack_1b0;
      puStack_100 = puVar2;
      puStack_f0 = puVar8;
      func_0x000107c6157c(uVar12);
      lVar16 = lStack_140;
      func_0x000100087bd4(lStack_140,0x101e4b904,auStack_110,lStack_130);
      func_0x000107c61574(uVar12);
      func_0x000107c61574(puVar2);
      lVar6 = lStack_148;
      (*pcStack_1c0)(lStack_148,1,1,lStack_150);
      lVar9 = lStack_170;
      lVar11 = (long)*(int *)(lStack_128 + 0x30);
      FUN_101e49d50(lVar16,lStack_170,0x112e32328,&UNK_10da1b750);
      lVar13 = lStack_150;
      FUN_101e49d50(lVar6,lVar9 + lVar11,0x112e32328,&UNK_10da1b750);
      lVar5 = lVar9;
      (*pcVar14)(lVar9,1,lVar13);
      uVar10 = uStack_158;
      if ((int)lVar5 == 1) {
        FUN_101e4b2d8(lVar6,0x112e32328,&UNK_10da1b750);
        FUN_101e4b2d8(lVar16,0x112e32328,&UNK_10da1b750);
        lVar11 = lVar9 + lVar11;
        (*pcVar14)(lVar11,1,lVar13);
        puVar2 = puStack_1a0;
        puVar15 = puStack_1b8;
        if ((int)lVar11 != 1) {
LAB_101e46970:
          puVar2 = puStack_1a0;
          FUN_101e4b2d8(lVar9,0x112e32320,&UNK_10da1b8d0);
          goto LAB_101e46a40;
        }
        FUN_101e4b2d8(lVar9,0x112e32328,&UNK_10da1b750);
      }
      else {
        FUN_101e49d50(lVar9,uStack_158,0x112e32328,&UNK_10da1b750);
        lVar6 = lVar9 + lVar11;
        (*pcVar14)(lVar6,1,lVar13);
        lVar13 = lStack_180;
        puVar15 = puStack_1b8;
        if ((int)lVar6 == 1) {
          FUN_101e4b2d8(lStack_148,0x112e32328,&UNK_10da1b750);
          FUN_101e4b2d8(lStack_140,0x112e32328,&UNK_10da1b750);
          FUN_101e3cee4(uVar10);
          goto LAB_101e46970;
        }
        func_0x000101e3cf20(lVar9 + lVar11,lStack_180);
        uVar17 = uVar10;
        func_0x000103b2dc78(uVar10,lVar13);
        FUN_101e3cee4(lVar13);
        FUN_101e4b2d8(lStack_148,0x112e32328,&UNK_10da1b750);
        FUN_101e4b2d8(lStack_140,0x112e32328,&UNK_10da1b750);
        FUN_101e3cee4(uVar10);
        FUN_101e4b2d8(lVar9,0x112e32328,&UNK_10da1b750);
        puVar2 = puStack_1a0;
        if ((uVar17 & 1) == 0) goto LAB_101e46a40;
      }
      lVar11 = *(long *)(lVar1 + 0x28);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar11 != 0) {
        lVar9 = lVar11;
        func_0x000107c4f740();
        if (lVar9 == 0) {
          puVar3 = &UNK_11048de68;
          func_0x000107c613fc(&UNK_11048de68,0x68,7);
          uVar10 = *puVar15;
          uVar18 = puVar15[3];
          uVar17 = puVar15[2];
          *(ulong *)(puVar3 + 0x30) = puVar15[1];
          *(ulong *)(puVar3 + 0x28) = uVar10;
          *(long *)(puVar3 + 0x10) = lVar1;
          *(long *)(puVar3 + 0x18) = lStack_1b0;
          *(undefined1 **)(puVar3 + 0x20) = puVar8;
          *(ulong *)(puVar3 + 0x40) = uVar18;
          *(ulong *)(puVar3 + 0x38) = uVar17;
          uVar10 = puVar15[4];
          *(ulong *)(puVar3 + 0x50) = puVar15[5];
          *(ulong *)(puVar3 + 0x48) = uVar10;
          *(short *)(puVar3 + 0x58) = (short)puVar15[6];
          *(undefined8 *)(puVar3 + 0x60) = uStack_190;
          pcStack_b0 = FUN_101e4b338;
          puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_c8 = 0x42000000;
          puStack_c0 = (undefined *)0x101699d18;
          puStack_b8 = &UNK_11048de80;
          ppuVar7 = &puStack_d0;
          puStack_a8 = puVar3;
          func_0x000107c60bc4(ppuVar7);
          puVar3 = puStack_a8;
          func_0x000107c6157c(lVar1);
          FUN_101e3a290(puVar15,auStack_110);
          func_0x000107c61574(puVar3);
          puVar3 = puStack_168;
          func_0x000107c50778(lVar11);
          func_0x000107c61180();
          func_0x000107c615e8();
          func_0x000107c61574(lVar1);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar2);
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c615e8(lVar11);
          return;
        }
        func_0x000107c615e8(lVar11);
      }
LAB_101e46a40:
      puVar3 = &UNK_11048de18;
      func_0x000107c613fc(&UNK_11048de18,0x62,7);
      *(long *)(puVar3 + 0x10) = lVar1;
      *(long *)(puVar3 + 0x18) = lStack_1b0;
      *(undefined1 **)(puVar3 + 0x20) = puVar8;
      *(undefined **)(puVar3 + 0x28) = puVar2;
      uVar10 = *puVar15;
      uVar18 = puVar15[3];
      uVar17 = puVar15[2];
      *(ulong *)(puVar3 + 0x38) = puVar15[1];
      *(ulong *)(puVar3 + 0x30) = uVar10;
      *(ulong *)(puVar3 + 0x48) = uVar18;
      *(ulong *)(puVar3 + 0x40) = uVar17;
      uVar10 = puVar15[4];
      *(ulong *)(puVar3 + 0x58) = puVar15[5];
      *(ulong *)(puVar3 + 0x50) = uVar10;
      *(short *)(puVar3 + 0x60) = (short)puVar15[6];
      pcStack_b0 = (code *)0x101e4b328;
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0x42000000;
      puStack_c0 = &UNK_10130cf28;
      puStack_b8 = &UNK_11048de30;
      ppuVar7 = &puStack_d0;
      puStack_a8 = puVar3;
      func_0x000107c60bc4(ppuVar7);
      puVar3 = puStack_a8;
      func_0x000107c6157c(lVar1);
      FUN_101e3a290(puVar15,auStack_110);
      func_0x000107c61174(puVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c42d08(0,0,0x3ff0000000000000,uStack_188);
      func_0x000107c61574(lVar1);
      func_0x000107c61170(puStack_168);
      func_0x000107c61170(puVar2);
      func_0x000107c60bd0(ppuVar7);
      return;
    }
LAB_101e4662c:
    puVar2 = puStack_168;
    uVar17 = uStack_1a8;
    FUN_101e4b2d8(lVar16,0x112e32320,&UNK_10da1b8d0);
  }
  else {
    FUN_101e49d50(lVar16,uStack_160,0x112e32328,&UNK_10da1b750);
    lVar13 = lVar16 + lVar1;
    (*pcVar14)(lVar13,1,lVar9);
    lVar9 = lStack_180;
    if ((int)lVar13 == 1) {
      FUN_101e4b2d8(lVar11,0x112e32328,&UNK_10da1b750);
      FUN_101e4b2d8(lStack_120,0x112e32328,&UNK_10da1b750);
      FUN_101e3cee4(uVar10);
      goto LAB_101e4662c;
    }
    func_0x000101e3cf20(lVar16 + lVar1,lStack_180);
    uVar18 = uVar10;
    func_0x000103b2dc78(uVar10,lVar9);
    FUN_101e3cee4(lVar9);
    FUN_101e4b2d8(lVar11,0x112e32328,&UNK_10da1b750);
    FUN_101e4b2d8(lStack_120,0x112e32328,&UNK_10da1b750);
    FUN_101e3cee4(uVar10);
    FUN_101e4b2d8(lVar16,0x112e32328,&UNK_10da1b750);
    puVar2 = puStack_168;
    uVar17 = uStack_1a8;
    uVar10 = uStack_1a8;
    if ((uVar18 & 1) != 0) goto LAB_101e46734;
  }
  lVar11 = lStack_198;
  func_0x000107c6142c(puVar8);
  func_0x000107c61574(lVar11);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puStack_1a0);
LAB_101e46678:
  func_0x000107c6142c(uVar17);
  return;
}



/* Entry: 101e47468; end: 101e4746b;  */

void FUN_101e47468(void)

{
  return;
}



/* Entry: 101e4746c; end: 101e474d3;  */

void FUN_101e4746c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x000107c61428(param_1 + 0x40,auStack_48,0x21,0);
  func_0x0001010af1e4(uVar1,uVar2);
  func_0x000107c614a8(auStack_48);
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 101e474d4; end: 101e47a63;  */

undefined8 * FUN_101e474d4(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x8_00;
  code *pcVar15;
  ulong uVar16;
  long unaff_x20;
  undefined1 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined1 auStack_e0 [16];
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = 0x112e32328;
  puVar12 = &UNK_10da1b750;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = &stack0xfffffffffffffed0 + -extraout_x8;
  puVar3 = (undefined8 *)0x0;
  func_0x000103b2dc40();
  lVar14 = puVar3[-1];
  puVar10 = puVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  pcVar15 = (code *)(puVar17 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  if ((*(byte *)(param_1 + 0x31) & 1) == 0) {
    lVar18 = *(long *)(param_1 + 0x10);
    lVar20 = *(long *)(lVar18 + 0x10);
    puVar4 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar20 != 0) {
      puStack_a8 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000101e495d4(0,lVar20,0);
      puVar19 = (undefined8 *)(lVar18 + 0x20);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
      do {
        puVar4 = puStack_a8;
        uStack_88 = puVar19[3];
        uStack_90 = puVar19[2];
        uStack_78 = puVar19[5];
        uStack_80 = puVar19[4];
        uStack_70 = puVar19[6];
        uVar5 = puVar19[1];
        uStack_a0 = *puVar19;
        puVar13 = auStack_e0;
        uStack_98 = uVar5;
        FUN_101e49e18(&uStack_a0);
        puVar10 = &uStack_a0;
        func_0x000103b25150();
        puVar12 = &UNK_11048d9e0;
        func_0x000107c613fc(&UNK_11048d9e0,0x18,7);
        func_0x000107c61644(puVar12 + 0x10,uVar11);
        puStack_d0 = puVar12;
        puStack_c8 = puVar10;
        puStack_c0 = puVar13;
        func_0x000100087bd4(puVar17,0x101e4b940,auStack_e0,lVar2);
        func_0x000107c61574(puVar12);
        puVar6 = puVar17;
        (**(code **)(lVar14 + 0x30))(puVar17,1,puVar3);
        if ((int)puVar6 == 1) {
          FUN_101e4b2d8(puVar17,0x112e32328,&UNK_10da1b750);
          puVar12 = &UNK_11048e200;
          func_0x000107c613fc(&UNK_11048e200,0x20,7);
          *(undefined8 **)(puVar12 + 0x10) = puVar10;
          *(undefined1 **)(puVar12 + 0x18) = puVar13;
          func_0x000107c61434(puVar13);
          pcVar7 = FUN_101e4b63c;
          func_0x0001000c0ebc(FUN_101e4b63c,puVar12);
          func_0x000107c61574(puVar12);
          pcVar8 = FUN_101e3ac18;
          func_0x0001000bfde0(FUN_101e3ac18,0,puVar3);
          func_0x000107c61574(pcVar7);
          func_0x000107c6142c(puVar13);
        }
        else {
          func_0x000101e3cf20(puVar17,pcVar15);
          func_0x0001000285a8(0x112e32358,&UNK_10da1b930);
          pcVar8 = pcVar15;
          func_0x000100854cb0(pcVar15);
          func_0x000107c6142c(puVar13);
          func_0x000101e3cee4(pcVar15);
        }
        puVar9 = &UNK_11048e228;
        func_0x000107c613fc(&UNK_11048e228,0x18,7);
        *(undefined8 *)(puVar9 + 0x10) = uVar5;
        uVar5 = 0;
        func_0x000103b25e5c(0);
        pcVar7 = FUN_101e4b644;
        puVar12 = puVar9;
        func_0x0001000bfde0(FUN_101e4b644,puVar9,uVar5);
        func_0x000107c61574(pcVar8);
        func_0x000107c61574(puVar9);
        puVar10 = &uStack_a0;
        func_0x000101e49e54(puVar10);
        uVar1 = puVar4[2];
        puVar9 = (undefined *)(uVar1 + 1);
        puStack_a8 = puVar4;
        if ((ulong)puVar4[3] >> 1 <= uVar1) {
          puVar10 = (undefined8 *)(ulong)(1 < (ulong)puVar4[3]);
          puVar12 = puVar9;
          func_0x000101e495d4(puVar10,puVar9,1);
        }
        puStack_a8[2] = puVar9;
        puStack_a8[uVar1 + 4] = pcVar7;
        puVar19 = puVar19 + 7;
        lVar20 = lVar20 + -1;
        puVar4 = puStack_a8;
      } while (lVar20 != 0);
    }
  }
  else {
    puVar4 = (undefined8 *)0x112e32350;
    FUN_101e49364(0x112e32350,&UNK_10da1b780,0x112e32500,&UNK_10da1b938);
    lVar2 = ((ulong)*(uint *)(puVar4 + 6) + 7 & 0x1fffffff8) + 0x10;
    func_0x000107c613fc();
    puVar4[3] = 5;
    puVar4[2] = 2;
    puVar10 = puVar4;
    func_0x000103b252a4();
    FUN_101e3a724();
    func_0x000107c6142c(lVar2);
    uVar5 = 0;
    func_0x000103b25e5c(0);
    pcVar15 = FUN_101e47a64;
    uVar11 = 0;
    func_0x0001000bfde0(FUN_101e47a64,0,uVar5);
    func_0x000107c61574(puVar10);
    puVar4[4] = pcVar15;
    func_0x000103b2526c();
    FUN_101e3a724();
    func_0x000107c6142c(uVar11);
    uVar11 = 0x101e47a6c;
    puVar12 = (undefined *)0x0;
    func_0x0001000bfde0(0x101e47a6c,0,uVar5);
    func_0x000107c61574(puVar10);
    puVar4[5] = uVar11;
  }
  func_0x000103b25284();
  FUN_101e3a724();
  func_0x000107c6142c(puVar12);
  uVar11 = 0;
  func_0x000103b25e5c(0);
  pcVar15 = FUN_101e451dc;
  func_0x0001000bfde0(FUN_101e451dc,0,uVar11);
  func_0x000107c61574(puVar10);
  puVar10 = puVar4;
  func_0x000107c61550();
  if ((((int)puVar10 == 0) || ((long)puVar4 < 0)) ||
     (puVar10 = puVar4, ((ulong)puVar4 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar4 >> 0x3e == 0) {
      puVar3 = *(undefined8 **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar3 = (undefined8 *)((ulong)puVar4 & 0xffffffffffffff8);
      if ((undefined8 *)0x7fffffffffffffff < puVar4) {
        puVar3 = puVar4;
      }
      func_0x000107c60480(puVar3);
    }
    puVar10 = (undefined8 *)0x0;
    FUN_101e3dcbc(0,(undefined *)((long)puVar3 + 1),1,puVar4);
  }
  uVar16 = (ulong)puVar10 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar16 + 0x10);
  puVar3 = puVar10;
  if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar1) {
    puVar3 = (undefined8 *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
    FUN_101e3dcbc(puVar3,uVar1 + 1,1,puVar10);
    uVar16 = (ulong)puVar3 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar16 + 0x10) = uVar1 + 1;
  *(code **)(uVar16 + uVar1 * 8 + 0x20) = pcVar15;
  func_0x0001000285a8(0x112e32350,&UNK_10da1b780);
  puVar10 = puVar3;
  func_0x0001000c19f0(puVar3);
  func_0x000107c6142c(puVar3);
  return puVar10;
}



/* Entry: 101e47a64; end: 101e47a73;  */

void FUN_101e47a64(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000103b25e5c();
  func_0x000101e3cf64(param_2,(long)param_1 + (long)*(int *)(lVar1 + 0x14));
  *param_1 = 1;
  return;
}



/* Entry: 101e47a74; end: 101e47abb;  */

void FUN_101e47a74(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000103b25e5c();
  func_0x000101e3cf64(param_2,(long)param_1 + (long)*(int *)(lVar1 + 0x14));
  *param_1 = param_3;
  return;
}



/* Entry: 101e47abc; end: 101e47ad3;  */

void FUN_101e47abc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  cVar3 = *(char *)(param_2 + 0x20);
  *(char *)(param_1 + 2) = cVar3;
  if (cVar3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar2);
    return;
  }
  if (cVar3 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
    return;
  }
  return;
}



/* Entry: 101e47ad4; end: 101e47af3;  */

void FUN_101e47ad4(void)

{
  FUN_101e474d4();
  return;
}



/* Entry: 101e47af4; end: 101e47be3;  */

code * FUN_101e47af4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [56];
  
  puVar1 = &UNK_11048e1b0;
  func_0x000107c613fc(&UNK_11048e1b0,0x42,7);
  uVar5 = *param_1;
  uVar7 = param_1[3];
  uVar6 = param_1[2];
  *(undefined8 *)(puVar1 + 0x18) = param_1[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  *(undefined8 *)(puVar1 + 0x28) = uVar7;
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  uVar5 = param_1[4];
  *(undefined8 *)(puVar1 + 0x38) = param_1[5];
  *(undefined8 *)(puVar1 + 0x30) = uVar5;
  *(undefined2 *)(puVar1 + 0x40) = *(undefined2 *)(param_1 + 6);
  puVar2 = &UNK_11048e1d8;
  func_0x000107c613fc(&UNK_11048e1d8,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101e4b5a8;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  FUN_101e3a290(param_1,auStack_68);
  pcVar3 = FUN_101e4b5c8;
  func_0x0001000c0ebc(FUN_101e4b5c8,puVar2);
  func_0x000107c61574(puVar2);
  pcVar4 = FUN_101e47abc;
  func_0x0001000bfde0(FUN_101e47abc,0,&UNK_1106d42b0);
  func_0x000107c61574(pcVar3);
  FUN_101e4b5fc();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar4);
  return pcVar3;
}



/* Entry: 101e47be4; end: 101e47bef;  */

void FUN_101e47be4(undefined8 *param_1,long param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 101e47bf0; end: 101e47cf3; -[_TtC32SingleSnapPlayerMediaServiceImpl29SingleSnapPlayerMediaResolver observeMediaBaseContentResultForSnap:] */

void FUN_101e47bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  puVar1 = &UNK_11048e2f0;
  func_0x000107c613fc(&UNK_11048e2f0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar2 = &UNK_11048e318;
  func_0x000107c613fc(&UNK_11048e318,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101e4b7bc;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  pcVar3 = FUN_101e4b7f0;
  func_0x0001000c0ebc(FUN_101e4b7f0,puVar2);
  func_0x000107c61574(puVar2);
  uVar4 = 0x112e324e0;
  func_0x0001000285a8(0x112e324e0,&UNK_10da1b900);
  pcVar5 = FUN_101e47be4;
  func_0x0001000bfde0(FUN_101e47be4,0,uVar4);
  func_0x000107c61574(pcVar3);
  func_0x0001004575f0();
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
  func_0x000107c61574(pcVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar3);
  return;
}



/* Entry: 101e47cf4; end: 101e47d3f;  */

void FUN_101e47cf4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168();
  func_0x000107c5dc58(uVar2,uVar3);
  func_0x000107c61180();
  *param_1 = puVar1;
  return;
}



/* Entry: 101e47d40; end: 101e47e47; -[_TtC32SingleSnapPlayerMediaServiceImpl29SingleSnapPlayerMediaResolver observeMediaSizeForSnap:] */

void FUN_101e47d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11048e2a0;
  func_0x000107c613fc(&UNK_11048e2a0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar2 = &UNK_11048e2c8;
  func_0x000107c613fc(&UNK_11048e2c8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x101e4b72c;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  uVar3 = 0x101e4b9e4;
  func_0x0001000c0ebc(0x101e4b9e4,puVar2);
  func_0x000107c61574(puVar2);
  uVar4 = 0;
  FUN_101e4b6ec(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  uVar5 = 0x101e4b9e0;
  func_0x0001000bfde0(0x101e4b9e0,0,uVar4);
  func_0x000107c61574(uVar3);
  func_0x0001004575f0();
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
  func_0x000107c61574(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101e47e48; end: 101e47f4f; -[_TtC32SingleSnapPlayerMediaServiceImpl29SingleSnapPlayerMediaResolver observeMediaFirstFrameSizeForSnap:] */

void FUN_101e47e48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11048e250;
  func_0x000107c613fc(&UNK_11048e250,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar2 = &UNK_11048e278;
  func_0x000107c613fc(&UNK_11048e278,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101e4b68c;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  pcVar3 = FUN_101e4b6e8;
  func_0x0001000c0ebc(FUN_101e4b6e8,puVar2);
  func_0x000107c61574(puVar2);
  uVar4 = 0;
  FUN_101e4b6ec(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  uVar5 = 0x101e4b9dc;
  func_0x0001000bfde0(0x101e4b9dc,0,uVar4);
  func_0x000107c61574(pcVar3);
  func_0x0001004575f0();
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
  func_0x000107c61574(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar3);
  return;
}



/* Entry: 101e47f50; end: 101e4803b;  */

void FUN_101e47f50(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    func_0x000107c61428(param_2 + 0x60,auStack_70,0x20,0);
    lVar2 = *(long *)(param_2 + 0x60);
    if (*(long *)(lVar2 + 0x10) == 0) {
      uVar1 = 0;
    }
    else {
      func_0x000107c61434(lVar2);
      func_0x000100029284();
      if ((param_4 & 1) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_3 * 8);
        func_0x000107c6157c(uVar1);
      }
      func_0x000107c6142c(lVar2);
    }
    *param_1 = uVar1;
    func_0x000107c614a8(auStack_70);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101e4803c; end: 101e48167;  */

void FUN_101e4803c(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar2 = 1;
  }
  else {
    func_0x000107c61428(param_2 + 0x60,auStack_80,0x21,0);
    if (param_5 == 0) {
      func_0x000107c61434(param_4);
      FUN_101e487c0(param_3,param_4);
      func_0x000107c6142c(param_4);
      func_0x000107c61574(param_3);
    }
    else {
      func_0x000107c61434(param_4);
      func_0x000107c6157c(param_5);
      uVar1 = *(undefined8 *)(param_2 + 0x60);
      func_0x000107c61558(uVar1);
      uVar3 = *(undefined8 *)(param_2 + 0x60);
      *(undefined8 *)(param_2 + 0x60) = 0x8000000000000000;
      func_0x000101e3d0d4(param_5,param_3,param_4,uVar1);
      func_0x000107c6142c(param_4);
      *(undefined8 *)(param_2 + 0x60) = uVar3;
    }
    func_0x000107c614a8(auStack_80);
    func_0x000107c61574(param_2);
    uVar2 = 0;
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 101e48168; end: 101e48207;  */

void FUN_101e48168(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c61428(param_2 + 0x60,auStack_60,1,0);
    uVar1 = *(undefined8 *)(param_2 + 0x60);
    *(undefined **)(param_2 + 0x60) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    func_0x000107c61574(param_2);
    func_0x000107c6142c(uVar1);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 101e48208; end: 101e482b7;  */

void FUN_101e48208(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c61428(param_2 + 0x60,auStack_70,0x21,0);
    FUN_101e487c0(param_3,param_4);
    func_0x000107c614a8(auStack_70);
    func_0x000107c61574(param_2);
  }
  *param_1 = param_3;
  return;
}



/* Entry: 101e482b8; end: 101e483a3;  */

void FUN_101e482b8(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    func_0x000107c61428(param_2 + 0x68,auStack_70,0x20,0);
    lVar2 = *(long *)(param_2 + 0x68);
    if (*(long *)(lVar2 + 0x10) == 0) {
      uVar1 = 0;
    }
    else {
      func_0x000107c61434(lVar2);
      func_0x000100029284();
      if ((param_4 & 1) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_3 * 8);
        func_0x000107c61434(uVar1);
      }
      func_0x000107c6142c(lVar2);
    }
    *param_1 = uVar1;
    func_0x000107c614a8(auStack_70);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101e483a4; end: 101e4849f;  */

void FUN_101e483a4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c61428(param_2 + 0x68,auStack_80,0x21,0);
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_5);
    uVar1 = *(undefined8 *)(param_2 + 0x68);
    func_0x000107c61558(uVar1);
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_2 + 0x68) = 0x8000000000000000;
    func_0x000101e3d224(param_5,param_3,param_4,uVar1);
    func_0x000107c6142c(param_4);
    *(undefined8 *)(param_2 + 0x68) = uVar2;
    func_0x000107c614a8(auStack_80);
    func_0x000107c61574(param_2);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 101e484a0; end: 101e4854f;  */

void FUN_101e484a0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c61428(param_2 + 0x68,auStack_70,0x21,0);
    func_0x000101e4887c(param_3,param_4);
    func_0x000107c614a8(auStack_70);
    func_0x000107c61574(param_2);
  }
  *param_1 = param_3;
  return;
}



/* Entry: 101e48550; end: 101e485ef;  */

void FUN_101e48550(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c61428(param_2 + 0x68,auStack_60,1,0);
    uVar1 = *(undefined8 *)(param_2 + 0x68);
    *(undefined **)(param_2 + 0x68) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    func_0x000107c61574(param_2);
    func_0x000107c6142c(uVar1);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 101e485f0; end: 101e486a7;  */

void FUN_101e485f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x80);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(param_3);
    uStack_48 = param_4[1];
    uStack_50 = *param_4;
    uStack_88 = param_4[1];
    uStack_90 = *param_4;
    uStack_80 = param_5;
    uStack_78 = param_1;
    uStack_70 = param_2;
    func_0x000107c61434(uStack_48);
    func_0x000100087c34(&uStack_90);
    func_0x000107c61574(uVar1);
    func_0x000100bcb1dc(&uStack_50);
  }
  return;
}



/* Entry: 101e486a8; end: 101e487bf;  */

void FUN_101e486a8(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x20;
  func_0x000107c61434(lVar4);
  func_0x000100029284();
  func_0x000107c6142c(lVar4);
  if ((param_3 & 1) == 0) {
    lVar4 = 0;
    func_0x000103b2dc40();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_101e48938();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10 + 8));
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar4 = 0;
    func_0x000103b2dc40();
    lVar6 = *(long *)(lVar4 + -8);
    func_0x000101e3cf20(lVar5 + *(long *)(lVar6 + 0x48) * param_2,param_1);
    FUN_101e48e10(param_2,lVar3);
    *unaff_x20 = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000101e487ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar4);
  return;
}



/* Entry: 101e487c0; end: 101e48937;  */

undefined8 FUN_101e487c0(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_101e48b30();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    func_0x000101e48fe0(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 101e48938; end: 101e48b2f;  */

void FUN_101e48938(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar6 = 0;
  func_0x000103b2dc40();
  lVar7 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  func_0x0001000285a8(0x112e32338,&UNK_10da1b8e0);
  lVar13 = *unaff_x20;
  lVar6 = lVar13;
  func_0x000107c6048c();
  if (*(long *)(lVar13 + 0x10) == 0) {
    func_0x000107c61574(lVar13);
LAB_101e48b08:
    *unaff_x20 = lVar6;
    return;
  }
  lVar1 = lVar13 + 0x40;
  uVar8 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar6 != lVar13) || (lVar1 + uVar8 * 8 <= lVar6 + 0x40U)) {
    func_0x000107c610b8(lVar6 + 0x40U,lVar1,uVar8 << 3);
  }
  lVar14 = 0;
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar8 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(lVar13 + 0x40);
  if (uVar8 == 0) goto LAB_101e48a64;
  do {
    uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar8 = uVar8 - 1 & uVar8;
    while( true ) {
      uVar10 = LZCOUNT(uVar10) | lVar14 << 6;
      lVar11 = uVar10 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x30) + lVar11);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar12 = *(long *)(lVar7 + 0x48) * uVar10;
      func_0x000101e3cf64(*(long *)(lVar13 + 0x38) + lVar12,
                          &stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar11);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      func_0x000101e3cf20(&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                          *(long *)(lVar6 + 0x38) + lVar12);
      func_0x000107c61434(uVar4);
      if (uVar8 != 0) break;
LAB_101e48a64:
      do {
        lVar11 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101e48b30);
          (*pcVar5)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
          func_0x000107c61574(lVar13);
          goto LAB_101e48b08;
        }
        uVar8 = *(ulong *)(lVar1 + lVar11 * 8);
        lVar14 = lVar14 + 1;
      } while (uVar8 == 0);
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      lVar14 = lVar11;
    }
  } while( true );
}



/* Entry: 101e48b30; end: 101e48e0f;  */

void FUN_101e48b30(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112e32340,&UNK_10da1b770);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_101e48c0c;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c6157c(uVar12);
        if (uVar8 != 0) break;
LAB_101e48c0c:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101e48ca0);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_101e48c78;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_101e48c78:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 101e48e10; end: 101e4933f;  */

void FUN_101e48e10(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar8 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar14 = param_1 + 1 & (uVar8 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0) {
    uVar8 = ~uVar8;
    uVar15 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar8);
    uVar15 = uVar15 + 1 & uVar8;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar14 * 0x10);
      uVar16 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar16,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar9 = (ulong)puVar6 & uVar8;
      if ((long)param_1 < (long)uVar15) {
        if (uVar9 < uVar15) {
LAB_101e48f04:
          if ((long)param_1 < (long)uVar9) goto LAB_101e48e8c;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar14 * 0x10);
        if ((param_1 != uVar14) || (puVar3 + 2 <= puVar2)) {
          uVar16 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar16;
        }
        lVar13 = *(long *)(param_2 + 0x38);
        lVar7 = 0;
        func_0x000103b2dc40();
        lVar12 = *(long *)(*(long *)(lVar7 + -8) + 0x48);
        lVar10 = lVar12 * param_1;
        uVar9 = lVar13 + lVar10;
        lVar11 = lVar12 * uVar14;
        lVar13 = lVar13 + lVar11;
        param_1 = uVar14;
        if (lVar10 < lVar11 || (ulong)(lVar13 + lVar12) <= uVar9) {
          func_0x000107c61414(uVar9,lVar13,1,lVar7);
        }
        else if (lVar10 - lVar11 != 0) {
          func_0x000107c61410(uVar9,lVar13,1);
        }
      }
      else if (uVar15 <= uVar9) goto LAB_101e48f04;
LAB_101e48e8c:
      uVar14 = uVar14 + 1 & uVar8;
    } while ((*(ulong *)(lVar1 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0);
  }
  uVar8 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar8) = *(ulong *)(lVar1 + uVar8) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101e48fe0);
  (*pcVar5)();
}



/* Entry: 101e49340; end: 101e49363;  */

/* WARNING: Possible PIC construction at 0x000101e493a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e493a8) */
/* WARNING: Removing unreachable block (ram,0x000101e493ac) */

void FUN_101e49340(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  puVar3 = (ulong *)0x112e32500;
  plVar5 = (long *)&UNK_10da1b938;
  if (iVar2 != 0) {
    unaff_x30 = 0x101e493a8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar3 = (ulong *)0x112e32350;
    plVar5 = (long *)&UNK_10da1b780;
    unaff_x19 = (long *)&UNK_10da1b938;
    unaff_x20 = (ulong *)0x112e32500;
    unaff_x29 = puVar1;
  }
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 101e49364; end: 101e493d7;  */

/* WARNING: Possible PIC construction at 0x000101e493a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e493a8) */
/* WARNING: Removing unreachable block (ram,0x000101e493ac) */

void FUN_101e49364(ulong *param_1,long *param_2,ulong *param_3,long *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  puVar3 = param_3;
  plVar5 = param_4;
  if (iVar2 != 0) {
    unaff_x30 = 0x101e493a8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar3 = param_1;
    plVar5 = param_2;
    unaff_x19 = param_4;
    unaff_x20 = param_3;
    unaff_x29 = puVar1;
  }
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    uVar4 = (long)plVar5 + (long)(int)*plVar5;
    func_0x000107c61518(uVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = uVar4;
  }
  return;
}



/* Entry: 101e493d8; end: 101e4957b;  */

ulong FUN_101e493d8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e494b0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e494b4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
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
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000025,0x800000010f014ee0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e4957c);
  (*pcVar2)();
}



/* Entry: 101e4957c; end: 101e4960f;  */

void FUN_101e4957c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101e49744();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101e49610; end: 101e49743;  */

undefined * FUN_101e49610(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e49744);
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
    puVar3 = param_1;
    func_0x000101a6a21c();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_101e4b6ec(0,0x112d5dfd0,&PTR_PTR_1126b08b8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101e49744; end: 101e4988b;  */

undefined *
FUN_101e49744(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e4988c);
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
    puVar3 = param_5;
    FUN_101e49364(param_5,param_6,param_7,param_8);
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
  if ((param_1 & 1) == 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c6140c(puVar1,puVar4,uVar6,param_5);
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



/* Entry: 101e4988c; end: 101e49c3f;  */

undefined8 FUN_101e4988c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [16];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar4 = 0;
  lStack_b8 = param_2;
  func_0x000103b2dc40();
  lStack_c0 = *(long *)(lVar4 + -8);
  lStack_98 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar12 = (long)&lStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112e32320;
  lStack_e0 = lVar12;
  func_0x0001000285a8(0x112e32320,&UNK_10da1b8d0);
  lStack_c8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar12 - extraout_x8_00;
  lVar4 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  lStack_d0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  uVar11 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = uVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar13 - extraout_x12_00;
  lStack_a8 = *(long *)(param_1 + 0x10);
  if (lStack_a8 != 0) {
    puStack_b0 = (undefined8 *)(param_1 + 0x28);
    uStack_d8 = uVar11;
    do {
      uVar1 = puStack_b0[-1];
      uVar2 = *puStack_b0;
      uVar9 = *(undefined8 *)(lStack_b8 + 0x20);
      puVar5 = &UNK_11048d9e0;
      func_0x000107c613fc(&UNK_11048d9e0,0x18,7);
      func_0x000107c61644(puVar5 + 0x10,uVar9);
      uStack_a0 = uVar2;
      puStack_80 = puVar5;
      uStack_78 = uVar1;
      uStack_70 = uVar2;
      func_0x000107c61434(uVar2);
      lVar3 = lStack_98;
      func_0x000100087bd4(lVar4,FUN_101e49c40,auStack_90,lStack_d0);
      func_0x000107c61574(puVar5);
      lVar6 = lStack_c0;
      (**(code **)(lStack_c0 + 0x38))(lVar13,1,1,lVar3);
      lVar8 = (long)*(int *)(lStack_c8 + 0x30);
      FUN_101e49d50(lVar4,lVar12,0x112e32328,&UNK_10da1b750);
      FUN_101e49d50(lVar13,lVar12 + lVar8,0x112e32328,&UNK_10da1b750);
      pcVar10 = *(code **)(lVar6 + 0x30);
      lVar6 = lVar12;
      (*pcVar10)(lVar12,1,lVar3);
      uVar11 = uStack_d8;
      if ((int)lVar6 == 1) {
        FUN_101e4b2d8(lVar13,0x112e32328,&UNK_10da1b750);
        FUN_101e4b2d8(lVar4,0x112e32328,&UNK_10da1b750);
        lVar8 = lVar12 + lVar8;
        (*pcVar10)(lVar8,1,lStack_98);
        if ((int)lVar8 == 1) {
          FUN_101e4b2d8(lVar12,0x112e32328,&UNK_10da1b750);
          func_0x000107c6142c(uStack_a0);
          return 0;
        }
LAB_101e49a00:
        FUN_101e4b2d8(lVar12,0x112e32320,&UNK_10da1b8d0);
        func_0x000107c6142c(uStack_a0);
      }
      else {
        FUN_101e49d50(lVar12,uStack_d8,0x112e32328,&UNK_10da1b750);
        lVar6 = lVar12 + lVar8;
        (*pcVar10)(lVar6,1,lStack_98);
        lVar3 = lStack_e0;
        if ((int)lVar6 == 1) {
          FUN_101e4b2d8(lVar13,0x112e32328,&UNK_10da1b750);
          FUN_101e4b2d8(lVar4,0x112e32328,&UNK_10da1b750);
          FUN_101e3cee4(uVar11);
          goto LAB_101e49a00;
        }
        func_0x000101e3cf20(lVar12 + lVar8,lStack_e0);
        uVar7 = uVar11;
        func_0x000103b2dc78(uVar11,lVar3);
        FUN_101e3cee4(lVar3);
        FUN_101e4b2d8(lVar13,0x112e32328,&UNK_10da1b750);
        FUN_101e4b2d8(lVar4,0x112e32328,&UNK_10da1b750);
        FUN_101e3cee4(uVar11);
        FUN_101e4b2d8(lVar12,0x112e32328,&UNK_10da1b750);
        func_0x000107c6142c(uStack_a0);
        if ((uVar7 & 1) != 0) {
          return 0;
        }
      }
      puStack_b0 = puStack_b0 + 2;
      lStack_a8 = lStack_a8 + -1;
    } while (lStack_a8 != 0);
  }
  return 1;
}



/* Entry: 101e49c40; end: 101e49ccb;  */

void FUN_101e49c40(void)

{
  long unaff_x20;
  
  FUN_101e3aed4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101e49ccc; end: 101e49ccf;  */

void FUN_101e49ccc(void)

{
  return;
}



/* Entry: 101e49cd0; end: 101e49ceb;  */

void FUN_101e49cd0(void)

{
  long unaff_x20;
  
  FUN_101e47f50(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101e49cec; end: 101e49cf7;  */

undefined8 FUN_101e49cec(undefined8 param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  long unaff_x20;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  undefined1 auStack_130 [8];
  long lStack_128;
  long lStack_120;
  undefined1 *puStack_118;
  ulong uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_b0 [16];
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_80 [32];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lStack_c8 = unaff_x20 + 0x18;
  lVar4 = 0;
  func_0x000103b2dc40();
  lStack_e0 = *(long *)(lVar4 + -8);
  lStack_c0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  lVar4 = 0x112e32320;
  puStack_118 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112e32320,&UNK_10da1b8d0);
  lStack_e8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar4 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  lStack_f0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  uVar15 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = uVar15 - extraout_x12;
  lStack_f8 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_00;
  lVar4 = 0x112e324c0;
  lStack_d8 = lVar9;
  func_0x0001000285a8(0x112e324c0,&UNK_10da1b8e8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_02;
  FUN_101e49d50(param_1,lVar9,0x112e324c0,&UNK_10da1b8e8);
  lVar5 = lVar9;
  func_0x000107c614c4(lVar9,lVar4);
  if ((int)lVar5 == 1) {
    uVar10 = 1;
  }
  else {
    func_0x000107c61428(lVar8 + 0x10,auStack_80,0,0);
    lVar8 = lVar8 + 0x10;
    func_0x000107c61648();
    if (lVar8 == 0) {
      uVar10 = 0;
    }
    else {
      lVar5 = lStack_c8;
      FUN_101e405a4();
      lVar4 = *(long *)(lVar5 + 0x10);
      if (lVar4 == 0) {
        uVar10 = 1;
      }
      else {
        plVar14 = (long *)(lVar5 + 0x28);
        uVar10 = 0;
        lStack_128 = lVar5;
        lStack_120 = lVar9;
        uStack_110 = uVar15;
        lStack_108 = lVar13;
        lStack_100 = lVar8;
        do {
          lVar8 = plVar14[-1];
          lVar5 = *plVar14;
          uVar11 = *(undefined8 *)(lStack_100 + 0x20);
          puVar6 = &UNK_11048d9e0;
          func_0x000107c613fc(&UNK_11048d9e0,0x18,7);
          func_0x000107c61644(puVar6 + 0x10,uVar11);
          lStack_c8 = lVar5;
          puStack_a0 = puVar6;
          lStack_98 = lVar8;
          lStack_90 = lVar5;
          func_0x000107c61434(lVar5);
          lVar3 = lStack_c0;
          lVar2 = lStack_d8;
          func_0x000100087bd4(lStack_d8,0x101e4b8a0,auStack_b0,lStack_f0);
          uStack_d0 = uVar10;
          func_0x000107c61574(puVar6);
          lVar13 = lStack_e0;
          lVar9 = lStack_f8;
          (**(code **)(lStack_e0 + 0x38))(lStack_f8,1,1,lVar3);
          lVar5 = lStack_108;
          lVar8 = (long)*(int *)(lStack_e8 + 0x30);
          FUN_101e49d50(lVar2,lStack_108,0x112e32328,&UNK_10da1b750);
          FUN_101e49d50(lVar9,lVar5 + lVar8,0x112e32328,&UNK_10da1b750);
          pcVar12 = *(code **)(lVar13 + 0x30);
          lVar13 = lVar5;
          (*pcVar12)(lVar5,1,lVar3);
          uVar15 = uStack_110;
          if ((int)lVar13 == 1) {
            FUN_101e4b2d8(lVar9,0x112e32328,&UNK_10da1b750);
            FUN_101e4b2d8(lVar2,0x112e32328,&UNK_10da1b750);
            lVar8 = lVar5 + lVar8;
            (*pcVar12)(lVar8,1,lStack_c0);
            if ((int)lVar8 == 1) {
              FUN_101e4b2d8(lVar5,0x112e32328,&UNK_10da1b750);
              func_0x000107c6142c(lStack_c8);
LAB_101e41474:
              uVar10 = 0;
              lVar8 = lStack_100;
              lVar9 = lStack_120;
              lVar5 = lStack_128;
              goto LAB_101e4148c;
            }
LAB_101e4124c:
            FUN_101e4b2d8(lVar5,0x112e32320,&UNK_10da1b8d0);
            func_0x000107c6142c(lStack_c8);
          }
          else {
            FUN_101e49d50(lVar5,uStack_110,0x112e32328,&UNK_10da1b750);
            lVar13 = lVar5 + lVar8;
            (*pcVar12)(lVar13,1,lStack_c0);
            puVar1 = puStack_118;
            if ((int)lVar13 == 1) {
              FUN_101e4b2d8(lVar9,0x112e32328,&UNK_10da1b750);
              FUN_101e4b2d8(lStack_d8,0x112e32328,&UNK_10da1b750);
              FUN_101e3cee4(uVar15);
              goto LAB_101e4124c;
            }
            func_0x000101e3cf20(lVar5 + lVar8,puStack_118);
            uVar7 = uVar15;
            func_0x000103b2dc78(uVar15,puVar1);
            FUN_101e3cee4(puVar1);
            FUN_101e4b2d8(lVar9,0x112e32328,&UNK_10da1b750);
            FUN_101e4b2d8(lStack_d8,0x112e32328,&UNK_10da1b750);
            FUN_101e3cee4(uVar15);
            FUN_101e4b2d8(lVar5,0x112e32328,&UNK_10da1b750);
            func_0x000107c6142c(lStack_c8);
            if ((uVar7 & 1) != 0) goto LAB_101e41474;
          }
          plVar14 = plVar14 + 2;
          lVar4 = lVar4 + -1;
          uVar10 = uStack_d0;
        } while (lVar4 != 0);
        uVar10 = 1;
        lVar8 = lStack_100;
        lVar9 = lStack_120;
        lVar5 = lStack_128;
      }
LAB_101e4148c:
      func_0x000107c61574(lVar8);
      func_0x000107c6142c(lVar5);
    }
  }
  FUN_101e4b2d8(lVar9,0x112e324c0,&UNK_10da1b8e8);
  return uVar10;
}



/* Entry: 101e49cf8; end: 101e49d13;  */

void FUN_101e49cf8(void)

{
  long unaff_x20;
  
  FUN_101e4803c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101e49d14; end: 101e49d4f;  */

void FUN_101e49d14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  long unaff_x20;
  undefined8 auStack_70 [2];
  undefined1 auStack_60 [16];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  pcVar3 = *(code **)(unaff_x20 + 0x50);
  lVar6 = 0x112e324c0;
  func_0x0001000285a8(0x112e324c0,&UNK_10da1b8e8,uVar1,pcVar3,*(undefined8 *)(unaff_x20 + 0x58));
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = -extraout_x8;
  puVar9 = (undefined8 *)((long)auStack_70 + lVar5);
  FUN_101e49d50(param_1,puVar9,0x112e324c0,&UNK_10da1b8e8);
  puVar7 = puVar9;
  func_0x000107c614c4(puVar9,lVar6);
  if ((int)puVar7 == 1) {
    uVar10 = *puVar9;
    uVar2 = *(undefined8 *)((long)auStack_70 + lVar5 + 8);
    uVar4 = auStack_60[lVar5];
    func_0x0001000298f0();
    func_0x000107c61428();
    puVar7 = (undefined8 *)*puVar7;
    func_0x000107c61174();
    func_0x000100069b5c(uVar1);
    func_0x000107c61170();
    FUN_101e49d98();
    puVar8 = &UNK_1106d42b0;
    func_0x000107c613f8(&UNK_1106d42b0,puVar7,0,0);
    *puVar7 = uVar10;
    puVar7[1] = uVar2;
    *(undefined1 *)(puVar7 + 2) = uVar4;
    FUN_101e49dd8(uVar10,uVar2,uVar4);
    (*pcVar3)(2,puVar8);
    func_0x000107c614ac(puVar8);
    func_0x000101e49df8(uVar10,uVar2,uVar4);
  }
  else {
    FUN_101e4b2d8(puVar9,0x112e324c0,&UNK_10da1b8e8);
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar10 = *puVar9;
    func_0x000107c61174(uVar10);
    func_0x000100069b5c(uVar1);
    func_0x000107c61170(uVar10);
    (*pcVar3)(1,0);
  }
  return;
}



/* Entry: 101e49d50; end: 101e49d97;  */

undefined8 FUN_101e49d50(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101e49d98; end: 101e49dd7;  */

void FUN_101e49d98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e324c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc556f0;
  func_0x000107c61520(&UNK_10dc556f0,&UNK_1106d42b0);
  puRam0000000112e324c8 = puVar1;
  return;
}



/* Entry: 101e49dd8; end: 101e49e17;  */

void FUN_101e49dd8(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  if (param_3 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
  return;
}



/* Entry: 101e49e18; end: 101e49e87;  */

undefined8 FUN_101e49e18(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_103b2da50)(param_2,param_1);
  return param_2;
}



/* Entry: 101e49e88; end: 101e49eaf;  */

undefined1  [16] FUN_101e49e88(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  code *pcVar11;
  long extraout_x8;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long unaff_x20;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined8 auStack_160 [2];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [56];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar7 = *(long *)(unaff_x20 + 0x50);
  puVar1 = (undefined8 *)(unaff_x20 + 0x10);
  lVar4 = 0x112e324c0;
  func_0x0001000285a8(0x112e324c0,&UNK_10da1b8e8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  puVar10 = (undefined8 *)((long)auStack_160 + lVar3);
  lVar15 = *(long *)(unaff_x20 + 0x20);
  puVar5 = (undefined8 *)(lVar15 + 0x20);
  lVar13 = *(long *)(lVar15 + 0x10) + 1;
  puVar16 = (undefined8 *)(lVar15 + -0x18);
  do {
    puVar17 = puVar16;
    lVar13 = lVar13 + -1;
    if (lVar13 == 0) {
      if (*(long *)(lVar15 + 0x10) != 0) {
        puVar12 = (undefined8 *)(lVar15 + 0x30);
        puVar14 = (undefined8 *)(lVar15 + 0x38);
        uVar20 = *(undefined8 *)(lVar15 + 0x28);
        puVar18 = (undefined8 *)(lVar15 + 0x40);
        puVar10 = (undefined8 *)(lVar15 + 0x48);
        puVar16 = (undefined8 *)(lVar15 + 0x50);
        goto LAB_101e43238;
      }
      uStack_a0 = 0;
      uStack_98 = 0xe000000000000000;
      func_0x000107c602fc(0x1d);
      func_0x000107c6142c(uStack_98);
      uStack_a0 = 0x70616e732070695a;
      uStack_98 = 0xe900000000000020;
      func_0x000107c5fb78(*puVar1,*(undefined8 *)(unaff_x20 + 0x18));
      func_0x000107c5fb78(0xd000000000000012,0x800000010f014c80);
      uVar20 = uStack_98;
      *puVar10 = uStack_a0;
      *(undefined8 *)((long)auStack_160 + lVar3 + 8) = uVar20;
      *(undefined1 *)((long)&uStack_150 + lVar3) = 1;
      func_0x000107c6159c(puVar10,lVar4,1);
      func_0x000100087f6c(puVar10);
      FUN_101e4b2d8(puVar10,0x112e324c0,&UNK_10da1b8e8);
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar20 = *puVar10;
      func_0x000107c61174(uVar20);
      func_0x000100069b5c(uVar2);
      func_0x000107c61170(uVar20);
      func_0x0001000b6d30(0);
      func_0x000107c613fc();
      pcVar11 = FUN_101e435e0;
      func_0x0001000b6d50(FUN_101e435e0,0);
      goto LAB_101e434ac;
    }
    puVar16 = puVar17 + 7;
  } while (puVar17[8] != 1);
  puVar16 = puVar17 + 0xd;
  puVar10 = puVar17 + 0xc;
  puVar18 = puVar17 + 0xb;
  puVar14 = puVar17 + 10;
  puVar12 = puVar17 + 9;
  uVar20 = 1;
  puVar5 = puVar17 + 7;
LAB_101e43238:
  uVar19 = *puVar5;
  uVar22 = *puVar16;
  uVar21 = *puVar10;
  uVar24 = *puVar18;
  uVar23 = *puVar14;
  uVar25 = *puVar12;
  auStack_160[0] = param_1;
  func_0x000107c61434(uVar22);
  func_0x000107c61174();
  func_0x000107c61434(uVar24);
  puVar5 = &uStack_a0;
  auStack_160[1] = uVar25;
  uStack_150 = uVar23;
  uStack_148 = uVar21;
  uStack_140 = uVar20;
  uStack_a0 = uVar19;
  uStack_98 = uVar20;
  uStack_90 = uVar25;
  uStack_88 = uVar23;
  uStack_80 = uVar24;
  uStack_78 = uVar21;
  uStack_70 = uVar22;
  FUN_101e3e76c(puVar5,puVar1);
  func_0x000107c61428(lVar7 + 0x10,auStack_b8,0,0);
  lVar4 = lVar7 + 0x10;
  func_0x000107c61648();
  if (lVar4 == 0) {
    uVar20 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(lVar4 + 0x10);
    func_0x000107c615f0(uVar21);
    func_0x000107c61574(lVar4);
    puVar6 = &UNK_11048da08;
    func_0x000107c613fc(&UNK_11048da08,0x18,7);
    func_0x000107c61428(lVar7 + 0x10,auStack_d0,0,0);
    lVar7 = lVar7 + 0x10;
    func_0x000107c61648(lVar7);
    func_0x000107c61644(puVar6 + 0x10,lVar7);
    func_0x000107c61574(lVar7);
    puVar8 = &UNK_11048db20;
    func_0x000107c613fc(&UNK_11048db20,0x60,7);
    uVar20 = auStack_160[0];
    uVar23 = *puVar1;
    uVar26 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar25 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined8 *)(puVar8 + 0x20) = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined8 *)(puVar8 + 0x18) = uVar23;
    *(undefined **)(puVar8 + 0x10) = puVar6;
    *(undefined8 *)(puVar8 + 0x30) = uVar26;
    *(undefined8 *)(puVar8 + 0x28) = uVar25;
    uVar23 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(puVar8 + 0x40) = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined8 *)(puVar8 + 0x38) = uVar23;
    *(undefined2 *)(puVar8 + 0x48) = *(undefined2 *)(unaff_x20 + 0x40);
    *(undefined8 *)(puVar8 + 0x50) = uVar2;
    *(undefined8 *)(puVar8 + 0x58) = auStack_160[0];
    uStack_e0 = 0x101e49e94;
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0x42000000;
    pcStack_f0 = FUN_101e43bbc;
    puStack_e8 = &UNK_11048db38;
    ppuVar9 = &puStack_100;
    puStack_d8 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    puVar6 = puStack_d8;
    FUN_101e3a290(puVar1,auStack_138);
    func_0x000107c6157c(uVar20);
    func_0x000107c61574(puVar6);
    uVar20 = uVar21;
    func_0x000107c50614();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c615e8(uVar21);
  }
  puVar6 = &UNK_11048db70;
  func_0x000107c613fc(&UNK_11048db70,0x58,7);
  uVar21 = *puVar1;
  uVar25 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(puVar6 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(puVar6 + 0x10) = uVar21;
  *(undefined8 *)(puVar6 + 0x28) = uVar25;
  *(undefined8 *)(puVar6 + 0x20) = uVar23;
  uVar21 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(puVar6 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(puVar6 + 0x30) = uVar21;
  *(undefined2 *)(puVar6 + 0x40) = *(undefined2 *)(unaff_x20 + 0x40);
  *(undefined8 *)(puVar6 + 0x48) = uVar20;
  *(undefined8 *)(puVar6 + 0x50) = uVar2;
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  FUN_101e3a290(puVar1,auStack_138);
  pcVar11 = (code *)0x101e49ea4;
  func_0x0001000b6d50(0x101e49ea4,puVar6);
  func_0x000107c61170(puVar5);
  FUN_101e49eb0(uVar19,uStack_140,auStack_160[1],uStack_150,uVar24,uStack_148,uVar22);
LAB_101e434ac:
  auVar27._8_8_ = &PTR_DAT_1107aaa40;
  auVar27._0_8_ = pcVar11;
  return auVar27;
}



/* Entry: 101e49eb0; end: 101e49ee7;  */

/* WARNING: Possible PIC construction at 0x000101e49ed0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e49ed4) */

void FUN_101e49eb0(long param_1)

{
  undefined8 in_x4;
  
  if (param_1 != 0) {
    func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(in_x4);
    return;
  }
  return;
}



/* Entry: 101e49ee8; end: 101e49f03;  */

void FUN_101e49ee8(void)

{
  long unaff_x20;
  
  FUN_101e483a4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101e49f04; end: 101e4a117;  */

void FUN_101e49f04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar4 = &puStack_90;
  ppuVar5 = &puStack_90;
  ppuVar6 = &puStack_90;
  puVar2 = &UNK_11048dc88;
  func_0x000107c613fc(&UNK_11048dc88,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x101e4b2b8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100f11160;
  puStack_78 = &UNK_11048dca0;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_11048dcd8;
  func_0x000107c613fc(&UNK_11048dcd8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  uStack_70 = 0x101e4b2c0;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100f7cecc;
  puStack_78 = &UNK_11048dcf0;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_11048dd28;
  func_0x000107c613fc(&UNK_11048dd28,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  uStack_70 = 0x101e4b2c8;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = (undefined *)0x101e3f098;
  puStack_78 = &UNK_11048dd40;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_11048dd78;
  func_0x000107c613fc(&UNK_11048dd78,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  uStack_70 = 0x101e4b2d0;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100ff4e14;
  puStack_78 = &UNK_11048dd90;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c4c798(param_1);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 101e4a118; end: 101e4b273;  */

void FUN_101e4a118(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                  long param_6,long param_7,undefined8 *param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long *plVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long alStack_1b0 [4];
  long lStack_190;
  long lStack_188;
  long *plStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long *plStack_158;
  long lStack_150;
  long lStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [40];
  long *aplStack_d8 [3];
  long lStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  undefined1 uStack_a0;
  long lStack_80;
  long lStack_78;
  
  lVar1 = 0x112e324c0;
  uStack_118 = param_3;
  plStack_110 = param_5;
  uStack_108 = param_4;
  func_0x0001000285a8(0x112e324c0,&UNK_10da1b8e8);
  lStack_160 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  plStack_158 = (long *)((long)alStack_1b0 - extraout_x8);
  func_0x000103b2dc40();
  plStack_138 = *(long **)(lVar1 + -8);
  plStack_130 = (long *)lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(plStack_138[8]);
  lVar16 = ((long)alStack_1b0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_188 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar16 - extraout_x12;
  lVar1 = 0x112e32328;
  lStack_168 = lVar16;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar16 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_190 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar16 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_170 = lVar16 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_150 = (lVar16 - extraout_x12_01) - extraout_x12_02;
  puVar2 = &UNK_11048db98;
  func_0x000107c613fc(&UNK_11048db98,0x68,7);
  *(long *)(puVar2 + 0x10) = param_6;
  *(long *)(puVar2 + 0x18) = param_7;
  uVar10 = *param_8;
  uVar18 = param_8[3];
  uVar17 = param_8[2];
  *(undefined8 *)(puVar2 + 0x28) = param_8[1];
  *(undefined8 *)(puVar2 + 0x20) = uVar10;
  *(undefined8 *)(puVar2 + 0x38) = uVar18;
  *(undefined8 *)(puVar2 + 0x30) = uVar17;
  uVar10 = param_8[4];
  *(undefined8 *)(puVar2 + 0x48) = param_8[5];
  *(undefined8 *)(puVar2 + 0x40) = uVar10;
  *(undefined2 *)(puVar2 + 0x50) = *(undefined2 *)(param_8 + 6);
  alStack_1b0[3] = param_9;
  *(undefined8 *)(puVar2 + 0x58) = param_9;
  *(undefined8 *)(puVar2 + 0x60) = param_10;
  plVar3 = param_1;
  func_0x000107c614f0();
  lStack_178 = param_6;
  plStack_140 = plVar3;
  func_0x000107c615f0(param_6);
  alStack_1b0[2] = param_7;
  func_0x000107c6157c(param_7);
  plVar15 = &lStack_c0;
  FUN_101e3a290(param_8);
  alStack_1b0[1] = param_10;
  func_0x000107c6157c(param_10);
  plVar3 = param_1;
  func_0x000107c40384();
  lStack_148 = lVar16;
  plStack_120 = plVar3;
  if (plVar3 == (long *)0x1) {
    func_0x000103b252a4();
  }
  else {
    func_0x000103b2526c();
  }
  func_0x000103bbb728(0);
  lStack_c0 = 0;
  lStack_b8 = 0xe000000000000000;
  func_0x000107c602fc(0x16);
  func_0x000107c6142c(lStack_b8);
  lStack_c0 = -0x2fffffffffffffec;
  lStack_b8 = -0x7ffffffef0feb320;
  func_0x000107c5fb78(plVar3,plVar15);
  lVar1 = lStack_b8;
  lVar16 = lStack_c0;
  func_0x000103bbb254(lStack_c0,lStack_b8);
  func_0x000107c6142c(lVar1);
  puVar4 = &UNK_11048da08;
  func_0x000107c613fc(&UNK_11048da08,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,plStack_110);
  puVar5 = &UNK_11048dbc0;
  func_0x000107c613fc(&UNK_11048dbc0,0x98,7);
  uVar10 = uStack_108;
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(long *)(puVar5 + 0x18) = lVar16;
  *(long **)(puVar5 + 0x20) = plVar3;
  *(long **)(puVar5 + 0x28) = plVar15;
  lVar1 = *param_2;
  lVar19 = param_2[3];
  lVar7 = param_2[2];
  *(long *)(puVar5 + 0x38) = param_2[1];
  *(long *)(puVar5 + 0x30) = lVar1;
  *(long *)(puVar5 + 0x48) = lVar19;
  *(long *)(puVar5 + 0x40) = lVar7;
  lVar1 = param_2[4];
  *(long *)(puVar5 + 0x58) = param_2[5];
  *(long *)(puVar5 + 0x50) = lVar1;
  *(short *)(puVar5 + 0x60) = (short)param_2[6];
  *(undefined8 *)(puVar5 + 0x68) = uStack_108;
  *(undefined8 *)(puVar5 + 0x70) = uStack_118;
  *(long **)(puVar5 + 0x78) = plStack_120;
  *(long **)(puVar5 + 0x80) = param_1;
  *(code **)(puVar5 + 0x88) = FUN_101e4b274;
  *(undefined **)(puVar5 + 0x90) = puVar2;
  plStack_180 = plVar3;
  func_0x000107c6157c(puVar2);
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(uVar10);
  func_0x000107c61434(plVar15);
  func_0x000107c6157c(puVar4);
  FUN_101e3a290(param_2,&lStack_c0);
  func_0x000107c6157c(puVar4);
  plStack_128 = plVar15;
  func_0x000107c61434(plVar15);
  func_0x000107c6157c(uVar10);
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(puVar2);
  FUN_101e3a290(param_2,&lStack_c0);
  plVar9 = param_1;
  func_0x000107c4ca5c();
  plVar15 = plStack_130;
  plVar3 = plStack_138;
  lVar1 = lStack_148;
  if ((long)plVar9 < 5) {
    if ((undefined *)0x1 < (undefined *)((long)plVar9 + -1)) {
      if (plVar9 != (long *)0x3) {
LAB_101e4a7ec:
        plStack_130 = param_2;
        (*(code *)plStack_138[7])(lStack_148,1,1,plVar15);
        lStack_c0 = 0;
        lStack_b8 = -0x2000000000000000;
        func_0x000107c602fc(0x15);
        func_0x000107c5fb78(0xd000000000000013,0x800000010f014d00);
        plVar9 = param_1;
        func_0x000107c4ca5c();
        uVar10 = 0;
        aplStack_d8[0] = plVar9;
        func_0x000101e3e06c(0);
        func_0x000107c603d0(aplStack_d8,&lStack_c0,uVar10,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        lVar7 = lStack_c0;
        plStack_110 = (long *)lStack_b8;
        func_0x000107c61428(puVar4 + 0x10,aplStack_d8,0,0);
        puVar11 = (undefined8 *)(puVar4 + 0x10);
        func_0x000107c61648();
        if (puVar11 == (undefined8 *)0x0) {
          func_0x000107c61574(puVar4);
          func_0x000107c61574(puVar5);
          func_0x000107c6142c(plStack_110);
          func_0x000107c61430(plStack_128,2);
          FUN_101ad914c(plStack_130);
          func_0x000107c61574(puVar2);
          func_0x000107c615e8(param_1);
          func_0x000107c61574(uStack_108);
          FUN_101e4b2d8(lVar1,0x112e32328,&UNK_10da1b750);
          func_0x000107c61574(puVar2);
          func_0x000107c61574(puVar4);
          return;
        }
        lStack_150 = lVar7;
        plStack_140 = (long *)puVar4;
        plStack_138 = puVar11;
        func_0x0001000298f0();
        func_0x000107c61428();
        uVar10 = *puVar11;
        func_0x000107c61174(uVar10);
        func_0x000100069b5c(lVar16);
        func_0x000107c61170(uVar10);
        lVar16 = lStack_190;
        FUN_101e49d50(lVar1,lStack_190,0x112e32328,&UNK_10da1b750);
        lVar7 = lVar16;
        (*(code *)plVar3[6])(lVar16,1,plVar15);
        lVar1 = lStack_188;
        if ((int)lVar7 == 1) {
          FUN_101e4b2d8(lVar16,0x112e32328,&UNK_10da1b750);
          plVar6 = plStack_110;
          plVar15 = plStack_130;
          lVar1 = lStack_150;
          lStack_78 = plStack_130[1];
          lStack_80 = *plStack_130;
          lStack_b8 = plStack_130[1];
          lStack_c0 = *plStack_130;
          plStack_b0 = (long *)lStack_150;
          lStack_a8 = (long)plStack_110;
          uStack_a0 = 1;
          func_0x000107c61438(plStack_110,2);
          func_0x000100402194(&lStack_80,auStack_100);
          func_0x000100087c34(&lStack_c0);
          func_0x000100bcb1dc(&lStack_80);
          func_0x000107c6142c(plVar6);
          plVar3 = plStack_158;
          *plStack_158 = lVar1;
          plVar3[1] = (long)plVar6;
          *(undefined1 *)(plVar3 + 2) = 1;
          func_0x000107c6159c(plVar3,lStack_160,1);
          func_0x000107c61434(plVar6);
          func_0x000100087f6c(plVar3);
          FUN_101e4b2d8(plVar3,0x112e324c0,&UNK_10da1b8e8);
          func_0x000107c61428(puVar11,&lStack_c0,0,0);
          uVar10 = *puVar11;
          func_0x000107c61174(uVar10);
          func_0x000100069b5c(uStack_118);
          plVar9 = plStack_128;
          func_0x000107c6142c(plStack_128);
          plVar3 = plStack_140;
          func_0x000107c61574(plStack_140);
          func_0x000107c61574(puVar5);
          func_0x000107c6142c(plVar6);
          func_0x000107c61574(plStack_138);
          func_0x000107c61170(uVar10);
          FUN_101ad914c(plVar15);
          func_0x000107c6142c(plVar9);
          func_0x000107c6142c(plVar6);
          func_0x000107c61574(puVar2);
          func_0x000107c615e8(param_1);
          func_0x000107c61574(uStack_108);
          FUN_101e4b2d8(lStack_148,0x112e32328,&UNK_10da1b750);
          func_0x000107c61574(puVar2);
          func_0x000107c61574(plVar3);
          return;
        }
        func_0x000101e3cf20(lVar16,lStack_188);
        plVar3 = plStack_138;
        uVar10 = plStack_138[4];
        func_0x000107c6157c(uVar10);
        FUN_101e3acec(lVar1,plStack_180,plStack_128);
        func_0x000107c61574(uVar10);
        plVar9 = plStack_120;
        plVar15 = plStack_130;
        if (plStack_120 == (long *)0x1) {
          func_0x000101e41f94(plStack_130,lVar1,param_1,1);
        }
        else {
          puVar4 = &UNK_11048da08;
          func_0x000107c613fc(&UNK_11048da08,0x18,7);
          func_0x000107c61644(puVar4 + 0x10,plVar3);
          puVar14 = &UNK_11048dbe8;
          func_0x000107c613fc(&UNK_11048dbe8,0x58,7);
          *(undefined **)(puVar14 + 0x10) = puVar4;
          lVar1 = *plVar15;
          lVar7 = plVar15[3];
          lVar16 = plVar15[2];
          *(long *)(puVar14 + 0x20) = plVar15[1];
          *(long *)(puVar14 + 0x18) = lVar1;
          *(long *)(puVar14 + 0x30) = lVar7;
          *(long *)(puVar14 + 0x28) = lVar16;
          lVar1 = plVar15[4];
          *(long *)(puVar14 + 0x40) = plVar15[5];
          *(long *)(puVar14 + 0x38) = lVar1;
          *(short *)(puVar14 + 0x48) = (short)plVar15[6];
          *(long **)(puVar14 + 0x50) = plVar9;
          FUN_101e3a290(plVar15,&lStack_c0);
          func_0x000107c6157c(puVar4);
          func_0x000103b2581c(0x101e4b288,puVar14);
          func_0x000107c61574(puVar4);
          lVar1 = lStack_188;
          func_0x000107c61574(puVar14);
        }
        plVar15 = plStack_140;
        lVar19 = lStack_148;
        plVar3 = plStack_158;
        func_0x000101e3cf64(lVar1,plStack_158);
        func_0x000107c6159c(plVar3,lStack_160,0);
        func_0x000100087f6c(plVar3);
        FUN_101e4b2d8(plVar3,0x112e324c0,&UNK_10da1b8e8);
        lVar7 = lStack_178;
        lVar16 = alStack_1b0[2];
        if (lStack_178 == 0) {
          func_0x000107c61428(puVar11,&lStack_c0,0,0);
          uVar10 = *puVar11;
          func_0x000107c61174(uVar10);
          func_0x000100069b5c(alStack_1b0[3]);
          func_0x000107c61574(puVar5);
          func_0x000107c6142c(plStack_110);
          func_0x000107c61574(plStack_138);
          func_0x000107c61170(uVar10);
        }
        else {
          func_0x000107c61428(alStack_1b0[2] + 0x10,&lStack_c0,0,0);
          lVar16 = lVar16 + 0x10;
          func_0x000107c61648();
          if (lVar16 == 0) {
            func_0x000107c61574(puVar5);
            func_0x000107c6142c(plStack_110);
            func_0x000107c61574(plStack_138);
          }
          else {
            func_0x000107c615f0(lVar7);
            FUN_101e43ddc();
            func_0x000107c61574(puVar5);
            func_0x000107c6142c(plStack_110);
            func_0x000107c61574(plStack_138);
            func_0x000107c61574(lVar16);
            func_0x000107c615e8(lVar7);
          }
        }
        plVar3 = plStack_128;
        func_0x000107c6142c(plStack_128);
        func_0x000107c61574(plVar15);
        FUN_101ad914c(plStack_130);
        func_0x000107c6142c(plVar3);
        func_0x000107c61574(puVar2);
        func_0x000107c615e8(param_1);
        func_0x000107c61574(uStack_108);
        func_0x000101e3cee4(lVar1);
        FUN_101e4b2d8(lVar19,0x112e32328,&UNK_10da1b750);
        func_0x000107c61574(puVar2);
        func_0x000107c61574(plVar15);
        return;
      }
LAB_101e4a5e0:
      plVar9 = plStack_140;
      plStack_130 = param_2;
      func_0x000103b24c4c();
      lVar1 = lStack_150;
      if (plVar9 == (long *)0x0) {
        puVar14 = &UNK_11048da08;
        func_0x000107c613fc(&UNK_11048da08,0x18,7);
        plVar3 = plStack_110;
        func_0x000107c61644(puVar14 + 0x10,plStack_110);
        puVar12 = &UNK_11048dc10;
        func_0x000107c613fc(&UNK_11048dc10,0x30,7);
        *(undefined **)(puVar12 + 0x10) = puVar14;
        *(undefined8 *)(puVar12 + 0x18) = 0x101e4b284;
        *(undefined **)(puVar12 + 0x20) = puVar5;
        *(long **)(puVar12 + 0x28) = param_1;
        puVar13 = PTR__OBJC_CLASS___NSThread_1126b47e0;
        func_0x000107c61168();
        func_0x000107c615f0(param_1);
        func_0x000107c6157c(puVar14);
        func_0x000107c6157c(puVar5);
        func_0x000107c4a02c();
        if (((ulong)puVar13 & 1) == 0) {
          FUN_101e45e6c(puVar14,0x101e4b284,puVar5,param_1);
          plVar3 = plStack_128;
          func_0x000107c6142c(plStack_128);
          func_0x000107c61574(puVar4);
          func_0x000107c61574(puVar5);
        }
        else {
          func_0x000107c61574(puVar14);
          lVar1 = plVar3[6];
          func_0x000107c614f0(lVar1);
          func_0x00010090569c(0x101e4b298,puVar12,lVar1);
          plVar3 = plStack_128;
          func_0x000107c6142c(plStack_128);
          func_0x000107c61574(puVar4);
          puVar14 = puVar5;
        }
      }
      else {
        (*(code *)plVar3[7])(lStack_150,1,1,plVar15);
        func_0x000107c61428(puVar4 + 0x10,aplStack_d8,0,0);
        plVar6 = (long *)(puVar4 + 0x10);
        func_0x000107c61648();
        plStack_110 = plVar6;
        if (plVar6 != (long *)0x0) {
          plStack_138 = plVar9;
          func_0x0001000298f0();
          func_0x000107c61428();
          lVar7 = *plVar6;
          plStack_140 = plVar6;
          func_0x000107c61174(lVar7);
          func_0x000100069b5c(lVar16);
          func_0x000107c61170(lVar7);
          lVar16 = lStack_170;
          FUN_101e49d50(lVar1,lStack_170,0x112e32328,&UNK_10da1b750);
          lVar19 = lVar16;
          (*(code *)plVar3[6])(lVar16,1,plVar15);
          plVar3 = plStack_140;
          lVar7 = lStack_168;
          if ((int)lVar19 == 1) {
            FUN_101e4b2d8(lVar16,0x112e32328,&UNK_10da1b750);
            plVar6 = plStack_110;
            plVar15 = plStack_138;
            lStack_78 = plStack_130[1];
            lStack_80 = *plStack_130;
            lStack_b8 = plStack_130[1];
            lStack_c0 = *plStack_130;
            plStack_b0 = plStack_138;
            lStack_a8 = 0;
            uStack_a0 = 0;
            plVar8 = plStack_138;
            func_0x000107c61174(plStack_138);
            func_0x000107c61174();
            func_0x000100402194(&lStack_80,auStack_100);
            func_0x000100087c34(&lStack_c0);
            func_0x000100bcb1dc(&lStack_80);
            func_0x000107c61170(plVar8);
            plVar3 = plStack_158;
            *plStack_158 = (long)plVar15;
            plVar3[1] = 0;
            *(undefined1 *)(plVar3 + 2) = 0;
            func_0x000107c6159c(plVar3,lStack_160,1);
            func_0x000107c61174(plVar8);
            func_0x000100087f6c(plVar3);
            FUN_101e4b2d8(plVar3,0x112e324c0,&UNK_10da1b8e8);
            plVar9 = plStack_140;
            func_0x000107c61428(plStack_140,&lStack_c0,0,0);
            plVar9 = (long *)*plVar9;
            func_0x000107c61174(plVar9);
            func_0x000100069b5c(uStack_118);
            func_0x000107c61574(plVar6);
            func_0x000107c61170(plVar8);
            func_0x000107c61170(plVar8);
          }
          else {
            func_0x000101e3cf20(lVar16,lStack_168);
            plVar9 = plStack_110;
            lVar16 = plStack_110[4];
            func_0x000107c6157c(lVar16);
            FUN_101e3acec(lVar7,plStack_180,plStack_128);
            func_0x000107c61574(lVar16);
            plVar15 = plStack_120;
            if (plStack_120 == (long *)0x1) {
              func_0x000101e41f94(plStack_130,lVar7,param_1,1);
            }
            else {
              puVar14 = &UNK_11048da08;
              func_0x000107c613fc(&UNK_11048da08,0x18,7);
              func_0x000107c61644(puVar14 + 0x10,plVar9);
              puVar12 = &UNK_11048dc38;
              func_0x000107c613fc(&UNK_11048dc38,0x58,7);
              *(undefined **)(puVar12 + 0x10) = puVar14;
              lVar1 = *plStack_130;
              lVar7 = plStack_130[3];
              lVar16 = plStack_130[2];
              *(long *)(puVar12 + 0x20) = plStack_130[1];
              *(long *)(puVar12 + 0x18) = lVar1;
              *(long *)(puVar12 + 0x30) = lVar7;
              *(long *)(puVar12 + 0x28) = lVar16;
              lVar1 = plStack_130[4];
              *(long *)(puVar12 + 0x40) = plStack_130[5];
              *(long *)(puVar12 + 0x38) = lVar1;
              *(short *)(puVar12 + 0x48) = (short)plStack_130[6];
              *(long **)(puVar12 + 0x50) = plVar15;
              FUN_101e3a290(plStack_130,&lStack_c0);
              func_0x000107c6157c(puVar14);
              func_0x000103b2581c(0x101e4b994,puVar12);
              lVar1 = lStack_150;
              func_0x000107c61574(puVar14);
              lVar7 = lStack_168;
              func_0x000107c61574(puVar12);
            }
            plVar15 = plStack_158;
            func_0x000101e3cf64(lVar7,plStack_158);
            func_0x000107c6159c(plVar15,lStack_160,0);
            func_0x000100087f6c(plVar15);
            FUN_101e4b2d8(plVar15,0x112e324c0,&UNK_10da1b8e8);
            lVar7 = lStack_178;
            lVar16 = alStack_1b0[2];
            if (lStack_178 == 0) {
              func_0x000107c61428(plVar3,&lStack_c0,0,0);
              lVar16 = *plVar3;
              func_0x000107c61174(lVar16);
              func_0x000100069b5c(alStack_1b0[3]);
              func_0x000107c61574(plVar9);
              func_0x000107c61170(lVar16);
            }
            else {
              func_0x000107c61428(alStack_1b0[2] + 0x10,&lStack_c0,0,0);
              lVar16 = lVar16 + 0x10;
              func_0x000107c61648();
              if (lVar16 == 0) {
                func_0x000107c61574(plVar9);
              }
              else {
                func_0x000107c615f0(lVar7);
                FUN_101e43ddc();
                func_0x000107c61574(plVar9);
                func_0x000107c61574(lVar16);
                func_0x000107c615e8(lVar7);
              }
            }
            func_0x000101e3cee4(lStack_168);
            plVar9 = plStack_138;
          }
        }
        func_0x000107c61170(plVar9);
        FUN_101e4b2d8(lVar1,0x112e32328,&UNK_10da1b750);
        plVar3 = plStack_128;
        func_0x000107c6142c(plStack_128);
        puVar14 = puVar4;
        puVar12 = puVar5;
      }
      func_0x000107c61574(puVar14);
      func_0x000107c61574(puVar12);
      FUN_101ad914c(plStack_130);
      func_0x000107c615e8(param_1);
      func_0x000107c61574(uStack_108);
      func_0x000107c61578(puVar2,2);
      func_0x000107c61574(puVar4);
      func_0x000107c6142c(plVar3);
      return;
    }
    func_0x000101e459ac(param_1,0x101e4b284,puVar5);
  }
  else {
    if (plVar9 == (long *)0x5) goto LAB_101e4a5e0;
    if (plVar9 != (long *)0x9) goto LAB_101e4a7ec;
    FUN_101e49f04(param_1,0x101e4b284,puVar5);
  }
  plVar3 = plStack_128;
  func_0x000107c6142c(plStack_128);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  FUN_101ad914c(param_2);
  func_0x000107c61574(puVar4);
  func_0x000107c6142c(plVar3);
  func_0x000107c61578(puVar2,2);
  func_0x000107c615e8(param_1);
  func_0x000107c61574(uStack_108);
  return;
}



/* Entry: 101e4b274; end: 101e4b2d7;  */

void FUN_101e4b274(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar4 = *puVar3;
    func_0x000107c61174(uVar4);
    func_0x000100069b5c(uVar1);
    func_0x000107c61170(uVar4);
  }
  else {
    func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61648();
    if (lVar2 != 0) {
      func_0x000107c615f0(puVar3);
      FUN_101e43ddc();
      func_0x000107c61574(lVar2);
      func_0x000107c615e8(puVar3);
    }
  }
  return;
}



/* Entry: 101e4b2d8; end: 101e4b317;  */

undefined8 FUN_101e4b2d8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101e4b318; end: 101e4b337;  */

void FUN_101e4b318(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  ulong uVar10;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  long lVar14;
  code *pcVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  code *pcStack_1c0;
  ulong *puStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  ulong uStack_178;
  long lStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  ulong uStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 auStack_110 [16];
  undefined *puStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x58);
  lVar1 = 0;
  func_0x000103b2dc40();
  lStack_138 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_138 + 0x40));
  lVar17 = (long)&pcStack_1c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0x112e32320;
  func_0x0001000285a8(0x112e32320,&UNK_10da1b8d0);
  lStack_128 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  lVar14 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar14 - extraout_x12;
  lVar11 = 0x112e32328;
  lStack_118 = lVar9;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  lStack_130 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  uVar10 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_158 = uVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = uVar10 - extraout_x12_00;
  lStack_148 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_01;
  lStack_140 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar10 = lVar11 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = uVar10 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_120 = lVar11 - extraout_x12_04;
  puVar8 = auStack_80;
  func_0x000107c61428(lVar7 + 0x10,puVar8,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61648();
  if (lVar7 == 0) {
    return;
  }
  lVar9 = lVar7;
  uStack_190 = uVar13;
  uStack_188 = uVar12;
  lStack_180 = lVar17;
  lStack_170 = lVar14;
  uStack_160 = uVar10;
  lStack_150 = lVar1;
  func_0x000103b25284();
  puVar2 = PTR_PTR_1126b08b8;
  func_0x000107c610f8();
  lVar1 = lVar9;
  func_0x000107c5fadc(lVar9,puVar8);
  func_0x000107c4766c();
  func_0x000107c61170(lVar1);
  puVar3 = PTR_PTR_1126b1060;
  func_0x000107c610f8();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c47d08();
  func_0x000107c61170(puVar4);
  func_0x000107c61428(lVar7 + 0x40,auStack_98,0,0);
  uVar13 = *(undefined8 *)(lVar7 + 0x40);
  uVar10 = *(ulong *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61434(uVar13);
  func_0x000107c61434(uVar12);
  uStack_178 = uVar10;
  func_0x0001000f66f0(uVar10,uVar12,uVar13);
  func_0x000107c6142c(uVar13);
  if ((uVar10 & 1) != 0) {
    func_0x000107c61574(lVar7);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c6142c(puVar8);
    goto LAB_101e46678;
  }
  uVar13 = *(undefined8 *)(lVar7 + 0x20);
  puVar4 = &UNK_11048d9e0;
  puStack_1b8 = (ulong *)(unaff_x20 + 0x18);
  uStack_1a8 = uVar12;
  puStack_1a0 = puVar2;
  lStack_198 = lVar7;
  puStack_168 = puVar3;
  func_0x000107c613fc(&UNK_11048d9e0,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,uVar13);
  lStack_1b0 = lVar9;
  puStack_100 = puVar4;
  lStack_f8 = lVar9;
  puStack_f0 = puVar8;
  func_0x000107c6157c(uVar13);
  lVar14 = lStack_120;
  func_0x000100087bd4(lStack_120,0x101e4b8f0,auStack_110,lStack_130);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(puVar4);
  lVar9 = lStack_138;
  lVar1 = lStack_150;
  pcStack_1c0 = *(code **)(lStack_138 + 0x38);
  (*pcStack_1c0)(lVar11,1,1,lStack_150);
  lVar17 = lStack_118;
  lVar7 = (long)*(int *)(lStack_128 + 0x30);
  FUN_101e49d50(lVar14,lStack_118,0x112e32328,&UNK_10da1b750);
  FUN_101e49d50(lVar11,lVar17 + lVar7,0x112e32328,&UNK_10da1b750);
  pcVar15 = *(code **)(lVar9 + 0x30);
  lVar9 = lVar17;
  (*pcVar15)(lVar17,1,lVar1);
  uVar10 = uStack_160;
  if ((int)lVar9 == 1) {
    FUN_101e4b2d8(lVar11,0x112e32328,&UNK_10da1b750);
    lVar17 = lStack_118;
    FUN_101e4b2d8(lVar14,0x112e32328,&UNK_10da1b750);
    lVar7 = lVar17 + lVar7;
    (*pcVar15)(lVar7,1,lVar1);
    uVar12 = uStack_1a8;
    if ((int)lVar7 == 1) {
      FUN_101e4b2d8(lVar17,0x112e32328,&UNK_10da1b750);
LAB_101e46734:
      lVar7 = lStack_198;
      func_0x000107c61428(lStack_198 + 0x40,auStack_110,0x21,0);
      func_0x000100403b00(&puStack_d0,uStack_178,uVar12);
      func_0x000107c614a8(auStack_110);
      func_0x000107c6142c(uStack_c8);
      uVar12 = *(undefined8 *)(lVar7 + 0x20);
      puVar2 = &UNK_11048d9e0;
      func_0x000107c613fc(&UNK_11048d9e0,0x18,7);
      func_0x000107c61644(puVar2 + 0x10,uVar12);
      lStack_f8 = lStack_1b0;
      puStack_100 = puVar2;
      puStack_f0 = puVar8;
      func_0x000107c6157c(uVar12);
      lVar17 = lStack_140;
      func_0x000100087bd4(lStack_140,0x101e4b904,auStack_110,lStack_130);
      func_0x000107c61574(uVar12);
      func_0x000107c61574(puVar2);
      lVar14 = lStack_148;
      (*pcStack_1c0)(lStack_148,1,1,lStack_150);
      lVar1 = lStack_170;
      lVar11 = (long)*(int *)(lStack_128 + 0x30);
      FUN_101e49d50(lVar17,lStack_170,0x112e32328,&UNK_10da1b750);
      lVar9 = lStack_150;
      FUN_101e49d50(lVar14,lVar1 + lVar11,0x112e32328,&UNK_10da1b750);
      lVar5 = lVar1;
      (*pcVar15)(lVar1,1,lVar9);
      uVar10 = uStack_158;
      if ((int)lVar5 == 1) {
        FUN_101e4b2d8(lVar14,0x112e32328,&UNK_10da1b750);
        FUN_101e4b2d8(lVar17,0x112e32328,&UNK_10da1b750);
        lVar11 = lVar1 + lVar11;
        (*pcVar15)(lVar11,1,lVar9);
        puVar2 = puStack_1a0;
        puVar16 = puStack_1b8;
        if ((int)lVar11 != 1) {
LAB_101e46970:
          puVar2 = puStack_1a0;
          FUN_101e4b2d8(lVar1,0x112e32320,&UNK_10da1b8d0);
          goto LAB_101e46a40;
        }
        FUN_101e4b2d8(lVar1,0x112e32328,&UNK_10da1b750);
      }
      else {
        FUN_101e49d50(lVar1,uStack_158,0x112e32328,&UNK_10da1b750);
        lVar14 = lVar1 + lVar11;
        (*pcVar15)(lVar14,1,lVar9);
        lVar9 = lStack_180;
        puVar16 = puStack_1b8;
        if ((int)lVar14 == 1) {
          FUN_101e4b2d8(lStack_148,0x112e32328,&UNK_10da1b750);
          FUN_101e4b2d8(lStack_140,0x112e32328,&UNK_10da1b750);
          FUN_101e3cee4(uVar10);
          goto LAB_101e46970;
        }
        func_0x000101e3cf20(lVar1 + lVar11,lStack_180);
        uVar18 = uVar10;
        func_0x000103b2dc78(uVar10,lVar9);
        FUN_101e3cee4(lVar9);
        FUN_101e4b2d8(lStack_148,0x112e32328,&UNK_10da1b750);
        FUN_101e4b2d8(lStack_140,0x112e32328,&UNK_10da1b750);
        FUN_101e3cee4(uVar10);
        FUN_101e4b2d8(lVar1,0x112e32328,&UNK_10da1b750);
        puVar2 = puStack_1a0;
        if ((uVar18 & 1) == 0) goto LAB_101e46a40;
      }
      lVar11 = *(long *)(lVar7 + 0x28);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar11 != 0) {
        lVar1 = lVar11;
        func_0x000107c4f740();
        if (lVar1 == 0) {
          puVar3 = &UNK_11048de68;
          func_0x000107c613fc(&UNK_11048de68,0x68,7);
          uVar10 = *puVar16;
          uVar19 = puVar16[3];
          uVar18 = puVar16[2];
          *(ulong *)(puVar3 + 0x30) = puVar16[1];
          *(ulong *)(puVar3 + 0x28) = uVar10;
          *(long *)(puVar3 + 0x10) = lVar7;
          *(long *)(puVar3 + 0x18) = lStack_1b0;
          *(undefined1 **)(puVar3 + 0x20) = puVar8;
          *(ulong *)(puVar3 + 0x40) = uVar19;
          *(ulong *)(puVar3 + 0x38) = uVar18;
          uVar10 = puVar16[4];
          *(ulong *)(puVar3 + 0x50) = puVar16[5];
          *(ulong *)(puVar3 + 0x48) = uVar10;
          *(short *)(puVar3 + 0x58) = (short)puVar16[6];
          *(undefined8 *)(puVar3 + 0x60) = uStack_190;
          pcStack_b0 = FUN_101e4b338;
          puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_c8 = 0x42000000;
          puStack_c0 = (undefined *)0x101699d18;
          puStack_b8 = &UNK_11048de80;
          ppuVar6 = &puStack_d0;
          puStack_a8 = puVar3;
          func_0x000107c60bc4(ppuVar6);
          puVar3 = puStack_a8;
          func_0x000107c6157c(lVar7);
          FUN_101e3a290(puVar16,auStack_110);
          func_0x000107c61574(puVar3);
          puVar3 = puStack_168;
          func_0x000107c50778(lVar11);
          func_0x000107c61180();
          func_0x000107c615e8();
          func_0x000107c61574(lVar7);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar2);
          func_0x000107c60bd0(ppuVar6);
          func_0x000107c615e8(lVar11);
          return;
        }
        func_0x000107c615e8(lVar11);
      }
LAB_101e46a40:
      puVar3 = &UNK_11048de18;
      func_0x000107c613fc(&UNK_11048de18,0x62,7);
      *(long *)(puVar3 + 0x10) = lVar7;
      *(long *)(puVar3 + 0x18) = lStack_1b0;
      *(undefined1 **)(puVar3 + 0x20) = puVar8;
      *(undefined **)(puVar3 + 0x28) = puVar2;
      uVar10 = *puVar16;
      uVar19 = puVar16[3];
      uVar18 = puVar16[2];
      *(ulong *)(puVar3 + 0x38) = puVar16[1];
      *(ulong *)(puVar3 + 0x30) = uVar10;
      *(ulong *)(puVar3 + 0x48) = uVar19;
      *(ulong *)(puVar3 + 0x40) = uVar18;
      uVar10 = puVar16[4];
      *(ulong *)(puVar3 + 0x58) = puVar16[5];
      *(ulong *)(puVar3 + 0x50) = uVar10;
      *(short *)(puVar3 + 0x60) = (short)puVar16[6];
      pcStack_b0 = (code *)0x101e4b328;
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0x42000000;
      puStack_c0 = &UNK_10130cf28;
      puStack_b8 = &UNK_11048de30;
      ppuVar6 = &puStack_d0;
      puStack_a8 = puVar3;
      func_0x000107c60bc4(ppuVar6);
      puVar3 = puStack_a8;
      func_0x000107c6157c(lVar7);
      FUN_101e3a290(puVar16,auStack_110);
      func_0x000107c61174(puVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c42d08(0,0,0x3ff0000000000000,uStack_188);
      func_0x000107c61574(lVar7);
      func_0x000107c61170(puStack_168);
      func_0x000107c61170(puVar2);
      func_0x000107c60bd0(ppuVar6);
      return;
    }
LAB_101e4662c:
    puVar2 = puStack_168;
    uVar12 = uStack_1a8;
    FUN_101e4b2d8(lVar17,0x112e32320,&UNK_10da1b8d0);
  }
  else {
    FUN_101e49d50(lVar17,uStack_160,0x112e32328,&UNK_10da1b750);
    lVar9 = lVar17 + lVar7;
    (*pcVar15)(lVar9,1,lVar1);
    lVar1 = lStack_180;
    if ((int)lVar9 == 1) {
      FUN_101e4b2d8(lVar11,0x112e32328,&UNK_10da1b750);
      FUN_101e4b2d8(lStack_120,0x112e32328,&UNK_10da1b750);
      FUN_101e3cee4(uVar10);
      goto LAB_101e4662c;
    }
    func_0x000101e3cf20(lVar17 + lVar7,lStack_180);
    uVar18 = uVar10;
    func_0x000103b2dc78(uVar10,lVar1);
    FUN_101e3cee4(lVar1);
    FUN_101e4b2d8(lVar11,0x112e32328,&UNK_10da1b750);
    FUN_101e4b2d8(lStack_120,0x112e32328,&UNK_10da1b750);
    FUN_101e3cee4(uVar10);
    FUN_101e4b2d8(lVar17,0x112e32328,&UNK_10da1b750);
    puVar2 = puStack_168;
    uVar12 = uStack_1a8;
    if ((uVar18 & 1) != 0) goto LAB_101e46734;
  }
  lVar11 = lStack_198;
  func_0x000107c6142c(puVar8);
  func_0x000107c61574(lVar11);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puStack_1a0);
LAB_101e46678:
  func_0x000107c6142c(uVar12);
  return;
}



/* Entry: 101e4b338; end: 101e4b3bf;  */

void FUN_101e4b338(void)

{
  func_0x000101e46c38();
  return;
}



/* Entry: 101e4b3c0; end: 101e4b3c7;  */

void FUN_101e4b3c0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar1 = puVar3;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  func_0x000100069b5c(puVar3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101e4b3c8; end: 101e4b45f;  */

void FUN_101e4b3c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101e4b460; end: 101e4b49f;  */

void FUN_101e4b460(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == -1) {
    return;
  }
  if (param_3 != '\x01') {
    if (param_3 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)();
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 101e4b4a0; end: 101e4b4d3;  */

void FUN_101e4b4a0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000101e422c4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),unaff_x20 + 0x30,unaff_x20 + 0x68,
                      *(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 101e4b4d4; end: 101e4b4e3;  */

void FUN_101e4b4d4(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  puVar3 = *(undefined8 **)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  puVar2 = (undefined8 *)(lVar1 + 0x10);
  func_0x000107c61648();
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c61574();
    if (puVar3 != (undefined8 *)0x0) {
      func_0x000107c3f474();
      puVar2 = puVar3;
    }
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar4 = *puVar2;
    func_0x000107c61174(uVar4);
    func_0x000100069b5c(uVar5);
    func_0x000107c61170(uVar4);
  }
  return;
}


