/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10782ee04; end: 10782ee1f;  */

void FUN_10782ee04(long param_1)

{
  undefined8 in_x4;
  long lVar1;
  undefined8 *puVar2;
  int extraout_w11;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x108) + 0x28);
  lStack_40 = lVar1 + 0x20;
  puVar2 = *(undefined8 **)(lVar1 + 0x10);
  uStack_30 = puVar2[1];
  uStack_38 = *puVar2;
  uStack_28 = in_x4;
  if (puVar2[1] != 0) {
    do {
      func_0x000107832d84();
    } while (extraout_w11 != 0);
  }
  func_0x00010782ed78(&lStack_40,&UNK_1078466f8,0);
  func_0x0001078333b0();
  return;
}



/* Entry: 10782f6e8; end: 10782f6ef;  */

void FUN_10782f6e8(long param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long lVar8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long *plVar9;
  ulong *puVar10;
  long extraout_x9;
  int extraout_w10;
  ulong *puVar11;
  int extraout_w11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  ulong *puVar13;
  ulong *unaff_x24;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  func_0x000107833544(param_1 + -0x198);
  func_0x000107832fc8();
  in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,100);
  in_stack_00000048 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  func_0x000107832d10();
  func_0x000107833104();
  func_0x000107833400(&stack0x00000030,7);
  func_0x0001078333d4();
  func_0x000107262330(&stack0x00000030);
  iVar2 = *(int *)(unaff_x20 + 0x48);
  uVar4 = iVar2 + -1 < 0;
  uVar5 = iVar2 == 1;
  if ((bool)uVar5) {
    func_0x000107832fb0(&stack0x000000a0);
    func_0x00010782f3bc(*(undefined1 *)(unaff_x20 + 0x40),&stack0x000000a0);
    puVar7 = *(undefined8 **)(unaff_x19 + 0x80);
    func_0x000107832f38();
    func_0x000107832f20(*puVar7);
    func_0x000107833044();
    func_0x000107832e74();
  }
  else if (iVar2 == 0) {
    uVar12 = *(undefined8 *)(unaff_x19 + 0x80);
    func_0x000107832fd4(&stack0x000000a0,9);
    func_0x000107832f38();
    func_0x000107832f20(**(undefined8 **)(unaff_x19 + 0x80));
    func_0x000107833044();
    func_0x000107832e74(uVar12);
    lVar8 = *(long *)(unaff_x20 + 8);
    in_stack_00000018 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000010 = lVar8;
    if (in_stack_00000018 != 0) {
      do {
        func_0x000107832d84();
        lVar8 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    puVar10 = (ulong *)(lVar8 + 0x58);
    func_0x00010782f9b4();
    lVar8 = in_stack_00000018;
    plVar1 = (long *)(unaff_x19 + 0x2d0);
    puVar13 = *(ulong **)(unaff_x19 + 0x2d8);
    puVar6 = puVar10;
    if (puVar13 != (ulong *)0x0) {
      func_0x0001078334ac();
      if ((bool)uVar5) {
        unaff_x24 = (ulong *)(extraout_x8_00 & (ulong)puVar10);
      }
      else {
        uVar4 = (long)puVar10 - (long)puVar13 < 0;
        unaff_x24 = puVar10;
        if (puVar13 <= puVar10) {
          uVar3 = 0;
          if (puVar13 != (ulong *)0x0) {
            uVar3 = (ulong)puVar10 / (ulong)puVar13;
          }
          unaff_x24 = (ulong *)((long)puVar10 - uVar3 * (long)puVar13);
        }
      }
      plVar9 = *(long **)(*plVar1 + (long)unaff_x24 * 8);
      if (plVar9 != (long *)0x0) {
        do {
          while( true ) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto code_r0x00010782f59c;
            puVar11 = (ulong *)plVar9[1];
            if (puVar11 != puVar10) break;
            uVar4 = plVar9[2] - (long)puVar10 < 0;
            if ((ulong *)plVar9[2] == puVar10) goto code_r0x00010782f684;
          }
          if (((ulong)puVar13 & extraout_x8_00) == 0) {
            puVar11 = (ulong *)((ulong)puVar11 & extraout_x8_00);
          }
          else if (puVar13 <= puVar11) {
            uVar3 = 0;
            if (puVar13 != (ulong *)0x0) {
              uVar3 = (ulong)puVar11 / (ulong)puVar13;
            }
            puVar11 = (ulong *)((long)puVar11 - uVar3 * (long)puVar13);
          }
          uVar4 = (long)puVar11 - (long)unaff_x24 < 0;
        } while (puVar11 == unaff_x24);
      }
    }
code_r0x00010782f59c:
    func_0x0001078330fc();
    func_0x00010783315c();
    if (lVar8 != 0) {
      do {
        func_0x000107832cb4();
      } while (extraout_w10 != 0);
    }
    func_0x000107833248(*(undefined8 *)(unaff_x19 + 0x2e8));
    if ((puVar13 == (ulong *)0x0) || (func_0x0001078331cc(), (bool)uVar4)) {
      func_0x000107833390();
      uVar4 = puVar13 == (ulong *)0x3;
      func_0x000107832c80();
      func_0x000107831db0(plVar1);
      puVar13 = *(ulong **)(unaff_x19 + 0x2d8);
      func_0x0001078334ac();
      if ((bool)uVar4) {
        unaff_x24 = (ulong *)(extraout_x8_01 & (ulong)puVar10);
      }
      else {
        unaff_x24 = puVar10;
        if (puVar13 <= puVar10) {
          uVar3 = 0;
          if (puVar13 != (ulong *)0x0) {
            uVar3 = (ulong)puVar10 / (ulong)puVar13;
          }
          unaff_x24 = (ulong *)((long)puVar10 - uVar3 * (long)puVar13);
        }
      }
    }
    puVar10 = *(ulong **)(*plVar1 + (long)unaff_x24 * 8);
    if (puVar10 == (ulong *)0x0) {
      func_0x000107833378();
      if (extraout_x9 != 0) {
        puVar10 = *(ulong **)(extraout_x9 + 8);
        if (((ulong)puVar13 & (long)puVar13 - 1U) == 0) {
          puVar10 = (ulong *)((ulong)puVar10 & (long)puVar13 - 1U);
        }
        else if (puVar13 <= puVar10) {
          uVar3 = 0;
          if (puVar13 != (ulong *)0x0) {
            uVar3 = (ulong)puVar10 / (ulong)puVar13;
          }
          puVar10 = (ulong *)((long)puVar10 - uVar3 * (long)puVar13);
        }
        *(ulong **)(extraout_x8_02 + (long)puVar10 * 8) = puVar6;
      }
    }
    else {
      *puVar6 = *puVar10;
      *puVar10 = (ulong)puVar6;
    }
    in_stack_00000030 = 0;
    *(long *)(unaff_x19 + 0x2e8) = *(long *)(unaff_x19 + 0x2e8) + 1;
    func_0x000107831ef4(&stack0x00000030);
code_r0x00010782f684:
    func_0x000107435084(&stack0x00000010);
    func_0x000107833144(*(undefined8 *)(unaff_x19 + 0x90));
    func_0x000107833410();
  }
  func_0x000107262330(&stack0x000000a0);
  return;
}



/* Entry: 10782fb6c; end: 10782fbd7;  */

void FUN_10782fb6c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  if (lVar1 != 0) {
    func_0x000107476d6c(param_1,lVar1 + 0x130);
    func_0x000107476d6c(param_1 + 0x18,*(long *)(param_2 + 0x1e8) + 0x148);
    func_0x000107476d6c(param_1 + 0x30,*(long *)(param_2 + 0x1e8) + 0x160);
  }
  return;
}



/* Entry: 1078304a4; end: 107830e33;  */

void FUN_1078304a4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  code *pcVar4;
  undefined1 in_ZR;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 extraout_x8;
  long lVar10;
  ulong uVar11;
  long extraout_x8_00;
  ulong *puVar12;
  ulong extraout_x9;
  int extraout_w10;
  int iVar13;
  ulong *unaff_x20;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong *puVar17;
  ulong uVar18;
  bool bVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  undefined1 uStack_1f1;
  undefined1 auStack_1f0 [48];
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  long alStack_190 [3];
  long alStack_178 [3];
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined4 uStack_140;
  long lStack_138;
  undefined4 uStack_130;
  long lStack_128;
  undefined4 uStack_120;
  undefined **ppuStack_118;
  undefined1 *puStack_110;
  ulong uStack_108;
  undefined ***pppuStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong *puStack_a8;
  ulong *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  ulong *puStack_70;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_18;
  
  func_0x000107833360();
  func_0x000107832d74();
  lVar10 = *(long *)(param_1 + 0x1e8);
  uStack_18 = extraout_x8;
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x30) == 0)) ||
      (*(long *)(*(long *)(lVar10 + 0x30) + 0x128) == 0)) ||
     (((**(byte **)(param_1 + 0x98) & 1) == 0 ||
      (in_ZR = 1, *(long *)(param_1 + 0x348) == *(long *)(param_1 + 0x350))))) goto LAB_107830ccc;
  uVar22 = *(ulong *)(lVar10 + 0x1a0);
  uVar20 = param_1;
  func_0x00010785f1f4();
  puStack_88 = (ulong *)((ulong)puStack_88 & 0xffffffffffffff00);
  func_0x000107832fbc();
  func_0x00010786a340(alStack_190);
  func_0x00010786a340(alStack_178);
  uStack_158 = 0;
  uStack_160 = 0;
  lStack_148 = 0;
  lStack_150 = 0;
  uStack_140 = 0x3f800000;
  puVar17 = *(ulong **)(param_1 + 0x350);
  for (unaff_x20 = *(ulong **)(param_1 + 0x348); in_ZR = unaff_x20 == puVar17, !(bool)in_ZR;
      unaff_x20 = unaff_x20 + 0xd) {
    if (uVar22 < *unaff_x20) {
      if ((uVar20 & 1) == 0) {
LAB_107830580:
        func_0x00010786a76c(alStack_190,unaff_x20 + 2);
        func_0x00010786a76c(alStack_178,unaff_x20 + 5);
        func_0x00010747e83c(&uStack_160,unaff_x20[0xb] + lStack_148);
        func_0x0001074f5954(&uStack_160,unaff_x20[10],0);
      }
    }
    else if (((uint)(unaff_x20[1] < uVar22) & (uint)uVar20) == 0) goto LAB_107830580;
  }
  if ((*(long *)(alStack_190[0] + 0x18) != 0) ||
     (*(long *)(alStack_178[0] + 0x18) != 0 || lStack_148 != 0)) {
    uVar20 = 0;
    uVar8 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1a0 = 0x3f800000;
    func_0x000107372aa4(&uStack_1c0);
    puStack_c0 = &uStack_1c0;
    uStack_b8 = uStack_1b0;
    for (plVar14 = (long *)lStack_150; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      func_0x000104c2fe00(&puStack_88,plVar14 + 2);
      func_0x0001072eae84(&puStack_c0,&puStack_88);
      func_0x000104c2f714(&puStack_88);
    }
    func_0x0001078334e4();
    lVar10 = *(long *)(param_1 + 0x1e8);
    for (plVar14 = (long *)uStack_1b0; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      uVar22 = *(ulong *)(lVar10 + 0x180);
      if ((uVar22 != 0) && (*(long *)(lVar10 + 400) != 0)) {
        uVar5 = lVar10 + 400;
        func_0x00010726364c(uVar5,plVar14 + 2);
        uVar15 = uVar22 - 1;
        if ((uVar22 & uVar15) == 0) {
          uVar18 = uVar5 & uVar15;
        }
        else {
          uVar18 = uVar5;
          if (uVar22 <= uVar5) {
            uVar18 = 0;
            if (uVar22 != 0) {
              uVar18 = uVar5 / uVar22;
            }
            uVar18 = uVar5 - uVar18 * uVar22;
          }
        }
        plVar25 = *(long **)(*(long *)(lVar10 + 0x178) + uVar18 * 8);
        if (plVar25 != (long *)0x0) {
          do {
            while( true ) {
              plVar25 = (long *)*plVar25;
              if (plVar25 == (long *)0x0) goto LAB_1078306f0;
              uVar11 = plVar25[1];
              if (uVar5 != uVar11) break;
              uVar11 = (ulong)(plVar25 + 2);
              func_0x000104c32db4(uVar11,plVar14 + 2);
              if ((uVar11 & 1) != 0) goto LAB_1078306fc;
            }
            if ((uVar22 & uVar15) == 0) {
              uVar11 = uVar11 & uVar15;
            }
            else if (uVar22 <= uVar11) {
              uVar2 = 0;
              if (uVar22 != 0) {
                uVar2 = uVar11 / uVar22;
              }
              uVar11 = uVar11 - uVar2 * uVar22;
            }
          } while (uVar11 == uVar18);
        }
      }
LAB_1078306f0:
      func_0x0001072e89a4(auStack_1f0,plVar14 + 2);
LAB_1078306fc:
    }
    puVar6 = auStack_1f0;
    FUN_10775f7e0(puVar6,*(long *)(param_1 + 0x1e8) + 0x160);
    lVar10 = *(long *)(param_1 + 0x1e8);
    in_ZR = *(char *)(lVar10 + 0x128) != '\x01' || lStack_148 == 0;
    if ((bool)in_ZR) {
LAB_1078307c4:
      uVar21 = 0;
      iVar13 = 0;
      bVar19 = true;
    }
    else {
      FUN_10782bf00(lVar10 + 0x60);
      uVar16 = *(undefined8 *)(param_1 + 0x1e8);
      func_0x00010783306c();
      if (lStack_148 == 0) goto LAB_1078307c4;
      plVar14 = (long *)(lVar10 + 0x188);
      do {
        do {
          plVar14 = (long *)*plVar14;
          uVar21 = (uint)(plVar14 != (long *)0x0);
          if (plVar14 == (long *)0x0) {
            iVar13 = 0;
            goto LAB_1078307d8;
          }
          puVar7 = &uStack_160;
          func_0x0001074c7410(puVar7,plVar14 + 2);
        } while (puVar7 == (undefined8 *)0x0);
        if ((*(byte *)(puVar7 + 0xb) & 1) == 0) {
          uVar22 = lVar10 + 0xe8;
          func_0x0001078331c4();
          if ((uVar22 & 1) == 0) {
            iVar13 = (int)uVar16 + 0x100;
            func_0x0001078331c4();
            if (iVar13 == 0) {
              iVar13 = 1;
              goto LAB_1078307d8;
            }
          }
        }
      } while ((*(char *)(puVar7 + 0xb) != '\x01') ||
              ((*(int *)(puVar7 + 9) == *(int *)(puVar7 + 10) &&
               (*(int *)((long)puVar7 + 0x4c) == *(int *)((long)puVar7 + 0x54)))));
      iVar13 = 2;
LAB_1078307d8:
      in_ZR = plVar14 == (long *)0x0;
      bVar19 = (bool)in_ZR;
    }
    puStack_88 = (ulong *)((ulong)puStack_88 & 0xffffffffffffff00);
    lVar10 = *(long *)(param_1 + 0x220) + 0x8f0;
    func_0x00010724e2c8(lVar10,&puStack_88);
    uStack_1f1 = (undefined1)lVar10;
    plVar14 = alStack_178;
    func_0x00010775072c(plVar14,*(long *)(param_1 + 0x1e8) + 0x130);
    puStack_88 = (ulong *)((ulong)puStack_88 & 0xffffffffffffff00);
    uStack_50 = uStack_50 & 0xffffffffffffff00;
    puStack_110 = &uStack_1f1;
    ppuStack_118 = &PTR_DAT_1109e13f8;
    pppuStack_100 = &ppuStack_118;
    plVar25 = alStack_190;
    uStack_108 = param_1;
    func_0x000107750810(plVar25,&puStack_88,*(long *)(param_1 + 0x1e8) + 0x148,&ppuStack_118);
    func_0x0001072c9444(&ppuStack_118);
    func_0x00010724b3d8(&puStack_88);
    unaff_x20 = *(ulong **)(param_1 + 0x288);
    func_0x0001075186e0(unaff_x20,param_2,param_3,plVar14,plVar25,param_1 + 0x20,param_1 + 0xc);
    uVar21 = (uint)puVar6 | uVar21 | (uint)plVar14 | (uint)plVar25;
    puVar17 = unaff_x20;
    if ((uVar21 & 1) != 0) {
      plVar23 = *(long **)(param_1 + 0x80);
      puStack_88 = (ulong *)CONCAT44(puStack_88._4_4_,0x34);
      puStack_70 = (ulong *)((ulong)puStack_70 & 0xffffffff00000000);
      uStack_58 = 0;
      uStack_50 = 0;
      func_0x000107832cc4();
      func_0x0001078334d0();
      func_0x00010783344c(&puStack_c0);
      func_0x000107832ecc();
      func_0x000107371bc4(&puStack_88);
      func_0x000107833194();
      uStack_f8 = CONCAT44(uStack_f8._4_4_,1);
      uStack_f0 = (ulong)uStack_f0._4_4_ << 0x20;
      lStack_128 = *plVar23;
      uStack_120 = 3;
      func_0x000107832d68();
      func_0x000104c2f714(&puStack_c0);
      func_0x000107832f08();
      if (!bVar19) {
        puStack_88 = (ulong *)CONCAT44(puStack_88._4_4_,0x35);
        puStack_70 = (ulong *)((ulong)puStack_70 & 0xffffffff00000000);
        uStack_58 = 0;
        uStack_50 = 0;
        func_0x000107832cc4();
        func_0x0001078334d0();
        func_0x00010783344c(&uStack_f8);
        func_0x000107832ecc();
        func_0x000107371bc4(&puStack_88);
        func_0x000107833194();
        lStack_128 = CONCAT44(lStack_128._4_4_,1);
        uStack_120 = 0;
        lStack_138 = *plVar23;
        uStack_130 = 3;
        func_0x000107832d68();
        func_0x000104c2f714(&uStack_f8);
        func_0x000107832f08();
      }
      if ((uint)plVar14 != 0) {
        func_0x000107832d94();
        func_0x000107832c0c();
        func_0x0001078330f4();
        func_0x000107832c98();
        func_0x000107832c30();
        func_0x000107832f08();
      }
      if ((uint)plVar25 != 0) {
        func_0x000107832d94();
        func_0x000107832c0c();
        func_0x0001078330f4();
        func_0x000107832c98();
        func_0x000107832c30();
        func_0x000107832f08();
      }
      if ((uint)puVar6 != 0) {
        func_0x000107832d94();
        func_0x000107832c0c();
        func_0x0001078330f4();
        func_0x000107832c98();
        func_0x000107832c30();
        func_0x000107832f08();
      }
      in_ZR = iVar13 == 1;
      if ((bool)in_ZR) {
        func_0x000107832d94();
        func_0x000107832c0c();
        func_0x0001078330f4();
        func_0x000107832c98();
        func_0x000107832c30();
LAB_107830a44:
        func_0x000107832f08();
      }
      else {
        in_ZR = iVar13 == 2;
        if ((bool)in_ZR) {
          func_0x000107832d94();
          func_0x000107832c0c();
          func_0x0001078330f4();
          func_0x000107832c98();
          func_0x000107832c30();
          goto LAB_107830a44;
        }
      }
      *(undefined1 *)(param_1 + 0x89) = 1;
      func_0x000107833200();
      uStack_f8 = extraout_x9;
      func_0x000107832ee8();
      uStack_f0 = uVar20;
      uStack_e8 = uVar8;
      if (extraout_x8_00 != 0) {
        do {
          func_0x000107832cb4();
        } while (extraout_w10 != 0);
      }
      lVar24 = *(long *)(param_1 + 0x278);
      func_0x00010724bb70(&lStack_128,&uStack_f0);
      lVar10 = lStack_128;
      if (lStack_128 != 0) {
        puStack_c0 = *(ulong **)(param_1 + 0x1e0);
        func_0x0001073dd510(&uStack_b8,lVar24 + 0x70);
        puVar17 = (ulong *)0x40;
        puStack_a8 = unaff_x20;
        __Znwm();
        uVar22 = uStack_b0;
        uVar20 = uStack_b8;
        uStack_b8 = 0;
        uStack_b0 = 0;
        *puVar17 = (ulong)&PTR_DAT_1109e11d8;
        puVar17[1] = uStack_f8;
        puVar17[2] = (ulong)&UNK_107845170;
        puVar17[3] = 0;
        puVar17[4] = (ulong)puStack_c0;
        puVar17[6] = uVar22;
        puVar17[5] = uVar20;
        uStack_78 = 0;
        puStack_88 = puStack_c0;
        lStack_80 = 0;
        puVar17[7] = (ulong)unaff_x20;
        puStack_70 = unaff_x20;
        func_0x0001073e0028(&lStack_80);
        puStack_88 = puVar17;
        func_0x0001073e0028(&uStack_b8);
        func_0x0001073ae140(lVar10,&puStack_88);
        puVar17 = puStack_88;
        puStack_88 = (ulong *)0x0;
        if (puVar17 != (ulong *)0x0) {
          func_0x000107832c60();
        }
      }
      func_0x00010724bcd8(&lStack_128);
      puVar17 = &uStack_f0;
      func_0x00010724ae28();
    }
    iVar13 = (int)puVar17;
    func_0x00010785f1f4();
    puStack_88 = (ulong *)((ulong)puStack_88 & 0xffffffffffffff00);
    func_0x000107832fbc();
    if (iVar13 == 0) {
      puStack_88 = (ulong *)0x0;
      lStack_80 = 0;
      lVar10 = *(long *)(param_1 + 0x250);
      if (((lVar10 != 0) &&
          (__ZNSt3__119__shared_weak_count4lockEv(), lStack_80 = lVar10, lVar10 != 0)) &&
         (puStack_88 = *(ulong **)(param_1 + 0x248), puStack_88 != (ulong *)0x0)) {
        if (((uVar21 & 1) != 0) || (in_ZR = *(char *)(param_1 + 0x89) == '\x01', (bool)in_ZR)) {
          uVar9 = 0;
          puStack_c0 = (ulong *)((ulong)puStack_c0 & 0xffffffffffffff00);
        }
        else {
          uVar9 = 1;
          puStack_c0 = unaff_x20;
        }
        uStack_b8 = CONCAT71(uStack_b8._1_7_,uVar9);
        func_0x000107830e34(puStack_88,alStack_190,param_3,alStack_178,param_2,&puStack_c0);
      }
      iVar13 = (int)&puStack_88;
      func_0x0001078320b4();
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x1e8);
      if (((uVar21 & 1) != 0) || (in_ZR = *(char *)(param_1 + 0x89) == '\x01', (bool)in_ZR)) {
        uVar9 = 0;
        puStack_88 = (ulong *)((ulong)puStack_88 & 0xffffffffffffff00);
      }
      else {
        uVar9 = 1;
        puStack_88 = unaff_x20;
      }
      lStack_80 = CONCAT71(lStack_80._1_7_,uVar9);
      func_0x00010782b7a0(uVar8,alStack_190,param_3,alStack_178,param_2,&puStack_88,param_1 + 0x20,
                          param_1 + 0xc,*(undefined8 *)(param_1 + 0x80));
      iVar13 = (int)uVar8;
    }
    uVar20 = *(ulong *)(*(long *)(param_1 + 0x1e8) + 0x1a0);
    func_0x00010785f1f4();
    puStack_88 = (ulong *)((ulong)puStack_88 & 0xffffffffffffff00);
    func_0x000107832fbc();
    if (iVar13 == 0) {
      func_0x00010783128c(param_1 + 0x348);
    }
    else {
      puVar17 = *(ulong **)(param_1 + 0x350);
      for (unaff_x20 = *(ulong **)(param_1 + 0x348); in_ZR = unaff_x20 == puVar17, !(bool)in_ZR;
          unaff_x20 = unaff_x20 + 0xd) {
        puVar3 = unaff_x20;
        if (unaff_x20[1] <= uVar20) goto LAB_107830c68;
      }
    }
    goto LAB_107830cb8;
  }
  goto LAB_107830cc4;
