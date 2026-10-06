/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108298d90; end: 108298dc7;  */

uint FUN_108298d90(long param_1)

{
  code *pcVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010829c2f8();
    if (4 < (uint)param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x108298dc8);
      (*pcVar1)();
    }
    uVar2 = 8 >> (ulong)((uint)param_1 & 0x1f);
  }
  return uVar2 & 1;
}



/* Entry: 108298dc8; end: 108298f53;  */

void FUN_108298dc8(undefined1 *param_1,ulong param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  char cStack_b0;
  undefined7 uStack_af;
  long lStack_a8;
  undefined1 uStack_38;
  
  uVar3 = param_2;
  FUN_108393a44();
  if (uVar3 >> 0x20 == 0) {
    func_0x00010829c434();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    iVar2 = (int)uVar3;
    if (iVar2 == 2) {
      func_0x0001083938c4(param_2);
      lStack_c8 = 0;
      FUN_108296de8(&lStack_d0);
      FUN_10829b568(&cStack_b0,param_2,&lStack_c8,&lStack_d0,param_3);
      if (lStack_d0 != 0) {
        func_0x00010829c1cc();
      }
      if (lStack_c8 != 0) {
        func_0x00010829c1cc();
      }
      lStack_a8 = CONCAT71(uStack_af,cStack_b0);
    }
    else if (iVar2 == 1) {
      uVar4 = *param_3;
      func_0x000108393834(param_2);
      lStack_c0 = 0;
      FUN_10829abf4(&cStack_b0,uVar4,param_2,&lStack_c0,param_3[1],param_3[2]);
      if (lStack_c0 != 0) {
        func_0x00010829c1cc();
      }
      if (cStack_b0 != '\x01') {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        if (lStack_a8 == 0) {
          return;
        }
        func_0x00010829c1cc();
        return;
      }
    }
    else {
      if (iVar2 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x108298f1c);
        (*pcVar1)();
      }
      FUN_1083be2e8(&cStack_b0,0x113254e20);
      uStack_38 = 0;
      FUN_1083937ac(param_2);
      FUN_108298f54(&lStack_b8);
      lStack_a8 = lStack_b8;
    }
    func_0x00010829c4a8(lStack_a8);
  }
  return;
}



/* Entry: 108298f54; end: 10829abf3;  */

