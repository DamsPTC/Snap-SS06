/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102807c98; end: 102807cdf;  */

uint FUN_102807c98(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  func_0x000102807db8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 102807ce0; end: 102807d03;  */

void FUN_102807ce0(void)

{
  return;
}



/* Entry: 102807d04; end: 102807e9f;  */

undefined8 FUN_102807d04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102807ea0; end: 102807f1f;  */

void FUN_102807ea0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2d90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dae1cc8;
  func_0x000107c61520(&DAT_10dae1cc8,&UNK_110551f60);
  puRam0000000112ec2d90 = puVar1;
  return;
}



/* Entry: 102807f20; end: 1028082bb;  */

uint FUN_102807f20(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_280 [64];
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar4 = *param_1;
  lVar5 = *param_2;
  if ((char)param_2[1] != '\x01') {
    if (lVar4 == lVar5) goto LAB_102807f70;
    goto LAB_10280813c;
  }
  if (lVar5 < 2) {
    if (lVar5 == 0) {
      if (lVar4 == 0) {
LAB_102807f70:
        uVar2 = param_1[2];
        if ((uVar2 == param_2[2] && param_1[3] == param_2[3]) ||
           (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
          uVar2 = param_1[4];
          if (((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
            lVar4 = param_1[6];
            lVar5 = param_2[6];
            if ((char)param_2[7] == '\x01') {
              if (lVar5 < 4) {
                if (lVar5 < 2) {
                  if (lVar5 == 0) {
                    if (lVar4 == 0) {
LAB_102808000:
                      if (param_1[8] == param_2[8]) {
                        lStack_b8 = param_1[0xc];
                        lStack_c0 = param_1[0xb];
                        lStack_a8 = param_1[0xe];
                        lStack_b0 = param_1[0xd];
                        lStack_98 = param_1[0x10];
                        lStack_a0 = param_1[0xf];
                        lStack_88 = param_1[0x12];
                        lStack_90 = param_1[0x11];
                        lStack_f8 = param_2[0xc];
                        lStack_100 = param_2[0xb];
                        lStack_e8 = param_2[0xe];
                        lStack_f0 = param_2[0xd];
                        lStack_d8 = param_2[0x10];
                        lStack_e0 = param_2[0xf];
                        lStack_c8 = param_2[0x12];
                        lStack_d0 = param_2[0x11];
                        lStack_168 = param_1[0xe];
                        lStack_170 = param_1[0xd];
                        lStack_178 = param_1[0xc];
                        lStack_180 = param_1[0xb];
                        lStack_158 = param_1[0x10];
                        lStack_160 = param_1[0xf];
                        lStack_148 = param_1[0x12];
                        lStack_150 = param_1[0x11];
                        lStack_1a8 = param_2[0xe];
                        lStack_1b0 = param_2[0xd];
                        lStack_1b8 = param_2[0xc];
                        lStack_1c0 = param_2[0xb];
                        lStack_198 = param_2[0x10];
                        lStack_1a0 = param_2[0xf];
                        lStack_188 = param_2[0x12];
                        lStack_190 = param_2[0x11];
                        lStack_140 = lStack_1c0;
                        lStack_138 = lStack_1b8;
                        lStack_130 = lStack_1b0;
                        lStack_128 = lStack_1a8;
                        lStack_120 = lStack_1a0;
                        lStack_118 = lStack_198;
                        lStack_110 = lStack_190;
                        lStack_108 = lStack_188;
                        if (lStack_168 == 0) {
                          if (lStack_1a8 == 0) {
                            lStack_1f8 = param_1[0xc];
                            lStack_200 = param_1[0xb];
                            lStack_1e8 = param_1[0xe];
                            lStack_1f0 = param_1[0xd];
                            lStack_1d8 = param_1[0x10];
                            lStack_1e0 = param_1[0xf];
                            lStack_1c8 = param_1[0x12];
                            lStack_1d0 = param_1[0x11];
                            FUN_102807d04(&lStack_c0,&lStack_80,0x112ec2d58,&UNK_10dae19b8);
                            FUN_102807d04(&lStack_100,&lStack_80,0x112ec2d58,&UNK_10dae19b8);
                            func_0x000102807d78(&lStack_200,0x112ec2d58,&UNK_10dae19b8);
LAB_1028082ac:
                            lVar4 = param_1[9];
                            func_0x000100e25fcc(lVar4,param_1[10],param_2[9],param_2[10]);
                            uVar1 = (uint)lVar4;
                            goto LAB_102808140;
                          }
                        }
                        else if (lStack_1a8 != 0) {
                          lStack_238 = param_2[0xc];
                          lStack_240 = param_2[0xb];
                          lStack_228 = param_2[0xe];
                          lStack_230 = param_2[0xd];
                          lStack_218 = param_2[0x10];
                          lStack_220 = param_2[0xf];
                          lStack_208 = param_2[0x12];
                          lStack_210 = param_2[0x11];
                          lStack_78 = param_1[0xc];
                          lStack_80 = param_1[0xb];
                          lStack_68 = param_1[0xe];
                          lStack_70 = param_1[0xd];
                          lStack_58 = param_1[0x10];
                          lStack_60 = param_1[0xf];
                          lStack_48 = param_1[0x12];
                          lStack_50 = param_1[0x11];
                          lStack_200 = lStack_240;
                          lStack_1f8 = lStack_238;
                          lStack_1f0 = lStack_230;
                          lStack_1e8 = lStack_228;
                          lStack_1e0 = lStack_220;
                          lStack_1d8 = lStack_218;
                          lStack_1d0 = lStack_210;
                          lStack_1c8 = lStack_208;
                          FUN_102807d04(&lStack_c0,auStack_280,0x112ec2d58,&UNK_10dae19b8);
                          FUN_102807d04(&lStack_100,auStack_280,0x112ec2d58,&UNK_10dae19b8);
                          plVar3 = &lStack_80;
                          func_0x000102807db8(plVar3,&lStack_200);
                          func_0x000102807d78(&lStack_240,0x112ec2d58,&UNK_10dae19b8);
                          func_0x000102807d78(&lStack_180,0x112ec2d58,&UNK_10dae19b8);
                          if (((ulong)plVar3 & 1) != 0) goto LAB_1028082ac;
                          goto LAB_10280813c;
                        }
                        lStack_200 = lStack_180;
                        lStack_1f8 = lStack_178;
                        lStack_1f0 = lStack_170;
                        lStack_1e8 = lStack_168;
                        lStack_1e0 = lStack_160;
                        lStack_1d8 = lStack_158;
                        lStack_1d0 = lStack_150;
                        lStack_1c8 = lStack_148;
                        FUN_102807d04(&lStack_c0,&lStack_80,0x112ec2d58,&UNK_10dae19b8);
                        FUN_102807d04(&lStack_100,&lStack_80,0x112ec2d58,&UNK_10dae19b8);
                        func_0x000102807d78(&lStack_200,0x112ec2d60,&UNK_10dae19c0);
                        uVar1 = 0;
                        goto LAB_102808140;
                      }
                    }
                  }
                  else if (lVar4 == 1) goto LAB_102808000;
                }
                else if (lVar5 == 2) {
                  if (lVar4 == 2) goto LAB_102808000;
                }
                else if (lVar4 == 3) goto LAB_102808000;
              }
              else if (lVar5 < 6) {
                if (lVar5 == 4) {
                  if (lVar4 == 4) goto LAB_102808000;
                }
                else if (lVar4 == 5) goto LAB_102808000;
              }
              else if (lVar5 == 6) {
                if (lVar4 == 6) goto LAB_102808000;
              }
              else if (lVar4 == 7) goto LAB_102808000;
            }
            else if (lVar4 == lVar5) goto LAB_102808000;
          }
        }
      }
    }
    else if (lVar4 == 1) goto LAB_102807f70;
  }
  else if (lVar5 == 2) {
    if (lVar4 == 2) goto LAB_102807f70;
  }
  else if (lVar4 == 3) goto LAB_102807f70;
LAB_10280813c:
  uVar1 = 0;
LAB_102808140:
  return uVar1 & 1;
}



/* Entry: 1028082bc; end: 102808697;  */

uint FUN_1028082bc(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_138 [40];
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar4 = *param_1;
  lVar5 = *param_2;
  if ((char)param_2[1] != '\x01') {
    if (lVar4 == lVar5) goto LAB_10280832c;
    goto LAB_1028085b0;
  }
  if (lVar5 < 4) {
    if (lVar5 < 2) {
      if (lVar5 == 0) {
        if (lVar4 == 0) goto LAB_10280832c;
      }
      else if (lVar4 == 1) goto LAB_10280832c;
    }
    else if (lVar5 == 2) {
      if (lVar4 == 2) goto LAB_10280832c;
    }
    else if (lVar4 == 3) goto LAB_10280832c;
  }
  else if (lVar5 < 6) {
    if (lVar5 == 4) {
      if (lVar4 == 4) {
LAB_10280832c:
        lVar5 = param_1[2];
        lVar6 = param_2[2];
        lVar4 = *(long *)(lVar5 + 0x10);
        if (lVar4 == *(long *)(lVar6 + 0x10)) {
          if (lVar4 != 0 && lVar5 != lVar6) {
            plVar3 = (long *)(lVar6 + 0x28);
            plVar7 = (long *)(lVar5 + 0x28);
            do {
              uVar2 = plVar7[-1];
              if ((uVar2 != plVar3[-1] || *plVar7 != *plVar3) &&
                 (func_0x000107c605b8(), (uVar2 & 1) == 0)) goto LAB_1028085b0;
              plVar3 = plVar3 + 2;
              plVar7 = plVar7 + 2;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
          }
          uVar2 = param_1[3];
          if ((uVar2 == param_2[3] && param_1[4] == param_2[4]) ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
            uVar2 = param_1[5];
            func_0x00010142cfc4(uVar2,param_2[5]);
            if ((uVar2 & 1) != 0) {
              uVar2 = param_1[6];
              FUN_1027fe214(uVar2,param_2[6]);
              if ((uVar2 & 1) != 0) {
                uVar2 = param_1[7];
                func_0x00010142cfc4(uVar2,param_2[7]);
                if ((uVar2 & 1) != 0) {
                  lVar9 = param_1[0xe];
                  lVar6 = param_1[0xd];
                  lVar13 = param_1[0x10];
                  lVar11 = param_1[0xf];
                  lVar4 = param_1[0x11];
                  lVar10 = param_2[0xe];
                  lVar8 = param_2[0xd];
                  lVar14 = param_2[0x10];
                  lVar12 = param_2[0xf];
                  lVar5 = param_2[0x11];
                  lStack_110 = lVar8;
                  lStack_108 = lVar10;
                  lStack_100 = lVar12;
                  lStack_f8 = lVar14;
                  lStack_f0 = lVar5;
                  lStack_e0 = lVar6;
                  lStack_d8 = lVar9;
                  lStack_d0 = lVar11;
                  lStack_c8 = lVar13;
                  lStack_c0 = lVar4;
                  if (lVar11 == 0) {
                    if (lVar12 != 0) goto LAB_102808540;
                    FUN_102807d04(&lStack_e0,&lStack_90,0x112db8098,&UNK_10d966ff0);
                    FUN_102807d04(&lStack_110,&lStack_90,0x112db8098,&UNK_10d966ff0);
                    func_0x000101553bdc(lVar6,lVar9,0,lVar13,lVar4);
LAB_102808630:
                    uVar2 = (ulong)(param_1[8] != 0);
                    if ((char)param_1[9] != '\x01') {
                      uVar2 = param_1[8];
                    }
                    if ((char)param_2[9] == '\x01') {
                      if (param_2[8] == 0) {
                        if (uVar2 == 0) goto LAB_102808678;
                      }
                      else if (uVar2 == 1) {
LAB_102808678:
                        uVar2 = param_1[10];
                        func_0x00010142cfc4(uVar2,param_2[10]);
                        if ((uVar2 & 1) != 0) {
                          lVar4 = param_1[0xb];
                          func_0x000100e25fcc(lVar4,param_1[0xc],param_2[0xb],param_2[0xc]);
                          uVar1 = (uint)lVar4;
                          goto LAB_1028085b4;
                        }
                      }
                    }
                    else if (uVar2 == param_2[8]) goto LAB_102808678;
                  }
                  else if (lVar12 == 0) {
LAB_102808540:
                    FUN_102807d04(&lStack_e0,&lStack_90,0x112db8098,&UNK_10d966ff0);
                    FUN_102807d04(&lStack_110,&lStack_90,0x112db8098,&UNK_10d966ff0);
                    func_0x000101553bdc(lVar6,lVar9,lVar11,lVar13,lVar4);
                    func_0x000101553bdc(lVar8,lVar10,lVar12,lVar14,lVar5);
                  }
                  else {
                    uStack_88 = (undefined1)lVar10;
                    uStack_b0 = (undefined1)lVar9;
                    lStack_b8 = lVar6;
                    lStack_a8 = lVar11;
                    lStack_a0 = lVar13;
                    lStack_98 = lVar4;
                    lStack_90 = lVar8;
                    lStack_80 = lVar12;
                    lStack_78 = lVar14;
                    lStack_70 = lVar5;
                    FUN_102807d04(&lStack_e0,auStack_138,0x112db8098,&UNK_10d966ff0);
                    FUN_102807d04(&lStack_110,auStack_138,0x112db8098,&UNK_10d966ff0);
                    plVar3 = &lStack_b8;
                    func_0x00010368c758(plVar3,&lStack_90);
                    func_0x000101553bdc(lVar8,lVar10,lVar12,lVar14,lVar5);
                    func_0x000101553bdc(lVar6,lVar9,lVar11,lVar13,lVar4);
                    if (((ulong)plVar3 & 1) != 0) goto LAB_102808630;
                  }
                }
              }
            }
          }
        }
      }
    }
    else if (lVar4 == 5) goto LAB_10280832c;
  }
  else if (lVar5 == 6) {
    if (lVar4 == 6) goto LAB_10280832c;
  }
  else if (lVar5 == 7) {
    if (lVar4 == 7) goto LAB_10280832c;
  }
  else if (lVar4 == 8) goto LAB_10280832c;
LAB_1028085b0:
  uVar1 = 0;
LAB_1028085b4:
  return uVar1 & 1;
}



/* Entry: 102808698; end: 102808817;  */

void FUN_102808698(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2da0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1e78;
  func_0x000107c61520(&UNK_10dae1e78,&UNK_110551fd8);
  puRam0000000112ec2da0 = puVar1;
  return;
}



/* Entry: 102808818; end: 10280882b;  */

void FUN_102808818(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10280882c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10280886c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10280882c; end: 1028088d7;  */

void FUN_10280882c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2de0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1a60;
  func_0x000107c61520(&UNK_10dae1a60,&UNK_110551db0);
  puRam0000000112ec2de0 = puVar1;
  return;
}



/* Entry: 1028088d8; end: 1028088db;  */

void FUN_1028088d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2e00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1aa0;
  func_0x000107c61520(&UNK_10dae1aa0,&UNK_110551db0);
  puRam0000000112ec2e00 = puVar1;
  return;
}



/* Entry: 1028088dc; end: 10280891b;  */

void FUN_1028088dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2e00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1aa0;
  func_0x000107c61520(&UNK_10dae1aa0,&UNK_110551db0);
  puRam0000000112ec2e00 = puVar1;
  return;
}



/* Entry: 10280891c; end: 10280892f;  */

void FUN_10280891c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102808930();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102808970)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102808930; end: 1028089db;  */

void FUN_102808930(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2e08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1b60;
  func_0x000107c61520(&UNK_10dae1b60,&UNK_110551e40);
  puRam0000000112ec2e08 = puVar1;
  return;
}



/* Entry: 1028089dc; end: 1028089df;  */

void FUN_1028089dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1ba0;
  func_0x000107c61520(&UNK_10dae1ba0,&UNK_110551e40);
  puRam0000000112ec2e28 = puVar1;
  return;
}



