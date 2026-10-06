/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae245a8; end: 10ae2465f;  */

void FUN_10ae245a8(long param_1,long param_2,undefined8 param_3,ulong *param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
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
  undefined1 auVar37 [16];
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  long lStack_d20;
  long lStack_d18;
  long lStack_d10;
  long lStack_d08;
  long lStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  ulong auStack_ca0 [4];
  ulong uStack_c80;
  ulong uStack_c78;
  long lStack_c70;
  ulong uStack_c68;
  ulong uStack_c60;
  long lStack_c58;
  long lStack_c50;
  long lStack_c48;
  long lStack_c40;
  long lStack_c38;
  ulong uStack_c30;
  long lStack_c28;
  long lStack_c20;
  long lStack_c18;
  long lStack_c10;
  ulong uStack_c08;
  ulong uStack_c00;
  long lStack_bf8;
  ulong uStack_bf0;
  ulong uStack_be8;
  long lStack_be0;
  long lStack_bd8;
  long lStack_bd0;
  long lStack_bc8;
  long lStack_bc0;
  long lStack_b40;
  long lStack_b38;
  long lStack_b30;
  long lStack_b28;
  long lStack_b20;
  long lStack_b18;
  long lStack_b10;
  long lStack_b08;
  long lStack_b00;
  long lStack_af8;
  long lStack_af0;
  long lStack_ae8;
  long lStack_ae0;
  long lStack_ad8;
  long lStack_ad0;
  ulong uStack_ac8;
  long lStack_ac0;
  long lStack_ab8;
  long lStack_ab0;
  long lStack_aa8;
  undefined1 auStack_aa0 [64];
  ulong uStack_a60;
  ulong uStack_a58;
  long lStack_a50;
  ulong uStack_a48;
  ulong uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_990;
  ulong uStack_980;
  ulong uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  ulong uStack_960;
  long lStack_958;
  long lStack_950;
  long lStack_948;
  long lStack_940;
  long lStack_938;
  ulong uStack_930;
  long lStack_928;
  long lStack_920;
  long lStack_918;
  long lStack_910;
  undefined1 auStack_908 [40];
  long lStack_8e0;
  long lStack_8d8;
  long lStack_8d0;
  long lStack_8c8;
  long lStack_8c0;
  long lStack_8b8;
  long lStack_8b0;
  long lStack_8a8;
  long lStack_8a0;
  long lStack_898;
  long lStack_890;
  long lStack_888;
  long lStack_880;
  long lStack_878;
  long lStack_870;
  long lStack_868;
  long lStack_860;
  long lStack_858;
  long lStack_850;
  long lStack_848;
  ulong auStack_840 [5];
  undefined1 auStack_818 [40];
  undefined1 auStack_7f0 [40];
  undefined1 auStack_7c8 [40];
  undefined1 auStack_7a0 [160];
  undefined1 auStack_700 [160];
  undefined1 auStack_660 [160];
  undefined1 auStack_5c0 [160];
  undefined1 auStack_520 [160];
  undefined1 auStack_480 [160];
  undefined1 auStack_3e0 [168];
  char acStack_338 [256];
  byte abStack_238 [256];
  long lStack_138;
  undefined1 auStack_c0 [40];
  byte abStack_98 [40];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char acStack_48 [32];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = *(undefined8 *)(param_2 + 0x58);
  uStack_70 = *(undefined8 *)(param_2 + 0x50);
  uStack_60 = *(undefined8 *)(param_2 + 0x60);
  uStack_58 = *(undefined8 *)(param_2 + 0x68);
  uStack_50 = *(undefined8 *)(param_2 + 0x70);
  func_0x000107c34f5c(abStack_98,&uStack_70);
  func_0x000107c34f60(&uStack_70,param_2,abStack_98);
  pbVar7 = abStack_98;
  func_0x000107c34f60(auStack_c0,param_2 + 0x28);
  func_0x000107c34f58(param_1,auStack_c0);
  pcVar4 = acStack_48;
  pbVar5 = (byte *)&uStack_70;
  func_0x000107c34f58();
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ acStack_48[0] << 7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar6 = pbVar5;
  if (pbVar7[0x3f] < 0x20) {
    auStack_840[0] = *param_4;
    auStack_840[1] = param_4[1];
    auStack_840[2] = param_4[2];
    auStack_840[3] = param_4[3] & 0x7fffffffffffffff;
    func_0x000107c2b258(&lStack_c58,auStack_840);
    lStack_c20 = 0;
    lStack_c28 = 0;
    lStack_c10 = 0;
    lStack_c18 = 0;
    uStack_c30 = 1;
    func_0x000107c2b274(&uStack_980,&lStack_c58);
    func_0x000107c34f60(&lStack_be0,&uStack_980,&UNK_10e5182d0);
    uVar9 = uStack_978 + (uStack_980 + 0xfffffffffffd9 >> 0x33) + 0xffffffffffffe;
    uVar11 = uStack_970 + (uVar9 >> 0x33) + 0xffffffffffffe;
    uVar18 = uStack_968 + (uVar11 >> 0x33) + 0xffffffffffffe;
    uVar19 = uStack_960 + (uVar18 >> 0x33) + 0xffffffffffffe;
    uVar8 = (uStack_980 + 0xfffffffffffd9 & 0x7ffffffffffff) + (uVar19 >> 0x33) * 0x13;
    uVar9 = (uVar9 & 0x7ffffffffffff) + (uVar8 >> 0x33);
    uVar8 = uVar8 & 0x7ffffffffffff;
    uVar20 = uVar9 & 0x7ffffffffffff;
    lVar10 = (uVar11 & 0x7ffffffffffff) + (uVar9 >> 0x33);
    uVar18 = uVar18 & 0x7ffffffffffff;
    uVar19 = uVar19 & 0x7ffffffffffff;
    lStack_8e0 = lStack_be0 + 1;
    lStack_8d0 = lStack_bd0;
    lStack_8d8 = lStack_bd8;
    lStack_8c0 = lStack_bc0;
    lStack_8c8 = lStack_bc8;
    uStack_a60 = uVar8;
    uStack_a58 = uVar20;
    lStack_a50 = lVar10;
    uStack_a48 = uVar18;
    uStack_a40 = uVar19;
    func_0x000107c34f60(&uStack_980,&uStack_a60,&lStack_8e0);
    func_0x000107c2b274(auStack_840,&uStack_980);
    func_0x000107c2b274(abStack_238,auStack_840);
    func_0x000107c2b274(abStack_238,abStack_238);
    func_0x000107c34f60(abStack_238,&uStack_980,abStack_238);
    func_0x000107c34f60(auStack_840,auStack_840,abStack_238);
    func_0x000107c2b274(auStack_840,auStack_840);
    func_0x000107c34f60(auStack_840,abStack_238,auStack_840);
    func_0x000107c2b274(abStack_238,auStack_840);
    iVar16 = 4;
    do {
      func_0x000107c2b274(abStack_238,abStack_238);
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    func_0x000107c34f60(auStack_840,abStack_238,auStack_840);
    func_0x000107c2b274(abStack_238,auStack_840);
    iVar16 = 9;
    do {
      func_0x000107c2b274(abStack_238,abStack_238);
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    func_0x000107c34f60(abStack_238,abStack_238,auStack_840);
    func_0x000107c2b274(acStack_338,abStack_238);
    iVar16 = 0x13;
    do {
      func_0x000107c2b274(acStack_338,acStack_338);
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    func_0x000107c34f60(abStack_238,acStack_338,abStack_238);
    func_0x000107c2b274(abStack_238,abStack_238);
    iVar16 = 9;
    do {
      func_0x000107c2b274(abStack_238,abStack_238);
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    func_0x000107c34f60(auStack_840,abStack_238,auStack_840);
    func_0x000107c2b274(abStack_238,auStack_840);
    iVar16 = 0x31;
    do {
      func_0x000107c2b274(abStack_238,abStack_238);
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    func_0x000107c34f60(abStack_238,abStack_238,auStack_840);
    func_0x000107c2b274(acStack_338,abStack_238);
    iVar16 = 99;
    do {
      func_0x000107c2b274(acStack_338,acStack_338);
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    func_0x000107c34f60(abStack_238,acStack_338,abStack_238);
    func_0x000107c2b274(abStack_238,abStack_238);
    iVar16 = 0x31;
    do {
      func_0x000107c2b274(abStack_238,abStack_238);
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    func_0x000107c34f60(auStack_840,abStack_238,auStack_840);
    func_0x000107c2b274(auStack_840,auStack_840);
    func_0x000107c2b274(auStack_840,auStack_840);
    func_0x000107c34f60(&uStack_c80,auStack_840,&uStack_980);
    func_0x000107c34f60(&uStack_c80,&uStack_c80,&uStack_a60);
    func_0x000107c2b274(&lStack_be0,&uStack_c80);
    pbVar6 = (byte *)&lStack_be0;
    func_0x000107c34f60(&lStack_be0,pbVar6,&lStack_8e0);
    lStack_d20 = (lStack_be0 - uVar8) + 0xfffffffffffda;
    lStack_d18 = (lStack_bd8 - uVar20) + 0xffffffffffffe;
    lStack_d10 = (lStack_bd0 - lVar10) + 0xffffffffffffe;
    lStack_d08 = (lStack_bc8 - uVar18) + 0xffffffffffffe;
    lStack_d00 = (lStack_bc0 - uVar19) + 0xffffffffffffe;
    iVar16 = (int)&lStack_d20;
    FUN_10ae22f44();
    if (iVar16 != 0) {
      lStack_d20 = lStack_be0 + uVar8;
      lStack_d18 = lStack_bd8 + uVar20;
      lStack_d10 = lStack_bd0 + lVar10;
      lStack_d08 = lStack_bc8 + uVar18;
      lStack_d00 = lStack_bc0 + uVar19;
      iVar16 = (int)&lStack_d20;
      FUN_10ae22f44();
      if (iVar16 != 0) goto LAB_10ae24c88;
      func_0x000107c34f60(&uStack_c80,&uStack_c80,&UNK_10e5182f8);
    }
    func_0x000107c34f58(auStack_840,&uStack_c80);
    if (((byte)auStack_840[0] & 1) != *(byte *)((long)param_4 + 0x1f) >> 7) {
      uVar9 = ((0xfffffffffffda - uStack_c80 >> 0x33) - uStack_c78) + 0xffffffffffffe;
      uVar11 = ((uVar9 >> 0x33) - lStack_c70) + 0xffffffffffffe;
      uStack_c68 = ((uVar11 >> 0x33) - uStack_c68) + 0xffffffffffffe;
      uStack_c60 = ((uStack_c68 >> 0x33) - uStack_c60) + 0xffffffffffffe;
      uStack_c80 = (0xfffffffffffda - uStack_c80 & 0x7ffffffffffff) + (uStack_c60 >> 0x33) * 0x13;
      uVar9 = (uVar9 & 0x7ffffffffffff) + (uStack_c80 >> 0x33);
      uStack_c80 = uStack_c80 & 0x7ffffffffffff;
      uStack_c78 = uVar9 & 0x7ffffffffffff;
      lStack_c70 = (uVar11 & 0x7ffffffffffff) + (uVar9 >> 0x33);
      uStack_c68 = uStack_c68 & 0x7ffffffffffff;
      uStack_c60 = uStack_c60 & 0x7ffffffffffff;
    }
    func_0x000107c34f60(&uStack_c08,&uStack_c80,&lStack_c58);
    uVar9 = ((0xfffffffffffda - uStack_c80 >> 0x33) - uStack_c78) + 0xffffffffffffe;
    uVar11 = ((uVar9 >> 0x33) - lStack_c70) + 0xffffffffffffe;
    uStack_c68 = ((uVar11 >> 0x33) - uStack_c68) + 0xffffffffffffe;
    uStack_c60 = ((uStack_c68 >> 0x33) - uStack_c60) + 0xffffffffffffe;
    uStack_c80 = (0xfffffffffffda - uStack_c80 & 0x7ffffffffffff) + (uStack_c60 >> 0x33) * 0x13;
    uVar9 = (uVar9 & 0x7ffffffffffff) + (uStack_c80 >> 0x33);
    uStack_c80 = uStack_c80 & 0x7ffffffffffff;
    uStack_c78 = uVar9 & 0x7ffffffffffff;
    lStack_c70 = (uVar11 & 0x7ffffffffffff) + (uVar9 >> 0x33);
    uStack_c68 = uStack_c68 & 0x7ffffffffffff;
    uVar9 = ((0xfffffffffffda - uStack_c08 >> 0x33) - uStack_c00) + 0xffffffffffffe;
    uVar11 = ((uVar9 >> 0x33) - lStack_bf8) + 0xffffffffffffe;
    uStack_bf0 = ((uVar11 >> 0x33) - uStack_bf0) + 0xffffffffffffe;
    uStack_c60 = uStack_c60 & 0x7ffffffffffff;
    uStack_be8 = ((uStack_bf0 >> 0x33) - uStack_be8) + 0xffffffffffffe;
    uStack_c08 = (0xfffffffffffda - uStack_c08 & 0x7ffffffffffff) + (uStack_be8 >> 0x33) * 0x13;
    uVar9 = (uVar9 & 0x7ffffffffffff) + (uStack_c08 >> 0x33);
    uStack_c08 = uStack_c08 & 0x7ffffffffffff;
    uStack_c00 = uVar9 & 0x7ffffffffffff;
    lStack_bf8 = (uVar11 & 0x7ffffffffffff) + (uVar9 >> 0x33);
    uStack_bf0 = uStack_bf0 & 0x7ffffffffffff;
    uStack_be8 = uStack_be8 & 0x7ffffffffffff;
    uVar39 = *(undefined8 *)(pbVar7 + 8);
    uVar38 = *(undefined8 *)pbVar7;
    uVar41 = *(undefined8 *)(pbVar7 + 0x18);
    uVar40 = *(undefined8 *)(pbVar7 + 0x10);
    auStack_ca0[0] = *(ulong *)(pbVar7 + 0x20);
    auStack_ca0[3] = *(ulong *)(pbVar7 + 0x38);
    auStack_ca0[1] = *(undefined8 *)(pbVar7 + 0x28);
    auStack_ca0[2] = *(undefined8 *)(pbVar7 + 0x30);
    pbVar6 = pbVar7;
    if (auStack_ca0[3] < 0x1000000000000001) {
      uVar11 = 0x1000000000000000;
      lVar10 = 0x10;
      uVar9 = auStack_ca0[3];
      do {
        if (uVar9 < uVar11) {
          uStack_a58 = 0xbb67ae8584caa73b;
          uStack_a60 = 0x6a09e667f3bcc908;
          uStack_a48 = 0xa54ff53a5f1d36f1;
          lStack_a50 = 0x3c6ef372fe94f82b;
          uStack_a38 = 0x9b05688c2b3e6c1f;
          uStack_a40 = 0x510e527fade682d1;
          uStack_a28 = 0x5be0cd19137e2179;
          uStack_a30 = 0x1f83d9abfb41bd6b;
          uStack_a18 = 0;
          uStack_a20 = 0;
          uStack_990 = 0x4000000000;
          FUN_10ae35d48(&uStack_a60,pbVar7,0x20);
          FUN_10ae35d48(&uStack_a60,param_4,0x20);
          FUN_10ae35d48(&uStack_a60,pcVar4,pbVar5);
          FUN_10ae3c914(auStack_aa0,&uStack_a60);
          FUN_10ae231f8(auStack_aa0);
          FUN_10ae25530(abStack_238,auStack_aa0);
          FUN_10ae25530(acStack_338,auStack_ca0);
          FUN_10ae22fcc(auStack_840,&uStack_c80);
          uStack_978 = uStack_c78;
          uStack_980 = uStack_c80;
          uStack_968 = uStack_c68;
          uStack_970 = lStack_c70;
          lStack_950 = lStack_c50;
          lStack_958 = lStack_c58;
          lStack_940 = lStack_c40;
          lStack_948 = lStack_c48;
          uStack_960 = uStack_c60;
          lStack_938 = lStack_c38;
          lStack_928 = lStack_c28;
          uStack_930 = uStack_c30;
          lStack_918 = lStack_c18;
          lStack_920 = lStack_c20;
          lStack_910 = lStack_c10;
          func_0x000107c2b264(&lStack_8e0,&uStack_980);
          func_0x000107c2b254(&lStack_be0,&lStack_8e0);
          FUN_10ae23040(&lStack_8e0,&lStack_be0,auStack_840);
          func_0x000107c2b254(&uStack_980,&lStack_8e0);
          FUN_10ae22fcc(auStack_7a0,&uStack_980);
          FUN_10ae23040(&lStack_8e0,&lStack_be0,auStack_7a0);
          func_0x000107c2b254(&uStack_980,&lStack_8e0);
          FUN_10ae22fcc(auStack_700,&uStack_980);
          FUN_10ae23040(&lStack_8e0,&lStack_be0,auStack_700);
          func_0x000107c2b254(&uStack_980,&lStack_8e0);
          FUN_10ae22fcc(auStack_660,&uStack_980);
          FUN_10ae23040(&lStack_8e0,&lStack_be0,auStack_660);
          func_0x000107c2b254(&uStack_980,&lStack_8e0);
          FUN_10ae22fcc(auStack_5c0,&uStack_980);
          FUN_10ae23040(&lStack_8e0,&lStack_be0,auStack_5c0);
          func_0x000107c2b254(&uStack_980,&lStack_8e0);
          FUN_10ae22fcc(auStack_520,&uStack_980);
          FUN_10ae23040(&lStack_8e0,&lStack_be0,auStack_520);
          func_0x000107c2b254(&uStack_980,&lStack_8e0);
          FUN_10ae22fcc(auStack_480,&uStack_980);
          FUN_10ae23040(&lStack_8e0,&lStack_be0,auStack_480);
          func_0x000107c2b254(&uStack_980,&lStack_8e0);
          FUN_10ae22fcc(auStack_3e0,&uStack_980);
          uStack_ce8 = 0;
          uStack_cf0 = 0;
          uStack_cd8 = 0;
          uStack_ce0 = 0;
          lStack_d08 = 0;
          lStack_d10 = 0;
          lStack_d00 = 0;
          lStack_d18 = 0;
          lStack_d20 = 0;
          uStack_cf8 = 1;
          uStack_cc0 = 0;
          uStack_cc8 = 0;
          uStack_cb0 = 0;
          uStack_cb8 = 0;
          uVar9 = 0xff;
          uStack_cd0 = 1;
          goto LAB_10ae24f08;
        }
        if (lVar10 == -8) break;
        uVar9 = *(ulong *)((long)auStack_ca0 + lVar10);
        uVar11 = *(ulong *)(&UNK_10e518348 + lVar10);
        lVar10 = lVar10 + -8;
      } while (uVar9 <= uVar11);
    }
  }
LAB_10ae24c88:
  uVar9 = 0;
LAB_10ae24c8c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  uVar11 = 0;
  do {
    *(byte *)(uVar9 + uVar11) = pbVar6[uVar11 >> 3 & 0x1fffffff] >> (uVar11 & 7) & 1;
    uVar11 = uVar11 + 1;
  } while (uVar11 != 0x100);
  uVar11 = 0;
  lVar10 = uVar9 + 1;
  uVar18 = 0xfe;
  lVar13 = 1;
  do {
    if ((uVar11 < 0xff) && (*(char *)(uVar9 + uVar11) != '\0')) {
      uVar19 = uVar18;
      if (4 < uVar18) {
        uVar19 = 5;
      }
      lVar15 = 1;
      uVar8 = uVar11;
      lVar14 = lVar13;
      do {
        if (*(char *)(uVar9 + lVar14) != 0) {
          iVar1 = (int)*(char *)(uVar9 + lVar14) << (ulong)((uint)lVar15 & 0x1f);
          iVar16 = iVar1 + *(char *)(uVar9 + uVar11);
          if (iVar16 < 0x10) {
            *(char *)(uVar9 + uVar11) = (char)iVar16;
            *(undefined1 *)(uVar9 + lVar14) = 0;
          }
          else {
            iVar1 = *(char *)(uVar9 + uVar11) - iVar1;
            if (iVar1 < -0xf) break;
            *(char *)(uVar9 + uVar11) = (char)iVar1;
            uVar20 = uVar8;
            do {
              if (*(char *)(lVar10 + uVar20) == '\0') {
                *(undefined1 *)(lVar10 + uVar20) = 1;
                break;
              }
              *(undefined1 *)(lVar10 + uVar20) = 0;
              uVar20 = uVar20 + 1;
            } while (uVar20 != 0xff);
          }
        }
        lVar14 = lVar14 + 1;
        uVar8 = uVar8 + 1;
        bVar3 = lVar15 != uVar19 + 1;
        lVar15 = lVar15 + 1;
      } while (bVar3);
    }
    uVar11 = uVar11 + 1;
    lVar13 = lVar13 + 1;
    uVar18 = uVar18 - 1;
    if (uVar11 == 0x100) {
      return;
    }
  } while( true );
  while (uVar17 = (int)uVar9 - 1, uVar9 = (ulong)uVar17, uVar17 != 0xffffffff) {
LAB_10ae24f08:
    if ((abStack_238[uVar9] != 0) || (acStack_338[uVar9] != '\0')) {
      if (-1 < (int)uVar9) {
        do {
          func_0x000107c2b264(&lStack_8e0,&lStack_d20);
          bVar36 = abStack_238[uVar9];
          if ((char)bVar36 < '\x01') {
            if ((char)bVar36 < '\0') {
              func_0x000107c2b254(&uStack_980,&lStack_8e0);
              uVar11 = (ulong)(-(uint)bVar36 >> 1 & 0x7f);
              lVar10 = uVar11 * 0xa0;
              lStack_8e0 = uStack_980 + lStack_958;
              lStack_8d8 = uStack_978 + lStack_950;
              lStack_8d0 = uStack_970 + lStack_948;
              lStack_8c8 = uStack_968 + lStack_940;
              lStack_8c0 = uStack_960 + lStack_938;
              lStack_8b8 = (lStack_958 + 0xfffffffffffda) - uStack_980;
              lStack_8b0 = (lStack_950 - uStack_978) + 0xffffffffffffe;
              lStack_8a8 = (lStack_948 - uStack_970) + 0xffffffffffffe;
              lStack_8a0 = (lStack_940 - uStack_968) + 0xffffffffffffe;
              lStack_898 = (lStack_938 - uStack_960) + 0xffffffffffffe;
              func_0x000107c34f60(&lStack_b18,&lStack_8e0,auStack_818 + lVar10);
              func_0x000107c34f60(&lStack_af0,&lStack_8b8,auStack_840 + uVar11 * 0x14);
              func_0x000107c34f60(&lStack_b40,auStack_7c8 + lVar10,auStack_908);
              func_0x000107c34f60(&uStack_ac8,&uStack_930,auStack_7f0 + lVar10);
              lStack_8e0 = (lStack_b18 + 0xfffffffffffda) - lStack_af0;
              lStack_8d8 = (lStack_b10 - lStack_ae8) + 0xffffffffffffe;
              lStack_8d0 = (lStack_b08 - lStack_ae0) + 0xffffffffffffe;
              lStack_8c8 = (lStack_b00 - lStack_ad8) + 0xffffffffffffe;
              lStack_8c0 = (lStack_af8 - lStack_ad0) + 0xffffffffffffe;
              lStack_8b8 = lStack_af0 + lStack_b18;
              lStack_8b0 = lStack_ae8 + lStack_b10;
              lStack_8a8 = lStack_ae0 + lStack_b08;
              lStack_8a0 = lStack_ad8 + lStack_b00;
              lStack_898 = lStack_ad0 + lStack_af8;
              uVar11 = lStack_ac0 * 2 + ((uStack_ac8 & 0x7fffffffffffffff) >> 0x32);
              uVar18 = (uVar11 >> 0x33) + lStack_ab8 * 2;
              uVar19 = (uVar18 >> 0x33) + lStack_ab0 * 2;
              uVar8 = (uVar19 >> 0x33) + lStack_aa8 * 2;
              uVar20 = (uStack_ac8 & 0x3ffffffffffff) * 2 + (uVar8 >> 0x33) * 0x13;
              uVar11 = (uVar11 & 0x7ffffffffffff) + (uVar20 >> 0x33);
              uVar20 = uVar20 & 0x7ffffffffffff;
              uVar12 = uVar11 & 0x7ffffffffffff;
              lStack_858 = (uVar18 & 0x7ffffffffffff) + (uVar11 >> 0x33);
              uVar19 = uVar19 & 0x7ffffffffffff;
              uVar8 = uVar8 & 0x7ffffffffffff;
              lStack_890 = (uVar20 - lStack_b40) + 0xfffffffffffda;
              lStack_888 = (uVar12 - lStack_b38) + 0xffffffffffffe;
              lStack_880 = (lStack_858 - lStack_b30) + 0xffffffffffffe;
              lStack_878 = (uVar19 - lStack_b28) + 0xffffffffffffe;
              lStack_870 = (uVar8 - lStack_b20) + 0xffffffffffffe;
              lStack_868 = uVar20 + lStack_b40;
              lStack_860 = uVar12 + lStack_b38;
              lStack_858 = lStack_858 + lStack_b30;
              lStack_850 = lStack_b28 + uVar19;
              lStack_848 = lStack_b20 + uVar8;
            }
          }
          else {
            func_0x000107c2b254(&uStack_980,&lStack_8e0);
            FUN_10ae23040(&lStack_8e0,&uStack_980,auStack_840 + (ulong)(bVar36 >> 1) * 0x14);
          }
          uVar17 = (uint)acStack_338[uVar9];
          if (acStack_338[uVar9] < '\x01') {
            if ((int)uVar17 < 0) {
              func_0x000107c2b254(&uStack_980,&lStack_8e0);
              lVar10 = (ulong)(-uVar17 >> 1 & 0x7f) * 0x78;
              lStack_8e0 = uStack_980 + lStack_958;
              lStack_8d8 = uStack_978 + lStack_950;
              lStack_8d0 = uStack_970 + lStack_948;
              lStack_8c8 = uStack_968 + lStack_940;
              lStack_8c0 = uStack_960 + lStack_938;
              lStack_8b8 = (lStack_958 + 0xfffffffffffda) - uStack_980;
              lStack_8b0 = (lStack_950 - uStack_978) + 0xffffffffffffe;
              lStack_8a8 = (lStack_948 - uStack_970) + 0xffffffffffffe;
              lStack_8a0 = (lStack_940 - uStack_968) + 0xffffffffffffe;
              lStack_898 = (lStack_938 - uStack_960) + 0xffffffffffffe;
              func_0x000107c34f60(&lStack_af0,&lStack_8e0,&UNK_10e51fb90 + lVar10);
              func_0x000107c34f60(&uStack_ac8,&lStack_8b8,&UNK_10e51fb68 + lVar10);
              func_0x000107c34f60(&lStack_b18,&UNK_10e51fbb8 + lVar10,auStack_908);
              lStack_8e0 = (lStack_af0 + 0xfffffffffffda) - uStack_ac8;
              lStack_8d8 = (lStack_ae8 - lStack_ac0) + 0xffffffffffffe;
              lStack_8d0 = (lStack_ae0 - lStack_ab8) + 0xffffffffffffe;
              lStack_8c8 = (lStack_ad8 - lStack_ab0) + 0xffffffffffffe;
              lStack_8c0 = (lStack_ad0 - lStack_aa8) + 0xffffffffffffe;
              lStack_8b8 = uStack_ac8 + lStack_af0;
              lStack_8b0 = lStack_ac0 + lStack_ae8;
              lStack_8a8 = lStack_ab8 + lStack_ae0;
              lStack_8a0 = lStack_ab0 + lStack_ad8;
              lStack_898 = lStack_aa8 + lStack_ad0;
              uVar11 = lStack_928 * 2 + ((uStack_930 & 0x7fffffffffffffff) >> 0x32);
              uVar18 = (uVar11 >> 0x33) + lStack_920 * 2;
              uVar19 = (uVar18 >> 0x33) + lStack_918 * 2;
              uVar8 = (uVar19 >> 0x33) + lStack_910 * 2;
              uVar20 = (uStack_930 & 0x3ffffffffffff) * 2 + (uVar8 >> 0x33) * 0x13;
              uVar11 = (uVar11 & 0x7ffffffffffff) + (uVar20 >> 0x33);
              uVar20 = uVar20 & 0x7ffffffffffff;
              uVar12 = uVar11 & 0x7ffffffffffff;
              lStack_858 = (uVar18 & 0x7ffffffffffff) + (uVar11 >> 0x33);
              uVar19 = uVar19 & 0x7ffffffffffff;
              uVar8 = uVar8 & 0x7ffffffffffff;
              lStack_890 = (uVar20 + 0xfffffffffffda) - lStack_b18;
              lStack_888 = (uVar12 - lStack_b10) + 0xffffffffffffe;
              lStack_880 = (lStack_858 - lStack_b08) + 0xffffffffffffe;
              lStack_878 = (uVar19 - lStack_b00) + 0xffffffffffffe;
              lStack_870 = (uVar8 - lStack_af8) + 0xffffffffffffe;
              lStack_868 = lStack_b18 + uVar20;
              lStack_860 = lStack_b10 + uVar12;
              lStack_858 = lStack_b08 + lStack_858;
              lStack_850 = lStack_b00 + uVar19;
              lStack_848 = lStack_af8 + uVar8;
            }
          }
          else {
            func_0x000107c2b254(&uStack_980,&lStack_8e0);
            func_0x000107c2b25c(&lStack_8e0,&uStack_980,
                                &UNK_10e51fb68 + (ulong)(uVar17 >> 1 & 0x7f) * 0x78);
          }
          func_0x000107c2b250(&lStack_d20,&lStack_8e0);
          bVar3 = 0 < (long)uVar9;
          uVar9 = uVar9 - 1;
        } while (bVar3);
      }
      break;
    }
  }
  func_0x000107c34f5c(auStack_840,&uStack_cd0);
  func_0x000107c34f60(abStack_238,&lStack_d20,auStack_840);
  func_0x000107c34f60(acStack_338,&uStack_cf8,auStack_840);
  func_0x000107c34f58(&uStack_980,acStack_338);
  pbVar6 = abStack_238;
  func_0x000107c34f58(&lStack_8e0);
  uVar9 = uStack_968;
  bVar36 = uStack_968._7_1_ ^ (char)lStack_8e0 << 7;
  uStack_968 = CONCAT17(bVar36,(undefined7)uStack_968);
  lVar10 = uStack_968;
  uStack_968._0_1_ = (byte)uVar9;
  uStack_968._1_1_ = SUB81(uVar9,1);
  uStack_968._2_1_ = SUB81(uVar9,2);
  uStack_968._3_1_ = SUB81(uVar9,3);
  uStack_968._4_1_ = SUB81(uVar9,4);
  uStack_968._5_1_ = SUB81(uVar9,5);
  uStack_968._6_1_ = SUB81(uVar9,6);
  bVar21 = (byte)uVar40 ^ (byte)uStack_970 | (byte)uVar38 ^ (byte)uStack_980;
  bVar22 = (byte)((ulong)uVar40 >> 8) ^ uStack_970._1_1_ |
           (byte)((ulong)uVar38 >> 8) ^ (byte)(uStack_980 >> 8);
  bVar23 = (byte)((ulong)uVar40 >> 0x10) ^ uStack_970._2_1_ |
           (byte)((ulong)uVar38 >> 0x10) ^ (byte)(uStack_980 >> 0x10);
  bVar24 = (byte)((ulong)uVar40 >> 0x18) ^ uStack_970._3_1_ |
           (byte)((ulong)uVar38 >> 0x18) ^ (byte)(uStack_980 >> 0x18);
  bVar25 = (byte)((ulong)uVar40 >> 0x20) ^ uStack_970._4_1_ |
           (byte)((ulong)uVar38 >> 0x20) ^ (byte)(uStack_980 >> 0x20);
  bVar26 = (byte)((ulong)uVar40 >> 0x28) ^ uStack_970._5_1_ |
           (byte)((ulong)uVar38 >> 0x28) ^ (byte)(uStack_980 >> 0x28);
  bVar27 = (byte)((ulong)uVar40 >> 0x30) ^ uStack_970._6_1_ |
           (byte)((ulong)uVar38 >> 0x30) ^ (byte)(uStack_980 >> 0x30);
  bVar28 = (byte)((ulong)uVar40 >> 0x38) ^ uStack_970._7_1_ |
           (byte)((ulong)uVar38 >> 0x38) ^ (byte)(uStack_980 >> 0x38);
  bVar29 = (byte)uVar41 ^ (byte)uStack_968 | (byte)uVar39 ^ (byte)uStack_978;
  bVar30 = (byte)((ulong)uVar41 >> 8) ^ uStack_968._1_1_ |
           (byte)((ulong)uVar39 >> 8) ^ (byte)(uStack_978 >> 8);
  bVar31 = (byte)((ulong)uVar41 >> 0x10) ^ uStack_968._2_1_ |
           (byte)((ulong)uVar39 >> 0x10) ^ (byte)(uStack_978 >> 0x10);
  bVar32 = (byte)((ulong)uVar41 >> 0x18) ^ uStack_968._3_1_ |
           (byte)((ulong)uVar39 >> 0x18) ^ (byte)(uStack_978 >> 0x18);
  bVar33 = (byte)((ulong)uVar41 >> 0x20) ^ uStack_968._4_1_ |
           (byte)((ulong)uVar39 >> 0x20) ^ (byte)(uStack_978 >> 0x20);
  bVar34 = (byte)((ulong)uVar41 >> 0x28) ^ uStack_968._5_1_ |
           (byte)((ulong)uVar39 >> 0x28) ^ (byte)(uStack_978 >> 0x28);
  bVar35 = (byte)((ulong)uVar41 >> 0x30) ^ uStack_968._6_1_ |
           (byte)((ulong)uVar39 >> 0x30) ^ (byte)(uStack_978 >> 0x30);
  bVar36 = (byte)((ulong)uVar41 >> 0x38) ^ bVar36 |
           (byte)((ulong)uVar39 >> 0x38) ^ (byte)(uStack_978 >> 0x38);
  auVar37[1] = bVar22;
  auVar37[0] = bVar21;
  auVar37[2] = bVar23;
  auVar37[3] = bVar24;
  auVar37[4] = bVar25;
  auVar37[5] = bVar26;
  auVar37[6] = bVar27;
  auVar37[7] = bVar28;
  auVar37[8] = bVar29;
  auVar37[9] = bVar30;
  auVar37[10] = bVar31;
  auVar37[0xb] = bVar32;
  auVar37[0xc] = bVar33;
  auVar37[0xd] = bVar34;
  auVar37[0xe] = bVar35;
  auVar37[0xf] = bVar36;
  auVar2[1] = bVar22;
  auVar2[0] = bVar21;
  auVar2[2] = bVar23;
  auVar2[3] = bVar24;
  auVar2[4] = bVar25;
  auVar2[5] = bVar26;
  auVar2[6] = bVar27;
  auVar2[7] = bVar28;
  auVar2[8] = bVar29;
  auVar2[9] = bVar30;
  auVar2[10] = bVar31;
  auVar2[0xb] = bVar32;
  auVar2[0xc] = bVar33;
  auVar2[0xd] = bVar34;
  auVar2[0xe] = bVar35;
  auVar2[0xf] = bVar36;
  auVar37 = NEON_ext(auVar37,auVar2,8,1);
  uVar9 = CONCAT17(bVar28 | auVar37[7],
                   CONCAT16(bVar27 | auVar37[6],
                            CONCAT15(bVar26 | auVar37[5],
                                     CONCAT14(bVar25 | auVar37[4],
                                              CONCAT13(bVar24 | auVar37[3],
                                                       CONCAT12(bVar23 | auVar37[2],
                                                                CONCAT11(bVar22 | auVar37[1],
                                                                         bVar21 | auVar37[0])))))));
  uVar9 = uVar9 | uVar9 >> 0x20;
  uVar17 = (uint)uVar9 | (uint)(uVar9 >> 0x10);
  uVar9 = (ulong)(((uVar17 | uVar17 >> 8) & 0xff) == 0);
  uStack_968 = lVar10;
  goto LAB_10ae24c8c;
}



/* Entry: 10ae24660; end: 10ae2552f;  */

void FUN_10ae24660(undefined8 param_1,byte *param_2,byte *param_3,ulong *param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  undefined1 auVar33 [16];
  long lVar34;
  long lVar35;
  long lStack_c60;
  long lStack_c58;
  long lStack_c50;
  long lStack_c48;
  long lStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  ulong auStack_be0 [4];
  ulong uStack_bc0;
  ulong uStack_bb8;
  long lStack_bb0;
  ulong uStack_ba8;
  ulong uStack_ba0;
  long lStack_b98;
  long lStack_b90;
  long lStack_b88;
  long lStack_b80;
  long lStack_b78;
  ulong uStack_b70;
  long lStack_b68;
  long lStack_b60;
  long lStack_b58;
  long lStack_b50;
  ulong uStack_b48;
  ulong uStack_b40;
  long lStack_b38;
  ulong uStack_b30;
  ulong uStack_b28;
  long lStack_b20;
  long lStack_b18;
  long lStack_b10;
  long lStack_b08;
  long lStack_b00;
  long lStack_a80;
  long lStack_a78;
  long lStack_a70;
  long lStack_a68;
  long lStack_a60;
  long lStack_a58;
  long lStack_a50;
  long lStack_a48;
  long lStack_a40;
  long lStack_a38;
  long lStack_a30;
  long lStack_a28;
  long lStack_a20;
  long lStack_a18;
  long lStack_a10;
  ulong uStack_a08;
  long lStack_a00;
  long lStack_9f8;
  long lStack_9f0;
  long lStack_9e8;
  undefined1 auStack_9e0 [64];
  ulong uStack_9a0;
  ulong uStack_998;
  long lStack_990;
  ulong uStack_988;
  ulong uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_8d0;
  ulong uStack_8c0;
  ulong uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  ulong uStack_8a0;
  long lStack_898;
  long lStack_890;
  long lStack_888;
  long lStack_880;
  long lStack_878;
  ulong uStack_870;
  long lStack_868;
  long lStack_860;
  long lStack_858;
  long lStack_850;
  undefined1 auStack_848 [40];
  long lStack_820;
  long lStack_818;
  long lStack_810;
  long lStack_808;
  long lStack_800;
  long lStack_7f8;
  long lStack_7f0;
  long lStack_7e8;
  long lStack_7e0;
  long lStack_7d8;
  long lStack_7d0;
  long lStack_7c8;
  long lStack_7c0;
  long lStack_7b8;
  long lStack_7b0;
  long lStack_7a8;
  long lStack_7a0;
  long lStack_798;
  long lStack_790;
  long lStack_788;
  ulong auStack_780 [5];
  undefined1 auStack_758 [40];
  undefined1 auStack_730 [40];
  undefined1 auStack_708 [40];
  undefined1 auStack_6e0 [160];
  undefined1 auStack_640 [160];
  undefined1 auStack_5a0 [160];
  undefined1 auStack_500 [160];
  undefined1 auStack_460 [160];
  undefined1 auStack_3c0 [160];
  undefined1 auStack_320 [168];
  char acStack_278 [256];
  byte abStack_178 [256];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar4 = param_2;
  if (param_3[0x3f] < 0x20) {
    auStack_780[0] = *param_4;
    auStack_780[1] = param_4[1];
    auStack_780[2] = param_4[2];
    auStack_780[3] = param_4[3] & 0x7fffffffffffffff;
    func_0x000107c2b258(&lStack_b98,auStack_780);
    lStack_b60 = 0;
    lStack_b68 = 0;
    lStack_b50 = 0;
    lStack_b58 = 0;
    uStack_b70 = 1;
    func_0x000107c2b274(&uStack_8c0,&lStack_b98);
    func_0x000107c34f60(&lStack_b20,&uStack_8c0,&UNK_10e5182d0);
    uVar6 = uStack_8b8 + (uStack_8c0 + 0xfffffffffffd9 >> 0x33) + 0xffffffffffffe;
    uVar8 = uStack_8b0 + (uVar6 >> 0x33) + 0xffffffffffffe;
    uVar14 = uStack_8a8 + (uVar8 >> 0x33) + 0xffffffffffffe;
    uVar15 = uStack_8a0 + (uVar14 >> 0x33) + 0xffffffffffffe;
    uVar5 = (uStack_8c0 + 0xfffffffffffd9 & 0x7ffffffffffff) + (uVar15 >> 0x33) * 0x13;
    uVar6 = (uVar6 & 0x7ffffffffffff) + (uVar5 >> 0x33);
    uVar5 = uVar5 & 0x7ffffffffffff;
    uVar16 = uVar6 & 0x7ffffffffffff;
    lVar34 = (uVar8 & 0x7ffffffffffff) + (uVar6 >> 0x33);
    uVar14 = uVar14 & 0x7ffffffffffff;
    uVar15 = uVar15 & 0x7ffffffffffff;
    lStack_820 = lStack_b20 + 1;
    lStack_810 = lStack_b10;
    lStack_818 = lStack_b18;
    lStack_800 = lStack_b00;
    lStack_808 = lStack_b08;
    uStack_9a0 = uVar5;
    uStack_998 = uVar16;
    lStack_990 = lVar34;
    uStack_988 = uVar14;
    uStack_980 = uVar15;
    func_0x000107c34f60(&uStack_8c0,&uStack_9a0,&lStack_820);
    func_0x000107c2b274(auStack_780,&uStack_8c0);
    func_0x000107c2b274(abStack_178,auStack_780);
    func_0x000107c2b274(abStack_178,abStack_178);
    func_0x000107c34f60(abStack_178,&uStack_8c0,abStack_178);
    func_0x000107c34f60(auStack_780,auStack_780,abStack_178);
    func_0x000107c2b274(auStack_780,auStack_780);
    func_0x000107c34f60(auStack_780,abStack_178,auStack_780);
    func_0x000107c2b274(abStack_178,auStack_780);
    iVar12 = 4;
    do {
      func_0x000107c2b274(abStack_178,abStack_178);
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    func_0x000107c34f60(auStack_780,abStack_178,auStack_780);
    func_0x000107c2b274(abStack_178,auStack_780);
    iVar12 = 9;
    do {
      func_0x000107c2b274(abStack_178,abStack_178);
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    func_0x000107c34f60(abStack_178,abStack_178,auStack_780);
    func_0x000107c2b274(acStack_278,abStack_178);
    iVar12 = 0x13;
    do {
      func_0x000107c2b274(acStack_278,acStack_278);
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    func_0x000107c34f60(abStack_178,acStack_278,abStack_178);
    func_0x000107c2b274(abStack_178,abStack_178);
    iVar12 = 9;
    do {
      func_0x000107c2b274(abStack_178,abStack_178);
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    func_0x000107c34f60(auStack_780,abStack_178,auStack_780);
    func_0x000107c2b274(abStack_178,auStack_780);
    iVar12 = 0x31;
    do {
      func_0x000107c2b274(abStack_178,abStack_178);
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    func_0x000107c34f60(abStack_178,abStack_178,auStack_780);
    func_0x000107c2b274(acStack_278,abStack_178);
    iVar12 = 99;
    do {
      func_0x000107c2b274(acStack_278,acStack_278);
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    func_0x000107c34f60(abStack_178,acStack_278,abStack_178);
    func_0x000107c2b274(abStack_178,abStack_178);
    iVar12 = 0x31;
    do {
      func_0x000107c2b274(abStack_178,abStack_178);
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    func_0x000107c34f60(auStack_780,abStack_178,auStack_780);
    func_0x000107c2b274(auStack_780,auStack_780);
    func_0x000107c2b274(auStack_780,auStack_780);
    func_0x000107c34f60(&uStack_bc0,auStack_780,&uStack_8c0);
    func_0x000107c34f60(&uStack_bc0,&uStack_bc0,&uStack_9a0);
    func_0x000107c2b274(&lStack_b20,&uStack_bc0);
    pbVar4 = (byte *)&lStack_b20;
    func_0x000107c34f60(&lStack_b20,pbVar4,&lStack_820);
    lStack_c60 = (lStack_b20 - uVar5) + 0xfffffffffffda;
    lStack_c58 = (lStack_b18 - uVar16) + 0xffffffffffffe;
    lStack_c50 = (lStack_b10 - lVar34) + 0xffffffffffffe;
    lStack_c48 = (lStack_b08 - uVar14) + 0xffffffffffffe;
    lStack_c40 = (lStack_b00 - uVar15) + 0xffffffffffffe;
    iVar12 = (int)&lStack_c60;
    FUN_10ae22f44();
    if (iVar12 != 0) {
      lStack_c60 = lStack_b20 + uVar5;
      lStack_c58 = lStack_b18 + uVar16;
      lStack_c50 = lStack_b10 + lVar34;
      lStack_c48 = lStack_b08 + uVar14;
      lStack_c40 = lStack_b00 + uVar15;
      iVar12 = (int)&lStack_c60;
      FUN_10ae22f44();
      if (iVar12 != 0) goto LAB_10ae24c88;
      func_0x000107c34f60(&uStack_bc0,&uStack_bc0,&UNK_10e5182f8);
    }
    func_0x000107c34f58(auStack_780,&uStack_bc0);
    if (((byte)auStack_780[0] & 1) != *(byte *)((long)param_4 + 0x1f) >> 7) {
      uVar6 = ((0xfffffffffffda - uStack_bc0 >> 0x33) - uStack_bb8) + 0xffffffffffffe;
      uVar8 = ((uVar6 >> 0x33) - lStack_bb0) + 0xffffffffffffe;
      uStack_ba8 = ((uVar8 >> 0x33) - uStack_ba8) + 0xffffffffffffe;
      uStack_ba0 = ((uStack_ba8 >> 0x33) - uStack_ba0) + 0xffffffffffffe;
      uStack_bc0 = (0xfffffffffffda - uStack_bc0 & 0x7ffffffffffff) + (uStack_ba0 >> 0x33) * 0x13;
      uVar6 = (uVar6 & 0x7ffffffffffff) + (uStack_bc0 >> 0x33);
      uStack_bc0 = uStack_bc0 & 0x7ffffffffffff;
      uStack_bb8 = uVar6 & 0x7ffffffffffff;
      lStack_bb0 = (uVar8 & 0x7ffffffffffff) + (uVar6 >> 0x33);
      uStack_ba8 = uStack_ba8 & 0x7ffffffffffff;
      uStack_ba0 = uStack_ba0 & 0x7ffffffffffff;
    }
    func_0x000107c34f60(&uStack_b48,&uStack_bc0,&lStack_b98);
    uVar6 = ((0xfffffffffffda - uStack_bc0 >> 0x33) - uStack_bb8) + 0xffffffffffffe;
    uVar8 = ((uVar6 >> 0x33) - lStack_bb0) + 0xffffffffffffe;
    uStack_ba8 = ((uVar8 >> 0x33) - uStack_ba8) + 0xffffffffffffe;
    uStack_ba0 = ((uStack_ba8 >> 0x33) - uStack_ba0) + 0xffffffffffffe;
    uStack_bc0 = (0xfffffffffffda - uStack_bc0 & 0x7ffffffffffff) + (uStack_ba0 >> 0x33) * 0x13;
    uVar6 = (uVar6 & 0x7ffffffffffff) + (uStack_bc0 >> 0x33);
    uStack_bc0 = uStack_bc0 & 0x7ffffffffffff;
    uStack_bb8 = uVar6 & 0x7ffffffffffff;
    lStack_bb0 = (uVar8 & 0x7ffffffffffff) + (uVar6 >> 0x33);
    uStack_ba8 = uStack_ba8 & 0x7ffffffffffff;
    uVar6 = ((0xfffffffffffda - uStack_b48 >> 0x33) - uStack_b40) + 0xffffffffffffe;
    uVar8 = ((uVar6 >> 0x33) - lStack_b38) + 0xffffffffffffe;
    uStack_b30 = ((uVar8 >> 0x33) - uStack_b30) + 0xffffffffffffe;
    uStack_ba0 = uStack_ba0 & 0x7ffffffffffff;
    uStack_b28 = ((uStack_b30 >> 0x33) - uStack_b28) + 0xffffffffffffe;
    uStack_b48 = (0xfffffffffffda - uStack_b48 & 0x7ffffffffffff) + (uStack_b28 >> 0x33) * 0x13;
    uVar6 = (uVar6 & 0x7ffffffffffff) + (uStack_b48 >> 0x33);
    uStack_b48 = uStack_b48 & 0x7ffffffffffff;
    uStack_b40 = uVar6 & 0x7ffffffffffff;
    lStack_b38 = (uVar8 & 0x7ffffffffffff) + (uVar6 >> 0x33);
    uStack_b30 = uStack_b30 & 0x7ffffffffffff;
    uStack_b28 = uStack_b28 & 0x7ffffffffffff;
    lVar10 = *(long *)(param_3 + 8);
    lVar34 = *(long *)param_3;
    lVar11 = *(long *)(param_3 + 0x18);
    lVar35 = *(long *)(param_3 + 0x10);
    auStack_be0[0] = *(ulong *)(param_3 + 0x20);
    auStack_be0[3] = *(ulong *)(param_3 + 0x38);
    auStack_be0[1] = *(long *)(param_3 + 0x28);
    auStack_be0[2] = *(long *)(param_3 + 0x30);
    pbVar4 = param_3;
    if (auStack_be0[3] < 0x1000000000000001) {
      uVar8 = 0x1000000000000000;
      lVar7 = 0x10;
      uVar6 = auStack_be0[3];
      do {
        if (uVar6 < uVar8) {
          uStack_998 = 0xbb67ae8584caa73b;
          uStack_9a0 = 0x6a09e667f3bcc908;
          uStack_988 = 0xa54ff53a5f1d36f1;
          lStack_990 = 0x3c6ef372fe94f82b;
          uStack_978 = 0x9b05688c2b3e6c1f;
          uStack_980 = 0x510e527fade682d1;
          uStack_968 = 0x5be0cd19137e2179;
          uStack_970 = 0x1f83d9abfb41bd6b;
          uStack_958 = 0;
          uStack_960 = 0;
          uStack_8d0 = 0x4000000000;
          FUN_10ae35d48(&uStack_9a0,param_3,0x20);
          FUN_10ae35d48(&uStack_9a0,param_4,0x20);
          FUN_10ae35d48(&uStack_9a0,param_1,param_2);
          FUN_10ae3c914(auStack_9e0,&uStack_9a0);
          FUN_10ae231f8(auStack_9e0);
          FUN_10ae25530(abStack_178,auStack_9e0);
          FUN_10ae25530(acStack_278,auStack_be0);
          FUN_10ae22fcc(auStack_780,&uStack_bc0);
          uStack_8b8 = uStack_bb8;
          uStack_8c0 = uStack_bc0;
          uStack_8a8 = uStack_ba8;
          uStack_8b0 = lStack_bb0;
          lStack_890 = lStack_b90;
          lStack_898 = lStack_b98;
          lStack_880 = lStack_b80;
          lStack_888 = lStack_b88;
          uStack_8a0 = uStack_ba0;
          lStack_878 = lStack_b78;
          lStack_868 = lStack_b68;
          uStack_870 = uStack_b70;
          lStack_858 = lStack_b58;
          lStack_860 = lStack_b60;
          lStack_850 = lStack_b50;
          func_0x000107c2b264(&lStack_820,&uStack_8c0);
          func_0x000107c2b254(&lStack_b20,&lStack_820);
          FUN_10ae23040(&lStack_820,&lStack_b20,auStack_780);
          func_0x000107c2b254(&uStack_8c0,&lStack_820);
          FUN_10ae22fcc(auStack_6e0,&uStack_8c0);
          FUN_10ae23040(&lStack_820,&lStack_b20,auStack_6e0);
          func_0x000107c2b254(&uStack_8c0,&lStack_820);
          FUN_10ae22fcc(auStack_640,&uStack_8c0);
          FUN_10ae23040(&lStack_820,&lStack_b20,auStack_640);
          func_0x000107c2b254(&uStack_8c0,&lStack_820);
          FUN_10ae22fcc(auStack_5a0,&uStack_8c0);
          FUN_10ae23040(&lStack_820,&lStack_b20,auStack_5a0);
          func_0x000107c2b254(&uStack_8c0,&lStack_820);
          FUN_10ae22fcc(auStack_500,&uStack_8c0);
          FUN_10ae23040(&lStack_820,&lStack_b20,auStack_500);
          func_0x000107c2b254(&uStack_8c0,&lStack_820);
          FUN_10ae22fcc(auStack_460,&uStack_8c0);
          FUN_10ae23040(&lStack_820,&lStack_b20,auStack_460);
          func_0x000107c2b254(&uStack_8c0,&lStack_820);
          FUN_10ae22fcc(auStack_3c0,&uStack_8c0);
          FUN_10ae23040(&lStack_820,&lStack_b20,auStack_3c0);
          func_0x000107c2b254(&uStack_8c0,&lStack_820);
          FUN_10ae22fcc(auStack_320,&uStack_8c0);
          uStack_c28 = 0;
          uStack_c30 = 0;
          uStack_c18 = 0;
          uStack_c20 = 0;
          lStack_c48 = 0;
          lStack_c50 = 0;
          lStack_c40 = 0;
          lStack_c58 = 0;
          lStack_c60 = 0;
          uStack_c38 = 1;
          uStack_c00 = 0;
          uStack_c08 = 0;
          uStack_bf0 = 0;
          uStack_bf8 = 0;
          uVar6 = 0xff;
          uStack_c10 = 1;
          goto LAB_10ae24f08;
        }
        if (lVar7 == -8) break;
        uVar6 = *(ulong *)((long)auStack_be0 + lVar7);
        uVar8 = *(ulong *)(&UNK_10e518348 + lVar7);
        lVar7 = lVar7 + -8;
      } while (uVar6 <= uVar8);
    }
  }
LAB_10ae24c88:
  uVar6 = 0;
LAB_10ae24c8c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = 0;
  do {
    *(byte *)(uVar6 + uVar8) = pbVar4[uVar8 >> 3 & 0x1fffffff] >> (uVar8 & 7) & 1;
    uVar8 = uVar8 + 1;
  } while (uVar8 != 0x100);
  uVar8 = 0;
  lVar34 = uVar6 + 1;
  uVar14 = 0xfe;
  lVar10 = 1;
  do {
    if ((uVar8 < 0xff) && (*(char *)(uVar6 + uVar8) != '\0')) {
      uVar15 = uVar14;
      if (4 < uVar14) {
        uVar15 = 5;
      }
      lVar11 = 1;
      uVar5 = uVar8;
      lVar35 = lVar10;
      do {
        if (*(char *)(uVar6 + lVar35) != 0) {
          iVar1 = (int)*(char *)(uVar6 + lVar35) << (ulong)((uint)lVar11 & 0x1f);
          iVar12 = iVar1 + *(char *)(uVar6 + uVar8);
          if (iVar12 < 0x10) {
            *(char *)(uVar6 + uVar8) = (char)iVar12;
            *(undefined1 *)(uVar6 + lVar35) = 0;
          }
          else {
            iVar1 = *(char *)(uVar6 + uVar8) - iVar1;
            if (iVar1 < -0xf) break;
            *(char *)(uVar6 + uVar8) = (char)iVar1;
            uVar16 = uVar5;
            do {
              if (*(char *)(lVar34 + uVar16) == '\0') {
                *(undefined1 *)(lVar34 + uVar16) = 1;
                break;
              }
              *(undefined1 *)(lVar34 + uVar16) = 0;
              uVar16 = uVar16 + 1;
            } while (uVar16 != 0xff);
          }
        }
        lVar35 = lVar35 + 1;
        uVar5 = uVar5 + 1;
        bVar3 = lVar11 != uVar15 + 1;
        lVar11 = lVar11 + 1;
      } while (bVar3);
    }
    uVar8 = uVar8 + 1;
    lVar10 = lVar10 + 1;
    uVar14 = uVar14 - 1;
    if (uVar8 == 0x100) {
      return;
    }
  } while( true );
  while (uVar13 = (int)uVar6 - 1, uVar6 = (ulong)uVar13, uVar13 != 0xffffffff) {
LAB_10ae24f08:
    if ((abStack_178[uVar6] != 0) || (acStack_278[uVar6] != '\0')) {
      if (-1 < (int)uVar6) {
        do {
          func_0x000107c2b264(&lStack_820,&lStack_c60);
          bVar32 = abStack_178[uVar6];
          if ((char)bVar32 < '\x01') {
            if ((char)bVar32 < '\0') {
              func_0x000107c2b254(&uStack_8c0,&lStack_820);
              uVar8 = (ulong)(-(uint)bVar32 >> 1 & 0x7f);
              lVar7 = uVar8 * 0xa0;
              lStack_820 = uStack_8c0 + lStack_898;
              lStack_818 = uStack_8b8 + lStack_890;
              lStack_810 = uStack_8b0 + lStack_888;
              lStack_808 = uStack_8a8 + lStack_880;
              lStack_800 = uStack_8a0 + lStack_878;
              lStack_7f8 = (lStack_898 + 0xfffffffffffda) - uStack_8c0;
              lStack_7f0 = (lStack_890 - uStack_8b8) + 0xffffffffffffe;
              lStack_7e8 = (lStack_888 - uStack_8b0) + 0xffffffffffffe;
              lStack_7e0 = (lStack_880 - uStack_8a8) + 0xffffffffffffe;
              lStack_7d8 = (lStack_878 - uStack_8a0) + 0xffffffffffffe;
              func_0x000107c34f60(&lStack_a58,&lStack_820,auStack_758 + lVar7);
              func_0x000107c34f60(&lStack_a30,&lStack_7f8,auStack_780 + uVar8 * 0x14);
              func_0x000107c34f60(&lStack_a80,auStack_708 + lVar7,auStack_848);
              func_0x000107c34f60(&uStack_a08,&uStack_870,auStack_730 + lVar7);
              lStack_820 = (lStack_a58 + 0xfffffffffffda) - lStack_a30;
              lStack_818 = (lStack_a50 - lStack_a28) + 0xffffffffffffe;
              lStack_810 = (lStack_a48 - lStack_a20) + 0xffffffffffffe;
              lStack_808 = (lStack_a40 - lStack_a18) + 0xffffffffffffe;
              lStack_800 = (lStack_a38 - lStack_a10) + 0xffffffffffffe;
              lStack_7f8 = lStack_a30 + lStack_a58;
              lStack_7f0 = lStack_a28 + lStack_a50;
              lStack_7e8 = lStack_a20 + lStack_a48;
              lStack_7e0 = lStack_a18 + lStack_a40;
              lStack_7d8 = lStack_a10 + lStack_a38;
              uVar8 = lStack_a00 * 2 + ((uStack_a08 & 0x7fffffffffffffff) >> 0x32);
              uVar14 = (uVar8 >> 0x33) + lStack_9f8 * 2;
              uVar15 = (uVar14 >> 0x33) + lStack_9f0 * 2;
              uVar5 = (uVar15 >> 0x33) + lStack_9e8 * 2;
              uVar16 = (uStack_a08 & 0x3ffffffffffff) * 2 + (uVar5 >> 0x33) * 0x13;
              uVar8 = (uVar8 & 0x7ffffffffffff) + (uVar16 >> 0x33);
              uVar16 = uVar16 & 0x7ffffffffffff;
              uVar9 = uVar8 & 0x7ffffffffffff;
              lVar7 = (uVar14 & 0x7ffffffffffff) + (uVar8 >> 0x33);
              uVar15 = uVar15 & 0x7ffffffffffff;
              uVar5 = uVar5 & 0x7ffffffffffff;
              lStack_7d0 = (uVar16 - lStack_a80) + 0xfffffffffffda;
              lStack_7c8 = (uVar9 - lStack_a78) + 0xffffffffffffe;
              lStack_7c0 = (lVar7 - lStack_a70) + 0xffffffffffffe;
              lStack_7b8 = (uVar15 - lStack_a68) + 0xffffffffffffe;
              lStack_7b0 = (uVar5 - lStack_a60) + 0xffffffffffffe;
              lStack_7a8 = uVar16 + lStack_a80;
              lStack_7a0 = uVar9 + lStack_a78;
              lStack_798 = lVar7 + lStack_a70;
              lStack_790 = lStack_a68 + uVar15;
              lStack_788 = lStack_a60 + uVar5;
            }
          }
          else {
            func_0x000107c2b254(&uStack_8c0,&lStack_820);
            FUN_10ae23040(&lStack_820,&uStack_8c0,auStack_780 + (ulong)(bVar32 >> 1) * 0x14);
          }
          uVar13 = (uint)acStack_278[uVar6];
          if (acStack_278[uVar6] < '\x01') {
            if ((int)uVar13 < 0) {
              func_0x000107c2b254(&uStack_8c0,&lStack_820);
              lVar7 = (ulong)(-uVar13 >> 1 & 0x7f) * 0x78;
              lStack_820 = uStack_8c0 + lStack_898;
              lStack_818 = uStack_8b8 + lStack_890;
              lStack_810 = uStack_8b0 + lStack_888;
              lStack_808 = uStack_8a8 + lStack_880;
              lStack_800 = uStack_8a0 + lStack_878;
              lStack_7f8 = (lStack_898 + 0xfffffffffffda) - uStack_8c0;
              lStack_7f0 = (lStack_890 - uStack_8b8) + 0xffffffffffffe;
              lStack_7e8 = (lStack_888 - uStack_8b0) + 0xffffffffffffe;
              lStack_7e0 = (lStack_880 - uStack_8a8) + 0xffffffffffffe;
              lStack_7d8 = (lStack_878 - uStack_8a0) + 0xffffffffffffe;
              func_0x000107c34f60(&lStack_a30,&lStack_820,&UNK_10e51fb90 + lVar7);
              func_0x000107c34f60(&uStack_a08,&lStack_7f8,&UNK_10e51fb68 + lVar7);
              func_0x000107c34f60(&lStack_a58,&UNK_10e51fbb8 + lVar7,auStack_848);
              lStack_820 = (lStack_a30 + 0xfffffffffffda) - uStack_a08;
              lStack_818 = (lStack_a28 - lStack_a00) + 0xffffffffffffe;
              lStack_810 = (lStack_a20 - lStack_9f8) + 0xffffffffffffe;
              lStack_808 = (lStack_a18 - lStack_9f0) + 0xffffffffffffe;
              lStack_800 = (lStack_a10 - lStack_9e8) + 0xffffffffffffe;
              lStack_7f8 = uStack_a08 + lStack_a30;
              lStack_7f0 = lStack_a00 + lStack_a28;
              lStack_7e8 = lStack_9f8 + lStack_a20;
              lStack_7e0 = lStack_9f0 + lStack_a18;
              lStack_7d8 = lStack_9e8 + lStack_a10;
              uVar8 = lStack_868 * 2 + ((uStack_870 & 0x7fffffffffffffff) >> 0x32);
              uVar14 = (uVar8 >> 0x33) + lStack_860 * 2;
              uVar15 = (uVar14 >> 0x33) + lStack_858 * 2;
              uVar5 = (uVar15 >> 0x33) + lStack_850 * 2;
              uVar16 = (uStack_870 & 0x3ffffffffffff) * 2 + (uVar5 >> 0x33) * 0x13;
              uVar8 = (uVar8 & 0x7ffffffffffff) + (uVar16 >> 0x33);
              uVar16 = uVar16 & 0x7ffffffffffff;
              uVar9 = uVar8 & 0x7ffffffffffff;
              lStack_798 = (uVar14 & 0x7ffffffffffff) + (uVar8 >> 0x33);
              uVar15 = uVar15 & 0x7ffffffffffff;
              uVar5 = uVar5 & 0x7ffffffffffff;
              lStack_7d0 = (uVar16 + 0xfffffffffffda) - lStack_a58;
              lStack_7c8 = (uVar9 - lStack_a50) + 0xffffffffffffe;
              lStack_7c0 = (lStack_798 - lStack_a48) + 0xffffffffffffe;
              lStack_7b8 = (uVar15 - lStack_a40) + 0xffffffffffffe;
              lStack_7b0 = (uVar5 - lStack_a38) + 0xffffffffffffe;
              lStack_7a8 = lStack_a58 + uVar16;
              lStack_7a0 = lStack_a50 + uVar9;
              lStack_798 = lStack_a48 + lStack_798;
              lStack_790 = lStack_a40 + uVar15;
              lStack_788 = lStack_a38 + uVar5;
            }
          }
          else {
            func_0x000107c2b254(&uStack_8c0,&lStack_820);
            func_0x000107c2b25c(&lStack_820,&uStack_8c0,
                                &UNK_10e51fb68 + (ulong)(uVar13 >> 1 & 0x7f) * 0x78);
          }
          func_0x000107c2b250(&lStack_c60,&lStack_820);
          bVar3 = 0 < (long)uVar6;
          uVar6 = uVar6 - 1;
        } while (bVar3);
      }
      break;
    }
  }
  func_0x000107c34f5c(auStack_780,&uStack_c10);
  func_0x000107c34f60(abStack_178,&lStack_c60,auStack_780);
  func_0x000107c34f60(acStack_278,&uStack_c38,auStack_780);
  func_0x000107c34f58(&uStack_8c0,acStack_278);
  pbVar4 = abStack_178;
  func_0x000107c34f58(&lStack_820);
  uVar6 = uStack_8a8;
  bVar32 = uStack_8a8._7_1_ ^ (char)lStack_820 << 7;
  uStack_8a8 = CONCAT17(bVar32,(undefined7)uStack_8a8);
  lVar7 = uStack_8a8;
  uStack_8a8._0_1_ = (byte)uVar6;
  uStack_8a8._1_1_ = SUB81(uVar6,1);
  uStack_8a8._2_1_ = SUB81(uVar6,2);
  uStack_8a8._3_1_ = SUB81(uVar6,3);
  uStack_8a8._4_1_ = SUB81(uVar6,4);
  uStack_8a8._5_1_ = SUB81(uVar6,5);
  uStack_8a8._6_1_ = SUB81(uVar6,6);
  bVar17 = (byte)lVar35 ^ (byte)uStack_8b0 | (byte)lVar34 ^ (byte)uStack_8c0;
  bVar18 = (byte)((ulong)lVar35 >> 8) ^ uStack_8b0._1_1_ |
           (byte)((ulong)lVar34 >> 8) ^ (byte)(uStack_8c0 >> 8);
  bVar19 = (byte)((ulong)lVar35 >> 0x10) ^ uStack_8b0._2_1_ |
           (byte)((ulong)lVar34 >> 0x10) ^ (byte)(uStack_8c0 >> 0x10);
  bVar20 = (byte)((ulong)lVar35 >> 0x18) ^ uStack_8b0._3_1_ |
           (byte)((ulong)lVar34 >> 0x18) ^ (byte)(uStack_8c0 >> 0x18);
  bVar21 = (byte)((ulong)lVar35 >> 0x20) ^ uStack_8b0._4_1_ |
           (byte)((ulong)lVar34 >> 0x20) ^ (byte)(uStack_8c0 >> 0x20);
  bVar22 = (byte)((ulong)lVar35 >> 0x28) ^ uStack_8b0._5_1_ |
           (byte)((ulong)lVar34 >> 0x28) ^ (byte)(uStack_8c0 >> 0x28);
  bVar23 = (byte)((ulong)lVar35 >> 0x30) ^ uStack_8b0._6_1_ |
           (byte)((ulong)lVar34 >> 0x30) ^ (byte)(uStack_8c0 >> 0x30);
  bVar24 = (byte)((ulong)lVar35 >> 0x38) ^ uStack_8b0._7_1_ |
           (byte)((ulong)lVar34 >> 0x38) ^ (byte)(uStack_8c0 >> 0x38);
  bVar25 = (byte)lVar11 ^ (byte)uStack_8a8 | (byte)lVar10 ^ (byte)uStack_8b8;
  bVar26 = (byte)((ulong)lVar11 >> 8) ^ uStack_8a8._1_1_ |
           (byte)((ulong)lVar10 >> 8) ^ (byte)(uStack_8b8 >> 8);
  bVar27 = (byte)((ulong)lVar11 >> 0x10) ^ uStack_8a8._2_1_ |
           (byte)((ulong)lVar10 >> 0x10) ^ (byte)(uStack_8b8 >> 0x10);
  bVar28 = (byte)((ulong)lVar11 >> 0x18) ^ uStack_8a8._3_1_ |
           (byte)((ulong)lVar10 >> 0x18) ^ (byte)(uStack_8b8 >> 0x18);
  bVar29 = (byte)((ulong)lVar11 >> 0x20) ^ uStack_8a8._4_1_ |
           (byte)((ulong)lVar10 >> 0x20) ^ (byte)(uStack_8b8 >> 0x20);
  bVar30 = (byte)((ulong)lVar11 >> 0x28) ^ uStack_8a8._5_1_ |
           (byte)((ulong)lVar10 >> 0x28) ^ (byte)(uStack_8b8 >> 0x28);
  bVar31 = (byte)((ulong)lVar11 >> 0x30) ^ uStack_8a8._6_1_ |
           (byte)((ulong)lVar10 >> 0x30) ^ (byte)(uStack_8b8 >> 0x30);
  bVar32 = (byte)((ulong)lVar11 >> 0x38) ^ bVar32 |
           (byte)((ulong)lVar10 >> 0x38) ^ (byte)(uStack_8b8 >> 0x38);
  auVar33[1] = bVar18;
  auVar33[0] = bVar17;
  auVar33[2] = bVar19;
  auVar33[3] = bVar20;
  auVar33[4] = bVar21;
  auVar33[5] = bVar22;
  auVar33[6] = bVar23;
  auVar33[7] = bVar24;
  auVar33[8] = bVar25;
  auVar33[9] = bVar26;
  auVar33[10] = bVar27;
  auVar33[0xb] = bVar28;
  auVar33[0xc] = bVar29;
  auVar33[0xd] = bVar30;
  auVar33[0xe] = bVar31;
  auVar33[0xf] = bVar32;
  auVar2[1] = bVar18;
  auVar2[0] = bVar17;
  auVar2[2] = bVar19;
  auVar2[3] = bVar20;
  auVar2[4] = bVar21;
  auVar2[5] = bVar22;
  auVar2[6] = bVar23;
  auVar2[7] = bVar24;
  auVar2[8] = bVar25;
  auVar2[9] = bVar26;
  auVar2[10] = bVar27;
  auVar2[0xb] = bVar28;
  auVar2[0xc] = bVar29;
  auVar2[0xd] = bVar30;
  auVar2[0xe] = bVar31;
  auVar2[0xf] = bVar32;
  auVar33 = NEON_ext(auVar33,auVar2,8,1);
  uVar6 = CONCAT17(bVar24 | auVar33[7],
                   CONCAT16(bVar23 | auVar33[6],
                            CONCAT15(bVar22 | auVar33[5],
                                     CONCAT14(bVar21 | auVar33[4],
                                              CONCAT13(bVar20 | auVar33[3],
                                                       CONCAT12(bVar19 | auVar33[2],
                                                                CONCAT11(bVar18 | auVar33[1],
                                                                         bVar17 | auVar33[0])))))));
  uVar6 = uVar6 | uVar6 >> 0x20;
  uVar13 = (uint)uVar6 | (uint)(uVar6 >> 0x10);
  uVar6 = (ulong)(((uVar13 | uVar13 >> 8) & 0xff) == 0);
  uStack_8a8 = lVar7;
  goto LAB_10ae24c8c;
}



/* Entry: 10ae25530; end: 10ae257e3;  */

void FUN_10ae25530(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  uVar7 = 0;
  do {
    *(byte *)(param_1 + uVar7) = *(byte *)(param_2 + (uVar7 >> 3 & 0x1fffffff)) >> (uVar7 & 7) & 1;
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0x100);
  uVar7 = 0;
  lVar1 = param_1 + 1;
  uVar8 = 0xfe;
  lVar9 = 1;
  do {
    if ((uVar7 < 0xff) && (*(char *)(param_1 + uVar7) != '\0')) {
      uVar3 = uVar8;
      if (4 < uVar8) {
        uVar3 = 5;
      }
      lVar12 = 1;
      uVar10 = uVar7;
      lVar11 = lVar9;
      do {
        if (*(char *)(param_1 + lVar11) != 0) {
          iVar4 = (int)*(char *)(param_1 + lVar11) << (ulong)((uint)lVar12 & 0x1f);
          iVar2 = iVar4 + *(char *)(param_1 + uVar7);
          if (iVar2 < 0x10) {
            *(char *)(param_1 + uVar7) = (char)iVar2;
            *(undefined1 *)(param_1 + lVar11) = 0;
          }
          else {
            iVar4 = *(char *)(param_1 + uVar7) - iVar4;
            if (iVar4 < -0xf) break;
            *(char *)(param_1 + uVar7) = (char)iVar4;
            uVar6 = uVar10;
            do {
              if (*(char *)(lVar1 + uVar6) == '\0') {
                *(undefined1 *)(lVar1 + uVar6) = 1;
                break;
              }
              *(undefined1 *)(lVar1 + uVar6) = 0;
              uVar6 = uVar6 + 1;
            } while (uVar6 != 0xff);
          }
        }
        lVar11 = lVar11 + 1;
        uVar10 = uVar10 + 1;
        bVar5 = lVar12 != uVar3 + 1;
        lVar12 = lVar12 + 1;
      } while (bVar5);
    }
    uVar7 = uVar7 + 1;
    lVar9 = lVar9 + 1;
    uVar8 = uVar8 - 1;
    if (uVar7 == 0x100) {
      return;
    }
  } while( true );
}



/* Entry: 10ae257e4; end: 10ae258e7;  */

void FUN_10ae257e4(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (*param_1 ^ param_1[1] >> 4) & 0xf0f0f0f;
  uVar2 = uVar1 ^ *param_1;
  uVar3 = param_1[1] ^ uVar1 << 4;
  uVar1 = uVar3 & 0xffff ^ uVar2 >> 0x10;
  uVar3 = uVar1 ^ uVar3;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar2 ^ uVar3 >> 2) & 0x33333333;
  uVar2 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar1 << 2;
  uVar1 = (uVar3 ^ uVar2 >> 8) & 0xff00ff;
  uVar3 = uVar1 ^ uVar3;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar2 ^ uVar3 >> 1) & 0x55555555;
  *param_1 = uVar1 ^ uVar2;
  param_1[1] = uVar3 ^ uVar1 << 1;
  FUN_10ae258e8(param_1,param_2,1);
  FUN_10ae258e8(param_1,param_3,0);
  FUN_10ae258e8(param_1,param_4,1);
  uVar1 = (*param_1 ^ param_1[1] >> 1) & 0x55555555;
  uVar2 = uVar1 ^ *param_1;
  uVar3 = param_1[1] ^ uVar1 << 1;
  uVar1 = (uVar3 ^ uVar2 >> 8) & 0xff00ff;
  uVar3 = uVar1 ^ uVar3;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar2 ^ uVar3 >> 2) & 0x33333333;
  uVar2 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar1 << 2;
  uVar1 = uVar3 & 0xffff ^ uVar2 >> 0x10;
  uVar3 = uVar1 ^ uVar3;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar2 ^ uVar3 >> 4) & 0xf0f0f0f;
  *param_1 = uVar1 ^ uVar2;
  param_1[1] = uVar3 ^ uVar1 << 4;
  return;
}



/* Entry: 10ae258e8; end: 10ae26713;  */

void FUN_10ae258e8(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar7 = *param_1 >> 0x1d | *param_1 << 3;
  uVar4 = param_1[1] >> 0x1d | param_1[1] << 3;
  if (param_3 == 0) {
    uVar1 = param_2[0x1e] ^ uVar7;
    uVar2 = (param_2[0x1f] ^ uVar7) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (param_2[0x1f] ^ uVar7) << 0x1c) >> 0x1a) * 4) ^ uVar4;
    uVar1 = uVar4 ^ param_2[0x1c];
    uVar2 = (uVar4 ^ param_2[0x1d]) >> 4;
    uVar7 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar4 ^ param_2[0x1d]) << 0x1c) >> 0x1a) * 4) ^ uVar7;
    uVar1 = uVar7 ^ param_2[0x1a];
    uVar2 = (uVar7 ^ param_2[0x1b]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar7 ^ param_2[0x1b]) << 0x1c) >> 0x1a) * 4) ^ uVar4;
    uVar1 = uVar4 ^ param_2[0x18];
    uVar2 = (uVar4 ^ param_2[0x19]) >> 4;
    uVar7 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar4 ^ param_2[0x19]) << 0x1c) >> 0x1a) * 4) ^ uVar7;
    uVar1 = uVar7 ^ param_2[0x16];
    uVar2 = (uVar7 ^ param_2[0x17]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar7 ^ param_2[0x17]) << 0x1c) >> 0x1a) * 4) ^ uVar4;
    uVar1 = uVar4 ^ param_2[0x14];
    uVar2 = (uVar4 ^ param_2[0x15]) >> 4;
    uVar7 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar4 ^ param_2[0x15]) << 0x1c) >> 0x1a) * 4) ^ uVar7;
    uVar1 = uVar7 ^ param_2[0x12];
    uVar2 = (uVar7 ^ param_2[0x13]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar7 ^ param_2[0x13]) << 0x1c) >> 0x1a) * 4) ^ uVar4;
    uVar1 = uVar4 ^ param_2[0x10];
    uVar2 = (uVar4 ^ param_2[0x11]) >> 4;
    uVar7 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar4 ^ param_2[0x11]) << 0x1c) >> 0x1a) * 4) ^ uVar7;
    uVar1 = uVar7 ^ param_2[0xe];
    uVar2 = (uVar7 ^ param_2[0xf]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar7 ^ param_2[0xf]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar4;
    uVar1 = uVar4 ^ param_2[0xc];
    uVar2 = (uVar4 ^ param_2[0xd]) >> 4;
    uVar7 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar4 ^ param_2[0xd]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar7;
    uVar1 = uVar7 ^ param_2[10];
    uVar2 = (uVar7 ^ param_2[0xb]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar7 ^ param_2[0xb]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar4;
    uVar1 = uVar4 ^ param_2[8];
    uVar2 = (uVar4 ^ param_2[9]) >> 4;
    uVar7 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar4 ^ param_2[9]) << 0x1c) >> 0x1a) * 4)
            ^ uVar7;
    uVar1 = uVar7 ^ param_2[6];
    uVar2 = (uVar7 ^ param_2[7]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar7 ^ param_2[7]) << 0x1c) >> 0x1a) * 4)
            ^ uVar4;
    uVar1 = uVar4 ^ param_2[4];
    uVar2 = (uVar4 ^ param_2[5]) >> 4;
    uVar7 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar4 ^ param_2[5]) << 0x1c) >> 0x1a) * 4)
            ^ uVar7;
    uVar1 = uVar7 ^ param_2[2];
    uVar2 = (uVar7 ^ param_2[3]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar7 ^ param_2[3]) << 0x1c) >> 0x1a) * 4)
            ^ uVar4;
    lVar5 = 4;
    puVar6 = param_2;
  }
  else {
    uVar1 = *param_2 ^ uVar7;
    uVar2 = (param_2[1] ^ uVar7) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (param_2[1] ^ uVar7) << 0x1c) >> 0x1a) * 4)
            ^ uVar4;
    uVar1 = uVar4 ^ param_2[2];
    uVar2 = (uVar4 ^ param_2[3]) >> 4;
    uVar7 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar4 ^ param_2[3]) << 0x1c) >> 0x1a) * 4)
            ^ uVar7;
    uVar1 = uVar7 ^ param_2[4];
    uVar2 = (uVar7 ^ param_2[5]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar7 ^ param_2[5]) << 0x1c) >> 0x1a) * 4)
            ^ uVar4;
    uVar1 = uVar4 ^ param_2[6];
    uVar2 = (uVar4 ^ param_2[7]) >> 4;
    uVar7 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar4 ^ param_2[7]) << 0x1c) >> 0x1a) * 4)
            ^ uVar7;
    uVar1 = uVar7 ^ param_2[8];
    uVar2 = (uVar7 ^ param_2[9]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar7 ^ param_2[9]) << 0x1c) >> 0x1a) * 4)
            ^ uVar4;
    uVar1 = uVar4 ^ param_2[10];
    uVar2 = (uVar4 ^ param_2[0xb]) >> 4;
    uVar7 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar4 ^ param_2[0xb]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar7;
    uVar1 = uVar7 ^ param_2[0xc];
    uVar2 = (uVar7 ^ param_2[0xd]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar7 ^ param_2[0xd]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar4;
    uVar1 = uVar4 ^ param_2[0xe];
    uVar2 = (uVar4 ^ param_2[0xf]) >> 4;
    uVar7 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar4 ^ param_2[0xf]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar7;
    uVar1 = uVar7 ^ param_2[0x10];
    uVar2 = (uVar7 ^ param_2[0x11]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar7 ^ param_2[0x11]) << 0x1c) >> 0x1a) * 4) ^ uVar4;
    uVar1 = uVar4 ^ param_2[0x12];
    uVar2 = (uVar4 ^ param_2[0x13]) >> 4;
    uVar7 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar4 ^ param_2[0x13]) << 0x1c) >> 0x1a) * 4) ^ uVar7;
    uVar1 = uVar7 ^ param_2[0x14];
    uVar2 = (uVar7 ^ param_2[0x15]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar7 ^ param_2[0x15]) << 0x1c) >> 0x1a) * 4) ^ uVar4;
    uVar1 = uVar4 ^ param_2[0x16];
    uVar2 = (uVar4 ^ param_2[0x17]) >> 4;
    uVar7 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar4 ^ param_2[0x17]) << 0x1c) >> 0x1a) * 4) ^ uVar7;
    uVar1 = uVar7 ^ param_2[0x18];
    uVar2 = (uVar7 ^ param_2[0x19]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar7 ^ param_2[0x19]) << 0x1c) >> 0x1a) * 4) ^ uVar4;
    uVar1 = uVar4 ^ param_2[0x1a];
    uVar2 = (uVar4 ^ param_2[0x1b]) >> 4;
    uVar7 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar4 ^ param_2[0x1b]) << 0x1c) >> 0x1a) * 4) ^ uVar7;
    uVar1 = uVar7 ^ param_2[0x1c];
    uVar2 = (uVar7 ^ param_2[0x1d]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar7 ^ param_2[0x1d]) << 0x1c) >> 0x1a) * 4) ^ uVar4;
    lVar5 = 0x7c;
    puVar6 = param_2 + 0x1e;
  }
  uVar1 = *puVar6 ^ uVar4;
  uVar2 = *(uint *)((long)param_2 + lVar5) ^ uVar4;
  uVar3 = uVar2 >> 4;
  uVar7 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar7 ^
          *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
          *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
          *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
          *(uint *)(&UNK_10e520928 + (ulong)((uVar3 & 0xfc) >> 2) * 4) ^
          *(uint *)(&UNK_10e520b28 + (ulong)((uVar3 & 0xfc00) >> 10) * 4) ^
          *(uint *)(&UNK_10e520d28 + (ulong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
          *(uint *)(&UNK_10e520f28 + (ulong)((uVar3 | uVar2 << 0x1c) >> 0x1a) * 4);
  *param_1 = uVar4 >> 3 | uVar4 << 0x1d;
  param_1[1] = uVar7 >> 3 | uVar7 << 0x1d;
  return;
}



/* Entry: 10ae26714; end: 10ae2681b;  */

void FUN_10ae26714(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (*param_1 ^ param_1[1] >> 4) & 0xf0f0f0f;
  uVar2 = uVar1 ^ *param_1;
  uVar3 = param_1[1] ^ uVar1 << 4;
  uVar1 = uVar3 & 0xffff ^ uVar2 >> 0x10;
  uVar3 = uVar1 ^ uVar3;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar2 ^ uVar3 >> 2) & 0x33333333;
  uVar2 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar1 << 2;
  uVar1 = (uVar3 ^ uVar2 >> 8) & 0xff00ff;
  uVar3 = uVar1 ^ uVar3;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar2 ^ uVar3 >> 1) & 0x55555555;
  *param_1 = uVar1 ^ uVar2;
  param_1[1] = uVar3 ^ uVar1 << 1;
  FUN_10ae258e8(param_1,param_4,0);
  FUN_10ae258e8(param_1,param_3,1);
  FUN_10ae258e8(param_1,param_2,0);
  uVar1 = (*param_1 ^ param_1[1] >> 1) & 0x55555555;
  uVar2 = uVar1 ^ *param_1;
  uVar3 = param_1[1] ^ uVar1 << 1;
  uVar1 = (uVar3 ^ uVar2 >> 8) & 0xff00ff;
  uVar3 = uVar1 ^ uVar3;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar2 ^ uVar3 >> 2) & 0x33333333;
  uVar2 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar1 << 2;
  uVar1 = uVar3 & 0xffff ^ uVar2 >> 0x10;
  uVar3 = uVar1 ^ uVar3;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar2 ^ uVar3 >> 4) & 0xf0f0f0f;
  *param_1 = uVar1 ^ uVar2;
  param_1[1] = uVar3 ^ uVar1 << 4;
  return;
}