LAB_107830c68:
  while (puVar12 = puVar3 + 0xd, puVar12 != puVar17) {
    puVar1 = puVar3 + 0xe;
    puVar3 = puVar12;
    if (uVar20 < *puVar1) {
      func_0x00010783147c(unaff_x20,puVar12);
      unaff_x20 = unaff_x20 + 0xd;
    }
  }
  in_ZR = 1;
  if (unaff_x20 != *(ulong **)(param_1 + 0x350)) {
    in_ZR = 1;
    func_0x000107831294(param_1 + 0x348,unaff_x20);
  }
LAB_107830cb8:
  func_0x000107833234();
  func_0x00010726ea70(&uStack_1c0);
LAB_107830cc4:
  func_0x00010750f290(alStack_190);
LAB_107830ccc:
  func_0x000107832c6c(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010783147c(unaff_x20);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x107830cfc);
  (*pcVar4)();
}



/* Entry: 107830f74; end: 107830f9f;  */

void FUN_107830f74(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109e1040;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107831160; end: 107831197;  */

void FUN_107831160(long param_1)

{
  long unaff_x20;
  
  func_0x000107832fc8();
  func_0x000104c2fe00();
  func_0x0001073f6580(param_1 + 0x38,unaff_x20 + 0x38);
  return;
}



/* Entry: 107831340; end: 1078313e7;  */

void FUN_107831340(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010783323c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -200;
    func_0x0001073f1280();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107831688; end: 1078316db;  */

void FUN_107831688(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x0001073ada2c(**(undefined8 **)(lVar1 + 0x300));
    func_0x000107843590(*(long *)(lVar1 + 0x300) + 0x10);
    func_0x00010724b54c(lVar1 + 0x10);
    func_0x00010724b8b8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078317d4; end: 1078317df;  */

void FUN_1078317d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e10f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107831a10; end: 107831a23;  */

void FUN_107831a10(void)

{
  func_0x000107831a98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107831ba4; end: 107831be3;  */

void FUN_107831ba4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar2;
  
  func_0x000107832f48();
  func_0x0001078330fc();
  uVar1 = *unaff_x19;
  *param_1 = &PTR_DAT_1109e1218;
  param_1[1] = unaff_x21;
  uVar2 = *unaff_x20;
  param_1[3] = unaff_x20[1];
  param_1[2] = uVar2;
  param_1[4] = uVar1;
  *unaff_x22 = param_1;
  return;
}



/* Entry: 107831edc; end: 107831ef3;  */

void FUN_107831edc(long *param_1,long param_2)

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



/* Entry: 1078320dc; end: 1078320ef;  */

void FUN_1078320dc(void)

{
  func_0x000107832160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10783243c; end: 10783243f;  */

void FUN_10783243c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078326d4; end: 1078326d7;  */

undefined8 * FUN_1078326d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e1378;
  func_0x0001078108a4(param_1 + 4);
  return param_1;
}



/* Entry: 107832938; end: 1078329a3;  */

void FUN_107832938(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010783323c();
  func_0x0001078328a0();
  func_0x0001078328a0(param_1 + 0x28,unaff_x19 + 0x28);
  func_0x0001078328ec(unaff_x20 + 0x50,unaff_x19 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x78) = *(undefined8 *)(unaff_x19 + 0x78);
  return;
}



/* Entry: 107832af8; end: 107832b23;  */

void FUN_107832af8(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x0001078333f4();
  *param_1 = &PTR_DAT_1109e13f8;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 1078338dc; end: 107833ca7;  */

void FUN_1078338dc(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long extraout_x9;
  long extraout_x10;
  long extraout_x10_00;
  ulong uVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  
  func_0x000107842e6c();
  plVar4 = (long *)param_1[1];
  uVar10 = (ulong)((int)param_2 + 1);
  if ((ulong)(((long)plVar4 - *param_1) / 0x18) <= uVar10) {
    return;
  }
  plVar11 = (long *)(*param_1 + 0x18);
  plVar15 = plVar11 + (param_2 & 0xffffffff) * 3;
  plVar5 = param_1;
  if (plVar4 != plVar15) {
LAB_107833924:
    plVar16 = plVar4;
    plVar7 = plVar16 + -3;
    while (iVar12 = (int)plVar5, plVar16 != plVar15) {
      uVar1 = ((long)plVar16 - (long)plVar11) / 0x18;
      if (uVar1 < 2) break;
      if (uVar1 == 3) {
        func_0x0001078348ec(plVar11,plVar11 + 3,plVar7);
        break;
      }
      if (uVar1 == 2) {
        func_0x00010784274c();
        func_0x0001078348bc();
        if (iVar12 != 0) {
          func_0x00010784262c();
          func_0x0001073ec360();
        }
        break;
      }
      plVar4 = plVar11;
      if ((long)plVar16 - (long)plVar11 < 0xc0) goto LAB_107833c44;
      plVar14 = plVar11 + (uVar1 >> 1) * 3;
      func_0x000107842a84();
      func_0x0001078348ec();
      plVar6 = plVar5;
      func_0x000107842a84();
      func_0x0001078348bc();
      plVar13 = plVar5;
      plVar4 = plVar7;
      if (((ulong)plVar6 & 1) != 0) goto LAB_107833a48;
      while (plVar4 = plVar4 + -3, plVar4 != plVar11) {
        plVar6 = plVar4;
        func_0x000107842aec();
        if ((int)plVar6 != 0) {
          plVar6 = plVar11;
          func_0x0001073ec360(plVar11,plVar4);
          uVar8 = 1;
          if ((int)plVar5 != 0) {
            uVar8 = 2;
          }
          plVar13 = (long *)(ulong)uVar8;
          plVar7 = plVar4;
          goto LAB_107833a48;
        }
      }
      plVar4 = plVar11 + 3;
      func_0x00010784262c();
      func_0x0001078348bc();
      if (((ulong)plVar6 & 1) == 0) {
        while( true ) {
          if (plVar4 == plVar7) goto LAB_107833b6c;
          plVar5 = plVar11;
          func_0x00010784302c();
          if ((int)plVar5 != 0) break;
          plVar4 = plVar4 + 3;
        }
        func_0x0001073ec360(plVar4,plVar7);
        plVar4 = plVar4 + 3;
      }
      plVar6 = plVar7;
      if (plVar4 == plVar7) break;
      while( true ) {
        do {
          plVar13 = plVar4;
          plVar5 = plVar11;
          func_0x00010784302c();
          plVar4 = plVar13 + 3;
        } while ((int)plVar5 == 0);
        do {
          plVar6 = plVar6 + -3;
          func_0x000107842a84();
          func_0x0001078348bc();
        } while (((ulong)plVar5 & 1) != 0);
        if (plVar6 <= plVar13) break;
        func_0x0001073ec360(plVar13,plVar6);
      }
      plVar11 = plVar13;
      if (plVar15 < plVar13) break;
    }
  }
  goto LAB_107833b6c;
LAB_107833a48:
  iVar12 = (int)plVar13;
  plVar4 = plVar11 + 3;
  plVar5 = plVar6;
  plVar6 = plVar4;
  plVar3 = plVar14;
  if (plVar4 < plVar7) {
    while( true ) {
      do {
        plVar14 = plVar3;
        plVar4 = plVar6;
        iVar12 = (int)plVar13;
        plVar5 = plVar4;
        func_0x000107842aec();
        plVar6 = plVar4 + 3;
        plVar3 = plVar14;
      } while (((ulong)plVar5 & 1) != 0);
      do {
        plVar7 = plVar7 + -3;
        plVar5 = plVar7;
        func_0x000107842aec();
      } while ((int)plVar5 == 0);
      if (plVar7 <= plVar4) break;
      func_0x0001073ec360(plVar4,plVar7);
      plVar13 = (long *)(ulong)(iVar12 + 1);
      plVar3 = plVar7;
      if (plVar4 != plVar14) {
        plVar3 = plVar14;
      }
    }
  }
  if ((plVar4 != plVar14) &&
     (plVar5 = plVar14, func_0x0001078348bc(plVar14,plVar4), (int)plVar5 != 0)) {
    plVar5 = plVar4;
    func_0x0001073ec360(plVar4,plVar14);
    iVar12 = iVar12 + 1;
  }
  if (plVar4 == plVar15) goto LAB_107833b6c;
  if (iVar12 == 0) {
    plVar7 = plVar11;
    plVar6 = plVar4;
    if (plVar15 < plVar4) {
      do {
        plVar7 = plVar7 + 3;
        if (plVar7 == plVar4) goto LAB_107833b6c;
        plVar5 = plVar7;
        func_0x0001078348bc();
      } while (((ulong)plVar5 & 1) == 0);
    }
    else {
      do {
        plVar6 = plVar6 + 3;
        if (plVar6 == plVar16) goto LAB_107833b6c;
        plVar5 = plVar6;
        func_0x0001078348bc();
      } while ((int)plVar5 == 0);
    }
  }
  if (plVar4 <= plVar15) {
    plVar11 = plVar4 + 3;
    plVar4 = plVar16;
  }
  goto LAB_107833924;
LAB_107833c44:
  for (; plVar11 != plVar7; plVar11 = plVar11 + 3) {
    plVar5 = plVar11;
    plVar15 = plVar4 + 3;
    if (plVar11 != plVar16) {
      for (; plVar15 != plVar16; plVar15 = plVar15 + 3) {
        plVar13 = plVar15;
        func_0x00010784302c();
        plVar6 = plVar15;
        if ((int)plVar13 == 0) {
          plVar6 = plVar5;
        }
        plVar5 = plVar6;
      }
      if (plVar5 != plVar11) {
        func_0x0001073ec360(plVar11,plVar5);
      }
    }
    plVar4 = plVar4 + 3;
  }
LAB_107833b6c:
  lVar9 = param_1[1];
  uVar1 = (lVar9 - *param_1) / 0x18;
  uVar2 = uVar10 - uVar1;
  if (uVar10 < uVar1 || uVar2 == 0) {
    if (uVar10 >= uVar1) {
      return;
    }
    plVar4 = param_1;
    func_0x000107842b58(param_1,*param_1 + uVar10 * 0x18);
    func_0x00010729e5f0();
    plVar4 = (long *)plVar4[1];
    while (plVar4 != param_1) {
      plVar4 = plVar4 + -3;
      func_0x000104c336c8();
    }
    *(long **)(uVar10 + 8) = param_1;
    return;
  }
  if ((ulong)((param_1[2] - lVar9) / 0x18) < uVar2) {
    func_0x000107842764();
    func_0x00010737ccb4();
    func_0x000100660228();
    func_0x0001078430bc();
    if (uVar10 * 0x18 + uVar1 * -0x18 != 0) {
      do {
        func_0x000107842dec();
      } while (extraout_x10 != 0x18);
    }
    func_0x000100660238();
    func_0x00010737c9f4();
    func_0x000107842770();
    return;
  }
  lVar9 = lVar9 + (uVar2 & 0xffffffff) * 0x18;
  if (uVar10 * 0x18 + uVar1 * -0x18 != 0) {
    do {
      func_0x000107842dec();
      lVar9 = extraout_x9;
    } while (extraout_x10_00 != 0x18);
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 107834640; end: 10783464b;  */

void FUN_107834640(void)

{
  func_0x0001078423e8();
  func_0x000107842254();
  func_0x00010784214c();
  return;
}



/* Entry: 1078347d8; end: 1078347ff;  */

undefined8 FUN_1078347d8(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 unaff_x19;
  
  if (param_2 >> 0x3d == 0) {
    func_0x0001078432e0();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_107834640();
  func_0x000107842734();
  func_0x000107834824();
  return unaff_x19;
}



/* Entry: 107834980; end: 1078349a7;  */

undefined4 * FUN_107834980(undefined4 *param_1)

{
  *param_1 = 4;
  func_0x00010726994c(param_1 + 2);
  return param_1;
}



/* Entry: 107834b74; end: 107834b9f;  */

long * FUN_107834b74(long *param_1)

{
  func_0x000107834ba0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078357dc; end: 107835833;  */

void FUN_1078357dc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x000107835814(param_4);
  }
  func_0x000107842be0();
  return;
}



/* Entry: 107835a34; end: 107835a83;  */

bool FUN_107835a34(double param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (NAN(param_1)) {
    return false;
  }
  uVar2 = (ulong)-ABS(param_1) ^
          ((ulong)-ABS(param_1) ^ -(long)param_1) & -(ulong)((long)param_1 < 0);
  uVar1 = uVar2 + 0x8000000000000000;
  if (uVar2 < 0x8000000000000000 || uVar2 + 0x8000000000000000 == 0) {
    uVar1 = 0x8000000000000000 - uVar2;
  }
  return uVar1 < 5;
}



/* Entry: 1078360c8; end: 107836103;  */

void FUN_1078360c8(long param_1,long param_2,long param_3)

{
  if (param_2 != param_3) {
    func_0x000107835aa4(param_3,*(undefined8 *)(param_1 + 8),param_2);
    *(long *)(param_1 + 8) = param_3;
  }
  return;
}



/* Entry: 107836a0c; end: 1078377af;  */

void FUN_107836a0c(undefined1 (*param_1) [16],ulong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  ulong *****pppppuVar5;
  code *pcVar6;
  bool bVar7;
  ulong ***pppuVar8;
  long lVar9;
  ulong *****pppppuVar10;
  ulong *****pppppuVar11;
  ulong *****pppppuVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  long lVar16;
  bool bVar17;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  ulong ****ppppuVar18;
  long extraout_x8;
  int *extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  ulong *****pppppuVar22;
  undefined1 (*pauVar23) [16];
  int iVar24;
  ulong uVar25;
  ulong uVar26;
  ulong *****pppppuVar27;
  ulong ****ppppuVar28;
  ulong *****pppppuVar29;
  int *piVar30;
  ulong *****pppppuVar31;
  int *piVar32;
  undefined1 (*pauVar33) [16];
  undefined1 (*pauVar34) [16];
  undefined1 (*pauVar35) [16];
  ulong ****ppppuVar36;
  ulong *****pppppuVar37;
  undefined1 (*pauVar38) [16];
  undefined8 uVar39;
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 (*pauStack_110) [16];
  long *plStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  uint *puStack_e0;
  uint *puStack_d8;
  undefined8 uStack_d0;
  undefined1 (*pauStack_c8) [16];
  undefined1 (*pauStack_c0) [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong ****ppppuStack_a8;
  ulong ****ppppuStack_a0;
  undefined8 uStack_98;
  ulong ***pppuStack_90;
  ulong ****ppppuStack_88;
  ulong ***pppuStack_80;
  
  pauStack_c8 = (undefined1 (*) [16])0x0;
  pauStack_c0 = (undefined1 (*) [16])0x0;
  uStack_b8 = 0;
  puStack_e0 = (uint *)0x0;
  puStack_d8 = (uint *)0x0;
  uStack_d0 = 0;
  plStack_f8 = (long *)0x0;
  plStack_f0 = (long *)0x0;
  uStack_e8 = 0;
  lVar16 = *(long *)(param_1[2] + 8);
  func_0x000107837810(&plStack_f8);
  pauVar14 = param_1;
  func_0x000107834ab0();
  lVar9 = lVar16;
  func_0x000107834ad4(param_1);
  do {
    lVar20 = lVar16 + -4000;
    do {
      if (lVar16 == lVar9) {
        func_0x000107837864(plStack_f8,plStack_f0);
        plVar21 = plStack_f8;
        func_0x000107837900(param_1,&puStack_e0);
        *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x30);
        uVar25 = 0x7fffffff;
        uVar19 = param_2;
        goto LAB_107836adc;
      }
      func_0x0001078379c4(&plStack_f8,lVar16);
      lVar16 = lVar16 + 200;
      lVar20 = lVar20 + 200;
    } while (*(long *)*pauVar14 != lVar20);
    pauVar14 = (undefined1 (*) [16])(*pauVar14 + 8);
    lVar16 = *(long *)*pauVar14;
  } while( true );
LAB_107836adc:
  pauVar23 = pauStack_c0;
  pauVar14 = pauStack_c8;
  if (puStack_e0 == puStack_d8) {
    uVar26 = uVar25;
    if (plVar21 == plStack_f0) {
      func_0x0001078396e8(&plStack_f8);
      func_0x0001002920a0(&puStack_e0);
      func_0x00010783970c(&pauStack_c8);
      return;
    }
  }
  else {
    puStack_d8 = puStack_d8 + -1;
    uVar26 = (ulong)*puStack_d8;
  }
  uVar25 = uVar26;
  if (pauStack_c8 != pauStack_c0) {
    func_0x000107838144(pauStack_c8,pauStack_c0,uVar26);
    pppppuVar22 = (ulong *****)0x0;
    pppppuVar31 = (ulong *****)0x0;
    uStack_b0 = (ulong *****)0x0;
    ppppuStack_a8 = (ulong ****)0x0;
    ppppuStack_a0 = (ulong ****)0x0;
    pauVar38 = pauVar14;
    pppppuVar29 = (ulong *****)0x0;
    bVar7 = false;
    do {
      while (bVar17 = bVar7, pauVar13 = pauVar38, pauVar15 = pauStack_c0, pauVar33 = pauStack_c8,
            puVar4 = PTR___ZSt7nothrow_1103469d8,
            pauVar13 != (undefined1 (*) [16])(pauVar23[-1] + 8)) {
        pauVar38 = (undefined1 (*) [16])(*pauVar13 + 8);
        ppppuVar28 = *(ulong *****)*pauVar38;
        ppppuVar36 = *(ulong *****)*pauVar13;
        ppppuVar18 = ppppuVar36;
        func_0x0001078381cc(ppppuVar36,ppppuVar28);
        bVar7 = bVar17;
        if (((ulong)ppppuVar18 & 1) == 0) {
          ppppuStack_88 = (ulong ****)0x0;
          pppuStack_80 = (ulong ***)0x0;
          pppuVar8 = ppppuVar36[3];
          func_0x0001078381ec(pppuVar8,ppppuVar28[3],&ppppuStack_88);
          if (((ulong)pppuVar8 & 1) == 0) {
            uStack_b0 = pppppuVar29;
            ppppuStack_a8 = (ulong ****)pppppuVar31;
            ppppuStack_a0 = (ulong ****)pppppuVar22;
            func_0x000107842698();
            func_0x000107842fd0();
LAB_1078376b8:
            func_0x0001078421d4();
            goto LAB_107837714;
          }
          if (pppppuVar31 < pppppuVar22) {
            *pppppuVar31 = ppppuVar36;
            pppppuVar31[1] = *(ulong *****)*pauVar38;
            pppppuVar31[3] = (ulong ****)pppuStack_80;
            pppppuVar31[2] = ppppuStack_88;
            pppppuVar27 = pppppuVar29;
            pppppuVar10 = pppppuVar31;
          }
          else {
            lVar16 = (long)pppppuVar31 - (long)pppppuVar29 >> 5;
            uVar25 = lVar16 + 1;
            if (uVar25 >> 0x3b != 0) {
              uStack_b0 = pppppuVar29;
              ppppuStack_a8 = (ulong ****)pppppuVar31;
              ppppuStack_a0 = (ulong ****)pppppuVar22;
              func_0x000107839730();
              goto LAB_107837714;
            }
            uVar19 = (long)pppppuVar22 - (long)pppppuVar29 >> 4;
            if (uVar19 <= uVar25) {
              uVar19 = uVar25;
            }
            if (0x7fffffffffffffdf < (ulong)((long)pppppuVar22 - (long)pppppuVar29)) {
              uVar19 = 0x7ffffffffffffff;
            }
            if (uVar19 >> 0x3b != 0) {
              uStack_b0 = pppppuVar29;
              ppppuStack_a8 = (ulong ****)pppppuVar31;
              ppppuStack_a0 = (ulong ****)pppppuVar22;
              func_0x000104bd35f4();
              goto LAB_107837714;
            }
            lVar9 = uVar19 << 5;
            __Znwm();
            pppppuVar10 = (ulong *****)(lVar9 + ((long)pppppuVar31 - (long)pppppuVar29));
            *pppppuVar10 = ppppuVar36;
            pppppuVar10[1] = ppppuVar28;
            pppppuVar10[3] = (ulong ****)pppuStack_80;
            pppppuVar10[2] = ppppuStack_88;
            pppppuVar27 = pppppuVar10 + lVar16 * -4;
            pppppuVar12 = pppppuVar27;
            for (pppppuVar22 = pppppuVar29; pppppuVar22 != pppppuVar31;
                pppppuVar22 = pppppuVar22 + 4) {
              *pppppuVar12 = *pppppuVar22;
              pppppuVar12[1] = pppppuVar22[1];
              ppppuVar18 = pppppuVar22[2];
              pppppuVar12[3] = pppppuVar22[3];
              pppppuVar12[2] = ppppuVar18;
              pppppuVar12 = pppppuVar12 + 4;
            }
            pppppuVar22 = (ulong *****)(lVar9 + uVar19 * 0x20);
            uVar19 = param_2;
            if (pppppuVar29 != (ulong *****)0x0) {
              __ZdlPv();
            }
          }
          pppppuVar31 = pppppuVar10 + 4;
          auVar40 = NEON_ext(*pauVar13,*pauVar13,8,1);
          *(long *)(*pauVar13 + 8) = auVar40._8_8_;
          *(long *)*pauVar13 = auVar40._0_8_;
          pppppuVar29 = pppppuVar27;
          bVar7 = true;
        }
      }
      pauVar38 = pauVar14;
      uStack_b0 = pppppuVar29;
      ppppuStack_a8 = (ulong ****)pppppuVar31;
      ppppuStack_a0 = (ulong ****)pppppuVar22;
      bVar7 = false;
    } while (bVar17);
    if (pppppuVar29 != pppppuVar31) {
      ppppuVar28 = (ulong ****)((long)pauStack_c0 - (long)pauStack_c8 >> 3);
      ppppuStack_88 = (ulong ****)0x0;
      pppuStack_80 = (ulong ***)0x0;
      ppppuVar18 = ppppuVar28;
      if ((long)ppppuVar28 < 0x81) {
        ppppuVar18 = (ulong ****)0x0;
      }
      else {
        for (; ppppuVar18 != (ulong ****)0x0; ppppuVar18 = (ulong ****)((ulong)ppppuVar18 >> 1)) {
          lVar16 = (long)ppppuVar18 << 3;
          __ZnwmRKSt9nothrow_t(lVar16,puVar4);
          if (lVar16 != 0) goto LAB_107836d04;
        }
        lVar16 = 0;
LAB_107836d04:
        uStack_98 = 0;
        pppuStack_90 = (ulong ***)ppppuVar18;
        FUN_1078398b8(&ppppuStack_88,lVar16);
        pppuStack_80 = (ulong ***)ppppuVar18;
        func_0x0001078398d0(&uStack_98);
      }
      func_0x00010783973c(pauVar33,pauVar15,ppppuVar28,ppppuStack_88,ppppuVar18);
      func_0x0001078398d0(&ppppuStack_88);
      ppppuVar28 = (ulong ****)((long)pppppuVar31 - (long)pppppuVar29 >> 5);
      ppppuStack_88 = (ulong ****)0x0;
      pppuStack_80 = (ulong ***)0x0;
      ppppuVar18 = ppppuVar28;
      if ((long)ppppuVar28 < 1) {
        ppppuVar18 = (ulong ****)0x0;
      }
      else {
        for (; ppppuVar18 != (ulong ****)0x0; ppppuVar18 = (ulong ****)((ulong)ppppuVar18 >> 1)) {
          lVar16 = (long)ppppuVar18 << 5;
          __ZnwmRKSt9nothrow_t(lVar16,puVar4);
          if (lVar16 != 0) goto LAB_107836d88;
        }
        lVar16 = 0;
LAB_107836d88:
        uStack_98 = 0;
        pppuStack_90 = (ulong ***)ppppuVar18;
        func_0x00010783a098(&ppppuStack_88,lVar16);
        pppuStack_80 = (ulong ***)ppppuVar18;
        func_0x00010783a0b0(&uStack_98);
      }
      func_0x000107839e70(pppppuVar29,pppppuVar31,ppppuVar28,ppppuStack_88,ppppuVar18);
      pppppuVar10 = &ppppuStack_88;
      func_0x00010783a0b0();
      pppppuVar22 = pppppuVar29;
      for (; pppppuVar22 = pppppuVar22 + 4, pppppuVar29 != pppppuVar31;
          pppppuVar29 = pppppuVar29 + 4) {
        pppppuVar12 = (ulong *****)*pppppuVar29;
        pppppuVar37 = (ulong *****)pppppuVar29[1];
        func_0x000107842764();
        func_0x0001078430c8();
        pppppuVar27 = pppppuVar10 + 1;
        pppppuVar11 = pppppuVar10;
        pppppuVar5 = pppppuVar22;
        if ((ulong *****)*pppppuVar27 != pppppuVar37 && (ulong *****)*pppppuVar27 != pppppuVar12) {
          do {
            pppppuVar12 = pppppuVar5;
            if (pppppuVar12 == pppppuVar31) {
              func_0x000107842698();
              __ZNSt13runtime_errorC1EPKc();
              goto LAB_1078376b8;
            }
            ppppuVar18 = *pppppuVar12;
            ppppuVar28 = pppppuVar12[1];
            func_0x000107842764();
            func_0x0001078430c8();
            pppppuVar5 = pppppuVar12 + 4;
          } while (pppppuVar11[1] != ppppuVar28 && pppppuVar11[1] != ppppuVar18);
          pppppuVar27 = pppppuVar11 + 1;
          pppppuVar10 = pppppuVar29;
          FUN_10783a740(pppppuVar29,pppppuVar12);
          pppppuVar12 = (ulong *****)*pppppuVar29;
          pppppuVar37 = (ulong *****)pppppuVar29[1];
        }
        func_0x000107838294(pppppuVar29[2],pppppuVar29[3]);
        ppppuStack_88 = (ulong ****)pppppuVar10;
        func_0x00010784249c(pppppuVar12,pppppuVar37,&ppppuStack_88);
        ppppuVar18 = *pppppuVar11;
        *pppppuVar11 = *pppppuVar27;
        *pppppuVar27 = ppppuVar18;
        pppppuVar10 = pppppuVar12;
      }
    }
    uVar25 = uVar26 & 0xffffffff;
    param_1 = (undefined1 (*) [16])&uStack_b0;
    func_0x00010783c58c();
  }
  pauVar23 = pauStack_c0;
  pauVar14 = pauStack_c8;
  lVar16 = *(long *)(uVar19 + 0x48);
  while (pauVar38 = pauStack_c8, (int)uVar25 < *(int *)(lVar16 + 4)) {
    *(long *)(uVar19 + 0x48) = lVar16 + 8;
    lVar16 = lVar16 + 8;
  }
  for (; iVar24 = (int)uVar25, pauVar38 != pauVar23;
      pauVar38 = (undefined1 (*) [16])(*pauVar38 + lVar16)) {
    pauVar33 = *(undefined1 (**) [16])*pauVar38;
    if (pauVar33 == (undefined1 (*) [16])0x0) {
LAB_107836fd4:
      lVar16 = 8;
    }
    else {
      param_1 = *(undefined1 (**) [16])(pauVar33[1] + 8);
      if (*(long *)pauVar33[2] != *(long *)(*pauVar33 + 8)) {
        bVar7 = *(int *)(*param_1 + 0xc) == iVar24;
        if ((!bVar7) || (func_0x000107843108(*(undefined8 *)(*(long *)pauVar33[2] + 0x10)), !bVar7))
        goto LAB_107836fc4;
        if (*(long *)pauVar33[3] != 0) {
          func_0x00010783adc8(pauVar33,*param_1 + 8,uVar19);
        }
        func_0x0001078430e0();
        param_1 = *(undefined1 (**) [16])*pauVar38;
        if (*(long *)param_1[3] != 0) {
          func_0x00010784270c(param_1,*(undefined8 *)(param_1[1] + 8));
        }
        goto LAB_107836fd4;
      }
      if (*(int *)(*param_1 + 0xc) != iVar24) {
LAB_107836fc4:
        uVar39 = func_0x000107838198(param_1,uVar25);
        *(undefined8 *)pauVar33[4] = uVar39;
        goto LAB_107836fd4;
      }
      pauVar13 = *(undefined1 (**) [16])(pauVar33[3] + 8);
      func_0x000107843098(pauVar13,pauVar14);
      lVar16 = *(long *)*pauVar13;
      bVar7 = pauVar23 == pauVar13;
      pauVar15 = pauVar13;
      if ((((!bVar7) && (func_0x000107842dac(), lVar16 = extraout_x8, bVar7)) ||
          (*(long *)(lVar16 + 0x20) != *(long *)(lVar16 + 8))) ||
         (*(int *)(*(long *)(lVar16 + 0x18) + 0xc) != iVar24)) goto LAB_107836fc4;
      lVar16 = 8;
      param_1 = pauVar15;
      pauVar35 = pauVar38;
      pauVar15 = pauVar38;
      while (pauVar15 = (undefined1 (*) [16])(*pauVar15 + 8),
            pauVar15 != pauVar23 && pauVar15 != pauVar13) {
        if (*(long *)*pauVar15 != 0) {
          func_0x00010784249c(pauVar33,*(long *)*pauVar15,*(long *)(pauVar33[1] + 8) + 8);
          lVar16 = 0;
          pauVar34 = *(undefined1 (**) [16])*pauVar35;
          *(undefined8 *)*pauVar35 = *(undefined8 *)*pauVar15;
          *(undefined1 (**) [16])*pauVar15 = pauVar34;
          param_1 = pauVar33;
          pauVar35 = pauVar15;
          pauVar33 = pauVar34;
        }
      }
      lVar9 = *(long *)(*(long *)*pauVar13 + 0x30);
      if (*(long *)pauVar33[3] == 0) {
        if (lVar9 != 0) goto LAB_1078376fc;
      }
      else {
        if (lVar9 == 0) {
LAB_1078376fc:
          func_0x000107842698();
          __ZNSt13runtime_errorC1EPKc();
          func_0x0001078421d4();
LAB_107837714:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x107837718);
          (*pcVar6)();
        }
        func_0x00010783aa88(pauVar33,*(long *)*pauVar13,*(long *)(pauVar33[1] + 8) + 8,uVar19,
                            &pauStack_c8);
        param_1 = pauVar33;
      }
      uVar25 = uVar26 & 0xffffffff;
      *(undefined8 *)*pauVar13 = 0;
      *(undefined8 *)*pauVar35 = 0;
    }
  }
  func_0x000107843018();
  pauVar14 = param_1;
  if ((long)pauVar23 - (long)param_1 != 0) {
    lVar16 = (long)pauVar23 - ((long)param_1 + ((long)pauVar23 - (long)param_1));
    if (lVar16 != 0) {
      func_0x000107842ce4();
    }
    pauStack_c0 = (undefined1 (*) [16])((long)param_1 + lVar16);
  }
  while (((pauVar23 = pauStack_c8, plVar21 != plStack_f0 &&
          (pauVar14 = (undefined1 (*) [16])*plVar21, iVar24 == *(int *)pauVar14[0xc])) &&
         (pauVar14[0xc][4] == '\x01'))) {
    func_0x00010783c5d8();
    pauVar14 = (undefined1 (*) [16])*plVar21;
    func_0x0001078427b8();
    plVar21 = plVar21 + 1;
  }
  while( true ) {
    pauVar33 = pauStack_c0;
    pauVar38 = pauStack_c8;
    bVar7 = pauVar23 == pauStack_c0;
    iVar24 = (int)uVar25;
    if (bVar7) break;
    pauVar38 = *(undefined1 (**) [16])*pauVar23;
    if ((pauVar38 == (undefined1 (*) [16])0x0) ||
       (func_0x000107842dac(), pauVar15 = pauStack_c8, !bVar7)) {
LAB_1078375b0:
      pauVar23 = (undefined1 (*) [16])(*pauVar23 + 8);
    }
    else {
      iVar1 = *extraout_x8_00;
      iVar2 = extraout_x8_00[2];
      if (iVar2 <= iVar1) {
        if ((*(long *)pauVar38[2] == *(long *)(*pauVar38 + 8)) && (extraout_x8_00[3] == iVar24)) {
          pauVar14 = *(undefined1 (**) [16])(pauVar38[3] + 8);
          func_0x000107843098(pauVar14,pauStack_c8);
          pauStack_110 = (undefined1 (*) [16])(*pauVar14 + 8);
          bVar7 = true;
        }
        else {
          pauStack_110 = pauStack_c8;
          bVar7 = false;
        }
        for (piVar32 = *(int **)(uVar19 + 0x48);
            (piVar32 != *(int **)(uVar19 + 0x38) &&
            ((piVar32[1] < iVar24 || ((piVar32[1] == iVar24 && (*piVar32 < iVar2))))));
            piVar32 = piVar32 + 2) {
        }
        pauVar38 = (undefined1 (*) [16])(*pauVar23 + 8);
        pauVar33 = pauVar23;
        while (pauVar13 = pauVar33, pauVar13 != pauVar15) {
          pauVar33 = (undefined1 (*) [16])(pauVar13[-1] + 8);
          if (*(long *)*pauVar33 != 0) {
            while (piVar30 = piVar32 + -2, piVar32 != *(int **)(uVar19 + 0x30)) {
              lVar16 = *(long *)*pauVar33;
              if (((piVar32[-1] != (int)uVar25) ||
                  (*piVar30 <= (int)(long)*(double *)(lVar16 + 0x40))) ||
                 (pauVar14 = *(undefined1 (**) [16])(pauVar38[-1] + 8),
                 *piVar30 <= *(int *)(*(long *)(pauVar14[1] + 8) + 8))) goto LAB_107837374;
              piVar32 = piVar30;
              if (*(long *)pauVar14[3] != 0) {
                func_0x00010784270c(pauVar14,piVar30);
              }
            }
            lVar16 = *(long *)*pauVar33;
LAB_107837374:
            dVar41 = *(double *)(lVar16 + 0x40);
            pauVar35 = *(undefined1 (**) [16])(pauVar38[-1] + 8);
            uVar25 = *(ulong *)(pauVar35[1] + 8);
            uVar3 = *(uint *)(uVar25 + 8);
            uVar19 = (ulong)uVar3;
            func_0x000107838634(dVar41,(double)(int)uVar3);
            if ((((ulong)pauVar14 & 1) != 0) ||
               (((uVar3 == (uint)(long)dVar41 && (*(long *)pauVar35[2] != *(long *)(*pauVar35 + 8)))
                && (*(double *)(uVar25 + 0x10) < *(double *)(*(long *)pauVar35[2] + 0x10))))) {
              func_0x000107843140();
              goto LAB_107837430;
            }
            func_0x000107843140();
            if (extraout_x9_00 != 0) {
              uStack_b0 = (ulong *****)CONCAT44((int)uVar25,extraout_w8_00);
              func_0x00010784270c(pauVar35,&uStack_b0);
            }
            bVar17 = false;
            if (pauVar13 == pauStack_110) {
              bVar17 = bVar7;
            }
            if (bVar17) {
              pauVar14 = *(undefined1 (**) [16])(pauVar38[-1] + 8);
              if ((*(long *)pauVar14[3] != 0) &&
                 (*(long *)(*(long *)(pauStack_110[-1] + 8) + 0x30) != 0)) {
                func_0x000107842c5c(*(undefined8 *)(pauVar14[1] + 8));
              }
              *(undefined8 *)(pauStack_110[-1] + 8) = 0;
              goto LAB_1078375ac;
            }
            pauVar14 = *(undefined1 (**) [16])*pauVar33;
            uStack_b0 = (ulong *****)CONCAT44((int)uVar25,(int)(long)*(double *)pauVar14[4]);
            func_0x00010784249c(pauVar14,*(undefined8 *)(pauVar38[-1] + 8),&uStack_b0);
            uVar39 = *(undefined8 *)(pauVar38[-1] + 8);
            *(undefined8 *)(pauVar38[-1] + 8) = *(undefined8 *)*pauVar33;
            *(undefined8 *)*pauVar33 = uVar39;
            pauVar38 = pauVar13;
          }
        }
        pauVar35 = *(undefined1 (**) [16])(pauVar38[-1] + 8);
LAB_107837430:
        if (*(long *)pauVar35[3] != 0) {
          while (piVar32 != *(int **)(uVar19 + 0x30)) {
            pauVar33 = *(undefined1 (**) [16])(pauVar38[-1] + 8);
            if ((piVar32[-1] != (int)uVar25) ||
               (piVar32[-2] <= *(int *)(*(long *)(pauVar33[1] + 8) + 8))) goto LAB_107837480;
            piVar32 = piVar32 + -2;
            func_0x00010784270c(pauVar33,piVar32);
            pauVar14 = pauVar33;
          }
          pauVar33 = *(undefined1 (**) [16])(pauVar38[-1] + 8);
LAB_107837480:
          pauVar35 = pauVar33;
          if (*(long *)pauVar33[3] != 0) {
            func_0x00010784270c(pauVar33,*(long *)(pauVar33[1] + 8) + 8);
            pauVar35 = *(undefined1 (**) [16])(pauVar38[-1] + 8);
            pauVar14 = pauVar33;
          }
        }
        if (*(long *)pauVar35[2] == *(long *)(*pauVar35 + 8)) {
LAB_1078375ac:
          *(undefined8 *)(pauVar38[-1] + 8) = 0;
        }
        else {
          func_0x0001078430e0();
        }
        goto LAB_1078375b0;
      }
      if ((*(long *)pauVar38[2] == *(long *)(*pauVar38 + 8)) && (extraout_x8_00[3] == iVar24)) {
        pauStack_110 = *(undefined1 (**) [16])(pauVar38[3] + 8);
        func_0x000107843098(pauStack_110,pauStack_c8);
        bVar7 = true;
        pauVar15 = pauStack_110;
      }
      else {
        bVar7 = false;
        pauStack_110 = pauVar33;
        pauVar15 = pauVar14;
      }
      for (piVar32 = *(int **)(uVar19 + 0x48);
          (piVar32 != *(int **)(uVar19 + 0x38) &&
          ((iVar24 < piVar32[1] || ((piVar32[1] == iVar24 && (*piVar32 < iVar1))))));
          piVar32 = piVar32 + 2) {
      }
      lVar16 = 8;
      pauVar14 = pauVar23;
      pauVar13 = pauVar23;
      while (pauVar14 = (undefined1 (*) [16])(*pauVar14 + 8), pauVar14 != pauVar33) {
        if (*(long *)*pauVar14 != 0) {
          for (; piVar32 != *(int **)(uVar19 + 0x38); piVar32 = piVar32 + 2) {
            lVar9 = *(long *)*pauVar14;
            if (((piVar32[1] != (int)uVar25) || ((int)(long)*(double *)(lVar9 + 0x40) <= *piVar32))
               || (pauVar15 = *(undefined1 (**) [16])*pauVar13,
                  *(int *)(*(long *)(pauVar15[1] + 8) + 8) <= *piVar32)) goto LAB_1078371d4;
            if (*(long *)pauVar15[3] != 0) {
              func_0x00010784270c(pauVar15,piVar32);
            }
          }
          lVar9 = *(long *)*pauVar14;
LAB_1078371d4:
          dVar41 = *(double *)(lVar9 + 0x40);
          pauVar38 = *(undefined1 (**) [16])*pauVar13;
          uVar25 = *(ulong *)(pauVar38[1] + 8);
          uVar3 = *(uint *)(uVar25 + 8);
          uVar19 = (ulong)uVar3;
          func_0x000107838660(dVar41,(double)(int)uVar3);
          if ((((ulong)pauVar15 & 1) != 0) ||
             (((uVar3 == (uint)(long)dVar41 && (*(long *)pauVar38[2] != *(long *)(*pauVar38 + 8)))
              && (*(double *)(uVar25 + 0x10) < *(double *)(*(long *)pauVar38[2] + 0x10))))) {
            func_0x000107843140();
            break;
          }
          func_0x000107843140();
          if (extraout_x9 != 0) {
            uStack_b0 = (ulong *****)CONCAT44((int)uVar25,extraout_w8);
            func_0x00010784270c(pauVar38,&uStack_b0);
          }
          bVar17 = false;
          if (pauVar14 == pauStack_110) {
            bVar17 = bVar7;
          }
          pauVar15 = *(undefined1 (**) [16])*pauVar13;
          if (bVar17) {
            if ((*(long *)pauVar15[3] != 0) && (*(long *)(*(long *)*pauStack_110 + 0x30) != 0)) {
              func_0x000107842c5c(*(undefined8 *)(pauVar15[1] + 8));
            }
            *(undefined8 *)*pauStack_110 = 0;
            goto LAB_107837574;
          }
          uStack_b0 = (ulong *****)
                      CONCAT44((int)uVar25,(int)(long)*(double *)(*(long *)*pauVar14 + 0x40));
          func_0x00010784249c(pauVar15,*(long *)*pauVar14,&uStack_b0);
          lVar16 = 0;
          pauVar38 = *(undefined1 (**) [16])*pauVar13;
          *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar14;
          *(undefined1 (**) [16])*pauVar14 = pauVar38;
          pauVar13 = pauVar14;
        }
      }
      pauVar14 = pauVar38;
      if (*(long *)pauVar38[3] != 0) {
        for (; piVar32 != *(int **)(uVar19 + 0x38); piVar32 = piVar32 + 2) {
          pauVar38 = *(undefined1 (**) [16])*pauVar13;
          if ((piVar32[1] != (int)uVar25) || (*(int *)(*(long *)(pauVar38[1] + 8) + 8) <= *piVar32))
          goto LAB_107837508;
          func_0x00010784270c(pauVar38,piVar32);
          pauVar15 = pauVar38;
        }
        pauVar38 = *(undefined1 (**) [16])*pauVar13;
LAB_107837508:
        pauVar14 = pauVar38;
        if (*(long *)pauVar38[3] != 0) {
          func_0x00010784270c(pauVar38,*(long *)(pauVar38[1] + 8) + 8);
          pauVar14 = *(undefined1 (**) [16])*pauVar13;
          pauVar15 = pauVar38;
        }
      }
      if (*(long *)pauVar14[2] == *(long *)(*pauVar14 + 8)) {
LAB_107837574:
        *(undefined8 *)*pauVar13 = 0;
        pauVar14 = pauVar15;
      }
      else {
        func_0x00010783899c(pauVar14,&puStack_e0);
      }
      pauVar23 = (undefined1 (*) [16])(*pauVar23 + lVar16);
    }
  }
  func_0x000107843018();
  param_1 = pauVar14;
  if ((long)pauVar23 - (long)pauVar14 != 0) {
    lVar16 = (long)pauVar23 - ((long)pauVar14 + ((long)pauVar23 - (long)pauVar14));
    if (lVar16 != 0) {
      func_0x000107842ce4();
    }
    pauVar33 = (undefined1 (*) [16])((long)pauVar14 + lVar16);
    pauStack_c0 = pauVar33;
  }
  for (; pauVar38 != pauVar33; pauVar38 = (undefined1 (*) [16])(*pauVar38 + 8)) {
    param_1 = *(undefined1 (**) [16])*pauVar38;
    if ((*(long *)param_1[2] != *(long *)(*param_1 + 8)) &&
       (*(int *)(*(long *)(param_1[1] + 8) + 0xc) == iVar24)) {
      if (*(long *)param_1[3] != 0) {
        func_0x00010784270c(param_1,*(long *)(param_1[1] + 8) + 8);
        param_1 = *(undefined1 (**) [16])*pauVar38;
      }
      func_0x00010783899c(param_1,&puStack_e0);
    }
  }
  while ((plVar21 != plStack_f0 &&
         (param_1 = (undefined1 (*) [16])*plVar21, iVar24 == *(int *)param_1[0xc]))) {
    func_0x00010783c5d8();
    param_1 = (undefined1 (*) [16])*plVar21;
    func_0x0001078427b8();
    plVar21 = plVar21 + 1;
  }
  goto LAB_107836adc;
}



/* Entry: 107837bd4; end: 107837c03;  */

bool FUN_107837bd4(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0xc0) == *(int *)(param_1 + 0xc0)) {
    return (bool)(*(byte *)(param_2 + 0xc4) != *(byte *)(param_1 + 0xc4) & *(byte *)(param_1 + 0xc4)
                 );
  }
  return *(int *)(param_2 + 0xc0) < *(int *)(param_1 + 0xc0);
}



/* Entry: 1078385d8; end: 107838633;  */

void FUN_1078385d8(long *param_1,int *param_2)

{
  long lVar1;
  int *piVar2;
  ulong uVar3;
  long *plVar4;
  int *piVar5;
  ulong uVar6;
  int *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_58 [40];
  
  piVar5 = (int *)*param_1;
  uVar3 = param_1[1] - *param_1 >> 2;
  while (piVar2 = piVar5, uVar3 != 0) {
    uVar6 = uVar3 >> 1;
    piVar5 = piVar2 + uVar6 + 1;
    uVar3 = uVar3 + (uVar3 >> 1 ^ 0xffffffffffffffff);
    if (*param_2 <= piVar2[uVar6]) {
      piVar5 = piVar2;
      uVar3 = uVar6;
    }
  }
  if (((int *)param_1[1] != piVar2) && (*piVar2 <= *param_2)) {
    return;
  }
  func_0x0001078425f8();
  piVar5 = (int *)param_1[1];
  if (piVar5 < (int *)param_1[2]) {
    if (unaff_x19 == piVar5) {
      *piVar5 = *param_2;
      unaff_x20[1] = (long)(piVar5 + 1);
    }
    else {
      func_0x000107842758();
      func_0x0001078387bc();
      lVar1 = 4;
      if ((int *)unaff_x20[1] <= param_2 || param_2 < unaff_x19) {
        lVar1 = 0;
      }
      *unaff_x19 = *(int *)((long)param_2 + lVar1);
    }
  }
  else {
    plVar4 = unaff_x20;
    func_0x0001006601e8();
    func_0x000100161bec(auStack_58,plVar4,(long)unaff_x19 - *unaff_x20 >> 2,param_1 + 2);
    func_0x0001078387fc(auStack_58,param_2);
    func_0x0001078388c8();
    func_0x0001078426b0();
    func_0x000100161cc4();
  }
  return;
}



/* Entry: 107838968; end: 107838a3b;  */

void FUN_107838968(long param_1,undefined4 *param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  
  lVar2 = param_3 - (long)param_2 >> 2;
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  puVar1 = puVar3;
  for (lVar4 = lVar2 << 2; lVar4 != 0; lVar4 = lVar4 + -4) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  *(undefined4 **)(param_1 + 0x10) = puVar3 + lVar2;
  return;
}



/* Entry: 107839208; end: 1078392df;  */

void FUN_107839208(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = param_2[1];
  bVar1 = *param_2 < *param_1;
  if (iVar4 != param_1[1]) {
    bVar1 = param_1[1] < iVar4;
  }
  bVar2 = *param_3 < *param_2;
  if (param_3[1] != iVar4) {
    bVar2 = iVar4 < param_3[1];
  }
  if (bVar1) {
    uVar3 = *(undefined8 *)param_1;
    if (bVar2) {
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar3;
      iVar4 = (int)((ulong)uVar3 >> 0x20);
      bVar1 = *param_3 < (int)uVar3;
      if (param_3[1] != iVar4) {
        bVar1 = iVar4 < param_3[1];
      }
      if (!bVar1) {
        return;
      }
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
    }
    *(undefined8 *)param_3 = uVar3;
  }
  else if (bVar2) {
    uVar3 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar3;
    bVar1 = *param_2 < *param_1;
    if (param_2[1] != param_1[1]) {
      bVar1 = param_1[1] < param_2[1];
    }
    if (bVar1) {
      uVar3 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar3;
      return;
    }
  }
  return;
}



/* Entry: 1078398b8; end: 1078398cf;  */

void FUN_1078398b8(long *param_1,long param_2)

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



/* Entry: 10783a740; end: 10783a76b;  */

void FUN_10783a740(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_1[1];
  uVar3 = *param_1;
  uVar2 = param_1[3];
  uVar1 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar5 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar5;
  param_2[1] = uVar4;
  *param_2 = uVar3;
  param_2[3] = uVar2;
  param_2[2] = uVar1;
  return;
}



/* Entry: 10783b550; end: 10783b573;  */

long FUN_10783b550(long param_1)

{
  ulong uVar1;
  
  uVar1 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
  return *(long *)(*(long *)(param_1 + 8) + (uVar1 >> 7) * 8) + (uVar1 & 0x7f) * 0x20;
}



/* Entry: 10783ba00; end: 10783ba73;  */

undefined1 * FUN_10783ba00(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 in_CY;
  long lVar1;
  long extraout_x9;
  long extraout_x10;
  long extraout_x12;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  
  func_0x00010066015c();
  func_0x0001078431a0();
  if ((bool)in_CY) {
    func_0x000107842ec4();
    if (extraout_x12 != 0) {
      func_0x000107838afc();
      do {
        param_1 = *(undefined1 **)(param_1 + 0x28);
      } while (param_1 != param_2 && param_1 != (undefined1 *)0x0);
      return (undefined1 *)(ulong)(param_1 == param_2);
    }
    func_0x000107842b2c();
    lVar1 = extraout_x10;
    if ((bool)in_CY) {
      lVar1 = extraout_x9;
    }
    if (lVar1 != 0) {
      func_0x000107838b28();
    }
    func_0x0001078425a4(lVar1 + (long)unaff_x21);
    func_0x000107838b08();
    puVar2 = *(undefined8 **)(unaff_x19 + 8);
    param_1 = auStack_58;
    func_0x000107838b50(param_1);
  }
  else {
    puVar2 = unaff_x21 + 1;
    *unaff_x21 = unaff_x20;
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar2;
  return param_1;
}



/* Entry: 10783beb4; end: 10783bf03;  */

void FUN_10783beb4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lStack_18;
  
  plVar1 = (long *)*param_2;
  while( true ) {
    if (plVar1 == (long *)param_2[1]) {
      lStack_18 = param_1;
      func_0x00010783bf28(param_2,&lStack_18);
      return;
    }
    if (*plVar1 == 0) break;
    plVar1 = plVar1 + 1;
  }
  *plVar1 = param_1;
  return;
}



/* Entry: 10783c0dc; end: 10783c48b;  */

void FUN_10783c0dc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined8 *puVar9;
  undefined8 *extraout_x8_00;
  long lVar10;
  undefined8 extraout_x8_01;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  
  plVar12 = (long *)(param_1 + 0xa8);
  puVar18 = *(undefined8 **)(param_1 + 0x88);
  puVar17 = *(undefined8 **)(param_1 + 0x90);
  uVar1 = (long)puVar17 - (long)puVar18;
  lVar10 = 0;
  if (uVar1 != 0) {
    lVar10 = ((long)puVar17 - (long)puVar18 >> 3) * 0x2a + -1;
  }
  puVar16 = (undefined8 *)(param_1 + 0x80);
  uVar7 = *(ulong *)(param_1 + 0xa0);
  if (lVar10 != *plVar12 + uVar7) goto LAB_10783c308;
  if (uVar7 < 0x2a) {
    puVar13 = (undefined8 *)(param_1 + 0x98);
    puVar14 = (undefined8 *)*puVar13;
    puVar15 = *(undefined8 **)(param_1 + 0x80);
    if ((ulong)((long)puVar14 - (long)puVar15) <= uVar1) {
      puVar8 = (undefined8 *)((long)puVar14 - (long)puVar15 >> 2);
      if (puVar14 == puVar15) {
        puVar8 = (undefined8 *)0x1;
      }
      puStack_98 = puVar13;
      func_0x00010783bff8();
      puVar14 = (undefined8 *)((long)puVar8 + uVar1);
      puVar15 = puVar8 + (long)param_2;
      uVar5 = 0xfc0;
      puVar6 = param_2;
      puStack_b8 = puVar8;
      puStack_b0 = puVar14;
      puStack_a8 = puVar14;
      puStack_a0 = puVar15;
      __Znwm();
      uStack_c0 = 0x2a;
      puVar9 = puVar14;
      plStack_c8 = plVar12;
      if (uVar1 == (long)param_2 * 8) {
        uStack_d0 = uVar5;
        if (puVar17 == puVar18) {
          puVar18 = (undefined8 *)0x1;
          puStack_70 = puVar13;
          func_0x00010783bff8();
          puStack_78 = puVar18 + (long)puVar6;
          puVar6 = puVar14;
          puStack_90 = puVar18;
          puStack_88 = puVar18;
          puStack_80 = puVar18;
          func_0x00010783c540(&puStack_90,puVar14,puVar14);
          puVar4 = puStack_78;
          puVar9 = puStack_80;
          puVar17 = puStack_88;
          puVar18 = puStack_90;
          puStack_b8 = puStack_90;
          puStack_b0 = puStack_88;
          puStack_a0 = puStack_78;
          puStack_90 = puVar8;
          puStack_88 = puVar14;
          puStack_80 = puVar14;
          puStack_78 = puVar15;
          func_0x0001078430ec();
          puVar8 = puVar18;
          puVar14 = puVar17;
          puVar15 = puVar4;
        }
        else {
          func_0x000107842918((long)puVar14 - (long)puVar8);
          puVar14 = puVar14 + extraout_x8;
          puVar9 = puVar14;
          puStack_b0 = puVar14;
        }
      }
      puVar18 = puVar9 + 1;
      *puVar9 = uVar5;
      uStack_d0 = 0;
      puVar17 = *(undefined8 **)(param_1 + 0x90);
      puStack_a8 = puVar18;
      while (puVar9 = *(undefined8 **)(param_1 + 0x88), puVar17 != puVar9) {
        puVar9 = puVar14;
        if (puVar14 == puVar8) {
          if (puVar18 < puVar15) {
            lVar10 = (long)puVar18 - (long)puVar8;
            puVar4 = puVar18 + (((long)puVar15 - (long)puVar18 >> 3) + 1) / 2;
            puVar9 = (undefined8 *)((long)puVar4 - ((long)puVar18 - (long)puVar8));
            puVar18 = puVar4;
            if (lVar10 != 0) {
              _memmove(puVar9,puVar14,lVar10);
              puVar6 = puVar14;
            }
          }
          else {
            puVar9 = (undefined8 *)((long)puVar15 - (long)puVar8 >> 2);
            if ((long)puVar15 - (long)puVar8 == 0) {
              puVar9 = (undefined8 *)0x1;
            }
            puVar4 = puVar9;
            puStack_70 = puVar13;
            func_0x00010783bff8();
            func_0x000107842b7c((long)puVar9 * 2 + 6);
            puStack_78 = puVar4 + (long)puVar6;
            puVar6 = puVar8;
            puStack_90 = puVar4;
            puStack_88 = extraout_x8_00;
            puStack_80 = extraout_x8_00;
            func_0x00010783c540(&puStack_90,puVar8,puVar18);
            puVar3 = puStack_78;
            puVar2 = puStack_80;
            puVar9 = puStack_88;
            puVar4 = puStack_90;
            puStack_90 = puVar8;
            puStack_88 = puVar14;
            puStack_80 = puVar18;
            puStack_78 = puVar15;
            func_0x0001078430ec();
            puVar8 = puVar4;
            puVar18 = puVar2;
            puVar15 = puVar3;
          }
        }
        puVar17 = puVar17 + -1;
        puVar14 = puVar9 + -1;
        *puVar14 = *puVar17;
      }
      puStack_b8 = *(undefined8 **)(param_1 + 0x80);
      *(undefined8 **)(param_1 + 0x80) = puVar8;
      *(undefined8 **)(param_1 + 0x88) = puVar14;
      puStack_a0 = *(undefined8 **)(param_1 + 0x98);
      puStack_a8 = *(undefined8 **)(param_1 + 0x90);
      *(undefined8 **)(param_1 + 0x90) = puVar18;
      *(undefined8 **)(param_1 + 0x98) = puVar15;
      puStack_b0 = puVar9;
      func_0x00010783c564(&uStack_d0);
      func_0x00010783c020(&puStack_b8);
      goto LAB_10783c308;
    }
    uVar5 = 0xfc0;
    __Znwm();
    if (puVar14 != puVar17) {
      *puVar17 = uVar5;
      *(undefined8 **)(param_1 + 0x90) = puVar17 + 1;
      goto LAB_10783c308;
    }
    if (puVar18 == puVar15) {
      puVar14 = (undefined8 *)((long)puVar14 - (long)puVar18 >> 2);
      if (puVar17 == puVar18) {
        puVar14 = (undefined8 *)0x1;
      }
      lVar10 = (long)puVar14 * 2;
      puStack_70 = puVar13;
      func_0x00010783bff8();
      func_0x000107842b7c(lVar10 + 6);
      puStack_78 = puVar14 + (long)param_2;
      puStack_90 = puVar14;
      puStack_88 = (undefined8 *)extraout_x8_01;
      puStack_80 = (undefined8 *)extraout_x8_01;
      func_0x00010783c540(&puStack_90,*(undefined8 *)(param_1 + 0x88),
                          *(undefined8 *)(param_1 + 0x90));
      puVar17 = *(undefined8 **)(param_1 + 0x88);
      puVar18 = *(undefined8 **)(param_1 + 0x80);
      puVar14 = *(undefined8 **)(param_1 + 0x98);
      puVar13 = *(undefined8 **)(param_1 + 0x90);
      *(undefined8 **)(param_1 + 0x88) = puStack_88;
      *(undefined8 **)(param_1 + 0x80) = puStack_90;
      *(undefined8 **)(param_1 + 0x98) = puStack_78;
      *(undefined8 **)(param_1 + 0x90) = puStack_80;
      puStack_90 = puVar18;
      puStack_88 = puVar17;
      puStack_80 = puVar13;
      puStack_78 = puVar14;
      func_0x0001078430ec();
      puVar18 = *(undefined8 **)(param_1 + 0x88);
    }
    puVar18[-1] = uVar5;
    *(undefined8 **)(param_1 + 0x88) = puVar18;
  }
  else {
    *(ulong *)(param_1 + 0xa0) = uVar7 - 0x2a;
    uVar5 = *puVar18;
    *(undefined8 **)(param_1 + 0x88) = puVar18 + 1;
  }
  func_0x00010783c4c4(puVar16,uVar5);
LAB_10783c308:
  func_0x00010783c48c();
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar16[2] = 0x7ff8000000000000;
  puVar16[4] = 0;
  puVar16[3] = 0;
  puVar16[6] = 0;
  puVar16[5] = 0;
  puVar16[8] = 0;
  puVar16[7] = 0;
  puVar16[10] = 0;
  puVar16[9] = 0;
  *(undefined2 *)(puVar16 + 0xb) = 0;
  lVar10 = *(long *)(param_1 + 0xa8);
  *(long *)(param_1 + 0xa8) = lVar10 + 1;
  uVar1 = *(long *)(param_1 + 0xa0) + lVar10;
  lVar11 = *(long *)(*(long *)(param_1 + 0x88) + (uVar1 / 0x2a) * 8);
  lVar10 = *(long *)(param_1 + 200);
  *(long *)(param_1 + 200) = lVar10 + 1;
  *(long *)(lVar11 + (uVar1 % 0x2a) * 0x60) = lVar10;
  return;
}



/* Entry: 10783c918; end: 10783c9cb;  */

void FUN_10783c918(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong unaff_x21;
  ulong uVar4;
  
  func_0x00010783e134(param_1 + 0x80);
  func_0x000107842c90();
  uVar2 = param_1 + 0x80;
  func_0x00010783c48c();
  do {
    uVar4 = unaff_x21 - 0xfc0;
    do {
      if (unaff_x21 == uVar2) {
        return;
      }
      if (*(long *)(unaff_x21 + 0x48) != 0) {
        func_0x00010783e16c(unaff_x21);
        uVar3 = unaff_x21;
        func_0x00010783e1a8();
        if (uVar3 < 3) {
          func_0x000107842c0c();
          func_0x00010783e1dc();
        }
        else {
          uVar3 = unaff_x21;
          func_0x00010783bab4();
          iVar1 = (int)uVar3;
          func_0x000107843034();
          if ((int)uVar3 != iVar1) {
            func_0x00010783ba90(*(undefined8 *)(unaff_x21 + 0x48));
            func_0x00010783e16c(unaff_x21);
          }
        }
      }
      unaff_x21 = unaff_x21 + 0x60;
      uVar4 = uVar4 + 0x60;
    } while (*unaff_x20 != uVar4);
    unaff_x20 = unaff_x20 + 1;
    unaff_x21 = *unaff_x20;
  } while( true );
}



/* Entry: 10783db2c; end: 10783db43;  */

void FUN_10783db2c(long *param_1,long param_2)

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



/* Entry: 10783e244; end: 10783e277;  */

undefined1 FUN_10783e244(long param_1)

{
  if (NAN(*(double *)(param_1 + 0x10))) {
    func_0x00010783e16c();
  }
  return *(undefined1 *)(param_1 + 0x58);
}



/* Entry: 10783ede0; end: 10783ee1f;  */

void FUN_10783ede0(long param_1,ulong param_2)

{
  ulong unaff_x19;
  long *unaff_x20;
  
  func_0x0001078425f8();
  while (param_2 != 0) {
    func_0x000107843064();
    if (param_1 != 0) goto LAB_10783ee14;
    unaff_x19 = unaff_x19 >> 1;
    param_2 = unaff_x19;
  }
  param_1 = 0;
LAB_10783ee14:
  *unaff_x20 = param_1;
  unaff_x20[1] = unaff_x19;
  return;
}



/* Entry: 10783f318; end: 10783f3ff;  */

undefined8 * FUN_10783f318(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  long extraout_x9;
  long lVar5;
  long extraout_x9_00;
  long extraout_x11;
  undefined8 *puVar6;
  undefined8 *extraout_x11_00;
  long extraout_x12;
  undefined8 extraout_x12_00;
  undefined8 *extraout_x13;
  undefined8 *extraout_x14;
  undefined8 *extraout_x15;
  undefined8 unaff_x21;
  
  puVar6 = param_3;
  if ((param_1 != param_2) && (puVar6 = param_1, param_2 != param_3)) {
    if (param_1 + 1 == param_2) {
      func_0x000107842900();
      *(undefined8 *)((long)param_1 + (long)param_3) = unaff_x21;
      puVar6 = (undefined8 *)((long)param_1 + (long)param_3);
    }
    else {
      bVar3 = param_2 + 1 == param_3;
      if (bVar3) {
        func_0x000107842ea0();
        if (!bVar3) {
          func_0x000107842764();
          _memmove();
        }
        *param_1 = unaff_x21;
        puVar6 = param_3;
      }
      else {
        func_0x000107843208();
        puVar4 = param_2;
        if (bVar3) {
          while (puVar6 = param_2, param_1 != param_2 && puVar4 != param_3) {
            func_0x0001078431c8();
            puVar4 = extraout_x8;
          }
        }
        else {
          do {
            func_0x000107842a28();
          } while (extraout_x11 != 0);
          puVar6 = param_1 + extraout_x12;
          lVar5 = extraout_x9;
          while( true ) {
            cVar1 = SBORROW8((long)puVar6,(long)param_1);
            cVar2 = (long)puVar6 - (long)param_1 < 0;
            if (puVar6 == param_1) break;
            func_0x000107842d8c();
            do {
              func_0x000107842a18();
              func_0x0001078431dc();
              puVar6 = extraout_x15;
              if (cVar2 == cVar1) {
                puVar6 = extraout_x14;
              }
              cVar1 = SBORROW8((long)puVar6,(long)extraout_x11_00);
              cVar2 = (long)puVar6 - (long)extraout_x11_00 < 0;
            } while (puVar6 != extraout_x11_00);
            *extraout_x13 = extraout_x12_00;
            lVar5 = extraout_x9_00;
            puVar6 = extraout_x11_00;
          }
          puVar6 = (undefined8 *)(lVar5 + (long)param_1);
        }
      }
    }
  }
  return puVar6;
}



/* Entry: 10783fc8c; end: 10783fd1b;  */

void FUN_10783fc8c(ulong param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  ulong unaff_x21;
  long *plVar5;
  long *plVar6;
  
  func_0x0001078430f4();
  func_0x000107842888();
  plVar1 = *(long **)(param_2 + 0x38);
  for (plVar5 = *(long **)(param_2 + 0x30); iVar3 = (int)param_1, plVar5 != plVar1;
      plVar5 = plVar5 + 1) {
    lVar4 = *plVar5;
    if (lVar4 != 0) {
      plVar2 = *(long **)(lVar4 + 0x38);
      for (plVar6 = *(long **)(lVar4 + 0x30); plVar6 != plVar2; plVar6 = plVar6 + 1) {
        if ((*plVar6 != 0) && (param_1 = unaff_x21, FUN_10783fc8c(), (param_1 & 1) != 0))
        goto LAB_10783fd08;
      }
    }
  }
  func_0x0001078431f0();
  func_0x00010783fd3c();
  if (iVar3 != 0) {
    func_0x0001078431f0();
    func_0x000107842fbc();
  }
LAB_10783fd08:
  func_0x000107842f84();
  return;
}



/* Entry: 107840490; end: 10784063b;  */

void FUN_107840490(ulong param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long extraout_x8;
  ulong *extraout_x8_00;
  ulong *puVar10;
  ulong *extraout_x8_01;
  long extraout_x9;
  ulong *extraout_x10;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  long unaff_x23;
  ulong *unaff_x24;
  ulong *unaff_x25;
  ulong *unaff_x26;
  long unaff_x27;
  ulong *unaff_x28;
  ulong *in_stack_00000010;
  
  func_0x0001078427d4();
  func_0x0001078424cc();
  do {
    func_0x00010784292c();
    if (unaff_x23 == 0) {
      return;
    }
    while( true ) {
      if ((long)unaff_x24 <= (long)unaff_x22 || (long)unaff_x25 <= (long)unaff_x22) {
        if ((long)unaff_x25 <= (long)unaff_x24) {
          func_0x000107842e4c();
          puVar10 = extraout_x8_00;
          while (puVar10 != unaff_x21) {
            func_0x000107842e3c();
            puVar10 = extraout_x8_01;
          }
          while( true ) {
            bVar7 = unaff_x22 == unaff_x26;
            if (bVar7) {
              return;
            }
            func_0x0001078431fc();
            if (bVar7) break;
            iVar8 = (int)*unaff_x21;
            func_0x000107840328();
            puVar10 = unaff_x21;
            if (iVar8 == 0) {
              puVar10 = unaff_x26;
            }
            lVar9 = 8;
            if (iVar8 == 0) {
              lVar9 = 0;
            }
            unaff_x21 = (ulong *)((long)unaff_x21 + lVar9);
            func_0x000107842d3c(puVar10);
          }
          func_0x000107842604();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memmove_11034c660)();
          return;
        }
        lVar9 = 0;
        while ((ulong *)((long)unaff_x21 + lVar9) != in_stack_00000010) {
          func_0x0001078429ec();
          lVar9 = extraout_x8;
          in_stack_00000010 = extraout_x10;
        }
        puVar10 = (ulong *)((long)unaff_x26 + lVar9);
        while( true ) {
          in_stack_00000010 = in_stack_00000010 + -1;
          if (puVar10 == unaff_x26) {
            return;
          }
          if (unaff_x21 == unaff_x20) break;
          func_0x0001078427f0();
          func_0x000107840328();
          puVar1 = puVar10;
          puVar3 = unaff_x22;
          puVar2 = unaff_x21;
          if ((int)param_1 == 0) {
            puVar1 = unaff_x24;
            puVar3 = unaff_x21;
            puVar2 = puVar10;
          }
          unaff_x21 = puVar3;
          *in_stack_00000010 = puVar2[-1];
          puVar10 = puVar1;
        }
        while (puVar10 != unaff_x26) {
          func_0x000107843278();
        }
        return;
      }
      while( true ) {
        if (unaff_x25 == (ulong *)0x0) {
          return;
        }
        param_1 = *unaff_x21;
        func_0x000107843078();
        if ((param_1 & 1) != 0) break;
        unaff_x20 = unaff_x20 + 1;
        unaff_x25 = (ulong *)((long)unaff_x25 + -1);
      }
      cVar4 = SBORROW8((long)unaff_x25,(long)unaff_x24);
      cVar5 = (long)unaff_x25 - (long)unaff_x24 < 0;
      uVar6 = unaff_x25 == unaff_x24;
      if ((long)unaff_x25 < (long)unaff_x24) {
        func_0x0001078424ac();
        while (unaff_x23 != 0) {
          func_0x000107842840();
          func_0x000107840328();
          func_0x0001078426d4();
          unaff_x23 = unaff_x27;
          if ((bool)uVar6) {
            unaff_x23 = extraout_x9;
          }
        }
        func_0x000107842d4c();
      }
      else {
        cVar4 = SBORROW8((long)unaff_x25,1);
        cVar5 = (long)unaff_x25 + -1 < 0;
        uVar6 = unaff_x25 == (ulong *)0x1;
        if ((bool)uVar6) {
          func_0x00010784296c();
          return;
        }
        func_0x00010784245c();
        puVar10 = unaff_x22;
        while (unaff_x22 = puVar10, unaff_x27 != 0) {
          func_0x00010784282c();
          func_0x000107840328();
          func_0x000107842818();
          puVar10 = unaff_x28;
          if ((bool)uVar6) {
            puVar10 = unaff_x22;
          }
        }
        func_0x000107842e2c();
      }
      func_0x000107842444();
      func_0x000107842874();
      if (cVar5 == cVar4) break;
      func_0x00010784241c();
      FUN_107840490();
      func_0x000107842dbc();
      if (unaff_x24 == (ulong *)0x0) {
        return;
      }
    }
    func_0x0001078424fc();
    FUN_107840490();
    in_stack_00000010 = unaff_x21;
  } while( true );
}



/* Entry: 107840cbc; end: 107840cd3;  */

void FUN_107840cbc(long *param_1,long param_2)

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



/* Entry: 1078412b8; end: 10784132b;  */

void FUN_1078412b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  func_0x000107843160();
  puVar1 = param_1 + 2;
  func_0x000107842ca8();
  uStack_48 = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = unaff_x21;
  param_1[3] = unaff_x20;
  param_1[4] = unaff_x19;
  puStack_58 = param_1;
  puStack_50 = puVar1;
  func_0x0001078410c0();
  param_1[1] = unaff_x21;
  func_0x0001078428c8();
  func_0x00010784132c();
  puStack_58 = (undefined8 *)0x0;
  func_0x000107841230(&puStack_58);
  return;
}



