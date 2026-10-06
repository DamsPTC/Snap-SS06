/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1023c9384; end: 1023c9513;  */

bool FUN_1023c9384(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61428(unaff_x20 + 0x28,auStack_b8,0,0);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(lVar5 + 0x10);
  func_0x000107c61434(lVar5);
  uVar7 = 0xffffffffffffffff;
  puVar4 = (undefined8 *)(lVar5 + 0x5c);
  do {
    lVar1 = uVar7 - lVar6;
    if (lVar1 == -1) break;
    uVar7 = uVar7 + 1;
    if (*(ulong *)(lVar5 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c944c);
      (*pcVar2)();
    }
    uStack_68 = puVar4[-5];
    uStack_70 = puVar4[-6];
    uStack_58 = puVar4[-3];
    uStack_60 = puVar4[-4];
    uStack_48 = puVar4[-1];
    uStack_50 = puVar4[-2];
    uStack_98 = puVar4[1];
    uStack_a0 = *puVar4;
    uStack_88 = puVar4[3];
    uStack_90 = puVar4[2];
    uStack_78 = puVar4[5];
    uStack_80 = puVar4[4];
    puVar3 = &uStack_a0;
    func_0x000107c5ff28(puVar3,&uStack_70);
    puVar4 = puVar4 + 0x11;
  } while (((ulong)puVar3 & 1) == 0);
  func_0x000107c6142c(lVar5);
  return lVar1 != -1;
}



/* Entry: 1023c9514; end: 1023c955b;  */

uint FUN_1023c9514(uint param_1)

{
  FUN_1023c9384();
  return param_1 & 1;
}



/* Entry: 1023c955c; end: 1023c963b;  */

void FUN_1023c955c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    func_0x000107c615f0(uVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c615e8(uVar3);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1023c963c(uVar2);
    func_0x000107c61574(lVar1);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined1 *)(param_2 + 0x38) = 0;
    func_0x000107c61574();
  }
  return;
}



/* Entry: 1023c963c; end: 1023c9a13;  */

void FUN_1023c963c(ulong param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long extraout_x8;
  undefined1 *puVar14;
  long unaff_x20;
  ulong uVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_1d0 [8];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined7 uStack_128;
  undefined4 uStack_121;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [64];
  
  lVar6 = 0;
  func_0x000107c5f804();
  lVar13 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar14 = auStack_1d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = *(undefined **)(unaff_x20 + 0x20);
  func_0x000107c5dd54();
  func_0x000107c61180();
  func_0x000107c51c14();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1023c9a14);
    (*pcVar5)();
  }
  uVar12 = 0x112e93458;
  func_0x0001000285a8(0x112e93458,&UNK_10da9f1c8);
  uVar8 = param_1;
  func_0x000107c5fc54(param_1,uVar12);
  func_0x000107c61170(param_1);
  if (uVar8 >> 0x3e == 0) {
    uVar15 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar15 = uVar8 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar8) {
      uVar15 = uVar8;
    }
    func_0x000107c60480();
  }
  if (uVar15 != 0) {
    puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1023d114c(0,uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1023c9a10);
      (*pcVar5)();
    }
    lVar18 = 0;
    puVar17 = (undefined8 *)((ulong)&uStack_150 | 3);
    uVar2 = *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0;
    if ((uVar8 & 0xc000000000000001) == 0) goto LAB_1023c983c;
    do {
      puVar16 = puStack_b8;
      lVar19 = lVar18;
      func_0x0001023cbfec(lVar18,uVar8);
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      while( true ) {
        PTR___swiftEmptyArrayStorage_11034f1c8 = puVar11;
        if (puVar7 != (undefined *)0x0) {
          puVar9 = puVar7;
          func_0x000107c61174();
          func_0x000107c5c9fc(auStack_b0,lVar19);
          FUN_1023ca784(0,0x112d56378,&PTR_PTR_1126ae790);
          (**(code **)(lVar13 + 0x68))(puVar14,uVar2,lVar6);
          puVar10 = puVar14;
          func_0x000104188018(puVar14,0,0);
          (**(code **)(lVar13 + 8))(puVar14,lVar6);
          func_0x000107c61174(puVar10);
          puVar11 = puVar9;
          FUN_1023ca3ec(puVar9,auStack_b0,puVar10);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar10);
        }
        func_0x000107c5c9fc(&uStack_118,lVar19);
        func_0x000107c5d05c(&uStack_e8,lVar19);
        if (lRam0000000112e93288 != -1) {
          func_0x000107c61568(0x112e93288,FUN_1023c56d8);
        }
        uVar4 = uRam0000000113804710;
        uVar3 = uRam0000000113804708;
        uVar12 = uRam0000000113804700;
        func_0x000107c615e8(lVar19);
        uVar1 = *(ulong *)(puVar16 + 0x10);
        puStack_b8 = puVar16;
        if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar1) {
          FUN_1023d114c(1 < *(ulong *)(puVar16 + 0x18),uVar1 + 1,1);
        }
        puVar16 = puStack_b8;
        puVar17[1] = uStack_110;
        *puVar17 = uStack_118;
        puVar17[3] = uStack_100;
        puVar17[2] = uStack_108;
        puVar17[5] = uStack_f0;
        puVar17[4] = uStack_f8;
        *(ulong *)(puStack_b8 + 0x10) = uVar1 + 1;
        *(undefined **)(puStack_b8 + uVar1 * 0x88 + 0x20) = puVar11;
        puStack_b8[uVar1 * 0x88 + 0x28] = 1;
        *(ulong *)(puStack_b8 + uVar1 * 0x88 + 0x51) = CONCAT17((undefined1)uStack_121,uStack_128);
        *(undefined8 *)(puStack_b8 + uVar1 * 0x88 + 0x49) = uStack_130;
        *(undefined8 *)(puStack_b8 + uVar1 * 0x88 + 0x41) = uStack_138;
        *(undefined8 *)(puStack_b8 + uVar1 * 0x88 + 0x39) = uStack_140;
        *(undefined8 *)(puStack_b8 + uVar1 * 0x88 + 0x31) = uStack_148;
        *(undefined8 *)(puStack_b8 + uVar1 * 0x88 + 0x29) = uStack_150;
        *(undefined4 *)(puStack_b8 + uVar1 * 0x88 + 0x58) = uStack_121;
        *(undefined8 *)(puStack_b8 + uVar1 * 0x88 + 0x84) = uStack_c0;
        *(undefined8 *)(puStack_b8 + uVar1 * 0x88 + 0x7c) = uStack_c8;
        *(undefined8 *)(puStack_b8 + uVar1 * 0x88 + 0x74) = uStack_d0;
        *(undefined8 *)(puStack_b8 + uVar1 * 0x88 + 0x6c) = uStack_d8;
        *(undefined8 *)(puStack_b8 + uVar1 * 0x88 + 100) = uStack_e0;
        *(undefined8 *)(puStack_b8 + uVar1 * 0x88 + 0x5c) = uStack_e8;
        *(undefined8 *)(puStack_b8 + uVar1 * 0x88 + 0x8c) = uVar12;
        *(undefined8 *)(puStack_b8 + uVar1 * 0x88 + 0x94) = uVar3;
        *(undefined8 *)(puStack_b8 + uVar1 * 0x88 + 0x9c) = uVar4;
        if (uVar15 - 1 == lVar18) {
          func_0x000107c61170(puVar7);
          func_0x000107c6142c(uVar8);
          goto LAB_1023c99c8;
        }
        lVar18 = lVar18 + 1;
        if ((uVar8 & 0xc000000000000001) != 0) break;
LAB_1023c983c:
        puVar16 = puStack_b8;
        lVar19 = *(long *)(uVar8 + lVar18 * 8 + 0x20);
        func_0x000107c615f0(lVar19);
        puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
    } while( true );
  }
  func_0x000107c61170(puVar7);
  func_0x000107c6142c(uVar8);
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_1023c99c8:
  func_0x000107c61428(unaff_x20 + 0x28,&uStack_150,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined **)(unaff_x20 + 0x28) = puVar16;
  func_0x000107c6142c(uVar12);
  return;
}



/* Entry: 1023c9a14; end: 1023c9aef;  */

void FUN_1023c9a14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  uVar1 = 0;
  func_0x000107c60714(param_2,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0xd00000000000003b,0x800000010f096640);
  uVar1 = 0x112d393f0;
  uStack_48 = param_1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_48,&uStack_40,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_38);
  return;
}



/* Entry: 1023c9af0; end: 1023c9ee3;  */

void FUN_1023c9af0(ulong param_1,ulong *param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *unaff_x20;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined1 auStack_238 [24];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined1 auStack_108 [24];
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  uVar8 = *unaff_x20;
  lVar6 = unaff_x20[2];
  if (lVar6 == 0) {
    uStack_f0 = 0;
    uStack_e8 = 0xe000000000000000;
    func_0x000107c602fc(0x34);
    func_0x000107c5fb78(0x5b,0xe100000000000000);
    uVar4 = 0;
    func_0x000107c60714(uVar8,0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar4);
    func_0x000107c5fb78(0xd000000000000031,0x800000010f0965b0);
  }
  else {
    func_0x000107c61428(unaff_x20 + 5,auStack_108,0,0);
    if ((-1 < (long)param_1) && (param_1 < *(ulong *)(unaff_x20[5] + 0x10))) {
      lVar2 = unaff_x20[5] + param_1 * 0x88;
      uStack_218 = *(undefined8 *)(lVar2 + 0x28);
      uStack_220 = *(undefined8 *)(lVar2 + 0x20);
      uStack_208 = *(undefined8 *)(lVar2 + 0x38);
      uStack_210 = *(undefined8 *)(lVar2 + 0x30);
      uStack_1f8 = *(undefined8 *)(lVar2 + 0x48);
      uStack_200 = *(undefined8 *)(lVar2 + 0x40);
      uStack_1e8 = *(undefined8 *)(lVar2 + 0x58);
      uStack_1f0 = *(undefined8 *)(lVar2 + 0x50);
      uStack_1d8 = *(undefined8 *)(lVar2 + 0x68);
      uStack_1e0 = *(undefined8 *)(lVar2 + 0x60);
      uStack_1c8 = *(undefined8 *)(lVar2 + 0x78);
      uStack_1d0 = *(undefined8 *)(lVar2 + 0x70);
      uStack_1b8 = *(undefined8 *)(lVar2 + 0x88);
      uStack_1c0 = *(undefined8 *)(lVar2 + 0x80);
      uStack_1a8 = *(undefined8 *)(lVar2 + 0x98);
      uStack_1b0 = *(undefined8 *)(lVar2 + 0x90);
      uStack_1a0 = *(undefined4 *)(lVar2 + 0xa0);
      uStack_e8 = *(undefined8 *)(lVar2 + 0x28);
      uStack_f0 = *(ulong *)(lVar2 + 0x20);
      uStack_d8 = *(undefined8 *)(lVar2 + 0x38);
      uStack_e0 = *(undefined8 *)(lVar2 + 0x30);
      uStack_c8 = *(undefined8 *)(lVar2 + 0x48);
      uStack_d0 = *(undefined8 *)(lVar2 + 0x40);
      uStack_c0 = *(undefined8 *)(lVar2 + 0x50);
      uStack_b8 = (undefined4)*(undefined8 *)(lVar2 + 0x58);
      uStack_b4 = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x58) >> 0x20);
      uStack_a8 = (undefined4)*(undefined8 *)(lVar2 + 0x68);
      uStack_a4 = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x68) >> 0x20);
      uStack_b0 = (undefined4)*(undefined8 *)(lVar2 + 0x60);
      uStack_ac = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x60) >> 0x20);
      uStack_78 = *(undefined8 *)(lVar2 + 0x98);
      uStack_80 = *(undefined8 *)(lVar2 + 0x90);
      uStack_70 = *(undefined4 *)(lVar2 + 0xa0);
      uStack_88 = (undefined4)*(undefined8 *)(lVar2 + 0x88);
      uStack_84 = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x88) >> 0x20);
      uStack_90 = (undefined4)*(undefined8 *)(lVar2 + 0x80);
      uStack_8c = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x80) >> 0x20);
      uStack_98 = (undefined4)*(undefined8 *)(lVar2 + 0x78);
      uStack_94 = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x78) >> 0x20);
      uStack_a0 = (undefined4)*(undefined8 *)(lVar2 + 0x70);
      uStack_9c = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x70) >> 0x20);
      uStack_2c0 = 0;
      uStack_2b8 = 0xe000000000000000;
      func_0x000107c615f0(lVar6);
      FUN_1023c8d7c(&uStack_220,&uStack_190);
      func_0x000107c602fc(0x24);
      func_0x000107c6142c(uStack_2b8);
      uStack_190 = 0x5b;
      uStack_188 = 0xe100000000000000;
      uVar4 = 0;
      func_0x000107c60714(uVar8,0);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar4);
      func_0x000107c5fb78(0xd000000000000021,0x800000010f096610);
      func_0x000107c6142c(uStack_188);
      uStack_188 = param_2[1];
      uStack_190 = *param_2;
      uStack_178 = param_2[3];
      uStack_180 = param_2[2];
      uStack_168 = param_2[5];
      uStack_170 = param_2[4];
      func_0x000107c5d5f0(lVar6);
      uVar8 = unaff_x20[3];
      lVar2 = lVar6;
      func_0x000107c5ca00(lVar6);
      func_0x000107c61180();
      func_0x000107c5d578(uVar8);
      func_0x000107c61170(lVar2);
      uStack_8c = (undefined4)param_2[5];
      uStack_88 = (undefined4)(param_2[5] >> 0x20);
      uStack_94 = (undefined4)param_2[4];
      uStack_90 = (undefined4)(param_2[4] >> 0x20);
      uStack_9c = (undefined4)param_2[3];
      uStack_98 = (undefined4)(param_2[3] >> 0x20);
      uStack_a4 = (undefined4)param_2[2];
      uStack_a0 = (undefined4)(param_2[2] >> 0x20);
      uStack_ac = (undefined4)param_2[1];
      uStack_a8 = (undefined4)(param_2[1] >> 0x20);
      uStack_b4 = (undefined4)*param_2;
      uStack_b0 = (undefined4)(*param_2 >> 0x20);
      uStack_110 = uStack_70;
      uStack_188 = uStack_e8;
      uStack_190 = uStack_f0;
      uStack_178 = uStack_d8;
      uStack_180 = uStack_e0;
      uStack_128 = CONCAT44(uStack_84,uStack_88);
      uStack_130 = CONCAT44(uStack_8c,uStack_90);
      uStack_118 = uStack_78;
      uStack_120 = uStack_80;
      uStack_158 = CONCAT44(uStack_b4,uStack_b8);
      uStack_168 = uStack_c8;
      uStack_170 = uStack_d0;
      uStack_160 = uStack_c0;
      uStack_148 = CONCAT44(uStack_a4,uStack_a8);
      uStack_150 = CONCAT44(uStack_ac,uStack_b0);
      uStack_138 = CONCAT44(uStack_94,uStack_98);
      uStack_140 = CONCAT44(uStack_9c,uStack_a0);
      func_0x000107c61428(unaff_x20 + 5,auStack_238,0x21,0);
      uVar7 = unaff_x20[5];
      FUN_1023c8d7c(&uStack_190,&uStack_2c0);
      uVar3 = uVar7;
      func_0x000107c61558();
      unaff_x20[5] = uVar7;
      if ((uVar3 & 1) == 0) {
        FUN_1023ca3d8();
        unaff_x20[5] = uVar7;
      }
      if (param_1 < *(ulong *)(uVar7 + 0x10)) {
        lVar2 = uVar7 + param_1 * 0x88;
        uStack_2b8 = *(undefined8 *)(lVar2 + 0x28);
        uStack_2c0 = *(undefined8 *)(lVar2 + 0x20);
        uStack_2a8 = *(undefined8 *)(lVar2 + 0x38);
        uStack_2b0 = *(undefined8 *)(lVar2 + 0x30);
        uStack_298 = *(undefined8 *)(lVar2 + 0x48);
        uStack_2a0 = *(undefined8 *)(lVar2 + 0x40);
        uStack_288 = *(undefined8 *)(lVar2 + 0x58);
        uStack_290 = *(undefined8 *)(lVar2 + 0x50);
        uStack_278 = *(undefined8 *)(lVar2 + 0x68);
        uStack_280 = *(undefined8 *)(lVar2 + 0x60);
        uStack_268 = *(undefined8 *)(lVar2 + 0x78);
        uStack_270 = *(undefined8 *)(lVar2 + 0x70);
        uStack_258 = *(undefined8 *)(lVar2 + 0x88);
        uStack_260 = *(undefined8 *)(lVar2 + 0x80);
        uStack_248 = *(undefined8 *)(lVar2 + 0x98);
        uStack_250 = *(undefined8 *)(lVar2 + 0x90);
        uStack_240 = *(undefined4 *)(lVar2 + 0xa0);
        *(ulong *)(lVar2 + 0x28) = uStack_188;
        *(ulong *)(lVar2 + 0x20) = uStack_190;
        *(undefined8 *)(lVar2 + 0x58) = uStack_158;
        *(undefined8 *)(lVar2 + 0x50) = uStack_160;
        *(undefined8 *)(lVar2 + 0x68) = uStack_148;
        *(undefined8 *)(lVar2 + 0x60) = uStack_150;
        *(ulong *)(lVar2 + 0x38) = uStack_178;
        *(ulong *)(lVar2 + 0x30) = uStack_180;
        *(ulong *)(lVar2 + 0x48) = uStack_168;
        *(ulong *)(lVar2 + 0x40) = uStack_170;
        *(undefined4 *)(lVar2 + 0xa0) = uStack_110;
        *(undefined8 *)(lVar2 + 0x88) = uStack_128;
        *(undefined8 *)(lVar2 + 0x80) = uStack_130;
        *(undefined8 *)(lVar2 + 0x98) = uStack_118;
        *(undefined8 *)(lVar2 + 0x90) = uStack_120;
        *(undefined8 *)(lVar2 + 0x78) = uStack_138;
        *(undefined8 *)(lVar2 + 0x70) = uStack_140;
        unaff_x20[5] = uVar7;
        func_0x000107c614a8(auStack_238);
        func_0x0001023c8db8(&uStack_2c0);
        func_0x000107c615e8(lVar6);
        func_0x0001023c8db8(&uStack_f0);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023c9ee4);
      (*pcVar1)();
    }
    uStack_f0 = 0;
    uStack_e8 = 0xe000000000000000;
    func_0x000107c615f0(lVar6);
    func_0x000107c602fc(0x24);
    func_0x000107c6142c(uStack_e8);
    uStack_f0 = 0x5b;
    uStack_e8 = 0xe100000000000000;
    uVar4 = 0;
    func_0x000107c60714(uVar8,0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar4);
    func_0x000107c5fb78(0xd00000000000001f,0x800000010f0965f0);
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    uStack_190 = param_1;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c615e8(lVar6);
    func_0x000107c6142c(puVar5);
  }
  func_0x000107c6142c(uStack_e8);
  return;
}