/* Entry: 10ae2681c; end: 10ae2688b;  */

void FUN_10ae2681c(undefined8 *param_1,uint *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = (uint *)&uStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *param_1;
  FUN_10ae2688c();
  *param_2 = (uint)uStack_30;
  param_2[1] = uStack_30._4_4_;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = (*puVar4 ^ puVar4[1] >> 4) & 0xf0f0f0f;
  uVar6 = uVar5 ^ *puVar4;
  uVar1 = puVar4[1] ^ uVar5 << 4;
  uVar5 = uVar1 & 0xffff ^ uVar6 >> 0x10;
  uVar1 = uVar5 ^ uVar1;
  uVar6 = uVar6 ^ uVar5 << 0x10;
  uVar5 = (uVar6 ^ uVar1 >> 2) & 0x33333333;
  uVar6 = uVar5 ^ uVar6;
  uVar1 = uVar1 ^ uVar5 << 2;
  uVar5 = (uVar1 ^ uVar6 >> 8) & 0xff00ff;
  uVar1 = uVar5 ^ uVar1;
  uVar6 = uVar6 ^ uVar5 << 8;
  uVar5 = (uVar6 ^ uVar1 >> 1) & 0x55555555;
  uVar6 = uVar5 ^ uVar6;
  uVar1 = uVar1 ^ uVar5 << 1;
  uVar5 = uVar6 >> 0x1d | uVar6 << 3;
  uVar6 = uVar1 >> 0x1d | uVar1 << 3;
  if (param_4 == 0) {
    uVar1 = param_3[0x1e] ^ uVar5;
    uVar2 = (param_3[0x1f] ^ uVar5) >> 4;
    uVar6 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (param_3[0x1f] ^ uVar5) << 0x1c) >> 0x1a) * 4) ^ uVar6;
    uVar1 = uVar6 ^ param_3[0x1c];
    uVar2 = (uVar6 ^ param_3[0x1d]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar6 ^ param_3[0x1d]) << 0x1c) >> 0x1a) * 4) ^ uVar5;
    uVar1 = uVar5 ^ param_3[0x1a];
    uVar2 = (uVar5 ^ param_3[0x1b]) >> 4;
    uVar6 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar5 ^ param_3[0x1b]) << 0x1c) >> 0x1a) * 4) ^ uVar6;
    uVar1 = uVar6 ^ param_3[0x18];
    uVar2 = (uVar6 ^ param_3[0x19]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar6 ^ param_3[0x19]) << 0x1c) >> 0x1a) * 4) ^ uVar5;
    uVar1 = uVar5 ^ param_3[0x16];
    uVar2 = (uVar5 ^ param_3[0x17]) >> 4;
    uVar6 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar5 ^ param_3[0x17]) << 0x1c) >> 0x1a) * 4) ^ uVar6;
    uVar1 = uVar6 ^ param_3[0x14];
    uVar2 = (uVar6 ^ param_3[0x15]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar6 ^ param_3[0x15]) << 0x1c) >> 0x1a) * 4) ^ uVar5;
    uVar1 = uVar5 ^ param_3[0x12];
    uVar2 = (uVar5 ^ param_3[0x13]) >> 4;
    uVar6 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar5 ^ param_3[0x13]) << 0x1c) >> 0x1a) * 4) ^ uVar6;
    uVar1 = uVar6 ^ param_3[0x10];
    uVar2 = (uVar6 ^ param_3[0x11]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar6 ^ param_3[0x11]) << 0x1c) >> 0x1a) * 4) ^ uVar5;
    uVar1 = uVar5 ^ param_3[0xe];
    uVar2 = (uVar5 ^ param_3[0xf]) >> 4;
    uVar6 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar5 ^ param_3[0xf]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar6;
    uVar1 = uVar6 ^ param_3[0xc];
    uVar2 = (uVar6 ^ param_3[0xd]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar6 ^ param_3[0xd]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar5;
    uVar1 = uVar5 ^ param_3[10];
    uVar2 = (uVar5 ^ param_3[0xb]) >> 4;
    uVar6 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar5 ^ param_3[0xb]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar6;
    uVar1 = uVar6 ^ param_3[8];
    uVar2 = (uVar6 ^ param_3[9]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar6 ^ param_3[9]) << 0x1c) >> 0x1a) * 4)
            ^ uVar5;
    uVar1 = uVar5 ^ param_3[6];
    uVar2 = (uVar5 ^ param_3[7]) >> 4;
    uVar6 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar5 ^ param_3[7]) << 0x1c) >> 0x1a) * 4)
            ^ uVar6;
    uVar1 = uVar6 ^ param_3[4];
    uVar2 = (uVar6 ^ param_3[5]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar6 ^ param_3[5]) << 0x1c) >> 0x1a) * 4)
            ^ uVar5;
    uVar1 = uVar5 ^ param_3[2];
    uVar2 = (uVar5 ^ param_3[3]) >> 4;
    uVar6 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar5 ^ param_3[3]) << 0x1c) >> 0x1a) * 4)
            ^ uVar6;
    lVar7 = 4;
    puVar8 = param_3;
  }
  else {
    uVar1 = *param_3 ^ uVar5;
    uVar2 = (param_3[1] ^ uVar5) >> 4;
    uVar6 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (param_3[1] ^ uVar5) << 0x1c) >> 0x1a) * 4)
            ^ uVar6;
    uVar1 = uVar6 ^ param_3[2];
    uVar2 = (uVar6 ^ param_3[3]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar6 ^ param_3[3]) << 0x1c) >> 0x1a) * 4)
            ^ uVar5;
    uVar1 = uVar5 ^ param_3[4];
    uVar2 = (uVar5 ^ param_3[5]) >> 4;
    uVar6 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar5 ^ param_3[5]) << 0x1c) >> 0x1a) * 4)
            ^ uVar6;
    uVar1 = uVar6 ^ param_3[6];
    uVar2 = (uVar6 ^ param_3[7]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar6 ^ param_3[7]) << 0x1c) >> 0x1a) * 4)
            ^ uVar5;
    uVar1 = uVar5 ^ param_3[8];
    uVar2 = (uVar5 ^ param_3[9]) >> 4;
    uVar6 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar5 ^ param_3[9]) << 0x1c) >> 0x1a) * 4)
            ^ uVar6;
    uVar1 = uVar6 ^ param_3[10];
    uVar2 = (uVar6 ^ param_3[0xb]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar6 ^ param_3[0xb]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar5;
    uVar1 = uVar5 ^ param_3[0xc];
    uVar2 = (uVar5 ^ param_3[0xd]) >> 4;
    uVar6 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar5 ^ param_3[0xd]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar6;
    uVar1 = uVar6 ^ param_3[0xe];
    uVar2 = (uVar6 ^ param_3[0xf]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar6 ^ param_3[0xf]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar5;
    uVar1 = uVar5 ^ param_3[0x10];
    uVar2 = (uVar5 ^ param_3[0x11]) >> 4;
    uVar6 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar5 ^ param_3[0x11]) << 0x1c) >> 0x1a) * 4) ^ uVar6;
    uVar1 = uVar6 ^ param_3[0x12];
    uVar2 = (uVar6 ^ param_3[0x13]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar6 ^ param_3[0x13]) << 0x1c) >> 0x1a) * 4) ^ uVar5;
    uVar1 = uVar5 ^ param_3[0x14];
    uVar2 = (uVar5 ^ param_3[0x15]) >> 4;
    uVar6 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar5 ^ param_3[0x15]) << 0x1c) >> 0x1a) * 4) ^ uVar6;
    uVar1 = uVar6 ^ param_3[0x16];
    uVar2 = (uVar6 ^ param_3[0x17]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar6 ^ param_3[0x17]) << 0x1c) >> 0x1a) * 4) ^ uVar5;
    uVar1 = uVar5 ^ param_3[0x18];
    uVar2 = (uVar5 ^ param_3[0x19]) >> 4;
    uVar6 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar5 ^ param_3[0x19]) << 0x1c) >> 0x1a) * 4) ^ uVar6;
    uVar1 = uVar6 ^ param_3[0x1a];
    uVar2 = (uVar6 ^ param_3[0x1b]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar6 ^ param_3[0x1b]) << 0x1c) >> 0x1a) * 4) ^ uVar5;
    uVar1 = uVar5 ^ param_3[0x1c];
    uVar2 = (uVar5 ^ param_3[0x1d]) >> 4;
    uVar6 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar5 ^ param_3[0x1d]) << 0x1c) >> 0x1a) * 4) ^ uVar6;
    lVar7 = 0x7c;
    puVar8 = param_3 + 0x1e;
  }
  uVar1 = *puVar8 ^ uVar6;
  uVar2 = *(uint *)((long)param_3 + lVar7) ^ uVar6;
  uVar3 = uVar2 >> 4;
  uVar1 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
          *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
          *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
          *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
          *(uint *)(&UNK_10e520928 + (ulong)((uVar3 & 0xfc) >> 2) * 4) ^
          *(uint *)(&UNK_10e520b28 + (ulong)((uVar3 & 0xfc00) >> 10) * 4) ^
          *(uint *)(&UNK_10e520d28 + (ulong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
          *(uint *)(&UNK_10e520f28 + (ulong)((uVar3 | uVar2 << 0x1c) >> 0x1a) * 4);
  uVar5 = ((uVar1 >> 3 | uVar1 << 0x1d) >> 1 ^ (uVar6 >> 3 | uVar6 << 0x1d)) & 0x55555555;
  uVar2 = uVar5 ^ (uVar6 >> 3 | uVar6 << 0x1d);
  uVar6 = uVar5 << 1 ^ (uVar1 >> 3 | uVar1 << 0x1d);
  uVar5 = (uVar6 ^ uVar2 >> 8) & 0xff00ff;
  uVar6 = uVar5 ^ uVar6;
  uVar2 = uVar2 ^ uVar5 << 8;
  uVar5 = (uVar2 ^ uVar6 >> 2) & 0x33333333;
  uVar2 = uVar5 ^ uVar2;
  uVar6 = uVar6 ^ uVar5 << 2;
  uVar5 = uVar6 & 0xffff ^ uVar2 >> 0x10;
  uVar6 = uVar5 ^ uVar6;
  uVar2 = uVar2 ^ uVar5 << 0x10;
  uVar5 = (uVar2 ^ uVar6 >> 4) & 0xf0f0f0f;
  *puVar4 = uVar5 ^ uVar2;
  puVar4[1] = uVar6 ^ uVar5 << 4;
  return;
}



/* Entry: 10ae2688c; end: 10ae2777b;  */

void FUN_10ae2688c(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  
  uVar4 = (*param_1 ^ param_1[1] >> 4) & 0xf0f0f0f;
  uVar5 = uVar4 ^ *param_1;
  uVar1 = param_1[1] ^ uVar4 << 4;
  uVar4 = uVar1 & 0xffff ^ uVar5 >> 0x10;
  uVar1 = uVar4 ^ uVar1;
  uVar5 = uVar5 ^ uVar4 << 0x10;
  uVar4 = (uVar5 ^ uVar1 >> 2) & 0x33333333;
  uVar5 = uVar4 ^ uVar5;
  uVar1 = uVar1 ^ uVar4 << 2;
  uVar4 = (uVar1 ^ uVar5 >> 8) & 0xff00ff;
  uVar1 = uVar4 ^ uVar1;
  uVar5 = uVar5 ^ uVar4 << 8;
  uVar4 = (uVar5 ^ uVar1 >> 1) & 0x55555555;
  uVar5 = uVar4 ^ uVar5;
  uVar1 = uVar1 ^ uVar4 << 1;
  uVar4 = uVar5 >> 0x1d | uVar5 << 3;
  uVar5 = uVar1 >> 0x1d | uVar1 << 3;
  if (param_3 == 0) {
    uVar1 = param_2[0x1e] ^ uVar4;
    uVar2 = (param_2[0x1f] ^ uVar4) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (param_2[0x1f] ^ uVar4) << 0x1c) >> 0x1a) * 4) ^ uVar5;
    uVar1 = uVar5 ^ param_2[0x1c];
    uVar2 = (uVar5 ^ param_2[0x1d]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar5 ^ param_2[0x1d]) << 0x1c) >> 0x1a) * 4) ^ uVar4;
    uVar1 = uVar4 ^ param_2[0x1a];
    uVar2 = (uVar4 ^ param_2[0x1b]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar4 ^ param_2[0x1b]) << 0x1c) >> 0x1a) * 4) ^ uVar5;
    uVar1 = uVar5 ^ param_2[0x18];
    uVar2 = (uVar5 ^ param_2[0x19]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar5 ^ param_2[0x19]) << 0x1c) >> 0x1a) * 4) ^ uVar4;
    uVar1 = uVar4 ^ param_2[0x16];
    uVar2 = (uVar4 ^ param_2[0x17]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar4 ^ param_2[0x17]) << 0x1c) >> 0x1a) * 4) ^ uVar5;
    uVar1 = uVar5 ^ param_2[0x14];
    uVar2 = (uVar5 ^ param_2[0x15]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar5 ^ param_2[0x15]) << 0x1c) >> 0x1a) * 4) ^ uVar4;
    uVar1 = uVar4 ^ param_2[0x12];
    uVar2 = (uVar4 ^ param_2[0x13]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar4 ^ param_2[0x13]) << 0x1c) >> 0x1a) * 4) ^ uVar5;
    uVar1 = uVar5 ^ param_2[0x10];
    uVar2 = (uVar5 ^ param_2[0x11]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar5 ^ param_2[0x11]) << 0x1c) >> 0x1a) * 4) ^ uVar4;
    uVar1 = uVar4 ^ param_2[0xe];
    uVar2 = (uVar4 ^ param_2[0xf]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar4 ^ param_2[0xf]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar5;
    uVar1 = uVar5 ^ param_2[0xc];
    uVar2 = (uVar5 ^ param_2[0xd]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar5 ^ param_2[0xd]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar4;
    uVar1 = uVar4 ^ param_2[10];
    uVar2 = (uVar4 ^ param_2[0xb]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar4 ^ param_2[0xb]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar5;
    uVar1 = uVar5 ^ param_2[8];
    uVar2 = (uVar5 ^ param_2[9]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar5 ^ param_2[9]) << 0x1c) >> 0x1a) * 4)
            ^ uVar4;
    uVar1 = uVar4 ^ param_2[6];
    uVar2 = (uVar4 ^ param_2[7]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar4 ^ param_2[7]) << 0x1c) >> 0x1a) * 4)
            ^ uVar5;
    uVar1 = uVar5 ^ param_2[4];
    uVar2 = (uVar5 ^ param_2[5]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar5 ^ param_2[5]) << 0x1c) >> 0x1a) * 4)
            ^ uVar4;
    uVar1 = uVar4 ^ param_2[2];
    uVar2 = (uVar4 ^ param_2[3]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar4 ^ param_2[3]) << 0x1c) >> 0x1a) * 4)
            ^ uVar5;
    lVar6 = 4;
    puVar7 = param_2;
  }
  else {
    uVar1 = *param_2 ^ uVar4;
    uVar2 = (param_2[1] ^ uVar4) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (param_2[1] ^ uVar4) << 0x1c) >> 0x1a) * 4)
            ^ uVar5;
    uVar1 = uVar5 ^ param_2[2];
    uVar2 = (uVar5 ^ param_2[3]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar5 ^ param_2[3]) << 0x1c) >> 0x1a) * 4)
            ^ uVar4;
    uVar1 = uVar4 ^ param_2[4];
    uVar2 = (uVar4 ^ param_2[5]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar4 ^ param_2[5]) << 0x1c) >> 0x1a) * 4)
            ^ uVar5;
    uVar1 = uVar5 ^ param_2[6];
    uVar2 = (uVar5 ^ param_2[7]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar5 ^ param_2[7]) << 0x1c) >> 0x1a) * 4)
            ^ uVar4;
    uVar1 = uVar4 ^ param_2[8];
    uVar2 = (uVar4 ^ param_2[9]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar4 ^ param_2[9]) << 0x1c) >> 0x1a) * 4)
            ^ uVar5;
    uVar1 = uVar5 ^ param_2[10];
    uVar2 = (uVar5 ^ param_2[0xb]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar5 ^ param_2[0xb]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar4;
    uVar1 = uVar4 ^ param_2[0xc];
    uVar2 = (uVar4 ^ param_2[0xd]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar4 ^ param_2[0xd]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar5;
    uVar1 = uVar5 ^ param_2[0xe];
    uVar2 = (uVar5 ^ param_2[0xf]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 + (ulong)((uVar2 | (uVar5 ^ param_2[0xf]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar4;
    uVar1 = uVar4 ^ param_2[0x10];
    uVar2 = (uVar4 ^ param_2[0x11]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar4 ^ param_2[0x11]) << 0x1c) >> 0x1a) * 4) ^ uVar5;
    uVar1 = uVar5 ^ param_2[0x12];
    uVar2 = (uVar5 ^ param_2[0x13]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar5 ^ param_2[0x13]) << 0x1c) >> 0x1a) * 4) ^ uVar4;
    uVar1 = uVar4 ^ param_2[0x14];
    uVar2 = (uVar4 ^ param_2[0x15]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar4 ^ param_2[0x15]) << 0x1c) >> 0x1a) * 4) ^ uVar5;
    uVar1 = uVar5 ^ param_2[0x16];
    uVar2 = (uVar5 ^ param_2[0x17]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar5 ^ param_2[0x17]) << 0x1c) >> 0x1a) * 4) ^ uVar4;
    uVar1 = uVar4 ^ param_2[0x18];
    uVar2 = (uVar4 ^ param_2[0x19]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar4 ^ param_2[0x19]) << 0x1c) >> 0x1a) * 4) ^ uVar5;
    uVar1 = uVar5 ^ param_2[0x1a];
    uVar2 = (uVar5 ^ param_2[0x1b]) >> 4;
    uVar4 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar5 ^ param_2[0x1b]) << 0x1c) >> 0x1a) * 4) ^ uVar4;
    uVar1 = uVar4 ^ param_2[0x1c];
    uVar2 = (uVar4 ^ param_2[0x1d]) >> 4;
    uVar5 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
            *(uint *)(&UNK_10e520928 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&UNK_10e520b28 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&UNK_10e520d28 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&UNK_10e520f28 +
                     (ulong)((uVar2 | (uVar4 ^ param_2[0x1d]) << 0x1c) >> 0x1a) * 4) ^ uVar5;
    lVar6 = 0x7c;
    puVar7 = param_2 + 0x1e;
  }
  uVar1 = *puVar7 ^ uVar5;
  uVar2 = *(uint *)((long)param_2 + lVar6) ^ uVar5;
  uVar3 = uVar2 >> 4;
  uVar1 = *(uint *)(&UNK_10e520828 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar4 ^
          *(uint *)(&UNK_10e520a28 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
          *(uint *)(&UNK_10e520c28 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
          *(uint *)(&UNK_10e520e28 + (ulong)(uVar1 >> 0x1a) * 4) ^
          *(uint *)(&UNK_10e520928 + (ulong)((uVar3 & 0xfc) >> 2) * 4) ^
          *(uint *)(&UNK_10e520b28 + (ulong)((uVar3 & 0xfc00) >> 10) * 4) ^
          *(uint *)(&UNK_10e520d28 + (ulong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
          *(uint *)(&UNK_10e520f28 + (ulong)((uVar3 | uVar2 << 0x1c) >> 0x1a) * 4);
  uVar4 = ((uVar1 >> 3 | uVar1 << 0x1d) >> 1 ^ (uVar5 >> 3 | uVar5 << 0x1d)) & 0x55555555;
  uVar2 = uVar4 ^ (uVar5 >> 3 | uVar5 << 0x1d);
  uVar5 = uVar4 << 1 ^ (uVar1 >> 3 | uVar1 << 0x1d);
  uVar4 = (uVar5 ^ uVar2 >> 8) & 0xff00ff;
  uVar5 = uVar4 ^ uVar5;
  uVar2 = uVar2 ^ uVar4 << 8;
  uVar4 = (uVar2 ^ uVar5 >> 2) & 0x33333333;
  uVar2 = uVar4 ^ uVar2;
  uVar5 = uVar5 ^ uVar4 << 2;
  uVar4 = uVar5 & 0xffff ^ uVar2 >> 0x10;
  uVar5 = uVar4 ^ uVar5;
  uVar2 = uVar2 ^ uVar4 << 0x10;
  uVar4 = (uVar2 ^ uVar5 >> 4) & 0xf0f0f0f;
  *param_1 = uVar4 ^ uVar2;
  param_1[1] = uVar5 ^ uVar4 << 4;
  return;
}



/* Entry: 10ae2777c; end: 10ae27aa3;  */

void FUN_10ae2777c(uint *param_1,uint *param_2,undefined1 *param_3,uint *param_4,uint *param_5,
                  undefined8 param_6,uint *param_7,int param_8)

{
  undefined8 uVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  byte *pbVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  undefined **ppuVar18;
  undefined1 uVar19;
  long lVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  uint *puVar23;
  uint *puVar24;
  uint uVar25;
  uint *unaff_x26;
  uint uVar26;
  uint *unaff_x27;
  uint *unaff_x28;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined1 ***pppuStack_130;
  code *pcStack_128;
  uint *puStack_120;
  uint *puStack_118;
  uint uStack_110;
  uint uStack_10c;
  long lStack_108;
  uint *puStack_100;
  uint *puStack_f8;
  uint *puStack_f0;
  uint *puStack_e8;
  uint *puStack_e0;
  uint *puStack_d8;
  undefined1 *puStack_d0;
  uint *puStack_c8;
  uint *puStack_c0;
  uint *puStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  uint *puStack_90;
  uint *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  uint uStack_70;
  uint uStack_6c;
  long lStack_68;
  
  uVar11 = (undefined4)((ulong)param_6 >> 0x20);
  iVar10 = (int)param_6;
  puVar4 = &uStack_70;
  puVar5 = &uStack_70;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar24 = (uint *)(ulong)*param_5;
  puVar23 = (uint *)(ulong)param_5[1];
  bVar2 = (undefined1 *)0x7 < param_3;
  puVar9 = param_5;
  puVar8 = param_4;
  puVar7 = param_3;
  puVar6 = param_2;
  puVar3 = param_1;
  if (iVar10 == 0) {
    while( true ) {
      puVar5 = puVar23;
      uVar15 = (uint)puVar24;
      if (!bVar2) break;
      uStack_70 = *param_1;
      puVar24 = (uint *)(ulong)uStack_70;
      uStack_6c = param_1[1];
      puVar23 = (uint *)(ulong)uStack_6c;
      unaff_x26 = param_1 + 2;
      puVar7 = (undefined1 *)0x0;
      puVar3 = &uStack_70;
      puVar6 = param_4;
      FUN_10ae2688c();
      uVar15 = uStack_70 ^ uVar15;
      uVar16 = uStack_6c ^ (uint)puVar5;
      *(char *)param_2 = (char)uVar15;
      *(char *)((long)param_2 + 1) = (char)(uVar15 >> 8);
      *(char *)((long)param_2 + 2) = (char)(uVar15 >> 0x10);
      *(char *)((long)param_2 + 3) = (char)(uVar15 >> 0x18);
      *(char *)(param_2 + 1) = (char)uVar16;
      *(char *)((long)param_2 + 5) = (char)(uVar16 >> 8);
      *(char *)((long)param_2 + 6) = (char)(uVar16 >> 0x10);
      *(char *)((long)param_2 + 7) = (char)(uVar16 >> 0x18);
      param_3 = param_3 + -8;
      bVar2 = (undefined1 *)0x7 < param_3;
      unaff_x28 = puVar5;
      unaff_x27 = param_2;
      param_2 = param_2 + 2;
      param_1 = unaff_x26;
    }
    puVar23 = puVar5;
    if (param_3 != (undefined1 *)0x0) {
      uStack_70 = *param_1;
      puVar24 = (uint *)(ulong)uStack_70;
      uStack_6c = param_1[1];
      param_1 = (uint *)(ulong)uStack_6c;
      puVar7 = (undefined1 *)0x0;
      puVar6 = param_4;
      FUN_10ae2688c();
      uVar15 = uStack_70 ^ uVar15;
      puVar17 = (undefined1 *)((long)param_2 + (long)param_3);
      if ((long)param_3 < 4) {
        if (param_3 != (undefined1 *)0x1) {
          if (param_3 != (undefined1 *)0x2) goto LAB_10ae27a14;
          goto LAB_10ae27a1c;
        }
      }
      else {
        uVar16 = uStack_6c ^ (uint)puVar5;
        if ((long)param_3 < 6) {
          if (param_3 != (undefined1 *)0x4) goto LAB_10ae27a08;
        }
        else {
          if (param_3 != (undefined1 *)0x6) {
            puVar17 = puVar17 + -1;
            *puVar17 = (char)(uVar16 >> 0x10);
          }
          puVar17 = puVar17 + -1;
          *puVar17 = (char)(uVar16 >> 8);
LAB_10ae27a08:
          puVar17 = puVar17 + -1;
          *puVar17 = (char)uVar16;
        }
        puVar17 = puVar17 + -1;
        *puVar17 = (char)(uVar15 >> 0x18);
LAB_10ae27a14:
        puVar17 = puVar17 + -1;
        *puVar17 = (char)(uVar15 >> 0x10);
LAB_10ae27a1c:
        puVar17 = puVar17 + -1;
        *puVar17 = (char)(uVar15 >> 8);
      }
      puVar17[-1] = (char)uVar15;
      puVar3 = puVar4;
      puVar23 = param_1;
      unaff_x26 = puVar24;
    }
    *(char *)param_5 = (char)puVar24;
    *(char *)((long)param_5 + 1) = (char)((ulong)puVar24 >> 8);
    *(char *)((long)param_5 + 2) = (char)((ulong)puVar24 >> 0x10);
    *(char *)((long)param_5 + 3) = (char)((ulong)puVar24 >> 0x18);
    *(char *)(param_5 + 1) = (char)puVar23;
    *(char *)((long)param_5 + 5) = (char)((ulong)puVar23 >> 8);
    uVar12 = (undefined1)((ulong)puVar23 >> 0x18);
    *(char *)((long)param_5 + 6) = (char)((ulong)puVar23 >> 0x10);
  }
  else {
    while( true ) {
      if (!bVar2) break;
      uStack_70 = *param_1 ^ (uint)puVar24;
      uStack_6c = param_1[1] ^ (uint)puVar23;
      puVar7 = (undefined1 *)0x1;
      puVar3 = &uStack_70;
      puVar6 = param_4;
      FUN_10ae2688c();
      puVar24 = (uint *)(ulong)uStack_70;
      puVar23 = (uint *)(ulong)uStack_6c;
      *param_2 = uStack_70;
      param_2[1] = uStack_6c;
      param_3 = param_3 + -8;
      bVar2 = (undefined1 *)0x7 < param_3;
      unaff_x26 = param_2;
      param_2 = param_2 + 2;
      param_1 = param_1 + 2;
    }
    if (param_3 != (undefined1 *)0x0) {
      uVar15 = 0;
      pbVar13 = (byte *)((long)param_1 + (long)param_3);
      if ((long)param_3 < 4) {
        uStack_6c = 0;
        if (param_3 != (undefined1 *)0x1) {
          if (param_3 != (undefined1 *)0x2) goto LAB_10ae27968;
          goto LAB_10ae27970;
        }
      }
      else {
        if ((long)param_3 < 6) {
          uStack_6c = uVar15;
          if (param_3 != (undefined1 *)0x4) goto LAB_10ae27954;
        }
        else {
          if (param_3 != (undefined1 *)0x6) {
            pbVar13 = pbVar13 + -1;
            uVar15 = (uint)*pbVar13 << 0x10;
          }
          pbVar13 = pbVar13 + -1;
          uVar15 = uVar15 | (uint)*pbVar13 << 8;
LAB_10ae27954:
          pbVar13 = pbVar13 + -1;
          uStack_6c = uVar15 | *pbVar13;
        }
        pbVar13 = pbVar13 + -1;
        uVar15 = (uint)*pbVar13 << 0x18;
LAB_10ae27968:
        pbVar13 = pbVar13 + -1;
        uVar15 = uVar15 | (uint)*pbVar13 << 0x10;
LAB_10ae27970:
        pbVar13 = pbVar13 + -1;
        uVar15 = uVar15 | (uint)*pbVar13 << 8;
      }
      uStack_70 = (uVar15 | pbVar13[-1]) ^ (uint)puVar24;
      uStack_6c = uStack_6c ^ (uint)puVar23;
      puVar7 = (undefined1 *)0x1;
      puVar6 = param_4;
      FUN_10ae2688c();
      puVar24 = (uint *)(ulong)uStack_70;
      puVar23 = (uint *)(ulong)uStack_6c;
      *param_2 = uStack_70;
      param_2[1] = uStack_6c;
      puVar3 = puVar5;
    }
    uVar12 = (undefined1)((ulong)puVar23 >> 0x18);
    *(char *)param_5 = (char)puVar24;
    *(char *)((long)param_5 + 1) = (char)((ulong)puVar24 >> 8);
    *(char *)((long)param_5 + 2) = (char)((ulong)puVar24 >> 0x10);
    *(char *)((long)param_5 + 3) = (char)((ulong)puVar24 >> 0x18);
    *(char *)(param_5 + 1) = (char)puVar23;
    *(char *)((long)param_5 + 5) = (char)((ulong)puVar23 >> 8);
    *(char *)((long)param_5 + 6) = (char)((ulong)puVar23 >> 0x10);
  }
  *(undefined1 *)((long)param_5 + 7) = uVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = (uint *)&uStack_a0;
  puVar5 = (uint *)&uStack_a0;
  puStack_90 = param_4;
  puStack_88 = param_5;
  puStack_80 = &stack0xfffffffffffffff0;
  pcStack_78 = FUN_10ae27aa4;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a0 = *(undefined8 *)puVar3;
  puVar3 = puVar9;
  if (iVar10 == 0) {
    FUN_10ae26714();
  }
  else {
    FUN_10ae257e4();
    puVar5 = puVar4;
  }
  *(char *)puVar6 = (char)uStack_a0;
  *(char *)((long)puVar6 + 1) = (char)((ulong)uStack_a0 >> 8);
  *(char *)((long)puVar6 + 2) = (char)((ulong)uStack_a0 >> 0x10);
  *(char *)((long)puVar6 + 3) = (char)((ulong)uStack_a0 >> 0x18);
  *(char *)(puVar6 + 1) = (char)((ulong)uStack_a0 >> 0x20);
  *(char *)((long)puVar6 + 5) = (char)((ulong)uStack_a0 >> 0x28);
  *(char *)((long)puVar6 + 6) = (char)((ulong)uStack_a0 >> 0x30);
  *(char *)((long)puVar6 + 7) = (char)((ulong)uStack_a0 >> 0x38);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_10ae27b58;
  uVar1 = CONCAT44(uVar11,iVar10);
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = *param_7;
  uVar25 = param_7[1];
  bVar2 = (uint *)0x7 < puVar8;
  ppuStack_b0 = &puStack_80;
  puVar4 = puVar5;
  puStack_b8 = puVar6;
  puStack_c8 = param_2;
  puStack_d0 = param_3;
  puStack_d8 = param_1;
  puStack_e0 = puVar23;
  puStack_e8 = puVar24;
  puStack_f0 = unaff_x26;
  puStack_f8 = unaff_x27;
  puStack_100 = unaff_x28;
  puStack_c0 = param_4;
  uVar16 = uVar25;
  puVar24 = puStack_118;
  if (param_8 == 0) {
    while (puStack_118 = puVar9, bVar2) {
      uVar25 = *puVar5;
      uVar26 = puVar5[1];
      puVar5 = puVar5 + 2;
      puVar4 = &uStack_110;
      puStack_120 = param_7;
      uStack_110 = uVar25;
      uStack_10c = uVar26;
      FUN_10ae26714(puVar4,puStack_118,puVar3,uVar1);
      uVar15 = uStack_110 ^ uVar15;
      uVar16 = uStack_10c ^ uVar16;
      *puVar7 = (char)uVar15;
      puVar7[1] = (char)(uVar15 >> 8);
      puVar7[2] = (char)(uVar15 >> 0x10);
      puVar7[3] = (char)(uVar15 >> 0x18);
      puVar7[4] = (char)uVar16;
      puVar7[5] = (char)(uVar16 >> 8);
      puVar7[6] = (char)(uVar16 >> 0x10);
      puVar7[7] = (char)(uVar16 >> 0x18);
      puVar8 = puVar8 + -2;
      bVar2 = (uint *)0x7 < puVar8;
      uVar15 = uVar25;
      uVar16 = uVar26;
      puVar7 = puVar7 + 8;
      puVar9 = puStack_118;
      param_7 = puStack_120;
      puVar24 = puStack_118;
    }
    uVar26 = uVar15;
    uVar25 = uVar16;
    if (puVar8 != (uint *)0x0) {
      uVar26 = *puVar5;
      uVar25 = puVar5[1];
      puVar4 = &uStack_110;
      puVar23 = puStack_118;
      puStack_118 = puVar24;
      uStack_110 = uVar26;
      uStack_10c = uVar25;
      FUN_10ae26714(puVar4,puVar23,puVar3,uVar1);
      uVar15 = uStack_110 ^ uVar15;
      puVar7 = puVar7 + (long)puVar8;
      if ((long)puVar8 < 4) {
        if (puVar8 != (uint *)0x1) {
          if (puVar8 != (uint *)0x2) goto LAB_10ae27e70;
          goto LAB_10ae27e78;
        }
      }
      else {
        uVar16 = uStack_10c ^ uVar16;
        if ((long)puVar8 < 6) {
          if (puVar8 != (uint *)0x4) goto LAB_10ae27e64;
        }
        else {
          if (puVar8 != (uint *)0x6) {
            puVar7 = puVar7 + -1;
            *puVar7 = (char)(uVar16 >> 0x10);
          }
          puVar7 = puVar7 + -1;
          *puVar7 = (char)(uVar16 >> 8);
LAB_10ae27e64:
          puVar7 = puVar7 + -1;
          *puVar7 = (char)uVar16;
        }
        puVar7 = puVar7 + -1;
        *puVar7 = (char)(uVar15 >> 0x18);
LAB_10ae27e70:
        puVar7 = puVar7 + -1;
        *puVar7 = (char)(uVar15 >> 0x10);
LAB_10ae27e78:
        puVar7 = puVar7 + -1;
        *puVar7 = (char)(uVar15 >> 8);
      }
      puVar7[-1] = (char)uVar15;
      puVar24 = puStack_118;
    }
    puStack_118 = puVar24;
    *(char *)param_7 = (char)uVar26;
    *(char *)((long)param_7 + 1) = (char)(uVar26 >> 8);
    *(char *)((long)param_7 + 2) = (char)(uVar26 >> 0x10);
    *(char *)((long)param_7 + 3) = (char)(uVar26 >> 0x18);
    *(char *)(param_7 + 1) = (char)uVar25;
    *(char *)((long)param_7 + 5) = (char)(uVar25 >> 8);
    *(char *)((long)param_7 + 6) = (char)(uVar25 >> 0x10);
    goto LAB_10ae27ec0;
  }
  while (bVar2) {
    uStack_110 = *puVar5 ^ uVar15;
    uStack_10c = puVar5[1] ^ uVar25;
    puVar4 = &uStack_110;
    FUN_10ae257e4(puVar4,puVar9,puVar3,uVar1);
    *puVar7 = (char)uStack_110;
    puVar7[1] = (char)(uStack_110 >> 8);
    puVar7[2] = (char)(uStack_110 >> 0x10);
    puVar7[3] = (char)(uStack_110 >> 0x18);
    puVar7[4] = (char)uStack_10c;
    puVar7[5] = (char)(uStack_10c >> 8);
    puVar7[6] = (char)(uStack_10c >> 0x10);
    puVar7[7] = (char)(uStack_10c >> 0x18);
    puVar8 = puVar8 + -2;
    bVar2 = (uint *)0x7 < puVar8;
    uVar15 = uStack_110;
    uVar25 = uStack_10c;
    puVar5 = puVar5 + 2;
    puVar7 = puVar7 + 8;
  }
  if (puVar8 == (uint *)0x0) {
    uVar12 = (undefined1)(uVar15 >> 8);
    uVar14 = (undefined1)(uVar15 >> 0x10);
    uVar19 = (undefined1)(uVar15 >> 0x18);
    uVar21 = (undefined1)(uVar25 >> 8);
    uVar22 = (undefined1)(uVar25 >> 0x10);
  }
  else {
    uVar16 = 0;
    pbVar13 = (byte *)((long)puVar5 + (long)puVar8);
    if ((long)puVar8 < 4) {
      uStack_10c = 0;
      if (puVar8 != (uint *)0x1) {
        if (puVar8 != (uint *)0x2) goto LAB_10ae27da4;
        goto LAB_10ae27dac;
      }
    }
    else {
      if ((long)puVar8 < 6) {
        uStack_10c = uVar16;
        if (puVar8 != (uint *)0x4) goto LAB_10ae27d90;
      }
      else {
        if (puVar8 != (uint *)0x6) {
          pbVar13 = pbVar13 + -1;
          uVar16 = (uint)*pbVar13 << 0x10;
        }
        pbVar13 = pbVar13 + -1;
        uVar16 = uVar16 | (uint)*pbVar13 << 8;
LAB_10ae27d90:
        pbVar13 = pbVar13 + -1;
        uStack_10c = uVar16 | *pbVar13;
      }
      pbVar13 = pbVar13 + -1;
      uVar16 = (uint)*pbVar13 << 0x18;
LAB_10ae27da4:
      pbVar13 = pbVar13 + -1;
      uVar16 = uVar16 | (uint)*pbVar13 << 0x10;
LAB_10ae27dac:
      pbVar13 = pbVar13 + -1;
      uVar16 = uVar16 | (uint)*pbVar13 << 8;
    }
    uStack_110 = (uVar16 | pbVar13[-1]) ^ uVar15;
    uStack_10c = uStack_10c ^ uVar25;
    puVar4 = &uStack_110;
    FUN_10ae257e4(puVar4,puVar9,puVar3,uVar1);
    *puVar7 = (char)uStack_110;
    uVar12 = (undefined1)(uStack_110 >> 8);
    puVar7[1] = uVar12;
    uVar14 = (undefined1)(uStack_110 >> 0x10);
    puVar7[2] = uVar14;
    uVar19 = (undefined1)(uStack_110 >> 0x18);
    puVar7[3] = uVar19;
    puVar7[4] = (char)uStack_10c;
    uVar21 = (undefined1)(uStack_10c >> 8);
    puVar7[5] = uVar21;
    uVar22 = (undefined1)(uStack_10c >> 0x10);
    puVar7[6] = uVar22;
    puVar7[7] = (char)(uStack_10c >> 0x18);
    uVar15 = uStack_110;
    uVar25 = uStack_10c;
  }
  *(char *)param_7 = (char)uVar15;
  *(undefined1 *)((long)param_7 + 1) = uVar12;
  *(undefined1 *)((long)param_7 + 2) = uVar14;
  *(undefined1 *)((long)param_7 + 3) = uVar19;
  *(char *)(param_7 + 1) = (char)uVar25;
  *(undefined1 *)((long)param_7 + 5) = uVar21;
  *(undefined1 *)((long)param_7 + 6) = uVar22;
LAB_10ae27ec0:
  *(char *)((long)param_7 + 7) = (char)(uVar25 >> 0x18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_10ae27f00;
  pppuStack_130 = &ppuStack_b0;
  if (puVar4[4] == 0) {
    uStack_140 = *(undefined8 *)(puVar4 + 6);
    uStack_138 = (ulong)(puVar4[5] & ((int)puVar4[5] >> 0x1f ^ 0xffffffffU));
    FUN_10ae27f74(&uStack_140);
  }
  else {
    ppuVar18 = &PTR_FUN_110c7c3c0;
    lVar20 = 0x12;
    do {
      if (*(uint *)(ppuVar18 + -1) == puVar4[4]) {
                    /* WARNING: Could not recover jumptable at 0x00010ae27f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*ppuVar18)();
        return;
      }
      ppuVar18 = ppuVar18 + 4;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  return;
}



/* Entry: 10ae27aa4; end: 10ae27b57;  */

void FUN_10ae27aa4(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,uint *param_7,int param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  byte *pbVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined **ppuVar14;
  undefined1 uVar15;
  long lVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  uint *puStack_b0;
  undefined8 uStack_a8;
  uint uStack_a0;
  uint uStack_9c;
  long lStack_98;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uVar9 = (undefined4)((ulong)param_6 >> 0x20);
  iVar8 = (int)param_6;
  puVar5 = (uint *)&uStack_30;
  puVar6 = (uint *)&uStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *param_1;
  uVar7 = param_5;
  if (iVar8 == 0) {
    FUN_10ae26714();
  }
  else {
    FUN_10ae257e4();
    puVar6 = puVar5;
  }
  *param_2 = (char)uStack_30;
  param_2[1] = (char)((ulong)uStack_30 >> 8);
  param_2[2] = (char)((ulong)uStack_30 >> 0x10);
  param_2[3] = (char)((ulong)uStack_30 >> 0x18);
  param_2[4] = (char)((ulong)uStack_30 >> 0x20);
  param_2[5] = (char)((ulong)uStack_30 >> 0x28);
  param_2[6] = (char)((ulong)uStack_30 >> 0x30);
  param_2[7] = (char)((ulong)uStack_30 >> 0x38);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pcStack_38 = FUN_10ae27b58;
  uVar1 = CONCAT44(uVar9,iVar8);
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar20 = *param_7;
  uVar19 = param_7[1];
  bVar4 = 7 < param_4;
  puStack_40 = &stack0xfffffffffffffff0;
  puVar5 = puVar6;
  uVar13 = uVar19;
  uVar3 = param_5;
  uVar2 = uStack_a8;
  if (param_8 == 0) {
    while (uStack_a8 = uVar3, bVar4) {
      uVar19 = *puVar6;
      uVar21 = puVar6[1];
      puVar6 = puVar6 + 2;
      puVar5 = &uStack_a0;
      puStack_b0 = param_7;
      uStack_a0 = uVar19;
      uStack_9c = uVar21;
      FUN_10ae26714(puVar5,uStack_a8,uVar7,uVar1);
      uVar20 = uStack_a0 ^ uVar20;
      uVar13 = uStack_9c ^ uVar13;
      *param_3 = (char)uVar20;
      param_3[1] = (char)(uVar20 >> 8);
      param_3[2] = (char)(uVar20 >> 0x10);
      param_3[3] = (char)(uVar20 >> 0x18);
      param_3[4] = (char)uVar13;
      param_3[5] = (char)(uVar13 >> 8);
      param_3[6] = (char)(uVar13 >> 0x10);
      param_3[7] = (char)(uVar13 >> 0x18);
      param_4 = param_4 - 8;
      bVar4 = 7 < param_4;
      uVar20 = uVar19;
      uVar13 = uVar21;
      param_3 = param_3 + 8;
      uVar3 = uStack_a8;
      param_7 = puStack_b0;
      uVar2 = uStack_a8;
    }
    uVar21 = uVar20;
    uVar19 = uVar13;
    if (param_4 != 0) {
      uVar21 = *puVar6;
      uVar19 = puVar6[1];
      puVar5 = &uStack_a0;
      uVar3 = uStack_a8;
      uStack_a8 = uVar2;
      uStack_a0 = uVar21;
      uStack_9c = uVar19;
      FUN_10ae26714(puVar5,uVar3,uVar7,uVar1);
      uVar20 = uStack_a0 ^ uVar20;
      param_3 = param_3 + param_4;
      if ((long)param_4 < 4) {
        if (param_4 != 1) {
          if (param_4 != 2) goto LAB_10ae27e70;
          goto LAB_10ae27e78;
        }
      }
      else {
        uVar13 = uStack_9c ^ uVar13;
        if ((long)param_4 < 6) {
          if (param_4 != 4) goto LAB_10ae27e64;
        }
        else {
          if (param_4 != 6) {
            param_3 = param_3 + -1;
            *param_3 = (char)(uVar13 >> 0x10);
          }
          param_3 = param_3 + -1;
          *param_3 = (char)(uVar13 >> 8);
LAB_10ae27e64:
          param_3 = param_3 + -1;
          *param_3 = (char)uVar13;
        }
        param_3 = param_3 + -1;
        *param_3 = (char)(uVar20 >> 0x18);
LAB_10ae27e70:
        param_3 = param_3 + -1;
        *param_3 = (char)(uVar20 >> 0x10);
LAB_10ae27e78:
        param_3 = param_3 + -1;
        *param_3 = (char)(uVar20 >> 8);
      }
      param_3[-1] = (char)uVar20;
      uVar2 = uStack_a8;
    }
    uStack_a8 = uVar2;
    *(char *)param_7 = (char)uVar21;
    *(char *)((long)param_7 + 1) = (char)(uVar21 >> 8);
    *(char *)((long)param_7 + 2) = (char)(uVar21 >> 0x10);
    *(char *)((long)param_7 + 3) = (char)(uVar21 >> 0x18);
    *(char *)(param_7 + 1) = (char)uVar19;
    *(char *)((long)param_7 + 5) = (char)(uVar19 >> 8);
    *(char *)((long)param_7 + 6) = (char)(uVar19 >> 0x10);
    goto LAB_10ae27ec0;
  }
  while (bVar4) {
    uStack_a0 = *puVar6 ^ uVar20;
    uStack_9c = puVar6[1] ^ uVar19;
    puVar5 = &uStack_a0;
    FUN_10ae257e4(puVar5,param_5,uVar7,uVar1);
    *param_3 = (char)uStack_a0;
    param_3[1] = (char)(uStack_a0 >> 8);
    param_3[2] = (char)(uStack_a0 >> 0x10);
    param_3[3] = (char)(uStack_a0 >> 0x18);
    param_3[4] = (char)uStack_9c;
    param_3[5] = (char)(uStack_9c >> 8);
    param_3[6] = (char)(uStack_9c >> 0x10);
    param_3[7] = (char)(uStack_9c >> 0x18);
    param_4 = param_4 - 8;
    bVar4 = 7 < param_4;
    uVar20 = uStack_a0;
    uVar19 = uStack_9c;
    puVar6 = puVar6 + 2;
    param_3 = param_3 + 8;
  }
  if (param_4 == 0) {
    uVar10 = (undefined1)(uVar20 >> 8);
    uVar12 = (undefined1)(uVar20 >> 0x10);
    uVar15 = (undefined1)(uVar20 >> 0x18);
    uVar17 = (undefined1)(uVar19 >> 8);
    uVar18 = (undefined1)(uVar19 >> 0x10);
  }
  else {
    uVar13 = 0;
    pbVar11 = (byte *)((long)puVar6 + param_4);
    if ((long)param_4 < 4) {
      uStack_9c = 0;
      if (param_4 != 1) {
        if (param_4 != 2) goto LAB_10ae27da4;
        goto LAB_10ae27dac;
      }
    }
    else {
      if ((long)param_4 < 6) {
        uStack_9c = uVar13;
        if (param_4 != 4) goto LAB_10ae27d90;
      }
      else {
        if (param_4 != 6) {
          pbVar11 = pbVar11 + -1;
          uVar13 = (uint)*pbVar11 << 0x10;
        }
        pbVar11 = pbVar11 + -1;
        uVar13 = uVar13 | (uint)*pbVar11 << 8;
LAB_10ae27d90:
        pbVar11 = pbVar11 + -1;
        uStack_9c = uVar13 | *pbVar11;
      }
      pbVar11 = pbVar11 + -1;
      uVar13 = (uint)*pbVar11 << 0x18;
LAB_10ae27da4:
      pbVar11 = pbVar11 + -1;
      uVar13 = uVar13 | (uint)*pbVar11 << 0x10;
LAB_10ae27dac:
      pbVar11 = pbVar11 + -1;
      uVar13 = uVar13 | (uint)*pbVar11 << 8;
    }
    uStack_a0 = (uVar13 | pbVar11[-1]) ^ uVar20;
    uStack_9c = uStack_9c ^ uVar19;
    puVar5 = &uStack_a0;
    FUN_10ae257e4(puVar5,param_5,uVar7,uVar1);
    *param_3 = (char)uStack_a0;
    uVar10 = (undefined1)(uStack_a0 >> 8);
    param_3[1] = uVar10;
    uVar12 = (undefined1)(uStack_a0 >> 0x10);
    param_3[2] = uVar12;
    uVar15 = (undefined1)(uStack_a0 >> 0x18);
    param_3[3] = uVar15;
    param_3[4] = (char)uStack_9c;
    uVar17 = (undefined1)(uStack_9c >> 8);
    param_3[5] = uVar17;
    uVar18 = (undefined1)(uStack_9c >> 0x10);
    param_3[6] = uVar18;
    param_3[7] = (char)(uStack_9c >> 0x18);
    uVar20 = uStack_a0;
    uVar19 = uStack_9c;
  }
  *(char *)param_7 = (char)uVar20;
  *(undefined1 *)((long)param_7 + 1) = uVar10;
  *(undefined1 *)((long)param_7 + 2) = uVar12;
  *(undefined1 *)((long)param_7 + 3) = uVar15;
  *(char *)(param_7 + 1) = (char)uVar19;
  *(undefined1 *)((long)param_7 + 5) = uVar17;
  *(undefined1 *)((long)param_7 + 6) = uVar18;
LAB_10ae27ec0:
  *(char *)((long)param_7 + 7) = (char)(uVar19 >> 0x18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_10ae27f00;
  ppuStack_c0 = &puStack_40;
  if (puVar5[4] == 0) {
    uStack_d0 = *(undefined8 *)(puVar5 + 6);
    uStack_c8 = (ulong)(puVar5[5] & ((int)puVar5[5] >> 0x1f ^ 0xffffffffU));
    FUN_10ae27f74(&uStack_d0);
  }
  else {
    ppuVar14 = &PTR_FUN_110c7c3c0;
    lVar16 = 0x12;
    do {
      if (*(uint *)(ppuVar14 + -1) == puVar5[4]) {
                    /* WARNING: Could not recover jumptable at 0x00010ae27f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*ppuVar14)();
        return;
      }
      ppuVar14 = ppuVar14 + 4;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}



/* Entry: 10ae27b58; end: 10ae27eff;  */

void FUN_10ae27b58(uint *param_1,undefined1 *param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint *param_7,int param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  uint *puVar4;
  undefined1 uVar5;
  byte *pbVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined **ppuVar9;
  undefined1 uVar10;
  long lVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  uint *puStack_80;
  undefined8 uStack_78;
  uint uStack_70;
  uint uStack_6c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = *param_7;
  uVar14 = param_7[1];
  bVar3 = 7 < param_3;
  puVar4 = param_1;
  uVar8 = uVar14;
  uVar2 = param_4;
  uVar1 = uStack_78;
  if (param_8 == 0) {
    while (uStack_78 = uVar2, bVar3) {
      uVar14 = *param_1;
      uVar16 = param_1[1];
      param_1 = param_1 + 2;
      puVar4 = &uStack_70;
      puStack_80 = param_7;
      uStack_70 = uVar14;
      uStack_6c = uVar16;
      FUN_10ae26714(puVar4,uStack_78,param_5,param_6);
      uVar15 = uStack_70 ^ uVar15;
      uVar8 = uStack_6c ^ uVar8;
      *param_2 = (char)uVar15;
      param_2[1] = (char)(uVar15 >> 8);
      param_2[2] = (char)(uVar15 >> 0x10);
      param_2[3] = (char)(uVar15 >> 0x18);
      param_2[4] = (char)uVar8;
      param_2[5] = (char)(uVar8 >> 8);
      param_2[6] = (char)(uVar8 >> 0x10);
      param_2[7] = (char)(uVar8 >> 0x18);
      param_3 = param_3 - 8;
      bVar3 = 7 < param_3;
      uVar15 = uVar14;
      uVar8 = uVar16;
      param_7 = puStack_80;
      uVar2 = uStack_78;
      param_2 = param_2 + 8;
      uVar1 = uStack_78;
    }
    uVar16 = uVar15;
    uVar14 = uVar8;
    if (param_3 != 0) {
      uVar16 = *param_1;
      uVar14 = param_1[1];
      puVar4 = &uStack_70;
      uVar2 = uStack_78;
      uStack_78 = uVar1;
      uStack_70 = uVar16;
      uStack_6c = uVar14;
      FUN_10ae26714(puVar4,uVar2,param_5,param_6);
      uVar15 = uStack_70 ^ uVar15;
      param_2 = param_2 + param_3;
      if ((long)param_3 < 4) {
        if (param_3 != 1) {
          if (param_3 != 2) goto LAB_10ae27e70;
          goto LAB_10ae27e78;
        }
      }
      else {
        uVar8 = uStack_6c ^ uVar8;
        if ((long)param_3 < 6) {
          if (param_3 != 4) goto LAB_10ae27e64;
        }
        else {
          if (param_3 != 6) {
            param_2 = param_2 + -1;
            *param_2 = (char)(uVar8 >> 0x10);
          }
          param_2 = param_2 + -1;
          *param_2 = (char)(uVar8 >> 8);
LAB_10ae27e64:
          param_2 = param_2 + -1;
          *param_2 = (char)uVar8;
        }
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar15 >> 0x18);
LAB_10ae27e70:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar15 >> 0x10);
LAB_10ae27e78:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar15 >> 8);
      }
      param_2[-1] = (char)uVar15;
      uVar1 = uStack_78;
    }
    uStack_78 = uVar1;
    *(char *)param_7 = (char)uVar16;
    *(char *)((long)param_7 + 1) = (char)(uVar16 >> 8);
    *(char *)((long)param_7 + 2) = (char)(uVar16 >> 0x10);
    *(char *)((long)param_7 + 3) = (char)(uVar16 >> 0x18);
    *(char *)(param_7 + 1) = (char)uVar14;
    *(char *)((long)param_7 + 5) = (char)(uVar14 >> 8);
    *(char *)((long)param_7 + 6) = (char)(uVar14 >> 0x10);
    goto LAB_10ae27ec0;
  }
  while (bVar3) {
    uStack_70 = *param_1 ^ uVar15;
    uStack_6c = param_1[1] ^ uVar14;
    puVar4 = &uStack_70;
    FUN_10ae257e4(puVar4,param_4,param_5,param_6);
    *param_2 = (char)uStack_70;
    param_2[1] = (char)(uStack_70 >> 8);
    param_2[2] = (char)(uStack_70 >> 0x10);
    param_2[3] = (char)(uStack_70 >> 0x18);
    param_2[4] = (char)uStack_6c;
    param_2[5] = (char)(uStack_6c >> 8);
    param_2[6] = (char)(uStack_6c >> 0x10);
    param_2[7] = (char)(uStack_6c >> 0x18);
    param_3 = param_3 - 8;
    bVar3 = 7 < param_3;
    uVar15 = uStack_70;
    uVar14 = uStack_6c;
    param_2 = param_2 + 8;
    param_1 = param_1 + 2;
  }
  if (param_3 == 0) {
    uVar5 = (undefined1)(uVar15 >> 8);
    uVar7 = (undefined1)(uVar15 >> 0x10);
    uVar10 = (undefined1)(uVar15 >> 0x18);
    uVar12 = (undefined1)(uVar14 >> 8);
    uVar13 = (undefined1)(uVar14 >> 0x10);
  }
  else {
    uVar8 = 0;
    pbVar6 = (byte *)((long)param_1 + param_3);
    if ((long)param_3 < 4) {
      uStack_6c = 0;
      if (param_3 != 1) {
        if (param_3 != 2) goto LAB_10ae27da4;
        goto LAB_10ae27dac;
      }
    }
    else {
      if ((long)param_3 < 6) {
        uStack_6c = uVar8;
        if (param_3 != 4) goto LAB_10ae27d90;
      }
      else {
        if (param_3 != 6) {
          pbVar6 = pbVar6 + -1;
          uVar8 = (uint)*pbVar6 << 0x10;
        }
        pbVar6 = pbVar6 + -1;
        uVar8 = uVar8 | (uint)*pbVar6 << 8;
LAB_10ae27d90:
        pbVar6 = pbVar6 + -1;
        uStack_6c = uVar8 | *pbVar6;
      }
      pbVar6 = pbVar6 + -1;
      uVar8 = (uint)*pbVar6 << 0x18;
LAB_10ae27da4:
      pbVar6 = pbVar6 + -1;
      uVar8 = uVar8 | (uint)*pbVar6 << 0x10;
LAB_10ae27dac:
      pbVar6 = pbVar6 + -1;
      uVar8 = uVar8 | (uint)*pbVar6 << 8;
    }
    uStack_70 = (uVar8 | pbVar6[-1]) ^ uVar15;
    uStack_6c = uStack_6c ^ uVar14;
    puVar4 = &uStack_70;
    FUN_10ae257e4(puVar4,param_4,param_5,param_6);
    *param_2 = (char)uStack_70;
    uVar5 = (undefined1)(uStack_70 >> 8);
    param_2[1] = uVar5;
    uVar7 = (undefined1)(uStack_70 >> 0x10);
    param_2[2] = uVar7;
    uVar10 = (undefined1)(uStack_70 >> 0x18);
    param_2[3] = uVar10;
    param_2[4] = (char)uStack_6c;
    uVar12 = (undefined1)(uStack_6c >> 8);
    param_2[5] = uVar12;
    uVar13 = (undefined1)(uStack_6c >> 0x10);
    param_2[6] = uVar13;
    param_2[7] = (char)(uStack_6c >> 0x18);
    uVar15 = uStack_70;
    uVar14 = uStack_6c;
  }
  *(char *)param_7 = (char)uVar15;
  *(undefined1 *)((long)param_7 + 1) = uVar5;
  *(undefined1 *)((long)param_7 + 2) = uVar7;
  *(undefined1 *)((long)param_7 + 3) = uVar10;
  *(char *)(param_7 + 1) = (char)uVar14;
  *(undefined1 *)((long)param_7 + 5) = uVar12;
  *(undefined1 *)((long)param_7 + 6) = uVar13;
LAB_10ae27ec0:
  *(char *)((long)param_7 + 7) = (char)(uVar14 >> 0x18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_10ae27f00;
  puStack_90 = &stack0xfffffffffffffff0;
  if (puVar4[4] == 0) {
    uStack_a0 = *(undefined8 *)(puVar4 + 6);
    uStack_98 = (ulong)(puVar4[5] & ((int)puVar4[5] >> 0x1f ^ 0xffffffffU));
    FUN_10ae27f74(&uStack_a0);
  }
  else {
    ppuVar9 = &PTR_FUN_110c7c3c0;
    lVar11 = 0x12;
    do {
      if (*(uint *)(ppuVar9 + -1) == puVar4[4]) {
                    /* WARNING: Could not recover jumptable at 0x00010ae27f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*ppuVar9)();
        return;
      }
      ppuVar9 = ppuVar9 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



/* Entry: 10ae27f00; end: 10ae27f73;  */

void FUN_10ae27f00(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uStack_20;
  ulong uStack_18;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uStack_20 = *(undefined8 *)(param_1 + 0x18);
    uStack_18 = (ulong)(*(uint *)(param_1 + 0x14) &
                       ((int)*(uint *)(param_1 + 0x14) >> 0x1f ^ 0xffffffffU));
    FUN_10ae27f74(&uStack_20);
  }
  else {
    ppuVar1 = &PTR_FUN_110c7c3c0;
    lVar2 = 0x12;
    do {
      if (*(int *)(ppuVar1 + -1) == *(int *)(param_1 + 0x10)) {
                    /* WARNING: Could not recover jumptable at 0x00010ae27f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*ppuVar1)();
        return;
      }
      ppuVar1 = ppuVar1 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 10ae27f74; end: 10ae2801f;  */

code * FUN_10ae27f74(undefined8 *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined **ppuVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = param_1[1];
  puVar3 = &UNK_10e521028;
  lVar5 = 7;
  do {
    if (uVar4 == (byte)puVar3[9]) {
      if (puVar3[9] == 0) {
LAB_10ae27fcc:
        if (*(int *)(puVar3 + 0xc) == 0) {
          return (code *)0x0;
        }
        ppuVar2 = &PTR_FUN_110c7c3c0;
        lVar5 = 0x12;
        do {
          if (*(int *)(ppuVar2 + -1) == *(int *)(puVar3 + 0xc)) {
            UNRECOVERED_JUMPTABLE = (code *)*ppuVar2;
                    /* WARNING: Could not recover jumptable at 0x00010ae2801c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)();
            return UNRECOVERED_JUMPTABLE;
          }
          ppuVar2 = ppuVar2 + 4;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        return (code *)0x0;
      }
      uVar1 = *param_1;
      _memcmp(uVar1,puVar3,uVar4);
      if ((int)uVar1 == 0) goto LAB_10ae27fcc;
    }
    puVar3 = puVar3 + 0x10;
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      return (code *)0x0;
    }
  } while( true );
}



/* Entry: 10ae28020; end: 10ae2810f;  */

undefined1 * FUN_10ae28020(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  long lStack_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [8];
  long lStack_28;
  
  func_0x000107c34f50(param_1,auStack_30,0x20000010,1);
  if ((int)param_1 != 0) {
    puVar1 = auStack_30;
    func_0x000107c34f50(puVar1,auStack_40,6,1);
    if ((int)puVar1 != 0) {
      puVar1 = auStack_40;
      FUN_10ae27f74();
      if (puVar1 == (undefined1 *)0x0) {
        func_0x000107c2b29c(0x1d,0,0x66,&UNK_10f6c57b2,0xb2);
        return (undefined1 *)0x0;
      }
      if (lStack_28 == 0) {
        return puVar1;
      }
      puVar2 = auStack_30;
      func_0x000107c34f50(puVar2,auStack_50,5,1);
      if ((((int)puVar2 != 0) && (lStack_48 == 0)) && (lStack_28 == 0)) {
        return puVar1;
      }
      uVar3 = 0xbf;
      goto LAB_10ae280d4;
    }
  }
  uVar3 = 0xac;
LAB_10ae280d4:
  func_0x000107c2b29c(0x1d,0,0x65,&UNK_10f6c57b2,uVar3);
  return (undefined1 *)0x0;
}



/* Entry: 10ae28110; end: 10ae2818b;  */

code * FUN_10ae28110(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined **ppuVar3;
  long lVar4;
  
  ppuVar3 = &PTR_DAT_110c7c3d0;
  lVar4 = 0x12;
  while( true ) {
    puVar1 = ppuVar3[-1];
    puVar2 = *ppuVar3;
    if (((puVar1 != (undefined *)0x0) && (_strcmp(puVar1,param_1), (int)puVar1 == 0)) ||
       ((puVar2 != (undefined *)0x0 && (_strcmp(puVar2,param_1), (int)puVar2 == 0)))) break;
    ppuVar3 = ppuVar3 + 4;
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) {
      return (code *)0x0;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)ppuVar3[-2];
                    /* WARNING: Could not recover jumptable at 0x00010ae28188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return UNRECOVERED_JUMPTABLE;
}



/* Entry: 10ae2818c; end: 10ae282df;  */

long * FUN_10ae2818c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  puVar1 = (undefined8 *)0x128;
  _malloc();
  if (puVar1 == (undefined8 *)0x0) {
    func_0x000107c2b29c(10,0,0x41,&UNK_10f6c59ae,0x5c);
    plVar3 = (long *)0x0;
  }
  else {
    *puVar1 = 0x120;
    plVar3 = puVar1 + 1;
    puVar1[2] = 0;
    *plVar3 = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[9] = 0;
    puVar1[0xc] = 0;
    puVar1[0xb] = 0;
    puVar1[0xe] = 0;
    puVar1[0xd] = 0;
    puVar1[0x10] = 0;
    puVar1[0xf] = 0;
    puVar1[0x12] = 0;
    puVar1[0x11] = 0;
    puVar1[0x14] = 0;
    puVar1[0x13] = 0;
    puVar1[0x16] = 0;
    puVar1[0x15] = 0;
    puVar1[0x18] = 0;
    puVar1[0x17] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x20] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x22] = 0;
    puVar1[0x21] = 0;
    puVar1[0x24] = 0;
    puVar1[0x23] = 0;
    *(undefined4 *)(puVar1 + 0x23) = 1;
    puVar2 = puVar1 + 8;
    _pthread_rwlock_init(puVar2,0);
    if ((int)puVar2 != 0) {
      _abort();
      plVar3 = (long *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        plVar3 = puVar2 + 0x22;
        func_0x000107c2b58c();
        if ((int)plVar3 != 0) {
          func_0x000107c2b2ec(0x1133107f0,puVar2,puVar2 + 0x23);
          func_0x000107c2b31c(puVar2[1]);
          func_0x000107c2b31c(puVar2[2]);
          func_0x000107c2b31c(puVar2[3]);
          func_0x000107c2b31c(puVar2[4]);
          func_0x000107c2b31c(puVar2[5]);
          func_0x000107c2b384(puVar2[0x20]);
          func_0x000107c2b384(puVar2[0x21]);
          _pthread_rwlock_destroy(puVar2 + 7);
          if (puVar2 != (undefined8 *)0x0) {
            plVar3 = puVar2 + -1;
            if (*plVar3 + 8 != 0) {
              func_0x000107c60ee4(plVar3,*plVar3 + 8);
            }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__free_11034c310)(plVar3);
            return plVar3;
          }
          return (long *)0x0;
        }
      }
      return plVar3;
    }
    puVar1[0x24] = 0;
  }
  return plVar3;
}



/* Entry: 10ae282e0; end: 10ae2837b;  */

undefined4 FUN_10ae282e0(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x000107c2b32c();
  uVar3 = (ulong)(iVar2 + 7U >> 3);
  if (iVar2 + 7U < 0x3f8) {
    lVar5 = 1;
  }
  else {
    lVar5 = 1;
    uVar6 = uVar3 + 1;
    do {
      lVar5 = lVar5 + 1;
      bVar1 = 0xff < uVar6;
      uVar6 = uVar6 >> 8;
    } while (bVar1);
  }
  uVar4 = 0;
  uVar6 = uVar3 + lVar5 + 2;
  if ((uVar3 <= uVar6) && (-1 < (long)uVar6)) {
    uVar3 = uVar6 * 2;
    if (uVar6 < 0x40) {
      lVar5 = 1;
    }
    else {
      lVar5 = 1;
      uVar6 = uVar3;
      do {
        lVar5 = lVar5 + 1;
        bVar1 = 0xff < uVar6;
        uVar6 = uVar6 >> 8;
      } while (bVar1);
    }
    uVar6 = lVar5 + uVar3 + 1;
    uVar4 = 0;
    if (uVar3 <= uVar6) {
      uVar4 = (undefined4)uVar6;
    }
  }
  return uVar4;
}



/* Entry: 10ae2837c; end: 10ae28507;  */

undefined8 FUN_10ae2837c(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  
  plVar9 = *(long **)(param_1 + 8);
  if (((plVar9 == (long *)0x0) || (plVar2 = *(long **)(param_1 + 0x10), plVar2 == (long *)0x0)) ||
     (plVar5 = *(long **)(param_1 + 0x18), plVar5 == (long *)0x0)) {
    uVar3 = 0x65;
    uVar4 = 0x4b;
  }
  else {
    lVar7 = (long)(int)plVar9[1];
    if ((int)plVar9[1] != 0) {
      uVar8 = 0;
      puVar6 = (ulong *)*plVar9;
      do {
        uVar8 = *puVar6 | uVar8;
        lVar7 = lVar7 + -1;
        puVar6 = puVar6 + 1;
      } while (lVar7 != 0);
      if ((uVar8 != 0) && (lVar7 = (long)(int)plVar2[1], (int)plVar2[1] != 0)) {
        uVar8 = 0;
        puVar6 = (ulong *)*plVar2;
        do {
          uVar8 = *puVar6 | uVar8;
          lVar7 = lVar7 + -1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
        if ((uVar8 != 0) && (lVar7 = (long)(int)plVar5[1], (int)plVar5[1] != 0)) {
          uVar8 = 0;
          puVar6 = (ulong *)*plVar5;
          do {
            uVar8 = *puVar6 | uVar8;
            lVar7 = lVar7 + -1;
            puVar6 = puVar6 + 1;
          } while (lVar7 != 0);
          if (uVar8 != 0) {
            func_0x000107c2b32c();
            iVar1 = (int)plVar2;
            if (((iVar1 == 0xa0) || (iVar1 == 0xe0)) || (iVar1 == 0x100)) {
              func_0x000107c2b32c();
              if ((uint)plVar9 < 0x2711) {
                return 1;
              }
              uVar3 = 0x66;
              uVar4 = 0x60;
            }
            else {
              uVar3 = 100;
              uVar4 = 0x59;
            }
            goto LAB_10ae28490;
          }
        }
      }
    }
    uVar3 = 0x6b;
    uVar4 = 0x52;
  }
LAB_10ae28490:
  func_0x000107c2b29c(10,0,uVar3,&UNK_10f6c5a1e,uVar4);
  return 0;
}



/* Entry: 10ae28508; end: 10ae2853b;  */

undefined8 FUN_10ae28508(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [32];
  int iVar2;
  
  if (param_2 == 0) {
    func_0x000107c2b29c(10,0,0x43,&UNK_10f6c5a1e,0x73);
    return 0;
  }
  iVar1 = (int)auStack_40;
  iVar2 = (int)auStack_40;
  if (*(int *)(param_2 + 0x10) == 0) {
    uVar4 = param_1;
    func_0x000107c2b214(param_1,auStack_40,2);
    if (((int)uVar4 != 0) &&
       ((uVar3 = param_2, func_0x000107c2b32c(), (uVar3 & 7) != 0 ||
        (func_0x000107c2b218(auStack_40,0), iVar1 != 0)))) {
      uVar3 = param_2;
      func_0x000107c2b32c(param_2);
      func_0x00010ae1ee20(auStack_40,(int)uVar3 + 7U >> 3,param_2);
      if ((iVar2 != 0) && (func_0x000107c2b20c(), (int)param_1 != 0)) {
        return 1;
      }
    }
    uVar4 = 0x76;
    uVar5 = 0x34;
  }
  else {
    uVar4 = 0x6d;
    uVar5 = 0x29;
  }
  func_0x000107c2b29c(3,0,uVar4,&UNK_10f6c53c2,uVar5);
  return 0;
}



/* Entry: 10ae2853c; end: 10ae2881f;  */

long FUN_10ae2853c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  puVar3 = auStack_30;
  puVar4 = auStack_30;
  iVar1 = (int)auStack_30;
  lVar2 = param_1;
  FUN_10ae2818c();
  if (lVar2 == 0) {
    return 0;
  }
  func_0x000107c34f50(param_1,auStack_30,0x20000010,1);
  if ((int)param_1 != 0) {
    func_0x000107c2b318();
    *(long *)(lVar2 + 8) = param_1;
    if ((param_1 != 0) && (func_0x000107c2b1e8(auStack_30,param_1), (int)puVar3 != 0)) {
      func_0x000107c2b318();
      *(undefined1 **)(lVar2 + 0x10) = puVar3;
      if ((puVar3 != (undefined1 *)0x0) &&
         (func_0x000107c2b1e8(auStack_30,puVar3), (int)puVar4 != 0)) {
        func_0x000107c2b318();
        *(undefined1 **)(lVar2 + 0x18) = puVar4;
        if (((puVar4 != (undefined1 *)0x0) && (func_0x000107c2b1e8(auStack_30,puVar4), iVar1 != 0))
           && (lStack_28 == 0)) {
          lVar5 = lVar2;
          FUN_10ae2837c();
          if ((int)lVar5 != 0) {
            return lVar2;
          }
          goto LAB_10ae28600;
        }
      }
    }
  }
  func_0x000107c2b29c(10,0,0x69,&UNK_10f6c5a1e,200);
LAB_10ae28600:
  func_0x00010ae28250(lVar2);
  return 0;
}



/* Entry: 10ae28820; end: 10ae28b47;  */

long FUN_10ae28820(undefined8 param_1,undefined1 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  byte *pbStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  func_0x000107c34f50(param_1,auStack_50,0x20000010,1);
  if ((int)param_1 == 0) {
LAB_10ae28900:
    func_0x000107c2b29c(0xf,0,0x80,&UNK_10f6c5a93,0x52);
    return 0;
  }
  puVar8 = auStack_50;
  FUN_10ae200fc(puVar8,&lStack_68);
  if (((int)puVar8 == 0) || (lStack_68 != 1)) goto LAB_10ae28900;
  puVar8 = auStack_50;
  func_0x000107c34f50(puVar8,&lStack_60,4,1);
  if ((int)puVar8 == 0) goto LAB_10ae28900;
  puVar8 = auStack_50;
  func_0x000107c2b234(puVar8,0xa0000000);
  if ((int)puVar8 == 0) {
    if (param_2 == (undefined1 *)0x0) {
      func_0x000107c2b29c(0xf,0,0x72,&UNK_10f6c5a93,0x76);
      puVar8 = (undefined1 *)0x0;
      lVar9 = 0;
    }
    else {
      puVar8 = (undefined1 *)0x0;
LAB_10ae28948:
      lVar9 = 0;
      func_0x000107c2b470();
      if ((lVar9 != 0) && (lVar10 = lVar9, FUN_10ae36348(lVar9,param_2), (int)lVar10 != 0)) {
        lVar10 = lStack_60;
        func_0x000107c2b338(lStack_60,uStack_58,0);
        puVar4 = param_2;
        func_0x000107c2b454();
        *(undefined1 **)(lVar9 + 8) = puVar4;
        if ((lVar10 == 0) ||
           ((puVar4 == (undefined1 *)0x0 ||
            (lVar5 = lVar9, func_0x000107c2b47c(lVar9,lVar10), (int)lVar5 == 0))))
        goto LAB_10ae28a80;
        puVar4 = auStack_50;
        func_0x000107c2b234(puVar4,0xa0000001);
        if ((int)puVar4 == 0) {
          func_0x000107c2b46c(param_2,*(long *)(lVar9 + 8) + 8,*(long *)(lVar9 + 0x10) + 0x18);
          if ((int)param_2 == 0) goto LAB_10ae28a80;
          *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) | 2;
LAB_10ae28b00:
          if (lStack_48 == 0) {
            lVar5 = lVar9;
            func_0x000107c2b480();
            if ((int)lVar5 != 0) {
              func_0x000107c2b31c(lVar10);
              func_0x000107c2b448(puVar8);
              return lVar9;
            }
            goto LAB_10ae28a80;
          }
          uVar6 = 0xac;
        }
        else {
          puVar4 = auStack_50;
          func_0x000107c34f50(puVar4,auStack_78,0xa0000001,1);
          if ((int)puVar4 != 0) {
            puVar4 = auStack_78;
            func_0x000107c34f50(puVar4,&pbStack_88,3,1);
            if (((int)puVar4 != 0) && (lStack_80 != 0)) {
              pbVar1 = pbStack_88 + 1;
              lStack_80 = lStack_80 + -1;
              bVar2 = *pbStack_88;
              pbStack_88 = pbVar1;
              if ((bVar2 == 0) &&
                 (((lStack_80 != 0 &&
                   (func_0x000107c2b488(param_2,*(undefined8 *)(lVar9 + 8),pbVar1,lStack_80,0),
                   (int)param_2 != 0)) && (lStack_70 == 0)))) {
                *(uint *)(lVar9 + 0x1c) = *pbStack_88 & 0xfe;
                goto LAB_10ae28b00;
              }
            }
          }
          uVar6 = 0x98;
        }
        func_0x000107c2b29c(0xf,0,0x80,&UNK_10f6c5a93,uVar6);
        goto LAB_10ae28a80;
      }
    }
  }
  else {
    puVar8 = auStack_50;
    func_0x000107c34f50(puVar8,auStack_78,0xa0000000,1);
    if ((int)puVar8 == 0) {
      func_0x000107c2b29c(0xf,0,0x80,&UNK_10f6c5a93,0x61);
      puVar8 = (undefined1 *)0x0;
    }
    else {
      puVar8 = auStack_78;
      FUN_10ae28b48();
      if (puVar8 != (undefined1 *)0x0) {
        puVar4 = puVar8;
        if ((param_2 == (undefined1 *)0x0) ||
           (puVar3 = param_2, func_0x000107c2b434(param_2,puVar8,0), puVar4 = param_2,
           (int)puVar3 == 0)) {
          param_2 = puVar4;
          if (lStack_70 == 0) goto LAB_10ae28948;
          uVar6 = 0x80;
          uVar7 = 0x70;
        }
        else {
          uVar6 = 0x82;
          uVar7 = 0x6c;
        }
        func_0x000107c2b29c(0xf,0,uVar6,&UNK_10f6c5a93,uVar7);
      }
    }
    lVar9 = 0;
  }
  lVar10 = 0;
LAB_10ae28a80:
  func_0x000107c2b478(lVar9);
  func_0x000107c2b31c(lVar10);
  func_0x000107c2b448(puVar8);
  return 0;
}



/* Entry: 10ae28b48; end: 10ae28ed3;  */

void FUN_10ae28b48(long param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  char **ppcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  byte *pbVar12;
  long lVar13;
  ulong unaff_x27;
  undefined8 unaff_x28;
  undefined1 auStack_110 [16];
  char *pcStack_100;
  ulong uStack_f8;
  char *pcStack_f0;
  ulong uStack_e8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  long lStack_b0;
  int iStack_a4;
  char *pcStack_a0;
  long lStack_98;
  char *pcStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  int *piStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  iVar3 = (int)auStack_110;
  lVar13 = param_1;
  func_0x000107c2b234(param_1,0x20000010);
  if ((int)lVar13 == 0) {
    func_0x000107c34f50(param_1,&stack0xffffffffffffffc0,6,1);
    if ((int)param_1 == 0) {
      uVar7 = 0x80;
      uVar8 = 0x147;
    }
    else {
      func_0x000107c2b444();
      pbVar12 = (byte *)(param_1 + 0x10);
      lVar13 = 4;
      do {
        if ((unaff_x27 == *pbVar12) &&
           ((*pbVar12 == 0 ||
            (uVar7 = unaff_x28, _memcmp(unaff_x28,*(undefined8 *)(pbVar12 + -8),unaff_x27),
            (int)uVar7 == 0)))) {
          func_0x000107c2b44c(*(undefined4 *)(pbVar12 + -0x10));
          return;
        }
        pbVar12 = pbVar12 + 0x38;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      uVar7 = 0x7b;
      uVar8 = 0x156;
    }
    func_0x000107c2b29c(0xf,0,uVar7,&UNK_10f6c5a93,uVar8);
    return;
  }
  func_0x000107c34f50(param_1,auStack_50,0x20000010,1);
  if ((int)param_1 != 0) {
    puVar5 = auStack_50;
    FUN_10ae200fc(puVar5,&lStack_b0);
    if (((int)puVar5 != 0) && (lStack_b0 == 1)) {
      puVar5 = auStack_50;
      func_0x000107c34f50(puVar5,auStack_60,0x20000010,1);
      if ((int)puVar5 != 0) {
        puVar5 = auStack_60;
        func_0x000107c34f50(puVar5,&piStack_70,6,1);
        if ((((int)puVar5 != 0) && (lStack_68 == 7)) &&
           (*piStack_70 == -0x31b779d6 && *(int *)((long)piStack_70 + 3) == 0x1013dce)) {
          puVar5 = auStack_60;
          func_0x000107c34f50(puVar5,auStack_c0,2,1);
          if ((int)puVar5 != 0) {
            iVar4 = (int)auStack_c0;
            FUN_10ae2019c();
            if ((iVar4 != 0) && (lStack_58 == 0)) {
              puVar5 = auStack_50;
              func_0x000107c34f50(puVar5,auStack_80,0x20000010,1);
              if ((int)puVar5 != 0) {
                puVar5 = auStack_80;
                func_0x000107c34f50(puVar5,auStack_d0,4,1);
                if ((int)puVar5 != 0) {
                  puVar5 = auStack_80;
                  func_0x000107c34f50(puVar5,auStack_e0,4,1);
                  if ((int)puVar5 != 0) {
                    puVar5 = auStack_80;
                    func_0x000107c2b238(puVar5,0,0,3);
                    if (((int)puVar5 != 0) && (lStack_78 == 0)) {
                      puVar5 = auStack_50;
                      func_0x000107c34f50(puVar5,&pcStack_90,4,1);
                      if ((int)puVar5 != 0) {
                        puVar5 = auStack_50;
                        func_0x000107c34f50(puVar5,auStack_110,2,1);
                        if (((int)puVar5 != 0) && (FUN_10ae2019c(), iVar3 != 0)) {
                          puVar5 = auStack_50;
                          func_0x000107c2b238(puVar5,&pcStack_a0,&iStack_a4,2);
                          if (((int)puVar5 != 0) && (lStack_48 == 0)) {
                            if ((iStack_a4 == 0) || ((lStack_98 == 1 && (*pcStack_a0 == '\x01')))) {
                              if (uStack_88 != 0) {
                                pcVar1 = pcStack_90 + 1;
                                uStack_88 = uStack_88 - 1;
                                cVar2 = *pcStack_90;
                                pcStack_90 = pcVar1;
                                if (cVar2 == '\x04') {
                                  if ((uStack_88 & 1) == 0) {
                                    uStack_f8 = uStack_88 >> 1;
                                    pcStack_100 = pcVar1 + (uStack_88 >> 1);
                                    pcStack_f0 = pcVar1;
                                    uStack_e8 = uStack_f8;
                                    func_0x000107c2b444();
                                    plVar11 = (long *)(puVar5 + 0x28);
                                    lVar13 = 4;
                                    do {
                                      uVar9 = (ulong)*(byte *)(plVar11 + -1);
                                      lVar10 = *plVar11;
                                      puVar5 = auStack_c0;
                                      FUN_10ae29180(puVar5,lVar10,uVar9);
                                      if ((int)puVar5 != 0) {
                                        puVar5 = auStack_d0;
                                        FUN_10ae29180(puVar5,lVar10 + uVar9,uVar9);
                                        if ((int)puVar5 != 0) {
                                          puVar5 = auStack_e0;
                                          FUN_10ae29180(puVar5,lVar10 + uVar9 * 2,uVar9);
                                          if ((int)puVar5 != 0) {
                                            ppcVar6 = &pcStack_f0;
                                            FUN_10ae29180(ppcVar6,lVar10 + uVar9 * 3,uVar9);
                                            if ((int)ppcVar6 != 0) {
                                              ppcVar6 = &pcStack_100;
                                              FUN_10ae29180(ppcVar6,lVar10 + uVar9 * 4,uVar9);
                                              if (((int)ppcVar6 != 0) &&
                                                 (iVar3 = (int)auStack_110,
                                                 FUN_10ae29180(auStack_110,lVar10 + uVar9 * 5,uVar9)
                                                 , iVar3 != 0)) {
                                                func_0x000107c2b44c((int)plVar11[-5]);
                                                return;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      plVar11 = plVar11 + 7;
                                      lVar13 = lVar13 + -1;
                                    } while (lVar13 != 0);
                                    uVar7 = 0x7b;
                                    uVar8 = 0x193;
                                  }
                                  else {
                                    uVar7 = 0x80;
                                    uVar8 = 299;
                                  }
                                  goto LAB_10ae28c2c;
                                }
                              }
                              uVar7 = 0x6f;
                              uVar8 = 0x126;
                            }
                            else {
                              uVar7 = 0x7b;
                              uVar8 = 0x11e;
                            }
                            goto LAB_10ae28c2c;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar7 = 0x80;
  uVar8 = 0x116;
LAB_10ae28c2c:
  func_0x000107c2b29c(0xf,0,uVar7,&UNK_10f6c5a93,uVar8);
  return;
}



/* Entry: 10ae28ed4; end: 10ae2917f;  */

undefined8 FUN_10ae28ed4(undefined8 param_1,long *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  iVar3 = (int)auStack_b0;
  iVar1 = (int)auStack_b0;
  if (((param_2 == (long *)0x0) || (*param_2 == 0)) || (param_2[2] == 0)) {
    uVar6 = 0x43;
    uVar7 = 0xc3;
    goto LAB_10ae2904c;
  }
  uVar6 = param_1;
  func_0x000107c2b214(param_1,auStack_50,0x20000010);
  if ((int)uVar6 != 0) {
    puVar4 = auStack_50;
    FUN_10ae1fb3c(puVar4,1);
    if ((int)puVar4 != 0) {
      puVar4 = auStack_50;
      func_0x000107c2b214(puVar4,auStack_70,4);
      if ((int)puVar4 != 0) {
        lVar5 = *param_2 + 0x10;
        func_0x000107c2b32c(lVar5);
        puVar4 = auStack_70;
        func_0x00010ae1ee20(puVar4,(int)lVar5 + 7U >> 3,param_2[2]);
        if ((int)puVar4 != 0) {
          if ((param_3 & 1) == 0) {
            puVar4 = auStack_50;
            func_0x000107c2b214(puVar4,auStack_90,0xa0000000);
            if ((int)puVar4 != 0) {
              puVar4 = auStack_90;
              func_0x000107c2b27c(puVar4,*param_2);
              if ((int)puVar4 != 0) {
                iVar2 = (int)auStack_50;
                func_0x000107c2b20c();
                if (iVar2 != 0) goto LAB_10ae28f98;
              }
            }
            uVar6 = 0x81;
            uVar7 = 0xd7;
            goto LAB_10ae2904c;
          }
LAB_10ae28f98:
          if (((param_3 >> 1 & 1) == 0) && (param_2[1] != 0)) {
            puVar4 = auStack_50;
            func_0x000107c2b214(puVar4,auStack_90,0xa0000001);
            if ((int)puVar4 != 0) {
              puVar4 = auStack_90;
              func_0x000107c2b214(puVar4,auStack_b0,3);
              if ((((int)puVar4 != 0) && (func_0x000107c2b218(auStack_b0,0), iVar3 != 0)) &&
                 (func_0x000107c2b280(auStack_b0,*param_2,param_2[1],
                                      *(undefined4 *)((long)param_2 + 0x1c),0), iVar1 != 0)) {
                iVar3 = (int)auStack_50;
                func_0x000107c2b20c();
                if (iVar3 != 0) goto LAB_10ae29004;
              }
            }
            uVar6 = 0x81;
            uVar7 = 0xe7;
          }
          else {
LAB_10ae29004:
            func_0x000107c2b20c();
            if ((int)param_1 != 0) {
              return 1;
            }
            uVar6 = 0x81;
            uVar7 = 0xed;
          }
          goto LAB_10ae2904c;
        }
      }
    }
  }
  uVar6 = 0x81;
  uVar7 = 0xce;
LAB_10ae2904c:
  func_0x000107c2b29c(0xf,0,uVar6,&UNK_10f6c5a93,uVar7);
  return 0;
}



/* Entry: 10ae29180; end: 10ae29207;  */

bool FUN_10ae29180(long *param_1,byte *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  
  pbVar2 = (byte *)*param_1;
  lVar4 = param_1[1];
  pbVar3 = pbVar2;
  if (lVar4 != 0) {
    pbVar1 = pbVar2 + lVar4;
    do {
      pbVar3 = pbVar2;
      if (*pbVar2 != 0) break;
      pbVar2 = pbVar2 + 1;
      lVar4 = lVar4 + -1;
      pbVar3 = pbVar1;
    } while (lVar4 != 0);
  }
  pbVar2 = param_2;
  if (param_3 != 0) {
    pbVar1 = param_2 + param_3;
    do {
      pbVar2 = param_2;
      if (*param_2 != 0) break;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
      pbVar2 = pbVar1;
    } while (param_3 != 0);
  }
  if (lVar4 != param_3) {
    return false;
  }
  if (lVar4 == 0) {
    return true;
  }
  bVar5 = 0;
  do {
    bVar5 = *pbVar2 ^ *pbVar3 | bVar5;
    lVar4 = lVar4 + -1;
    pbVar2 = pbVar2 + 1;
    pbVar3 = pbVar3 + 1;
  } while (lVar4 != 0);
  return bVar5 == 0;
}



/* Entry: 10ae29208; end: 10ae292ab;  */

undefined1 * FUN_10ae29208(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar2 = &uStack_40;
  if ((param_1 == (undefined8 *)0x0) || ((undefined8 *)*param_1 == (undefined8 *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)*param_1;
  }
  if (param_3 < 0) {
    func_0x000107c2b29c(0xf,0,0x80,&UNK_10f6c5a93,0x1ab);
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uStack_40 = *param_2;
    lStack_38 = param_3;
    FUN_10ae28820(&uStack_40,uVar1);
    if (puVar2 != (undefined8 *)0x0) {
      if (param_1 != (undefined8 *)0x0) {
        func_0x000107c2b478(*param_1);
        *param_1 = puVar2;
      }
      *param_2 = uStack_40;
    }
  }
  return (undefined1 *)puVar2;
}



/* Entry: 10ae292ac; end: 10ae29313;  */

void FUN_10ae292ac(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_40 [32];
  int iVar2;
  
  iVar1 = (int)auStack_40;
  iVar2 = (int)auStack_40;
  func_0x000107c2b200(auStack_40,0);
  if ((iVar1 == 0) ||
     (FUN_10ae28ed4(auStack_40,param_1,*(undefined4 *)(param_1 + 0x18)), iVar2 == 0)) {
    func_0x000107c2b204(auStack_40);
  }
  else {
    func_0x000107c2b1fc(auStack_40,param_2);
  }
  return;
}



/* Entry: 10ae29314; end: 10ae29433;  */

long FUN_10ae29314(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  
  if (param_1 == (long *)0x0) {
    uVar4 = 0x43;
    uVar6 = 0x20d;
LAB_10ae293c0:
    func_0x000107c2b29c(0xf,0,uVar4,&UNK_10f6c5a93,uVar6);
    lVar1 = 0;
  }
  else {
    lVar1 = *param_1;
    func_0x000107c2b484(lVar1,param_1[1],*(undefined4 *)((long)param_1 + 0x1c),0,0,0);
    if (param_2 == (long *)0x0) {
      return lVar1;
    }
    if (lVar1 == 0) {
      return 0;
    }
    plVar7 = (long *)*param_2;
    plVar5 = plVar7;
    if (plVar7 == (long *)0x0) {
      plVar2 = (long *)(lVar1 + 8);
      _malloc();
      if (plVar2 == (long *)0x0) {
        *param_2 = 0;
        uVar4 = 0x41;
        uVar6 = 0x21c;
        goto LAB_10ae293c0;
      }
      plVar5 = plVar2 + 1;
      *plVar2 = lVar1;
      *param_2 = (long)plVar5;
    }
    lVar3 = *param_1;
    func_0x000107c2b484(lVar3,param_1[1],*(undefined4 *)((long)param_1 + 0x1c),plVar5,lVar1,0);
    if (lVar3 == 0) {
      func_0x000107c2b29c(0xf,0,0xf,&UNK_10f6c5a93,0x223);
      lVar1 = 0;
      if (plVar7 == (long *)0x0) {
        func_0x000107c2b534(*param_2);
        lVar1 = 0;
        *param_2 = 0;
      }
    }
    else if (plVar7 != (long *)0x0) {
      *param_2 = *param_2 + lVar1;
    }
  }
  return lVar1;
}



/* Entry: 10ae29434; end: 10ae295e3;  */

undefined8 ***
FUN_10ae29434(undefined8 ***param_1,undefined8 ***param_2,undefined8 *param_3,undefined8 *param_4,
             code *param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 **ppuVar2;
  undefined8 ***pppuVar3;
  undefined8 *puVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined4 *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 ***unaff_x20;
  code *unaff_x21;
  undefined8 unaff_x22;
  long lVar8;
  undefined4 auStack_1e8 [2];
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined8 **ppuStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 **ppuStack_188;
  undefined4 auStack_180 [54];
  undefined8 **ppuStack_a8;
  undefined8 *apuStack_9a [8];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_4[2];
  ppuStack_a8 = param_2;
  if (lVar8 == 0) {
    uVar1 = 0x1b;
    pppuVar5 = (undefined8 ***)0x65;
    puVar7 = (undefined4 *)0x55;
LAB_10ae2953c:
    pppuVar6 = (undefined8 ***)&UNK_10f6c5b0c;
    pppuVar3 = (undefined8 ***)0x0;
    func_0x000107c2b29c(uVar1,0,pppuVar5);
    param_2 = (undefined8 ***)0xffffffff;
    param_1 = unaff_x20;
    param_5 = unaff_x21;
  }
  else {
    unaff_x22 = *param_4;
    uVar1 = unaff_x22;
    func_0x000107c2b434(unaff_x22,*param_3,0);
    unaff_x20 = param_1;
    unaff_x21 = param_5;
    if ((int)uVar1 != 0) {
      uVar1 = 0xf;
      pppuVar5 = (undefined8 ***)0x6a;
      puVar7 = (undefined4 *)0x5b;
      goto LAB_10ae2953c;
    }
    uVar1 = unaff_x22;
    func_0x000107c2b438(unaff_x22,auStack_180,param_3 + 1,lVar8 + 0x18);
    if ((int)uVar1 == 0) {
LAB_10ae29524:
      uVar1 = 0x1b;
      pppuVar5 = (undefined8 ***)0x66;
      puVar7 = (undefined4 *)0x65;
      goto LAB_10ae2953c;
    }
    pppuVar5 = &ppuStack_188;
    puVar7 = auStack_180;
    pppuVar6 = (undefined8 ***)0x42;
    uVar1 = unaff_x22;
    FUN_10ae35350(unaff_x22,apuStack_9a,pppuVar5);
    if ((int)uVar1 == 0) goto LAB_10ae29524;
    if (param_5 == (code *)0x0) {
      if (ppuStack_188 < param_2) {
        ppuStack_a8 = ppuStack_188;
        param_2 = (undefined8 ***)ppuStack_188;
      }
      pppuVar3 = (undefined8 ***)ppuStack_188;
      if (param_2 != (undefined8 ***)0x0) {
        pppuVar3 = (undefined8 ***)apuStack_9a;
        pppuVar5 = param_2;
        _memcpy(param_1,pppuVar3,param_2);
        ppuStack_188 = pppuVar3;
        goto LAB_10ae295a0;
      }
    }
    else {
      ppuVar2 = apuStack_9a;
      pppuVar6 = &ppuStack_a8;
      pppuVar5 = param_1;
      (*param_5)(ppuVar2,ppuStack_188,param_1);
      param_2 = (undefined8 ***)ppuStack_a8;
      if (ppuVar2 == (undefined8 **)0x0) {
        uVar1 = 0x1b;
        pppuVar5 = (undefined8 ***)0x64;
        puVar7 = (undefined4 *)0x6b;
        goto LAB_10ae2953c;
      }
LAB_10ae295a0:
      pppuVar3 = (undefined8 ***)ppuStack_188;
      if ((ulong)param_2 >> 0x1f != 0) {
        uVar1 = 0x1b;
        pppuVar5 = (undefined8 ***)0x45;
        puVar7 = (undefined4 *)0x77;
        goto LAB_10ae2953c;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_2;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_10ae295e4;
  uStack_1c0 = unaff_x22;
  pcStack_1b8 = param_5;
  ppuStack_1b0 = param_1;
  ppuStack_1a8 = param_2;
  puStack_1a0 = &stack0xfffffffffffffff0;
  if ((*(long *)(param_6 + 0x28) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_6 + 0x28) + 0x28),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ae29638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pppuVar3,pppuVar5,pppuVar6,puVar7,param_6);
    return pppuVar3;
  }
  FUN_10ae35bd4(pppuVar3,pppuVar5,param_6);
  if (pppuVar3 != (undefined8 ***)0x0) {
    FUN_10ae29710();
    uStack_1d8 = 0;
    puStack_1e0 = (undefined8 *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    puVar4 = (undefined8 *)0x28;
    _malloc();
    if (puVar4 != (undefined8 *)0x0) {
      puStack_1e0 = puVar4 + 1;
      *puStack_1e0 = pppuVar6;
      *puVar4 = 0x20;
      puVar4[2] = 0;
      puVar4[3] = param_6;
      uStack_1c8._0_3_ = (uint3)(ushort)uStack_1c8;
      *(undefined2 *)(puVar4 + 4) = 0;
      ppuVar2 = &puStack_1e0;
      FUN_10ae29760(ppuVar2,pppuVar3);
      if ((int)ppuVar2 != 0) {
        ppuVar2 = &puStack_1e0;
        func_0x000107c2b208(ppuVar2,0,auStack_1e8);
        if ((int)ppuVar2 != 0) {
          pppuVar5 = (undefined8 ***)0x1;
          goto LAB_10ae296ec;
        }
      }
    }
    func_0x000107c2b29c(0x1a,0,0x69,&UNK_10f6c5b8a,0x59);
    func_0x000107c2b204(&puStack_1e0);
  }
  auStack_1e8[0] = 0;
  pppuVar5 = (undefined8 ***)0x0;
LAB_10ae296ec:
  *puVar7 = auStack_1e8[0];
  func_0x00010ae35620(pppuVar3);
  return pppuVar5;
}



/* Entry: 10ae295e4; end: 10ae2970f;  */

long FUN_10ae295e4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  undefined4 auStack_58 [2];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(long *)(param_6 + 0x28) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_6 + 0x28) + 0x28),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ae29638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_5,param_6);
    return param_2;
  }
  FUN_10ae35bd4(param_2,param_3,param_6);
  if (param_2 != 0) {
    FUN_10ae29710();
    uStack_48 = 0;
    puStack_50 = (undefined8 *)0x0;
    uStack_38 = 0;
    uStack_40 = 0;
    puVar1 = (undefined8 *)0x28;
    _malloc();
    if (puVar1 != (undefined8 *)0x0) {
      puStack_50 = puVar1 + 1;
      *puStack_50 = param_4;
      *puVar1 = 0x20;
      puVar1[2] = 0;
      puVar1[3] = param_6;
      uStack_38._0_3_ = (uint3)(ushort)uStack_38;
      *(undefined2 *)(puVar1 + 4) = 0;
      ppuVar2 = &puStack_50;
      FUN_10ae29760(ppuVar2,param_2);
      if ((int)ppuVar2 != 0) {
        ppuVar2 = &puStack_50;
        func_0x000107c2b208(ppuVar2,0,auStack_58);
        if ((int)ppuVar2 != 0) {
          lVar3 = 1;
          goto LAB_10ae296ec;
        }
      }
    }
    func_0x000107c2b29c(0x1a,0,0x69,&UNK_10f6c5b8a,0x59);
    func_0x000107c2b204(&puStack_50);
  }
  auStack_58[0] = 0;
  lVar3 = 0;
LAB_10ae296ec:
  *param_5 = auStack_58[0];
  func_0x00010ae35620(param_2);
  return lVar3;
}



/* Entry: 10ae29710; end: 10ae2975f;  */

long FUN_10ae29710(long *param_1)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if ((param_1[5] == 0) || (pcVar4 = *(code **)(param_1[5] + 0x20), pcVar4 == (code *)0x0)) {
    if (*param_1 == 0) {
      return 0;
    }
    iVar3 = (int)*param_1 + 0x10;
    func_0x000107c2b32c();
    param_1 = (long *)(ulong)(iVar3 + 7U >> 3);
  }
  else {
    (*pcVar4)();
  }
  lVar7 = 1;
  uVar6 = (long)param_1 + 1U;
  if (0x7f < (long)param_1 + 1U) {
    do {
      lVar7 = lVar7 + 1;
      bVar1 = 0xff < uVar6;
      uVar6 = uVar6 >> 8;
    } while (bVar1);
  }
  lVar5 = 0;
  plVar2 = (long *)((long)param_1 + lVar7 + 2);
  if ((param_1 <= plVar2) && (-1 < (long)plVar2)) {
    uVar6 = (long)plVar2 * 2;
    if (plVar2 < (long *)0x40) {
      lVar7 = 1;
    }
    else {
      lVar7 = 1;
      uVar8 = uVar6;
      do {
        lVar7 = lVar7 + 1;
        bVar1 = 0xff < uVar8;
        uVar8 = uVar8 >> 8;
      } while (bVar1);
    }
    lVar5 = 0;
    if (uVar6 <= lVar7 + uVar6 + 1) {
      lVar5 = lVar7 + uVar6 + 1;
    }
  }
  return lVar5;
}



/* Entry: 10ae29760; end: 10ae297ef;  */

undefined8 FUN_10ae29760(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar3;
  undefined1 auStack_40 [32];
  int iVar2;
  
  iVar1 = (int)auStack_40;
  iVar2 = (int)auStack_40;
  uVar3 = param_1;
  func_0x000107c2b214(param_1,auStack_40,0x20000010);
  if (((((int)uVar3 == 0) || (FUN_10ae1ed50(auStack_40,*param_2), iVar1 == 0)) ||
      (FUN_10ae1ed50(auStack_40,param_2[1]), iVar2 == 0)) ||
     (func_0x000107c2b20c(), (int)param_1 == 0)) {
    func_0x000107c2b29c(0x1a,0,0x69,&UNK_10f6c5b8a,0xbb);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 10ae297f0; end: 10ae298d3;  */

undefined8
FUN_10ae297f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  long lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  lVar1 = param_4;
  FUN_10ae298d4(param_4,param_5);
  if (lVar1 != 0) {
    puVar2 = &uStack_48;
    FUN_10ae2993c(puVar2,&lStack_50,lVar1);
    if ((((int)puVar2 != 0) && (lStack_50 == param_5)) &&
       ((param_5 == 0 || (_memcmp(param_4,uStack_48,param_5), (int)param_4 == 0)))) {
      FUN_10ae35658(param_2,param_3,lVar1,param_6);
      goto LAB_10ae2988c;
    }
    func_0x000107c2b29c(0x1a,0,0x44,&UNK_10f6c5b8a,0x77);
  }
  param_2 = 0;
LAB_10ae2988c:
  func_0x000107c2b534(uStack_48);
  func_0x00010ae35620(lVar1);
  return param_2;
}



/* Entry: 10ae298d4; end: 10ae2993b;  */

undefined1 * FUN_10ae298d4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  lStack_28 = param_2;
  FUN_10ae29a58();
  if ((puVar1 == (undefined8 *)0x0) || (lStack_28 != 0)) {
    func_0x000107c2b29c(0x1a,0,100,&UNK_10f6c5b8a,0xae);
    func_0x00010ae35620(puVar1);
    puVar1 = (undefined8 *)0x0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10ae2993c; end: 10ae299db;  */

undefined8 FUN_10ae2993c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)&uStack_50;
  iVar2 = (int)&uStack_50;
  iVar3 = (int)&uStack_50;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  func_0x000107c2b200(&uStack_50,0);
  if (((iVar1 == 0) || (FUN_10ae29760(&uStack_50,param_3), iVar2 == 0)) ||
     (func_0x000107c2b208(&uStack_50,param_1,param_2), iVar3 == 0)) {
    func_0x000107c2b29c(0x1a,0,0x69,&UNK_10f6c5b8a,200);
    func_0x000107c2b204(&uStack_50);
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 10ae299dc; end: 10ae29a57;  */

long FUN_10ae299dc(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = 1;
  uVar2 = param_1 + 1;
  if (0x7f < param_1 + 1) {
    do {
      lVar5 = lVar5 + 1;
      bVar1 = 0xff < uVar2;
      uVar2 = uVar2 >> 8;
    } while (bVar1);
  }
  lVar3 = 0;
  uVar2 = param_1 + lVar5 + 2;
  if ((param_1 <= uVar2) && (-1 < (long)uVar2)) {
    uVar4 = uVar2 * 2;
    if (uVar2 < 0x40) {
      lVar5 = 1;
    }
    else {
      lVar5 = 1;
      uVar2 = uVar4;
      do {
        lVar5 = lVar5 + 1;
        bVar1 = 0xff < uVar2;
        uVar2 = uVar2 >> 8;
      } while (bVar1);
    }
    lVar3 = 0;
    if (uVar4 <= lVar5 + uVar4 + 1) {
      lVar3 = lVar5 + uVar4 + 1;
    }
  }
  return lVar3;
}



/* Entry: 10ae29a58; end: 10ae29af7;  */

undefined8 * FUN_10ae29a58(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar3;
  undefined1 auStack_30 [8];
  long lStack_28;
  int iVar2;
  
  iVar1 = (int)auStack_30;
  iVar2 = (int)auStack_30;
  puVar3 = param_1;
  FUN_10ae355c4();
  if ((puVar3 != (undefined8 *)0x0) &&
     ((((func_0x000107c34f50(param_1,auStack_30,0x20000010,1), (int)param_1 == 0 ||
        (func_0x000107c2b1e8(auStack_30,*puVar3), iVar1 == 0)) ||
       (func_0x000107c2b1e8(auStack_30,puVar3[1]), iVar2 == 0)) || (lStack_28 != 0)))) {
    func_0x000107c2b29c(0x1a,0,100,&UNK_10f6c5b8a,0xa2);
    func_0x00010ae35620(puVar3);
    puVar3 = (undefined8 *)0x0;
  }
  return puVar3;
}



/* Entry: 10ae29af8; end: 10ae29b13;  */

/* WARNING: Removing unreachable block (ram,0x00010ae29b90) */
/* WARNING: Removing unreachable block (ram,0x00010ae29ba0) */
/* WARNING: Removing unreachable block (ram,0x00010ae29b98) */
/* WARNING: Removing unreachable block (ram,0x00010ae29bac) */
/* WARNING: Removing unreachable block (ram,0x00010ae29b78) */
/* WARNING: Removing unreachable block (ram,0x00010ae29b8c) */
/* WARNING: Removing unreachable block (ram,0x00010ae29bb8) */
/* WARNING: Removing unreachable block (ram,0x00010ae29bf8) */
/* WARNING: Removing unreachable block (ram,0x00010ae29bc0) */
/* WARNING: Removing unreachable block (ram,0x00010ae29bc8) */
/* WARNING: Removing unreachable block (ram,0x00010ae29bd0) */
/* WARNING: Removing unreachable block (ram,0x00010ae29bd4) */
/* WARNING: Removing unreachable block (ram,0x00010ae29bdc) */
/* WARNING: Removing unreachable block (ram,0x00010ae29bec) */
/* WARNING: Removing unreachable block (ram,0x00010ae29c08) */

undefined4 FUN_10ae29af8(void)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  lVar2 = 1;
  func_0x000107c34f64();
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x184) == *(int *)(lVar2 + 0x180))) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(int *)(lVar2 + 0x184) + 1U & 0xf;
    puVar4 = (undefined8 *)(lVar2 + (ulong)uVar1 * 0x18);
    uVar3 = *(undefined4 *)(puVar4 + 2);
    func_0x000107c2b534(puVar4[1]);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *(uint *)(lVar2 + 0x184) = uVar1;
  }
  return uVar3;
}



/* Entry: 10ae29b14; end: 10ae29c43;  */

undefined4
FUN_10ae29b14(long param_1,int param_2,undefined8 *param_3,uint *param_4,long *param_5,
             undefined4 *param_6)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  lVar3 = param_1;
  func_0x000107c34f64();
  if (lVar3 == 0) {
    return 0;
  }
  if (*(uint *)(lVar3 + 0x184) == *(uint *)(lVar3 + 0x180)) {
    return 0;
  }
  uVar1 = *(uint *)(lVar3 + 0x184) + 1 & 0xf;
  if (param_2 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x180);
  }
  puVar7 = (undefined8 *)(lVar3 + (ulong)uVar1 * 0x18);
  uVar2 = *(undefined4 *)(puVar7 + 2);
  if ((param_3 != (undefined8 *)0x0) && (param_4 != (uint *)0x0)) {
    pcVar5 = (char *)*puVar7;
    if (pcVar5 == (char *)0x0) {
      uVar6 = 0;
      pcVar5 = "NA";
    }
    else {
      uVar6 = (uint)*(ushort *)((long)puVar7 + 0x14);
    }
    *param_3 = pcVar5;
    *param_4 = uVar6;
  }
  if (param_5 != (long *)0x0) {
    if (puVar7[1] != 0) {
      *param_5 = puVar7[1];
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = 1;
      }
      if ((int)param_1 == 0) {
        return uVar2;
      }
      if (puVar7[1] != 0) {
        func_0x000107c2b534(*(undefined8 *)(lVar3 + 0x188));
        *(undefined8 *)(lVar3 + 0x188) = puVar7[1];
      }
      uVar4 = 0;
      puVar7[1] = 0;
      goto LAB_10ae29c14;
    }
    *param_5 = (long)&UNK_10f6c5c7e;
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = 0;
    }
  }
  if ((int)param_1 == 0) {
    return uVar2;
  }
  uVar4 = puVar7[1];
LAB_10ae29c14:
  func_0x000107c2b534(uVar4);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *(uint *)(lVar3 + 0x184) = uVar1;
  return uVar2;
}



/* Entry: 10ae29c44; end: 10ae29c5f;  */

/* WARNING: Removing unreachable block (ram,0x00010ae29b78) */
/* WARNING: Removing unreachable block (ram,0x00010ae29bb8) */
/* WARNING: Removing unreachable block (ram,0x00010ae29bf8) */
/* WARNING: Removing unreachable block (ram,0x00010ae29bc0) */
/* WARNING: Removing unreachable block (ram,0x00010ae29bc8) */
/* WARNING: Removing unreachable block (ram,0x00010ae29bd0) */
/* WARNING: Removing unreachable block (ram,0x00010ae29bd4) */
/* WARNING: Removing unreachable block (ram,0x00010ae29bdc) */
/* WARNING: Removing unreachable block (ram,0x00010ae29bec) */
/* WARNING: Removing unreachable block (ram,0x00010ae29c08) */

undefined4 FUN_10ae29c44(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  lVar2 = 1;
  func_0x000107c34f64();
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x184) == *(int *)(lVar2 + 0x180))) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(int *)(lVar2 + 0x184) + 1U & 0xf;
    puVar6 = (undefined8 *)(lVar2 + (ulong)uVar1 * 0x18);
    uVar5 = *(undefined4 *)(puVar6 + 2);
    if ((param_1 != (undefined8 *)0x0) && (param_2 != (uint *)0x0)) {
      pcVar3 = (char *)*puVar6;
      if (pcVar3 == (char *)0x0) {
        uVar4 = 0;
        pcVar3 = "NA";
      }
      else {
        uVar4 = (uint)*(ushort *)((long)puVar6 + 0x14);
      }
      *param_1 = pcVar3;
      *param_2 = uVar4;
    }
    func_0x000107c2b534(puVar6[1]);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *(uint *)(lVar2 + 0x184) = uVar1;
  }
  return uVar5;
}



/* Entry: 10ae29c60; end: 10ae29caf;  */

undefined * FUN_10ae29c60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = (undefined *)0x1133108c8;
  _pthread_rwlock_wrlock();
  if ((int)puVar1 == 0) {
    puVar2 = (undefined *)(ulong)uRam0000000113310990;
    uRam0000000113310990 = uRam0000000113310990 + 1;
    puVar1 = (undefined *)0x1133108c8;
    _pthread_rwlock_unlock();
    if ((int)puVar1 == 0) {
      return puVar2;
    }
  }
  _abort();
  func_0x00010ae29cd4();
  puVar2 = &UNK_10f6c5c2a;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
  }
  return puVar2;
}



/* Entry: 10ae29cb0; end: 10ae29da7;  */

undefined * FUN_10ae29cb0(undefined *param_1)

{
  undefined *puVar1;
  
  func_0x00010ae29cd4();
  puVar1 = &UNK_10f6c5c2a;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  return puVar1;
}



/* Entry: 10ae29da8; end: 10ae29f1f;  */

code * FUN_10ae29da8(code *param_1,code *param_2,code *param_3)

{
  undefined *puVar1;
  code **ppcVar2;
  undefined1 *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined1 *puVar6;
  code *pcVar7;
  code *pcVar8;
  code *unaff_x20;
  code *unaff_x21;
  code *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  code *pcVar9;
  code *pcStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined1 auStack_c8 [64];
  undefined auStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (code *)0x0) {
    pcVar4 = param_1;
    pcVar7 = param_2;
    param_2 = (code *)0x0;
  }
  else {
    unaff_x22 = param_1;
    if (((uint)((ulong)param_1 >> 0x19) & 0x7f) < 0x11) {
      unaff_x23 = (&PTR_DAT_110c7c5f8)[(ulong)param_1 >> 0x18 & 0xff];
      func_0x00010ae29cd4();
    }
    else {
      func_0x00010ae29cd4();
      pcStack_e0 = (code *)((ulong)param_1 >> 0x18 & 0xff);
      unaff_x23 = auStack_88;
      func_0x000107c2b540(auStack_88,0x40,&UNK_10f6c5c38);
    }
    if (unaff_x22 == (code *)0x0) {
      pcStack_e0 = (code *)(ulong)((uint)param_1 & 0xfff);
      unaff_x22 = (code *)auStack_c8;
      func_0x000107c2b540(auStack_c8,0x40,&UNK_10f6c5c40);
    }
    pcVar7 = param_3;
    pcStack_e0 = param_1;
    puStack_d8 = unaff_x23;
    pcStack_d0 = unaff_x22;
    func_0x000107c2b540(param_2,param_3,&UNK_10f6c5c4b);
    pcVar4 = param_2;
    _strlen();
    unaff_x20 = param_3;
    unaff_x21 = param_1;
    if (((code *)0x4 < param_3) && (pcVar4 == param_3 + -1)) {
      unaff_x21 = param_2 + (long)pcVar4 + -4;
      unaff_x20 = (code *)0x4;
      pcVar4 = param_2;
      do {
        pcVar7 = (code *)0x3a;
        _strchr();
        if ((pcVar4 == (code *)0x0) || (unaff_x21 < pcVar4)) {
          pcVar7 = (code *)0x3a;
          pcVar4 = unaff_x21;
          _memset(unaff_x21,0x3a,unaff_x20);
          break;
        }
        pcVar4 = pcVar4 + 1;
        unaff_x21 = unaff_x21 + 1;
        unaff_x20 = unaff_x20 + -1;
      } while (unaff_x20 != (code *)0x0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_2;
  }
  pcVar9 = FUN_10ae29f20;
  ___stack_chk_fail();
  ppcVar2 = &pcStack_e0;
  puVar6 = (undefined1 *)register0x00000008;
  do {
    pcVar8 = pcVar7;
    pcVar5 = pcVar4;
    puVar3 = (undefined1 *)ppcVar2;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x48) = unaff_x27;
    *(undefined **)(puVar3 + -0x40) = unaff_x24;
    *(undefined **)(puVar3 + -0x38) = unaff_x23;
    *(code **)(puVar3 + -0x30) = unaff_x22;
    *(code **)(puVar3 + -0x28) = unaff_x21;
    *(code **)(puVar3 + -0x20) = unaff_x20;
    *(code **)(puVar3 + -0x18) = param_2;
    *(undefined1 **)(puVar3 + -0x10) = puVar6 + -0x10;
    *(code **)(puVar3 + -8) = pcVar9;
    *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x21 = pcVar5;
    func_0x000107c34f64();
    unaff_x23 = puVar3 + -0xd0;
    unaff_x24 = &UNK_10f6c5c7e;
    unaff_x22 = (code *)&UNK_10f6c5c6d;
    do {
      pcVar7 = (code *)0x1;
      FUN_10ae29b14(1,0,puVar3 + -0x4d8,puVar3 + -0x4e4,puVar3 + -0x4e0,puVar3 + -0x4e8);
      if ((int)pcVar7 == 0) break;
      FUN_10ae29da8();
      puVar1 = unaff_x24;
      if ((*(uint *)(puVar3 + -0x4e8) & 1) != 0) {
        puVar1 = *(undefined **)(puVar3 + -0x4e0);
      }
      *(ulong *)(puVar3 + -0x4f8) = (ulong)*(uint *)(puVar3 + -0x4e4);
      *(undefined **)(puVar3 + -0x4f0) = puVar1;
      *(undefined **)(puVar3 + -0x508) = unaff_x23;
      *(undefined8 *)(puVar3 + -0x500) = *(undefined8 *)(puVar3 + -0x4d8);
      *(code **)(puVar3 + -0x510) = unaff_x21;
      func_0x000107c2b540(puVar3 + -0x4d0,0x400,&UNK_10f6c5c6d);
      puVar6 = puVar3 + -0x4d0;
      _strlen(puVar6);
      pcVar7 = (code *)(puVar3 + -0x4d0);
      (*pcVar5)(pcVar7,puVar6,pcVar8);
    } while (0 < (int)pcVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar3 + -0x58)) {
      return pcVar7;
    }
    pcVar9 = FUN_10ae2a024;
    ___stack_chk_fail();
    ppcVar2 = (code **)(puVar3 + -0x510);
    pcVar4 = FUN_10ae2a034;
    param_2 = pcVar8;
    unaff_x20 = pcVar5;
    puVar6 = puVar3;
  } while( true );
}



/* Entry: 10ae29f20; end: 10ae2a023;  */

void FUN_10ae29f20(code *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *unaff_x19;
  code *unaff_x20;
  code *unaff_x21;
  undefined *unaff_x22;
  undefined1 *unaff_x23;
  undefined *unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    puVar4 = param_2;
    pcVar2 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(code **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x21 = pcVar2;
    func_0x000107c34f64();
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0xd0);
    unaff_x24 = &UNK_10f6c5c7e;
    unaff_x22 = &UNK_10f6c5c6d;
    do {
      param_2 = (undefined1 *)0x1;
      FUN_10ae29b14(1,0,(undefined1 *)((long)register0x00000008 + -0x4d8),
                    (undefined1 *)((long)register0x00000008 + -0x4e4),
                    (undefined1 *)((long)register0x00000008 + -0x4e0),
                    (undefined1 *)((long)register0x00000008 + -0x4e8));
      if ((int)param_2 == 0) break;
      FUN_10ae29da8();
      puVar1 = unaff_x24;
      if ((*(uint *)((long)register0x00000008 + -0x4e8) & 1) != 0) {
        puVar1 = *(undefined **)((long)register0x00000008 + -0x4e0);
      }
      *(ulong *)((long)register0x00000008 + -0x4f8) =
           (ulong)*(uint *)((long)register0x00000008 + -0x4e4);
      *(undefined **)((long)register0x00000008 + -0x4f0) = puVar1;
      *(undefined1 **)((long)register0x00000008 + -0x508) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x500) =
           *(undefined8 *)((long)register0x00000008 + -0x4d8);
      *(code **)((long)register0x00000008 + -0x510) = unaff_x21;
      func_0x000107c2b540((undefined1 *)((long)register0x00000008 + -0x4d0),0x400,&UNK_10f6c5c6d);
      puVar3 = (undefined1 *)((long)register0x00000008 + -0x4d0);
      _strlen(puVar3);
      param_2 = (undefined1 *)((long)register0x00000008 + -0x4d0);
      (*pcVar2)(param_2,puVar3,puVar4);
    } while (0 < (int)param_2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return;
    }
    unaff_x30 = FUN_10ae2a024;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x510);
    param_1 = FUN_10ae2a034;
    unaff_x19 = puVar4;
    unaff_x20 = pcVar2;
  } while( true );
}



/* Entry: 10ae2a024; end: 10ae2a033;  */

void FUN_10ae2a024(undefined1 *param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *unaff_x19;
  code *unaff_x20;
  code *unaff_x21;
  undefined *unaff_x22;
  undefined1 *unaff_x23;
  undefined *unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    puVar3 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(code **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x21 = FUN_10ae2a034;
    func_0x000107c34f64();
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0xd0);
    unaff_x24 = &UNK_10f6c5c7e;
    unaff_x22 = &UNK_10f6c5c6d;
    do {
      param_1 = (undefined1 *)0x1;
      FUN_10ae29b14(1,0,(undefined1 *)((long)register0x00000008 + -0x4d8),
                    (undefined1 *)((long)register0x00000008 + -0x4e4),
                    (undefined1 *)((long)register0x00000008 + -0x4e0),
                    (undefined1 *)((long)register0x00000008 + -0x4e8));
      if ((int)param_1 == 0) break;
      FUN_10ae29da8();
      puVar1 = unaff_x24;
      if ((*(uint *)((long)register0x00000008 + -0x4e8) & 1) != 0) {
        puVar1 = *(undefined **)((long)register0x00000008 + -0x4e0);
      }
      *(ulong *)((long)register0x00000008 + -0x4f8) =
           (ulong)*(uint *)((long)register0x00000008 + -0x4e4);
      *(undefined **)((long)register0x00000008 + -0x4f0) = puVar1;
      *(undefined1 **)((long)register0x00000008 + -0x508) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x500) =
           *(undefined8 *)((long)register0x00000008 + -0x4d8);
      *(code **)((long)register0x00000008 + -0x510) = unaff_x21;
      func_0x000107c2b540((undefined1 *)((long)register0x00000008 + -0x4d0),0x400,&UNK_10f6c5c6d);
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x4d0);
      _strlen(puVar2);
      param_1 = (undefined1 *)((long)register0x00000008 + -0x4d0);
      FUN_10ae2a034(param_1,puVar2,puVar3);
    } while (0 < (int)param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return;
    }
    unaff_x30 = FUN_10ae2a024;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x510);
    unaff_x19 = puVar3;
    unaff_x20 = FUN_10ae2a034;
  } while( true );
}



/* Entry: 10ae2a034; end: 10ae2a053;  */

uint FUN_10ae2a034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _fputs(param_1,param_3);
  return ~(uint)param_1 >> 0x1f;
}



/* Entry: 10ae2a054; end: 10ae2a0b3;  */

void FUN_10ae2a054(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x109;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x101;
    _vsnprintf(puVar1 + 1,0x100,param_1,&stack0x00000000);
    *(undefined1 *)(puVar1 + 0x21) = 0;
    func_0x000107c34f68(puVar1 + 1);
  }
  return;
}



/* Entry: 10ae2a0b4; end: 10ae2a127;  */

/* WARNING: Possible PIC construction at 0x00010ae2a0e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae2a0ec) */

void FUN_10ae2a0b4(long *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  puVar1 = &stack0xfffffffffffffff0;
  if (param_1[1] == 0) {
    func_0x000107c2b534(*param_1);
    plVar2 = param_1;
  }
  else {
    unaff_x20 = 0;
    unaff_x30 = 0x10ae2a0ec;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    plVar2 = *(long **)(*param_1 + 8);
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  if (plVar2 != (long *)0x0) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    plVar2 = plVar2 + -1;
    if (*plVar2 + 8 != 0) {
      func_0x000107c60ee4(plVar2,*plVar2 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar2);
    return;
  }
  return;
}



/* Entry: 10ae2a128; end: 10ae2a227;  */

long * FUN_10ae2a128(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  
  func_0x000107c34f64();
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x180);
    uVar3 = *(uint *)(param_1 + 0x184);
    if (uVar2 != uVar3) {
      puVar4 = (undefined8 *)0x18;
      _malloc();
      if (puVar4 != (undefined8 *)0x0) {
        plVar6 = puVar4 + 1;
        *puVar4 = 0x10;
        uVar1 = uVar2 + 0x10;
        if (uVar3 <= uVar2) {
          uVar1 = uVar2;
        }
        uVar10 = (ulong)(uVar1 - uVar3);
        lVar9 = uVar10 * 0x18;
        plVar5 = (long *)(lVar9 + 8);
        _malloc();
        if (plVar5 != (long *)0x0) {
          plVar7 = plVar5 + 1;
          *plVar5 = lVar9;
          *plVar6 = (long)plVar7;
          if (uVar1 == uVar3) {
            puVar4[2] = uVar10;
            return plVar6;
          }
          _bzero(plVar7,lVar9);
          puVar4[2] = uVar10;
          iVar8 = 1;
          do {
            FUN_10ae2a228(plVar7,param_1 + ((ulong)(uint)(iVar8 + *(int *)(param_1 + 0x184)) & 0xf)
                                           * 0x18);
            plVar7 = plVar7 + 3;
            iVar8 = iVar8 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          return plVar6;
        }
        *plVar6 = 0;
        func_0x000107c2b534(plVar6);
      }
    }
  }
  return (long *)0x0;
}



/* Entry: 10ae2a228; end: 10ae2a27b;  */

void FUN_10ae2a228(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  func_0x000107c2b534(param_1[1]);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = param_2[1];
  *param_1 = *param_2;
  if (lVar1 != 0) {
    func_0x000107c2b53c();
    param_1[1] = lVar1;
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)param_2 + 0x14);
  return;
}



/* Entry: 10ae2a27c; end: 10ae2a36f;  */

void FUN_10ae2a27c(long *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  if ((param_1 != (long *)0x0) && (param_1[1] != 0)) {
    plVar1 = param_1;
    func_0x000107c34f64();
    if (plVar1 != (long *)0x0) {
      if (param_1[1] == 0) {
        iVar2 = -1;
      }
      else {
        lVar3 = 0;
        uVar4 = 0;
        do {
          FUN_10ae2a228((long)plVar1 + lVar3,*param_1 + lVar3);
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0x18;
        } while (uVar4 < (ulong)param_1[1]);
        iVar2 = (int)param_1[1] + -1;
      }
      *(int *)(plVar1 + 0x30) = iVar2;
      *(undefined4 *)((long)plVar1 + 0x184) = 0xf;
    }
    return;
  }
  func_0x0001001e82f0();
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    lVar3 = 0x10;
    do {
      func_0x0001001e33e0(*plVar1);
      plVar1[-1] = 0;
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1 = plVar1 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    func_0x0001001e33e0(param_1[0x31]);
    param_1[0x30] = 0;
    param_1[0x31] = 0;
  }
  return;
}



/* Entry: 10ae2a370; end: 10ae2a393;  */

uint FUN_10ae2a370(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_2 >> 0xf < *param_1 >> 0xf);
  if (*param_1 >> 0xf < *param_2 >> 0xf) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 10ae2a394; end: 10ae2a3e7;  */

bool FUN_10ae2a394(long *param_1)

{
  bool bVar1;
  
  bVar1 = *(long *)(*(long *)param_1[2] + 0x28) == 0;
  if (bVar1) {
    func_0x000107c2b29c(6,0,0x7d,&UNK_10f6c5f3e,0x85);
  }
  else {
    (**(code **)(*param_1 + 0x18))();
  }
  return !bVar1;
}



/* Entry: 10ae2a3e8; end: 10ae2a5e3;  */

/* WARNING: Possible PIC construction at 0x00010ae2a46c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae2a470) */

long * FUN_10ae2a3e8(long *param_1,long *param_2,undefined1 *param_3,undefined *param_4,
                    ulong param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined1 *puVar6;
  undefined8 unaff_x30;
  undefined8 uVar7;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    plVar2 = (long *)param_1[2];
    if (*(long *)(*plVar2 + 0x28) == 0) {
      param_4 = &UNK_10f6c5f3e;
      plVar2 = (long *)0x6;
      plVar3 = (long *)0x0;
      puVar4 = (undefined1 *)0x7d;
      param_5 = 0x98;
      func_0x000107c2b29c();
LAB_10ae2a4c0:
      param_2 = plVar3;
      param_3 = puVar4;
      puVar4 = (undefined1 *)0x0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
      {
        return (long *)0x0;
      }
    }
    else {
      unaff_x20 = param_2;
      if (param_2 != (long *)0x0) {
        *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
        iVar1 = (int)(undefined1 *)((long)register0x00000008 + -0xa0);
        plVar3 = param_1;
        puVar4 = param_3;
        func_0x000107c2b410();
        if (iVar1 != 0) {
          iVar1 = (int)(undefined1 *)((long)register0x00000008 + -0xa0);
          plVar3 = (long *)((long)register0x00000008 + -0x78);
          puVar4 = (undefined1 *)((long)register0x00000008 + -0xa4);
          func_0x000107c2b41c();
          if (iVar1 != 0) {
            plVar2 = (long *)param_1[2];
            param_5 = (ulong)*(uint *)((long)register0x00000008 + -0xa4);
            puVar4 = (undefined1 *)((long)register0x00000008 + -0x78);
            uVar7 = 0x10ae2a470;
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
            goto SUB_10ae2ad54;
          }
        }
        plVar2 = *(long **)((long)register0x00000008 + -0x98);
        func_0x000107c2b534();
        if (*(undefined8 **)((long)register0x00000008 + -0x88) != (undefined8 *)0x0) {
          plVar2 = *(long **)((long)register0x00000008 + -0x90);
          (*(code *)**(undefined8 **)((long)register0x00000008 + -0x88))();
        }
        goto LAB_10ae2a4c0;
      }
      param_5 = (ulong)*(uint *)(*param_1 + 4);
      puVar4 = param_3;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
      {
        param_2 = (long *)0x0;
        puVar4 = (undefined1 *)0x0;
        puVar6 = *(undefined1 **)((long)register0x00000008 + -0x10);
        uVar7 = *(undefined8 *)((long)register0x00000008 + -8);
SUB_10ae2ad54:
        *(undefined1 **)((long)register0x00000008 + -0x10) = puVar6;
        *(undefined8 *)((long)register0x00000008 + -8) = uVar7;
        if (((plVar2 == (long *)0x0) || (*plVar2 == 0)) ||
           (UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar2 + 0x28),
           UNRECOVERED_JUMPTABLE_00 == (code *)0x0)) {
          uVar7 = 0x7d;
          uVar5 = 0xe4;
        }
        else {
          if ((int)plVar2[4] == 8) {
                    /* WARNING: Could not recover jumptable at 0x00010ae2ad80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)(plVar2,param_2,param_3,puVar4,param_5);
            return plVar2;
          }
          uVar7 = 0x7e;
          uVar5 = 0xe8;
        }
        func_0x000107c2b29c(6,0,uVar7,&UNK_10f6c60a7,uVar5);
        return (long *)0x0;
      }
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x22;
    *(long **)((long)register0x00000008 + -0xd8) = param_1;
    *(long **)((long)register0x00000008 + -0xd0) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -200) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0xc0) = puVar6;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x10ae2a534;
    plVar3 = (long *)plVar2[2];
    if (*(long *)(*plVar3 + 0x28) == 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar3 + 0x30);
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
        func_0x000107c2b29c(6,0,0x7d,&UNK_10f6c5f3e,0xd2);
        return (long *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x00010ae2a5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(plVar3,param_2,param_3);
      return plVar3;
    }
    if ((param_2 != (long *)0x0) &&
       (plVar3 = plVar2, FUN_10ae2a394(plVar2,param_4,param_5), (int)plVar3 == 0)) {
      return (long *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0xc0);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0xb8);
    unaff_x20 = *(long **)((long)register0x00000008 + -0xd0);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -200);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0xe0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xd8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
    param_1 = plVar2;
  } while( true );
}



/* Entry: 10ae2a5e4; end: 10ae2a69b;  */

void FUN_10ae2a5e4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if ((*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) &&
     (lVar2 = *(long *)(param_1 + 0x10), lVar2 != 0)) {
    if (*(code **)(lVar2 + 0x80) != (code *)0x0) {
      lVar1 = param_1;
      (**(code **)(lVar2 + 0x80))(param_1,param_2);
      if ((int)lVar1 < 1) {
        return;
      }
      lVar2 = *(long *)(param_1 + 0x10);
    }
    if (*(code **)(lVar2 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010ae2a648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x20))(param_1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 10ae2a69c; end: 10ae2a7ef;  */

long FUN_10ae2a69c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 4) == 6) {
    lVar5 = *(long *)(param_1 + 8);
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 0x50);
      iVar6 = *piVar1;
      do {
        if (iVar6 == -1) {
          return lVar5;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar6) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          bVar4 = cVar3 == '\0';
        }
        else {
          bVar4 = false;
          ClearExclusiveLocal();
        }
        iVar6 = iVar2;
      } while (!bVar4);
    }
  }
  else {
    func_0x000107c2b29c(6,0,0x6b,&UNK_10f6c5fb5,0xf1);
    lVar5 = 0;
  }
  return lVar5;
}



/* Entry: 10ae2a7f0; end: 10ae2a92b;  */

undefined1 * FUN_10ae2a7f0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_5c;
  long lStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x000107c34f50(param_1,auStack_30,0x20000010,1);
  if ((int)param_1 != 0) {
    puVar1 = auStack_30;
    FUN_10ae200fc(puVar1,&lStack_58);
    if (((int)puVar1 != 0) && (lStack_58 == 0)) {
      puVar1 = auStack_30;
      func_0x000107c34f50(puVar1,auStack_40,0x20000010,1);
      if ((int)puVar1 != 0) {
        puVar1 = auStack_30;
        func_0x000107c34f50(puVar1,auStack_50,4,1);
        if ((int)puVar1 != 0) {
          puVar1 = auStack_40;
          func_0x000107c34f70(puVar1,&uStack_5c);
          if ((int)puVar1 != 0) {
            func_0x000107c2b2bc();
            if ((puVar1 != (undefined1 *)0x0) &&
               (puVar2 = puVar1, func_0x000107c2b2c4(puVar1,uStack_5c), (int)puVar2 != 0)) {
              if (*(code **)(*(long *)(puVar1 + 0x10) + 0x28) == (code *)0x0) {
                func_0x000107c2b29c(6,0,0x80,&UNK_10f6c6032,0xb7);
              }
              else {
                puVar2 = puVar1;
                (**(code **)(*(long *)(puVar1 + 0x10) + 0x28))(puVar1,auStack_40,auStack_50);
                if ((int)puVar2 != 0) {
                  return puVar1;
                }
              }
            }
            func_0x000107c2b2c0(puVar1);
            return (undefined1 *)0x0;
          }
          uVar3 = 0x80;
          uVar4 = 0xa8;
          goto LAB_10ae2a8cc;
        }
      }
    }
  }
  uVar3 = 0x66;
  uVar4 = 0xa4;
LAB_10ae2a8cc:
  func_0x000107c2b29c(6,0,uVar3,&UNK_10f6c6032,uVar4);
  return (undefined1 *)0x0;
}



/* Entry: 10ae2a92c; end: 10ae2a96f;  */

undefined8 FUN_10ae2a92c(undefined8 param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_2 + 0x10) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x10) + 0x30),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ae2a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  func_0x000107c2b29c(6,0,0x80,&UNK_10f6c6032,199);
  return 0;
}



/* Entry: 10ae2a970; end: 10ae2ab7f;  */

undefined1 * FUN_10ae2a970(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar2 = &uStack_50;
  puVar3 = &uStack_50;
  puVar4 = &uStack_50;
  puVar7 = &uStack_50;
  if (param_4 < 0) {
    func_0x000107c2b29c(6,0,0x66,&UNK_10f6c6032,0xfa);
LAB_10ae2ab60:
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uStack_50 = *param_3;
    puVar1 = param_1;
    lStack_48 = param_4;
    func_0x000107c2b2bc();
    iVar8 = (int)param_1;
    if (puVar1 == (undefined1 *)0x0) {
LAB_10ae2aaf8:
      func_0x000107c2b290();
      uStack_50 = *param_3;
      lStack_48 = param_4;
      FUN_10ae2a7f0();
      if (puVar7 == (undefined8 *)0x0) {
        return (undefined1 *)0x0;
      }
      if (*(int *)((long)puVar7 + 4) != iVar8) {
        func_0x000107c2b29c(6,0,0x67,&UNK_10f6c6032,0x10b);
        func_0x000107c2b2c0(puVar7);
        goto LAB_10ae2ab60;
      }
    }
    else {
      if (iVar8 != 6) {
        if (iVar8 == 0x74) {
          func_0x00010ae286c0();
          if (puVar3 != (undefined8 *)0x0) {
            if (((*(long *)(puVar1 + 8) != 0) && (*(long *)(puVar1 + 0x10) != 0)) &&
               (pcVar5 = *(code **)(*(long *)(puVar1 + 0x10) + 0x88), pcVar5 != (code *)0x0)) {
              (*pcVar5)(puVar1);
            }
            *(undefined4 *)(puVar1 + 4) = 0x74;
            puVar6 = &DAT_110c7c788;
            puVar4 = puVar3;
            goto LAB_10ae2aab4;
          }
          func_0x00010ae28250();
        }
        else if (iVar8 == 0x198) {
          FUN_10ae28820(&uStack_50,0);
          if (puVar2 != (undefined8 *)0x0) {
            if (((*(long *)(puVar1 + 8) != 0) && (*(long *)(puVar1 + 0x10) != 0)) &&
               (pcVar5 = *(code **)(*(long *)(puVar1 + 0x10) + 0x88), pcVar5 != (code *)0x0)) {
              (*pcVar5)(puVar1);
            }
            *(undefined4 *)(puVar1 + 4) = 0x198;
            puVar6 = &DAT_110c7c890;
            puVar4 = puVar2;
            goto LAB_10ae2aab4;
          }
          func_0x000107c2b478();
        }
        else {
          func_0x000107c2b29c(6,0,0x7f,&UNK_10f6c6032,0xee);
        }
LAB_10ae2aaf0:
        func_0x000107c2b2c0(puVar1);
        goto LAB_10ae2aaf8;
      }
      FUN_10ae48a24();
      if (puVar4 == (undefined8 *)0x0) {
        func_0x000107c2b4d0();
        goto LAB_10ae2aaf0;
      }
      if (((*(long *)(puVar1 + 8) != 0) && (*(long *)(puVar1 + 0x10) != 0)) &&
         (pcVar5 = *(code **)(*(long *)(puVar1 + 0x10) + 0x88), pcVar5 != (code *)0x0)) {
        (*pcVar5)(puVar1);
      }
      *(undefined4 *)(puVar1 + 4) = 6;
      puVar6 = &DAT_110c7caa0;
LAB_10ae2aab4:
      *(undefined8 **)(puVar1 + 8) = puVar4;
      *(undefined **)(puVar1 + 0x10) = puVar6;
      puVar7 = (undefined8 *)puVar1;
    }
    if (param_2 != (undefined8 *)0x0) {
      func_0x000107c2b2c0(*param_2);
      *param_2 = puVar7;
    }
    *param_3 = uStack_50;
  }
  return (undefined1 *)puVar7;
}



/* Entry: 10ae2ab80; end: 10ae2acf7;  */

undefined1 * FUN_10ae2ab80(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = &uStack_40;
  if (param_3 < 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    uStack_40 = *param_2;
    lStack_38 = param_3;
    func_0x000107c2b2c8();
    if (puVar1 != (undefined8 *)0x0) {
      if (param_1 != (undefined8 *)0x0) {
        func_0x000107c2b2c0(*param_1);
        *param_1 = puVar1;
      }
      *param_2 = uStack_40;
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10ae2acf8; end: 10ae2adc7;  */

undefined8 FUN_10ae2acf8(long *param_1)

{
  long lVar1;
  
  if (((param_1 != (long *)0x0) && (lVar1 = *param_1, lVar1 != 0)) &&
     ((*(long *)(lVar1 + 0x28) != 0 || (*(long *)(lVar1 + 0x30) != 0)))) {
    *(undefined4 *)(param_1 + 4) = 8;
    return 1;
  }
  func_0x000107c2b29c(6,0,0x7d,&UNK_10f6c60a7,0xd9);
  return 0;
}



/* Entry: 10ae2adc8; end: 10ae2afbb;  */

void FUN_10ae2adc8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_2 + 8) == 0) {
    lVar1 = param_1;
    func_0x00010ae2818c();
    if (lVar1 == 0) {
      return;
    }
LAB_10ae2ae18:
    lVar2 = lVar1;
    func_0x000107c2b318();
    *(long *)(lVar1 + 0x20) = lVar2;
    if (lVar2 == 0) goto LAB_10ae2ae58;
    lVar3 = param_3;
    func_0x000107c2b1e8(param_3,lVar2);
    if (((int)lVar3 != 0) && (*(long *)(param_3 + 8) == 0)) {
      lVar2 = param_1;
      func_0x000107c2b2c4(param_1,0x74);
      if ((int)lVar2 == 0) {
        return;
      }
      *(long *)(param_1 + 8) = lVar1;
      return;
    }
    uVar4 = 0x5c;
  }
  else {
    lVar1 = param_2;
    FUN_10ae2853c();
    if ((lVar1 != 0) && (*(long *)(param_2 + 8) == 0)) goto LAB_10ae2ae18;
    uVar4 = 0x50;
  }
  func_0x000107c2b29c(6,0,0x66,&UNK_10f6c6128,uVar4);
LAB_10ae2ae58:
  func_0x00010ae28250(lVar1);
  return;
}



/* Entry: 10ae2afbc; end: 10ae2afeb;  */

bool FUN_10ae2afbc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x20);
  func_0x000107c2b340(uVar1,*(undefined8 *)(*(long *)(param_1 + 8) + 0x20));
  return (int)uVar1 == 0;
}



/* Entry: 10ae2afec; end: 10ae2b0fb;  */

undefined8 FUN_10ae2afec(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_2;
  FUN_10ae2853c();
  if ((lVar1 == 0) || (*(long *)(param_2 + 8) != 0)) {
    uVar3 = 0x86;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c2b318();
    *(long *)(lVar1 + 0x28) = lVar2;
    func_0x000107c2b318();
    lVar4 = 0;
    *(long *)(lVar1 + 0x20) = lVar2;
    if ((*(long *)(lVar1 + 0x28) == 0) || (lVar2 == 0)) goto LAB_10ae2b040;
    lVar2 = param_3;
    func_0x000107c2b1e8();
    if (((int)lVar2 != 0) && (*(long *)(param_3 + 8) == 0)) {
      lVar4 = *(long *)(lVar1 + 0x28);
      func_0x000107c2b340(lVar4,*(undefined8 *)(lVar1 + 0x10));
      if ((int)lVar4 < 0) {
        func_0x000107c2b344();
        if (lVar4 != 0) {
          uVar3 = *(undefined8 *)(lVar1 + 0x20);
          FUN_10ae2f2b4(uVar3,*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x28),
                        *(undefined8 *)(lVar1 + 8),lVar4,0);
          if ((int)uVar3 != 0) {
            func_0x000107c2b348(lVar4);
            lVar2 = param_1;
            func_0x000107c2b2c4(param_1,0x74);
            if ((int)lVar2 != 0) {
              *(long *)(param_1 + 8) = lVar1;
            }
            return 1;
          }
        }
        goto LAB_10ae2b040;
      }
    }
    uVar3 = 0x97;
  }
  func_0x000107c2b29c(6,0,0x66,&UNK_10f6c6128,uVar3);
  lVar4 = 0;
LAB_10ae2b040:
  func_0x000107c2b348(lVar4);
  func_0x00010ae28250(lVar1);
  return 0;
}



/* Entry: 10ae2b0fc; end: 10ae2b21b;  */

undefined8 FUN_10ae2b0fc(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  iVar1 = (int)auStack_a0;
  lVar5 = *(long *)(param_2 + 8);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x28) == 0)) {
    uVar3 = 0x76;
    uVar4 = 0xb0;
  }
  else {
    uVar3 = param_1;
    func_0x000107c2b214(param_1,auStack_40,0x20000010);
    if ((int)uVar3 != 0) {
      puVar2 = auStack_40;
      FUN_10ae1fb3c(puVar2,0);
      if ((int)puVar2 != 0) {
        puVar2 = auStack_40;
        func_0x000107c2b214(puVar2,auStack_60,0x20000010);
        if ((int)puVar2 != 0) {
          puVar2 = auStack_60;
          func_0x000107c2b214(puVar2,auStack_80,6);
          if ((int)puVar2 != 0) {
            puVar2 = auStack_80;
            func_0x000107c2b21c(puVar2,&UNK_110c7c78c,7);
            if ((int)puVar2 != 0) {
              puVar2 = auStack_60;
              func_0x00010ae28620(puVar2,lVar5);
              if ((int)puVar2 != 0) {
                puVar2 = auStack_40;
                func_0x000107c2b214(puVar2,auStack_a0,4);
                if ((((int)puVar2 != 0) &&
                    (FUN_10ae1ed50(auStack_a0,*(undefined8 *)(lVar5 + 0x28)), iVar1 != 0)) &&
                   (func_0x000107c2b20c(), (int)param_1 != 0)) {
                  return 1;
                }
              }
            }
          }
        }
      }
    }
    uVar3 = 0x69;
    uVar4 = 0xbf;
  }
  func_0x000107c2b29c(6,0,uVar3,&UNK_10f6c6128,uVar4);
  return 0;
}



/* Entry: 10ae2b21c; end: 10ae2b25b;  */

undefined4 FUN_10ae2b21c(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  
  iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
  func_0x000107c2b32c();
  uVar3 = (ulong)(iVar2 + 7U >> 3);
  if (iVar2 + 7U < 0x3f8) {
    lVar5 = 1;
  }
  else {
    lVar5 = 1;
    uVar6 = uVar3 + 1;
    do {
      lVar5 = lVar5 + 1;
      bVar1 = 0xff < uVar6;
      uVar6 = uVar6 >> 8;
    } while (bVar1);
  }
  uVar4 = 0;
  uVar6 = uVar3 + lVar5 + 2;
  if ((uVar3 <= uVar6) && (-1 < (long)uVar6)) {
    uVar3 = uVar6 * 2;
    if (uVar6 < 0x40) {
      lVar5 = 1;
    }
    else {
      lVar5 = 1;
      uVar6 = uVar3;
      do {
        lVar5 = lVar5 + 1;
        bVar1 = 0xff < uVar6;
        uVar6 = uVar6 >> 8;
      } while (bVar1);
    }
    uVar6 = lVar5 + uVar3 + 1;
    uVar4 = 0;
    if (uVar3 <= uVar6) {
      uVar4 = (undefined4)uVar6;
    }
  }
  return uVar4;
}



/* Entry: 10ae2b25c; end: 10ae2b327;  */

bool FUN_10ae2b25c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8) + 8;
  FUN_10ae2b330(lVar2,*(undefined8 *)(*(long *)(param_2 + 8) + 8));
  if ((int)lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 8) + 0x10;
    FUN_10ae2b330(lVar2,*(undefined8 *)(*(long *)(param_2 + 8) + 0x10));
    if ((int)lVar2 != 0) {
      lVar2 = *(long *)(*(long *)(param_2 + 8) + 0x18);
      plVar1 = (long *)(*(long *)(param_1 + 8) + 0x18);
      FUN_10ae2e1dc();
      if (lVar2 != 0) {
        func_0x000107c2b31c(*plVar1);
        *plVar1 = lVar2;
      }
      return lVar2 != 0;
    }
  }
  return false;
}



