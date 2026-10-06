/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10782e120; end: 10782e227;  */

void FUN_10782e120(undefined8 param_1,long param_2,uint param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  long extraout_x8;
  int extraout_w10;
  undefined8 uVar4;
  undefined8 auStack_68 [2];
  undefined8 *puStack_58;
  long alStack_50 [2];
  
  if (*(byte *)(param_2 + 0x33c) != param_3) {
    *(char *)(param_2 + 0x33c) = (char)param_3;
    *(long *)(param_2 + 0x1e0) = *(long *)(param_2 + 0x1e0) + 1;
    lVar3 = *(long *)(*(long *)(param_2 + 0x238) + 0x28);
    func_0x000107832ee8();
    auStack_68[0] = param_1;
    if (extraout_x8 != 0) {
      do {
        func_0x000107832cb4();
      } while (extraout_w10 != 0);
    }
    func_0x00010724bb70(alStack_50,auStack_68);
    if (alStack_50[0] != 0) {
      bVar1 = *(byte *)(param_2 + 0x33c);
      uVar4 = *(undefined8 *)(param_2 + 0x1e0);
      puVar2 = (undefined8 *)0x30;
      __Znwm();
      *puVar2 = &PTR_DAT_1109e12e8;
      puVar2[1] = lVar3 + 0x20;
      puVar2[2] = &UNK_107845274;
      puVar2[3] = 0;
      puVar2[4] = (ulong)bVar1;
      puVar2[5] = uVar4;
      puStack_58 = puVar2;
      func_0x000107833224();
      func_0x0001078334b8();
      if (puVar2 != (undefined8 *)0x0) {
        func_0x000107832c60();
      }
    }
    func_0x00010724bcd8(alStack_50);
    func_0x0001078331f8();
  }
  return;
}



/* Entry: 10782ecf0; end: 10782ed77;  */

void FUN_10782ecf0(long param_1)

{
  undefined8 in_x4;
  long lVar1;
  undefined8 *puVar2;
  int extraout_w11;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x238) + 0x28);
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



/* Entry: 10782f424; end: 10782f42b;  */

void FUN_10782f424(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 extraout_w8;
  long *plVar6;
  long lVar7;
  long *plVar8;
  int extraout_w10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long *unaff_x27;
  long *plVar12;
  long *in_stack_00000078;
  long *in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined1 in_stack_000000dc;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  
  func_0x000107833544(param_1 + -0x188);
  func_0x000107832fc8();
  func_0x000107832d38();
  in_stack_00000090 = 100;
  in_stack_000000a8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  func_0x000107832d10();
  in_stack_000000b8 = 0;
  in_stack_000000d0 = CONCAT44(in_stack_000000d0._4_4_,extraout_w8);
  in_stack_000000d8 = 0;
  in_stack_000000dc = 1;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000e0 = 0;
  func_0x000107833400(&stack0x00000090,6);
  func_0x00010726e6c0(&stack0x00000008,&stack0x00000090);
  func_0x000107262330(&stack0x00000090);
  iVar1 = (int)unaff_x20[9];
  uVar2 = iVar1 + -1 < 0;
  uVar3 = iVar1 == 1;
  if ((bool)uVar3) {
    func_0x000107832fb0(&stack0x00000008);
    func_0x00010782f3bc((char)unaff_x20[8],&stack0x00000008);
    in_stack_00000090 = 1;
    in_stack_00000098 = 0;
    in_stack_00000078 = (long *)**(undefined8 **)(unaff_x19 + 0x80);
    in_stack_00000080 = (long *)CONCAT44(in_stack_00000080._4_4_,3);
    func_0x000107832e74(*(undefined8 **)(unaff_x19 + 0x80),&stack0x00000008,&stack0x00000090,
                        &stack0x00000078);
  }
  else if (iVar1 == 0) {
    uVar9 = *(undefined8 *)(unaff_x19 + 0x80);
    func_0x000107832fd4(&stack0x00000008,9);
    in_stack_00000090 = 1;
    in_stack_00000098 = 0;
    in_stack_00000078 = (long *)**(undefined8 **)(unaff_x19 + 0x80);
    in_stack_00000080 = (long *)CONCAT44(in_stack_00000080._4_4_,3);
    func_0x000107832e74(uVar9,&stack0x00000008,&stack0x00000090,&stack0x00000078);
    func_0x000104c2fe00(&stack0x00000090,unaff_x20[1] + 0xa8);
    in_stack_000000d0 = unaff_x20[2];
    in_stack_000000c8 = unaff_x20[1];
    if (unaff_x20[2] != 0) {
      do {
        func_0x000107832cb4();
      } while (extraout_w10 != 0);
    }
    plVar8 = (long *)(unaff_x19 + 0x2a8);
    unaff_x20 = (long *)(unaff_x19 + 0x2c0);
    plVar4 = unaff_x20;
    func_0x00010726364c(unaff_x20,&stack0x00000090);
    plVar11 = *(long **)(unaff_x19 + 0x2b0);
    if (plVar11 != (long *)0x0) {
      uVar10 = (long)plVar11 - 1;
      if (((ulong)plVar11 & uVar10) == 0) {
        unaff_x27 = (long *)(uVar10 & (ulong)plVar4);
        uVar3 = true;
        uVar2 = false;
      }
      else {
        uVar2 = (long)plVar4 - (long)plVar11 < 0;
        uVar3 = plVar4 == plVar11;
        unaff_x27 = plVar4;
        if (plVar11 <= plVar4) {
          uVar5 = 0;
          if (plVar11 != (long *)0x0) {
            uVar5 = (ulong)plVar4 / (ulong)plVar11;
          }
          unaff_x27 = (long *)((long)plVar4 - uVar5 * (long)plVar11);
        }
      }
      plVar12 = *(long **)(*plVar8 + (long)unaff_x27 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto code_r0x00010782f198;
            plVar6 = (long *)plVar12[1];
            uVar2 = (long)plVar6 - (long)plVar4 < 0;
            uVar3 = plVar6 == plVar4;
            if (!(bool)uVar3) break;
            uVar5 = (ulong)(plVar12 + 2);
            func_0x000104c32db4(uVar5,&stack0x00000090);
            if ((uVar5 & 1) != 0) goto code_r0x00010782f2b0;
          }
          if (((ulong)plVar11 & uVar10) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar10);
          }
          else if (plVar11 <= plVar6) {
            uVar5 = 0;
            if (plVar11 != (long *)0x0) {
              uVar5 = (ulong)plVar6 / (ulong)plVar11;
            }
            plVar6 = (long *)((long)plVar6 - uVar5 * (long)plVar11);
          }
          uVar2 = (long)plVar6 - (long)unaff_x27 < 0;
          uVar3 = plVar6 == unaff_x27;
        } while ((bool)uVar3);
      }
    }
code_r0x00010782f198:
    plVar6 = (long *)0x58;
    __Znwm();
    plVar12 = (long *)(unaff_x19 + 0x2b8);
    in_stack_00000088 = 1;
    *plVar6 = 0;
    plVar6[1] = (long)plVar4;
    in_stack_00000078 = plVar6;
    in_stack_00000080 = plVar12;
    func_0x000104c2fe00(plVar6 + 2,&stack0x00000090);
    plVar6[10] = in_stack_000000d0;
    plVar6[9] = in_stack_000000c8;
    in_stack_000000c8 = 0;
    in_stack_000000d0 = 0;
    func_0x000107833248(*(undefined8 *)(unaff_x19 + 0x2c0));
    if ((plVar11 == (long *)0x0) || (func_0x0001078331cc(), (bool)uVar2)) {
      func_0x000107832c80((long)plVar11 << 1);
      func_0x000107831c34(plVar8);
      plVar11 = *(long **)(unaff_x19 + 0x2b0);
      if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
        uVar3 = 1;
        unaff_x27 = (long *)((long)plVar11 - 1U & (ulong)plVar4);
      }
      else {
        uVar3 = plVar4 == plVar11;
        unaff_x27 = plVar4;
        if (plVar11 <= plVar4) {
          uVar10 = 0;
          if (plVar11 != (long *)0x0) {
            uVar10 = (ulong)plVar4 / (ulong)plVar11;
          }
          unaff_x27 = (long *)((long)plVar4 - uVar10 * (long)plVar11);
        }
      }
    }
    lVar7 = *plVar8;
    if (*(long *)(lVar7 + (long)unaff_x27 * 8) == 0) {
      *plVar6 = *plVar12;
      *plVar12 = (long)plVar6;
      *(long **)(lVar7 + (long)unaff_x27 * 8) = plVar12;
      if (*plVar6 != 0) {
        plVar8 = *(long **)(*plVar6 + 8);
        if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
          plVar8 = (long *)((ulong)plVar8 & (long)plVar11 - 1U);
          uVar3 = true;
        }
        else {
          uVar3 = plVar8 == plVar11;
          if (plVar11 <= plVar8) {
            uVar10 = 0;
            if (plVar11 != (long *)0x0) {
              uVar10 = (ulong)plVar8 / (ulong)plVar11;
            }
            plVar8 = (long *)((long)plVar8 - uVar10 * (long)plVar11);
          }
        }
        *(long **)(lVar7 + (long)plVar8 * 8) = plVar6;
      }
    }
    else {
      func_0x0001078332ec();
    }
    in_stack_00000078 = (long *)0x0;
    *unaff_x20 = *unaff_x20 + 1;
    FUN_107831d78(&stack0x00000078);
code_r0x00010782f2b0:
    func_0x000107518410(&stack0x00000090);
    func_0x000107833144(*(undefined8 *)(unaff_x19 + 0x90));
    func_0x000107833410();
  }
  func_0x000107262330();
  func_0x000107832c6c(in_stack_00000100);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  FUN_107831d78(&stack0x00000078);
  func_0x000107518410(&stack0x00000090);
  func_0x000107262330(&stack0x00000008);
  func_0x000107832e28();
  func_0x0001078334c4();
  func_0x0001078331b4();
  func_0x00010783329c((uint)unaff_x20 & 0xf);
  func_0x000107832e90();
  func_0x000107832ec4();
  func_0x0001078332ac();
  return;
}



/* Entry: 10782fab4; end: 10782fabf;  */

long FUN_10782fab4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *unaff_x19;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  uint6 uVar12;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  undefined8 uVar13;
  byte bVar19;
  ulong uStack_90;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  func_0x00010783323c();
  Hint_Prefetch(*param_1,0,2,0);
  uVar10 = param_2 + 8U;
  func_0x000104c2fe38(*param_1);
  lVar9 = 0;
  uVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar8 = *unaff_x20;
  uVar6 = uVar8 >> 0xc ^ uVar10 >> 7;
  bVar3 = (byte)uVar10;
  uVar12 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar6 = uVar6 & uVar2;
    uVar13 = *(undefined8 *)(uVar8 + uVar6);
    cVar14 = (char)((ulong)uVar13 >> 8);
    cVar15 = (char)((ulong)uVar13 >> 0x10);
    cVar16 = (char)((ulong)uVar13 >> 0x18);
    cVar17 = (char)((ulong)uVar13 >> 0x20);
    cVar18 = (char)((ulong)uVar13 >> 0x28);
    bVar11 = (byte)((ulong)uVar13 >> 0x30);
    bVar19 = (byte)((ulong)uVar13 >> 0x38);
    for (uVar10 = CONCAT17(-(bVar19 == (bVar3 & 0x7f)),
                           CONCAT16(-(bVar11 == (bVar3 & 0x7f)),
                                    CONCAT15(-(cVar18 == (char)(uVar12 >> 0x28)),
                                             CONCAT14(-(cVar17 == (char)(uVar12 >> 0x20)),
                                                      CONCAT13(-(cVar16 == (char)(uVar12 >> 0x18)),
                                                               CONCAT12(-(cVar15 ==
                                                                         (char)(uVar12 >> 0x10)),
                                                                        CONCAT11(-(cVar14 ==
                                                                                  (char)(uVar12 >> 8
                                                                                        )),
                                                                                 -((char)uVar13 ==
                                                                                  (char)uVar12))))))
                                   )) & 0x8080808080808080; uVar10 != 0;
        uVar10 = uVar10 - 1 & uVar10) {
      uVar4 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar2;
      uVar4 = 0;
      uStack_90 = param_2 + 8U;
      func_0x0001073e0698(&uStack_90,uVar1 + uVar7 * 0x58);
      if ((uVar4 & 1) != 0) {
        lVar9 = unaff_x20[1] + uVar7 * 0x58;
        plVar5 = *(long **)(*(long *)(lVar9 + 0x48) + 8);
        func_0x00010783346c();
        (**(code **)(*unaff_x19 + 0x30))();
        if (plVar5 == unaff_x19) {
          return lVar9 + 0x38;
        }
        return 0;
      }
    }
    bVar11 = NEON_umaxv(CONCAT17(-(bVar19 == 0x80),
                                 CONCAT16(-(bVar11 == 0x80),
                                          CONCAT15(-(cVar18 == -0x80),
                                                   CONCAT14(-(cVar17 == -0x80),
                                                            CONCAT13(-(cVar16 == -0x80),
                                                                     CONCAT12(-(cVar15 == -0x80),
                                                                              CONCAT11(-(cVar14 ==
                                                                                        -0x80),-((
                                                  char)uVar13 == -0x80)))))))),1);
    if ((bVar11 & 1) != 0) break;
    lVar9 = lVar9 + 8;
    uVar6 = lVar9 + uVar6;
  }
  return 0;
}



/* Entry: 1078301dc; end: 1078303f3;  */

void FUN_1078301dc(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x19;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  
  func_0x000107832fc8();
  uStack_c8 = 0;
  if (*(long *)(param_1 + 0x1e8) != 0) {
    uStack_c8 = *(undefined8 *)(*(long *)(param_1 + 0x1e8) + 0x1a0);
  }
  lStack_c0 = unaff_x19[0x3c];
  func_0x0001074f5878(auStack_b8,unaff_x20 + 0x10);
  func_0x0001074f5878(auStack_a0,unaff_x20 + 0x28);
  func_0x0001074f5904(auStack_88,unaff_x20 + 0x40);
  uVar3 = unaff_x19[0x6a];
  if (uVar3 < (ulong)unaff_x19[0x6b]) {
    func_0x000107832a48(uVar3,&uStack_c8);
    lVar8 = uVar3 + 0x68;
  }
  else {
    lVar8 = uVar3 - unaff_x19[0x69];
    uVar3 = lVar8 / 0x68 + 1;
    if (0x276276276276276 < uVar3) {
      FUN_107832ae4();
LAB_1078303c0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1078303c4);
      (*pcVar2)();
    }
    uVar1 = (unaff_x19[0x6b] - unaff_x19[0x69]) / 0x68;
    uVar7 = uVar1 * 2;
    if (uVar7 < uVar3 || uVar7 - uVar3 == 0) {
      uVar7 = uVar3;
    }
    if (0x13b13b13b13b13a < uVar1) {
      uVar7 = 0x276276276276276;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (0x276276276276276 < uVar7) {
        func_0x000104bd35f4();
        goto LAB_1078303c0;
      }
      lVar4 = uVar7 * 0x68;
      __Znwm();
    }
    lVar8 = lVar4 + lVar8;
    func_0x000107832a48(lVar8,&uStack_c8);
    lVar10 = unaff_x19[0x6a];
    lVar9 = unaff_x19[0x69];
    lVar11 = lVar8 + ((lVar10 - lVar9) / -0x68) * 0x68;
    lVar5 = lVar11;
    for (lVar6 = lVar9; lVar6 != lVar10; lVar6 = lVar6 + 0x68) {
      func_0x000107832a48(lVar5,lVar6);
      lVar5 = lVar5 + 0x68;
    }
    for (; lVar9 != lVar10; lVar9 = lVar9 + 0x68) {
      func_0x00010750f290(lVar9 + 0x10);
    }
    lVar8 = lVar8 + 0x68;
    lVar6 = unaff_x19[0x69];
    unaff_x19[0x69] = lVar11;
    unaff_x19[0x6a] = lVar8;
    unaff_x19[0x6b] = lVar4 + uVar7 * 0x68;
    if (lVar6 != 0) {
      __ZdlPv();
    }
  }
  unaff_x19[0x6a] = lVar8;
  func_0x00010750f290(auStack_b8);
  if (param_3 == 0) {
    (**(code **)(*unaff_x19 + 0xb8))();
  }
  return;
}



/* Entry: 107830f40; end: 107830f47;  */

void FUN_107830f40(void)

{
  return;
}



/* Entry: 10783107c; end: 10783110b;  */

undefined1  [16]
FUN_10783107c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_58 [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  func_0x0001074662f4(param_1,param_2,&uStack_38,auStack_40,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    func_0x00010783110c(alStack_58,param_1,param_4);
    func_0x000107466400(param_1,uStack_38,plVar2,alStack_58[0]);
    lVar3 = alStack_58[0];
    alStack_58[0] = 0;
    func_0x0001074664e0(alStack_58);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 1078312d4; end: 107831337;  */

undefined8 FUN_1078312d4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000107831300(&uStack_28);
  return param_1;
}



/* Entry: 1078315e8; end: 10783163f;  */

void FUN_1078315e8(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    uVar3 = *(undefined8 *)pcVar1;
    uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar3 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar3 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar3 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar3 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar3 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar3 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar3 >> 8)),-(-2 < (char)uVar3))))))));
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    pcVar1 = pcVar1 + (uVar2 >> 3);
    *param_1 = (long)pcVar1;
    param_1[1] = param_1[1] + (uVar2 >> 3) * 0x58;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 107831764; end: 10783178b;  */

void FUN_107831764(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0x30) = 1;
  lVar1 = *(long *)**(undefined8 **)(*(long *)(param_1 + 0x28) + 0x300);
  func_0x0001073af024();
  func_0x0001072ab574(lVar1 + 0x110);
  *(undefined1 *)(lVar1 + 0x150) = 1;
  func_0x0001073aef30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(lVar1 + 0xd0);
  return;
}



/* Entry: 1078319e0; end: 107831a0b;  */

undefined8 FUN_1078319e0(undefined8 param_1)

{
  func_0x000107832fdc(&PTR_DAT_1109e1198);
  func_0x0001078319b4();
  return param_1;
}



/* Entry: 107831b4c; end: 107831b77;  */

undefined8 * FUN_107831b4c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e11d8;
  func_0x0001073e0028(param_1 + 5);
  return param_1;
}



/* Entry: 107831d78; end: 107831daf;  */

void FUN_107831d78(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078332cc();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      func_0x000107518410(unaff_x20 + 0x10);
    }
    func_0x000107833408();
  }
  return;
}



/* Entry: 1078320b4; end: 1078320d7;  */

void FUN_1078320b4(long param_1)

{
  func_0x000107833510();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1078323bc; end: 1078323cf;  */

void FUN_1078323bc(void)

{
  func_0x00010783258c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107832618; end: 1078326a7;  */

void FUN_107832618(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lStack_40;
  long lStack_38;
  
  uVar1 = 0x38;
  __Znwm();
  plVar2 = param_4 + 1;
  lStack_40 = *plVar2;
  lStack_38 = param_4[2];
  if (lStack_38 != 0) {
    *(long **)(lStack_40 + 0x10) = &lStack_40;
    *param_4 = plVar2;
    *plVar2 = 0;
    param_4[2] = 0;
  }
  func_0x0001078326a8();
  *param_1 = uVar1;
  func_0x0001078330c8();
  return;
}



/* Entry: 107832850; end: 10783289f;  */

long FUN_107832850(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001078328a0();
  func_0x0001078328a0(lVar1 + 0x28,param_3);
  func_0x0001078328ec(param_1 + 0x50,param_4);
  *(undefined8 *)(param_1 + 0x78) = *param_5;
  return param_1;
}



/* Entry: 107832ae4; end: 107832aef;  */

void FUN_107832ae4(void)

{
  func_0x000107832fa4();
  return;
}



/* Entry: 10783376c; end: 10783387b;  */

void FUN_10783376c(double param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *extraout_x8;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  func_0x000107843250();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  lVar3 = *param_2;
  lVar2 = param_2[1];
  if ((ulong)((lVar2 - lVar3) / 0x18) < 2) {
    func_0x000107297358(&stack0x00000018,param_2);
    func_0x000107842980();
  }
  else {
    uVar4 = 0;
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0x18) {
      func_0x00010783387c(lVar3);
      if (param_1 != 0.0) {
        uVar5 = 0xffffffff;
        if (0.0 <= param_1) {
          uVar5 = 1;
        }
        uVar1 = uVar5;
        if ((uVar4 & 0xff) != 0) {
          uVar1 = uVar4;
        }
        if ((uVar5 == (int)(char)uVar1) && (in_stack_00000018 != in_stack_00000020)) {
          func_0x000107842980();
          func_0x00010737cf48(&stack0x00000018);
          func_0x0001072977d0();
        }
        func_0x000107841e5c(&stack0x00000018,lVar3);
        uVar4 = uVar1;
      }
    }
    if (in_stack_00000018 != in_stack_00000020) {
      func_0x000107842980();
    }
  }
  func_0x0001072977d0(&stack0x00000018);
  return;
}



/* Entry: 1078344c8; end: 1078345cb;  */

/* WARNING: Possible PIC construction at 0x000107834620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107834630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107834624) */
/* WARNING: Removing unreachable block (ram,0x000107834634) */

void FUN_1078344c8(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined8 ***pppuVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar6;
  undefined8 ***pppuVar7;
  undefined *puVar8;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000060;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long *plStack_30;
  long *plStack_28;
  long *plStack_20;
  undefined8 *puStack_10;
  undefined *puStack_8;
  
  func_0x000107843250();
  plVar6 = param_1;
  func_0x000107842d2c();
  in_stack_00000028 = extraout_x8_00;
  (**(code **)(*plVar6 + 0x48))();
  func_0x0001078428c8(&stack0x00000008);
  func_0x000107833d7c();
  func_0x000100660238();
  func_0x0001078349a8();
  func_0x000104c3365c(&stack0x00000008);
  plVar6 = param_1;
  (**(code **)(*param_1 + 0x20))(param_1);
  func_0x00010729c0e4(extraout_x8 + 0x20,plVar6);
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x30))();
  plVar6 = (long *)(extraout_x8 + 0x30);
  func_0x00010729c0b0();
  if ((char)param_3[7] == '\x01') {
    plVar3 = param_3;
    func_0x00010725ffc4();
    plVar6 = (long *)(extraout_x8 + 0x70);
    func_0x000107262f3c();
  }
  uVar2 = (char)param_4[7] == '\x01';
  if ((bool)uVar2) {
    func_0x00010725ffc4();
    plVar6 = (long *)(extraout_x8 + 0xa8);
    func_0x000107262f3c();
    plVar3 = param_4;
  }
  func_0x0001078429fc(in_stack_00000028);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  plVar4 = plVar6;
  func_0x000107842744();
  pppuVar1 = (undefined8 ***)auStack_50;
  puStack_8 = &UNK_1078345cc;
  plVar5 = plVar4 + 2;
  if ((long *)(*plVar5 - *plVar4 >> 3) < plVar3) {
    plStack_20 = plVar6;
    puStack_10 = &stack0x00000060;
    if ((ulong)plVar3 >> 0x3d == 0) {
      plVar6 = (long *)(plVar4[1] - *plVar4);
      plStack_28 = plVar5;
      func_0x00010783466c();
      lStack_40 = (long)plVar5 + (long)plVar6;
      plStack_30 = plVar5 + (long)plVar3;
      plStack_48 = plVar5;
      lStack_38 = lStack_40;
      func_0x000100660238();
      puVar8 = &UNK_107834624;
      pppuVar7 = (undefined8 ***)&puStack_10;
    }
    else {
      pppuVar1 = &ppuStack_60;
      pppuVar7 = &ppuStack_60;
      puStack_58 = &UNK_107834634;
      puVar8 = &UNK_10783464c;
      ppuStack_60 = &puStack_10;
      func_0x0001078423e8();
    }
    *(long **)((long)pppuVar1 + -0x30) = param_1;
    *(long **)((long)pppuVar1 + -0x28) = param_3;
    *(long **)((long)pppuVar1 + -0x20) = plVar6;
    *(long **)((long)pppuVar1 + -0x18) = plVar4;
    *(undefined8 ****)((long)pppuVar1 + -0x10) = pppuVar7;
    *(undefined **)((long)pppuVar1 + -8) = puVar8;
    func_0x000107842254();
    func_0x00010784214c();
    return;
  }
  return;
}