/* Entry: 1078419fc; end: 107841a8f;  */

void FUN_1078419fc(ulong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long extraout_x9;
  ulong *unaff_x20;
  ulong unaff_x21;
  
  func_0x00010783e134();
  func_0x000107842c90();
  uVar3 = param_1;
  func_0x00010783c48c();
  while( true ) {
    uVar1 = uVar3 <= unaff_x21;
    uVar2 = unaff_x21 == uVar3;
    if ((bool)uVar2) break;
    func_0x00010784063c(unaff_x21 + 0x30);
    func_0x0001078428d4();
    if ((bool)uVar2) {
      unaff_x20 = unaff_x20 + 1;
      unaff_x21 = *unaff_x20;
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  while (func_0x000107842940(), (bool)uVar1) {
    func_0x000107843024();
    func_0x000107842ddc();
  }
  if (extraout_x9 == 1) {
    uVar4 = 0x15;
  }
  else {
    if (extraout_x9 != 2) {
      return;
    }
    uVar4 = 0x2a;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  return;
}



/* Entry: 107841bf8; end: 107841c4b;  */

undefined8 FUN_107841bf8(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  
  func_0x000107842394();
  func_0x000107841c4c();
  func_0x0001078423f4();
  func_0x000107841ca0();
  func_0x0001078423b4();
  func_0x000100660238();
  func_0x000107841c6c();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107841df4(auStack_58);
  return uVar1;
}



/* Entry: 107841e28; end: 107841e8b;  */

void FUN_107841e28(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078425f8();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    func_0x0001072977d0();
  }
  return;
}



/* Entry: 10784211c; end: 107842133;  */

void FUN_10784211c(void)

{
  func_0x000107297530();
  return;
}



/* Entry: 107844fa4; end: 107845083;  */

void FUN_107844fa4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lStack_a0;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  
  func_0x00010784806c();
  if (lStack_a0 != 0) {
    uVar3 = *param_1;
    func_0x0001078475c8(auStack_90,param_2,param_3);
    puVar1 = (undefined8 *)0x50;
    __Znwm();
    func_0x0001078475ec(auStack_60,auStack_90);
    *puVar1 = &PTR_DAT_1109e1588;
    puVar1[1] = uVar3;
    puVar1[2] = &UNK_10782eb2c;
    puVar1[3] = 0;
    func_0x0001078475ec(puVar1 + 4,auStack_60);
    func_0x0001073787dc(auStack_60);
    puVar2 = auStack_90;
    func_0x0001073787dc();
    func_0x000107848044();
    func_0x000107848180();
    if (puVar2 != (undefined1 *)0x0) {
      func_0x000107847c68();
    }
  }
  func_0x000107847f38();
  return;
}



/* Entry: 1078464b4; end: 1078466f7;  */

void FUN_1078464b4(long param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar8 = (undefined8 *)*param_2;
  while (puVar8 != param_2 + 1) {
    puStack_88 = (undefined8 *)puVar8[4];
    plVar4 = (long *)(param_1 + 0x198);
    func_0x0001078119d0(plVar4,&uStack_68,&puStack_88);
    plVar9 = (long *)*plVar4;
    if (plVar9 == (long *)0x0) {
      plVar9 = plVar4;
      func_0x000107848130();
      uStack_70 = 1;
      plVar9[7] = 0;
      plVar9[6] = 0;
      plVar9[4] = (long)puStack_88;
      plVar9[5] = (long)(plVar9 + 6);
      plStack_78 = (long *)(param_1 + 0x1a0);
      func_0x000107811a1c(param_1 + 0x198,uStack_68,plVar4,plVar9);
      uStack_80 = 0;
      func_0x000107811a44(&uStack_80);
    }
    lVar10 = *(long *)(param_1 + 0x130);
    while (lVar10 != param_1 + 0x138) {
      puVar11 = &uStack_80;
      func_0x00010786e8ec(puVar11,lVar10 + 0x20);
      if (puVar11 == puStack_88) {
        puVar11 = (undefined8 *)puVar8[5];
        plVar4 = (long *)(lVar10 + 0x38);
        while (puVar11 != puVar8 + 6) {
          uVar2 = *(ushort *)(puVar11 + 4);
          plVar5 = plVar4;
          plVar6 = plVar4;
          while (plVar7 = (long *)*plVar5, plVar7 != (long *)0x0) {
            bVar3 = uVar2 <= *(ushort *)((long)plVar7 + 0x1a);
            lVar12 = 8;
            if (bVar3) {
              lVar12 = 0;
            }
            plVar5 = (long *)((long)plVar7 + lVar12);
            if (bVar3) {
              plVar6 = plVar7;
            }
          }
          if ((plVar4 != plVar6) && (*(ushort *)((long)plVar6 + 0x1a) <= uVar2)) {
            plVar5 = plVar6;
            func_0x00010002c7d4();
            if (*(long **)(lVar10 + 0x30) == plVar6) {
              *(long **)(lVar10 + 0x30) = plVar5;
            }
            *(long *)(lVar10 + 0x40) = *(long *)(lVar10 + 0x40) + -1;
            func_0x00010530d618(*(undefined8 *)(lVar10 + 0x38),plVar6);
            __ZdlPv(plVar6);
            plVar5 = plVar9 + 5;
            func_0x000107811ac0(plVar5,&uStack_68,puVar11 + 4);
            if (*plVar5 == 0) {
              uVar1 = *(undefined2 *)(puVar11 + 4);
              plVar6 = plVar5;
              func_0x000107848130();
              uStack_70 = 1;
              *(undefined2 *)(plVar6 + 4) = uVar1;
              *(undefined1 *)(plVar6 + 5) = 0;
              *(undefined1 *)(plVar6 + 7) = 0;
              if (*(char *)(puVar11 + 7) == '\x01') {
                lVar12 = puVar11[5];
                plVar6[6] = puVar11[6];
                plVar6[5] = lVar12;
                puVar11[5] = 0;
                puVar11[6] = 0;
                *(undefined1 *)(plVar6 + 7) = 1;
              }
              plStack_78 = plVar9 + 6;
              FUN_107811b0c(plVar9 + 5,uStack_68,plVar5);
              uStack_80 = 0;
              func_0x000107811b34(&uStack_80);
            }
          }
          func_0x00010002c7d4();
        }
      }
      func_0x00010002c7d4();
    }
    func_0x00010002c7d4();
  }
  func_0x000107845314(param_1);
  return;
}



/* Entry: 107846e1c; end: 107846e5b;  */

void FUN_107846e1c(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001077b6c4c();
  }
  return;
}



