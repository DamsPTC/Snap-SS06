/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1039dd8e4; end: 1039dda9b;  */

void FUN_1039dd8e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  long lVar5;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  lVar5 = unaff_x20[4];
  func_0x000107c6068c(auStack_88,0);
  func_0x000107c60690(uVar1);
  func_0x000107c5fb58(auStack_88,uVar3,uVar2);
  if (lVar5 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_88,uVar4,lVar5);
  }
  func_0x000107c606a8();
  return;
}



/* Entry: 1039dda9c; end: 1039ddae3;  */

uint FUN_1039dda9c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  func_0x0001039de2d0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1039ddae4; end: 1039ddd1b;  */

void FUN_1039ddae4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *unaff_x20;
  long lVar6;
  
  uVar1 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  uVar2 = unaff_x20[4];
  lVar6 = unaff_x20[5];
  uVar3 = unaff_x20[6];
  lVar5 = unaff_x20[7];
  func_0x000107c5fb58(param_1,*unaff_x20,unaff_x20[1]);
  func_0x000107c5fb58(param_1,uVar1,uVar4);
  if (lVar6 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(param_1,uVar2,lVar6);
  }
  if (lVar5 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(param_1,uVar3,lVar5);
  }
  uVar2 = unaff_x20[9];
  uVar1 = unaff_x20[10];
  uVar3 = unaff_x20[0xb];
  lVar6 = unaff_x20[0xc];
  func_0x000107c60690(unaff_x20[8]);
  func_0x000107c5fb58(param_1,uVar2,uVar1);
  if (lVar6 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(param_1,uVar3,lVar6);
  }
  func_0x000107c60694(*(byte *)(unaff_x20 + 0xd) & 1);
  return;
}



/* Entry: 1039ddd1c; end: 1039ddd2f;  */

void FUN_1039ddd1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = unaff_x20[1];
  *param_1 = *unaff_x20;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 1039ddd30; end: 1039ddd67;  */

