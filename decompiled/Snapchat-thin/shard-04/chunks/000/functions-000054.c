/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103041128; end: 10304114b; +[SCTinselUtility pieExternalContentReferenceSourceFrom:] */

undefined4 FUN_103041128(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 6) {
    return *(undefined4 *)(&UNK_10db7dd78 + (param_3 - 1U) * 4);
  }
  return 0;
}



/* Entry: 10304114c; end: 103041187; -[SCTinselUtility init] */

void FUN_10304114c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_1030411f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103041188; end: 1030411b7;  */

void FUN_103041188(void)

{
  FUN_1030411f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030411b8; end: 1030411ef;  */

undefined8 FUN_1030411b8(int param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = param_1 - 1;
  if ((uVar2 < 6) && ((0x27U >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
    return *(undefined8 *)(&UNK_10db7dd90 + (ulong)uVar2 * 8);
  }
  uVar1 = 5;
  if (param_1 != 7) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1030411f0; end: 10304120f;  */

void FUN_1030411f0(void)

{
  func_0x000107c61168(&PTR_PTR_1128b1968);
  return;
}



/* Entry: 103041210; end: 1030413db;  */

void FUN_103041210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_12;
  *(undefined8 *)(unaff_x20 + 0x58) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = param_14;
  *(undefined8 *)(unaff_x20 + 0x68) = param_13;
  *(undefined8 *)(unaff_x20 + 0x80) = param_16;
  *(undefined8 *)(unaff_x20 + 0x78) = param_15;
  *(undefined8 *)(unaff_x20 + 0x90) = param_18;
  *(undefined8 *)(unaff_x20 + 0x88) = param_17;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_20;
  *(undefined8 *)(unaff_x20 + 0x98) = param_19;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_22;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_21;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_23;
  return;
}



/* Entry: 1030413dc; end: 1030414bb;  */

void FUN_1030413dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_110600c28;
  func_0x000107c613fc(&UNK_110600c28,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcStack_40 = FUN_103041548;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_103041de0;
  puStack_48 = &UNK_110600c40;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000100327980(0);
  func_0x000107c610f8();
  func_0x000103967e28(puVar1);
  return;
}



/* Entry: 1030414bc; end: 103041547;  */

void FUN_1030414bc(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_38 [24];
  
  puVar1 = &UNK_110600c28;
  func_0x000107c613fc(&UNK_110600c28,0x18,7);
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  func_0x000107c61644(puVar1 + 0x10,param_1);
  func_0x000107c61574();
  func_0x000103042218();
  func_0x000107c613fc();
  *(code **)(param_1 + 0x10) = FUN_103042238;
  *(undefined **)(param_1 + 0x18) = puVar1;
  return;
}



/* Entry: 103041548; end: 10304154f;  */

void FUN_103041548(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = &UNK_110600c28;
  func_0x000107c613fc(&UNK_110600c28,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  func_0x000107c61644(puVar1 + 0x10,lVar2);
  func_0x000107c61574();
  func_0x000103042218();
  func_0x000107c613fc();
  *(code **)(lVar2 + 0x10) = FUN_103042238;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  return;
}



/* Entry: 103041550; end: 103041ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103041550(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  char *pcVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long extraout_x8;
  undefined8 uVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 auStack_270 [7];
  byte abStack_238 [8];
  long alStack_230 [18];
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  char *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  char *pcStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e4;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  char *pcStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [56];
  
  puVar3 = (undefined8 *)0x0;
  uStack_f0 = param_2;
  uStack_e4 = param_3;
  uStack_a0 = param_1;
  func_0x000107c5f804();
  lVar20 = puVar3[-1];
  puStack_118 = puVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  puStack_140 = puVar3;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000033;
  func_0x0001000a9a18(0xd000000000000033,0x800000010f11aec0);
  uStack_148 = uVar5;
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083f78);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x90);
  func_0x000107c61174();
  uStack_f8 = uVar4;
  func_0x000107c51ce4();
  func_0x000107c61180();
  pcVar6 = *(char **)(unaff_x20 + 0x58);
  uStack_b8 = uVar5;
  func_0x000107c5db24();
  func_0x000107c61180();
  lVar7 = *(long *)(unaff_x20 + 0x18);
  pcStack_b0 = pcVar6;
  func_0x000107c410f8();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_113077440);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_113077450);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x38);
  lStack_100 = lVar7;
  func_0x000107c61174();
  uStack_108 = uVar4;
  func_0x000107c61174();
  uVar4 = uVar18;
  uStack_110 = uVar5;
  func_0x000107c5da30();
  func_0x000107c61180();
  uStack_c8 = uVar4;
  func_0x000107c4f3e4();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_d0 = uVar18;
  func_0x000107c3e550();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_d8 = uVar4;
  func_0x000107c51d3c();
  func_0x000107c61180();
  lVar7 = *(long *)(unaff_x20 + 0x50);
  uStack_c0 = uVar5;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar8 = *(long *)(unaff_x20 + 0x68);
  lStack_a8 = lVar7;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_11302d2e8);
  uVar17 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_112ff2c78);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x70);
  lStack_e0 = lVar8;
  func_0x000107c61174();
  uStack_120 = uVar4;
  func_0x000107c61174();
  func_0x000107c42e5c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x80) + _DAT_11302e640);
  func_0x000107c61174();
  func_0x000107c4ec80();
  func_0x000107c61180();
  puVar3 = puStack_118;
  puStack_128 = (undefined *)uVar4;
  (**(code **)(lVar20 + 0x68))
            (auStack_1a0 + lVar1,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
             puStack_118);
  puVar10 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd000000000000055;
  func_0x000107c5fadc(0xd000000000000055,0x800000010f11af00);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar20 + 8))(auStack_1a0 + lVar1,puVar3);
  puVar11 = &UNK_110600ca0;
  uVar16 = 0xb0;
  func_0x000107c613fc(&UNK_110600ca0,0xb0,7);
  uVar21 = uStack_f8;
  uVar18 = uStack_108;
  uVar5 = uStack_110;
  uVar4 = uStack_120;
  puVar12 = puStack_128;
  *(long *)(puVar11 + 0x10) = lStack_100;
  *(undefined8 *)(puVar11 + 0x18) = uVar17;
  *(undefined8 *)(puVar11 + 0x20) = uStack_108;
  *(undefined8 *)(puVar11 + 0x28) = uStack_110;
  *(undefined8 *)(puVar11 + 0x30) = uStack_120;
  *(undefined8 *)(puVar11 + 0x38) = uStack_c8;
  *(undefined8 *)(puVar11 + 0x40) = uStack_d0;
  *(undefined8 *)(puVar11 + 0x48) = uStack_d8;
  *(undefined8 *)(puVar11 + 0x50) = uStack_c0;
  *(undefined8 *)(puVar11 + 0x58) = uVar19;
  *(undefined8 *)(puVar11 + 0x60) = uVar9;
  *(undefined8 *)(puVar11 + 0x68) = uStack_b8;
  *(undefined **)(puVar11 + 0x70) = puStack_128;
  puVar11[0x78] = (char)uStack_e4;
  *(undefined8 *)(puVar11 + 0x80) = uStack_f8;
  *(char **)(puVar11 + 0x88) = pcStack_b0;
  *(long *)(puVar11 + 0x90) = lStack_a8;
  *(undefined8 *)(puVar11 + 0x98) = uStack_f0;
  *(undefined8 *)(puVar11 + 0xa0) = uStack_a0;
  *(undefined **)(puVar11 + 0xa8) = puVar10;
  uStack_138 = uVar17;
  puStack_130 = puVar10;
  puStack_118 = (undefined8 *)uVar19;
  if (lStack_100 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103041dd4);
    (*pcVar2)();
  }
  if (lStack_e0 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103041dd8);
    (*pcVar2)();
  }
  pcStack_150 = *(char **)(unaff_x20 + 0x98);
  lVar20 = *(long *)(unaff_x20 + 0x60);
  lVar7 = lStack_100;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uStack_108 = uVar18;
  func_0x000107c61174();
  uStack_110 = uVar5;
  func_0x000107c61174();
  uVar5 = uStack_138;
  uStack_120 = uVar4;
  func_0x000107c61174();
  uStack_f8 = uVar5;
  func_0x000107c61174();
  uStack_138 = uVar9;
  func_0x000107c61174();
  uVar4 = uStack_c8;
  lStack_100 = lVar7;
  func_0x000107c61174();
  uVar5 = uStack_d0;
  func_0x000107c61174();
  uVar18 = uStack_d8;
  uStack_c8 = uVar5;
  func_0x000107c61174();
  uStack_d0 = uVar18;
  func_0x000107c61174();
  puVar3 = puStack_118;
  func_0x000107c61174();
  uVar5 = uStack_b8;
  uStack_d8 = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  pcVar6 = pcStack_b0;
  uStack_b8 = puVar12;
  func_0x000107c61174();
  func_0x000107c61434(uStack_a0);
  puVar12 = puStack_130;
  func_0x000107c61174();
  pcVar13 = pcStack_150;
  puStack_128 = puVar12;
  func_0x000107c61174();
  lVar8 = lStack_e0;
  puStack_118 = (undefined8 *)pcVar13;
  func_0x000107c61174();
  lVar7 = lStack_a8;
  pcStack_b0 = (char *)lVar8;
  func_0x000107c615f0(lStack_a8);
  func_0x000107c44574();
  func_0x000107c61180();
  if (lVar20 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103041ddc);
    (*pcVar2)();
  }
  uStack_168 = *(undefined8 *)(*(long *)(unaff_x20 + 0x78) + _DAT_113041e50);
  uVar18 = *(undefined8 *)(*(long *)(unaff_x20 + 0x78) + _DAT_113041e48);
  puStack_130 = (undefined *)uVar4;
  func_0x000107c615f0();
  uStack_170 = uVar18;
  func_0x000107c615f0(uVar18);
  uVar4 = uVar21;
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar18 = uVar4;
  func_0x000107c5faec();
  uStack_180 = uVar16;
  uStack_178 = uVar18;
  func_0x000107c61170(uVar4);
  pcStack_150 = pcVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  pcVar13 = pcVar6;
  func_0x000107c41050();
  func_0x000107c61180();
  func_0x000107c61170(pcVar6);
  if (pcVar13 == (char *)0x0) {
    FUN_103042558(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    pcVar13 = "";
    uVar16 = 0;
    func_0x000107c60124("",0,2);
  }
  pcVar6 = pcVar13;
  lStack_160 = lVar20;
  uStack_158 = uVar5;
  lStack_e0 = uVar21;
  func_0x000107c5faec();
  uStack_190 = uVar16;
  pcStack_188 = pcVar6;
  func_0x000107c61170();
  func_0x00010697a2c8();
  func_0x000107c61180();
  puVar12 = &UNK_110600cc8;
  func_0x000107c613fc(&UNK_110600cc8,0x18,7);
  *(char **)(puVar12 + 0x10) = pcVar13;
  if (lVar7 != 0) {
    uVar21 = *(undefined8 *)(*(long *)(unaff_x20 + 0xa0) + _DAT_11302cb28);
    uVar17 = *(undefined8 *)(*(long *)(unaff_x20 + 0xa8) + _DAT_11302cb58);
    uVar4 = *(undefined8 *)(unaff_x20 + 0xb8);
    uVar19 = *(undefined8 *)(*(long *)(unaff_x20 + 0xb0) + _DAT_11302cb98);
    FUN_10304e6a8(0);
    func_0x000107c610f8();
    uVar18 = uStack_a0;
    func_0x000107c61434(uStack_a0);
    puVar10 = puStack_128;
    puVar14 = puStack_128;
    func_0x000107c61174();
    puStack_198 = puVar14;
    func_0x000107c615f0(lVar7);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(uVar17);
    func_0x000107c6157c(uVar19);
    uVar5 = uStack_158;
    *(undefined8 *)((long)alStack_230 + lVar1 + 0x78) = uVar19;
    *(undefined8 *)((long)alStack_230 + lVar1 + 0x80) = uVar5;
    *(undefined8 *)((long)alStack_230 + lVar1 + 0x68) = uVar21;
    *(undefined8 *)((long)alStack_230 + lVar1 + 0x70) = uVar17;
    *(code **)((long)alStack_230 + lVar1 + 0x58) = FUN_1030422c4;
    *(undefined **)((long)alStack_230 + lVar1 + 0x60) = puVar11;
    *(undefined **)((long)alStack_230 + lVar1 + 0x50) = puVar10;
    uVar5 = uStack_f0;
    *(undefined8 *)((long)alStack_230 + lVar1 + 0x40) = uVar18;
    *(undefined8 *)((long)alStack_230 + lVar1 + 0x48) = uVar5;
    *(code **)((long)alStack_230 + lVar1 + 0x20) = FUN_103042550;
    *(undefined **)((long)alStack_230 + lVar1 + 0x28) = puVar12;
    *(undefined8 *)((long)alStack_230 + lVar1 + 0x18) = uStack_190;
    *(char **)((long)alStack_230 + lVar1 + 0x10) = pcStack_188;
    *(undefined8 *)((long)alStack_230 + lVar1 + 8) = uStack_180;
    *(undefined8 *)((long)alStack_230 + lVar1) = uStack_178;
    abStack_238[lVar1] = (byte)uStack_e4 & 1;
    *(undefined8 *)((long)auStack_270 + lVar1 + 0x30) = uStack_138;
    *(undefined8 *)((long)auStack_270 + lVar1 + 0x28) = uStack_170;
    *(undefined8 *)((long)auStack_270 + lVar1 + 0x20) = uStack_168;
    *(undefined8 *)((long)auStack_270 + lVar1 + 0x18) = uStack_d8;
    *(undefined8 *)((long)auStack_270 + lVar1 + 0x10) = uStack_c0;
    *(long *)((long)alStack_230 + lVar1 + 0x30) = lVar7;
    *(undefined8 *)((long)alStack_230 + lVar1 + 0x38) = uVar4;
    *(undefined8 *)((long)auStack_270 + lVar1 + 8) = uStack_d0;
    *(undefined8 *)((long)auStack_270 + lVar1) = uStack_c8;
    pcVar6 = pcStack_b0;
    lVar1 = lStack_100;
    puVar15 = puStack_118;
    func_0x000103043a98(puStack_118,lStack_100,pcStack_b0,uStack_108,uStack_110,lStack_160,
                        uStack_120,puStack_130);
    func_0x000107c61170(pcVar6);
    func_0x000107c61170(puStack_198);
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(pcStack_150);
    func_0x000107c61170(lStack_e0);
    func_0x000107c61170(uStack_b8);
    func_0x000107c61170(uStack_f8);
    func_0x000107c61170(lVar1);
    puVar3 = puStack_140;
    func_0x000107c61428(puStack_140,auStack_98,0,0);
    uVar4 = *puVar3;
    func_0x000107c61174(uVar4);
    func_0x0001000aa0a8(uStack_148);
    func_0x000107c61170(uVar4);
    return puVar15;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103041de0);
  (*pcVar2)();
}



/* Entry: 103041de0; end: 103041e17;  */

void FUN_103041de0(long param_1)

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



/* Entry: 103041e18; end: 103041e33;  */

void FUN_103041e18(long param_1,long param_2)

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



/* Entry: 103041e34; end: 103042077;  */

/* WARNING: Possible PIC construction at 0x000103041e40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103041e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103041e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103041e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103041e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103041e90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103041ea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103041eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103041ec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103041ed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103041ee0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103041ed4) */
/* WARNING: Removing unreachable block (ram,0x000103041ec4) */
/* WARNING: Removing unreachable block (ram,0x000103041eb4) */
/* WARNING: Removing unreachable block (ram,0x000103041ea4) */
/* WARNING: Removing unreachable block (ram,0x000103041e94) */
/* WARNING: Removing unreachable block (ram,0x000103041e84) */
/* WARNING: Removing unreachable block (ram,0x000103041e74) */
/* WARNING: Removing unreachable block (ram,0x000103041e64) */
/* WARNING: Removing unreachable block (ram,0x000103041e54) */
/* WARNING: Removing unreachable block (ram,0x000103041e44) */
/* WARNING: Removing unreachable block (ram,0x000103041ee4) */

void FUN_103041e34(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103042078; end: 10304215f;  */

void FUN_103042078(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_110600c28;
  func_0x000107c613fc(&UNK_110600c28,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uStack_40 = 0x1030425ac;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_103041de0;
  puStack_48 = &UNK_110600c68;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000100327980(0);
  func_0x000107c610f8();
  func_0x000103967e28();
  *param_1 = puVar1;
  return;
}



/* Entry: 103042160; end: 1030421f3; -[_TtC48RankedPostableContentDestinationsServiceProviderP33_2AE5902777E6896677B4AFE527BDC44554ClosureRankedPostableContentDestinationsServiceFactory createServiceWithPreSelectedItems:snapSource:isEligibleForSpotlight:] */

void FUN_103042160(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  FUN_103042558(0,0x112d60fb0,&PTR_PTR_1126b3568);
  func_0x000107c5fc54(param_3,uVar2);
  pcVar1 = *(code **)(param_1 + 0x10);
  func_0x000107c6157c(param_1);
  uVar2 = param_3;
  (*pcVar1)(param_3,param_4,param_5);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1030421f4; end: 103042237;  */

void FUN_1030421f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103042238; end: 1030422c3;  */

undefined8 FUN_103042238(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    FUN_103041550(param_1,param_2,param_3 & 1);
    func_0x000107c61574(lVar1);
  }
  return param_1;
}



/* Entry: 1030422c4; end: 10304254f;  */

undefined * FUN_1030422c4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103042544);
    (*pcVar2)();
  }
  lVar1 = *(long *)(unaff_x20 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x20 + 0xa0);
  lVar4 = *(long *)(unaff_x20 + 0x80);
  puVar5 = *(undefined **)(unaff_x20 + 0x88);
  func_0x000107c61174();
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c41050();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar9 = 0x112d72d80;
  puStack_98 = puVar6;
  func_0x0001000285a8(0x112d72d80,&UNK_10d9331d0);
  ppuVar7 = &puStack_98;
  func_0x000107c5fb18(ppuVar7,uVar9);
  ppuVar8 = ppuVar7;
  func_0x00010697a2c8();
  func_0x000107c61180();
  puVar5 = &UNK_110600cf0;
  func_0x000107c613fc(&UNK_110600cf0,0x18,7);
  *(undefined ***)(puVar5 + 0x10) = ppuVar8;
  if (lVar1 != 0) {
    puVar6 = PTR_PTR_1126aca98;
    func_0x000107c610f8(PTR_PTR_1126aca98);
    func_0x000107c615f0(lVar1);
    func_0x000107c5fadc(ppuVar7,uVar9);
    func_0x000107c6142c(uVar9);
    uStack_78 = 0x1030425a8;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1029bea64;
    puStack_80 = &UNK_110600d08;
    ppuVar8 = &puStack_98;
    puStack_70 = puVar5;
    func_0x000107c60bc4();
    uVar9 = 0;
    FUN_103042558(0,0x112d60fb0,&PTR_PTR_1126b3568);
    func_0x000107c5fc48(uVar10,uVar9);
    func_0x000107c4632c(puVar6);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar10);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(ppuVar7);
    func_0x000107c61170(lVar4);
    func_0x000107c615e8(lVar1);
    func_0x000107c61574(puStack_70);
    return puVar6;
  }
  func_0x000107c61170(lVar4);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103042550);
  (*pcVar2)();
}



/* Entry: 103042550; end: 103042557;  */

long FUN_103042550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = 0;
  func_0x0001029beb34(0,0x112e3c238,&PTR_PTR_1126c51c8);
  func_0x000107c5fc48(param_1,uVar1);
  func_0x000107c5fadc(param_2,param_3);
  (**(code **)(lVar2 + 0x10))(lVar2,param_1,param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5fc54(lVar2,uVar1);
    func_0x000107c61170(lVar2);
  }
  return lVar3;
}



/* Entry: 103042558; end: 103042597;  */

