/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0017924c; end: 0017924f;  */

uint FUN_0017924c(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined1 auStack_1a0 [48];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 uStack_70;
  
  bVar1 = *(byte *)(param_2 + 4);
  if ((byte)param_1[4] == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if ((((byte)param_1[4] ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  uVar11 = param_1[6];
  uVar8 = param_1[5];
  uVar17 = param_1[8];
  uVar14 = param_1[7];
  uVar12 = param_2[6];
  uVar9 = param_2[5];
  uVar10 = param_2[8];
  lVar15 = param_2[7];
  uStack_110 = uVar9;
  uStack_108 = uVar12;
  lStack_100 = lVar15;
  uStack_f8 = uVar10;
  uStack_f0 = uVar8;
  uStack_e8 = uVar11;
  uStack_e0 = uVar14;
  uStack_d8 = uVar17;
  if (uVar14 == 0) {
    if (lVar15 != 0) goto LAB_00184748;
    func_0x00187028(&uStack_f0,&uStack_98,0xaf07c8,&UNK_007daf88);
    func_0x00187028(&uStack_110,&uStack_98,0xaf07c8,&UNK_007daf88);
    FUN_00116294(uVar8,uVar11,0,uVar17);
LAB_00184820:
    bVar1 = *(byte *)(param_2 + 9);
    if ((byte)param_1[9] == 2) {
      if (bVar1 != 2) goto LAB_001847a8;
    }
    else {
      uVar5 = 0;
      if ((bVar1 == 2) || ((((byte)param_1[9] ^ bVar1) & 1) != 0)) goto LAB_001847ac;
    }
    uVar11 = param_1[0xb];
    uVar8 = param_1[10];
    uVar14 = param_1[0xc];
    uStack_128 = (undefined1)param_1[0xd];
    uStack_11f = (undefined7)*(undefined8 *)((long)param_1 + 0x71);
    uStack_118 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x71) >> 0x38);
    uVar4 = uStack_118;
    uStack_127 = (undefined7)*(undefined8 *)((long)param_1 + 0x69);
    uStack_120 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x69) >> 0x38);
    uVar13 = param_2[0xb];
    uVar10 = param_2[10];
    uVar16 = param_2[0xc];
    uStack_158 = (undefined1)param_2[0xd];
    uStack_14f = (undefined7)*(undefined8 *)((long)param_2 + 0x71);
    uStack_148 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x71) >> 0x38);
    uVar3 = uStack_148;
    uStack_157 = (undefined7)*(undefined8 *)((long)param_2 + 0x69);
    uStack_150 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x69) >> 0x38);
    uVar12 = CONCAT71(uStack_127,uStack_128);
    lVar2 = CONCAT71(uStack_11f,uStack_120);
    uVar9 = CONCAT71(uStack_157,uStack_158);
    lVar15 = CONCAT71(uStack_14f,uStack_150);
    uStack_170 = uVar10;
    uStack_168 = uVar13;
    uStack_160 = uVar16;
    uStack_140 = uVar8;
    uStack_138 = uVar11;
    uStack_130 = uVar14;
    if (lVar2 == 1) {
      if (lVar15 != 1) {
LAB_00184910:
        func_0x00187028(&uStack_140,&uStack_98,0xaf0aa8,&UNK_007db028);
        func_0x00187028(&uStack_170,&uStack_98,0xaf0aa8,&UNK_007db028);
        FUN_00116310(uVar8,uVar11,uVar14,uVar12,lVar2,uVar4);
        FUN_00116310(uVar10,uVar13,uVar16,uVar9,lVar15,uVar3);
        goto LAB_001847a8;
      }
      func_0x00187028(&uStack_140,&uStack_98,0xaf0aa8,&UNK_007db028);
      func_0x00187028(&uStack_170,&uStack_98,0xaf0aa8,&UNK_007db028);
      FUN_00116310(uVar8,uVar11,uVar14,uVar12,1,uVar4);
    }
    else {
      if (lVar15 == 1) goto LAB_00184910;
      uStack_88 = (undefined1)uVar16;
      uStack_87 = (undefined1)((ulong)uVar16 >> 8);
      uStack_70 = uStack_148;
      uStack_b8 = (undefined1)uVar14;
      uStack_b7 = (undefined1)(uVar14 >> 8);
      uStack_a0 = uStack_118;
      uStack_c8 = uVar8;
      uStack_c0 = uVar11;
      uStack_b0 = uVar12;
      lStack_a8 = lVar2;
      uStack_98 = uVar10;
      uStack_90 = uVar13;
      uStack_80 = uVar9;
      lStack_78 = lVar15;
      func_0x00187028(&uStack_140,auStack_1a0,0xaf0aa8,&UNK_007db028);
      func_0x00187028(&uStack_170,auStack_1a0,0xaf0aa8,&UNK_007db028);
      puVar7 = &uStack_c8;
      func_0x00182c8c(puVar7,&uStack_98);
      FUN_00116310(uVar10,uVar13,uVar16,uVar9,lVar15,uVar3);
      FUN_00116310(uVar8,uVar11,uVar14,uVar12,lVar2,uVar4);
      if (((ulong)puVar7 & 1) == 0) goto LAB_001847a8;
    }
    uVar8 = *param_1;
    func_0x00149810(uVar8,*param_2);
    if ((uVar8 & 1) != 0) {
      uVar8 = param_1[1];
      FUN_00038814(uVar8,param_1[2],param_2[1],param_2[2]);
      if ((uVar8 & 1) != 0) {
        uVar8 = param_1[3];
        FUN_000e17c0(uVar8,param_2[3]);
        uVar5 = (uint)uVar8;
        goto LAB_001847ac;
      }
    }
  }
  else if (lVar15 == 0) {
LAB_00184748:
    func_0x00187028(&uStack_f0,&uStack_98,0xaf07c8,&UNK_007daf88);
    func_0x00187028(&uStack_110,&uStack_98,0xaf07c8,&UNK_007daf88);
    FUN_00116294(uVar8,uVar11,uVar14,uVar17);
    FUN_00116294(uVar9,uVar12,lVar15,uVar10);
  }
  else {
    func_0x00187028(&uStack_f0,&uStack_98,0xaf07c8,&UNK_007daf88);
    func_0x00187028(&uStack_110,&uStack_98,0xaf07c8,&UNK_007daf88);
    uVar6 = uVar8;
    FUN_00186180(uVar8,uVar11,uVar14,uVar17,uVar9,uVar12,lVar15,uVar10);
    FUN_00116294(uVar9,uVar12,lVar15,uVar10);
    FUN_00116294(uVar8,uVar11,uVar14,uVar17);
    if ((uVar6 & 1) != 0) goto LAB_00184820;
  }
LAB_001847a8:
  uVar5 = 0;
LAB_001847ac:
  return uVar5 & 1;
}



/* Entry: 00179250; end: 001792df;  */

/* WARNING: Removing unreachable block (ram,0x001792a0) */

void FUN_00179250(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_00178d84(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001792e0; end: 0017934b;  */

void FUN_001792e0(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  *(undefined1 *)(param_1 + 4) = 2;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 9) = 2;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return;
}



/* Entry: 0017934c; end: 001793eb;  */

uint FUN_0017934c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  
  uVar7 = *unaff_x20;
  uVar5 = unaff_x20[3];
  uVar6 = unaff_x20[5];
  uVar2 = unaff_x20[6];
  uVar1 = unaff_x20[7];
  uVar3 = unaff_x20[8];
  FUN_000e1a94();
  if ((uVar5 & 1) == 0) {
LAB_001793d4:
    uVar4 = 0;
  }
  else {
    if (uVar1 != 0) {
      func_0x00023304(uVar6,uVar2);
      uVar5 = uVar1;
      _swift_bridgeObjectRetain();
      FUN_000e1a94();
      FUN_00116294(uVar6,uVar2,uVar1,uVar3);
      if ((uVar5 & 1) == 0) goto LAB_001793d4;
    }
    func_0x0014be00(uVar7);
    uVar6 = uVar7;
    FUN_000f846c();
    _swift_bridgeObjectRelease(uVar7);
    uVar4 = (uint)uVar6 & 1;
  }
  return uVar4;
}



/* Entry: 001793ec; end: 0017941b;  */

undefined1  [16] FUN_001793ec(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                  *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 0017941c; end: 0017944f;  */

void FUN_0017941c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 00179450; end: 00179463;  */

undefined1  [16] FUN_00179450(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x179460;
  return auVar1;
}



/* Entry: 00179464; end: 00179477;  */

void FUN_00179464(void)

{
  FUN_00178be8();
  return;
}



/* Entry: 00179478; end: 001794c7;  */

void FUN_00179478(void)

{
  FUN_00179004();
  return;
}



/* Entry: 001794c8; end: 00179567;  */

void FUN_001794c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0ea8 != -1) {
    _swift_once(0xaf0ea8,FUN_00178a88);
  }
  uVar5 = uRam0000000000b65208;
  uVar4 = uRam0000000000b65200;
  uVar3 = uRam0000000000b651f8;
  uVar2 = uRam0000000000b651f0;
  uVar1 = uRam0000000000b651e8;
  *param_1 = uRam0000000000b651e0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00179568; end: 001795a3;  */