void FUN_108298f54(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long *****param_5,long *param_6,long *****param_7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  long ***ppplVar6;
  long ****pppplVar7;
  long *****ppppplVar8;
  code *pcVar9;
  undefined1 in_ZR;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  long *****ppppplVar13;
  long ****pppplVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *****ppppplVar17;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  long *****extraout_x8_01;
  code *extraout_x8_02;
  long *****extraout_x8_03;
  long ****extraout_x8_04;
  long *extraout_x8_05;
  long *****extraout_x8_06;
  long *****extraout_x8_07;
  long *****extraout_x8_08;
  long *****extraout_x8_09;
  undefined8 *extraout_x8_10;
  long *****extraout_x8_11;
  long *****extraout_x8_12;
  long *****extraout_x8_13;
  long *****extraout_x8_14;
  code *extraout_x8_15;
  undefined8 extraout_x8_16;
  long *****extraout_x8_17;
  long *****extraout_x8_18;
  long *****extraout_x8_19;
  uint uVar18;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  long *****unaff_x20;
  long *****unaff_x21;
  undefined8 uVar19;
  long lVar20;
  long *****unaff_x24;
  undefined8 *puVar21;
  uint uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  long ***ppplVar26;
  long ****pppplVar27;
  undefined4 uVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 uStack_180;
  float fStack_178;
  undefined4 uStack_174;
  section *psStack_170;
  long ***ppplStack_168;
  long ***ppplStack_160;
  long ***ppplStack_158;
  long ***ppplStack_150;
  long ***ppplStack_148;
  long ***ppplStack_140;
  long ***ppplStack_138;
  long ****pppplStack_130;
  long **pplStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined1 uStack_107;
  long ****pppplStack_100;
  long ****pppplStack_f8;
  long ****pppplStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined4 uStack_d8;
  byte bStack_c8;
  long ****pppplStack_c0;
  undefined4 uStack_b8;
  undefined2 uStack_b4;
  long ****pppplStack_b0;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  long ****pppplStack_a0;
  long **pplStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_60;
  long ****pppplStack_58;
  long ****pppplStack_50;
  long ****pppplStack_48;
  long ****pppplStack_40;
  long ****pppplStack_38;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined8 uStack_10;
  
  func_0x00010829c528();
  func_0x00010829c414();
  uStack_10 = extraout_x8_00;
  if (param_5 == (long *****)0x0) goto LAB_108298fb4;
  ppppplVar13 = param_5;
  func_0x00010829c2f8();
  fVar24 = (float)param_1;
  in_ZR = (int)ppppplVar13 == 0xe;
  unaff_x24 = (long *****)&UNK_10ded9000;
  unaff_x20 = param_7;
  unaff_x21 = param_5;
  switch((ulong)ppppplVar13 & 0xffffffff) {
  case 0:
    ppppplVar13 = (long *****)param_5[2];
    if (ppppplVar13 != (long *****)0x0) {
      do {
        func_0x00010829c1d8();
      } while (extraout_w10_02 != 0);
    }
    uStack_90 = ppppplVar13;
    func_0x00010829c2b8(&uStack_180);
    func_0x00010829c46c();
    ppppplVar13 = (long *****)param_5[3];
    if (ppppplVar13 != (long *****)0x0) {
      do {
        func_0x00010829c1d8();
      } while (extraout_w10_03 != 0);
    }
    pppplStack_f0 = (long ****)ppppplVar13;
    func_0x00010829c2b8(&uStack_90);
    func_0x00010829c458();
    ppppplVar8 = uStack_90;
    ppppplVar17 = (long *****)CONCAT44(uStack_180._4_4_,(uint)uStack_180);
    if ((ppppplVar17 == (long *****)0x0) || (uStack_90 == (long *****)0x0)) {
      *extraout_x8 = 0;
    }
    else {
      uStack_90 = (long *****)0x0;
      pppplStack_f0 = (long ****)ppppplVar8;
      uStack_180._0_4_ = 0;
      uStack_180._4_4_ = 0;
      pppplStack_38 = (long ****)ppppplVar17;
      func_0x00010829c49c(&pppplStack_f0,&pppplStack_38,*(int *)(param_5 + 4));
      if ((long *****)pppplStack_38 != (long *****)0x0) {
        func_0x00010829c1cc();
      }
      ppppplVar13 = (long *****)pppplStack_f0;
      if ((long *****)pppplStack_f0 != (long *****)0x0) {
        func_0x00010829c1cc();
      }
    }
    func_0x00010829c350();
    break;
  case 1:
    fStack_178 = 0.0;
    uStack_174._0_2_ = 0;
    uStack_174._2_2_ = 0;
    uStack_180._0_4_ = 0x3f800000;
    uStack_180._4_4_ = 0;
    ppplStack_168 = (long ***)0x0;
    psStack_170 = (section *)0x3f800000;
    ppplStack_160 = (long ***)0x103f800000;
    ppppplVar13 = param_5 + 3;
    FUN_10818cfd0(ppppplVar13,&uStack_180);
    if (((ulong)ppppplVar13 & 1) == 0) goto LAB_108298fb4;
    ppppplVar13 = (long *****)param_5[2];
    if (ppppplVar13 != (long *****)0x0) {
      do {
        func_0x00010829c1d8();
      } while (extraout_w10 != 0);
    }
    pppplStack_f0 = (long ****)ppppplVar13;
    FUN_10829b838(&uStack_90);
    func_0x00010829c458();
    ppppplVar13 = uStack_90;
    if (uStack_90 == (long *****)0x0) goto LAB_108298fb4;
    uStack_90 = (long *****)0x0;
    pppplStack_a0 = (long ****)ppppplVar13;
    FUN_1082c8ba8(&pppplStack_38,&uStack_180,&pppplStack_a0);
    FUN_108297448(extraout_x8,&pppplStack_38);
    if ((long *****)pppplStack_38 != (long *****)0x0) {
      func_0x00010829c1cc();
    }
    ppppplVar13 = (long *****)pppplStack_a0;
    if ((long *****)pppplStack_a0 != (long *****)0x0) {
      func_0x00010829c1cc();
    }
    goto code_r0x00010829a2f4;
  case 2:
    FUN_108343afc();
    FUN_108344004(&uStack_180,ppppplVar13,3,*(undefined8 *)param_6[1],3);
    uStack_88 = *(long ******)((long)param_5 + 0x14);
    uStack_90 = *(long ******)((long)param_5 + 0xc);
    FUN_1083441a4(&uStack_180,&uStack_90);
    FUN_1082963dc(extraout_x8,(float)uStack_90 * uStack_88._4_4_,uStack_88._4_4_ * uStack_90._4_4_,
                  uStack_88._4_4_ * (float)uStack_88);
    goto LAB_108298fb8;
  case 3:
    pppplVar14 = param_5[2];
    if (pppplVar14 != (long ****)0x0) {
      do {
        func_0x00010829c1d8();
      } while (extraout_w10_05 != 0);
    }
    uStack_180._0_4_ = (uint)pppplVar14;
    uStack_180._4_4_ = (undefined4)((ulong)pppplVar14 >> 0x20);
    func_0x00010829c2b8(&uStack_90);
    func_0x000106f47224(&uStack_180);
    if (uStack_90 == (long *****)0x0) goto LAB_108298fb4;
    ppppplVar13 = (long *****)param_5[3];
    pppplStack_38 = (long ****)uStack_90;
    if (ppppplVar13 != (long *****)0x0) {
      do {
        func_0x00010829c1e8();
        pppplStack_38 = (long ****)extraout_x8_13;
      } while (extraout_w11_05 != 0);
    }
    uStack_90 = (long *****)0x0;
    pppplStack_f0 = (long ****)ppppplVar13;
    FUN_10829abf4(&uStack_180);
    if ((long *****)pppplStack_38 != (long *****)0x0) {
      func_0x00010829c1cc();
    }
    ppppplVar13 = &pppplStack_f0;
    FUN_10829ba9c();
    *extraout_x8 = CONCAT26(uStack_174._2_2_,CONCAT24((undefined2)uStack_174,fStack_178));
code_r0x00010829a2f4:
    func_0x00010829c350();
joined_r0x000108299e44:
    if (ppppplVar13 == (long *****)0x0) goto LAB_108298fb8;
    goto LAB_10829a2fc;
  case 4:
    if ((bRam000000011372a5c8 & 1) == 0) goto code_r0x00010829a508;
    goto LAB_1082997c0;
  case 5:
  case 0xc:
  case 0xd:
    goto LAB_108298fb4;
  case 6:
    uVar19 = 0;
    uVar16 = 0;
    ppppplVar17 = param_5;
    (*(code *)(*param_5)[10])(param_5,0,0);
    in_ZR = (int)ppppplVar17 == 4;
    switch((ulong)ppppplVar17 & 0xffffffff) {
    case 0:
      goto LAB_108298fb4;
    case 1:
      uStack_180._0_4_ = (uint)uStack_180 & 0xffffff00;
      ppplStack_158 = (long ***)((ulong)ppplStack_158 & 0xffffffffffffff00);
      iVar29 = *(int *)((long)param_5 + 0x10c);
      if (iVar29 == 0) {
        if ((bRam000000011372a5e8 & 1) == 0) {
          ppppplVar17 = (long *****)0x11372a5e8;
          ___cxa_guard_acquire();
          if ((int)ppppplVar17 != 0) {
            func_0x00010829c404();
            func_0x00010829c3d0();
            func_0x00010829c47c();
            func_0x00010829c1f8(0x11372a5e0);
          }
        }
        unaff_x24 = ppppplRam000000011372a5e0;
        fVar30 = *(float *)((long)param_5 + 0x104);
        fVar24 = *(float *)(param_5 + 0x21) - fVar30;
        in_ZR = fVar24 == 0.0;
        iVar29 = 0x3f800000;
        if (fVar24 < 0.0) {
          iVar29 = -0x40800000;
        }
        func_0x00010829c3dc();
        func_0x00010829c30c();
        if (unaff_x24 != (long *****)0x0) {
          do {
            func_0x00010829c1d8();
          } while (extraout_w10_14 != 0);
        }
        uStack_90 = unaff_x24;
        func_0x00010829c27c();
        func_0x00010829c304();
        *(float *)(ppppplVar17 + 0xd) = fVar30 / fVar24;
        *(int *)((long)ppppplVar17 + 0x6c) = iVar29;
        FUN_10814bdfc(&uStack_90,-*(float *)((long)param_5 + 0xf4),-*(float *)(param_5 + 0x1f));
        FUN_108193f58(&uStack_180,&uStack_90);
        if (((ulong)ppplStack_158 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_10829a670;
        }
        FUN_108364068(1.0 / fVar24,1.0 / fVar24,&uStack_180);
      }
      else if (iVar29 == 2) {
        if ((bRam000000011372a5f8 & 1) == 0) {
          ppppplVar17 = (long *****)0x11372a5f8;
          ___cxa_guard_acquire();
          if ((int)ppppplVar17 != 0) {
            func_0x00010829c404();
            func_0x00010829c3d0();
            func_0x00010829c47c();
            func_0x00010829c1f8(0x11372a5f0);
          }
        }
        unaff_x24 = ppppplRam000000011372a5f0;
        fVar24 = *(float *)((long)param_5 + 0x114);
        fVar31 = *(float *)(param_5 + 0x22);
        fVar30 = ABS(1.0 - fVar31);
        bVar10 = false;
        bVar12 = false;
        if (1.0 < fVar31) {
          bVar10 = false;
          bVar12 = true;
          if (!NAN(fVar30)) {
            bVar10 = fVar30 == 0.00024414062;
            bVar12 = 0.00024414062 <= fVar30;
          }
        }
        bVar4 = *(byte *)(param_5 + 0x23);
        fVar25 = ABS(fVar24);
        in_ZR = fVar25 == 0.00024414062;
        func_0x00010829c3dc();
        func_0x00010829c30c();
        if (unaff_x24 != (long *****)0x0) {
          do {
            func_0x00010829c1d8();
          } while (extraout_w10_13 != 0);
        }
        uStack_90 = unaff_x24;
        func_0x00010829c27c();
        func_0x00010829c304();
        puVar1 = (undefined *)((long)ppppplVar17 + (ulong)*(uint *)(ppppplVar17 + 10) + 0x68);
        *puVar1 = 1;
        *(uint *)(ppppplVar17 + 0xd) = (uint)(fVar24 < 1.0);
        puVar1[1] = 1;
        *(uint *)((long)ppppplVar17 + 0x6c) = (uint)(fVar30 <= 0.00024414062);
        puVar1[2] = 1;
        *(uint *)(ppppplVar17 + 0xe) = (uint)(bVar12 && !bVar10);
        puVar1[3] = 1;
        *(uint *)((long)ppppplVar17 + 0x74) = (uint)bVar4;
        puVar1[4] = 1;
        *(uint *)(ppppplVar17 + 0xf) = (uint)(fVar25 <= 0.00024414062);
        *(float *)((long)ppppplVar17 + 0x7c) = 1.0 / fVar31;
        *(int *)(ppppplVar17 + 0x10) = *(int *)((long)param_5 + 0x114);
      }
      else {
        in_ZR = iVar29 == 1;
        if ((bool)in_ZR) {
          if ((bRam000000011372a5d8 & 1) == 0) {
            iVar29 = 0x1372a5d8;
            ___cxa_guard_acquire();
            if (iVar29 != 0) {
              func_0x00010829c404();
              func_0x00010829c3d0();
              func_0x00010829c47c();
              func_0x00010829c1f8(0x11372a5d0);
            }
          }
          fVar30 = *(float *)((long)param_5 + 0x104);
          ppppplVar17 = param_5;
          FUN_10829bae8();
          unaff_x24 = ppppplRam000000011372a5d0;
          func_0x00010829c3dc();
          func_0x00010829c30c();
          if (unaff_x24 != (long *****)0x0) {
            do {
              func_0x00010829c1d8();
            } while (extraout_w10_07 != 0);
          }
          uStack_90 = unaff_x24;
          func_0x00010829c27c();
          fVar30 = fVar30 / fVar24;
          func_0x00010829c304();
          *(float *)(ppppplVar17 + 0xd) = fVar30 * fVar30;
        }
        else {
          ppppplVar17 = (long *****)0x0;
        }
      }
      ppppplVar13 = (long *****)&uStack_180;
      uStack_90 = ppppplVar17;
      func_0x00010829baf8();
      func_0x00010829c244();
      FUN_1082de718();
      goto code_r0x00010829a2f4;
    case 2:
      func_0x00010829c258(uStack_10);
      uVar11 = in_ZR;
      if (!(bool)in_ZR) goto LAB_10829a504;
      func_0x00010829c244();
      if ((bRam0000000113826c28 & 1) == 0) {
        uVar15 = 0x113826c28;
        ___cxa_guard_acquire();
        if ((int)uVar15 != 0) {
          in_stack_00000040 = 0;
          in_stack_00000028 = 0;
          in_stack_00000020 = 0;
          in_stack_00000038 = 0;
          in_stack_00000030 = 0;
          func_0x0001082dff0c();
          FUN_108287980();
          uRam0000000113826c20 = uVar15;
          ___cxa_guard_release(0x113826c28);
        }
      }
      in_stack_00000018 = 0;
      FUN_10829091c(&stack0x00000020,uRam0000000113826c20,&UNK_10f4871c5,&stack0x00000018,2);
      lVar20 = in_stack_00000018;
      in_stack_00000018 = 0;
      if (lVar20 != 0) {
        FUN_1082dfe2c();
      }
      in_stack_00000010 = in_stack_00000020;
      in_stack_00000020 = 0;
      FUN_1082de718(extraout_x8_16,ppppplVar17,uVar19,uVar16,&stack0x00000010,0);
      lVar20 = in_stack_00000010;
      in_stack_00000010 = 0;
      if (lVar20 != 0) {
        FUN_1082dfe2c();
      }
      lVar20 = in_stack_00000020;
      in_stack_00000020 = 0;
      if (lVar20 != 0) {
        FUN_1082dfe2c();
      }
      return;
    case 3:
      if ((bRam000000011372a608 & 1) == 0) {
        iVar29 = 0x1372a608;
        ___cxa_guard_acquire();
        if (iVar29 != 0) {
          func_0x00010829c220();
          func_0x00010829c3d0();
          func_0x00010829c2d4();
          func_0x00010829c1f8(0x11372a600);
        }
      }
      uStack_90 = (long *****)0x0;
      ppppplVar13 = ppppplRam000000011372a600;
      FUN_10829091c(&uStack_180,ppppplRam000000011372a600,&UNK_10f483411,&uStack_90,2);
      func_0x00010829c350();
      if (ppppplVar13 != (long *****)0x0) {
        func_0x00010829c1cc();
      }
      pppplStack_f0 = (long ****)CONCAT44(uStack_180._4_4_,(uint)uStack_180);
      uStack_180._0_4_ = 0;
      uStack_180._4_4_ = 0;
      func_0x00010829c244();
      FUN_1082de718();
      func_0x00010829c510();
      break;
    case 4:
      bVar4 = *(byte *)(*(long *)(*(long *)(*(long *)(*(long *)(*param_6 + 8) + 0x10) + 0xb8) + 0x10
                                 ) + 0x1a);
      if ((bRam000000011372a618 & 1) == 0) {
        ppppplVar17 = (long *****)0x11372a618;
        ___cxa_guard_acquire();
        if ((int)ppppplVar17 != 0) {
          func_0x00010829c220();
          func_0x00010829c3d0();
          func_0x00010829c2d4();
          func_0x00010829c1f8(0x11372a610);
        }
      }
      unaff_x24 = ppppplRam000000011372a610;
      pppplVar14 = *(long *****)((long)param_5 + 0xfc);
      func_0x00010829c3dc();
      func_0x00010829c30c();
      if (unaff_x24 != (long *****)0x0) {
        do {
          func_0x00010829c1d8();
        } while (extraout_w10_10 != 0);
      }
      uStack_180._0_4_ = (uint)unaff_x24;
      uStack_180._4_4_ = (undefined4)((ulong)unaff_x24 >> 0x20);
      ppppplVar13 = ppppplVar17;
      FUN_1082cc5c8(ppppplVar17,&uStack_180,&UNK_10f483595,2);
      func_0x00010829c484();
      ppppplVar17[0xd] = pppplVar14;
      *(undefined1 *)((long)(ppppplVar17 + 0xd) + (ulong)*(uint *)(ppppplVar17 + 10) + 2) = 1;
      *(uint *)(ppppplVar17 + 0xe) = (uint)bVar4;
      uStack_180._0_4_ = (uint)ppppplVar17;
      uStack_180._4_4_ = (undefined4)((ulong)ppppplVar17 >> 0x20);
      func_0x00010829c244();
      FUN_1082de718();
      goto code_r0x000108299fc8;
    default:
      goto LAB_10829a670;
    }
    break;
  case 7:
    pppplStack_38 = param_5[6];
    uStack_e8 = param_5[8];
    pppplStack_f0 = param_5[7];
    pppplStack_a0 = (long ****)0x0;
    if (param_5[2] != (long ****)0x0) {
      do {
        func_0x00010829c1e8();
        pppplStack_a0 = (long ****)extraout_x8_06;
      } while (extraout_w11_01 != 0);
    }
    uStack_90 = (long *****)0x0;
    fStack_178 = (float)*(int *)(pppplStack_a0 + 4);
    uStack_174 = (float)*(int *)((long)pppplStack_a0 + 0x24);
    uStack_180._0_4_ = 0;
    uStack_180._4_4_ = 0;
    ppppplVar13 = &pppplStack_f0;
    FUN_10818a9b0(ppppplVar13,&uStack_180);
    in_ZR = (int)ppppplVar13 == 0;
    FUN_10829bb10(&pppplStack_a0);
    func_0x00010829c474();
    ppppplVar13 = (long *****)param_5[2];
    if (ppppplVar13 != (long *****)0x0) {
      do {
        func_0x00010829c1d8();
      } while (extraout_w10_01 != 0);
    }
    pppplStack_c0 = (long ****)0x0;
    pppplVar14 = param_5[4];
    fStack_178 = SUB84(pppplVar14,0);
    uStack_174._0_2_ = (undefined2)((ulong)pppplVar14 >> 0x20);
    uStack_174._2_2_ = (undefined2)((ulong)pppplVar14 >> 0x30);
    uStack_180._0_4_ = (uint)param_5[3];
    uStack_180._4_4_ = (undefined4)((ulong)param_5[3] >> 0x20);
    psStack_170 = (section *)param_5[5];
    uStack_90 = ppppplVar13;
    FUN_1082e0e64(&pppplStack_b0);
    ppppplVar13 = (long *****)&uStack_90;
    FUN_10829bb10();
    func_0x00010829c440();
    if ((long *****)pppplStack_b0 == (long *****)0x0) goto LAB_108298fb4;
    func_0x00010829c230(0x3f800000);
    func_0x00010829c204();
    if (((ulong)ppplStack_158 & 1) != 0) {
      func_0x00010829c3c4();
      pppplStack_c0 = (long ****)extraout_x8_07;
      FUN_1082c8ba8(&uStack_90,&uStack_180,&pppplStack_c0);
      pppplVar14 = pppplStack_b0;
      pppplStack_b0 = (long ****)uStack_90;
      if ((long *****)pppplVar14 != (long *****)0x0) {
        func_0x00010829c1cc();
      }
      if ((long *****)pppplStack_c0 != (long *****)0x0) {
        func_0x00010829c1cc();
      }
      if (((ulong)param_5[9] & 1) == 0) {
        func_0x00010829c3c4();
        pppplStack_48 = param_5[2];
        pppplStack_40 = (long ****)extraout_x8_08;
        if ((long *****)pppplStack_48 == (long *****)0x0) {
          pppplStack_50 = (long ****)0x0;
          pppplStack_48 = (long ****)0x0;
        }
        else {
          ppppplVar13 = (long *****)(pppplStack_48 + 1);
          do {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
            if (bVar10) {
              *(int *)ppppplVar13 = *(int *)ppppplVar13 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          pppplStack_50 = (long ****)0x0;
          if (param_5[2] != (long ****)0x0) {
            do {
              func_0x00010829c1e8();
              pppplStack_50 = (long ****)extraout_x8_09;
            } while (extraout_w11_02 != 0);
          }
        }
        FUN_10828b650(&uStack_90,&pppplStack_40);
        pppplVar14 = pppplStack_b0;
        pppplStack_b0 = (long ****)uStack_90;
        if ((long *****)pppplVar14 != (long *****)0x0) {
          func_0x00010829c1cc();
        }
        func_0x000106f47184(&pppplStack_50);
        func_0x000106f47184(&pppplStack_48);
        if ((long *****)pppplStack_40 != (long *****)0x0) {
          func_0x00010829c1cc();
        }
        ppppplVar13 = (long *****)0x0;
        if (param_5[2] != (long ****)0x0) {
          do {
            func_0x00010829c1e8();
            ppppplVar13 = extraout_x8_17;
          } while (extraout_w11_06 != 0);
        }
        uStack_90 = ppppplVar13;
        if (0x1a < *(uint *)(ppppplVar13 + 3)) goto LAB_10829a670;
        in_ZR = (1 << (ulong)(*(uint *)(ppppplVar13 + 3) & 0x1f) & 0x7affffdU) == 0;
        if ((bool)in_ZR) {
          uVar18 = *(uint *)(param_6 + 3);
          param_7 = (long *****)(ulong)uVar18;
          func_0x00010829c474();
          in_ZR = uVar18 == 1;
          if (!(bool)in_ZR) {
            func_0x00010829c3c4();
            pppplStack_50 = (long ****)0x0;
            pppplStack_48 = (long ****)extraout_x8_19;
            FUN_108279f74(&uStack_90,&pppplStack_48,&pppplStack_50);
            ppppplVar17 = uStack_90;
            ppppplVar13 = (long *****)pppplStack_b0;
            uStack_90 = (long *****)0x0;
            pppplStack_b0 = (long ****)ppppplVar17;
            if (ppppplVar13 != (long *****)0x0) {
              func_0x00010829c1cc();
              func_0x00010829c350();
              if (ppppplVar13 != (long *****)0x0) {
                func_0x00010829c1cc();
              }
            }
            func_0x00010829c398();
            if (ppppplVar13 != (long *****)0x0) {
              func_0x00010829c1cc();
            }
            func_0x00010829c384();
            if (ppppplVar13 != (long *****)0x0) {
              func_0x00010829c1cc();
            }
          }
        }
        else {
          func_0x00010829c474();
        }
      }
      *extraout_x8 = pppplStack_b0;
      goto LAB_108298fb8;
    }
    *extraout_x8 = 0;
    func_0x00010829c334();
    goto joined_r0x000108299e44;
  case 8:
    ppppplVar13 = (long *****)param_5[7];
    if (ppppplVar13 != (long *****)0x0) {
      do {
        func_0x00010829c1d8();
      } while (extraout_w10_06 != 0);
    }
    uStack_90 = ppppplVar13;
    FUN_1083be4d4(&uStack_180,param_7,(int *)((long)param_5 + 0xc));
    FUN_108298f54(extraout_x8,ppppplVar13,param_6,&uStack_180);
    func_0x00010829c46c();
    goto LAB_108298fb8;
  case 9:
    FUN_10829bb5c(&pppplStack_f8,param_5);
    pppplVar14 = pppplStack_f8;
    uStack_180._0_4_ = 0;
    uStack_180._4_4_ = 0;
    psStack_170 = &section_100000100;
    fStack_178 = 1.4013e-45;
    uStack_174._0_2_ = 2;
    uStack_174._2_2_ = 0;
    puVar21 = &uStack_180;
    func_0x0001078bdb50(puVar21);
    FUN_10814bdf0(pppplVar14 + 0x225,&uStack_180,(long)pppplVar14 + 4,puVar21);
    if ((long ****)pppplVar14[0x225] != (long ****)0x0) {
      *(undefined1 *)((long)pppplVar14[0x225] + 0x59) = 2;
    }
    uStack_90 = (long *****)0x0;
    uStack_80 = 0x400000100;
    uStack_88 = (long *****)0x200000004;
    func_0x0001078bddd4(&uStack_180,&uStack_90);
    FUN_10810a400(&uStack_90);
    puVar21 = &uStack_180;
    func_0x0001078bdb50(puVar21);
    FUN_10814bdf0(pppplVar14 + 0x22c,&uStack_180,(long)pppplVar14 + 0x104,puVar21);
    if ((long ****)pppplVar14[0x22c] != (long ****)0x0) {
      *(undefined1 *)((long)pppplVar14[0x22c] + 0x59) = 2;
    }
    FUN_10810a400(&uStack_180);
    pppplVar14 = pppplStack_f8;
    uVar19 = *(undefined8 *)(*param_6 + 8);
    FUN_1082b8344(&uStack_180,uVar19,pppplStack_f8 + 0x225,&UNK_10f4835a1,0x34,0);
    pppplStack_f0 = (long ****)CONCAT44(uStack_180._4_4_,(uint)uStack_180);
    uStack_180._0_4_ = 0;
    uStack_180._4_4_ = 0;
    uStack_e8._0_6_ = CONCAT24((undefined2)uStack_174,fStack_178);
    func_0x00010829c3b4();
    FUN_1082b8344(&uStack_180,uVar19,pppplVar14 + 0x22c,&UNK_10f4835d6,0x2d,0);
    ppppplVar13 = (long *****)CONCAT44(uStack_180._4_4_,(uint)uStack_180);
    uStack_180._0_4_ = 0;
    uStack_180._4_4_ = 0;
    uStack_30 = fStack_178;
    uStack_2c = (undefined2)uStack_174;
    pppplStack_38 = (long ****)ppppplVar13;
    func_0x00010829c3b4();
    pppplVar14 = pppplStack_f0;
    if (((long *****)pppplStack_f0 == (long *****)0x0) || (ppppplVar13 == (long *****)0x0)) {
      *extraout_x8 = 0;
    }
    else {
      iVar29 = *(int *)((long)param_5 + 0xc);
      iVar2 = *(int *)(param_5 + 3);
      uVar11 = *(undefined1 *)(param_5 + 5);
      pppplStack_100 = pppplStack_f8;
      pppplStack_f8 = (long ****)0x0;
      pppplStack_f0 = (long ****)0x0;
      pplStack_98._0_6_ = SUB86(uStack_e8,0);
      pppplStack_38 = (long ****)0x0;
      uStack_a4 = uStack_2c;
      uStack_a8 = uStack_30;
      pppplStack_a0 = (long ****)0x0;
      uStack_180._0_4_ = (uint)pppplVar14;
      uStack_180._4_4_ = (undefined4)((ulong)pppplVar14 >> 0x20);
      fStack_178 = (float)(undefined4)uStack_e8;
      uStack_174._0_2_ = uStack_e8._4_2_;
      pppplStack_b0 = (long ****)ppppplVar13;
      func_0x00010829c2e4();
      func_0x00010829c314(&pppplStack_48,&uStack_180);
      func_0x00010829c3b4();
      func_0x00010829c3c4();
      uStack_88._0_6_ = CONCAT24(uStack_a4,uStack_a8);
      uStack_90 = extraout_x8_01;
      func_0x00010829c2e4();
      func_0x00010829c314(&pppplStack_50,&uStack_90);
      FUN_1082764bc(&uStack_90);
      param_5 = (long *****)0x50;
      FUN_1082a37b0();
      pppplStack_c0 = pppplStack_48;
      pppplVar27 = pppplStack_50;
      pppplVar14 = pppplStack_100;
      pppplStack_100 = (long ****)0x0;
      pppplStack_50 = (long ****)0x0;
      pppplStack_48 = (long ****)0x0;
      *(int *)(param_5 + 1) = 0x27;
      param_5[3] = (long ****)(param_5 + 2);
      param_5[4] = (long ****)0x200000000;
      param_5[5] = (long ****)0x0;
      param_5[6] = (long ****)0x0;
      *(undefined1 *)(param_5 + 7) = 0;
      *param_5 = (long ****)&PTR_DAT_110a380f0;
      *(int *)((long)param_5 + 0x3c) = iVar29;
      *(int *)(param_5 + 8) = iVar2;
      *(undefined1 *)((long)param_5 + 0x44) = uVar11;
      param_5[9] = pppplVar14;
      pppplStack_58 = (long ****)0x0;
      ppppplVar13 = param_5;
      FUN_108296280();
      func_0x00010829c4ec();
      if (ppppplVar13 != (long *****)0x0) {
        func_0x00010829c1cc();
      }
      pppplStack_40 = pppplVar27;
      ppppplVar13 = param_5;
      FUN_108296280(param_5,&pppplStack_40,4);
      func_0x00010829c4d4();
      if (ppppplVar13 != (long *****)0x0) {
        func_0x00010829c1cc();
      }
      *(uint *)(param_5 + 6) = *(uint *)(param_5 + 6) | 0x10;
      ppppplVar13 = &pppplStack_58;
      FUN_10829c12c();
      func_0x00010829c398();
      if (ppppplVar13 != (long *****)0x0) {
        func_0x00010829c1cc();
      }
      func_0x00010829c384();
      if (ppppplVar13 != (long *****)0x0) {
        func_0x00010829c1cc();
      }
      func_0x00010829c37c();
      FUN_1082764bc(&pppplStack_a0);
      FUN_10829c12c(&pppplStack_100);
      func_0x00010829c230(0x3f800000);
      func_0x00010829c204();
      in_ZR = (char)ppplStack_158 == '\x01';
      if ((bool)in_ZR) {
        uStack_90 = param_5;
        func_0x00010829c3a4();
        if (uStack_90 == (long *****)0x0) goto code_r0x000108299e68;
        func_0x00010829c214();
        pcVar9 = extraout_x8_02;
      }
      else {
        *extraout_x8 = 0;
        func_0x00010829c2c4();
        pcVar9 = extraout_x8_15;
      }
      (*pcVar9)();
    }
code_r0x000108299e68:
    FUN_1082764bc(&pppplStack_38);
    func_0x00010829c2b0();
    FUN_10829c12c(&pppplStack_f8);
    goto LAB_108298fb8;
  case 10:
    uVar18 = *(uint *)(param_6[1] + 0x10);
    in_ZR = uVar18 == 0x23;
    if (0x23 < uVar18) goto LAB_10829a670;
    uVar22 = 4;
    switch(uVar18) {
    default:
      goto code_r0x0001082993d8;
    case 1:
    case 2:
    case 0xd:
    case 0xe:
    case 0x18:
      break;
    case 4:
      uVar18 = 3;
      break;
    case 5:
      uVar18 = 4;
      break;
    case 6:
      uVar18 = 0x19;
      break;
    case 7:
      uVar18 = 5;
      break;
    case 8:
      uVar18 = 0x13;
      break;
    case 9:
      uVar18 = 6;
      break;
    case 10:
      uVar18 = 7;
      break;
    case 0xb:
      uVar18 = 8;
      break;
    case 0xc:
      uVar18 = 9;
      break;
    case 0x10:
      uVar18 = 0x14;
      break;
    case 0x11:
      uVar18 = 0x10;
      break;
    case 0x12:
      uVar18 = 0x11;
      break;
    case 0x13:
      uVar18 = 0xf;
      break;
    case 0x14:
      uVar18 = 0x12;
      break;
    case 0x15:
      uVar18 = 0x16;
      break;
    case 0x16:
      uVar18 = 0x17;
      break;
    case 0x17:
      uVar18 = 0x15;
      break;
    case 0x1e:
      uVar18 = 0x1a;
    }
    uVar22 = uVar18;
code_r0x0001082993d8:
    unaff_x24 = *(long ******)(*param_6 + 8);
    FUN_108343a94(&pppplStack_40);
    if (*(long *)param_6[1] != 0) {
      do {
        func_0x00010829c1d8();
      } while (extraout_w10_00 != 0);
      ppppplVar13 = extraout_x8_03;
      FUN_10829ba90(pppplStack_40);
      pppplStack_40 = (long ****)ppppplVar13;
    }
    func_0x00010829c1b8(param_5);
    pppplStack_f0 = (long ****)CONCAT44((int)param_2,(int)param_1);
    uStack_e8 = (long ****)CONCAT44(param_4,param_3);
    func_0x00010829c1c4(&uStack_90,param_7);
    ppppplVar13 = (long *****)pppplStack_40;
    FUN_1083bd408(&uStack_180,&pppplStack_f0,&uStack_90,uVar22,pppplStack_40,
                  *(undefined4 *)((long)unaff_x24[2][0x17] + 0x3c),param_6[2]);
    if (((uint)uStack_180 & 1) == 0) {
      *extraout_x8 = 0;
    }
    else {
      ppppplVar13 = unaff_x24;
      FUN_10827b43c(unaff_x24,(ulong)ppplStack_140 & 0xffffffff);
      if (((ulong)ppppplVar13 & 1) == 0) {
        func_0x0001078bdd84(&uStack_90,&ppplStack_148,4);
        func_0x0001078bddd4(&ppplStack_148,&uStack_90);
        FUN_10810a400(&uStack_90);
      }
      if ((bRam000000011372a620 & 1) == 0) {
        iVar29 = 0x1372a620;
        ___cxa_guard_acquire();
        if (iVar29 != 0) {
          func_0x000108320d60();
          iRam000000011372a588 = iVar29;
          ___cxa_guard_release(0x11372a620);
        }
      }
      FUN_10827a1fc(&uStack_90);
      ppppplVar13 = (long *****)pppplStack_40;
      uVar28 = (undefined4)param_2;
      uVar23 = (undefined4)param_1;
      uVar19 = *(undefined8 *)((long)pppplStack_40 + 4);
      pppplVar14 = (long ****)0x0;
      if (param_5[2] != (long ****)0x0) {
        do {
          func_0x00010829c1e8();
          uVar28 = (undefined4)param_2;
          uVar23 = (undefined4)param_1;
          pppplVar14 = extraout_x8_04;
        } while (extraout_w11 != 0);
      }
      uVar3 = *(undefined4 *)((long)pppplVar14 + 0xc);
      pppplStack_f0 = pppplVar14;
      func_0x00010829c1b8(param_5);
      ppplVar6 = (long ***)CONCAT44(fStack_178,uStack_180._4_4_);
      pplStack_98 = pplStack_128;
      pppplStack_a0 = pppplStack_130;
      func_0x00010829c450();
      FUN_10827a280(&pppplStack_48,&uStack_90,iRam000000011372a588,0xe);
      puStack_60 = &UNK_10f483604;
      pppplVar14 = (long ****)*pppplStack_48;
      ppplVar26 = (long ***)NEON_rev64(uVar19,4);
      pppplVar14[1] = ppplVar26;
      *(uint *)(pppplVar14 + 2) = uVar22;
      *(undefined4 *)((long)pppplVar14 + 0x14) = uVar3;
      *(undefined4 *)(pppplVar14 + 3) = uVar23;
      *(undefined4 *)((long)pppplVar14 + 0x1c) = uVar28;
      *(undefined4 *)(pppplVar14 + 4) = param_3;
      *(undefined4 *)((long)pppplVar14 + 0x24) = param_4;
      pppplVar14[5] = ppplVar6;
      pppplVar14[7] = (long ***)pplStack_98;
      pppplVar14[6] = (long ***)pppplStack_a0;
      FUN_10827a344();
      pppplVar14 = unaff_x24[9];
      pppplStack_b0 = (long ****)0x0;
      uStack_a8 = 0;
      uStack_a4 = 0x3210;
      FUN_1082a4c48(&pppplStack_38,pppplVar14,&uStack_90,1);
      if ((long *****)pppplStack_38 == (long *****)0x0) {
        FUN_10830af78(&pppplStack_50,unaff_x24,1,&ppplStack_148,0,0,&pppplStack_130,0,0);
        ppppplVar17 = (long *****)param_5[2];
        if (ppppplVar17 != (long *****)0x0) {
          do {
            func_0x00010829c1d8();
          } while (extraout_w10_11 != 0);
        }
        pppplStack_f0 = (long ****)ppppplVar17;
        FUN_1083bd64c(&pppplStack_c0,&uStack_180,&pppplStack_50);
        func_0x00010829c450();
        func_0x000106f471d4(&pppplStack_50);
        pppplVar27 = pppplStack_c0;
        if ((long *****)pppplStack_c0 == (long *****)0x0) {
          *extraout_x8 = 0;
        }
        else {
          do {
            func_0x00010829c1d8();
          } while (extraout_w10_12 != 0);
          pppplStack_58 = pppplVar27;
          FUN_1082e0d0c(&pppplStack_f0,unaff_x24,pppplVar27,0,0);
          FUN_10829bb10(&pppplStack_58);
          func_0x00010829c460();
          if ((long *****)pppplStack_b0 == (long *****)0x0) {
            ppppplVar17 = (long *****)0x0;
          }
          else {
            ppppplVar17 = (long *****)pppplStack_b0;
            (*(code *)(*pppplStack_b0)[3])();
          }
          FUN_1082a49e8(pppplVar14,&uStack_90,ppppplVar17);
          func_0x00010829c2b0();
        }
        func_0x00010829c440();
        if ((long *****)pppplVar27 != (long *****)0x0) goto code_r0x00010829a320;
        func_0x00010829c448();
      }
      else {
        do {
          func_0x00010829c1e8();
        } while (extraout_w11_00 != 0);
        pppplStack_f0 = (long ****)((long)extraout_x8_05 + *(long *)(*extraout_x8_05 + -0x18));
        pppplStack_50 = (long ****)0x0;
        uStack_e8 = (long ****)CONCAT26((short)((ulong)uStack_e8 >> 0x30),0x321000000000);
        func_0x00010829c460();
        func_0x00010829c2b0();
        FUN_1082764bc(&pppplStack_50);
code_r0x00010829a320:
        func_0x00010829c448();
        func_0x00010829c3c4();
        uStack_b8 = uStack_a8;
        uStack_b4 = uStack_a4;
        pppplStack_c0 = (long ****)extraout_x8_18;
        func_0x00010829c2e4();
        FUN_1082cde38(&pppplStack_58,&pppplStack_c0,2);
        FUN_1082764bc(&pppplStack_c0);
        func_0x00010815f6c0(&pppplStack_38,uStack_180._4_4_,fStack_178);
        ppppplVar17 = param_7;
        FUN_1083be44c(&pppplStack_f0,param_7,&pppplStack_38);
        pppplVar14 = pppplStack_58;
        if ((bStack_c8 & 1) == 0) {
          *extraout_x8 = 0;
        }
        else {
          pppplStack_58 = (long ****)0x0;
          pppplStack_f8 = pppplVar14;
          FUN_1082c8ba8(extraout_x8,&pppplStack_f0,&pppplStack_f8);
          ppppplVar17 = (long *****)pppplStack_f8;
          if ((long *****)pppplStack_f8 != (long *****)0x0) {
            func_0x00010829c1cc();
          }
        }
        func_0x00010829c51c();
        if (ppppplVar17 != (long *****)0x0) {
          func_0x00010829c1cc();
        }
      }
      func_0x00010829c37c();
      FUN_10827a320(&pppplStack_48);
      func_0x00010827a384(&uStack_90);
    }
    FUN_10810a400(&ppplStack_148);
code_r0x00010829a400:
    FUN_10829ba90(ppppplVar13);
    goto LAB_108298fb8;
  case 0xb:
    lVar20 = *(long *)(*(long *)(*(long *)(*param_6 + 8) + 0x10) + 0xb8);
    func_0x00010829c36c();
    iVar29 = *(int *)(lVar20 + 0xc);
    in_ZR = *(int *)(ppppplVar13[4][1] + 6) == iVar29;
    if (!(bool)in_ZR && iVar29 <= *(int *)(ppppplVar13[4][1] + 6)) goto LAB_108298fb4;
    func_0x00010829c36c();
    pppplVar14 = ppppplVar13[8];
    pppplVar27 = ppppplVar13[9];
    FUN_1083bdc8c(&pppplStack_a0,param_5,*(undefined8 *)param_6[1]);
    FUN_10839325c(&pppplStack_38,pppplVar14,((long)pppplVar27 - (long)pppplVar14) / 0x28,
                  &pppplStack_a0,*(undefined8 *)param_6[1]);
    FUN_108154c48(&pppplStack_a0);
    pppplStack_b0 = (long ****)0x0;
    lStack_e0 = param_6[2];
    uStack_e8 = (long ****)param_6[1];
    pppplStack_f0 = (long ****)*param_6;
    uStack_d8 = 1;
    pppplStack_c0 = (long ****)0x0;
    if (param_5[2] != (long ****)0x0) {
      do {
        func_0x00010829c1e8();
        pppplStack_c0 = (long ****)extraout_x8_11;
      } while (extraout_w11_04 != 0);
    }
    pppplStack_40 = pppplStack_38;
    pppplStack_38 = (long ****)0x0;
    pppplStack_50 = (long ****)0x0;
    pppplStack_48 = (long ****)0x0;
    FUN_10829b88c(&uStack_180,&pppplStack_c0,&UNK_10f483619,&pppplStack_40,&pppplStack_48,
                  &pppplStack_50,param_5[9],(long)param_5[10] - (long)param_5[9] >> 3,&pppplStack_f0
                 );
    uStack_90 = &pppplStack_f8;
    uStack_88 = &pppplStack_b0;
    FUN_10827af78(&uStack_90,&uStack_180);
    lVar20 = CONCAT26(uStack_174._2_2_,CONCAT24((undefined2)uStack_174,fStack_178));
    fStack_178 = 0.0;
    uStack_174._0_2_ = 0;
    uStack_174._2_2_ = 0;
    if (lVar20 != 0) {
      func_0x00010829c1cc();
    }
    if ((long *****)pppplStack_50 != (long *****)0x0) {
      func_0x00010829c1cc();
    }
    if ((long *****)pppplStack_48 != (long *****)0x0) {
      func_0x00010829c1cc();
    }
    FUN_108154c48(&pppplStack_40);
    ppppplVar13 = &pppplStack_c0;
    FUN_108154c00();
    if (((ulong)pppplStack_f8 & 1) != 0) {
      func_0x00010829c230(0x3f800000);
      func_0x00010829c204();
      if (((ulong)ppplStack_158 & 1) != 0) {
        func_0x00010829c3c4();
        pppplStack_58 = (long ****)extraout_x8_12;
        FUN_1082c8ba8(extraout_x8,&uStack_180,&pppplStack_58);
        ppppplVar13 = (long *****)pppplStack_58;
        if ((long *****)pppplStack_58 != (long *****)0x0) {
          func_0x00010829c1cc();
        }
        goto code_r0x000108299e0c;
      }
    }
    *extraout_x8 = 0;
code_r0x000108299e0c:
    func_0x00010829c334();
    if (ppppplVar13 != (long *****)0x0) {
      func_0x00010829c1cc();
    }
    FUN_108154c48(&pppplStack_38);
    goto LAB_108298fb8;
  case 0xe:
    puVar21 = (undefined8 *)param_6[1];
    ppppplVar13 = (long *****)*puVar21;
    if (ppppplVar13 == (long *****)0x0) {
      FUN_108343a94(&uStack_180);
      ppppplVar13 = (long *****)CONCAT44(uStack_180._4_4_,(uint)uStack_180);
      FUN_10829ba90(0);
      uVar23 = *(undefined4 *)(puVar21 + 2);
      uVar28 = *(undefined4 *)((long)puVar21 + 0x14);
      if (ppppplVar13 != (long *****)0x0) goto code_r0x000108299cc0;
    }
    else {
      do {
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
        if (bVar10) {
          *(int *)ppppplVar13 = *(int *)ppppplVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      uVar23 = *(undefined4 *)(puVar21 + 2);
      uVar28 = *(undefined4 *)((long)puVar21 + 0x14);
code_r0x000108299cc0:
      do {
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
        if (bVar10) {
          *(int *)ppppplVar13 = *(int *)ppppplVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    pppplStack_38 = (long ****)ppppplVar13;
    FUN_10828adb8(&uStack_90,uVar23,uVar28,&pppplStack_38);
    FUN_10829ba90(pppplStack_38);
    pppplStack_a0 = (long ****)0x0;
    if (param_5[3] != (long ****)0x0) {
      do {
        func_0x00010829c1d8();
        pppplStack_a0 = (long ****)extraout_x8_14;
      } while (extraout_w10_08 != 0);
    }
    unaff_x24 = &pppplStack_f0;
    FUN_10828adb8(&pppplStack_f0);
    FUN_10829ba90(pppplStack_a0);
    psStack_170 = (section *)param_6[2];
    uStack_180._0_4_ = (uint)*param_6;
    uStack_180._4_4_ = (undefined4)((ulong)*param_6 >> 0x20);
    fStack_178 = SUB84(unaff_x24,0);
    uStack_174._0_2_ = (undefined2)((ulong)unaff_x24 >> 0x20);
    uStack_174._2_2_ = (undefined2)((ulong)unaff_x24 >> 0x30);
    ppplStack_168 = (long ***)CONCAT44(ppplStack_168._4_4_,(int)param_6[3]);
    pppplStack_c0 = param_5[2];
    if ((long *****)pppplStack_c0 != (long *****)0x0) {
      do {
        func_0x00010829c1d8();
      } while (extraout_w10_09 != 0);
    }
    FUN_108298f54(&pppplStack_b0);
    func_0x000106f47224(&pppplStack_c0);
    pppplVar14 = pppplStack_b0;
    if ((long *****)pppplStack_b0 == (long *****)0x0) {
      *extraout_x8 = 0;
    }
    else {
      pppplStack_b0 = (long ****)0x0;
      pppplStack_40 = pppplVar14;
      pppplStack_50 = (long ****)0x0;
      FUN_10828b764(&pppplStack_48,&pppplStack_50,&uStack_90,&pppplStack_f0);
      ppppplVar17 = &pppplStack_40;
      FUN_108296eb0(&pppplStack_c0,ppppplVar17,&pppplStack_48);
      func_0x00010829c384();
      if (ppppplVar17 != (long *****)0x0) {
        func_0x00010829c1cc();
      }
      func_0x00010829c398();
      if (ppppplVar17 != (long *****)0x0) {
        func_0x00010829c1cc();
      }
      func_0x00010829c4d4();
      if (ppppplVar17 != (long *****)0x0) {
        func_0x00010829c1cc();
      }
      pppplStack_58 = pppplStack_c0;
      pppplStack_c0 = (long ****)0x0;
      ppppplVar17 = &pppplStack_58;
      FUN_10828b764(extraout_x8,ppppplVar17,&pppplStack_f0,&uStack_90);
      func_0x00010829c51c();
      if (ppppplVar17 != (long *****)0x0) {
        func_0x00010829c1cc();
      }
      func_0x00010829c4ec();
      if (ppppplVar17 != (long *****)0x0) {
        func_0x00010829c1cc();
      }
      func_0x00010829c334();
      if (ppppplVar17 != (long *****)0x0) {
        func_0x00010829c1cc();
      }
    }
    func_0x00010828afb8(&pppplStack_f0);
    func_0x00010828afb8(&uStack_90);
    goto code_r0x00010829a400;
  default:
LAB_10829a670:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10829a674);
    (*pcVar9)();
  }
  if (ppppplVar13 != (long *****)0x0) {
    func_0x00010829c1cc();
  }
code_r0x000108299fc8:
  func_0x00010829c4f8();
  do {
    if (ppppplVar13 != (long *****)0x0) {
LAB_10829a2fc:
      func_0x00010829c1cc();
    }
LAB_108298fb8:
    while( true ) {
      func_0x00010829c258(uStack_10);
      uVar11 = 0;
      if ((bool)in_ZR) {
        return;
      }
LAB_10829a504:
      ___stack_chk_fail();
      in_ZR = uVar11;
code_r0x00010829a508:
      iVar29 = 0x1372a5c8;
      ___cxa_guard_acquire();
      if (iVar29 != 0) {
        func_0x00010829c220();
        func_0x00010829c3d0();
        func_0x00010829c2d4();
        func_0x00010829c1f8(0x11372a5c0);
      }
LAB_1082997c0:
      puVar21 = (undefined8 *)0x113254e20;
      ppppplVar13 = (long *****)param_5[2];
      if (ppppplVar13 != (long *****)0x0) {
        do {
          func_0x00010829c1e8();
          puVar21 = extraout_x8_10;
        } while (extraout_w11_03 != 0);
      }
      uStack_108 = *(undefined1 *)(param_7 + 0xf);
      pppplVar14 = param_7[1];
      ppplStack_168 = (long ***)param_7[3];
      psStack_170 = (section *)param_7[2];
      fStack_178 = SUB84(pppplVar14,0);
      uStack_174._0_2_ = (undefined2)((ulong)pppplVar14 >> 0x20);
      uStack_174._2_2_ = (undefined2)((ulong)pppplVar14 >> 0x30);
      uStack_180._0_4_ = (uint)*param_7;
      uStack_180._4_4_ = (undefined4)((ulong)*param_7 >> 0x20);
      ppplStack_160 = (long ***)param_7[4];
      ppplStack_150 = (long ***)param_7[6];
      ppplStack_158 = (long ***)param_7[5];
      ppplStack_140 = (long ***)param_7[8];
      ppplStack_148 = (long ***)param_7[7];
      ppplStack_138 = (long ***)param_7[9];
      uStack_110 = puVar21[4];
      pplStack_128 = (long **)puVar21[1];
      pppplStack_130 = (long ****)*puVar21;
      uStack_118 = puVar21[3];
      uStack_120 = puVar21[2];
      uStack_107 = 0;
      uStack_90 = ppppplVar13;
      FUN_108298f54(&pppplStack_f0);
      func_0x00010829c46c();
      ppppplVar13 = ppppplRam000000011372a5c0;
      unaff_x20 = param_7;
      unaff_x21 = param_5;
      if ((long *****)pppplStack_f0 != (long *****)0x0) break;
LAB_108298fb4:
      param_5 = unaff_x21;
      param_7 = unaff_x20;
      *extraout_x8 = 0;
    }
    uVar18 = *(uint *)(pppplStack_f0 + 6);
    pppplVar27 = param_5[4];
    pppplVar14 = param_5[3];
    param_5 = ppppplRam000000011372a5c0;
    FUN_108287aa8();
    func_0x00010829c30c();
    if (ppppplVar13 != (long *****)0x0) {
      do {
        func_0x00010829c1d8();
      } while (extraout_w10_04 != 0);
    }
    uStack_90 = ppppplVar13;
    FUN_1082cc5c8(param_5,&uStack_90,&UNK_10f482f1e,uVar18 & 3);
    func_0x00010829c304();
    pppplVar7 = pppplStack_f0;
    pppplStack_f0 = (long ****)0x0;
    uStack_180._0_4_ = (uint)pppplVar7;
    uStack_180._4_4_ = (undefined4)((ulong)pppplVar7 >> 0x20);
    FUN_1082cc4bc(param_5,&uStack_180,1);
    if (CONCAT44(uStack_180._4_4_,(uint)uStack_180) != 0) {
      func_0x00010829c1cc();
    }
    param_5[0xe] = pppplVar27;
    param_5[0xd] = pppplVar14;
    ppppplVar13 = (long *****)pppplStack_f0;
    ppppplVar17 = param_5;
    if ((long *****)pppplStack_f0 != (long *****)0x0) {
      pppplStack_f0 = (long ****)param_5;
      func_0x00010829c1cc();
      ppppplVar17 = (long *****)pppplStack_f0;
    }
    pppplStack_f0 = (long ****)ppppplVar17;
    func_0x00010829c230(unaff_x24[0xe4]);
    func_0x00010829c204();
    pppplVar14 = pppplStack_f0;
    if (((ulong)ppplStack_158 & 1) == 0) {
      *extraout_x8 = 0;
    }
    else {
      pppplStack_f0 = (long ****)0x0;
      uStack_90 = (long *****)pppplVar14;
      func_0x00010829c3a4();
      ppppplVar13 = uStack_90;
      if (uStack_90 != (long *****)0x0) {
        func_0x00010829c1cc();
      }
    }
    func_0x00010829c510();
  } while( true );
}



/* Entry: 10829abf4; end: 10829b567;  */

void FUN_10829abf4(undefined1 *param_1,undefined1 *param_2,long *param_3,long *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 *extraout_x8;
  undefined1 *extraout_x8_00;
  long extraout_x8_01;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  int extraout_w11_00;
  int *piVar7;
  long lVar8;
  long *unaff_x21;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_98;
  long lStack_78;
  undefined1 auStack_6c [4];
  
  if (param_3 == (long *)0x0) {
LAB_10829ac64:
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  plVar5 = param_3;
  (**(code **)(*param_3 + 0x48))();
  switch((ulong)plVar5 & 0xffffffff) {
  case 0:
    goto LAB_10829ac64;
  case 1:
    func_0x00010829c4b4();
    if (*(int *)((long)param_3 + 0x1c) == 2) {
      func_0x00010829c434();
      *(long **)(param_1 + 8) = unaff_x21;
      return;
    }
    uVar11 = *(undefined8 *)((long)param_3 + 0x14);
    puVar9 = *(undefined1 **)((long)param_3 + 0xc);
    FUN_108343afc();
    FUN_108344004(&puStack_140,plVar5,3,*param_5,2);
    FUN_1083441a4(&puStack_140,&stack0xffffffffffffff60);
    uStack_98._0_4_ = (undefined4)uVar11;
    uStack_98._4_4_ = (undefined4)((ulong)uVar11 >> 0x20);
    FUN_1082963dc(&puStack_140,(ulong)puVar9 & 0xffffffff,(int)((ulong)puVar9 >> 0x20),
                  (undefined4)uStack_98,uStack_98._4_4_);
    puStack_b8 = puStack_140;
    FUN_1082c7180(&stack0xffffffffffffff60,&puStack_b8,&stack0xffffffffffffff98,
                  *(undefined4 *)((long)param_3 + 0x1c),1);
    if (unaff_x21 != (long *)0x0) {
      func_0x00010829c1cc();
    }
    if (puStack_b8 != (undefined1 *)0x0) {
      func_0x00010829c1cc();
    }
    goto code_r0x00010829af94;
  case 2:
    lVar10 = *param_4;
    *param_4 = 0;
    lVar8 = param_3[2];
    if (lVar8 != 0) {
      do {
        func_0x00010829c3e4();
      } while (extraout_w9 != 0);
    }
    piVar7 = (int *)param_3[3];
    if (piVar7 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_10828b650(&puStack_140,&stack0xffffffffffffff60,lVar8,2,piVar7,2);
    func_0x00010829c434();
    *(undefined1 **)(param_1 + 8) = puStack_140;
    FUN_10829ba90(piVar7);
    func_0x00010829c390();
    if (lVar10 == 0) {
      return;
    }
    goto code_r0x00010829b110;
  case 3:
    func_0x00010829c4b4();
    if (unaff_x21 == (long *)0x0) {
      puStack_b8 = (undefined1 *)0x0;
    }
    else {
      (**(code **)(*unaff_x21 + 0x18))(&puStack_b8);
    }
    uVar6 = param_3[3];
    if (uVar6 != 0) {
      do {
        func_0x00010829c1d8();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010829c340(&puStack_140);
    if (unaff_x21 != (long *)0x0) {
      func_0x00010829c1cc();
    }
    FUN_10829ba9c(&stack0xffffffffffffff60);
    if (((byte)puStack_140 & 1) == 0) {
      func_0x00010829c4c0();
joined_r0x00010829b0fc:
      if (puStack_138 != (undefined8 *)0x0) {
        func_0x00010829c1cc();
      }
    }
    else {
      lVar10 = param_3[2];
      if (lVar10 != 0) {
        do {
          func_0x00010829c1d8();
        } while (extraout_w10_01 != 0);
      }
      lStack_78 = lVar10;
      func_0x00010829c340(&stack0xffffffffffffff60);
      if (puStack_138 != (undefined8 *)0x0) {
        func_0x00010829c1cc();
      }
      FUN_10829ba9c(&lStack_78);
      if ((uVar6 & 1) == 0) {
        func_0x00010829c4c0();
        puStack_138 = (undefined8 *)uStack_98;
        goto joined_r0x00010829b0fc;
      }
      func_0x00010829c4a8(uStack_98);
    }
    puVar9 = puStack_b8;
    puStack_b8 = (undefined1 *)0x0;
    goto joined_r0x00010829adec;
  case 4:
    *param_4 = 0;
    if ((bRam000000011372a598 & 1) == 0) {
      iVar4 = 0x1372a598;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        func_0x00010829c220();
        func_0x00010829c2d4(FUN_108394238,&UNK_10f482d90);
        func_0x00010829c1f8(0x11372a590);
      }
    }
    puVar9 = puRam000000011372a590;
    FUN_10829091c(&puStack_140,puRam000000011372a590,&UNK_10f482e09,&stack0xffffffffffffff60,0);
    *param_1 = 1;
    break;
  case 5:
    func_0x00010829c4b4();
    if (*(char *)((long)param_3 + 0x5d) == '\x01') {
      if ((bRam000000011372a5a8 & 1) == 0) {
        iVar4 = 0x1372a5a8;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          func_0x00010829c220();
          func_0x00010829c2d4(FUN_108394238,&UNK_10f482e15);
          func_0x00010829c1f8(0x11372a5a0);
        }
      }
      lVar10 = lRam000000011372a5a0;
      func_0x00010829c35c(lRam000000011372a5a0,&UNK_10f482e57);
      func_0x00010829c3f4();
      if (lVar10 != 0) {
        func_0x00010829c1cc();
      }
      puStack_b8 = puStack_140;
      FUN_10829718c(&puStack_140,&puStack_b8,(long)param_3 + 0xc,0,0,0);
      puVar9 = puStack_b8;
      puStack_140 = (undefined1 *)0x0;
      puStack_b8 = (undefined1 *)0x0;
      if (puVar9 != (undefined1 *)0x0) {
        func_0x00010829c1cc();
      }
      if ((bRam000000011372a5b8 & 1) == 0) {
        iVar4 = 0x1372a5b8;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          func_0x00010829c220();
          func_0x00010829c2d4(FUN_108394238,&UNK_10f482e60);
          func_0x00010829c1f8(0x11372a5b0);
        }
      }
      lVar10 = lRam000000011372a5b0;
      func_0x00010829c35c(lRam000000011372a5b0,&UNK_10f482ea2);
      puVar9 = puStack_140;
      func_0x00010829c3f4();
      if (lVar10 != 0) {
        func_0x00010829c1cc();
      }
      func_0x00010829c434();
      *(undefined1 **)(param_1 + 8) = puVar9;
      return;
    }
    if (*(char *)((long)param_3 + 0x5d) != '\0') goto LAB_10829b2ac;
    puVar9 = &stack0xffffffffffffff60;
    FUN_10829718c(&puStack_140,puVar9,(long)param_3 + 0xc,1,*(undefined1 *)((long)param_3 + 0x5e),1)
    ;
    *param_1 = 1;
    break;
  case 6:
    func_0x00010829c4b4();
    puStack_140 = (undefined1 *)0x0;
    if (param_3[2] != 0) {
      do {
        func_0x00010829c1e8();
        puStack_140 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    puStack_b8 = (undefined1 *)0x0;
    if (param_3[3] != 0) {
      do {
        func_0x00010829c1d8();
        puStack_b8 = extraout_x8_00;
      } while (extraout_w10 != 0);
    }
    FUN_10839325c(&stack0xffffffffffffff60);
    FUN_108154c48(&puStack_b8);
    func_0x00010829c484();
    uStack_128 = 1;
    puStack_140 = param_2;
    puStack_138 = param_5;
    uStack_130 = param_6;
    if (param_3[2] != 0) {
      do {
        func_0x00010829c1e8();
      } while (extraout_w11_00 != 0);
    }
    lStack_a8 = 0;
    FUN_10829b88c(param_1,&stack0xffffffffffffff98,&UNK_10f482eab,&lStack_78,
                  &stack0xffffffffffffff80,&lStack_a8,param_3[4],param_3[5] - param_3[4] >> 3,
                  &puStack_140);
    if (lStack_a8 != 0) {
      func_0x00010829c1cc();
    }
    if (unaff_x21 != (long *)0x0) {
      func_0x00010829c1cc();
    }
    FUN_108154c48(&lStack_78);
    FUN_108154c00(&stack0xffffffffffffff98);
    FUN_108154c48(&stack0xffffffffffffff60);
    return;
  case 7:
    lVar10 = *param_4;
    *param_4 = 0;
    FUN_1082c7910(&puStack_140,&stack0xffffffffffffff60,*(undefined8 *)(param_2 + 8),
                  param_3[2] + 0x10);
    puVar9 = puStack_140;
    if (lVar10 != 0) {
      func_0x00010829c1cc();
      puVar9 = puStack_140;
    }
code_r0x00010829af94:
    func_0x00010829c4a8(puVar9);
    return;
  case 8:
    lVar10 = *param_4;
    *param_4 = 0;
    puVar9 = (undefined1 *)*param_5;
    if (puVar9 == (undefined1 *)0x0) {
      FUN_108343a94(&puStack_140);
      FUN_10829ba90(0);
      puVar9 = puStack_140;
    }
    else {
      do {
        func_0x00010829c3e4();
      } while (extraout_w9_00 != 0);
    }
    FUN_1083aeaf8(&lStack_78,param_3 + 3,&stack0xffffffffffffff98,auStack_6c);
    if (puVar9 != (undefined1 *)0x0) {
      do {
        func_0x00010829c3e4();
      } while (extraout_w9_01 != 0);
    }
    FUN_10828adb8(&puStack_140);
    FUN_10829ba90(puVar9);
    lStack_a8 = 0;
    if (lStack_78 != 0) {
      do {
        func_0x00010829c1d8();
        lStack_a8 = extraout_x8_01;
      } while (extraout_w10_02 != 0);
    }
    FUN_10828adb8(&stack0xffffffffffffff60);
    FUN_10829ba90(lStack_a8);
    lVar8 = param_3[2];
    if (lVar8 != 0) {
      do {
        func_0x00010829c1d8();
      } while (extraout_w10_03 != 0);
    }
    lStack_d0 = lVar10;
    lStack_c0 = lVar8;
    FUN_10828b764(&lStack_c8,&lStack_d0,&puStack_140,&stack0xffffffffffffff60);
    FUN_10829abf4(&puStack_b8,param_2,lVar8,&lStack_c8,&stack0xffffffffffffff60,param_6);
    lVar10 = lStack_c8;
    lStack_c8 = 0;
    if (lVar10 != 0) {
      func_0x00010829c1cc();
    }
    lVar10 = lStack_d0;
    lStack_d0 = 0;
    if (lVar10 != 0) {
      func_0x00010829c1cc();
    }
    FUN_108115b2c(&lStack_c0);
    if ((char)puStack_b8 == '\x01') {
      lStack_d8 = lStack_b0;
      FUN_10828b764(&lStack_c0,&lStack_d8,&stack0xffffffffffffff60,&puStack_140);
      func_0x00010829c434();
      *(long *)(param_1 + 8) = lStack_c0;
      if (lStack_d8 != 0) {
        func_0x00010829c1cc();
      }
    }
    else {
      *param_1 = 0;
      *(long *)(param_1 + 8) = lStack_b0;
    }
    func_0x00010828afb8(&stack0xffffffffffffff60);
    func_0x00010828afb8(&puStack_140);
    FUN_10829ba90(lStack_78);
    func_0x00010829c390();
    return;
  default:
LAB_10829b2ac:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10829b2b0);
    (*pcVar3)();
  }
  *(undefined1 **)(param_1 + 8) = puStack_140;
  func_0x00010829c3f4();
joined_r0x00010829adec:
  if (puVar9 == (undefined1 *)0x0) {
    return;
  }
code_r0x00010829b110:
  func_0x00010829c1cc();
  return;
}



/* Entry: 10829b568; end: 10829b837;  */

void FUN_10829b568(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  code *extraout_x8;
  long lVar8;
  code *extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  long lVar9;
  long lVar10;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_2 == (long *)0x0) {
    *param_1 = 0;
    return;
  }
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x50))();
  if ((int)plVar7 == 1) {
    lVar9 = *param_3;
    *param_3 = 0;
    lVar10 = *param_4;
    *param_4 = 0;
    lVar8 = *(long *)(*(long *)(*(long *)(*param_5 + 8) + 0x10) + 0xb8);
    lStack_80 = param_2[2];
    if (lStack_80 != 0) {
      piVar1 = (int *)(lStack_80 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    iVar2 = *(int *)(*(long *)(*(long *)(lStack_80 + 0x20) + 8) + 0x30);
    iVar3 = *(int *)(lVar8 + 0xc);
    func_0x00010829c494();
    if (iVar2 <= iVar3) {
      lVar8 = 0;
      if (param_2[2] != 0) {
        do {
          func_0x00010829c1e8();
          lVar8 = extraout_x8_01;
        } while (extraout_w11 != 0);
      }
      uStack_60 = 0;
      lStack_80 = lVar8;
      if (param_2[3] != 0) {
        do {
          func_0x00010829c1d8();
          uStack_60 = extraout_x8_02;
        } while (extraout_w10 != 0);
      }
      FUN_10839325c(&uStack_58);
      FUN_108154c48(&uStack_60);
      func_0x00010829c494();
      lStack_70 = param_5[2];
      lStack_78 = param_5[1];
      lStack_80 = *param_5;
      uStack_68 = 1;
      uStack_98 = 0;
      if (param_2[2] != 0) {
        do {
          func_0x00010829c1e8();
          uStack_98 = extraout_x8_03;
        } while (extraout_w11_00 != 0);
      }
      uStack_a0 = uStack_58;
      uStack_58 = 0;
      lStack_b0 = lVar10;
      lStack_a8 = lVar9;
      FUN_10829b88c(&lStack_90,&uStack_98,&UNK_10f482d80,&uStack_a0,&lStack_a8,&lStack_b0,param_2[4]
                    ,param_2[5] - param_2[4] >> 3,&lStack_80);
      if (lStack_b0 != 0) {
        func_0x00010829c1cc();
      }
      if (lStack_a8 != 0) {
        func_0x00010829c1cc();
      }
      FUN_108154c48(&uStack_a0);
      FUN_108154c00(&uStack_98);
      if ((char)lStack_90 == '\x01') {
        *param_1 = lStack_88;
      }
      else {
        *param_1 = 0;
        if (lStack_88 != 0) {
          func_0x00010829c1cc();
        }
      }
      FUN_108154c48(&uStack_58);
      return;
    }
    *param_1 = 0;
    if (lVar10 != 0) {
      func_0x00010829c26c();
    }
    if (lVar9 == 0) {
      return;
    }
    func_0x00010829c424();
    pcVar6 = extraout_x8_00;
  }
  else {
    if ((int)plVar7 != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10829b7c0);
      (*pcVar6)();
    }
    lStack_80 = *param_3;
    *param_3 = 0;
    lStack_90 = *param_4;
    *param_4 = 0;
    func_0x00010829c49c(&lStack_80,&lStack_90,*(undefined4 *)((long)param_2 + 0xc));
    if (lStack_90 != 0) {
      func_0x00010829c1cc();
    }
    if (lStack_80 == 0) {
      return;
    }
    func_0x00010829c214();
    pcVar6 = extraout_x8;
  }
  (*pcVar6)();
  return;
}



/* Entry: 10829b838; end: 10829b88b;  */

void FUN_10829b838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_ac [124];
  
  FUN_1083be2e8(auStack_ac,param_4);
  FUN_108298f54(param_1,param_2,param_3,auStack_ac);
  return;
}



/* Entry: 10829b88c; end: 10829ba8f;  */

void FUN_10829b88c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,undefined8 *param_6,long param_7,long param_8,long param_9)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  byte bVar5;
  undefined1 in_ZR;
  undefined8 *puVar6;
  undefined1 **ppuVar7;
  undefined1 **ppuVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  byte bStack_d0;
  undefined7 uStack_cf;
  long lStack_c8;
  undefined1 auStack_c0 [64];
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x00010829c414();
  puStack_80 = auStack_c0;
  uStack_78 = 0x1000000000;
  param_8 = param_8 << 3;
  uStack_70 = extraout_x8;
  do {
    if (param_8 == 0) {
      func_0x00010829c4e0();
      uStack_d8 = *param_2;
      *param_2 = 0;
      uStack_e0 = 0;
      if (**(long **)(param_9 + 8) != 0) {
        do {
          func_0x00010829c1d8();
          uStack_e0 = extraout_x8_00;
        } while (extraout_w10 != 0);
      }
      lStack_e8 = *param_5;
      *param_5 = 0;
      uStack_f0 = *param_6;
      *param_6 = 0;
      puVar6 = &uStack_d8;
      FUN_1082cc1b4(&bStack_d0,puVar6,param_3,&uStack_e0,&lStack_e8,&uStack_f0,param_4,puStack_80,
                    (long)(int)uStack_78);
      func_0x00010829c4f8();
      if (puVar6 != (undefined8 *)0x0) {
        func_0x00010829c1cc();
      }
      lVar4 = lStack_e8;
      lStack_e8 = 0;
      if (lVar4 != 0) {
        func_0x00010829c1cc();
      }
      FUN_10829ba90(uStack_e0);
      FUN_108154c00(&uStack_d8);
      func_0x00010829c4a8(CONCAT71(uStack_cf,bStack_d0));
      goto LAB_10829b9f0;
    }
    FUN_108298dc8(&bStack_d0,param_7,param_9);
    bVar5 = bStack_d0;
    if ((bStack_d0 & 1) == 0) {
      *param_5 = 0;
    }
    else {
      FUN_10827f37c(&puStack_80,&lStack_c8);
    }
    lVar4 = lStack_c8;
    lStack_c8 = 0;
    if (lVar4 != 0) {
      func_0x00010829c1cc();
    }
    param_7 = param_7 + 8;
    param_8 = param_8 + -8;
  } while ((bVar5 & 1) != 0);
  func_0x00010829c4e0();
LAB_10829b9f0:
  ppuVar7 = &puStack_80;
  FUN_10827f4d4();
  func_0x00010829c258(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppuVar8 = ppuVar7;
  func_0x00010829c4f8();
  if (ppuVar8 != (undefined1 **)0x0) {
    func_0x00010829c1cc();
  }
  lVar4 = lStack_e8;
  lStack_e8 = 0;
  if (lVar4 != 0) {
    func_0x00010829c1cc();
  }
  FUN_10829ba90(uStack_e0);
  FUN_108154c00(&uStack_d8);
  FUN_10827f4d4(&puStack_80);
  __Unwind_Resume();
  if (ppuVar7 == (undefined1 **)0x0) {
    return;
  }
  do {
    iVar1 = *(int *)ppuVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
    if (bVar3) {
      *(int *)ppuVar7 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10829ba90; end: 10829ba9b;  */

void FUN_10829ba90(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10829ba9c; end: 10829bae7;  */

long * FUN_10829ba9c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10829bae8; end: 10829bb0f;  */

float FUN_10829bae8(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0xf4) - *(float *)(param_1 + 0xfc);
  fVar2 = *(float *)(param_1 + 0xf8) - *(float *)(param_1 + 0x100);
  fVar3 = fVar2 * fVar2 + fVar1 * fVar1;
  if (NAN(fVar3 - fVar3)) {
    return SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  }
  return SQRT(fVar3);
}



/* Entry: 10829bb10; end: 10829bb5b;  */

long * FUN_10829bb10(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10829bb5c; end: 10829bb73;  */

void FUN_10829bb5c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x1198;
  __Znwm();
  FUN_10829bbe4(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x10),
                *(undefined4 *)(param_2 + 0x14));
  *param_1 = uVar1;
  return;
}



/* Entry: 10829bb74; end: 10829bbe3;  */

void FUN_10829bb74(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0x1198;
  __Znwm();
  FUN_10829bbe4(*param_3,*param_4,*param_5);
  *param_1 = uVar1;
  return;
}



/* Entry: 10829bbe4; end: 10829bcb3;  */

long FUN_10829bbe4(undefined8 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  *(undefined8 *)(param_4 + 0x111c) = 0;
  *(undefined8 *)(param_4 + 0x1114) = 0;
  *(undefined8 *)(param_4 + 0x1130) = 0;
  *(undefined8 *)(param_4 + 0x1128) = 0;
  *(undefined8 *)(param_4 + 0x1140) = 0;
  *(undefined8 *)(param_4 + 0x1138) = 0;
  *(undefined8 *)(param_4 + 0x1150) = 0;
  *(undefined8 *)(param_4 + 0x1148) = 0;
  *(undefined8 *)(param_4 + 0x1160) = 0;
  *(undefined8 *)(param_4 + 0x1158) = 0;
  *(undefined8 *)(param_4 + 0x1170) = 0;
  *(undefined8 *)(param_4 + 0x1168) = 0;
  *(undefined8 *)(param_4 + 0x1180) = 0;
  *(undefined8 *)(param_4 + 0x1178) = 0;
  *(undefined8 *)(param_4 + 0x1190) = 0;
  *(undefined8 *)(param_4 + 0x1188) = 0;
  *(undefined4 *)(param_4 + 0x110c) = param_2;
  *(undefined4 *)(param_4 + 0x1110) = param_3;
  auVar2._0_8_ = (long)(int)*param_5;
  auVar2._8_8_ = (long)(int)((ulong)*param_5 >> 0x20);
  auVar2 = NEON_scvtf(auVar2,8);
  auVar3 = NEON_fmov(0x3fe0000000000000,8);
  uVar1 = NEON_fminnm(CONCAT44((float)(double)(long)(auVar2._8_8_ + auVar3._8_8_),
                               (float)(double)(long)(auVar2._0_8_ + auVar3._0_8_)),
                      0x4effffff4effffff,4);
  uVar1 = NEON_fmaxnm(uVar1,0xceffffffceffffff,4);
  *(ulong *)(param_4 + 0x1104) = CONCAT44((int)(float)((ulong)uVar1 >> 0x20),(int)(float)uVar1);
  FUN_10829bcb4();
  if ((0 < *(int *)(param_4 + 0x1104)) && (0 < *(int *)(param_4 + 0x1108))) {
    FUN_10829bfbc(param_4);
  }
  return param_4;
}



/* Entry: 10829bcb4; end: 10829bfbb;  */

void FUN_10829bcb4(int *param_1)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined8 extraout_x8;
  undefined8 *puVar8;
  ushort *puVar9;
  undefined8 *puVar10;
  ushort *puVar11;
  long lVar12;
  ushort *puVar13;
  long lVar14;
  short *psVar15;
  long lVar16;
  short *psVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar22;
  undefined1 auVar21 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 in_stack_00000080;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  ushort *puStack_1040;
  long lStack_1038;
  undefined8 *puStack_1030;
  code *pcStack_1028;
  double dStack_1020;
  double dStack_1018;
  undefined8 auStack_1008 [512];
  undefined8 uStack_8;
  
  func_0x00010829c528();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = 0;
  piVar5 = param_1;
  uVar18 = func_0x00010829c414();
  fVar19 = (float)NEON_fminnm(uVar18,0x4effffff);
  if (fVar19 <= -2.1474835e+09) {
    fVar19 = -2.1474835e+09;
  }
  iVar7 = (int)fVar19;
  iVar3 = iVar7;
  if (0x7ffffffd < iVar7 + 0x7ffffffdU) {
    iVar3 = iVar7 + 0x7ffffffe;
  }
  if (iVar7 < 1) {
    iVar7 = 1 - iVar3;
  }
  if (0x7ffffffd < iVar7) {
    iVar7 = 0x7ffffffe;
  }
  *piVar5 = iVar7;
  puVar13 = (ushort *)(piVar5 + 0x41);
  piVar6 = piVar5;
  psVar15 = (short *)((long)piVar5 + 0x106);
  uStack_8 = extraout_x8;
  for (; lVar14 != 4; lVar14 = lVar14 + 1) {
    psVar17 = psVar15;
    for (lVar16 = 0; lVar16 != 0x100; lVar16 = lVar16 + 1) {
      *(char *)((long)piVar5 + 0x106 + lVar16 + -0x102) = (char)lVar16;
      func_0x00010829c48c();
      psVar17[-1] = (short)piVar6 + (short)((int)piVar6 / 0x200) * -0x200;
      func_0x00010829c48c();
      *psVar17 = (short)piVar6 + (short)((int)piVar6 / 0x200) * -0x200;
      psVar17 = psVar17 + 2;
    }
    psVar15 = psVar15 + 0x200;
  }
  for (lVar14 = 0x103; lVar14 != 4; lVar14 = lVar14 + -1) {
    uVar2 = *(undefined1 *)((long)param_1 + lVar14);
    func_0x00010829c48c();
    iVar3 = (int)piVar6 % 0x100;
    *(undefined1 *)((long)param_1 + lVar14) = *(undefined1 *)((long)piVar5 + (long)iVar3 + 4);
    *(undefined1 *)((long)piVar5 + (long)iVar3 + 4) = uVar2;
  }
  puVar8 = auStack_1008;
  puVar9 = puVar13;
  for (lVar14 = 0; lVar14 != 0x100; lVar14 = lVar14 + 1) {
    puVar10 = puVar8;
    puVar11 = puVar9;
    for (lVar16 = 0; lVar16 != 4; lVar16 = lVar16 + 1) {
      for (lVar12 = 0; lVar12 != 4; lVar12 = lVar12 + 2) {
        *(undefined2 *)((long)puVar10 + lVar12) = *(undefined2 *)((long)puVar11 + lVar12);
      }
      puVar11 = puVar11 + 0x200;
      puVar10 = puVar10 + 0x80;
    }
    puVar9 = puVar9 + 2;
    puVar8 = (undefined8 *)((long)puVar8 + 4);
  }
  puVar9 = puVar13;
  for (lVar14 = 0; lVar14 != 0x100; lVar14 = lVar14 + 1) {
    puVar8 = auStack_1008;
    puVar11 = puVar9;
    for (lVar16 = 0; lVar16 != 4; lVar16 = lVar16 + 1) {
      puVar10 = puVar8;
      for (lVar12 = 0; lVar12 != 4; lVar12 = lVar12 + 2) {
        puVar1 = (undefined2 *)((long)puVar10 + (ulong)*(byte *)((long)piVar5 + lVar14 + 4) * 4);
        puVar10 = (undefined8 *)((long)puVar10 + 2);
        *(undefined2 *)((long)puVar11 + lVar12) = *puVar1;
      }
      puVar8 = puVar8 + 0x80;
      puVar11 = puVar11 + 0x200;
    }
    puVar9 = puVar9 + 2;
  }
  lVar14 = 0;
  uVar29 = NEON_fmov(0x3f800000,4);
  auVar21 = NEON_fmov(0x3fe0000000000000,8);
  dStack_1018 = auVar21._8_8_;
  dStack_1020 = auVar21._0_8_;
  for (; bVar4 = lVar14 == 4, !bVar4; lVar14 = lVar14 + 1) {
    lVar16 = 0x100;
    puVar9 = puVar13;
    do {
      uVar20 = NEON_scvtf(CONCAT44(puVar9[1] - 0x100,*puVar9 - 0x100),4);
      auStack_1008[0] =
           CONCAT44((float)((ulong)uVar20 >> 0x20) * 0.00390625,(float)uVar20 * 0.00390625);
      piVar6 = (int *)auStack_1008;
      func_0x000108384954();
      fVar19 = (float)(double)(long)((double)(((float)auStack_1008[0] + (float)uVar29) * 32767.5) +
                                    dStack_1020);
      fVar22 = (float)(double)(long)((double)(((float)((ulong)auStack_1008[0] >> 0x20) +
                                              (float)((ulong)uVar29 >> 0x20)) * 32767.5) +
                                    dStack_1018);
      if (2.1474835e+09 <= fVar19) {
        fVar19 = 2.1474835e+09;
      }
      if (fVar19 <= -2.1474835e+09) {
        fVar19 = -2.1474835e+09;
      }
      *puVar9 = (ushort)(int)fVar19;
      if (2.1474835e+09 <= fVar22) {
        fVar22 = 2.1474835e+09;
      }
      if (fVar22 <= -2.1474835e+09) {
        fVar22 = -2.1474835e+09;
      }
      puVar9[1] = (ushort)(int)fVar22;
      puVar9 = puVar9 + 2;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    puVar13 = puVar13 + 0x200;
  }
  func_0x00010829c258(uStack_8);
  if (bVar4) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1028 = FUN_10829bfbc;
  fVar22 = (float)piVar6[0x441];
  fVar19 = (float)piVar6[0x443];
  if (fVar19 != 0.0) {
    fVar25 = (float)(int)(fVar19 * fVar22) / fVar22;
    fVar24 = (float)(int)(fVar19 * fVar22) / fVar22;
    fVar26 = fVar19 / fVar25;
    fVar23 = fVar24 / fVar19;
    fVar19 = fVar25;
    if (fVar23 <= fVar26) {
      fVar19 = fVar24;
    }
    piVar6[0x443] = (int)fVar19;
  }
  fVar24 = (float)piVar6[0x442];
  fVar23 = (float)piVar6[0x444];
  if (fVar23 != 0.0) {
    fVar27 = (float)(int)(fVar23 * fVar24) / fVar24;
    fVar26 = (float)(int)(fVar23 * fVar24) / fVar24;
    fVar28 = fVar23 / fVar27;
    fVar25 = fVar26 / fVar23;
    fVar23 = fVar27;
    if (fVar25 <= fVar28) {
      fVar23 = fVar26;
    }
    piVar6[0x444] = (int)fVar23;
  }
  puStack_1040 = puVar13;
  lStack_1038 = lVar14;
  puStack_1030 = &stack0x00000080;
  func_0x00010829c0b4(fVar19 * fVar22,fVar23 * fVar24,&uStack_1050);
  *(undefined8 *)(piVar6 + 0x447) = uStack_1048;
  *(undefined8 *)(piVar6 + 0x445) = uStack_1050;
  return;
}



/* Entry: 10829bfbc; end: 10829c073;  */

void FUN_10829bfbc(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  fVar1 = (float)*(int *)(param_1 + 0x1104);
  fVar2 = *(float *)(param_1 + 0x110c);
  if (fVar2 != 0.0) {
    fVar5 = (float)(int)(fVar2 * fVar1) / fVar1;
    fVar4 = (float)(int)(fVar2 * fVar1) / fVar1;
    fVar6 = fVar2 / fVar5;
    fVar3 = fVar4 / fVar2;
    fVar2 = fVar5;
    if (fVar3 <= fVar6) {
      fVar2 = fVar4;
    }
    *(float *)(param_1 + 0x110c) = fVar2;
  }
  fVar4 = (float)*(int *)(param_1 + 0x1108);
  fVar3 = *(float *)(param_1 + 0x1110);
  if (fVar3 != 0.0) {
    fVar7 = (float)(int)(fVar3 * fVar4) / fVar4;
    fVar6 = (float)(int)(fVar3 * fVar4) / fVar4;
    fVar8 = fVar3 / fVar7;
    fVar5 = fVar6 / fVar3;
    fVar3 = fVar7;
    if (fVar5 <= fVar8) {
      fVar3 = fVar6;
    }
    *(float *)(param_1 + 0x1110) = fVar3;
  }
  func_0x00010829c0b4(fVar2 * fVar1,fVar3 * fVar4,&uStack_30);
  *(undefined8 *)(param_1 + 0x111c) = uStack_28;
  *(undefined8 *)(param_1 + 0x1114) = uStack_30;
  return;
}



/* Entry: 10829c074; end: 10829c12b;  */

int FUN_10829c074(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
  iVar1 = iVar2 + 0x7fffffff;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  *param_1 = iVar1;
  return iVar1;
}



/* Entry: 10829c12c; end: 10829c14f;  */

undefined8 FUN_10829c12c(undefined8 param_1)

{
  FUN_10829c150(param_1,0);
  return param_1;
}



/* Entry: 10829c150; end: 10829c167;  */

void FUN_10829c150(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10829c184(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10829c168; end: 10829c183;  */

void FUN_10829c168(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10829c184(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10829c184; end: 10829c1b7;  */

long FUN_10829c184(long param_1)

{
  FUN_108330548(param_1 + 0x1160);
  FUN_108330548(param_1 + 0x1128);
  return param_1;
}



/* Entry: 10829c1b8; end: 10829c54b;  */

undefined4 FUN_10829c1b8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 10829c54c; end: 10829c5a3;  */

void FUN_10829c54c(undefined8 param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long *unaff_x19;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  
  func_0x00010829ede4();
  func_0x00010829eee0(*(undefined8 *)(*param_2 + 0x18));
  FUN_10829c5a4(unaff_x20 + 2);
  func_0x00010829eee0(*(undefined8 *)(*unaff_x19 + 0x18));
  plVar3 = unaff_x20 + 5;
  plVar5 = unaff_x19;
  func_0x00010829ede4();
  uVar2 = *(uint *)(plVar3 + 1);
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5,0x10,(short)plVar3[2],&DAT_10f4836cf,6);
  func_0x00010829ef14();
  (*extraout_x8)(unaff_x19,0x10,(ulong)uVar1,&UNK_10f4836d6,0xf);
  lVar8 = 0;
  for (lVar7 = 0; uVar2 = (uint)lVar8, (ulong)uVar1 * 0x18 - lVar7 != 0; lVar7 = lVar7 + 0x18) {
    lVar4 = *unaff_x20 + lVar7;
    func_0x00010829eee0(*(undefined8 *)(*unaff_x19 + 0x18));
    func_0x00010829ef14();
    (*extraout_x8_00)(unaff_x19,8);
    func_0x00010829ef14();
    uVar6 = 0;
    (*extraout_x8_01)(unaff_x19);
    if (*(char *)(lVar4 + 0xc) == '\0') {
      uVar2 = 0xffff;
    }
    else {
      FUN_10829e238(lVar4);
      if ((uVar6 & 1) == 0) {
        FUN_10829e2b4(lVar4);
        lVar8 = (lVar4 + 3U & 0xfffffffffffffffc) + lVar8;
      }
      else {
        FUN_10829e238();
        uVar2 = (uint)lVar4;
      }
    }
    func_0x00010829ef14();
    (*extraout_x8_02)(unaff_x19,0x10,uVar2 & 0xffff,&UNK_10f483706,10);
  }
  return;
}



/* Entry: 10829c5a4; end: 10829c73f;  */

void FUN_10829c5a4(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long *unaff_x19;
  long *unaff_x20;
  long lVar5;
  
  func_0x00010829ede4();
  uVar3 = *(uint *)(param_1 + 8);
  uVar2 = -uVar3;
  if (-1 < (int)uVar3) {
    uVar2 = uVar3;
  }
  (**(code **)(*param_2 + 0x10))(param_2,0x10,*(undefined2 *)(param_1 + 0x10),&DAT_10f4836cf,6);
  func_0x00010829ef14();
  (*extraout_x8)();
  for (lVar5 = 0; (ulong)uVar2 * 0x18 - lVar5 != 0; lVar5 = lVar5 + 0x18) {
    lVar1 = *unaff_x20 + lVar5;
    func_0x00010829eee0(*(undefined8 *)(*unaff_x19 + 0x18));
    func_0x00010829ef14();
    (*extraout_x8_00)();
    func_0x00010829ef14();
    uVar4 = 0;
    (*extraout_x8_01)();
    if (*(char *)(lVar1 + 0xc) != '\0') {
      FUN_10829e238(lVar1);
      if ((uVar4 & 1) == 0) {
        FUN_10829e2b4(lVar1);
      }
      else {
        FUN_10829e238();
      }
    }
    func_0x00010829ef14();
    (*extraout_x8_02)();
  }
  return;
}



/* Entry: 10829c740; end: 10829c7af;  */

undefined2 * FUN_10829c740(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 6) = 0x400000001;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x40] = 0x3210;
  *(undefined1 *)(param_1 + 0x41) = 0;
  FUN_10829c7b0();
  return param_1;
}



/* Entry: 10829c7b0; end: 10829c85b;  */

void FUN_10829c7b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined2 *param_5)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = (int)((ulong)param_2 >> 0x20);
  *param_1 = param_2;
  param_1[1] = param_3;
  if (*(int *)(param_4 + 0x6c) - 2U < 2) {
    if (0 < iVar2) {
      iVar2 = 1;
    }
  }
  else if (*(int *)(param_4 + 0x6c) != 1) {
    FUN_10841076c(&UNK_10f483711);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10829c85c);
    (*pcVar1)();
  }
  *(char *)param_1 = (char)param_2;
  *(char *)((long)param_1 + 1) = (char)((ulong)param_2 >> 8);
  *(int *)((long)param_1 + 4) = iVar2;
  *(int *)(param_1 + 1) = (int)param_3;
  *(undefined4 *)((long)param_1 + 0xc) = 1;
  FUN_1082833e8(param_1 + 2,param_4);
  *(undefined2 *)(param_1 + 0x10) = *param_5;
  *(undefined1 *)((long)param_1 + 0x82) = 1;
  return;
}



/* Entry: 10829c85c; end: 10829c96f;  */

void FUN_10829c85c(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_c0 [40];
  char acStack_98 [4];
  undefined8 uStack_94;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [4];
  undefined8 uStack_6c;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  acStack_98[0] = '\0';
  uStack_94 = 0;
  lStack_88 = 0x1138270b0;
  uStack_80 = 0x1138270b0;
  uStack_78 = 0x1138270b0;
  auStack_70[0] = 0;
  uStack_6c = 0;
  uStack_60 = 0x1138270b0;
  uStack_58 = 0x1138270b0;
  uStack_50 = 0x1138270b0;
  uStack_48 = 0;
  (**(code **)(*param_2 + 0x18))(param_2,param_3,acStack_98);
  FUN_10829c970(auStack_c0,param_2,*param_3,param_3[2],param_5,uStack_48,auStack_70,acStack_98,
                param_4);
  FUN_10829ca5c(*param_3,lStack_88 + 8,(long)acStack_98[0]);
  if (acStack_98[0] == '\x0e') {
    func_0x0001082ddb00(param_3[2]);
  }
  FUN_10829e3a0(param_1,auStack_c0,auStack_70);
  func_0x00010829e8f8(auStack_c0);
  func_0x00010829e958(acStack_98);
  return;
}



/* Entry: 10829c970; end: 10829ca5b;  */

void FUN_10829c970(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,char *param_7,char *param_8,long param_9)

{
  long lVar1;
  long lVar2;
  undefined4 auStack_d0 [2];
  undefined4 *puStack_c8;
  char *pcStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  char *pcStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 *puStack_68;
  char *pcStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_c8 = &uStack_44;
  uStack_70 = 0;
  puStack_98 = &uStack_40;
  puStack_50 = &uStack_38;
  uStack_81 = *param_8 != '\0';
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  auStack_d0[0] = 0;
  puStack_b0 = &uStack_81;
  puStack_a8 = &uStack_80;
  lVar1 = (long)*param_7;
  pcStack_c0 = param_8;
  puStack_b8 = param_1;
  uStack_a0 = param_2;
  pcStack_90 = param_7;
  puStack_68 = puStack_c8;
  pcStack_60 = param_7;
  puStack_58 = puStack_98;
  uStack_44 = param_6;
  uStack_40 = param_4;
  uStack_38 = param_3;
  FUN_10829ca9c(lVar1);
  for (lVar2 = 0; lVar2 < *(int *)(param_9 + 0x78); lVar2 = lVar2 + 1) {
    FUN_10829cab8(auStack_d0,auStack_d0,*(undefined8 *)(*(long *)(param_9 + 0x50) + lVar2 * 8),
                  (int)lVar1 == 3,0,0xffffffff,1);
  }
  return;
}



/* Entry: 10829ca5c; end: 10829ca9b;  */

void FUN_10829ca5c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010828bb68();
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x3f0) + 0x88) + 0x40) >> 3 & 1) == 0)
  {
    if (param_3 == 0xf) {
      puVar2 = &UNK_10f487138;
    }
    else {
      puVar2 = &UNK_10f48714f;
    }
    FUN_1083a3a90(lVar1,puVar2);
    return;
  }
  if (param_3 == 0xf) {
    puVar2 = &UNK_10f4870be;
  }
  else {
    puVar2 = &UNK_10f4870de;
  }
  FUN_1083a3a90(lVar1,puVar2);
  FUN_1083a3ab4(lVar1,&UNK_10f4870f4,&stack0x00000000);
  return;
}



