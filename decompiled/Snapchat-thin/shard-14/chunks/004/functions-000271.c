/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1d62e4; end: 10b1d6327;  */

void FUN_10b1d62e4(long param_1)

{
  long unaff_x21;
  
  func_0x00010b1ebf60();
  if (unaff_x21 != 0) {
    func_0x00010b1ec018();
    while (param_1 != unaff_x21) {
      param_1 = param_1 + -0x60;
      FUN_10b1de578();
    }
    func_0x00010b1eb23c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1d6328; end: 10b1d636f;  */

void FUN_10b1d6328(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010b1eada8();
  *(undefined1 *)(param_1 + 0x68) = 0;
  if (*(char *)(param_2 + 0x68) == '\x01') {
    func_0x00010b1ebec8();
    FUN_10b1d6370();
    *(undefined1 *)(unaff_x19 + 0x68) = 1;
  }
  return;
}



/* Entry: 10b1d6370; end: 10b1d63b7;  */

void FUN_10b1d6370(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb648();
  func_0x000107c279a0();
  func_0x00010b1eba60();
  func_0x000107c279a0(unaff_x19 + 0x40,unaff_x20 + 0x40);
  return;
}



/* Entry: 10b1d63b8; end: 10b1d63d7;  */

void FUN_10b1d63b8(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_10b1de578();
  }
  return;
}



/* Entry: 10b1d63d8; end: 10b1d63fb;  */

void FUN_10b1d63d8(void)

{
  func_0x00010b1eb198();
  FUN_10b1d62e4();
  return;
}



/* Entry: 10b1d63fc; end: 10b1d6453;  */

void FUN_10b1d63fc(long param_1)

{
  long unaff_x19;
  ulong unaff_x20;
  
  func_0x00010b1eb538();
  func_0x00010b1eb7a8();
  if (*(char *)(param_1 + 0x70) != '\0') {
    FUN_10b1d6184(unaff_x19 + 0x10);
  }
  FUN_10b1d63b8(unaff_x20 | 8);
  func_0x00010b1ebc2c();
  func_0x000107c31408();
  FUN_10b1d63b8(unaff_x19 + 0x10);
  return;
}



/* Entry: 10b1d6454; end: 10b1d6473;  */

void FUN_10b1d6454(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b1d63d8();
  }
  return;
}



/* Entry: 10b1d6474; end: 10b1d64ab;  */

void FUN_10b1d6474(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010b1eb07c();
  if (!(bool)in_ZR) {
    func_0x00010b1eb014((&PTR_FUN_110cc3a68)[extraout_x8]);
  }
  func_0x00010b1eb924();
  return;
}



/* Entry: 10b1d64ac; end: 10b1d64b7;  */

void FUN_10b1d64ac(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10b1d63d8();
  }
  return;
}



/* Entry: 10b1d64b8; end: 10b1d651f;  */

undefined8 *
FUN_10b1d64b8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10 != 0);
  }
  FUN_10b121d70(param_1 + 2,param_3);
  func_0x00010b121d94(param_1 + 8,param_4);
  func_0x00010b121db8(param_1 + 0xe,param_5);
  return param_1;
}



/* Entry: 10b1d6520; end: 10b1d65a7;  */

void FUN_10b1d6520(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x00010b1286a4();
  }
  return;
}



/* Entry: 10b1d65a8; end: 10b1d65cf;  */

long FUN_10b1d65a8(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
            (param_1 + (ulong)*(byte *)(param_1 + 0x28) * 8);
  return param_1;
}



/* Entry: 10b1d65d0; end: 10b1d65f7;  */