/* Entry: 1023c9ee4; end: 1023c9f3f;  */

void FUN_1023c9ee4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023c9f40; end: 1023c9f7f;  */

void FUN_1023c9f40(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + 0x28,auStack_38,0,0);
  func_0x000107c61434(*(undefined8 *)(lVar1 + 0x28));
  return;
}



/* Entry: 1023c9f80; end: 1023c9f9f;  */

undefined1  [16] FUN_1023c9f80(void)

{
  long *unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(*unaff_x20 + 0x30);
  return auVar1;
}



/* Entry: 1023c9fa0; end: 1023ca03f;  */

void FUN_1023c9fa0(void)

{
  FUN_1023c9af0();
  return;
}



/* Entry: 1023ca040; end: 1023ca05b;  */

ulong FUN_1023ca040(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ca1a4);
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
  func_0x0001023c9fc0(uVar2,uVar4,FUN_1023d1128);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ca1a0);
      (*pcVar1)();
    }
    FUN_1023ca2bc(0,uVar2,uVar3 + 0x20,param_4,0x112e93320,&PTR_PTR_1126b0d88);
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



/* Entry: 1023ca05c; end: 1023ca1a3;  */

ulong FUN_1023ca05c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ca1a4);
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
  func_0x0001023c9fc0(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ca1a0);
      (*pcVar1)();
    }
    FUN_1023ca2bc(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
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



/* Entry: 1023ca1a4; end: 1023ca2bb;  */

undefined * FUN_1023ca1a4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ca2bc);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112e93450;
    func_0x0001000285a8(0x112e93450,&UNK_10da9f1b8);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x88) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1104fe230);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x88 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar2;
}



/* Entry: 1023ca2bc; end: 1023ca3d7;  */

long FUN_1023ca2bc(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1023ca3d4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1023ca3d8);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1023ca784(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1023ca784(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1023ca3d0);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1023ca3d8; end: 1023ca3eb;  */

/* WARNING: Removing unreachable block (ram,0x0001023ca1c0) */
/* WARNING: Removing unreachable block (ram,0x0001023ca1d0) */
/* WARNING: Removing unreachable block (ram,0x0001023ca2b8) */
/* WARNING: Removing unreachable block (ram,0x0001023ca1dc) */
/* WARNING: Removing unreachable block (ram,0x0001023ca1e4) */
/* WARNING: Removing unreachable block (ram,0x0001023ca268) */
/* WARNING: Removing unreachable block (ram,0x0001023ca278) */
/* WARNING: Removing unreachable block (ram,0x0001023ca27c) */
/* WARNING: Removing unreachable block (ram,0x0001023ca280) */
/* WARNING: Removing unreachable block (ram,0x0001023ca284) */

undefined * FUN_1023ca3d8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar4) {
    lVar1 = lVar4;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar2 = (undefined *)0x112e93450;
    func_0x0001000285a8(0x112e93450,&UNK_10da9f1b8);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(long *)(puVar2 + 0x10) = lVar4;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x88) * 2;
  }
  func_0x000107c6140c(puVar2 + 0x20,param_1 + 0x20,lVar4,&UNK_1104fe230);
  func_0x000107c6142c(param_1);
  return puVar2;
}



/* Entry: 1023ca3ec; end: 1023ca667;  */