/* Entry: 10829ca9c; end: 10829cab7;  */

undefined4 FUN_10829ca9c(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 0x29) {
    return *(undefined4 *)(&UNK_10df14230 + (long)(int)param_1 * 4);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10829cab8);
  (*pcVar1)();
}



/* Entry: 10829cab8; end: 10829d477;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010829ce78 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10829cab8(undefined8 param_1,uint *param_2,undefined8 param_3,long param_4,long *param_5,
                  long param_6,ulong param_7,int param_8)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined1 in_NG;
  undefined1 uVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  ulong uVar11;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  uint *extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  undefined8 extraout_x8_04;
  long *plVar12;
  undefined8 extraout_x9;
  uint *puVar13;
  uint *extraout_x9_00;
  ulong uVar14;
  ulong extraout_x9_01;
  uint *puVar15;
  long *plVar16;
  undefined8 extraout_x9_02;
  long *plVar17;
  long *extraout_x10;
  uint *extraout_x11;
  long lVar18;
  char *pcVar19;
  long *plVar20;
  long lVar21;
  long *unaff_x24;
  uint *puVar22;
  uint *puVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  int iStack_a0;
  ulong uStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  
  lVar18 = *(long *)(param_2 + 0xc);
  uVar2 = *param_2;
  *param_2 = uVar2 + 1;
  uStack_98 = param_7;
  lStack_90 = param_6;
  if (**(int **)(param_2 + 2) == 0) {
    iVar3 = *(int *)(param_4 + 0x34);
    in_NG = iVar3 + -4 < 0;
    if (iVar3 == 4) goto LAB_10829cb38;
    if (iVar3 == 3) {
      in_NG = (int)(**(byte **)(param_2 + 4) - 0xf) < 0;
      param_5 = (long *)(ulong)(**(byte **)(param_2 + 4) == 0xf);
      uStack_98 = 0xffffffff;
      lStack_90 = 0;
      iStack_a0 = 2;
    }
    else {
      in_NG = iVar3 + -2 < 0;
      iStack_a0 = param_8;
      if (iVar3 == 2) {
        param_5 = (long *)(ulong)((uint)param_5 | (uint)*(byte *)(param_4 + 0x38));
        uStack_98 = (ulong)(uVar2 + 1);
        lStack_90 = param_4;
      }
    }
  }
  else {
LAB_10829cb38:
    iStack_a0 = 0;
  }
  plVar25 = *(long **)(param_2 + 6);
  plVar17 = plVar25 + 3;
  FUN_10829e88c(plVar17,param_4);
  plVar20 = (long *)plVar25[1];
  if (plVar20 != (long *)0x0) {
    uVar11 = (long)plVar20 - 1;
    if (((ulong)plVar20 & uVar11) == 0) {
      unaff_x24 = (long *)(uVar11 & (ulong)plVar17);
      in_NG = false;
    }
    else {
      in_NG = (long)plVar17 - (long)plVar20 < 0;
      unaff_x24 = plVar17;
      if (plVar20 <= plVar17) {
        uVar14 = 0;
        if (plVar20 != (long *)0x0) {
          uVar14 = (ulong)plVar17 / (ulong)plVar20;
        }
        unaff_x24 = (long *)((long)plVar17 - uVar14 * (long)plVar20);
      }
    }
    plVar24 = *(long **)(*plVar25 + (long)unaff_x24 * 8);
    if (plVar24 != (long *)0x0) {
      do {
        while( true ) {
          plVar24 = (long *)*plVar24;
          if (plVar24 == (long *)0x0) goto LAB_10829cbe4;
          plVar12 = (long *)plVar24[1];
          if (plVar12 != plVar17) break;
          in_NG = plVar24[2] - param_4 < 0;
          plVar12 = param_5;
          if (plVar24[2] == param_4) goto LAB_10829cd0c;
        }
        if (((ulong)plVar20 & uVar11) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar11);
        }
        else if (plVar20 <= plVar12) {
          uVar14 = 0;
          if (plVar20 != (long *)0x0) {
            uVar14 = (ulong)plVar12 / (ulong)plVar20;
          }
          plVar12 = (long *)((long)plVar12 - uVar14 * (long)plVar20);
        }
        in_NG = (long)plVar12 - (long)unaff_x24 < 0;
      } while (plVar12 == unaff_x24);
    }
  }
LAB_10829cbe4:
  plVar12 = plVar25 + 2;
  plVar24 = plVar17;
  func_0x00010829ee94();
  uStack_78 = 1;
  *plVar24 = 0;
  plVar24[1] = (long)plVar17;
  plVar24[2] = param_4;
  plStack_88 = plVar24;
  plStack_80 = plVar12;
  func_0x00010829ed70();
  if ((plVar20 == (long *)0x0) || (func_0x00010829ef20(), (bool)in_NG)) {
    bVar6 = (long *)0x2 < plVar20;
    bVar8 = plVar20 == (long *)0x3;
    func_0x00010829ed40((long)plVar20 << 1);
    uVar1 = extraout_x8;
    if (!bVar6 || bVar8) {
      uVar1 = extraout_x9;
    }
    FUN_10829e4a4(plVar25,uVar1);
    plVar20 = (long *)plVar25[1];
    if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
      unaff_x24 = (long *)((long)plVar20 - 1U & (ulong)plVar17);
    }
    else {
      unaff_x24 = plVar17;
      if (plVar20 <= plVar17) {
        uVar11 = 0;
        if (plVar20 != (long *)0x0) {
          uVar11 = (ulong)plVar17 / (ulong)plVar20;
        }
        unaff_x24 = (long *)((long)plVar17 - uVar11 * (long)plVar20);
      }
    }
  }
  lVar21 = *plVar25;
  plVar17 = *(long **)(lVar21 + (long)unaff_x24 * 8);
  if (plVar17 == (long *)0x0) {
    *plVar24 = *plVar12;
    *plVar12 = (long)plVar24;
    *(long **)(lVar21 + (long)unaff_x24 * 8) = plVar12;
    if (*plVar24 != 0) {
      plVar17 = *(long **)(*plVar24 + 8);
      if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
        plVar17 = (long *)((ulong)plVar17 & (long)plVar20 - 1U);
      }
      else if (plVar20 <= plVar17) {
        uVar11 = 0;
        if (plVar20 != (long *)0x0) {
          uVar11 = (ulong)plVar17 / (ulong)plVar20;
        }
        plVar17 = (long *)((long)plVar17 - uVar11 * (long)plVar20);
      }
      *(long **)(lVar21 + (long)plVar17 * 8) = plVar24;
    }
  }
  else {
    *plVar24 = *plVar17;
    *plVar17 = (long)plVar24;
  }
  func_0x00010829edb8();
  plVar12 = (long *)((ulong)param_5 & 0xffffffff);
LAB_10829cd0c:
  uVar2 = *(uint *)(param_4 + 0x30);
  *(byte *)(plVar24 + 8) = (byte)(uVar2 >> 4) & 1;
  if ((uVar2 >> 4 & 1) == 0) goto LAB_10829d1ec;
  if (iStack_a0 == 1) {
    if (lStack_90 != 0) goto LAB_10829cd70;
    pcVar19 = *(char **)(param_2 + 10);
    if (**(int **)(pcVar19 + 0x18) == 1) {
      FUN_108275af8(&plStack_88,*(undefined8 *)(pcVar19 + 0x20));
    }
    else {
      cVar9 = *pcVar19;
      if (cVar9 == '\0') {
        *pcVar19 = **(char **)(pcVar19 + 0x20);
        pcVar19[0xc] = '\0';
        pcVar19[0xd] = '\0';
        pcVar19[0xe] = '\0';
        pcVar19[0xf] = '\0';
        pcVar19[0x10] = '\0';
        pcVar19[0x11] = '\0';
        pcVar19[0x12] = '\0';
        pcVar19[0x13] = '\0';
        pcVar19[4] = '\0';
        pcVar19[5] = '\0';
        pcVar19[6] = '\0';
        pcVar19[7] = '\0';
        pcVar19[8] = '\0';
        pcVar19[9] = '\0';
        pcVar19[10] = '\0';
        pcVar19[0xb] = '\0';
        pcVar19[0x14] = '\0';
        pcVar19[0x15] = '\0';
        pcVar19[0x16] = '\0';
        pcVar19[0x17] = '\0';
        func_0x00010829eebc(**(undefined8 **)(pcVar19 + 0x28),&UNK_10f483918);
        FUN_10828bae8(**(undefined8 **)(pcVar19 + 0x30),&UNK_10f483923);
        cVar9 = *pcVar19;
      }
      FUN_10829ea88(&plStack_88,cVar9,*(undefined8 *)(pcVar19 + 0x10));
    }
    func_0x00010829eeb0();
    func_0x00010829eec8();
  }
  else {
    if (((lStack_90 == 0) || (iStack_a0 != 2)) || ((**(byte **)(param_2 + 8) & 1) == 0))
    goto LAB_10829d1ec;
LAB_10829cd70:
    uVar5 = 1;
    uVar7 = 0;
    puVar15 = (uint *)(lVar18 + 0x20);
    FUN_10829e88c(puVar15,lStack_90);
    puVar22 = *(uint **)(lVar18 + 0x10);
    puVar23 = param_2;
    if (puVar22 != (uint *)0x0) {
      func_0x00010829ef08();
      if ((bool)uVar5) {
        puVar23 = (uint *)(extraout_x8_00 & (ulong)puVar15);
      }
      else {
        uVar7 = (long)puVar15 - (long)puVar22 < 0;
        puVar23 = puVar15;
        if (puVar22 <= puVar15) {
          uVar11 = 0;
          if (puVar22 != (uint *)0x0) {
            uVar11 = (ulong)puVar15 / (ulong)puVar22;
          }
          puVar23 = (uint *)((long)puVar15 - uVar11 * (long)puVar22);
        }
      }
      plVar17 = *(long **)(*(long *)(lVar18 + 8) + (long)puVar23 * 8);
      if (plVar17 != (long *)0x0) {
        do {
          while( true ) {
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) goto LAB_10829ce10;
            puVar13 = (uint *)plVar17[1];
            if (puVar13 != puVar15) break;
            uVar7 = plVar17[2] - lStack_90 < 0;
            if (plVar17[2] == lStack_90) goto LAB_10829d114;
          }
          if (((ulong)puVar22 & extraout_x8_00) == 0) {
            puVar13 = (uint *)((ulong)puVar13 & extraout_x8_00);
          }
          else if (puVar22 <= puVar13) {
            uVar11 = 0;
            if (puVar22 != (uint *)0x0) {
              uVar11 = (ulong)puVar13 / (ulong)puVar22;
            }
            puVar13 = (uint *)((long)puVar13 - uVar11 * (long)puVar22);
          }
          uVar7 = (long)puVar13 - (long)puVar23 < 0;
        } while (puVar13 == puVar23);
      }
    }
LAB_10829ce10:
    plVar20 = (long *)(lVar18 + 0x18);
    plVar17 = (long *)0x60;
    __Znwm();
    uStack_78 = 1;
    *plVar17 = 0;
    plVar17[1] = (long)puVar15;
    plVar17[2] = lStack_90;
    plVar17[8] = 0;
    plVar17[7] = 0;
    plVar17[10] = 0;
    plVar17[9] = 0;
    plVar17[6] = 0;
    plVar17[5] = 0;
    plVar17[0xb] = 0;
    plVar17[4] = 0;
    plVar17[3] = 0;
    plVar17[8] = 0x1138270b0;
    plVar17[9] = 0x1138270b0;
    plVar17[10] = 0x1138270b0;
    plStack_88 = plVar17;
    plStack_80 = plVar20;
    if ((puVar22 == (uint *)0x0) ||
       (func_0x00010829ef20(param_1,*(undefined4 *)(lVar18 + 0x28),(float)puVar22), (bool)uVar7)) {
      func_0x00010829ee64();
      bVar6 = (uint *)0x2 < puVar22;
      bVar8 = puVar22 == (uint *)0x3;
      func_0x00010829ed40();
      puVar23 = extraout_x8_01;
      if (!bVar6 || bVar8) {
        puVar23 = extraout_x9_00;
      }
      if ((long)puVar23 - 1U == 0) {
        puVar23 = (uint *)0x2;
      }
      else if (((ulong)puVar23 & (long)puVar23 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
        puVar22 = *(uint **)(lVar18 + 0x10);
      }
      uVar7 = puVar23 == puVar22;
      if (puVar22 < puVar23) {
LAB_10829cec4:
        puVar22 = puVar23;
        if ((ulong)puVar22 >> 0x3d != 0) {
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10829d434);
          (*pcVar4)();
        }
        lVar21 = (long)puVar22 << 3;
        __Znwm(lVar21);
        func_0x00010829ea9c(lVar18 + 8,lVar21);
        *(uint **)(lVar18 + 0x10) = puVar22;
        lVar21 = *(long *)(lVar18 + 8);
        for (puVar23 = (uint *)0x0; puVar22 != puVar23; puVar23 = (uint *)((long)puVar23 + 1)) {
          *(undefined8 *)(lVar21 + (long)puVar23 * 8) = 0;
        }
        plVar25 = (long *)*plVar20;
        uVar7 = 1;
        if (plVar25 != (long *)0x0) {
          puVar23 = (uint *)plVar25[1];
          uVar14 = (long)puVar22 - 1;
          uVar11 = 0;
          if (puVar22 != (uint *)0x0) {
            uVar11 = (ulong)puVar23 / (ulong)puVar22;
          }
          puVar13 = puVar23;
          if (puVar22 <= puVar23) {
            puVar13 = (uint *)((long)puVar23 - uVar11 * (long)puVar22);
          }
          uVar7 = ((ulong)puVar22 & uVar14) == 0;
          if ((bool)uVar7) {
            puVar13 = (uint *)((ulong)puVar23 & uVar14);
          }
          *(long **)(lVar21 + (long)puVar13 * 8) = plVar20;
          while (plVar12 = plVar25, plVar25 = (long *)*plVar12, plVar25 != (long *)0x0) {
            puVar23 = (uint *)plVar25[1];
            if (((ulong)puVar22 & uVar14) == 0) {
              puVar23 = (uint *)((ulong)puVar23 & uVar14);
            }
            else if (puVar22 <= puVar23) {
              uVar11 = 0;
              if (puVar22 != (uint *)0x0) {
                uVar11 = (ulong)puVar23 / (ulong)puVar22;
              }
              puVar23 = (uint *)((long)puVar23 - uVar11 * (long)puVar22);
            }
            uVar7 = puVar23 == puVar13;
            if (!(bool)uVar7) {
              if (*(long *)(lVar21 + (long)puVar23 * 8) == 0) {
                *(long **)(lVar21 + (long)puVar23 * 8) = plVar12;
                puVar13 = puVar23;
              }
              else {
                *plVar12 = *plVar25;
                func_0x00010829ee7c();
                lVar21 = extraout_x8_02;
                uVar14 = extraout_x9_01;
                plVar25 = extraout_x10;
                puVar13 = extraout_x11;
              }
            }
          }
        }
      }
      else if (puVar23 < puVar22) {
        puVar13 = (uint *)(long)((float)*(ulong *)(lVar18 + 0x20) / *(float *)(lVar18 + 0x28));
        if ((puVar22 < (uint *)0x3) || (((ulong)puVar22 & (long)puVar22 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else {
          func_0x00010829edf0();
        }
        if (puVar23 <= puVar13) {
          puVar23 = puVar13;
        }
        uVar7 = puVar23 == puVar22;
        if (puVar23 < puVar22) {
          if (puVar23 != (uint *)0x0) goto LAB_10829cec4;
          func_0x00010829ea9c(lVar18 + 8,0);
          puVar22 = (uint *)0x0;
          *(undefined8 *)(lVar18 + 0x10) = 0;
        }
        else {
          puVar22 = *(uint **)(lVar18 + 0x10);
        }
      }
      func_0x00010829ef08();
      if ((bool)uVar7) {
        puVar23 = (uint *)(extraout_x8_03 & (ulong)puVar15);
      }
      else {
        puVar23 = puVar15;
        if (puVar22 <= puVar15) {
          uVar11 = 0;
          if (puVar22 != (uint *)0x0) {
            uVar11 = (ulong)puVar15 / (ulong)puVar22;
          }
          puVar23 = (uint *)((long)puVar15 - uVar11 * (long)puVar22);
        }
      }
    }
    lVar21 = *(long *)(lVar18 + 8);
    plVar25 = *(long **)(lVar21 + (long)puVar23 * 8);
    if (plVar25 == (long *)0x0) {
      *plVar17 = *plVar20;
      *plVar20 = (long)plVar17;
      *(long **)(lVar21 + (long)puVar23 * 8) = plVar20;
      if (*plVar17 != 0) {
        puVar15 = *(uint **)(*plVar17 + 8);
        if (((ulong)puVar22 & (long)puVar22 - 1U) == 0) {
          puVar15 = (uint *)((ulong)puVar15 & (long)puVar22 - 1U);
        }
        else if (puVar22 <= puVar15) {
          uVar11 = 0;
          if (puVar22 != (uint *)0x0) {
            uVar11 = (ulong)puVar15 / (ulong)puVar22;
          }
          puVar15 = (uint *)((long)puVar15 - uVar11 * (long)puVar22);
        }
        *(long **)(lVar21 + (long)puVar15 * 8) = plVar17;
      }
    }
    else {
      *plVar17 = *plVar25;
      *plVar25 = (long)plVar17;
    }
    plStack_88 = (long *)0x0;
    *(long *)(lVar18 + 0x20) = *(long *)(lVar18 + 0x20) + 1;
    FUN_10829eab4(&plStack_88);
LAB_10829d114:
    cVar9 = (char)plVar17[3];
    plVar12 = (long *)((ulong)param_5 & 0xffffffff);
    if (cVar9 == '\0') {
      uVar7 = 0xe;
      if (((ulong)param_5 & 1) != 0) {
        uVar7 = 0xf;
      }
      *(undefined1 *)(plVar17 + 3) = uVar7;
      *(undefined8 *)((long)plVar17 + 0x24) = 0;
      *(undefined8 *)((long)plVar17 + 0x1c) = 0;
      *(undefined4 *)((long)plVar17 + 0x2c) = 0;
      FUN_1083a3c34(&plStack_88,&UNK_10f483903);
      func_0x00010829eebc(**(undefined8 **)(param_2 + 0xe),plStack_88 + 1);
      lVar18 = 0x40;
      if (iStack_a0 != 1) {
        lVar18 = 0x10;
      }
      plVar20 = *(long **)((long)param_2 + lVar18);
      lVar18 = *plVar20;
      *(int *)(plVar17 + 7) = (int)plVar20[1];
      plVar17[6] = lVar18;
      func_0x0001083a34dc(plVar17 + 8,plVar20 + 2);
      func_0x0001083a34dc(plVar17 + 9,plVar20 + 3);
      func_0x0001083a34dc(plVar17 + 10,plVar20 + 4);
      *(int *)(plVar17 + 0xb) = (int)uStack_98;
      FUN_1083a3ca0(plStack_88);
      cVar9 = (char)plVar17[3];
    }
    FUN_10829ea88(&plStack_88,cVar9,plVar17[5]);
    func_0x00010829eeb0();
    func_0x00010829eec8();
  }
  *(undefined1 *)(plVar24 + 8) = 0;
LAB_10829d1ec:
  lVar18 = 0;
  do {
    if (*(int *)(param_4 + 0x20) <= lVar18) {
      return;
    }
    lVar21 = *(long *)(*(long *)(param_4 + 0x18) + lVar18 * 8);
    if (lVar21 != 0) {
      FUN_10829cab8(param_3,param_3,lVar21,(uint)plVar12 & 1,lStack_90,uStack_98,iStack_a0);
      if (((char)plVar24[3] == '\0') &&
         (uVar7 = *(int *)(lVar21 + 0x34) + -5 < 0, 1 < *(int *)(lVar21 + 0x34) - 3U)) {
        plVar25 = *(long **)(param_2 + 6);
        plVar17 = plVar25 + 3;
        FUN_10829e88c(plVar17,lVar21);
        plVar20 = (long *)plVar25[1];
        if (plVar20 != (long *)0x0) {
          uVar11 = (long)plVar20 - 1;
          if (((ulong)plVar20 & uVar11) == 0) {
            plVar12 = (long *)(uVar11 & (ulong)plVar17);
            uVar7 = false;
          }
          else {
            uVar7 = (long)plVar17 - (long)plVar20 < 0;
            plVar12 = plVar17;
            if (plVar20 <= plVar17) {
              uVar14 = 0;
              if (plVar20 != (long *)0x0) {
                uVar14 = (ulong)plVar17 / (ulong)plVar20;
              }
              plVar12 = (long *)((long)plVar17 - uVar14 * (long)plVar20);
            }
          }
          plVar26 = *(long **)(*plVar25 + (long)plVar12 * 8);
          if (plVar26 != (long *)0x0) {
            do {
              while( true ) {
                plVar26 = (long *)*plVar26;
                if (plVar26 == (long *)0x0) goto LAB_10829d2fc;
                plVar16 = (long *)plVar26[1];
                if (plVar16 != plVar17) break;
                uVar7 = plVar26[2] - lVar21 < 0;
                if (plVar26[2] == lVar21) goto LAB_10829d3f8;
              }
              if (((ulong)plVar20 & uVar11) == 0) {
                plVar16 = (long *)((ulong)plVar16 & uVar11);
              }
              else if (plVar20 <= plVar16) {
                uVar14 = 0;
                if (plVar20 != (long *)0x0) {
                  uVar14 = (ulong)plVar16 / (ulong)plVar20;
                }
                plVar16 = (long *)((long)plVar16 - uVar14 * (long)plVar20);
              }
              uVar7 = (long)plVar16 - (long)plVar12 < 0;
            } while (plVar16 == plVar12);
          }
        }
LAB_10829d2fc:
        plVar16 = plVar25 + 2;
        plVar26 = plVar17;
        func_0x00010829ee94();
        uStack_78 = 1;
        *plVar26 = 0;
        plVar26[1] = (long)plVar17;
        plVar26[2] = lVar21;
        plStack_88 = plVar26;
        plStack_80 = plVar16;
        func_0x00010829ed70();
        if ((plVar20 == (long *)0x0) || (func_0x00010829ef20(), (bool)uVar7)) {
          bVar6 = (long *)0x2 < plVar20;
          bVar8 = plVar20 == (long *)0x3;
          func_0x00010829ed40((long)plVar20 << 1);
          uVar1 = extraout_x8_04;
          if (!bVar6 || bVar8) {
            uVar1 = extraout_x9_02;
          }
          FUN_10829e4a4(plVar25,uVar1);
          plVar20 = (long *)plVar25[1];
          if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
            plVar12 = (long *)((long)plVar20 - 1U & (ulong)plVar17);
          }
          else {
            plVar12 = plVar17;
            if (plVar20 <= plVar17) {
              uVar11 = 0;
              if (plVar20 != (long *)0x0) {
                uVar11 = (ulong)plVar17 / (ulong)plVar20;
              }
              plVar12 = (long *)((long)plVar17 - uVar11 * (long)plVar20);
            }
          }
        }
        lVar21 = *plVar25;
        plVar17 = *(long **)(lVar21 + (long)plVar12 * 8);
        if (plVar17 == (long *)0x0) {
          *plVar26 = *plVar16;
          *plVar16 = (long)plVar26;
          *(long **)(lVar21 + (long)plVar12 * 8) = plVar16;
          if (*plVar26 != 0) {
            plVar17 = *(long **)(*plVar26 + 8);
            if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
              plVar17 = (long *)((ulong)plVar17 & (long)plVar20 - 1U);
            }
            else if (plVar20 <= plVar17) {
              uVar11 = 0;
              if (plVar20 != (long *)0x0) {
                uVar11 = (ulong)plVar17 / (ulong)plVar20;
              }
              plVar17 = (long *)((long)plVar17 - uVar11 * (long)plVar20);
            }
            *(long **)(lVar21 + (long)plVar17 * 8) = plVar26;
          }
        }
        else {
          *plVar26 = *plVar17;
          *plVar17 = (long)plVar26;
        }
        func_0x00010829edb8();
LAB_10829d3f8:
        bVar10 = *(byte *)(plVar26 + 8);
        plVar12 = (long *)((ulong)param_5 & 0xffffffff);
      }
      else {
        bVar10 = 0;
      }
      *(byte *)(plVar24 + 8) = bVar10 | *(byte *)(plVar24 + 8);
    }
    lVar18 = lVar18 + 1;
  } while( true );
}



/* Entry: 10829d478; end: 10829dbe7;  */