void FUN_10b1d65d0(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_10b1d65f8();
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10b1d65f8; end: 10b1d6617;  */

void FUN_10b1d65f8(void)

{
  func_0x000107c35104();
  FUN_10b1d6618();
  return;
}



/* Entry: 10b1d6618; end: 10b1d662f;  */

void FUN_10b1d6618(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10b212a04(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1d6630; end: 10b1d6667;  */

void FUN_10b1d6630(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10b212a04(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1d6668; end: 10b1d66ab;  */

long FUN_10b1d6668(long param_1)

{
  FUN_10b1e4868(param_1 + 0x2d0);
  func_0x00010b125864(param_1 + 0x2c0);
  func_0x00010b1d3e60(param_1 + 0x298);
  func_0x00010b0fe8e8(param_1 + 0x288);
  func_0x00010b121af0(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b1d66ac; end: 10b1d6747;  */

void FUN_10b1d66ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x00010b1eb648();
  func_0x00010b125750();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar1 = *(long *)(unaff_x20 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10 != 0);
  }
  lVar1 = *(long *)(unaff_x20 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x19 + 0x58) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107c27994(unaff_x19 + 0x68,unaff_x20 + 0x68);
  *(undefined1 *)(unaff_x19 + 0x80) = *(undefined1 *)(unaff_x20 + 0x80);
  return;
}



/* Entry: 10b1d6748; end: 10b1d67d3;  */

undefined8 FUN_10b1d6748(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x21;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x00010b1ebbb0();
  func_0x00010802f8dc();
  func_0x00010b1ec828();
  func_0x00010802f9a0(auStack_58);
  *puStack_48 = *unaff_x21;
  puStack_48[1] = *param_3;
  puStack_48 = puStack_48 + 2;
  func_0x00010b1eb918();
  func_0x00010802f91c();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010802fa28(auStack_58);
  return uVar1;
}



/* Entry: 10b1d67d4; end: 10b1d67fb;  */

void FUN_10b1d67d4(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong uVar9;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong extraout_x9_06;
  ulong extraout_x9_07;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  ulong *puVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *unaff_x19;
  ulong *unaff_x20;
  bool bVar20;
  ulong uVar21;
  ulong *puVar22;
  
  if (param_1 == param_2) {
    return;
  }
  puVar8 = (ulong *)(LZCOUNT(param_2 - param_1 >> 4) << 1 ^ 0x7e);
  bVar20 = true;
  func_0x00010b1eb648();
  do {
    puVar7 = unaff_x20 + -2;
    puVar14 = unaff_x19;
LAB_10b1d683c:
    unaff_x19 = puVar14;
    uVar21 = (long)unaff_x20 - (long)unaff_x19 >> 4;
    switch(uVar21) {
    case 0:
    case 1:
      goto LAB_10b1eb800;
    case 2:
      func_0x00010b1ed1b4(unaff_x20[-2]);
      uVar12 = extraout_w10;
      if (extraout_x8 != extraout_x9) {
        uVar12 = (uint)(extraout_x8 < extraout_x9);
      }
      if (uVar12 != 1) {
        return;
      }
      func_0x00010b1ed3a0();
      return;
    case 3:
      puVar8 = unaff_x19 + 2;
      func_0x00010b1ed5b0();
      uVar21 = *puVar8;
      uVar9 = *unaff_x19;
      bVar20 = puVar8[1] < unaff_x19[1];
      if (uVar21 != uVar9) {
        bVar20 = uVar21 < uVar9;
      }
      uVar13 = *puVar7;
      bVar4 = puVar7[1] < puVar8[1];
      if (uVar13 != uVar21) {
        bVar4 = uVar13 < uVar21;
      }
      if (bVar20) {
        if (bVar4) {
          *unaff_x19 = uVar13;
          *puVar7 = uVar9;
          uVar21 = unaff_x19[1];
          unaff_x19[1] = puVar7[1];
        }
        else {
          *unaff_x19 = uVar21;
          *puVar8 = uVar9;
          uVar13 = unaff_x19[1];
          unaff_x19[1] = puVar8[1];
          puVar8[1] = uVar13;
          uVar9 = *puVar8;
          uVar21 = *puVar7;
          bVar20 = puVar7[1] < uVar13;
          if (uVar21 != uVar9) {
            bVar20 = uVar21 < uVar9;
          }
          if (!bVar20) {
            return;
          }
          *puVar8 = uVar21;
          *puVar7 = uVar9;
          uVar21 = puVar8[1];
          puVar8[1] = puVar7[1];
        }
        puVar7[1] = uVar21;
      }
      else if (bVar4) {
        *puVar8 = uVar13;
        *puVar7 = uVar21;
        uVar21 = puVar8[1];
        puVar8[1] = puVar7[1];
        puVar7[1] = uVar21;
        func_0x00010b1ed1b4(*puVar8);
        uVar12 = extraout_w10_00;
        if (extraout_x8_00 != extraout_x9_00) {
          uVar12 = (uint)(extraout_x8_00 < extraout_x9_00);
        }
        if (uVar12 == 1) {
          *unaff_x19 = extraout_x8_00;
          *puVar8 = extraout_x9_00;
          uVar21 = unaff_x19[1];
          unaff_x19[1] = puVar8[1];
          puVar8[1] = uVar21;
          return;
        }
      }
      return;
    case 4:
      func_0x00010b1ee554();
      func_0x00010b1ed5b0(unaff_x19);
      func_0x00010b1eb324();
      FUN_10b1d6edc();
      func_0x00010b1ed1b4(*puVar8);
      uVar12 = extraout_w10_01;
      if (extraout_x8_01 != extraout_x9_01) {
        uVar12 = (uint)(extraout_x8_01 < extraout_x9_01);
      }
      if (uVar12 == 1) {
        func_0x00010b1ec29c();
        uVar12 = extraout_w10_02;
        if (extraout_x8_02 != extraout_x9_02) {
          uVar12 = (uint)(extraout_x8_02 < extraout_x9_02);
        }
        if (uVar12 == 1) {
          func_0x00010b1ec330();
          uVar12 = extraout_w10_03;
          if (extraout_x8_03 != extraout_x9_03) {
            uVar12 = (uint)(extraout_x8_03 < extraout_x9_03);
          }
          if (uVar12 == 1) {
            func_0x00010b1ecd64();
          }
        }
      }
      return;
    case 5:
      func_0x00010b1ee554();
      func_0x00010b1ed5b0(unaff_x19);
      func_0x00010b1eb324();
      FUN_10b1d6fe8();
      func_0x00010b1ed1b4(*puVar7);
      uVar12 = extraout_w10_04;
      if (extraout_x8_04 != extraout_x9_04) {
        uVar12 = (uint)(extraout_x8_04 < extraout_x9_04);
      }
      if (uVar12 == 1) {
        *puVar8 = extraout_x8_04;
        *puVar7 = extraout_x9_04;
        uVar21 = puVar8[1];
        puVar8[1] = puVar7[1];
        puVar7[1] = uVar21;
        func_0x00010b1ed1b4(*puVar8);
        uVar12 = extraout_w10_05;
        if (extraout_x8_05 != extraout_x9_05) {
          uVar12 = (uint)(extraout_x8_05 < extraout_x9_05);
        }
        if (uVar12 == 1) {
          func_0x00010b1ec29c();
          uVar12 = extraout_w10_06;
          if (extraout_x8_06 != extraout_x9_06) {
            uVar12 = (uint)(extraout_x8_06 < extraout_x9_06);
          }
          if (uVar12 == 1) {
            func_0x00010b1ec330();
            uVar12 = extraout_w10_07;
            if (extraout_x8_07 != extraout_x9_07) {
              uVar12 = (uint)(extraout_x8_07 < extraout_x9_07);
            }
            if (uVar12 == 1) {
              func_0x00010b1ecd64();
            }
          }
        }
      }
      return;
    }
    if ((long)uVar21 < 0x18) {
      if (bVar20 == false) {
        if (unaff_x19 == unaff_x20) {
          return;
        }
        puVar8 = unaff_x19 + 3;
        while (unaff_x19 + 2 != unaff_x20) {
          uVar21 = unaff_x19[2];
          uVar13 = unaff_x19[3];
          uVar9 = *unaff_x19;
          bVar20 = uVar13 < unaff_x19[1];
          if (uVar21 != uVar9) {
            bVar20 = uVar21 < uVar9;
          }
          puVar14 = puVar8;
          if (bVar20) {
            do {
              puVar7 = puVar14;
              puVar7[-1] = uVar9;
              *puVar7 = puVar7[-2];
              uVar9 = puVar7[-5];
              bVar20 = uVar13 < puVar7[-4];
              if (uVar21 != uVar9) {
                bVar20 = uVar21 < uVar9;
              }
              puVar14 = puVar7 + -2;
            } while (bVar20);
            puVar7[-3] = uVar21;
            puVar7[-2] = uVar13;
          }
          puVar8 = puVar8 + 2;
          unaff_x19 = unaff_x19 + 2;
        }
        return;
      }
      if (unaff_x19 == unaff_x20) {
        return;
      }
      lVar15 = 0;
      puVar8 = unaff_x19;
      break;
    }
    if (puVar8 == (ulong *)0x0) {
      if (unaff_x19 == unaff_x20) {
        return;
      }
      uVar9 = uVar21 - 2 >> 1;
      puVar8 = unaff_x19 + uVar9 * 2;
      do {
        FUN_10b1d7290(unaff_x19,uVar21,puVar8);
        uVar9 = uVar9 - 1;
        puVar8 = puVar8 + -2;
      } while (-1 < (long)uVar9);
      do {
        if ((long)uVar21 < 2) {
          return;
        }
        uVar18 = 0;
        uVar9 = *unaff_x19;
        uVar13 = unaff_x19[1];
        puVar8 = unaff_x19;
        do {
          puVar14 = puVar8 + uVar18 * 2 + 2;
          uVar1 = uVar18 << 1 | 1;
          uVar11 = uVar18 * 2 + 2;
          if ((long)uVar11 < (long)uVar21) {
            uVar19 = puVar8[uVar18 * 2 + 4];
            uVar2 = puVar8[uVar18 * 2 + 2];
            bVar20 = puVar8[uVar18 * 2 + 3] < puVar8[uVar18 * 2 + 5];
            if (uVar2 != uVar19) {
              bVar20 = uVar2 < uVar19;
            }
            puVar7 = puVar8 + uVar18 * 2 + 4;
            uVar18 = uVar11;
            if (!bVar20) {
              puVar7 = puVar14;
              uVar18 = uVar1;
              uVar19 = uVar2;
            }
          }
          else {
            puVar7 = puVar14;
            uVar18 = uVar1;
            uVar19 = *puVar14;
          }
          *puVar8 = uVar19;
          puVar8[1] = puVar7[1];
          puVar8 = puVar7;
        } while ((long)uVar18 <= (long)(uVar21 - 2 >> 1));
        if (puVar7 == unaff_x20 + -2) {
          *puVar7 = uVar9;
          puVar7[1] = uVar13;
        }
        else {
          *puVar7 = unaff_x20[-2];
          puVar7[1] = unaff_x20[-1];
          unaff_x20[-2] = uVar9;
          unaff_x20[-1] = uVar13;
          lVar15 = (long)puVar7 + (0x10 - (long)unaff_x19) >> 4;
          if (1 < lVar15) {
            uVar11 = lVar15 - 2U >> 1;
            puVar8 = unaff_x19 + uVar11 * 2;
            uVar9 = *puVar8;
            uVar13 = *puVar7;
            uVar18 = puVar7[1];
            bVar20 = puVar8[1] < uVar18;
            if (uVar9 != uVar13) {
              bVar20 = uVar9 < uVar13;
            }
            if (bVar20) {
              do {
                puVar14 = puVar8;
                *puVar7 = uVar9;
                puVar7[1] = puVar14[1];
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1 >> 1;
                puVar8 = unaff_x19 + uVar11 * 2;
                uVar9 = *puVar8;
                bVar20 = puVar8[1] < uVar18;
                if (uVar9 != uVar13) {
                  bVar20 = uVar9 < uVar13;
                }
                puVar7 = puVar14;
              } while (bVar20);
              *puVar14 = uVar13;
              puVar14[1] = uVar18;
            }
          }
        }
        uVar21 = uVar21 - 1;
        unaff_x20 = unaff_x20 + -2;
      } while( true );
    }
    puVar14 = unaff_x19 + (uVar21 & 0xfffffffffffffffe);
    if (uVar21 < 0x81) {
      func_0x00010b1eded8(puVar14,unaff_x19);
    }
    else {
      func_0x00010b1eded8(unaff_x19,puVar14);
      FUN_10b1d6edc(unaff_x19 + 2,puVar14 + -2,unaff_x20 + -4);
      FUN_10b1d6edc(unaff_x19 + 4,puVar14 + 2,unaff_x20 + -6);
      FUN_10b1d6edc(puVar14 + -2,puVar14,puVar14 + 2);
      uVar9 = unaff_x19[1];
      uVar21 = *unaff_x19;
      uVar13 = *puVar14;
      unaff_x19[1] = puVar14[1];
      *unaff_x19 = uVar13;
      puVar14[1] = uVar9;
      *puVar14 = uVar21;
    }
    puVar8 = (ulong *)((long)puVar8 + -1);
    uVar21 = *unaff_x19;
    if (bVar20) {
      uVar9 = unaff_x19[1];
    }
    else {
      uVar9 = unaff_x19[1];
      bVar4 = unaff_x19[-1] < uVar9;
      if (unaff_x19[-2] != uVar21) {
        bVar4 = unaff_x19[-2] < uVar21;
      }
      if (!bVar4) {
        bVar20 = uVar9 < unaff_x20[-1];
        if (uVar21 != unaff_x20[-2]) {
          bVar20 = uVar21 < unaff_x20[-2];
        }
        puVar5 = unaff_x19;
        if (bVar20) {
          do {
            puVar14 = puVar5 + 2;
            bVar20 = uVar9 < puVar5[3];
            if (uVar21 != *puVar14) {
              bVar20 = uVar21 < *puVar14;
            }
            puVar5 = puVar14;
          } while (!bVar20);
        }
        else {
          do {
            puVar14 = puVar5 + 2;
            if (unaff_x20 <= puVar14) break;
            bVar20 = uVar9 < puVar5[3];
            if (uVar21 != *puVar14) {
              bVar20 = uVar21 < *puVar14;
            }
            puVar5 = puVar14;
          } while (!bVar20);
        }
        puVar5 = unaff_x20;
        puVar6 = unaff_x20;
        if (puVar14 < unaff_x20) {
          do {
            puVar5 = puVar6 + -2;
            bVar20 = uVar9 < puVar6[-1];
            if (uVar21 != *puVar5) {
              bVar20 = uVar21 < *puVar5;
            }
            puVar6 = puVar5;
          } while (bVar20);
        }
        while (puVar14 < puVar5) {
          uVar13 = *puVar14;
          *puVar14 = *puVar5;
          *puVar5 = uVar13;
          uVar13 = puVar14[1];
          puVar14[1] = puVar5[1];
          puVar5[1] = uVar13;
          puVar6 = puVar14;
          do {
            puVar14 = puVar6 + 2;
            bVar20 = uVar9 < puVar6[3];
            if (uVar21 != *puVar14) {
              bVar20 = uVar21 < *puVar14;
            }
            puVar10 = puVar5;
            puVar6 = puVar14;
          } while (!bVar20);
          do {
            puVar5 = puVar10 + -2;
            bVar20 = uVar9 < puVar10[-1];
            if (uVar21 != *puVar5) {
              bVar20 = uVar21 < *puVar5;
            }
            puVar10 = puVar5;
          } while (bVar20);
        }
        if (unaff_x19 != puVar14 + -2) {
          *unaff_x19 = puVar14[-2];
          unaff_x19[1] = puVar14[-1];
        }
        bVar20 = false;
        puVar14[-2] = uVar21;
        puVar14[-1] = uVar9;
        goto LAB_10b1d683c;
      }
    }
    lVar15 = 0;
    do {
      uVar13 = *(ulong *)((long)unaff_x19 + lVar15 + 0x10);
      bVar4 = *(ulong *)((long)unaff_x19 + lVar15 + 0x18) < uVar9;
      if (uVar13 != uVar21) {
        bVar4 = uVar13 < uVar21;
      }
      lVar15 = lVar15 + 0x10;
    } while (bVar4);
    puVar5 = (ulong *)((long)unaff_x19 + lVar15);
    puVar6 = unaff_x20;
    puVar14 = puVar5;
    if (lVar15 == 0x10) {
      do {
        puVar10 = puVar6;
        if (puVar6 <= puVar5) break;
        puVar10 = puVar6 + -2;
        bVar4 = puVar6[-1] < uVar9;
        if (*puVar10 != uVar21) {
          bVar4 = *puVar10 < uVar21;
        }
        puVar6 = puVar10;
      } while (!bVar4);
    }
    else {
      do {
        puVar10 = puVar6 + -2;
        bVar4 = puVar6[-1] < uVar9;
        if (*puVar10 != uVar21) {
          bVar4 = *puVar10 < uVar21;
        }
        puVar6 = puVar10;
      } while (!bVar4);
    }
    while (puVar14 < puVar10) {
      *puVar14 = *puVar10;
      *puVar10 = uVar13;
      uVar13 = puVar14[1];
      puVar14[1] = puVar10[1];
      puVar10[1] = uVar13;
      puVar22 = puVar14;
      do {
        puVar14 = puVar22 + 2;
        uVar13 = *puVar14;
        bVar4 = puVar22[3] < uVar9;
        if (uVar13 != uVar21) {
          bVar4 = uVar13 < uVar21;
        }
        puVar16 = puVar10;
        puVar22 = puVar14;
      } while (bVar4);
      do {
        puVar10 = puVar16 + -2;
        bVar4 = puVar16[-1] < uVar9;
        if (*puVar10 != uVar21) {
          bVar4 = *puVar10 < uVar21;
        }
        puVar16 = puVar10;
      } while (!bVar4);
    }
    puVar10 = puVar14 + -2;
    if (unaff_x19 != puVar10) {
      *unaff_x19 = puVar14[-2];
      unaff_x19[1] = puVar14[-1];
    }
    puVar14[-2] = uVar21;
    puVar14[-1] = uVar9;
    if (puVar5 < puVar6) goto LAB_10b1d6a38;
    puVar5 = unaff_x19;
    FUN_10b1d7110(unaff_x19,puVar10);
    puVar6 = puVar14;
    FUN_10b1d7110(puVar14,unaff_x20);
    if ((int)puVar6 == 0) goto code_r0x00010b1d6a34;
    unaff_x20 = puVar10;
    if (((ulong)puVar5 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10b1d6c4c:
  if (puVar8 + 2 == unaff_x20) {
LAB_10b1eb800:
    return;
  }
  uVar21 = puVar8[2];
  uVar13 = puVar8[3];
  uVar9 = *puVar8;
  bVar20 = uVar13 < puVar8[1];
  if (uVar21 != uVar9) {
    bVar20 = uVar21 < uVar9;
  }
  lVar3 = lVar15;
  if (bVar20) {
    do {
      lVar17 = lVar3;
      *(ulong *)((long)unaff_x19 + lVar17 + 0x10) = uVar9;
      *(undefined8 *)((long)unaff_x19 + lVar17 + 0x18) =
           *(undefined8 *)((long)unaff_x19 + lVar17 + 8);
      puVar14 = unaff_x19;
      if (lVar17 == 0) goto LAB_10b1d6cc0;
      uVar9 = *(ulong *)((long)unaff_x19 + lVar17 + -0x10);
      bVar20 = uVar13 < *(ulong *)((long)unaff_x19 + lVar17 + -8);
      if (uVar21 != uVar9) {
        bVar20 = uVar21 < uVar9;
      }
      lVar3 = lVar17 + -0x10;
    } while (bVar20);
    puVar14 = (ulong *)((long)unaff_x19 + lVar17);
LAB_10b1d6cc0:
    *puVar14 = uVar21;
    puVar14[1] = uVar13;
  }
  lVar15 = lVar15 + 0x10;
  puVar8 = puVar8 + 2;
  goto LAB_10b1d6c4c;
code_r0x00010b1d6a34:
  if (((ulong)puVar5 & 1) == 0) {
LAB_10b1d6a38:
    FUN_10b1d67fc(unaff_x19,puVar10,param_3,puVar8,bVar20);
    bVar20 = false;
  }
  goto LAB_10b1d683c;
}



/* Entry: 10b1d67fc; end: 10b1d6edb;  */

void FUN_10b1d67fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                  uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong uVar10;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong extraout_x9_06;
  ulong extraout_x9_07;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  ulong *puVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong uVar20;
  ulong *puVar21;
  
  func_0x00010b1eb648();
  do {
    puVar9 = unaff_x20 + -2;
    puVar8 = unaff_x19;
LAB_10b1d683c:
    unaff_x19 = puVar8;
    uVar20 = (long)unaff_x20 - (long)unaff_x19 >> 4;
    switch(uVar20) {
    case 0:
    case 1:
      goto LAB_10b1eb800;
    case 2:
      func_0x00010b1ed1b4(unaff_x20[-2]);
      uVar13 = extraout_w10;
      if (extraout_x8 != extraout_x9) {
        uVar13 = (uint)(extraout_x8 < extraout_x9);
      }
      if (uVar13 != 1) {
        return;
      }
      func_0x00010b1ed3a0();
      return;
    case 3:
      puVar8 = unaff_x19 + 2;
      func_0x00010b1ed5b0();
      uVar20 = *puVar8;
      uVar10 = *unaff_x19;
      bVar4 = puVar8[1] < unaff_x19[1];
      if (uVar20 != uVar10) {
        bVar4 = uVar20 < uVar10;
      }
      uVar14 = *puVar9;
      bVar5 = puVar9[1] < puVar8[1];
      if (uVar14 != uVar20) {
        bVar5 = uVar14 < uVar20;
      }
      if (bVar4) {
        if (bVar5) {
          *unaff_x19 = uVar14;
          *puVar9 = uVar10;
          uVar20 = unaff_x19[1];
          unaff_x19[1] = puVar9[1];
        }
        else {
          *unaff_x19 = uVar20;
          *puVar8 = uVar10;
          uVar14 = unaff_x19[1];
          unaff_x19[1] = puVar8[1];
          puVar8[1] = uVar14;
          uVar10 = *puVar8;
          uVar20 = *puVar9;
          bVar4 = puVar9[1] < uVar14;
          if (uVar20 != uVar10) {
            bVar4 = uVar20 < uVar10;
          }
          if (!bVar4) {
            return;
          }
          *puVar8 = uVar20;
          *puVar9 = uVar10;
          uVar20 = puVar8[1];
          puVar8[1] = puVar9[1];
        }
        puVar9[1] = uVar20;
      }
      else if (bVar5) {
        *puVar8 = uVar14;
        *puVar9 = uVar20;
        uVar20 = puVar8[1];
        puVar8[1] = puVar9[1];
        puVar9[1] = uVar20;
        func_0x00010b1ed1b4(*puVar8);
        uVar13 = extraout_w10_00;
        if (extraout_x8_00 != extraout_x9_00) {
          uVar13 = (uint)(extraout_x8_00 < extraout_x9_00);
        }
        if (uVar13 == 1) {
          *unaff_x19 = extraout_x8_00;
          *puVar8 = extraout_x9_00;
          uVar20 = unaff_x19[1];
          unaff_x19[1] = puVar8[1];
          puVar8[1] = uVar20;
          return;
        }
      }
      return;
    case 4:
      func_0x00010b1ee554();
      func_0x00010b1ed5b0(unaff_x19);
      func_0x00010b1eb324();
      FUN_10b1d6edc();
      func_0x00010b1ed1b4(*param_4);
      uVar13 = extraout_w10_01;
      if (extraout_x8_01 != extraout_x9_01) {
        uVar13 = (uint)(extraout_x8_01 < extraout_x9_01);
      }
      if (uVar13 == 1) {
        func_0x00010b1ec29c();
        uVar13 = extraout_w10_02;
        if (extraout_x8_02 != extraout_x9_02) {
          uVar13 = (uint)(extraout_x8_02 < extraout_x9_02);
        }
        if (uVar13 == 1) {
          func_0x00010b1ec330();
          uVar13 = extraout_w10_03;
          if (extraout_x8_03 != extraout_x9_03) {
            uVar13 = (uint)(extraout_x8_03 < extraout_x9_03);
          }
          if (uVar13 == 1) {
            func_0x00010b1ecd64();
          }
        }
      }
      return;
    case 5:
      func_0x00010b1ee554();
      func_0x00010b1ed5b0(unaff_x19);
      func_0x00010b1eb324();
      FUN_10b1d6fe8();
      func_0x00010b1ed1b4(*puVar9);
      uVar13 = extraout_w10_04;
      if (extraout_x8_04 != extraout_x9_04) {
        uVar13 = (uint)(extraout_x8_04 < extraout_x9_04);
      }
      if (uVar13 == 1) {
        *param_4 = extraout_x8_04;
        *puVar9 = extraout_x9_04;
        uVar20 = param_4[1];
        param_4[1] = puVar9[1];
        puVar9[1] = uVar20;
        func_0x00010b1ed1b4(*param_4);
        uVar13 = extraout_w10_05;
        if (extraout_x8_05 != extraout_x9_05) {
          uVar13 = (uint)(extraout_x8_05 < extraout_x9_05);
        }
        if (uVar13 == 1) {
          func_0x00010b1ec29c();
          uVar13 = extraout_w10_06;
          if (extraout_x8_06 != extraout_x9_06) {
            uVar13 = (uint)(extraout_x8_06 < extraout_x9_06);
          }
          if (uVar13 == 1) {
            func_0x00010b1ec330();
            uVar13 = extraout_w10_07;
            if (extraout_x8_07 != extraout_x9_07) {
              uVar13 = (uint)(extraout_x8_07 < extraout_x9_07);
            }
            if (uVar13 == 1) {
              func_0x00010b1ecd64();
            }
          }
        }
      }
      return;
    }
    if ((long)uVar20 < 0x18) {
      if ((param_5 & 1) == 0) {
        if (unaff_x19 == unaff_x20) {
          return;
        }
        puVar8 = unaff_x19 + 3;
        while (unaff_x19 + 2 != unaff_x20) {
          uVar20 = unaff_x19[2];
          uVar14 = unaff_x19[3];
          uVar10 = *unaff_x19;
          bVar4 = uVar14 < unaff_x19[1];
          if (uVar20 != uVar10) {
            bVar4 = uVar20 < uVar10;
          }
          puVar9 = puVar8;
          if (bVar4) {
            do {
              puVar6 = puVar9;
              puVar6[-1] = uVar10;
              *puVar6 = puVar6[-2];
              uVar10 = puVar6[-5];
              bVar4 = uVar14 < puVar6[-4];
              if (uVar20 != uVar10) {
                bVar4 = uVar20 < uVar10;
              }
              puVar9 = puVar6 + -2;
            } while (bVar4);
            puVar6[-3] = uVar20;
            puVar6[-2] = uVar14;
          }
          puVar8 = puVar8 + 2;
          unaff_x19 = unaff_x19 + 2;
        }
        return;
      }
      if (unaff_x19 == unaff_x20) {
        return;
      }
      lVar15 = 0;
      puVar8 = unaff_x19;
      break;
    }
    if (param_4 == (ulong *)0x0) {
      if (unaff_x19 == unaff_x20) {
        return;
      }
      uVar10 = uVar20 - 2 >> 1;
      puVar8 = unaff_x19 + uVar10 * 2;
      do {
        FUN_10b1d7290(unaff_x19,uVar20,puVar8);
        uVar10 = uVar10 - 1;
        puVar8 = puVar8 + -2;
      } while (-1 < (long)uVar10);
      do {
        if ((long)uVar20 < 2) {
          return;
        }
        uVar18 = 0;
        uVar10 = *unaff_x19;
        uVar14 = unaff_x19[1];
        puVar8 = unaff_x19;
        do {
          puVar9 = puVar8 + uVar18 * 2 + 2;
          uVar1 = uVar18 << 1 | 1;
          uVar12 = uVar18 * 2 + 2;
          if ((long)uVar12 < (long)uVar20) {
            uVar19 = puVar8[uVar18 * 2 + 4];
            uVar2 = puVar8[uVar18 * 2 + 2];
            bVar4 = puVar8[uVar18 * 2 + 3] < puVar8[uVar18 * 2 + 5];
            if (uVar2 != uVar19) {
              bVar4 = uVar2 < uVar19;
            }
            puVar6 = puVar8 + uVar18 * 2 + 4;
            uVar18 = uVar12;
            if (!bVar4) {
              puVar6 = puVar9;
              uVar18 = uVar1;
              uVar19 = uVar2;
            }
          }
          else {
            puVar6 = puVar9;
            uVar18 = uVar1;
            uVar19 = *puVar9;
          }
          *puVar8 = uVar19;
          puVar8[1] = puVar6[1];
          puVar8 = puVar6;
        } while ((long)uVar18 <= (long)(uVar20 - 2 >> 1));
        if (puVar6 == unaff_x20 + -2) {
          *puVar6 = uVar10;
          puVar6[1] = uVar14;
        }
        else {
          *puVar6 = unaff_x20[-2];
          puVar6[1] = unaff_x20[-1];
          unaff_x20[-2] = uVar10;
          unaff_x20[-1] = uVar14;
          lVar15 = (long)puVar6 + (0x10 - (long)unaff_x19) >> 4;
          if (1 < lVar15) {
            uVar12 = lVar15 - 2U >> 1;
            puVar8 = unaff_x19 + uVar12 * 2;
            uVar10 = *puVar8;
            uVar14 = *puVar6;
            uVar18 = puVar6[1];
            bVar4 = puVar8[1] < uVar18;
            if (uVar10 != uVar14) {
              bVar4 = uVar10 < uVar14;
            }
            if (bVar4) {
              do {
                puVar9 = puVar8;
                *puVar6 = uVar10;
                puVar6[1] = puVar9[1];
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1 >> 1;
                puVar8 = unaff_x19 + uVar12 * 2;
                uVar10 = *puVar8;
                bVar4 = puVar8[1] < uVar18;
                if (uVar10 != uVar14) {
                  bVar4 = uVar10 < uVar14;
                }
                puVar6 = puVar9;
              } while (bVar4);
              *puVar9 = uVar14;
              puVar9[1] = uVar18;
            }
          }
        }
        uVar20 = uVar20 - 1;
        unaff_x20 = unaff_x20 + -2;
      } while( true );
    }
    puVar8 = unaff_x19 + (uVar20 & 0xfffffffffffffffe);
    if (uVar20 < 0x81) {
      func_0x00010b1eded8(puVar8,unaff_x19);
    }
    else {
      func_0x00010b1eded8(unaff_x19,puVar8);
      FUN_10b1d6edc(unaff_x19 + 2,puVar8 + -2,unaff_x20 + -4);
      FUN_10b1d6edc(unaff_x19 + 4,puVar8 + 2,unaff_x20 + -6);
      FUN_10b1d6edc(puVar8 + -2,puVar8,puVar8 + 2);
      uVar10 = unaff_x19[1];
      uVar20 = *unaff_x19;
      uVar14 = *puVar8;
      unaff_x19[1] = puVar8[1];
      *unaff_x19 = uVar14;
      puVar8[1] = uVar10;
      *puVar8 = uVar20;
    }
    param_4 = (ulong *)((long)param_4 + -1);
    uVar20 = *unaff_x19;
    if ((param_5 & 1) == 0) {
      uVar10 = unaff_x19[1];
      bVar4 = unaff_x19[-1] < uVar10;
      if (unaff_x19[-2] != uVar20) {
        bVar4 = unaff_x19[-2] < uVar20;
      }
      if (!bVar4) {
        bVar4 = uVar10 < unaff_x20[-1];
        if (uVar20 != unaff_x20[-2]) {
          bVar4 = uVar20 < unaff_x20[-2];
        }
        puVar6 = unaff_x19;
        if (bVar4) {
          do {
            puVar8 = puVar6 + 2;
            bVar4 = uVar10 < puVar6[3];
            if (uVar20 != *puVar8) {
              bVar4 = uVar20 < *puVar8;
            }
            puVar6 = puVar8;
          } while (!bVar4);
        }
        else {
          do {
            puVar8 = puVar6 + 2;
            if (unaff_x20 <= puVar8) break;
            bVar4 = uVar10 < puVar6[3];
            if (uVar20 != *puVar8) {
              bVar4 = uVar20 < *puVar8;
            }
            puVar6 = puVar8;
          } while (!bVar4);
        }
        puVar6 = unaff_x20;
        puVar7 = unaff_x20;
        if (puVar8 < unaff_x20) {
          do {
            puVar6 = puVar7 + -2;
            bVar4 = uVar10 < puVar7[-1];
            if (uVar20 != *puVar6) {
              bVar4 = uVar20 < *puVar6;
            }
            puVar7 = puVar6;
          } while (bVar4);
        }
        while (puVar8 < puVar6) {
          uVar14 = *puVar8;
          *puVar8 = *puVar6;
          *puVar6 = uVar14;
          uVar14 = puVar8[1];
          puVar8[1] = puVar6[1];
          puVar6[1] = uVar14;
          puVar7 = puVar8;
          do {
            puVar8 = puVar7 + 2;
            bVar4 = uVar10 < puVar7[3];
            if (uVar20 != *puVar8) {
              bVar4 = uVar20 < *puVar8;
            }
            puVar11 = puVar6;
            puVar7 = puVar8;
          } while (!bVar4);
          do {
            puVar6 = puVar11 + -2;
            bVar4 = uVar10 < puVar11[-1];
            if (uVar20 != *puVar6) {
              bVar4 = uVar20 < *puVar6;
            }
            puVar11 = puVar6;
          } while (bVar4);
        }
        if (unaff_x19 != puVar8 + -2) {
          *unaff_x19 = puVar8[-2];
          unaff_x19[1] = puVar8[-1];
        }
        param_5 = 0;
        puVar8[-2] = uVar20;
        puVar8[-1] = uVar10;
        goto LAB_10b1d683c;
      }
    }
    else {
      uVar10 = unaff_x19[1];
    }
    lVar15 = 0;
    do {
      uVar14 = *(ulong *)((long)unaff_x19 + lVar15 + 0x10);
      bVar4 = *(ulong *)((long)unaff_x19 + lVar15 + 0x18) < uVar10;
      if (uVar14 != uVar20) {
        bVar4 = uVar14 < uVar20;
      }
      lVar15 = lVar15 + 0x10;
    } while (bVar4);
    puVar6 = (ulong *)((long)unaff_x19 + lVar15);
    puVar7 = unaff_x20;
    puVar8 = puVar6;
    if (lVar15 == 0x10) {
      do {
        puVar11 = puVar7;
        if (puVar7 <= puVar6) break;
        puVar11 = puVar7 + -2;
        bVar4 = puVar7[-1] < uVar10;
        if (*puVar11 != uVar20) {
          bVar4 = *puVar11 < uVar20;
        }
        puVar7 = puVar11;
      } while (!bVar4);
    }
    else {
      do {
        puVar11 = puVar7 + -2;
        bVar4 = puVar7[-1] < uVar10;
        if (*puVar11 != uVar20) {
          bVar4 = *puVar11 < uVar20;
        }
        puVar7 = puVar11;
      } while (!bVar4);
    }
    while (puVar8 < puVar11) {
      *puVar8 = *puVar11;
      *puVar11 = uVar14;
      uVar14 = puVar8[1];
      puVar8[1] = puVar11[1];
      puVar11[1] = uVar14;
      puVar21 = puVar8;
      do {
        puVar8 = puVar21 + 2;
        uVar14 = *puVar8;
        bVar4 = puVar21[3] < uVar10;
        if (uVar14 != uVar20) {
          bVar4 = uVar14 < uVar20;
        }
        puVar16 = puVar11;
        puVar21 = puVar8;
      } while (bVar4);
      do {
        puVar11 = puVar16 + -2;
        bVar4 = puVar16[-1] < uVar10;
        if (*puVar11 != uVar20) {
          bVar4 = *puVar11 < uVar20;
        }
        puVar16 = puVar11;
      } while (!bVar4);
    }
    puVar11 = puVar8 + -2;
    if (unaff_x19 != puVar11) {
      *unaff_x19 = puVar8[-2];
      unaff_x19[1] = puVar8[-1];
    }
    puVar8[-2] = uVar20;
    puVar8[-1] = uVar10;
    if (puVar6 < puVar7) goto LAB_10b1d6a38;
    puVar6 = unaff_x19;
    FUN_10b1d7110(unaff_x19,puVar11);
    puVar7 = puVar8;
    FUN_10b1d7110(puVar8,unaff_x20);
    if ((int)puVar7 == 0) goto code_r0x00010b1d6a34;
    unaff_x20 = puVar11;
    if (((ulong)puVar6 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10b1d6c4c:
  if (puVar8 + 2 == unaff_x20) {
LAB_10b1eb800:
    return;
  }
  uVar20 = puVar8[2];
  uVar14 = puVar8[3];
  uVar10 = *puVar8;
  bVar4 = uVar14 < puVar8[1];
  if (uVar20 != uVar10) {
    bVar4 = uVar20 < uVar10;
  }
  lVar3 = lVar15;
  if (bVar4) {
    do {
      lVar17 = lVar3;
      *(ulong *)((long)unaff_x19 + lVar17 + 0x10) = uVar10;
      *(undefined8 *)((long)unaff_x19 + lVar17 + 0x18) =
           *(undefined8 *)((long)unaff_x19 + lVar17 + 8);
      puVar9 = unaff_x19;
      if (lVar17 == 0) goto LAB_10b1d6cc0;
      uVar10 = *(ulong *)((long)unaff_x19 + lVar17 + -0x10);
      bVar4 = uVar14 < *(ulong *)((long)unaff_x19 + lVar17 + -8);
      if (uVar20 != uVar10) {
        bVar4 = uVar20 < uVar10;
      }
      lVar3 = lVar17 + -0x10;
    } while (bVar4);
    puVar9 = (ulong *)((long)unaff_x19 + lVar17);
LAB_10b1d6cc0:
    *puVar9 = uVar20;
    puVar9[1] = uVar14;
  }
  lVar15 = lVar15 + 0x10;
  puVar8 = puVar8 + 2;
  goto LAB_10b1d6c4c;
code_r0x00010b1d6a34:
  if (((ulong)puVar6 & 1) == 0) {
LAB_10b1d6a38:
    FUN_10b1d67fc(unaff_x19,puVar11,param_3,param_4,param_5 & 1);
    param_5 = 0;
  }
  goto LAB_10b1d683c;
}



/* Entry: 10b1d6edc; end: 10b1d6fe7;  */

void FUN_10b1d6edc(ulong *param_1,ulong *param_2,ulong *param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong extraout_x8;
  ulong uVar4;
  ulong extraout_x9;
  uint extraout_w10;
  ulong uVar5;
  uint uVar6;
  
  uVar3 = *param_2;
  uVar4 = *param_1;
  bVar1 = param_2[1] < param_1[1];
  if (uVar3 != uVar4) {
    bVar1 = uVar3 < uVar4;
  }
  uVar5 = *param_3;
  bVar2 = param_3[1] < param_2[1];
  if (uVar5 != uVar3) {
    bVar2 = uVar5 < uVar3;
  }
  if (bVar1) {
    if (bVar2) {
      *param_1 = uVar5;
      *param_3 = uVar4;
      uVar3 = param_1[1];
      param_1[1] = param_3[1];
    }
    else {
      *param_1 = uVar3;
      *param_2 = uVar4;
      uVar5 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = uVar5;
      uVar4 = *param_2;
      uVar3 = *param_3;
      bVar1 = param_3[1] < uVar5;
      if (uVar3 != uVar4) {
        bVar1 = uVar3 < uVar4;
      }
      if (!bVar1) {
        return;
      }
      *param_2 = uVar3;
      *param_3 = uVar4;
      uVar3 = param_2[1];
      param_2[1] = param_3[1];
    }
    param_3[1] = uVar3;
  }
  else if (bVar2) {
    *param_2 = uVar5;
    *param_3 = uVar3;
    uVar3 = param_2[1];
    param_2[1] = param_3[1];
    param_3[1] = uVar3;
    func_0x00010b1ed1b4(*param_2);
    uVar6 = extraout_w10;
    if (extraout_x8 != extraout_x9) {
      uVar6 = (uint)(extraout_x8 < extraout_x9);
    }
    if (uVar6 == 1) {
      *param_1 = extraout_x8;
      *param_2 = extraout_x9;
      uVar3 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = uVar3;
      return;
    }
  }
  return;
}



/* Entry: 10b1d6fe8; end: 10b1d705b;  */

void FUN_10b1d6fe8(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint uVar1;
  undefined8 *unaff_x22;
  
  func_0x00010b1eb324();
  FUN_10b1d6edc();
  func_0x00010b1ed1b4(*unaff_x22);
  uVar1 = extraout_w10;
  if (extraout_x8 != extraout_x9) {
    uVar1 = (uint)(extraout_x8 < extraout_x9);
  }
  if (uVar1 == 1) {
    func_0x00010b1ec29c();
    uVar1 = extraout_w10_00;
    if (extraout_x8_00 != extraout_x9_00) {
      uVar1 = (uint)(extraout_x8_00 < extraout_x9_00);
    }
    if (uVar1 == 1) {
      func_0x00010b1ec330();
      uVar1 = extraout_w10_01;
      if (extraout_x8_01 != extraout_x9_01) {
        uVar1 = (uint)(extraout_x8_01 < extraout_x9_01);
      }
      if (uVar1 == 1) {
        func_0x00010b1ecd64();
      }
    }
  }
  return;
}



/* Entry: 10b1d705c; end: 10b1d710f;  */

void FUN_10b1d705c(void)

{
  ulong *in_x4;
  ulong extraout_x8;
  ulong uVar1;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint uVar2;
  ulong *unaff_x22;
  
  func_0x00010b1eb324();
  FUN_10b1d6fe8();
  func_0x00010b1ed1b4(*in_x4);
  uVar2 = extraout_w10;
  if (extraout_x8 != extraout_x9) {
    uVar2 = (uint)(extraout_x8 < extraout_x9);
  }
  if (uVar2 == 1) {
    *unaff_x22 = extraout_x8;
    *in_x4 = extraout_x9;
    uVar1 = unaff_x22[1];
    unaff_x22[1] = in_x4[1];
    in_x4[1] = uVar1;
    func_0x00010b1ed1b4(*unaff_x22);
    uVar2 = extraout_w10_00;
    if (extraout_x8_00 != extraout_x9_00) {
      uVar2 = (uint)(extraout_x8_00 < extraout_x9_00);
    }
    if (uVar2 == 1) {
      func_0x00010b1ec29c();
      uVar2 = extraout_w10_01;
      if (extraout_x8_01 != extraout_x9_01) {
        uVar2 = (uint)(extraout_x8_01 < extraout_x9_01);
      }
      if (uVar2 == 1) {
        func_0x00010b1ec330();
        uVar2 = extraout_w10_02;
        if (extraout_x8_02 != extraout_x9_02) {
          uVar2 = (uint)(extraout_x8_02 < extraout_x9_02);
        }
        if (uVar2 == 1) {
          func_0x00010b1ecd64();
        }
      }
    }
  }
  return;
}



/* Entry: 10b1d7110; end: 10b1d728f;  */

void FUN_10b1d7110(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  ulong extraout_x8;
  long lVar3;
  int iVar4;
  ulong extraout_x9;
  uint extraout_w10;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar12;
  
  func_0x00010b1eb648();
  switch(param_2 - param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x00010b1ed1b4(unaff_x20[-2]);
    uVar5 = extraout_w10;
    if (extraout_x8 != extraout_x9) {
      uVar5 = (uint)(extraout_x8 < extraout_x9);
    }
    if (uVar5 == 1) {
      func_0x00010b1ed3a0();
    }
    break;
  case 3:
    FUN_10b1d6edc();
    break;
  case 4:
    func_0x00010b1ee554(1);
    FUN_10b1d6fe8();
    break;
  case 5:
    func_0x00010b1ee554(1);
    FUN_10b1d705c();
    break;
  default:
    func_0x00010b1eded8();
    lVar3 = 0;
    iVar4 = 0;
    puVar10 = unaff_x19 + 6;
    puVar12 = unaff_x19 + 4;
    while (puVar6 = puVar10, puVar6 != unaff_x20) {
      uVar7 = *puVar6;
      uVar8 = puVar6[1];
      uVar9 = *puVar12;
      bVar2 = uVar8 < puVar12[1];
      if (uVar7 != uVar9) {
        bVar2 = uVar7 < uVar9;
      }
      lVar1 = lVar3;
      if (bVar2) {
        do {
          lVar11 = lVar1;
          *(ulong *)((long)unaff_x19 + lVar11 + 0x30) = uVar9;
          *(undefined8 *)((long)unaff_x19 + lVar11 + 0x38) =
               *(undefined8 *)((long)unaff_x19 + lVar11 + 0x28);
          puVar10 = unaff_x19;
          if (lVar11 == -0x20) goto LAB_10b1d723c;
          uVar9 = *(ulong *)((long)unaff_x19 + lVar11 + 0x10);
          bVar2 = uVar8 < *(ulong *)((long)unaff_x19 + lVar11 + 0x18);
          if (uVar7 != uVar9) {
            bVar2 = uVar7 < uVar9;
          }
          lVar1 = lVar11 + -0x10;
        } while (bVar2);
        puVar10 = (ulong *)((long)unaff_x19 + lVar11 + 0x20);
LAB_10b1d723c:
        *puVar10 = uVar7;
        puVar10[1] = uVar8;
        iVar4 = iVar4 + 1;
        if (iVar4 == 8) {
          return;
        }
      }
      lVar3 = lVar3 + 0x10;
      puVar12 = puVar6;
      puVar10 = puVar6 + 2;
    }
  }
  return;
}



/* Entry: 10b1d7290; end: 10b1d73bb;  */

void FUN_10b1d7290(long param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  if (1 < param_2) {
    uVar7 = param_2 - 2U >> 1;
    if ((long)param_3 - param_1 >> 4 <= (long)uVar7) {
      lVar11 = (long)param_3 - param_1 >> 3;
      uVar1 = lVar11 + 1;
      puVar8 = (ulong *)(param_1 + uVar1 * 0x10);
      uVar10 = lVar11 + 2;
      if ((long)uVar10 < param_2) {
        uVar12 = puVar8[2];
        uVar4 = *puVar8;
        bVar6 = puVar8[1] < puVar8[3];
        if (uVar4 != uVar12) {
          bVar6 = uVar4 < uVar12;
        }
        puVar9 = puVar8 + 2;
        if (!bVar6) {
          puVar9 = puVar8;
          uVar10 = uVar1;
          uVar12 = uVar4;
        }
      }
      else {
        puVar9 = puVar8;
        uVar10 = uVar1;
        uVar12 = *puVar8;
      }
      uVar1 = *param_3;
      uVar4 = param_3[1];
      bVar6 = puVar9[1] < uVar4;
      if (uVar12 != uVar1) {
        bVar6 = uVar12 < uVar1;
      }
      if (!bVar6) {
        do {
          puVar8 = puVar9;
          *param_3 = uVar12;
          param_3[1] = puVar8[1];
          if ((long)uVar7 < (long)uVar10) break;
          uVar3 = uVar10 << 1 | 1;
          puVar2 = (ulong *)(param_1 + uVar3 * 0x10);
          uVar10 = uVar10 * 2 + 2;
          if ((long)uVar10 < param_2) {
            uVar12 = puVar2[2];
            uVar5 = *puVar2;
            bVar6 = puVar2[1] < puVar2[3];
            if (uVar5 != uVar12) {
              bVar6 = uVar5 < uVar12;
            }
            puVar9 = puVar2 + 2;
            if (!bVar6) {
              puVar9 = puVar2;
              uVar10 = uVar3;
              uVar12 = uVar5;
            }
          }
          else {
            puVar9 = puVar2;
            uVar10 = uVar3;
            uVar12 = *puVar2;
          }
          bVar6 = puVar9[1] < uVar4;
          if (uVar12 != uVar1) {
            bVar6 = uVar12 < uVar1;
          }
          param_3 = puVar8;
        } while (!bVar6);
        *puVar8 = uVar1;
        puVar8[1] = uVar4;
      }
    }
  }
  return;
}



/* Entry: 10b1d73bc; end: 10b1d745b;  */

void FUN_10b1d73bc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_10b17d5c4();
  *(undefined8 *)(param_1 + 0x50) = *param_3;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}



/* Entry: 10b1d745c; end: 10b1d74cf;  */

void FUN_10b1d745c(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined4 uStack_38;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  lVar3 = param_1 + 0x18;
  FUN_10b1d0a88();
  uVar2 = *(uint *)(lVar3 + 4);
  uVar4 = (ulong)uVar2;
  if (uVar2 == 0) {
    uVar5 = 0;
    uStack_40 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar3 + 0x10);
    func_0x00010b1c71bc();
    uStack_40 = uVar4 & 0xffffffff | 0x100000000;
  }
  uStack_48 = (ulong)(uVar2 != 0);
  uStack_50 = uVar5;
  uStack_38 = uVar1;
  func_0x0001052b8044(param_1 + 0x28,&uStack_50);
  return;
}



/* Entry: 10b1d74d0; end: 10b1d7517;  */

undefined8 * FUN_10b1d74d0(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110cc3a90;
  *(undefined4 *)(param_1 + 1) = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 2);
  param_1[3] = *(undefined8 *)(param_2 + 4);
  param_1[2] = uVar1;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  func_0x00010b1d7528(param_1 + 4,param_2 + 6);
  return param_1;
}



/* Entry: 10b1d7518; end: 10b1d7553;  */

void FUN_10b1d7518(long param_1)

{
  long unaff_x19;
  
  func_0x00010b1ebd60(param_1 + 8);
  func_0x0001052b7e10();
  FUN_10b1d2ff0(unaff_x19 + 8);
  return;
}



/* Entry: 10b1d7554; end: 10b1d755f;  */

void FUN_10b1d7554(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010b1eafa8();
  func_0x00010b1ed388();
  while (func_0x00010b1ecd28(), !(bool)in_ZR) {
    unaff_x19[2] = extraout_x8 + -0x40;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(extraout_x8 + -0x38);
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b1d7560; end: 10b1d75a3;  */

void FUN_10b1d7560(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010b1ed388();
  while (func_0x00010b1ecd28(), !(bool)in_ZR) {
    unaff_x19[2] = extraout_x8 + -0x40;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(extraout_x8 + -0x38);
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b1d75a4; end: 10b1d75eb;  */

void FUN_10b1d75a4(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1ec00c();
  if (unaff_x20 != 0) {
    for (lVar1 = *(long *)(unaff_x19 + 8); lVar1 != unaff_x20; lVar1 = lVar1 + -0x40) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + -0x38);
    }
    func_0x00010b1eba94();
  }
  return;
}



/* Entry: 10b1d75ec; end: 10b1d76a3;  */

void FUN_10b1d75ec(long *param_1,long param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x9;
  long extraout_x10;
  undefined1 extraout_w11;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  
  func_0x00010b1ee670();
  puVar2 = (undefined4 *)param_1[1];
  uVar6 = (undefined4)param_2;
  if (puVar2 < (undefined4 *)param_1[2]) {
    puVar8 = puVar2 + 1;
    *puVar2 = uVar6;
  }
  else {
    lVar5 = *param_1;
    lVar7 = (long)puVar2 - lVar5 >> 2;
    if (lVar7 + 1U >> 0x3e != 0) {
      FUN_10b1d76a4();
      plVar3 = param_1;
LAB_10b1d76a0:
      func_0x000104bd35f4();
      func_0x00010b1eafa8();
      func_0x00010b1eb898();
      if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
        func_0x00010b1ed7e8();
        *(undefined1 *)(plVar3 + 9) = 0;
      }
      else {
        lVar7 = *(long *)(param_2 + 0x10);
        lVar5 = *(long *)(param_2 + 8);
        *(long *)(extraout_x8_00 + 0x10) = lVar7;
        *(long *)(extraout_x8_00 + 8) = lVar5;
        *(undefined8 *)(param_2 + 0x10) = 0;
        *(undefined8 *)(param_2 + 0x18) = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        func_0x00010b1ed444();
        plVar3[3] = extraout_x10;
        plVar3[2] = lVar7;
        plVar3[1] = lVar5;
        *(undefined8 *)(extraout_x8_01 + 0x10) = 0;
        *(undefined8 *)(extraout_x8_01 + 0x18) = 0;
        *(undefined8 *)(extraout_x8_01 + 8) = 0;
        lVar9 = *(long *)(param_2 + 0x28);
        lVar4 = *(long *)(param_2 + 0x20);
        lVar7 = *(long *)(param_2 + 0x38);
        lVar5 = *(long *)(param_2 + 0x30);
        plVar3[8] = *(long *)(param_2 + 0x40);
        plVar3[5] = lVar9;
        plVar3[4] = lVar4;
        plVar3[7] = lVar7;
        plVar3[6] = lVar5;
        *(undefined1 *)(plVar3 + 9) = extraout_w11;
      }
      func_0x00010b1ebfac();
      return;
    }
    plVar3 = param_1;
    func_0x00010b1ebaa0(param_1[2] - lVar5);
    uVar1 = extraout_x9;
    if (0x7ffffffffffffffb < extraout_x8) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar1 >> 0x3e != 0) goto LAB_10b1d76a0;
      lVar4 = uVar1 << 2;
      __Znwm();
    }
    puVar2 = (undefined4 *)(lVar4 + ((long)puVar2 - lVar5));
    puVar8 = puVar2 + 1;
    *puVar2 = uVar6;
    func_0x00010b1ecfc8();
    *param_1 = (long)(puVar2 + -lVar7);
    param_1[1] = (long)puVar8;
    param_1[2] = lVar4 + uVar1 * 4;
    if (lVar5 != 0) {
      func_0x00010b1eb70c();
    }
  }
  param_1[1] = (long)puVar8;
  return;
}



/* Entry: 10b1d76a4; end: 10b1d7753;  */

void FUN_10b1d76a4(long param_1,long param_2)

{
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x10;
  undefined1 extraout_w11;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010b1eafa8();
  func_0x00010b1eb898();
  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
    func_0x00010b1ed7e8();
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(extraout_x8 + 0x10) = uVar2;
    *(undefined8 *)(extraout_x8 + 8) = uVar1;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    func_0x00010b1ed444();
    *(undefined8 *)(param_1 + 0x18) = extraout_x10;
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(extraout_x8_00 + 0x10) = 0;
    *(undefined8 *)(extraout_x8_00 + 0x18) = 0;
    *(undefined8 *)(extraout_x8_00 + 8) = 0;
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    *(undefined1 *)(param_1 + 0x48) = extraout_w11;
  }
  func_0x00010b1ebfac();
  return;
}



/* Entry: 10b1d7754; end: 10b1d7787;  */

void FUN_10b1d7754(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010b1eb3a4();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x38) = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return;
}



/* Entry: 10b1d7788; end: 10b1d7907;  */

/* WARNING: Possible PIC construction at 0x00010b1d78d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b1d78d4) */
/* WARNING: Removing unreachable block (ram,0x00010b1d78e4) */

void FUN_10b1d7788(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x9;
  long extraout_x9_00;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long lVar5;
  undefined8 *unaff_x22;
  long lVar6;
  undefined1 **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_register_00005028;
  undefined8 uVar11;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined8 auStack_80 [4];
  long lStack_60;
  long lStack_58;
  
  puVar3 = auStack_80;
  ppuVar7 = (undefined1 **)&stack0xfffffffffffffff0;
  func_0x00010b1ecb5c();
  if ((ulong)param_3[1] < (ulong)param_3[2]) {
    uVar9 = unaff_x22[1];
    uVar8 = *unaff_x22;
    func_0x00010b1ed5a4();
    func_0x00010b1ee31c();
    *(undefined8 *)(extraout_x8 + 0x38) = unaff_x22[7];
    *(undefined8 *)(extraout_x8 + 0x30) = in_register_00005028;
    *(undefined8 *)(extraout_x8 + 0x28) = param_2;
    *(undefined8 *)(extraout_x8 + 0x20) = uVar9;
    *(undefined8 *)(extraout_x8 + 0x18) = uVar8;
    unaff_x19[1] = extraout_x8 + 0x40;
    return;
  }
  lVar6 = param_3[1] - *unaff_x19;
  if ((lVar6 >> 6) + 1U >> 0x3a == 0) {
    func_0x00010b1ec290();
    lVar5 = extraout_x8_00;
    if (0x7fffffffffffffbf < extraout_x9) {
      lVar5 = 0x3ffffffffffffff;
    }
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_10b1d7914();
    }
    puVar1 = (undefined8 *)(lVar5 + lVar6);
    uVar9 = unaff_x22[1];
    uVar8 = *unaff_x22;
    puVar1[2] = unaff_x22[2];
    puVar1[1] = uVar9;
    *puVar1 = uVar8;
    func_0x00010b1ee31c();
    puVar1[7] = unaff_x22[7];
    puVar1[6] = in_register_00005028;
    puVar1[5] = param_2;
    puVar1[4] = uVar9;
    puVar1[3] = uVar8;
    lVar4 = *unaff_x19;
    lVar2 = unaff_x19[1];
    lVar5 = (long)puVar1 + (lVar4 - lVar2);
    lStack_60 = lVar5;
    lStack_58 = lVar5;
    func_0x00010b1ee3e0();
    lVar6 = lVar4;
    while (lVar6 != lVar2) {
      func_0x00010b1eb2fc();
      uVar9 = *(undefined8 *)(extraout_x9_00 + 0x20);
      uVar8 = *(undefined8 *)(extraout_x9_00 + 0x18);
      uVar11 = *(undefined8 *)(extraout_x9_00 + 0x30);
      uVar10 = *(undefined8 *)(extraout_x9_00 + 0x28);
      *(undefined8 *)(extraout_x8_01 + 0x38) = *(undefined8 *)(extraout_x9_00 + 0x38);
      *(undefined8 *)(extraout_x8_01 + 0x30) = uVar11;
      *(undefined8 *)(extraout_x8_01 + 0x28) = uVar10;
      *(undefined8 *)(extraout_x8_01 + 0x20) = uVar9;
      *(undefined8 *)(extraout_x8_01 + 0x18) = uVar8;
      lVar5 = extraout_x8_01 + 0x40;
      lStack_58 = lVar5;
      lVar6 = extraout_x9_00 + 0x40;
    }
    func_0x00010b1ebed4(lVar5);
    for (; lVar4 != lVar2; lVar4 = lVar4 + 0x40) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    unaff_x20 = puVar1 + 8;
    uVar8 = 0x10b1d78d4;
    param_3 = auStack_80;
  }
  else {
    FUN_10b1d7908();
    pcStack_88 = FUN_10b1d7908;
    ppuStack_90 = ppuVar7;
    func_0x00010b1eafa8();
    puVar3 = (undefined8 *)&stack0xffffffffffffff50;
    pcStack_98 = FUN_10b1d7914;
    ppuVar7 = &puStack_a0;
    if ((ulong)param_3 >> 0x3a == 0) {
      puStack_a0 = (undefined1 *)&ppuStack_90;
      func_0x00010b1ee098();
      return;
    }
    uVar8 = 0x10b1d793c;
    puStack_a0 = (undefined1 *)&ppuStack_90;
    func_0x000104bd35f4();
  }
  *(undefined8 **)((long)puVar3 + -0x20) = unaff_x20;
  *(long **)((long)puVar3 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)puVar3 + -0x10) = ppuVar7;
  *(undefined8 *)((long)puVar3 + -8) = uVar8;
  func_0x00010b1ebd44();
  if ((extraout_x8_02 & 1) == 0) {
    func_0x00010b1eb758();
    while (param_3 != unaff_x20) {
      param_3 = param_3 + -8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
  }
  return;
}



/* Entry: 10b1d7908; end: 10b1d7913;  */

void FUN_10b1d7908(ulong param_1)

{
  ulong extraout_x8;
  ulong unaff_x20;
  
  func_0x00010b1eafa8();
  if (param_1 >> 0x3a == 0) {
    func_0x00010b1ee098();
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b1ebd44();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b1eb758();
    while (param_1 != unaff_x20) {
      param_1 = param_1 - 0x40;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
  }
  return;
}



/* Entry: 10b1d7914; end: 10b1d7973;  */

void FUN_10b1d7914(ulong param_1)

{
  ulong extraout_x8;
  ulong unaff_x20;
  
  if (param_1 >> 0x3a == 0) {
    func_0x00010b1ee098();
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b1ebd44();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b1eb758();
    while (param_1 != unaff_x20) {
      param_1 = param_1 - 0x40;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
  }
  return;
}



/* Entry: 10b1d7974; end: 10b1d79cb;  */

void FUN_10b1d7974(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1eb65c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010b1ec2d4();
    FUN_10b1d7a18();
    func_0x00010b1eb714();
    FUN_10b1d79cc();
    func_0x00010b1eb738();
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x48) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)(lVar1 + 0x40) = 0;
  }
  return;
}



/* Entry: 10b1d79cc; end: 10b1d7a17;  */

void FUN_10b1d79cc(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010b1ec7e8();
  if ((bool)in_ZR) {
    FUN_10b1d7754();
  }
  else {
    func_0x00010b1eb0d4();
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
    *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
    func_0x00010b1ee514();
  }
  return;
}



/* Entry: 10b1d7a18; end: 10b1d7a6f;  */

void FUN_10b1d7a18(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long unaff_x19;
  
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  uVar1 = (undefined4)param_2;
  func_0x00010b1eb720();
  func_0x00010b1eb05c();
  func_0x00010b1eb208();
  *(undefined4 *)(unaff_x19 + 0x18) = uVar1;
  func_0x00010b1ebc20();
  func_0x00010bcc88c4();
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  func_0x00010b1ec898();
  func_0x00010bcc88c4();
  *(undefined8 *)(unaff_x19 + 0x28) = param_1;
  func_0x00010b1ec88c();
  func_0x00010bcc88c4();
  *(undefined8 *)(unaff_x19 + 0x30) = param_1;
  func_0x00010b1edd0c();
  *(ulong *)(unaff_x19 + 0x38) = CONCAT44(uVar2,uVar1);
  return;
}



/* Entry: 10b1d7a70; end: 10b1d7a97;  */

void FUN_10b1d7a70(void)

{
  uint extraout_w8;
  
  func_0x00010b1eb8fc();
  if ((extraout_w8 & 1) == 0) {
    FUN_10b1d7a98();
  }
  return;
}



/* Entry: 10b1d7a98; end: 10b1d7adb;  */

void FUN_10b1d7a98(long param_1)

{
  long unaff_x21;
  
  func_0x00010b1ebf60();
  if (unaff_x21 != 0) {
    func_0x00010b1ec018();
    while (param_1 != unaff_x21) {
      param_1 = param_1 + -0x40;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    func_0x00010b1eb23c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1d7adc; end: 10b1d7b17;  */

void FUN_10b1d7adc(void)

{
  undefined1 in_ZR;
  
  func_0x00010b1eada8();
  func_0x00010b1ed544();
  if ((bool)in_ZR) {
    func_0x00010b1ebec8();
    FUN_10b1d7b18();
    func_0x00010b1ec940();
  }
  return;
}



/* Entry: 10b1d7b18; end: 10b1d7b47;  */

void FUN_10b1d7b18(long param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010b1ed9c0();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 10b1d7b48; end: 10b1d7b67;  */

void FUN_10b1d7b48(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10b1d7b68; end: 10b1d7bbb;  */

void FUN_10b1d7b68(long param_1)

{
  long unaff_x19;
  ulong unaff_x20;
  
  func_0x00010b1eb538();
  func_0x00010b1eb7a8();
  if (*(char *)(param_1 + 0x50) != '\0') {
    func_0x00010b1d7730(unaff_x19 + 0x10);
  }
  FUN_10b1d7b48(unaff_x20 | 8);
  func_0x00010b1ebc2c();
  func_0x000107c31408();
  FUN_10b1d7b48(unaff_x19 + 0x10);
  return;
}



/* Entry: 10b1d7bbc; end: 10b1d7bdb;  */

void FUN_10b1d7bbc(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b1d7c60();
  }
  return;
}



/* Entry: 10b1d7bdc; end: 10b1d7c13;  */

void FUN_10b1d7bdc(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010b1eb07c();
  if (!(bool)in_ZR) {
    func_0x00010b1eb014((&PTR_FUN_110cc3ad8)[extraout_x8]);
  }
  func_0x00010b1eb924();
  return;
}



/* Entry: 10b1d7c14; end: 10b1d7c5f;  */

void FUN_10b1d7c14(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10b1d7c60();
  }
  return;
}



/* Entry: 10b1d7c60; end: 10b1d7ca3;  */

void FUN_10b1d7c60(void)

{
  func_0x00010b1eb198();
  FUN_10b1d7a98();
  return;
}



/* Entry: 10b1d7ca4; end: 10b1d7d17;  */

bool FUN_10b1d7ca4(long *param_1,long param_2)

{
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  undefined1 auStack_40 [16];
  
  func_0x00010b1eb648();
  lVar1 = *param_1;
  func_0x00010549026c(param_2 + 0x20);
  func_0x00010b1ed86c();
  func_0x0001086eb2ac(lVar1,auStack_40);
  if (lVar1 == 0) {
    func_0x00010b1ec6d8(*(undefined1 *)(unaff_x20 + 0x68));
    **(long **)(unaff_x19 + 8) = **(long **)(unaff_x19 + 8) + extraout_x8;
  }
  return lVar1 != 0;
}



/* Entry: 10b1d7d18; end: 10b1d7d47;  */

void FUN_10b1d7d18(void)

{
  long unaff_x20;
  
  func_0x00010b1eb548();
  FUN_10b1d7d48();
  func_0x00010b1eb714();
  FUN_10b1d7d48();
  FUN_10b1d7f8c(unaff_x20 + 8);
  return;
}



/* Entry: 10b1d7d48; end: 10b1d7d7f;  */

void FUN_10b1d7d48(long param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010b1eae98();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(unaff_x19 + 0x38) = 0;
  func_0x00010b1ed7f4();
  if ((bool)in_ZR) {
    FUN_10b1d7d80();
  }
  return;
}



/* Entry: 10b1d7d80; end: 10b1d7daf;  */

void FUN_10b1d7d80(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010b1ec078();
  if ((bool)in_ZR) {
    func_0x00010b1ec250();
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 10b1d7db0; end: 10b1d7dd3;  */

void FUN_10b1d7db0(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000107c279a4();
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10b1d7dd4; end: 10b1d7def;  */

void FUN_10b1d7dd4(void)

{
  func_0x00010b1eb398();
  func_0x00010b1ed848();
  return;
}



/* Entry: 10b1d7df0; end: 10b1d7dfb;  */

void FUN_10b1d7df0(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined1 auStack_60 [48];
  
  func_0x00010b1eafa8();
  func_0x00010b1eb65c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010b1ec2d4();
    FUN_10b1d7e88();
    func_0x00010b1eb714();
    FUN_10b1d7e5c();
    func_0x000107c279a4(auStack_60);
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x38) == '\x01') {
    func_0x000107c279a4();
    *(undefined1 *)(lVar1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10b1d7dfc; end: 10b1d7e5b;  */

void FUN_10b1d7dfc(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined1 auStack_50 [48];
  
  func_0x00010b1eb65c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010b1ec2d4();
    FUN_10b1d7e88();
    func_0x00010b1eb714();
    FUN_10b1d7e5c();
    func_0x000107c279a4(auStack_50);
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x38) == '\x01') {
    func_0x000107c279a4();
    *(undefined1 *)(lVar1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10b1d7e5c; end: 10b1d7e87;  */

void FUN_10b1d7e5c(void)

{
  undefined1 in_ZR;
  
  func_0x00010b1ebd6c();
  if ((bool)in_ZR) {
    FUN_10b1d7dd4();
  }
  else {
    FUN_10b1d7d80();
  }
  return;
}



/* Entry: 10b1d7e88; end: 10b1d7ebf;  */

void FUN_10b1d7e88(undefined8 param_1,undefined1 param_2)

{
  long unaff_x19;
  
  func_0x00010b1eb720();
  func_0x00010b1eb06c();
  func_0x00010b1eb940();
  func_0x000107c28930();
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  *(undefined1 *)(unaff_x19 + 0x28) = param_2;
  return;
}



/* Entry: 10b1d7ec0; end: 10b1d7ee7;  */

void FUN_10b1d7ec0(void)

{
  uint extraout_w8;
  
  func_0x00010b1eb8fc();
  if ((extraout_w8 & 1) == 0) {
    FUN_10b1d7ee8();
  }
  return;
}



/* Entry: 10b1d7ee8; end: 10b1d7f2b;  */

void FUN_10b1d7ee8(long param_1)

{
  long unaff_x21;
  
  func_0x00010b1ebf60();
  if (unaff_x21 != 0) {
    func_0x00010b1ec018();
    while (param_1 != unaff_x21) {
      param_1 = param_1 + -0x30;
      func_0x000107c279a4();
    }
    func_0x00010b1eb23c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1d7f2c; end: 10b1d7f6b;  */

void FUN_10b1d7f2c(long param_1)

{
  undefined1 in_ZR;
  
  func_0x00010b1eada8();
  *(undefined1 *)(param_1 + 0x38) = 0;
  func_0x00010b1ed7f4();
  if ((bool)in_ZR) {
    func_0x00010b1ebec8();
    FUN_10b1d7f6c();
    func_0x00010b1ecc24();
  }
  return;
}



/* Entry: 10b1d7f6c; end: 10b1d7f8b;  */

void FUN_10b1d7f6c(long param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x00010b1ed9b8();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 10b1d7f8c; end: 10b1d7fab;  */

void FUN_10b1d7f8c(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000107c279a4();
  }
  return;
}



/* Entry: 10b1d7fac; end: 10b1d7fcf;  */

void FUN_10b1d7fac(void)

{
  func_0x00010b1eb198();
  FUN_10b1d7ee8();
  return;
}



/* Entry: 10b1d7fd0; end: 10b1d801b;  */

void FUN_10b1d7fd0(void)

{
  int extraout_w8;
  long unaff_x19;
  ulong unaff_x20;
  
  func_0x00010b1eb538();
  func_0x00010b1ee1f8();
  if (extraout_w8 != 0) {
    FUN_10b1d7db0(unaff_x19 + 0x10);
  }
  FUN_10b1d7f8c(unaff_x20 | 8);
  func_0x00010b1ebc2c();
  func_0x000107c31408();
  FUN_10b1d7f8c(unaff_x19 + 0x10);
  return;
}



/* Entry: 10b1d801c; end: 10b1d803b;  */

void FUN_10b1d801c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b1d7fac();
  }
  return;
}



/* Entry: 10b1d803c; end: 10b1d8073;  */

void FUN_10b1d803c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010b1eb07c();
  if (!(bool)in_ZR) {
    func_0x00010b1eb014((&PTR_FUN_110cc3ae8)[extraout_x8]);
  }
  func_0x00010b1eb924();
  return;
}



/* Entry: 10b1d8074; end: 10b1d807f;  */

void FUN_10b1d8074(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10b1d7fac();
  }
  return;
}



/* Entry: 10b1d8080; end: 10b1d80af;  */

void FUN_10b1d8080(void)

{
  long unaff_x20;
  
  func_0x00010b1eb548();
  FUN_10b1d80b0();
  func_0x00010b1eb714();
  FUN_10b1d80b0();
  FUN_10b1d82f4(unaff_x20 + 8);
  return;
}



/* Entry: 10b1d80b0; end: 10b1d80e7;  */

void FUN_10b1d80b0(long param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010b1eae98();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(unaff_x19 + 0x38) = 0;
  func_0x00010b1ed7f4();
  if ((bool)in_ZR) {
    FUN_10b1d80e8();
  }
  return;
}



/* Entry: 10b1d80e8; end: 10b1d8117;  */

void FUN_10b1d80e8(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010b1ec078();
  if ((bool)in_ZR) {
    func_0x00010b1ec250();
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 10b1d8118; end: 10b1d813b;  */

void FUN_10b1d8118(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000107c279a4();
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10b1d813c; end: 10b1d8157;  */

void FUN_10b1d813c(void)

{
  func_0x00010b1eb398();
  func_0x00010b1ed848();
  return;
}



/* Entry: 10b1d8158; end: 10b1d8163;  */

void FUN_10b1d8158(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined1 auStack_60 [48];
  
  func_0x00010b1eafa8();
  func_0x00010b1eb65c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010b1ec2d4();
    FUN_10b1d81f0();
    func_0x00010b1eb714();
    FUN_10b1d81c4();
    func_0x000107c279a4(auStack_60);
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x38) == '\x01') {
    func_0x000107c279a4();
    *(undefined1 *)(lVar1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10b1d8164; end: 10b1d81c3;  */

void FUN_10b1d8164(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined1 auStack_50 [48];
  
  func_0x00010b1eb65c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010b1ec2d4();
    FUN_10b1d81f0();
    func_0x00010b1eb714();
    FUN_10b1d81c4();
    func_0x000107c279a4(auStack_50);
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x38) == '\x01') {
    func_0x000107c279a4();
    *(undefined1 *)(lVar1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10b1d81c4; end: 10b1d81ef;  */

void FUN_10b1d81c4(void)

{
  undefined1 in_ZR;
  
  func_0x00010b1ebd6c();
  if ((bool)in_ZR) {
    FUN_10b1d813c();
  }
  else {
    FUN_10b1d80e8();
  }
  return;
}



/* Entry: 10b1d81f0; end: 10b1d8227;  */

void FUN_10b1d81f0(undefined8 param_1,undefined1 param_2)

{
  long unaff_x19;
  
  func_0x00010b1eb720();
  func_0x00010b1eb06c();
  func_0x00010b1eb940();
  func_0x000107c28930();
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  *(undefined1 *)(unaff_x19 + 0x28) = param_2;
  return;
}



/* Entry: 10b1d8228; end: 10b1d824f;  */

void FUN_10b1d8228(void)

{
  uint extraout_w8;
  
  func_0x00010b1eb8fc();
  if ((extraout_w8 & 1) == 0) {
    FUN_10b1d8250();
  }
  return;
}



/* Entry: 10b1d8250; end: 10b1d8293;  */

void FUN_10b1d8250(long param_1)

{
  long unaff_x21;
  
  func_0x00010b1ebf60();
  if (unaff_x21 != 0) {
    func_0x00010b1ec018();
    while (param_1 != unaff_x21) {
      param_1 = param_1 + -0x30;
      func_0x000107c279a4();
    }
    func_0x00010b1eb23c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1d8294; end: 10b1d82d3;  */

void FUN_10b1d8294(long param_1)

{
  undefined1 in_ZR;
  
  func_0x00010b1eada8();
  *(undefined1 *)(param_1 + 0x38) = 0;
  func_0x00010b1ed7f4();
  if ((bool)in_ZR) {
    func_0x00010b1ebec8();
    FUN_10b1d82d4();
    func_0x00010b1ecc24();
  }
  return;
}



/* Entry: 10b1d82d4; end: 10b1d82f3;  */

void FUN_10b1d82d4(long param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x00010b1ed9b8();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 10b1d82f4; end: 10b1d8313;  */

void FUN_10b1d82f4(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000107c279a4();
  }
  return;
}



/* Entry: 10b1d8314; end: 10b1d8337;  */

void FUN_10b1d8314(void)

{
  func_0x00010b1eb198();
  FUN_10b1d8250();
  return;
}



/* Entry: 10b1d8338; end: 10b1d8383;  */

void FUN_10b1d8338(void)

{
  int extraout_w8;
  long unaff_x19;
  ulong unaff_x20;
  
  func_0x00010b1eb538();
  func_0x00010b1ee1f8();
  if (extraout_w8 != 0) {
    FUN_10b1d8118(unaff_x19 + 0x10);
  }
  FUN_10b1d82f4(unaff_x20 | 8);
  func_0x00010b1ebc2c();
  func_0x000107c31408();
  FUN_10b1d82f4(unaff_x19 + 0x10);
  return;
}



/* Entry: 10b1d8384; end: 10b1d83a3;  */

void FUN_10b1d8384(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b1d8314();
  }
  return;
}



/* Entry: 10b1d83a4; end: 10b1d83db;  */

void FUN_10b1d83a4(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010b1eb07c();
  if (!(bool)in_ZR) {
    func_0x00010b1eb014((&PTR_FUN_110cc3af8)[extraout_x8]);
  }
  func_0x00010b1eb924();
  return;
}



/* Entry: 10b1d83dc; end: 10b1d83e7;  */

void FUN_10b1d83dc(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10b1d8314();
  }
  return;
}



/* Entry: 10b1d83e8; end: 10b1d8457;  */

long FUN_10b1d83e8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_CY;
  long lVar1;
  long extraout_x8;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010b1ed574();
  if ((bool)in_CY) {
    lVar1 = unaff_x19;
    FUN_10b1d8458();
  }
  else {
    func_0x00010b1ed5a4(*param_2);
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar3 = param_2[4];
    uVar2 = param_2[3];
    *(undefined8 *)(extraout_x8 + 0x28) = param_2[5];
    *(undefined8 *)(extraout_x8 + 0x20) = uVar3;
    *(undefined8 *)(extraout_x8 + 0x18) = uVar2;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    *(undefined2 *)(extraout_x8 + 0x40) = *(undefined2 *)(param_2 + 8);
    *(undefined8 *)(extraout_x8 + 0x38) = uVar3;
    *(undefined8 *)(extraout_x8 + 0x30) = uVar2;
    lVar1 = extraout_x8 + 0x48;
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return lVar1 + -0x48;
}



/* Entry: 10b1d8458; end: 10b1d850b;  */

undefined8 FUN_10b1d8458(void)

{
  undefined2 uVar1;
  long extraout_x8;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010b1eb648();
  FUN_10b1d850c();
  func_0x00010b1ec828();
  FUN_10b1d85bc(auStack_58);
  uVar3 = unaff_x20[1];
  uVar2 = *unaff_x20;
  func_0x00010b1ed5a4(lStack_48);
  func_0x00010b1ec63c();
  *(undefined8 *)(extraout_x8 + 0x28) = unaff_x20[5];
  *(undefined8 *)(extraout_x8 + 0x20) = uVar3;
  *(undefined8 *)(extraout_x8 + 0x18) = uVar2;
  unaff_x20[4] = 0;
  unaff_x20[5] = 0;
  unaff_x20[3] = 0;
  uVar1 = *(undefined2 *)(unaff_x20 + 8);
  uVar2 = unaff_x20[6];
  *(undefined8 *)(extraout_x8 + 0x38) = unaff_x20[7];
  *(undefined8 *)(extraout_x8 + 0x30) = uVar2;
  *(undefined2 *)(extraout_x8 + 0x40) = uVar1;
  lStack_48 = lStack_48 + 0x48;
  func_0x00010b1eb918();
  FUN_10b1d8564();
  uVar2 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010b1d86c8(auStack_58);
  return uVar2;
}



/* Entry: 10b1d850c; end: 10b1d8563;  */

long * FUN_10b1d850c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  
  if (param_2 < (long *)0x38e38e38e38e38f) {
    uVar1 = (param_1[2] - *param_1) / 0x48;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x1c71c71c71c71c6 < uVar1) {
      plVar2 = (long *)0x38e38e38e38e38e;
    }
    return plVar2;
  }
  FUN_10b128580();
  func_0x00010b1eb63c();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x48) * 0x48;
  FUN_10b1d85f0(plVar2,*param_1,param_1[1],lVar3);
  *(long *)(unaff_x19 + 8) = lVar3;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010b1eae3c();
  return plVar2;
}



/* Entry: 10b1d8564; end: 10b1d85bb;  */

void FUN_10b1d8564(long *param_1,long param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar1;
  
  func_0x00010b1eb63c();
  lVar1 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x48) * 0x48;
  FUN_10b1d85f0(param_1 + 2,*param_1,param_1[1],lVar1);
  *(long *)(unaff_x19 + 8) = lVar1;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010b1eae3c();
  return;
}



/* Entry: 10b1d85bc; end: 10b1d85ef;  */

void FUN_10b1d85bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010b1ed404();
  if (param_2 != 0) {
    FUN_10b12858c(param_4);
  }
  func_0x00010b1ebcfc(0x48);
  return;
}



/* Entry: 10b1d85f0; end: 10b1d8697;  */

void FUN_10b1d85f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 9) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    puStack_28[2] = param_2[2];
    puStack_28[1] = uVar2;
    *puStack_28 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    puStack_28[5] = param_2[5];
    puStack_28[4] = uVar2;
    puStack_28[3] = uVar1;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    uVar2 = param_2[7];
    uVar1 = param_2[6];
    *(undefined2 *)(puStack_28 + 8) = *(undefined2 *)(param_2 + 8);
    puStack_28[7] = uVar2;
    puStack_28[6] = uVar1;
    puStack_28 = puStack_28 + 9;
  }
  uStack_50 = param_1;
  puStack_30 = param_4;
  func_0x00010b1ebed4();
  FUN_10b1d8698();
  FUN_10b128628(&uStack_50);
  return;
}



/* Entry: 10b1d8698; end: 10b1d86f3;  */

void FUN_10b1d8698(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x48) {
    func_0x00010b1286a4();
  }
  return;
}



/* Entry: 10b1d86f4; end: 10b1d86fb;  */

void FUN_10b1d86f4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb63c(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x48;
    func_0x00010b1286a4();
  }
  return;
}



/* Entry: 10b1d86fc; end: 10b1d875f;  */

void FUN_10b1d86fc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb63c();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x48;
    func_0x00010b1286a4();
  }
  return;
}