undefined * FUN_1023ca3ec(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  FUN_1023c5a40(param_2,8);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = *(long *)(param_2 + 0x10);
  if (lVar7 == 0) {
    func_0x000107c6142c(param_2);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000100f72b90(0,lVar7,0);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x000107c61168();
    do {
      puVar3 = puVar2;
      func_0x000107c5dc5c();
      func_0x000107c61180();
      uVar1 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        func_0x000100f72b90(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      *(undefined **)(puVar5 + uVar1 * 8 + 0x20) = puVar3;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    func_0x000107c6142c(param_2);
  }
  puVar2 = PTR_PTR_1126d4260;
  func_0x000107c61168();
  uVar4 = 0;
  FUN_1023ca784(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  puVar3 = puVar5;
  func_0x000107c5fc48(puVar5,uVar4);
  func_0x000107c6142c(puVar5);
  func_0x000107c40bcc(0x4056800000000000,0x4063800000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c602fc(0x30);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c413cc(param_1);
    func_0x000107c61180();
    uVar6 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c5fb78(uVar6,uVar4);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(0x800000010f096680);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar4 = 0x112d74dc8;
    func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
    puVar5 = puVar2;
    func_0x000107c5fc54(puVar2,uVar4);
    func_0x000107c61170(puVar2);
  }
  return puVar5;
}



/* Entry: 1023ca668; end: 1023ca763;  */

void FUN_1023ca668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  unaff_x20[5] = PTR___swiftEmptyArrayStorage_11034f1c8;
  unaff_x20[6] = 0;
  *(undefined1 *)(unaff_x20 + 7) = 1;
  unaff_x20[2] = 0;
  unaff_x20[3] = param_2;
  unaff_x20[4] = param_3;
  puVar1 = &UNK_1104fe3d0;
  func_0x000107c613fc(&UNK_1104fe3d0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  uVar2 = 0;
  func_0x00010488a220(0,1,FUN_1023ca764,puVar1);
  func_0x000107c61574(puVar1);
  puVar1 = &UNK_1104fe3f8;
  func_0x000107c613fc(&UNK_1104fe3f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  func_0x000104888fc0(0,1,FUN_1023ca77c,puVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 1023ca764; end: 1023ca77b;  */

void FUN_1023ca764(void)

{
  FUN_1023c955c();
  return;
}



/* Entry: 1023ca77c; end: 1023ca783;  */

void FUN_1023ca77c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  uVar1 = 0;
  func_0x000107c60714(uVar2,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0xd00000000000003b,0x800000010f096640);
  uVar1 = 0x112d393f0;
  uStack_48 = param_1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_48,&uStack_40,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_38);
  return;
}



/* Entry: 1023ca784; end: 1023ca7c3;  */

void FUN_1023ca784(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1023ca7c4; end: 1023ca8eb;  */

void FUN_1023ca7c4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar3 = *unaff_x20;
  lStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x22);
  func_0x000107c6142c(uStack_38);
  lStack_40 = 0x5b;
  uStack_38 = 0xe100000000000000;
  uVar2 = 0;
  func_0x000107c60714(uVar3,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  func_0x000107c5fb78(0xd00000000000001d,0x800000010f0967d0);
  if (*(char *)(unaff_x20 + 8) == '\x01') {
    puVar4 = (undefined *)0xe300000000000000;
  }
  else {
    uStack_48 = unaff_x20[7];
    puVar4 = PTR___sSiN_11034deb0;
    func_0x000107c5fb18(&uStack_48,PTR___sSiN_11034deb0);
  }
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  func_0x000107c6142c(uStack_38);
  if (*(char *)(unaff_x20 + 8) != '\x01') {
    func_0x0001000d224c(&lStack_40);
    lVar1 = lStack_40;
    if (lStack_40 != 0) {
      func_0x000107c5932c(lStack_40);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1023ca8ec; end: 1023cab1f;  */

void FUN_1023ca8ec(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined *puVar4;
  ulong uVar5;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar3 = *unaff_x20;
  uStack_58 = 0;
  uStack_50 = 0xe000000000000000;
  func_0x000107c602fc(0x20);
  func_0x000107c6142c(uStack_50);
  uStack_58 = 0x5b;
  uStack_50 = 0xe100000000000000;
  uVar2 = 0;
  func_0x000107c60714(uVar3,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  func_0x000107c5fb78(0xd00000000000001b,0x800000010f096750);
  if (*(char *)(unaff_x20 + 8) == '\x01') {
    puVar4 = (undefined *)0xe300000000000000;
  }
  else {
    lStack_68 = unaff_x20[7];
    puVar4 = PTR___sSiN_11034deb0;
    func_0x000107c5fb18(&lStack_68,PTR___sSiN_11034deb0);
  }
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  func_0x000107c6142c(uStack_50);
  if (*(char *)(unaff_x20 + 8) != '\x01') {
    uVar5 = unaff_x20[7];
    func_0x000107c61428(unaff_x20 + 6,&uStack_58,0,0);
    if ((((long)uVar5 < 0) || (*(ulong *)(unaff_x20[6] + 0x10) <= uVar5)) ||
       (*(char *)(unaff_x20[6] + uVar5 * 0x88 + 0x28) != '\x01')) {
      lStack_68 = 0;
      uStack_60 = 0xe000000000000000;
      func_0x000107c602fc(0x53);
      func_0x000107c5fb78(0x5b,0xe100000000000000);
      uVar2 = 0;
      func_0x000107c60714(uVar3,0);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar2);
      func_0x000107c5fb78(0xd000000000000013,0x800000010f096770);
      puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar4);
      func_0x000107c5fb78(0xd00000000000003b,0x800000010f096790);
      func_0x000107c6142c(uStack_60);
    }
    else {
      func_0x0001000d224c(&lStack_68);
      lVar1 = lStack_68;
      if (lStack_68 != 0) {
        func_0x000107c5932c(lStack_68);
        func_0x000107c615e8(lVar1);
      }
    }
  }
  return;
}



/* Entry: 1023cab20; end: 1023caed3;  */

void FUN_1023cab20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_260 [8];
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  long lStack_238;
  undefined1 auStack_228 [136];
  undefined1 auStack_1a0 [24];
  long lStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined4 uStack_80;
  
  uVar5 = *unaff_x20;
  lVar1 = 0;
  func_0x000107c5f804();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_260 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&lStack_100);
  if (lStack_100 == 0) {
    lStack_100 = 0;
    uStack_f8 = 0xe000000000000000;
    func_0x000107c602fc(0x2f);
    func_0x000107c6142c(uStack_f8);
    lStack_100 = 0x5b;
    uStack_f8 = 0xe100000000000000;
    uVar4 = 0;
    func_0x000107c60714(uVar5,0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar4);
    func_0x000107c5fb78(0xd00000000000002c,0x800000010f096870);
    func_0x000107c6142c(uStack_f8);
  }
  else {
    lVar2 = lStack_100;
    func_0x000107c5dd54();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c615e8(lStack_100);
    }
    else {
      lStack_240 = lVar1;
      lStack_238 = lVar2;
      func_0x000107c5ccb4(lStack_100);
      uVar5 = 600;
      func_0x000107c600d0();
      uVar9 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_174 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_170 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
      uVar6 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      uVar4 = param_2;
      if (lRam0000000112e93288 != -1) {
        uStack_258 = param_3;
        uStack_250 = param_2;
        uStack_248 = uVar5;
        func_0x000107c61568(0x112e93288,FUN_1023c56d8);
        uVar5 = uStack_248;
        uVar4 = uStack_250;
        param_3 = uStack_258;
      }
      uStack_180 = CONCAT31(uStack_180._1_3_,1);
      uStack_17c = (undefined4)uVar9;
      uStack_178 = (undefined4)((ulong)uVar9 >> 0x20);
      uStack_16c = (undefined4)uVar6;
      uStack_168 = (undefined4)((ulong)uVar6 >> 0x20);
      uStack_164 = (undefined4)uVar5;
      uStack_160 = (undefined4)((ulong)uVar5 >> 0x20);
      uStack_15c = (undefined4)uVar4;
      uStack_158 = (undefined4)((ulong)param_2 >> 0x20);
      uStack_154 = (undefined4)param_3;
      uStack_150 = (undefined4)((ulong)param_3 >> 0x20);
      uStack_11c = (undefined4)uRam0000000113804700;
      uStack_118 = (undefined4)((ulong)uRam0000000113804700 >> 0x20);
      uStack_114 = (undefined4)uRam0000000113804708;
      uStack_110 = (undefined4)((ulong)uRam0000000113804708 >> 0x20);
      uStack_10c = (undefined4)uRam0000000113804710;
      uStack_108 = (undefined4)((ulong)uRam0000000113804710 >> 0x20);
      uStack_14c = uStack_17c;
      uStack_148 = uStack_178;
      uStack_144 = uStack_174;
      uStack_140 = uStack_170;
      uStack_13c = uStack_16c;
      uStack_138 = uStack_168;
      uStack_134 = uStack_164;
      uStack_130 = uStack_160;
      uStack_12c = uStack_15c;
      uStack_128 = uStack_158;
      uStack_124 = uStack_154;
      uStack_120 = uStack_150;
      FUN_1023cc414(0,0x112d56378,&PTR_PTR_1126ae790);
      lVar1 = lStack_240;
      (**(code **)(lVar8 + 0x68))
                (puVar7,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
                 lStack_240);
      puVar3 = puVar7;
      func_0x000104188018(puVar7,0,0);
      (**(code **)(lVar8 + 8))(puVar7,lVar1);
      func_0x000107c61174(puVar3);
      lVar8 = lStack_238;
      FUN_1023cc1b4(lStack_238,puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      lVar1 = 0x112e93450;
      lStack_188 = lVar8;
      func_0x0001000285a8(0x112e93450,&UNK_10da9f1b8);
      func_0x000107c613fc();
      *(undefined8 *)(lVar1 + 0x18) = 2;
      *(undefined8 *)(lVar1 + 0x10) = 1;
      func_0x000107c615e8(lStack_100);
      func_0x000107c61170(lStack_238);
      uStack_a8 = CONCAT44(uStack_12c,uStack_130);
      uStack_b0 = CONCAT44(uStack_134,uStack_138);
      uStack_98 = CONCAT44(uStack_11c,uStack_120);
      uStack_a0 = CONCAT44(uStack_124,uStack_128);
      uStack_88 = CONCAT44(uStack_10c,uStack_110);
      uStack_90 = CONCAT44(uStack_114,uStack_118);
      uStack_e8 = CONCAT44(uStack_16c,uStack_170);
      uStack_f0 = CONCAT44(uStack_174,uStack_178);
      uStack_d8 = CONCAT44(uStack_15c,uStack_160);
      uStack_e0 = CONCAT44(uStack_164,uStack_168);
      uStack_c8 = CONCAT44(uStack_14c,uStack_150);
      uStack_d0 = CONCAT44(uStack_154,uStack_158);
      uStack_b8 = CONCAT44(uStack_13c,uStack_140);
      uStack_c0 = CONCAT44(uStack_144,uStack_148);
      uStack_f8 = CONCAT44(uStack_17c,uStack_180);
      lStack_100 = lStack_188;
      *(ulong *)(lVar1 + 0x88) = CONCAT44(uStack_11c,uStack_120);
      *(ulong *)(lVar1 + 0x80) = CONCAT44(uStack_124,uStack_128);
      *(ulong *)(lVar1 + 0x98) = CONCAT44(uStack_10c,uStack_110);
      *(ulong *)(lVar1 + 0x90) = CONCAT44(uStack_114,uStack_118);
      *(ulong *)(lVar1 + 0x48) = CONCAT44(uStack_15c,uStack_160);
      *(ulong *)(lVar1 + 0x40) = CONCAT44(uStack_164,uStack_168);
      *(ulong *)(lVar1 + 0x58) = CONCAT44(uStack_14c,uStack_150);
      *(ulong *)(lVar1 + 0x50) = CONCAT44(uStack_154,uStack_158);
      *(ulong *)(lVar1 + 0x68) = CONCAT44(uStack_13c,uStack_140);
      *(ulong *)(lVar1 + 0x60) = CONCAT44(uStack_144,uStack_148);
      *(ulong *)(lVar1 + 0x78) = CONCAT44(uStack_12c,uStack_130);
      *(ulong *)(lVar1 + 0x70) = CONCAT44(uStack_134,uStack_138);
      uStack_80 = uStack_108;
      *(undefined4 *)(lVar1 + 0xa0) = uStack_108;
      *(ulong *)(lVar1 + 0x28) = CONCAT44(uStack_17c,uStack_180);
      *(long *)(lVar1 + 0x20) = lStack_188;
      *(ulong *)(lVar1 + 0x38) = CONCAT44(uStack_16c,uStack_170);
      *(ulong *)(lVar1 + 0x30) = CONCAT44(uStack_174,uStack_178);
      func_0x000107c61428(unaff_x20 + 6,auStack_1a0,1,0);
      uVar5 = unaff_x20[6];
      unaff_x20[6] = lVar1;
      FUN_1023c8d7c(&lStack_100,auStack_228);
      func_0x000107c6142c(uVar5);
      func_0x0001023c8db8(&lStack_188);
    }
  }
  return;
}



/* Entry: 1023caed4; end: 1023caf87;  */

void FUN_1023caed4(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
    func_0x000107c615f0(uVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c615e8(uVar3);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1023caf88(uVar2);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1023caf88; end: 1023cb32b;  */

void FUN_1023caf88(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined1 auStack_218 [24];
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined1 auStack_e8 [24];
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  uVar7 = *unaff_x20;
  func_0x000107c61428(unaff_x20 + 6,auStack_e8,0,0);
  lVar5 = unaff_x20[6];
  if (*(long *)(lVar5 + 0x10) == 0) {
    lStack_d0 = 0;
    uStack_c8 = 0xe000000000000000;
    func_0x000107c602fc(0x33);
    func_0x000107c5fb78(0x5b,0xe100000000000000);
    uVar4 = 0;
    func_0x000107c60714(uVar7,0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar4);
    func_0x000107c5fb78(0xd000000000000030,0x800000010f096830);
    func_0x000107c6142c(uStack_c8);
    return;
  }
  uStack_118 = *(undefined8 *)(lVar5 + 0x78);
  uStack_120 = *(undefined8 *)(lVar5 + 0x70);
  uStack_108 = *(undefined8 *)(lVar5 + 0x88);
  uStack_110 = *(undefined8 *)(lVar5 + 0x80);
  uStack_f0 = *(undefined4 *)(lVar5 + 0xa0);
  uStack_f8 = *(undefined8 *)(lVar5 + 0x98);
  uStack_100 = *(undefined8 *)(lVar5 + 0x90);
  uStack_158 = *(undefined8 *)(lVar5 + 0x38);
  uStack_160 = *(undefined8 *)(lVar5 + 0x30);
  uStack_148 = *(undefined8 *)(lVar5 + 0x48);
  uStack_150 = *(undefined8 *)(lVar5 + 0x40);
  uStack_138 = *(undefined8 *)(lVar5 + 0x58);
  uStack_140 = *(undefined8 *)(lVar5 + 0x50);
  uStack_128 = *(undefined8 *)(lVar5 + 0x68);
  uStack_130 = *(undefined8 *)(lVar5 + 0x60);
  uStack_168 = *(undefined8 *)(lVar5 + 0x28);
  uStack_170 = *(undefined8 *)(lVar5 + 0x20);
  uStack_50 = *(undefined4 *)(lVar5 + 0xa0);
  uStack_58 = *(undefined8 *)(lVar5 + 0x98);
  uStack_60 = *(undefined8 *)(lVar5 + 0x90);
  uStack_68 = (undefined4)*(undefined8 *)(lVar5 + 0x88);
  uStack_64 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x88) >> 0x20);
  uStack_70 = (undefined4)*(undefined8 *)(lVar5 + 0x80);
  uStack_6c = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x80) >> 0x20);
  uStack_78 = (undefined4)*(undefined8 *)(lVar5 + 0x78);
  uStack_74 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x78) >> 0x20);
  uStack_80 = (undefined4)*(undefined8 *)(lVar5 + 0x70);
  uStack_7c = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x70) >> 0x20);
  uStack_b8 = *(undefined8 *)(lVar5 + 0x38);
  uStack_c0 = *(undefined8 *)(lVar5 + 0x30);
  uStack_a8 = *(undefined8 *)(lVar5 + 0x48);
  uStack_b0 = *(undefined8 *)(lVar5 + 0x40);
  uStack_a0 = *(undefined8 *)(lVar5 + 0x50);
  uStack_98 = (undefined4)*(undefined8 *)(lVar5 + 0x58);
  uStack_94 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x58) >> 0x20);
  uStack_88 = (undefined4)*(undefined8 *)(lVar5 + 0x68);
  uStack_84 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x68) >> 0x20);
  uStack_90 = (undefined4)*(undefined8 *)(lVar5 + 0x60);
  uStack_8c = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x60) >> 0x20);
  uStack_c8 = *(undefined8 *)(lVar5 + 0x28);
  lStack_d0 = *(long *)(lVar5 + 0x20);
  FUN_1023c8d7c(&uStack_170,&lStack_200);
  func_0x000107c51c14();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1023cb328);
    (*pcVar1)();
  }
  uVar7 = 0x112e93528;
  func_0x0001000285a8(0x112e93528,&UNK_10da9f240);
  uVar8 = param_1;
  func_0x000107c5fc54(param_1,uVar7);
  func_0x000107c61170(param_1);
  if (uVar8 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar8 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar8) {
      uVar2 = uVar8;
    }
    func_0x000107c60480();
  }
  if (uVar2 == 0) {
    func_0x000107c6142c(uVar8);
  }
  else {
    if ((uVar8 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar8 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1023cb324);
        (*pcVar1)();
      }
      uVar7 = *(undefined8 *)(uVar8 + 0x20);
      func_0x000107c615f0(uVar7);
    }
    else {
      uVar7 = 0;
      FUN_1023cbe48(0,uVar8);
    }
    func_0x000107c6142c(uVar8);
    uStack_1f8 = CONCAT44(uStack_88,uStack_8c);
    lStack_200 = CONCAT44(uStack_90,uStack_94);
    uStack_1e8 = CONCAT44(uStack_78,uStack_7c);
    uStack_1f0 = CONCAT44(uStack_80,uStack_84);
    uStack_1d8 = CONCAT44(uStack_68,uStack_6c);
    uStack_1e0 = CONCAT44(uStack_70,uStack_74);
    func_0x000107c5a0a8(uVar7);
    func_0x000107c615e8(uVar7);
  }
  func_0x0001000d224c(&lStack_200);
  lVar5 = lStack_200;
  if (lStack_200 != 0) {
    lVar6 = lStack_200;
    func_0x000107c43db0(0x4056800000000000,0x4063800000000000);
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023cb32c);
      (*pcVar1)();
    }
    uVar7 = 0x112d74dc8;
    func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
    lVar3 = lVar6;
    func_0x000107c5fc54(lVar6,uVar7);
    func_0x000107c61170(lVar6);
    func_0x0001023c8db8(&uStack_170);
    uStack_198 = CONCAT44(uStack_64,uStack_68);
    uStack_1a0 = CONCAT44(uStack_6c,uStack_70);
    uStack_188 = uStack_58;
    uStack_190 = uStack_60;
    uStack_180 = uStack_50;
    uStack_1c8 = CONCAT44(uStack_94,uStack_98);
    uStack_1d8 = uStack_a8;
    uStack_1e0 = uStack_b0;
    uStack_1d0 = uStack_a0;
    uStack_1b8 = CONCAT44(uStack_84,uStack_88);
    uStack_1c0 = CONCAT44(uStack_8c,uStack_90);
    uStack_1a8 = CONCAT44(uStack_74,uStack_78);
    uStack_1b0 = CONCAT44(uStack_7c,uStack_80);
    uStack_1f8 = uStack_c8;
    uStack_1e8 = uStack_b8;
    uStack_1f0 = uStack_c0;
    lStack_200 = lVar3;
    lStack_d0 = lVar3;
    func_0x000107c61428(unaff_x20 + 6,auStack_218,0x21,0);
    uVar8 = unaff_x20[6];
    FUN_1023c8d7c(&lStack_200,&uStack_2a0);
    uVar2 = uVar8;
    func_0x000107c61558();
    unaff_x20[6] = uVar8;
    if ((uVar2 & 1) == 0) {
      FUN_1023ca3d8();
      unaff_x20[6] = uVar8;
      lVar6 = *(long *)(uVar8 + 0x10);
    }
    else {
      lVar6 = *(long *)(uVar8 + 0x10);
    }
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023cb320);
      (*pcVar1)();
    }
    uStack_288 = *(undefined8 *)(uVar8 + 0x38);
    uStack_290 = *(undefined8 *)(uVar8 + 0x30);
    uStack_278 = *(undefined8 *)(uVar8 + 0x48);
    uStack_280 = *(undefined8 *)(uVar8 + 0x40);
    uStack_268 = *(undefined8 *)(uVar8 + 0x58);
    uStack_270 = *(undefined8 *)(uVar8 + 0x50);
    uStack_258 = *(undefined8 *)(uVar8 + 0x68);
    uStack_260 = *(undefined8 *)(uVar8 + 0x60);
    uStack_248 = *(undefined8 *)(uVar8 + 0x78);
    uStack_250 = *(undefined8 *)(uVar8 + 0x70);
    uStack_238 = *(undefined8 *)(uVar8 + 0x88);
    uStack_240 = *(undefined8 *)(uVar8 + 0x80);
    uStack_220 = *(undefined4 *)(uVar8 + 0xa0);
    uStack_228 = *(undefined8 *)(uVar8 + 0x98);
    uStack_230 = *(undefined8 *)(uVar8 + 0x90);
    uStack_298 = *(undefined8 *)(uVar8 + 0x28);
    uStack_2a0 = *(undefined8 *)(uVar8 + 0x20);
    *(undefined8 *)(uVar8 + 0x58) = uStack_1c8;
    *(undefined8 *)(uVar8 + 0x50) = uStack_1d0;
    *(undefined8 *)(uVar8 + 0x68) = uStack_1b8;
    *(undefined8 *)(uVar8 + 0x60) = uStack_1c0;
    *(undefined8 *)(uVar8 + 0x28) = uStack_1f8;
    *(long *)(uVar8 + 0x20) = lStack_200;
    *(undefined8 *)(uVar8 + 0x78) = uStack_1a8;
    *(undefined8 *)(uVar8 + 0x70) = uStack_1b0;
    *(undefined8 *)(uVar8 + 0x88) = uStack_198;
    *(undefined8 *)(uVar8 + 0x80) = uStack_1a0;
    *(undefined8 *)(uVar8 + 0x98) = uStack_188;
    *(undefined8 *)(uVar8 + 0x90) = uStack_190;
    *(undefined4 *)(uVar8 + 0xa0) = uStack_180;
    *(undefined8 *)(uVar8 + 0x38) = uStack_1e8;
    *(undefined8 *)(uVar8 + 0x30) = uStack_1f0;
    *(undefined8 *)(uVar8 + 0x48) = uStack_1d8;
    *(undefined8 *)(uVar8 + 0x40) = uStack_1e0;
    unaff_x20[6] = uVar8;
    func_0x000107c614a8(auStack_218);
    func_0x0001023c8db8(&uStack_2a0);
    func_0x000107c615e8(lVar5);
  }
  func_0x0001023c8db8(&lStack_d0);
  return;
}



/* Entry: 1023cb32c; end: 1023cb407;  */

void FUN_1023cb32c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x3e);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  uVar1 = 0;
  func_0x000107c60714(param_2,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0xd000000000000039,0x800000010f0967f0);
  uVar1 = 0x112d393f0;
  uStack_48 = param_1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_48,&uStack_40,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_38);
  return;
}



/* Entry: 1023cb408; end: 1023cba1f;  */