/* Entry: 10ae2b328; end: 10ae2b32f;  */

void FUN_10ae2b328(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    iVar1 = (int)lVar2 + 0x110;
    func_0x000107c2b58c();
    if (iVar1 != 0) {
      func_0x000107c2b2ec(0x1133107f0,lVar2,lVar2 + 0x118);
      func_0x000107c2b31c(*(undefined8 *)(lVar2 + 8));
      func_0x000107c2b31c(*(undefined8 *)(lVar2 + 0x10));
      func_0x000107c2b31c(*(undefined8 *)(lVar2 + 0x18));
      func_0x000107c2b31c(*(undefined8 *)(lVar2 + 0x20));
      func_0x000107c2b31c(*(undefined8 *)(lVar2 + 0x28));
      func_0x000107c2b384(*(undefined8 *)(lVar2 + 0x100));
      func_0x000107c2b384(*(undefined8 *)(lVar2 + 0x108));
      _pthread_rwlock_destroy(lVar2 + 0x38);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + -8);
        if (*plVar3 + 8 != 0) {
          func_0x000107c60ee4(plVar3,*plVar3 + 8);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_11034c310)(plVar3);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 10ae2b330; end: 10ae2b433;  */

void FUN_10ae2b330(long *param_1,long param_2)

{
  FUN_10ae2e1dc();
  if (param_2 != 0) {
    func_0x000107c2b31c(*param_1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10ae2b434; end: 10ae2b4e7;  */

undefined8 FUN_10ae2b434(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if (lVar3 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      func_0x000107c2b29c(6,0,0x7c,&UNK_10f6c619f,0xe0);
      return 0;
    }
    lVar3 = **(long **)(*(long *)(param_1 + 0x10) + 8);
  }
  lVar1 = 0;
  func_0x000107c2b470();
  if (((lVar1 != 0) && (lVar2 = lVar1, FUN_10ae36348(lVar1,lVar3), (int)lVar2 != 0)) &&
     (lVar3 = lVar1, FUN_10ae36488(), (int)lVar3 != 0)) {
    lVar3 = param_2;
    func_0x000107c2b2c4(param_2,0x198);
    if ((int)lVar3 != 0) {
      *(long *)(param_2 + 8) = lVar1;
    }
    return 1;
  }
  func_0x000107c2b478(lVar1);
  return 0;
}



/* Entry: 10ae2b4e8; end: 10ae2b5a7;  */

void FUN_10ae2b4e8(long param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uStack_44;
  
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x10) + 8);
  if (param_2 == 0) {
    FUN_10ae29710();
    *param_3 = uVar3;
  }
  else {
    uVar4 = *param_3;
    uVar2 = uVar3;
    FUN_10ae29710();
    if (uVar4 < uVar2) {
      func_0x000107c2b29c(6,0,100,&UNK_10f6c619f,0x7f);
    }
    else {
      iVar1 = 0;
      FUN_10ae295e4(0,param_4,param_5,param_2,&uStack_44,uVar3);
      if (iVar1 != 0) {
        *param_3 = (ulong)uStack_44;
      }
    }
  }
  return;
}



/* Entry: 10ae2b5a8; end: 10ae2b5cf;  */

undefined8
FUN_10ae2b5a8(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 8);
  uStack_48 = 0;
  lVar1 = param_2;
  FUN_10ae298d4(param_2,param_3);
  if (lVar1 != 0) {
    puVar2 = &uStack_48;
    FUN_10ae2993c(puVar2,&lStack_50,lVar1);
    if ((((int)puVar2 != 0) && (lStack_50 == param_3)) &&
       ((param_3 == 0 || (_memcmp(param_2,uStack_48,param_3), (int)param_2 == 0)))) {
      FUN_10ae35658(param_4,param_5,lVar1,uVar3);
      goto LAB_10ae2988c;
    }
    func_0x000107c2b29c(0x1a,0,0x44,&UNK_10f6c5b8a,0x77);
  }
  param_4 = 0;
LAB_10ae2988c:
  func_0x000107c2b534(uStack_48);
  func_0x00010ae35620(lVar1);
  return param_4;
}