/* Entry: 107846ff0; end: 10784703f;  */

long * FUN_107846ff0(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    func_0x0001074f4f04(lVar1);
    func_0x000107847f40();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107847194; end: 1078471e3;  */

undefined8 FUN_107847194(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107408ca0(param_1 + 0xa0);
  func_0x000107408ca0(param_1 + 0x88);
  func_0x00010726ea70(param_1 + 0x60);
  func_0x000107466e2c(param_1 + 0x48);
  func_0x0001057f951c(param_1 + 0x30);
  func_0x000107466df4(param_1 + 0x18);
  func_0x000107468ef8(param_1);
  func_0x000107466e88();
  return unaff_x19;
}



/* Entry: 1078475a4; end: 1078475c7;  */

void FUN_1078475a4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 107847790; end: 107847793;  */

undefined8 * FUN_107847790(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e1608;
  FUN_107810050(param_1 + 4);
  return param_1;
}



/* Entry: 107847900; end: 107847957;  */

long * FUN_107847900(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x0001073e7538(plVar1 + 5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar1 + 2);
    func_0x000107847f40();
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078479dc; end: 1078479ff;  */

void FUN_1078479dc(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001078479fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20);
  return;
}



/* Entry: 107847b28; end: 107847b2b;  */

void FUN_107847b28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107847c30; end: 1078481cb;  */

void FUN_107847c30(void)

{
  long unaff_x25;
  
  *(undefined8 *)(unaff_x25 + 0x30) = 0;
  *(undefined8 *)(unaff_x25 + 0x38) = 0;
  *(undefined8 *)(unaff_x25 + 0x28) = 0;
  *(undefined8 *)(unaff_x25 + 0x58) = 0;
  *(undefined8 *)(unaff_x25 + 0x60) = 0;
  *(undefined8 *)(unaff_x25 + 0x50) = 0;
  return;
}



/* Entry: 107848958; end: 1078489c7;  */

long FUN_107848958(long param_1)

{
  uint *puVar1;
  
  if ((*(long *)(param_1 + 0x3c0) != 0) &&
     (puVar1 = *(uint **)(*(long *)(param_1 + 0x3c0) + 0x28), puVar1 != (uint *)0x0)) {
    return (ulong)*puVar1 * (ulong)puVar1[1] * 4;
  }
  return 0;
}



/* Entry: 107848bf0; end: 107848cb7;  */

void FUN_107848bf0(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_x8;
  long *unaff_x19;
  long *plVar4;
  undefined1 auStack_78 [8];
  long alStack_70 [3];
  undefined1 auStack_58 [16];
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  plVar4 = *(long **)(param_1 + 0x10);
  lVar3 = plVar4[0x43];
  plVar4[0x43] = 0;
  if (lVar3 != 0) {
    func_0x000107849690();
  }
  lVar3 = *plVar4;
  *(undefined1 *)(lVar3 + 0x88) = 1;
  (**(code **)(**(long **)(lVar3 + 0x90) + 0x10))();
  if ((*(char **)(param_2 + 0x10) == (char *)0x0) || (**(char **)(param_2 + 0x10) != '\x02')) {
    func_0x000107848cc4(plVar4,param_2);
  }
  else {
    func_0x0001078496d4();
    func_0x0001072631dc(plVar4 + 0x2c,param_2 + 0x20);
  }
  uVar1 = (char)plVar4[1] == '\x01';
  if (!(bool)uVar1) {
    return;
  }
  func_0x0001078496c0();
  plVar4 = (long *)plVar4[0x41];
  uStack_28 = extraout_x8;
  if (plVar4 == (long *)0x0) {
    lVar3 = *unaff_x19;
    func_0x00010002b838(alStack_70,&UNK_10f42b2a8);
    func_0x0001078489f8(auStack_78);
    func_0x0001073787c0(auStack_58,auStack_78);
    *(undefined1 *)(lVar3 + 0x8a) = 1;
    (**(code **)(**(long **)(lVar3 + 0x90) + 0x18))(*(long **)(lVar3 + 0x90),lVar3,alStack_70);
    func_0x0001073787dc(alStack_70);
    func_0x000107849760();
  }
  else {
    *(undefined1 *)((long)unaff_x19 + 0x11) = 2;
    unaff_x19[0x2e] = unaff_x19[0x44];
    *(char *)(unaff_x19 + 0x2f) = (char)unaff_x19[0x45];
    ppuStack_48 = &PTR_DAT_1109e19b8;
    uStack_40 = 0;
    pppuStack_30 = &ppuStack_48;
    (**(code **)(*plVar4 + 0x10))(alStack_70,plVar4,unaff_x19 + 2,&ppuStack_48);
    lVar3 = alStack_70[0];
    alStack_70[0] = 0;
    lVar2 = unaff_x19[0x43];
    unaff_x19[0x43] = lVar3;
    if (lVar2 != 0) {
      func_0x000107849690();
      lVar3 = alStack_70[0];
      alStack_70[0] = 0;
      if (lVar3 != 0) {
        func_0x000107849690();
      }
    }
    func_0x0001072ad0c8(&ppuStack_48);
  }
  func_0x0001078496ac(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073787dc(alStack_70);
  func_0x000107849760();
  func_0x000107849708();
  func_0x000104c03f28(&DAT_10f62a4d8);
  return;
}



/* Entry: 1078492ac; end: 1078492df;  */

long FUN_1078492ac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107849780(param_2,param_1,&PTR_DAT_1109e1a18);
  param_1 = param_1 + 8;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107849480; end: 1078494ab;  */

long FUN_107849480(long param_1)

{
  func_0x000104c2f714(param_1 + 0x28);
  func_0x00010724ae28(param_1 + 8);
  return param_1;
}



/* Entry: 1078495b4; end: 1078495c7;  */

void FUN_1078495b4(void)

{
  func_0x0001078495f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107849674; end: 10784968f;  */

void FUN_107849674(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001074563e8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107849df0; end: 107849e1f;  */

long * FUN_107849df0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_107849674(param_1);
  }
  return param_1;
}



/* Entry: 107849ef0; end: 107849f1b;  */

undefined8 * FUN_107849ef0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e1c38;
  func_0x0001073787dc(param_1 + 4);
  return param_1;
}



/* Entry: 10784a510; end: 10784a57f;  */

void FUN_10784a510(long *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x00010784a844();
  uStack_28 = extraout_x8;
  func_0x000105302f48(auStack_48);
  (**(code **)(*param_1 + 0x10))(param_1,auStack_48);
  func_0x0001006393ec(auStack_48);
  func_0x00010784a830(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001006393ec(auStack_48);
  func_0x00010784a854();
  return;
}



/* Entry: 10784a750; end: 10784a753;  */

void FUN_10784a750(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e1cf0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10784a90c; end: 10784a9ef;  */

undefined8 * FUN_10784a90c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e1d40;
  func_0x00010750bcd8(param_1 + 0x13);
  func_0x000104c2f714(param_1 + 4);
  return param_1;
}



/* Entry: 10784ad74; end: 10784ae47;  */

void FUN_10784ad74(long param_1,ulong param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  if ((*(char *)(*param_3 + 0x110) == '\x01') && (*(long *)(param_1 + 0x30) != 0)) {
    uVar2 = param_2;
    func_0x000107515340(param_1);
    if ((uVar2 & 1) == 0) {
      func_0x00010784ac9c(param_1 + 0x18,param_2);
    }
    func_0x00010784ae00(param_1 + 0x18,param_2);
    if (*(ulong *)(param_1 + 0x30) < *(ulong *)(param_1 + 0x28)) {
      func_0x00010784ae48(&lStack_28,param_1,*(long *)(param_1 + 0x20) + 0x10);
      lVar1 = lStack_28;
      lStack_28 = 0;
      if (lVar1 != 0) {
        func_0x00010784b210();
      }
    }
  }
  return;
}



/* Entry: 10784b11c; end: 10784b1a3;  */

/* WARNING: Possible PIC construction at 0x00010784b154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010784b158) */
/* WARNING: Removing unreachable block (ram,0x00010784b19c) */
/* WARNING: Removing unreachable block (ram,0x00010784b190) */
/* WARNING: Removing unreachable block (ram,0x00010784b200) */

undefined1 * FUN_10784b11c(void)

{
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = 1;
  func_0x00010784b1cc();
  return auStack_50;
}



/* Entry: 10784b464; end: 10784b467;  */

void FUN_10784b464(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 extraout_x8;
  undefined1 auStack_e8 [40];
  undefined1 auStack_98 [40];
  undefined1 auStack_48 [40];
  
  func_0x000107879230(param_1,param_1);
  func_0x000107879198();
  func_0x000107878f60(auStack_48);
  func_0x00010787924c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107879230();
    func_0x0001078791b8();
    func_0x000107878f60(auStack_98);
    func_0x00010787924c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107879230();
      func_0x000107879210();
      iVar2 = (int)auStack_e8;
      func_0x000107878f60();
      func_0x00010787924c();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        puVar1 = &UNK_10f430942;
        if (iVar2 == 0) {
          puVar1 = &UNK_10f430947;
        }
        func_0x0001003a91d4(puVar1);
        func_0x0001003a9204(extraout_x8);
        return;
      }
    }
  }
  return;
}