/* Entry: 1028089e0; end: 102808a1f;  */

void FUN_1028089e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1ba0;
  func_0x000107c61520(&UNK_10dae1ba0,&UNK_110551e40);
  puRam0000000112ec2e28 = puVar1;
  return;
}



/* Entry: 102808a20; end: 102808a33;  */

void FUN_102808a20(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102808a34();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102808a74)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102808a34; end: 102808adf;  */

void FUN_102808a34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2e30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1c60;
  func_0x000107c61520(&UNK_10dae1c60,&UNK_110551ed0);
  puRam0000000112ec2e30 = puVar1;
  return;
}



/* Entry: 102808ae0; end: 102808ae3;  */

void FUN_102808ae0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2e50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1ca0;
  func_0x000107c61520(&UNK_10dae1ca0,&UNK_110551ed0);
  puRam0000000112ec2e50 = puVar1;
  return;
}



/* Entry: 102808ae4; end: 102808b23;  */

void FUN_102808ae4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2e50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1ca0;
  func_0x000107c61520(&UNK_10dae1ca0,&UNK_110551ed0);
  puRam0000000112ec2e50 = puVar1;
  return;
}



/* Entry: 102808b24; end: 102808b37;  */

void FUN_102808b24(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102808b38();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102808b78)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102808b38; end: 102808be3;  */

void FUN_102808b38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2e58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1d60;
  func_0x000107c61520(&UNK_10dae1d60,&UNK_110551f60);
  puRam0000000112ec2e58 = puVar1;
  return;
}



/* Entry: 102808be4; end: 102808c27;  */

void FUN_102808be4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 102808c28; end: 102808c2b;  */

void FUN_102808c28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2e78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1da0;
  func_0x000107c61520(&UNK_10dae1da0,&UNK_110551f60);
  puRam0000000112ec2e78 = puVar1;
  return;
}



/* Entry: 102808c2c; end: 102808c6b;  */

void FUN_102808c2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2e78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1da0;
  func_0x000107c61520(&UNK_10dae1da0,&UNK_110551f60);
  puRam0000000112ec2e78 = puVar1;
  return;
}



/* Entry: 102808c6c; end: 102808c8f;  */

void FUN_102808c6c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102808c90();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102808c90; end: 102808ccf;  */

void FUN_102808c90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2e80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1e50;
  func_0x000107c61520(&UNK_10dae1e50,&UNK_110551fd8);
  puRam0000000112ec2e80 = puVar1;
  return;
}



/* Entry: 102808cd0; end: 102808ce3;  */

void FUN_102808cd0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102808698();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102808ce4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102808ce4; end: 102808d23;  */

void FUN_102808ce4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2e88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dae1e08;
  func_0x000107c61520(&DAT_10dae1e08,&UNK_110551fd8);
  puRam0000000112ec2e88 = puVar1;
  return;
}



/* Entry: 102808d24; end: 102808d27;  */

void FUN_102808d24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2e90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1eb8;
  func_0x000107c61520(&UNK_10dae1eb8,&UNK_110551fd8);
  puRam0000000112ec2e90 = puVar1;
  return;
}



/* Entry: 102808d28; end: 102808d67;  */

void FUN_102808d28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2e90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1eb8;
  func_0x000107c61520(&UNK_10dae1eb8,&UNK_110551fd8);
  puRam0000000112ec2e90 = puVar1;
  return;
}



/* Entry: 102808d68; end: 102808d8b;  */

void FUN_102808d68(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102808d8c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102808d8c; end: 102808dcb;  */

void FUN_102808d8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2e98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1f28;
  func_0x000107c61520(&UNK_10dae1f28,&UNK_110552078);
  puRam0000000112ec2e98 = puVar1;
  return;
}



/* Entry: 102808dcc; end: 102808de3;  */

void FUN_102808dcc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x102808758)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1027ff0d8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102808de4; end: 102808e23;  */

void FUN_102808de4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2ea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1f90;
  func_0x000107c61520(&UNK_10dae1f90,&UNK_110552078);
  puRam0000000112ec2ea0 = puVar1;
  return;
}