void FUN_1039ddd30(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  FUN_1039ddae4(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 1039ddd68; end: 1039dddcf;  */

uint FUN_1039ddd68(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
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
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_a0 = param_1[10];
  uStack_98 = (undefined1)param_1[0xb];
  uStack_8f = *(undefined8 *)((long)param_1 + 0x61);
  uStack_97 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
  uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x61);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x59) >> 0x38);
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_30 = param_2[10];
  uStack_28 = (undefined1)param_2[0xb];
  uStack_27 = (undefined7)((ulong)param_2[0xb] >> 8);
  FUN_1039de384(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1039dddd0; end: 1039dde7b;  */

void FUN_1039dddd0(void)

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



/* Entry: 1039dde7c; end: 1039ddeef;  */

bool FUN_1039dde7c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1039ddef0; end: 1039de16b;  */

undefined8 FUN_1039ddef0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  byte bVar18;
  byte bVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  
  lVar29 = *(long *)(param_1 + 0x10);
  if (lVar29 == *(long *)(param_2 + 0x10)) {
    if ((lVar29 == 0) || (param_1 == param_2)) {
      uVar26 = 1;
    }
    else {
      lVar30 = 0;
      do {
        lVar1 = param_1 + lVar30;
        uVar20 = *(ulong *)(lVar1 + 0x20);
        uVar21 = *(ulong *)(lVar1 + 0x30);
        lVar10 = *(long *)(lVar1 + 0x38);
        uVar22 = *(ulong *)(lVar1 + 0x40);
        lVar11 = *(long *)(lVar1 + 0x48);
        uVar23 = *(ulong *)(lVar1 + 0x50);
        lVar12 = *(long *)(lVar1 + 0x58);
        lVar3 = *(long *)(lVar1 + 0x60);
        uVar24 = *(ulong *)(lVar1 + 0x68);
        lVar4 = *(long *)(lVar1 + 0x70);
        uVar25 = *(ulong *)(lVar1 + 0x78);
        lVar27 = *(long *)(lVar1 + 0x80);
        bVar18 = *(byte *)(lVar1 + 0x88);
        lVar2 = param_2 + lVar30;
        uVar5 = *(ulong *)(lVar2 + 0x30);
        lVar13 = *(long *)(lVar2 + 0x38);
        uVar6 = *(ulong *)(lVar2 + 0x40);
        lVar14 = *(long *)(lVar2 + 0x48);
        uVar7 = *(ulong *)(lVar2 + 0x50);
        lVar15 = *(long *)(lVar2 + 0x58);
        lVar8 = *(long *)(lVar2 + 0x60);
        uVar16 = *(ulong *)(lVar2 + 0x68);
        lVar9 = *(long *)(lVar2 + 0x70);
        uVar17 = *(ulong *)(lVar2 + 0x78);
        lVar28 = *(long *)(lVar2 + 0x80);
        bVar19 = *(byte *)(lVar2 + 0x88);
        if ((((uVar20 != *(ulong *)(lVar2 + 0x20)) ||
             (*(long *)(lVar1 + 0x28) != *(long *)(lVar2 + 0x28))) &&
            (func_0x000107c605b8(), (uVar20 & 1) == 0)) ||
           (((uVar21 != uVar5 || (lVar10 != lVar13)) &&
            (func_0x000107c605b8(uVar21,lVar10,uVar5,lVar13,0), (uVar21 & 1) == 0))))
        goto LAB_1039de140;
        if (lVar11 == 0) {
          if (lVar14 != 0) goto LAB_1039de140;
        }
        else if ((lVar14 == 0) ||
                (((uVar22 != uVar6 || (lVar11 != lVar14)) &&
                 (func_0x000107c605b8(uVar22,lVar11,uVar6,lVar14,0), (uVar22 & 1) == 0))))
        goto LAB_1039de140;
        if (lVar12 == 0) {
          if (lVar15 != 0) {
            return 0;
          }
LAB_1039de0c0:
          if (lVar3 != lVar8) {
            return 0;
          }
        }
        else {
          if (lVar15 == 0) goto LAB_1039de140;
          if ((uVar23 != uVar7) || (lVar12 != lVar15)) {
            func_0x000107c605b8();
            if ((uVar23 & 1) == 0) {
              return 0;
            }
            goto LAB_1039de0c0;
          }
          if (lVar3 != lVar8) goto LAB_1039de140;
        }
        if (((uVar24 != uVar16) || (lVar4 != lVar9)) && (func_0x000107c605b8(), (uVar24 & 1) == 0))
        goto LAB_1039de140;
        if (lVar27 == 0) {
          if (lVar28 != 0) {
            return 0;
          }
LAB_1039ddf4c:
          if (((bVar18 ^ bVar19) & 1) != 0) {
            return 0;
          }
        }
        else {
          if (lVar28 == 0) goto LAB_1039de140;
          if ((uVar25 != uVar17) || (lVar27 != lVar28)) {
            func_0x000107c605b8();
            if ((uVar25 & 1) == 0) {
              return 0;
            }
            goto LAB_1039ddf4c;
          }
          if (bVar18 != bVar19) goto LAB_1039de140;
        }
        lVar30 = lVar30 + 0x70;
        uVar26 = 1;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
    }
  }
  else {
LAB_1039de140:
    uVar26 = 0;
  }
  return uVar26;
}



/* Entry: 1039de16c; end: 1039de1eb;  */

uint FUN_1039de16c(undefined8 *param_1,undefined8 *param_2)

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
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined8 uStack_ae;
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
  undefined2 uStack_38;
  undefined6 uStack_36;
  undefined2 uStack_30;
  undefined8 uStack_2e;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_c0 = param_1[0xc];
  uStack_b8 = (undefined2)param_1[0xd];
  uStack_ae = *(undefined8 *)((long)param_1 + 0x72);
  uStack_b6 = (undefined6)*(undefined8 *)((long)param_1 + 0x6a);
  uStack_b0 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x6a) >> 0x30);
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
  uStack_2e = *(undefined8 *)((long)param_2 + 0x72);
  uStack_30 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x6a) >> 0x30);
  uStack_38 = (undefined2)param_2[0xd];
  uStack_36 = (undefined6)((ulong)param_2[0xd] >> 0x10);
  FUN_1039de548(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 1039de1ec; end: 1039de383;  */

undefined8 FUN_1039de1ec(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
     && ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar1 & 1) != 0)))) {
    uVar1 = param_2[5];
    if (param_1[5] == 0) {
      if (uVar1 != 0) {
        return 0;
      }
    }
    else {
      if (uVar1 == 0) {
        return 0;
      }
      uVar2 = param_1[4];
      if (((uVar2 != param_2[4]) || (param_1[5] != uVar1)) &&
         (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
        return 0;
      }
    }
    uVar1 = param_2[7];
    if (param_1[7] == 0) {
      if (uVar1 == 0) {
        return 1;
      }
    }
    else if ((uVar1 != 0) &&
            (((uVar2 = param_1[6], uVar2 == param_2[6] && (param_1[7] == uVar1)) ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1039de384; end: 1039de547;  */

byte FUN_1039de384(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte bVar13;
  ulong uVar14;
  
  uVar7 = *param_1;
  uVar8 = param_1[2];
  uVar11 = param_1[3];
  uVar9 = param_1[4];
  uVar12 = param_1[5];
  uVar10 = param_1[6];
  uVar14 = param_1[7];
  uVar1 = param_2[2];
  uVar4 = param_2[3];
  uVar2 = param_2[4];
  uVar5 = param_2[5];
  uVar3 = param_2[6];
  uVar6 = param_2[7];
  if ((((uVar7 == *param_2) && (param_1[1] == param_2[1])) ||
      (func_0x000107c605b8(), (uVar7 & 1) != 0)) &&
     (((uVar8 == uVar1 && (uVar11 == uVar4)) ||
      (func_0x000107c605b8(uVar8,uVar11,uVar1,uVar4,0), (uVar8 & 1) != 0)))) {
    if (uVar12 == 0) {
      if (uVar5 == 0) goto LAB_1039de45c;
    }
    else if ((uVar5 != 0) &&
            (((uVar9 == uVar2 && (uVar12 == uVar5)) ||
             (func_0x000107c605b8(uVar9,uVar12,uVar2,uVar5,0), (uVar9 & 1) != 0)))) {
LAB_1039de45c:
      if (uVar14 == 0) {
        if (uVar6 == 0) goto LAB_1039de498;
      }
      else if ((uVar6 != 0) &&
              (((uVar10 == uVar3 && (uVar14 == uVar6)) || (func_0x000107c605b8(), (uVar10 & 1) != 0)
               ))) {
LAB_1039de498:
        if (param_1[8] == param_2[8]) {
          uVar11 = param_1[9];
          uVar12 = param_1[0xb];
          uVar2 = param_1[0xc];
          uVar1 = param_2[0xb];
          uVar3 = param_2[0xc];
          if (((uVar11 == param_2[9]) && (param_1[10] == param_2[10])) ||
             (func_0x000107c605b8(), (uVar11 & 1) != 0)) {
            if (uVar2 == 0) {
              if (uVar3 == 0) goto LAB_1039de508;
            }
            else if ((uVar3 != 0) &&
                    (((uVar12 == uVar1 && (uVar2 == uVar3)) ||
                     (func_0x000107c605b8(uVar12,uVar2,uVar1,uVar3,0), (uVar12 & 1) != 0)))) {
LAB_1039de508:
              bVar13 = (byte)param_1[0xd] ^ (byte)param_2[0xd] ^ 1;
              goto LAB_1039de524;
            }
          }
        }
      }
    }
  }
  bVar13 = 0;
LAB_1039de524:
  return bVar13 & 1;
}



/* Entry: 1039de548; end: 1039de7f7;  */

byte FUN_1039de548(byte *param_1,byte *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined1 auStack_430 [112];
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 uStack_368;
  undefined7 uStack_367;
  undefined1 uStack_360;
  undefined8 uStack_35f;
  undefined8 uStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined7 uStack_2ef;
  undefined1 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined8 uStack_27f;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined1 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined8 uStack_19f;
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
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
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
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
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
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  if ((((*param_1 ^ *param_2) & 1) != 0) || (param_1[1] != param_2[1])) {
    return 0;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  FUN_1039ddef0(uVar1,*(undefined8 *)(param_2 + 8));
  if ((uVar1 & 1) == 0) {
LAB_1039de6f0:
    bVar3 = 0;
  }
  else {
    uStack_238 = *(undefined8 *)(param_1 + 0x48);
    uStack_240 = *(undefined8 *)(param_1 + 0x40);
    uStack_d8 = *(undefined8 *)(param_1 + 0x58);
    uStack_e0 = *(undefined8 *)(param_1 + 0x50);
    uStack_228 = *(undefined8 *)(param_1 + 0x58);
    uStack_230 = *(undefined8 *)(param_1 + 0x50);
    uStack_d0 = *(undefined8 *)(param_1 + 0x60);
    uStack_c8 = (undefined1)*(undefined8 *)(param_1 + 0x68);
    uStack_bf = *(undefined8 *)(param_1 + 0x71);
    uStack_c7 = (undefined7)*(undefined8 *)(param_1 + 0x69);
    uStack_c0 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x69) >> 0x38);
    uStack_118 = *(undefined8 *)(param_1 + 0x18);
    uStack_120 = *(undefined8 *)(param_1 + 0x10);
    uStack_108 = *(undefined8 *)(param_1 + 0x28);
    uStack_110 = *(undefined8 *)(param_1 + 0x20);
    uStack_f8 = *(undefined8 *)(param_1 + 0x38);
    uStack_100 = *(undefined8 *)(param_1 + 0x30);
    uStack_e8 = *(undefined8 *)(param_1 + 0x48);
    uStack_f0 = *(undefined8 *)(param_1 + 0x40);
    lStack_268 = *(long *)(param_1 + 0x18);
    uStack_270 = *(undefined8 *)(param_1 + 0x10);
    uStack_258 = *(undefined8 *)(param_1 + 0x28);
    uStack_260 = *(undefined8 *)(param_1 + 0x20);
    uStack_248 = *(undefined8 *)(param_1 + 0x38);
    uStack_250 = *(undefined8 *)(param_1 + 0x30);
    uStack_188 = *(undefined8 *)(param_2 + 0x18);
    uStack_190 = *(undefined8 *)(param_2 + 0x10);
    uStack_178 = *(undefined8 *)(param_2 + 0x28);
    uStack_180 = *(undefined8 *)(param_2 + 0x20);
    uStack_12f = *(undefined8 *)(param_2 + 0x71);
    uStack_130 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x69) >> 0x38);
    uStack_2a8 = *(undefined8 *)(param_2 + 0x48);
    uStack_2b0 = *(undefined8 *)(param_2 + 0x40);
    uStack_148 = *(undefined8 *)(param_2 + 0x58);
    uStack_150 = *(undefined8 *)(param_2 + 0x50);
    uStack_298 = *(undefined8 *)(param_2 + 0x58);
    uStack_2a0 = *(undefined8 *)(param_2 + 0x50);
    uStack_140 = *(undefined8 *)(param_2 + 0x60);
    uStack_138 = (undefined1)*(undefined8 *)(param_2 + 0x68);
    uStack_137 = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x68) >> 8);
    uStack_168 = *(undefined8 *)(param_2 + 0x38);
    uStack_170 = *(undefined8 *)(param_2 + 0x30);
    uStack_158 = *(undefined8 *)(param_2 + 0x48);
    uStack_160 = *(undefined8 *)(param_2 + 0x40);
    lStack_2d8 = *(long *)(param_2 + 0x18);
    uStack_2e0 = *(undefined8 *)(param_2 + 0x10);
    uStack_2c8 = *(undefined8 *)(param_2 + 0x28);
    uStack_2d0 = *(undefined8 *)(param_2 + 0x20);
    uStack_2b8 = *(undefined8 *)(param_2 + 0x38);
    uStack_2c0 = *(undefined8 *)(param_2 + 0x30);
    uStack_220 = *(undefined8 *)(param_1 + 0x60);
    uStack_218 = (undefined1)*(undefined8 *)(param_1 + 0x68);
    uStack_20f = (undefined7)*(undefined8 *)(param_1 + 0x71);
    uStack_208 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x71) >> 0x38);
    uStack_217 = (undefined7)*(undefined8 *)(param_1 + 0x69);
    uStack_210 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x69) >> 0x38);
    uStack_27f = *(undefined8 *)(param_2 + 0x71);
    uStack_1a0 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x69) >> 0x38);
    uStack_290 = *(undefined8 *)(param_2 + 0x60);
    uStack_1a8 = (undefined1)*(undefined8 *)(param_2 + 0x68);
    uStack_1a7 = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x68) >> 8);
    uStack_200 = uStack_2e0;
    lStack_1f8 = lStack_2d8;
    uStack_1f0 = uStack_2d0;
    uStack_1e8 = uStack_2c8;
    uStack_1e0 = uStack_2c0;
    uStack_1d8 = uStack_2b8;
    uStack_1d0 = uStack_2b0;
    uStack_1c8 = uStack_2a8;
    uStack_1c0 = uStack_2a0;
    uStack_1b8 = uStack_298;
    uStack_1b0 = uStack_290;
    uStack_19f = uStack_27f;
    if (lStack_268 == 0) {
      if (lStack_2d8 == 0) {
        uStack_308 = *(undefined8 *)(param_1 + 0x58);
        uStack_310 = *(undefined8 *)(param_1 + 0x50);
        uStack_300 = *(undefined8 *)(param_1 + 0x60);
        uStack_2f8 = (undefined1)*(undefined8 *)(param_1 + 0x68);
        uStack_2ef = (undefined7)*(undefined8 *)(param_1 + 0x71);
        uStack_2e8 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x71) >> 0x38);
        uStack_2f7 = (undefined7)*(undefined8 *)(param_1 + 0x69);
        uStack_2f0 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x69) >> 0x38);
        lStack_348 = *(long *)(param_1 + 0x18);
        uStack_350 = *(undefined8 *)(param_1 + 0x10);
        uStack_338 = *(undefined8 *)(param_1 + 0x28);
        uStack_340 = *(undefined8 *)(param_1 + 0x20);
        uStack_328 = *(undefined8 *)(param_1 + 0x38);
        uStack_330 = *(undefined8 *)(param_1 + 0x30);
        uStack_318 = *(undefined8 *)(param_1 + 0x48);
        uStack_320 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010213df40(&uStack_120,&uStack_b0);
        func_0x00010213df40(&uStack_190,&uStack_b0);
        FUN_1039df70c(&uStack_350,0x112e5b300,&UNK_10da60e30);