long **** FUN_10829d478(long param_1,undefined *param_2,long ****param_3)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long ***ppplVar7;
  long ***ppplVar8;
  code *pcVar9;
  undefined1 uVar10;
  long ***ppplVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  undefined *puVar14;
  ulong uVar15;
  long ****extraout_x8;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  long ****pppplVar22;
  undefined *puVar23;
  ulong uVar24;
  long ****pppplVar25;
  long *plVar26;
  undefined *puVar27;
  long ***ppplVar28;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  long ***ppplStack_200;
  long ***ppplStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  long ***ppplStack_1e0;
  long ***ppplStack_1d8;
  long ***ppplStack_1d0;
  long ***ppplStack_1c0;
  undefined *puStack_1b8;
  long ***ppplStack_1b0;
  long ***ppplStack_1a8;
  long ***ppplStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long ***ppplStack_188;
  undefined4 auStack_180 [2];
  long ***ppplStack_178;
  long ***ppplStack_170;
  long ***appplStack_168 [6];
  long ***ppplStack_138;
  undefined1 auStack_130 [8];
  long ***ppplStack_128;
  undefined1 auStack_118 [48];
  long ***ppplStack_e8;
  long ***ppplStack_e0;
  long ***ppplStack_d8;
  long ***ppplStack_d0;
  long ***ppplStack_c8;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  long ***ppplStack_b0;
  undefined1 uStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  long ***appplStack_80 [2];
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppplStack_1a0 = (long ***)appplStack_80;
  plVar26 = (long *)(param_1 + 0x18);
  ppplStack_90 = (long ***)0x0;
  ppplStack_88 = (long ***)0x0;
  appplStack_80[0] = (long ***)0x0;
  ppplStack_1c0 = (long ***)param_3;
  puStack_1b8 = param_2;
  do {
    plVar26 = (long *)*plVar26;
    if (plVar26 == (long *)0x0) {
      puVar27 = &DAT_10f38bea1;
      pppplVar12 = (long ****)ppplStack_1c0;
      puVar20 = puStack_1b8;
      puVar23 = &DAT_10f638b90;
      pppplVar13 = (long ****)0x1138270b0;
      do {
        ppplVar11 = ppplStack_90;
        if (ppplStack_90 == ppplStack_88) {
          uVar10 = true;
          if (*(long *)(param_1 + 0x20) != 0) {
            func_0x00010828e7d4(param_1 + 8,*(undefined8 *)(param_1 + 0x18));
            *(undefined8 *)(param_1 + 0x18) = 0;
            lVar17 = *(long *)(param_1 + 0x10);
            for (lVar21 = 0; uVar10 = lVar17 == lVar21, !(bool)uVar10; lVar21 = lVar21 + 1) {
              *(undefined8 *)(*(long *)(param_1 + 8) + lVar21 * 8) = 0;
            }
            *(undefined8 *)(param_1 + 0x20) = 0;
          }
          pppplVar13 = &ppplStack_90;
          func_0x00010829e980();
          func_0x00010829edd0(uStack_70);
          if ((bool)uVar10) {
            return pppplVar13;
          }
          ___stack_chk_fail();
          FUN_1083a3ca0(ppplStack_e8);
          func_0x00010827024c(&ppplStack_188);
          FUN_1083a3ca0(ppplStack_c0);
          func_0x00010827024c(&ppplStack_138);
          pppplVar22 = &ppplStack_90;
          func_0x00010829e980();
          func_0x00010829ed68();
          cVar4 = *(char *)pppplVar22;
          pcStack_1e8 = FUN_10829dbe8;
          puStack_210 = puVar23;
          puStack_208 = puVar20;
          ppplStack_200 = (long ***)pppplVar12;
          ppplStack_1f8 = (long ***)pppplVar13;
          puStack_1f0 = &stack0xfffffffffffffff0;
          FUN_1083a3348(&uStack_218,pppplVar22[1]);
          FUN_10828e934(extraout_x8,&uStack_218,(long)cVar4,1);
          FUN_1083a3ca0(uStack_218);
          return extraout_x8;
        }
        FUN_1083a3348(&uStack_190,puVar23);
        func_0x00010829eefc(&ppplStack_138);
        FUN_1083a3ca0(uStack_190);
        if (((long ****)ppplStack_128 != (long ****)0x0) && ((long ****)ppplStack_128 != pppplVar13)
           ) {
          piVar1 = (int *)((long)ppplStack_128 + 4);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        ppplStack_c0 = ppplStack_128;
        FUN_108275af8(&ppplStack_188,ppplVar11 + 4);
        ppplVar28 = (long ***)*ppplVar11;
LAB_10829d720:
        do {
          ppplVar28 = (long ***)ppplVar28[5];
          if (ppplVar28 == (long ***)0x0) break;
          uVar24 = *(ulong *)(param_1 + 0x10);
          if ((uVar24 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
            uVar18 = param_1 + 0x20;
            FUN_10829e88c(uVar18,ppplVar28);
            uVar15 = uVar24 - 1;
            if ((uVar24 & uVar15) == 0) {
              uVar16 = uVar18 & uVar15;
            }
            else {
              uVar16 = uVar18;
              if (uVar24 <= uVar18) {
                uVar16 = 0;
                if (uVar24 != 0) {
                  uVar16 = uVar18 / uVar24;
                }
                uVar16 = uVar18 - uVar16 * uVar24;
              }
            }
            plVar26 = *(long **)(*(long *)(param_1 + 8) + uVar16 * 8);
            if (plVar26 != (long *)0x0) {
              do {
                while( true ) {
                  plVar26 = (long *)*plVar26;
                  if (plVar26 == (long *)0x0) goto LAB_10829d7c4;
                  uVar19 = plVar26[1];
                  if (uVar19 != uVar18) break;
                  if ((long ***)plVar26[2] == ppplVar28) {
                    FUN_10829dbe8(&ppplStack_e8,plVar26 + 3);
                    ppplVar8 = appplStack_168[0];
                    ppplVar7 = ppplStack_170;
                    ppplVar28 = ppplStack_178;
                    ppplStack_188 = ppplStack_e8;
                    auStack_180[0] = ppplStack_e0._0_4_;
                    if (ppplStack_178 != ppplStack_d8) {
                      ppplStack_178 = ppplStack_d8;
                      ppplStack_d8 = ppplVar28;
                    }
                    if (ppplStack_170 != ppplStack_d0) {
                      ppplStack_170 = ppplStack_d0;
                      ppplStack_d0 = ppplVar7;
                    }
                    if (appplStack_168[0] != ppplStack_c8) {
                      appplStack_168[0] = ppplStack_c8;
                      ppplStack_c8 = ppplVar8;
                    }
                    func_0x00010829eea8();
                    goto LAB_10829d88c;
                  }
                }
                if ((uVar24 & uVar15) == 0) {
                  uVar19 = uVar19 & uVar15;
                }
                else if (uVar24 <= uVar19) {
                  uVar6 = 0;
                  if (uVar24 != 0) {
                    uVar6 = uVar19 / uVar24;
                  }
                  uVar19 = uVar19 - uVar6 * uVar24;
                }
              } while (uVar19 == uVar16);
            }
          }
LAB_10829d7c4:
          if (*(int *)((long)ppplVar28 + 0x34) == 2) {
            FUN_1083a3348(&uStack_198,puVar23);
            func_0x00010829eefc(&ppplStack_e8);
            FUN_1083a3ca0(uStack_198);
            ppplStack_1e0 = ppplStack_d8 + 1;
            FUN_1083a3a90(&ppplStack_c0,&UNK_10f48364e);
            func_0x00010829eea8();
            goto LAB_10829d720;
          }
        } while (*(int *)((long)ppplVar28 + 0x34) != 3);
LAB_10829d88c:
        ppplStack_e8 = (long ***)pppplVar13;
        if ((char)ppplStack_188 == '\x0e') {
          ppplStack_1e0 = ppplStack_178 + 1;
          FUN_1083a3c34(&ppplStack_98,&UNK_10f483654);
          ppplVar28 = ppplStack_e8;
          if (ppplStack_e8 != ppplStack_98) {
            ppplStack_e8 = ppplStack_98;
            ppplStack_98 = ppplVar28;
          }
          FUN_1083a3ca0(ppplStack_98);
        }
        else {
          func_0x0001083a34dc(&ppplStack_e8,&ppplStack_178);
        }
        FUN_10829dbfc(puVar20,puVar27);
        puVar14 = &UNK_10f483684;
        if (*(char *)(ppplVar11 + 1) == '\x0e') {
          plVar26 = *(long **)(puVar20 + 8);
          (**(code **)(*plVar26 + 0x10))(plVar26,&UNK_10f483684);
          puVar14 = &UNK_10f48365b;
          if (*(char *)(plVar26[2] + 8) == '\0') {
            puVar14 = &UNK_10f483672;
          }
        }
        ppplStack_1d0 = ppplStack_e8 + 1;
        ppplStack_1d8 = ppplStack_c0 + 1;
        ppplStack_1e0 = (long ***)ppplVar11[2];
        FUN_10828bae8(puVar20,puVar14);
        FUN_10829dbfc(puVar20,&UNK_10f480bab);
        FUN_10829dbfc(puVar20,&DAT_10f38bf4b);
        FUN_1083a3ca0(ppplStack_e8);
        func_0x00010827024c(&ppplStack_188);
        FUN_1083a3ca0(ppplStack_c0);
        func_0x00010827024c(&ppplStack_138);
        ppplVar28 = ppplStack_88;
        ppplVar11 = ppplStack_90;
        puVar14 = puVar23;
        pppplVar22 = pppplVar13;
        if (0x50 < (long)ppplStack_88 - (long)ppplStack_90) {
          pppplVar22 = (long ****)(((long)ppplStack_88 - (long)ppplStack_90) / 0x50);
          func_0x00010829eaf8(&ppplStack_138,ppplStack_90);
          puVar27 = (undefined *)((long)pppplVar22 - 2U >> 1);
          pppplVar12 = (long ****)ppplVar11;
          puVar20 = (undefined *)0x0;
          do {
            puVar3 = (undefined *)((long)puVar20 << 1 | 1);
            puVar2 = (undefined *)((long)puVar20 * 2 + 2);
            puVar14 = puVar3;
            pppplVar25 = pppplVar12 + (long)puVar20 * 10 + 10;
            if (((long)puVar2 < (long)pppplVar22) &&
               (puVar14 = puVar2, pppplVar25 = pppplVar12 + (long)puVar20 * 10 + 0x14,
               *(int *)(pppplVar12 + (long)puVar20 * 10 + 0x13) <=
               *(int *)(pppplVar12 + (long)puVar20 * 10 + 0x1d))) {
              puVar14 = puVar3;
              pppplVar25 = pppplVar12 + (long)puVar20 * 10 + 10;
            }
            FUN_10829ed10(pppplVar12,pppplVar25);
            pppplVar12 = pppplVar25;
            puVar20 = puVar14;
          } while ((long)puVar14 <= (long)puVar27);
          pppplVar12 = (long ****)(ppplVar28 + -10);
          if (pppplVar25 == pppplVar12) {
            FUN_10829ed10(pppplVar25,&ppplStack_138);
            func_0x00010829ee4c();
          }
          else {
            FUN_10829ed10(pppplVar25,pppplVar12);
            func_0x00010829ee4c();
            FUN_10829ed10(pppplVar12,&ppplStack_138);
            FUN_10829ec40(ppplVar11,pppplVar25 + 10,
                          ((long)(pppplVar25 + 10) - (long)ppplVar11) / 0x50);
          }
          func_0x00010827024c(auStack_118);
          pppplVar12 = pppplVar13;
          puVar20 = puVar23;
        }
        FUN_10829e9b4(&ppplStack_90,ppplStack_88 + -10);
        puVar23 = puVar14;
        pppplVar13 = pppplVar22;
      } while( true );
    }
    ppplStack_188 = (long ***)plVar26[2];
    FUN_10829eb68(auStack_180,plVar26 + 3);
    ppplStack_138 = ppplStack_188;
    FUN_10829eb68(auStack_130,auStack_180);
    if (ppplStack_88 < appplStack_80[0]) {
      func_0x00010829eaf8(ppplStack_88,&ppplStack_138);
      ppplStack_88 = ppplStack_88 + 10;
    }
    else {
      lVar21 = (long)ppplStack_88 - (long)ppplStack_90;
      uVar24 = lVar21 / 0x50 + 1;
      if (0x333333333333333 < uVar24) {
        FUN_10829eb54();
LAB_10829db18:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10829db1c);
        (*pcVar9)();
      }
      uVar15 = ((long)appplStack_80[0] - (long)ppplStack_90) / 0x50;
      uVar18 = uVar15 * 2;
      if (uVar18 < uVar24 || uVar18 - uVar24 == 0) {
        uVar18 = uVar24;
      }
      if (0x199999999999998 < uVar15) {
        uVar18 = 0x333333333333333;
      }
      ppplStack_c8 = ppplStack_1a0;
      if (uVar18 == 0) {
        ppplVar11 = (long ***)0x0;
      }
      else {
        if (0x333333333333333 < uVar18) {
          func_0x000104bd35f4();
          goto LAB_10829db18;
        }
        ppplVar11 = (long ***)(uVar18 * 0x50);
        __Znwm();
      }
      lVar21 = (long)ppplVar11 + lVar21;
      ppplStack_d0 = ppplVar11 + uVar18 * 10;
      ppplStack_e8 = ppplVar11;
      ppplStack_e0 = (long ***)lVar21;
      func_0x00010829eaf8(lVar21,&ppplStack_138);
      ppplVar11 = ppplStack_88;
      pppplVar13 = (long ****)ppplStack_90;
      ppplStack_d8 = (long ***)(lVar21 + 0x50);
      pppplVar22 = (long ****)(lVar21 + (((long)ppplStack_88 - (long)ppplStack_90) / -0x50) * 0x50);
      ppplStack_b8 = (long ***)&ppplStack_a0;
      ppplStack_c0 = ppplStack_1a0;
      ppplStack_b0 = (long ***)&ppplStack_98;
      uStack_a8 = 0;
      ppplStack_98 = (long ***)pppplVar22;
      ppplStack_a0 = (long ***)pppplVar22;
      for (pppplVar12 = (long ****)ppplStack_90; pppplVar12 != (long ****)ppplVar11;
          pppplVar12 = pppplVar12 + 10) {
        *ppplStack_98 = (long **)*pppplVar12;
        FUN_10829eb68(ppplStack_98 + 1,pppplVar12 + 1);
        ppplStack_98 = ppplStack_98 + 10;
      }
      uStack_a8 = 1;
      for (; pppplVar13 != (long ****)ppplVar11; pppplVar13 = pppplVar13 + 10) {
        func_0x00010827024c(pppplVar13 + 4);
      }
      FUN_10829eba4(&ppplStack_c0);
      ppplVar11 = appplStack_80[0];
      ppplStack_1a8 = ppplStack_d0;
      ppplStack_1b0 = ppplStack_d8;
      appplStack_80[0] = ppplStack_d0;
      ppplStack_88 = ppplStack_d8;
      ppplStack_d8 = ppplStack_90;
      ppplStack_d0 = ppplVar11;
      ppplStack_e8 = ppplStack_90;
      ppplStack_e0 = ppplStack_90;
      ppplStack_90 = (long ***)pppplVar22;
      FUN_10829ebf8(&ppplStack_e8);
      ppplStack_88 = ppplStack_1b0;
    }
    FUN_10829ec40(ppplStack_90,ppplStack_88,((long)ppplStack_88 - (long)ppplStack_90) / 0x50);
    func_0x00010827024c(auStack_118);
    func_0x00010827024c(appplStack_168);
  } while( true );
}