/* Entry: 10ae2b5d0; end: 10ae2b66b;  */

undefined8 FUN_10ae2b5d0(long param_1,ulong param_2,ulong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    func_0x000107c2b29c(6,0,0x75,&UNK_10f6c619f,0x97);
LAB_10ae2b63c:
    uVar2 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 8);
    if (param_2 == 0) {
      iVar1 = (int)*puVar3 + 0x38;
      func_0x000107c2b32c();
      param_2 = (ulong)(iVar1 + 7U >> 3);
    }
    else {
      FUN_10ae29434(param_2,*param_3,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 8),
                    puVar3,0);
      if ((int)param_2 < 0) goto LAB_10ae2b63c;
      param_2 = param_2 & 0xffffffff;
    }
    *param_3 = param_2;
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 10ae2b66c; end: 10ae2b703;  */

undefined8 FUN_10ae2b66c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar3 + 8) == 0) {
    func_0x000107c2b29c(6,0,0x7c,&UNK_10f6c619f,0xf3);
  }
  else {
    lVar1 = 0;
    func_0x000107c2b470();
    if ((lVar1 != 0) &&
       (lVar2 = lVar1, FUN_10ae36348(lVar1,*(undefined8 *)(lVar3 + 8)), (int)lVar2 != 0)) {
      lVar3 = param_2;
      func_0x000107c2b2c4(param_2,0x198);
      if ((int)lVar3 != 0) {
        *(long *)(param_2 + 8) = lVar1;
      }
      return 1;
    }
    func_0x000107c2b478(lVar1);
  }
  return 0;
}