/* Entry: 10784b8a8; end: 10784b91b;  */

undefined8 *
FUN_10784b8a8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_1109e1e38;
  param_1[1] = param_4;
  param_1[2] = param_5;
  func_0x00010784a588(param_1 + 3);
  uVar1 = *param_3;
  param_1[0xf] = param_3[1];
  param_1[0xe] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  func_0x00010726ed14(param_1 + 0x10);
  param_1[0x12] = param_1;
  return param_1;
}



/* Entry: 10784be04; end: 10784be8f;  */

undefined1 *
FUN_10784be04(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  puVar1 = auStack_70;
  puVar2 = param_2;
  func_0x00010784d84c();
  uStack_38 = extraout_x8;
  func_0x0001072684ec(puVar2);
  uVar3 = *param_2;
  func_0x000100060964(auStack_70,param_3);
  func_0x0001072c7824(param_1,uVar3,auStack_70,param_4);
  func_0x000104c2f714(auStack_70);
  func_0x00010784d810(uStack_38);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010784d934();
  func_0x000104c2f714();
  func_0x00010784d874();
  func_0x000107269e3c(puVar1 + 0x178);
  func_0x0001006393ec(puVar1 + 0x148);
  func_0x000107269e60(puVar1 + 0x58);
  func_0x000104c2f714(puVar1);
  return puVar1;
}