void FUN_1023cb408(ulong param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  code *pcStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_310;
  uVar8 = *unaff_x20;
  uStack_88 = param_2[1];
  puStack_90 = (undefined *)*param_2;
  puStack_78 = (undefined *)param_2[3];
  puStack_80 = (undefined *)param_2[2];
  puStack_68 = (undefined *)param_2[5];
  pcStack_70 = (code *)param_2[4];
  if ((*(char *)(unaff_x20 + 8) == '\x01') || (param_1 != unaff_x20[7])) {
    uStack_120 = 0;
    uStack_118 = 0xe000000000000000;
    func_0x000107c602fc(0x42);
    func_0x000107c5fb78(0x5b,0xe100000000000000);
    uVar7 = 0;
    func_0x000107c60714(uVar8,0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar7);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010f0966b0);
LAB_1023cb88c:
    func_0x000107c6142c(uStack_118);
    return;
  }
  func_0x000107c61428(unaff_x20 + 6,auStack_138,0,0);
  if (((long)param_1 < 0) || (*(ulong *)(unaff_x20[6] + 0x10) <= param_1)) {
    uStack_120 = 0;
    uStack_118 = 0xe000000000000000;
    func_0x000107c602fc(0x24);
    func_0x000107c6142c(uStack_118);
    uStack_120 = 0x5b;
    uStack_118 = 0xe100000000000000;
    uVar7 = 0;
    func_0x000107c60714(uVar8,0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar7);
    func_0x000107c5fb78(0xd00000000000001f,0x800000010f0965f0);
    puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    uStack_1c0 = param_1;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar4);
    goto LAB_1023cb88c;
  }
  lVar1 = unaff_x20[6] + param_1 * 0x88;
  uStack_1b8 = *(undefined8 *)(lVar1 + 0x28);
  uStack_1c0 = *(ulong *)(lVar1 + 0x20);
  uStack_1a8 = *(undefined8 *)(lVar1 + 0x38);
  uStack_1b0 = *(undefined8 *)(lVar1 + 0x30);
  uStack_198 = *(undefined8 *)(lVar1 + 0x48);
  uStack_1a0 = *(undefined8 *)(lVar1 + 0x40);
  uStack_188 = *(undefined8 *)(lVar1 + 0x58);
  uStack_190 = *(undefined8 *)(lVar1 + 0x50);
  uStack_178 = *(undefined8 *)(lVar1 + 0x68);
  uStack_180 = *(undefined8 *)(lVar1 + 0x60);
  uStack_168 = *(undefined8 *)(lVar1 + 0x78);
  uStack_170 = *(undefined8 *)(lVar1 + 0x70);
  uStack_158 = *(undefined8 *)(lVar1 + 0x88);
  uStack_160 = *(undefined8 *)(lVar1 + 0x80);
  uStack_148 = *(undefined8 *)(lVar1 + 0x98);
  uStack_150 = *(undefined8 *)(lVar1 + 0x90);
  uStack_140 = *(undefined4 *)(lVar1 + 0xa0);
  uStack_118 = *(undefined8 *)(lVar1 + 0x28);
  uStack_120 = *(undefined8 *)(lVar1 + 0x20);
  uStack_108 = *(undefined8 *)(lVar1 + 0x38);
  uStack_110 = *(undefined8 *)(lVar1 + 0x30);
  uStack_f8 = *(undefined8 *)(lVar1 + 0x48);
  uStack_100 = *(undefined8 *)(lVar1 + 0x40);
  uStack_f0 = *(undefined8 *)(lVar1 + 0x50);
  uStack_e8 = (undefined4)*(undefined8 *)(lVar1 + 0x58);
  uStack_e4 = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x58) >> 0x20);
  uStack_d8 = (undefined4)*(undefined8 *)(lVar1 + 0x68);
  uStack_d4 = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x68) >> 0x20);
  uStack_e0 = (undefined4)*(undefined8 *)(lVar1 + 0x60);
  uStack_dc = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x60) >> 0x20);
  uStack_a8 = *(undefined8 *)(lVar1 + 0x98);
  uStack_b0 = *(undefined8 *)(lVar1 + 0x90);
  uStack_a0 = *(undefined4 *)(lVar1 + 0xa0);
  uStack_b8 = (undefined4)*(undefined8 *)(lVar1 + 0x88);
  uStack_b4 = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x88) >> 0x20);
  uStack_c0 = (undefined4)*(undefined8 *)(lVar1 + 0x80);
  uStack_bc = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x80) >> 0x20);
  uStack_c8 = (undefined4)*(undefined8 *)(lVar1 + 0x78);
  uStack_c4 = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x78) >> 0x20);
  uStack_d0 = (undefined4)*(undefined8 *)(lVar1 + 0x70);
  uStack_cc = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x70) >> 0x20);
  uStack_2e0 = 0;
  uStack_2d8 = 0xe000000000000000;
  FUN_1023c8d7c(&uStack_1c0,&uStack_250);
  func_0x000107c602fc(0x24);
  func_0x000107c6142c(uStack_2d8);
  uStack_250 = 0x5b;
  uStack_248 = 0xe100000000000000;
  uVar7 = 0;
  func_0x000107c60714(uVar8,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar7);
  func_0x000107c5fb78(0xd000000000000021,0x800000010f096610);
  func_0x000107c6142c(uStack_248);
  func_0x0001000d224c(&lStack_258);
  if (lStack_258 != 0) {
    uStack_248 = param_2[1];
    uStack_250 = *param_2;
    uStack_238 = param_2[3];
    uStack_240 = param_2[2];
    uStack_228 = param_2[5];
    uStack_230 = param_2[4];
    func_0x000107c5d688(lStack_258);
    func_0x000107c615e8(lStack_258);
  }
  uStack_bc = (undefined4)param_2[5];
  uStack_b8 = (undefined4)((ulong)param_2[5] >> 0x20);
  uStack_c4 = (undefined4)param_2[4];
  uStack_c0 = (undefined4)((ulong)param_2[4] >> 0x20);
  uStack_cc = (undefined4)param_2[3];
  uStack_c8 = (undefined4)((ulong)param_2[3] >> 0x20);
  uStack_d4 = (undefined4)param_2[2];
  uStack_d0 = (undefined4)((ulong)param_2[2] >> 0x20);
  uStack_dc = (undefined4)param_2[1];
  uStack_d8 = (undefined4)((ulong)param_2[1] >> 0x20);
  uStack_e4 = (undefined4)*param_2;
  uStack_e0 = (undefined4)((ulong)*param_2 >> 0x20);
  uStack_1d0 = uStack_a0;
  uStack_248 = uStack_118;
  uStack_250 = uStack_120;
  uStack_238 = uStack_108;
  uStack_240 = uStack_110;
  uStack_1e8 = CONCAT44(uStack_b4,uStack_b8);
  uStack_1f0 = CONCAT44(uStack_bc,uStack_c0);
  uStack_1d8 = uStack_a8;
  uStack_1e0 = uStack_b0;
  uStack_218 = CONCAT44(uStack_e4,uStack_e8);
  uStack_228 = uStack_f8;
  uStack_230 = uStack_100;
  uStack_220 = uStack_f0;
  uStack_208 = CONCAT44(uStack_d4,uStack_d8);
  uStack_210 = CONCAT44(uStack_dc,uStack_e0);
  uStack_1f8 = CONCAT44(uStack_c4,uStack_c8);
  uStack_200 = CONCAT44(uStack_cc,uStack_d0);
  func_0x000107c61428(unaff_x20 + 6,&puStack_310,0x21,0);
  uVar9 = unaff_x20[6];
  FUN_1023c8d7c(&uStack_250,&uStack_2e0);
  uVar6 = uVar9;
  func_0x000107c61558();
  unaff_x20[6] = uVar9;
  if ((uVar6 & 1) == 0) {
    FUN_1023ca3d8();
    unaff_x20[6] = uVar9;
  }
  if (*(ulong *)(uVar9 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1023cb968);
    (*pcVar2)();
  }
  lVar1 = uVar9 + param_1 * 0x88;
  uStack_2d8 = *(undefined8 *)(lVar1 + 0x28);
  uStack_2e0 = *(undefined8 *)(lVar1 + 0x20);
  uStack_2c8 = *(undefined8 *)(lVar1 + 0x38);
  uStack_2d0 = *(undefined8 *)(lVar1 + 0x30);
  uStack_2b8 = *(undefined8 *)(lVar1 + 0x48);
  uStack_2c0 = *(undefined8 *)(lVar1 + 0x40);
  uStack_2a8 = *(undefined8 *)(lVar1 + 0x58);
  uStack_2b0 = *(undefined8 *)(lVar1 + 0x50);
  uStack_298 = *(undefined8 *)(lVar1 + 0x68);
  uStack_2a0 = *(undefined8 *)(lVar1 + 0x60);
  uStack_288 = *(undefined8 *)(lVar1 + 0x78);
  uStack_290 = *(undefined8 *)(lVar1 + 0x70);
  uStack_278 = *(undefined8 *)(lVar1 + 0x88);
  uStack_280 = *(undefined8 *)(lVar1 + 0x80);
  uStack_268 = *(undefined8 *)(lVar1 + 0x98);
  uStack_270 = *(undefined8 *)(lVar1 + 0x90);
  uStack_260 = *(undefined4 *)(lVar1 + 0xa0);
  *(undefined8 *)(lVar1 + 0x28) = uStack_248;
  *(undefined8 *)(lVar1 + 0x20) = uStack_250;
  *(undefined8 *)(lVar1 + 0x58) = uStack_218;
  *(undefined8 *)(lVar1 + 0x50) = uStack_220;
  *(undefined8 *)(lVar1 + 0x68) = uStack_208;
  *(undefined8 *)(lVar1 + 0x60) = uStack_210;
  *(undefined8 *)(lVar1 + 0x38) = uStack_238;
  *(undefined8 *)(lVar1 + 0x30) = uStack_240;
  *(undefined8 *)(lVar1 + 0x48) = uStack_228;
  *(undefined8 *)(lVar1 + 0x40) = uStack_230;
  *(undefined4 *)(lVar1 + 0xa0) = uStack_1d0;
  *(undefined8 *)(lVar1 + 0x88) = uStack_1e8;
  *(undefined8 *)(lVar1 + 0x80) = uStack_1f0;
  *(undefined8 *)(lVar1 + 0x98) = uStack_1d8;
  *(undefined8 *)(lVar1 + 0x90) = uStack_1e0;
  *(undefined8 *)(lVar1 + 0x78) = uStack_1f8;
  *(undefined8 *)(lVar1 + 0x70) = uStack_200;
  unaff_x20[6] = uVar9;
  func_0x000107c614a8(&puStack_310);
  func_0x0001023c8db8(&uStack_2e0);
  uVar7 = unaff_x20[4];
  puVar3 = PTR_PTR_1126affe8;
  func_0x000107c61168(PTR_PTR_1126affe8);
  func_0x000107c4b838();
  func_0x000107c61180();
  puVar4 = &UNK_1104fe460;
  func_0x000107c613fc(&UNK_1104fe460,0x40,7);
  uVar10 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  *(undefined8 *)(puVar4 + 0x18) = param_2[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  *(undefined8 *)(puVar4 + 0x28) = uVar12;
  *(undefined8 *)(puVar4 + 0x20) = uVar11;
  uVar10 = param_2[4];
  *(undefined8 *)(puVar4 + 0x38) = param_2[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar10;
  pcStack_2f0 = FUN_1023cc190;
  puStack_310 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_308 = 0x42000000;
  puStack_300 = &UNK_101e34e58;
  puStack_2f8 = &UNK_1104fe478;
  puStack_2e8 = puVar4;
  func_0x000107c60bc4(&puStack_310);
  func_0x000107c61574(puStack_2e8);
  func_0x000107c5d684(uVar7);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar3);
  uVar6 = unaff_x20[5];
  if (uVar6 != 0) {
    func_0x000107c51c14();
    func_0x000107c61180();
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023cba20);
      (*pcVar2)();
    }
    uVar7 = 0x112e93528;
    func_0x0001000285a8(0x112e93528,&UNK_10da9f240);
    uVar9 = uVar6;
    func_0x000107c5fc54(uVar6,uVar7);
    func_0x000107c61170(uVar6);
    if (uVar9 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar9 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar9) {
        uVar6 = uVar9;
      }
      func_0x000107c60480();
    }
    if ((long)param_1 < (long)uVar6) {
      if ((uVar9 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1023cba1c);
          (*pcVar2)();
        }
        param_1 = *(ulong *)(uVar9 + param_1 * 8 + 0x20);
        func_0x000107c615f0(param_1);
      }
      else {
        FUN_1023cbe48(param_1,uVar9);
      }
      func_0x000107c6142c(uVar9);
      uStack_308 = uStack_88;
      puStack_310 = puStack_90;
      puStack_2f8 = puStack_78;
      puStack_300 = puStack_80;
      puStack_2e8 = puStack_68;
      pcStack_2f0 = pcStack_70;
      func_0x000107c5a0a8(param_1);
      func_0x000107c615e8(param_1);
      goto LAB_1023cb9f8;
    }
    func_0x000107c6142c(uVar9);
  }
  puStack_310 = (undefined *)0x0;
  uStack_308 = 0xe000000000000000;
  func_0x000107c602fc(0x36);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  uVar7 = 0;
  func_0x000107c60714(uVar8,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar7);
  func_0x000107c5fb78(0xd000000000000033,0x800000010f0966f0);
  func_0x000107c6142c(uStack_308);
LAB_1023cb9f8:
  func_0x0001023c8db8(&uStack_120);
  return;
}



/* Entry: 1023cba20; end: 1023cbb67;  */

void FUN_1023cba20(double param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  
  puVar4 = PTR_PTR_1126afff0;
  func_0x000107c610f8(PTR_PTR_1126afff0);
  func_0x000107c453e4();
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar5 = *param_3;
  func_0x000107c600d4(uVar5,uVar1,uVar2);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1023cbb54);
    (*pcVar3)();
  }
  if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1023cbb58);
    (*pcVar3)();
  }
  if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1023cbb5c);
    (*pcVar3)();
  }
  func_0x000107c597e0(puVar4);
  func_0x000107c5ff2c();
  func_0x000107c600d4();
  dVar6 = param_1;
  func_0x000107c600d4(uVar5,uVar1,uVar2);
  dVar6 = (param_1 - dVar6) * 1000.0;
  if ((ulong)ABS(dVar6) < 0x7ff0000000000000) {
    if (dVar6 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1023cbb64);
      (*pcVar3)();
    }
    if (dVar6 < 1.8446744073709552e+19) {
      func_0x000107c54358(puVar4);
      if (param_2 != 0) {
        func_0x000107c5a0a4(param_2);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1023cbb68);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1023cbb60);
  (*pcVar3)();
}



/* Entry: 1023cbb68; end: 1023cbbcb;  */

void FUN_1023cbb68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023cbbcc; end: 1023cbc0b;  */

void FUN_1023cbbcc(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + 0x30,auStack_38,0,0);
  func_0x000107c61434(*(undefined8 *)(lVar1 + 0x30));
  return;
}



/* Entry: 1023cbc0c; end: 1023cbc1b;  */

undefined1  [16] FUN_1023cbc0c(void)

{
  long *unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(*unaff_x20 + 0x38);
  return auVar1;
}



/* Entry: 1023cbc1c; end: 1023cbc57;  */

void FUN_1023cbc1c(undefined8 param_1,undefined1 param_2)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *unaff_x20;
  FUN_1023ca7c4();
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  *(undefined1 *)(lVar1 + 0x40) = param_2;
  FUN_1023ca8ec();
  return;
}



/* Entry: 1023cbc58; end: 1023cbc77;  */

void FUN_1023cbc58(void)

{
  FUN_1023cb408();
  return;
}



/* Entry: 1023cbc78; end: 1023cbc8b;  */

ulong FUN_1023cbc78(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023cbd70);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023cbd74);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b0d88;
    func_0x000107c61168(PTR_PTR_1126b0d88);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126b0d88;
    func_0x000107c61168(PTR_PTR_1126b0d88);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1023cc414(0,0x112e93320,&PTR_PTR_1126b0d88);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1023cbe48);
  (*pcVar2)();
}