void FUN_00179568(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2208;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2208,&UNK_007debe8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 001795a4; end: 001797bb;  */

/* WARNING: Removing unreachable block (ram,0x00179620) */

void FUN_001795a4(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_50 = unaff_x20[0xc];
  uStack_48 = (undefined1)unaff_x20[0xd];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0x71);
  uStack_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x69);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x69) >> 0x38);
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(&uStack_100,0);
  uStack_128 = uStack_d8;
  uStack_130 = uStack_e0;
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_110 = uStack_c0;
  uStack_148 = uStack_f8;
  uStack_150 = uStack_100;
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  FUN_00178d84(&uStack_150);
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  uStack_c0 = uStack_110;
  uStack_e8 = uStack_138;
  uStack_f0 = uStack_140;
  uStack_d8 = uStack_128;
  uStack_e0 = uStack_130;
  uStack_f8 = uStack_148;
  uStack_100 = uStack_150;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001797bc; end: 0017983b;  */

uint FUN_001797bc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_120;
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
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
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
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_c0 = param_1[0xc];
  uStack_b8 = (undefined1)param_1[0xd];
  uStack_af = *(undefined8 *)((long)param_1 + 0x71);
  uStack_b7 = (undefined7)*(undefined8 *)((long)param_1 + 0x69);
  uStack_b0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x69) >> 0x38);
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_40 = param_2[0xc];
  uStack_2f = *(undefined8 *)((long)param_2 + 0x71);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x69) >> 0x38);
  uStack_38 = (undefined1)param_2[0xd];
  uStack_37 = (undefined7)((ulong)param_2[0xd] >> 8);
  FUN_0017924c(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 0017983c; end: 00179863;  */

undefined * FUN_0017983c(void)

{
  return &UNK_009afc00;
}



/* Entry: 00179864; end: 00179923;  */

void FUN_00179864(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df1b0,0x30,&uStack_48,&lStack_40);
  puRam0000000000b65218 = puStack_38;
  lRam0000000000b65210 = lStack_40;
  puRam0000000000b65228 = puStack_28;
  puRam0000000000b65220 = puStack_30;
  puRam0000000000b65238 = puStack_18;
  puRam0000000000b65230 = puStack_20;
  return;
}



/* Entry: 00179924; end: 001799c3;  */

void FUN_00179924(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0eb0 != -1) {
    _swift_once(0xaf0eb0,FUN_00179864);
  }
  uVar5 = uRam0000000000b65238;
  uVar4 = uRam0000000000b65230;
  uVar3 = uRam0000000000b65228;
  uVar2 = uRam0000000000b65220;
  uVar1 = uRam0000000000b65218;
  *param_1 = uRam0000000000b65210;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001799c4; end: 00179b1b;  */

/* WARNING: Removing unreachable block (ram,0x00179ac8) */
/* WARNING: Removing unreachable block (ram,0x00179b10) */