/* Entry: 10ae2b704; end: 10ae2b7df;  */

void FUN_10ae2b704(long param_1,int param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  if (param_2 < 3) {
    if (param_2 == 1) {
      iVar1 = *param_4;
      if (((iVar1 - 0x2a0U < 4) || (iVar1 == 0x40)) || (iVar1 == 0x1a0)) {
        *puVar4 = param_4;
        return;
      }
      uVar2 = 0x6f;
      uVar3 = 0xbd;
      goto LAB_10ae2b784;
    }
    if (param_2 == 2) {
      *(undefined8 *)param_4 = *puVar4;
      return;
    }
  }
  else {
    if (param_2 == 3) {
      return;
    }
    if (param_2 == 0x100d) {
      func_0x000107c2b44c();
      if (param_3 == 0) {
        return;
      }
      func_0x000107c2b448(puVar4[1]);
      puVar4[1] = param_3;
      return;
    }
  }
  uVar2 = 0x65;
  uVar3 = 0xd6;
LAB_10ae2b784:
  func_0x000107c2b29c(6,0,uVar2,&UNK_10f6c619f,uVar3);
  return;
}



/* Entry: 10ae2b7e0; end: 10ae2b8ff;  */

undefined8 FUN_10ae2b7e0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar1 = param_2;
  func_0x00010ae290bc();
  if ((puVar1 == (undefined8 *)0x0) || (param_2[1] != 0)) {
    func_0x000107c2b29c(6,0,0x66,&UNK_10f6c6210,100);
    puVar5 = (undefined8 *)0x0;
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    func_0x000107c2b470();
    if ((lVar4 == 0) || (lVar2 = lVar4, FUN_10ae36348(lVar4,puVar1), (int)lVar2 == 0)) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = puVar1;
      func_0x000107c2b454();
      if (((puVar5 != (undefined8 *)0x0) &&
          (puVar3 = puVar1, func_0x000107c2b488(puVar1,puVar5,*param_3,param_3[1],0),
          (int)puVar3 != 0)) && (lVar2 = lVar4, FUN_10ae363f0(lVar4,puVar5), (int)lVar2 != 0)) {
        func_0x000107c2b448(puVar1);
        func_0x000107c2b448(*puVar5);
        func_0x000107c2b534(puVar5);
        lVar2 = param_1;
        func_0x000107c2b2c4(param_1,0x198);
        if ((int)lVar2 != 0) {
          *(long *)(param_1 + 8) = lVar4;
        }
        return 1;
      }
    }
  }
  func_0x000107c2b448(puVar1);
  func_0x000107c2b458(puVar5);
  func_0x000107c2b478(lVar4);
  return 0;
}