LAB_1039de7cc:
        bVar3 = param_1[0x79] ^ param_2[0x79] ^ 1;
        goto LAB_1039de7dc;
      }
    }
    else if (lStack_2d8 != 0) {
      uStack_378 = *(undefined8 *)(param_2 + 0x58);
      uStack_380 = *(undefined8 *)(param_2 + 0x50);
      uStack_370 = *(undefined8 *)(param_2 + 0x60);
      uStack_368 = (undefined1)*(undefined8 *)(param_2 + 0x68);
      uStack_35f = *(undefined8 *)(param_2 + 0x71);
      uStack_367 = (undefined7)*(undefined8 *)(param_2 + 0x69);
      uStack_360 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x69) >> 0x38);
      uStack_3b8 = *(undefined8 *)(param_2 + 0x18);
      uStack_3c0 = *(undefined8 *)(param_2 + 0x10);
      uStack_3a8 = *(undefined8 *)(param_2 + 0x28);
      uStack_3b0 = *(undefined8 *)(param_2 + 0x20);
      uStack_398 = *(undefined8 *)(param_2 + 0x38);
      uStack_3a0 = *(undefined8 *)(param_2 + 0x30);
      uStack_388 = *(undefined8 *)(param_2 + 0x48);
      uStack_390 = *(undefined8 *)(param_2 + 0x40);
      uStack_2ef = (undefined7)uStack_35f;
      uStack_2e8 = (undefined1)((ulong)uStack_35f >> 0x38);
      uStack_68 = *(undefined8 *)(param_1 + 0x58);
      uStack_70 = *(undefined8 *)(param_1 + 0x50);
      uStack_60 = *(undefined8 *)(param_1 + 0x60);
      uStack_58 = (undefined1)*(undefined8 *)(param_1 + 0x68);
      uStack_4f = *(undefined8 *)(param_1 + 0x71);
      uStack_57 = (undefined7)*(undefined8 *)(param_1 + 0x69);
      uStack_50 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x69) >> 0x38);
      uStack_a8 = *(undefined8 *)(param_1 + 0x18);
      uStack_b0 = *(undefined8 *)(param_1 + 0x10);
      uStack_98 = *(undefined8 *)(param_1 + 0x28);
      uStack_a0 = *(undefined8 *)(param_1 + 0x20);
      uStack_88 = *(undefined8 *)(param_1 + 0x38);
      uStack_90 = *(undefined8 *)(param_1 + 0x30);
      uStack_78 = *(undefined8 *)(param_1 + 0x48);
      uStack_80 = *(undefined8 *)(param_1 + 0x40);
      puVar2 = &uStack_b0;
      uStack_350 = uStack_3c0;
      lStack_348 = uStack_3b8;
      uStack_340 = uStack_3b0;
      uStack_338 = uStack_3a8;
      uStack_330 = uStack_3a0;
      uStack_328 = uStack_398;
      uStack_320 = uStack_390;
      uStack_318 = uStack_388;
      uStack_310 = uStack_380;
      uStack_308 = uStack_378;
      uStack_300 = uStack_370;
      uStack_2f8 = uStack_368;
      uStack_2f7 = uStack_367;
      uStack_2f0 = uStack_360;
      FUN_1039de384(puVar2,&uStack_350);
      func_0x00010213df40(&uStack_120,auStack_430);
      func_0x00010213df40(&uStack_190,auStack_430);
      FUN_1039df70c(&uStack_3c0,0x112e5b300,&UNK_10da60e30);
      FUN_1039df70c(&uStack_270,0x112e5b300,&UNK_10da60e30);
      if (((ulong)puVar2 & 1) != 0) goto LAB_1039de7cc;
      goto LAB_1039de6f0;
    }
    uStack_287 = uStack_1a7;
    uStack_280 = uStack_1a0;
    uStack_2e8 = uStack_208;
    uStack_2f0 = uStack_210;
    uStack_2ef = uStack_20f;
    uStack_2f8 = uStack_218;
    uStack_2f7 = uStack_217;
    uStack_350 = uStack_270;
    lStack_348 = lStack_268;
    uStack_340 = uStack_260;
    uStack_338 = uStack_258;
    uStack_330 = uStack_250;
    uStack_328 = uStack_248;
    uStack_320 = uStack_240;
    uStack_318 = uStack_238;
    uStack_310 = uStack_230;
    uStack_308 = uStack_228;
    uStack_300 = uStack_220;
    uStack_288 = uStack_1a8;
    func_0x00010213df40(&uStack_120,&uStack_b0);
    func_0x00010213df40(&uStack_190,&uStack_b0);
    FUN_1039df70c(&uStack_350,0x112fc8a78,&UNK_10dc353f0);
    bVar3 = 0;
  }