void FUN_103042558(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103042598; end: 1030427b3;  */

void FUN_103042598(long param_1,long param_2)

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



/* Entry: 1030427b4; end: 10304285b;  */

void FUN_1030427b4(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_103042848;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_103042848:
  func_0x000107c6142c();
  *param_1 = uVar7;
  return;
}



/* Entry: 10304285c; end: 1030428d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10304285c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f35b28;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f35b28);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    (**(code **)(unaff_x20 + _DAT_112f35d08))(((undefined8 *)(unaff_x20 + _DAT_112f35d08))[1]);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar4);
    lVar3 = 0;
  }
  func_0x000107c615f0(lVar3);
  return lVar2;
}



/* Entry: 1030428d4; end: 103044c5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1030428d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,long param_15,byte param_16,undefined4 param_17
             ,undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
             undefined8 param_22,undefined8 param_23,undefined8 param_24,undefined8 param_25,
             undefined8 param_26,undefined8 param_27,long param_28,undefined8 param_29,
             undefined8 param_30,undefined8 param_31,undefined8 param_32,undefined8 param_33,
             undefined8 param_34)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  long extraout_x8;
  long unaff_x20;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_210 [8];
  undefined1 *puStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  uint uStack_1b4;
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
  long lStack_160;
  long lStack_158;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  uStack_168 = param_31;
  lStack_160 = param_28;
  uStack_170 = param_29;
  uStack_178 = param_27;
  uStack_180 = param_26;
  uStack_188 = param_25;
  uStack_190 = param_22;
  uStack_198 = param_21;
  uStack_1a0 = param_20;
  uStack_1a8 = param_19;
  uStack_1b0 = param_18;
  uStack_1b4 = (uint)param_16;
  uStack_1e8 = param_12;
  uStack_1f0 = param_11;
  lVar3 = 0;
  uStack_1d8 = param_1;
  uStack_1d0 = param_2;
  uStack_1c8 = param_3;
  uStack_1c0 = param_4;
  func_0x000107c5f804();
  lStack_200 = *(long *)(lVar3 + -8);
  lStack_1f8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_200 + 0x40));
  puStack_208 = auStack_210 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f35b28) = 0;
  lStack_158 = _DAT_112f35b30;
  *(undefined8 *)(unaff_x20 + _DAT_112f35b30) = 0;
  lVar3 = _DAT_112f35b38;
  uVar4 = 0;
  func_0x0001000c6560();
  uVar6 = uVar4;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar6;
  lVar3 = _DAT_112f35b40;
  func_0x000107c613fc(uVar4,0x20,7);
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
  lVar3 = _DAT_112f35b48;
  uVar4 = 0;
  func_0x0001005f60b4();
  uVar6 = uVar4;
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar6;
  lVar3 = _DAT_112f35b50;
  uVar6 = uVar4;
  func_0x000107c613fc(uVar4,0x20,7);
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar6;
  lVar3 = _DAT_112f35b58;
  func_0x000107c613fc(uVar4,0x20,7);
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
  lVar7 = _DAT_112f35b60;
  puStack_d0 = (undefined *)((ulong)puStack_d0 & 0xffffffffffffff00);
  lVar3 = 0x112d61fd8;
  func_0x0001000285a8(0x112d61fd8,&UNK_10d927f90);
  func_0x000107c613fc();
  ppuVar5 = &puStack_d0;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar7) = ppuVar5;
  lVar7 = _DAT_112f35b68;
  puStack_d0._0_1_ = 1;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  ppuVar5 = &puStack_d0;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar7) = ppuVar5;
  lVar7 = _DAT_112f35b70;
  puStack_d0._0_1_ = 1;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  ppuVar5 = &puStack_d0;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar7) = ppuVar5;
  lVar7 = _DAT_112f35b78;
  puStack_d0._0_1_ = 0;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  ppuVar5 = &puStack_d0;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar7) = ppuVar5;
  lVar7 = _DAT_112f35b80;
  puStack_d0 = (undefined *)CONCAT71(puStack_d0._1_7_,1);
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  ppuVar5 = &puStack_d0;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar7) = ppuVar5;
  lVar7 = _DAT_112f35b88;
  func_0x0001000285a8(0x112d79ad0,&UNK_10d9392c0);
  func_0x000107c613fc();
  uVar6 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar7) = uVar6;
  lVar13 = _DAT_112f35b90;
  puStack_d0 = (undefined *)0x0;
  lStack_c8 = 0;
  lVar7 = 0x112f35ae0;
  func_0x0001000285a8(0x112f35ae0,&UNK_10db7def0);
  func_0x000107c613fc();
  ppuVar5 = &puStack_d0;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar13) = ppuVar5;
  lVar13 = _DAT_112f35b98;
  puStack_d0 = (undefined *)0x0;
  lStack_c8 = 0;
  func_0x000107c613fc(lVar7,*(undefined4 *)(lVar7 + 0x30),*(undefined2 *)(lVar7 + 0x34));
  ppuVar5 = &puStack_d0;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar13) = ppuVar5;
  lVar7 = _DAT_112f35ba0;
  uVar6 = 0x112de1320;
  func_0x0001000285a8(0x112de1320,&UNK_10d9a8f20);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar7) = uVar6;
  lVar7 = _DAT_112f35ba8;
  puStack_d0 = (undefined *)((ulong)puStack_d0 & 0xffffffffffffff00);
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  ppuVar5 = &puStack_d0;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar7) = ppuVar5;
  lVar13 = _DAT_112f35bb0;
  puStack_d0 = (undefined *)0x0;
  lVar7 = 0x112f35ae8;
  func_0x0001000285a8(0x112f35ae8,&UNK_10db7df00);
  func_0x000107c613fc();
  ppuVar5 = &puStack_d0;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar13) = ppuVar5;
  lVar13 = _DAT_112f35bb8;
  puStack_d0 = (undefined *)0x0;
  func_0x000107c613fc(lVar7,*(undefined4 *)(lVar7 + 0x30),*(undefined2 *)(lVar7 + 0x34));
  ppuVar5 = &puStack_d0;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar13) = ppuVar5;
  lVar13 = _DAT_112f35bc0;
  puStack_d0 = (undefined *)0x0;
  func_0x000107c613fc(lVar7,*(undefined4 *)(lVar7 + 0x30),*(undefined2 *)(lVar7 + 0x34));
  ppuVar5 = &puStack_d0;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar13) = ppuVar5;
  lVar7 = _DAT_112f35bc8;
  puStack_d0 = (undefined *)((ulong)puStack_d0 & 0xffffffffffffff00);
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  ppuVar5 = &puStack_d0;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar7) = ppuVar5;
  *(undefined1 *)(unaff_x20 + _DAT_112f35bd0) = 0;
  lVar7 = _DAT_112f35bd8;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010304df80();
  *(undefined **)(unaff_x20 + lVar7) = puVar8;
  lVar7 = _DAT_112f35be0;
  uVar4 = 0;
  func_0x00010006a340();
  uVar6 = uVar4;
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar7) = uVar6;
  lVar7 = _DAT_112f35be8;
  puVar8 = puVar9;
  func_0x00010304df80();
  *(undefined **)(unaff_x20 + lVar7) = puVar8;
  lVar7 = _DAT_112f35bf0;
  func_0x000107c613fc(uVar4,0x18,7);
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar7) = uVar4;
  lVar7 = _DAT_112f35bf8;
  func_0x0001000285a8(0x112f35af0,&UNK_10db7df08);
  func_0x000107c613fc();
  uVar6 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar7) = uVar6;
  lVar7 = _DAT_112f35c00;
  puStack_d0 = (undefined *)0x0;
  func_0x0001000285a8(0x112f35af8,&UNK_10db7df10);
  func_0x000107c613fc();
  ppuVar5 = &puStack_d0;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar7) = ppuVar5;
  lVar13 = _DAT_112f35c08;
  puStack_d0 = (undefined *)0x0;
  lVar7 = 0x112f35b00;
  func_0x0001000285a8(0x112f35b00,&UNK_10db7df18);
  func_0x000107c613fc();
  ppuVar5 = &puStack_d0;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar13) = ppuVar5;
  lVar13 = _DAT_112f35c10;
  puStack_d0 = (undefined *)0x0;
  func_0x000107c613fc(lVar7,*(undefined4 *)(lVar7 + 0x30),*(undefined2 *)(lVar7 + 0x34));
  ppuVar5 = &puStack_d0;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar13) = ppuVar5;
  lVar7 = _DAT_112f35c18;
  func_0x0001001830b8();
  puStack_d0 = puVar9;
  func_0x0001000285a8(0x112e59b38,&UNK_10da5e730);
  func_0x000107c613fc();
  ppuVar5 = &puStack_d0;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar7) = ppuVar5;
  lStack_1e0 = _DAT_112f35c20;
  *(undefined8 *)(unaff_x20 + _DAT_112f35c20) = 0;
  lVar7 = _DAT_112f35c28;
  func_0x0001000285a8(0x112f35b08,&UNK_10db7df28);
  func_0x000107c613fc();
  uVar6 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar7) = uVar6;
  lVar7 = _DAT_112f35c30;
  puStack_d0 = (undefined *)0x3;
  func_0x0001000285a8(0x112f35b10,&UNK_10db7df30);
  func_0x000107c613fc();
  ppuVar5 = &puStack_d0;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar7) = ppuVar5;
  lVar7 = _DAT_112f35c38;
  func_0x0001000285a8(0x112f35b18,&UNK_10db7df38);
  func_0x000107c613fc();
  uVar6 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar7) = uVar6;
  lVar7 = _DAT_112f35c40;
  puStack_d0 = (undefined *)0x0;
  lStack_c8 = CONCAT71(lStack_c8._1_7_,1);
  func_0x0001000285a8(0x112f35b20,&UNK_10db7df40);
  func_0x000107c613fc();
  ppuVar5 = &puStack_d0;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar7) = ppuVar5;
  lVar7 = _DAT_112f35c48;
  puStack_d0 = (undefined *)((ulong)puStack_d0 & 0xffffffffffffff00);
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  ppuVar5 = &puStack_d0;
  func_0x00010042e6a0();
  uVar12 = uStack_168;
  uVar11 = uStack_188;
  uVar10 = uStack_1c0;
  uVar15 = uStack_1c8;
  uVar4 = uStack_1d0;
  uVar6 = uStack_1d8;
  *(undefined ***)(unaff_x20 + lVar7) = ppuVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112f35c50) = uStack_1d8;
  *(undefined8 *)(unaff_x20 + _DAT_112f35c58) = uStack_1d0;
  *(undefined8 *)(unaff_x20 + _DAT_112f35c60) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + _DAT_112f35c68) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + _DAT_112f35c70) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f35c78) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f35c80) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f35c88) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f35c90) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112f35c98) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112f35ca0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112f35ca8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112f35cb0) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112f35cb8) = param_14;
  *(long *)(unaff_x20 + _DAT_112f35cc0) = param_15;
  *(char *)(unaff_x20 + _DAT_112f35cc8) = (char)uStack_1b4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f35cd0);
  *puVar1 = uStack_1b0;
  puVar1[1] = uStack_1a8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f35cd8);
  *puVar1 = uStack_1a0;
  puVar1[1] = uStack_198;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f35ce0);
  *puVar1 = uStack_190;
  puVar1[1] = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_112f35ce8) = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_112f35cf0) = uStack_188;
  *(undefined8 *)(unaff_x20 + _DAT_112f35cf8) = uStack_180;
  *(undefined8 *)(unaff_x20 + _DAT_112f35d00) = uStack_178;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f35d08);
  *puVar1 = uStack_170;
  puVar1[1] = param_30;
  *(undefined8 *)(unaff_x20 + _DAT_112f35d10) = uStack_168;
  *(undefined8 *)(unaff_x20 + _DAT_112f35d18) = param_32;
  func_0x000107c615f0();
  func_0x000107c61174();
  uStack_1a0 = uVar6;
  func_0x000107c61174();
  uStack_198 = uVar4;
  func_0x000107c61174();
  uStack_190 = uVar15;
  func_0x000107c61174();
  uStack_180 = uVar10;
  func_0x000107c61174();
  uStack_178 = param_5;
  func_0x000107c61174();
  uStack_170 = param_6;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = uStack_1f0;
  func_0x000107c61174();
  uVar6 = uStack_1e8;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(param_23);
  func_0x000107c615f0(param_24);
  func_0x000107c61174(uVar11);
  func_0x000107c6157c(param_30);
  func_0x000107c61174();
  func_0x000107c6157c(param_32);
  func_0x000107c615f0(param_13);
  func_0x0001000d224c(&puStack_d0);
  lVar3 = lStack_c8;
  puVar9 = puStack_d0;
  func_0x000107c614f0(puStack_d0);
  (**(code **)(lVar3 + 8))(&uStack_90);
  func_0x000107c615e8(puVar9);
  lVar13 = lStack_160;
  lVar7 = lStack_1f8;
  lVar3 = lStack_200;
  puVar16 = puStack_208;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f35d20);
  puVar1[1] = uStack_88;
  *puVar1 = uStack_90;
  puVar1[3] = uStack_78;
  puVar1[2] = uStack_80;
  *(undefined1 *)(puVar1 + 4) = uStack_70;
  *(undefined8 *)(unaff_x20 + _DAT_112f35d28) = param_33;
  *(undefined8 *)(unaff_x20 + _DAT_112f35d30) = param_34;
  if (lStack_160 == 0) {
    uStack_168 = uVar12;
    (**(code **)(lStack_200 + 0x68))
              (puStack_208,
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
               lStack_1f8);
    puVar9 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    func_0x000107c6157c(param_33);
    func_0x000107c61174(param_34);
    uVar15 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010f11af60);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar15);
    uVar12 = uStack_168;
    (**(code **)(lVar3 + 8))(puVar16,lVar7);
    *(undefined **)(unaff_x20 + _DAT_112f35d38) = puVar9;
  }
  else {
    *(long *)(unaff_x20 + _DAT_112f35d38) = lStack_160;
    func_0x000107c6157c();
    func_0x000107c61174(param_34);
  }
  func_0x000107c615f0(param_24);
  func_0x000107c61174();
  uVar15 = param_24;
  lStack_160 = lVar13;
  func_0x000108060890();
  uVar17 = 0x10;
  if ((int)uVar15 == 0) {
    uVar17 = 0;
  }
  uVar15 = param_24;
  func_0x000108060914();
  uVar18 = uVar17 | 0x100;
  if ((int)uVar15 == 0) {
    uVar18 = uVar17;
  }
  uVar15 = param_24;
  func_0x000108f42234();
  func_0x000107c615e8(param_24);
  uVar17 = uVar18 | 0x200;
  if ((int)uVar15 == 0) {
    uVar17 = uVar18;
  }
  puVar9 = PTR_PTR_1126b1278;
  func_0x000107c61168();
  puVar8 = puVar9;
  func_0x000107c4f600();
  func_0x000107c61180();
  puVar14 = puVar8;
  func_0x00010067054c();
  func_0x000107c61170(puVar8);
  cVar2 = puVar14[_DAT_113046010];
  func_0x000107c61170(puVar14);
  if ((cVar2 != '\x01') || (uVar15 = param_24, func_0x000108f49618(param_24,0), (int)uVar15 != 0)) {
    uVar17 = uVar17 | 0x1000;
  }
  uVar15 = param_24;
  func_0x000108f496e0();
  uVar18 = uVar17 | 0x2000;
  if ((int)uVar15 == 0) {
    uVar18 = uVar17;
  }
  func_0x000107c61174(uVar11);
  uVar15 = param_24;
  func_0x000108f496f4(param_24,uVar11);
  uVar17 = uVar18 | 0x4000;
  if ((int)uVar15 == 0) {
    uVar17 = uVar18;
  }
  uVar15 = param_24;
  func_0x000108f497bc(param_24,uVar11);
  func_0x000107c61170(uVar11);
  uVar18 = uVar17 | 0x8000;
  if ((int)uVar15 == 0) {
    uVar18 = uVar17;
  }
  uVar15 = param_24;
  func_0x000108faa38c();
  uVar17 = uVar18;
  if ((int)uVar15 != 0) {
    func_0x000107c51d8c();
    func_0x000107c61180();
    puVar8 = puVar9;
    func_0x00010067054c();
    func_0x000107c61170(puVar9);
    cVar2 = puVar8[_DAT_113046010];
    func_0x000107c61170(puVar8);
    uVar17 = uVar18 | 0x10000;
    if (cVar2 == '\0') {
      uVar17 = uVar18;
    }
  }
  lVar3 = param_15;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar18 = uVar17;
  if (lVar3 != 0) {
    lVar7 = lVar3;
    func_0x000107c51ed0();
    func_0x000107c615e8(lVar3);
    uVar18 = uVar17 | 0x20000;
    if ((int)lVar7 == 0) {
      uVar18 = uVar17;
    }
  }
  *(ulong *)(unaff_x20 + _DAT_112f35d40) = uVar18;
  uVar15 = *(undefined8 *)(unaff_x20 + lStack_1e0);
  *(undefined8 *)(unaff_x20 + lStack_1e0) = 0;
  func_0x000107c61574(uVar15);
  uVar15 = *(undefined8 *)(unaff_x20 + lStack_158);
  *(undefined8 *)(unaff_x20 + lStack_158) = 0;
  func_0x000107c61574(uVar15);
  puVar16 = auStack_a0;
  func_0x000107c61154(puVar16,PTR_s_init_1125d9248);
  FUN_103044c5c();
  uVar15 = param_24;
  func_0x000108faa3a0();
  if ((int)uVar15 == 0) {
    FUN_10304522c();
    func_0x000107c61170(uStack_1a0);
    func_0x000107c61170(uStack_198);
    func_0x000107c61170(uStack_190);
    func_0x000107c61170(uStack_180);
    func_0x000107c61170(uStack_178);
    func_0x000107c61170(uStack_170);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar6);
    func_0x000107c615e8(param_13);
    func_0x000107c615e8(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61574(param_23);
    func_0x000107c615e8(param_24);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(lStack_160);
    func_0x000107c61574(param_30);
    func_0x000107c61170(uVar12);
    func_0x000107c61574(param_32);
    func_0x000107c61574(param_33);
  }
  else {
    uVar15 = *(undefined8 *)(puVar16 + _DAT_112f35d38);
    puVar9 = &UNK_110600e00;
    func_0x000107c613fc(&UNK_110600e00,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,puVar16);
    pcStack_b0 = FUN_10304e074;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1000f6b44;
    puStack_b8 = &UNK_110600e18;
    ppuVar5 = &puStack_d0;
    puStack_a8 = puVar9;
    func_0x000107c60bc4(ppuVar5);
    puVar9 = puStack_a8;
    func_0x000107c61174(uVar15);
    func_0x000107c61574(puVar9);
    func_0x000107c4e524(uVar15);
    func_0x000107c61170(uStack_1a0);
    func_0x000107c61170(uStack_198);
    func_0x000107c61170(uStack_190);
    func_0x000107c61170(uStack_180);
    func_0x000107c61170(uStack_178);
    func_0x000107c61170(uStack_170);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar6);
    func_0x000107c615e8(param_13);
    func_0x000107c615e8(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61574(param_23);
    func_0x000107c615e8(param_24);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(lStack_160);
    func_0x000107c61574(param_30);
    func_0x000107c61170(uVar12);
    func_0x000107c61574(param_32);
    func_0x000107c61574(param_33);
    func_0x000107c61170(param_34);
    func_0x000107c60bd0(ppuVar5);
    param_34 = uVar15;
  }
  func_0x000107c61170(param_34);
  return puVar16;
}



/* Entry: 103044c5c; end: 1030451d7;  */

/* WARNING: Possible PIC construction at 0x000103044d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103044e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103044ec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103044ef4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103044f2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103044f48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103044f80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103044f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103044fd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103045014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103045050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103045070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030450a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103045124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103045154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304517c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304518c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103045180) */
/* WARNING: Removing unreachable block (ram,0x000103045158) */
/* WARNING: Removing unreachable block (ram,0x0001030451c0) */
/* WARNING: Removing unreachable block (ram,0x000103045168) */
/* WARNING: Removing unreachable block (ram,0x000103045128) */
/* WARNING: Removing unreachable block (ram,0x0001030450a8) */
/* WARNING: Removing unreachable block (ram,0x000103045074) */
/* WARNING: Removing unreachable block (ram,0x000103045054) */
/* WARNING: Removing unreachable block (ram,0x000103045018) */
/* WARNING: Removing unreachable block (ram,0x000103044fd8) */
/* WARNING: Removing unreachable block (ram,0x000103044fa0) */
/* WARNING: Removing unreachable block (ram,0x000103044f84) */
/* WARNING: Removing unreachable block (ram,0x000103044f4c) */
/* WARNING: Removing unreachable block (ram,0x000103044f30) */
/* WARNING: Removing unreachable block (ram,0x000103044ef8) */
/* WARNING: Removing unreachable block (ram,0x000103044ec8) */
/* WARNING: Removing unreachable block (ram,0x000103044e20) */
/* WARNING: Removing unreachable block (ram,0x000103044d60) */
/* WARNING: Removing unreachable block (ram,0x000103045190) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103044c5c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = 0x112d5ba30;
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  func_0x00010304cb64(0x112d5ba30,&UNK_10d929a50,0x112ec68b8,&UNK_10db24a10);
  func_0x000107c613fc();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f35b60);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f35b68);
  *(undefined8 *)(lVar1 + 0x18) = 0xb;
  *(undefined8 *)(lVar1 + 0x10) = 5;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f35b70);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f35b80);
  *(undefined8 *)(lVar1 + 0x30) = uVar4;
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f35ba8);
  *(undefined8 *)(lVar1 + 0x40) = uVar5;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000100b658a4(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar1);
  return;
}



/* Entry: 1030451d8; end: 10304522b;  */

void FUN_1030451d8(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10304522c();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10304522c; end: 103046573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304522c(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long unaff_x20;
  undefined *puVar15;
  undefined8 uVar16;
  code *pcVar17;
  uint uVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puStack_80;
  undefined1 uStack_78;
  
  func_0x000107c614f0();
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112f35c38);
  func_0x0001000285a8(0x112f35e28,&UNK_10db7e248);
  lVar19 = unaff_x20 + _DAT_112f35d40;
  func_0x000100854cb0(lVar19);
  func_0x00010061da28(uVar16,lVar19);
  func_0x000107c61574(lVar19);
  uVar9 = 0x112f35df8;
  func_0x0001000285a8(0x112f35df8,&UNK_10db7e228);
  uVar1 = 0x103046908;
  func_0x0001000bfde0(0x103046908,0,uVar9);
  func_0x000107c61574(uVar16);
  uVar16 = uVar1;
  func_0x0001006c733c(uVar1);
  uVar9 = 0x112f35e40;
  func_0x0001000285a8(0x112f35e40,&UNK_10db7e250);
  pcVar17 = FUN_1030469a4;
  func_0x0001000bfde0(FUN_1030469a4,0,uVar9);
  func_0x000107c61574(uVar16);
  plVar2 = *(long **)(unaff_x20 + _DAT_112f35d38);
  plVar3 = plVar2;
  func_0x000100471e0c(plVar2,0);
  func_0x000107c61574(pcVar17);
  puVar20 = &UNK_110600e00;
  func_0x000107c613fc(&UNK_110600e00,0x18,7);
  func_0x000107c61614(puVar20 + 0x10);
  pcVar17 = FUN_103051980;
  puVar14 = puVar20;
  (**(code **)(*plVar3 + 0x60))(FUN_103051980);
  func_0x000107c61574(puVar20);
  func_0x000107c61574(plVar3);
  pcVar4 = pcVar17;
  func_0x000107c614f0(pcVar17);
  uVar23 = *(undefined8 *)(unaff_x20 + _DAT_112f35b38);
  (**(code **)(puVar14 + 0x10))(uVar23,pcVar4,puVar14);
  func_0x000107c615e8(pcVar17);
  func_0x0001000285a8(0x112f35e48,&UNK_10db7e258);
  lVar6 = _DAT_112f35ce8;
  lVar19 = unaff_x20 + _DAT_112f35ce8;
  func_0x000100854cb0(lVar19);
  uVar5 = uVar1;
  func_0x00010061da28(uVar1,lVar19);
  func_0x000107c61574(lVar19);
  uVar9 = 0x112f35e50;
  func_0x0001000285a8(0x112f35e50,&UNK_10db7e260);
  uVar16 = 0x103046a1c;
  func_0x0001000bfde0(0x103046a1c,0,uVar9);
  func_0x000107c61574(uVar5);
  plVar3 = plVar2;
  func_0x000100471e0c(plVar2,0);
  func_0x000107c61574(uVar16);
  puVar20 = &UNK_110600e00;
  func_0x000107c613fc(&UNK_110600e00,0x18,7);
  func_0x000107c61614(puVar20 + 0x10);
  uVar16 = 0x10305198c;
  puVar14 = puVar20;
  (**(code **)(*plVar3 + 0x60))(0x10305198c);
  func_0x000107c61574(puVar20);
  func_0x000107c61574(plVar3);
  uVar5 = uVar16;
  func_0x000107c614f0(uVar16);
  (**(code **)(puVar14 + 0x10))(uVar23,uVar5,puVar14);
  func_0x000107c615e8(uVar16);
  lVar6 = unaff_x20 + lVar6;
  func_0x000100854cb0(lVar6);
  lVar19 = lVar6;
  func_0x0001006c733c();
  func_0x000107c61574(lVar6);
  uVar16 = 0x103046ab0;
  func_0x0001000bfde0(0x103046ab0,0,uVar9);
  func_0x000107c61574(lVar19);
  func_0x000100471e0c(plVar2,0);
  func_0x000107c61574(uVar16);
  puVar20 = &UNK_110600e00;
  puVar14 = puVar20;
  func_0x000107c613fc(&UNK_110600e00,0x18,7);
  func_0x000107c61614(puVar14 + 0x10);
  uVar9 = 0x103051998;
  puVar15 = puVar14;
  (**(code **)(*plVar2 + 0x60))(0x103051998);
  func_0x000107c61574(puVar14);
  func_0x000107c61574(plVar2);
  uVar16 = uVar9;
  func_0x000107c614f0(uVar9);
  (**(code **)(puVar15 + 0x10))(uVar23,uVar16,puVar15);
  func_0x000107c615e8(uVar9);
  func_0x000107c61574(uVar1);
  func_0x000107c613fc(&UNK_110600e00,0x18,7);
  func_0x000107c61614(puVar20 + 0x10);
  pcVar17 = FUN_1030518f4;
  func_0x000100775358(FUN_1030518f4,puVar20,PTR___sSbN_11034dd40);
  func_0x000107c61574(puVar20);
  pcVar4 = FUN_103046b04;
  func_0x0001000c0ebc(FUN_103046b04,0);
  func_0x000107c61574(pcVar17);
  uVar9 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  plVar3 = (long *)0x103046b0c;
  func_0x0001000bfde0(0x103046b0c,0,uVar9);
  func_0x000107c61574(pcVar4);
  lVar6 = _DAT_112f35b90;
  pcVar17 = *(code **)(*plVar3 + 0x58);
  lVar19 = 0x112f35ae0;
  lVar7 = lVar19;
  func_0x0001000285a8(0x112f35ae0,&UNK_10db7def0);
  uVar9 = 0x112f35e38;
  func_0x0001030518b0(0x112f35e38,0x112f35ae0,&UNK_10db7def0,&DAT_10dd3c9d0);
  lVar6 = unaff_x20 + lVar6;
  (*pcVar17)(lVar6,lVar7,uVar9);
  func_0x000107c61574(plVar3);
  lVar8 = lVar6;
  func_0x000107c614f0(lVar6);
  (**(code **)(lVar7 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f35b38),lVar8,lVar7);
  func_0x000107c615e8(lVar6);
  puVar20 = &UNK_110600e00;
  func_0x000107c613fc(&UNK_110600e00,0x18,7);
  func_0x000107c61614(puVar20 + 0x10);
  uVar1 = 0x103051e3c;
  func_0x000100775358(0x103051e3c,puVar20,PTR___sSbN_11034dd40);
  func_0x000107c61574(puVar20);
  uVar16 = 0x103051dfc;
  func_0x0001000c0ebc(0x103051dfc,0);
  func_0x000107c61574(uVar1);
  uVar1 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  plVar3 = (long *)0x103051e38;
  func_0x0001000bfde0(0x103051e38,0,uVar1);
  func_0x000107c61574(uVar16);
  lVar6 = _DAT_112f35b98;
  pcVar17 = *(code **)(*plVar3 + 0x58);
  func_0x0001000285a8(0x112f35ae0,&UNK_10db7def0);
  lVar6 = unaff_x20 + lVar6;
  (*pcVar17)(lVar6,lVar19,uVar9);
  func_0x000107c61574(plVar3);
  lVar8 = lVar6;
  func_0x000107c614f0(lVar6);
  (**(code **)(lVar19 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f35b38),lVar8,lVar19);
  func_0x000107c615e8(lVar6);
  if (*(char *)(unaff_x20 + _DAT_112f35d20 + 0x20) == '\x02') {
    uVar9 = 0;
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + _DAT_112f35c50))
                + 0x130))(0);
    lVar19 = *(long *)(unaff_x20 + _DAT_112f35c20);
    if (lVar19 == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x103045f20);
      (*pcVar17)();
    }
    func_0x0001000285a8(0x112f35e28,&UNK_10db7e248);
    lVar6 = _DAT_112f35d40;
    func_0x000107c6157c(lVar19);
    lVar6 = unaff_x20 + lVar6;
    func_0x000100854cb0(lVar6);
    uVar1 = uVar9;
    func_0x000104878d1c(uVar9,lVar19,lVar6);
    func_0x000107c61574(lVar6);
    func_0x000107c61574(lVar19);
    func_0x000107c61574(uVar9);
    puVar20 = &UNK_110600e00;
    func_0x000107c613fc(&UNK_110600e00,0x18,7);
    func_0x000107c61614(puVar20 + 0x10);
    puVar14 = &UNK_110601408;
    func_0x000107c613fc(&UNK_110601408,0x20,7);
    *(code **)(puVar14 + 0x10) = FUN_103051830;
    *(undefined **)(puVar14 + 0x18) = puVar20;
    uVar9 = 0x103051838;
    func_0x0001000d5158(0x103051838,puVar14,PTR___sSiN_11034deb0);
    func_0x000107c61574(puVar14);
    func_0x000107c61574(uVar1);
    puStack_80 = (undefined *)0x0;
    ppuVar10 = &puStack_80;
    func_0x0001006c71a4();
    func_0x000107c61574(uVar9);
    lVar6 = _DAT_112f35b88;
    pcVar17 = *(code **)(*ppuVar10 + 0x58);
    lVar19 = 0x112d79ad0;
    func_0x0001000285a8(0x112d79ad0,&UNK_10d9392c0);
    uVar9 = 0x112f35e30;
    func_0x0001030518b0(0x112f35e30,0x112d79ad0,&UNK_10d9392c0,&DAT_10dd3ca70);
    lVar6 = unaff_x20 + lVar6;
    (*pcVar17)(lVar6,lVar19,uVar9);
    func_0x000107c61574(ppuVar10);
    lVar8 = lVar6;
    func_0x000107c614f0(lVar6);
    (**(code **)(lVar19 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f35b38),lVar8,lVar19);
    func_0x000107c615e8(lVar6);
  }
  puVar20 = PTR___sytN_11034f1b0;
  uVar18 = (uint)*(undefined8 *)(unaff_x20 + _DAT_112f35d40);
  if ((uVar18 >> 9 & 1) == 0) {
    lVar19 = *(long *)(unaff_x20 + _DAT_112f35ca8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar19 == 0) {
      puStack_80 = (undefined *)((ulong)puStack_80 & 0xffffffffffffff00);
      func_0x0001007d6d78(&puStack_80);
    }
    else {
      lVar6 = lVar19;
      func_0x000107c4d3a4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar19);
      lVar19 = lVar6;
      func_0x000107c41050();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      lVar6 = lVar19;
      func_0x000107c5bcc0();
      func_0x000107c61170(lVar19);
      puStack_80 = (undefined *)CONCAT71(puStack_80._1_7_,lVar6 == 3);
      func_0x0001007d6d78(&puStack_80);
      if (lVar6 == 3) goto LAB_103045afc;
    }