/* Entry: 10ae2b900; end: 10ae2b93b;  */

undefined4 FUN_10ae2b900(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = **(undefined8 **)(param_2 + 8);
  FUN_10ae35f60(uVar1,*(undefined8 *)(*(long *)(param_1 + 8) + 8),(*(undefined8 **)(param_2 + 8))[1]
                ,0);
  uVar2 = 0;
  if ((int)uVar1 != 1) {
    uVar2 = 0xfffffffe;
  }
  if ((int)uVar1 == 0) {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 10ae2b93c; end: 10ae2bb17;  */

undefined8 FUN_10ae2b93c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_10ae28b48();
  if ((lVar1 == 0) || (*(long *)(param_2 + 8) != 0)) {
    func_0x000107c2b29c(6,0,0x66,&UNK_10f6c6210,0x93);
    func_0x000107c2b448(lVar1);
  }
  else {
    lVar2 = param_3;
    FUN_10ae28820(param_3,lVar1);
    func_0x000107c2b448(lVar1);
    if ((lVar2 != 0) && (*(long *)(param_3 + 8) == 0)) {
      lVar1 = param_1;
      func_0x000107c2b2c4(param_1,0x198);
      if ((int)lVar1 != 0) {
        *(long *)(param_1 + 8) = lVar2;
      }
      return 1;
    }
    func_0x000107c2b29c(6,0,0x66,&UNK_10f6c6210,0x9b);
    func_0x000107c2b478(lVar2);
  }
  return 0;
}



/* Entry: 10ae2bb18; end: 10ae2bb37;  */

uint FUN_10ae2bb18(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x28);
  if (lVar1 != 0) {
    return *(uint *)(lVar1 + 0x30) & 1;
  }
  return 0;
}