void FUN_001799c4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 999) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x00187210();
LAB_00179afc:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 0x22) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_00188ae8();
          goto LAB_00179afc;
        }
        if (lVar1 == 0x21) {
          (**(code **)(param_3 + 0x140))(unaff_x20 + 0x40,param_2,param_3);
        }
        else if (lVar1 - 1000U < 0x1ffffc18) {
          lVar2 = lVar1;
          FUN_001880fc();
          (**(code **)(param_3 + 0x1d0))(unaff_x20 + 0x18,&UNK_009b28c0,lVar2,lVar1,param_2,param_3)
          ;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 00179b1c; end: 00179c13;  */

void FUN_00179b1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  if (*(byte *)(unaff_x20 + 8) != 2) {
    (**(code **)(param_3 + 0x68))(*(byte *)(unaff_x20 + 8) & 1,0x21,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    plVar1 = unaff_x20;
    FUN_00179c14();
    lVar2 = *unaff_x20;
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x00187210();
      (*pcVar3)(lVar2,999,&UNK_009b2a70,plVar1,param_2,param_3);
    }
    (**(code **)(param_3 + 0x1b0))(unaff_x20[3],1000,0x20000000,param_2,param_3);
    FUN_0013ad2c(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 00179c14; end: 00179c97;  */

void FUN_00179c14(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_50 = *(long *)(param_1 + 0x30);
  if (lStack_50 != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_00188ae8();
    (*pcVar1)(&uStack_60,0x22,&UNK_009b2b90,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 00179c98; end: 00179c9b;  */

uint FUN_00179c98(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar6 = param_1[5];
  uVar4 = param_1[4];
  uVar10 = param_1[7];
  uVar8 = param_1[6];
  uVar7 = param_2[5];
  uVar5 = param_2[4];
  uVar11 = param_2[7];
  lVar9 = param_2[6];
  uStack_a0 = uVar5;
  uStack_98 = uVar7;
  lStack_90 = lVar9;
  uStack_88 = uVar11;
  uStack_80 = uVar4;
  uStack_78 = uVar6;
  uStack_70 = uVar8;
  uStack_68 = uVar10;
  if (uVar8 == 0) {
    if (lVar9 != 0) goto LAB_00185634;
    func_0x00187028(&uStack_80,auStack_c0,0xaf07c8,&UNK_007daf88);
    func_0x00187028(&uStack_a0,auStack_c0,0xaf07c8,&UNK_007daf88);
    FUN_00116294(uVar4,uVar6,0,uVar10);
LAB_00185714:
    bVar1 = *(byte *)(param_2 + 8);
    if ((byte)param_1[8] == 2) {
      if (bVar1 != 2) goto LAB_00185694;
    }
    else {
      uVar2 = 0;
      if ((bVar1 == 2) || ((((byte)param_1[8] ^ bVar1) & 1) != 0)) goto LAB_00185698;
    }
    uVar4 = *param_1;
    func_0x00149810(uVar4,*param_2);
    if ((uVar4 & 1) != 0) {
      uVar4 = param_1[1];
      FUN_00038814(uVar4,param_1[2],param_2[1],param_2[2]);
      if ((uVar4 & 1) != 0) {
        uVar4 = param_1[3];
        FUN_000e17c0(uVar4,param_2[3]);
        uVar2 = (uint)uVar4;
        goto LAB_00185698;
      }
    }
  }
  else if (lVar9 == 0) {
LAB_00185634:
    func_0x00187028(&uStack_80,auStack_c0,0xaf07c8,&UNK_007daf88);
    func_0x00187028(&uStack_a0,auStack_c0,0xaf07c8,&UNK_007daf88);
    FUN_00116294(uVar4,uVar6,uVar8,uVar10);
    FUN_00116294(uVar5,uVar7,lVar9,uVar11);
  }
  else {
    func_0x00187028(&uStack_80,auStack_c0,0xaf07c8,&UNK_007daf88);
    func_0x00187028(&uStack_a0,auStack_c0,0xaf07c8,&UNK_007daf88);
    uVar3 = uVar4;
    FUN_00186180(uVar4,uVar6,uVar8,uVar10,uVar5,uVar7,lVar9,uVar11);
    FUN_00116294(uVar5,uVar7,lVar9,uVar11);
    FUN_00116294(uVar4,uVar6,uVar8,uVar10);
    if ((uVar3 & 1) != 0) goto LAB_00185714;
  }
LAB_00185694:
  uVar2 = 0;
LAB_00185698:
  return uVar2 & 1;
}



/* Entry: 00179c9c; end: 00179cd7;  */

void FUN_00179c9c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_0014d3f8(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00179cd8; end: 00179d2b;  */

void FUN_00179cd8(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 2;
  return;
}



/* Entry: 00179d2c; end: 00179dcb;  */

uint FUN_00179d2c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = unaff_x20[3];
  uVar1 = unaff_x20[4];
  uVar5 = unaff_x20[5];
  uVar2 = unaff_x20[6];
  uVar7 = unaff_x20[7];
  FUN_000e1a94();
  if ((uVar4 & 1) == 0) {
LAB_00179db4:
    uVar3 = 0;
  }
  else {
    if (uVar2 != 0) {
      func_0x00023304(uVar1,uVar5);
      uVar4 = uVar2;
      _swift_bridgeObjectRetain();
      FUN_000e1a94();
      FUN_00116294(uVar1,uVar5,uVar2,uVar7);
      if ((uVar4 & 1) == 0) goto LAB_00179db4;
    }
    func_0x0014be00(uVar6);
    uVar5 = uVar6;
    FUN_000f846c();
    _swift_bridgeObjectRelease(uVar6);
    uVar3 = (uint)uVar5 & 1;
  }
  return uVar3;
}



/* Entry: 00179dcc; end: 00179dfb;  */

undefined1  [16] FUN_00179dcc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                  *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 00179dfc; end: 00179e2f;  */

void FUN_00179dfc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 00179e30; end: 00179e43;  */

undefined1  [16] FUN_00179e30(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x179e40;
  return auVar1;
}



/* Entry: 00179e44; end: 00179e57;  */

void FUN_00179e44(void)

{
  FUN_001799c4();
  return;
}



/* Entry: 00179e58; end: 00179e97;  */

void FUN_00179e58(void)

{
  FUN_00179b1c();
  return;
}



/* Entry: 00179e98; end: 00179f37;  */

void FUN_00179e98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0eb0 != -1) {
    _swift_once(0xaf0eb0,FUN_00179864);
  }
  uVar5 = uRam0000000000b65238;
  uVar4 = uRam0000000000b65230;
  uVar3 = uRam0000000000b65228;
  uVar2 = uRam0000000000b65220;
  uVar1 = uRam0000000000b65218;
  *param_1 = uRam0000000000b65210;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00179f38; end: 00179f73;  */

void FUN_00179f38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2200;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2200,&UNK_007debe0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00179f74; end: 0017a05f;  */

void FUN_00179f74(void)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  uStack_30 = *(undefined1 *)(unaff_x20 + 8);
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_b8,0);
  FUN_0014d3f8(auStack_b8);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0017a060; end: 0017a0b7;  */

uint FUN_0017a060(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = *(undefined1 *)(param_1 + 8);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = *(undefined1 *)(param_2 + 8);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_0018554c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 0017a0b8; end: 0017a0df;  */

undefined * FUN_0017a0b8(void)

{
  return &UNK_009afc10;
}



/* Entry: 0017a0e0; end: 0017a19f;  */

void FUN_0017a0e0(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df160,0x43,&uStack_48,&lStack_40);
  puRam0000000000b65248 = puStack_38;
  lRam0000000000b65240 = lStack_40;
  puRam0000000000b65258 = puStack_28;
  puRam0000000000b65250 = puStack_30;
  puRam0000000000b65268 = puStack_18;
  puRam0000000000b65260 = puStack_20;
  return;
}



/* Entry: 0017a1a0; end: 0017a23f;  */

void FUN_0017a1a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0eb8 != -1) {
    _swift_once(0xaf0eb8,FUN_0017a0e0);
  }
  uVar5 = uRam0000000000b65268;
  uVar4 = uRam0000000000b65260;
  uVar3 = uRam0000000000b65258;
  uVar2 = uRam0000000000b65250;
  uVar1 = uRam0000000000b65248;
  *param_1 = uRam0000000000b65240;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 0017a240; end: 0017a3c7;  */

/* WARNING: Removing unreachable block (ram,0x0017a3a8) */
/* WARNING: Removing unreachable block (ram,0x0017a3c4) */

void FUN_0017a240(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 0x23) {
        if (lVar1 == 0x21) {
          (**(code **)(param_3 + 0x140))(unaff_x20 + 0x20,param_2,param_3);
        }
        else {
          if (lVar1 == 0x22) {
            pcVar4 = *(code **)(param_3 + 0x188);
            func_0x001922a0();
            goto LAB_0017a2c8;
          }
LAB_0017a35c:
          if (lVar1 - 1000U < 0x1ffffc18) {
            lVar2 = lVar1;
            FUN_00188264();
            (**(code **)(param_3 + 0x1d0))
                      (unaff_x20 + 0x18,&UNK_009b2950,lVar2,lVar1,param_2,param_3);
          }
        }
      }
      else {
        if (lVar1 == 0x23) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_00188ae8();
        }
        else {
          if (lVar1 != 999) goto LAB_0017a35c;
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x00187210();
        }
LAB_0017a2c8:
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 0017a3c8; end: 0017a573;  */

void FUN_0017a3c8(undefined8 *param_1)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  long lVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  bVar2 = *(byte *)(unaff_x20 + 4);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x21);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  cVar3 = *(char *)((long)unaff_x20 + 0x21);
  if (cVar3 != '\x03') {
    __ss6HasherV8_combineyySuF(0x22);
    __ss6HasherV8_combineyySuF(cVar3);
  }
  lVar7 = unaff_x20[7];
  if (lVar7 != 0) {
    lVar6 = unaff_x20[5];
    lVar1 = unaff_x20[6];
    lVar8 = unaff_x20[8];
    __ss6HasherV8_combineyySuF(0x23);
    uStack_78 = param_1[5];
    uStack_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    uStack_60 = param_1[8];
    uStack_98 = param_1[1];
    uStack_a0 = *param_1;
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    func_0x00023304(lVar6,lVar1);
    _swift_bridgeObjectRetain(lVar7);
    FUN_0017c428(&uStack_a0,lVar6,lVar1,lVar7,lVar8);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
      unaff_x21 = 0;
    }
    FUN_00116294(lVar6,lVar1,lVar7,lVar8);
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    param_1[8] = uStack_60;
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
  }
  if ((*(long *)(*unaff_x20 + 0x10) != 0) && (FUN_0019d040(*unaff_x20,999), unaff_x21 != 0)) {
    return;
  }
  FUN_0013bd14(param_1,1000,0x20000000,unaff_x20[3]);
  if (unaff_x21 != 0) {
    return;
  }
  lVar7 = unaff_x20[1];
  uVar4 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar5 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((unaff_x20[2] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_0017a568;
    }
    lVar6 = (long)(int)lVar7;
    lVar7 = lVar7 >> 0x20;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    lVar6 = *(long *)(lVar7 + 0x10);
    lVar7 = *(long *)(lVar7 + 0x18);
  }
  if (lVar6 == lVar7) {
    return;
  }
LAB_0017a568:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 0017a574; end: 0017a6b3;  */

void FUN_0017a574(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long *unaff_x20;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  char cStack_41;
  
  uVar1 = param_1;
  if (*(byte *)(unaff_x20 + 4) != 2) {
    uVar1 = (ulong)(*(byte *)(unaff_x20 + 4) & 1);
    (**(code **)(param_3 + 0x68))(uVar1,0x21,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (*(char *)((long)unaff_x20 + 0x21) != '\x03') {
      pcVar4 = *(code **)(param_3 + 0x80);
      cStack_41 = *(char *)((long)unaff_x20 + 0x21);
      func_0x001922a0();
      (*pcVar4)(&cStack_41,0x22,&UNK_009b29f8,uVar1,param_2,param_3);
    }
    plVar2 = unaff_x20;
    FUN_0017a6b4();
    lVar3 = *unaff_x20;
    if (*(long *)(lVar3 + 0x10) != 0) {
      pcVar4 = *(code **)(param_3 + 0x118);
      func_0x00187210();
      (*pcVar4)(lVar3,999,&UNK_009b2a70,plVar2,param_2,param_3);
    }
    (**(code **)(param_3 + 0x1b0))(unaff_x20[3],1000,0x20000000,param_2,param_3);
    FUN_0013ad2c(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 0017a6b4; end: 0017a73f;  */

void FUN_0017a6b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 )

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_50 = *(long *)(param_1 + 0x38);
  if (lStack_50 != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_00188ae8();
    (*pcVar1)(&uStack_60,param_5,&UNK_009b2b90,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 0017a740; end: 0017a7b3;  */

uint FUN_0017a740(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  bVar1 = *(byte *)(param_2 + 4);
  if ((byte)param_1[4] == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if ((((byte)param_1[4] ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + 0x21) == '\x03') {
    if (*(char *)((long)param_2 + 0x21) != '\x03') {
      return 0;
    }
  }
  else if (*(char *)((long)param_1 + 0x21) != *(char *)((long)param_2 + 0x21)) {
    return 0;
  }
  uVar6 = param_1[6];
  uVar4 = param_1[5];
  uVar10 = param_1[8];
  uVar8 = param_1[7];
  uVar7 = param_2[6];
  uVar5 = param_2[5];
  uVar11 = param_2[8];
  lVar9 = param_2[7];
  uStack_a0 = uVar5;
  uStack_98 = uVar7;
  lStack_90 = lVar9;
  uStack_88 = uVar11;
  uStack_80 = uVar4;
  uStack_78 = uVar6;
  uStack_70 = uVar8;
  uStack_68 = uVar10;
  if (uVar8 == 0) {
    if (lVar9 != 0) goto LAB_00185bbc;
    func_0x00187028(&uStack_80,auStack_c0,0xaf07c8,&UNK_007daf88);
    func_0x00187028(&uStack_a0,auStack_c0,0xaf07c8,&UNK_007daf88);
    FUN_00116294(uVar4,uVar6,0,uVar10);
LAB_00185c70:
    uVar4 = *param_1;
    func_0x00149810(uVar4,*param_2);
    if ((uVar4 & 1) != 0) {
      uVar4 = param_1[1];
      FUN_00038814(uVar4,param_1[2],param_2[1],param_2[2]);
      if ((uVar4 & 1) != 0) {
        uVar4 = param_1[3];
        FUN_000e17c0(uVar4,param_2[3]);
        uVar2 = (uint)uVar4;
        goto LAB_00185cbc;
      }
    }
  }
  else if (lVar9 == 0) {
LAB_00185bbc:
    func_0x00187028(&uStack_80,auStack_c0,0xaf07c8,&UNK_007daf88);
    func_0x00187028(&uStack_a0,auStack_c0,0xaf07c8,&UNK_007daf88);
    FUN_00116294(uVar4,uVar6,uVar8,uVar10);
    FUN_00116294(uVar5,uVar7,lVar9,uVar11);
  }
  else {
    func_0x00187028(&uStack_80,auStack_c0,0xaf07c8,&UNK_007daf88);
    func_0x00187028(&uStack_a0,auStack_c0,0xaf07c8,&UNK_007daf88);
    uVar3 = uVar4;
    FUN_00186180(uVar4,uVar6,uVar8,uVar10,uVar5,uVar7,lVar9,uVar11);
    FUN_00116294(uVar5,uVar7,lVar9,uVar11);
    FUN_00116294(uVar4,uVar6,uVar8,uVar10);
    if ((uVar3 & 1) != 0) goto LAB_00185c70;
  }
  uVar2 = 0;
LAB_00185cbc:
  return uVar2 & 1;
}



/* Entry: 0017a7b4; end: 0017a85f;  */

uint FUN_0017a7b4(undefined8 param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  
  uVar7 = *unaff_x20;
  uVar5 = unaff_x20[3];
  uVar6 = unaff_x20[5];
  uVar2 = unaff_x20[6];
  uVar1 = unaff_x20[7];
  uVar3 = unaff_x20[8];
  FUN_000e1a94();
  if ((uVar5 & 1) == 0) {
LAB_0017a844:
    uVar4 = 0;
  }
  else {
    if (uVar1 != 0) {
      func_0x00023304(uVar6,uVar2);
      uVar5 = uVar1;
      _swift_bridgeObjectRetain();
      FUN_000e1a94();
      FUN_00116294(uVar6,uVar2,uVar1,uVar3);
      if ((uVar5 & 1) == 0) goto LAB_0017a844;
    }
    func_0x0014be00(uVar7);
    uVar6 = uVar7;
    (*param_3)();
    _swift_bridgeObjectRelease(uVar7);
    uVar4 = (uint)uVar6 & 1;
  }
  return uVar4;
}



/* Entry: 0017a860; end: 0017a873;  */

undefined1  [16] FUN_0017a860(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x17a870;
  return auVar1;
}



/* Entry: 0017a874; end: 0017a887;  */

void FUN_0017a874(void)

{
  FUN_0017a240();
  return;
}



/* Entry: 0017a888; end: 0017a8c7;  */

void FUN_0017a888(void)

{
  FUN_0017a574();
  return;
}



/* Entry: 0017a8c8; end: 0017a967;  */

void FUN_0017a8c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0eb8 != -1) {
    _swift_once(0xaf0eb8,FUN_0017a0e0);
  }
  uVar5 = uRam0000000000b65268;
  uVar4 = uRam0000000000b65260;
  uVar3 = uRam0000000000b65258;
  uVar2 = uRam0000000000b65250;
  uVar1 = uRam0000000000b65248;
  *param_1 = uRam0000000000b65240;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 0017a968; end: 0017a97b;  */

void FUN_0017a968(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf21f8;
  uStack_18 = param_1;
  func_0x000115a8(0xaf21f8,&UNK_007debd8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 0017a97c; end: 0017ab5f;  */

/* WARNING: Removing unreachable block (ram,0x0017a9e8) */

void FUN_0017a97c(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(&uStack_d0,0);
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  uStack_e0 = uStack_90;
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  FUN_0017a3c8(&uStack_120);
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_90 = uStack_e0;
  uStack_b8 = uStack_108;
  uStack_c0 = uStack_110;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0017ab60; end: 0017ac77;  */

uint FUN_0017ab60(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  func_0x00185a78(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 0017ac78; end: 0017adb7;  */

void FUN_0017ac78(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0ec0 != -1) {
    _swift_once(0xaf0ec0,0x17abb8);
  }
  uVar5 = uRam0000000000b65298;
  uVar4 = uRam0000000000b65290;
  uVar3 = uRam0000000000b65288;
  uVar2 = uRam0000000000b65280;
  uVar1 = uRam0000000000b65278;
  *param_1 = uRam0000000000b65270;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 0017adb8; end: 0017addf;  */

undefined * FUN_0017adb8(void)

{
  return &UNK_009afc20;
}



/* Entry: 0017ade0; end: 0017ae9f;  */

void FUN_0017ade0(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df0b0,0x6f,&uStack_48,&lStack_40);
  puRam0000000000b652a8 = puStack_38;
  lRam0000000000b652a0 = lStack_40;
  puRam0000000000b652b8 = puStack_28;
  puRam0000000000b652b0 = puStack_30;
  puRam0000000000b652c8 = puStack_18;
  puRam0000000000b652c0 = puStack_20;
  return;
}



/* Entry: 0017aea0; end: 0017af3f;  */

void FUN_0017aea0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0ec8 != -1) {
    _swift_once(0xaf0ec8,FUN_0017ade0);
  }
  uVar5 = uRam0000000000b652c8;
  uVar4 = uRam0000000000b652c0;
  uVar3 = uRam0000000000b652b8;
  uVar2 = uRam0000000000b652b0;
  uVar1 = uRam0000000000b652a8;
  *param_1 = uRam0000000000b652a0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 0017af40; end: 0017af77;  */

uint FUN_0017af40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x0014bf64(uVar1);
  uVar2 = uVar1;
  FUN_000f8814();
  _swift_bridgeObjectRelease(uVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 0017af78; end: 0017b0bf;  */

/* WARNING: Removing unreachable block (ram,0x0017b0a4) */

void FUN_0017af78(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (lVar1 != 2) {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 0x158);
            lVar1 = unaff_x20 + 0x18;
          }
          else {
            if (lVar1 != 4) goto LAB_0017aff0;
            pcVar3 = *(code **)(param_3 + 0x98);
            lVar1 = unaff_x20 + 0x28;
          }
          goto LAB_0017afe0;
        }
        pcVar3 = *(code **)(param_3 + 0x1a0);
        func_0x00187290();
        (*pcVar3)();
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0x68);
            lVar1 = unaff_x20 + 0x38;
          }
          else {
            if (lVar1 != 6) goto LAB_0017aff0;
            pcVar3 = *(code **)(param_3 + 0x38);
            lVar1 = unaff_x20 + 0x48;
          }
        }
        else if (lVar1 == 7) {
          pcVar3 = *(code **)(param_3 + 0x170);
          lVar1 = unaff_x20 + 0x58;
        }
        else {
          if (lVar1 != 8) goto LAB_0017aff0;
          pcVar3 = *(code **)(param_3 + 0x158);
          lVar1 = unaff_x20 + 0x68;
        }
LAB_0017afe0:
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_0017aff0:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 0017b0c0; end: 0017b24f;  */

void FUN_0017b0c0(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long *unaff_x20;
  long unaff_x21;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  if ((*(long *)(*unaff_x20 + 0x10) != 0) && (FUN_0019d45c(*unaff_x20,2), unaff_x21 != 0)) {
    return;
  }
  lVar3 = unaff_x20[4];
  if (lVar3 != 0) {
    lVar6 = unaff_x20[3];
    __ss6HasherV8_combineyySuF(3);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar6,lVar3);
  }
  if ((char)unaff_x20[6] != '\x01') {
    lVar3 = unaff_x20[5];
    __ss6HasherV8_combineyySuF(4);
    __ss6HasherV8_combineyys6UInt64VF(lVar3);
  }
  if ((char)unaff_x20[8] != '\x01') {
    lVar3 = unaff_x20[7];
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyys6UInt64VF(lVar3);
  }
  if ((char)unaff_x20[10] != '\x01') {
    uVar4 = unaff_x20[9];
    __ss6HasherV8_combineyySuF(6);
    uVar5 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar5 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar5);
  }
  uVar5 = unaff_x20[0xc];
  if (uVar5 >> 0x3c < 0xf) {
    lVar3 = unaff_x20[0xb];
    __ss6HasherV8_combineyySuF(7);
    func_0x00023304(lVar3,uVar5);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,lVar3,uVar5);
    FUN_00023344(lVar3,uVar5);
  }
  lVar3 = unaff_x20[0xe];
  if (lVar3 != 0) {
    lVar6 = unaff_x20[0xd];
    __ss6HasherV8_combineyySuF(8);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar6,lVar3);
  }
  lVar3 = unaff_x20[1];
  uVar1 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((unaff_x20[2] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_0017b230;
    }
    lVar6 = (long)(int)lVar3;
    lVar3 = lVar3 >> 0x20;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    lVar6 = *(long *)(lVar3 + 0x10);
    lVar3 = *(long *)(lVar3 + 0x18);
  }
  if (lVar6 == lVar3) {
    return;
  }
LAB_0017b230:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 0017b250; end: 0017b3bf;  */

void FUN_0017b250(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *unaff_x20;
  if (*(long *)(lVar2 + 0x10) != 0) {
    pcVar3 = *(code **)(param_3 + 0x118);
    uVar1 = param_1;
    func_0x00187290();
    (*pcVar3)(lVar2,2,&UNK_009b2b08,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[4] != 0) {
    (**(code **)(param_3 + 0x70))(unaff_x20[3],unaff_x20[4],3,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if ((char)unaff_x20[6] != '\x01') {
      (**(code **)(param_3 + 0x30))(unaff_x20[5],4,param_2,param_3);
    }
    if ((char)unaff_x20[8] != '\x01') {
      (**(code **)(param_3 + 0x20))(unaff_x20[7],5,param_2,param_3);
    }
    if ((char)unaff_x20[10] != '\x01') {
      (**(code **)(param_3 + 0x10))(unaff_x20[9],6,param_2,param_3);
    }
    FUN_0017b3c0();
    if (unaff_x20[0xe] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[0xd],unaff_x20[0xe],8,param_2,param_3);
    }
    FUN_0013ad2c(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 0017b3c0; end: 0017b453;  */

void FUN_0017b3c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x60);
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    pcVar3 = *(code **)(param_4 + 0x78);
    func_0x00023304(uVar2,uVar1);
    (*pcVar3)(uVar2,uVar1,7,param_3,param_4);
    FUN_00023344(uVar2,uVar1);
  }
  return;
}



/* Entry: 0017b454; end: 0017b457;  */

uint FUN_0017b454(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uVar2 = *param_1;
  FUN_00148a28(uVar2,*param_2);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_2[4];
    if (param_1[4] == 0) {
      if (uVar2 == 0) goto LAB_00182990;
    }
    else if ((uVar2 != 0) &&
            (((uVar3 = param_1[3], uVar3 == param_2[3] && (param_1[4] == uVar2)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar3 & 1) != 0)))) {
LAB_00182990:
      if ((char)param_1[6] == '\x01') {
        if (*(char *)(param_2 + 6) != '\x01') goto LAB_00182b08;
      }
      else {
        uVar1 = 0;
        if ((*(char *)(param_2 + 6) == '\x01') || (param_1[5] != param_2[5])) goto LAB_00182b0c;
      }
      if ((char)param_1[8] == '\x01') {
        if (*(char *)(param_2 + 8) != '\x01') goto LAB_00182b08;
      }
      else {
        uVar1 = 0;
        if ((*(char *)(param_2 + 8) == '\x01') || (param_1[7] != param_2[7])) goto LAB_00182b0c;
      }
      if ((char)param_1[10] == '\x01') {
        if (*(char *)(param_2 + 10) != '\x01') goto LAB_00182b08;
      }
      else {
        uVar1 = 0;
        if ((*(char *)(param_2 + 10) == '\x01') || ((double)param_1[9] != (double)param_2[9]))
        goto LAB_00182b0c;
      }
      uVar6 = param_1[0xc];
      uVar3 = param_1[0xb];
      uVar2 = param_2[0xc];
      uVar5 = param_2[0xb];
      uStack_70 = uVar5;
      uStack_68 = uVar2;
      uStack_60 = uVar3;
      uStack_58 = uVar6;
      if (uVar6 >> 0x3c < 0xf) {
        if (0xe < uVar2 >> 0x3c) goto LAB_00182ab8;
        func_0x00187028(&uStack_60,auStack_80,0xae8490,&UNK_007d0910);
        func_0x00187028(&uStack_70,auStack_80,0xae8490,&UNK_007d0910);
        uVar4 = uVar3;
        FUN_00038814(uVar3,uVar6,uVar5,uVar2);
        FUN_00023344(uVar5,uVar2);
        FUN_00023344(uVar3,uVar6);
        if ((uVar4 & 1) != 0) goto LAB_00182b98;
      }
      else if (uVar2 >> 0x3c < 0xf) {
LAB_00182ab8:
        func_0x00187028(&uStack_60,auStack_80,0xae8490,&UNK_007d0910);
        func_0x00187028(&uStack_70,auStack_80,0xae8490,&UNK_007d0910);
        FUN_00023344(uVar3,uVar6);
        FUN_00023344(uVar5,uVar2);
      }
      else {
        func_0x00187028(&uStack_60,auStack_80,0xae8490,&UNK_007d0910);
        func_0x00187028(&uStack_70,auStack_80,0xae8490,&UNK_007d0910);
        FUN_00023344(uVar3,uVar6);
LAB_00182b98:
        uVar2 = param_2[0xe];
        if (param_1[0xe] == 0) {
          if (uVar2 == 0) goto LAB_00182bd4;
        }
        else if ((uVar2 != 0) &&
                (((uVar3 = param_1[0xd], uVar3 == param_2[0xd] && (param_1[0xe] == uVar2)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar3 & 1) != 0)))) {
LAB_00182bd4:
          uVar2 = param_1[1];
          FUN_00038814(uVar2,param_1[2],param_2[1],param_2[2]);
          uVar1 = (uint)uVar2;
          goto LAB_00182b0c;
        }
      }
    }
  }
LAB_00182b08:
  uVar1 = 0;
LAB_00182b0c:
  return uVar1 & 1;
}



/* Entry: 0017b458; end: 0017b4e7;  */

/* WARNING: Removing unreachable block (ram,0x0017b4a8) */

void FUN_0017b458(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_0017b0c0(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0017b4e8; end: 0017b54f;  */

void FUN_0017b4e8(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[0xc] = 0xf000000000000000;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}



/* Entry: 0017b550; end: 0017b5b7;  */

uint FUN_0017b550(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x0014bf64(uVar1);
  uVar2 = uVar1;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 0017b5b8; end: 0017b5eb;  */

void FUN_0017b5b8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 0017b5ec; end: 0017b5ff;  */

undefined1  [16] FUN_0017b5ec(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x17b5fc;
  return auVar1;
}



/* Entry: 0017b600; end: 0017b613;  */

void FUN_0017b600(void)

{
  FUN_0017af78();
  return;
}



/* Entry: 0017b614; end: 0017b663;  */

void FUN_0017b614(void)

{
  FUN_0017b250();
  return;
}



/* Entry: 0017b664; end: 0017b703;  */

void FUN_0017b664(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0ec8 != -1) {
    _swift_once(0xaf0ec8,FUN_0017ade0);
  }
  uVar5 = uRam0000000000b652c8;
  uVar4 = uRam0000000000b652c0;
  uVar3 = uRam0000000000b652b8;
  uVar2 = uRam0000000000b652b0;
  uVar1 = uRam0000000000b652a8;
  *param_1 = uRam0000000000b652a0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 0017b704; end: 0017b73f;  */

void FUN_0017b704(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf21f0;
  uStack_18 = param_1;
  func_0x000115a8(0xaf21f0,&UNK_007debd0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 0017b740; end: 0017b957;  */

/* WARNING: Removing unreachable block (ram,0x0017b7bc) */

void FUN_0017b740(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_40 = unaff_x20[0xe];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(&uStack_100,0);
  uStack_128 = uStack_d8;
  uStack_130 = uStack_e0;
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_110 = uStack_c0;
  uStack_148 = uStack_f8;
  uStack_150 = uStack_100;
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  FUN_0017b0c0(&uStack_150);
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  uStack_c0 = uStack_110;
  uStack_e8 = uStack_138;
  uStack_f0 = uStack_140;
  uStack_d8 = uStack_128;
  uStack_e0 = uStack_130;
  uStack_f8 = uStack_148;
  uStack_100 = uStack_150;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0017b958; end: 0017b9d7;  */

uint FUN_0017b958(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_120;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_38 = param_2[0xd];
  uStack_40 = param_2[0xc];
  uStack_30 = param_2[0xe];
  FUN_00182920(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 0017b9d8; end: 0017ba43;  */

void FUN_0017b9d8(void)

{
  __sSS6appendyySSF(0x726150656d614e2e,0xe900000000000074);
  uRam0000000000b652d0 = 0xd000000000000023;
  uRam0000000000b652d8 = 0x80000000008b9450;
  return;
}



/* Entry: 0017ba44; end: 0017ba83;  */

undefined8 FUN_0017ba44(void)

{
  if (lRam0000000000af0ed8 != -1) {
    _swift_once(0xaf0ed8,FUN_0017b9d8);
  }
  return 0xb652d0;
}



/* Entry: 0017ba84; end: 0017baa3;  */

undefined1  [16] FUN_0017ba84(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000000af0ed8 != -1) {
    _swift_once(0xaf0ed8,FUN_0017b9d8);
  }
  auVar1._8_8_ = uRam0000000000b652d8;
  auVar1._0_8_ = uRam0000000000b652d0;
  _swift_bridgeObjectRetain(uRam0000000000b652d8);
  return auVar1;
}



/* Entry: 0017baa4; end: 0017bb63;  */

void FUN_0017baa4(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df090,0x1a,&uStack_48,&lStack_40);
  puRam0000000000b652e8 = puStack_38;
  lRam0000000000b652e0 = lStack_40;
  puRam0000000000b652f8 = puStack_28;
  puRam0000000000b652f0 = puStack_30;
  puRam0000000000b65308 = puStack_18;
  puRam0000000000b65300 = puStack_20;
  return;
}



/* Entry: 0017bb64; end: 0017bc03;  */

void FUN_0017bb64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0ee0 != -1) {
    _swift_once(0xaf0ee0,FUN_0017baa4);
  }
  uVar5 = uRam0000000000b65308;
  uVar4 = uRam0000000000b65300;
  uVar3 = uRam0000000000b652f8;
  uVar2 = uRam0000000000b652f0;
  uVar1 = uRam0000000000b652e8;
  *param_1 = uRam0000000000b652e0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 0017bc04; end: 0017bc23;  */

bool FUN_0017bc04(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    return *(char *)(unaff_x20 + 0x20) != '\x02';
  }
  return false;
}



/* Entry: 0017bc24; end: 0017bcbb;  */

void FUN_0017bc24(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_0017bc78:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x0017bc94;
  pcVar3 = *(code **)(param_3 + 0x158);
  lVar1 = unaff_x20 + 0x10;
  goto LAB_0017bc60;
code_r0x0017bc94:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x140);
    lVar1 = unaff_x20 + 0x20;
LAB_0017bc60:
    (*pcVar3)(lVar1,param_2,param_3);
  }
  goto LAB_0017bc78;
}



/* Entry: 0017bcbc; end: 0017bd4b;  */

void FUN_0017bcbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  if (unaff_x20[3] != 0) {
    (**(code **)(param_3 + 0x70))(unaff_x20[2],unaff_x20[3],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (*(byte *)(unaff_x20 + 4) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)(unaff_x20 + 4) & 1,2,param_2,param_3);
    }
    FUN_0013ad2c(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 0017bd4c; end: 0017bd4f;  */

ulong FUN_0017bd4c(long *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong *unaff_x20;
  ulong uVar20;
  long lVar21;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar14 = param_1[3];
  lVar12 = param_2[3];
  if (lVar14 == 0) {
    if (lVar12 != 0) {
      return 0;
    }
  }
  else {
    if (lVar12 == 0) {
      return 0;
    }
    uVar17 = param_1[2];
    if ((uVar17 != param_2[2] || lVar14 != lVar12) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar17,lVar14,param_2[2],lVar12,0), (uVar17 & 1) == 0)) {
      return 0;
    }
  }
  bVar1 = *(byte *)(param_2 + 4);
  if (*(byte *)(param_1 + 4) == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((*(byte *)(param_1 + 4) ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  lVar12 = *param_1;
  pbVar10 = (byte *)param_1[1];
  lVar14 = *param_2;
  uVar17 = param_2[1];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = (uint)((ulong)pbVar10 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  uVar4 = (uint)(uVar17 >> 0x20);
  uVar18 = uVar4 >> 0x1e;
  iVar6 = (int)lVar12;
  if ((ulong)pbVar10 >> 0x3e == 3) {
    uVar16 = 0;
    if ((((lVar12 != 0) || (pbVar10 != (byte *)0xc000000000000000)) || (uVar17 >> 0x3e < 3)) ||
       ((uVar16 = 0, lVar14 != 0 || (uVar17 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar3 >> 0x1e < 2) {
      if (uVar13 == 0) {
        uVar16 = (ulong)pbVar10 >> 0x30 & 0xff;
      }
      else {
        iVar15 = (int)((ulong)lVar12 >> 0x20);
        if (SBORROW4(iVar15,iVar6)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar5)();
        }
        uVar16 = (ulong)(iVar15 - iVar6);
      }
joined_r0x000389b8:
      if (1 < uVar4 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar18 == 0) {
        uVar19 = uVar17 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar15 = (int)((ulong)lVar14 >> 0x20);
      if (SBORROW4(iVar15,(int)lVar14)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar5)();
      }
      if (uVar16 != (long)(iVar15 - (int)lVar14)) goto LAB_0003899c;
    }
    else {
      if (uVar13 == 2) {
        uVar16 = *(long *)(lVar12 + 0x18) - *(long *)(lVar12 + 0x10);
        if (SBORROW8(*(long *)(lVar12 + 0x18),*(long *)(lVar12 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar5)();
        }
        goto joined_r0x000389b8;
      }
      uVar16 = 0;
      if (uVar18 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar18 != 2) {
        uVar17 = (ulong)(uVar16 == 0);
        goto LAB_00038af8;
      }
      uVar19 = *(long *)(lVar14 + 0x18) - *(long *)(lVar14 + 0x10);
      if (SBORROW8(*(long *)(lVar14 + 0x18),*(long *)(lVar14 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar5)();
      }
LAB_000388d4:
      if (uVar16 != uVar19) {
LAB_0003899c:
        uVar17 = 0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar16) {
      if (uVar13 < 2) {
        if (uVar13 == 0) {
          abStack_70[0] = (byte)lVar12;
          abStack_70[1] = (byte)((ulong)lVar12 >> 8);
          abStack_70[2] = (byte)((ulong)lVar12 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar12 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar12 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar12 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar12 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar12 >> 0x38);
          abStack_70[8] = (byte)pbVar10;
          abStack_70[9] = (byte)((ulong)pbVar10 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar10 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar10 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar10 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar10 >> 0x28);
          pbVar10 = abStack_70 + ((ulong)pbVar10 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar17 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar21 = (long)iVar6;
        lVar7 = (lVar12 >> 0x20) - lVar21;
        if (lVar12 >> 0x20 < lVar21) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar12 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar12 = 0;
        }
        else {
          lVar8 = lVar12;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar21,lVar8)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar5)();
          }
          lVar12 = (lVar21 - lVar8) + lVar12;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar12 != 0) {
            if (lVar7 <= lVar8) {
              lVar8 = lVar7;
            }
            pbVar11 = (byte *)(lVar8 + lVar12);
            goto LAB_00038aec;
          }
        }
        pbVar11 = (byte *)0x0;
      }
      else {
        if (uVar13 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar10 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar21 = *(long *)(lVar12 + 0x10);
        lVar8 = *(long *)(lVar12 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar7 = lVar12;
        if (lVar12 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar21,lVar7)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar5)();
          }
          lVar12 = (lVar21 - lVar7) + lVar12;
        }
        lVar2 = lVar8 - lVar21;
        if (SBORROW8(lVar8,lVar21)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar12 == 0) {
          pbVar11 = (byte *)0x0;
        }
        else {
          if (lVar2 <= lVar7) {
            lVar7 = lVar2;
          }
          pbVar11 = (byte *)(lVar7 + lVar12);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar10 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar12,pbVar11,lVar14,uVar17);
      uVar17 = (ulong)abStack_70[0];
      pbVar10 = pbVar11;
      goto LAB_00038af8;
    }
  }
  uVar17 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar17;
  }
  ___stack_chk_fail();
  lVar12 = (long)pbVar10 - uVar17;
  if (SBORROW8((long)pbVar10,uVar17)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar5)();
  }
  uVar20 = *unaff_x20;
  uVar19 = uVar20 & 0xffffffffffffff8;
  uVar17 = uVar19 + 0x20 + uVar17 * 8;
  uVar9 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar16 = uVar17;
  _swift_arrayDestroy(uVar17,lVar12,uVar9);
  lVar7 = lVar14 - lVar12;
  if (SBORROW8(lVar14,lVar12)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar5)();
  }
  if (lVar7 != 0) {
    if (uVar20 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar19 + 0x10);
      lVar12 = uVar16 - (long)pbVar10;
    }
    else {
      uVar16 = uVar19;
      if ((uVar20 & 0x8000000000000000) != 0) {
        uVar16 = uVar20;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar12 = uVar16 - (long)pbVar10;
    }
    if (SBORROW8(uVar16,(long)pbVar10)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar5)();
    }
    uVar17 = uVar17 + lVar14 * 8;
    uVar16 = uVar19 + 0x20 + (long)pbVar10 * 8;
    if (uVar17 != uVar16 || uVar16 + lVar12 * 8 <= uVar17) {
      _memmove(uVar17,uVar16,lVar12 << 3);
    }
    if (uVar20 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar19 + 0x10);
    }
    else {
      uVar16 = uVar19;
      if ((uVar20 & 0x8000000000000000) != 0) {
        uVar16 = uVar20;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar16,lVar7)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar5)();
    }
    *(ulong *)(uVar19 + 0x10) = uVar16 + lVar7;
  }
  if (lVar14 < 1) {
    return uVar16;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar5)();
}



/* Entry: 0017bd50; end: 0017bd8b;  */

void FUN_0017bd50(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_0014d1f8(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0017bd8c; end: 0017bde3;  */

void FUN_0017bd8c(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 2;
  return;
}



/* Entry: 0017bde4; end: 0017be13;  */

undefined1  [16] FUN_0017bde4(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 0017be14; end: 0017be47;  */

void FUN_0017be14(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 0017be48; end: 0017be5b;  */

undefined8 FUN_0017be48(void)

{
  return 0x17be58;
}



/* Entry: 0017be5c; end: 0017be83;  */

void FUN_0017be5c(void)

{
  FUN_0017bc24();
  return;
}



/* Entry: 0017be84; end: 0017bf23;  */

void FUN_0017be84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0ee0 != -1) {
    _swift_once(0xaf0ee0,FUN_0017baa4);
  }
  uVar5 = uRam0000000000b65308;
  uVar4 = uRam0000000000b65300;
  uVar3 = uRam0000000000b652f8;
  uVar2 = uRam0000000000b652f0;
  uVar1 = uRam0000000000b652e8;
  *param_1 = uRam0000000000b652e0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 0017bf24; end: 0017bf5f;  */

void FUN_0017bf24(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf21e8;
  uStack_18 = param_1;
  func_0x000115a8(0xaf21e8,&UNK_007debc8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 0017bf60; end: 0017c033;  */

void FUN_0017bf60(void)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  uStack_30 = *(undefined1 *)(unaff_x20 + 4);
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  FUN_0014d1f8(auStack_98);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0017c034; end: 0017c07b;  */

uint FUN_0017c034(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = *(undefined1 *)(param_1 + 4);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = *(undefined1 *)(param_2 + 4);
  FUN_001831e4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 0017c07c; end: 0017c0a3;  */

undefined * FUN_0017c07c(void)

{
  return &UNK_009afc30;
}



/* Entry: 0017c0a4; end: 0017c163;  */

void FUN_0017c0a4(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007deff0,0x9a,&uStack_48,&lStack_40);
  puRam0000000000b65318 = puStack_38;
  lRam0000000000b65310 = lStack_40;
  puRam0000000000b65328 = puStack_28;
  puRam0000000000b65320 = puStack_30;
  puRam0000000000b65338 = puStack_18;
  puRam0000000000b65330 = puStack_20;
  return;
}



/* Entry: 0017c164; end: 0017c203;  */

void FUN_0017c164(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0ee8 != -1) {
    _swift_once(0xaf0ee8,FUN_0017c0a4);
  }
  uVar5 = uRam0000000000b65338;
  uVar4 = uRam0000000000b65330;
  uVar3 = uRam0000000000b65328;
  uVar2 = uRam0000000000b65320;
  uVar1 = uRam0000000000b65318;
  *param_1 = uRam0000000000b65310;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 0017c204; end: 0017c427;  */

/* WARNING: Removing unreachable block (ram,0x0017c3d8) */
/* WARNING: Removing unreachable block (ram,0x0017c41c) */

void FUN_0017c204(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar5 = *(code **)(param_3 + 0x188);
            func_0x001921b4();
            lVar2 = unaff_x20 + 0x1a;
            puVar3 = &UNK_009b2d68;
          }
          else {
            if (lVar1 != 4) goto LAB_0017c3dc;
            pcVar5 = *(code **)(param_3 + 0x188);
            func_0x00192174();
            lVar2 = unaff_x20 + 0x1b;
            puVar3 = &UNK_009b2df8;
          }
          goto LAB_0017c3b0;
        }
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x188);
          func_0x00192234();
          lVar2 = unaff_x20 + 0x18;
          puVar3 = &UNK_009b2c48;
          goto LAB_0017c3b0;
        }
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x188);
          func_0x001921f4();
          lVar2 = unaff_x20 + 0x19;
          puVar3 = &UNK_009b2cd8;
          goto LAB_0017c3b0;
        }
LAB_0017c3dc:
        if ((undefined *)(lVar1 + -1000) <= &UNK_00002328) {
          lVar2 = lVar1;
          FUN_00188ae8();
          (**(code **)(param_3 + 0x1d0))(unaff_x20 + 0x10,&UNK_009b2b90,lVar2,lVar1,param_2,param_3)
          ;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar5 = *(code **)(param_3 + 0x188);
            func_0x00192134();
            lVar2 = unaff_x20 + 0x1c;
            puVar3 = &UNK_009b2e88;
          }
          else {
            if (lVar1 != 6) goto LAB_0017c3dc;
            pcVar5 = *(code **)(param_3 + 0x188);
            func_0x001920f4();
            lVar2 = unaff_x20 + 0x1d;
            puVar3 = &UNK_009b2f18;
          }
        }
        else if (lVar1 == 7) {
          pcVar5 = *(code **)(param_3 + 0x188);
          func_0x001920b4();
          lVar2 = unaff_x20 + 0x1e;
          puVar3 = &UNK_009b2fa8;
        }
        else {
          if (lVar1 != 8) goto LAB_0017c3dc;
          pcVar5 = *(code **)(param_3 + 0x188);
          func_0x00192074();
          lVar2 = unaff_x20 + 0x1f;
          puVar3 = &UNK_009b30b8;
        }
LAB_0017c3b0:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 0017c428; end: 0017c5df;  */

void FUN_0017c428(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  
  if ((param_5 & 0xff) != 4) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(param_5 & 0xff);
  }
  if ((param_5 & 0xff00) != 0x300) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyySuF(param_5 >> 8 & 0xff);
  }
  if ((param_5 & 0xff0000) != 0x30000) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyySuF(param_5 >> 0x10 & 0xff);
  }
  if ((param_5 & 0xff000000) != 0x3000000) {
    __ss6HasherV8_combineyySuF(4);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_007dfe40 + (param_5 >> 0x18 & 0xff) * 8));
  }
  if ((param_5 & 0xff00000000) != 0x300000000) {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyySuF(param_5 >> 0x20 & 0xff);
  }
  if ((param_5 & 0xff0000000000) != 0x30000000000) {
    __ss6HasherV8_combineyySuF(6);
    __ss6HasherV8_combineyySuF(param_5 >> 0x28 & 0xff);
  }
  if ((param_5 & 0xff000000000000) != 0x3000000000000) {
    __ss6HasherV8_combineyySuF(7);
    __ss6HasherV8_combineyySuF(param_5 >> 0x30 & 0xff);
  }
  if (param_5 >> 0x38 != 5) {
    __ss6HasherV8_combineyySuF(8);
    __ss6HasherV8_combineyySuF(param_5 >> 0x38);
  }
  FUN_0013bd14(param_1,1000,&UNK_00002711,param_4);
  if (unaff_x21 != 0) {
    return;
  }
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((param_3 & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_0017c5c4;
    }
    lVar3 = (long)(int)param_2;
    lVar4 = param_2 >> 0x20;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    lVar3 = *(long *)(param_2 + 0x10);
    lVar4 = *(long *)(param_2 + 0x18);
  }
  if (lVar3 == lVar4) {
    return;
  }