/* Entry: 102808e24; end: 102808e47;  */

void FUN_102808e24(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102808e48();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102808e48; end: 102808e87;  */

void FUN_102808e48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2ea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2000;
  func_0x000107c61520(&UNK_10dae2000,&UNK_110552110);
  puRam0000000112ec2ea8 = puVar1;
  return;
}



/* Entry: 102808e88; end: 102808e9b;  */

void FUN_102808e88(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1028087d8)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102808ecc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102808e9c; end: 102808ecb;  */

void FUN_102808e9c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102808ecc; end: 102808f0b;  */

void FUN_102808ecc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2eb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dae1fb8;
  func_0x000107c61520(&DAT_10dae1fb8,&UNK_110552110);
  puRam0000000112ec2eb0 = puVar1;
  return;
}



/* Entry: 102808f0c; end: 102808f0f;  */

void FUN_102808f0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2eb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2068;
  func_0x000107c61520(&UNK_10dae2068,&UNK_110552110);
  puRam0000000112ec2eb8 = puVar1;
  return;
}



/* Entry: 102808f10; end: 102808f4f;  */

void FUN_102808f10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2eb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2068;
  func_0x000107c61520(&UNK_10dae2068,&UNK_110552110);
  puRam0000000112ec2eb8 = puVar1;
  return;
}



/* Entry: 102808f50; end: 102808f9f;  */

void FUN_102808f50(void)

{
  return;
}



/* Entry: 102808fa0; end: 10280900f;  */

/* WARNING: Possible PIC construction at 0x000102808fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102808fe8) */
/* WARNING: Removing unreachable block (ram,0x000102809004) */
/* WARNING: Removing unreachable block (ram,0x000102808ff0) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102808fa0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x50));
  uVar1 = *(ulong *)(param_1 + 0x58);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x60) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x60) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 102809010; end: 102809123;  */

undefined8 * FUN_102809010(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar8 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar8;
  uVar8 = param_2[4];
  uVar2 = param_2[5];
  param_1[4] = uVar8;
  param_1[5] = uVar2;
  uVar1 = param_2[6];
  uVar3 = param_2[7];
  param_1[6] = uVar1;
  param_1[7] = uVar3;
  uVar6 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar6;
  uVar6 = param_2[10];
  uVar4 = param_2[0xb];
  param_1[10] = uVar6;
  uVar7 = param_2[0xc];
  func_0x000107c61434();
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar6);
  func_0x00010006c00c(uVar4,uVar7);
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar7;
  lVar5 = param_2[0xf];
  if (lVar5 == 0) {
    uVar8 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar8;
    uVar8 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar8;
    param_1[0x11] = param_2[0x11];
  }
  else {
    param_1[0xd] = param_2[0xd];
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
    param_1[0xf] = lVar5;
    uVar8 = param_2[0x10];
    uVar1 = param_2[0x11];
    func_0x000107c61434();
    func_0x00010006c00c(uVar8,uVar1);
    param_1[0x10] = uVar8;
    param_1[0x11] = uVar1;
  }
  return param_1;
}



/* Entry: 102809124; end: 1028092eb;  */

undefined8 * FUN_102809124(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar1;
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[0xb];
  uVar4 = param_2[0xc];
  func_0x00010006c00c(uVar1,uVar4);
  uVar3 = param_1[0xb];
  uVar5 = param_1[0xc];
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar4;
  func_0x00010006c090(uVar3,uVar5);
  lVar2 = param_1[0xf];
  if (lVar2 == 0) {
    if (param_2[0xf] == 0) {
      uVar3 = param_2[0xe];
      uVar1 = param_2[0xd];
      uVar5 = param_2[0x10];
      uVar4 = param_2[0xf];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar5;
      param_1[0xf] = uVar4;
      param_1[0xe] = uVar3;
      param_1[0xd] = uVar1;
    }
    else {
      uVar1 = param_2[0xd];
      *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
      param_1[0xd] = uVar1;
      param_1[0xf] = param_2[0xf];
      uVar1 = param_2[0x10];
      uVar3 = param_2[0x11];
      func_0x000107c61434();
      func_0x00010006c00c(uVar1,uVar3);
      param_1[0x10] = uVar1;
      param_1[0x11] = uVar3;
    }
  }
  else if (param_2[0xf] == 0) {
    func_0x000101553ad0(param_1 + 0xd);
    uVar1 = param_2[0x11];
    uVar4 = param_2[0x10];
    uVar3 = param_2[0xf];
    uVar5 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar5;
    param_1[0x10] = uVar4;
    param_1[0xf] = uVar3;
    param_1[0x11] = uVar1;
  }
  else {
    uVar1 = param_2[0xd];
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
    param_1[0xd] = uVar1;
    param_1[0xf] = param_2[0xf];
    func_0x000107c61434();
    func_0x000107c6142c(lVar2);
    uVar1 = param_2[0x10];
    uVar4 = param_2[0x11];
    func_0x00010006c00c(uVar1,uVar4);
    uVar3 = param_1[0x10];
    uVar5 = param_1[0x11];
    param_1[0x10] = uVar1;
    param_1[0x11] = uVar4;
    func_0x00010006c090(uVar3,uVar5);
  }
  return param_1;
}



/* Entry: 1028092ec; end: 1028093fb;  */

undefined8 * FUN_1028092ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[0xb];
  uVar2 = param_1[0xc];
  uVar4 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (param_1[0xf] != 0) {
    lVar3 = param_2[0xf];
    if (lVar3 != 0) {
      param_1[0xd] = param_2[0xd];
      *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
      param_1[0xf] = lVar3;
      func_0x000107c6142c();
      uVar1 = param_1[0x10];
      uVar2 = param_1[0x11];
      uVar4 = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      return param_1;
    }
    func_0x000101553ad0(param_1 + 0xd);
  }
  uVar1 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar1;
  param_1[0x11] = param_2[0x11];
  return param_1;
}



/* Entry: 1028093fc; end: 1028094b7;  */

int FUN_1028093fc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x24] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1028094b8; end: 10280950f;  */

/* WARNING: Possible PIC construction at 0x0001028094dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028094e0) */
/* WARNING: Removing unreachable block (ram,0x000102809504) */
/* WARNING: Removing unreachable block (ram,0x0001028094e8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1028094b8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(ulong *)(param_1 + 0x48);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x50) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x50) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 102809510; end: 102809607;  */

undefined8 * FUN_102809510(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  uVar3 = param_2[10];
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[9] = uVar1;
  param_1[10] = uVar3;
  lVar2 = param_2[0xe];
  if (lVar2 == 0) {
    uVar4 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar4;
    uVar4 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar4;
    uVar4 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar4;
    uVar4 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar4;
  }
  else {
    param_1[0xb] = param_2[0xb];
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = lVar2;
    uVar1 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = uVar1;
    uVar4 = param_2[0x11];
    uVar3 = param_2[0x12];
    func_0x000107c61434();
    func_0x000107c61434(uVar1);
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0x11] = uVar4;
    param_1[0x12] = uVar3;
  }
  return param_1;
}



/* Entry: 102809608; end: 1028097d7;  */

undefined8 * FUN_102809608(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
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
  uVar1 = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = uVar1;
  param_1[8] = param_2[8];
  uVar1 = param_2[9];
  uVar3 = param_2[10];
  func_0x00010006c00c(uVar1,uVar3);
  uVar4 = param_1[9];
  uVar5 = param_1[10];
  param_1[9] = uVar1;
  param_1[10] = uVar3;
  func_0x00010006c090(uVar4,uVar5);
  lVar2 = param_1[0xe];
  if (lVar2 == 0) {
    if (param_2[0xe] == 0) {
      uVar4 = param_2[0xc];
      uVar1 = param_2[0xb];
      uVar5 = param_2[0xe];
      uVar3 = param_2[0xd];
      uVar7 = param_2[0x10];
      uVar6 = param_2[0xf];
      uVar8 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar8;
      param_1[0x10] = uVar7;
      param_1[0xf] = uVar6;
      param_1[0xe] = uVar5;
      param_1[0xd] = uVar3;
      param_1[0xc] = uVar4;
      param_1[0xb] = uVar1;
    }
    else {
      uVar1 = param_2[0xb];
      *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
      param_1[0xb] = uVar1;
      param_1[0xd] = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = param_2[0xf];
      uVar3 = param_2[0x10];
      param_1[0x10] = uVar3;
      uVar1 = param_2[0x11];
      uVar4 = param_2[0x12];
      func_0x000107c61434();
      func_0x000107c61434(uVar3);
      func_0x00010006c00c(uVar1,uVar4);
      param_1[0x11] = uVar1;
      param_1[0x12] = uVar4;
    }
  }
  else if (param_2[0xe] == 0) {
    func_0x000102807d4c(param_1 + 0xb);
    uVar4 = param_2[0xe];
    uVar1 = param_2[0xd];
    uVar5 = param_2[0x10];
    uVar3 = param_2[0xf];
    uVar7 = param_2[0x12];
    uVar6 = param_2[0x11];
    uVar8 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar8;
    param_1[0x12] = uVar7;
    param_1[0x11] = uVar6;
    param_1[0x10] = uVar5;
    param_1[0xf] = uVar3;
    param_1[0xe] = uVar4;
    param_1[0xd] = uVar1;
  }
  else {
    uVar1 = param_2[0xb];
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    param_1[0xb] = uVar1;
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    func_0x000107c61434();
    func_0x000107c6142c(lVar2);
    param_1[0xf] = param_2[0xf];
    uVar1 = param_1[0x10];
    param_1[0x10] = param_2[0x10];
    func_0x000107c61434();
    func_0x000107c6142c(uVar1);
    uVar1 = param_2[0x11];
    uVar3 = param_2[0x12];
    func_0x00010006c00c(uVar1,uVar3);
    uVar4 = param_1[0x11];
    uVar5 = param_1[0x12];
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar3;
    func_0x00010006c090(uVar4,uVar5);
  }
  return param_1;
}