LAB_1039de7dc:
  return bVar3 & 1;
}



/* Entry: 1039de7f8; end: 1039de7fb;  */

void FUN_1039de7f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc8a58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc351e8;
  func_0x000107c61520(&UNK_10dc351e8,&UNK_1106ba2c0);
  puRam0000000112fc8a58 = puVar1;
  return;
}



/* Entry: 1039de7fc; end: 1039de83b;  */

void FUN_1039de7fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc8a58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc351e8;
  func_0x000107c61520(&UNK_10dc351e8,&UNK_1106ba2c0);
  puRam0000000112fc8a58 = puVar1;
  return;
}



/* Entry: 1039de83c; end: 1039de83f;  */

void FUN_1039de83c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc8a60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc35250;
  func_0x000107c61520(&UNK_10dc35250,&UNK_1106ba348);
  puRam0000000112fc8a60 = puVar1;
  return;
}



/* Entry: 1039de840; end: 1039de87f;  */

void FUN_1039de840(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc8a60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc35250;
  func_0x000107c61520(&UNK_10dc35250,&UNK_1106ba348);
  puRam0000000112fc8a60 = puVar1;
  return;
}



/* Entry: 1039de880; end: 1039de88f;  */

undefined * FUN_1039de880(void)

{
  return PTR___sSSSHsWP_11034da90;
}