LAB_0017c5c4:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,param_2,param_3);
  return;
}



/* Entry: 0017c5e0; end: 0017c8a7;  */

void FUN_0017c5e0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6,long param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long unaff_x21;
  uint uVar3;
  code *pcVar4;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  uVar3 = (uint)param_5;
  puVar2 = param_1;
  if ((uVar3 & 0xff) != 4) {
    uStack_58 = (undefined1)param_5;
    pcVar4 = *(code **)(param_7 + 0x80);
    puVar1 = param_1;
    func_0x00192234();
    puVar2 = &uStack_58;
    (*pcVar4)(puVar2,1,&UNK_009b2c48,puVar1,param_6,param_7);
  }
  if (unaff_x21 == 0) {
    puVar1 = puVar2;
    if ((uVar3 >> 8 & 0xff) != 3) {
      uStack_57 = (undefined1)(param_5 >> 8);
      pcVar4 = *(code **)(param_7 + 0x80);
      func_0x001921f4();
      puVar1 = &uStack_57;
      (*pcVar4)(puVar1,2,&UNK_009b2cd8,puVar2,param_6,param_7);
    }
    puVar2 = puVar1;
    if ((uVar3 >> 0x10 & 0xff) != 3) {
      uStack_56 = (undefined1)(param_5 >> 0x10);
      pcVar4 = *(code **)(param_7 + 0x80);
      func_0x001921b4();
      puVar2 = &uStack_56;
      (*pcVar4)(puVar2,3,&UNK_009b2d68,puVar1,param_6,param_7);
    }
    puVar1 = puVar2;
    if (uVar3 >> 0x18 != 3) {
      uStack_55 = (undefined1)(param_5 >> 0x18);
      pcVar4 = *(code **)(param_7 + 0x80);
      func_0x00192174();
      puVar1 = &uStack_55;
      (*pcVar4)(puVar1,4,&UNK_009b2df8,puVar2,param_6,param_7);
    }
    uVar3 = (uint)(param_5 >> 0x20);
    puVar2 = puVar1;
    if ((uVar3 & 0xff) != 3) {
      uStack_54 = (undefined1)(param_5 >> 0x20);
      pcVar4 = *(code **)(param_7 + 0x80);
      func_0x00192134();
      puVar2 = &uStack_54;
      (*pcVar4)(puVar2,5,&UNK_009b2e88,puVar1,param_6,param_7);
    }
    puVar1 = puVar2;
    if ((uVar3 >> 8 & 0xff) != 3) {
      uStack_53 = (undefined1)(param_5 >> 0x28);
      pcVar4 = *(code **)(param_7 + 0x80);
      func_0x001920f4();
      puVar1 = &uStack_53;
      (*pcVar4)(puVar1,6,&UNK_009b2f18,puVar2,param_6,param_7);
    }
    puVar2 = puVar1;
    if (((ushort)(param_5 >> 0x30) & 0xff) != 3) {
      uStack_52 = (undefined1)(param_5 >> 0x30);
      pcVar4 = *(code **)(param_7 + 0x80);
      func_0x001920b4();
      puVar2 = &uStack_52;
      (*pcVar4)(puVar2,7,&UNK_009b2fa8,puVar1,param_6,param_7);
    }
    if (param_5 >> 0x38 != 5) {
      uStack_51 = (undefined1)(param_5 >> 0x38);
      pcVar4 = *(code **)(param_7 + 0x80);
      func_0x00192074();
      (*pcVar4)(&uStack_51,8,&UNK_009b30b8,puVar2,param_6,param_7);
    }
    (**(code **)(param_7 + 0x1b0))(param_4,1000,&UNK_00002711,param_6,param_7);
    FUN_0013ad2c(param_1,param_2,param_3,param_6,param_7);
  }
  return;
}