/* Entry: 1023cbc8c; end: 1023cbe47;  */

ulong FUN_1023cbc8c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023cbd70);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023cbd74);
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
  FUN_1023cc414(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1023cbe48);
  (*pcVar2)();
}



/* Entry: 1023cbe48; end: 1023cc18f;  */

ulong FUN_1023cbe48(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023cbf20);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023cbf24);
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
  func_0x000107c5fb78(0xd000000000000016,0x800000010f096730);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1023cbfec);
  (*pcVar2)();
}



/* Entry: 1023cc190; end: 1023cc1b3;  */

void FUN_1023cc190(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  double dVar6;
  
  puVar4 = PTR_PTR_1126afff0;
  func_0x000107c610f8(PTR_PTR_1126afff0);
  func_0x000107c453e4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c600d4(uVar5,uVar1,uVar2);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1023cbb54);
    (*pcVar3)();
  }
  if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1023cbb58);
    (*pcVar3)();
  }
  if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1023cbb5c);
    (*pcVar3)();
  }
  func_0x000107c597e0(puVar4);
  func_0x000107c5ff2c();
  func_0x000107c600d4();
  dVar6 = param_1;
  func_0x000107c600d4(uVar5,uVar1,uVar2);
  dVar6 = (param_1 - dVar6) * 1000.0;
  if ((ulong)ABS(dVar6) < 0x7ff0000000000000) {
    if (dVar6 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1023cbb64);
      (*pcVar3)();
    }
    if (dVar6 < 1.8446744073709552e+19) {
      func_0x000107c54358(puVar4);
      if (param_2 != 0) {
        func_0x000107c5a0a4(param_2);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1023cbb68);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1023cbb60);
  (*pcVar3)();
}



/* Entry: 1023cc1b4; end: 1023cc2e3;  */

undefined * FUN_1023cc1b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d4260;
  func_0x000107c61168();
  func_0x000107c40bd0(0x4056800000000000,0x4063800000000000);
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    func_0x000107c602fc(0x30);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c413cc(param_1);
    func_0x000107c61180();
    uVar3 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c5fb78(uVar3,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(0x800000010f096680);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar3 = 0x112d74dc8;
    func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
    puVar2 = puVar1;
    func_0x000107c5fc54(puVar1,uVar3);
    func_0x000107c61170(puVar1);
  }
  return puVar2;
}



/* Entry: 1023cc2e4; end: 1023cc3f3;  */

void FUN_1023cc2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  unaff_x20[6] = PTR___swiftEmptyArrayStorage_11034f1c8;
  unaff_x20[7] = 0;
  *(undefined1 *)(unaff_x20 + 8) = 1;
  unaff_x20[2] = param_1;
  unaff_x20[3] = param_2;
  unaff_x20[4] = param_4;
  unaff_x20[5] = 0;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c615f0(param_4);
  FUN_1023cab20();
  unaff_x20[7] = 0;
  *(undefined1 *)(unaff_x20 + 8) = 0;
  puVar1 = &UNK_1104fe4b0;
  func_0x000107c613fc(&UNK_1104fe4b0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  uVar2 = 0;
  func_0x00010488a220(0,1,FUN_1023cc3f4,puVar1);
  func_0x000107c61574(puVar1);
  puVar1 = &UNK_1104fe4d8;
  func_0x000107c613fc(&UNK_1104fe4d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  func_0x000104888fc0(0,1,FUN_1023cc40c,puVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 1023cc3f4; end: 1023cc40b;  */

void FUN_1023cc3f4(void)

{
  FUN_1023caed4();
  return;
}



/* Entry: 1023cc40c; end: 1023cc413;  */

void FUN_1023cc40c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x3e);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  uVar1 = 0;
  func_0x000107c60714(uVar2,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0xd000000000000039,0x800000010f0967f0);
  uVar1 = 0x112d393f0;
  uStack_48 = param_1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_48,&uStack_40,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_38);
  return;
}



/* Entry: 1023cc414; end: 1023cc453;  */

void FUN_1023cc414(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1023cc454; end: 1023cc557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1023cc454(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112e93598;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e93598);
  lVar4 = lVar2;
  if (lVar2 == 0) {
    func_0x0001023d26fc();
    func_0x000107c613fc();
    func_0x0001000285a8(0x112e93628,&UNK_10da9f2b0);
    func_0x000107c613fc();
    uVar3 = 1;
    func_0x00010008747c();
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    func_0x0001000285a8(0x112dfa3d0,&UNK_10d9cc228);
    func_0x000107c613fc();
    uVar3 = 1;
    func_0x00010008747c();
    *(undefined8 *)(lVar2 + 0x18) = uVar3;
    func_0x0001000285a8(0x112e93630,&UNK_10da9f2c0);
    func_0x000107c613fc();
    uVar3 = 1;
    func_0x00010008747c();
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c6157c(lVar2);
    func_0x000107c61574(uVar3);
    lVar4 = 0;
  }
  func_0x000107c6157c(lVar4);
  return lVar2;
}



/* Entry: 1023cc558; end: 1023cc61b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1023cc558(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar1 = _DAT_112e935a8;
  puVar4 = *(undefined **)(unaff_x20 + _DAT_112e935a8);
  puVar5 = puVar4;
  if (puVar4 == (undefined *)0x1) {
    lVar2 = unaff_x20 + _DAT_112e935d8;
    func_0x000107c61618();
    if (lVar2 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c4e364();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      puVar5 = PTR_PTR_1126aff58;
      func_0x000107c610f8();
      func_0x000107c48080();
      func_0x000107c61170(lVar3);
    }
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar5;
    func_0x000107c61174(puVar5);
    FUN_1023cc8ec(uVar6);
  }
  FUN_1023d0114(puVar4);
  return puVar5;
}



/* Entry: 1023cc61c; end: 1023cc63b; -[SCPreviewFeatureVideoPlaybackControlsImpl parentViewControllerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023cc61c(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112e935d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023cc63c; end: 1023cc64f; -[SCPreviewFeatureVideoPlaybackControlsImpl setParentViewControllerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023cc63c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112e935d8,param_3);
  return;
}



/* Entry: 1023cc650; end: 1023cc6db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023cc650(void)

{
  long unaff_x20;
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000107c614f0();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e93568);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(&lStack_38);
  func_0x000107c61574(uVar1);
  if (lStack_38 != 0) {
    func_0x000107c4ff64(lStack_38);
    func_0x000107c615e8(lStack_38);
  }
  func_0x000107c61154(&stack0xffffffffffffffb8,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023cc6dc; end: 1023cc773; -[SCPreviewFeatureVideoPlaybackControlsImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023cc6dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e93568);
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  func_0x0001000d224c(&lStack_38);
  func_0x000107c61574(uVar2);
  if (lStack_38 != 0) {
    func_0x000107c4ff64(lStack_38);
    func_0x000107c615e8(lStack_38);
  }
  lStack_48 = param_1;
  lStack_40 = lVar1;
  func_0x000107c61154(&lStack_48,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023cc774; end: 1023cc8eb; -[SCPreviewFeatureVideoPlaybackControlsImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001023cc7b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023cc7d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023cc7b4) */
/* WARNING: Removing unreachable block (ram,0x0001023cc7d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1023cc774(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e93530));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e93538));
  param_1 = param_1 + _DAT_112e93540;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1023cc8ec; end: 1023cc8fb;  */

void FUN_1023cc8ec(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1023cc8fc; end: 1023cc93b;  */

undefined8 FUN_1023cc8fc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1023cc93c; end: 1023cc987; -[SCPreviewFeatureVideoPlaybackControlsImpl init] */

void FUN_1023cc93c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewFeatureVideoPlaybackControls.PreviewFeatureVideoPlaybackControlsImpl",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023cc968);
  (*pcVar1)();
}



/* Entry: 1023cc988; end: 1023cce2f;  */

/* WARNING: Possible PIC construction at 0x0001023cca20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ccb9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ccdcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023ccdd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023cc988(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  undefined8 ******ppppppuVar6;
  undefined8 uVar7;
  undefined8 ******ppppppuVar8;
  undefined *puVar9;
  long extraout_x8;
  ulong unaff_x20;
  undefined8 ******ppppppuVar10;
  undefined8 *****pppppuVar11;
  long lVar12;
  undefined8 *****pppppuVar13;
  undefined1 *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 *****pppppuStack_110;
  undefined8 ****ppppuStack_108;
  undefined8 ****ppppuStack_100;
  undefined8 ****ppppuStack_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 ****ppppuStack_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 ****ppppuStack_d0;
  undefined8 ****ppppuStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined8 ****ppppuStack_a8;
  undefined8 ****ppppuStack_a0;
  undefined8 ****ppppuStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [40];
  
  uVar2 = unaff_x20;
  func_0x000107c614f0();
  uVar3 = uVar2;
  FUN_1023cce30();
  if ((uVar3 & 1) != 0) {
    pcVar4 = (char *)(unaff_x20 + _DAT_112e93540);
    func_0x000107c61618();
    if ((undefined8 ******)pcVar4 != (undefined8 ******)0x0) {
      lVar5 = unaff_x20 + _DAT_112e93548;
      func_0x000107c61618();
      if (lVar5 != 0) {
        func_0x0001000d224c(&pppppuStack_110);
        pppppuVar11 = pppppuStack_110;
        if ((undefined8 ******)pppppuStack_110 == (undefined8 ******)0x0) {
          FUN_1023cd04c();
          FUN_1023cd16c(lVar5);
          func_0x000107c3f5b8(pcVar4);
          FUN_1023cd54c();
          ppppppuVar8 = (undefined8 ******)pcVar4;
          func_0x000107c5ddac();
          func_0x000107c61180();
          if (ppppppuVar8 == (undefined8 ******)0x0) {
            ppppppuVar6 = (undefined8 ******)(unaff_x20 + _DAT_112e935b0);
            ppppppuVar8 = ppppppuVar6;
            func_0x000107c61428(ppppppuVar6,auStack_88,0,0);
            ppppppuVar10 = (undefined8 ******)ppppppuVar6[3];
            if (ppppppuVar10 != (undefined8 ******)0x0) {
              pppppuVar11 = ppppppuVar6[4];
              func_0x0001000a8868(ppppppuVar6,ppppppuVar10);
              pppppuVar13 = ppppppuVar10[-1];
              puStack_1a0 = (undefined1 *)&puStack_1a0;
              (*(code *)PTR____chkstk_darwin_11034bd40)(pppppuVar13[8]);
              lVar12 = (long)&puStack_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
              (*(code *)pppppuVar13[2])(lVar12);
              ppppppuVar8 = ppppppuVar10;
              (*(code *)pppppuVar11[1])(ppppppuVar10,pppppuVar11);
              (*(code *)pppppuVar13[1])(lVar12,ppppppuVar10);
              if (ppppppuVar8[2] == (undefined8 *****)0x0) {
                func_0x000107c6142c();
              }
              else {
                ppppuStack_b8 = ppppppuVar8[0xf];
                ppppuStack_c0 = ppppppuVar8[0xe];
                ppppuStack_a8 = ppppppuVar8[0x11];
                ppppuStack_b0 = ppppppuVar8[0x10];
                ppppuStack_98 = ppppppuVar8[0x13];
                ppppuStack_a0 = ppppppuVar8[0x12];
                uStack_90 = *(undefined4 *)(ppppppuVar8 + 0x14);
                ppppuStack_f8 = ppppppuVar8[7];
                ppppuStack_100 = ppppppuVar8[6];
                ppppuStack_e8 = ppppppuVar8[9];
                ppppuStack_f0 = ppppppuVar8[8];
                ppppuStack_d8 = ppppppuVar8[0xb];
                ppppuStack_e0 = ppppppuVar8[10];
                ppppuStack_c8 = ppppppuVar8[0xd];
                ppppuStack_d0 = ppppppuVar8[0xc];
                ppppuStack_108 = ppppppuVar8[5];
                pppppuStack_110 = ppppppuVar8[4];
                FUN_1023c8d7c(&pppppuStack_110,&puStack_198);
                func_0x000107c6142c(ppppppuVar8);
                pppppuVar11 = pppppuStack_110;
                if ((ulong)pppppuStack_110 >> 0x3e == 0) {
                  ppppppuVar8 = *(undefined8 *******)
                                 (((ulong)pppppuStack_110 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  ppppppuVar8 = (undefined8 ******)((ulong)pppppuStack_110 & 0xffffffffffffff8);
                  if ((undefined8 ******)0x7fffffffffffffff < pppppuStack_110) {
                    ppppppuVar8 = (undefined8 ******)pppppuStack_110;
                  }
                  func_0x000107c60480();
                }
                if (ppppppuVar8 != (undefined8 ******)0x0) {
                  if (((ulong)pppppuVar11 & 0xc000000000000001) == 0) {
                    if (*(long *)(((ulong)pppppuVar11 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023cce30);
                      (*pcVar1)();
                    }
                    pppppuVar13 = (undefined8 *****)pppppuVar11[4];
                    func_0x000107c61174(pppppuVar13);
                  }
                  else {
                    pppppuVar13 = (undefined8 *****)0x0;
                    func_0x00010134bc08(0,pppppuVar11);
                  }
                  func_0x0001023c8db8(&pppppuStack_110);
                  puVar9 = &UNK_1104fe670;
                  func_0x000107c613fc(&UNK_1104fe670,0x18,7);
                  func_0x000107c61614(puVar9 + 0x10);
                  uStack_178 = 0x1023d0144;
                  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_190 = 0x42000000;
                  puStack_188 = &UNK_10134a1dc;
                  puStack_180 = &UNK_1104fe6b0;
                  puStack_170 = puVar9;
                  func_0x000107c60bc4(&puStack_198);
                  func_0x000107c61574(puStack_170);
                  pcVar4 = "activate()";
                  func_0x0001000c10c0("activate()");
                  func_0x000107c61180();
                  func_0x000107c5dc64(pppppuVar13);
                  goto code_r0x000107c615e8;
                }
                ppppppuVar8 = &pppppuStack_110;
                func_0x0001023c8db8();
              }
            }
          }
          else {
            ppppppuVar6 = ppppppuVar8;
            FUN_1023cc454();
            pppppuVar11 = ppppppuVar6[2];
            func_0x000107c6157c(pppppuVar11);
            func_0x000107c61574(ppppppuVar6);
            pppppuStack_110 = ppppppuVar8;
            func_0x000107c61174();
            func_0x000100087c34(&pppppuStack_110);
            func_0x000107c61170(ppppppuVar8);
            func_0x000107c61574(pppppuVar11);
            FUN_1023cda38();
            func_0x000107c61170();
          }
          FUN_1023cdeac();
          FUN_1023cdf48();
          FUN_1023ce1cc();
          if (ppppppuVar8 != (undefined8 ******)0x0) {
            puVar9 = &UNK_1104fe670;
            func_0x000107c613fc(&UNK_1104fe670,0x18,7);
            func_0x000107c61614(puVar9 + 0x10);
            uVar7 = 0;
            func_0x00010488a220(0,1,FUN_1023d0124,puVar9);
            func_0x000107c61574(ppppppuVar8);
            func_0x000107c61574(puVar9);
            puVar9 = &UNK_1104fe698;
            func_0x000107c613fc(&UNK_1104fe698,0x18,7);
            *(ulong *)(puVar9 + 0x10) = uVar2;
            func_0x000104888fc0(0,1,FUN_1023d013c,puVar9);
            func_0x000107c61574(uVar7);
            func_0x000107c61574(puVar9);
          }
          ppppppuVar8 = (undefined8 ******)pcVar4;
          func_0x000107c3f5b8();
          if ((ppppppuVar8 != (undefined8 ******)0x1) ||
             (func_0x0001000d224c(&pppppuStack_110), pppppuVar11 = pppppuStack_110,
             (undefined8 ******)pppppuStack_110 == (undefined8 ******)0x0)) {
            func_0x000107c615e8(pcVar4);
            func_0x000107c61170(lVar5);
            return;
          }
          func_0x000107c5d57c(pppppuStack_110);
          pcVar4 = (char *)pppppuVar11;
        }
        else {
          func_0x000107c3d740(pppppuStack_110);
          pcVar4 = (char *)pppppuVar11;
        }
      }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar4);
      return;
    }
  }
  return;
}



/* Entry: 1023cce30; end: 1023cd04b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023cce30(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  lVar1 = _DAT_112e93540;
  lVar2 = unaff_x20 + _DAT_112e93540;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = lVar2;
  func_0x000107c4a704();
  func_0x000107c615e8(lVar2);
  uVar4 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (uVar4 == 0) {
    return;
  }
  uVar5 = uVar4;
  func_0x000107c3f5b8();
  func_0x000107c615e8(uVar4);
  iVar7 = (int)lVar3;
  if ((iVar7 != 0) &&
     (uVar4 = uVar5, FUN_1023cf430(uVar5,*(undefined8 *)(unaff_x20 + _DAT_112e93530)),
     (uVar4 & 1) != 0)) {
    return;
  }
  func_0x000107c602fc(0x32);
  func_0x000107c6142c(0xe000000000000000);
  if ((long)uVar5 < 2) {
    if (uVar5 == 0) {
      uVar8 = 0xe700000000000000;
      uVar6 = 0x746c7561666564;
      goto LAB_1023ccfb4;
    }
    if (uVar5 == 1) {
      uVar8 = 0xe900000000000070;
      uVar6 = 0x616e5369746c756d;
      goto LAB_1023ccfb4;
    }
  }
  else {
    if (uVar5 == 2) {
      uVar8 = 0xec00000065727574;
      uVar6 = 0x7061436863746162;
      goto LAB_1023ccfb4;
    }
    if (uVar5 == 3) {
      uVar8 = 0xe800000000000000;
      uVar6 = 0x656e696c656d6974;
      goto LAB_1023ccfb4;
    }
    if (uVar5 == 4) {
      uVar8 = 0xec00000065646f4d;
      uVar6 = 0x726f746365726964;
      goto LAB_1023ccfb4;
    }
  }
  uVar8 = 0xe700000000000000;
  uVar6 = 0x6e776f6e6b6e75;
LAB_1023ccfb4:
  func_0x000107c5fb78(uVar6,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c5fb78(0x6f65646956736920,0xee00203a70616e53);
  uVar6 = 0x65757274;
  if (iVar7 == 0) {
    uVar6 = 0x65736c6166;
  }
  uVar8 = 0xe400000000000000;
  if (iVar7 == 0) {
    uVar8 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar6,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c6142c(0x800000010f096930);
  return;
}



/* Entry: 1023cd04c; end: 1023cd16b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023cd04c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x0001000d224c(&puStack_70);
  puVar1 = puStack_70;
  if (puStack_70 != (undefined *)0x0) {
    func_0x000107c51c78(puStack_70);
    puVar2 = puStack_70;
    func_0x000107c61180();
    puVar3 = &UNK_1104fe670;
    func_0x000107c613fc(&UNK_1104fe670,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_50 = FUN_1023d023c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_10139e150;
    puStack_58 = &UNK_1104fe728;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    puVar3 = puVar2;
    func_0x000107c5c320(puVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c3e924(puVar3);
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 1023cd16c; end: 1023cd54b;  */