/* Entry: 10829dbe8; end: 10829dbfb;  */

undefined8 FUN_10829dbe8(undefined8 param_1,char *param_2)

{
  char cVar1;
  undefined8 uStack_38;
  
  cVar1 = *param_2;
  FUN_1083a3348(&uStack_38,*(undefined8 *)(param_2 + 8));
  FUN_10828e934(param_1,&uStack_38,(long)cVar1,1);
  FUN_1083a3ca0(uStack_38);
  return param_1;
}



/* Entry: 10829dbfc; end: 10829dc1f;  */

/* WARNING: Removing unreachable block (ram,0x0001083a3878) */

void FUN_10829dbfc(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined1 *puVar4;
  uint *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 auStack_58 [8];
  
  func_0x00010828bb68();
  if (param_2 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = param_1;
    FUN_1083a3d50();
  }
  if (plVar6 != (long *)0x0) {
    uVar7 = (ulong)*(uint *)*param_1;
    plVar2 = (long *)(uVar7 ^ 0xffffffff);
    if ((long)plVar6 + uVar7 >> 0x20 == 0) {
      plVar2 = plVar6;
    }
    if (plVar2 != (long *)0x0) {
      uVar1 = (long)plVar2 + uVar7;
      if (((uint *)*param_1)[1] == 1 && (uVar1 ^ uVar7) < 4) {
        plVar6 = param_1;
        func_0x0001083a3dbc(param_1,0xffffffffffffffff,param_2);
        func_0x0001083a3dd4((long)plVar6 + uVar7);
        *(undefined1 *)((long)plVar6 + uVar1) = 0;
        *(int *)*param_1 = (int)uVar1;
      }
      else {
        puVar4 = auStack_58;
        FUN_1083a3310(puVar4,(long)plVar2 + (ulong)*(uint *)*param_1);
        func_0x0001083a3de0();
        if (uVar7 != 0) {
          func_0x0001083a3d9c(puVar4,*param_1 + 8);
        }
        func_0x0001083a3dd4(puVar4 + uVar7);
        puVar5 = (uint *)*param_1;
        lVar3 = *puVar5 - uVar7;
        if (uVar7 <= *puVar5 && lVar3 != 0) {
          _memcpy(puVar4 + uVar7 + (long)plVar2,(long)puVar5 + uVar7 + 8,lVar3);
          puVar5 = (uint *)*param_1;
        }
        func_0x0001083a3cdc(puVar5);
      }
    }
  }
  return;
}