/* Entry: 1028097d8; end: 1028098cb;  */

undefined8 * FUN_1028097d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar5 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  func_0x000107c6142c(uVar1);
  uVar5 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar2 = param_2[10];
  uVar5 = param_1[9];
  uVar1 = param_1[10];
  uVar4 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar4;
  param_1[10] = uVar2;
  func_0x00010006c090(uVar5,uVar1);
  if (param_1[0xe] != 0) {
    lVar3 = param_2[0xe];
    if (lVar3 != 0) {
      param_1[0xb] = param_2[0xb];
      *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
      param_1[0xd] = param_2[0xd];
      param_1[0xe] = lVar3;
      func_0x000107c6142c();
      uVar5 = param_2[0x10];
      uVar1 = param_1[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0x10] = uVar5;
      func_0x000107c6142c(uVar1);
      uVar5 = param_1[0x11];
      uVar1 = param_1[0x12];
      uVar2 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar2;
      func_0x00010006c090(uVar5,uVar1);
      return param_1;
    }
    func_0x000102807d4c(param_1 + 0xb);
  }
  uVar5 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar5;
  uVar5 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar5;
  uVar5 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar5;
  uVar5 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar5;
  return param_1;
}



/* Entry: 1028098cc; end: 102809987;  */

int FUN_1028098cc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x26] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102809988; end: 1028099b7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102809988(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(ulong *)(param_1 + 0x30);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x38) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x38) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1028099b8; end: 102809ab7;  */

undefined8 * FUN_1028099b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar1 = param_2[6];
  uVar3 = param_2[7];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[6] = uVar1;
  param_1[7] = uVar3;
  return param_1;
}



/* Entry: 102809ab8; end: 102809b1b;  */

undefined8 * FUN_102809ab8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
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
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 102809b1c; end: 102809bc3;  */

int FUN_102809b1c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102809bc4; end: 102809c83;  */

void FUN_102809bc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2ec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dae1fd4;
  func_0x000107c61520(&DAT_10dae1fd4,&UNK_110552110);
  puRam0000000112ec2ec8 = puVar1;
  return;
}



/* Entry: 102809c84; end: 102809d33;  */

void FUN_102809c84(ulong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 102809d34; end: 102809d73;  */

void FUN_102809d34(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ec2fb8;
  func_0x0001000285a8(0x112ec2fb8,&UNK_10dae2460);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102809d74; end: 102809d8b;  */

void FUN_102809d74(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10280cbdc();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 102809d8c; end: 102809dfb;  */

void FUN_102809d8c(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 102809dfc; end: 102809e07;  */

void FUN_102809dfc(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x10280cbe8)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 102809e08; end: 102809ebf;  */

void FUN_102809e08(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
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



/* Entry: 102809ec0; end: 102809f6f;  */

uint FUN_102809ec0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined1 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
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
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_80 = *(undefined1 *)(param_1 + 10);
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_20 = *(undefined1 *)(param_2 + 10);
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_10280d874(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 102809f70; end: 10280a00f;  */

/* WARNING: Possible PIC construction at 0x000102809fbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102809fcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102809fc0) */
/* WARNING: Removing unreachable block (ram,0x000102809fd0) */

void FUN_102809f70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ec3058 != -1) {
    func_0x000107c61568(0x112ec3058,0x102809f28);
  }
  uVar5 = uRam0000000113804a70;
  uVar4 = uRam0000000113804a68;
  uVar3 = uRam0000000113804a60;
  uVar2 = uRam0000000113804a58;
  uVar1 = uRam0000000113804a50;
  *param_1 = uRam0000000113804a48;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10280a010; end: 10280a057;  */

void FUN_10280a010(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dae2db0,0x3e,2);
  uRam0000000113804a80 = uStack_38;
  uRam0000000113804a78 = uStack_40;
  uRam0000000113804a90 = uStack_28;
  uRam0000000113804a88 = uStack_30;
  uRam0000000113804aa0 = uStack_18;
  uRam0000000113804a98 = uStack_20;
  return;
}



/* Entry: 10280a058; end: 10280a0f7;  */

/* WARNING: Possible PIC construction at 0x00010280a0a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010280a0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010280a0a8) */
/* WARNING: Removing unreachable block (ram,0x00010280a0b8) */

void FUN_10280a058(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ec3060 != -1) {
    func_0x000107c61568(0x112ec3060,FUN_10280a010);
  }
  uVar5 = uRam0000000113804aa0;
  uVar4 = uRam0000000113804a98;
  uVar3 = uRam0000000113804a90;
  uVar2 = uRam0000000113804a88;
  uVar1 = uRam0000000113804a80;
  *param_1 = uRam0000000113804a78;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10280a0f8; end: 10280a13f;  */

void FUN_10280a0f8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dae2d50,0x59,2);
  uRam0000000113804ab0 = uStack_38;
  uRam0000000113804aa8 = uStack_40;
  uRam0000000113804ac0 = uStack_28;
  uRam0000000113804ab8 = uStack_30;
  uRam0000000113804ad0 = uStack_18;
  uRam0000000113804ac8 = uStack_20;
  return;
}



/* Entry: 10280a140; end: 10280a2f3;  */

/* WARNING: Removing unreachable block (ram,0x00010280a2f0) */

void FUN_10280a140(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x00010280d998();
        }
        else if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x00010280d9d8();
        }
        else {
          if (lVar1 != 3) goto LAB_10280a2e0;
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000101568c04();
        }
LAB_10280a2cc:
        (*pcVar4)();
      }
      else {
        if (5 < lVar1) {
          if (lVar1 == 6) {
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x0001015d5420();
          }
          else {
            if (lVar1 != 7) goto LAB_10280a2e0;
            pcVar4 = *(code **)(param_3 + 0x198);
            FUN_10280e938();
          }
          goto LAB_10280a2cc;
        }
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015d5420();
          goto LAB_10280a2cc;
        }
        if (lVar1 == 5) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015d5420();
          goto LAB_10280a2cc;
        }
      }
LAB_10280a2e0:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10280a2f4; end: 10280a44f;  */

void FUN_10280a2f4(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  long lStack_50;
  undefined1 uStack_48;
  
  plVar2 = &lStack_50;
  puVar1 = param_1;
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar3 = *(code **)(param_3 + 0x80);
    lStack_50 = *unaff_x20;
    FUN_10280d998();
    (*pcVar3)(&lStack_50,1,&UNK_1105525e0,puVar1,param_2,param_3);
    puVar1 = (undefined1 *)plVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[2] != 0) {
    uStack_48 = (undefined1)unaff_x20[3];
    pcVar3 = *(code **)(param_3 + 0x80);
    lStack_50 = unaff_x20[2];
    func_0x00010280d9d8();
    (*pcVar3)(&lStack_50,2,&UNK_110552670,puVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_10280a450();
  if (unaff_x21 == 0) {
    FUN_10280a4d4();
    FUN_10280a55c();
    FUN_10280a5e4();
    FUN_10280a66c();
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 10280a450; end: 10280a4d3;  */

void FUN_10280a450(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x38);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,3,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10280a4d4; end: 10280a55b;  */

void FUN_10280a4d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x60);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,4,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10280a55c; end: 10280a5e3;  */

void FUN_10280a55c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x78);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x70);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,5,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10280a5e4; end: 10280a66b;  */

void FUN_10280a5e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x90);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x88);
    uStack_60 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,6,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10280a66c; end: 10280a713;  */