/* Entry: 1078346f8; end: 10783473b;  */

int * FUN_1078346f8(undefined8 param_1,short *param_2,short *param_3)

{
  short sVar1;
  int *piVar2;
  int *extraout_x8;
  int *extraout_x9;
  int *unaff_x19;
  
  func_0x000107842f24();
  if (extraout_x8 < extraout_x9) {
    sVar1 = *param_3;
    *extraout_x8 = (int)*param_2;
    extraout_x8[1] = (int)sVar1;
    piVar2 = extraout_x8 + 2;
  }
  else {
    piVar2 = unaff_x19;
    func_0x00010783473c();
  }
  *(int **)(unaff_x19 + 2) = piVar2;
  return piVar2 + -2;
}



/* Entry: 1078348bc; end: 1078348eb;  */

void FUN_1078348bc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010783387c();
  func_0x00010783387c(param_2);
  func_0x000107842d9c();
  return;
}



/* Entry: 107834b20; end: 107834b33;  */

void FUN_107834b20(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078357a8; end: 1078357b3;  */

void FUN_1078357a8(void)

{
  func_0x0001078423e8();
  func_0x0001078425f8();
  func_0x000107842a90();
  func_0x000107835858();
  func_0x00010784214c();
  return;
}



/* Entry: 107835938; end: 10783598f;  */

bool FUN_107835938(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = param_2 < param_4 != param_6 <= param_4;
  if (param_1 != param_5) {
    bVar2 = param_1 < param_3 != param_5 <= param_3;
  }
  bVar1 = false;
  if (param_5 != param_3 || param_6 != param_4) {
    bVar1 = bVar2;
  }
  bVar2 = false;
  if (param_1 != param_3 || param_2 != param_4) {
    bVar2 = bVar1;
  }
  bVar1 = false;
  if (param_1 != param_5 || param_2 != param_6) {
    bVar1 = bVar2;
  }
  return bVar1;
}



/* Entry: 107836000; end: 10783609b;  */

void FUN_107836000(long param_1,long param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x21;
  long lVar3;
  
  if (param_1 != param_2 && param_2 != param_3) {
    func_0x000107842888();
    while( true ) {
      lVar3 = unaff_x20;
      func_0x00010784262c();
      func_0x00010783609c();
      unaff_x21 = unaff_x21 + 0x18;
      param_2 = param_2 + 0x18;
      if (param_2 == param_3) break;
      unaff_x20 = param_2;
      if (unaff_x21 != lVar3) {
        unaff_x20 = lVar3;
      }
    }
    lVar1 = lVar3;
    if (unaff_x21 != lVar3) {
      do {
        while( true ) {
          lVar2 = lVar1;
          func_0x00010784262c();
          func_0x00010783609c();
          unaff_x21 = unaff_x21 + 0x18;
          lVar3 = lVar3 + 0x18;
          if (lVar3 == param_3) break;
          lVar1 = lVar3;
          if (unaff_x21 != lVar2) {
            lVar1 = lVar2;
          }
        }
        lVar1 = lVar2;
        lVar3 = lVar2;
      } while (unaff_x21 != lVar2);
    }
  }
  return;
}



/* Entry: 10783631c; end: 107836397;  */

void FUN_10783631c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)((long)param_2 + 0x54);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  *(undefined1 *)((long)param_1 + 0x59) = *(undefined1 *)((long)param_2 + 0x59);
  *(undefined1 *)((long)param_1 + 0x5a) = *(undefined1 *)((long)param_2 + 0x5a);
  return;
}



/* Entry: 107837b9c; end: 107837bb3;  */

void FUN_107837b9c(long *param_1,long param_2)

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



/* Entry: 10783837c; end: 1078383a3;  */

int FUN_10783837c(int param_1)

{
  int iVar1;
  double unaff_d8;
  
  func_0x000107842954();
  iVar1 = (int)unaff_d8;
  if (param_1 == 0) {
    iVar1 = (int)(long)unaff_d8;
  }
  return iVar1;
}



/* Entry: 1078387fc; end: 1078388c7;  */

void FUN_1078387fc(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong *unaff_x19;
  undefined4 *unaff_x20;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  
  func_0x000107843250();
  func_0x00010066015c();
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  if (puVar4 == *(undefined4 **)(param_1 + 0x18)) {
    uVar1 = unaff_x19[1];
    lVar2 = uVar1 - *unaff_x19;
    if (uVar1 < *unaff_x19 || lVar2 == 0) {
      func_0x000100161bec();
      func_0x000107838968();
      unaff_x19[1] = in_stack_00000008;
      *unaff_x19 = in_stack_00000000;
      unaff_x19[3] = in_stack_00000018;
      unaff_x19[2] = in_stack_00000010;
      func_0x000100161cc4();
      puVar4 = (undefined4 *)unaff_x19[2];
    }
    else {
      lVar2 = ((lVar2 >> 2) + 1) / -2;
      uVar3 = uVar1;
      if ((long)puVar4 - uVar1 != 0) {
        func_0x000107842568();
        uVar3 = unaff_x19[1];
      }
      puVar4 = (undefined4 *)(uVar1 + ((long)puVar4 - uVar1) + lVar2 * 4);
      unaff_x19[1] = uVar3 + lVar2 * 4;
      unaff_x19[2] = (ulong)puVar4;
    }
  }
  *puVar4 = *unaff_x20;
  unaff_x19[2] = (ulong)(puVar4 + 1);
  return;
}



/* Entry: 107838b28; end: 107838b8b;  */

void FUN_107838b28(ulong param_1)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  if (param_1 >> 0x3d == 0) {
    func_0x00010784298c();
    return;
  }
  func_0x000104bd35f4();
  func_0x000107842f24();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -8;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107839730; end: 10783973b;  */

/* WARNING: Possible PIC construction at 0x000107839818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107839820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107839d10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107839824) */
/* WARNING: Removing unreachable block (ram,0x00010783981c) */
/* WARNING: Removing unreachable block (ram,0x000107839d14) */
/* WARNING: Removing unreachable block (ram,0x000107839d28) */
/* WARNING: Removing unreachable block (ram,0x000107839ab8) */
/* WARNING: Removing unreachable block (ram,0x000107839abc) */
/* WARNING: Removing unreachable block (ram,0x000107839ac0) */
/* WARNING: Removing unreachable block (ram,0x000107839d5c) */
/* WARNING: Removing unreachable block (ram,0x000107839d84) */
/* WARNING: Removing unreachable block (ram,0x000107839d90) */
/* WARNING: Removing unreachable block (ram,0x000107839e04) */
/* WARNING: Removing unreachable block (ram,0x000107839e08) */
/* WARNING: Removing unreachable block (ram,0x000107839e10) */
/* WARNING: Removing unreachable block (ram,0x000107839e48) */
/* WARNING: Removing unreachable block (ram,0x000107842274) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf0a8) */
/* WARNING: Removing unreachable block (ram,0x000107839e18) */
/* WARNING: Removing unreachable block (ram,0x000107839e2c) */
/* WARNING: Removing unreachable block (ram,0x000107839e30) */
/* WARNING: Removing unreachable block (ram,0x000107839e38) */
/* WARNING: Removing unreachable block (ram,0x000107839d98) */
/* WARNING: Removing unreachable block (ram,0x000107839d64) */
/* WARNING: Removing unreachable block (ram,0x000107839d68) */
/* WARNING: Removing unreachable block (ram,0x000107839da8) */
/* WARNING: Removing unreachable block (ram,0x000107839db0) */
/* WARNING: Removing unreachable block (ram,0x000107839db8) */
/* WARNING: Removing unreachable block (ram,0x000107839df8) */
/* WARNING: Removing unreachable block (ram,0x000107839e00) */
/* WARNING: Removing unreachable block (ram,0x000107839df0) */
/* WARNING: Removing unreachable block (ram,0x000107839dc0) */
/* WARNING: Removing unreachable block (ram,0x000107839ddc) */
/* WARNING: Removing unreachable block (ram,0x000107839de0) */
/* WARNING: Removing unreachable block (ram,0x000107839de4) */
/* WARNING: Removing unreachable block (ram,0x000107839d74) */
/* WARNING: Removing unreachable block (ram,0x000107839ac4) */
/* WARNING: Removing unreachable block (ram,0x000107839acc) */
/* WARNING: Removing unreachable block (ram,0x000107839af4) */
/* WARNING: Removing unreachable block (ram,0x000107839b54) */
/* WARNING: Removing unreachable block (ram,0x000107839e60) */
/* WARNING: Removing unreachable block (ram,0x000107839b5c) */
/* WARNING: Removing unreachable block (ram,0x000107839b78) */
/* WARNING: Removing unreachable block (ram,0x000107839b98) */
/* WARNING: Removing unreachable block (ram,0x000107839b9c) */
/* WARNING: Removing unreachable block (ram,0x000107839ba4) */
/* WARNING: Removing unreachable block (ram,0x000107839b00) */
/* WARNING: Removing unreachable block (ram,0x000107839b1c) */
/* WARNING: Removing unreachable block (ram,0x000107839b3c) */
/* WARNING: Removing unreachable block (ram,0x000107839b40) */
/* WARNING: Removing unreachable block (ram,0x000107839b48) */
/* WARNING: Removing unreachable block (ram,0x000107839bac) */
/* WARNING: Removing unreachable block (ram,0x000107839bb8) */
/* WARNING: Removing unreachable block (ram,0x000107839bc4) */
/* WARNING: Removing unreachable block (ram,0x000107839c18) */
/* WARNING: Removing unreachable block (ram,0x000107839bd0) */
/* WARNING: Removing unreachable block (ram,0x000107839c3c) */
/* WARNING: Removing unreachable block (ram,0x000107839c54) */
/* WARNING: Removing unreachable block (ram,0x000107839c68) */
/* WARNING: Removing unreachable block (ram,0x000107839bdc) */
/* WARNING: Removing unreachable block (ram,0x000107839c70) */
/* WARNING: Removing unreachable block (ram,0x000107839c78) */
/* WARNING: Removing unreachable block (ram,0x000107839c80) */
/* WARNING: Removing unreachable block (ram,0x000107839c8c) */
/* WARNING: Removing unreachable block (ram,0x000107839c90) */
/* WARNING: Removing unreachable block (ram,0x000107839cd8) */
/* WARNING: Removing unreachable block (ram,0x000107839c98) */
/* WARNING: Removing unreachable block (ram,0x000107839ca4) */
/* WARNING: Removing unreachable block (ram,0x000107839cb8) */
/* WARNING: Removing unreachable block (ram,0x000107839cc8) */
/* WARNING: Removing unreachable block (ram,0x000107839bf0) */
/* WARNING: Removing unreachable block (ram,0x000107839bf8) */
/* WARNING: Removing unreachable block (ram,0x000107839bfc) */
/* WARNING: Removing unreachable block (ram,0x000107839c00) */
/* WARNING: Removing unreachable block (ram,0x000107839cd0) */
/* WARNING: Removing unreachable block (ram,0x000107839cdc) */
/* WARNING: Removing unreachable block (ram,0x000107839d2c) */
/* WARNING: Removing unreachable block (ram,0x000107839cf4) */
/* WARNING: Removing unreachable block (ram,0x000107839a74) */
/* WARNING: Removing unreachable block (ram,0x000107839aa4) */
/* WARNING: Removing unreachable block (ram,0x000107839c04) */
/* WARNING: Removing unreachable block (ram,0x000107839ae4) */
/* WARNING: Removing unreachable block (ram,0x000107839e68) */
/* WARNING: Removing unreachable block (ram,0x0001078421b8) */
/* WARNING: Removing unreachable block (ram,0x000107839af0) */

void FUN_107839730(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 *in_stack_00000030;
  undefined *in_stack_00000038;
  
  puVar13 = &UNK_10783973c;
  func_0x0001078423e8();
  puVar12 = (undefined8 *)&stack0xfffffffffffffff0;
  while( true ) {
    func_0x0001078430f4();
    cVar3 = SBORROW8(param_3,2);
    cVar4 = (long)(param_3 - 2) < 0;
    bVar5 = param_3 == 2;
    if (param_3 < 2) {
      return;
    }
    if (bVar5) {
      lVar8 = *param_1;
      if (*(ulong *)(lVar8 + 0x48) <= *(ulong *)(param_2[-1] + 0x48)) {
        return;
      }
      *param_1 = param_2[-1];
      param_2[-1] = lVar8;
      return;
    }
    plVar6 = param_1;
    plVar7 = param_2;
    in_stack_00000030 = puVar12;
    in_stack_00000038 = puVar13;
    func_0x000107842b4c();
    if (bVar5 || cVar4 != cVar3) break;
    func_0x000107842190();
    if (bVar5 || cVar4 != cVar3) {
      func_0x0001078398f0();
      func_0x0001078422fc();
      func_0x0001078398f0();
      plVar6 = unaff_x21 + unaff_x23;
      plVar7 = unaff_x22;
      while( true ) {
        if (unaff_x21 == unaff_x22) {
          for (; plVar7 != plVar6; plVar7 = plVar7 + 1) {
            *param_1 = *plVar7;
            param_1 = param_1 + 1;
          }
          return;
        }
        if (plVar7 == plVar6) break;
        bVar5 = *(ulong *)(*unaff_x21 + 0x48) <= *(ulong *)(*plVar7 + 0x48);
        lVar8 = *plVar7;
        if (bVar5) {
          lVar8 = *unaff_x21;
        }
        lVar10 = 0;
        if (bVar5) {
          lVar10 = 8;
        }
        unaff_x21 = (long *)((long)unaff_x21 + lVar10);
        lVar10 = 8;
        if (bVar5) {
          lVar10 = 0;
        }
        plVar7 = (long *)((long)plVar7 + lVar10);
        *param_1 = lVar8;
        param_1 = param_1 + 1;
      }
      while (unaff_x21 != unaff_x22) {
        func_0x000107842b20();
      }
      return;
    }
    puVar13 = &UNK_10783981c;
    param_1 = plVar6;
    param_2 = plVar7;
    puVar12 = &stack0x00000030;
  }
  if (param_1 == param_2) {
    return;
  }
  lVar8 = 0;
  plVar6 = param_1;
  do {
    if (plVar6 + 1 == param_2) {
      return;
    }
    lVar10 = *plVar6;
    lVar1 = plVar6[1];
    uVar9 = *(ulong *)(lVar1 + 0x48);
    lVar2 = lVar8;
    if (uVar9 < *(ulong *)(lVar10 + 0x48)) {
      do {
        lVar11 = lVar2;
        *(long *)((long)param_1 + lVar11 + 8) = lVar10;
        plVar7 = param_1;
        if (lVar11 == 0) goto code_r0x0001078397fc;
        lVar10 = *(long *)((long)param_1 + lVar11 + -8);
        lVar2 = lVar11 + -8;
      } while (uVar9 < *(ulong *)(lVar10 + 0x48));
      plVar7 = (long *)((long)param_1 + lVar11);
code_r0x0001078397fc:
      *plVar7 = lVar1;
    }
    lVar8 = lVar8 + 8;
    plVar6 = plVar6 + 1;
  } while( true );
}



/* Entry: 10783a0d0; end: 10783a133;  */

bool FUN_10783a0d0(ulong param_1,long param_2)

{
  bool bVar1;
  long *unaff_x19;
  long *unaff_x20;
  double dVar2;
  double dVar3;
  
  func_0x00010066015c();
  dVar2 = *(double *)(param_2 + 0x18);
  dVar3 = *(double *)(param_1 + 0x18);
  func_0x000107842eb8();
  func_0x000107835a3c();
  if ((param_1 & 1) == 0) {
    bVar1 = dVar2 < dVar3;
  }
  else {
    bVar1 = *(int *)(unaff_x19[1] + 0x54) + *(int *)(*unaff_x19 + 0x54) <
            *(int *)(unaff_x20[1] + 0x54) + *(int *)(*unaff_x20 + 0x54);
  }
  return bVar1;
}



/* Entry: 10783b400; end: 10783b527;  */

long FUN_10783b400(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long in_x3;
  long extraout_x8;
  undefined8 uVar3;
  long extraout_x8_00;
  ulong uVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  long *plVar7;
  long in_stack_00000018;
  
  func_0x000107843250();
  func_0x000107843160();
  plVar7 = (long *)(in_x3 + 0xb0);
  uVar4 = *(ulong *)(in_x3 + 0xb8) - *plVar7;
  uVar5 = *(ulong *)(in_x3 + 0xc0);
  if (uVar4 < uVar5 - *plVar7) {
    if (*(ulong *)(in_x3 + 0xb8) < uVar5) {
      func_0x000107842a60();
      lVar6 = extraout_x8 + 0x20;
    }
    else {
      plVar2 = plVar7;
      func_0x00010783b574(plVar7,((long)uVar4 >> 5) + 1);
      func_0x000107838a68(&stack0x00000008,plVar2,
                          *(long *)(unaff_x19 + 0xb8) - *(long *)(unaff_x19 + 0xb0) >> 5,
                          (ulong *)(in_x3 + 0xc0));
      func_0x000107842a60(in_stack_00000018);
      in_stack_00000018 = extraout_x8_00 + 0x20;
      func_0x000107838a48(plVar7,&stack0x00000008);
      lVar6 = *(long *)(unaff_x19 + 0xb8);
      func_0x000107838ac0(&stack0x00000008);
    }
    *(long *)(unaff_x19 + 0xb8) = lVar6;
    lVar6 = lVar6 + -0x20;
  }
  else {
    lVar6 = unaff_x19 + 0x50;
    func_0x00010783b5b4();
    if (lVar6 == 0) {
      func_0x00010783b5dc(unaff_x19 + 0x50);
    }
    puVar1 = (undefined8 *)(unaff_x19 + 0x50);
    func_0x00010783b908();
    *puVar1 = unaff_x22;
    puVar1[1] = *unaff_x21;
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar1[2] = unaff_x20;
    puVar1[3] = uVar3;
    *(undefined8 **)(unaff_x20 + 0x18) = puVar1;
    *(undefined8 **)(puVar1[3] + 0x10) = puVar1;
    *(long *)(unaff_x19 + 0x78) = *(long *)(unaff_x19 + 0x78) + 1;
    lVar6 = unaff_x19 + 0x50;
    func_0x00010783b550(lVar6);
  }
  func_0x00010783ba00(unaff_x19 + 0x18,lVar6);
  return lVar6;
}



/* Entry: 10783b9b4; end: 10783b9d7;  */

void FUN_10783b9b4(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10783bc30; end: 10783be1b;  */

/* WARNING: Possible PIC construction at 0x00010783bd74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010783bdb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010783bddc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010783bdbc) */
/* WARNING: Removing unreachable block (ram,0x00010783bdc0) */
/* WARNING: Removing unreachable block (ram,0x00010783bdd8) */
/* WARNING: Removing unreachable block (ram,0x00010783bdd0) */
/* WARNING: Removing unreachable block (ram,0x00010783bd78) */
/* WARNING: Removing unreachable block (ram,0x00010783bd7c) */
/* WARNING: Removing unreachable block (ram,0x00010783bd80) */
/* WARNING: Removing unreachable block (ram,0x00010783bd84) */
/* WARNING: Removing unreachable block (ram,0x00010783bd88) */
/* WARNING: Removing unreachable block (ram,0x00010783bd8c) */
/* WARNING: Removing unreachable block (ram,0x00010783bdb0) */
/* WARNING: Removing unreachable block (ram,0x00010783bd94) */
/* WARNING: Removing unreachable block (ram,0x00010783bda4) */
/* WARNING: Removing unreachable block (ram,0x00010783bda8) */
/* WARNING: Removing unreachable block (ram,0x00010783bde0) */
/* WARNING: Removing unreachable block (ram,0x00010783be04) */
/* WARNING: Removing unreachable block (ram,0x00010783bde4) */
/* WARNING: Removing unreachable block (ram,0x00010783be88) */
/* WARNING: Removing unreachable block (ram,0x00010783be8c) */
/* WARNING: Removing unreachable block (ram,0x00010783be94) */
/* WARNING: Removing unreachable block (ram,0x00010783be90) */
/* WARNING: Removing unreachable block (ram,0x000107843004) */

bool FUN_10783bc30(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0xc);
  lVar5 = param_1;
  do {
    lVar5 = *(long *)(lVar5 + 0x18);
  } while ((lVar5 != param_1 && *(int *)(lVar5 + 8) == iVar2) && *(int *)(lVar5 + 0xc) == iVar3);
  iVar4 = *(int *)(lVar5 + 0xc) - iVar3;
  lVar6 = param_1;
  if (iVar4 == 0) {
    dVar8 = INFINITY;
  }
  else {
    dVar8 = (double)(*(int *)(lVar5 + 8) - iVar2) / (double)iVar4;
  }
  do {
    lVar6 = *(long *)(lVar6 + 0x10);
  } while ((lVar6 != param_1 && *(int *)(lVar6 + 8) == iVar2) && *(int *)(lVar6 + 0xc) == iVar3);
  iVar3 = *(int *)(lVar6 + 0xc) - iVar3;
  if (iVar3 == 0) {
    dVar12 = INFINITY;
  }
  else {
    dVar12 = (double)(*(int *)(lVar6 + 8) - iVar2) / (double)iVar3;
  }
  iVar2 = *(int *)(param_2 + 8);
  iVar3 = *(int *)(param_2 + 0xc);
  lVar5 = param_2;
  do {
    lVar5 = *(long *)(lVar5 + 0x18);
  } while ((lVar5 != param_2 && *(int *)(lVar5 + 8) == iVar2) && *(int *)(lVar5 + 0xc) == iVar3);
  iVar4 = *(int *)(lVar5 + 0xc) - iVar3;
  lVar6 = param_2;
  if (iVar4 == 0) {
    dVar13 = INFINITY;
  }
  else {
    dVar13 = (double)(*(int *)(lVar5 + 8) - iVar2) / (double)iVar4;
  }
  do {
    lVar6 = *(long *)(lVar6 + 0x10);
  } while ((lVar6 != param_2 && *(int *)(lVar6 + 8) == iVar2) && *(int *)(lVar6 + 0xc) == iVar3);
  iVar3 = *(int *)(lVar6 + 0xc) - iVar3;
  if (iVar3 == 0) {
    dVar9 = INFINITY;
  }
  else {
    dVar9 = (double)(*(int *)(lVar6 + 8) - iVar2) / (double)iVar3;
  }
  dVar10 = ABS(dVar12);
  if (ABS(dVar12) <= ABS(dVar8)) {
    dVar10 = ABS(dVar8);
  }
  dVar8 = ABS(dVar9);
  if (ABS(dVar9) <= ABS(dVar13)) {
    dVar8 = ABS(dVar13);
  }
  if (NAN(dVar10) || NAN(dVar8)) {
    return false;
  }
  uVar7 = (ulong)-ABS(dVar8) ^ ((ulong)-ABS(dVar8) ^ -(long)dVar8) & -(ulong)((long)dVar8 < 0);
  uVar11 = (ulong)-ABS(dVar10) ^ ((ulong)-ABS(dVar10) ^ -(long)dVar10) & -(ulong)((long)dVar10 < 0);
  uVar1 = uVar11 - uVar7;
  if (uVar11 < uVar7 || uVar11 - uVar7 == 0) {
    uVar1 = uVar7 - uVar11;
  }
  return uVar1 < 5;
}