/* Entry: 10ae2bb38; end: 10ae2bb7b;  */

void FUN_10ae2bb38(long param_1)

{
  FUN_10ae29710(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10ae2bb7c; end: 10ae2bb9f;  */

bool FUN_10ae2bb7c(long param_1)

{
  return **(long **)(param_1 + 8) == 0;
}



/* Entry: 10ae2bba0; end: 10ae2bbcb;  */

uint FUN_10ae2bba0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)(param_1 + 8);
  func_0x000107c2b434(uVar1,**(undefined8 **)(param_2 + 8),0);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10ae2bbcc; end: 10ae2bbd3;  */

undefined8 FUN_10ae2bbcc(void)

{
  return 1;
}



/* Entry: 10ae2bbd4; end: 10ae2bcc3;  */

undefined8 *
FUN_10ae2bbd4(undefined8 param_1,long param_2,ulong *param_3,undefined *param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_78 [32];
  ulong auStack_58 [4];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)0x49;
  _malloc();
  if (puVar1 == (undefined8 *)0x0) {
    param_4 = &UNK_10f6c6286;
    puVar3 = (undefined8 *)0x6;
    puVar4 = (undefined8 *)0x0;
    param_3 = (ulong *)0x41;
    param_5 = 0x1e;
    func_0x000107c2b29c();
LAB_10ae2bc8c:
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar3 = puVar1 + 1;
    *puVar1 = 0x41;
    puVar4 = (undefined8 *)0x3b5;
    lVar2 = param_2;
    func_0x000107c2b2c4();
    if ((int)lVar2 == 0) {
      func_0x000107c2b534();
      goto LAB_10ae2bc8c;
    }
    func_0x000107c2b3c4(auStack_58,0x20,&UNK_10e525a20);
    param_3 = auStack_58;
    puVar4 = puVar3;
    FUN_10ae23814(auStack_78);
    puVar7 = (undefined8 *)0x1;
    *(undefined1 *)(puVar1 + 9) = 1;
    puVar1 = *(undefined8 **)(param_2 + 8);
    func_0x000107c2b534();
    *(undefined8 **)(param_2 + 8) = puVar3;
    puVar3 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar7;
  }
  ___stack_chk_fail();
  if (*(char *)(*(long *)(puVar3[2] + 8) + 0x40) == '\0') {
    uVar5 = 0x82;
    uVar6 = 0x35;
LAB_10ae2bd28:
    func_0x000107c2b29c(6,0,uVar5,&UNK_10f6c6286,uVar6);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    if (puVar4 != (undefined8 *)0x0) {
      if (*param_3 < 0x40) {
        uVar5 = 100;
        uVar6 = 0x3f;
        goto LAB_10ae2bd28;
      }
      FUN_10ae238c8(puVar4,param_4,param_5,*(long *)(puVar3[2] + 8));
      if ((int)puVar4 == 0) {
        return puVar4;
      }
    }
    *param_3 = 0x40;
    puVar1 = (undefined8 *)0x1;
  }
  return puVar1;
}