void FUN_10280a66c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
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
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_60 = *(ulong *)(param_1 + 0xe8);
  if ((uStack_60 & 0xff) != 0xfe) {
    uStack_98 = *(undefined8 *)(param_1 + 0xb0);
    uStack_a0 = *(undefined8 *)(param_1 + 0xa8);
    uStack_88 = *(undefined8 *)(param_1 + 0xc0);
    uStack_90 = *(undefined8 *)(param_1 + 0xb8);
    uStack_78 = *(undefined8 *)(param_1 + 0xd0);
    uStack_80 = *(undefined8 *)(param_1 + 200);
    uStack_68 = *(undefined8 *)(param_1 + 0xe0);
    uStack_70 = *(undefined8 *)(param_1 + 0xd8);
    uStack_a8 = *(undefined8 *)(param_1 + 0xa0);
    uStack_b0 = *(undefined8 *)(param_1 + 0x98);
    uStack_50 = *(undefined8 *)(param_1 + 0xf8);
    uStack_58 = *(undefined8 *)(param_1 + 0xf0);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10280e938();
    (*pcVar1)(&uStack_b0,7,&UNK_110552780,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10280a714; end: 10280a79b;  */

long * FUN_10280a714(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_538 [104];
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  ulong uStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  ulong uStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  long lStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  long lStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  long lStack_180;
  ulong uStack_178;
  ulong uStack_170;
  long lStack_160;
  ulong uStack_158;
  ulong uStack_150;
  long lStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_120;
  long lStack_118;
  ulong uStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  if ((char)param_2[1] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010280da40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dae2450)[*param_2] * 4 + 0x10280da44))();
    return param_1;
  }
  if (*param_1 != *param_2) {
    return (long *)0x0;
  }
  lVar4 = param_1[2];
  lVar5 = param_2[2];
  if ((char)param_2[3] == '\x01') {
    if (lVar5 < 2) {
      if (lVar5 == 0) {
        if (lVar4 != 0) {
          return (long *)0x0;
        }
      }
      else if (lVar4 != 1) {
        return (long *)0x0;
      }
    }
    else if (lVar5 == 2) {
      if (lVar4 != 2) {
        return (long *)0x0;
      }
    }
    else if (lVar5 == 3) {
      if (lVar4 != 3) {
        return (long *)0x0;
      }
    }
    else if (lVar4 != 4) {
      return (long *)0x0;
    }
  }
  else if (lVar4 != lVar5) {
    return (long *)0x0;
  }
  lVar4 = param_1[7];
  uVar6 = param_1[6];
  lVar5 = param_1[9];
  uVar10 = param_1[8];
  lVar9 = param_2[7];
  uVar8 = param_2[6];
  lVar12 = param_2[9];
  uVar11 = param_2[8];
  uStack_120 = uVar8;
  lStack_118 = lVar9;
  uStack_110 = uVar11;
  lStack_108 = lVar12;
  uStack_100 = uVar6;
  lStack_f8 = lVar4;
  uStack_f0 = uVar10;
  lStack_e8 = lVar5;
  if (lVar4 == 0) {
    if (lVar9 != 0) goto LAB_10280db94;
    FUN_10280d6e0(&uStack_100,&lStack_390,0x112db6f40,&UNK_10d9681d0);
    FUN_10280d6e0(&uStack_120,&lStack_390,0x112db6f40,&UNK_10d9681d0);
LAB_10280dcc4:
    FUN_102810c5c(uVar6,lVar4,uVar10,lVar5);
    uVar10 = param_1[0xb];
    lVar4 = param_1[10];
    uVar6 = param_1[0xc];
    uVar11 = param_2[0xb];
    lVar5 = param_2[10];
    uVar8 = param_2[0xc];
    lStack_160 = lVar5;
    uStack_158 = uVar11;
    uStack_150 = uVar8;
    lStack_140 = lVar4;
    uStack_138 = uVar10;
    uStack_130 = uVar6;
    if (uVar6 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_10280e004;
      if ((int)lVar4 == (int)lVar5) {
        FUN_10280d6e0(&lStack_140,&lStack_390,0x112db80f8,&UNK_10d9671e0);
        FUN_10280d6e0(&lStack_160,&lStack_390,0x112db80f8,&UNK_10d9671e0);
        uVar2 = uVar10;
        func_0x000100e25fcc(uVar10,uVar6,uVar11,uVar8);
        func_0x0001015dc5d0(lVar5,uVar11,uVar8);
        if ((uVar2 & 1) != 0) goto LAB_10280dd60;
      }
      else {
        FUN_10280d6e0(&lStack_140,&lStack_390,0x112db80f8,&UNK_10d9671e0);
        plVar3 = &lStack_160;
LAB_10280e334:
        FUN_10280d6e0(plVar3,&lStack_390,0x112db80f8,&UNK_10d9671e0);
        func_0x0001015dc5d0(lVar5,uVar11,uVar8);
      }
    }
    else {
      if (0xe < uVar8 >> 0x3c) {
        FUN_10280d6e0(&lStack_140,&lStack_390,0x112db80f8,&UNK_10d9671e0);
        FUN_10280d6e0(&lStack_160,&lStack_390,0x112db80f8,&UNK_10d9671e0);
LAB_10280dd60:
        func_0x0001015dc5d0(lVar4,uVar10,uVar6);
        uVar10 = param_1[0xe];
        lVar4 = param_1[0xd];
        uVar6 = param_1[0xf];
        uVar11 = param_2[0xe];
        lVar5 = param_2[0xd];
        uVar8 = param_2[0xf];
        lStack_1a0 = lVar5;
        uStack_198 = uVar11;
        uStack_190 = uVar8;
        lStack_180 = lVar4;
        uStack_178 = uVar10;
        uStack_170 = uVar6;
        if (uVar6 >> 0x3c < 0xf) {
          if (0xe < uVar8 >> 0x3c) goto LAB_10280e110;
          if ((int)lVar4 != (int)lVar5) {
            FUN_10280d6e0(&lStack_180,&lStack_390,0x112db80f8,&UNK_10d9671e0);
            plVar3 = &lStack_1a0;
            goto LAB_10280e334;
          }
          FUN_10280d6e0(&lStack_180,&lStack_390,0x112db80f8,&UNK_10d9671e0);
          FUN_10280d6e0(&lStack_1a0,&lStack_390,0x112db80f8,&UNK_10d9671e0);
          uVar2 = uVar10;
          func_0x000100e25fcc(uVar10,uVar6,uVar11,uVar8);
          func_0x0001015dc5d0(lVar5,uVar11,uVar8);
          if ((uVar2 & 1) == 0) goto LAB_10280e360;
        }
        else {
          if (uVar8 >> 0x3c < 0xf) {
LAB_10280e110:
            FUN_10280d6e0(&lStack_180,&lStack_390,0x112db80f8,&UNK_10d9671e0);
            plVar3 = &lStack_1a0;
            uVar2 = uVar6;
            uVar7 = uVar10;
            lVar9 = lVar4;
            uVar6 = uVar8;
            uVar10 = uVar11;
            lVar4 = lVar5;
            goto LAB_10280e1ec;
          }
          FUN_10280d6e0(&lStack_180,&lStack_390,0x112db80f8,&UNK_10d9671e0);
          FUN_10280d6e0(&lStack_1a0,&lStack_390,0x112db80f8,&UNK_10d9671e0);
        }
        func_0x0001015dc5d0(lVar4,uVar10,uVar6);
        uVar10 = param_1[0x11];
        lVar4 = param_1[0x10];
        uVar6 = param_1[0x12];
        uVar11 = param_2[0x11];
        lVar5 = param_2[0x10];
        uVar8 = param_2[0x12];
        lStack_1e0 = lVar5;
        uStack_1d8 = uVar11;
        uStack_1d0 = uVar8;
        lStack_1c0 = lVar4;
        uStack_1b8 = uVar10;
        uStack_1b0 = uVar6;
        if (uVar6 >> 0x3c < 0xf) {
          if (0xe < uVar8 >> 0x3c) goto LAB_10280e1c4;
          if ((int)lVar4 != (int)lVar5) {
            FUN_10280d6e0(&lStack_1c0,&lStack_390,0x112db80f8,&UNK_10d9671e0);
            plVar3 = &lStack_1e0;
            goto LAB_10280e334;
          }
          FUN_10280d6e0(&lStack_1c0,&lStack_390,0x112db80f8,&UNK_10d9671e0);
          FUN_10280d6e0(&lStack_1e0,&lStack_390,0x112db80f8,&UNK_10d9671e0);
          uVar2 = uVar10;
          func_0x000100e25fcc(uVar10,uVar6,uVar11,uVar8);
          func_0x0001015dc5d0(lVar5,uVar11,uVar8);
          if ((uVar2 & 1) == 0) goto LAB_10280e360;
        }
        else {
          if (uVar8 >> 0x3c < 0xf) {
LAB_10280e1c4:
            FUN_10280d6e0(&lStack_1c0,&lStack_390,0x112db80f8,&UNK_10d9671e0);
            plVar3 = &lStack_1e0;
            uVar2 = uVar6;
            uVar7 = uVar10;
            lVar9 = lVar4;
            uVar6 = uVar8;
            uVar10 = uVar11;
            lVar4 = lVar5;
            goto LAB_10280e1ec;
          }
          FUN_10280d6e0(&lStack_1c0,&lStack_390,0x112db80f8,&UNK_10d9671e0);
          FUN_10280d6e0(&lStack_1e0,&lStack_390,0x112db80f8,&UNK_10d9671e0);
        }
        func_0x0001015dc5d0(lVar4,uVar10,uVar6);
        lStack_218 = param_1[0x1a];
        lStack_220 = param_1[0x19];
        lStack_208 = param_1[0x1c];
        lStack_210 = param_1[0x1b];
        lStack_1f8 = param_1[0x1e];
        lStack_200 = param_1[0x1d];
        lStack_1f0 = param_1[0x1f];
        lStack_248 = param_1[0x14];
        lStack_250 = param_1[0x13];
        lStack_238 = param_1[0x16];
        lStack_240 = param_1[0x15];
        lStack_228 = param_1[0x18];
        lStack_230 = param_1[0x17];
        lStack_2b8 = param_2[0x14];
        lStack_2c0 = param_2[0x13];
        lStack_2a8 = param_2[0x16];
        lStack_2b0 = param_2[0x15];
        lStack_298 = param_2[0x18];
        lStack_2a0 = param_2[0x17];
        lStack_288 = param_2[0x1a];
        lStack_290 = param_2[0x19];
        lStack_278 = param_2[0x1c];
        lStack_280 = param_2[0x1b];
        lStack_268 = param_2[0x1e];
        lStack_270 = param_2[0x1d];
        lStack_260 = param_2[0x1f];
        lStack_358 = param_1[0x1a];
        lStack_360 = param_1[0x19];
        lStack_348 = param_1[0x1c];
        lStack_350 = param_1[0x1b];
        lStack_338 = param_1[0x1e];
        lStack_340 = param_1[0x1d];
        lStack_330 = param_1[0x1f];
        lStack_388 = param_1[0x14];
        lStack_390 = param_1[0x13];
        lStack_378 = param_1[0x16];
        lStack_380 = param_1[0x15];
        lStack_368 = param_1[0x18];
        lStack_370 = param_1[0x17];
        lStack_3f0 = param_2[0x14];
        lStack_3f8 = param_2[0x13];
        lStack_3e0 = param_2[0x16];
        lStack_3e8 = param_2[0x15];
        lStack_3d0 = param_2[0x18];
        lStack_3d8 = param_2[0x17];
        lStack_3c0 = param_2[0x1a];
        lStack_3c8 = param_2[0x19];
        lStack_3b0 = param_2[0x1c];
        lStack_3b8 = param_2[0x1b];
        lStack_3a0 = param_2[0x1e];
        uStack_3a8 = param_2[0x1d];
        lStack_398 = param_2[0x1f];
        lStack_328 = lStack_3f8;
        lStack_320 = lStack_3f0;
        lStack_318 = lStack_3e8;
        lStack_310 = lStack_3e0;
        lStack_308 = lStack_3d8;
        lStack_300 = lStack_3d0;
        lStack_2f8 = lStack_3c8;
        lStack_2f0 = lStack_3c0;
        lStack_2e8 = lStack_3b8;
        lStack_2e0 = lStack_3b0;
        uStack_2d8 = uStack_3a8;
        lStack_2d0 = lStack_3a0;
        lStack_2c8 = lStack_398;
        if ((char)lStack_340 == -2) {
          if ((uStack_3a8 & 0xff) == 0xfe) {
            lStack_428 = param_1[0x1a];
            lStack_430 = param_1[0x19];
            lStack_418 = param_1[0x1c];
            lStack_420 = param_1[0x1b];
            lStack_408 = param_1[0x1e];
            lStack_410 = param_1[0x1d];
            lStack_400 = param_1[0x1f];
            lStack_458 = param_1[0x14];
            lStack_460 = param_1[0x13];
            lStack_448 = param_1[0x16];
            lStack_450 = param_1[0x15];
            lStack_438 = param_1[0x18];
            lStack_440 = param_1[0x17];
            FUN_10280d6e0(&lStack_250,&lStack_e0,0x112ec3040,&UNK_10dae2470);
            FUN_10280d6e0(&lStack_2c0,&lStack_e0,0x112ec3040,&UNK_10dae2470);
            FUN_102810ce4(&lStack_460,0x112ec3040,&UNK_10dae2470);
LAB_10280e468:
            lVar4 = param_1[4];
            func_0x000100e25fcc(lVar4,param_1[5],param_2[4],param_2[5]);
            uVar1 = (uint)lVar4;
            goto LAB_10280e368;
          }
        }
        else if ((uStack_3a8 & 0xff) != 0xfe) {
          lStack_498 = param_2[0x1a];
          lStack_4a0 = param_2[0x19];
          lStack_488 = param_2[0x1c];
          lStack_490 = param_2[0x1b];
          lStack_478 = param_2[0x1e];
          lStack_480 = param_2[0x1d];
          lStack_470 = param_2[0x1f];
          lStack_4c8 = param_2[0x14];
          lStack_4d0 = param_2[0x13];
          lStack_4b8 = param_2[0x16];
          lStack_4c0 = param_2[0x15];
          lStack_4a8 = param_2[0x18];
          lStack_4b0 = param_2[0x17];
          lStack_a8 = param_1[0x1a];
          lStack_b0 = param_1[0x19];
          lStack_98 = param_1[0x1c];
          lStack_a0 = param_1[0x1b];
          lStack_88 = param_1[0x1e];
          lStack_90 = param_1[0x1d];
          lStack_80 = param_1[0x1f];
          lStack_d8 = param_1[0x14];
          lStack_e0 = param_1[0x13];
          lStack_c8 = param_1[0x16];
          lStack_d0 = param_1[0x15];
          lStack_b8 = param_1[0x18];
          lStack_c0 = param_1[0x17];
          lStack_460 = lStack_4d0;
          lStack_458 = lStack_4c8;
          lStack_450 = lStack_4c0;
          lStack_448 = lStack_4b8;
          lStack_440 = lStack_4b0;
          lStack_438 = lStack_4a8;
          lStack_430 = lStack_4a0;
          lStack_428 = lStack_498;
          lStack_420 = lStack_490;
          lStack_418 = lStack_488;
          lStack_410 = lStack_480;
          lStack_408 = lStack_478;
          lStack_400 = lStack_470;
          FUN_10280d6e0(&lStack_250,auStack_538,0x112ec3040,&UNK_10dae2470);
          FUN_10280d6e0(&lStack_2c0,auStack_538,0x112ec3040,&UNK_10dae2470);
          plVar3 = &lStack_e0;
          func_0x00010280d254(plVar3,&lStack_460);
          FUN_102810ce4(&lStack_4d0,0x112ec3040,&UNK_10dae2470);
          FUN_102810ce4(&lStack_390,0x112ec3040,&UNK_10dae2470);
          if (((ulong)plVar3 & 1) != 0) goto LAB_10280e468;
          goto LAB_10280e364;
        }
        lStack_460 = lStack_390;
        lStack_458 = lStack_388;
        lStack_450 = lStack_380;
        lStack_448 = lStack_378;
        lStack_440 = lStack_370;
        lStack_438 = lStack_368;
        lStack_430 = lStack_360;
        lStack_428 = lStack_358;
        lStack_420 = lStack_350;
        lStack_418 = lStack_348;
        lStack_410 = lStack_340;
        lStack_408 = lStack_338;
        lStack_400 = lStack_330;
        FUN_10280d6e0(&lStack_250,&lStack_e0,0x112ec3040,&UNK_10dae2470);
        FUN_10280d6e0(&lStack_2c0,&lStack_e0,0x112ec3040,&UNK_10dae2470);
        FUN_102810ce4(&lStack_460,0x112ec3048,&UNK_10dae2478);
        goto LAB_10280e364;
      }
LAB_10280e004:
      FUN_10280d6e0(&lStack_140,&lStack_390,0x112db80f8,&UNK_10d9671e0);
      plVar3 = &lStack_160;
      uVar2 = uVar6;
      uVar7 = uVar10;
      lVar9 = lVar4;
      uVar6 = uVar8;
      uVar10 = uVar11;
      lVar4 = lVar5;
LAB_10280e1ec:
      FUN_10280d6e0(plVar3,&lStack_390,0x112db80f8,&UNK_10d9671e0);
      func_0x0001015dc5d0(lVar9,uVar7,uVar2);
    }
LAB_10280e360:
    func_0x0001015dc5d0(lVar4,uVar10,uVar6);
  }
  else {
    if (lVar9 == 0) {
LAB_10280db94:
      FUN_10280d6e0(&uStack_100,&lStack_390,0x112db6f40,&UNK_10d9681d0);
      FUN_10280d6e0(&uStack_120,&lStack_390,0x112db6f40,&UNK_10d9681d0);
      FUN_102810c5c(uVar6,lVar4,uVar10,lVar5);
      uVar6 = uVar8;
      lVar4 = lVar9;
      uVar10 = uVar11;
      lVar5 = lVar12;
    }
    else if (((uVar6 == uVar8) && (lVar4 == lVar9)) ||
            (uVar2 = uVar6, func_0x000107c605b8(uVar6,lVar4,uVar8,lVar9,0), (uVar2 & 1) != 0)) {
      FUN_10280d6e0(&uStack_100,&lStack_390,0x112db6f40,&UNK_10d9681d0);
      FUN_10280d6e0(&uStack_120,&lStack_390,0x112db6f40,&UNK_10d9681d0);
      uVar2 = uVar10;
      func_0x000100e25fcc(uVar10,lVar5,uVar11,lVar12);
      FUN_102810c5c(uVar8,lVar9,uVar11,lVar12);
      if ((uVar2 & 1) != 0) goto LAB_10280dcc4;
    }
    else {
      FUN_10280d6e0(&uStack_100,&lStack_390,0x112db6f40,&UNK_10d9681d0);
      FUN_10280d6e0(&uStack_120,&lStack_390,0x112db6f40,&UNK_10d9681d0);
      FUN_102810c5c(uVar8,lVar9,uVar11,lVar12);
    }
    FUN_102810c5c(uVar6,lVar4,uVar10,lVar5);
  }