/* Entry: 1039de890; end: 1039de8cf;  */

void FUN_1039de890(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc8a68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc352f0;
  func_0x000107c61520(&UNK_10dc352f0,&UNK_1106ba238);
  puRam0000000112fc8a68 = puVar1;
  return;
}



/* Entry: 1039de8d0; end: 1039de8d3;  */

void FUN_1039de8d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc8a70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc35358;
  func_0x000107c61520(&UNK_10dc35358,&UNK_1106ba478);
  puRam0000000112fc8a70 = puVar1;
  return;
}



/* Entry: 1039de8d4; end: 1039de913;  */

void FUN_1039de8d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc8a70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc35358;
  func_0x000107c61520(&UNK_10dc35358,&UNK_1106ba478);
  puRam0000000112fc8a70 = puVar1;
  return;
}



/* Entry: 1039de914; end: 1039de95b;  */

/* WARNING: Possible PIC construction at 0x0001039de928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039de938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039de948: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039de93c) */
/* WARNING: Removing unreachable block (ram,0x0001039de92c) */
/* WARNING: Removing unreachable block (ram,0x0001039de94c) */

void FUN_1039de914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1039de95c; end: 1039de9f7;  */

undefined8 * FUN_1039de95c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar5 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  uVar5 = param_2[10];
  uVar4 = param_2[0xb];
  param_1[10] = uVar5;
  param_1[0xb] = uVar4;
  uVar4 = param_2[0xc];
  param_1[0xc] = uVar4;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 1039de9f8; end: 1039deaf3;  */

undefined8 * FUN_1039de9f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xb] = param_2[0xb];
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  return param_1;
}



/* Entry: 1039deaf4; end: 1039deb87;  */

undefined8 * FUN_1039deaf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  uVar2 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[0xc];
  uVar1 = param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  return param_1;
}



/* Entry: 1039deb88; end: 1039dec3b;  */

int FUN_1039deb88(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x69) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1039dec3c; end: 1039dec73;  */

/* WARNING: Possible PIC construction at 0x0001039dec50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039dec60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039dec54) */
/* WARNING: Removing unreachable block (ram,0x0001039dec64) */

void FUN_1039dec3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1039dec74; end: 1039ded83;  */

undefined8 * FUN_1039dec74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 1039ded84; end: 1039dede7;  */

undefined8 * FUN_1039ded84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1039dede8; end: 1039dee8f;  */

int FUN_1039dede8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1039dee90; end: 1039deefb;  */

/* WARNING: Possible PIC construction at 0x0001039deea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039deea8) */

void FUN_1039dee90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1039deefc; end: 1039def6f;  */

undefined8 * FUN_1039deefc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1039def70; end: 1039defbb;  */

undefined8 * FUN_1039def70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1039defbc; end: 1039df05b;  */

int FUN_1039defbc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1039df05c; end: 1039df0bb;  */

/* WARNING: Possible PIC construction at 0x0001039df070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039df084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039df094: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039df088) */
/* WARNING: Removing unreachable block (ram,0x0001039df074) */
/* WARNING: Removing unreachable block (ram,0x0001039df0b0) */
/* WARNING: Removing unreachable block (ram,0x0001039df07c) */
/* WARNING: Removing unreachable block (ram,0x0001039df098) */

void FUN_1039df05c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1039df0bc; end: 1039df3fb;  */

undefined2 * FUN_1039df0bc(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  lVar2 = *(long *)(param_2 + 0xc);
  func_0x000107c61434();
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    uVar6 = *(undefined8 *)(param_2 + 0x34);
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    *(undefined8 *)(param_1 + 0x34) = uVar6;
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    uVar4 = *(undefined8 *)((long)param_2 + 0x69);
    *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
    *(undefined8 *)((long)param_1 + 0x69) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 8);
    uVar6 = *(undefined8 *)(param_2 + 0x14);
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 8) = uVar4;
    *(undefined8 *)(param_1 + 0x14) = uVar6;
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    uVar5 = *(undefined8 *)(param_2 + 0x24);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    *(undefined8 *)(param_1 + 0x24) = uVar5;
    *(undefined8 *)(param_1 + 0x20) = uVar4;
  }
  else {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(long *)(param_1 + 0xc) = lVar2;
    uVar5 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x14) = uVar5;
    uVar6 = *(undefined8 *)(param_2 + 0x1c);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x1c) = uVar6;
    uVar1 = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x24) = uVar1;
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    uVar3 = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    *(undefined8 *)(param_1 + 0x34) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
    func_0x000107c61434(lVar2);
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar6);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar3);
  }
  *(undefined1 *)((long)param_1 + 0x79) = *(undefined1 *)((long)param_2 + 0x79);
  return param_1;
}



/* Entry: 1039df3fc; end: 1039df4ef;  */

undefined1 * FUN_1039df3fc(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c6142c(uVar1);
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar3 = *(long *)(param_2 + 0x18);
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(long *)(param_1 + 0x18) = lVar3;
      func_0x000107c6142c();
      uVar1 = *(undefined8 *)(param_2 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x28) = uVar1;
      func_0x000107c6142c(uVar2);
      uVar1 = *(undefined8 *)(param_2 + 0x38);
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x38) = uVar1;
      func_0x000107c6142c(uVar2);
      uVar1 = *(undefined8 *)(param_2 + 0x48);
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(param_1 + 0x48) = uVar1;
      func_0x000107c6142c(uVar2);
      uVar1 = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 *)(param_1 + 0x50) = uVar1;
      uVar1 = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
      func_0x000107c6142c(uVar1);
      uVar1 = *(undefined8 *)(param_2 + 0x70);
      uVar2 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
      *(undefined8 *)(param_1 + 0x70) = uVar1;
      func_0x000107c6142c(uVar2);
      param_1[0x78] = param_2[0x78];
      goto LAB_1039df4d8;
    }
    func_0x0001021383b8(param_1 + 0x10);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x69);
  *(undefined8 *)(param_1 + 0x71) = *(undefined8 *)(param_2 + 0x71);
  *(undefined8 *)(param_1 + 0x69) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