LAB_103045bd0:
    lVar19 = *(long *)(unaff_x20 + _DAT_112f35ca8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar19 == 0) {
      puStack_80 = (undefined *)((ulong)puStack_80 & 0xffffffffffffff00);
      func_0x0001007d6d78(&puStack_80);
    }
    else {
      lVar6 = lVar19;
      func_0x000107c41118();
      func_0x000107c61180();
      func_0x000107c615e8(lVar19);
      lVar19 = lVar6;
      func_0x000107c41050();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      lVar6 = lVar19;
      func_0x000107c5bcc0();
      func_0x000107c61170(lVar19);
      puStack_80 = (undefined *)CONCAT71(puStack_80._1_7_,lVar6 == 3);
      func_0x0001007d6d78(&puStack_80);
      if (lVar6 == 3) goto LAB_103045c64;
    }
LAB_103045cc4:
    uVar11 = *(ulong *)(unaff_x20 + _DAT_112f35ce8);
    func_0x000108f42248();
    *(char *)(unaff_x20 + _DAT_112f35bd0) = (char)uVar11;
    if ((uVar11 & 1) == 0) goto LAB_103045ec0;
  }
  else {
    puStack_80 = (undefined *)CONCAT71(puStack_80._1_7_,1);
    func_0x0001007d6d78(&puStack_80);
LAB_103045afc:
    puVar15 = *(undefined **)(unaff_x20 + _DAT_112f35cf8);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f35c70);
    puVar14 = puVar15;
    FUN_10304ee7c(puVar15,uVar9,0);
    puStack_80 = puVar14;
    func_0x0001007d6d78(&puStack_80);
    puVar14 = puVar15;
    FUN_10304ee7c(puVar15,uVar9,1);
    puStack_80 = puVar14;
    func_0x0001007d6d78(&puStack_80);
    FUN_10304ee7c(puVar15,uVar9,0);
    puStack_80 = puVar15;
    func_0x0001007d6d78(&puStack_80);
    if ((uVar18 >> 9 & 1) == 0) goto LAB_103045bd0;
    puStack_80 = (undefined *)CONCAT71(puStack_80._1_7_,1);
    func_0x0001007d6d78(&puStack_80);