LAB_10280e364:
  uVar1 = 0;
LAB_10280e368:
  return (long *)(ulong)(uVar1 & 1);
}



/* Entry: 10280a79c; end: 10280a7cb;  */

undefined1  [16] FUN_10280a79c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 10280a7cc; end: 10280a7ff;  */

void FUN_10280a7cc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 10280a800; end: 10280a813;  */

undefined1  [16] FUN_10280a800(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x10280a810;
  return auVar1;
}



/* Entry: 10280a814; end: 10280a827;  */

void FUN_10280a814(void)

{
  FUN_10280a140();
  return;
}



/* Entry: 10280a828; end: 10280a88f;  */

void FUN_10280a828(void)

{
  FUN_10280a2f4();
  return;
}



/* Entry: 10280a890; end: 10280a893;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10280a890(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10280a894; end: 10280a8cb;  */

uint FUN_10280a894(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000102810c1c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10280a8cc; end: 10280a97b;  */

uint FUN_10280a8cc(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_58 = param_1[0x19];
  uStack_60 = param_1[0x18];
  uStack_48 = param_1[0x1b];
  uStack_50 = param_1[0x1a];
  uStack_38 = param_1[0x1d];
  uStack_40 = param_1[0x1c];
  uStack_28 = param_1[0x1f];
  uStack_30 = param_1[0x1e];
  uStack_98 = param_1[0x11];
  uStack_a0 = param_1[0x10];
  uStack_88 = param_1[0x13];
  uStack_90 = param_1[0x12];
  uStack_78 = param_1[0x15];
  uStack_80 = param_1[0x14];
  uStack_68 = param_1[0x17];
  uStack_70 = param_1[0x16];
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_158 = unaff_x20[0x19];
  uStack_160 = unaff_x20[0x18];
  uStack_148 = unaff_x20[0x1b];
  uStack_150 = unaff_x20[0x1a];
  uStack_138 = unaff_x20[0x1d];
  uStack_140 = unaff_x20[0x1c];
  uStack_128 = unaff_x20[0x1f];
  uStack_130 = unaff_x20[0x1e];
  uStack_198 = unaff_x20[0x11];
  uStack_1a0 = unaff_x20[0x10];
  uStack_188 = unaff_x20[0x13];
  uStack_190 = unaff_x20[0x12];
  uStack_178 = unaff_x20[0x15];
  uStack_180 = unaff_x20[0x14];
  uStack_168 = unaff_x20[0x17];
  uStack_170 = unaff_x20[0x16];
  uStack_1d8 = unaff_x20[9];
  uStack_1e0 = unaff_x20[8];
  uStack_1c8 = unaff_x20[0xb];
  uStack_1d0 = unaff_x20[10];
  uStack_1b8 = unaff_x20[0xd];
  uStack_1c0 = unaff_x20[0xc];
  uStack_1a8 = unaff_x20[0xf];
  uStack_1b0 = unaff_x20[0xe];
  uStack_218 = unaff_x20[1];
  uStack_220 = *unaff_x20;
  uStack_208 = unaff_x20[3];
  uStack_210 = unaff_x20[2];
  uStack_1f8 = unaff_x20[5];
  uStack_200 = unaff_x20[4];
  uStack_1e8 = unaff_x20[7];
  uStack_1f0 = unaff_x20[6];
  FUN_10280da18(&uStack_220,&uStack_120);
  return uVar1 & 1;
}



/* Entry: 10280a97c; end: 10280aa1b;  */

/* WARNING: Possible PIC construction at 0x00010280a9c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010280a9d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010280a9cc) */
/* WARNING: Removing unreachable block (ram,0x00010280a9dc) */

void FUN_10280a97c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ec3068 != -1) {
    func_0x000107c61568(0x112ec3068,FUN_10280a0f8);
  }
  uVar5 = uRam0000000113804ad0;
  uVar4 = uRam0000000113804ac8;
  uVar3 = uRam0000000113804ac0;
  uVar2 = uRam0000000113804ab8;
  uVar1 = uRam0000000113804ab0;
  *param_1 = uRam0000000113804aa8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10280aa1c; end: 10280aa57;  */