/* WARNING: Possible PIC construction at 0x0001023cd214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023cd2ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023cd390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023cd3d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023cd464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023cd48c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023cd4c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023cd510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023cd32c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023cd4c8) */
/* WARNING: Removing unreachable block (ram,0x0001023cd490) */
/* WARNING: Removing unreachable block (ram,0x0001023cd468) */
/* WARNING: Removing unreachable block (ram,0x0001023cd394) */
/* WARNING: Removing unreachable block (ram,0x0001023cd398) */
/* WARNING: Removing unreachable block (ram,0x0001023cd39c) */
/* WARNING: Removing unreachable block (ram,0x0001023cd3a0) */
/* WARNING: Removing unreachable block (ram,0x0001023cd330) */
/* WARNING: Removing unreachable block (ram,0x0001023cd2f0) */
/* WARNING: Removing unreachable block (ram,0x0001023cd2f8) */
/* WARNING: Removing unreachable block (ram,0x0001023cd3b4) */
/* WARNING: Removing unreachable block (ram,0x0001023cd3b8) */
/* WARNING: Removing unreachable block (ram,0x0001023cd304) */
/* WARNING: Removing unreachable block (ram,0x0001023cd3c8) */
/* WARNING: Removing unreachable block (ram,0x0001023cd30c) */
/* WARNING: Removing unreachable block (ram,0x0001023cd548) */
/* WARNING: Removing unreachable block (ram,0x0001023cd314) */
/* WARNING: Removing unreachable block (ram,0x0001023cd33c) */
/* WARNING: Removing unreachable block (ram,0x0001023cd350) */
/* WARNING: Removing unreachable block (ram,0x0001023cd340) */
/* WARNING: Removing unreachable block (ram,0x0001023cd35c) */
/* WARNING: Removing unreachable block (ram,0x0001023cd370) */
/* WARNING: Removing unreachable block (ram,0x0001023cd374) */
/* WARNING: Removing unreachable block (ram,0x0001023cd328) */
/* WARNING: Removing unreachable block (ram,0x0001023cd378) */
/* WARNING: Removing unreachable block (ram,0x0001023cd218) */
/* WARNING: Removing unreachable block (ram,0x0001023cd3a8) */
/* WARNING: Removing unreachable block (ram,0x0001023cd3d8) */
/* WARNING: Removing unreachable block (ram,0x0001023cd278) */
/* WARNING: Removing unreachable block (ram,0x0001023cd3d0) */
/* WARNING: Removing unreachable block (ram,0x0001023cd2b8) */
/* WARNING: Removing unreachable block (ram,0x0001023cd514) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023cd16c(long param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  FUN_1023cc454();
  FUN_1023d1f70(0);
  func_0x000107c610f8();
  func_0x0001023d17f8();
  func_0x000107c61180();
  func_0x000107c550d8();
  *(undefined ***)(param_1 + _DAT_112e93728 + 8) = &PTR_DAT_1104fe508;
  func_0x000107c61604();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e935a0);
  *(long *)(unaff_x20 + _DAT_112e935a0) = param_1;
  func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1023cd54c; end: 1023cda37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023cd54c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  
  if (param_1 == 1) {
    func_0x0001023cf4ec();
    if (param_1 != 0) {
      lVar8 = *(long *)(unaff_x20 + _DAT_112e93570);
      func_0x0001000d224c(&lStack_78);
      lVar9 = lStack_78;
      if (lStack_78 == 0) {
        func_0x000107c61574(param_1);
      }
      else {
        lVar5 = lStack_78;
        func_0x000107c4d1c0();
        func_0x000107c61180();
        if (lVar5 != 0) {
          uVar7 = 0;
          func_0x0001023c9f20();
          func_0x000107c613fc();
          func_0x000107c6157c(param_1);
          func_0x000107c615f0(lVar5);
          func_0x000107c615f0(lStack_78);
          lVar6 = param_1;
          FUN_1023ca668(param_1,lVar5,lStack_78);
          func_0x000107c61574(param_1);
          func_0x000107c615e8(lVar5);
          func_0x000107c615e8(lStack_78);
          lVar3 = _DAT_112e935b0;
          ppuStack_58 = &PTR_DAT_1104fe388;
          lStack_78 = lVar6;
          uStack_60 = uVar7;
          func_0x000107c61428(unaff_x20 + _DAT_112e935b0,auStack_90,0x21,0);
          FUN_1023d01b4(&lStack_78,unaff_x20 + lVar3,0x112e935b8,&UNK_10da9f250);
          func_0x000107c614a8(auStack_90);
          uVar7 = 0;
          FUN_1023c9070();
          func_0x000107c610f8();
          func_0x000107c6157c();
          FUN_1023c8ea4();
          ppuStack_58 = &PTR_DAT_1104fe280;
          uStack_60 = uVar7;
          func_0x000107c615e8(lVar9);
          func_0x000107c615e8(lVar5);
          goto LAB_1023cd7ec;
        }
        func_0x000107c61574(param_1);
        func_0x000107c615e8(lStack_78);
      }
    }
    lStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x4b);
    func_0x000107c5fb78(0xd000000000000033,0x800000010f0969c0);
    uVar7 = 0x616e5369746c756d;
    uVar4 = 0xe900000000000070;
  }
  else {
    if (param_1 != 0) {
      lStack_78 = 0;
      uStack_70 = 0xe000000000000000;
      func_0x000107c602fc(0x35);
      func_0x000107c5fb78(0xd000000000000033,0x800000010f0969c0);
      uVar7 = 0x6e776f6e6b6e75;
      if (param_1 == 3) {
        uVar7 = 0x656e696c656d6974;
      }
      uVar4 = 0xe700000000000000;
      if (param_1 == 3) {
        uVar4 = 0xe800000000000000;
      }
      uVar1 = 0xec00000065646f4d;
      uVar2 = 0x726f746365726964;
      if (param_1 != 4) {
        uVar1 = uVar4;
        uVar2 = uVar7;
      }
      uVar7 = 0xec00000065727574;
      uVar4 = 0x7061436863746162;
      if (param_1 != 2) {
        uVar7 = uVar1;
        uVar4 = uVar2;
      }
      func_0x000107c5fb78(uVar4,uVar7);
      func_0x000107c6142c(uVar7);
      goto LAB_1023cda14;
    }
    FUN_1023ce1cc();
    if (param_1 != 0) {
      lVar9 = *(long *)(unaff_x20 + _DAT_112e93560);
      lVar8 = *(long *)(unaff_x20 + _DAT_112e93570);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e93578);
      func_0x000107c6157c(lVar9);
      func_0x000107c6157c(lVar8);
      func_0x000107c6157c(param_1);
      func_0x000107c5b1b8(uVar7);
      func_0x000107c61180();
      uVar4 = 0;
      func_0x0001023cbbac();
      func_0x000107c613fc();
      func_0x000107c6157c(lVar8);
      lVar5 = lVar9;
      FUN_1023cc2e4(lVar9,lVar8,param_1,uVar7);
      func_0x000107c61574(lVar9);
      func_0x000107c61574(lVar8);
      func_0x000107c61574(param_1);
      func_0x000107c615e8(uVar7);
      lVar9 = _DAT_112e935b0;
      ppuStack_58 = &PTR_DAT_1104fe418;
      lStack_78 = lVar5;
      uStack_60 = uVar4;
      func_0x000107c61428(unaff_x20 + _DAT_112e935b0,auStack_90,0x21,0);
      FUN_1023d01b4(&lStack_78,unaff_x20 + lVar9,0x112e935b8,&UNK_10da9f250);
      func_0x000107c614a8(auStack_90);
      uVar7 = 0;
      FUN_1023c9070();
      func_0x000107c610f8();
      FUN_1023c8ea4();
      ppuStack_58 = &PTR_DAT_1104fe280;
      uStack_60 = uVar7;
LAB_1023cd7ec:
      func_0x000107c61574(param_1);
      lVar9 = _DAT_112e935c0;
      lStack_78 = lVar8;
      func_0x000107c61428(unaff_x20 + _DAT_112e935c0,auStack_90,0x21,0);
      FUN_1023d01b4(&lStack_78,unaff_x20 + lVar9,0x112e935c8,&UNK_10da9f258);
      func_0x000107c614a8(auStack_90);
      return;
    }
    lStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x4b);
    func_0x000107c5fb78(0xd000000000000033,0x800000010f0969c0);
    uVar7 = 0x746c7561666564;
    uVar4 = 0xe700000000000000;
  }
  func_0x000107c5fb78(uVar7,uVar4);
  func_0x000107c5fb78(0xd000000000000016,0x800000010f096a00);
LAB_1023cda14:
  func_0x000107c6142c(uStack_70);
  return;
}



/* Entry: 1023cda38; end: 1023cdd17;  */

/* WARNING: Possible PIC construction at 0x0001023cda98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023cda9c) */
/* WARNING: Removing unreachable block (ram,0x0001023cdaa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023cda38(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  long unaff_x20;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined *puStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  lVar11 = unaff_x20 + _DAT_112e93548;
  func_0x000107c61618();
  if (lVar11 != 0) {
    lVar7 = lVar11;
    func_0x000107c5cba4();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    if (lVar7 != 0) {
      func_0x000107c51c70(lVar7);
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar7);
      return;
    }
  }
  lVar11 = *(long *)(unaff_x20 + _DAT_112e935a0);
  if (lVar11 != 0) {
    puStack_60 = (undefined *)0x3ff0000000000000;
    uStack_58 = 0;
    puStack_50 = (undefined *)0x0;
    puStack_48 = (undefined *)0x3ff0000000000000;
    pcStack_40 = (code *)0x0;
    puStack_38 = (undefined *)0x0;
    func_0x000107c60898(&puStack_90,0x3fe999999999999a,0x3fe999999999999a,&puStack_60);
    lVar7 = _DAT_112e935e8;
    if (*(char *)(unaff_x20 + _DAT_112e935e8) == '\x01') {
      uStack_58 = uStack_88;
      puStack_60 = puStack_90;
      puStack_48 = (undefined *)uStack_78;
      puStack_50 = (undefined *)uStack_80;
      puStack_38 = (undefined *)uStack_68;
      pcStack_40 = (code *)uStack_70;
      func_0x000107c6089c(&puStack_90,0,0xc049000000000000,&puStack_60);
    }
    uVar6 = uStack_68;
    uVar5 = uStack_70;
    uVar4 = uStack_78;
    uVar3 = uStack_80;
    uVar2 = uStack_88;
    puVar9 = puStack_90;
    func_0x000107c61174();
    func_0x000107c61174();
    uStack_58 = uVar2;
    puStack_60 = puVar9;
    puStack_48 = (undefined *)uVar4;
    puStack_50 = (undefined *)uVar3;
    puStack_38 = (undefined *)uVar6;
    pcStack_40 = (code *)uVar5;
    func_0x000107c5a03c();
    func_0x000107c526c0(0,lVar11);
    func_0x000107c550d8(lVar11);
    func_0x000107c61170(lVar11);
    if (*(char *)(unaff_x20 + lVar7) == '\x01') {
      puStack_60 = (undefined *)0x3ff0000000000000;
      uStack_58 = 0;
      puStack_50 = (undefined *)0x0;
      puStack_48 = (undefined *)0x3ff0000000000000;
      pcStack_40 = (code *)0x0;
      puStack_38 = (undefined *)0x0;
      func_0x000107c6089c(&puStack_90,0,0xc049000000000000,&puStack_60);
      auVar1._8_8_ = uStack_78;
      auVar1._0_8_ = uStack_80;
      auVar14._8_8_ = uStack_78;
      auVar14._0_8_ = uStack_80;
      auVar13._8_8_ = uStack_68;
      auVar13._0_8_ = uStack_70;
      auVar12._8_8_ = uStack_88;
      auVar12._0_8_ = puStack_90;
      uStack_b0 = uStack_70;
      puStack_a0 = puStack_90;
      auVar13 = NEON_ext(auVar13,auVar13,8,1);
      uStack_d0 = uStack_80;
      uStack_c0 = auVar13._0_8_;
      auVar14 = NEON_ext(auVar14,auVar1,8,1);
      auVar12 = NEON_ext(auVar12,auVar12,8,1);
      uStack_f0 = auVar14._0_8_;
      uStack_e0 = auVar12._0_8_;
    }
    else {
      puStack_a0 = (undefined *)0x3ff0000000000000;
      uStack_e0 = 0;
      uStack_d0 = 0;
      uStack_f0 = 0x3ff0000000000000;
      uStack_b0 = 0;
      uStack_c0 = 0;
    }
    puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar9 = &UNK_1104fe6e8;
    func_0x000107c613fc(&UNK_1104fe6e8,0x48,7);
    *(long *)(puVar9 + 0x10) = lVar11;
    *(undefined8 *)(puVar9 + 0x30) = uStack_f0;
    *(undefined8 *)(puVar9 + 0x28) = uStack_d0;
    *(undefined8 *)(puVar9 + 0x20) = uStack_e0;
    *(undefined **)(puVar9 + 0x18) = puStack_a0;
    *(undefined8 *)(puVar9 + 0x40) = uStack_c0;
    *(undefined8 *)(puVar9 + 0x38) = uStack_b0;
    pcStack_40 = FUN_1023d014c;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1104fe700;
    ppuVar10 = &puStack_60;
    puStack_38 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar9 = puStack_38;
    func_0x000107c61174(lVar11);
    func_0x000107c61574(puVar9);
    func_0x000107c3dcd8(0x3fc999999999999a,0,0x3fe3333333333333,0x4000000000000000,puVar8);
    func_0x000107c61170(lVar11);
    func_0x000107c60bd0(ppuVar10);
  }
  return;
}



/* Entry: 1023cdd18; end: 1023cdeab;  */