/* Entry: 10783bff8; end: 10783c05b;  */

void FUN_10783bff8(ulong param_1)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  if (param_1 >> 0x3d == 0) {
    func_0x00010784298c();
    return;
  }
  func_0x000104bd35f4();
  func_0x000107842f24();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -8;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10783c638; end: 10783c8f7;  */

/* WARNING: Possible PIC construction at 0x00010783c870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010783c874) */
/* WARNING: Removing unreachable block (ram,0x00010783c890) */
/* WARNING: Removing unreachable block (ram,0x00010783c888) */
/* WARNING: Removing unreachable block (ram,0x000107842240) */

long * FUN_10783c638(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                    long *param_5,int param_6,uint param_7,uint param_8)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int *piVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  undefined8 in_stack_00000040;
  undefined1 auStack_58 [40];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  long *plStack_20;
  long *plStack_18;
  undefined8 *puStack_10;
  undefined8 uStack_8;
  
  func_0x0001078430f4();
  plVar12 = param_1;
  func_0x0001078383a4();
  if ((long *)*param_3 == plVar12) {
    uVar16 = 0;
    lVar13 = *plVar12;
    *(int *)(lVar13 + 0x50) = (int)*(char *)(lVar13 + 0x58);
    *(undefined4 *)(lVar13 + 0x54) = 0;
  }
  else {
    plVar1 = plVar12;
    lVar18 = 0;
    do {
      lVar15 = lVar18;
      plVar10 = plVar1;
      if (plVar10 == (long *)*param_3) {
        uVar16 = 0;
        lVar13 = *plVar12;
        *(int *)(lVar13 + 0x50) = (int)*(char *)(lVar13 + 0x58);
        *(undefined4 *)(lVar13 + 0x54) = 0;
        cVar4 = *(char *)(lVar13 + 0x59);
        goto LAB_10783c748;
      }
      lVar17 = plVar10[-1];
      cVar4 = *(char *)(lVar17 + 0x59);
      lVar13 = *plVar12;
      plVar1 = plVar10 + -1;
      lVar18 = lVar15 + 8;
    } while (cVar4 != *(char *)(lVar13 + 0x59));
    uVar16 = param_7;
    if (cVar4 != '\0') {
      uVar16 = param_8;
    }
    if (uVar16 == 0) {
      iVar19 = (int)*(char *)(lVar13 + 0x58);
    }
    else {
      uVar16 = *(uint *)(lVar17 + 0x50);
      cVar5 = *(char *)(lVar17 + 0x58);
      if ((int)(uVar16 * (int)cVar5) < 0) {
        uVar2 = -uVar16;
        if (-1 < (int)uVar16) {
          uVar2 = uVar16;
        }
        cVar6 = *(char *)(lVar13 + 0x58);
        iVar3 = 0;
        if (-1 < (int)cVar6 * (int)cVar5) {
          iVar3 = (int)cVar6;
        }
        iVar19 = (int)cVar6;
        if (1 < uVar2) {
          iVar19 = iVar3 + uVar16;
        }
      }
      else {
        iVar19 = 0;
        if (-1 < (int)*(char *)(lVar13 + 0x58) * (int)cVar5) {
          iVar19 = (int)*(char *)(lVar13 + 0x58);
        }
        iVar19 = iVar19 + uVar16;
      }
    }
    uVar16 = *(uint *)(lVar17 + 0x54);
    *(int *)(lVar13 + 0x50) = iVar19;
    *(uint *)(lVar13 + 0x54) = uVar16;
LAB_10783c748:
    uVar2 = param_8;
    if (cVar4 != '\0') {
      uVar2 = param_7;
    }
    if (uVar2 == 0) {
      for (; lVar15 != 0; lVar15 = lVar15 + -8) {
        uVar16 = (uint)(uVar16 == 0);
        *(uint *)(lVar13 + 0x54) = uVar16;
      }
    }
    else {
      for (lVar18 = 0; lVar15 != lVar18; lVar18 = lVar18 + 8) {
        uVar16 = uVar16 + (int)*(char *)(*(long *)((long)plVar10 + lVar18) + 0x58);
        *(uint *)(lVar13 + 0x54) = uVar16;
      }
    }
  }
  lVar18 = plVar12[1];
  *(undefined4 *)(lVar18 + 0x50) = *(undefined4 *)(lVar13 + 0x50);
  *(uint *)(lVar18 + 0x54) = uVar16;
  uVar16 = param_8;
  uVar2 = param_7;
  if (*(char *)((long)param_1 + 0x59) != '\0') {
    uVar16 = param_7;
    uVar2 = param_8;
  }
  if (uVar2 != 0) {
    if (uVar2 == 2) {
      iVar19 = (int)param_1[10];
    }
    else {
      if (uVar2 != 1) {
        if ((int)param_1[10] != -1) goto LAB_10783c864;
        goto LAB_10783c7e8;
      }
      iVar3 = (int)param_1[10];
      iVar19 = -iVar3;
      if (-1 < iVar3) {
        iVar19 = iVar3;
      }
    }
    if (iVar19 != 1) goto LAB_10783c864;
  }
LAB_10783c7e8:
  if (param_6 == 2) {
    if (*(char *)((long)param_1 + 0x59) == '\0') {
      if (param_8 < 2) goto LAB_10783c8b4;
      if (param_8 != 2) goto LAB_10783c8ec;
LAB_10783c82c:
      if (0 < *(int *)((long)param_1 + 0x54)) goto LAB_10783c864;
    }
    else if (param_7 < 2) {
LAB_10783c848:
      if (*(int *)((long)param_1 + 0x54) == 0) goto LAB_10783c864;
    }
    else {
      if (param_7 == 2) {
        iVar19 = *(int *)((long)param_1 + 0x54);
        goto joined_r0x00010783c8d0;
      }
LAB_10783c8d8:
      if (-1 < *(int *)((long)param_1 + 0x54)) goto LAB_10783c864;
    }
  }
  else if (param_6 == 1) {
    if (uVar16 < 2) {
LAB_10783c8b4:
      if (*(int *)((long)param_1 + 0x54) != 0) goto LAB_10783c864;
    }
    else {
      if (uVar16 == 2) goto LAB_10783c82c;
LAB_10783c8ec:
      if (*(int *)((long)param_1 + 0x54) < 0) goto LAB_10783c864;
    }
  }
  else if (param_6 == 0) {
    if (uVar16 < 2) goto LAB_10783c848;
    if (uVar16 != 2) goto LAB_10783c8d8;
    iVar19 = *(int *)((long)param_1 + 0x54);
joined_r0x00010783c8d0:
    if (iVar19 < 1) goto LAB_10783c864;
  }
  func_0x00010783ad30(lVar13,lVar18,param_3,*(undefined8 *)(lVar13 + 0x18),param_4);
  lVar13 = *plVar12;
LAB_10783c864:
  plVar1 = (long *)(*(long *)(lVar13 + 0x18) + 0xc);
  piVar9 = (int *)*param_5;
  uVar8 = param_5[1] - *param_5 >> 2;
  while (piVar7 = piVar9, uVar8 != 0) {
    uVar20 = uVar8 >> 1;
    piVar9 = piVar7 + uVar20 + 1;
    uVar8 = uVar8 + (uVar8 >> 1 ^ 0xffffffffffffffff);
    if (*(int *)plVar1 <= piVar7[uVar20]) {
      piVar9 = piVar7;
      uVar8 = uVar20;
    }
  }
  if (((int *)param_5[1] != piVar7) && (*piVar7 <= *(int *)plVar1)) {
    return param_5;
  }
  uStack_8 = 0x10783c874;
  plVar10 = param_5;
  puStack_30 = param_3;
  uStack_28 = param_4;
  plStack_20 = plVar12;
  plStack_18 = param_5;
  puStack_10 = &stack0x00000040;
  func_0x0001078425f8();
  plVar14 = (long *)plVar10[1];
  if (plVar14 < (long *)plVar10[2]) {
    if (param_5 == plVar14) {
      *(undefined4 *)plVar14 = *(undefined4 *)plVar1;
      plVar12[1] = (long)plVar14 + 4;
    }
    else {
      func_0x000107842758();
      func_0x0001078387bc();
      lVar13 = 4;
      if ((long *)plVar12[1] <= plVar1 || plVar1 < param_5) {
        lVar13 = 0;
      }
      *(undefined4 *)param_5 = *(undefined4 *)((long)plVar1 + lVar13);
    }
  }
  else {
    plVar11 = plVar12;
    func_0x0001006601e8(plVar12,((long)plVar14 - *plVar12 >> 2) + 1);
    func_0x000100161bec(auStack_58,plVar11,(long)param_5 - *plVar12 >> 2,plVar10 + 2);
    FUN_1078387fc(auStack_58,plVar1);
    func_0x0001078388c8(plVar12,auStack_58,param_5);
    func_0x0001078426b0();
    func_0x000100161cc4();
  }
  return param_5;
}



/* Entry: 10783d998; end: 10783d9c7;  */

void FUN_10783d998(void)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001078425f8();
  *unaff_x19 = 0;
  func_0x00010783db2c();
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19[1];
  return;
}



/* Entry: 10783e1a8; end: 10783e1db;  */

undefined8 FUN_10783e1a8(long param_1)

{
  if (NAN(*(double *)(param_1 + 0x10))) {
    func_0x00010783e16c();
  }
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10783ed28; end: 10783ed7b;  */

void FUN_10783ed28(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar2;
  undefined1 auStack_48 [8];
  long lStack_40;
  long lStack_38;
  long lStack_30;
  
  func_0x000107842edc();
  if ((bool)in_CY && !(bool)in_ZR) {
    if (param_2 >> 0x3d != 0) {
      func_0x00010783bfec();
      func_0x000107843250();
      func_0x00010066015c();
      func_0x00010784314c();
      if ((bool)in_CY) {
        func_0x0001078429c8();
        lVar1 = *unaff_x19;
        plVar2 = (long *)unaff_x19[1];
        if (param_1 != 0) {
          FUN_10783bff8();
        }
        func_0x0001078425a4((long)plVar2 + (param_1 - lVar1));
        func_0x00010783bfcc();
        func_0x000107842fe8();
      }
      else {
        plVar2 = unaff_x21 + 1;
        *unaff_x21 = unaff_x20;
      }
      unaff_x19[1] = (long)plVar2;
      return;
    }
    func_0x000107842f3c();
    FUN_10783bff8();
    lStack_40 = param_1 + unaff_x20;
    lStack_30 = param_1 + param_2 * 8;
    lStack_38 = lStack_40;
    func_0x000100660238();
    func_0x00010783bfcc();
    func_0x00010783c020(auStack_48);
  }
  return;
}



/* Entry: 10783f02c; end: 10783f16b;  */

void FUN_10783f02c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long lVar6;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *puVar7;
  undefined8 unaff_x30;
  
  if (param_3 == 0) {
    return;
  }
  func_0x0001078430f4();
  func_0x0001078422cc();
  if ((bool)in_ZR) {
    iVar4 = (int)unaff_x21[-1];
    func_0x000107843070();
    if (iVar4 == 0) {
      func_0x0001078426c8();
      uVar5 = unaff_x21[-1];
    }
    else {
      func_0x000107842d6c();
      uVar5 = extraout_x8;
    }
    unaff_x19[1] = uVar5;
  }
  else if (unaff_x23 == (undefined8 *)0x1) {
    func_0x0001078426c8();
  }
  else if ((long)unaff_x23 < 9) {
    uVar3 = unaff_x20 == unaff_x21;
    if (!(bool)uVar3) {
      lVar6 = 0;
      func_0x0001078426c8();
      while (func_0x000107842b14(), !(bool)uVar3) {
        func_0x000107842d5c();
        func_0x00010783efdc();
        if ((int)param_1 == 0) {
          *unaff_x24 = *unaff_x20;
        }
        else {
          func_0x000107842e0c();
          lVar2 = lVar6;
          while (puVar7 = unaff_x19, lVar2 != 0) {
            func_0x000107842854();
            func_0x00010783efdc();
            puVar7 = unaff_x26;
            if ((int)param_1 == 0) break;
            func_0x000107842e1c();
            lVar2 = unaff_x25;
          }
          *puVar7 = *unaff_x20;
          unaff_x26 = puVar7;
        }
        lVar6 = lVar6 + 8;
      }
    }
  }
  else {
    func_0x0001078421ec();
    func_0x00010783ee50();
    func_0x0001078422b4();
    func_0x00010783ee50();
    func_0x000107842c9c();
    for (; unaff_x20 != unaff_x22; unaff_x20 = (undefined8 *)((long)unaff_x20 + (long)puVar7)) {
      if (unaff_x23 == unaff_x21) goto LAB_10783f150;
      iVar4 = (int)*unaff_x23;
      func_0x000107843070();
      puVar7 = unaff_x24;
      puVar1 = unaff_x23;
      if (iVar4 == 0) {
        puVar7 = (undefined8 *)0x0;
        puVar1 = unaff_x20;
      }
      unaff_x23 = (undefined8 *)((long)unaff_x23 + (long)puVar7);
      puVar7 = (undefined8 *)0x0;
      if (iVar4 == 0) {
        puVar7 = unaff_x24;
      }
      func_0x000107842b70(puVar1);
    }
    while (unaff_x23 != unaff_x21) {
      func_0x000107842b88();
    }
  }
LAB_10783f158:
  func_0x000107842f84(unaff_x30);
  return;
LAB_10783f150:
  while (unaff_x20 != unaff_x22) {
    func_0x000107842b08();
  }
  goto LAB_10783f158;
}



/* Entry: 10783fb9c; end: 10783fc07;  */

void FUN_10783fb9c(ulong param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong unaff_x19;
  long unaff_x20;
  int iVar5;
  long *plVar6;
  
  func_0x0001078425f8();
  func_0x00010783e244();
  iVar5 = (int)param_1;
  if (unaff_x19 == 0) {
    if ((param_1 & 1) != 0) goto LAB_10783fbe4;
  }
  else {
    param_1 = unaff_x19;
    func_0x00010783e244();
    if (iVar5 == (int)param_1) {
LAB_10783fbe4:
      func_0x000107842698();
      puVar2 = &UNK_10f42b0a8;
      __ZNSt13runtime_errorC1EPKc();
      func_0x0001078422a0();
      func_0x000107843090();
      func_0x0001078429bc();
      func_0x000107842744();
      if (puVar2 != (undefined *)0x0) {
        param_3 = (undefined8 *)(puVar2 + 0x30);
      }
      plVar6 = (long *)*param_3;
      plVar1 = (long *)param_3[1];
      do {
        if (plVar6 == plVar1) {
          return;
        }
        if (*plVar6 != 0) {
          plVar3 = (long *)*param_4;
          do {
            if (plVar3 == (long *)param_4[1]) {
              func_0x00010784274c();
              func_0x00010783fd3c();
              if ((param_1 & 1) != 0) {
                func_0x00010784274c();
                func_0x00010783fff0();
              }
              break;
            }
            lVar4 = *plVar3;
            plVar3 = plVar3 + 1;
          } while (lVar4 != *plVar6);
        }
        plVar6 = plVar6 + 1;
      } while( true );
    }
  }
  func_0x000107842af4();
  *(ulong *)(unaff_x20 + 0x28) = unaff_x19;
  return;
}



/* Entry: 107840328; end: 10784034f;  */

void FUN_107840328(void)

{
  func_0x00010783e790();
  func_0x0001078428bc();
  func_0x000107842d9c();
  return;
}



/* Entry: 107840950; end: 107840afb;  */

void FUN_107840950(ulong param_1)

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
            func_0x0001078407c8();
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
          func_0x0001078407c8();
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
        func_0x000107843080();
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
          func_0x0001078407c8();
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
          func_0x0001078407c8();
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
      FUN_107840950();
      func_0x000107842dbc();
      if (unaff_x24 == (ulong *)0x0) {
        return;
      }
    }
    func_0x0001078424fc();
    FUN_107840950();
    in_stack_00000010 = unaff_x21;
  } while( true );
}



/* Entry: 1078410c0; end: 1078410e7;  */

void FUN_1078410c0(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000df370(&uStack_18,8);
  return;
}



/* Entry: 1078419a8; end: 1078419bb;  */

void FUN_1078419a8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107841bc4; end: 107841bf3;  */

void FUN_107841bc4(void)

{
  undefined1 in_CY;
  
  func_0x000107842998();
  if ((bool)in_CY) {
    func_0x000107841bf8();
  }
  else {
    func_0x000107841bf4();
  }
  func_0x00010784321c();
  return;
}



/* Entry: 107841d1c; end: 107841e1f;  */

void FUN_107841d1c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puVar1 = param_2;
  uStack_50 = param_1;
  puStack_30 = param_4;
  while (puStack_28 = param_4, puVar1 != param_3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    uVar2 = *puVar1;
    param_4[1] = puVar1[1];
    *param_4 = uVar2;
    param_4[2] = puVar1[2];
    func_0x000107842dec();
    param_4 = param_4 + 3;
    puVar1 = extraout_x8;
  }
  uStack_38 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    func_0x0001072977d0(param_2);
  }
  func_0x000107841db0(&uStack_50);
  return;
}



/* Entry: 107841fa4; end: 10784207f;  */

uint FUN_107841fa4(double param_1,double param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = *(double *)*param_3;
  lVar1 = (long)(((param_1 + 180.0) * dVar4) / 360.0 - *(double *)param_3[1]);
  if (lVar1 < -0x7fff) {
    lVar1 = -0x8000;
  }
  if (0x7ffe < lVar1) {
    lVar1 = 0x7fff;
  }
  dVar3 = ((param_2 + 90.0) * 3.141592653589793) / 360.0;
  _tan();
  _log();
  lVar2 = (long)(((180.0 - (dVar3 * 180.0) / 3.141592653589793) * dVar4) / 360.0 -
                *(double *)param_3[2]);
  if (lVar2 < -0x7fff) {
    lVar2 = -0x8000;
  }
  if (0x7ffe < lVar2) {
    lVar2 = 0x7fff;
  }
  return (uint)lVar1 & 0xffff | (int)lVar2 << 0x10;
}



/* Entry: 1078438d0; end: 107844f17;  */

void FUN_1078438d0(long param_1)