void FUN_10280aa1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ec31c8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ec31c8,&UNK_10dae2cd8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10280aa58; end: 10280abc3;  */

void FUN_10280aa58(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_178 [72];
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[0x19];
  uStack_70 = unaff_x20[0x18];
  uStack_58 = unaff_x20[0x1b];
  uStack_60 = unaff_x20[0x1a];
  uStack_48 = unaff_x20[0x1d];
  uStack_50 = unaff_x20[0x1c];
  uStack_38 = unaff_x20[0x1f];
  uStack_40 = unaff_x20[0x1e];
  uStack_a8 = unaff_x20[0x11];
  uStack_b0 = unaff_x20[0x10];
  uStack_98 = unaff_x20[0x13];
  uStack_a0 = unaff_x20[0x12];
  uStack_88 = unaff_x20[0x15];
  uStack_90 = unaff_x20[0x14];
  uStack_78 = unaff_x20[0x17];
  uStack_80 = unaff_x20[0x16];
  uStack_e8 = unaff_x20[9];
  uStack_f0 = unaff_x20[8];
  uStack_d8 = unaff_x20[0xb];
  uStack_e0 = unaff_x20[10];
  uStack_c8 = unaff_x20[0xd];
  uStack_d0 = unaff_x20[0xc];
  uStack_b8 = unaff_x20[0xf];
  uStack_c0 = unaff_x20[0xe];
  uStack_128 = unaff_x20[1];
  uStack_130 = *unaff_x20;
  uStack_118 = unaff_x20[3];
  uStack_120 = unaff_x20[2];
  uStack_108 = unaff_x20[5];
  uStack_110 = unaff_x20[4];
  uStack_f8 = unaff_x20[7];
  uStack_100 = unaff_x20[6];
  func_0x000107c6068c(auStack_178,0);
  func_0x000107c5fa50(auStack_178,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10280abc4; end: 10280ac73;  */

uint FUN_10280abc4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_158 = param_1[0x19];
  uStack_160 = param_1[0x18];
  uStack_148 = param_1[0x1b];
  uStack_150 = param_1[0x1a];
  uStack_138 = param_1[0x1d];
  uStack_140 = param_1[0x1c];
  uStack_128 = param_1[0x1f];
  uStack_130 = param_1[0x1e];
  uStack_198 = param_1[0x11];
  uStack_1a0 = param_1[0x10];
  uStack_188 = param_1[0x13];
  uStack_190 = param_1[0x12];
  uStack_178 = param_1[0x15];
  uStack_180 = param_1[0x14];
  uStack_168 = param_1[0x17];
  uStack_170 = param_1[0x16];
  uStack_1d8 = param_1[9];
  uStack_1e0 = param_1[8];
  uStack_1c8 = param_1[0xb];
  uStack_1d0 = param_1[10];
  uStack_1b8 = param_1[0xd];
  uStack_1c0 = param_1[0xc];
  uStack_1a8 = param_1[0xf];
  uStack_1b0 = param_1[0xe];
  uStack_218 = param_1[1];
  uStack_220 = *param_1;
  uStack_208 = param_1[3];
  uStack_210 = param_1[2];
  uStack_1f8 = param_1[5];
  uStack_200 = param_1[4];
  uStack_1e8 = param_1[7];
  uStack_1f0 = param_1[6];
  uStack_58 = param_2[0x19];
  uStack_60 = param_2[0x18];
  uStack_48 = param_2[0x1b];
  uStack_50 = param_2[0x1a];
  uStack_38 = param_2[0x1d];
  uStack_40 = param_2[0x1c];
  uStack_28 = param_2[0x1f];
  uStack_30 = param_2[0x1e];
  uStack_98 = param_2[0x11];
  uStack_a0 = param_2[0x10];
  uStack_88 = param_2[0x13];
  uStack_90 = param_2[0x12];
  uStack_78 = param_2[0x15];
  uStack_80 = param_2[0x14];
  uStack_68 = param_2[0x17];
  uStack_70 = param_2[0x16];
  uStack_d8 = param_2[9];
  uStack_e0 = param_2[8];
  uStack_c8 = param_2[0xb];
  uStack_d0 = param_2[10];
  uStack_b8 = param_2[0xd];
  uStack_c0 = param_2[0xc];
  uStack_a8 = param_2[0xf];
  uStack_b0 = param_2[0xe];
  uStack_118 = param_2[1];
  uStack_120 = *param_2;
  uStack_108 = param_2[3];
  uStack_110 = param_2[2];
  uStack_f8 = param_2[5];
  uStack_100 = param_2[4];
  uStack_e8 = param_2[7];
  uStack_f0 = param_2[6];
  FUN_10280da18(&uStack_220,&uStack_120);
  return uVar1 & 1;
}



/* Entry: 10280ac74; end: 10280acbb;  */

void FUN_10280ac74(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dae2d20,0x2e,2);
  uRam0000000113804ae0 = uStack_38;
  uRam0000000113804ad8 = uStack_40;
  uRam0000000113804af0 = uStack_28;
  uRam0000000113804ae8 = uStack_30;
  uRam0000000113804b00 = uStack_18;
  uRam0000000113804af8 = uStack_20;
  return;
}



/* Entry: 10280acbc; end: 10280ad83;  */

/* WARNING: Removing unreachable block (ram,0x00010280ad54) */

void FUN_10280acbc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 3) {
      FUN_10280b194();
    }
    else if (lVar1 == 2) {
      FUN_10280af64();
    }
    else if (lVar1 == 1) {
      FUN_10280ad84();
    }
  }
  return;
}



/* Entry: 10280ad84; end: 10280af63;  */

/* WARNING: Removing unreachable block (ram,0x00010280aef0) */