/* Entry: 10ae2bcc4; end: 10ae2bd63;  */

void FUN_10ae2bcc4(long param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  if (*(char *)(lVar3 + 0x40) == '\0') {
    uVar1 = 0x82;
    uVar2 = 0x35;
LAB_10ae2bd28:
    func_0x000107c2b29c(6,0,uVar1,&UNK_10f6c6286,uVar2);
  }
  else {
    if (param_2 != 0) {
      if (*param_3 < 0x40) {
        uVar1 = 100;
        uVar2 = 0x3f;
        goto LAB_10ae2bd28;
      }
      FUN_10ae238c8(param_2,param_4,param_5,lVar3);
      if ((int)param_2 == 0) {
        return;
      }
    }
    *param_3 = 0x40;
  }
  return;
}



/* Entry: 10ae2bd64; end: 10ae2be0b;  */

undefined8
FUN_10ae2bd64(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((param_3 == 0x40) &&
     (FUN_10ae24660(param_4,param_5,param_2,*(long *)(*(long *)(param_1 + 0x10) + 8) + 0x20),
     (int)param_4 != 0)) {
    uVar1 = 1;
  }
  else {
    func_0x000107c2b29c(6,0,0x83,&UNK_10f6c6286,0x51);
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10ae2be0c; end: 10ae2bef7;  */

undefined8 FUN_10ae2be0c(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  int iVar2;
  
  iVar1 = (int)auStack_a0;
  iVar2 = (int)auStack_a0;
  lVar5 = *(long *)(param_2 + 8);
  uVar3 = param_1;
  func_0x000107c2b214(param_1,auStack_40,0x20000010);
  if ((int)uVar3 != 0) {
    puVar4 = auStack_40;
    func_0x000107c2b214(puVar4,auStack_60,0x20000010);
    if ((int)puVar4 != 0) {
      puVar4 = auStack_60;
      func_0x000107c2b214(puVar4,auStack_80,6);
      if ((int)puVar4 != 0) {
        puVar4 = auStack_80;
        func_0x000107c2b21c(puVar4,&UNK_110c7c99c,3);
        if ((int)puVar4 != 0) {
          puVar4 = auStack_40;
          func_0x000107c2b214(puVar4,auStack_a0,3);
          if (((((int)puVar4 != 0) && (func_0x000107c2b218(auStack_a0,0), iVar1 != 0)) &&
              (func_0x000107c2b21c(auStack_a0,lVar5 + 0x20,0x20), iVar2 != 0)) &&
             (func_0x000107c2b20c(), (int)param_1 != 0)) {
            return 1;
          }
        }
      }
    }
  }
  func_0x000107c2b29c(6,0,0x69,&UNK_10f6c62fc,0x8d);
  return 0;
}



/* Entry: 10ae2bef8; end: 10ae2bf27;  */

bool FUN_10ae2bef8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_2 + 8);
  return ((*(long *)(lVar1 + 0x20) == *(long *)(lVar2 + 0x20) &&
          *(long *)(lVar1 + 0x28) == *(long *)(lVar2 + 0x28)) &&
         *(long *)(lVar1 + 0x30) == *(long *)(lVar2 + 0x30)) &&
         *(long *)(lVar1 + 0x38) == *(long *)(lVar2 + 0x38);
}



/* Entry: 10ae2bf28; end: 10ae2c0cb;  */

void FUN_10ae2bf28(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (((*(long *)(param_2 + 8) == 0) &&
      (lVar1 = param_3, func_0x000107c34f50(param_3,&uStack_30,4,1), (int)lVar1 != 0)) &&
     (*(long *)(param_3 + 8) == 0)) {
    FUN_10ae2c0cc(param_1,uStack_30,uStack_28);
  }
  else {
    func_0x000107c2b29c(6,0,0x66,&UNK_10f6c62fc,0xa3);
  }
  return;
}



/* Entry: 10ae2c0cc; end: 10ae2c25b;  */

undefined8 FUN_10ae2c0cc(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0x20) {
    puVar1 = (undefined8 *)0x49;
    _malloc();
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0x41;
      puVar3 = puVar1 + 1;
      FUN_10ae23814(auStack_58);
      uVar5 = 1;
      *(undefined1 *)(puVar1 + 9) = 1;
      lVar2 = *(long *)(param_1 + 8);
      func_0x000107c2b534();
      *(undefined8 **)(param_1 + 8) = puVar1 + 1;
      goto LAB_10ae2c180;
    }
    param_2 = 0x41;
  }
  else {
    param_2 = 0x66;
  }
  puVar3 = (undefined8 *)0x0;
  lVar2 = 6;
  func_0x000107c2b29c();
  uVar5 = 0;
LAB_10ae2c180:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return uVar5;
  }
  ___stack_chk_fail();
  if (param_2 == 0x20) {
    puVar1 = (undefined8 *)0x49;
    _malloc();
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0x41;
      uVar5 = *puVar3;
      uVar6 = puVar3[3];
      uVar4 = puVar3[2];
      puVar1[6] = puVar3[1];
      puVar1[5] = uVar5;
      puVar1[8] = uVar6;
      puVar1[7] = uVar4;
      *(undefined1 *)(puVar1 + 9) = 0;
      func_0x000107c2b534(*(undefined8 *)(lVar2 + 8));
      *(undefined8 **)(lVar2 + 8) = puVar1 + 1;
      return 1;
    }
    uVar5 = 0x41;
    uVar4 = 0x3e;
  }
  else {
    uVar5 = 0x66;
    uVar4 = 0x38;
  }
  func_0x000107c2b29c(6,0,uVar5,&UNK_10f6c62fc,uVar4);
  return 0;
}



/* Entry: 10ae2c25c; end: 10ae2c337;  */

undefined8 FUN_10ae2c25c(long param_1,undefined8 *param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar3 + 8) == '\0') {
    uVar1 = 0x82;
    uVar2 = 0x4e;
LAB_10ae2c2b4:
    func_0x000107c2b29c(6,0,uVar1,&UNK_10f6c62fc,uVar2);
    uVar1 = 0;
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      if (*param_3 < 0x20) {
        uVar1 = 100;
        uVar2 = 0x58;
        goto LAB_10ae2c2b4;
      }
      uVar1 = *puVar3;
      uVar4 = puVar3[3];
      uVar2 = puVar3[2];
      param_2[1] = puVar3[1];
      *param_2 = uVar1;
      param_2[3] = uVar4;
      param_2[2] = uVar2;
    }
    *param_3 = 0x20;
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10ae2c338; end: 10ae2c347;  */

undefined8 FUN_10ae2c338(void)

{
  return 0x40;
}



/* Entry: 10ae2c348; end: 10ae2c36f;  */

void FUN_10ae2c348(long param_1)

{
  func_0x000107c2b534(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10ae2c370; end: 10ae2c427;  */

void FUN_10ae2c370(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = param_1[5];
  if (*(long *)(lVar3 + 8) == 0) {
    func_0x000107c2b318();
    *(undefined8 **)(lVar3 + 8) = param_1;
    if (param_1 == (undefined8 *)0x0) {
      return;
    }
    puVar2 = param_1;
    func_0x000107c2b2fc();
    if ((int)puVar2 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined8 *)*param_1 = 0x10001;
    *(undefined4 *)(param_1 + 1) = 1;
  }
  lVar3 = 0;
  func_0x000107c2b4cc();
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x00010ae3be74();
    if ((int)lVar1 == 0) {
      func_0x000107c2b4d0(lVar3);
    }
    else {
      lVar1 = param_2;
      func_0x000107c2b2c4(param_2,6);
      if ((int)lVar1 != 0) {
        *(long *)(param_2 + 8) = lVar3;
      }
    }
  }
  return;
}



/* Entry: 10ae2c428; end: 10ae2c55b;  */

long * FUN_10ae2c428(long param_1,long param_2,ulong *param_3,undefined8 param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  code *pcVar11;
  ulong uVar12;
  ulong *puVar13;
  long *plVar14;
  long lVar15;
  ulong in_stack_ffffffffffffffb8;
  
  lVar15 = *(long *)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x10);
  plVar14 = *(long **)(lVar3 + 8);
  uVar12 = 0;
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar11 = *(code **)(*(long *)(lVar3 + 0x10) + 0x60);
    uVar12 = 0;
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)();
      uVar12 = (ulong)(int)lVar3;
    }
  }
  if (param_2 == 0) {
LAB_10ae2c4e4:
    *param_3 = uVar12;
    return (long *)0x1;
  }
  uVar7 = *param_3;
  if (uVar7 < uVar12) {
    func_0x000107c2b29c(6,0,100,&UNK_10f6c6377,0xb7);
    return (long *)0x0;
  }
  puVar10 = *(uint **)(lVar15 + 0x18);
  if (puVar10 != (uint *)0x0) {
    if (*(int *)(lVar15 + 0x10) == 6) {
      FUN_10ae3b098(plVar14,param_3,param_2,uVar7,param_4,param_5,puVar10,
                    *(undefined8 *)(lVar15 + 0x20),*(undefined4 *)(lVar15 + 0x28));
      return plVar14;
    }
    if (*(int *)(lVar15 + 0x10) != 1) {
      return (long *)0x0;
    }
    plVar4 = (long *)(ulong)*puVar10;
    func_0x00010ae3af6c(plVar4,param_4,param_5,param_2,&stack0xffffffffffffffbc,plVar14);
    if ((int)plVar4 == 0) {
      return plVar4;
    }
    uVar12 = in_stack_ffffffffffffffb8 >> 0x20;
    goto LAB_10ae2c4e4;
  }
  iVar2 = *(int *)(lVar15 + 0x10);
  if (*(code **)(*plVar14 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010ae3ad38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar14 + 0x30))();
    return plVar14;
  }
  if (*(code **)(*plVar14 + 0x20) == (code *)0x0) {
    iVar1 = (int)plVar14[1];
    func_0x000107c2b32c();
    plVar4 = (long *)(ulong)(iVar1 + 7U >> 3);
  }
  else {
    plVar4 = plVar14;
    (**(code **)(*plVar14 + 0x20))();
  }
  if (uVar7 < ((ulong)plVar4 & 0xffffffff)) {
    func_0x000107c2b29c(4,0,0x87,&UNK_10f6c7473,0x1eb);
    return (long *)0x0;
  }
  uVar12 = (ulong)plVar4 & 0xffffffff;
  puVar5 = (ulong *)(uVar12 + 8);
  _malloc();
  if (puVar5 == (ulong *)0x0) {
    func_0x000107c2b29c(4,0,0x41,&UNK_10f6c7473,0x1f1);
    puVar13 = (ulong *)0x0;
  }
  else {
    puVar13 = puVar5 + 1;
    *puVar5 = uVar12;
    if (iVar2 == 3) {
      puVar5 = puVar13;
      FUN_10ae39fc0(puVar13,uVar12,param_4,param_5);
      if ((int)puVar5 != 0) {
LAB_10ae3b7b0:
        if (*(code **)(*plVar14 + 0x40) == (code *)0x0) {
          FUN_10ae3b2bc(plVar14,param_2,puVar13,uVar12);
          iVar2 = (int)plVar14;
        }
        else {
          (**(code **)(*plVar14 + 0x40))(plVar14,param_2,puVar13,uVar12);
          iVar2 = (int)plVar14;
        }
        if (iVar2 != 0) {
          *param_3 = uVar12;
          plVar14 = (long *)0x1;
          goto LAB_10ae3b820;
        }
      }
    }
    else {
      if (iVar2 == 1) {
        if ((uint)plVar4 < 0xb) {
          puVar8 = &UNK_10f6c7379;
          uVar6 = 0x7e;
          uVar9 = 0x4f;
        }
        else {
          if (param_5 <= uVar12 - 0xb) {
            *(undefined2 *)(puVar5 + 1) = 0x100;
            _memset((long)puVar5 + 10,0xff,(uVar12 - param_5) + -3);
            *(undefined1 *)((long)puVar13 + uVar12 + ~param_5) = 0;
            if (param_5 != 0) {
              _memcpy((long)puVar13 + (uVar12 - param_5),param_4,param_5);
            }
            goto LAB_10ae3b7b0;
          }
          puVar8 = &UNK_10f6c7379;
          uVar6 = 0x76;
          uVar9 = 0x54;
        }
      }
      else {
        puVar8 = &UNK_10f6c7473;
        uVar6 = 0x8f;
        uVar9 = 0x1fd;
      }
      func_0x000107c2b29c(4,0,uVar6,puVar8,uVar9);
    }
  }
  plVar14 = (long *)0x0;
LAB_10ae3b820:
  func_0x000107c2b534(puVar13);
  return plVar14;
}



/* Entry: 10ae2c55c; end: 10ae2c747;  */

/* WARNING: Possible PIC construction at 0x00010ae2c660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae2c664) */
/* WARNING: Removing unreachable block (ram,0x00010ae2c668) */
/* WARNING: Removing unreachable block (ram,0x00010ae2c678) */
/* WARNING: Removing unreachable block (ram,0x00010ae2c680) */
/* WARNING: Removing unreachable block (ram,0x00010ae2c68c) */
/* WARNING: Removing unreachable block (ram,0x00010ae2c6a4) */
/* WARNING: Removing unreachable block (ram,0x00010ae2c6e4) */
/* WARNING: Removing unreachable block (ram,0x00010ae2c6a8) */
/* WARNING: Removing unreachable block (ram,0x00010ae2c6e8) */
/* WARNING: Removing unreachable block (ram,0x00010ae2c6f0) */
/* WARNING: Removing unreachable block (ram,0x00010ae2c6f8) */
/* WARNING: Removing unreachable block (ram,0x00010ae2c720) */
/* WARNING: Removing unreachable block (ram,0x00010ae2c724) */
/* WARNING: Removing unreachable block (ram,0x00010ae2c740) */

undefined1 * FUN_10ae2c55c(long param_1,ulong *param_2,ulong *param_3,long param_4,ulong param_5)

{
  long *plVar1;
  ulong *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong *puVar7;
  long *plVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong *puVar11;
  undefined8 uVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  int iVar16;
  code *pcVar17;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar18;
  undefined1 *unaff_x21;
  undefined1 *puVar19;
  undefined1 *puVar20;
  ulong unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  undefined8 *puVar21;
  ulong unaff_x26;
  ulong uVar22;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong uStack_80;
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar2 = &uStack_80;
  puVar20 = &stack0xfffffffffffffff0;
  puVar19 = *(undefined1 **)(param_1 + 0x28);
  lVar9 = *(long *)(param_1 + 0x10);
  plVar1 = *(long **)(lVar9 + 8);
  if ((*(long *)(lVar9 + 0x10) == 0) ||
     (pcVar17 = *(code **)(*(long *)(lVar9 + 0x10) + 0x60), pcVar17 == (code *)0x0)) {
    uVar22 = 0;
  }
  else {
    (*pcVar17)();
    uVar22 = (ulong)(int)lVar9;
  }
  if (param_2 == (ulong *)0x0) {
    *param_3 = uVar22;
    return (undefined1 *)0x1;
  }
  uVar14 = *param_3;
  if (uVar14 < uVar22) {
    func_0x000107c2b29c(6,0,100,&UNK_10f6c6377,0xff);
    return (undefined1 *)0x0;
  }
  iVar16 = *(int *)(puVar19 + 0x10);
  puVar11 = param_3;
  puVar13 = param_2;
  if (*(long *)(puVar19 + 0x18) != 0) {
    if (iVar16 != 1) {
      return (undefined1 *)0x0;
    }
    unaff_x22 = (ulong)*(uint *)(*(long *)(puVar19 + 0x18) + 4);
    puVar10 = puVar19;
    FUN_10ae2ca20(puVar19,param_1);
    if ((int)puVar10 == 0) {
      return puVar10;
    }
    puVar10 = auStack_68;
    func_0x000107c2b4d8(puVar10,auStack_70,auStack_74,**(undefined4 **)(puVar19 + 0x18),
                        &UNK_10e5256f2,unaff_x22);
    if ((int)puVar10 == 0) {
      return puVar10;
    }
    iVar16 = 1;
    unaff_x30 = 0x10ae2c664;
    register0x00000008 = (BADSPACEBASE *)&uStack_80;
    puVar11 = puVar2;
    puVar13 = *(ulong **)(puVar19 + 0x30);
    uVar14 = uVar22;
    unaff_x19 = param_3;
    unaff_x20 = param_2;
    unaff_x21 = puVar19;
    unaff_x23 = param_5;
    unaff_x24 = param_4;
    unaff_x25 = plVar1;
    unaff_x26 = uVar22;
    unaff_x27 = param_1;
    unaff_x29 = puVar20;
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  plVar4 = plVar1;
  func_0x000100202894();
  if ((int)plVar4 == 0) {
    return (undefined1 *)0x0;
  }
  if (*(code **)(*plVar1 + 0x20) == (code *)0x0) {
    iVar3 = (int)plVar1[1];
    func_0x000100202834();
    plVar4 = (long *)(ulong)(iVar3 + 7U >> 3);
  }
  else {
    plVar4 = plVar1;
    (**(code **)(*plVar1 + 0x20))();
  }
  if (uVar14 < ((ulong)plVar4 & 0xffffffff)) {
    uVar12 = 0x87;
    uVar15 = 0x263;
code_r0x0001002256f4:
    func_0x0001004d2c58(4,0,uVar12,&UNK_10f6c7473,uVar15);
    return (undefined1 *)0x0;
  }
  if (param_5 != ((ulong)plVar4 & 0xffffffff)) {
    uVar12 = 0x70;
    uVar15 = 0x268;
    goto code_r0x0001002256f4;
  }
  func_0x000100225874();
  if (plVar4 == (long *)0x0) {
    return (undefined1 *)0x0;
  }
  func_0x0001002258d0();
  plVar5 = plVar4;
  func_0x000100225974();
  plVar6 = plVar4;
  func_0x000100225974();
  if ((plVar5 == (long *)0x0) || (plVar6 == (long *)0x0)) {
    func_0x0001004d2c58(4,0,0x41,&UNK_10f6c7473,0x278);
    puVar20 = (undefined1 *)0x0;
    puVar18 = (ulong *)0x0;
    goto code_r0x0001002257f8;
  }
  puVar18 = puVar13;
  if (iVar16 == 3) {
code_r0x000100225690:
    func_0x000100202674(param_4,param_5,plVar5);
    if (param_4 != 0) {
      puVar21 = (undefined8 *)plVar1[1];
      lVar9 = *plVar5;
      func_0x000100225a88(lVar9,(long)(int)plVar5[1],*puVar21,(long)*(int *)(puVar21 + 1));
      if ((int)lVar9 < 0) {
        plVar8 = plVar1 + 0x24;
        func_0x000100225b70(plVar8,plVar1 + 0xb,puVar21,plVar4);
        if (((int)plVar8 == 0) ||
           (plVar8 = plVar6, func_0x000100226ae4(plVar6,plVar5,plVar1[2],plVar1[0x24] + 0x18,plVar4)
           , (int)plVar8 == 0)) goto code_r0x0001002257f4;
        puVar7 = puVar18;
        func_0x00010022867c(puVar18,param_5,plVar6);
        if ((int)puVar7 == 0) {
          uVar12 = 0x44;
          uVar15 = 0x296;
        }
        else {
          if (iVar16 == 3) {
            *puVar11 = param_5;
code_r0x000100225850:
            puVar20 = (undefined1 *)0x1;
            goto code_r0x0001002257f8;
          }
          if (iVar16 == 1) {
            puVar7 = puVar13;
            func_0x0001007382a4(puVar13,puVar11,param_5,puVar18,param_5);
            if ((int)puVar7 != 0) goto code_r0x000100225850;
            uVar12 = 0x88;
            uVar15 = 0x2a9;
          }
          else {
            uVar12 = 0x8f;
            uVar15 = 0x2a4;
          }
        }
      }
      else {
        uVar12 = 0x73;
        uVar15 = 0x28c;
      }
      goto code_r0x0001002257f0;
    }
  }
  else {
    puVar7 = (ulong *)(param_5 + 8);
    func_0x000107c610a0();
    if (puVar7 != (ulong *)0x0) {
      puVar18 = puVar7 + 1;
      *puVar7 = param_5;
      goto code_r0x000100225690;
    }
    uVar12 = 0x41;
    uVar15 = 0x282;
    puVar18 = (ulong *)0x0;
code_r0x0001002257f0:
    func_0x0001004d2c58(4,0,uVar12,&UNK_10f6c7473,uVar15);
  }
code_r0x0001002257f4:
  puVar20 = (undefined1 *)0x0;
code_r0x0001002257f8:
  if ((char)plVar4[5] == '\0') {
    lVar9 = plVar4[2];
    plVar4[2] = lVar9 + -1;
    plVar4[4] = *(long *)(plVar4[1] + (lVar9 + -1) * 8);
  }
  func_0x000100226a68(plVar4);
  if (puVar18 != puVar13) {
    func_0x0001001e33e0(puVar18);
    return puVar20;
  }
  return puVar20;
}



/* Entry: 10ae2c748; end: 10ae2c9d7;  */

/* WARNING: Possible PIC construction at 0x00010ae2c848: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae2c84c) */

long FUN_10ae2c748(long param_1,long param_2,ulong *param_3,undefined8 param_4,ulong param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  code *pcVar15;
  ulong *unaff_x19;
  long unaff_x20;
  ulong *puVar16;
  long *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long lVar17;
  undefined8 unaff_x24;
  ulong unaff_x25;
  ulong uVar18;
  undefined8 *puVar19;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 *puVar20;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar17 = *(long *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x10);
  plVar2 = *(long **)(lVar4 + 8);
  if ((*(long *)(lVar4 + 0x10) == 0) ||
     (pcVar15 = *(code **)(*(long *)(lVar4 + 0x10) + 0x60), pcVar15 == (code *)0x0)) {
    uVar18 = 0;
  }
  else {
    (*pcVar15)();
    uVar18 = (ulong)(int)lVar4;
  }
  if (param_2 == 0) {
    *param_3 = uVar18;
    return 1;
  }
  uVar11 = *param_3;
  if (uVar11 < uVar18) {
    func_0x000107c2b29c(6,0,100,&UNK_10f6c6377,0x13f);
    return 0;
  }
  iVar3 = *(int *)(lVar17 + 0x10);
  uVar10 = param_4;
  uVar14 = param_5;
  if (iVar3 == 4) {
    lVar4 = lVar17;
    FUN_10ae2ca20(lVar17,param_1);
    if ((int)lVar4 == 0) {
      return lVar4;
    }
    lVar4 = *(long *)(lVar17 + 0x30);
    FUN_10ae3a030(lVar4,uVar18,param_4,param_5,*(undefined8 *)(lVar17 + 0x38),
                  *(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x18),
                  *(undefined8 *)(lVar17 + 0x20));
    if ((int)lVar4 == 0) {
      return lVar4;
    }
    uVar11 = *param_3;
    iVar3 = 3;
    unaff_x30 = 0x10ae2c84c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    uVar10 = *(undefined8 *)(lVar17 + 0x30);
    uVar14 = uVar18;
    unaff_x19 = param_3;
    unaff_x20 = param_2;
    unaff_x21 = plVar2;
    unaff_x22 = param_5;
    unaff_x23 = lVar17;
    unaff_x24 = param_4;
    unaff_x25 = uVar18;
    unaff_x26 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  plVar5 = plVar2;
  func_0x000107c2b4e8();
  if ((int)plVar5 == 0) {
    return 0;
  }
  if (*(code **)(*plVar2 + 0x20) == (code *)0x0) {
    plVar6 = (long *)plVar2[1];
    func_0x000107c2b32c();
    plVar5 = (long *)(ulong)((int)plVar6 + 7U >> 3);
  }
  else {
    plVar6 = plVar2;
    (**(code **)(*plVar2 + 0x20))();
    plVar5 = plVar6;
  }
  if (uVar11 < ((ulong)plVar5 & 0xffffffff)) {
    func_0x000107c2b29c(4,0,0x87,&UNK_10f6c7473,0x115);
    return 0;
  }
  func_0x000107c2b344();
  if (plVar6 == (long *)0x0) {
    lVar4 = 0;
    puVar16 = (ulong *)0x0;
    goto LAB_10ae3ab14;
  }
  uVar18 = (ulong)plVar5 & 0xffffffff;
  func_0x000107c2b34c();
  plVar7 = plVar6;
  func_0x000107c2b350();
  plVar8 = plVar6;
  func_0x000107c2b350();
  puVar9 = (ulong *)(uVar18 + 8);
  _malloc();
  if (puVar9 == (ulong *)0x0) {
    puVar16 = (ulong *)0x0;
LAB_10ae3aad0:
    puVar12 = &UNK_10f6c7473;
    uVar10 = 0x41;
    uVar13 = 0x123;
LAB_10ae3aae8:
    func_0x000107c2b29c(4,0,uVar10,puVar12,uVar13);
LAB_10ae3aaec:
    lVar4 = 0;
  }
  else {
    *(long **)((long)register0x00000008 + -0x68) = plVar8;
    puVar16 = puVar9 + 1;
    *puVar9 = uVar18;
    if ((plVar7 == (long *)0x0) || (*(long *)((long)register0x00000008 + -0x68) == 0))
    goto LAB_10ae3aad0;
    if (iVar3 != 4) {
      if (iVar3 == 3) {
        *(long **)((long)register0x00000008 + -0x78) = plVar7;
        puVar9 = puVar16;
        FUN_10ae39fc0(puVar16,uVar18,uVar10,uVar14);
        iVar3 = (int)puVar9;
        goto LAB_10ae3ab84;
      }
      if (iVar3 == 1) {
        if ((uint)plVar5 < 0xb) {
          puVar12 = &UNK_10f6c7379;
          uVar10 = 0x7e;
          uVar13 = 0xa8;
          goto LAB_10ae3aae8;
        }
        if (uVar18 - 0xb < uVar14) {
          puVar12 = &UNK_10f6c7379;
          uVar10 = 0x72;
          uVar13 = 0xad;
          goto LAB_10ae3aae8;
        }
        *(ulong *)((long)register0x00000008 + -0x80) = uVar18;
        *(long **)((long)register0x00000008 + -0x78) = plVar7;
        *(ulong *)((long)register0x00000008 + -0x88) = -uVar14;
        *(undefined2 *)(puVar9 + 1) = 0x200;
        lVar17 = (uVar18 - uVar14) + -3;
        lVar4 = (long)puVar9 + 10;
        *(long *)((long)register0x00000008 + -0x70) = lVar17;
        func_0x000107c2b3c4(lVar4,lVar17,&UNK_10e525a20);
        lVar17 = 0;
        do {
          while (*(char *)(lVar4 + lVar17) == '\0') {
            func_0x000107c2b3c4(lVar4 + lVar17,1,&UNK_10e525a20);
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 != *(long *)((long)register0x00000008 + -0x70));
        *(undefined1 *)((long)puVar16 + *(long *)((long)register0x00000008 + -0x70) + 2) = 0;
        uVar18 = *(ulong *)((long)register0x00000008 + -0x80);
        if (uVar14 != 0) {
          _memcpy((long)puVar16 + *(long *)((long)register0x00000008 + -0x88) + uVar18,uVar10,uVar14
                 );
        }
        goto LAB_10ae3ab88;
      }
      puVar12 = &UNK_10f6c7473;
      uVar10 = 0x8f;
      uVar13 = 0x134;
      goto LAB_10ae3aae8;
    }
    *(long **)((long)register0x00000008 + -0x78) = plVar7;
    puVar9 = puVar16;
    FUN_10ae3a030(puVar16,uVar18,uVar10,uVar14,0,0,0,0);
    iVar3 = (int)puVar9;
LAB_10ae3ab84:
    if (iVar3 == 0) goto LAB_10ae3aaec;
LAB_10ae3ab88:
    puVar20 = *(undefined8 **)((long)register0x00000008 + -0x78);
    puVar9 = puVar16;
    func_0x000107c2b338(puVar16,uVar18,puVar20);
    if (puVar9 == (ulong *)0x0) goto LAB_10ae3aaec;
    puVar19 = (undefined8 *)plVar2[1];
    uVar10 = *puVar20;
    func_0x000107c34f78(uVar10,(long)*(int *)(puVar20 + 1),*puVar19,(long)*(int *)(puVar19 + 1));
    if (-1 < (int)uVar10) {
      puVar12 = &UNK_10f6c7473;
      uVar10 = 0x73;
      uVar13 = 0x142;
      goto LAB_10ae3aae8;
    }
    plVar5 = plVar2 + 0x24;
    func_0x000107c2b3a8(plVar5,plVar2 + 0xb,puVar19,plVar6);
    if ((int)plVar5 == 0) goto LAB_10ae3aaec;
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x68);
    uVar10 = uVar13;
    func_0x000107c2b374(uVar13,puVar20,plVar2[2],plVar2[0x24] + 0x18,plVar6);
    if ((int)uVar10 == 0) goto LAB_10ae3aaec;
    func_0x000107c2b33c(param_2,uVar18,uVar13);
    if ((int)param_2 == 0) {
      puVar12 = &UNK_10f6c7473;
      uVar10 = 0x44;
      uVar13 = 0x14e;
      goto LAB_10ae3aae8;
    }
    *param_3 = uVar18;
    lVar4 = 1;
  }
  if ((char)plVar6[5] == '\0') {
    lVar17 = plVar6[2];
    plVar6[2] = lVar17 + -1;
    plVar6[4] = *(long *)(plVar6[1] + (lVar17 + -1) * 8);
  }
  func_0x000107c2b348(plVar6);
LAB_10ae3ab14:
  func_0x000107c2b534(puVar16);
  return lVar4;
}



/* Entry: 10ae2c9d8; end: 10ae2ca1f;  */

undefined8 * FUN_10ae2c9d8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (((param_1 == (undefined8 *)0x0) || (piVar3 = (int *)*param_1, piVar3 == (int *)0x0)) ||
     (*(code **)(piVar3 + 0x1c) == (code *)0x0)) {
    uVar1 = 0x65;
    uVar2 = 0xc1;
  }
  else if (*piVar3 == 6) {
    if (*(int *)(param_1 + 4) == 0) {
      uVar1 = 0x7b;
      uVar2 = 0xca;
    }
    else {
      if (*(int *)(param_1 + 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100224a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(piVar3 + 0x1c))(param_1,0x1001,param_2,0);
        return param_1;
      }
      uVar1 = 0x72;
      uVar2 = 0xcf;
    }
  }
  else {
    uVar1 = 0x7d;
    uVar2 = 0xc5;
  }
  func_0x0001004d2c58(6,0,uVar1,&UNK_10f6c60a7,uVar2);
  return (undefined8 *)0x0;
}



/* Entry: 10ae2ca20; end: 10ae2cbf3;  */

bool FUN_10ae2ca20(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    return true;
  }
  lVar1 = *(long *)(param_2 + 0x10);
  if (((lVar1 == 0) || (*(long *)(lVar1 + 0x10) == 0)) ||
     (pcVar4 = *(code **)(*(long *)(lVar1 + 0x10) + 0x60), pcVar4 == (code *)0x0)) {
    lVar1 = 0;
  }
  else {
    (*pcVar4)();
    if (0xfffffff7 < (uint)lVar1) {
      plVar3 = (long *)0x0;
      goto LAB_10ae2ca88;
    }
    lVar1 = (long)(int)(uint)lVar1;
  }
  plVar2 = (long *)(lVar1 + 8);
  _malloc();
  plVar3 = plVar2;
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2 + 1;
    *plVar2 = lVar1;
  }
LAB_10ae2ca88:
  *(long **)(param_1 + 0x30) = plVar3;
  return plVar3 != (long *)0x0;
}



/* Entry: 10ae2cbf4; end: 10ae2cccb;  */

undefined8 FUN_10ae2cbf4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lVar1 = param_2;
  func_0x000107c34f50(param_2,auStack_40,5,1);
  if ((((int)lVar1 == 0) || (lStack_38 != 0)) || (*(long *)(param_2 + 8) != 0)) {
    func_0x000107c2b29c(6,0,0x66,&UNK_10f6c63e9,0x8c);
  }
  else {
    lVar1 = param_3;
    FUN_10ae48a24();
    if ((lVar1 != 0) && (*(long *)(param_3 + 8) == 0)) {
      lVar2 = param_1;
      func_0x000107c2b2c4(param_1,6);
      if ((int)lVar2 != 0) {
        *(long *)(param_1 + 8) = lVar1;
      }
      return 1;
    }
    func_0x000107c2b29c(6,0,0x66,&UNK_10f6c63e9,0x92);
    func_0x000107c2b4d0(lVar1);
  }
  return 0;
}



/* Entry: 10ae2cccc; end: 10ae2cdc7;  */

undefined8 FUN_10ae2cccc(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  iVar1 = (int)auStack_c0;
  uVar2 = param_1;
  func_0x000107c2b214(param_1,auStack_40,0x20000010);
  if ((int)uVar2 != 0) {
    puVar3 = auStack_40;
    FUN_10ae1fb3c(puVar3,0);
    if ((int)puVar3 != 0) {
      puVar3 = auStack_40;
      func_0x000107c2b214(puVar3,auStack_60,0x20000010);
      if ((int)puVar3 != 0) {
        puVar3 = auStack_60;
        func_0x000107c2b214(puVar3,auStack_80,6);
        if ((int)puVar3 != 0) {
          puVar3 = auStack_80;
          func_0x000107c2b21c(puVar3,&UNK_110c7caa4,9);
          if ((int)puVar3 != 0) {
            puVar3 = auStack_60;
            func_0x000107c2b214(puVar3,auStack_a0,5);
            if ((int)puVar3 != 0) {
              puVar3 = auStack_40;
              func_0x000107c2b214(puVar3,auStack_c0,4);
              if ((((int)puVar3 != 0) &&
                  (func_0x00010ae48bd0(auStack_c0,*(undefined8 *)(param_2 + 8)), iVar1 != 0)) &&
                 (func_0x000107c2b20c(), (int)param_1 != 0)) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  func_0x000107c2b29c(6,0,0x69,&UNK_10f6c63e9,0x7f);
  return 0;
}