{
  long ******pppppplVar1;
  long ******pppppplVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined ******ppppppuVar6;
  undefined *****pppppuVar7;
  undefined *****pppppuVar8;
  undefined *****pppppuVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  undefined ******ppppppuVar14;
  long lVar15;
  long ******pppppplVar16;
  long *plVar17;
  long ****pppplVar18;
  undefined ******ppppppuVar19;
  long lVar20;
  undefined8 extraout_x8;
  byte *pbVar21;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  code *extraout_x8_02;
  ulong extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  ulong uVar22;
  undefined *******pppppppuVar23;
  undefined *******pppppppuVar24;
  undefined *******pppppppuVar25;
  ulong uVar26;
  undefined *******pppppppuVar27;
  long *****ppppplVar28;
  undefined *******pppppppuVar29;
  undefined *******pppppppuVar30;
  undefined *******pppppppuVar31;
  long unaff_x19;
  ulong uVar32;
  long ******pppppplVar33;
  long *****ppppplVar34;
  long *****ppppplVar35;
  undefined8 *puVar36;
  undefined *******pppppppuVar37;
  undefined *******unaff_x25;
  long ****pppplVar38;
  long ******unaff_x27;
  long *plVar39;
  undefined4 uVar40;
  undefined *****pppppuStack_880;
  long lStack_878;
  undefined *****pppppuStack_870;
  undefined *****pppppuStack_868;
  undefined *****pppppuStack_860;
  undefined *****pppppuStack_850;
  long lStack_848;
  long ****pppplStack_838;
  long ***ppplStack_830;
  undefined8 uStack_828;
  long *plStack_820;
  long alStack_818 [5];
  long *****ppppplStack_7f0;
  undefined ******ppppppuStack_7e8;
  long *plStack_7e0;
  undefined8 uStack_7d8;
  undefined1 auStack_7d0 [40];
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  long *plStack_790;
  undefined8 uStack_788;
  undefined ******ppppppuStack_778;
  undefined ******ppppppuStack_770;
  undefined ******ppppppuStack_768;
  undefined1 auStack_760 [24];
  undefined *****pppppuStack_748;
  undefined *****pppppuStack_740;
  undefined *****pppppuStack_738;
  undefined *****pppppuStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined *****pppppuStack_700;
  undefined ****ppppuStack_6f8;
  undefined8 uStack_6f0;
  undefined *****pppppuStack_6e8;
  undefined ****ppppuStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined4 uStack_6b0;
  undefined1 auStack_6a8 [56];
  undefined1 auStack_670 [8];
  undefined8 uStack_668;
  long *****ppppplStack_638;
  undefined *puStack_630;
  undefined ******ppppppuStack_620;
  undefined8 uStack_610;
  undefined1 auStack_600 [64];
  undefined ******ppppppuStack_5c0;
  undefined ******ppppppuStack_5b8;
  long *****ppppplStack_5b0;
  long **pplStack_5a8;
  undefined **ppuStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined4 uStack_580;
  undefined4 uStack_578;
  undefined1 uStack_574;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 auStack_560 [7];
  undefined *****pppppuStack_528;
  undefined1 *puStack_520;
  undefined *****pppppuStack_518;
  undefined8 uStack_510;
  undefined *****pppppuStack_4e0;
  undefined1 *puStack_4d8;
  undefined *****pppppuStack_4c8;
  long *plStack_430;
  long lStack_428;
  long *****ppppplStack_3f0;
  undefined ******ppppppuStack_3e8;
  undefined ******ppppppuStack_3e0;
  undefined8 uStack_3d8;
  undefined *****pppppuStack_3d0;
  undefined1 *puStack_3c8;
  undefined1 *puStack_3c0;
  undefined8 uStack_3b8;
  undefined1 *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  undefined *****pppppuStack_2f8;
  undefined1 auStack_258 [56];
  undefined *****pppppuStack_220;
  undefined *****pppppuStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined ******ppppppuStack_208;
  undefined1 auStack_200 [56];
  undefined1 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined1 auStack_1b0 [56];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [256];
  undefined8 uStack_70;
  
  func_0x000107847e84();
  bVar11 = *(char *)(param_1 + 0x110) == '\x01';
  uVar12 = 0;
  uStack_70 = extraout_x8;
  if (bVar11) {
    func_0x000107847ea8();
    uVar12 = 0;
    if (bVar11) {
      ppppppuStack_5c0 = (undefined ******)CONCAT44(ppppppuStack_5c0._4_4_,0x2c);
      pplStack_5a8 = (long **)((ulong)pplStack_5a8 & 0xffffffff00000000);
      uStack_588 = 0;
      uStack_590 = 0;
      uStack_598 = 0;
      ppuStack_5a0 = &PTR_DAT_110996720;
      uStack_580 = 0x2c;
      uStack_578 = 0;
      uStack_574 = 1;
      auStack_560[0] = 0;
      uStack_570 = 0;
      uStack_568 = 0;
      func_0x00010743cc34(&ppppplStack_3f0,&ppppppuStack_5c0,7);
      func_0x00010743d7bc(auStack_178,&ppppplStack_3f0);
      func_0x000107288cd8(&ppppplStack_3f0);
      func_0x000107262330(&ppppppuStack_5c0);
      func_0x000107847d30(auStack_1b0);
      func_0x000107847dec();
      func_0x000107371bc4(auStack_170);
      func_0x000104c2f714(auStack_1b0);
      pbVar21 = (byte *)(unaff_x19 + 0x30);
      func_0x000107847ec4();
      func_0x0001072df7b4(auStack_170);
      uStack_6c8 = 0;
      uStack_6d0 = 0;
      uStack_6b8 = 0;
      uStack_6c0 = 0;
      uStack_6b0 = 0x3f800000;
      pppppplVar1 = (long ******)(unaff_x19 + 0xa0);
      uVar32 = *(ulong *)(unaff_x19 + 0xb0);
      if (uVar32 != 0) {
        func_0x000107846e98(pppppplVar1);
        func_0x00010ae6cbe8(pppppplVar1,&UNK_1109ac558,uVar32 < 0x80);
      }
      FUN_107846ddc(unaff_x19 + 0x118);
      if (*(long **)(unaff_x19 + 0x108) == (long *)0x0) {
        ppppplStack_638 = (long *****)0x0;
      }
      else {
        (**(code **)(**(long **)(unaff_x19 + 0x108) + 0x10))(&ppppplStack_638);
      }
      ppppppuVar14 = (undefined ******)0x170;
      __Znwm();
      ppppplStack_3f0 = ppppplStack_638;
      ppppplStack_638 = (long *****)0x0;
      func_0x0001073c0160();
      if ((undefined *******)ppppplStack_3f0 != (undefined *******)0x0) {
        ppppppuStack_5c0 = ppppppuVar14;
        func_0x000107847c68();
        ppppppuVar14 = ppppppuStack_5c0;
      }
      pppppplVar2 = (long ******)(unaff_x19 + 0x98);
      ppppppuStack_5c0 = (undefined ******)0x0;
      func_0x000107847490(pppppplVar2,ppppppuVar14);
      pppppppuVar25 = &ppppppuStack_5c0;
      func_0x00010784746c();
      func_0x000107848168();
      if (pppppppuVar25 != (undefined *******)0x0) {
        func_0x000107847c68();
      }
      uStack_6d8 = 0;
      pppppuStack_6e8 = &ppppuStack_6e0;
      ppppuStack_6e0 = (undefined ****)0x0;
      pppppuStack_700 = &ppppuStack_6f8;
      ppppuStack_6f8 = (undefined ****)0x0;
      uStack_6f0 = 0;
      uStack_728 = 0;
      pppppuStack_730 = (undefined *****)0x0;
      uStack_718 = 0;
      uStack_720 = 0;
      uStack_710 = 0x3f800000;
      pppppuStack_748 = (undefined *****)0x0;
      pppppuStack_740 = (undefined *****)0x0;
      pppppuStack_738 = (undefined *****)0x0;
      func_0x00010745f750(auStack_760,*(undefined8 *)(unaff_x19 + 0x260));
      ppppplStack_638 = (long *****)&PTR_DAT_1109e1478;
      puStack_630 = &UNK_107460bf8;
      ppppppuStack_620 = (undefined ******)&ppppplStack_638;
      ppppppuStack_5b8 = (undefined ******)0x0;
      ppppppuStack_5c0 = (undefined ******)0x0;
      pplStack_5a8 = (long **)0x0;
      ppppplStack_5b0 = (long *****)0x0;
      ppuStack_5a0 = (undefined **)CONCAT44(ppuStack_5a0._4_4_,0x3f800000);
      plVar17 = *(long **)(unaff_x19 + 0xf0);
      for (plVar39 = *(long **)(unaff_x19 + 0xe8); plVar39 != plVar17; plVar39 = plVar39 + 2) {
        pppppuStack_220 = (undefined *****)*plVar39;
        pppppuStack_218 = (undefined *****)plVar39[1];
        if ((long *****)pppppuStack_218 != (long *****)0x0) {
          ppppplVar34 = (long *****)(pppppuStack_218 + 1);
          do {
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppplVar34,0x10);
            if (bVar11) {
              *ppppplVar34 = (long ****)((long)*ppppplVar34 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if ((undefined *******)ppppppuStack_620 == (undefined *******)0x0) {
          func_0x000104bfeb48();
          goto LAB_107844bdc;
        }
        pppppppuVar27 = (undefined *******)ppppppuStack_620;
        (*(code *)(*ppppppuStack_620)[6])(ppppppuStack_620,pppppuStack_220[1]);
        pppppppuVar25 = (undefined *******)ppppppuStack_5b8;
        if ((undefined *******)ppppppuStack_5b8 != (undefined *******)0x0) {
          uVar32 = (long)ppppppuStack_5b8 - 1;
          if (((ulong)ppppppuStack_5b8 & uVar32) == 0) {
            unaff_x25 = (undefined *******)(uVar32 & (ulong)pppppppuVar27);
          }
          else {
            unaff_x25 = pppppppuVar27;
            if (ppppppuStack_5b8 <= pppppppuVar27) {
              uVar26 = 0;
              if ((undefined *******)ppppppuStack_5b8 != (undefined *******)0x0) {
                uVar26 = (ulong)pppppppuVar27 / (ulong)ppppppuStack_5b8;
              }
              unaff_x25 = (undefined *******)((long)pppppppuVar27 - uVar26 * (long)ppppppuStack_5b8)
              ;
            }
          }
          pppppppuVar37 = (undefined *******)ppppppuStack_5c0[(long)unaff_x25];
          if (pppppppuVar37 != (undefined *******)0x0) {
            do {
              while( true ) {
                pppppppuVar37 = (undefined *******)*pppppppuVar37;
                if (pppppppuVar37 == (undefined *******)0x0) goto LAB_107843bdc;
                pppppppuVar23 = (undefined *******)pppppppuVar37[1];
                if (pppppppuVar23 != pppppppuVar27) break;
                if ((undefined *******)pppppppuVar37[2] == pppppppuVar27) goto LAB_107843e80;
              }
              if (((ulong)ppppppuStack_5b8 & uVar32) == 0) {
                pppppppuVar23 = (undefined *******)((ulong)pppppppuVar23 & uVar32);
              }
              else if (ppppppuStack_5b8 <= pppppppuVar23) {
                uVar26 = 0;
                if ((undefined *******)ppppppuStack_5b8 != (undefined *******)0x0) {
                  uVar26 = (ulong)pppppppuVar23 / (ulong)ppppppuStack_5b8;
                }
                pppppppuVar23 =
                     (undefined *******)((long)pppppppuVar23 - uVar26 * (long)ppppppuStack_5b8);
              }
            } while (pppppppuVar23 == unaff_x25);
          }
        }
LAB_107843bdc:
        pppppppuVar37 = (undefined *******)0x30;
        __Znwm();
        ppppppuStack_3e0 = (undefined ******)0x1;
        *pppppppuVar37 = (undefined ******)0x0;
        pppppppuVar37[1] = (undefined ******)pppppppuVar27;
        pppppppuVar37[2] = (undefined ******)pppppppuVar27;
        pppppppuVar37[3] = (undefined ******)0x0;
        pppppppuVar37[4] = (undefined ******)0x0;
        pppppppuVar37[5] = (undefined ******)0x0;
        ppppppuStack_3e8 = (undefined ******)&ppppplStack_5b0;
        if ((pppppppuVar25 == (undefined *******)0x0) ||
           (ppuStack_5a0._0_4_ * (float)pppppppuVar25 < (float)((long)pplStack_5a8 + 1))) {
          uVar32 = 1;
          if ((undefined *******)0x2 < pppppppuVar25) {
            uVar32 = (ulong)(((ulong)pppppppuVar25 & (long)pppppppuVar25 - 1U) != 0);
          }
          pppppppuVar23 = (undefined *******)(uVar32 | (long)pppppppuVar25 << 1);
          pppppppuVar24 =
               (undefined *******)(long)((float)((long)pplStack_5a8 + 1) / ppuStack_5a0._0_4_);
          if (pppppppuVar23 <= pppppppuVar24) {
            pppppppuVar23 = pppppppuVar24;
          }
          ppppplStack_3f0 = (long *****)pppppppuVar37;
          pppppppuVar24 = pppppppuVar25;
          if ((long)pppppppuVar23 - 1U == 0) {
            pppppppuVar23 = (undefined *******)0x2;
          }
          else if (((ulong)pppppppuVar23 & (long)pppppppuVar23 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            pppppppuVar24 = (undefined *******)ppppppuStack_5b8;
          }
          if (pppppppuVar24 < pppppppuVar23) {
LAB_107843c80:
            if ((ulong)pppppppuVar23 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto LAB_107844bdc;
            }
            lVar15 = (long)pppppppuVar23 << 3;
            __Znwm(lVar15);
            func_0x000107846ed4(&ppppppuStack_5c0,lVar15);
            for (pppppppuVar25 = (undefined *******)0x0; pppppppuVar23 != pppppppuVar25;
                pppppppuVar25 = (undefined *******)((long)pppppppuVar25 + 1)) {
              ppppppuStack_5c0[(long)pppppppuVar25] = (undefined *****)0x0;
            }
            pppppppuVar25 = pppppppuVar23;
            ppppppuStack_5b8 = (undefined ******)pppppppuVar23;
            if ((undefined *******)ppppplStack_5b0 != (undefined *******)0x0) {
              pppppppuVar24 = (undefined *******)ppppplStack_5b0[1];
              uVar26 = (long)pppppppuVar23 - 1;
              uVar32 = 0;
              if (pppppppuVar23 != (undefined *******)0x0) {
                uVar32 = (ulong)pppppppuVar24 / (ulong)pppppppuVar23;
              }
              pppppppuVar30 = pppppppuVar24;
              if (pppppppuVar23 <= pppppppuVar24) {
                pppppppuVar30 =
                     (undefined *******)((long)pppppppuVar24 - uVar32 * (long)pppppppuVar23);
              }
              if (((ulong)pppppppuVar23 & uVar26) == 0) {
                pppppppuVar30 = (undefined *******)((ulong)pppppppuVar24 & uVar26);
              }
              ppppppuStack_5c0[(long)pppppppuVar30] = (undefined *****)&ppppplStack_5b0;
              pppppppuVar24 = (undefined *******)ppppplStack_5b0;
              while (pppppppuVar29 = pppppppuVar24,
                    pppppppuVar24 = (undefined *******)*pppppppuVar29,
                    pppppppuVar24 != (undefined *******)0x0) {
                pppppppuVar31 = (undefined *******)pppppppuVar24[1];
                if (((ulong)pppppppuVar23 & uVar26) == 0) {
                  pppppppuVar31 = (undefined *******)((ulong)pppppppuVar31 & uVar26);
                }
                else if (pppppppuVar23 <= pppppppuVar31) {
                  uVar32 = 0;
                  if (pppppppuVar23 != (undefined *******)0x0) {
                    uVar32 = (ulong)pppppppuVar31 / (ulong)pppppppuVar23;
                  }
                  pppppppuVar31 =
                       (undefined *******)((long)pppppppuVar31 - uVar32 * (long)pppppppuVar23);
                }
                if (pppppppuVar31 != pppppppuVar30) {
                  if ((undefined ******)ppppppuStack_5c0[(long)pppppppuVar31] ==
                      (undefined ******)0x0) {
                    ppppppuStack_5c0[(long)pppppppuVar31] = (undefined *****)pppppppuVar29;
                    pppppppuVar30 = pppppppuVar31;
                  }
                  else {
                    *pppppppuVar29 = *pppppppuVar24;
                    *pppppppuVar24 = (undefined ******)*ppppppuStack_5c0[(long)pppppppuVar31];
                    *ppppppuStack_5c0[(long)pppppppuVar31] = (undefined ****)pppppppuVar24;
                    pppppppuVar24 = pppppppuVar29;
                  }
                }
              }
            }
          }
          else {
            pppppppuVar25 = pppppppuVar24;
            if (pppppppuVar23 < pppppppuVar24) {
              pppppppuVar25 = (undefined *******)(long)((float)pplStack_5a8 / ppuStack_5a0._0_4_);
              if ((pppppppuVar24 < (undefined *******)0x3) ||
                 (((ulong)pppppppuVar24 & (long)pppppppuVar24 - 1U) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if ((undefined *******)0x1 < pppppppuVar25) {
                pppppppuVar25 =
                     (undefined *******)(1L << (-LZCOUNT((long)pppppppuVar25 + -1) & 0x3fU));
              }
              if (pppppppuVar23 <= pppppppuVar25) {
                pppppppuVar23 = pppppppuVar25;
              }
              pppppppuVar25 = (undefined *******)ppppppuStack_5b8;
              if (pppppppuVar23 < pppppppuVar24) {
                if (pppppppuVar23 != (undefined *******)0x0) goto LAB_107843c80;
                func_0x000107846ed4(&ppppppuStack_5c0,0);
                ppppppuStack_5b8 = (undefined ******)0x0;
                pppppppuVar25 = (undefined *******)0x0;
              }
            }
          }
          if (((ulong)pppppppuVar25 & (long)pppppppuVar25 - 1U) == 0) {
            unaff_x25 = (undefined *******)((long)pppppppuVar25 - 1U & (ulong)pppppppuVar27);
          }
          else {
            unaff_x25 = pppppppuVar27;
            if (pppppppuVar25 <= pppppppuVar27) {
              uVar32 = 0;
              if (pppppppuVar25 != (undefined *******)0x0) {
                uVar32 = (ulong)pppppppuVar27 / (ulong)pppppppuVar25;
              }
              unaff_x25 = (undefined *******)((long)pppppppuVar27 - uVar32 * (long)pppppppuVar25);
            }
          }
        }
        ppppppuVar14 = (undefined ******)ppppppuStack_5c0[(long)unaff_x25];
        if (ppppppuVar14 == (undefined ******)0x0) {
          *pppppppuVar37 = (undefined ******)ppppplStack_5b0;
          ppppppuStack_5c0[(long)unaff_x25] = (undefined *****)&ppppplStack_5b0;
          ppppplStack_5b0 = (long *****)pppppppuVar37;
          if (*pppppppuVar37 != (undefined ******)0x0) {
            pppppppuVar27 = (undefined *******)(*pppppppuVar37)[1];
            if (((ulong)pppppppuVar25 & (long)pppppppuVar25 - 1U) == 0) {
              pppppppuVar27 = (undefined *******)((ulong)pppppppuVar27 & (long)pppppppuVar25 - 1U);
            }
            else if (pppppppuVar25 <= pppppppuVar27) {
              uVar32 = 0;
              if (pppppppuVar25 != (undefined *******)0x0) {
                uVar32 = (ulong)pppppppuVar27 / (ulong)pppppppuVar25;
              }
              pppppppuVar27 =
                   (undefined *******)((long)pppppppuVar27 - uVar32 * (long)pppppppuVar25);
            }
            ppppppuStack_5c0[(long)pppppppuVar27] = (undefined *****)pppppppuVar37;
          }
        }
        else {
          *pppppppuVar37 = (undefined ******)*ppppppuVar14;
          *ppppppuVar14 = (undefined *****)pppppppuVar37;
        }
        ppppplStack_3f0 = (long *****)0x0;
        pplStack_5a8 = (long **)((long)pplStack_5a8 + 1);
        func_0x000107846eec(&ppppplStack_3f0);
LAB_107843e80:
        unaff_x25 = pppppppuVar37 + 5;
        ppppppuVar14 = pppppppuVar37[4];
        if (ppppppuVar14 < *unaff_x25) {
          unaff_x27 = (long ******)(ppppppuVar14 + 2);
          ppppppuVar14[1] = pppppuStack_218;
          *ppppppuVar14 = pppppuStack_220;
          pppppuStack_218 = (undefined *****)0x0;
          pppppuStack_220 = (undefined *****)0x0;
        }
        else {
          pppppppuVar27 = pppppppuVar37 + 3;
          pppppppuVar25 = pppppppuVar27;
          func_0x0001074f7408(pppppppuVar27,((long)ppppppuVar14 - (long)*pppppppuVar27 >> 4) + 1);
          func_0x0001074f5cd0(&ppppplStack_3f0,pppppppuVar25,
                              (long)pppppppuVar37[4] - (long)pppppppuVar37[3] >> 4,unaff_x25);
          ppppppuStack_3e0[1] = pppppuStack_218;
          *ppppppuStack_3e0 = pppppuStack_220;
          pppppuStack_218 = (undefined *****)0x0;
          pppppuStack_220 = (undefined *****)0x0;
          ppppppuStack_3e0 = ppppppuStack_3e0 + 2;
          func_0x0001074f5c98(pppppppuVar27,&ppppplStack_3f0);
          unaff_x27 = (long ******)pppppppuVar37[4];
          func_0x0001074f5e6c(&ppppplStack_3f0);
        }
        pppppppuVar37[4] = (undefined ******)unaff_x27;
        func_0x0001073ad37c(&pppppuStack_220);
      }
      ppppppuStack_778 = (undefined ******)0x0;
      ppppppuStack_770 = (undefined ******)0x0;
      ppppppuStack_768 = (undefined ******)0x0;
      pppppppuVar25 = (undefined *******)ppppplStack_5b0;
      if (pplStack_5a8 != (long **)0x0) {
        if ((long **)0xaaaaaaaaaaaaaaa < pplStack_5a8) goto LAB_107844bc8;
        FUN_107846f38(&ppppplStack_3f0,pplStack_5a8,0,&ppppppuStack_768);
        pppppplVar33 = (long ******)
                       (ppppppuStack_3e8 +
                       (((long)ppppppuStack_770 - (long)ppppppuStack_778) / -0x18) * 3);
        _memcpy(pppppplVar33);
        ppppppuVar14 = ppppppuStack_778;
        ppppppuStack_768 = (undefined ******)uStack_3d8;
        ppppppuStack_770 = ppppppuStack_3e0;
        ppppppuStack_778 = (undefined ******)pppppplVar33;
        func_0x000107847e54(ppppppuVar14);
        pppppppuVar25 = (undefined *******)ppppplStack_5b0;
      }
      for (; pppppppuVar25 != (undefined *******)0x0;
          pppppppuVar25 = (undefined *******)*pppppppuVar25) {
        if (ppppppuStack_770 < ppppppuStack_768) {
          *ppppppuStack_770 = (undefined *****)0x0;
          ppppppuStack_770[1] = (undefined *****)0x0;
          ppppppuStack_770[2] = (undefined *****)0x0;
          func_0x000107847ee8();
        }
        else {
          lVar15 = ((long)ppppppuStack_770 - (long)ppppppuStack_778) / 0x18;
          uVar32 = lVar15 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar32) {
            func_0x000107846f2c();
            goto LAB_107844bdc;
          }
          uVar22 = ((long)ppppppuStack_768 - (long)ppppppuStack_778) / 0x18;
          uVar26 = uVar22 * 2;
          if (uVar26 < uVar32 || uVar26 - uVar32 == 0) {
            uVar26 = uVar32;
          }
          if (0x555555555555554 < uVar22) {
            uVar26 = 0xaaaaaaaaaaaaaaa;
          }
          FUN_107846f38(&ppppplStack_3f0,uVar26,lVar15,&ppppppuStack_768);
          ppppppuStack_3e0[1] = (undefined *****)0x0;
          ppppppuStack_3e0[2] = (undefined *****)0x0;
          *ppppppuStack_3e0 = (undefined *****)0x0;
          func_0x000107847ee8();
          pppppplVar33 = (long ******)
                         (ppppppuStack_3e8 +
                         (((long)ppppppuStack_770 - (long)ppppppuStack_778) / -0x18) * 3);
          _memcpy(pppppplVar33);
          ppppppuVar14 = ppppppuStack_778;
          ppppppuStack_768 = (undefined ******)uStack_3d8;
          ppppppuStack_778 = (undefined ******)pppppplVar33;
          ppppppuStack_770 = (undefined ******)unaff_x27;
          func_0x000107847e54(ppppppuVar14);
        }
        ppppppuStack_770 = (undefined ******)unaff_x27;
      }
      func_0x000107846ff0(&ppppppuStack_5c0);
      FUN_1078470e8(&ppppplStack_638);
      ppppppuVar6 = ppppppuStack_770;
      ppppppuVar14 = (undefined ******)(unaff_x19 + 0x34);
      pppppplVar33 = (long ******)ppppppuStack_778;
      while( true ) {
        uVar12 = pppppplVar33 == (long ******)ppppppuVar6;
        if ((bool)uVar12) break;
        func_0x000107847fd4();
        if ((extraout_x8_00 & 1) != 0) {
LAB_10784499c:
          func_0x000107847f88();
          goto LAB_107844b48;
        }
        if (*(long *)(unaff_x19 + 0x108) != 0) {
          pppppplVar16 = pppppplVar33;
          func_0x0001073fe734(pppppplVar33,0);
          pppplVar38 = (*pppppplVar16)[1];
          pppppuStack_218 = *(undefined ******)(unaff_x19 + 0x38);
          pppppuStack_220 = *(undefined ******)pbVar21;
          uStack_210 = *(undefined4 *)(unaff_x19 + 0x80);
          uStack_20c = *(undefined4 *)(unaff_x19 + 0x84);
          func_0x000107848018(*pppplVar38);
          ppppppuStack_208 = (undefined ******)pppppplVar16;
          func_0x000107847d30(auStack_200);
          uStack_1c0 = *(undefined8 *)(unaff_x19 + 0x90);
          uStack_1b8 = *(undefined1 *)(unaff_x19 + 0x88);
          puStack_1c8 = auStack_760;
          (**(code **)(**(long **)(unaff_x19 + 0x108) + 0x18))
                    (&plStack_790,*(long **)(unaff_x19 + 0x108),pppplVar38 + 0xf);
          if (plStack_790 == (long *)0x0) {
            func_0x0001078480f0();
            func_0x000107848004();
          }
          else {
            uStack_7a0 = 0;
            uStack_798 = 0;
            uStack_7a8 = 0;
            func_0x0001072dd514(&uStack_7a8,(long)pppppplVar33[1] - (long)*pppppplVar33 >> 4);
            ppppplVar35 = pppppplVar33[1];
            for (ppppplVar34 = *pppppplVar33; ppppplVar34 != ppppplVar35;
                ppppplVar34 = ppppplVar34 + 2) {
              func_0x0001072d17f4(&uStack_7a8,(*ppppplVar34)[1] + 1);
            }
            ppppplVar34 = *pppppplVar2;
            func_0x000104c2fe00(&ppppplStack_3f0,pppplVar38 + 1);
            func_0x0001073c1628(ppppplVar34,&ppppplStack_3f0,&uStack_7a8);
            func_0x0001078480a0();
            func_0x000104c2fe00(auStack_258,pppplVar38 + 0xf);
            func_0x00010750a49c(&ppppplStack_3f0,*(undefined8 *)(unaff_x19 + 0x248));
            pppppplVar16 = &ppppplStack_3f0;
            FUN_10786a0bc(pppppplVar16,auStack_258);
            func_0x0001074f80c0(auStack_7d0,pppppplVar16);
            pppppplVar16 = &ppppplStack_3f0;
            func_0x0001073e0338();
            func_0x000107848018(*pppplVar38);
            if (*(int *)((long)pppppplVar16 + 0xc) == 0) {
              func_0x000107899e5c();
              ppppppuStack_3e8 = &pppppuStack_6e8;
              ppppppuStack_3e0 = &pppppuStack_700;
              uStack_3d8 = (long ******)&pppppuStack_730;
              puStack_3c8 = *(undefined1 **)(unaff_x19 + 0x260);
              pppppuStack_3d0 = (undefined *****)&pppppuStack_748;
              uStack_3b8 = *(undefined8 *)(unaff_x19 + 0x248);
              uStack_3a8 = *(undefined8 *)(unaff_x19 + 0x268);
              puStack_3b0 = auStack_7d0;
              uStack_3a0 = *(undefined8 *)(unaff_x19 + 0x2b0);
              uStack_390 = *(undefined8 *)(unaff_x19 + 0x2d0);
              uStack_7d8 = uStack_788;
              plStack_7e0 = plStack_790;
              plStack_790 = (long *)0x0;
              uStack_788 = 0;
              ppppplStack_3f0 = (long *****)&pppppuStack_220;
              puStack_3c0 = auStack_760;
              lStack_398 = unaff_x19 + 0x228;
              func_0x0001073e2828(&ppppplStack_638);
              func_0x000107331000(&plStack_7e0);
              pppppppuVar25 = (undefined *******)ppppplStack_638;
              (*(code *)(*ppppplStack_638)[6])();
              ppppplVar34 = ppppplStack_638;
              if ((int)pppppppuVar25 == 0) {
                ppppppuStack_5b8 = (undefined ******)0x0;
                ppppplStack_5b0 = (long *****)0x0;
                ppppplStack_3f0 = (long *****)&ppppppuStack_5c0;
                uStack_3d8._0_2_ =
                     CONCAT11(*(undefined1 *)(unaff_x19 + 0x2b8),*(undefined1 *)(unaff_x19 + 0x2b9))
                ;
                uStack_3b8 = *(undefined8 *)(unaff_x19 + 0x278);
                puStack_3c0 = auStack_7d0;
                ppppppuStack_5c0 = (undefined ******)&ppppppuStack_5b8;
                ppppppuStack_3e8 = (undefined ******)pppppplVar2;
                ppppppuStack_3e0 = (undefined ******)pppppplVar1;
                pppppuStack_3d0 = (undefined *****)ppppppuVar14;
                puStack_3c8 = auStack_760;
                (*(code *)(*ppppplStack_638)[3])(ppppplStack_638,&ppppplStack_3f0);
                pppppppuVar25 = &ppppppuStack_5c0;
                func_0x000107408ca0();
              }
              else {
                puVar4 = *(undefined8 **)(unaff_x19 + 0x120);
                if (puVar4 < *(undefined8 **)(unaff_x19 + 0x128)) {
                  ppppplStack_638 = (long *****)0x0;
                  puVar36 = puVar4 + 1;
                  *puVar4 = ppppplVar34;
                }
                else {
                  pppppppuVar27 = *(undefined ********)(unaff_x19 + 0x118);
                  lVar15 = (long)puVar4 - (long)pppppppuVar27;
                  uVar32 = (lVar15 >> 3) + 1;
                  if (uVar32 >> 0x3d != 0) {
                    func_0x000107847958();
                    goto LAB_107844bdc;
                  }
                  uVar22 = (long)*(undefined8 **)(unaff_x19 + 0x128) - (long)pppppppuVar27;
                  uVar26 = (long)uVar22 >> 2;
                  if (uVar26 <= uVar32) {
                    uVar26 = uVar32;
                  }
                  if (0x7ffffffffffffff7 < uVar22) {
                    uVar26 = 0x1fffffffffffffff;
                  }
                  if (uVar26 == 0) {
                    lVar20 = 0;
                  }
                  else {
                    if (uVar26 >> 0x3d != 0) {
                      func_0x000104bd35f4();
                      goto LAB_107844bdc;
                    }
                    lVar20 = uVar26 << 3;
                    __Znwm();
                  }
                  ppppplVar34 = ppppplStack_638;
                  puVar4 = (undefined8 *)(lVar20 + lVar15);
                  ppppplStack_638 = (long *****)0x0;
                  pppppppuVar37 = (undefined *******)(puVar4 + -(lVar15 >> 3));
                  puVar36 = puVar4 + 1;
                  *puVar4 = ppppplVar34;
                  pppppppuVar25 = pppppppuVar37;
                  _memcpy(pppppppuVar37,pppppppuVar27,lVar15);
                  *(undefined ********)(unaff_x19 + 0x118) = pppppppuVar37;
                  *(undefined8 **)(unaff_x19 + 0x120) = puVar36;
                  *(ulong *)(unaff_x19 + 0x128) = lVar20 + uVar26 * 8;
                  if (pppppppuVar27 != (undefined *******)0x0) {
                    __ZdlPv();
                    pppppppuVar25 = pppppppuVar27;
                  }
                }
                *(undefined8 **)(unaff_x19 + 0x120) = puVar36;
              }
              func_0x000107848168();
              if (pppppppuVar25 != (undefined *******)0x0) {
                func_0x000107847c68();
              }
LAB_107844964:
              iVar13 = 0;
            }
            else {
              func_0x000107899e5c();
              func_0x0001073e27e0(&ppppplStack_3f0);
              ppppplVar34 = ppppplStack_3f0;
              ppppplStack_7f0 = ppppplStack_3f0;
              if ((undefined *******)ppppplStack_3f0 == (undefined *******)0x0) {
                pppppplVar16 = (long ******)0x0;
              }
              else {
                func_0x0001078480f8();
                *pppppplVar16 = (long *****)&PTR_DAT_1109e1688;
                pppppplVar16[1] = (long *****)0x0;
                pppppplVar16[2] = (long *****)0x0;
                pppppplVar16[3] = ppppplVar34;
              }
              plVar17 = plStack_790;
              ppppppuStack_7e8 = (undefined ******)pppppplVar16;
              (**(code **)(*plStack_790 + 0x10))();
              ppppplStack_3f0 = (long *****)((ulong)ppppplStack_3f0 & 0xffffffffffffff00);
              func_0x0001074b2d2c(alStack_818 + 2,plVar17,&ppppplStack_3f0);
              lVar15 = 0;
              for (plVar39 = (long *)0x0;
                  (func_0x000107847fd4(), (extraout_x8_01 & 1) == 0 && (plVar39 < plVar17));
                  plVar39 = (long *)((long)plVar39 + 1)) {
                (**(code **)(*plStack_790 + 0x18))(&plStack_430,plStack_790,plVar39);
                if ((((ulong)pppplVar38[0x1c] & 1) == 0) && (*(char *)(pppplVar38 + 0x25) != '\x01')
                   ) {
LAB_107844424:
                  uVar32 = (ulong)plVar39 >> 3 & 0x1ffffffffffffff8;
                  *(ulong *)(alStack_818[2] + uVar32) =
                       *(ulong *)(alStack_818[2] + uVar32) | 1L << ((ulong)plVar39 & 0x3f);
                  pppppppuVar25 = (undefined *******)ppppplStack_7f0;
                  (*(code *)(*ppppplStack_7f0)[0xb])(ppppplStack_7f0,&plStack_430);
                  lVar15 = (long)pppppppuVar25 + lVar15;
                }
                else {
                  uVar40 = NEON_ucvtf((uint)*pbVar21);
                  FUN_1077512dc(uVar40,&ppppplStack_3f0);
                  alStack_818[0] = lStack_428;
                  plStack_820 = plStack_430;
                  if (lStack_428 != 0) {
                    plVar3 = (long *)(lStack_428 + 8);
                    do {
                      cVar5 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                      if (bVar11) {
                        *plVar3 = *plVar3 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  func_0x000107847d30(&ppppplStack_638);
                  func_0x000107848100(auStack_600);
                  func_0x0001073c4f74(&ppppppuStack_5c0,&ppppplStack_638);
                  func_0x000107751444(&ppppplStack_3f0,&plStack_820,&ppppppuStack_5c0);
                  auStack_6a8[0] = 0;
                  auStack_670[0] = 0;
                  uStack_668 = 0;
                  pppplVar18 = pppplVar38 + 0x1a;
                  pppppuStack_2f8 = (undefined *****)ppppppuVar14;
                  func_0x00010777faa8(pppplVar18,&ppppplStack_3f0,auStack_6a8);
                  func_0x00010724b3d8(auStack_6a8);
                  func_0x000107267e8c(&ppppppuStack_5c0);
                  func_0x000107267eac(&ppppplStack_638);
                  func_0x000107267e44(&plStack_820);
                  func_0x000107848098();
                  if (((ulong)pppplVar18 & 1) != 0) goto LAB_107844424;
                }
                func_0x000107330fdc(&plStack_430);
              }
              (*(code *)(*ppppplStack_7f0)[0xc])(ppppplStack_7f0,plVar17,lVar15);
              alStack_818[0] = 0;
              alStack_818[1] = 0;
              ppplStack_830 = (long ***)0x0;
              uStack_828 = 0;
              ppppplVar34 = pppppplVar33[1];
              ppppplVar35 = *pppppplVar33;
              pppplStack_838 = &ppplStack_830;
              plStack_820 = alStack_818;
              do {
                ppppplVar28 = ppppplVar35;
                if (ppppplVar28 == ppppplVar34) break;
                iVar13 = (int)(*ppppplVar28)[1];
                func_0x00010784815c();
                (*extraout_x8_02)();
                ppppplVar35 = ppppplVar28 + 2;
              } while (iVar13 == 0);
              plVar39 = (long *)0x0;
              while( true ) {
                func_0x000107847fd4();
                if (((extraout_x8_03 & 1) != 0) || (plVar17 <= plVar39)) break;
                (**(code **)(*plStack_790 + 0x18))(&pppppuStack_850,plStack_790,plVar39);
                if ((*(ulong *)(alStack_818[2] + ((ulong)plVar39 >> 6) * 8) >>
                     ((ulong)plVar39 & 0x3f) & 1) != 0) {
                  (*(code *)(*pppppuStack_850)[7])(&ppppplStack_3f0);
                  pppppppuVar25 = (undefined *******)&ppppplStack_3f0;
                  func_0x000107330078();
                  (*(code *)(*pppppuStack_850)[6])();
                  func_0x00010726236c(&plStack_430);
                  func_0x0001072e7640(&ppppplStack_3f0,&plStack_430,0x1138369c0);
                  func_0x000107869b38(&ppppppuStack_5c0,auStack_7d0,&ppppplStack_3f0);
                  FUN_1078696e8(&ppppplStack_638);
                  pppppppuVar27 = &ppppppuStack_5c0;
                  if ((char)pplStack_5a8 == '\0') {
                    pppppppuVar27 = (undefined *******)&ppppplStack_638;
                  }
                  pppppuStack_868 = (undefined *****)pppppppuVar27[1];
                  pppppuStack_870 = (undefined *****)*pppppppuVar27;
                  *pppppppuVar27 = (undefined ******)0x0;
                  pppppppuVar27[1] = (undefined ******)0x0;
                  pppppuStack_860 = (undefined *****)pppppppuVar27[2];
                  func_0x00010726b264(&ppppplStack_638);
                  func_0x0001073de9d8(&ppppppuStack_5c0);
                  func_0x0001078480a0();
                  uVar40 = NEON_ucvtf((uint)*pbVar21);
                  FUN_1077512dc(uVar40,&ppppppuStack_5c0);
                  lStack_878 = lStack_848;
                  pppppuStack_880 = pppppuStack_850;
                  if (lStack_848 != 0) {
                    plVar3 = (long *)(lStack_848 + 8);
                    do {
                      cVar5 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                      if (bVar11) {
                        *plVar3 = *plVar3 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  func_0x000107847d30(auStack_6a8);
                  func_0x000107848100(auStack_670);
                  func_0x0001073c4f74(&ppppplStack_638,auStack_6a8);
                  func_0x000107751444(&ppppppuStack_5c0,&pppppuStack_880,&ppppplStack_638);
                  pppppuStack_4e0 = (undefined *****)&pppppuStack_870;
                  puStack_4d8 = auStack_760;
                  pppppuStack_4c8 = (undefined *****)ppppppuVar14;
                  func_0x000107751334(&ppppplStack_3f0,&ppppppuStack_5c0);
                  func_0x000107267e8c(&ppppplStack_638);
                  func_0x000107267eac(auStack_6a8);
                  func_0x000107267e44(&pppppuStack_880);
                  func_0x000107267da8(&ppppppuStack_5c0);
                  ppppplVar35 = ppppplStack_7f0;
                  ppppppuStack_5c0 = &pppppuStack_850;
                  ppppplStack_5b0 = &pppplStack_838;
                  pplStack_5a8 = &plStack_820;
                  ppppppuStack_5b8 = (undefined ******)pppppppuVar25;
                  ppuStack_5a0 = (undefined **)plVar39;
                  func_0x000107847d30(&uStack_598);
                  func_0x000107848100(auStack_560);
                  uStack_510 = *(undefined8 *)(unaff_x19 + 0x278);
                  pppppuStack_528 = (undefined *****)ppppppuVar14;
                  puStack_520 = auStack_760;
                  pppppuStack_518 = (undefined *****)&pppppuStack_870;
                  (*(code *)(*ppppplVar35)[5])(ppppplVar35,&ppppppuStack_5c0);
                  func_0x0001073e03f8(&ppppppuStack_5c0);
                  if (ppppplVar28 != ppppplVar34) {
                    func_0x00010777fb74(&ppppplStack_638,pppplVar38 + 0x16,&ppppplStack_3f0);
                    ppppplVar35 = *pppppplVar2;
                    ppppppuVar19 = (undefined ******)pppppuStack_850;
                    func_0x00010784815c(pppppuStack_850);
                    (*extraout_x8_04)();
                    func_0x000104c2fe00(&ppppppuStack_5c0,pppplVar38 + 1);
                    func_0x0001073c0294(ppppplVar35,pppppppuVar25,ppppppuVar19,plVar39,auStack_258,
                                        &ppppppuStack_5c0,&ppppplStack_638,pppplVar38 + 0x18);
                    func_0x000104c2f714(&ppppppuStack_5c0);
                    func_0x000107283194(&ppppplStack_638);
                  }
                  func_0x000107848098();
                  func_0x00010726b264(&pppppuStack_870);
                  func_0x00010724b3d8(&plStack_430);
                }
                func_0x000107330fdc(&pppppuStack_850);
                plVar39 = (long *)((long)plVar39 + 1);
              }
              pppppppuVar25 = (undefined *******)ppppplStack_7f0;
              func_0x00010784815c();
              (*extraout_x8_05)();
              if ((int)pppppppuVar25 == 0) {
                iVar13 = 3;
              }
              else {
                ppppplVar35 = pppppplVar33[1];
                for (ppppplVar34 = *pppppplVar33; ppppplVar34 != ppppplVar35;
                    ppppplVar34 = ppppplVar34 + 2) {
                  ppppppuStack_3e0 = (undefined ******)*ppppplVar34;
                  ppppplVar28 = (long *****)ppppppuStack_3e0[1];
                  ppppppuStack_3e8 = ppppppuStack_7e8;
                  ppppplStack_3f0 = ppppplStack_7f0;
                  if ((long ******)ppppppuStack_7e8 != (long ******)0x0) {
                    pppppplVar16 = (long ******)(ppppppuStack_7e8 + 1);
                    do {
                      cVar5 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(pppppplVar16,0x10);
                      if (bVar11) {
                        *pppppplVar16 = (long *****)((long)*pppppplVar16 + 1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    ppppppuStack_3e0 = (undefined ******)*ppppplVar34;
                  }
                  uStack_3d8 = (long ******)ppppplVar34[1];
                  if (uStack_3d8 != (long ******)0x0) {
                    pppppplVar16 = uStack_3d8 + 1;
                    do {
                      cVar5 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(pppppplVar16,0x10);
                      if (bVar11) {
                        *pppppplVar16 = (long *****)((long)*pppppplVar16 + 1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  func_0x0001073e0254(&ppppppuStack_5c0,pppppplVar1,ppppplVar28 + 1,&ppppplStack_3f0
                                     );
                  func_0x0001073e08f4(&ppppplStack_3f0);
                }
                iVar13 = 0;
              }
              func_0x000107408ca0(&pppplStack_838);
              func_0x0001073dff1c(&plStack_820);
              func_0x000104be7d74(alStack_818 + 2);
              func_0x0001073e091c(&ppppplStack_7f0);
              if (((ulong)pppppppuVar25 & 1) != 0) goto LAB_107844964;
            }
            func_0x00010726e4c8(auStack_7d0);
            func_0x000104c2f714(auStack_258);
            func_0x00010726e078(&uStack_7a8);
            func_0x0001078480f0();
            func_0x000107848004();
            uVar12 = iVar13 == 3;
            if ((!(bool)uVar12) && (iVar13 != 0)) goto LAB_10784499c;
          }
        }
        pppppplVar33 = pppppplVar33 + 3;
      }
      func_0x000107847f88();
      func_0x0001078467d4();
      func_0x0001078467d4();
      func_0x00010747f190(unaff_x19 + 0x148,&pppppuStack_730);
      func_0x00010747f190(unaff_x19 + 0x170,&pppppuStack_730);
      if (*(long *)(unaff_x19 + 0x160) != 0) {
        *(long *)(unaff_x19 + 0xd0) = *(long *)(unaff_x19 + 0xd0) + 1;
        func_0x00010746fee4(&ppppplStack_638,unaff_x19 + 0x148);
        uStack_610 = *(undefined8 *)(unaff_x19 + 0xd0);
        func_0x000107848050(&pppppuStack_220);
        if ((undefined ******)pppppuStack_220 != (undefined ******)0x0) {
          ppppppuVar14 = *(undefined *******)(unaff_x19 + 0x18);
          func_0x00010747f9b4(&ppppppuStack_5c0,&ppppplStack_638);
          pppppppuVar27 = (undefined *******)0x50;
          __Znwm();
          func_0x00010747f9b4(&ppppplStack_3f0,&ppppppuStack_5c0);
          *pppppppuVar27 = (undefined ******)&PTR_DAT_1109e1648;
          pppppppuVar27[1] = ppppppuVar14;
          pppppppuVar27[2] = (undefined ******)&UNK_10782ee0c;
          pppppppuVar27[3] = (undefined ******)0x0;
          func_0x00010747f9b4(pppppppuVar27 + 4,&ppppplStack_3f0);
          func_0x0001074701f4(&ppppplStack_3f0);
          pppppppuVar25 = &ppppppuStack_5c0;
          ppppplStack_3f0 = (long *****)pppppppuVar27;
          func_0x0001074701f4();
          func_0x0001078480a8();
          func_0x000107848174();
          if (pppppppuVar25 != (undefined *******)0x0) {
            func_0x000107847c68();
          }
        }
        func_0x00010724bcd8(&pppppuStack_220);
        func_0x0001074701f4(&ppppplStack_638);
      }
      uVar12 = pppppuStack_748 == pppppuStack_740;
      if (!(bool)uVar12) {
        func_0x000107848050(&ppppplStack_638);
        pppppuVar9 = pppppuStack_738;
        pppppuVar8 = pppppuStack_740;
        pppppuVar7 = pppppuStack_748;
        if ((undefined *******)ppppplStack_638 != (undefined *******)0x0) {
          ppppppuVar14 = *(undefined *******)(unaff_x19 + 0x18);
          ppppppuStack_5c0 = (undefined ******)pppppuStack_748;
          ppppppuStack_5b8 = (undefined ******)pppppuStack_740;
          ppppplStack_5b0 = (long *****)pppppuStack_738;
          pppppuStack_740 = (undefined *****)0x0;
          pppppuStack_738 = (undefined *****)0x0;
          pppppuStack_748 = (undefined *****)0x0;
          pppppppuVar27 = (undefined *******)0x38;
          __Znwm();
          ppppppuStack_5b8 = (undefined ******)0x0;
          ppppppuStack_5c0 = (undefined ******)0x0;
          ppppplStack_5b0 = (long *****)0x0;
          *pppppppuVar27 = (undefined ******)&PTR_DAT_1109e16e8;
          pppppppuVar27[1] = ppppppuVar14;
          pppppppuVar27[2] = (undefined ******)&UNK_10782ee20;
          pppppppuVar27[3] = (undefined ******)0x0;
          pppppppuVar27[4] = (undefined ******)pppppuVar7;
          pppppppuVar27[5] = (undefined ******)pppppuVar8;
          pppppppuVar27[6] = (undefined ******)pppppuVar9;
          ppppppuStack_3e0 = (undefined ******)0x0;
          ppppplStack_3f0 = (long *****)0x0;
          ppppppuStack_3e8 = (undefined ******)0x0;
          FUN_1078312d4(&ppppplStack_3f0);
          pppppppuVar25 = &ppppppuStack_5c0;
          ppppplStack_3f0 = (long *****)pppppppuVar27;
          FUN_1078312d4();
          func_0x0001078480a8();
          func_0x000107848174();
          if (pppppppuVar25 != (undefined *******)0x0) {
            func_0x000107847c68();
          }
        }
        func_0x00010724bcd8(&ppppplStack_638);
      }
      func_0x000107848088();
LAB_107844b48:
      func_0x00010726b264(auStack_760);
      FUN_1078312d4(&pppppuStack_748);
      func_0x0001074701f4(&pppppuStack_730);
      func_0x000107810050(&pppppuStack_700);
      func_0x000107810050(&pppppuStack_6e8);
      func_0x000107847900(&uStack_6d0);
      func_0x00010743d7e4(auStack_178);
    }
  }
  func_0x000107847c84(uStack_70);
  if ((bool)uVar12) {
    return;
  }
  ___stack_chk_fail();
LAB_107844bc8:
  func_0x000107846f2c();
LAB_107844bdc:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x107844be0);
  (*pcVar10)();
}



/* Entry: 1078453b4; end: 107846413;  */

void FUN_1078453b4(long param_1)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 ***pppuVar9;
  long *plVar10;
  undefined8 **ppuVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 ***extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  code *extraout_x8_04;
  long unaff_x19;
  undefined8 *puVar14;
  ulong *puVar15;
  undefined8 **ppuVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined4 uVar21;
  undefined4 auStack_8e8 [6];
  undefined4 uStack_8d0;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined4 uStack_8a0;
  undefined1 uStack_89c;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined4 auStack_878 [6];
  undefined4 uStack_860;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined4 uStack_838;
  undefined4 uStack_830;
  undefined1 uStack_82c;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined **ppuStack_808;
  undefined8 uStack_800;
  undefined8 *apuStack_7f8 [3];
  undefined8 **ppuStack_7e0;
  undefined8 *puStack_7d8;
  undefined8 uStack_7c8;
  undefined4 uStack_7c0;
  long alStack_7b0 [3];
  long alStack_798 [2];
  int iStack_788;
  undefined1 auStack_780 [16];
  undefined4 uStack_770;
  undefined1 auStack_768 [16];
  undefined4 uStack_758;
  undefined1 auStack_750 [24];
  undefined1 uStack_738;
  undefined1 auStack_730 [136];
  undefined1 auStack_6a8 [24];
  undefined1 auStack_690 [40];
  char cStack_668;
  undefined8 uStack_660;
  undefined4 uStack_658;
  undefined8 uStack_650;
  undefined4 uStack_648;
  undefined1 auStack_640 [56];
  undefined1 auStack_608 [56];
  long lStack_5d0;
  undefined4 uStack_5c8;
  undefined1 auStack_5b8 [24];
  undefined1 auStack_5a0 [24];
  undefined8 uStack_588;
  undefined4 uStack_580;
  undefined8 **ppuStack_550;
  long *plStack_548;
  long lStack_540;
  undefined8 uStack_538;
  undefined8 ***pppuStack_530;
  undefined8 ***pppuStack_528;
  undefined8 ***pppuStack_520;
  undefined8 uStack_518;
  undefined4 uStack_510;
  undefined4 uStack_508;
  undefined1 uStack_504;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 ***pppuStack_468;
  long lStack_460;
  undefined8 ***pppuStack_458;
  undefined ***pppuStack_450;
  long *plStack_3c0;
  long lStack_3b8;
  long lStack_378;
  undefined8 uStack_2e0;
  undefined1 auStack_230 [56];
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [256];
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_80;
  
  func_0x000107847e84();
  uVar3 = *(char *)(param_1 + 0x110) == '\x01';
  uStack_80 = extraout_x8;
  if ((((bool)uVar3) && (func_0x000107847ea8(), (bool)uVar3)) && (*(long *)(unaff_x19 + 0x98) != 0))
  {
    func_0x00010784818c();
    uVar18 = extraout_x8_00 + 0x5d0;
    func_0x000107847fbc();
    if ((uVar18 & 1) == 0) {
      plVar8 = *(long **)(unaff_x19 + 0xf0);
      plVar10 = *(long **)(unaff_x19 + 0xe8);
      do {
        if (plVar10 == plVar8) goto LAB_107845460;
        plVar5 = *(long **)(*plVar10 + 8);
        (**(code **)(*plVar5 + 0x40))();
        plVar10 = plVar10 + 2;
      } while ((int)plVar5 == 0);
    }
    lVar6 = *(long *)(unaff_x19 + 0x130);
    while (uVar3 = lVar6 == unaff_x19 + 0x138, !(bool)uVar3) {
      if (*(long *)(lVar6 + 0x40) != 0) goto LAB_1078460ec;
      func_0x00010002c7d4();
    }
    if (*(long *)(unaff_x19 + 0x160) == 0) {
LAB_107845460:
      ppuStack_550 = (undefined8 **)CONCAT44(ppuStack_550._4_4_,0x2d);
      uStack_538 = (undefined8 **)((ulong)uStack_538 & 0xffffffff00000000);
      uStack_518 = 0;
      pppuStack_520 = (undefined8 ***)0x0;
      pppuStack_528 = (undefined8 ***)0x0;
      pppuStack_530 = (undefined8 ***)&PTR_DAT_110996720;
      uStack_510 = 0x2d;
      func_0x000107847fa0();
      func_0x00010743cc34(&plStack_3c0,&ppuStack_550,7);
      func_0x00010743d7bc(auStack_1f8,&plStack_3c0);
      func_0x000107288cd8(&plStack_3c0);
      func_0x000107847e18();
      func_0x000107847d30(auStack_230);
      func_0x000107847dec();
      func_0x000107371bc4(auStack_1f0);
      func_0x000104c2f714(auStack_230);
      func_0x000107847ec4();
      func_0x0001072df7b4(auStack_1f0);
      plVar10 = *(long **)(unaff_x19 + 0xf0);
      plVar5 = (long *)0x2;
      for (plVar8 = *(long **)(unaff_x19 + 0xe8); plVar8 != plVar10; plVar8 = plVar8 + 2) {
        plVar7 = *(long **)(*plVar8 + 8);
        (**(code **)(*plVar7 + 0x38))();
        iVar4 = (int)plVar7;
        if ((iVar4 != 1) && (plVar7 = plVar5, iVar4 == 0)) goto LAB_107845540;
        plVar5 = plVar7;
      }
      if ((int)plVar5 == 2) {
        auStack_730[0] = 0;
        cStack_668 = '\0';
      }
      else {
LAB_107845540:
        func_0x00010746150c(&pppuStack_f0,*(undefined4 *)(unaff_x19 + 0x84),unaff_x19 + 0x170,
                            *(undefined8 *)(unaff_x19 + 0x268),unaff_x19 + 0x1b0,unaff_x19 + 0x1d8);
        if (*(char *)(*(long *)(unaff_x19 + 0x238) + 0x40) == '\x01') {
          uVar13 = *(undefined8 *)(*(long *)(unaff_x19 + 0x238) + 8);
        }
        else {
          func_0x00010784818c();
          iVar4 = extraout_w8 + 0x980;
          func_0x000107847fbc();
          uVar13 = 0x1060;
          if (iVar4 == 0) {
            uVar13 = 0;
          }
        }
        func_0x00010746167c(&plStack_3c0,unaff_x19 + 0x1b0,unaff_x19 + 0x1d8,unaff_x19 + 0x200,
                            &pppuStack_f0,plVar8 == plVar10,uVar13,
                            *(undefined8 *)(unaff_x19 + 0x2c8));
        puVar14 = *(undefined8 **)(unaff_x19 + 0x2c0);
        ppuStack_550 = (undefined8 **)((ulong)ppuStack_550 & 0xffffffffffffff00);
        func_0x00010724e2c8(*(long *)(unaff_x19 + 0x2c8) + 0x980,&ppuStack_550);
        func_0x000107847e78(puVar14,0x47,unaff_x19 + 0x40);
        func_0x000107847f64();
        func_0x000107847e78();
        func_0x000107847f64();
        func_0x000107847e78();
        for (uVar18 = 0; uVar18 < ((lStack_3b8 - (long)plStack_3c0) / 0x18 & 0xffffffffU);
            uVar18 = uVar18 + 1) {
          func_0x000107847f64();
          func_0x000107847d48();
          func_0x000107847f64();
          func_0x000107847d48();
          func_0x000107847f64();
          func_0x000107847d48();
          lVar6 = *(long *)(lStack_378 + uVar18 * 8);
          ppuStack_550 = (undefined8 **)CONCAT44(ppuStack_550._4_4_,0x50);
          uStack_538 = (undefined8 **)((ulong)uStack_538 & 0xffffffff00000000);
          pppuStack_520 = (undefined8 ***)0x0;
          uStack_518 = 0;
          pppuStack_528 = (undefined8 ***)0x0;
          pppuStack_530 = (undefined8 ***)&PTR_DAT_110996720;
          uStack_510 = 0x50;
          uStack_508 = 0;
          uStack_504 = 1;
          uStack_4f8 = 0;
          uStack_4f0 = 0;
          uStack_500 = 0;
          func_0x000107847d30(&puStack_b8);
          pppuVar9 = &ppuStack_550;
          func_0x000107847cf4(pppuVar9);
          func_0x000107847ec4();
          func_0x0001072df7b4();
          func_0x0001072a0318();
          func_0x0001072bbe40();
          uStack_5c8 = 5;
          uStack_588 = *puVar14;
          uStack_580 = 3;
          lStack_5d0 = lVar6;
          func_0x000107847ed0(puVar14,pppuVar9,&lStack_5d0,&uStack_588);
          func_0x000104c2f714(&puStack_b8);
          func_0x000107847e18();
        }
        func_0x000107847f64();
        func_0x0001078471e4();
        ppuStack_550 = (undefined8 **)CONCAT44(ppuStack_550._4_4_,0x52);
        uStack_538 = (undefined8 **)((ulong)uStack_538 & 0xffffffff00000000);
        uStack_518 = 0;
        pppuStack_520 = (undefined8 ***)0x0;
        func_0x000107847c74();
        pppuStack_528 = (undefined8 ***)0x0;
        uStack_510 = 0x52;
        pppuStack_530 = extraout_x8_01;
        func_0x000107847fa0();
        func_0x000107847d30(&lStack_5d0);
        func_0x000107847dec();
        func_0x000107371bc4(&ppuStack_550);
        func_0x000107847ec4();
        func_0x0001072df7b4();
        uStack_588 = uStack_2e0;
        uStack_580 = 3;
        uStack_7c8 = *puVar14;
        uStack_7c0 = 3;
        func_0x000107848060();
        func_0x000104c2f714(&lStack_5d0);
        func_0x000107847e18();
        func_0x000107847358(auStack_730,&plStack_3c0);
        cStack_668 = '\x01';
        func_0x000107847418(&plStack_3c0);
        func_0x0001074625ac(&pppuStack_f0);
      }
      auStack_750[0] = 0;
      uStack_738 = 0;
      uStack_758 = 1;
      uStack_770 = 1;
      iStack_788 = 1;
      uVar3 = *(long *)(unaff_x19 + 0x118) == *(long *)(unaff_x19 + 0x120);
      if (!(bool)uVar3) {
        if (*(char *)(*(long *)(unaff_x19 + 0x238) + 0x40) == '\x01') {
          uVar13 = *(undefined8 *)(*(long *)(unaff_x19 + 0x238) + 8);
        }
        else {
          func_0x00010784818c();
          iVar4 = extraout_w8_00 + 0x980;
          func_0x000107847fbc();
          uVar13 = 0x1060;
          if (iVar4 == 0) {
            uVar13 = 0;
          }
        }
        ppuVar16 = (undefined8 **)(unaff_x19 + 0x198);
        func_0x00010780a80c(&uStack_7c8,ppuVar16,uVar13,*(undefined8 *)(unaff_x19 + 0x2c8));
        func_0x00010782eaf8(auStack_750,&uStack_7c8);
        func_0x00010745f750(&ppuStack_7e0,*(undefined8 *)(unaff_x19 + 0x260));
        func_0x00010750a49c(apuStack_7f8,*(undefined8 *)(unaff_x19 + 0x248));
        uStack_800 = *(undefined8 *)(unaff_x19 + 0x268);
        ppuStack_808 = &PTR_DAT_1109b2858;
        func_0x00010784818c();
        iVar4 = extraout_w8_01 + 0x2c0;
        func_0x000107847fbc();
        if (iVar4 == 0) {
          uVar21 = NEON_ucvtf((uint)*(byte *)(unaff_x19 + 0x30));
          FUN_1077512dc(uVar21,&ppuStack_550);
        }
        else {
          func_0x000107751284(&ppuStack_550);
        }
        lStack_460 = unaff_x19 + 0x228;
        pppuStack_468 = &ppuStack_7e0;
        pppuStack_450 = &ppuStack_808;
        pppuStack_458 = (undefined8 ***)(unaff_x19 + 0x34);
        func_0x000107751334(&plStack_3c0,&ppuStack_550);
        func_0x000107267da8(&ppuStack_550);
        puVar15 = *(ulong **)(unaff_x19 + 0x118);
        puVar1 = *(ulong **)(unaff_x19 + 0x120);
        func_0x000107847c74();
        for (; uVar3 = puVar15 == puVar1, !(bool)uVar3; puVar15 = puVar15 + 1) {
          func_0x000107847fd4();
          if ((extraout_x8_02 & 1) != 0) {
LAB_1078460a8:
            func_0x000107267da8(&plStack_3c0);
            func_0x000107848138();
            func_0x0001078480e8();
            func_0x0001078480c0();
            goto LAB_1078460bc;
          }
          plVar8 = (long *)*puVar15;
          (**(code **)(*plVar8 + 0x10))(&uStack_588);
          func_0x000107848140();
          (**(code **)(*(long *)*puVar15 + 0x38))
                    (&lStack_5d0,(long *)*puVar15,&plStack_3c0,plVar8,
                     *(undefined8 *)(unaff_x19 + 0x78));
          func_0x000107847fd4();
          if ((extraout_x8_03 & 1) != 0) {
            func_0x000107848030();
            func_0x000107848090();
            goto LAB_1078460a8;
          }
          func_0x0001073ebbdc(&ppuStack_550,auStack_768);
          func_0x0001073ebbdc(&uStack_538,&lStack_5d0);
          uStack_e8 = 2;
          pppuStack_f0 = &ppuStack_550;
          func_0x000107847e20();
          func_0x000107848128(auStack_768);
          func_0x000107848080();
          lVar6 = 0x18;
          do {
            func_0x000107848108();
            lVar6 = lVar6 + -0x18;
          } while (lVar6 != -0x18);
          func_0x0001073ebbdc(&ppuStack_550,auStack_780);
          func_0x0001073ebbdc(&uStack_538,auStack_5b8);
          uStack_e8 = 2;
          pppuStack_f0 = &ppuStack_550;
          func_0x000107847e20();
          func_0x000107848128(auStack_780);
          func_0x000107848080();
          lVar6 = 0x18;
          do {
            func_0x000107848108();
            lVar6 = lVar6 + -0x18;
          } while (lVar6 != -0x18);
          func_0x0001073ebbdc(&ppuStack_550,alStack_798);
          func_0x0001073ebbdc(&uStack_538,auStack_5a0);
          uStack_e8 = 2;
          pppuStack_f0 = &ppuStack_550;
          func_0x000107847e20();
          func_0x000107848128(alStack_798);
          func_0x000107848080();
          lVar6 = 0x18;
          do {
            func_0x000107848108();
            lVar6 = lVar6 + -0x18;
          } while (lVar6 != -0x18);
          auStack_878[0] = 0x43;
          uStack_860 = 0;
          uStack_848 = 0;
          uStack_840 = 0;
          uStack_850 = 0;
          uStack_838 = 0x43;
          uStack_830 = 0;
          uStack_82c = 1;
          uStack_820 = 0;
          uStack_818 = 0;
          uStack_828 = 0;
          func_0x000107846bb8(uStack_758,unaff_x19 + 0x40,auStack_878,
                              *(undefined8 *)(unaff_x19 + 0x2c0));
          func_0x000107262330(auStack_878);
          auStack_8e8[0] = 0x44;
          uStack_8d0 = 0;
          uStack_8b8 = 0;
          uStack_8b0 = 0;
          uStack_8c0 = 0;
          func_0x000107847c74();
          uStack_8a0 = 0;
          uStack_89c = 1;
          uStack_890 = 0;
          uStack_888 = 0;
          uStack_898 = 0;
          func_0x000107846bb8(uStack_770,unaff_x19 + 0x40,auStack_8e8,
                              *(undefined8 *)(unaff_x19 + 0x2c0));
          func_0x000107262330(auStack_8e8);
          puVar14 = *(undefined8 **)(unaff_x19 + 0x2c0);
          if (iStack_788 == 1) {
            func_0x000107847c30();
            func_0x000107847fc4();
            func_0x00010729d56c();
            func_0x000107847d30(&puStack_b8);
            func_0x000107847ccc();
            func_0x000107847df8();
            func_0x000107847d00();
LAB_107845b9c:
            lVar6 = -0xa8;
          }
          else {
            if (iStack_788 == 0) {
              func_0x000107847c30();
              func_0x000107847fc4();
              func_0x00010729d56c();
              func_0x000107847d30(&puStack_b8);
              func_0x000107847ccc();
              func_0x000107847df8();
              func_0x000107847d00();
              goto LAB_107845b9c;
            }
            func_0x000107847c30();
            func_0x000107847fc4();
            func_0x00010729d56c();
            func_0x000107847d30(&puStack_b8);
            func_0x000107847ccc();
            func_0x000107847df8();
            func_0x000107847d00();
            func_0x000104c2f714(&puStack_b8);
            func_0x000107847e18();
            func_0x000107847c30();
            func_0x000107847d30(&pppuStack_f0);
            pppuVar9 = &ppuStack_550;
            func_0x000107847cf4(pppuVar9);
            uStack_650 = *(undefined8 *)(alStack_798[0] + 0x18);
            uStack_648 = 3;
            uStack_660 = *puVar14;
            uStack_658 = 3;
            func_0x000107847ed0(puVar14,pppuVar9,&uStack_650,&uStack_660);
            lVar6 = -0xe0;
          }
          pppuVar9 = (undefined8 ***)(&stack0xfffffffffffffff0 + lVar6);
          func_0x000104c2f714();
          func_0x000107847e18();
          func_0x000107848140();
          plVar8 = (long *)*puVar15;
          ppuStack_550 = ppuVar16;
          plStack_548 = alStack_7b0;
          lStack_540 = unaff_x19 + 0x1b0;
          if (cStack_668 == '\x01') {
            func_0x000107830fe4(&puStack_b8,auStack_6a8);
          }
          else {
            uStack_b0 = 0;
            uStack_a8 = 0;
            puStack_b8 = &uStack_b0;
          }
          uStack_538 = &puStack_b8;
          pppuStack_530 = &ppuStack_7e0;
          pppuStack_528 = pppuVar9;
          func_0x0001078480b4(*(undefined8 *)(*plVar8 + 0x20));
          func_0x000107848078();
          plVar8 = (long *)*puVar15;
          (**(code **)(*plVar8 + 0x28))();
          if (((ulong)plVar8 & 1) != 0) {
            func_0x00010784815c(*(undefined8 *)(unaff_x19 + 0x2b0));
            (*extraout_x8_04)();
            plVar8 = (long *)*puVar15;
            if (cStack_668 == '\x01') {
              func_0x000107830fe4(&puStack_b8,auStack_690);
            }
            else {
              uStack_b0 = 0;
              uStack_a8 = 0;
              puStack_b8 = &uStack_b0;
            }
            ppuStack_550 = &puStack_b8;
            uStack_538._0_2_ =
                 CONCAT11(*(undefined1 *)(unaff_x19 + 0x2b8),*(undefined1 *)(unaff_x19 + 0x2b9));
            pppuStack_528 = &ppuStack_7e0;
            uStack_518 = *(undefined8 *)(unaff_x19 + 0x278);
            plStack_548 = (long *)(unaff_x19 + 0x98);
            lStack_540 = unaff_x19 + 0xa0;
            pppuStack_530 = (undefined8 ***)(unaff_x19 + 0x34);
            pppuStack_520 = pppuVar9;
            func_0x0001078480b4(*(undefined8 *)(*plVar8 + 0x18));
            func_0x000107848078();
          }
          func_0x000107848030();
          func_0x000107848090();
        }
        func_0x000107267da8(&plStack_3c0);
        func_0x000107848138();
        func_0x0001078480e8();
        func_0x0001078480c0();
      }
      FUN_107846ddc(unaff_x19 + 0x118);
      *(undefined1 *)(unaff_x19 + 0x2b9) = 0;
      plVar8 = *(long **)(unaff_x19 + 0x108);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))(&ppuStack_550,plVar8);
        iVar4 = 0;
        ppuVar16 = ppuStack_550 + 2;
        while (ppuVar16 = (undefined8 **)*ppuVar16, ppuVar16 != (undefined8 **)0x0) {
          (**(code **)(*plVar8 + 0x18))(&plStack_3c0,plVar8,ppuVar16 + 2);
          plVar10 = plStack_3c0;
          (**(code **)(*plStack_3c0 + 0x10))();
          iVar4 = iVar4 + (int)plVar10;
          func_0x000107331000(&plStack_3c0);
        }
        func_0x000107283194(&ppuStack_550);
        uVar13 = *(undefined8 *)(unaff_x19 + 0x2c0);
        func_0x000107847d78(0x59);
        func_0x000107847d30(auStack_608);
        func_0x000107847dec();
        func_0x000107371bc4(&plStack_3c0);
        func_0x000107847ec4();
        func_0x0001072df7b4();
        ppuStack_550 = (undefined8 **)CONCAT44(ppuStack_550._4_4_,iVar4);
        plStack_548 = (long *)CONCAT44(plStack_548._4_4_,1);
        func_0x000107847fe0();
        func_0x000107847ed0(uVar13);
        func_0x000104c2f714(auStack_608);
        func_0x0001078480d4();
      }
      func_0x000107847d78(0x2e);
      func_0x000107847d30(auStack_640);
      func_0x000107847dec();
      func_0x000107371bc4(&plStack_3c0);
      func_0x000107847ec4();
      func_0x0001072df7b4();
      ppuStack_550 = (undefined8 **)CONCAT44(ppuStack_550._4_4_,1);
      plStack_548 = (long *)((ulong)plStack_548 & 0xffffffff00000000);
      func_0x000107847fe0();
      func_0x000107848060();
      func_0x000104c2f714(auStack_640);
      func_0x0001078480d4();
      puVar14 = (undefined8 *)0x1c0;
      __Znwm();
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = &PTR_DAT_1109e1728;
      ppuVar16 = (undefined8 **)(puVar14 + 3);
      func_0x000107847aa0(&lStack_5d0,unaff_x19 + 0xa0);
      uVar13 = *(undefined8 *)(unaff_x19 + 0xd8);
      uVar2 = *(undefined8 *)(unaff_x19 + 0xe0);
      puVar19 = *(undefined8 **)(unaff_x19 + 0x98);
      *(undefined8 *)(unaff_x19 + 0x98) = 0;
      apuStack_7f8[0] = puVar19;
      FUN_107847abc(&puStack_b8,auStack_750);
      func_0x000107847af8(&plStack_3c0,auStack_730);
      func_0x0001073ebf60(&pppuStack_f0,auStack_768);
      func_0x0001073ebf60(&uStack_588,auStack_780);
      func_0x0001073ebf60(&uStack_7c8,alStack_798);
      func_0x00010747f9d8(&ppuStack_550,unaff_x19 + 0x170);
      uVar17 = *(undefined8 *)(unaff_x19 + 200);
      ppuVar11 = ppuVar16;
      func_0x000107847aa0(ppuVar16,&lStack_5d0);
      puVar14[7] = uVar13;
      puVar14[8] = uVar2;
      puVar14[9] = puVar19;
      if (puVar19 == (undefined8 *)0x0) {
        ppuVar11 = (undefined8 **)0x0;
      }
      else {
        func_0x0001078480f8();
        *ppuVar11 = &PTR_DAT_1109e1778;
        ppuVar11[1] = (undefined8 *)0x0;
        ppuVar11[2] = (undefined8 *)0x0;
        ppuVar11[3] = puVar19;
      }
      puVar14[10] = ppuVar11;
      apuStack_7f8[0] = (undefined8 *)0x0;
      FUN_107847abc(puVar14 + 0xb,&puStack_b8);
      func_0x000107847af8(puVar14 + 0xf,&plStack_3c0);
      func_0x0001073ebf60(puVar14 + 0x29,&pppuStack_f0);
      func_0x0001073ebf60(puVar14 + 0x2c,&uStack_588);
      func_0x0001073ebf60(puVar14 + 0x2f,&uStack_7c8);
      func_0x00010747f9d8(puVar14 + 0x32,&ppuStack_550);
      puVar14[0x37] = uVar17;
      func_0x0001074701f4(&ppuStack_550);
      func_0x0001073ebb78(&uStack_7c8);
      func_0x0001073ebb78(&uStack_588);
      func_0x0001073ebb78(&pppuStack_f0);
      func_0x000107847174(&plStack_3c0);
      func_0x0001078311e0(&puStack_b8);
      func_0x00010784746c(apuStack_7f8);
      func_0x000107846e5c(&lStack_5d0);
      ppuStack_7e0 = ppuVar16;
      puStack_7d8 = puVar14;
      func_0x000107848050(&lStack_5d0);
      lVar6 = lStack_5d0;
      if (lStack_5d0 != 0) {
        lVar20 = *(long *)(unaff_x19 + 0x18);
        ppuStack_7e0 = (undefined8 **)0x0;
        puStack_7d8 = (undefined8 *)0x0;
        plVar8 = (long *)0x30;
        ppuStack_550 = ppuVar16;
        plStack_548 = puVar14;
        __Znwm();
        plStack_548 = (long *)0x0;
        ppuStack_550 = (undefined8 **)0x0;
        *plVar8 = (long)&PTR_DAT_1109e17d8;
        plVar8[1] = lVar20;
        plVar8[2] = (long)&UNK_10782e228;
        plVar8[3] = 0;
        plVar8[4] = (long)ppuVar16;
        plVar8[5] = (long)puVar14;
        lStack_3b8 = 0;
        plStack_3c0 = (long *)0x0;
        func_0x000107831640(&plStack_3c0);
        plStack_3c0 = plVar8;
        func_0x000107831640(&ppuStack_550);
        func_0x0001073ae140(lVar6,&plStack_3c0);
        plVar8 = plStack_3c0;
        plStack_3c0 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          func_0x000107847c68();
        }
      }
      func_0x00010724bcd8(&lStack_5d0);
      func_0x000107831640(&ppuStack_7e0);
LAB_1078460bc:
      func_0x0001073ebb78(alStack_798);
      func_0x0001073ebb78(auStack_780);
      func_0x0001073ebb78(auStack_768);
      func_0x0001078311e0(auStack_750);
      func_0x000107847174(auStack_730);
      func_0x00010743d7e4();
    }
  }
LAB_1078460ec:
  func_0x000107847c84(uStack_80);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073ebb78(alStack_798);
  func_0x0001073ebb78(auStack_780);
  func_0x0001073ebb78(auStack_768);
  func_0x0001078311e0(auStack_750);
  func_0x000107847174(auStack_730);
  puVar12 = auStack_1f8;
  func_0x00010743d7e4();
  func_0x000107847d28();
  iVar4 = *(int *)(puVar12 + 0xc0);
  if (iVar4 == 3) {
    if (*(long *)(puVar12 + 0x98) != 0) {
      func_0x000107848088();
      goto code_r0x000107846460;
    }
  }
  else if (iVar4 != 2) {
    if (iVar4 != 1) {
      return;
    }
    *(undefined4 *)(puVar12 + 0xc0) = 0;
    return;
  }
  func_0x000107847ed8();
code_r0x000107846460:
  func_0x000107847e4c();
  return;
}



/* Entry: 107846ddc; end: 107846de3;  */

void FUN_107846ddc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    func_0x000107847440();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 107846f38; end: 107846fa7;  */

long * FUN_107846f38(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      func_0x000104bd35f4();
      lVar1 = param_1[1];
      while (lVar1 != param_1[2]) {
        param_1[2] = param_1[2] + -0x18;
        func_0x0001074f4f04();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = param_2 * 0x18;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x18;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x18;
  return param_1;
}



/* Entry: 1078470e8; end: 107847173;  */

long * FUN_1078470e8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1078474c4; end: 107847563;  */

long FUN_1078474c4(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x000104c2f714(param_1 + 0x26);
  func_0x0001077b6c4c(param_1 + 0x25);
  func_0x0001073324c4(param_1 + 0x21);
  func_0x0001073c739c();
  *param_1 = extraout_x8;
  func_0x0001072a07f4();
  func_0x0001072a091c();
  func_0x0001073c2948(unaff_x19 + 0xb8);
  func_0x0001073c2948(unaff_x19 + 0xa0);
  func_0x0001073c2948(unaff_x19 + 0x88);
  func_0x0001073c29a0(unaff_x19 + 0x70);
  func_0x0001072ab6cc(unaff_x19 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 8);
  return unaff_x19;
}



/* Entry: 10784767c; end: 10784769f;  */

void FUN_10784767c(void)

{
  return;
}



/* Entry: 107847870; end: 1078478d3;  */

void FUN_107847870(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined1 auStack_50 [48];
  
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar2 = *(code **)(*plVar1 + ((ulong)pcVar2 & 0xffffffff));
  }
  func_0x00010747f9b4(auStack_50,param_1 + 0x20);
  (*pcVar2)(plVar1,auStack_50);
  func_0x0001074701f4(auStack_50);
  return;
}



/* Entry: 1078479c0; end: 1078479c7;  */

void FUN_1078479c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107847abc; end: 107847af7;  */

undefined1 * FUN_107847abc(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x0001078311c4(param_1);
  }
  return param_1;
}



/* Entry: 107847ba8; end: 107847c03;  */

void FUN_107847ba8(long *param_1)

{
  long extraout_x8;
  code *extraout_x9;
  code *pcVar1;
  uint extraout_w11;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107848198();
  pcVar1 = extraout_x9;
  if ((extraout_w11 & 1) != 0) {
    pcVar1 = *(code **)(*param_1 + ((ulong)extraout_x9 & 0xffffffff));
  }
  uStack_28 = *(undefined8 *)(extraout_x8 + 0x28);
  uStack_30 = *(undefined8 *)(extraout_x8 + 0x20);
  *(undefined8 *)(extraout_x8 + 0x20) = 0;
  *(undefined8 *)(extraout_x8 + 0x28) = 0;
  (*pcVar1)();
  func_0x000107831640(&uStack_30);
  return;
}



/* Entry: 107848830; end: 10784887b;  */

void FUN_107848830(long param_1,undefined8 param_2,long param_3)

{
  *(undefined1 *)(param_1 + 0x8a) = 1;
  if (param_3 == *(long *)(param_1 + 0x3b8)) {
    *(undefined1 *)(param_1 + 0x89) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000107848860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x90) + 0x18))(*(long **)(param_1 + 0x90),param_1,param_2);
  return;
}



/* Entry: 107848ba8; end: 107848bd3;  */

void FUN_107848ba8(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x0001078497ac();
  *param_1 = &PTR_DAT_1109e1938;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 107849108; end: 107849123;  */

void FUN_107849108(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109e19b8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107849418; end: 107849447;  */

undefined8 FUN_107849418(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107849448(param_1 + 0x80);
  func_0x00010724b54c(param_1 + 0x10);
  func_0x00010724ce4c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 107849578; end: 10784959f;  */

undefined8 * FUN_107849578(undefined8 *param_1)

{
  func_0x00010750db08(param_1 + 0x12);
  *param_1 = &PTR_DAT_1109b9158;
  func_0x000107518510(param_1 + 0xd);
  func_0x000107518478(param_1 + 8);
  func_0x0001075183b4(param_1 + 3);
  func_0x00010751838c(param_1 + 1);
  return param_1;
}



/* Entry: 10784963c; end: 10784966f;  */

long FUN_10784963c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107849780(param_2,param_1,&PTR_DAT_1109e1b98);
  param_1 = param_1 + 0x18;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107849da0; end: 107849da7;  */

void FUN_107849da0(void)

{
  return;
}



/* Entry: 107849eb4; end: 107849ec7;  */

void FUN_107849eb4(void)

{
  func_0x000107849ef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10784a4f0; end: 10784a4fb;  */

void FUN_10784a4f0(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_2 + 0x78);
  uStack_30 = *(undefined8 *)(param_2 + 0x70);
  if (*(long *)(param_2 + 0x78) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x78) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107314188(param_1,&uStack_30,*(undefined8 *)(param_2 + 0x80));
  func_0x00010731486c();
  return;
}



/* Entry: 10784a6e0; end: 10784a70b;  */

undefined8 * FUN_10784a6e0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x19999999999999a) {
    puVar1 = (undefined8 *)(param_2 * 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e1cf0;
  func_0x00010784a778(param_1 + 3);
  return param_1;
}



/* Entry: 10784a830; end: 10784a863;  */

void FUN_10784a830(void)

{
  return;
}



/* Entry: 10784ac44; end: 10784ac9b;  */

void FUN_10784ac44(long param_1,ulong param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *(ulong *)(param_1 + 0x30) = param_2;
  while (param_2 < *(ulong *)(param_1 + 0x28)) {
    uStack_28 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    uStack_30 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010784ac9c(param_1 + 0x18,&uStack_30);
    func_0x00010784b0dc(param_1,&uStack_30);
    param_2 = *(ulong *)(param_1 + 0x30);
  }
  return;
}



/* Entry: 10784b088; end: 10784b0db;  */

void FUN_10784b088(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (param_2 < 0) {
    for (; param_2 != 0; param_2 = param_2 + 1) {
      puVar1 = (undefined8 *)*puVar1;
    }
    *param_1 = puVar1;
    return;
  }
  while (0 < param_2) {
    puVar1 = (undefined8 *)puVar1[1];
    *param_1 = puVar1;
    param_2 = param_2 + -1;
  }
  return;
}



/* Entry: 10784b338; end: 10784b343;  */

ulong FUN_10784b338(undefined8 param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(param_2 + 8) + 0x9e3779b97f4a7c15;
  uVar1 = (ulong)*(uint *)(param_2 + 0xc) + uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^
          uVar1;
  return ((ulong)*(byte *)(param_2 + 4) | uVar1 << 0xc) + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
}



/* Entry: 10784b750; end: 10784b77f;  */

bool FUN_10784b750(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = (char)param_1[0x36] == (char)param_2[0x36];
  if (bVar1 && (char)param_1[0x36] != '\0') {
    bVar1 = *param_1 == *param_2;
  }
  return !bVar1;
}



/* Entry: 10784bd84; end: 10784bdef;  */

void FUN_10784bd84(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010784d970();
  func_0x000104c318bc();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(unaff_x19 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  func_0x0001072f9a20(param_1 + 0x58,unaff_x19 + 0x58);
  func_0x000105302f48(unaff_x20 + 0x148,unaff_x19 + 0x148);
  func_0x00010784d9d4();
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = *(undefined8 *)(unaff_x19 + 0x178);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x180);
  *(undefined8 *)(unaff_x20 + 0x188) = *(undefined8 *)(unaff_x19 + 0x188);
  *(undefined8 *)(unaff_x20 + 0x180) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x178) = 0;
  *(undefined8 *)(unaff_x19 + 0x180) = 0;
  *(undefined8 *)(unaff_x19 + 0x188) = 0;
  return;
}



/* Entry: 10784bfb0; end: 10784bfe7;  */

undefined8 * FUN_10784bfb0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e1e98;
  func_0x00010784c060(param_1 + 3);
  return param_1;
}



/* Entry: 10784c11c; end: 10784c153;  */

void FUN_10784c11c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010784d970();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -400;
    func_0x00010784be90();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10784c2c4; end: 10784c2d7;  */

void FUN_10784c2c4(void)

{
  func_0x00010784c358();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10784c45c; end: 10784cb43;  */

long * FUN_10784c45c(long param_1,long *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 in_ZR;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 extraout_x8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  double dVar18;
  long lStack_690;
  long lStack_688;
  long lStack_680;
  long *plStack_678;
  undefined4 uStack_670;
  long lStack_668;
  undefined4 uStack_660;
  long lStack_650;
  undefined1 uStack_648;
  undefined1 auStack_640 [88];
  undefined1 auStack_5e8 [240];
  undefined1 auStack_4f8 [32];
  undefined8 uStack_4d8;
  long lStack_4d0;
  undefined1 auStack_4c8 [24];
  char cStack_4b0;
  undefined4 auStack_4a8 [2];
  undefined4 uStack_4a0;
  undefined8 uStack_3a0;
  ulong uStack_398;
  undefined4 uStack_388;
  undefined **ppuStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined4 uStack_360;
  undefined4 uStack_358;
  undefined1 uStack_354;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long *plStack_2b8;
  long lStack_210;
  ulong uStack_208;
  undefined1 uStack_1c4;
  undefined8 uStack_80;
  
  lVar6 = param_1;
  func_0x00010784d84c();
  lStack_688 = 0;
  lStack_680 = 0;
  lVar6 = *(long *)(lVar6 + 0x10);
  uStack_80 = extraout_x8;
  if (((lVar6 != 0) && (__ZNSt3__119__shared_weak_count4lockEv(), lStack_680 = lVar6, lVar6 != 0))
     && (lStack_688 = *(long *)(param_1 + 8), lStack_688 != 0)) {
    auStack_640[0] = 0;
    cStack_4b0 = '\0';
    lStack_210 = lStack_688 + 400;
    uStack_208 = CONCAT71(uStack_208._1_7_,1);
    func_0x00010724e404();
    dVar18 = *(double *)(lStack_688 + 0x188);
    func_0x00010724e49c(&lStack_210);
    lVar6 = lStack_688;
    func_0x00010784d97c();
    lVar17 = *(long *)(lStack_688 + 0x248);
    lVar14 = *(long *)(lStack_688 + 0x250);
    pcVar10 = "false";
    if (lVar17 == lVar14) {
      uVar12 = 0;
    }
    else {
      lStack_690 = lVar6;
      lVar6 = lVar17;
      lVar15 = lVar14;
      if (*(char *)(lStack_688 + 0x260) == '\x01') {
        uVar11 = *(undefined8 *)(param_1 + 0x18);
        puVar2 = *(undefined8 **)(param_1 + 0x20);
        uStack_3a0 = CONCAT44(uStack_3a0._4_4_,0x3d);
        uStack_388 = 0;
        uStack_368 = 0;
        uStack_370 = 0;
        uStack_378 = 0;
        ppuStack_380 = &PTR_DAT_110996720;
        uStack_360 = 0x3d;
        uStack_358 = 0;
        uStack_354 = 1;
        uStack_340 = 0;
        uStack_350 = 0;
        uStack_348 = 0;
        func_0x00010743cc34(&lStack_210,&uStack_3a0,7);
        func_0x00010743d7bc(auStack_4a8,&lStack_210);
        func_0x000107288cd8(&lStack_210);
        func_0x000107262330(&uStack_3a0);
        lStack_650 = lStack_688 + 0xe0;
        uStack_648 = 1;
        func_0x00010724e404();
        if (*(char *)(lStack_688 + 0xd8) == '\x01') {
          func_0x00010745f750(&lStack_668,uVar11);
          lVar15 = *(long *)(lStack_688 + 0x250);
          for (lVar6 = *(long *)(lStack_688 + 0x248); lVar13 = lStack_688,
              puVar4 = PTR___ZSt7nothrow_1103469d8, lVar6 != lVar15; lVar6 = lVar6 + 400) {
            if ((*(byte *)(lStack_688 + 0xd8) & 1) == 0) {
              func_0x000104bdc2c8();
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10784ca38);
              (*pcVar5)();
            }
            FUN_1077512dc((float)dVar18,&uStack_3a0);
            plStack_2b8 = &lStack_668;
            func_0x0001077514d8(&uStack_3a0,lVar6 + 0x58);
            func_0x000107751334(&lStack_210,&uStack_3a0);
            func_0x000107267da8(&uStack_3a0);
            func_0x0001077b45c0(&uStack_3a0,lVar13,&lStack_210);
            func_0x000107269df4(lVar6 + 0x178,&uStack_3a0);
            func_0x000107269e3c(&uStack_3a0);
            func_0x000107267da8(&lStack_210);
          }
          lVar15 = *(long *)(lStack_688 + 0x248);
          lVar13 = *(long *)(lStack_688 + 0x250);
          plStack_678 = &lStack_688;
          lVar6 = lVar13 - lVar15;
          uStack_208 = 0;
          lStack_210 = 0;
          uVar3 = lVar6 / 400;
          uVar16 = uVar3;
          if (0 < lVar6) {
            for (; 0 < (long)uVar16; uVar16 = uVar16 >> 1) {
              lVar6 = uVar16 * 400;
              __ZnwmRKSt9nothrow_t(lVar6,puVar4);
              if (lVar6 != 0) goto LAB_10784c6d0;
            }
            lVar6 = 0;
LAB_10784c6d0:
            uStack_3a0 = 0;
            uStack_398 = uVar16;
            func_0x00010784cf38(&lStack_210,lVar6);
            uStack_208 = uVar16;
            FUN_10784cf50(&uStack_3a0);
          }
          func_0x00010784d9a8(lVar15,lVar13,&plStack_678,uVar3,lStack_210);
          FUN_10784cf50(&lStack_210);
          func_0x00010784d824(0x3e);
          uStack_1c4 = 1;
          func_0x00010784d890();
          plVar7 = &lStack_210;
          func_0x0001072bbe40(plVar7,&DAT_10f34bce8);
          uStack_3a0 = CONCAT44(uStack_3a0._4_4_,1);
          uStack_398 = uStack_398 & 0xffffffff00000000;
          plStack_678 = (long *)*puVar2;
          uStack_670 = 3;
          func_0x00010743fa9c(puVar2,plVar7,&uStack_3a0,&plStack_678,7);
          func_0x00010784d888();
          func_0x00010726b264(&lStack_668);
        }
        func_0x00010724e49c(&lStack_650);
        *(undefined1 *)(lStack_688 + 0x260) = 0;
        func_0x00010743d7e4(auStack_4a8);
        lVar6 = *(long *)(lStack_688 + 0x248);
        lVar15 = *(long *)(lStack_688 + 0x250);
      }
      lVar13 = lVar6;
      do {
        lVar9 = lVar13;
        if (lVar9 == lVar15) break;
        lVar13 = lVar9 + 400;
      } while (*(uint *)(lVar6 + 0x168) <= *(uint *)(lVar9 + 0x168));
      if (cStack_4b0 == '\x01') {
        func_0x00010784be90(auStack_640);
        cStack_4b0 = '\0';
      }
      func_0x00010784a588(auStack_640,lVar6);
      func_0x00010728451c(auStack_5e8,lVar6 + 0x58);
      func_0x00010724cbe8(auStack_4f8,lVar6 + 0x148);
      lStack_4d0 = *(long *)(lVar6 + 0x170);
      uStack_4d8 = *(undefined8 *)(lVar6 + 0x168);
      func_0x000107269c3c(auStack_4c8,lVar6 + 0x178);
      lVar6 = lStack_688;
      cStack_4b0 = '\x01';
      param_2 = (long *)(*(long *)(lStack_688 + 0x248) + 400);
      func_0x00010784cbc4(param_2,*(undefined8 *)(lStack_688 + 0x250));
      FUN_10784c11c(lVar6 + 0x248);
      if (lVar9 != lVar15) {
        pcVar10 = "true";
      }
      uVar12 = (undefined4)((*(long *)(lStack_688 + 0x250) - *(long *)(lStack_688 + 0x248)) / 400);
    }
    func_0x00010784d8cc();
    in_ZR = lVar17 == lVar14;
    if (!(bool)in_ZR) {
      uVar1 = *(undefined1 *)(lStack_688 + 0x2ac);
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010784d824(0x3b);
      uStack_1c4 = 1;
      func_0x00010784d890();
      func_0x00010729d56c(&lStack_210,&UNK_10f42b316,pcVar10);
      func_0x00010784d8e4();
      uStack_3a0 = CONCAT44(uStack_3a0._4_4_,1);
      uStack_398 = uStack_398 & 0xffffffff00000000;
      func_0x00010784d958();
      func_0x00010743fa9c(uVar11);
      func_0x00010784d888();
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010784d824(0x3a);
      uStack_1c4 = 1;
      func_0x00010784d890();
      func_0x000104c2fe00(&uStack_3a0,auStack_640);
      plVar7 = &lStack_210;
      func_0x000107371bc4(plVar7,"source",&uStack_3a0);
      func_0x0001072df7b4();
      func_0x00010784d8e4();
      plVar8 = plVar7;
      __ZNSt3__16chrono12steady_clock3nowEv();
      lStack_668 = ((long)plVar8 - lStack_4d0) / 1000;
      func_0x00010784d958();
      func_0x00010743f9dc(uVar11,plVar7,&lStack_668,auStack_4a8,7);
      func_0x000104c2f714(&uStack_3a0);
      func_0x00010784d888();
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010784d824(0x3c);
      uStack_1c4 = 1;
      func_0x00010784d890();
      param_2 = &lStack_210;
      func_0x0001072bbe40(param_2,&DAT_10f34bce8,uVar1);
      uStack_4a0 = 1;
      lStack_668 = **(long **)(param_1 + 0x20);
      uStack_660 = 3;
      auStack_4a8[0] = uVar12;
      func_0x00010743fa44(uVar11,param_2,auStack_4a8,&lStack_668,7);
      func_0x00010784d888();
      func_0x000104c003e8(auStack_4f8);
    }
    func_0x00010784cc68(auStack_640);
  }
  plVar7 = &lStack_688;
  func_0x0001074f9458();
  func_0x00010784d810(uStack_80);
  if ((bool)in_ZR) {
    return plVar7;
  }
  ___stack_chk_fail();
  func_0x00010784d888();
  func_0x00010726b264(&lStack_668);
  func_0x00010724e49c(&lStack_650);
  func_0x00010743d7e4(auStack_4a8);
  __ZNSt3__15mutex6unlockEv(lStack_690 + 0x268);
  func_0x00010784cc68(auStack_640);
  plVar7 = &lStack_688;
  func_0x0001074f9458(plVar7);
  func_0x00010784d874();
  func_0x0001004a5364(param_2,&PTR_DAT_1109e1f98);
  plVar7 = plVar7 + 1;
  if ((int)param_2 == 0) {
    plVar7 = (long *)0x0;
  }
  return plVar7;
}



/* Entry: 10784cf50; end: 10784cf73;  */

undefined8 FUN_10784cf50(undefined8 param_1)

{
  func_0x00010784cf38(param_1,0);
  return param_1;
}



/* Entry: 10784dab0; end: 10784dbab;  */

/* WARNING: Possible PIC construction at 0x00010784dae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010784dae4) */
/* WARNING: Removing unreachable block (ram,0x00010784db7c) */
/* WARNING: Removing unreachable block (ram,0x00010784db94) */
/* WARNING: Removing unreachable block (ram,0x00010784dba4) */
/* WARNING: Removing unreachable block (ram,0x00010784db68) */

undefined8 * FUN_10784dab0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)(param_1 + 0x370) = uVar2;
  *(undefined8 *)(param_1 + 0x368) = uVar1;
  func_0x00010784e34c();
  return (undefined8 *)(param_1 + 0x368);
}



/* Entry: 10784dfdc; end: 10784e003;  */

long FUN_10784dfdc(long param_1)

{
  func_0x00010784e004();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10784e2a4; end: 10784e30b;  */

undefined8 * FUN_10784e2a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_1109e2238;
  func_0x0001077c2408(param_1 + 1);
  func_0x000107332298(param_1 + 5,param_3);
  return param_1;
}



/* Entry: 10784e678; end: 10784e6ab;  */

void FUN_10784e678(void)

{
  func_0x00010784e6e8();
  return;
}



/* Entry: 10784e84c; end: 10784e89f;  */

void FUN_10784e84c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uStack_28 = param_3;
  func_0x00010782b438(&uStack_40,param_2 + 0x40,&uStack_28,param_2 + 0x50);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010737d404(&uStack_40);
  return;
}



/* Entry: 10784ea9c; end: 10784ea9f;  */

undefined8 * FUN_10784ea9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010784f518();
  func_0x000104c2f714(puVar1 + 0xb3);
  func_0x0001072aca78(param_1 + 0xb0);
  func_0x00010724bd50(param_1 + 0xae);
  func_0x00010724b374(param_1 + 0x6f);
  *param_1 = &PTR_DAT_1109e0d50;
  param_1[0x25] = &PTR_DAT_1109e0e60;
  param_1[0x26] = &PTR_DAT_1109e0e88;
  param_1[0x31] = &PTR_DAT_1109e0eb0;
  param_1[0x33] = &PTR_DAT_1109e0ed8;
  param_1[0x35] = &PTR_DAT_1109e0f00;
  *(undefined1 *)(param_1[0x47] + 0x30) = 1;
  func_0x0001073ada2c(*(undefined8 *)(param_1[0x47] + 0x18));
  func_0x00010780f2c0(param_1[0x4e],param_1 + 0x25);
  func_0x000107831228(param_1 + 0x69);
  FUN_1078312d4(param_1 + 100);
  func_0x000107518510(param_1 + 0x5f);
  func_0x000107518478(param_1 + 0x5a);
  func_0x0001075183b4(param_1 + 0x55);
  func_0x00010751838c(param_1 + 0x53);
  func_0x0001074f9d98(param_1 + 0x51);
  func_0x00010724bd50(param_1 + 0x4c);
  func_0x000107831700(param_1 + 0x49);
  func_0x0001078316dc(param_1 + 0x47);
  func_0x000107831374(param_1 + 0x3f);
  func_0x000107831640(param_1 + 0x3d);
  func_0x0001072c9240(param_1 + 0x37);
  func_0x000107432200(param_1 + 0x35);
  func_0x0001074321c8(param_1 + 0x33);
  func_0x000107432190(param_1 + 0x31);
  func_0x00010747c918(param_1 + 0x26);
  *param_1 = &PTR_DAT_1109e1d40;
  func_0x00010750bcd8(param_1 + 0x13);
  func_0x000104c2f714(param_1 + 4);
  return param_1;
}



/* Entry: 10784eea4; end: 10784eebf;  */

void FUN_10784eea4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109e2528;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10784f48c; end: 10784f4c3;  */

long FUN_10784f48c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e2608);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1078504d8; end: 1078504f3;  */

undefined4 FUN_1078504d8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x128);
}



/* Entry: 107850e28; end: 107850e97;  */

long * FUN_107850e28(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  func_0x000107850880();
  func_0x000107851cb4(*(undefined8 *)(param_1 + 0x38));
  lVar1 = *(long *)(param_1 + 0x38) + 0xc0;
  func_0x00010737ba38(lVar1,param_2);
  if (lVar1 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = *(long **)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))();
  }
  func_0x000107851cf8();
  return plVar2;
}



/* Entry: 10785113c; end: 10785114f;  */

void FUN_10785113c(void)

{
  func_0x0001078511cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107851320; end: 107851327;  */

void FUN_107851320(void)

{
  return;
}



/* Entry: 107851454; end: 10785148b;  */

long FUN_107851454(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e2870);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107851780; end: 107851797;  */

long FUN_107851780(long param_1)

{
  func_0x000104c314c4(param_1 + 0xa0);
  func_0x000104c314c4(param_1 + 0x88);
  func_0x000104c314fc(param_1 + 0x70);
  func_0x000104c31534(param_1 + 0x58);
  func_0x000104c345d8();
  return param_1 + 0x18;
}



/* Entry: 107851a64; end: 107851a83;  */

void FUN_107851a64(void)

{
  undefined1 uStack_11;
  
  func_0x000107851a84(&uStack_11);
  return;
}



/* Entry: 107851be4; end: 107851be7;  */

void FUN_107851be4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107851ff0; end: 107852bb7;  */

undefined8 FUN_107851ff0(long param_1,int param_2,long *param_3,long *param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  undefined ***pppuVar10;
  undefined1 *puVar11;
  byte bVar12;
  undefined8 extraout_x8;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined1 auStack_4d0 [32];
  undefined1 uStack_4b0;
  undefined1 auStack_4a8 [40];
  long lStack_480;
  long lStack_478;
  long lStack_470;
  undefined1 auStack_468 [56];
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined1 auStack_400 [56];
  undefined1 auStack_3c8 [64];
  ulong uStack_388;
  undefined1 auStack_380 [48];
  byte abStack_350 [56];
  undefined1 auStack_318 [56];
  undefined1 auStack_2e0 [160];
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined1 auStack_230 [40];
  byte bStack_208;
  undefined1 auStack_1f0 [56];
  undefined **ppuStack_1b8;
  undefined4 uStack_1b0;
  undefined ***pppuStack_1a0;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  ulong auStack_148 [7];
  undefined1 uStack_110;
  ulong auStack_108 [7];
  undefined1 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined8 *puStack_b0;
  char cStack_90;
  undefined8 uStack_88;
  
  func_0x0001078544d8();
  uVar4 = param_2 == 1;
  uStack_88 = extraout_x8;
  if ((bool)uVar4) {
    lVar16 = *param_4;
    iVar5 = (int)lVar16;
    iVar15 = iVar5 + 8;
    func_0x000104c2d614();
    if (iVar15 != 0) {
      uStack_388 = uStack_388 & 0xffffffffffffff00;
      abStack_350[0] = 0;
LAB_1078520cc:
      iVar15 = iVar5 + 0x40;
      func_0x000104c2d614();
      if (iVar15 == 0) {
        func_0x00010729807c(&puStack_240,lVar16 + 0x40);
      }
      else {
        puStack_240 = (undefined8 *)((ulong)puStack_240 & 0xffffffffffffff00);
        bStack_208 = 0;
      }
      iVar15 = iVar5 + 0x78;
      func_0x000104c2d614();
      if (iVar15 == 0) {
        func_0x00010729807c(auStack_c8,lVar16 + 0x78);
      }
      else {
        auStack_c8[0] = 0;
        cStack_90 = '\0';
      }
      iVar15 = iVar5 + 0xb0;
      func_0x000104c2d614();
      if (iVar15 == 0) {
        func_0x00010729807c(auStack_108,lVar16 + 0xb0);
      }
      else {
        auStack_108[0] = auStack_108[0] & 0xffffffffffffff00;
        uStack_d0 = 0;
      }
      if (*(int *)(lVar16 + 0xe8) != 0) {
LAB_107852288:
        func_0x000107852bb8(auStack_148,param_3,&puStack_240,auStack_c8,auStack_108,lVar16 + 0xf0);
        uVar4 = abStack_350[0] == 1;
        if ((bool)uVar4) {
          func_0x000107262f3c(&uStack_388,auStack_148);
        }
        else {
          func_0x000104c2fe00(&uStack_388,auStack_148);
          abStack_350[0] = 1;
        }
        func_0x000107854574();
        func_0x00010785448c();
        func_0x000107854494();
        func_0x000107854558();
        goto LAB_1078522e4;
      }
      func_0x000107854640();
      if ((bool)uVar4) {
        plVar13 = param_3;
        func_0x000107392e34();
        bVar12 = *(byte *)(*(long *)(*plVar13 + 0x30) + 0x160);
      }
      else {
        bVar12 = 0;
      }
      if (((bStack_208 & 1) != 0) || ((bVar12 & 1) != 0)) goto LAB_107852288;
      func_0x00010785448c();
      func_0x000107854494();
      func_0x000107854558();
      uVar14 = 0;
LAB_107852484:
      func_0x000107854638();
      goto LAB_107852704;
    }
    func_0x00010729807c(&uStack_388,lVar16 + 8);
    if ((abStack_350[0] & 1) == 0) goto LAB_1078520cc;
LAB_1078522e4:
    uVar1 = *(undefined4 *)(lVar16 + 0x128);
    iVar5 = iVar5 + 0x130;
    func_0x000104c2d614();
    if (iVar5 == 0) {
      func_0x00010729807c(&puStack_240,lVar16 + 0x130);
      uVar4 = bStack_208 == 1;
      if ((!(bool)uVar4) || ((*(byte *)(param_3 + 2) & 1) == 0)) goto LAB_1078522fc;
      lStack_480 = param_1;
      func_0x000107392e34();
      lStack_470 = param_3[1];
      lStack_478 = *param_3;
      if (param_3[1] != 0) {
        do {
          func_0x000107854460();
        } while (extraout_w10 != 0);
      }
      if ((bStack_208 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_107852a00;
      }
      func_0x000104c2fe00(auStack_468,&puStack_240);
      uStack_428 = *(undefined8 *)(param_1 + 0x100);
      uStack_430 = *(undefined8 *)(param_1 + 0xf8);
      if (*(long *)(param_1 + 0x100) != 0) {
        do {
          func_0x000107854460();
        } while (extraout_w10_00 != 0);
      }
      uStack_420 = *(undefined8 *)(param_1 + 0x108);
      auStack_148[1] = 0;
      auStack_148[0] = 0;
      auStack_108[0] = 0;
      auStack_108[1] = 0;
      func_0x00010725b1d4(auStack_108);
      func_0x00010725b1d4(auStack_148);
      func_0x000107853680(&uStack_418,&lStack_480);
      puVar8 = (undefined8 *)0x70;
      __Znwm();
      *puVar8 = &PTR_DAT_1109e2ba0;
      puVar8[2] = uStack_428;
      puVar8[1] = uStack_430;
      uStack_430 = 0;
      uStack_428 = 0;
      puVar8[4] = uStack_418;
      puVar8[3] = uStack_420;
      puVar8[6] = uStack_408;
      puVar8[5] = uStack_410;
      uStack_410 = 0;
      uStack_408 = 0;
      func_0x000104c318bc(puVar8 + 7,auStack_400);
      puStack_b0 = puVar8;
      func_0x000107852fec(&uStack_430);
      func_0x000107853014(&lStack_480);
      if ((abStack_350[0] & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_107852a00;
      }
      plVar13 = *(long **)(param_1 + 0xf0);
      func_0x0001078536c8(auStack_4a8,auStack_c8);
      (**(code **)(*plVar13 + 0x30))(plVar13,&uStack_388,uVar1,auStack_4a8);
      func_0x00010730b1b0(auStack_4a8);
      func_0x0001006393ec(auStack_c8);
LAB_10785247c:
      func_0x000107854558();
      uVar14 = 1;
      goto LAB_107852484;
    }
    puStack_240 = (undefined8 *)((ulong)puStack_240 & 0xffffffffffffff00);
    bStack_208 = 0;
LAB_1078522fc:
    if ((abStack_350[0] & 1) != 0) {
      auStack_4d0[0] = 0;
      uStack_4b0 = 0;
      (**(code **)(**(long **)(param_1 + 0xf0) + 0x30))
                (*(long **)(param_1 + 0xf0),&uStack_388,uVar1,auStack_4d0);
      func_0x00010730b1b0(auStack_4d0);
      goto LAB_10785247c;
    }
  }
  else {
    if (param_2 == 0) {
      lVar16 = *param_4;
      iVar15 = (int)*(float *)(lVar16 + 0x174);
      if (iVar15 == 0) {
        iVar15 = (int)*(float *)(lVar16 + 0x170);
      }
      fVar22 = *(float *)(lVar16 + 0x10);
      fVar23 = *(float *)(lVar16 + 0x14);
      uVar2 = *(undefined1 *)(lVar16 + 0x20c);
      fVar20 = *(float *)(lVar16 + 8);
      fVar21 = *(float *)(lVar16 + 0xc);
      iVar6 = (int)lVar16;
      iVar5 = iVar6 + 0x88;
      func_0x000104c2d614();
      if (iVar5 == 0) {
        func_0x00010729807c(auStack_c8,lVar16 + 0x88);
      }
      else {
        auStack_c8[0] = 0;
        cStack_90 = '\0';
      }
      iVar5 = iVar6 + 0xc0;
      func_0x000104c2d614();
      if (iVar5 == 0) {
        func_0x00010729807c(auStack_108,lVar16 + 0xc0);
      }
      else {
        auStack_108[0] = auStack_108[0] & 0xffffffffffffff00;
        uStack_d0 = 0;
      }
      iVar5 = iVar6 + 0xf8;
      func_0x000104c2d614();
      if (iVar5 == 0) {
        func_0x00010729807c(auStack_148,lVar16 + 0xf8);
      }
      else {
        auStack_148[0] = auStack_148[0] & 0xffffffffffffff00;
        uStack_110 = 0;
      }
      puVar7 = (undefined8 *)0x1a0;
      __Znwm();
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_DAT_1109e2a38;
      puVar8 = puVar7 + 3;
      _bzero(puVar8,0x188);
      func_0x000104c2f64c(puVar7 + 4);
      func_0x000104c2f64c(puVar7 + 0xb);
      func_0x000104c2f64c(puVar7 + 0x12);
      func_0x000104c2f64c(puVar7 + 0x19);
      *(undefined4 *)(puVar7 + 0x20) = 0;
      *(undefined1 *)(puVar7 + 0x21) = 0;
      *(undefined1 *)(puVar7 + 0x23) = 0;
      *(undefined1 *)(puVar7 + 0x24) = 0;
      *(undefined1 *)(puVar7 + 0x2b) = 0;
      *(undefined1 *)(puVar7 + 0x2c) = 0;
      *(undefined1 *)(puVar7 + 0x33) = 0;
      puStack_4e0 = puVar8;
      puStack_4d8 = puVar7;
      func_0x000107853274(puVar7 + 0x21,param_3);
      iVar5 = iVar6 + 0x198;
      func_0x000104c2d614();
      if (iVar5 == 0) {
        func_0x00010729807c(&uStack_388,lVar16 + 0x198);
      }
      else {
        uStack_388 = uStack_388 & 0xffffffffffffff00;
        abStack_350[0] = 0;
      }
      func_0x0001072e948c(puVar7 + 0x24,&uStack_388);
      func_0x000107854638();
      iVar5 = iVar6 + 0x1d0;
      func_0x000104c2d614();
      if (iVar5 == 0) {
        func_0x00010729807c(&uStack_388,lVar16 + 0x1d0);
      }
      else {
        uStack_388 = uStack_388 & 0xffffffffffffff00;
        abStack_350[0] = 0;
      }
      func_0x0001072e948c(puVar7 + 0x2c,&uStack_388);
      func_0x000107854638();
      iVar5 = *(int *)(lVar16 + 0x130);
      if (iVar5 == 0) {
        uVar4 = cStack_90 == '\x01';
        if ((bool)uVar4) {
LAB_1078527b0:
          func_0x000104c2fe00(&uStack_180);
        }
        else {
          func_0x000107854640();
          if (!(bool)uVar4) {
            func_0x000107854568();
            goto LAB_1078527b0;
          }
          func_0x000107854568();
          func_0x0001072e7640(&uStack_180,extraout_x9 + 0x128);
        }
        iVar5 = (int)&uStack_180;
        func_0x000104c2d614();
        if (iVar5 != 0) {
          uStack_388 = 0;
          func_0x000107854568();
          func_0x000104c2fe00(auStack_380);
          func_0x0001078545ec();
          func_0x000104c2f714(auStack_380);
          puVar9 = &uStack_180;
          goto LAB_107852560;
        }
        func_0x000107854640();
        if (!(bool)uVar4) {
          func_0x000107854568();
        }
        func_0x000104c2fe00(&uStack_388);
        func_0x000107853198(&ppuStack_1b8,auStack_108,&uStack_388);
        func_0x000107854630();
        pppuVar10 = &ppuStack_1b8;
        func_0x000104c2d614();
        if ((int)pppuVar10 == 0) {
          func_0x000107854640();
          if (!(bool)uVar4) {
            func_0x000107854568();
          }
          func_0x000104c2fe00(&uStack_388);
          func_0x000107853198(auStack_1f0,auStack_148,&uStack_388);
          func_0x000107854630();
          func_0x000104c2fe00(&uStack_388,&uStack_180);
          func_0x000104c2fe00(abStack_350,&ppuStack_1b8);
          func_0x000104c2fe00(auStack_318,auStack_1f0);
          func_0x000104c2fe00(auStack_2e0,lVar16 + 0x138);
          if (*(int *)(puVar7 + 0x20) == 0) {
            func_0x000104c2f1f0(puVar7 + 4,&uStack_388);
            func_0x000104c2f1f0(puVar7 + 0xb,abStack_350);
            func_0x000104c2f1f0(puVar7 + 0x12,auStack_318);
            func_0x000104c2f1f0(puVar7 + 0x19,auStack_2e0);
          }
          else {
            func_0x00010785320c(puVar7 + 4);
            func_0x000107854618();
            func_0x000104c318bc(puVar7 + 0xb,abStack_350);
            func_0x000104c318bc(puVar7 + 0x12,auStack_318);
            func_0x000104c318bc(puVar7 + 0x19,auStack_2e0);
            *(undefined4 *)(puVar7 + 0x20) = 0;
          }
          func_0x000107853340(&uStack_388);
          puVar11 = auStack_1f0;
        }
        else {
          uStack_388 = 0;
          func_0x000107854568();
          func_0x000104c2fe00(auStack_380);
          func_0x0001078545ec();
          puVar11 = auStack_380;
        }
        func_0x000104c2f714(puVar11);
        func_0x000104c2f714(&ppuStack_1b8);
        func_0x000104c2f714(&uStack_180);
        if (((ulong)pppuVar10 & 1) == 0) goto LAB_107852524;
      }
      else {
        if (iVar5 == 1) {
          func_0x000104c2fe00(&uStack_388,lVar16 + 0x138);
          uVar4 = *(int *)(puVar7 + 0x20) == 1;
          if ((bool)uVar4) {
            func_0x000104c2f1f0(puVar7 + 4,&uStack_388);
          }
          else {
            func_0x00010785320c(puVar7 + 4);
            func_0x000107854618();
            *(undefined4 *)(puVar7 + 0x20) = 1;
          }
          func_0x000107854630();
        }
        else {
          uVar4 = 0;
          if ((iVar5 == 2) && (uVar4 = *(int *)(puVar7 + 0x20) == 2, !(bool)uVar4)) {
            func_0x00010785320c(puVar7 + 4);
            *(undefined4 *)(puVar7 + 0x20) = 2;
          }
        }
LAB_107852524:
        func_0x000107852bb8(&uStack_388,param_3,auStack_c8,auStack_108,auStack_148,lVar16 + 0x138);
        puStack_4e0 = (undefined8 *)0x0;
        puStack_4d8 = (undefined8 *)0x0;
        puStack_240 = puVar8;
        puStack_238 = puVar7;
        func_0x000104c2fe00(auStack_230,&uStack_388);
        puVar9 = &uStack_388;
LAB_107852560:
        func_0x000104c2f714(puVar9);
      }
      func_0x00010785337c(&puStack_4e0);
      func_0x00010724b3d8(auStack_148);
      func_0x00010785448c();
      func_0x000107854494();
      if (puStack_240 == (undefined8 *)0x0) {
        uVar14 = 0;
      }
      else {
        iVar5 = iVar6 + 0x18;
        func_0x000104c2d614();
        if (iVar5 == 0) {
          func_0x00010729807c(auStack_c8,lVar16 + 0x18);
        }
        else {
          auStack_c8[0] = 0;
          cStack_90 = '\0';
        }
        iVar6 = iVar6 + 0x50;
        func_0x000104c2d614();
        if (iVar6 == 0) {
          func_0x00010729807c(auStack_108,lVar16 + 0x50);
        }
        else {
          auStack_108[0] = auStack_108[0] & 0xffffffffffffff00;
          uStack_d0 = 0;
        }
        puVar11 = auStack_c8;
        if (cStack_90 == '\0') {
          puVar11 = auStack_230;
        }
        func_0x000104c2fe00(auStack_148,puVar11);
        func_0x000107263b58(auStack_3c8,auStack_108);
        puStack_4e8 = puStack_238;
        puStack_4f0 = puStack_240;
        puStack_238 = (undefined8 *)0x0;
        puStack_240 = (undefined8 *)0x0;
        uVar4 = *(int *)(lVar16 + 0x130) == 2;
        if ((bool)uVar4) {
          ppuStack_1b8 = &PTR_DAT_1109e2aa0;
code_r0x000107852624:
          pppuStack_1a0 = &ppuStack_1b8;
        }
        else {
          uStack_178 = *(undefined8 *)(lVar16 + 0x184);
          uStack_180 = *(ulong *)(lVar16 + 0x17c);
          uVar14 = *(undefined8 *)(lVar16 + 0x18c);
          uVar4 = (byte)uStack_180 - 1 == 3;
          uStack_170._4_4_ = (int)((ulong)uVar14 >> 0x20);
          uStack_170 = uVar14;
          switch((byte)uStack_180 - 1) {
          case 0:
            ppuStack_1b8 = &PTR_DAT_1109ab4b0;
            goto code_r0x000107852624;
          case 1:
            func_0x0001073b4038(&ppuStack_1b8);
            break;
          case 2:
            uStack_180._4_4_ = (undefined4)(uStack_180 >> 0x20);
            uVar4 = uStack_170._4_4_ == 1;
            uStack_1b0 = uStack_180._4_4_;
            if (!(bool)uVar4) {
              uStack_1b0 = 0x3fa66666;
            }
            ppuStack_1b8 = &PTR_DAT_1109ab5c0;
            pppuStack_1a0 = &ppuStack_1b8;
            break;
          case 3:
            uVar4 = uStack_170._4_4_ == 2;
            if ((bool)uVar4) {
              puVar8 = (undefined8 *)((ulong)&uStack_180 | 4);
              func_0x000107390f60();
              auVar19._0_8_ = (double)(float)puVar8[1];
              auVar19._8_8_ = (double)(float)((ulong)puVar8[1] >> 0x20);
              dVar17 = (double)(float)*puVar8;
              dVar18 = (double)(float)((ulong)*puVar8 >> 0x20);
            }
            else {
              auVar19 = NEON_fmov(0x3ff0000000000000,8);
              dVar17 = 0.0;
              dVar18 = 0.0;
            }
            func_0x0001073b3fdc(&ppuStack_1b8,dVar17,dVar18,auVar19._0_8_,auVar19._8_8_);
            break;
          default:
            func_0x0001073b3fc8(&ppuStack_1b8);
          }
        }
        uStack_180 = (ulong)(uint)(int)fVar22 * 1000000;
        uStack_170 = (ulong)(uint)(int)fVar23 * 1000000;
        uStack_178 = 1;
        uStack_168 = 1;
        uStack_160 = 1;
        fVar22 = *(float *)(lVar16 + 0x208);
        func_0x0001073b0a74();
        func_0x0001073b0ad4((double)fVar20,(double)fVar21,&uStack_388,auStack_148,auStack_3c8,
                            &puStack_4f0,&ppuStack_1b8,&uStack_180,iVar15,uVar2,lVar16 + 0x178,
                            (int)fVar22);
        func_0x00010730b248(&ppuStack_1b8);
        func_0x00010730b220(&puStack_4f0);
        func_0x00010724b3d8(auStack_3c8);
        func_0x000107854574();
        (**(code **)(**(long **)(param_1 + 0xf0) + 0x28))
                  (*(long **)(param_1 + 0xf0),&uStack_388,
                   (ulong)*(uint *)(param_1 + 8) | 0x100000000);
        func_0x00010730b16c(&uStack_388);
        func_0x00010785448c();
        func_0x000107854494();
        uVar14 = 1;
      }
      func_0x000107853430(&puStack_240);
    }
    else {
      uVar14 = 0;
    }
LAB_107852704:
    func_0x000107854478(uStack_88);
    if ((bool)uVar4) {
      return uVar14;
    }
    ___stack_chk_fail();
  }
  func_0x000104bdc2c8();
LAB_107852a00:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x107852a04);
  (*pcVar3)();
}



/* Entry: 1078531f8; end: 10785320b;  */

void FUN_1078531f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