void FUN_10280ad84(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  undefined8 *puVar6;
  long unaff_x21;
  code *pcVar7;
  undefined1 auStack_148 [88];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  cVar5 = *(char *)(param_1 + 10);
  puVar6 = param_1;
  if (cVar5 == '\0') {
    uVar1 = param_1[2];
    uVar3 = param_1[3];
    uVar2 = *param_1;
    lVar4 = param_1[1];
    uStack_c8 = param_1[5];
    uStack_d0 = param_1[4];
    uStack_b8 = param_1[7];
    uStack_c0 = param_1[6];
    uStack_a8 = param_1[9];
    uStack_b0 = param_1[8];
    uStack_a0 = 0;
    uStack_f0 = uVar2;
    lStack_e8 = lVar4;
    uStack_e0 = uVar1;
    uStack_d8 = uVar3;
    FUN_10280d80c(&uStack_f0,auStack_148);
    puVar6 = (undefined8 *)0x0;
    FUN_102810c5c(0,0,0,0);
    uStack_90 = uVar2;
    lStack_88 = lVar4;
    uStack_80 = uVar1;
    uStack_78 = uVar3;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  FUN_10280ea34();
  (*pcVar7)(&uStack_90,&UNK_110552890,puVar6,param_3,param_4);
  uVar3 = uStack_78;
  uVar2 = uStack_80;
  lVar4 = lStack_88;
  uVar1 = uStack_90;
  if ((unaff_x21 == 0) && (lStack_88 != 0)) {
    if (cVar5 == -1) {
      func_0x000107c61434(lStack_88);
      func_0x00010006c00c(uVar2,uVar3);
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x000107c61434(lStack_88);
      func_0x00010006c00c(uVar2,uVar3);
      (*pcVar7)(param_3,param_4);
    }
    FUN_102810c5c(uStack_90,lStack_88,uStack_80,uStack_78);
    uStack_c8 = param_1[5];
    uStack_d0 = param_1[4];
    uStack_b8 = param_1[7];
    uStack_c0 = param_1[6];
    uStack_a8 = param_1[9];
    uStack_b0 = param_1[8];
    uStack_a0 = *(undefined1 *)(param_1 + 10);
    lStack_e8 = param_1[1];
    uStack_f0 = *param_1;
    uStack_d8 = param_1[3];
    uStack_e0 = param_1[2];
    *param_1 = uVar1;
    param_1[1] = lVar4;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    *(undefined1 *)(param_1 + 10) = 0;
    FUN_102810ce4(&uStack_f0,0x112ec3050,&UNK_10dae2480);
  }
  else {
    FUN_102810c5c(uStack_90,lStack_88,uStack_80,uStack_78);
  }
  return;
}



/* Entry: 10280af64; end: 10280b193;  */

/* WARNING: Removing unreachable block (ram,0x00010280b114) */

void FUN_10280af64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x21;
  code *pcVar9;
  undefined1 auStack_158 [88];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  lStack_88 = 1;
  uStack_80 = 0;
  uStack_78 = 0;
  cVar6 = *(char *)(param_1 + 10);
  puVar7 = param_1;
  if (cVar6 == '\x01') {
    uVar1 = param_1[4];
    uVar4 = param_1[5];
    uVar2 = param_1[2];
    lVar8 = param_1[3];
    uVar3 = *param_1;
    uVar5 = param_1[1];
    uStack_c8 = param_1[7];
    uStack_d0 = param_1[6];
    uStack_b8 = param_1[9];
    uStack_c0 = param_1[8];
    uStack_b0 = 1;
    uStack_100 = uVar3;
    uStack_f8 = uVar5;
    uStack_f0 = uVar2;
    lStack_e8 = lVar8;
    uStack_e0 = uVar1;
    uStack_d8 = uVar4;
    FUN_10280d80c(&uStack_100,auStack_158);
    puVar7 = (undefined8 *)0x0;
    FUN_102810c94(0,0,0,1,0,0);
    uStack_a0 = uVar3;
    uStack_98 = uVar5;
    uStack_90 = uVar2;
    lStack_88 = lVar8;
    uStack_80 = uVar1;
    uStack_78 = uVar4;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  FUN_10280eb30();
  (*pcVar9)(&uStack_a0,&UNK_110552910,puVar7,param_3,param_4);
  uVar5 = uStack_78;
  uVar4 = uStack_80;
  lVar8 = lStack_88;
  uVar3 = uStack_90;
  uVar2 = uStack_98;
  uVar1 = uStack_a0;
  if (unaff_x21 == 0) {
    if (lStack_88 != 1) {
      if (cVar6 == -1) {
        func_0x00010006c00c();
        func_0x000101597350(uVar3,lVar8,uVar4,uVar5);
      }
      else {
        pcVar9 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000101597350(uVar3,lVar8,uVar4,uVar5);
        (*pcVar9)(param_3,param_4);
      }
      FUN_102810c94(uStack_a0,uStack_98,uStack_90,lStack_88,uStack_80,uStack_78);
      uStack_d8 = param_1[5];
      uStack_e0 = param_1[4];
      uStack_c8 = param_1[7];
      uStack_d0 = param_1[6];
      uStack_b8 = param_1[9];
      uStack_c0 = param_1[8];
      uStack_b0 = *(undefined1 *)(param_1 + 10);
      uStack_f8 = param_1[1];
      uStack_100 = *param_1;
      lStack_e8 = param_1[3];
      uStack_f0 = param_1[2];
      *param_1 = uVar1;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = lVar8;
      param_1[4] = uVar4;
      param_1[5] = uVar5;
      *(undefined1 *)(param_1 + 10) = 1;
      FUN_102810ce4(&uStack_100,0x112ec3050,&UNK_10dae2480);
      return;
    }
    lVar8 = 1;
  }
  FUN_102810c94(uStack_a0,uStack_98,uStack_90,lVar8,uStack_80,uStack_78);
  return;
}



/* Entry: 10280b194; end: 10280b423;  */

/* WARNING: Removing unreachable block (ram,0x00010280b384) */

void FUN_10280b194(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x21;
  code *pcVar5;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  lStack_88 = 1;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  cVar1 = *(char *)(param_1 + 10);
  puVar2 = param_1;
  if (cVar1 != -1) {
    uStack_118 = param_1[5];
    uStack_120 = param_1[4];
    uStack_108 = param_1[7];
    uStack_110 = param_1[6];
    uStack_f8 = param_1[9];
    uStack_100 = param_1[8];
    uStack_138 = param_1[1];
    uStack_140 = *param_1;
    lStack_128 = param_1[3];
    uStack_130 = param_1[2];
    if (cVar1 == '\x02') {
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 1;
      uStack_1e0 = 0;
      uStack_178 = param_1[5];
      uStack_180 = param_1[4];
      uStack_168 = param_1[7];
      uStack_170 = param_1[6];
      uStack_158 = param_1[9];
      uStack_160 = param_1[8];
      uStack_198 = param_1[1];
      uStack_1a0 = *param_1;
      lStack_188 = param_1[3];
      uStack_190 = param_1[2];
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_150 = 2;
      FUN_10280d80c(&uStack_1a0,&uStack_250);
      puVar2 = &uStack_1f0;
      FUN_102810ce4(puVar2,0x112ec31d8,&UNK_10dae2d18);
      uStack_78 = uStack_118;
      uStack_80 = uStack_120;
      uStack_68 = uStack_108;
      uStack_70 = uStack_110;
      uStack_58 = uStack_f8;
      uStack_60 = uStack_100;
      uStack_98 = uStack_138;
      uStack_a0 = uStack_140;
      lStack_88 = lStack_128;
      uStack_90 = uStack_130;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  FUN_10280ec5c();
  (*pcVar5)(&uStack_a0,&UNK_110552990,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_228 = uStack_78;
    uStack_230 = uStack_80;
    uStack_218 = uStack_68;
    uStack_220 = uStack_70;
    uStack_208 = uStack_58;
    uStack_210 = uStack_60;
    uStack_248 = uStack_98;
    uStack_250 = uStack_a0;
    lStack_238 = lStack_88;
    uStack_240 = uStack_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    uStack_a8 = uStack_58;
    uStack_b0 = uStack_60;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    lStack_d8 = lStack_88;
    uStack_e0 = uStack_90;
    if (lStack_88 != 1) {
      if (cVar1 == -1) {
        uStack_178 = uStack_78;
        uStack_180 = uStack_80;
        uStack_168 = uStack_68;
        uStack_170 = uStack_70;
        uStack_158 = uStack_58;
        uStack_160 = uStack_60;
        uStack_198 = uStack_98;
        uStack_1a0 = uStack_a0;
        lStack_188 = lStack_88;
        uStack_190 = uStack_90;
        func_0x00010280d840(&uStack_1a0,&uStack_140);
      }
      else {
        pcVar5 = *(code **)(param_4 + 8);
        uStack_178 = uStack_78;
        uStack_180 = uStack_80;
        uStack_168 = uStack_68;
        uStack_170 = uStack_70;
        uStack_158 = uStack_58;
        uStack_160 = uStack_60;
        uStack_198 = uStack_98;
        uStack_1a0 = uStack_a0;
        lStack_188 = lStack_88;
        uStack_190 = uStack_90;
        func_0x00010280d840(&uStack_1a0,&uStack_140);
        (*pcVar5)(param_3,param_4);
      }
      FUN_102810ce4(&uStack_a0,0x112ec31d8,&UNK_10dae2d18);
      uStack_178 = param_1[5];
      uStack_180 = param_1[4];
      uStack_168 = param_1[7];
      uStack_170 = param_1[6];
      uStack_158 = param_1[9];
      uStack_160 = param_1[8];
      uStack_150 = *(undefined1 *)(param_1 + 10);
      uStack_198 = param_1[1];
      uStack_1a0 = *param_1;
      lStack_188 = param_1[3];
      uStack_190 = param_1[2];
      param_1[1] = uStack_e8;
      *param_1 = uStack_f0;
      param_1[3] = lStack_d8;
      param_1[2] = uStack_e0;
      param_1[5] = uStack_c8;
      param_1[4] = uStack_d0;
      param_1[7] = uStack_b8;
      param_1[6] = uStack_c0;
      param_1[9] = uStack_a8;
      param_1[8] = uStack_b0;
      *(undefined1 *)(param_1 + 10) = 2;
      uVar3 = 0x112ec3050;
      puVar4 = &UNK_10dae2480;
      puVar2 = &uStack_1a0;
      goto LAB_10280b2f0;
    }
  }
  uVar3 = 0x112ec31d8;
  puVar4 = &UNK_10dae2d18;
  puVar2 = &uStack_a0;
LAB_10280b2f0:
  FUN_102810ce4(puVar2,uVar3,puVar4);
  return;
}



/* Entry: 10280b424; end: 10280b4bb;  */

void FUN_10280b424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  long unaff_x20;
  long unaff_x21;
  
  bVar1 = *(byte *)(unaff_x20 + 0x50);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      FUN_10280b4bc();
    }
    else {
      FUN_10280b53c();
    }
  }
  else {
    if (bVar1 != 2) goto LAB_10280b48c;
    FUN_10280b5c8();
  }
  if (unaff_x21 != 0) {
    return;
  }
LAB_10280b48c:
  func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      param_2,param_3);
  return;
}



/* Entry: 10280b4bc; end: 10280b53b;  */

void FUN_10280b4bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(char *)(param_1 + 10) == '\0') {
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    uStack_48 = param_1[3];
    uStack_50 = param_1[2];
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10280ea34();
    (*pcVar1)(&uStack_60,1,&UNK_110552890,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10280b53c);
  (*pcVar1)();
}



/* Entry: 10280b53c; end: 10280b5c7;  */

void FUN_10280b53c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(char *)(param_1 + 10) == '\x01') {
    uStack_68 = param_1[1];
    uStack_70 = *param_1;
    uStack_58 = param_1[3];
    uStack_60 = param_1[2];
    uStack_48 = param_1[5];
    uStack_50 = param_1[4];
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10280eb30();
    (*pcVar1)(&uStack_70,2,&UNK_110552910,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10280b5c8);
  (*pcVar1)();
}



/* Entry: 10280b5c8; end: 10280b65b;  */

void FUN_10280b5c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
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
  
  if (*(char *)(param_1 + 10) == '\x02') {
    uStack_68 = param_1[5];
    uStack_70 = param_1[4];
    uStack_58 = param_1[7];
    uStack_60 = param_1[6];
    uStack_48 = param_1[9];
    uStack_50 = param_1[8];
    uStack_88 = param_1[1];
    uStack_90 = *param_1;
    uStack_78 = param_1[3];
    uStack_80 = param_1[2];
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10280ec5c();
    (*pcVar1)(&uStack_90,3,&UNK_110552990,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10280b65c);
  (*pcVar1)();
}



/* Entry: 10280b65c; end: 10280b6a7;  */

void FUN_10280b65c(undefined8 *param_1)

{
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 10) = 0xff;
  param_1[0xc] = 0xc000000000000000;
  param_1[0xb] = 0;
  return;
}



/* Entry: 10280b6a8; end: 10280b6d7;  */

undefined1  [16] FUN_10280b6a8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x58);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return auVar1;
}



/* Entry: 10280b6d8; end: 10280b70b;  */

void FUN_10280b6d8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60));
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  return;
}