/* Entry: 10784bfec; end: 10784bfff;  */

void FUN_10784bfec(void)

{
  func_0x00010784c10c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10784c164; end: 10784c193;  */

void FUN_10784c164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  func_0x00010784c194(&uStack_11,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10784c2e8; end: 10784c357;  */

undefined8
FUN_10784c2e8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10784b8a8(param_1,param_2,&uStack_30,*param_4);
  func_0x0001074f9458(&uStack_30);
  return param_1;
}



/* Entry: 10784cb7c; end: 10784cbc3;  */

undefined ** FUN_10784cb7c(void)

{
  return &PTR_DAT_1109e1f98;
}



/* Entry: 10784d09c; end: 10784d30b;  */

/* WARNING: Possible PIC construction at 0x00010784d198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010784d134: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010784d19c) */
/* WARNING: Removing unreachable block (ram,0x00010784d1a8) */
/* WARNING: Removing unreachable block (ram,0x00010784d1f0) */
/* WARNING: Removing unreachable block (ram,0x00010784d1c4) */
/* WARNING: Removing unreachable block (ram,0x00010784d1d8) */
/* WARNING: Removing unreachable block (ram,0x00010784d1f4) */
/* WARNING: Removing unreachable block (ram,0x00010784d138) */

long FUN_10784d09c(long param_1,long param_2,long param_3,ulong param_4,long param_5)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (param_4 == 0) {
    return param_1;
  }
  lVar5 = param_5;
  if (param_4 == 2) {
    func_0x00010784d90c();
    param_2 = param_2 + -400;
    func_0x00010784cf74(param_3,param_2,param_1);
    unaff_x20 = param_1;
    if ((int)param_3 == 0) {
      unaff_x20 = param_2;
      param_2 = param_1;
    }
    param_1 = param_2;
    unaff_x30 = 0x10784d138;
    register0x00000008 = (BADSPACEBASE *)auStack_80;
    unaff_x19 = param_5;
    unaff_x29 = puVar1;
  }
  else if (param_4 != 1) {
    if ((long)param_4 < 9) {
      if (param_1 == param_2) {
        return param_1;
      }
      lVar3 = param_1;
      func_0x00010784d90c();
      func_0x00010784d87c();
      func_0x00010784d85c();
      unaff_x20 = param_1;
      param_1 = param_5;
      while (unaff_x20 = unaff_x20 + 400, unaff_x20 != param_2) {
        lVar2 = param_3;
        func_0x00010784cf74(param_3,unaff_x20,param_1);
        lVar5 = param_1 + 400;
        if ((int)lVar2 != 0) {
          unaff_x30 = 0x10784d19c;
          register0x00000008 = (BADSPACEBASE *)auStack_80;
          unaff_x19 = param_5;
          unaff_x29 = puVar1;
          goto code_r0x00010784bd84;
        }
        lVar3 = lVar5;
        func_0x00010784d8c4(lVar5);
        func_0x00010784d85c();
        param_1 = lVar5;
      }
    }
    else {
      uVar4 = param_4 >> 1;
      lVar2 = uVar4 * 400 + param_1;
      func_0x00010784cc88(param_1,lVar2,param_3,uVar4,param_5,uVar4);
      lVar5 = param_4 - (param_4 >> 1);
      lVar3 = lVar2;
      func_0x00010784cc88(lVar2,param_2,param_3,lVar5,param_5 + uVar4 * 400,lVar5);
      func_0x00010784d90c();
      lVar5 = lVar2;
      while (param_1 != lVar2) {
        if (lVar5 == param_2) goto LAB_10784d2c4;
        lVar3 = param_3;
        func_0x00010784cf74(param_3,lVar5,param_1);
        if ((int)lVar3 == 0) {
          func_0x00010784d87c();
          param_1 = param_1 + 400;
        }
        else {
          func_0x00010784d990();
          lVar5 = lVar5 + 400;
        }
        func_0x00010784d85c();
      }
      for (; lVar5 != param_2; lVar5 = lVar5 + 400) {
        func_0x00010784d990();
        func_0x00010784d85c();
      }
    }
    goto LAB_10784d2cc;
  }
code_r0x00010784bd84:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010784d970(lVar5,param_1);
  func_0x000104c318bc();
  uVar7 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)(unaff_x19 + 0x50);
  *(undefined8 *)(lVar5 + 0x48) = uVar8;
  *(undefined8 *)(lVar5 + 0x40) = uVar7;
  *(undefined8 *)(lVar5 + 0x38) = uVar6;
  func_0x0001072f9a20(lVar5 + 0x58,unaff_x19 + 0x58);
  func_0x000105302f48(unaff_x20 + 0x148,unaff_x19 + 0x148);
  func_0x00010784d9d4();
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = *(undefined8 *)(unaff_x19 + 0x178);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x180);
  *(undefined8 *)(unaff_x20 + 0x188) = *(undefined8 *)(unaff_x19 + 0x188);
  *(undefined8 *)(unaff_x20 + 0x180) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x178) = 0;
  *(undefined8 *)(unaff_x19 + 0x180) = 0;
  *(undefined8 *)(unaff_x19 + 0x188) = 0;
  return unaff_x20;