LAB_103045c64:
    func_0x000100087bd4(0x103051798,&puStack_80,puVar20 + 8);
    if ((uVar18 >> 9 & 1) == 0) goto LAB_103045cc4;
    *(undefined1 *)(unaff_x20 + _DAT_112f35bd0) = 1;
  }
  func_0x000100087bd4(FUN_103051774,&puStack_80,puVar20 + 8);
  puVar14 = *(undefined **)(unaff_x20 + _DAT_112f35ce8);
  puVar20 = puVar14;
  func_0x000108f422e8();
  func_0x000107c61180();
  if (puVar20 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x103045f1c);
    (*pcVar17)();
  }
  uVar9 = 0;
  FUN_103050598(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar15 = puVar20;
  func_0x000107c5fc54(puVar20,uVar9);
  func_0x000107c61170(puVar20);
  if ((ulong)puVar15 >> 0x3e == 0) {
    puVar20 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
    if (puVar20 == (undefined *)0x0) goto LAB_103045e74;
LAB_103045d78:
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dd4260(0,(ulong)puVar20 & ((long)puVar20 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar20 < 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x103045f18);
      (*pcVar17)();
    }
    puVar22 = (undefined *)0x0;
    do {
      puVar21 = puStack_80;
      if (((ulong)puVar15 & 0xc000000000000001) == 0) {
        puVar12 = *(undefined **)(puVar15 + (long)puVar22 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar12 = puVar22;
        FUN_10304c794(puVar22,puVar15,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
      }
      puVar13 = puVar12;
      func_0x000107c49820();
      func_0x000107c61170(puVar12);
      uVar11 = *(ulong *)(puVar21 + 0x10);
      puStack_80 = puVar21;
      if (*(ulong *)(puVar21 + 0x18) >> 1 <= uVar11) {
        func_0x000100dd4260(1 < *(ulong *)(puVar21 + 0x18),uVar11 + 1,1);
      }
      puVar21 = puStack_80;
      puVar22 = puVar22 + 1;
      *(ulong *)(puStack_80 + 0x10) = uVar11 + 1;
      *(undefined **)(puStack_80 + uVar11 * 8 + 0x20) = puVar13;
    } while (puVar20 != puVar22);
    func_0x000107c6142c(puVar15);
  }
  else {
    puVar20 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar15) {
      puVar20 = puVar15;
    }
    func_0x000107c60480();
    if (puVar20 != (undefined *)0x0) goto LAB_103045d78;
LAB_103045e74:
    func_0x000107c6142c(puVar15);
    puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  puStack_80 = puVar21;
  func_0x000100087c34(&puStack_80);
  func_0x000107c6142c(puVar21);
  func_0x000108f42294();
  uStack_78 = 0;
  puStack_80 = puVar14;
  func_0x0001007d6d78(&puStack_80);
LAB_103045ec0:
  if (*(long *)(unaff_x20 + _DAT_112f35cb0) != 0) {
    func_0x000107c5e0cc();
  }
  FUN_10304b364();
  func_0x00010304b4f8();
  FUN_10304b708();
  FUN_10304b8f8();
  FUN_10304ba84();
  FUN_10304bc78();
  func_0x00010304bd98();
  return;
}



/* Entry: 103046574; end: 1030469a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103046574(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f35c90);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c44b1c();
    uVar1 = (uint)lVar3;
    func_0x000107c615e8(lVar2);
  }
  uVar4 = *(ulong *)(unaff_x20 + _DAT_112f35c88);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar4 != 0) {
    uVar5 = uVar4;
    func_0x000107c4f38c();
    func_0x000107c61180();
    func_0x000107c615e8(uVar4);
    if (uVar5 != 0) {
      uVar4 = uVar5;
      func_0x000107c5faec(uVar5);
      func_0x000107c61170(uVar5);
      uVar4 = uVar4 & 0xffffffffffff;
      goto LAB_103046628;
    }
  }
  uVar4 = 0;
  param_2 = 0xe000000000000000;
LAB_103046628:
  func_0x000107c6142c(param_2);
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar4 = param_2 >> 0x38 & 0xf;
  }
  return (uVar4 == 0 | uVar1) &
         (uint)((int)*(undefined8 *)(param_1 + 0x40) != 0 | *(byte *)(param_1 + 3)) & 1;
}



/* Entry: 1030469a4; end: 103046b03;  */

void FUN_1030469a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  FUN_103050598(0,0x112d55c08,&PTR_PTR_1126b47a0);
  func_0x000107c5fc48(uVar2,uVar1);
  uVar1 = uVar2;
  func_0x000106971eb4();
  func_0x000107c61170(uVar2);
  uVar2 = 0;
  if ((int)uVar1 != 0) {
    func_0x000106979890();
    func_0x000107c61180();
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 103046b04; end: 103046b0f;  */

undefined1 FUN_103046b04(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 103046b10; end: 103046bb3;  */

void FUN_103046b10(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = -0x2fffffffffffffe8;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f11b050);
  lVar2 = 0;
  func_0x000107c5fe40();
  lVar3 = lVar1;
  lVar4 = lVar2;
  func_0x000107c312f4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    lVar1 = 0;
    lVar4 = 0;
  }
  else {
    lVar1 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
  }
  *param_1 = lVar1;
  param_1[1] = lVar4;
  return;
}



/* Entry: 103046bb4; end: 103046dc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103046bb4(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + _DAT_112f35c50)) +
              0x130))(param_1);
  lVar1 = _DAT_112f35b30;
  lVar11 = *(long *)(unaff_x20 + _DAT_112f35b30);
  if (lVar11 == 0) {
    uVar10 = param_1;
    func_0x0001006c71a4();
    lVar11 = *(long *)(unaff_x20 + _DAT_112f35c20);
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103046dc0);
      (*pcVar2)();
    }
    lVar4 = lVar11;
    func_0x000107c6157c(lVar11);
    func_0x00010061da28();
    func_0x000107c61574(lVar11);
    uVar5 = 0x112f35d48;
    func_0x0001000285a8(0x112f35d48,&UNK_10db7df48);
    pcVar2 = FUN_103046e58;
    func_0x0001000bfde0(FUN_103046e58,0,uVar5);
    func_0x000107c61574(lVar4);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f35d38);
    func_0x000100471e0c(uVar6,0);
    func_0x000107c61574(pcVar2);
    puVar7 = &UNK_110600e00;
    func_0x000107c613fc(&UNK_110600e00,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    puVar8 = &UNK_110600e78;
    func_0x000107c613fc(&UNK_110600e78,0x20,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(long *)(puVar8 + 0x18) = lVar3;
    puVar7 = &UNK_110600ea0;
    func_0x000107c613fc(&UNK_110600ea0,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_10304e098;
    *(undefined **)(puVar7 + 0x18) = puVar8;
    uVar5 = 0x112e3c220;
    func_0x0001000285a8(0x112e3c220,&UNK_10db7df50);
    uVar9 = 0x10304e1dc;
    func_0x00010068b194(0x10304e1dc,puVar7,uVar5);
    func_0x000107c61574(uVar6);
    func_0x000107c61574();
    func_0x00010304e244();
    func_0x0001000c2068();
    func_0x000107c61574(uVar9);
    func_0x000107c61574(uVar10);
    uVar10 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar7;
    func_0x000107c61574(uVar10);
    lVar11 = *(long *)(unaff_x20 + lVar1);
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103046dc4);
      (*pcVar2)();
    }
  }
  func_0x000107c6157c(lVar11);
  func_0x000107c61574(param_1);
  return lVar11;
}



/* Entry: 103046dc4; end: 103046e57; -[_TtC54RankedPostableContentDestinationsServiceImplementation54RankedPostableContentDestinationsServiceImplementation fetchFromRemote:] */

void FUN_103046dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  FUN_103046bb4(param_3);
  uVar1 = 0;
  FUN_103050598(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar2 = 0x103051df4;
  func_0x0001000bfde0(0x103051df4,0,uVar1);
  func_0x000107c61574(param_3);
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103046e58; end: 103046f47;  */

void FUN_103046e58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_158 [136];
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  
  uStack_68 = param_2[0xd];
  uStack_70 = param_2[0xc];
  uStack_58 = (undefined1)param_2[0xf];
  uStack_57 = (undefined7)((ulong)param_2[0xf] >> 8);
  uStack_60 = (undefined1)param_2[0xe];
  uStack_5f = (undefined7)((ulong)param_2[0xe] >> 8);
  uStack_50 = *(undefined1 *)(param_2 + 0x10);
  uStack_c8 = param_2[1];
  uVar1 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  uStack_88 = param_2[9];
  uStack_90 = param_2[8];
  uStack_78 = param_2[0xb];
  uStack_80 = param_2[10];
  uStack_d0 = uVar1;
  func_0x0001030505d8(&uStack_d0,auStack_158,0x112f35de8,&UNK_10db7e218);
  func_0x000103050620((ulong)&uStack_d0 | 8);
  *param_1 = uVar1;
  func_0x0001030505d8(&uStack_d0,auStack_158,0x112f35de8,&UNK_10db7e218);
  func_0x000107c6142c(uVar1);
  param_1[10] = uStack_80;
  param_1[9] = uStack_88;
  param_1[0xc] = uStack_70;
  param_1[0xb] = uStack_78;
  param_1[0xe] = CONCAT71(uStack_5f,uStack_60);
  param_1[0xd] = uStack_68;
  *(ulong *)((long)param_1 + 0x79) = CONCAT17(uStack_50,uStack_57);
  *(ulong *)((long)param_1 + 0x71) = CONCAT17(uStack_58,uStack_5f);
  param_1[2] = uStack_c0;
  param_1[1] = uStack_c8;
  param_1[4] = uStack_b0;
  param_1[3] = uStack_b8;
  param_1[6] = uStack_a0;
  param_1[5] = uStack_a8;
  param_1[8] = uStack_90;
  param_1[7] = uStack_98;
  return;
}



/* Entry: 103046f48; end: 1030497db;  */

/* WARNING: Removing unreachable block (ram,0x000103048468) */
/* WARNING: Removing unreachable block (ram,0x000103047fc4) */
/* WARNING: Removing unreachable block (ram,0x000103048da8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103046f48(undefined8 param_1,long param_2,code *param_3,byte *param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  code cVar6;
  bool bVar7;
  undefined *puVar8;
  code *pcVar9;
  code *pcVar10;
  undefined *puVar11;
  code *pcVar12;
  byte *pbVar13;
  long lVar14;
  code *pcVar15;
  code *pcVar16;
  code *pcVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  code *pcVar22;
  code *pcVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  code **ppcVar27;
  code *pcVar28;
  code *pcVar29;
  ulong uVar30;
  long *plVar31;
  uint uVar32;
  ulong uVar33;
  undefined *puVar34;
  ulong uVar35;
  ulong uVar36;
  code *pcVar37;
  ulong uVar38;
  code *pcVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  code *pcVar42;
  long lVar43;
  code *pcVar44;
  code *pcVar45;
  code *pcVar46;
  code *pcVar47;
  undefined1 *puVar48;
  code *pcVar49;
  code *pcVar50;
  code *pcVar51;
  code *pcStack_198;
  code *pcStack_168;
  code *pcStack_160;
  code *pcStack_150;
  long *plStack_138;
  code *apcStack_130 [2];
  code *pcStack_120;
  undefined *puStack_118;
  code *pcStack_110;
  undefined1 auStack_108 [24];
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  byte bStack_d0;
  code *pcStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar48 = auStack_108;
  func_0x000107c61428(param_2 + 0x10,puVar48,0,0);
  puVar8 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar8 == (undefined *)0x0) {
    func_0x0001000b6d30();
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
    return;
  }
  pcStack_110 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  pcStack_120 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_118 = PTR___swiftEmptyArrayStorage_11034f1c8;
  pcVar9 = *(code **)(puVar8 + _DAT_112f35c88);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (pcVar9 != (code *)0x0) {
    pcVar46 = pcVar9;
    func_0x000107c4f38c();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar9);
    if (pcVar46 != (code *)0x0) {
      pcStack_150 = pcVar46;
      func_0x000107c5faec();
      func_0x000107c61170(pcVar46);
      goto LAB_10304700c;
    }
  }
  pcStack_150 = (code *)0x0;
  puVar48 = (undefined1 *)0x0;
LAB_10304700c:
  pcVar9 = *(code **)(param_4 + 0x48);
  uVar33 = (ulong)pcVar9 >> 0x3e;
  if (uVar33 == 0) {
    pcVar46 = *(code **)(((ulong)pcVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    pcVar46 = (code *)((ulong)pcVar9 & 0xffffffffffffff8);
    if ((code *)0x7fffffffffffffff < pcVar9) {
      pcVar46 = pcVar9;
    }
    func_0x000107c60480();
  }
  pcVar37 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pcVar46 != (code *)0x0) {
    pcStack_a0 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    pcVar28 = (code *)((ulong)pcVar46 & ((long)pcVar46 >> 0x3f ^ 0xffffffffffffffffU));
    func_0x000100403514(0,pcVar28,0);
    if ((long)pcVar46 < 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x103049770);
      (*pcVar9)();
    }
    pcVar47 = (code *)0x0;
    do {
      pcVar37 = pcStack_a0;
      if (((ulong)pcVar9 & 0xc000000000000001) == 0) {
        pcVar44 = *(code **)(pcVar9 + (long)pcVar47 * 8 + 0x20);
        func_0x000107c61174();
        pcVar23 = pcVar28;
      }
      else {
        pcVar44 = pcVar47;
        pcVar23 = pcVar9;
        FUN_10304c794(pcVar47,pcVar9,&PTR_PTR_1126d4dd8,0x112d4c900);
      }
      func_0x000107c61174();
      pcVar39 = pcVar44;
      func_0x000107c4f348();
      func_0x000107c61180();
      pcVar10 = pcVar39;
      func_0x000107c4f38c();
      func_0x000107c61180();
      pcVar22 = pcVar10;
      func_0x000107c5faec();
      pcVar28 = pcVar23;
      func_0x000107c61170(pcVar44);
      func_0x000107c61170(pcVar44);
      func_0x000107c61170(pcVar39);
      func_0x000107c61170(pcVar10);
      uVar36 = *(ulong *)(pcVar37 + 0x10);
      pcVar44 = (code *)(uVar36 + 1);
      pcStack_a0 = pcVar37;
      if (*(ulong *)(pcVar37 + 0x18) >> 1 <= uVar36) {
        pcVar28 = pcVar44;
        func_0x000100403514(1 < *(ulong *)(pcVar37 + 0x18),pcVar44,1);
      }
      pcVar47 = pcVar47 + 1;
      *(code **)(pcStack_a0 + 0x10) = pcVar44;
      *(code **)(pcStack_a0 + uVar36 * 0x10 + 0x20) = pcVar22;
      *(code **)(pcStack_a0 + uVar36 * 0x10 + 0x28) = pcVar23;
      pcVar37 = pcStack_a0;
    } while (pcVar46 != pcVar47);
  }
  pcVar46 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  pcVar28 = param_3;
  func_0x00010304fa18(param_3,pcStack_150,puVar48,pcVar37);
  func_0x000107c6142c(pcVar37);
  func_0x000107c6142c(puVar48);
  if ((ulong)pcVar28 >> 0x3e == 0) {
    pcVar37 = *(code **)(((ulong)pcVar28 & 0xffffffffffffff8) + 0x10);
  }
  else {
    pcVar37 = (code *)((ulong)pcVar28 & 0xffffffffffffff8);
    if ((code *)0x7fffffffffffffff < pcVar28) {
      pcVar37 = pcVar28;
    }
    func_0x000107c60480();
  }
  pcVar47 = (code *)PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (pcVar37 != (code *)0x0) {
    pcVar44 = (code *)0x0;
    pcVar39 = (code *)((ulong)pcVar9 & 0xffffffffffffff8);
    pcVar23 = pcVar39;
    if ((code *)0x7fffffffffffffff < pcVar9) {
      pcVar23 = pcVar9;
    }
    bVar3 = param_4[5];
    puVar34 = (undefined *)((ulong)pcVar46 & 0xffffffffffffff8);
    puVar20 = puVar34;
    if ((undefined *)0x7fffffffffffffff < pcVar46) {
      puVar20 = pcVar46;
    }
    bVar4 = param_4[1];
    bVar5 = param_4[3];
    do {
      if (((ulong)pcVar28 & 0xc000000000000001) == 0) {
        if (*(code **)(((ulong)pcVar28 & 0xffffffffffffff8) + 0x10) <= pcVar44) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10304906c);
          (*pcVar9)();
        }
        pcVar10 = *(code **)(pcVar28 + (long)pcVar44 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        pcVar10 = pcVar44;
        pcStack_150 = pcVar28;
        FUN_10304c950();
      }
      bVar7 = SCARRY8((long)pcVar44,1);
      pcVar44 = pcVar44 + 1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x103049068);
        (*pcVar9)();
      }
      uVar32 = (uint)(byte)pcVar10[_DAT_112fe6d58];
      if ((byte)pcVar10[_DAT_112fe6d58] < 3) {
        if (uVar32 == 0) goto LAB_103047db4;
        if (uVar32 == 1) {
          pcStack_198 = *(code **)(puVar8 + _DAT_112f35ce8);
          func_0x000108f48528();
          if (((((int)pcStack_198 == 0) || ((puVar8[_DAT_112f35cc8] & 1) == 0)) &&
              (((bVar4 & 1) != 0 || ((*param_4 & 1) != 0)))) && ((bVar5 & 1) != 0)) {
            FUN_103049bd0();
LAB_103047344:
            if (pcStack_198 != (code *)0x0) {
              func_0x000107c61174();
              if ((ulong)pcVar46 >> 0x3e == 0) {
                puVar11 = *(undefined **)(puVar34 + 0x10);
              }
              else {
                puVar11 = puVar20;
                func_0x000107c60480(puVar20);
              }
              pcVar12 = (code *)0x0;
              FUN_10304daf8(0,puVar11 + 1,1,pcVar46,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                            &UNK_10da27d40);
              uVar35 = (ulong)pcVar12 & 0xffffffffffffff8;
              uVar36 = *(ulong *)(uVar35 + 0x10);
              pcVar22 = pcVar12;
              if (*(ulong *)(uVar35 + 0x18) >> 1 <= uVar36) {
                pcVar22 = (code *)(ulong)(1 < *(ulong *)(uVar35 + 0x18));
                FUN_10304daf8(pcVar22,uVar36 + 1,1,pcVar12,0x112e3c238,&PTR_PTR_1126c51c8,
                              0x112e3c240,&UNK_10da27d40);
                uVar35 = (ulong)pcVar22 & 0xffffffffffffff8;
              }
              *(ulong *)(uVar35 + 0x10) = uVar36 + 1;
              *(code **)(uVar35 + uVar36 * 8 + 0x20) = pcStack_198;
              goto LAB_103047db0;
            }
          }
          goto LAB_103047db4;
        }
        if ((param_4[4] & 1) == 0) {
          pcStack_198 = (code *)0x0;
        }
        else {
          pcStack_198 = (code *)PTR_PTR_1126cf4e8;
          func_0x000107c610f8();
          func_0x000107c46f1c();
        }
        pbVar13 = param_4;
        FUN_103046574();
        if (((ulong)pbVar13 & 1) != 0) {
          uVar25 = *(undefined8 *)(puVar8 + _DAT_112f35cd0);
          func_0x000107c5fadc(uVar25,*(undefined8 *)((long)(puVar8 + _DAT_112f35cd0) + 8));
          uVar26 = *(undefined8 *)(puVar8 + _DAT_112f35cd8);
          uVar40 = *(undefined8 *)((long)(puVar8 + _DAT_112f35cd8) + 8);
          func_0x000107c5fadc(uVar26,uVar40);
          lVar14 = *(long *)(puVar8 + _DAT_112f35c98);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar14 == 0) {
LAB_1030477f8:
            uVar40 = 0xe000000000000000;
          }
          else {
            lVar21 = lVar14;
            func_0x000107c3e544();
            func_0x000107c61180();
            func_0x000107c615e8(lVar14);
            if (lVar21 == 0) {
              lVar14 = 0;
              goto LAB_1030477f8;
            }
            lVar14 = lVar21;
            func_0x000107c5faec(lVar21);
            func_0x000107c61170(lVar21);
          }
          uVar41 = uVar40;
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar40);
          lVar21 = *(long *)(puVar8 + _DAT_112f35ca0);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar21 == 0) {
LAB_10304786c:
            lVar21 = 0;
            uVar41 = 0xe000000000000000;
          }
          else {
            lVar18 = lVar21;
            func_0x000107c51d04();
            func_0x000107c61180();
            func_0x000107c615e8(lVar21);
            if (lVar18 == 0) goto LAB_10304786c;
            lVar21 = lVar18;
            func_0x000107c5faec(lVar18);
            func_0x000107c61170(lVar18);
          }
          puVar11 = PTR_PTR_1126c51c8;
          func_0x000107c61168();
          func_0x000107c5fadc(lVar21,uVar41);
          func_0x000107c6142c(uVar41);
          func_0x000107c4d3c8();
          func_0x000107c61180();
          func_0x000107c61170(uVar25);
          func_0x000107c61170(uVar26);
          func_0x000107c61170(lVar14);
          func_0x000107c61170(lVar21);
          if ((ulong)pcVar46 >> 0x3e == 0) {
            puVar19 = *(undefined **)(puVar34 + 0x10);
          }
          else {
            puVar19 = puVar20;
            func_0x000107c60480(puVar20);
          }
          pcVar22 = (code *)0x0;
          FUN_10304daf8(0,puVar19 + 1,1,pcVar46,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                        &UNK_10da27d40);
          uVar35 = (ulong)pcVar22 & 0xffffffffffffff8;
          uVar36 = *(ulong *)(uVar35 + 0x10);
          pcVar46 = pcVar22;
          if (*(ulong *)(uVar35 + 0x18) >> 1 <= uVar36) {
            pcVar46 = (code *)(ulong)(1 < *(ulong *)(uVar35 + 0x18));
            FUN_10304daf8(pcVar46,uVar36 + 1,1,pcVar22,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                          &UNK_10da27d40);
            uVar35 = (ulong)pcVar46 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar35 + 0x10) = uVar36 + 1;
          *(undefined **)(uVar35 + uVar36 * 8 + 0x20) = puVar11;
        }
        pbVar13 = param_4;
        func_0x000103046678();
        if (((ulong)pbVar13 & 1) != 0) {
          uVar25 = *(undefined8 *)(puVar8 + _DAT_112f35cd0);
          func_0x000107c5fadc(uVar25,*(undefined8 *)((long)(puVar8 + _DAT_112f35cd0) + 8));
          uVar26 = *(undefined8 *)(puVar8 + _DAT_112f35cd8);
          uVar40 = *(undefined8 *)((long)(puVar8 + _DAT_112f35cd8) + 8);
          func_0x000107c5fadc(uVar26,uVar40);
          lVar14 = *(long *)(puVar8 + _DAT_112f35c98);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar14 == 0) {
LAB_103047a00:
            uVar40 = 0xe000000000000000;
          }
          else {
            lVar21 = lVar14;
            func_0x000107c3e544();
            func_0x000107c61180();
            func_0x000107c615e8(lVar14);
            if (lVar21 == 0) {
              lVar14 = 0;
              goto LAB_103047a00;
            }
            lVar14 = lVar21;
            func_0x000107c5faec(lVar21);
            func_0x000107c61170(lVar21);
          }
          uVar41 = uVar40;
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar40);
          lVar21 = *(long *)(puVar8 + _DAT_112f35ca0);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar21 == 0) {
LAB_103047a74:
            lVar21 = 0;
            uVar41 = 0xe000000000000000;
          }
          else {
            lVar18 = lVar21;
            func_0x000107c51d04();
            func_0x000107c61180();
            func_0x000107c615e8(lVar21);
            if (lVar18 == 0) goto LAB_103047a74;
            lVar21 = lVar18;
            func_0x000107c5faec(lVar18);
            func_0x000107c61170(lVar18);
          }
          puVar11 = PTR_PTR_1126c51c8;
          func_0x000107c61168();
          func_0x000107c5fadc(lVar21,uVar41);
          func_0x000107c6142c(uVar41);
          func_0x000107c4d3c8();
          func_0x000107c61180();
          func_0x000107c61170(uVar25);
          func_0x000107c61170(uVar26);
          func_0x000107c61170(lVar14);
          func_0x000107c61170(lVar21);
          pcVar22 = pcVar46;
          func_0x000107c61550();
          if ((((int)pcVar22 == 0) || ((long)pcVar46 < 0)) ||
             (pcVar22 = pcVar46, ((ulong)pcVar46 >> 0x3e & 1) != 0)) {
            if ((ulong)pcVar46 >> 0x3e == 0) {
              pcVar12 = *(code **)(((ulong)pcVar46 & 0xffffffffffffff8) + 0x10);
            }
            else {
              pcVar12 = (code *)((ulong)pcVar46 & 0xffffffffffffff8);
              if ((code *)0x7fffffffffffffff < pcVar46) {
                pcVar12 = pcVar46;
              }
              func_0x000107c60480(pcVar12);
            }
            pcVar22 = (code *)0x0;
            FUN_10304daf8(0,pcVar12 + 1,1,pcVar46,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                          &UNK_10da27d40);
          }
          uVar35 = (ulong)pcVar22 & 0xffffffffffffff8;
          uVar36 = *(ulong *)(uVar35 + 0x10);
          pcVar46 = pcVar22;
          if (*(ulong *)(uVar35 + 0x18) >> 1 <= uVar36) {
            pcVar46 = (code *)(ulong)(1 < *(ulong *)(uVar35 + 0x18));
            FUN_10304daf8(pcVar46,uVar36 + 1,1,pcVar22,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                          &UNK_10da27d40);
            uVar35 = (ulong)pcVar46 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar35 + 0x10) = uVar36 + 1;
          *(undefined **)(uVar35 + uVar36 * 8 + 0x20) = puVar11;
        }
        pbVar13 = param_4;
        func_0x00010304677c();
        pcVar22 = pcVar46;
        if (((ulong)pbVar13 & 1) != 0) {
          uVar25 = *(undefined8 *)(puVar8 + _DAT_112f35cd0);
          func_0x000107c5fadc(uVar25,*(undefined8 *)((long)(puVar8 + _DAT_112f35cd0) + 8));
          uVar26 = *(undefined8 *)(puVar8 + _DAT_112f35cd8);
          uVar40 = *(undefined8 *)((long)(puVar8 + _DAT_112f35cd8) + 8);
          func_0x000107c5fadc(uVar26,uVar40);
          lVar14 = *(long *)(puVar8 + _DAT_112f35c98);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar14 == 0) {
LAB_103047c2c:
            uVar40 = 0xe000000000000000;
          }
          else {
            lVar21 = lVar14;
            func_0x000107c3e544();
            func_0x000107c61180();
            func_0x000107c615e8(lVar14);
            if (lVar21 == 0) {
              lVar14 = 0;
              goto LAB_103047c2c;
            }
            lVar14 = lVar21;
            func_0x000107c5faec(lVar21);
            func_0x000107c61170(lVar21);
          }
          uVar41 = uVar40;
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar40);
          lVar21 = *(long *)(puVar8 + _DAT_112f35ca0);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar21 == 0) {
LAB_103047ca0:
            lVar21 = 0;
            uVar41 = 0xe000000000000000;
          }
          else {
            lVar18 = lVar21;
            func_0x000107c51d04();
            func_0x000107c61180();
            func_0x000107c615e8(lVar21);
            if (lVar18 == 0) goto LAB_103047ca0;
            lVar21 = lVar18;
            func_0x000107c5faec(lVar18);
            func_0x000107c61170(lVar18);
          }
          puVar11 = PTR_PTR_1126c51c8;
          func_0x000107c61168();
          func_0x000107c5fadc(lVar21,uVar41);
          func_0x000107c6142c(uVar41);
          func_0x000107c4d3c8();
          func_0x000107c61180();
          func_0x000107c61170(uVar25);
          func_0x000107c61170(uVar26);
          func_0x000107c61170(lVar14);
          func_0x000107c61170(lVar21);
          func_0x000107c61550();
          if ((((int)pcVar22 == 0) || ((long)pcVar46 < 0)) || (((ulong)pcVar46 >> 0x3e & 1) != 0)) {
            if ((ulong)pcVar46 >> 0x3e == 0) {
              pcVar22 = *(code **)(((ulong)pcVar46 & 0xffffffffffffff8) + 0x10);
            }
            else {
              pcVar22 = (code *)((ulong)pcVar46 & 0xffffffffffffff8);
              if ((code *)0x7fffffffffffffff < pcVar46) {
                pcVar22 = pcVar46;
              }
              func_0x000107c60480(pcVar22);
            }
            pcVar12 = (code *)0x0;
            FUN_10304daf8(0,pcVar22 + 1,1,pcVar46,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                          &UNK_10da27d40);
            pcVar46 = pcVar12;
          }
          uVar35 = (ulong)pcVar46 & 0xffffffffffffff8;
          uVar36 = *(ulong *)(uVar35 + 0x10);
          pcVar22 = pcVar46;
          if (*(ulong *)(uVar35 + 0x18) >> 1 <= uVar36) {
            pcVar22 = (code *)(ulong)(1 < *(ulong *)(uVar35 + 0x18));
            FUN_10304daf8(pcVar22,uVar36 + 1,1,pcVar46,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                          &UNK_10da27d40);
            uVar35 = (ulong)pcVar22 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar35 + 0x10) = uVar36 + 1;
          *(undefined **)(uVar35 + uVar36 * 8 + 0x20) = puVar11;
        }
LAB_103047db0:
        func_0x000107c61170(pcStack_198);
        pcVar46 = pcVar22;
      }
      else if (1 < uVar32 - 5) {
        if (uVar32 == 3) {
          pcVar22 = *(code **)(param_4 + 0x60);
          if ((ulong)pcVar22 >> 0x3e == 0) {
            pcVar12 = *(code **)(((ulong)pcVar22 & 0xffffffffffffff8) + 0x10);
            pcStack_198 = pcStack_150;
          }
          else {
            pcVar12 = (code *)((ulong)pcVar22 & 0xffffffffffffff8);
            if ((code *)0x7fffffffffffffff < pcVar22) {
              pcVar12 = pcVar22;
            }
            func_0x000107c60480();
            pcStack_198 = pcStack_150;
          }
          if (pcVar12 != (code *)0x0) {
            pcVar49 = (code *)0x0;
            pcVar45 = pcVar10 + _DAT_112fe6d50;
LAB_103047458:
            if (((ulong)pcVar22 & 0xc000000000000001) == 0) {
              if (*(code **)(((ulong)pcVar22 & 0xffffffffffffff8) + 0x10) <= pcVar49) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x103049078);
                (*pcVar9)();
              }
              pcVar46 = *(code **)(pcVar22 + (long)pcVar49 * 8 + 0x20);
              func_0x000107c61174();
              pcVar15 = pcStack_198;
            }
            else {
              pcVar46 = pcVar49;
              pcVar15 = pcVar22;
              FUN_10304c794(pcVar49,pcVar22,&PTR_PTR_1126b47a0,0x112d55c08);
            }
            pcVar51 = pcVar49 + 1;
            if (SCARRY8((long)pcVar49,1)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x103049074);
              (*pcVar9)();
            }
            pcVar42 = pcVar46;
            func_0x000107c4f638();
            func_0x000107c61180();
            pcStack_198 = pcVar15;
            if (pcVar42 == (code *)0x0) goto LAB_103047438;
            pcVar16 = pcVar42;
            func_0x000107c5faec();
            pcStack_198 = pcVar15;
            func_0x000107c61170(pcVar42);
            if ((pcVar16 == *(code **)pcVar45) && (pcVar15 == *(code **)(pcVar45 + 8))) {
              func_0x000107c6142c(pcVar15);
            }
            else {
              pcStack_198 = pcVar15;
              func_0x000107c605b8();
              func_0x000107c6142c(pcVar15);
              if (((ulong)pcVar16 & 1) == 0) goto LAB_103047438;
            }
            pcVar22 = pcVar46;
            func_0x000107c4f638();
            func_0x000107c61180();
            if (pcVar22 != (code *)0x0) {
              pcVar12 = pcVar22;
              func_0x000107c5faec();
              func_0x000107c61170(pcVar22);
              pcVar22 = pcVar46;
              func_0x000107c4f280();
              pcVar15 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
              if ((((pcVar22 != (code *)0x3) &&
                   (pcVar22 = pcVar46, func_0x000107c5d0f0(), pcVar22 != (code *)0xa)) &&
                  ((pcVar22 = pcVar46, func_0x000107c5d0f0(), pcVar22 != (code *)0x6 ||
                   (((byte)puVar8[_DAT_112f35d40 + 1] >> 6 & 1) == 0)))) &&
                 ((pcVar22 = pcVar46, func_0x000107c5d0f0(), pcVar22 != (code *)0x7 ||
                  (-1 < (char)puVar8[_DAT_112f35d40 + 1])))) {
                uVar25 = *(undefined8 *)(puVar8 + _DAT_112f35cd8);
                func_0x000107c5fadc(uVar25,*(undefined8 *)((long)(puVar8 + _DAT_112f35cd8) + 8));
                func_0x000104886d18(&pcStack_a0);
                if ((char)pcStack_a0 == '\x01') {
                  uVar36 = (ulong)pcVar12 & 0xffffffffffff;
                  if (((ulong)pcStack_198 & 0x2000000000000000) != 0) {
                    uVar36 = (ulong)pcStack_198 >> 0x38 & 0xf;
                  }
                  if (uVar36 == 0) goto LAB_1030480a8;
                  lVar14 = *(long *)(puVar8 + _DAT_112f35c70);
                  func_0x000107c5c734();
                  func_0x000107c61180();
                  if (lVar14 == 0) goto LAB_1030480a8;
                  uVar26 = 0x112f35dd0;
                  puStack_90 = puVar8;
                  pcStack_88 = pcVar12;
                  pcStack_80 = pcStack_198;
                  func_0x0001000285a8(0x112f35dd0,&UNK_10db7e208);
                  func_0x000100087bd4(&lStack_f0,FUN_103051db8,&pcStack_a0,uVar26);
                  if ((char)lStack_e8 == '\x01') {
                    func_0x000107c5fadc(pcVar12,pcStack_198);
                    func_0x000107c41160(lVar14);
                    func_0x000107c61170(pcVar12);
                    pcVar42 = (code *)PTR_PTR_1126cf4e8;
                    func_0x000107c610f8(PTR_PTR_1126cf4e8);
                  }
                  else {
                    pcVar42 = (code *)PTR_PTR_1126cf4e8;
                    func_0x000107c610f8(PTR_PTR_1126cf4e8);
                  }
                  func_0x000107c46f1c();
                  func_0x000107c615e8(lVar14);
                }
                else {
LAB_1030480a8:
                  pcVar42 = (code *)0x0;
                }
                func_0x000107c6142c(pcStack_198);
                pcStack_198 = pcVar46;
                func_0x0001069719d4(pcVar46,uVar25,0,pcVar42,bVar3);
                func_0x000107c61180();
                func_0x000107c61170(pcVar46);
                func_0x000107c61170(uVar25);
LAB_10304862c:
                func_0x000107c61170(pcVar42);
                pcVar46 = pcVar15;
                goto LAB_103047344;
              }
              func_0x000107c61170(pcVar46);
              goto LAB_103048300;
            }
            func_0x000107c61170(pcVar46);
            pcVar46 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
          }
        }
        else {
          pcVar22 = *(code **)(pcVar10 + _DAT_112fe6d50);
          pcVar12 = *(code **)(pcVar10 + _DAT_112fe6d50 + 8);
          pcVar49 = *(code **)(puVar8 + _DAT_112f35c88);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (pcVar49 == (code *)0x0) {
LAB_103047624:
            pcVar49 = (code *)0x0;
            pcStack_198 = (code *)0x0;
          }
          else {
            pcVar45 = pcVar49;
            func_0x000107c4f38c();
            func_0x000107c61180();
            func_0x000107c615e8(pcVar49);
            if (pcVar45 == (code *)0x0) goto LAB_103047624;
            pcVar49 = pcVar45;
            func_0x000107c5faec();
            func_0x000107c61170(pcVar45);
            pcStack_198 = pcStack_150;
          }
          if (uVar33 == 0) {
            pcVar45 = *(code **)(pcVar39 + 0x10);
          }
          else {
            pcVar45 = pcVar23;
            func_0x000107c60480();
          }
          pcVar15 = pcVar46;
          if (pcVar45 != (code *)0x0) {
            uVar36 = (ulong)pcVar45 & ((long)pcVar45 >> 0x3f ^ 0xffffffffffffffffU);
            pcStack_a0 = pcVar46;
            func_0x000100403514(0,uVar36,0);
            if ((long)pcVar45 < 0) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x103049088);
              (*pcVar9)();
            }
            pcVar51 = pcVar9 + 0x20;
            if (((ulong)pcVar9 & 0xc000000000000001) == 0) {
              do {
                pcVar46 = pcStack_a0;
                uVar41 = *(undefined8 *)pcVar51;
                func_0x000107c61174();
                func_0x000107c61174();
                uVar25 = uVar41;
                func_0x000107c4f348();
                func_0x000107c61180();
                uVar26 = uVar25;
                func_0x000107c4f38c();
                func_0x000107c61180();
                uVar40 = uVar26;
                func_0x000107c5faec();
                uVar30 = uVar36;
                func_0x000107c61170(uVar41);
                func_0x000107c61170(uVar41);
                func_0x000107c61170(uVar25);
                func_0x000107c61170(uVar26);
                uVar38 = *(ulong *)(pcVar46 + 0x10);
                uVar35 = uVar38 + 1;
                pcStack_a0 = pcVar46;
                if (*(ulong *)(pcVar46 + 0x18) >> 1 <= uVar38) {
                  uVar30 = uVar35;
                  func_0x000100403514(1 < *(ulong *)(pcVar46 + 0x18),uVar35,1);
                }
                *(ulong *)(pcStack_a0 + 0x10) = uVar35;
                *(undefined8 *)(pcStack_a0 + uVar38 * 0x10 + 0x20) = uVar40;
                *(ulong *)(pcStack_a0 + uVar38 * 0x10 + 0x28) = uVar36;
                pcVar45 = pcVar45 + -1;
                uVar36 = uVar30;
                pcVar46 = pcStack_a0;
                pcVar51 = pcVar51 + 8;
                pcVar15 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
              } while (pcVar45 != (code *)0x0);
            }
            else {
              pcVar51 = (code *)0x0;
              do {
                pcVar46 = pcStack_a0;
                pcVar15 = pcVar51;
                pcVar29 = pcVar9;
                FUN_10304c794(pcVar51,pcVar9,&PTR_PTR_1126d4dd8,0x112d4c900);
                pcVar42 = pcVar15;
                func_0x000107c615f0();
                func_0x000107c4f348();
                func_0x000107c61180();
                pcVar16 = pcVar42;
                func_0x000107c4f38c();
                func_0x000107c61180();
                pcVar17 = pcVar16;
                func_0x000107c5faec();
                func_0x000107c615ec(pcVar15,2);
                func_0x000107c61170(pcVar42);
                func_0x000107c61170(pcVar16);
                uVar36 = *(ulong *)(pcVar46 + 0x10);
                pcStack_a0 = pcVar46;
                if (*(ulong *)(pcVar46 + 0x18) >> 1 <= uVar36) {
                  func_0x000100403514(1 < *(ulong *)(pcVar46 + 0x18),uVar36 + 1,1);
                }
                pcVar51 = pcVar51 + 1;
                *(ulong *)(pcStack_a0 + 0x10) = uVar36 + 1;
                *(code **)(pcStack_a0 + uVar36 * 0x10 + 0x20) = pcVar17;
                *(code **)(pcStack_a0 + uVar36 * 0x10 + 0x28) = pcVar29;
                pcVar46 = pcStack_a0;
                pcVar15 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
              } while (pcVar45 != pcVar51);
            }
          }
          pcVar45 = pcVar22;
          func_0x000100077018(pcVar22,pcVar12,pcVar46);
          if (((ulong)pcVar45 & 1) == 0) {
            if (pcStack_198 != (code *)0x0) {
              uVar36 = (ulong)pcVar49 & 0xffffffffffff;
              if (((ulong)pcStack_198 & 0x2000000000000000) != 0) {
                uVar36 = (ulong)pcStack_198 >> 0x38 & 0xf;
              }
              if ((uVar36 != 0) &&
                 (pcVar45 = pcVar49, func_0x000100077018(pcVar49,pcStack_198,pcVar46),
                 pcVar12 = pcStack_198, pcVar22 = pcVar49, ((ulong)pcVar45 & 1) != 0))
              goto LAB_103048188;
              func_0x000107c6142c(pcStack_198);
            }
            func_0x000107c6142c(pcVar46);
            pcVar46 = pcVar15;
          }
          else {
LAB_103048188:
            func_0x000107c61434(pcVar12);
            func_0x000107c6142c(pcVar46);
            if (uVar33 == 0) {
              pcVar46 = *(code **)(pcVar39 + 0x10);
            }
            else {
              pcVar46 = pcVar23;
              func_0x000107c60480();
            }
            if (pcVar46 != (code *)0x0) {
              pcVar45 = (code *)0x0;
              do {
                pcVar51 = pcVar9;
                if (((ulong)pcVar9 & 0xc000000000000001) == 0) {
                  if (*(code **)(pcVar39 + 0x10) <= pcVar45) {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)SoftwareBreakpoint(1,0x103049084);
                    (*pcVar9)();
                  }
                  pcVar42 = *(code **)(pcVar9 + (long)pcVar45 * 8 + 0x20);
                  func_0x000107c61174();
                }
                else {
                  pcVar42 = pcVar45;
                  FUN_10304c794(pcVar45,pcVar9,&PTR_PTR_1126d4dd8,0x112d4c900);
                }
                if (SCARRY8((long)pcVar45,1)) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x103049080);
                  (*pcVar9)();
                }
                pcVar50 = pcVar45 + 1;
                pcVar16 = pcVar42;
                func_0x000107c4f348();
                func_0x000107c61180();
                pcVar17 = pcVar16;
                func_0x000107c4f38c();
                func_0x000107c61180();
                func_0x000107c61170(pcVar16);
                pcVar16 = pcVar17;
                func_0x000107c5faec();
                pcVar29 = pcVar51;
                func_0x000107c61170(pcVar17);
                if (pcVar16 == pcVar22 && pcVar51 == pcVar12) {
                  func_0x000107c6142c(pcVar51);
LAB_103048318:
                  if (pcStack_198 == (code *)0x0) {
                    func_0x000107c6142c(pcVar12);
                    if (*(int *)(pcVar10 + _DAT_112fe6d70) == 1) {
LAB_10304844c:
                      func_0x000104886d18(&pcStack_a0);
                      pcVar46 = pcStack_a0;
                      pcVar22 = pcVar42;
                      func_0x000107c4f348();
                      func_0x000107c61180();
                      pcVar12 = pcVar22;
                      func_0x000107c44f0c();
                      func_0x000107c61180();
                      func_0x000107c61170(pcVar22);
                      pcVar22 = pcVar12;
                      func_0x000107c5faec();
                      pcVar49 = pcVar29;
                      func_0x000107c61170(pcVar12);
                      if (*(long *)(pcVar46 + 0x10) == 0) {
LAB_10304877c:
                        func_0x000107c6142c(pcVar29);
                        pcVar22 = pcVar46;
                      }
                      else {
                        func_0x000107c61434(pcVar46);
                        pcVar49 = pcVar29;
                        func_0x000100029284();
                        if (((ulong)pcVar49 & 1) == 0) {
                          func_0x000107c6142c(pcVar29);
                          pcVar29 = pcVar46;
                          goto LAB_10304877c;
                        }
                        puVar1 = (ulong *)(*(long *)(pcVar46 + 0x38) + (long)pcVar22 * 0x10);
                        uVar35 = *puVar1;
                        pcVar22 = (code *)puVar1[1];
                        func_0x000107c61434(pcVar22);
                        pcVar49 = (code *)0x2;
                        func_0x000107c61430(pcVar46);
                        func_0x000107c6142c(pcVar29);
                        uVar36 = uVar35 & 0xffffffffffff;
                        if (((ulong)pcVar22 & 0x2000000000000000) != 0) {
                          uVar36 = (ulong)pcVar22 >> 0x38 & 0xf;
                        }
                        if (uVar36 != 0) {
                          pcVar46 = pcVar42;
                          func_0x000107c4f348();
                          func_0x000107c61180();
                          pcVar12 = pcVar46;
                          func_0x000107c5cab0();
                          func_0x000107c61180();
                          func_0x000107c61170(pcVar46);
                          pcVar46 = pcVar12;
                          func_0x000107c5faec();
                          func_0x000107c61170(pcVar12);
                          pcStack_a0 = pcVar46;
                          pcStack_98 = pcVar49;
                          func_0x000107c5fb78(0x20b7c220,0xa400000000000000);
                          pcVar46 = pcVar22;
                          func_0x000107c5fb78(uVar35);
                          func_0x000107c6142c(pcVar22);
                          uVar25 = 0;
                          pcStack_198 = pcStack_a0;
                          pcVar49 = pcStack_98;
                          goto LAB_1030487d4;
                        }
                      }
                      func_0x000107c6142c(pcVar22);
                      pcVar46 = pcVar42;
                      func_0x000107c4f348();
                      func_0x000107c61180();
                      pcVar22 = pcVar46;
                      func_0x000107c5cab0();
                      func_0x000107c61180();
                      func_0x000107c61170(pcVar46);
                      pcStack_198 = pcVar22;
                      func_0x000107c5faec();
                      pcVar46 = pcVar49;
                      func_0x000107c61170(pcVar22);
                      uVar25 = 0;
LAB_1030487d4:
                      pcVar22 = pcVar42;
                      func_0x000107c4f348();
                      func_0x000107c61180();
                      pcVar12 = pcVar22;
                      func_0x000107c4f38c();
                      func_0x000107c61180();
                      func_0x000107c61170(pcVar22);
                      pcVar22 = pcVar46;
                      if (pcVar12 == (code *)0x0) {
                        pcVar12 = (code *)0x0;
                        func_0x000107c5faec(0);
                        pcVar22 = pcVar46;
                        func_0x000107c5fadc();
                        func_0x000107c6142c(pcVar46);
                      }
                      pcVar46 = (code *)PTR_PTR_1126c3320;
                      func_0x000107c61168();
                      func_0x000107c5cb00();
                      func_0x000107c61180();
                      func_0x000107c61170(pcVar12);
                      pcVar12 = pcVar22;
                      pcVar45 = pcVar46;
                      if (pcVar46 == (code *)0x0) {
                        pcVar45 = (code *)0x0;
                        func_0x000107c5faec(0);
                        pcVar12 = pcVar22;
                        func_0x000107c5fadc();
                        func_0x000107c6142c(pcVar22);
                      }
                      func_0x000107c5faec();
                      uVar36 = (ulong)pcVar46 & 0xffffffffffff;
                      if (((ulong)pcVar12 & 0x2000000000000000) != 0) {
                        uVar36 = (ulong)pcVar12 >> 0x38 & 0xf;
                      }
                      if (uVar36 != 0) {
                        uVar26 = 0x112f35dd0;
                        puStack_90 = puVar8;
                        pcStack_88 = pcVar46;
                        pcStack_80 = pcVar12;
                        func_0x0001000285a8(0x112f35dd0,&UNK_10db7e208);
                        func_0x000100087bd4(&lStack_f0,FUN_103051e40,&pcStack_a0,uVar26);
                        if ((char)lStack_e8 == '\x01') {
                          lVar14 = *(long *)(puVar8 + _DAT_112f35c70);
                          func_0x000107c5c734();
                          func_0x000107c61180();
                          if (lVar14 != 0) {
                            func_0x000107c5fadc(pcVar46,pcVar12);
                            func_0x000107c4115c();
                            func_0x000107c615e8(lVar14);
                            func_0x000107c61170(pcVar46);
                          }
                        }
                      }
                      puVar11 = PTR_PTR_1126cf4e8;
                      func_0x000107c610f8(PTR_PTR_1126cf4e8);
                      func_0x000107c46f1c();
                      pcVar46 = pcVar42;
                      func_0x000107c4f348();
                      func_0x000107c61180();
                      func_0x000107c6142c(pcVar12);
                      if (pcVar49 == (code *)0x0) {
                        func_0x000107c61174(puVar11);
                        pcVar22 = (code *)0x0;
                      }
                      else {
                        func_0x000107c61174(puVar11);
                        func_0x000107c5fadc(pcStack_198,pcVar49);
                        func_0x000107c6142c(pcVar49);
                        pcVar22 = pcStack_198;
                      }
                      pcStack_198 = pcVar46;
                      func_0x0001069715d8(pcVar46,pcVar45,puVar11,pcVar22,uVar25);
                      func_0x000107c61180();
                      func_0x000107c61170(pcVar42);
                      func_0x000107c61170(puVar11);
                      func_0x000107c61170(puVar11);
                      func_0x000107c61170(pcVar22);
                      func_0x000107c61170(pcVar45);
                      func_0x000107c61170(pcVar46);
                      pcVar46 = pcVar15;
                      goto LAB_103047344;
                    }
                    uVar32 = (uint)*(undefined8 *)(puVar8 + _DAT_112f35d40);
LAB_1030484ac:
                    if ((uVar32 >> 0xd & 1) != 0) goto LAB_1030485dc;
                    uVar25 = 0;
                  }
                  else {
                    if ((pcVar22 == pcVar49) && (pcStack_198 == pcVar12)) {
                      func_0x000107c6142c(pcVar12);
                      func_0x000107c6142c(pcStack_198);
                      if (*(int *)(pcVar10 + _DAT_112fe6d70) == 1) {
LAB_103048410:
                        pcVar22 = *(code **)(puVar8 + _DAT_112f35cb0);
                        if (pcVar22 == (code *)0x0) {
                          pcStack_198 = (code *)0x0;
                          uVar25 = 1;
                          pcVar46 = pcVar29;
                          pcVar49 = (code *)0x0;
                        }
                        else {
                          func_0x000107c5c364();
                          func_0x000107c61180();
                          pcStack_198 = pcVar22;
                          func_0x000107c5faec();
                          pcVar46 = pcVar29;
                          func_0x000107c61170(pcVar22);
                          uVar25 = 1;
                          pcVar49 = pcVar29;
                        }
                        goto LAB_1030487d4;
                      }
                      uVar32 = (uint)*(undefined8 *)(puVar8 + _DAT_112f35d40);
                    }
                    else {
                      pcVar29 = pcVar12;
                      func_0x000107c605b8();
                      func_0x000107c6142c(pcVar12);
                      func_0x000107c6142c(pcStack_198);
                      if (*(int *)(pcVar10 + _DAT_112fe6d70) == 1) {
                        if (((ulong)pcVar22 & 1) == 0) goto LAB_10304844c;
                        goto LAB_103048410;
                      }
                      uVar32 = (uint)*(undefined8 *)(puVar8 + _DAT_112f35d40);
                      if (((ulong)pcVar22 & 1) == 0) goto LAB_1030484ac;
                    }
                    if ((uVar32 >> 0xc & 1) != 0) {
LAB_1030485dc:
                      func_0x000107c61170(pcVar42);
                      pcVar46 = pcVar15;
                      goto LAB_103047db4;
                    }
                    uVar25 = 1;
                  }
                  pcVar46 = pcVar42;
                  func_0x000107c4f348();
                  func_0x000107c61180();
                  pcVar22 = pcVar42;
                  func_0x000107c4f348();
                  func_0x000107c61180();
                  pcVar12 = pcVar22;
                  func_0x000107c4f38c();
                  func_0x000107c61180();
                  func_0x000107c61170(pcVar22);
                  pcVar22 = pcVar12;
                  func_0x000107c5faec();
                  func_0x000107c61170(pcVar12);
                  if (puVar8[_DAT_112f35bd0] == '\x01') {
                    uVar36 = (ulong)pcVar22 & 0xffffffffffff;
                    if (((ulong)pcVar29 & 0x2000000000000000) != 0) {
                      uVar36 = (ulong)pcVar29 >> 0x38 & 0xf;
                    }
                    if (uVar36 == 0) goto LAB_1030485ec;
                    lVar14 = *(long *)(puVar8 + _DAT_112f35c70);
                    func_0x000107c5c734();
                    func_0x000107c61180();
                    if (lVar14 == 0) goto LAB_1030485ec;
                    uVar26 = 0x112f35dd0;
                    puStack_90 = puVar8;
                    pcStack_88 = pcVar22;
                    pcStack_80 = pcVar29;
                    func_0x0001000285a8(0x112f35dd0,&UNK_10db7e208);
                    func_0x000100087bd4(&lStack_f0,FUN_1030504c4,&pcStack_a0,uVar26);
                    lVar21 = lStack_f0;
                    if ((char)lStack_e8 == '\x01') {
                      func_0x000107c5fadc(pcVar22,pcVar29);
                      lVar21 = lVar14;
                      func_0x000107c4115c();
                      func_0x000107c61170(pcVar22);
                    }
                    if (lVar21 == 0) {
                      func_0x000108f42294(*(undefined8 *)(puVar8 + _DAT_112f35ce8));
                    }
                    puVar11 = PTR_PTR_1126cf4e8;
                    func_0x000107c610f8(PTR_PTR_1126cf4e8);
                    func_0x000107c46f1c();
                    func_0x000107c615e8(lVar14);
                  }
                  else {
LAB_1030485ec:
                    puVar11 = (undefined *)0x0;
                  }
                  func_0x000107c6142c(pcVar29);
                  pcStack_198 = pcVar46;
                  func_0x0001069713fc(pcVar46,puVar11,uVar25);
                  func_0x000107c61180();
                  func_0x000107c61170(pcVar46);
                  func_0x000107c61170(puVar11);
                  goto LAB_10304862c;
                }
                pcVar29 = pcVar51;
                func_0x000107c605b8(pcVar16,pcVar51,pcVar22,pcVar12,0);
                func_0x000107c6142c(pcVar51);
                if (((ulong)pcVar16 & 1) != 0) goto LAB_103048318;
                func_0x000107c61170(pcVar42);
                pcVar45 = pcVar45 + 1;
              } while (pcVar50 != pcVar46);
            }
            func_0x000107c6142c(pcVar12);
LAB_103048300:
            func_0x000107c6142c(pcStack_198);
            pcVar46 = pcVar15;
          }
        }
      }
LAB_103047db4:
      uVar36 = *(ulong *)(pcVar10 + _DAT_112fe6d50);
      pcVar22 = *(code **)(pcVar10 + _DAT_112fe6d50 + 8);
      func_0x000107c61434(pcVar46);
      pcVar49 = pcVar47;
      func_0x000107c61558();
      uVar35 = uVar36;
      pcVar45 = pcVar22;
      pcStack_a0 = pcVar47;
      func_0x000100029284();
      pcVar12 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar38 = (ulong)~(uint)pcVar45 & 1;
      lVar14 = *(long *)(pcVar47 + 0x10) + uVar38;
      if (SCARRY8(*(long *)(pcVar47 + 0x10),uVar38)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x103049070);
        (*pcVar9)();
      }
      if (*(long *)(pcVar47 + 0x18) < lVar14) {
        func_0x00010304d2e8(lVar14,pcVar49);
        uVar35 = uVar36;
        pcStack_150 = pcVar22;
        func_0x000100029284();
        pcVar12 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
        if (((uint)pcVar45 & 1) != ((uint)pcStack_150 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1030497dc);
          (*pcVar9)();
        }
      }
      else {
        pcStack_150 = pcVar45;
        if (((ulong)pcVar49 & 1) == 0) {
          func_0x00010304cee4();
        }
      }
      pcVar47 = pcStack_a0;
      if (((ulong)pcVar45 & 1) == 0) {
        *(ulong *)(pcStack_a0 + (uVar35 >> 6) * 8 + 0x40) =
             *(ulong *)(pcStack_a0 + (uVar35 >> 6) * 8 + 0x40) | 1L << (uVar35 & 0x3f);
        puVar1 = (ulong *)(*(long *)(pcStack_a0 + 0x30) + uVar35 * 0x10);
        *puVar1 = uVar36;
        puVar1[1] = (ulong)pcVar22;
        *(code **)(*(long *)(pcStack_a0 + 0x38) + uVar35 * 8) = pcVar46;
        if (SCARRY8(*(long *)(pcStack_a0 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10304907c);
          (*pcVar9)();
        }
        *(long *)(pcStack_a0 + 0x10) = *(long *)(pcStack_a0 + 0x10) + 1;
        func_0x000107c61434(pcVar22);
      }
      else {
        uVar25 = *(undefined8 *)(*(long *)(pcStack_a0 + 0x38) + uVar35 * 8);
        *(code **)(*(long *)(pcStack_a0 + 0x38) + uVar35 * 8) = pcVar46;
        func_0x000107c6142c(uVar25);
      }
      func_0x000101eef5a8(&pcStack_120,pcVar46);
      func_0x000107c61170(pcVar10);
      pcVar46 = pcVar12;
    } while (pcVar44 != pcVar37);
  }
  func_0x000107c6142c(pcVar28);
  puVar20 = puStack_118;
  func_0x000107c61434();
  func_0x000101eef5a8();
  pcVar46 = pcStack_120;
  func_0x000107c61434();
  pcVar9 = pcVar46;
  func_0x000101eef5a8();
  pcVar37 = *(code **)(param_4 + 0x60);
  if ((ulong)pcVar37 >> 0x3e == 0) {
    pcVar28 = *(code **)(((ulong)pcVar37 & 0xffffffffffffff8) + 0x10);
    lVar14 = _DAT_112f35c70;
  }
  else {
    pcVar28 = (code *)((ulong)pcVar37 & 0xffffffffffffff8);
    if ((code *)0x7fffffffffffffff < pcVar37) {
      pcVar28 = pcVar37;
    }
    func_0x000107c60480();
    pcVar9 = (code *)0x0;
    lVar14 = _DAT_112f35c70;
  }
  _DAT_112f35c70 = lVar14;
  if (pcVar28 != (code *)0x0) {
    pcVar44 = (code *)0x0;
    puVar2 = (undefined8 *)(puVar8 + _DAT_112f35cd8);
    bVar3 = param_4[5];
    do {
      if (((ulong)pcVar37 & 0xc000000000000001) == 0) {
        if (*(code **)(((ulong)pcVar37 & 0xffffffffffffff8) + 0x10) <= pcVar44) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x103049064);
          (*pcVar9)();
        }
        pcVar9 = *(code **)(pcVar37 + (long)pcVar44 * 8 + 0x20);
        func_0x000107c61174();
        pcVar23 = pcStack_150;
      }
      else {
        pcVar9 = pcVar44;
        pcVar23 = pcVar37;
        FUN_10304c794(pcVar44,pcVar37,&PTR_PTR_1126b47a0,0x112d55c08);
      }
      pcVar39 = pcVar44 + 1;
      if (SCARRY8((long)pcVar44,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x103049060);
        (*pcVar9)();
      }
      pcVar10 = pcVar9;
      func_0x000107c5d0f0();
      pcStack_150 = pcVar23;
      if (pcVar10 == (code *)0xa) {
LAB_103048c68:
        func_0x000107c61170();
      }
      else {
        pcVar10 = pcVar9;
        func_0x000107c4f638();
        func_0x000107c61180();
        pcStack_150 = pcVar23;
        if (pcVar10 == (code *)0x0) goto LAB_103048c68;
        func_0x000107c61170();
        pcVar10 = pcVar9;
        func_0x000107c4f638();
        func_0x000107c61180();
        if (pcVar10 == (code *)0x0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1030497c8);
          (*pcVar9)();
        }
        pcVar22 = pcVar10;
        func_0x000107c5faec();
        func_0x000107c61170(pcVar10);
        if (*(long *)(pcVar47 + 0x10) == 0) {
LAB_103048d48:
          func_0x000107c6142c(pcVar23);
          pcVar23 = (code *)*puVar2;
          pcVar10 = (code *)puVar2[1];
          func_0x000107c5fadc();
          pcVar22 = pcVar9;
          func_0x000107c4f638();
          func_0x000107c61180();
          if (pcVar22 == (code *)0x0) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1030497cc);
            (*pcVar9)();
          }
          pcVar12 = pcVar22;
          func_0x000107c5faec();
          func_0x000107c61170(pcVar22);
          func_0x000104886d18(&pcStack_a0);
          if (((ulong)pcStack_a0 & 1) == 0) {
LAB_103048eb0:
            func_0x000107c6142c(pcVar10);
            puVar34 = (undefined *)0x0;
          }
          else {
            uVar33 = (ulong)pcVar12 & 0xffffffffffff;
            if (((ulong)pcVar10 & 0x2000000000000000) != 0) {
              uVar33 = (ulong)pcVar10 >> 0x38 & 0xf;
            }
            if (uVar33 == 0) goto LAB_103048eb0;
            lVar21 = *(long *)(puVar8 + lVar14);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar21 == 0) goto LAB_103048eb0;
            uVar25 = 0x112f35dd0;
            puStack_90 = puVar8;
            pcStack_88 = pcVar12;
            pcStack_80 = pcVar10;
            func_0x0001000285a8(0x112f35dd0,&UNK_10db7e208);
            func_0x000100087bd4(&lStack_f0,FUN_1030502a0,&pcStack_a0,uVar25);
            if ((char)lStack_e8 == '\x01') {
              func_0x000107c5fadc(pcVar12,pcVar10);
              func_0x000107c41160(lVar21);
              func_0x000107c61170(pcVar12);
              puVar34 = PTR_PTR_1126cf4e8;
              func_0x000107c610f8(PTR_PTR_1126cf4e8);
              func_0x000107c46f1c();
              func_0x000107c6142c(pcVar10);
              func_0x000107c615e8(lVar21);
            }
            else {
              puVar34 = PTR_PTR_1126cf4e8;
              func_0x000107c610f8(PTR_PTR_1126cf4e8);
              func_0x000107c46f1c();
              func_0x000107c6142c(pcVar10);
              func_0x000107c615e8(lVar21);
            }
          }
          pcVar10 = pcVar9;
          pcStack_150 = pcVar23;
          func_0x0001069719d4(pcVar9,pcVar23,0,puVar34,bVar3);
          func_0x000107c61180();
          func_0x000107c61170(pcVar23);
          func_0x000107c61170(puVar34);
          pcVar23 = pcStack_110;
          if (pcVar10 == (code *)0x0) {
            func_0x000107c61170();
          }
          else {
            func_0x000107c61174();
            pcVar22 = pcVar23;
            func_0x000107c61550();
            if ((((int)pcVar22 == 0) || ((long)pcVar23 < 0)) ||
               (pcVar22 = pcVar23, ((ulong)pcVar23 >> 0x3e & 1) != 0)) {
              if ((ulong)pcVar23 >> 0x3e == 0) {
                pcStack_150 = *(code **)(((ulong)pcVar23 & 0xffffffffffffff8) + 0x10);
              }
              else {
                pcStack_150 = (code *)((ulong)pcVar23 & 0xffffffffffffff8);
                if ((code *)0x7fffffffffffffff < pcVar23) {
                  pcStack_150 = pcVar23;
                }
                func_0x000107c60480();
              }
              pcStack_150 = pcStack_150 + 1;
              pcVar22 = (code *)0x0;
              FUN_10304daf8(0,pcStack_150,1,pcVar23,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                            &UNK_10da27d40);
            }
            uVar36 = (ulong)pcVar22 & 0xffffffffffffff8;
            uVar33 = *(ulong *)(uVar36 + 0x10);
            pcVar23 = (code *)(uVar33 + 1);
            pcVar12 = pcVar22;
            if (*(ulong *)(uVar36 + 0x18) >> 1 <= uVar33) {
              pcVar12 = (code *)(ulong)(1 < *(ulong *)(uVar36 + 0x18));
              pcStack_150 = pcVar23;
              FUN_10304daf8(pcVar12,pcVar23,1,pcVar22,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                            &UNK_10da27d40);
              uVar36 = (ulong)pcVar12 & 0xffffffffffffff8;
            }
            *(code **)(uVar36 + 0x10) = pcVar23;
            *(code **)(uVar36 + uVar33 * 8 + 0x20) = pcVar10;
            func_0x000107c61170(pcVar9);
            func_0x000107c61170();
            pcVar9 = pcVar10;
            pcStack_110 = pcVar12;
          }
        }
        else {
          func_0x000107c61434(pcVar47);
          pcStack_150 = pcVar23;
          func_0x000100029284(pcVar22);
          if (((ulong)pcStack_150 & 1) == 0) {
            func_0x000107c6142c(pcVar23);
            pcVar23 = pcVar47;
            goto LAB_103048d48;
          }
          func_0x000107c61170(pcVar9);
          func_0x000107c6142c(pcVar23);
          pcVar9 = pcVar47;
          func_0x000107c6142c();
        }
      }
      pcVar44 = pcVar44 + 1;
    } while (pcVar39 != pcVar28);
  }
  pcVar37 = pcStack_110;
  uVar33 = (ulong)pcStack_110 >> 0x3e;
  if (uVar33 == 0) {
    pcStack_168 = *(code **)((code *)((ulong)pcStack_110 & 0xffffffffffffff8) + 0x10);
  }
  else {
    pcVar9 = (code *)((ulong)pcStack_110 & 0xffffffffffffff8);
    if (((ulong)pcStack_110 & 0x8000000000000000) != 0) {
      pcVar9 = pcStack_110;
    }
    func_0x000107c60480();
    pcStack_168 = pcVar9;
  }
  lVar14 = _DAT_112f35d40;
  if (((puVar8[_DAT_112f35d40 + 2] & 1) != 0) && ((param_4[0x78] & 1) != 0)) {
    FUN_1030502f4();
    pcVar28 = pcVar37;
    func_0x000107c61550();
    if ((uVar33 != 0) || (pcVar44 = pcVar37, ((ulong)pcVar28 & 1) == 0)) {
      if (uVar33 == 0) {
        pcVar28 = *(code **)((code *)((ulong)pcVar37 & 0xffffffffffffff8) + 0x10);
      }
      else {
        pcVar28 = (code *)((ulong)pcVar37 & 0xffffffffffffff8);
        if (((ulong)pcVar37 & 0x8000000000000000) != 0) {
          pcVar28 = pcVar37;
        }
        func_0x000107c60480(pcVar28);
      }
      pcVar44 = (code *)0x0;
      FUN_10304daf8(0,pcVar28 + 1,1,pcVar37,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                    &UNK_10da27d40);
    }
    uVar36 = (ulong)pcVar44 & 0xffffffffffffff8;
    uVar33 = *(ulong *)(uVar36 + 0x10);
    pcVar37 = pcVar44;
    if (*(ulong *)(uVar36 + 0x18) >> 1 <= uVar33) {
      pcVar37 = (code *)(ulong)(1 < *(ulong *)(uVar36 + 0x18));
      FUN_10304daf8(pcVar37,uVar33 + 1,1,pcVar44,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                    &UNK_10da27d40);
      uVar36 = (ulong)pcVar37 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar36 + 0x10) = uVar33 + 1;
    *(code **)(uVar36 + uVar33 * 8 + 0x20) = pcVar9;
  }
  pcVar9 = (code *)((ulong)pcVar37 & 0xffffffffffffff8);
  if ((ulong)pcVar37 >> 0x3e == 0) {
    pcVar28 = *(code **)(pcVar9 + 0x10);
    lVar21 = _DAT_112f35cc0;
    lVar18 = _DAT_112f35d00;
  }
  else {
    pcVar28 = pcVar9;
    if ((code *)0x7fffffffffffffff < pcVar37) {
      pcVar28 = pcVar37;
    }
    func_0x000107c60480();
    lVar21 = _DAT_112f35cc0;
    lVar18 = _DAT_112f35d00;
  }
  _DAT_112f35cc0 = lVar21;
  _DAT_112f35d00 = lVar18;
  pcStack_160 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pcVar28 != (code *)0x0) {
    pcVar44 = (code *)0x0;
    do {
      while( true ) {
        if (((ulong)pcVar37 & 0xc000000000000001) == 0) {
          if (*(code **)(pcVar9 + 0x10) <= pcVar44) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x103049328);
            (*pcVar9)();
          }
          pcVar23 = *(code **)(pcVar37 + (long)pcVar44 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          pcVar23 = pcVar44;
          FUN_10304c794(pcVar44,pcVar37,&PTR_PTR_1126c51c8,0x112e3c238);
        }
        pcVar39 = pcVar44 + 1;
        if (SCARRY8((long)pcVar44,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x103049324);
          (*pcVar9)();
        }
        if (*(ulong *)(puVar8 + lVar18) < 0x1c &&
            (1L << (*(ulong *)(puVar8 + lVar18) & 0x3f) & 0xc004400U) != 0) break;
LAB_1030492a0:
        pcVar44 = pcStack_160;
        func_0x000107c61558();
        pcStack_a0 = pcStack_160;
        if (((ulong)pcVar44 & 1) == 0) {
          func_0x0001029bd1a0(0,*(long *)(pcStack_160 + 0x10) + 1,1);
        }
        uVar33 = *(ulong *)(pcStack_a0 + 0x10);
        if (*(ulong *)(pcStack_a0 + 0x18) >> 1 <= uVar33) {
          func_0x0001029bd1a0(1 < *(ulong *)(pcStack_a0 + 0x18),uVar33 + 1,1);
        }
        *(ulong *)(pcStack_a0 + 0x10) = uVar33 + 1;
        *(code **)(pcStack_a0 + uVar33 * 8 + 0x20) = pcVar23;
        pcVar44 = pcVar39;
        pcStack_160 = pcStack_a0;
        if (pcVar39 == pcVar28) goto LAB_103049360;
      }
      lVar24 = *(long *)(puVar8 + lVar21);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar24 == 0) {
        lVar43 = 0;
      }
      else {
        lVar43 = lVar24;
        func_0x000107c5a97c();
        func_0x000107c615e8(lVar24);
      }
      pcVar10 = pcVar23;
      FUN_103967f3c(pcVar23,lVar43);
      if (((ulong)pcVar10 & 1) != 0) goto LAB_1030492a0;
      func_0x000107c61170(pcVar23);
      pcVar44 = pcVar44 + 1;
    } while (pcVar39 != pcVar28);
  }
LAB_103049360:
  plVar31 = (long *)(puVar8 + _DAT_112f35d20);
  pcVar9 = pcStack_160;
  if (*(byte *)(plVar31 + 4) == 2) {
    apcStack_130[0] = pcStack_160;
    func_0x000107c6157c(pcStack_160);
  }
  else {
    lStack_e8 = plVar31[1];
    lStack_f0 = *plVar31;
    lStack_d8 = plVar31[3];
    lStack_e0 = plVar31[2];
    bStack_d0 = *(byte *)(plVar31 + 4) & 1;
    uVar25 = *(undefined8 *)(puVar8 + _DAT_112f35d28);
    func_0x000107c6157c(uVar25);
    func_0x0001000d224c(&pcStack_a0);
    func_0x000107c61574(uVar25);
    uVar33 = *(ulong *)(param_4 + 0x38);
    if (uVar33 == 0) {
      uVar36 = 0;
      uVar33 = 0xe000000000000000;
    }
    else {
      uVar36 = *(ulong *)(param_4 + 0x30) & 0xffffffffffff;
    }
    func_0x000107c61434();
    func_0x000107c6142c(uVar33);
    pcVar44 = pcStack_80;
    pcVar28 = pcStack_88;
    if ((uVar33 & 0x2000000000000000) != 0) {
      uVar36 = uVar33 >> 0x38 & 0xf;
    }
    func_0x0001000a8868(&pcStack_a0,pcStack_88);
    plVar31 = &lStack_f0;
    (**(code **)(pcVar44 + 8))(pcStack_160,plVar31,uVar36 != 0,pcVar28,pcVar44);
    func_0x000107c61574(pcStack_160);
    uVar25 = *(undefined8 *)(puVar8 + _DAT_112f35b88);
    plStack_138 = plVar31;
    apcStack_130[0] = pcVar9;
    func_0x000107c61438(pcVar9,2);
    func_0x000107c6157c(uVar25);
    func_0x000100087c34(&plStack_138);
    func_0x000107c61574(uVar25);
    func_0x000107c6142c(pcVar9);
    func_0x0001000834e4(&pcStack_a0);
  }
  pcVar28 = (code *)((ulong)param_3 & 0xffffffffffffff8);
  if ((ulong)param_3 >> 0x3e == 0) {
    pcVar44 = *(code **)(pcVar28 + 0x10);
  }
  else {
    pcVar44 = pcVar28;
    if ((code *)0x7fffffffffffffff < param_3) {
      pcVar44 = param_3;
    }
    func_0x000107c60480();
  }
  pcVar23 = (code *)0x0;
  do {
    pcVar39 = pcVar23;
    if (pcVar44 == pcVar39) break;
    if (((ulong)param_3 & 0xc000000000000001) == 0) {
      if (*(code **)(pcVar28 + 0x10) <= pcVar39) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10304973c);
        (*pcVar9)();
      }
      pcVar23 = *(code **)(param_3 + (long)pcVar39 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      pcVar23 = pcVar39;
      FUN_10304c950();
    }
    if (SCARRY8((long)pcVar39,1)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x103049530);
      (*pcVar9)();
    }
    cVar6 = pcVar23[_DAT_112fe6d58];
    func_0x000107c61170();
    pcVar23 = pcVar39 + 1;
  } while (cVar6 != (code)0x2);
  if (((long)pcVar9 < 0) || (((ulong)pcVar9 >> 0x3e & 1) != 0)) {
    pcVar28 = (code *)((ulong)pcVar9 & 0xffffffffffffff8);
    if ((code *)0x7fffffffffffffff < pcVar9) {
      pcVar28 = pcVar9;
    }
    func_0x000107c60480();
  }
  else {
    pcVar28 = *(code **)(((ulong)pcVar9 & 0xffffffffffffff8) + 0x10);
  }
  func_0x000107c6142c(pcVar9);
  if ((pcVar28 == (code *)0x0) ||
     (((pcVar44 == pcVar39 || (pcStack_168 == (code *)0x0)) &&
      (((byte)puVar8[lVar14 + 2] >> 1 & 1) != 0)))) {
    uVar25 = 0;
    FUN_103050598(0,0x112d56378,&PTR_PTR_1126ae790);
    func_0x000107c6157c(param_1);
    func_0x000100bc7fa4(uVar25);
    FUN_10304285c();
    func_0x000107c5c528();
    func_0x000107c615e8(uVar25);
    uVar26 = *(undefined8 *)(puVar8 + _DAT_112f35b28);
    func_0x000107c430c0(uVar26);
    func_0x000107c61180();
    uVar25 = uVar26;
    func_0x000107c421ac();
    func_0x000107c61180();
    func_0x000107c61170(uVar26);
    puVar34 = &UNK_110601250;
    func_0x000107c613fc(&UNK_110601250,0x20,7);
    *(code **)(puVar34 + 0x10) = FUN_1030502cc;
    *(undefined8 *)(puVar34 + 0x18) = param_1;
    pcStack_80 = FUN_103050434;
    pcStack_a0 = (code *)PTR___NSConcreteStackBlock_11034bd00;
    pcStack_98 = (code *)0x42000000;
    puStack_90 = &UNK_101218f4c;
    pcStack_88 = (code *)&UNK_110601268;
    ppcVar27 = &pcStack_a0;
    puStack_78 = puVar34;
    func_0x000107c60bc4(ppcVar27);
    puVar34 = puStack_78;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(puVar34);
    func_0x000107c5c320(uVar25);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c60bd0(ppcVar27);
    func_0x000107c61574(param_1);
    func_0x000107c61170(uVar25);
  }
  else {
    func_0x000100087f6c(apcStack_130);
    func_0x000100c7f554();
  }
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  func_0x000107c6142c(pcVar47);
  func_0x000107c6142c(pcVar37);
  func_0x000107c6142c(puVar20);
  func_0x000107c6142c(pcVar46);
  func_0x000107c6142c(pcVar9);
  func_0x000107c61170(puVar8);
  return;
LAB_103047438:
  func_0x000107c61170(pcVar46);
  pcVar49 = pcVar49 + 1;
  pcVar46 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pcVar51 == pcVar12) goto LAB_103047db4;
  goto LAB_103047458;
}



/* Entry: 1030497dc; end: 1030497df;  */

void FUN_1030497dc(void)

{
  return;
}



/* Entry: 1030497e0; end: 103049873; -[_TtC54RankedPostableContentDestinationsServiceImplementation54RankedPostableContentDestinationsServiceImplementation sync] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030497e0(long param_1)

{
  long *plVar1;
  code *pcVar2;
  code *pcVar3;
  long lVar4;
  
  func_0x000107c61174();
  plVar1 = (long *)0x0;
  FUN_103046bb4();
  pcVar2 = FUN_1030497dc;
  lVar4 = 0;
  (**(code **)(*plVar1 + 0x60))(FUN_1030497dc);
  func_0x000107c61574(plVar1);
  pcVar3 = pcVar2;
  func_0x000107c614f0(pcVar2);
  (**(code **)(lVar4 + 0x18))(*(undefined8 *)(param_1 + _DAT_112f35b48),pcVar3,lVar4);
  func_0x000107c615e8(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103049874; end: 1030498af;  */

/* WARNING: Possible PIC construction at 0x000103049894: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103049898) */

void FUN_103049874(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1030498b0; end: 103049a2f;  */

/* WARNING: Possible PIC construction at 0x0001030498dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030498ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030498e0) */
/* WARNING: Removing unreachable block (ram,0x0001030498f0) */

void FUN_1030498b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103049a30; end: 103049af3;  */

void FUN_103049a30(undefined4 *param_1,undefined8 *param_2,code *param_3)

{
  uint7 uVar1;
  undefined1 auStack_a0 [4];
  byte bStack_9c;
  byte bStack_9b;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  byte bStack_28;
  
  (*param_3)(auStack_a0,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_2[6],
             *(undefined1 *)(param_2 + 7));
  uVar1 = CONCAT16(auStack_a0[3],
                   (uint6)(CONCAT14(auStack_a0[2],
                                    (uint)(CONCAT12(auStack_a0[1],(ushort)(auStack_a0[0] & 1)) &
                                          0x1ffff)) & 0x1ffffffff)) & 0x1ffffffffffff;
  *param_1 = CONCAT13((char)(uVar1 >> 0x30),
                      CONCAT12((char)(uVar1 >> 0x20),CONCAT11((char)(uVar1 >> 0x10),(char)uVar1)));
  *(byte *)(param_1 + 1) = bStack_9c & 1;
  *(byte *)((long)param_1 + 5) = bStack_9b & 1;
  *(undefined8 *)(param_1 + 4) = uStack_90;
  *(undefined8 *)(param_1 + 2) = uStack_98;
  *(undefined8 *)(param_1 + 8) = uStack_80;
  *(undefined8 *)(param_1 + 6) = uStack_88;
  *(undefined8 *)(param_1 + 0xc) = uStack_70;
  *(undefined8 *)(param_1 + 10) = uStack_78;
  *(undefined8 *)(param_1 + 0x10) = uStack_60;
  *(undefined8 *)(param_1 + 0xe) = uStack_68;
  *(undefined8 *)(param_1 + 0x12) = uStack_58;
  *(undefined8 *)(param_1 + 0x16) = uStack_48;
  *(undefined8 *)(param_1 + 0x14) = uStack_50;
  *(undefined8 *)(param_1 + 0x18) = uStack_40;
  *(undefined8 *)(param_1 + 0x1c) = uStack_30;
  *(undefined8 *)(param_1 + 0x1a) = uStack_38;
  *(byte *)(param_1 + 0x1e) = bStack_28 & 1;
  return;
}



/* Entry: 103049af4; end: 103049bcf;  */

/* WARNING: Possible PIC construction at 0x000103049b8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103049b90) */

void FUN_103049af4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar9 = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  uVar8 = param_2[0x78];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  uVar10 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar10;
  *(undefined8 *)(param_1 + 0x48) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x60);
  uVar10 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar10;
  *(undefined8 *)(param_1 + 0x60) = uVar9;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  param_1[0x78] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 103049bd0; end: 103049e43;  */

/* WARNING: Removing unreachable block (ram,0x000103049c7c) */
/* WARNING: Removing unreachable block (ram,0x000103049cb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103049bd0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar9 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar9 - extraout_x12;
  func_0x00010853f454();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return 0;
  }
  func_0x000104886d18(&uStack_60);
  uVar7 = uStack_58;
  uVar3 = uStack_60;
  func_0x000104886d18(&uStack_60);
  uVar2 = 0;
  func_0x000104401940(0);
  func_0x000107c610f8();
  func_0x0001044016bc(uVar3,uVar7,uStack_60,uStack_58,uVar2);
  lVar4 = *(long *)(unaff_x20 + _DAT_112f35d30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar10 = lVar4;
    func_0x000107c44128();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    if (lVar10 != 0) {
      func_0x000107c5ee94(lVar6,lVar10);
      func_0x000107c61170(lVar10);
      uVar7 = 0;
      goto LAB_103049d58;
    }
  }
  uVar7 = 1;
LAB_103049d58:
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar4 + -8);
  (**(code **)(lVar10 + 0x38))(lVar6,uVar7,1,lVar4);
  func_0x0001030505d8(lVar6,puVar9,0x112d373d8,&UNK_10d9014c0);
  puVar5 = puVar9;
  (**(code **)(lVar10 + 0x30))(puVar9,1,lVar4);
  puVar8 = (undefined1 *)0x0;
  if ((int)puVar5 != 1) {
    func_0x000107c5ee70();
    (**(code **)(lVar10 + 8))(puVar9,lVar4);
    puVar8 = puVar5;
  }
  lVar4 = lVar1;
  func_0x0001069716dc(lVar1,uVar3,puVar8);
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(uVar3);
  FUN_10304ec74(lVar6,0x112d373d8,&UNK_10d9014c0);
  return lVar4;
}



/* Entry: 103049e44; end: 103049ed3; -[_TtC54RankedPostableContentDestinationsServiceImplementation54RankedPostableContentDestinationsServiceImplementation selectionStoryObservable] */

void FUN_103049e44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = 0;
  FUN_103046bb4(0);
  uVar2 = 0;
  FUN_103050598(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar3 = 0x103051df4;
  func_0x0001000bfde0(0x103051df4,0,uVar2);
  func_0x000107c61574(uVar1);
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103049ed4; end: 103049f6f; -[_TtC54RankedPostableContentDestinationsServiceImplementation54RankedPostableContentDestinationsServiceImplementation viewMoreThresholdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103049ed4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  func_0x000107c61174();
  puVar1 = PTR___sSiSQsWP_11034ded0;
  func_0x0001000c2068(PTR___sSiSQsWP_11034ded0);
  uVar2 = 0;
  FUN_103050598(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  pcVar3 = FUN_103049f70;
  func_0x0001000bfde0(FUN_103049f70,0,uVar2);
  func_0x000107c61574(puVar1);
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103049f70; end: 103049fbb;  */

void FUN_103049f70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  FUN_103050598(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c60110(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 103049fbc; end: 10304a1d3;  */

void FUN_103049fbc(undefined8 *param_1,ulong *param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar9 = *param_2;
  uVar8 = uVar9 & 0xffffffffffffff8;
  if (uVar9 >> 0x3e == 0) {
    uVar10 = *(ulong *)(uVar8 + 0x10);
  }
  else {
    uVar10 = uVar8;
    if (0x7fffffffffffffff < uVar9) {
      uVar10 = uVar9;
    }
    func_0x000107c60480();
  }
  uVar11 = 0;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while( true ) {
    if (uVar10 == uVar11) {
      puVar6 = puVar7;
      (*param_3)(puVar7,param_5,param_6);
      func_0x000107c6142c(puVar7);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar6 != (undefined *)0x0) {
        puVar7 = puVar6;
      }
      *param_1 = puVar7;
      return;
    }
    if ((uVar9 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10304a1c0);
        (*pcVar2)();
      }
      uVar3 = *(ulong *)(uVar9 + uVar11 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar3 = uVar11;
      FUN_10304c794(uVar11,uVar9,&PTR_PTR_1126c51c8,0x112e3c238);
    }
    uVar1 = uVar11 + 1;
    if (SCARRY8(uVar11,1)) break;
    uVar4 = uVar3;
    func_0x000106971c30();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar11 = uVar11 + 1;
    if (uVar4 != 0) {
      puVar6 = puVar7;
      func_0x000107c61550();
      if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
         (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar7 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar7) {
            puVar5 = puVar7;
          }
          func_0x000107c60480(puVar5);
        }
        puVar6 = (undefined *)0x0;
        FUN_10304daf8(0,puVar5 + 1,1,puVar7,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                      &UNK_10da27d40);
      }
      uVar3 = (ulong)puVar6 & 0xffffffffffffff8;
      uVar11 = *(ulong *)(uVar3 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar11) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_10304daf8(puVar7,uVar11 + 1,1,puVar6,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                      &UNK_10da27d40);
        uVar3 = (ulong)puVar7 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar3 + 0x10) = uVar11 + 1;
      *(ulong *)(uVar3 + uVar11 * 8 + 0x20) = uVar4;
      uVar11 = uVar1;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10304a1bc);
  (*pcVar2)();
}



/* Entry: 10304a1d4; end: 10304a21b;  */

void FUN_10304a1d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  FUN_103050598(0,0x112e3c238,&PTR_PTR_1126c51c8);
  func_0x000107c5fc48(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10304a21c; end: 10304a363; -[_TtC54RankedPostableContentDestinationsServiceImplementation54RankedPostableContentDestinationsServiceImplementation searchSelectionStoryObservableForQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304a21c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112f35ce0);
  func_0x000107c61174(param_1);
  uVar5 = puVar1[1];
  uVar7 = puVar1[1];
  uVar6 = *puVar1;
  uVar2 = 0;
  FUN_103046bb4(0);
  puVar3 = &UNK_110601200;
  func_0x000107c613fc(&UNK_110601200,0x30,7);
  *(undefined8 *)(puVar3 + 0x18) = uVar7;
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  func_0x000107c6157c(uVar5);
  func_0x000107c61434(param_2);
  uVar5 = 0x112e3c220;
  func_0x0001000285a8(0x112e3c220,&UNK_10db7df50);
  uVar6 = 0x103051db4;
  func_0x0001000bfde0(0x103051db4,puVar3,uVar5);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar3);
  uVar5 = 0;
  FUN_103050598(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  pcVar4 = FUN_10304a1d4;
  func_0x0001000bfde0(FUN_10304a1d4,0,uVar5);
  func_0x000107c61574(uVar6);
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(pcVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10304a364; end: 10304a517;  */

void FUN_10304a364(long *param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar9 = *param_2;
  uVar11 = uVar9 & 0xffffffffffffff8;
  if (uVar9 >> 0x3e == 0) {
    uVar10 = *(ulong *)(uVar11 + 0x10);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar10 = uVar11;
    if (0x7fffffffffffffff < uVar9) {
      uVar10 = uVar9;
    }
    func_0x000107c60480();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar2;
  if (uVar10 != 0) {
    uVar12 = 0;
    do {
      while( true ) {
        if ((uVar9 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar11 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10304a4d4);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(uVar9 + uVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar12;
          FUN_10304c794(uVar12,uVar9,&PTR_PTR_1126c51c8,0x112e3c238);
        }
        uVar1 = uVar12 + 1;
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10304a4d0);
          (*pcVar3)();
        }
        uVar5 = 0;
        FUN_103050598(0,0x112d60fb0,&PTR_PTR_1126b3568);
        uVar6 = param_3;
        func_0x000107c5fc48(param_3,uVar5);
        uVar7 = uVar4;
        func_0x000106979cdc(uVar4,uVar6);
        func_0x000107c61170(uVar6);
        if ((uVar7 & 1) != 0) break;
        func_0x000107c61170(uVar4);
        uVar12 = uVar12 + 1;
        if (uVar1 == uVar10) goto LAB_10304a4f0;
      }
      puVar8 = puVar2;
      func_0x000107c61558();
      if (((ulong)puVar8 & 1) == 0) {
        func_0x0001029bd1a0(0,*(long *)(puVar2 + 0x10) + 1,1);
      }
      uVar12 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar12) {
        func_0x0001029bd1a0(1 < *(ulong *)(puVar2 + 0x18),uVar12 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar12 + 1;
      *(ulong *)(puVar2 + uVar12 * 8 + 0x20) = uVar4;
      uVar12 = uVar1;
    } while (uVar1 != uVar10);
  }
LAB_10304a4f0:
  *param_1 = (long)puVar2;
  return;
}



/* Entry: 10304a518; end: 10304a7b3; -[_TtC54RankedPostableContentDestinationsServiceImplementation54RankedPostableContentDestinationsServiceImplementation selectedSelectionStoryObservable:] */

void FUN_10304a518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = 0;
  FUN_103050598(0,0x112d60fb0,&PTR_PTR_1126b3568);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  uVar2 = 0;
  FUN_103046bb4(0);
  puVar3 = &UNK_1106011d8;
  func_0x000107c613fc(&UNK_1106011d8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  func_0x000107c61434(param_3);
  uVar1 = 0x112e3c220;
  func_0x0001000285a8(0x112e3c220,&UNK_10db7df50);
  uVar4 = 0x103051e00;
  func_0x0001000bfde0(0x103051e00,puVar3,uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar3);
  func_0x00010304e244();
  func_0x00010487d6d4();
  func_0x000107c61574(uVar4);
  uVar4 = 0;
  FUN_103050598(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar1 = 0x103051df8;
  func_0x0001000bfde0(0x103051df8,0,uVar4);
  func_0x000107c61574(puVar3);
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10304a7b4; end: 10304a7db;  */

void FUN_10304a7b4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 10304a7dc; end: 10304a82f; -[_TtC54RankedPostableContentDestinationsServiceImplementation54RankedPostableContentDestinationsServiceImplementation setOurStorySubtextObservable:] */

/* WARNING: Possible PIC construction at 0x00010304a818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010304a81c) */

void FUN_10304a7dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010304a664(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10304a830; end: 10304a99f;  */

/* WARNING: Possible PIC construction at 0x00010304aa38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304aaac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304aa7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010304aab0) */
/* WARNING: Removing unreachable block (ram,0x00010304aa3c) */
/* WARNING: Removing unreachable block (ram,0x00010304aa40) */
/* WARNING: Removing unreachable block (ram,0x00010304aa54) */
/* WARNING: Removing unreachable block (ram,0x00010304aa84) */
/* WARNING: Removing unreachable block (ram,0x00010304aa64) */
/* WARNING: Removing unreachable block (ram,0x00010304aa94) */
/* WARNING: Removing unreachable block (ram,0x00010304aa80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304a830(long param_1,code *param_2)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  code *pcVar6;
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f35b58);
  func_0x000100c82230();
  if (param_1 == 0) {
    func_0x0001007d6d78(&stack0xffffffffffffffb0);
    func_0x0001007d6d78(&stack0xffffffffffffffb0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_2 == (code *)0x0) {
      return;
    }
    pcVar6 = param_2;
    func_0x000107c4168c();
    func_0x000107c61180();
    if (pcVar6 == (code *)0x0) {
      func_0x000107c5a4c8(param_2);
    }
    else {
      func_0x000107c5c6b0();
      func_0x000107c61180();
      param_2 = pcVar6;
    }
  }
  else {
    func_0x0001000285a8(0x112f35d60,&UNK_10db7df60);
    func_0x000107c61174(param_1);
    lVar1 = param_1;
    func_0x0001000b637c();
    plVar2 = *(long **)(unaff_x20 + _DAT_112f35d38);
    func_0x000100471e0c(plVar2,0);
    func_0x000107c61574(lVar1);
    puVar3 = &UNK_110600e00;
    func_0x000107c613fc(&UNK_110600e00,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_110600ec8;
    func_0x000107c613fc(&UNK_110600ec8,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(code **)(puVar4 + 0x18) = param_2;
    pcVar6 = *(code **)(*plVar2 + 0x60);
    func_0x000107c61174(param_2);
    param_2 = FUN_10304e3c8;
    puVar3 = puVar4;
    (*pcVar6)(FUN_10304e3c8);
    func_0x000107c61574(plVar2);
    func_0x000107c61574(puVar4);
    pcVar6 = param_2;
    func_0x000107c614f0(param_2);
    (**(code **)(puVar3 + 0x18))(uVar5,pcVar6,puVar3);
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 10304a9a0; end: 10304aacf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304a9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x0001007d6d78(&uStack_50);
  uStack_50 = param_3;
  uStack_48 = param_4;
  func_0x0001007d6d78(&uStack_50);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_5 != 0) {
    lVar1 = param_5;
    func_0x000107c4168c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5c6b0();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      if (lVar2 != 0) {
        func_0x000107c61174();
        lVar1 = lVar2;
        func_0x000107c5d0f0();
        if ((lVar1 != 0) && (lVar1 = lVar2, func_0x000107c5d0f0(), lVar1 != 1)) {
          func_0x000107c5d0f0(lVar2);
        }
        func_0x000107c61170(lVar2);
        func_0x000107c5a4c8(param_5);
        func_0x000107c615e8(param_5);
        func_0x000107c61170(lVar2);
        return;
      }
    }
    func_0x000107c5a4c8(param_5);
    func_0x000107c615e8(param_5);
  }
  return;
}



/* Entry: 10304aad0; end: 10304ab43; -[_TtC54RankedPostableContentDestinationsServiceImplementation54RankedPostableContentDestinationsServiceImplementation setOurStorySubtextAndPlaceTagObservable:placeTagsTracker:] */

/* WARNING: Possible PIC construction at 0x00010304ab24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010304ab28) */

void FUN_10304aad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10304a830(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10304ab44; end: 10304ab4f; -[_TtC54RankedPostableContentDestinationsServiceImplementation54RankedPostableContentDestinationsServiceImplementation setShowBestOfSpectacles:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304ab44(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uStack_21;
  
  uStack_21 = param_3;
  func_0x000107c61174();
  func_0x0001007d6d78(&uStack_21);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10304ab50; end: 10304ab5b; -[_TtC54RankedPostableContentDestinationsServiceImplementation54RankedPostableContentDestinationsServiceImplementation setAllowPostingToMapStories:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304ab50(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uStack_21;
  
  uStack_21 = param_3;
  func_0x000107c61174();
  func_0x0001007d6d78(&uStack_21);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10304ab5c; end: 10304ab67; -[_TtC54RankedPostableContentDestinationsServiceImplementation54RankedPostableContentDestinationsServiceImplementation setAllowSavingHighlights:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304ab5c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uStack_21;
  
  uStack_21 = param_3;
  func_0x000107c61174();
  func_0x0001007d6d78(&uStack_21);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10304ab68; end: 10304ab73; -[_TtC54RankedPostableContentDestinationsServiceImplementation54RankedPostableContentDestinationsServiceImplementation setAllowPostingToPublicStories:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304ab68(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uStack_21;
  
  uStack_21 = param_3;
  func_0x000107c61174();
  func_0x0001007d6d78(&uStack_21);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10304ab74; end: 10304abb7;  */

void FUN_10304ab74(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uStack_21;
  
  uStack_21 = param_3;
  func_0x000107c61174();
  func_0x0001007d6d78(&uStack_21);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10304abb8; end: 10304afa7;  */

void FUN_10304abb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar3 = &UNK_110600ef0;
  func_0x000107c613fc(&UNK_110600ef0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar4 = &UNK_110600f18;
  func_0x000107c613fc(&UNK_110600f18,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10304e454;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x10304e47c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101eee6c4;
  puStack_88 = &UNK_110600f30;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4();
  puVar6 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_110600f68;
  func_0x000107c613fc(&UNK_110600f68,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar6 + 0x18) = param_1;
  puVar7 = &UNK_110600f90;
  func_0x000107c613fc(&UNK_110600f90,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x10304e4b4;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uStack_80 = 0x10304e4e0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101eeeca8;
  puStack_88 = &UNK_110600fa8;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4();
  puVar9 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_110600fe0;
  func_0x000107c613fc(&UNK_110600fe0,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar9 + 0x18) = param_1;
  puVar10 = &UNK_110601008;
  func_0x000107c613fc(&UNK_110601008,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = 0x10304e520;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  uStack_80 = 0x10304e54c;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101eef0ac;
  puStack_88 = &UNK_110601020;
  ppuVar11 = &puStack_a0;
  puStack_78 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar12 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar12);
  puVar12 = &UNK_110601058;
  func_0x000107c613fc(&UNK_110601058,0x20,7);
  *(undefined8 *)(puVar12 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar12 + 0x18) = param_1;
  puVar13 = &UNK_110601080;
  func_0x000107c613fc(&UNK_110601080,0x20,7);
  *(undefined8 *)(puVar13 + 0x10) = 0x10304e584;
  *(undefined **)(puVar13 + 0x18) = puVar12;
  uStack_80 = 0x10304e5b0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101eef450;
  puStack_88 = &UNK_110601098;
  ppuVar14 = &puStack_a0;
  puStack_78 = puVar13;
  func_0x000107c60bc4();
  puVar1 = puStack_78;
  func_0x000107c61174(unaff_x20);
  func_0x000107c6157c(puVar13);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6a8(param_2);
  func_0x000107c60bd0(ppuVar14);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0xa7,0x622,0x11,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10304af9c);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0xa7,0x626,0x20,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10304afa0);
    (*pcVar2)();
  }
  puVar3 = puVar10;
  func_0x000107c61544(puVar10,"",0xa7,0x629,0x1e,1);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(puVar10);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10304afa4);
    (*pcVar2)();
  }
  puVar3 = puVar13;
  func_0x000107c61544(puVar13,"",0xa7,0x62e,0x1f,1);
  func_0x000107c61574(puVar13);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10304afa8);
  (*pcVar2)();
}



/* Entry: 10304afa8; end: 10304b063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304afa8(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  if (((param_2 == 2) || (param_2 == 1)) || (param_2 == 0)) {
    uStack_38 = param_1;
    func_0x0001007d6d78(&uStack_38);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112f35c70);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c53d80();
    func_0x000107c615e8(lVar1);
  }
  func_0x0001002a64a8();
  return;
}



/* Entry: 10304b064; end: 10304b20b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304b064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_70 [16];
  
  func_0x000100087bd4(FUN_10304e5d0,auStack_70,PTR___sytN_11034f1b0 + 8);
  lVar1 = *(long *)(unaff_x20 + _DAT_112f35c70);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c53d70(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_2);
  }
  func_0x0001002a64a8();
  return;
}



/* Entry: 10304b20c; end: 10304b263; -[_TtC54RankedPostableContentDestinationsServiceImplementation54RankedPostableContentDestinationsServiceImplementation setCustomTTL:forSelectionStory:] */

/* WARNING: Possible PIC construction at 0x00010304b24c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010304b250) */

void FUN_10304b20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10304abb8(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10304b264; end: 10304b2a7; -[_TtC54RankedPostableContentDestinationsServiceImplementation54RankedPostableContentDestinationsServiceImplementation setCustomTTL:forMyStoryType:] */

void FUN_10304b264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_10304afa8(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10304b2a8; end: 10304b2b3; -[_TtC54RankedPostableContentDestinationsServiceImplementation54RankedPostableContentDestinationsServiceImplementation setCustomTTL:forBusinessStoryId:] */

void FUN_10304b2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_10304b064(param_3,param_4,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10304b2b4; end: 10304b2bf; -[_TtC54RankedPostableContentDestinationsServiceImplementation54RankedPostableContentDestinationsServiceImplementation setCustomTTL:forCustomStoryPublicationId:] */

void FUN_10304b2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  (*(code *)0x10304b138)(param_3,param_4,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10304b2c0; end: 10304b32f;  */

void FUN_10304b2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  (*param_5)(param_3,param_4,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10304b330; end: 10304b363; -[_TtC54RankedPostableContentDestinationsServiceImplementation54RankedPostableContentDestinationsServiceImplementation didSetMyStoryAudience] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304b330(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001002a64a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10304b364; end: 10304b707;  */

/* WARNING: Possible PIC construction at 0x00010304b3b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010304b3b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304b364(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f35c68);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5c028();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 10304b708; end: 10304b8f7;  */

/* WARNING: Possible PIC construction at 0x00010304b758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304b844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010304b75c) */
/* WARNING: Removing unreachable block (ram,0x00010304b848) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304b708(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f35c58);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4ebcc();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 10304b8f8; end: 10304ba83;  */

/* WARNING: Possible PIC construction at 0x00010304b944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010304b948) */
/* WARNING: Removing unreachable block (ram,0x00010304b968) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304b8f8(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f35ca8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4d3a4();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 10304ba84; end: 10304bc77;  */

/* WARNING: Possible PIC construction at 0x00010304bae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010304bae4) */
/* WARNING: Removing unreachable block (ram,0x00010304bae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304ba84(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112f35c78);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3db44();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 10304bc78; end: 10304bea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304bc78(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f35cb0);
  if (lVar1 != 0) {
    func_0x000107c5c368();
    func_0x000107c61180();
    func_0x0001000285a8(0x112d5c1e0,&UNK_10d923090);
    lVar2 = lVar1;
    func_0x0001000b637c(lVar1);
    plVar3 = (long *)0x1;
    func_0x00010488010c();
    func_0x000107c61574(lVar2);
    puVar4 = &UNK_110600e00;
    func_0x000107c613fc(&UNK_110600e00,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    pcVar5 = FUN_103050c5c;
    puVar7 = puVar4;
    (**(code **)(*plVar3 + 0x60))(FUN_103050c5c);
    func_0x000107c61574(plVar3);
    func_0x000107c61574(puVar4);
    pcVar6 = pcVar5;
    func_0x000107c614f0(pcVar5);
    (**(code **)(puVar7 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f35b40),pcVar6,puVar7);
    func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar5);
    return;
  }
  return;
}



/* Entry: 10304bea4; end: 10304bf43; -[_TtC54RankedPostableContentDestinationsServiceImplementation54RankedPostableContentDestinationsServiceImplementation warmUp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304bea4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f35cb0);
  if (lVar1 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c5e0cc(lVar1);
  }
  FUN_10304b364();
  func_0x00010304b4f8();
  FUN_10304b708();
  FUN_10304b8f8();
  FUN_10304ba84();
  FUN_10304bc78();
  func_0x00010304bd98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10304bf44; end: 10304bf6b;  */

void FUN_10304bf44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uVar2 = *param_2;
  uStack_28 = 0;
  uVar1 = 0;
  FUN_103050598(0,0x112d4c900,&PTR_PTR_1126d4dd8);
  func_0x000107c5fc50(uVar2,&uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10304bf6c; end: 10304c04f;  */

void FUN_10304bf6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uVar2 = *param_2;
  uStack_28 = 0;
  uVar1 = 0;
  FUN_103050598(0);
  func_0x000107c5fc50(uVar2,&uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10304c050; end: 10304c1e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304c050(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112f35bd8;
  func_0x000107c61428(param_2 + _DAT_112f35bd8,auStack_58,0x20,0);
  lVar1 = *(long *)(param_2 + lVar1);
  if (*(long *)(lVar1 + 0x10) == 0) {
    uVar3 = 0;
    bVar2 = true;
  }
  else {
    func_0x000107c61434(lVar1);
    func_0x000100029284();
    bVar2 = (param_4 & 1) == 0;
    if (bVar2) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + param_3 * 8);
    }
    func_0x000107c6142c(lVar1);
  }
  *param_1 = uVar3;
  *(bool *)(param_1 + 1) = bVar2;
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10304c1e8; end: 10304c21b; -[_TtC54RankedPostableContentDestinationsServiceImplementation54RankedPostableContentDestinationsServiceImplementation provideSnapMapSelectionStoryIfAllowed] */

void FUN_10304c1e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010304c10c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10304c21c; end: 10304c2c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304c21c(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c614f0();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f35b48);
  func_0x000107c6157c(uVar1);
  func_0x000100c82230();
  func_0x000107c61574(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f35b50);
  func_0x000107c6157c(uVar1);
  func_0x000100c82230();
  func_0x000107c61574(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f35b58);
  func_0x000107c6157c(uVar1);
  func_0x000100c82230();
  func_0x000107c61574(uVar1);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10304c2c8; end: 10304c37b; -[_TtC54RankedPostableContentDestinationsServiceImplementation54RankedPostableContentDestinationsServiceImplementation dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304c2c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f35b48);
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  func_0x000100c82230();
  func_0x000107c61574(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f35b50);
  func_0x000107c6157c(uVar2);
  func_0x000100c82230();
  func_0x000107c61574(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f35b58);
  func_0x000107c6157c(uVar2);
  func_0x000100c82230();
  func_0x000107c61574(uVar2);
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10304c37c; end: 10304c793; -[_TtC54RankedPostableContentDestinationsServiceImplementation54RankedPostableContentDestinationsServiceImplementation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010304c39c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304c3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304c46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304c528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304c578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304c598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304c5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304c5d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304c5f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304c618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304c638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304c658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304c678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304c698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304c6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304c6d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304c6f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304c718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304c738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304c758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010304c778: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010304c75c) */
/* WARNING: Removing unreachable block (ram,0x00010304c73c) */
/* WARNING: Removing unreachable block (ram,0x00010304c71c) */
/* WARNING: Removing unreachable block (ram,0x00010304c6fc) */
/* WARNING: Removing unreachable block (ram,0x00010304c6dc) */
/* WARNING: Removing unreachable block (ram,0x00010304c6bc) */
/* WARNING: Removing unreachable block (ram,0x00010304c69c) */
/* WARNING: Removing unreachable block (ram,0x00010304c67c) */
/* WARNING: Removing unreachable block (ram,0x00010304c65c) */
/* WARNING: Removing unreachable block (ram,0x00010304c63c) */
/* WARNING: Removing unreachable block (ram,0x00010304c61c) */
/* WARNING: Removing unreachable block (ram,0x00010304c5fc) */
/* WARNING: Removing unreachable block (ram,0x00010304c5dc) */
/* WARNING: Removing unreachable block (ram,0x00010304c5bc) */
/* WARNING: Removing unreachable block (ram,0x00010304c59c) */
/* WARNING: Removing unreachable block (ram,0x00010304c57c) */
/* WARNING: Removing unreachable block (ram,0x00010304c52c) */
/* WARNING: Removing unreachable block (ram,0x00010304c470) */
/* WARNING: Removing unreachable block (ram,0x00010304c3d0) */
/* WARNING: Removing unreachable block (ram,0x00010304c3a0) */
/* WARNING: Removing unreachable block (ram,0x00010304c77c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10304c37c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f35d08 + 8));
  return;
}



/* Entry: 10304c794; end: 10304c94f;  */

ulong FUN_10304c794(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10304c878);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10304c87c);
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
  FUN_103050598(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10304c950);
  (*pcVar2)();
}



/* Entry: 10304c950; end: 10304caeb;  */

ulong FUN_10304c950(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10304ca20);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10304ca24);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103ac4cb4(0);
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
    func_0x000103ac4cb4(0);
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
  func_0x000107c5fb78(0xd000000000000021,0x800000010f11b020);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10304caec);
  (*pcVar2)();
}



/* Entry: 10304caec; end: 10304cbd7;  */

void FUN_10304caec(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103050598(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10304cbd8; end: 10304cc33;  */

void FUN_10304cbd8(void)

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
    func_0x000103ac4cb4();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112f35de0;
  plVar5 = (long *)&UNK_10dc4db20;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10304cc34; end: 10304d053;  */

void FUN_10304cc34(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10304cd04);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    FUN_10304d054(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar7 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10304ccd4);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x00010304cd7c();
    lVar6 = *unaff_x20;
    goto joined_r0x00010304cd18;
  }
  lVar6 = *unaff_x20;
joined_r0x00010304cd18:
  if ((uVar4 & 1) != 0) {
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10304cd7c);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10304d054; end: 10304d583;  */

void FUN_10304d054(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112f35db8;
  func_0x0001000285a8(0x112f35db8,&UNK_10db7e1e8);
  lVar7 = lVar15;
  func_0x000107c60490(lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_10304d2b4:
    func_0x000107c61574(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  puVar18 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar17 = uVar17 & *puVar18;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10304d2e4);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar17 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
            if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
              *puVar18 = -1L << (uVar17 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar15 + 0x10) = 0;
          }
          goto LAB_10304d2b4;
        }
        uVar17 = puVar18[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar17 == 0);
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10304d2e8);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar16;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 10304d584; end: 10304d5db;  */

void FUN_10304d584(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10304d700();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10304d5dc; end: 10304d6ff;  */

undefined * FUN_10304d5dc(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10304d700);
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
    FUN_10304cbd8();
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
    func_0x000103ac4cb4(0);
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



/* Entry: 10304d700; end: 10304d84b;  */

undefined *
FUN_10304d700(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10304d84c);
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
    puVar3 = param_5;
    FUN_10304caec(param_5,param_6,param_7,param_8);
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
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_103050598(0,param_5,param_6);
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



/* Entry: 10304d84c; end: 10304d9cf;  */

undefined * FUN_10304d84c(undefined *param_1,undefined *param_2)

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
    FUN_10304cbd8();
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



/* Entry: 10304d9d0; end: 10304daf7;  */

ulong FUN_10304d9d0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10304daf8);
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
  FUN_10304d84c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10304daf4);
      (*pcVar1)();
    }
    func_0x00010304dd6c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 10304daf8; end: 10304dc57;  */

ulong FUN_10304daf8(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10304dc58);
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
  func_0x00010304d8cc(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10304dc54);
      (*pcVar1)();
    }
    FUN_10304de64(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
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



/* Entry: 10304dc58; end: 10304de63;  */

undefined *
FUN_10304dc58(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10304dd6c);
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
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 10304de64; end: 10304e073;  */

long FUN_10304de64(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10304df7c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10304df80);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_103050598(0,param_5,param_6);
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
      FUN_103050598(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10304df78);
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



/* Entry: 10304e074; end: 10304e097;  */

void FUN_10304e074(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10304522c();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10304e098; end: 10304e1db;  */

void FUN_10304e098(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_d8 [128];
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    func_0x0001000285a8(0x112f35dc0,&UNK_10db7e1f8);
    func_0x000104886440();
  }
  else {
    puVar3 = &UNK_110600e00;
    func_0x000107c613fc(&UNK_110600e00,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar2);
    puVar4 = &UNK_110601228;
    func_0x000107c613fc(&UNK_110601228,0xa8,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    uVar5 = param_2[8];
    uVar7 = param_2[0xb];
    uVar6 = param_2[10];
    *(undefined8 *)(puVar4 + 0x68) = param_2[9];
    *(undefined8 *)(puVar4 + 0x60) = uVar5;
    *(undefined8 *)(puVar4 + 0x78) = uVar7;
    *(undefined8 *)(puVar4 + 0x70) = uVar6;
    uVar5 = param_2[0xc];
    *(undefined8 *)(puVar4 + 0x88) = param_2[0xd];
    *(undefined8 *)(puVar4 + 0x80) = uVar5;
    uVar5 = *(undefined8 *)((long)param_2 + 0x69);
    *(undefined8 *)(puVar4 + 0x91) = *(undefined8 *)((long)param_2 + 0x71);
    *(undefined8 *)(puVar4 + 0x89) = uVar5;
    uVar5 = *param_2;
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    *(undefined8 *)(puVar4 + 0x28) = param_2[1];
    *(undefined8 *)(puVar4 + 0x20) = uVar5;
    *(undefined8 *)(puVar4 + 0x38) = uVar7;
    *(undefined8 *)(puVar4 + 0x30) = uVar6;
    uVar5 = param_2[4];
    uVar7 = param_2[7];
    uVar6 = param_2[6];
    *(undefined8 *)(puVar4 + 0x48) = param_2[5];
    *(undefined8 *)(puVar4 + 0x40) = uVar5;
    *(undefined8 *)(puVar4 + 0x58) = uVar7;
    *(undefined8 *)(puVar4 + 0x50) = uVar6;
    *(undefined8 *)(puVar4 + 0xa0) = uVar1;
    func_0x0001000285a8(0x112f35dc8,&UNK_10db7e200);
    func_0x000107c613fc();
    func_0x000107c61434(param_1);
    func_0x00010304ecc0(param_2,auStack_d8);
    func_0x0001000b64ac(0x10304ecb4,puVar4);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10304e1dc; end: 10304e2cb;  */

void FUN_10304e1dc(undefined8 *param_1)

{
  long unaff_x20;
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
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uStack_58 = param_1[10];
  uStack_60 = param_1[9];
  uStack_48 = param_1[0xc];
  uStack_50 = param_1[0xb];
  uStack_40 = param_1[0xd];
  uStack_38 = (undefined1)param_1[0xe];
  uStack_2f = *(undefined8 *)((long)param_1 + 0x79);
  uStack_37 = (undefined7)*(undefined8 *)((long)param_1 + 0x71);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x71) >> 0x38);
  uStack_98 = param_1[2];
  uStack_a0 = param_1[1];
  uStack_88 = param_1[4];
  uStack_90 = param_1[3];
  uStack_78 = param_1[6];
  uStack_80 = param_1[5];
  uStack_68 = param_1[8];
  uStack_70 = param_1[7];
  (**(code **)(unaff_x20 + 0x10))(*param_1,&uStack_a0);
  return;
}



/* Entry: 10304e2cc; end: 10304e2df;  */

void FUN_10304e2cc(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  pcVar4 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *param_2;
  uVar10 = uVar11 & 0xffffffffffffff8;
  if (uVar11 >> 0x3e == 0) {
    uVar12 = *(ulong *)(uVar10 + 0x10);
  }
  else {
    uVar12 = uVar10;
    if (0x7fffffffffffffff < uVar11) {
      uVar12 = uVar11;
    }
    func_0x000107c60480();
  }
  uVar13 = 0;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while( true ) {
    if (uVar12 == uVar13) {
      puVar8 = puVar9;
      (*pcVar4)(puVar9,uVar2,uVar3);
      func_0x000107c6142c(puVar9);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar8 != (undefined *)0x0) {
        puVar9 = puVar8;
      }
      *param_1 = puVar9;
      return;
    }
    if ((uVar11 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar10 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10304a1c0);
        (*pcVar4)();
      }
      uVar5 = *(ulong *)(uVar11 + uVar13 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar5 = uVar13;
      FUN_10304c794(uVar13,uVar11,&PTR_PTR_1126c51c8,0x112e3c238);
    }
    uVar1 = uVar13 + 1;
    if (SCARRY8(uVar13,1)) break;
    uVar6 = uVar5;
    func_0x000106971c30();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    uVar13 = uVar13 + 1;
    if (uVar6 != 0) {
      puVar8 = puVar9;
      func_0x000107c61550();
      if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) ||
         (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar9 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar9) {
            puVar7 = puVar9;
          }
          func_0x000107c60480(puVar7);
        }
        puVar8 = (undefined *)0x0;
        FUN_10304daf8(0,puVar7 + 1,1,puVar9,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                      &UNK_10da27d40);
      }
      uVar5 = (ulong)puVar8 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar5 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar13) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_10304daf8(puVar9,uVar13 + 1,1,puVar8,0x112e3c238,&PTR_PTR_1126c51c8,0x112e3c240,
                      &UNK_10da27d40);
        uVar5 = (ulong)puVar9 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar5 + 0x10) = uVar13 + 1;
      *(ulong *)(uVar5 + uVar13 * 8 + 0x20) = uVar6;
      uVar13 = uVar1;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10304a1bc);
  (*pcVar4)();
}