/* Entry: 10829dc20; end: 10829dcd3;  */

void FUN_10829dc20(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  long *plVar1;
  undefined1 auStack_38 [8];
  
  func_0x00010828bb5c(param_3,0,2,0x17,&UNK_10f483691,auStack_38);
  *param_5 = (int)param_3;
  FUN_10828bae8((long)param_2 + *(long *)(*param_2 + -0x18),&UNK_10f483697);
  plVar1 = *(long **)((long)param_2 + *(long *)(*param_2 + -0x18) + 8);
  (**(code **)(*plVar1 + 0x10))();
  if (*(char *)(plVar1[2] + 0x65) == '\x01') {
    FUN_10828bae8((long)param_2 + *(long *)(*param_2 + -0x18),&UNK_10f4836a0);
  }
  return;
}



/* Entry: 10829dcd4; end: 10829dddb;  */

undefined1 (*) [16]
FUN_10829dcd4(undefined1 (*param_1) [16],undefined1 (*param_2) [16],uint *param_3,
             undefined1 (*param_4) [16],undefined1 (*param_5) [16],long param_6,undefined4 *param_7,
             long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  code *pcVar5;
  undefined1 uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  undefined4 *puVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  long lVar13;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  uStack_40 = (undefined4)unaff_x24;
  uStack_3c = (undefined4)((ulong)unaff_x24 >> 0x20);
  uStack_38 = (undefined4)unaff_x23;
  uStack_34 = (undefined4)((ulong)unaff_x23 >> 0x20);
  uStack_30 = (undefined4)unaff_x22;
  uStack_2c = (undefined4)((ulong)unaff_x22 >> 0x20);
  uStack_28 = (undefined4)unaff_x21;
  uStack_24 = (undefined4)((ulong)unaff_x21 >> 0x20);
  uStack_20 = (undefined4)unaff_x20;
  uStack_1c = (undefined4)((ulong)unaff_x20 >> 0x20);
  pcStack_48 = *(code **)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *param_3 == 0xffffffff;
  pauVar7 = param_1;
  pauVar8 = param_2;
  if (!(bool)uVar6) {
    pauVar11 = param_4;
    pauVar12 = param_5;
    if (param_5 != (undefined1 (*) [16])0x0) {
      pauVar7 = param_5;
      pauVar8 = param_4;
      FUN_10829dddc();
      if (((ulong)pauVar7 & 1) != 0) goto LAB_10829dd84;
      uVar2 = *(undefined8 *)*param_4;
      uVar3 = *(undefined8 *)(*param_4 + 8);
      uVar19 = *(undefined8 *)(param_4[1] + 8);
      uVar1 = *(undefined8 *)param_4[1];
      *(undefined8 *)param_5[2] = *(undefined8 *)param_4[2];
      *(undefined8 *)(*param_5 + 8) = uVar3;
      *(undefined8 *)*param_5 = uVar2;
      *(undefined8 *)(param_5[1] + 8) = uVar19;
      *(undefined8 *)param_5[1] = uVar1;
    }
    pauVar7 = param_4;
    FUN_1082878d0();
    if (((int)pauVar7 == 0) || ((param_2[6][3] & 1) != 0)) {
      pauVar8 = (undefined1 (*) [16])(ulong)*param_3;
      func_0x00010829edd0(pcStack_48);
      if ((bool)uVar6) {
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
        auVar16 = *param_4;
        pauVar7 = param_4 + 1;
        auVar20 = NEON_ext(*pauVar7,auVar16,4,1);
        auVar24._4_12_ = auVar20._4_12_;
        auVar24._0_4_ = auVar20._4_4_;
        auVar22._0_8_ = auVar24._0_8_;
        auVar22._8_4_ = auVar20._12_4_;
        auVar22._12_4_ = auVar20._12_4_;
        auVar21._8_8_ = auVar22._8_8_;
        auVar21._4_4_ = auVar16._4_4_;
        auVar21._0_4_ = auVar20._4_4_;
        auVar23._0_12_ = auVar21._0_12_;
        auVar23._12_4_ = auVar16._12_4_;
        auVar24 = NEON_ext(auVar23,auVar23,8,1);
        auVar16 = NEON_ext(auVar16,*pauVar7,4,1);
        auVar20._4_12_ = auVar16._4_12_;
        auVar20._0_4_ = auVar16._4_4_;
        auVar18._0_8_ = auVar20._0_8_;
        auVar18._8_4_ = auVar16._12_4_;
        auVar18._12_4_ = auVar16._12_4_;
        auVar17._8_8_ = auVar18._8_8_;
        auVar17._4_4_ = (int)((ulong)*(undefined8 *)*pauVar7 >> 0x20);
        auVar17._0_4_ = auVar16._4_4_;
        auVar16._0_12_ = auVar17._0_12_;
        auVar16._12_4_ = (int)((ulong)*(undefined8 *)(param_4[1] + 8) >> 0x20);
        auVar16 = NEON_ext(auVar16,auVar16,8,1);
        uStack_24 = auVar16._8_4_;
        uStack_20 = auVar16._12_4_;
        uStack_2c = auVar16._0_4_;
        uStack_28 = auVar16._4_4_;
        uStack_34 = auVar24._8_4_;
        uStack_30 = auVar24._12_4_;
        uStack_3c = auVar24._0_4_;
        uStack_38 = auVar24._4_4_;
        uStack_1c = *(undefined4 *)param_4[2];
        uVar9 = (ulong)pauVar8 & 0xffffffff;
        puVar10 = &uStack_3c;
        (**(code **)(*(long *)*param_1 + 0x98))();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
          return param_1;
        }
        ___stack_chk_fail();
        pcStack_48 = FUN_1082dc350;
        puVar14 = (undefined4 *)0x0;
        pauVar8 = (undefined1 (*) [16])0x0;
        puVar15 = (undefined4 *)(uVar9 + 0x1c);
        pauVar7 = param_1;
        puStack_50 = &stack0xfffffffffffffff0;
        do {
          if (puVar10 == puVar14) {
            return pauVar7;
          }
          if (param_7 == (undefined4 *)0x0) {
LAB_1082dc3bc:
            if (pauVar12 <= pauVar8) {
LAB_1082dc428:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1082dc42c);
              (*pcVar5)();
            }
            pauVar4 = (undefined1 (*) [16])(*pauVar8 + 1);
            if ((uint)puVar15[-1] < 0xb) {
              pauVar7 = param_1;
              (**(code **)(*(long *)*param_1 +
                          *(long *)(&UNK_10df166b8 + (ulong)(uint)puVar15[-1] * 8)))
                        (param_1,*(undefined4 *)(*pauVar11 + (long)pauVar8 * 4),*puVar15,
                         param_8 + *(long *)(puVar15 + -3));
            }
          }
          else {
            if (param_7 <= puVar14) goto LAB_1082dc428;
            pauVar4 = pauVar8;
            if ((*(byte *)(param_6 + (long)puVar14) & 1) == 0) goto LAB_1082dc3bc;
          }
          pauVar8 = pauVar4;
          puVar14 = (undefined4 *)((long)puVar14 + 1);
          puVar15 = puVar15 + 10;
        } while( true );
      }
      goto LAB_10829ddd8;
    }
    _uStack_58 = CONCAT44(*(undefined4 *)(*param_4 + 8),*(undefined4 *)*param_4);
    puStack_50 = *(undefined1 **)param_4[1];
    pauVar8 = (undefined1 (*) [16])(ulong)*param_3;
    (**(code **)(*(long *)*param_1 + 0x88))(param_1,pauVar8,1,&uStack_58);
    pauVar7 = param_1;
  }