LAB_10784d2c4:
  for (; param_1 != lVar2; param_1 = param_1 + 400) {
    func_0x00010784d87c();
    func_0x00010784d85c();
  }
LAB_10784d2cc:
  uStack_78 = 0;
  func_0x00010784d904();
  return lVar3;
}



/* Entry: 10784dbe4; end: 10784dc4b;  */

void FUN_10784dbe4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010784e030(param_1,&uStack_30,param_2[2]);
  func_0x00010784e354();
  return;
}



/* Entry: 10784e098; end: 10784e0ab;  */

void FUN_10784e098(void)

{
  func_0x00010784e068();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10784e384; end: 10784e3db;  */

long FUN_10784e384(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  param_1 = param_1 + 8;
  FUN_1077c2714();
  lVar2 = 0;
  lStack_30 = param_1;
  lStack_28 = param_2;
  while (lStack_30 != 0) {
    lVar1 = *(long *)(lStack_28 + 0x38);
    FUN_10782acdc(lVar1);
    lVar2 = lVar1 + lVar2;
    func_0x0001077c27b4(&lStack_30);
  }
  return lVar2;
}



/* Entry: 10784e6e8; end: 10784e7ef;  */

long FUN_10784e6e8(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  ulong uStack_90;
  ulong *puStack_88;
  
  Hint_Prefetch(*param_1,0,2,0);
  uVar8 = param_2;
  func_0x000104c2fe38(*param_1);
  lVar6 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_1;
  uVar5 = uVar7 >> 0xc ^ uVar8 >> 7;
  bVar3 = (byte)uVar8;
  uVar11 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar12 = *(undefined8 *)(uVar7 + uVar5);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar18 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      uStack_90 = param_2;
      puStack_88 = param_1;
      iVar4 = (int)&uStack_90;
      func_0x0001077c1d14(&uStack_90,uVar1 + uVar9 * 0x48);
      if (iVar4 != 0) {
        return *param_1 + uVar9;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  return 0;
}



/* Entry: 10784e8ac; end: 10784e8ef;  */

undefined8 * FUN_10784e8ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e22e8;
  func_0x00010737dbe4(param_1 + 10);
  func_0x000107331610(param_1 + 8);
  func_0x000104c2f714(param_1 + 1);
  return param_1;
}



/* Entry: 10784eab4; end: 10784eb03;  */

undefined8 * FUN_10784eab4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_1 + -0x25;
  puVar2 = puVar1;
  func_0x00010784f518();
  func_0x000104c2f714(puVar2 + 0xb3);
  func_0x0001072aca78(param_1 + 0x8b);
  func_0x00010724bd50(param_1 + 0x89);
  func_0x00010724b374(param_1 + 0x4a);
  *puVar1 = &PTR_DAT_1109e0d50;
  *param_1 = &PTR_DAT_1109e0e60;
  param_1[1] = &PTR_DAT_1109e0e88;
  param_1[0xc] = &PTR_DAT_1109e0eb0;
  param_1[0xe] = &PTR_DAT_1109e0ed8;
  param_1[0x10] = &PTR_DAT_1109e0f00;
  *(undefined1 *)(param_1[0x22] + 0x30) = 1;
  func_0x0001073ada2c(*(undefined8 *)(param_1[0x22] + 0x18));
  func_0x00010780f2c0(param_1[0x29],param_1);
  func_0x000107831228(param_1 + 0x44);
  func_0x0001078312d4(param_1 + 0x3f);
  func_0x000107518510(param_1 + 0x3a);
  func_0x000107518478(param_1 + 0x35);
  func_0x0001075183b4(param_1 + 0x30);
  func_0x00010751838c(param_1 + 0x2e);
  func_0x0001074f9d98(param_1 + 0x2c);
  func_0x00010724bd50(param_1 + 0x27);
  func_0x000107831700(param_1 + 0x24);
  func_0x0001078316dc(param_1 + 0x22);
  func_0x000107831374(param_1 + 0x1a);
  func_0x000107831640(param_1 + 0x18);
  func_0x0001072c9240(param_1 + 0x12);
  func_0x000107432200(param_1 + 0x10);
  func_0x0001074321c8(param_1 + 0xe);
  func_0x000107432190(param_1 + 0xc);
  func_0x00010747c918(param_1 + 1);
  *puVar1 = &PTR_DAT_1109e1d40;
  func_0x00010750bcd8(param_1 + -0x12);
  func_0x000104c2f714(param_1 + -0x21);
  return puVar1;
}



/* Entry: 10784ef8c; end: 10784ef97;  */

undefined ** FUN_10784ef8c(void)

{
  return &PTR_DAT_1109e2588;
}



/* Entry: 10784f678; end: 10784fc37;  */

void FUN_10784f678(undefined8 param_1,long *****param_2,float param_3,long *****param_4,
                  long *****param_5)