/* Entry: 0017c8a8; end: 0017c8ab;  */

bool FUN_0017c8a8(ulong param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6,long param_7,ulong param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  uVar9 = (uint)(param_8 >> 0x20);
  uVar8 = (uint)param_8;
  uVar7 = (uint)param_4;
  if ((param_4 & 0xff) == 4) {
    if ((uVar8 & 0xff) != 4) {
      return false;
    }
  }
  else {
    if ((uVar8 & 0xff) == 4) {
      return false;
    }
    if (((uVar8 ^ uVar7) & 0xff) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff00) == 0x300) {
    if ((uVar8 & 0xff00) != 0x300) {
      return false;
    }
  }
  else {
    if ((uVar8 & 0xff00) == 0x300) {
      return false;
    }
    if (((uVar7 ^ uVar8) & 0xff00) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff0000) == 0x30000) {
    if ((uVar8 & 0xff0000) != 0x30000) {
      return false;
    }
  }
  else {
    if ((uVar8 & 0xff0000) == 0x30000) {
      return false;
    }
    if (((uVar7 ^ uVar8) & 0xff0000) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff000000) == 0x3000000) {
    if ((uVar8 & 0xff000000) != 0x3000000) {
      return false;
    }
  }
  else {
    if ((uVar8 & 0xff000000) == 0x3000000) {
      return false;
    }
    if (((uVar7 ^ uVar8) & 0xff000000) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff00000000) == 0x300000000) {
    if ((uVar9 & 0xff) != 3) {
      return false;
    }
  }
  else {
    if ((uVar9 & 0xff) == 3) {
      return false;
    }
    if (((param_8 ^ param_4) & 0xff00000000) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff0000000000) == 0x30000000000) {
    if ((uVar9 & 0xff00) != 0x300) {
      return false;
    }
  }
  else {
    if ((uVar9 & 0xff00) == 0x300) {
      return false;
    }
    if (((param_8 ^ param_4) & 0xff0000000000) != 0) {
      return false;
    }
  }
  if ((param_4 & 0xff000000000000) == 0x3000000000000) {
    if ((uVar9 & 0xff0000) != 0x30000) {
      return false;
    }
  }
  else {
    if ((uVar9 & 0xff0000) == 0x30000) {
      return false;
    }
    if (((param_8 ^ param_4) & 0xff000000000000) != 0) {
      return false;
    }
  }
  if (param_4 >> 0x38 == 5) {
    if ((ulong)(uVar9 >> 0x18) != 5) {
      return false;
    }
  }
  else if (param_4 >> 0x38 != (ulong)(uVar9 >> 0x18)) {
    return false;
  }
  FUN_00038814(param_1,param_2,param_5,param_6);
  if ((param_1 & 1) == 0) {
    return false;
  }
  if (*(long *)(param_3 + 0x10) != *(long *)(param_7 + 0x10)) {
    return false;
  }
  uVar12 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_3 + 0x40);
  uVar12 = uVar12 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar10 = 0;
  lVar4 = lVar10;
  if (uVar13 == 0) goto LAB_000e2ea0;