LAB_10829dd84:
  func_0x00010829edd0(pcStack_48);
  if ((bool)uVar6) {
    return pauVar7;
  }
LAB_10829ddd8:
  ___stack_chk_fail();
  if (pauVar7 == pauVar8) {
    return (undefined1 (*) [16])0x1;
  }
  _memcmp();
  return (undefined1 (*) [16])(ulong)((int)pauVar7 == 0);
}



/* Entry: 10829dddc; end: 10829de0b;  */

bool FUN_10829dddc(long param_1,long param_2)

{
  if (param_1 != param_2) {
    _memcmp(param_1,param_2,0x24);
    return (int)param_1 == 0;
  }
  return true;
}



/* Entry: 10829de0c; end: 10829de5b;  */

void FUN_10829de0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  
  func_0x00010829ede4();
  func_0x00010829ee9c(auStack_48,param_3);
  FUN_10829dec8();
  func_0x00010829ee10();
  return;
}



/* Entry: 10829de5c; end: 10829dec7;  */

undefined8
FUN_10829de5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_38;
  
  FUN_1083a3348(&uStack_38);
  FUN_10829e9f0(param_1,&uStack_38,param_3,param_4);
  FUN_1083a3ca0(uStack_38);
  return param_1;
}



/* Entry: 10829dec8; end: 10829df5f;  */

void FUN_10829dec8(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  long lStack_38;
  
  FUN_10829ea28(&lStack_38,param_1,*(long *)(param_2 + 0x10) + 8);
  *param_3 = *param_2;
  func_0x0001083a3534(param_3 + 0x10,lStack_38 + 8);
  FUN_10829ca9c();
  FUN_10828bae8(param_1,&UNK_10f4837a0);
  FUN_1083a3ca0(lStack_38);
  return;
}



/* Entry: 10829df60; end: 10829dfeb;  */

void FUN_10829df60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_68 [40];
  
  func_0x00010829ee9c(auStack_68,param_5);
  FUN_10829dfec(param_1,param_2,param_3,auStack_68,param_6,&UNK_10f4836b8,param_4,param_7);
  func_0x00010829ee10();
  return;
}



/* Entry: 10829dfec; end: 10829e1b7;  */

void FUN_10829dfec(undefined8 param_1,undefined8 param_2,long param_3,char *param_4,uint param_5,
                  undefined8 param_6,undefined1 *param_7,undefined4 *param_8)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  FUN_10829ea28(&lStack_68,param_1,*(long *)(param_4 + 0x10) + 8);
  uVar1 = param_5;
  func_0x0001081420b8();
  if ((uVar1 != 0) && ((*(byte *)(param_3 + 99) & 1) == 0)) {
    FUN_10829dec8(param_1,param_4,param_7);
    goto LAB_10829e174;
  }
  uVar1 = param_5;
  FUN_1082878d0();
  uVar1 = uVar1 & (*(byte *)(param_3 + 99) ^ 1);
  uVar3 = 0x10;
  if (uVar1 == 0) {
    uVar3 = 0x12;
  }
  func_0x00010828bb5c(param_2,0,1,uVar3,param_6,auStack_70);
  *param_8 = (int)param_2;
  if (*param_4 == '\x0f') {
    func_0x00010829eda4();
    if ((uVar1 & 1) == 0) {
LAB_10829e0f0:
      func_0x00010829ee44();
    }
    else {
      func_0x00010829ee44();
    }
    uVar2 = 0xf;
  }
  else {
    FUN_10828e338();
    if (param_5 != 0) {
      func_0x00010829eda4();
      goto LAB_10829e0f0;
    }
    if ((uVar1 & 1) == 0) {
      func_0x00010829ee44();
    }
    else {
      func_0x00010829eda4();
      func_0x00010829ee44();
    }
    uVar2 = 0xe;
  }
  *param_7 = uVar2;
  func_0x0001083a3534(param_7 + 0x10,lStack_68 + 8);
LAB_10829e174:
  FUN_1083a3ca0(lStack_68);
  return;
}



/* Entry: 10829e1b8; end: 10829e1d7;  */

void FUN_10829e1b8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,char *param_5,
                  uint param_6,undefined4 *param_7)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  FUN_10829ea28(&lStack_68,param_1,*(long *)(param_5 + 0x10) + 8);
  uVar1 = param_6;
  func_0x0001081420b8();
  if ((uVar1 != 0) && ((*(byte *)(param_3 + 99) & 1) == 0)) {
    FUN_10829dec8(param_1,param_5,(undefined1 *)(param_4 + 0x28));
    goto LAB_10829e174;
  }
  uVar1 = param_6;
  FUN_1082878d0();
  uVar1 = uVar1 & (*(byte *)(param_3 + 99) ^ 1);
  uVar3 = 0x10;
  if (uVar1 == 0) {
    uVar3 = 0x12;
  }
  func_0x00010828bb5c(param_2,0,1,uVar3,&UNK_10f4836c3,auStack_70);
  *param_7 = (int)param_2;
  if (*param_5 == '\x0f') {
    func_0x00010829eda4();
    if ((uVar1 & 1) == 0) {
LAB_10829e0f0:
      func_0x00010829ee44();
    }
    else {
      func_0x00010829ee44();
    }
    uVar2 = 0xf;
  }
  else {
    FUN_10828e338();
    if (param_6 != 0) {
      func_0x00010829eda4();
      goto LAB_10829e0f0;
    }
    if ((uVar1 & 1) == 0) {
      func_0x00010829ee44();
    }
    else {
      func_0x00010829eda4();
      func_0x00010829ee44();
    }
    uVar2 = 0xe;
  }
  *(undefined1 *)(param_4 + 0x28) = uVar2;
  func_0x0001083a3534(param_4 + 0x38,lStack_68 + 8);
LAB_10829e174:
  FUN_1083a3ca0(lStack_68);
  return;
}



/* Entry: 10829e1d8; end: 10829e237;  */

void FUN_10829e1d8(undefined8 *param_1,long *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  FUN_10829e238(*param_2);
  puVar3 = (undefined8 *)*param_2;
  if ((param_3 & 1) == 0) {
    uVar1 = *(undefined4 *)(puVar3 + 1);
    uVar2 = *(undefined1 *)((long)puVar3 + 0xc);
    lVar4 = param_2[2];
    *param_1 = *puVar3;
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined1 *)((long)param_1 + 0xc) = uVar2;
    *(int *)(param_1 + 2) = (int)lVar4;
  }
  else {
    uVar5 = *puVar3;
    param_1[1] = puVar3[1];
    *param_1 = uVar5;
    param_1[2] = puVar3[2];
  }
  return;
}



/* Entry: 10829e238; end: 10829e257;  */

uint FUN_10829e238(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar1 = uVar2 & 0xff;
  if (uVar2 == 1) {
    uVar1 = 0;
  }
  return uVar1 | uVar2 & 0xffffff00;
}



/* Entry: 10829e258; end: 10829e2b3;  */

void FUN_10829e258(long *param_1)

{
  long lVar1;
  
  if ((int)param_1[1] != 0) {
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    lVar1 = *param_1;
    FUN_10829e2b4();
    param_1[2] = (lVar1 + 3U & 0xfffffffffffffffc) + param_1[2];
    *param_1 = *param_1 + 0x18;
    if ((int)param_1[1] == 0) {
      *param_1 = 0;
    }
    else {
      lVar1 = *param_1;
      while (*(char *)(lVar1 + 0xc) == '\0') {
        *param_1 = lVar1 + 0x18;
        lVar1 = lVar1 + 0x18;
      }
    }
    return;
  }
  return;
}



/* Entry: 10829e2b4; end: 10829e2fb;  */

undefined8 FUN_10829e2b4(long param_1)

{
  code *pcVar1;
  
  if (*(uint *)(param_1 + 8) < 0x1a) {
    return *(undefined8 *)(&UNK_10df142d8 + (ulong)*(uint *)(param_1 + 8) * 8);
  }
  FUN_10841076c(&UNK_10f483874);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10829e2fc);
  (*pcVar1)();
}



/* Entry: 10829e2fc; end: 10829e323;  */

void FUN_10829e2fc(long *param_1)

{
  long lVar1;
  
  if ((int)param_1[1] == 0) {
    *param_1 = 0;
  }
  else {
    lVar1 = *param_1;
    while (*(char *)(lVar1 + 0xc) == '\0') {
      *param_1 = lVar1 + 0x18;
      lVar1 = lVar1 + 0x18;
    }
  }
  return;
}



/* Entry: 10829e324; end: 10829e38f;  */

void FUN_10829e324(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  ulong uVar2;
  
  func_0x00010829ede4();
  *param_1 = param_2;
  *(uint *)(param_1 + 1) = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  for (uVar2 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)); uVar2 != 0;
      uVar2 = uVar2 - 1) {
    if (*(char *)(unaff_x19 + 0xc) != '\0') {
      *(int *)(unaff_x20 + 0xc) = *(int *)(unaff_x20 + 0xc) + 1;
      lVar1 = unaff_x19;
      FUN_10829e2b4();
      *(ulong *)(unaff_x20 + 0x10) = (lVar1 + 3U & 0xfffffffffffffffc) + *(long *)(unaff_x20 + 0x10)
      ;
    }
    unaff_x19 = unaff_x19 + 0x18;
  }
  return;
}



/* Entry: 10829e390; end: 10829e39f;  */

undefined8 * FUN_10829e390(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((long)param_2 + 0xc);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = uVar1;
  param_1[2] = 0;
  FUN_10829e2fc();
  return param_1;
}



/* Entry: 10829e3a0; end: 10829e3d7;  */

long FUN_10829e3a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10829e3d8();
  FUN_108275af8(lVar1 + 0x28,param_3);
  return param_1;
}



/* Entry: 10829e3d8; end: 10829e427;  */

undefined8 * FUN_10829e3d8(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10829e4a4(param_1,*(undefined8 *)(param_2 + 8));
  FUN_10829e428(param_1,*(undefined8 *)(param_2 + 0x10),0);
  return param_1;
}



/* Entry: 10829e428; end: 10829e467;  */

void FUN_10829e428(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    FUN_10829e634(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10829e468; end: 10829e48b;  */

undefined8 FUN_10829e468(undefined8 param_1)

{
  FUN_10829e48c(param_1,0);
  return param_1;
}



/* Entry: 10829e48c; end: 10829e4a3;  */

void FUN_10829e48c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10829e4a4; end: 10829e61b;  */

void FUN_10829e4a4(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long *extraout_x9;
  ulong uVar4;
  ulong extraout_x10;
  long *plVar5;
  long *extraout_x11;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010829edf0();
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_10829e61c(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_10829e61c(param_1,lVar2);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar3 = (long *)0x0; param_2 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar7 = plVar5;
      if (param_2 <= plVar5) {
        plVar7 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar7 = (long *)((ulong)plVar5 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = param_1 + 2;
      while (plVar5 = plVar3, plVar3 = (long *)*plVar5, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar5;
            plVar7 = plVar6;
          }
          else {
            *plVar5 = *plVar3;
            func_0x00010829ee7c();
            lVar2 = extraout_x8;
            plVar3 = extraout_x9;
            uVar4 = extraout_x10;
            plVar7 = extraout_x11;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar3;
  *plVar3 = (long)plVar5;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10829e61c; end: 10829e633;  */

void FUN_10829e61c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10829e634; end: 10829e667;  */

void FUN_10829e634(void)

{
  func_0x00010829e64c();
  return;
}



/* Entry: 10829e668; end: 10829e883;  */

undefined1  [16] FUN_10829e668(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  long lVar6;
  undefined8 extraout_x9;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *unaff_x25;
  undefined1 auVar11 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar7 = param_1 + 3;
  FUN_10829e884();
  plVar10 = (long *)param_1[1];
  plVar4 = plVar7;
  if (plVar10 != (long *)0x0) {
    func_0x00010829ef08();
    if ((bool)in_ZR) {
      unaff_x25 = (long *)(extraout_x8 & (ulong)plVar7);
    }
    else {
      in_NG = (long)plVar7 - (long)plVar10 < 0;
      unaff_x25 = plVar7;
      if (plVar10 <= plVar7) {
        uVar1 = 0;
        if (plVar10 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)plVar10;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar1 * (long)plVar10);
      }
    }
    plVar9 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_10829e728;
          plVar8 = (long *)plVar9[1];
          if (plVar8 != plVar7) break;
          in_NG = plVar9[2] - *param_2 < 0;
          if (plVar9[2] == *param_2) {
            uVar5 = 0;
            plVar4 = plVar9;
            goto LAB_10829e850;
          }
        }
        if (((ulong)plVar10 & extraout_x8) == 0) {
          plVar8 = (long *)((ulong)plVar8 & extraout_x8);
        }
        else if (plVar10 <= plVar8) {
          uVar1 = 0;
          if (plVar10 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)plVar10;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)plVar10);
        }
        in_NG = (long)plVar8 - (long)unaff_x25 < 0;
      } while (plVar8 == unaff_x25);
    }
  }
LAB_10829e728:
  plVar9 = param_1 + 2;
  func_0x00010829ee94();
  uStack_58 = 0;
  *plVar4 = 0;
  plVar4[1] = (long)plVar7;
  plVar4[2] = *param_3;
  plStack_68 = plVar4;
  plStack_60 = plVar9;
  FUN_108275af8(plVar4 + 3,param_3 + 1);
  *(char *)(plVar4 + 8) = (char)param_3[6];
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  if ((plVar10 == (long *)0x0) ||
     (func_0x00010829ef20((float)(param_1[3] + 1),(int)param_1[4],(float)plVar10), (bool)in_NG)) {
    func_0x00010829ee64();
    bVar2 = (long *)0x2 < plVar10;
    uVar3 = plVar10 == (long *)0x3;
    func_0x00010829ed40();
    uVar5 = extraout_x8_00;
    if (!bVar2 || (bool)uVar3) {
      uVar5 = extraout_x9;
    }
    FUN_10829e4a4(param_1,uVar5);
    plVar10 = (long *)param_1[1];
    func_0x00010829ef08();
    if ((bool)uVar3) {
      unaff_x25 = (long *)(extraout_x8_01 & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar10 <= plVar7) {
        uVar1 = 0;
        if (plVar10 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)plVar10;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar1 * (long)plVar10);
      }
    }
  }
  lVar6 = *param_1;
  plVar7 = *(long **)(lVar6 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar4 = *plVar9;
    *plVar9 = (long)plVar4;
    *(long **)(lVar6 + (long)unaff_x25 * 8) = plVar9;
    if (*plVar4 != 0) {
      plVar7 = *(long **)(*plVar4 + 8);
      if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar10 - 1U);
      }
      else if (plVar10 <= plVar7) {
        uVar1 = 0;
        if (plVar10 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)plVar10;
        }
        plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar10);
      }
      *(long **)(lVar6 + (long)plVar7 * 8) = plVar4;
    }
  }
  else {
    *plVar4 = *plVar7;
    *plVar7 = (long)plVar4;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10829e8b4(&plStack_68);
  uVar5 = 1;
LAB_10829e850:
  auVar11._8_8_ = uVar5;
  auVar11._0_8_ = plVar4;
  return auVar11;
}



/* Entry: 10829e884; end: 10829e88b;  */

void FUN_10829e884(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  func_0x000107c278cc(&uStack_18,8);
  return;
}



/* Entry: 10829e88c; end: 10829e8b3;  */

void FUN_10829e88c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x000107c278cc(&uStack_18,8);
  return;
}



/* Entry: 10829e8b4; end: 10829e9b3;  */

long * FUN_10829e8b4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010827024c(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10829e9b4; end: 10829e9ef;  */

void FUN_10829e9b4(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010829ede4();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x50) {
    func_0x00010829eed0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10829e9f0; end: 10829ea27;  */

undefined1 *
FUN_10829e9f0(undefined1 *param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = param_4;
  FUN_1083a33c4(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = 0x1138270b0;
  *(undefined8 *)(param_1 + 0x20) = 0x1138270b0;
  return param_1;
}



/* Entry: 10829ea28; end: 10829ea5b;  */

void FUN_10829ea28(long param_1)

{
  *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
  FUN_1083a3c34(&UNK_10f4837b1);
  return;
}



/* Entry: 10829ea5c; end: 10829ea87;  */

undefined8 * FUN_10829ea5c(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  FUN_10829e2fc();
  return param_1;
}



/* Entry: 10829ea88; end: 10829eab3;  */

undefined8 FUN_10829ea88(undefined8 param_1,char param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  FUN_1083a3348(&uStack_38,param_3);
  FUN_10828e934(param_1,&uStack_38,(int)param_2,2);
  FUN_1083a3ca0(uStack_38);
  return param_1;
}



/* Entry: 10829eab4; end: 10829eb53;  */

long * FUN_10829eab4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010827024c(lVar1 + 0x30);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10829eb54; end: 10829eb67;  */

void FUN_10829eb54(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x00010829ede4();
  uVar3 = param_2[1];
  uVar2 = *param_2;
  puVar1[2] = param_2[2];
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  FUN_108275af8(puVar1 + 3,param_2 + 3);
  *(undefined4 *)(unaff_x20 + 0x40) = *(undefined4 *)(unaff_x19 + 0x40);
  return;
}



/* Entry: 10829eb68; end: 10829eba3;  */

void FUN_10829eb68(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010829ede4();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_108275af8(param_1 + 3,param_2 + 3);
  *(undefined4 *)(unaff_x20 + 0x40) = *(undefined4 *)(unaff_x19 + 0x40);
  return;
}



/* Entry: 10829eba4; end: 10829ebf7;  */

long FUN_10829eba4(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x50) {
      func_0x00010829eed0();
    }
  }
  return param_1;
}



/* Entry: 10829ebf8; end: 10829ec3f;  */

long * FUN_10829ebf8(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x50;
    func_0x00010829eed0();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10829ec40; end: 10829ed0f;  */

void FUN_10829ec40(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [40];
  int iStack_48;
  
  if (1 < param_3) {
    uVar2 = param_3 - 2U >> 1;
    lVar3 = param_1 + uVar2 * 0x50;
    if (*(int *)(param_2 + -8) < *(int *)(lVar3 + 0x48)) {
      func_0x00010829eaf8(auStack_90,param_2 + -0x50);
      lVar1 = param_2 + -0x50;
      do {
        lVar4 = lVar3;
        FUN_10829ed10(lVar1,lVar4);
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1 >> 1;
        lVar3 = param_1 + uVar2 * 0x50;
        lVar1 = lVar4;
      } while (iStack_48 < *(int *)(lVar3 + 0x48));
      FUN_10829ed10(lVar4,auStack_90);
      func_0x00010827024c(auStack_70);
    }
  }
  return;
}



/* Entry: 10829ed10; end: 10829ed3f;  */

void FUN_10829ed10(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010829ede4();
  func_0x00010829ee28();
  FUN_10827535c(param_1 + 0x20,param_2 + 0x20);
  *(undefined4 *)(unaff_x20 + 0x48) = *(undefined4 *)(unaff_x19 + 0x48);
  return;
}



/* Entry: 10829ed40; end: 10829ef67;  */

float FUN_10829ed40(float param_1,float param_2)

{
  return param_1 / param_2;
}



/* Entry: 10829ef68; end: 10829efaf;  */

undefined8 * FUN_10829ef68(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a35a90;
  FUN_10829efb0(param_1,0);
  FUN_1082a0044(param_1 + 0xd);
  FUN_10826b6c8(param_1 + 2);
  return param_1;
}



/* Entry: 10829efb0; end: 10829f00f;  */

void FUN_10829efb0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  for (lVar3 = 0; lVar3 < *(int *)(param_1 + 0x70); lVar3 = lVar3 + 1) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x68) + lVar2);
    (*(code *)*puVar1)(puVar1[1],param_2);
    lVar2 = lVar2 + 0x10;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}