{
  long *****ppppplVar1;
  long lVar2;
  long ***ppplVar3;
  ulong uVar4;
  code *pcVar5;
  undefined1 in_ZR;
  bool bVar6;
  long *****ppppplVar7;
  undefined8 extraout_x8;
  long ****pppplVar8;
  long ****pppplVar9;
  ulong uVar10;
  long *****ppppplVar11;
  long ***ppplVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  long ****pppplVar15;
  long *****ppppplVar16;
  long ****pppplVar17;
  long *****ppppplVar18;
  float fVar19;
  long ****pppplStack_158;
  undefined1 uStack_150;
  long ****pppplStack_148;
  long ****pppplStack_140;
  long ****pppplStack_130;
  long ***ppplStack_128;
  long ***appplStack_f8 [9];
  int aiStack_b0 [16];
  undefined8 uStack_70;
  
  ppppplVar14 = param_4;
  ppppplVar16 = param_5;
  func_0x000107851cc4();
  ppppplVar13 = ppppplVar14 + 0x57;
  ppplStack_128 = (long ***)CONCAT71(ppplStack_128._1_7_,1);
  pppplStack_130 = (long ****)ppppplVar13;
  uStack_70 = extraout_x8;
  func_0x000107851e38();
  ppppplVar1 = param_4 + 0x6c;
  func_0x000107851e2c();
  if (ppppplVar14 != (long *****)0x0) {
    func_0x00010729963c(param_1,ppppplVar14 + 9);
    func_0x000107851d28();
    goto LAB_10784f9ec;
  }
  func_0x000107851d28();
  uStack_150 = 1;
  pppplStack_158 = (long ****)ppppplVar13;
  func_0x000107851e40();
  func_0x000107851e2c();
  if (ppppplVar14 == (long *****)0x0) {
    pppplVar9 = param_4[10] + 9;
    ppppplVar13 = (long *****)0x0;
    pppplVar8 = pppplVar9;
    pppplVar15 = pppplVar9;
    while (pppplVar17 = (long ****)*pppplVar8, pppplVar17 != (long ****)0x0) {
      ppppplVar13 = (long *****)(pppplVar17 + 4);
      ppppplVar16 = param_5;
      func_0x000104c2fc44();
      bVar6 = (int)ppppplVar13 == 0;
      lVar2 = 8;
      if (bVar6) {
        lVar2 = 0;
      }
      pppplVar8 = (long ****)((long)pppplVar17 + lVar2);
      if (bVar6) {
        pppplVar15 = pppplVar17;
      }
    }
    if (pppplVar9 == pppplVar15) {
LAB_10784f754:
      pppplVar15 = pppplVar9;
    }
    else {
      ppppplVar16 = (long *****)(pppplVar15 + 4);
      func_0x000104c2fc44();
      ppppplVar13 = param_5;
      if ((int)param_5 != 0) goto LAB_10784f754;
    }
    pppplVar9 = param_4[10];
    ppppplVar18 = (long *****)0x0;
    if (pppplVar9 + 9 == pppplVar15) {
LAB_10784f854:
      aiStack_b0[0] = 7;
LAB_10784f85c:
      func_0x000107851e0c();
      func_0x000107851d5c();
      fVar19 = SUB84(param_2,0);
      ppppplVar16 = (long *****)param_4[0x6d];
      if (ppppplVar16 != (long *****)0x0) {
        uVar10 = (long)ppppplVar16 - 1;
        ppppplVar7 = ppppplVar13;
        if (((ulong)ppppplVar16 & uVar10) == 0) {
          ppppplVar18 = (long *****)(uVar10 & (ulong)ppppplVar13);
        }
        else {
          ppppplVar18 = ppppplVar13;
          if (ppppplVar16 <= ppppplVar13) {
            func_0x000107851e90();
          }
        }
        fVar19 = SUB84(param_2,0);
        ppppplVar14 = (long *****)(*ppppplVar1)[(long)ppppplVar18];
        if (ppppplVar14 != (long *****)0x0) {
          do {
            while( true ) {
              fVar19 = SUB84(param_2,0);
              ppppplVar14 = (long *****)*ppppplVar14;
              if (ppppplVar14 == (long *****)0x0) goto LAB_10784f8ec;
              ppppplVar11 = (long *****)ppppplVar14[1];
              in_ZR = ppppplVar11 == ppppplVar13;
              if (!(bool)in_ZR) break;
              func_0x000107851e6c();
              if (((ulong)ppppplVar7 & 1) != 0) goto LAB_10784f9cc;
            }
            if (((ulong)ppppplVar16 & uVar10) == 0) {
              ppppplVar11 = (long *****)((ulong)ppppplVar11 & uVar10);
            }
            else if (ppppplVar16 <= ppppplVar11) {
              uVar4 = 0;
              if (ppppplVar16 != (long *****)0x0) {
                uVar4 = (ulong)ppppplVar11 / (ulong)ppppplVar16;
              }
              ppppplVar11 = (long *****)((long)ppppplVar11 - uVar4 * (long)ppppplVar16);
            }
          } while (ppppplVar11 == ppppplVar18);
        }
      }
LAB_10784f8ec:
      ppppplVar14 = (long *****)0x90;
      __Znwm();
      ppppplVar7 = param_4 + 0x6e;
      pppplStack_148 = (long ****)ppppplVar14;
      pppplStack_140 = (long ****)ppppplVar7;
      func_0x000107851d38();
      *(undefined1 *)(ppppplVar14 + 9) = 0;
      *(undefined1 *)(ppppplVar14 + 0x11) = 0;
      func_0x000107851eb0();
      if ((ppppplVar16 == (long *****)0x0) ||
         (in_ZR = param_3 * (float)ppppplVar16 == fVar19, ppppplVar11 = ppppplVar18,
         param_3 * (float)ppppplVar16 < fVar19)) {
        func_0x000107851d9c();
        func_0x000107851d84();
        func_0x00010785156c(ppppplVar1);
        ppppplVar16 = (long *****)param_4[0x6d];
        if (((ulong)ppppplVar16 & (long)ppppplVar16 - 1U) == 0) {
          in_ZR = 1;
          ppppplVar11 = (long *****)((long)ppppplVar16 - 1U & (ulong)ppppplVar13);
        }
        else {
          in_ZR = ppppplVar13 == ppppplVar16;
          ppppplVar11 = ppppplVar13;
          if (ppppplVar16 <= ppppplVar13) {
            func_0x000107851e90();
            ppppplVar11 = ppppplVar18;
          }
        }
      }
      pppplVar9 = *ppppplVar1;
      ppplVar12 = pppplVar9[(long)ppppplVar11];
      if (ppplVar12 == (long ***)0x0) {
        *ppppplVar14 = *ppppplVar7;
        *ppppplVar7 = (long ****)ppppplVar14;
        pppplVar9[(long)ppppplVar11] = (long ***)ppppplVar7;
        if (*ppppplVar14 != (long ****)0x0) {
          ppppplVar13 = (long *****)(*ppppplVar14)[1];
          if (((ulong)ppppplVar16 & (long)ppppplVar16 - 1U) == 0) {
            ppppplVar13 = (long *****)((ulong)ppppplVar13 & (long)ppppplVar16 - 1U);
            in_ZR = true;
          }
          else {
            in_ZR = ppppplVar13 == ppppplVar16;
            if (ppppplVar16 <= ppppplVar13) {
              uVar10 = 0;
              if (ppppplVar16 != (long *****)0x0) {
                uVar10 = (ulong)ppppplVar13 / (ulong)ppppplVar16;
              }
              ppppplVar13 = (long *****)((long)ppppplVar13 - uVar10 * (long)ppppplVar16);
            }
          }
          pppplVar9[(long)ppppplVar13] = (long ***)ppppplVar14;
        }
      }
      else {
        *ppppplVar14 = (long ****)*ppplVar12;
        *ppplVar12 = (long **)ppppplVar14;
      }
      func_0x000107851d10();
LAB_10784f9cc:
      func_0x000107851e18();
    }
    else {
      ppplVar12 = pppplVar9[0xe];
      ppplVar3 = pppplVar9[0xf];
      ppppplVar18 = (long *****)pppplVar9[10];
      ppplStack_128 = (long ***)param_4[0x15];
      param_2 = (long *****)param_4[0x14];
      ppppplVar14 = (long *****)param_4[0x16];
      pppplVar9 = param_4[0x17];
      pppplStack_130 = (long ****)param_2;
      do {
        if ((long *****)pppplStack_130 == ppppplVar14 && (long ****)ppplStack_128 == pppplVar9)
        goto LAB_10784f854;
        ppppplVar7 = &pppplStack_130;
        func_0x000107851d08();
        pppplStack_148 = (long ****)ppppplVar7;
        pppplStack_140 = (long ****)ppppplVar16;
        func_0x000107851df8();
        if (ppppplVar18 <= (long *****)((ulong)ppppplVar7 & 0xffffffff)) {
          func_0x000107851d00();
          __ZNSt13runtime_errorC1EPKc();
LAB_10784fba0:
          func_0x000107851cd4();
          ___cxa_throw(ppppplVar7);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10784fbb0);
          (*pcVar5)();
        }
        if ((long *****)pppplStack_130 == ppppplVar14 && (long ****)ppplStack_128 == pppplVar9) {
          func_0x000107851d00();
          func_0x000107851dd4();
          goto LAB_10784fba0;
        }
        ppppplVar13 = &pppplStack_130;
        func_0x000107851d08();
        pppplStack_148 = (long ****)ppppplVar13;
        pppplStack_140 = (long ****)ppppplVar16;
        func_0x000107851df8();
        if ((ulong)((long)ppplVar3 - (long)ppplVar12 >> 4) <= ((ulong)ppppplVar13 & 0xffffffff)) {
          func_0x000107851d00();
          __ZNSt13runtime_errorC1EPKc();
          ppppplVar7 = ppppplVar13;
          goto LAB_10784fba0;
        }
      } while ((int)ppppplVar7 != *(int *)(pppplVar15 + 0xb));
      uVar10 = (ulong)ppppplVar13 & 0xffffffff;
      ppppplVar13 = (long *****)aiStack_b0;
      func_0x000107850f34(ppppplVar13,param_4 + 8,param_4[10][0xe][uVar10 * 2],
                          (param_4[10][0xe] + uVar10 * 2)[1]);
      if (aiStack_b0[0] == 7) goto LAB_10784f85c;
      func_0x000107851e0c();
      ppppplVar13 = (long *****)appplStack_f8;
      func_0x000104c32a18(ppppplVar13,aiStack_b0);
      func_0x000107851d5c();
      fVar19 = SUB84(param_2,0);
      ppppplVar16 = (long *****)param_4[0x6d];
      if (ppppplVar16 != (long *****)0x0) {
        uVar10 = (long)ppppplVar16 - 1;
        ppppplVar7 = ppppplVar13;
        if (((ulong)ppppplVar16 & uVar10) == 0) {
          ppppplVar18 = (long *****)(uVar10 & (ulong)ppppplVar13);
        }
        else {
          ppppplVar18 = ppppplVar13;
          if (ppppplVar16 <= ppppplVar13) {
            func_0x000107851e90();
          }
        }
        fVar19 = SUB84(param_2,0);
        ppppplVar14 = (long *****)(*ppppplVar1)[(long)ppppplVar18];
        if (ppppplVar14 != (long *****)0x0) {
          do {
            while( true ) {
              fVar19 = SUB84(param_2,0);
              ppppplVar14 = (long *****)*ppppplVar14;
              if (ppppplVar14 == (long *****)0x0) goto LAB_10784fa74;
              ppppplVar11 = (long *****)ppppplVar14[1];
              in_ZR = ppppplVar11 == ppppplVar13;
              if (!(bool)in_ZR) break;
              func_0x000107851e6c();
              if (((ulong)ppppplVar7 & 1) != 0) goto LAB_10784fb58;
            }
            if (((ulong)ppppplVar16 & uVar10) == 0) {
              ppppplVar11 = (long *****)((ulong)ppppplVar11 & uVar10);
            }
            else if (ppppplVar16 <= ppppplVar11) {
              uVar4 = 0;
              if (ppppplVar16 != (long *****)0x0) {
                uVar4 = (ulong)ppppplVar11 / (ulong)ppppplVar16;
              }
              ppppplVar11 = (long *****)((long)ppppplVar11 - uVar4 * (long)ppppplVar16);
            }
          } while (ppppplVar11 == ppppplVar18);
        }
      }
LAB_10784fa74:
      ppppplVar14 = (long *****)0x90;
      __Znwm();
      ppppplVar7 = param_4 + 0x6e;
      pppplStack_148 = (long ****)ppppplVar14;
      pppplStack_140 = (long ****)ppppplVar7;
      func_0x000107851d38();
      func_0x00010729d394(ppppplVar14 + 9,appplStack_f8);
      func_0x000107851eb0();
      if ((ppppplVar16 == (long *****)0x0) ||
         (in_ZR = param_3 * (float)ppppplVar16 == fVar19, ppppplVar11 = ppppplVar18,
         param_3 * (float)ppppplVar16 < fVar19)) {
        func_0x000107851d9c();
        func_0x000107851d84();
        func_0x00010785156c(ppppplVar1);
        ppppplVar16 = (long *****)param_4[0x6d];
        if (((ulong)ppppplVar16 & (long)ppppplVar16 - 1U) == 0) {
          in_ZR = 1;
          ppppplVar11 = (long *****)((long)ppppplVar16 - 1U & (ulong)ppppplVar13);
        }
        else {
          in_ZR = ppppplVar13 == ppppplVar16;
          ppppplVar11 = ppppplVar13;
          if (ppppplVar16 <= ppppplVar13) {
            func_0x000107851e90();
            ppppplVar11 = ppppplVar18;
          }
        }
      }
      pppplVar9 = *ppppplVar1;
      ppplVar12 = pppplVar9[(long)ppppplVar11];
      if (ppplVar12 == (long ***)0x0) {
        *ppppplVar14 = *ppppplVar7;
        *ppppplVar7 = (long ****)ppppplVar14;
        pppplVar9[(long)ppppplVar11] = (long ***)ppppplVar7;
        if (*ppppplVar14 != (long ****)0x0) {
          ppppplVar13 = (long *****)(*ppppplVar14)[1];
          if (((ulong)ppppplVar16 & (long)ppppplVar16 - 1U) == 0) {
            ppppplVar13 = (long *****)((ulong)ppppplVar13 & (long)ppppplVar16 - 1U);
            in_ZR = true;
          }
          else {
            in_ZR = ppppplVar13 == ppppplVar16;
            if (ppppplVar16 <= ppppplVar13) {
              uVar10 = 0;
              if (ppppplVar16 != (long *****)0x0) {
                uVar10 = (ulong)ppppplVar13 / (ulong)ppppplVar16;
              }
              ppppplVar13 = (long *****)((long)ppppplVar13 - uVar10 * (long)ppppplVar16);
            }
          }
          pppplVar9[(long)ppppplVar13] = (long ***)ppppplVar14;
        }
      }
      else {
        *ppppplVar14 = (long ****)*ppplVar12;
        *ppplVar12 = (long **)ppppplVar14;
      }
      func_0x000107851d10();
LAB_10784fb58:
      func_0x000104c32ad0(&pppplStack_130);
    }
    func_0x000104c3323c(aiStack_b0);
  }
  func_0x00010729963c(param_1,ppppplVar14 + 9);
  func_0x000107279ee0(&pppplStack_158);
LAB_10784f9ec:
  func_0x000107851c80(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107851dc0();
  func_0x000104c32ad0(&pppplStack_130);
  func_0x000104c3323c(aiStack_b0);
  ppppplVar13 = &pppplStack_158;
  func_0x000107279ee0();
  func_0x000107851cf0();
  func_0x000107851cb4(ppppplVar13 + 0x3f);
  pppplVar9 = ppppplVar13[0x56];
  func_0x000107851cf8();
  if (((ulong)pppplVar9 & 1) == 0) {
    func_0x00010784fc78(ppppplVar13);
  }
  return;
}



/* Entry: 10785066c; end: 107850677;  */

void FUN_10785066c(undefined8 param_1,long param_2)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,param_2 + 0x30);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 107850eec; end: 107850f07;  */

long FUN_107850eec(long param_1)

{
  long lVar1;
  
  lVar1 = (long)*(char *)(*(long *)(param_1 + 8) + 0x17);
  if (-1 < lVar1) {
    return lVar1;
  }
  return *(long *)(*(long *)(param_1 + 8) + 8);
}



/* Entry: 10785115c; end: 10785116f;  */

void FUN_10785115c(void)

{
  func_0x000107851170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107851350; end: 107851373;  */

void FUN_107851350(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e2790;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107851498; end: 10785156b;  */

long FUN_107851498(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010726364c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000104c32db4(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 1078519f8; end: 1078519fb;  */

void FUN_1078519f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e28e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107851b04; end: 107851b2b;  */

long FUN_107851b04(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000107851b2c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107851c10; end: 107851c63;  */

long FUN_107851c10(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__119__shared_mutex_baseC1Ev();
  *(undefined1 *)(lVar1 + 0xa8) = 0;
  func_0x0001073730ac(lVar1 + 0xb0);
  func_0x00010737e548(param_1 + 0xc0);
  return param_1;
}



/* Entry: 107852fec; end: 10785303f;  */

undefined8 FUN_107852fec(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107853014(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107853260; end: 1078532c3;  */

long FUN_107853260(undefined8 param_1,long param_2)

{
  func_0x000104c2f714(param_2 + 0xa8);
  func_0x000104c2f714(param_2 + 0x70);
  func_0x000104c2f714(param_2 + 0x38);
  func_0x000104c2f714(param_2);
  return param_2;
}



/* Entry: 107853458; end: 1078535bf;  */

undefined8 *
FUN_107853458(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x26;
  
  uVar2 = param_2;
  func_0x0001072bb3b4();
  uVar3 = uVar2;
  func_0x0001072bb3b4();
  uVar1 = param_3;
  func_0x0001078545cc();
  uVar4 = uVar3;
  func_0x0001072bb3b4();
  uVar5 = uVar4;
  func_0x0001072bb3b4();
  *param_1 = param_2;
  param_1[1] = uVar2;
  param_1[2] = param_3;
  param_1[3] = unaff_x26;
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  param_1[6] = param_5;
  param_1[7] = uVar4;
  param_1[8] = param_6;
  param_1[9] = uVar5;
  return param_1;
}