LAB_000e2ecc:
  uVar11 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
  uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
  uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
  uVar13 = uVar13 - 1 & uVar13;
  uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar4 << 6;
  lStack_d0 = *(long *)(*(long *)(param_3 + 0x30) + uVar11 * 8);
  FUN_000e1304(*(long *)(param_3 + 0x38) + uVar11 * 0x28,&uStack_c8);
  lVar10 = lVar4;
  do {
    lVar4 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar3 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(param_3);
      return true;
    }
    uVar11 = 0;
    FUN_000e1450(&uStack_98);
    if ((*(long *)(param_7 + 0x10) == 0) || (FUN_000e1d94(lVar4), (uVar11 & 1) == 0)) {
LAB_000e3018:
      _swift_release(param_3);
LAB_000e3040:
      FUN_00011670(&lStack_d0);
      return bVar3;
    }
    FUN_000e1304(*(long *)(param_7 + 0x38) + lVar4 * 0x28,auStack_120);
    FUN_000e1450(auStack_120,alStack_f8);
    plVar5 = &lStack_d0;
    FUN_0001393c(plVar5,uStack_b8);
    _swift_getDynamicType();
    plVar6 = alStack_f8;
    FUN_0001393c(plVar6,uStack_e0);
    _swift_getDynamicType();
    lVar4 = lStack_b0;
    uVar1 = uStack_b8;
    if (plVar5 != plVar6) {
      _swift_release(param_3);
      FUN_00011670(alStack_f8);
      goto LAB_000e3040;
    }
    FUN_0001393c(&lStack_d0,uStack_b8);
    plVar5 = alStack_f8;
    (**(code **)(lVar4 + 0x20))(plVar5,uVar1,lVar4);
    FUN_00011670(alStack_f8);
    if (((ulong)plVar5 & 1) == 0) goto LAB_000e3018;
    FUN_00011670(&lStack_d0);
    lVar4 = lVar10;
    if (uVar13 != 0) goto LAB_000e2ecc;