/* Entry: 10829f010; end: 10829f013;  */

void FUN_10829f010(void)

{
  return;
}



/* Entry: 10829f014; end: 10829f18f;  */

void FUN_10829f014(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,long *param_7,undefined8 param_8,
                  undefined8 param_9,int param_10,undefined4 param_11)

{
  ulong uVar1;
  long *plVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 uStack_68;
  
  plVar2 = param_2;
  uStack_68 = param_3;
  func_0x0001082a01a0();
  if ((int)plVar2 == 0) {
    uVar1 = param_2[2];
    FUN_10828a6b0(uVar1,&uStack_68,param_4,param_6,param_7,1 < param_10,param_5);
    if ((uVar1 & 1) != 0) {
      plVar2 = param_7;
      if ((int)param_6 != 0) {
        plVar2 = (long *)param_2[2];
        (**(code **)(*plVar2 + 0x48))(plVar2,param_7,param_4);
      }
      FUN_10829f190(param_2);
      (**(code **)(*param_2 + 0x130))
                (param_1,param_2,param_3,param_4,param_6,plVar2,param_8,param_9,param_10,param_11);
      if (*param_1 == 0) {
        return;
      }
      if (((param_6 & 1) == 0) && (((uint)*(undefined8 *)(param_2[2] + 0x18) >> 3 & 1) == 0)) {
        func_0x0001082a0184();
        FUN_1082a0904(extraout_x8 + extraout_x9);
      }
      if ((int)plVar2 < 2) {
        return;
      }
      if ((*(byte *)(param_2[2] + 0x19) >> 6 & 1) != 0) {
        return;
      }
      func_0x0001082a0184(*param_1);
      (**(code **)(*(long *)(extraout_x8_00 + extraout_x9_00) + 0x68))
                (extraout_x8_00 + extraout_x9_00);
      func_0x0001082a012c();
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10829f190; end: 10829f1c3;  */

void FUN_10829f190(long *param_1)

{
  if ((int)param_1[3] != 0) {
    (**(code **)(*param_1 + 0x120))();
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return;
}



/* Entry: 10829f1c4; end: 10829f263;  */

void FUN_10829f1c4(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int in_w6;
  
  iVar4 = (int)((ulong)param_3 >> 0x20);
  iVar1 = (int)param_3;
  if ((int)param_3 <= iVar4) {
    iVar1 = iVar4;
  }
  uVar3 = 0x20 - (int)LZCOUNT(iVar1);
  if (in_w6 == 0) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if ((*(ulong *)(*(long *)(param_2 + 0x10) + 0x18) & 0x400000) != 0) {
    uVar2 = ~(-1 << (ulong)(uVar3 & 0x1f));
  }
  FUN_10829f014(param_1);
  if (((in_w6 != 0) && (*param_1 != 0)) && (uVar2 != 0)) {
    *(undefined4 *)(*param_1 + 0xc) = 2;
  }
  return;
}



/* Entry: 10829f264; end: 10829f44b;  */

void FUN_10829f264(long *param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined4 param_10,undefined4 param_11,long *param_12,uint param_13,
                  undefined4 param_14,undefined8 param_15,undefined8 param_16)

{
  uint uVar1;
  uint uVar2;
  long extraout_x8;
  long extraout_x9;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lStack_68;
  
  lVar6 = *(long *)(param_2 + 0x10);
  if ((param_13 != 0) &&
     (uVar4 = param_3, FUN_10829f44c(param_3,param_11,param_12,param_13,lVar6), (uVar4 & 1) == 0)) {
    *param_1 = 0;
    return;
  }
  uVar1 = param_13;
  if ((int)param_13 < 2) {
    uVar1 = 1;
  }
  uVar4 = *(ulong *)(lVar6 + 0x18);
  uVar5 = (uint)(uVar4 >> 0x16) & 1;
  if ((param_13 != 0) && (((uint)uVar4 >> 0x16 & 1) != 0)) {
    uVar5 = 0;
    for (uVar3 = 0; uVar1 != uVar3; uVar3 = uVar3 + 1) {
      uVar2 = 1 << (ulong)(uVar3 & 0x1f);
      if (*param_12 != 0) {
        uVar2 = 0;
      }
      uVar5 = uVar2 | uVar5;
    }
  }
  FUN_10829f014(&lStack_68,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_13,
                uVar5,param_15,param_16);
  lVar6 = lStack_68;
  if ((param_13 != 0) && (lStack_68 != 0)) {
    if (*param_12 == 0) {
      if ((1 < (int)param_13) && (uVar5 != 0)) {
LAB_10829f3ec:
        *(undefined4 *)(lStack_68 + 0xc) = 2;
        lVar6 = lStack_68;
      }
    }
    else {
      func_0x0001082a0184();
      FUN_10829f560(param_2,extraout_x8 + extraout_x9,0,param_3);
      if ((param_2 & 1) == 0) {
        lVar6 = 0;
        goto LAB_10829f410;
      }
      lVar6 = lStack_68;
      if (((1 < (int)param_13) && (uVar5 == 0)) && (param_12[3] != 0)) goto LAB_10829f3ec;
    }
  }
  lStack_68 = 0;
LAB_10829f410:
  *param_1 = lVar6;
  FUN_108283764(&lStack_68);
  return;
}



/* Entry: 10829f44c; end: 10829f55f;  */

bool FUN_10829f44c(ulong param_1,ulong param_2,long *param_3,uint param_4,long param_5)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  
  uVar12 = param_1 >> 0x20;
  iVar11 = (int)(param_1 >> 0x20);
  puVar8 = (ulong *)(param_3 + 1);
  lVar10 = *param_3;
  FUN_10829fa1c();
  uVar3 = 0;
  uVar4 = (ulong)(param_4 - 1);
  for (uVar5 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU)); iVar9 = (int)param_1,
      uVar5 != 0; uVar5 = uVar5 - 1) {
    if (puVar8[-1] != 0) {
      uVar7 = (long)(int)param_2 * (long)iVar9;
      uVar6 = *puVar8;
      if ((*(byte *)(param_5 + 0x1c) >> 1 & 1) != 0) {
        if (uVar6 < uVar7) goto LAB_10829f528;
        uVar7 = 0;
        if (param_2 != 0) {
          uVar7 = uVar6 / param_2;
        }
        uVar7 = uVar7 * param_2;
      }
      if (uVar6 != uVar7) goto LAB_10829f528;
      uVar3 = uVar3 + 1;
    }
    if (iVar9 == 1 && (int)uVar12 == 1) {
      if (uVar4 != 0) goto LAB_10829f528;
      param_1 = 1;
      uVar12 = 1;
    }
    else {
      uVar1 = iVar9 / 2;
      if ((int)uVar1 < 2) {
        uVar1 = 1;
      }
      param_1 = (ulong)uVar1;
      uVar1 = (int)uVar12 / 2;
      if ((int)uVar1 < 2) {
        uVar1 = 1;
      }
      uVar12 = (ulong)uVar1;
    }
    iVar11 = (int)uVar12;
    puVar8 = puVar8 + 3;
    uVar4 = uVar4 - 1;
  }
  if ((param_4 == 1) || (iVar9 == 1 && iVar11 == 1)) {
    bVar2 = uVar3 == 1 || uVar3 == param_4;
    if (lVar10 == 0) {
      bVar2 = uVar3 == 0;
    }
  }
  else {
LAB_10829f528:
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10829f560; end: 10829f68b;  */

void FUN_10829f560(long *param_1,long param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined1 param_9)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  int iStack_5c;
  
  if (((*(byte *)(param_2 + 0xb8) & 1) == 0) && ((int)param_8 != 0)) {
    iVar4 = (int)param_3;
    if ((int)param_8 == 1) {
      plVar1 = param_1;
      func_0x0001082a011c(*(undefined8 *)(param_2 + 0xb0));
      if ((int)plVar1 == 0) {
        return;
      }
      iStack_5c = (int)(param_3 >> 0x20);
      uVar3 = param_4 & 0xffffffff;
    }
    else {
      if (iVar4 != 0) {
        return;
      }
      if (param_3 >> 0x20 != 0) {
        return;
      }
      if ((int)param_4 != (int)*(ulong *)(param_2 + 0xb0) ||
          param_4 >> 0x20 != *(ulong *)(param_2 + 0xb0) >> 0x20) {
        return;
      }
      iStack_5c = 0;
      iVar4 = 0;
      uVar3 = param_4;
    }
    uVar2 = CONCAT44((int)(param_4 >> 0x20) - iStack_5c,(int)uVar3 - iVar4);
    FUN_10829f44c(uVar2,param_6,param_7,param_8,param_1[2]);
    if ((int)uVar2 != 0) {
      FUN_10829f190(param_1);
      (**(code **)(*param_1 + 0x178))
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      if ((int)param_1 != 0) {
        FUN_10829fa38();
      }
    }
  }
  return;
}



/* Entry: 10829f68c; end: 10829f83b;  */

void FUN_10829f68c(long *param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int iVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  long extraout_x9;
  int iVar4;
  long *plVar5;
  undefined1 auStack_148 [112];
  undefined1 auStack_d8 [88];
  char cStack_80;
  undefined8 uStack_68;
  
  func_0x0001082a00a8();
  uStack_68 = extraout_x8;
  FUN_10829f190();
  iVar4 = (int)param_4;
  uVar2 = iVar4 == 0;
  if (0 < iVar4) {
    plVar5 = (long *)param_2[2];
    func_0x0001082835f0(auStack_d8,param_3);
    plVar3 = plVar5;
    (**(code **)(*plVar5 + 0x20))(plVar5,auStack_d8,*(undefined4 *)(param_3 + 0x30));
    if ((int)plVar3 == 0) {
      uVar2 = cStack_80 == '\x01';
      if ((bool)uVar2) {
        func_0x0001082a0088(auStack_d8);
      }
    }
    else {
      func_0x0001082835f0(auStack_148,param_3);
      plVar3 = plVar5;
      (**(code **)(*plVar5 + 0x40))(plVar5,auStack_148,param_4);
      func_0x0001082a00e8();
      if ((bool)uVar2) {
        func_0x0001082a0074();
      }
      uVar2 = cStack_80 == '\x01';
      if ((bool)uVar2) {
        func_0x0001082a0088(auStack_d8);
      }
      if (((ulong)plVar3 & 1) != 0) {
        iVar1 = (int)plVar5[6];
        uVar2 = *(int *)(param_3 + 4) <= iVar1 && *(int *)(param_3 + 8) == iVar1;
        if (*(int *)(param_3 + 4) <= iVar1 && *(int *)(param_3 + 8) <= iVar1) {
          (**(code **)(*param_2 + 0x150))(param_1,param_2,param_3,param_4,param_5,param_6);
          uVar2 = iVar4 == 1;
          if (((!(bool)uVar2) && (*param_1 != 0)) &&
             ((*(byte *)((long)plVar5 + 0x19) >> 6 & 1) == 0)) {
            func_0x0001082a0184();
            (**(code **)(*(long *)(extraout_x8_00 + extraout_x9) + 0x68))
                      (extraout_x8_00 + extraout_x9);
            func_0x0001082a012c();
          }
          goto LAB_10829f7dc;
        }
      }
    }
  }
  *param_1 = 0;
LAB_10829f7dc:
  func_0x0001082a0094(uStack_68);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082a01a8();
  func_0x0001082a0190();
  *extraout_x8_01 = 0;
  return;
}



/* Entry: 10829f83c; end: 10829f843;  */

void FUN_10829f83c(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10829f844; end: 10829f8e3;  */

void FUN_10829f844(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10829f190();
  if ((int)param_4 - 3U < 2 && (int)param_5 == 1) {
    *param_1 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x168))(param_1,param_2,param_3,param_4,param_5);
    if ((*param_1 != 0) && ((*(byte *)(param_2[2] + 0x18) >> 4 & 1) == 0)) {
      FUN_1082a0904();
    }
  }
  return;
}



/* Entry: 10829f8e4; end: 10829fa1b;  */

undefined8 FUN_10829f8e4(undefined8 param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x24;
  
  if ((*(byte *)(param_2 + 0xb8) & 1) == 0) {
    func_0x0001082a00f4();
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x24 + 0x1a8);
    func_0x0001082a01b4();
                    /* WARNING: Could not recover jumptable at 0x00010829f934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 0;
}



/* Entry: 10829fa1c; end: 10829fa37;  */

undefined8 FUN_10829fa1c(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 0x24) {
    return *(undefined8 *)(&UNK_10df143b0 + (ulong)param_1 * 8);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10829fa38);
  (*pcVar1)();
}



/* Entry: 10829fa38; end: 10829fa9f;  */

void FUN_10829fa38(undefined8 param_1,long *param_2,undefined8 param_3,ulong param_4,int param_5)

{
  undefined4 uVar1;
  
  if (((param_4 == 0) || (FUN_10821a6d8(), (param_4 & 1) == 0)) &&
     ((**(code **)(*param_2 + 0x58))(), param_2 != (long *)0x0)) {
    if (param_5 == 1) {
      if (*(int *)((long)param_2 + 0xc) != 2) {
        return;
      }
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
    *(undefined4 *)((long)param_2 + 0xc) = uVar1;
  }
  return;
}



/* Entry: 10829faa0; end: 10829fb53;  */

long * FUN_10829faa0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  uStack_50 = param_3;
  uStack_48 = param_4;
  func_0x0001082a011c(*(undefined8 *)(param_2 + 0xb0));
  if ((int)plVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    FUN_10829f190(param_1);
    auStack_68[0] = *param_7;
    *param_7 = 0;
    (**(code **)(*param_1 + 400))
              (param_1,param_2,uStack_50,uStack_48,param_5,param_6,auStack_68,param_8);
    func_0x0001082a0148();
  }
  return param_1;
}



/* Entry: 10829fb54; end: 10829fbbf;  */

long * FUN_10829fb54(long *param_1,long *param_2)

{
  if (*(int *)((long)param_2 + 0xc) == 2) {
    return (long *)0x1;
  }
  if ((*(byte *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0xb8) & 1) == 0) {
    (**(code **)(*param_1 + 0x1a0))(param_1,param_2);
    if ((int)param_1 != 0) {
      *(undefined4 *)((long)param_2 + 0xc) = 2;
      param_1 = (long *)0x1;
    }
  }
  else {
    param_1 = (long *)0x0;
  }
  return param_1;
}



/* Entry: 10829fbc0; end: 10829fc03;  */

void FUN_10829fbc0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10829f190();
                    /* WARNING: Could not recover jumptable at 0x00010829fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x198))(param_1,param_2,param_3);
  return;
}



/* Entry: 10829fc04; end: 10829ff9b;  */

void FUN_10829fc04(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  ulong *param_5,ulong param_6,undefined8 param_7)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  uint uVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_138 [56];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  plVar6 = param_1;
  puVar9 = param_5;
  uVar11 = param_6;
  func_0x0001082a00a8();
  lVar13 = *(long *)(plVar6[4] + 0x80);
  uVar12 = *puVar9;
  bVar3 = (uVar12 & 0xe000000000000000) == 0;
  uVar14 = uVar12 * 8;
  puStack_c0 = (undefined8 *)(uVar14 + 0x10);
  uVar4 = uVar14 < 0xfffffffffffffff0 && bVar3;
  if (uVar14 >= 0xfffffffffffffff0 || !bVar3) {
    puStack_c0 = (undefined8 *)0xffffffffffffffff;
  }
  uStack_b8 = uVar11;
  uStack_78 = extraout_x8;
  __Znam();
  *puStack_c0 = 8;
  puStack_c0[1] = uVar12;
  puStack_c0 = puStack_c0 + 2;
  if ((uVar12 != 0) && (_bzero(puStack_c0,uVar14), (*(ulong *)(param_1[2] + 0x18) >> 0x30 & 1) != 0)
     ) {
    lVar15 = 0;
    for (uVar11 = 0; uVar4 = uVar11 == uVar12, uVar11 < uVar12; uVar11 = uVar11 + 1) {
      if (*(char *)(param_5[2] + lVar15 + 0x30) == '\x01') {
        lVar7 = lVar13;
        func_0x0001082af91c(&lStack_b0,lVar13,param_5[2] + lVar15,0,0);
        func_0x0001082a016c();
        if (lVar7 != 0) {
          func_0x0001082a00b8();
        }
        lVar7 = lStack_b0;
        lStack_b0 = 0;
        if (lVar7 != 0) {
          func_0x0001082a00b8();
        }
        if (puStack_c0[uVar11] != 0) {
          func_0x0001082a0198(*(undefined8 *)(*param_1 + 0x60));
        }
      }
      else {
        lVar7 = lVar13;
        func_0x0001082af900(&lStack_b0,lVar13,0);
        func_0x0001082a016c();
        if (lVar7 != 0) {
          func_0x0001082a00b8();
        }
        lVar7 = lStack_b0;
        lStack_b0 = 0;
        if (lVar7 != 0) {
          func_0x0001082a00b8();
        }
        if (puStack_c0[uVar11] != 0) {
          func_0x0001082a0198(*(undefined8 *)(*param_1 + 0x60));
          (**(code **)(*(long *)puStack_c0[uVar11] + 0x10))(&lStack_b0);
          FUN_108283264(param_5[2] + lVar15,&lStack_b0);
          if ((char)uStack_90 == '\x01') {
            func_0x0001082a010c();
          }
        }
      }
      uVar12 = *param_5;
      lVar15 = lVar15 + 0x38;
    }
  }
  if ((param_6 >> 0x20 & 1) != 0) {
    func_0x0001082a0198(*(undefined8 *)(*param_1 + 0xf8));
  }
  uStack_90 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uStack_a8 = 0;
  lStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (param_5[4] == 0) {
    func_0x0001082a0150(param_5[3]);
    uStack_a8 = 0;
    lStack_b0 = extraout_x8_01;
  }
  else {
    func_0x0001082a0150();
    lStack_b0 = 0;
    uStack_a8 = extraout_x8_00;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_100 = uVar16;
  uStack_f8 = uVar17;
  uStack_f0 = uVar16;
  uStack_e8 = uVar17;
  FUN_1082671e4(&uStack_100);
  iVar5 = (int)&lStack_b0;
  FUN_10826b4d8();
  if (iVar5 != 0) {
    FUN_10826b504(auStack_138,&lStack_b0);
    (**(code **)(*param_1 + 0x78))(param_1,auStack_138,uStack_b8);
    FUN_1082671e4(auStack_138);
  }
  if (param_5[6] != 0) {
    uVar10 = *(uint *)(param_1 + 0xe);
    uVar1 = *(uint *)((long)param_1 + 0x74) >> 1;
    uVar4 = uVar10 == uVar1;
    if ((int)uVar10 < (int)uVar1) {
      uVar11 = param_5[7];
      puVar9 = (ulong *)(param_1[0xd] + (long)(int)uVar10 * 0x10);
      *puVar9 = param_5[6];
      puVar9[1] = uVar11;
    }
    else {
      if (uVar10 == 0x7fffffff) goto LAB_10829ff3c;
      uStack_f8 = 0x7fffffff;
      uStack_100 = 0x10;
      puVar8 = &uStack_100;
      uVar11 = (ulong)(uVar10 + 1);
      FUN_10840fe24(0x3ff8000000000000);
      iVar5 = (int)param_1[0xe];
      uVar12 = param_5[6];
      (puVar8 + (long)iVar5 * 2)[1] = param_5[7];
      puVar8[(long)iVar5 * 2] = uVar12;
      if (iVar5 != 0) {
        _memcpy(puVar8,param_1[0xd],(long)iVar5 << 4);
      }
      if ((*(byte *)((long)param_1 + 0x74) & 1) != 0) {
        _free(param_1[0xd]);
      }
      uVar11 = uVar11 >> 4;
      uVar4 = uVar11 == 0x7fffffff;
      if (0x7ffffffe < uVar11) {
        uVar11 = 0x7fffffff;
      }
      param_1[0xd] = (long)puVar8;
      *(uint *)((long)param_1 + 0x74) = (int)uVar11 << 1 | 1;
      uVar10 = *(uint *)(param_1 + 0xe);
    }
    *(uint *)(param_1 + 0xe) = uVar10 + 1;
  }
  (**(code **)(*param_1 + 0x1b8))(param_1,param_2,param_3,param_4,param_7);
  FUN_1082671e4(&lStack_b0);
  FUN_108294bf0(&puStack_c0);
  func_0x0001082a0094(uStack_78);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
LAB_10829ff3c:
  func_0x00010bdb1a68();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10829ff44);
  (*pcVar2)();
}



/* Entry: 10829ff9c; end: 1082a0027;  */

long * FUN_10829ff9c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x10))();
  if (plVar1 != (long *)0x0) {
    FUN_1082b0a84();
  }
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x18))();
  if (plVar1 != (long *)0x0) {
    FUN_1082aff70();
  }
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x1c0))(param_1,param_2);
  FUN_10829efb0(param_1,plVar1);
  (**(code **)(*param_1 + 0x1c8))(param_1);
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  return plVar1;
}



/* Entry: 1082a0028; end: 1082a0043;  */

undefined8 FUN_1082a0028(void)

{
  return 0;
}



/* Entry: 1082a0044; end: 1082a0073;  */

undefined8 * FUN_1082a0044(undefined8 *param_1)

{
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 1082a0074; end: 1082a01bf;  */

void FUN_1082a0074(void)

{
  undefined8 *in_stack_00000010;
  
                    /* WARNING: Could not recover jumptable at 0x0001082a0084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_stack_00000010)(&stack0x00000010);
  return;
}



/* Entry: 1082a01c0; end: 1082a0213;  */

void FUN_1082a01c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_1082a0424(param_1,param_2,param_6,param_7);
  *param_1 = &PTR_FUN_110a35c80;
  param_1[0x16] = &PTR_DAT_110a35d20;
  param_1[0x17] = 0;
  param_1[0x18] = param_3;
  *(undefined4 *)(param_1 + 0x19) = param_5;
  *(undefined4 *)((long)param_1 + 0xcc) = param_4;
  return;
}



/* Entry: 1082a0214; end: 1082a02a7;  */

long FUN_1082a0214(long *param_1)

{
  long lVar1;
  
  if (param_1[0x10] != 0) {
    lVar1 = param_1[0x17];
    if (lVar1 == 0) {
      (**(code **)(*param_1 + 0x70))(param_1,*(int *)((long)param_1 + 0xcc) != 4);
      lVar1 = param_1[0x17];
    }
    return lVar1;
  }
  return 0;
}