LAB_1039df4d8:
  param_1[0x79] = param_2[0x79];
  return param_1;
}



/* Entry: 1039df4f0; end: 1039df70b;  */

int FUN_1039df4f0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x7a) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1039df70c; end: 1039df74b;  */

undefined8 FUN_1039df70c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1039df74c; end: 1039df75b;  */

long FUN_1039df74c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1039df75c; end: 1039df89b;  */

void FUN_1039df75c(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  uVar1 = 0x4244;
  if (param_2 != 5) {
    uVar1 = 0xd000000000000012;
  }
  uVar4 = 0xe200000000000000;
  if (param_2 != 5) {
    uVar4 = 0x800000010f065000;
  }
  uVar6 = 0x53474e4954544553;
  if (param_2 != 3) {
    uVar6 = 0xd000000000000012;
  }
  uVar2 = 0xe800000000000000;
  if (param_2 != 3) {
    uVar2 = 0x800000010f065020;
  }
  if (param_2 < 5) {
    uVar4 = uVar2;
    uVar1 = uVar6;
  }
  uVar6 = 0xee005353494d5349;
  uVar2 = 0x445f474f4c414944;
  if (param_2 != 1) {
    uVar6 = 0xee004e4f444e4142;
    uVar2 = 0x415f474f4c414944;
  }
  uVar3 = 0xed00004e4f545455;
  uVar5 = 0x425f474f4c414944;
  if (param_2 != 0) {
    uVar3 = uVar6;
    uVar5 = uVar2;
  }
  if (param_2 < 3) {
    uVar4 = uVar3;
    uVar1 = uVar5;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 1039df89c; end: 1039df8b3;  */

void FUN_1039df89c(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1039df8b4; end: 1039df90f;  */

void FUN_1039df8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x0001039e079c();
  func_0x000107c5fc44(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1039df910; end: 1039df95b;  */

void FUN_1039df910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001039e079c();
  func_0x000107c5fc30(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1039df95c; end: 1039dfa07;  */

void FUN_1039df95c(void)

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



/* Entry: 1039dfa08; end: 1039dfa63;  */

void FUN_1039dfa08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x0001039e075c();
  func_0x000107c5fc44(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1039dfa64; end: 1039dfaaf;  */

void FUN_1039dfa64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001039e075c();
  func_0x000107c5fc30(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1039dfab0; end: 1039dfc57;  */

void FUN_1039dfab0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar4 = 0x736e656c;
  if (cVar3 != '\x01') {
    uVar4 = 0x6264;
  }
  uVar1 = 0xe400000000000000;
  if (cVar3 != '\x01') {
    uVar1 = 0xe200000000000000;
  }
  uVar2 = 0x6e776f6e6b6e75;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  uVar4 = 0xe700000000000000;
  if (cVar3 != '\0') {
    uVar4 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 1039dfc58; end: 1039dfca3;  */

void FUN_1039dfc58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  uVar4 = 0x736e656c;
  if (cVar3 != '\x01') {
    uVar4 = 0x6264;
  }
  uVar1 = 0xe400000000000000;
  if (cVar3 != '\x01') {
    uVar1 = 0xe200000000000000;
  }
  uVar2 = 0x6e776f6e6b6e75;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  uVar4 = 0xe700000000000000;
  if (cVar3 != '\0') {
    uVar4 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar4;
  return;
}



/* Entry: 1039dfca4; end: 1039dfcff;  */

void FUN_1039dfca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x0001039e071c();
  func_0x000107c5fc40(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1039dfd00; end: 1039dfd4b;  */

void FUN_1039dfd00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001039e071c();
  func_0x000107c5fc2c(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1039dfd4c; end: 1039dfd57;  */

void FUN_1039dfd4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar5 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x4244;
  if (bVar5 != 5) {
    uVar1 = 0xd000000000000012;
  }
  uVar4 = 0xe200000000000000;
  if (bVar5 != 5) {
    uVar4 = 0x800000010f065000;
  }
  uVar7 = 0x53474e4954544553;
  if (bVar5 != 3) {
    uVar7 = 0xd000000000000012;
  }
  uVar2 = 0xe800000000000000;
  if (bVar5 != 3) {
    uVar2 = 0x800000010f065020;
  }
  if (bVar5 < 5) {
    uVar4 = uVar2;
    uVar1 = uVar7;
  }
  uVar7 = 0xee005353494d5349;
  uVar2 = 0x445f474f4c414944;
  if (bVar5 != 1) {
    uVar7 = 0xee004e4f444e4142;
    uVar2 = 0x415f474f4c414944;
  }
  uVar3 = 0xed00004e4f545455;
  uVar6 = 0x425f474f4c414944;
  if (bVar5 != 0) {
    uVar3 = uVar7;
    uVar6 = uVar2;
  }
  if (bVar5 < 3) {
    uVar4 = uVar3;
    uVar1 = uVar6;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 1039dfd58; end: 1039dfe73;  */

void FUN_1039dfd58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar1 = 0x4244;
  if (bVar5 != 5) {
    uVar1 = 0xd000000000000012;
  }
  uVar4 = 0xe200000000000000;
  if (bVar5 != 5) {
    uVar4 = 0x800000010f065000;
  }
  uVar7 = 0x53474e4954544553;
  if (bVar5 != 3) {
    uVar7 = 0xd000000000000012;
  }
  uVar2 = 0xe800000000000000;
  if (bVar5 != 3) {
    uVar2 = 0x800000010f065020;
  }
  if (bVar5 < 5) {
    uVar4 = uVar2;
    uVar1 = uVar7;
  }
  uVar7 = 0xee005353494d5349;
  uVar2 = 0x445f474f4c414944;
  if (bVar5 != 1) {
    uVar7 = 0xee004e4f444e4142;
    uVar2 = 0x415f474f4c414944;
  }
  uVar3 = 0xed00004e4f545455;
  uVar6 = 0x425f474f4c414944;
  if (bVar5 != 0) {
    uVar3 = uVar7;
    uVar6 = uVar2;
  }
  if (bVar5 < 3) {
    uVar4 = uVar3;
    uVar1 = uVar6;
  }
  func_0x000107c5fb58(param_1,uVar1,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 1039dfe74; end: 1039dfe7b;  */

void FUN_1039dfe74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar5 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  uVar1 = 0x4244;
  if (bVar5 != 5) {
    uVar1 = 0xd000000000000012;
  }
  uVar4 = 0xe200000000000000;
  if (bVar5 != 5) {
    uVar4 = 0x800000010f065000;
  }
  uVar7 = 0x53474e4954544553;
  if (bVar5 != 3) {
    uVar7 = 0xd000000000000012;
  }
  uVar2 = 0xe800000000000000;
  if (bVar5 != 3) {
    uVar2 = 0x800000010f065020;
  }
  if (bVar5 < 5) {
    uVar4 = uVar2;
    uVar1 = uVar7;
  }
  uVar7 = 0xee005353494d5349;
  uVar2 = 0x445f474f4c414944;
  if (bVar5 != 1) {
    uVar7 = 0xee004e4f444e4142;
    uVar2 = 0x415f474f4c414944;
  }
  uVar3 = 0xed00004e4f545455;
  uVar6 = 0x425f474f4c414944;
  if (bVar5 != 0) {
    uVar3 = uVar7;
    uVar6 = uVar2;
  }
  if (bVar5 < 3) {
    uVar4 = uVar3;
    uVar1 = uVar6;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 1039dfe7c; end: 1039dfea7;  */

void FUN_1039dfe7c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001039e0104(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1039dfea8; end: 1039dffa7;  */

void FUN_1039dfea8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar1 = 0x4244;
  if (bVar5 != 5) {
    uVar1 = 0xd000000000000012;
  }
  uVar4 = 0xe200000000000000;
  if (bVar5 != 5) {
    uVar4 = 0x800000010f065000;
  }
  uVar7 = 0x53474e4954544553;
  if (bVar5 != 3) {
    uVar7 = 0xd000000000000012;
  }
  uVar2 = 0xe800000000000000;
  if (bVar5 != 3) {
    uVar2 = 0x800000010f065020;
  }
  if (bVar5 < 5) {
    uVar4 = uVar2;
    uVar1 = uVar7;
  }
  uVar7 = 0xee005353494d5349;
  uVar2 = 0x445f474f4c414944;
  if (bVar5 != 1) {
    uVar7 = 0xee004e4f444e4142;
    uVar2 = 0x415f474f4c414944;
  }
  uVar3 = 0xed00004e4f545455;
  uVar6 = 0x425f474f4c414944;
  if (bVar5 != 0) {
    uVar3 = uVar7;
    uVar6 = uVar2;
  }
  if (bVar5 < 3) {
    uVar4 = uVar3;
    uVar1 = uVar6;
  }
  *param_1 = uVar1;
  param_1[1] = uVar4;
  return;
}



/* Entry: 1039dffa8; end: 1039e0003;  */

void FUN_1039dffa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1039e06dc();
  func_0x000107c5fc40(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1039e0004; end: 1039e004f;  */

void FUN_1039e0004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1039e06dc();
  func_0x000107c5fc2c(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1039e0050; end: 1039e008f;  */

void FUN_1039e0050(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112fc8ab0;
  func_0x0001000285a8(0x112fc8ab0,&UNK_10dc354f0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1039e0090; end: 1039e009f;  */

ulong FUN_1039e0090(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 1039e00a0; end: 1039e0167;  */

ulong FUN_1039e00a0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 1039e0168; end: 1039e016b;  */

void FUN_1039e0168(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc8ab8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc354f8;
  func_0x000107c61520(&UNK_10dc354f8,&UNK_1106ba560);
  puRam0000000112fc8ab8 = puVar1;
  return;
}



/* Entry: 1039e016c; end: 1039e01ab;  */

void FUN_1039e016c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc8ab8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc354f8;
  func_0x000107c61520(&UNK_10dc354f8,&UNK_1106ba560);
  puRam0000000112fc8ab8 = puVar1;
  return;
}



/* Entry: 1039e01ac; end: 1039e01af;  */

void FUN_1039e01ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc8ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc355e8;
  func_0x000107c61520(&UNK_10dc355e8,&UNK_1106ba5f0);
  puRam0000000112fc8ac0 = puVar1;
  return;
}



/* Entry: 1039e01b0; end: 1039e01ef;  */

void FUN_1039e01b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc8ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc355e8;
  func_0x000107c61520(&UNK_10dc355e8,&UNK_1106ba5f0);
  puRam0000000112fc8ac0 = puVar1;
  return;
}



/* Entry: 1039e01f0; end: 1039e01f3;  */

void FUN_1039e01f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc8ac8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc356d8;
  func_0x000107c61520(&UNK_10dc356d8,&UNK_1106ba680);
  puRam0000000112fc8ac8 = puVar1;
  return;
}



/* Entry: 1039e01f4; end: 1039e0233;  */

void FUN_1039e01f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc8ac8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc356d8;
  func_0x000107c61520(&UNK_10dc356d8,&UNK_1106ba680);
  puRam0000000112fc8ac8 = puVar1;
  return;
}



/* Entry: 1039e0234; end: 1039e0237;  */

void FUN_1039e0234(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc8ad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc357c8;
  func_0x000107c61520(&UNK_10dc357c8,&UNK_1106ba710);
  puRam0000000112fc8ad0 = puVar1;
  return;
}



/* Entry: 1039e0238; end: 1039e0277;  */

void FUN_1039e0238(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc8ad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc357c8;
  func_0x000107c61520(&UNK_10dc357c8,&UNK_1106ba710);
  puRam0000000112fc8ad0 = puVar1;
  return;
}



/* Entry: 1039e0278; end: 1039e027b;  */

void FUN_1039e0278(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112fc8ad8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112fc8ae0;
  func_0x00010002969c(0x112fc8ae0,&UNK_10dc358b8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112fc8ad8 = puVar2;
  return;
}



/* Entry: 1039e027c; end: 1039e02cb;  */

void FUN_1039e027c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112fc8ad8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112fc8ae0;
  func_0x00010002969c(0x112fc8ae0,&UNK_10dc358b8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112fc8ad8 = puVar2;
  return;
}



/* Entry: 1039e02cc; end: 1039e06db;  */

void FUN_1039e02cc(void)

{
  return;
}



/* Entry: 1039e06dc; end: 1039e07db;  */

void FUN_1039e06dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc8ae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc35830;
  func_0x000107c61520(&UNK_10dc35830,&UNK_1106ba710);
  puRam0000000112fc8ae8 = puVar1;
  return;
}



/* Entry: 1039e07dc; end: 1039e083b;  */

void FUN_1039e07dc(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1039e083c; end: 1039e08af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039e083c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fc8c48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fc8c50) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fc8c58) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039e08b0; end: 1039e090f; -[LensLeaderboardServices init] */

void FUN_1039e08b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensLeaderboardServicesAPI.LensLeaderboardServices",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039e08dc);
  (*pcVar1)();
}



/* Entry: 1039e0910; end: 1039e0957; -[LensLeaderboardServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039e092c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039e0930) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039e0910(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc8c48));
  return;
}



/* Entry: 1039e0958; end: 1039e09d7;  */

void FUN_1039e0958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  piVar3 = *(int **)(*(long *)*unaff_x20 + 0x78);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1039e09d8;
                    /* WARNING: Could not recover jumptable at 0x0001039e09d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_1,param_2,param_3);
  return;
}



/* Entry: 1039e09d8; end: 1039e0a37;  */

void FUN_1039e09d8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001039e0a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1039e0a38; end: 1039e0aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039e0a38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fc8c90) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fc8c98) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fc8ca0) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039e0aac; end: 1039e0b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039e0aac(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039e0b24; end: 1039e0b83; -[_TtC19GamesRPCServicesAPI16GamesRPCServices init] */

void FUN_1039e0b24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesRPCServicesAPI.GamesRPCServices",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039e0b50);
  (*pcVar1)();
}



/* Entry: 1039e0b84; end: 1039e0b93;  */

undefined1  [16] FUN_1039e0b84(void)

{
  return ZEXT816(0x1106ba880);
}



/* Entry: 1039e0b94; end: 1039e0bdb; -[_TtC19GamesRPCServicesAPI16GamesRPCServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039e0bb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039e0bb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039e0b94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc8c90));
  return;
}



/* Entry: 1039e0bdc; end: 1039e0c5b;  */

void FUN_1039e0bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  piVar3 = *(int **)(*(long *)*unaff_x20 + 0x78);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1039e0c5c;
                    /* WARNING: Could not recover jumptable at 0x0001039e0c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar2,unaff_x22 + 0x10,param_2,param_3);
  return;
}



/* Entry: 1039e0c5c; end: 1039e0cbf;  */

void FUN_1039e0c5c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x58);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    puVar1[1] = *(undefined8 *)(lVar2 + 0x18);
    *puVar1 = uVar4;
    uVar5 = *(undefined8 *)(lVar2 + 0x28);
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    uVar7 = *(undefined8 *)(lVar2 + 0x38);
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
    uVar9 = *(undefined8 *)(lVar2 + 0x48);
    uVar8 = *(undefined8 *)(lVar2 + 0x40);
    puVar1[8] = *(undefined8 *)(lVar2 + 0x50);
    puVar1[5] = uVar7;
    puVar1[4] = uVar6;
    puVar1[7] = uVar9;
    puVar1[6] = uVar8;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001039e0cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 1039e0cc0; end: 1039e0cff;  */

void FUN_1039e0cc0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112fc8d28;
  func_0x0001000285a8(0x112fc8d28,&UNK_10dc35ae0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1039e0d00; end: 1039e0d0b;  */

void FUN_1039e0d00(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_1039eb1f8();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1039e0d0c; end: 1039e0d4b;  */

void FUN_1039e0d0c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112fc8d98;
  func_0x0001000285a8(0x112fc8d98,&UNK_10dc35ae8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1039e0d4c; end: 1039e0d8b;  */

void FUN_1039e0d4c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1039eb1f8();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1039e0d8c; end: 1039e0dcb;  */

void FUN_1039e0d8c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112fc8de8;
  func_0x0001000285a8(0x112fc8de8,&UNK_10dc35af0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1039e0dcc; end: 1039e0e07;  */

void FUN_1039e0dcc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 2;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 1039e0e08; end: 1039e0ee7;  */

void FUN_1039e0e08(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68,0);
  uVar1 = (ulong)(uVar3 != 0);
  if ((char)uVar2 != '\x01') {
    uVar1 = uVar3;
  }
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1039e0ee8; end: 1039e0f2f;  */

bool FUN_1039e0ee8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar1 = *param_1;
  }
  uVar2 = (ulong)(*param_2 != 0);
  if ((char)param_2[1] != '\x01') {
    uVar2 = *param_2;
  }
  return uVar1 == uVar2;
}



/* Entry: 1039e0f30; end: 1039e0f5f;  */

void FUN_1039e0f30(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1039e0f60; end: 1039e0f7f;  */

long FUN_1039e0f60(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  if ((char)unaff_x20[1] == '\x01') {
    lVar1 = *(long *)(&UNK_10dc38690 + lVar1 * 8);
  }
  return lVar1;
}



/* Entry: 1039e0f80; end: 1039e0fbf;  */

void FUN_1039e0f80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112fc8e68;
  func_0x0001000285a8(0x112fc8e68,&UNK_10dc35af8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1039e0fc0; end: 1039e0fcb;  */

void FUN_1039e0fc0(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x1039eb204)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1039e0fcc; end: 1039e0fff;  */

void FUN_1039e0fcc(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1039e1000; end: 1039e1023;  */

void FUN_1039e1000(long *param_1)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  if ((char)unaff_x20[1] == '\x01') {
    lVar1 = *(long *)(&UNK_10dc38690 + lVar1 * 8);
  }
  *param_1 = lVar1;
  return;
}