LAB_000e2ea0:
    uVar11 = uVar12;
    if ((long)uVar12 <= lVar10 + 1) {
      uVar11 = lVar10 + 1;
    }
    while( true ) {
      lVar4 = lVar10 + 1;
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xe3070);
        (*pcVar2)();
      }
      if ((long)uVar12 <= lVar4) break;
      uVar13 = ((ulong *)(param_3 + 0x40))[lVar4];
      lVar10 = lVar10 + 1;
      if (uVar13 != 0) goto LAB_000e2ecc;
    }
    uVar13 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar10 = uVar11 - 1;
  } while( true );
}



/* Entry: 0017c8ac; end: 0017c963;  */

/* WARNING: Removing unreachable block (ram,0x0017c920) */

void FUN_0017c8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_90,0);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_0017c428(&uStack_e0,param_1,param_2,param_3,param_4);
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0017c964; end: 0017c9d3;  */

void FUN_0017c964(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  *(undefined1 *)(param_1 + 3) = 4;
  *(undefined4 *)((long)param_1 + 0x19) = 0x3030303;
  *(undefined2 *)((long)param_1 + 0x1d) = 0x303;
  *(undefined1 *)((long)param_1 + 0x1f) = 5;
  return;
}



/* Entry: 0017c9d4; end: 0017ca0b;  */

void FUN_0017c9d4(void)

{
  FUN_0017c204();
  return;
}



/* Entry: 0017ca0c; end: 0017caab;  */

void FUN_0017ca0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0ee8 != -1) {
    _swift_once(0xaf0ee8,FUN_0017c0a4);
  }
  uVar5 = uRam0000000000b65338;
  uVar4 = uRam0000000000b65330;
  uVar3 = uRam0000000000b65328;
  uVar2 = uRam0000000000b65320;
  uVar1 = uRam0000000000b65318;
  *param_1 = uRam0000000000b65310;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 0017caac; end: 0017cabf;  */

void FUN_0017caac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf21e0;
  uStack_18 = param_1;
  func_0x000115a8(0xaf21e0,&UNK_007debc0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}