void FUN_1023cdd18(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long alStack_70 [3];
  long lStack_58;
  undefined8 uStack_50;
  
  if (param_1 == 0) {
    lStack_58 = 0;
    uStack_50 = 0xe000000000000000;
    func_0x000107c602fc(0x3f);
    func_0x000107c5fb78(0xd00000000000003d,0x800000010f096980);
    if (param_2 == 0) {
      uVar4 = 0xe300000000000000;
    }
    else {
      alStack_70[0] = param_2;
      func_0x000107c614b0(param_2);
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c5fb18(alStack_70,uVar4);
    }
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(uStack_50);
  }
  else {
    func_0x000107c61428(param_3 + 0x10,alStack_70,0,0);
    lVar1 = param_3 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar2 = param_1;
      func_0x000107c61174();
      lVar3 = lVar2;
      FUN_1023cc454();
      func_0x000107c61170(lVar1);
      uVar4 = *(undefined8 *)(lVar3 + 0x10);
      func_0x000107c6157c(uVar4);
      func_0x000107c61574(lVar3);
      lStack_58 = param_1;
      func_0x000107c61174(lVar2);
      func_0x000100087c34(&lStack_58);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar2);
      func_0x000107c61574(uVar4);
    }
  }
  func_0x000107c61428(param_3 + 0x10,&lStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_1023cda38();
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1023cdeac; end: 1023cdf47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023cdeac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  lVar1 = lStack_48;
  if (lStack_48 != 0) {
    func_0x000107c4e8f4();
    lVar2 = lStack_48;
    FUN_1023cc454();
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(lVar2);
    lStack_48 = param_1;
    func_0x000100087c34(&lStack_48);
    func_0x000107c61574(uVar3);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 1023cdf48; end: 1023ce1cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023cdf48(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar1 = unaff_x20 + _DAT_112e93540;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar6 = lVar1;
    func_0x000107c3f5b8();
    func_0x000107c615e8(lVar1);
    if ((lVar6 == 0) && (func_0x0001000d224c(&uStack_90), uVar3 = uStack_90, uStack_90 != 0)) {
      uVar2 = uStack_90;
      func_0x000107c4d078();
      func_0x000107c615e8();
      if ((uVar2 != 2) && (FUN_1023cea4c(), (uVar3 & 1) != 0)) {
        lVar1 = unaff_x20 + _DAT_112e935b0;
        func_0x000107c61428(lVar1,auStack_58,0,0);
        lVar6 = *(long *)(lVar1 + 0x18);
        if (lVar6 != 0) {
          lVar7 = *(long *)(lVar1 + 0x20);
          func_0x0001000a8868(lVar1,lVar6);
          lVar8 = *(long *)(lVar6 + -8);
          (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
          lVar5 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
          (**(code **)(lVar8 + 0x10))(lVar5);
          lVar1 = lVar6;
          (**(code **)(lVar7 + 8))(lVar6,lVar7);
          (**(code **)(lVar8 + 8))(lVar5,lVar6);
          if (*(long *)(lVar1 + 0x10) != 0) {
            uStack_88 = *(undefined8 *)(lVar1 + 100);
            uStack_90 = *(ulong *)(lVar1 + 0x5c);
            uStack_78 = *(undefined8 *)(lVar1 + 0x74);
            uStack_80 = *(undefined8 *)(lVar1 + 0x6c);
            uStack_68 = *(undefined8 *)(lVar1 + 0x84);
            uStack_70 = *(undefined8 *)(lVar1 + 0x7c);
            func_0x000107c6142c(lVar1);
            uStack_d0 = 0;
            uStack_c8 = 0xe000000000000000;
            func_0x000107c602fc(0x20);
            uStack_a0 = uStack_d0;
            uStack_98 = uStack_c8;
            func_0x000107c5fb78(0xd00000000000001e,0x800000010f0968e0);
            uStack_c8 = uStack_88;
            uStack_d0 = uStack_90;
            uStack_b8 = uStack_78;
            uStack_c0 = uStack_80;
            uStack_a8 = uStack_68;
            uStack_b0 = uStack_70;
            uVar4 = 0;
            func_0x000100f6e484(0);
            func_0x000107c603d0(&uStack_d0,&uStack_a0,uVar4,
                                PTR___ss26DefaultStringInterpolationVN_11034ec00,
                                PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08
                               );
            func_0x000107c6142c(uStack_98);
            func_0x0001000d224c(&uStack_a0);
            uVar3 = uStack_a0;
            if (uStack_a0 == 0) {
              return;
            }
            uStack_c8 = uStack_88;
            uStack_d0 = uStack_90;
            uStack_b8 = uStack_78;
            uStack_c0 = uStack_80;
            uStack_a8 = uStack_68;
            uStack_b0 = uStack_70;
            func_0x000107c426c4(uStack_a0);
            func_0x000107c615e8(uVar3);
            return;
          }
          func_0x000107c6142c(lVar1);
        }
      }
      func_0x0001000d224c(&uStack_90);
      if (uStack_90 != 0) {
        func_0x000107c41f2c(uStack_90);
        func_0x000107c615e8(uStack_90);
      }
    }
  }
  return;
}



/* Entry: 1023ce1cc; end: 1023ce2d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1023ce1cc(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    uVar5 = 0;
  }
  else {
    lVar1 = lStack_38;
    func_0x000107c3d860(lStack_38);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    func_0x0001000285a8(0x112e93638,&UNK_10da9f2d0);
    lVar2 = lVar1;
    func_0x000100759c94(lVar1,0);
    puVar3 = &UNK_1104fe670;
    func_0x000107c613fc(&UNK_1104fe670,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    uVar4 = 0x112e93640;
    func_0x0001000285a8(0x112e93640,&UNK_10da9f2d8);
    uVar5 = 0;
    func_0x000100759f5c(0,1,FUN_1023d019c,puVar3,uVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c61574(lVar2);
    func_0x000107c61574(puVar3);
  }
  return uVar5;
}



/* Entry: 1023ce2d4; end: 1023ce377;  */

void FUN_1023ce2d4(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    FUN_1023cc454();
    func_0x000107c61170(param_2);
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(lVar1);
    uStack_50 = uVar3;
    func_0x000107c615f0(uVar3);
    func_0x000100087c34(&uStack_50);
    func_0x000107c615e8(uVar3);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 1023ce378; end: 1023ce453;  */

void FUN_1023ce378(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x3e);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  uVar1 = 0;
  func_0x000107c60714(param_2,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0xd000000000000039,0x800000010f0967f0);
  uVar1 = 0x112d393f0;
  uStack_48 = param_1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_48,&uStack_40,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_38);
  return;
}



/* Entry: 1023ce454; end: 1023ce47b; -[SCPreviewFeatureVideoPlaybackControlsImpl activate] */

void FUN_1023ce454(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1023cc988();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023ce47c; end: 1023ce4e3; -[SCPreviewFeatureVideoPlaybackControlsImpl snapEditor:updateLoggingWithBuilder:] */

/* WARNING: Possible PIC construction at 0x0001023ce4cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023ce4d0) */

void FUN_1023ce47c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1023cfb48(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1023ce4e4; end: 1023ce63b; -[SCPreviewFeatureVideoPlaybackControlsImpl snapEditor:didTriggerLifecycle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ce4e4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  if (param_4 == 8) {
    func_0x000107c61604(param_1 + _DAT_112e93550,param_3);
  }
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023ce63c; end: 1023ce68b; -[SCPreviewFeatureVideoPlaybackControlsImpl configureWithView:] */

/* WARNING: Possible PIC construction at 0x0001023ce674: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023ce678) */

void FUN_1023ce63c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001023ce54c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1023ce68c; end: 1023ce963;  */

/* WARNING: Possible PIC construction at 0x0001023ce820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ce944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ce770: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023ce824) */
/* WARNING: Removing unreachable block (ram,0x0001023ce774) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ce68c(uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112e935a0);
  if (lVar4 == 0) {
    return;
  }
  func_0x000107c61174();
  func_0x000107c61174();
  lVar5 = lVar4;
  func_0x000107c49eac();
  if ((param_1 & 1) != (uint)lVar5) {
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c602fc(0x2b);
    func_0x000107c6142c(uStack_78);
    uStack_80 = 0xd000000000000029;
    uStack_78 = 0x800000010f096900;
    bVar3 = (param_1 & 1) == 0;
    uVar1 = 0x65757274;
    if (bVar3) {
      uVar1 = 0x65736c6166;
    }
    uVar2 = 0xe400000000000000;
    if (bVar3) {
      uVar2 = 0xe500000000000000;
    }
    func_0x000107c5fb78(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uStack_78);
    if ((param_1 & 1) == 0) {
      if (*(char *)(unaff_x20 + _DAT_112e935e8) == '\x01') {
        uStack_80 = 0x3ff0000000000000;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_68 = 0x3ff0000000000000;
        uStack_60 = 0;
        uStack_58 = 0;
        func_0x000107c6089c(&uStack_b0,0,0xc049000000000000,&uStack_80);
      }
      else {
        uStack_98 = 0x3ff0000000000000;
        uStack_a0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0x3ff0000000000000;
        uStack_90 = 0;
        uStack_88 = 0;
      }
      uStack_80 = uStack_b0;
      uStack_78 = uStack_a8;
      uStack_70 = uStack_a0;
      uStack_68 = uStack_98;
      uStack_60 = uStack_90;
      uStack_58 = uStack_88;
      func_0x000107c5a03c(lVar4);
      func_0x000107c526c0(0,lVar4);
      func_0x000107c550d8(lVar4);
    }
    else {
      func_0x000107c526c0(0x3ff0000000000000,lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1023ce964; end: 1023ce9e3; -[SCPreviewFeatureVideoPlaybackControlsImpl snapEditor:didChangeToolBarButtonItemType:selected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ce964(undefined8 param_1)

{
  long lVar1;
  undefined8 in_x4;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c4d078();
    func_0x000107c615e8(lStack_38);
    if (lVar1 == 2) goto LAB_1023ce9c8;
  }
  FUN_1023ce68c(in_x4);
LAB_1023ce9c8:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1023ce9e4; end: 1023cea17; -[SCPreviewFeatureVideoPlaybackControlsImpl isEnabled] */

uint FUN_1023ce9e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1023cce30();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1023cea18; end: 1023cea4b; -[SCPreviewFeatureVideoPlaybackControlsImpl isTrimmingEnabled] */

uint FUN_1023cea18(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1023cea4c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1023cea4c; end: 1023ceb53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1023cea4c(void)

{
  char *pcVar1;
  bool bVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar6 = unaff_x20 + _DAT_112e935b0;
  func_0x000107c61428(lVar6,auStack_58,0,0);
  lVar4 = *(long *)(lVar6 + 0x18);
  bVar2 = false;
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar6 + 0x20);
    func_0x0001000a8868(lVar6,lVar4);
    lVar6 = *(long *)(lVar4 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
    (**(code **)(lVar6 + 0x10))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    lVar3 = lVar4;
    (**(code **)(lVar5 + 8))(lVar4,lVar5);
    (**(code **)(lVar6 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
    lVar6 = *(long *)(lVar3 + 0x10) + 1;
    lVar4 = 0x28;
    do {
      lVar6 = lVar6 + -1;
      bVar2 = lVar6 != 0;
      if (lVar6 == 0) break;
      pcVar1 = (char *)(lVar3 + lVar4);
      lVar4 = lVar4 + 0x88;
    } while (*pcVar1 != '\x01');
    func_0x000107c6142c(lVar3);
  }
  return bVar2;
}



/* Entry: 1023ceb54; end: 1023cec57; -[SCPreviewFeatureVideoPlaybackControlsImpl isTrimmed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1023ceb54(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = param_1 + _DAT_112e935b0;
  func_0x000107c61428(lVar1,auStack_68,0,0);
  lVar2 = *(long *)(lVar1 + 0x18);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,lVar2);
    lVar5 = *(long *)(lVar2 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    (**(code **)(lVar5 + 0x10))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    pcVar6 = *(code **)(lVar4 + 0x28);
    func_0x000107c61174(param_1);
    lVar1 = lVar2;
    (*pcVar6)(lVar2,lVar4);
    uVar3 = (uint)lVar1;
    (**(code **)(lVar5 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    func_0x000107c61170(param_1);
  }
  return uVar3 & 1;
}



/* Entry: 1023cec58; end: 1023cecab; -[SCPreviewFeatureVideoPlaybackControlsImpl trimmedTimeRanges] */

void FUN_1023cec58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1023cecac();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  func_0x000100f6e484(0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1023cecac; end: 1023cee4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1023cecac(void)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar6 = unaff_x20 + _DAT_112e935b0;
  func_0x000107c61428(lVar6,auStack_68,0,0);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar5 = *(long *)(lVar6 + 0x18);
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar6 + 0x20);
    func_0x0001000a8868(lVar6,lVar5);
    lVar8 = *(long *)(lVar5 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    lVar6 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar8 + 0x10))(lVar6);
    lVar2 = lVar5;
    (**(code **)(lVar4 + 8))(lVar5,lVar4);
    (**(code **)(lVar8 + 8))(lVar6,lVar5);
    lVar6 = *(long *)(lVar2 + 0x10);
    if (lVar6 != 0) {
      puStack_70 = puVar3;
      func_0x0001023d1168(0,lVar6,0);
      uVar7 = *(ulong *)(puStack_70 + 0x10);
      lVar5 = uVar7 * 0x30 + 0x20;
      lVar4 = 0x5c;
      while( true ) {
        lVar6 = lVar6 + -1;
        puVar1 = (undefined8 *)(lVar2 + lVar4);
        uStack_88 = puVar1[3];
        uStack_90 = puVar1[2];
        uStack_78 = puVar1[5];
        uStack_80 = puVar1[4];
        uStack_98 = puVar1[1];
        uStack_a0 = *puVar1;
        if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar7) {
          func_0x0001023d1168(1 < *(ulong *)(puStack_70 + 0x18),uVar7 + 1,1);
        }
        *(ulong *)(puStack_70 + 0x10) = uVar7 + 1;
        puVar1 = (undefined8 *)(puStack_70 + lVar5);
        puVar1[3] = uStack_88;
        puVar1[2] = uStack_90;
        puVar1[5] = uStack_78;
        puVar1[4] = uStack_80;
        puVar1[1] = uStack_98;
        *puVar1 = uStack_a0;
        puVar3 = puStack_70;
        if (lVar6 == 0) break;
        lVar5 = lVar5 + 0x30;
        lVar4 = lVar4 + 0x88;
        uVar7 = uVar7 + 1;
      }
    }
    func_0x000107c6142c(lVar2);
  }
  return puVar3;
}



/* Entry: 1023cee50; end: 1023cf12b;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023cee50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 auStack_170 [4];
  long lStack_150;
  undefined **ppuStack_148;
  undefined1 auStack_140 [24];
  long lStack_128;
  undefined1 auStack_118 [24];
  long lStack_100;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  long lStack_c0;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [40];
  
  lVar1 = unaff_x20 + _DAT_112e93548;
  func_0x000107c61618();
  lVar2 = _DAT_112e935b0;
  if (lVar1 != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112e935b0,auStack_b0,0,0);
    FUN_1023d0088(unaff_x20 + lVar2,auStack_d8,0x112e935b8,&UNK_10da9f250);
    if (lStack_c0 == 0) {
      func_0x000107c61170(lVar1);
      uVar3 = 0x112e935b8;
      puVar5 = &UNK_10da9f250;
      lVar1 = -200;
    }
    else {
      func_0x000100cefee0(auStack_d8,auStack_98);
      lVar2 = _DAT_112e935c0;
      func_0x000107c61428(unaff_x20 + _DAT_112e935c0,auStack_f0,0,0);
      FUN_1023d0088(unaff_x20 + lVar2,auStack_118,0x112e935c8,&UNK_10da9f258);
      if (lStack_100 != 0) {
        func_0x000100cefee0(auStack_118,auStack_d8);
        func_0x000107c40420(lVar1);
        func_0x0001023d00d0(auStack_98,auStack_118);
        func_0x0001023d00d0(auStack_d8,auStack_140);
        func_0x0001000c6518(auStack_140,lStack_128);
        (*(code *)PTR____chkstk_darwin_11034bd40)
                  (*(undefined8 *)(*(long *)(lStack_128 + -8) + 0x40));
        puVar7 = (undefined8 *)((long)auStack_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
        (**(code **)(extraout_x12 + 0x10))(puVar7);
        uVar6 = *puVar7;
        lVar2 = 0;
        FUN_1023c9070();
        ppuStack_148 = &PTR_DAT_1104fe280;
        uVar3 = 0;
        auStack_170[1] = uVar6;
        lStack_150 = lVar2;
        FUN_1023c6568(0);
        func_0x000107c610f8();
        func_0x0001000c6518(auStack_170 + 1,lVar2);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
        puVar7 = (undefined8 *)((long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
        (**(code **)(extraout_x12_00 + 0x10))(puVar7);
        puVar4 = auStack_118;
        FUN_1023cf8a0(param_1,param_2,param_3,param_4,puVar4,*puVar7,uVar3);
        func_0x000107c61170(lVar1);
        func_0x0001000834e4(auStack_d8);
        func_0x0001000834e4(auStack_98);
        func_0x0001000834e4(auStack_170 + 1);
        func_0x0001000834e4(auStack_140);
        *(undefined ***)(puVar4 + _DAT_112e93290 + 8) = &PTR_DAT_1104fe4f8;
        func_0x000107c61604();
        return;
      }
      func_0x0001000834e4(auStack_98);
      func_0x000107c61170(lVar1);
      uVar3 = 0x112e935c8;
      puVar5 = &UNK_10da9f258;
      lVar1 = -0x108;
    }
    FUN_1023cc8fc(&stack0xfffffffffffffff0 + lVar1,uVar3,puVar5);
  }
  return;
}



/* Entry: 1023cf12c; end: 1023cf337;  */

/* WARNING: Possible PIC construction at 0x0001023cf30c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023cf1ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023cf310) */
/* WARNING: Removing unreachable block (ram,0x0001023cf1b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023cf12c(uint param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  ppuVar9 = &puStack_90;
  lVar3 = unaff_x20 + _DAT_112e93548;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  func_0x000107c52164();
  lVar4 = lVar3;
  func_0x000107c44fc4();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c49eac();
  if ((param_1 & 1) != (uint)lVar5) {
    if ((param_1 & 1) == 0) {
      func_0x000107c526c0(0,lVar4);
      func_0x000107c550d8(lVar4);
    }
    else {
      func_0x000107c526c0(0x3ff0000000000000,lVar4);
    }
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar7 = &UNK_1104fe530;
    func_0x000107c613fc(&UNK_1104fe530,0x19,7);
    *(long *)(puVar7 + 0x10) = lVar4;
    bVar1 = (byte)param_1 & 1;
    puVar7[0x18] = bVar1;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_1023d0044;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1104fe548;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    puVar7 = puStack_68;
    func_0x000107c61174();
    func_0x000107c61574(puVar7);
    puVar7 = &UNK_1104fe580;
    func_0x000107c613fc(&UNK_1104fe580,0x19,7);
    *(long *)(puVar7 + 0x10) = lVar4;
    puVar7[0x18] = bVar1;
    pcStack_70 = (code *)0x1023d007c;
    puStack_90 = puVar2;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100288f10;
    puStack_78 = &UNK_1104fe598;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    puVar7 = puStack_68;
    func_0x000107c61174(lVar4);
    func_0x000107c61574(puVar7);
    func_0x000107c3dcd0(0x3fc999999999999a,puVar6);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1023cf338; end: 1023cf35f; -[SCPreviewFeatureVideoPlaybackControlsImpl presentControlsWithMode:] */

void FUN_1023cf338(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1023cfcb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023cf360; end: 1023cf38f; -[SCPreviewFeatureVideoPlaybackControlsImpl setThumbnailHidden:] */

void FUN_1023cf360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1023ce68c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023cf390; end: 1023cf3e3; -[SCPreviewFeatureVideoPlaybackControlsImpl previewFeatureTimer:didUpdateVideoMode:fromPreviousVideoMode:] */

void FUN_1023cf390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x0001023cfd3c(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023cf3e4; end: 1023cf42f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023cf3e4(void)

{
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28);
  if (lStack_28 != 0) {
    func_0x000107c445b4(lStack_28);
    func_0x000107c615e8(lStack_28);
  }
  return;
}



/* Entry: 1023cf430; end: 1023cf5c7;  */

undefined1 FUN_1023cf430(ulong param_1,long param_2)

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



/* Entry: 1023cf5c8; end: 1023cf6ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023cf5c8(ulong *param_1,ulong *param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_58 [24];
  
  uVar5 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar2 = param_3 + _DAT_112e93540;
    func_0x000107c61618();
    func_0x000107c61170(param_3);
    if (uVar2 != 0) {
      uVar6 = uVar2;
      func_0x000107c499cc();
      if ((int)uVar6 != 0 && uVar5 != 0) {
        uVar6 = uVar5;
        func_0x000107c615f0();
        func_0x000107c51c14();
        func_0x000107c61180();
        if (uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023cf700);
          (*pcVar1)();
        }
        uVar3 = 0x112e93528;
        func_0x0001000285a8(0x112e93528,&UNK_10da9f240);
        uVar4 = uVar6;
        func_0x000107c5fc54(uVar6,uVar3);
        func_0x000107c61170(uVar6);
        if (uVar4 >> 0x3e == 0) {
          uVar6 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar6 = uVar4 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar4) {
            uVar6 = uVar4;
          }
          func_0x000107c60480();
        }
        func_0x000107c615e8(uVar2);
        func_0x000107c6142c(uVar4);
        uVar2 = uVar5;
        if (uVar6 != 0) goto LAB_1023cf6c4;
      }
      func_0x000107c615e8(uVar2);
    }
  }
  uVar5 = 0;
LAB_1023cf6c4:
  *param_1 = uVar5;
  return;
}



/* Entry: 1023cf700; end: 1023cf71b;  */

void FUN_1023cf700(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c615f0();
  return;
}



/* Entry: 1023cf71c; end: 1023cf76f;  */

void FUN_1023cf71c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1023cf770();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1023cf770; end: 1023cf89f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023cf770(double param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x0001000d224c(&lStack_50);
  if (lStack_50 != 0) {
    func_0x000107c41058(lStack_50);
    func_0x000107c615e8(lStack_50);
    lVar1 = _DAT_112e935f0;
    if (0.01 < ABS(param_1 - *(double *)(unaff_x20 + _DAT_112e935f0))) {
      lStack_50 = 0;
      uStack_48 = 0xe000000000000000;
      func_0x000107c602fc(0x42);
      uVar2 = 0x800000010f096a20;
      func_0x000107c5fb78(0xd000000000000039,0x800000010f096a20);
      func_0x000107c5fdd8(*(undefined8 *)(unaff_x20 + lVar1));
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar2);
      uVar2 = 0xe400000000000000;
      func_0x000107c5fb78(0x203e2d20,0xe400000000000000);
      func_0x000107c5fdd8(param_1);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar2);
      func_0x000107c5fb78(0x29,0xe100000000000000);
      func_0x000107c6142c(uStack_48);
      *(double *)(unaff_x20 + lVar1) = param_1;
      FUN_1023cdeac();
    }
  }
  return;
}



/* Entry: 1023cf8a0; end: 1023cfa6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1023cf8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  long lStack_98;
  long lStack_90;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined **ppuStack_68;
  
  lVar3 = param_7;
  func_0x000107c614f0();
  uVar4 = 0;
  FUN_1023c9070();
  ppuStack_68 = &PTR_DAT_1104fe280;
  lVar1 = param_7 + _DAT_112e93290;
  *(undefined8 *)(lVar1 + 8) = 0;
  auStack_88[0] = param_6;
  uStack_70 = uVar4;
  func_0x000107c61614(lVar1,0);
  lVar1 = _DAT_112e932b0;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_7 + lVar1) = uVar4;
  lVar1 = _DAT_112e932b8;
  puVar5 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_7 + lVar1) = puVar5;
  lVar1 = _DAT_112e932c0;
  puVar5 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_7 + lVar1) = puVar5;
  *(undefined8 *)(param_7 + _DAT_112e932c8) = 0;
  *(undefined8 *)(param_7 + _DAT_112e932d0) = 0;
  *(undefined8 *)(param_7 + _DAT_112e932d8) = 0;
  *(undefined8 *)(param_7 + _DAT_112e932e0) = 0;
  puVar5 = PTR__kCMTimeInvalid_110348648;
  puVar2 = (undefined8 *)(param_7 + _DAT_112e932e8);
  uVar4 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
  *puVar2 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  puVar2[1] = *(undefined8 *)(puVar5 + 8);
  puVar2[2] = uVar4;
  *(undefined1 *)(param_7 + _DAT_112e932f0) = 0;
  puVar2 = (undefined8 *)(param_7 + _DAT_112e93298);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  puVar2[3] = param_4;
  func_0x0001023d00d0(param_5,param_7 + _DAT_112e932a0);
  func_0x0001023d00d0(auStack_88,param_7 + _DAT_112e932a8);
  plVar6 = &lStack_98;
  lStack_98 = param_7;
  lStack_90 = lVar3;
  func_0x000107c61154(plVar6,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x0001000834e4(param_5);
  func_0x0001000834e4(auStack_88);
  return plVar6;
}



/* Entry: 1023cfa70; end: 1023cfb47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023cfa70(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lStack_38;
  
  FUN_1023cc558();
  if (param_1 != 0) {
    func_0x000107c41864();
    func_0x000107c61170(param_1);
  }
  FUN_1023cf12c(0);
  FUN_1023cdeac();
  lVar1 = *(long *)(unaff_x20 + _DAT_112e93578);
  func_0x000107c4f1e4();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5d6dc();
    func_0x000107c615e8(lVar1);
  }
  lVar1 = unaff_x20 + _DAT_112e93540;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c3f5b8();
    func_0x000107c615e8(lVar1);
    if (lVar2 == 1) {
      func_0x0001000d224c(&lStack_38);
      if (lStack_38 != 0) {
        func_0x000107c5d57c(lStack_38);
        func_0x000107c615e8(lStack_38);
      }
    }
  }
  return;
}



/* Entry: 1023cfb48; end: 1023cfcaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023cfb48(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  uVar1 = param_1;
  FUN_1023cce30();
  if ((uVar1 & 1) != 0) {
    lVar2 = unaff_x20 + _DAT_112e93540;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar5 = lVar2;
      func_0x000107c3f5b8();
      if (lVar5 == 0) {
        lVar5 = unaff_x20 + _DAT_112e935b0;
        func_0x000107c61428(lVar5,auStack_78,0,0);
        lVar3 = *(long *)(lVar5 + 0x18);
        if (lVar3 != 0) {
          lVar4 = *(long *)(lVar5 + 0x20);
          func_0x0001000a8868(lVar5,lVar3);
          lVar5 = *(long *)(lVar3 + -8);
          (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
          (**(code **)(lVar5 + 0x10))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
          (**(code **)(lVar4 + 0x28))(lVar3,lVar4);
          (**(code **)(lVar5 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
        }
        func_0x000107c5e844(param_1);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c5e840(param_1);
        func_0x000107c61180();
        func_0x000107c61170();
      }
      func_0x000107c3f5b8(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1023cfcb0; end: 1023d0043;  */

/* WARNING: Possible PIC construction at 0x0001023cfd08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023cfd0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023cfcb0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  FUN_1023cc558();
  if (param_1 == 0) {
    return;
  }
  lVar2 = param_1;
  FUN_1023cee50();
  if (lVar2 != 0) {
    if (SCARRY8(*(long *)(unaff_x20 + _DAT_112e935e0),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023cfd3c);
      (*pcVar1)();
    }
    *(long *)(unaff_x20 + _DAT_112e935e0) = *(long *)(unaff_x20 + _DAT_112e935e0) + 1;
    FUN_1023cf12c(1);
    func_0x000107c3e2c0(param_1,param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023d0044; end: 1023d0087;  */

void FUN_1023d0044(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x18) == '\0') {
    uVar1 = 0x3ff0000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1023d0088; end: 1023d0113;  */

undefined8 FUN_1023d0088(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1023d0114; end: 1023d0123;  */

void FUN_1023d0114(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1023d0124; end: 1023d013b;  */

void FUN_1023d0124(void)

{
  FUN_1023ce2d4();
  return;
}



/* Entry: 1023d013c; end: 1023d014b;  */

void FUN_1023d013c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x3e);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  uVar1 = 0;
  func_0x000107c60714(uVar2,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0xd000000000000039,0x800000010f0967f0);
  uVar1 = 0x112d393f0;
  uStack_48 = param_1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_48,&uStack_40,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_38);
  return;
}



/* Entry: 1023d014c; end: 1023d019b;  */

void FUN_1023d014c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c5a03c(uVar1,param_2,&uStack_50);
  func_0x000107c526c0(0x3ff0000000000000,uVar1);
  return;
}



/* Entry: 1023d019c; end: 1023d01b3;  */

void FUN_1023d019c(void)

{
  FUN_1023cf5c8();
  return;
}



/* Entry: 1023d01b4; end: 1023d023b;  */

undefined8 FUN_1023d01b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x28))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1023d023c; end: 1023d027b;  */

void FUN_1023d023c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1023cf770();
    func_0x000107c61170(lVar1);
  }
  return;
}


