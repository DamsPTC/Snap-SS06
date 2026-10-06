/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080f22d8; end: 1080f23c7;  */

void FUN_1080f22d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,code *UNRECOVERED_JUMPTABLE)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined8 *puVar4;
  code **ppcVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined8 extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  undefined8 extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w9_05;
  int extraout_w9_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 *unaff_x21;
  long *plVar11;
  undefined8 *unaff_x22;
  undefined8 *puVar12;
  code *in_stack_00000008;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000070;
  code *pcStack_1b8;
  undefined **ppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  int iStack_194;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  long *plStack_178;
  long lStack_170;
  undefined1 **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  long *plStack_108;
  long lStack_100;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 auStack_d8 [48];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined1 *puStack_70;
  code *apcStack_68 [6];
  undefined8 uStack_38;
  undefined8 *puStack_30;
  long *plStack_28;
  long lStack_20;
  undefined8 *puStack_10;
  code *pcStack_8;
  
  func_0x0001080f6efc();
  func_0x0001080f6da8();
  func_0x0001080f66e0();
  func_0x0001080f2e94();
  puVar12 = (undefined8 *)*unaff_x22;
  if (puVar12 != (undefined8 *)0x0) {
    do {
      func_0x0001080f67e4();
    } while (extraout_w10 != 0);
  }
  func_0x0001080f6884(FUN_1080f3aac);
  if (puVar12 != (undefined8 *)0x0) {
    do {
      func_0x0001080f67e4();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001080f69b4();
  func_0x0001080f6d70();
  func_0x0001080f60a8();
  func_0x0001080f6660();
  plVar11 = (long *)*unaff_x21;
  if (plVar11 == (long *)0x0) {
    func_0x0001080f6800();
    func_0x0001080f695c(FUN_1080f3bd8);
  }
  else {
    do {
      func_0x0001080f694c();
    } while (extraout_w9 != 0);
    puVar12 = &stack0x00000008;
    func_0x0001080f6884(0x1080f60e0);
    do {
      func_0x0001080f694c();
    } while (extraout_w9_00 != 0);
    func_0x0001080f69a4();
  }
  puVar7 = &stack0x00000008;
  func_0x0001080f60c4(param_6 + 0x1f8);
  func_0x0001080f6650();
  func_0x0001080f6974();
  func_0x0001080f660c(in_stack_00000038);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_8 = FUN_1080f23c8;
  puVar4 = puVar7;
  puStack_30 = puVar12;
  plStack_28 = plVar11;
  lStack_20 = param_6;
  puStack_10 = &stack0x00000070;
  func_0x0001080f6728();
  uStack_38 = extraout_x8_00;
  func_0x0001080f2e94(puVar4);
  func_0x0001080f6d3c();
  func_0x0001080f6758(0x1080f3be4);
  puVar4 = puVar4 + 0x45;
  func_0x0001080f60a8(puVar4,apcStack_68);
  func_0x0001080f6650();
  func_0x0001080f6800();
  func_0x0001080f6d60(FUN_1080f3bd8);
  func_0x0001080f60c4();
  func_0x0001080f6650();
  func_0x0001080f6a7c(*(undefined8 *)(extraout_x8 + 0x200));
  if (((bool)in_ZR) && (func_0x0001080f6a7c(*(undefined8 *)(extraout_x8 + 0x230)), (bool)in_ZR)) {
    plVar11 = (long *)(extraout_x8 + 8);
    do {
      func_0x0001080f6774();
    } while (extraout_w9_01 != 0);
    do {
      func_0x0001080f6774();
    } while (extraout_w9_02 != 0);
    func_0x0001080f6748();
    do {
      func_0x0001080f69d0();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = extraout_x8_01;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x0001080f6640();
    }
    do {
      func_0x0001080f69d0();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = extraout_x8_02;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x0001080f6640();
    }
  }
  func_0x0001080f660c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcVar10 = FUN_1080f2498;
    func_0x0001080f6efc();
    in_stack_00000008 = pcVar10;
    func_0x0001080f6da8();
    func_0x0001080f66e0();
    FUN_1080f2c0c(puVar4 + 2);
    func_0x0001080f6be4();
    ppcVar5 = (code **)(puVar7 + 0x1d);
    func_0x0001080f6d34(ppcVar5);
    func_0x0001080f6660();
    lVar8 = *plVar11;
    if (lVar8 == 0) {
      func_0x0001080f6800();
      func_0x0001080f695c(FUN_1080f348c);
    }
    else {
      ppcVar5 = apcStack_68;
      FUN_1080f2c98(ppcVar5);
    }
    func_0x0001080f6e60();
    func_0x0001080f6660();
    func_0x0001080f6974();
    func_0x0001080f660c(uStack_38);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    puStack_a0 = puVar12;
    plStack_98 = plVar11;
    puStack_90 = puVar7;
    func_0x0001080f6728();
    ppcVar5 = ppcVar5 + 2;
    uStack_a8 = extraout_x8_04;
    FUN_1080f2c0c(ppcVar5);
    func_0x0001080f6d3c();
    func_0x0001080f6758(FUN_1080f34a4);
    ppcVar5 = ppcVar5 + 0x1d;
    func_0x0001080f6d34(ppcVar5);
    func_0x0001080f6650();
    func_0x0001080f6800();
    func_0x0001080f6abc();
    func_0x0001080f6650();
    func_0x0001080f6a7c(*(undefined8 *)(extraout_x8_03 + 0xa8));
    if (((bool)in_ZR) && (func_0x0001080f6a7c(*(undefined8 *)(extraout_x8_03 + 0xf0)), (bool)in_ZR))
    {
      plVar11 = (long *)(extraout_x8_03 + 8);
      do {
        func_0x0001080f6774();
      } while (extraout_w9_03 != 0);
      do {
        func_0x0001080f6774();
      } while (extraout_w9_04 != 0);
      func_0x0001080f6748();
      do {
        func_0x0001080f69d0();
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = extraout_x8_05;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((bool)in_ZR) {
        func_0x0001080f6640();
      }
      do {
        func_0x0001080f69d0();
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = extraout_x8_06;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((bool)in_ZR) {
        func_0x0001080f6640();
      }
    }
    func_0x0001080f660c(uStack_a8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      pcVar10 = FUN_1080f25d8;
      func_0x0001080f6efc();
      puStack_70 = &stack0xffffffffffffff80;
      apcStack_68[0] = pcVar10;
      func_0x0001080f6da8();
      func_0x0001080f66e0();
      func_0x0001080f2cf0(ppcVar5 + 2);
      func_0x0001080f6be4();
      puVar6 = (undefined1 *)(lVar8 + 0xe8);
      func_0x0001080f6d34(puVar6);
      func_0x0001080f6660();
      lVar9 = *plVar11;
      if (lVar9 == 0) {
        func_0x0001080f6800();
        func_0x0001080f695c(FUN_1080f348c);
      }
      else {
        puVar6 = auStack_d8;
        FUN_1080f2c98(puVar6);
      }
      func_0x0001080f6e60();
      func_0x0001080f6660();
      func_0x0001080f6974();
      func_0x0001080f660c(uStack_a8);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      pcStack_e8 = FUN_1080f2658;
      puStack_110 = puVar12;
      plStack_108 = plVar11;
      lStack_100 = lVar8;
      puStack_f0 = (undefined1 *)&puStack_70;
      func_0x0001080f6728();
      puVar6 = puVar6 + 0x10;
      uStack_118 = extraout_x8_08;
      func_0x0001080f2cf0(puVar6);
      func_0x0001080f6d3c();
      func_0x0001080f6758(FUN_1080f34a4);
      func_0x0001080f6d34(puVar6 + 0xe8);
      func_0x0001080f6650();
      func_0x0001080f6800();
      func_0x0001080f6abc();
      func_0x0001080f6650();
      func_0x0001080f6a7c(*(undefined8 *)(extraout_x8_07 + 0xa8));
      if (((bool)in_ZR) &&
         (func_0x0001080f6a7c(*(undefined8 *)(extraout_x8_07 + 0xf0)), (bool)in_ZR)) {
        plVar11 = (long *)(extraout_x8_07 + 8);
        do {
          func_0x0001080f6774();
        } while (extraout_w9_05 != 0);
        do {
          func_0x0001080f6774();
        } while (extraout_w9_06 != 0);
        func_0x0001080f6748();
        do {
          func_0x0001080f69d0();
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *plVar11 = extraout_x8_09;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((bool)in_ZR) {
          func_0x0001080f6640();
        }
        do {
          func_0x0001080f69d0();
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *plVar11 = extraout_x8_10;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((bool)in_ZR) {
          func_0x0001080f6640();
        }
      }
      func_0x0001080f660c(uStack_118);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        uStack_158 = 0x1080f2718;
        puStack_180 = puVar12;
        plStack_178 = plVar11;
        lStack_170 = lVar9;
        ppuStack_160 = &puStack_f0;
        func_0x0001080f6ee4();
        func_0x0001080f6728();
        uStack_188 = extraout_x8_11;
        func_0x0001080f6dd8();
        iVar3 = (int)UNRECOVERED_JUMPTABLE;
        if (*plVar11 == 0) {
          func_0x0001080f660c(uStack_188);
          if ((bool)in_ZR) {
            if (*(int *)(extraout_x8_07 + 0xf0) == iVar3) {
              return;
            }
            *(int *)(extraout_x8_07 + 0xf0) = iVar3;
            if (((*(byte *)(extraout_x8_07 + 0x1d7) & 1) == 0) &&
               ((*(byte *)(extraout_x8_07 + 0x1d0) & 1) == 0)) {
              *(undefined1 *)(extraout_x8_07 + 0x1d0) = 1;
              func_0x0001081148f4(extraout_x8_07 + 0x180);
              func_0x0001081148f4(extraout_x8_07 + 0x170);
              func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)();
              return;
            }
            return;
          }
        }
        else {
          lVar8 = extraout_x8_07;
          FUN_10811f8f0();
          pcStack_1b8 = FUN_1080f59c4;
          ppuStack_1b0 = &PTR_FUN_110a21a50;
          pcStack_1a8 = FUN_10811f748;
          uStack_1a0 = 0;
          uStack_198 = (undefined4)lVar8;
          iStack_194 = iVar3;
          FUN_1080e5550(0x3f6ff2e48e8a71de,*plVar11,extraout_x8_07,plVar11[2],&pcStack_1b8);
          func_0x0001080f6830();
          func_0x0001080f660c(uStack_188);
          if ((bool)in_ZR) {
            return;
          }
        }
        ___stack_chk_fail();
        func_0x0001080f6db4();
        if ((bRam00000001137296c0 & 1) == 0) {
          iVar3 = 0x137296c0;
          func_0x0001080f69dc();
          func_0x0001080f6bb4();
          if (iVar3 != 0) {
            func_0x0001080f6934(&DAT_10f3eaddb);
            func_0x0001080f692c();
            func_0x0001080f6bb4();
          }
        }
        if ((bRam00000001137296d0 & 1) == 0) {
          iVar3 = 0x137296d0;
          func_0x0001080f69dc();
          func_0x0001080f6bb4();
          if (iVar3 != 0) {
            func_0x0001003a83dc(0x1137296c8,&DAT_10f3eade8);
            ___cxa_guard_release(0x1137296d0);
            func_0x0001080f6bb4();
          }
        }
        if ((bRam00000001137296e0 & 1) == 0) {
          iVar3 = 0x137296e0;
          func_0x0001080f69dc();
          func_0x0001080f6bb4();
          if (iVar3 != 0) {
            func_0x0001080f6cdc(&DAT_10f2c4aed);
            func_0x0001080f6c8c();
            func_0x0001080f6bb4();
          }
        }
        if ((bRam00000001137296f0 & 1) == 0) {
          iVar3 = 0x137296f0;
          func_0x0001080f69dc();
          func_0x0001080f6bb4();
          if (iVar3 != 0) {
            func_0x0001080f6cd4(&DAT_10f2c4af4);
            func_0x0001080f6d1c();
            func_0x0001080f6bb4();
          }
        }
        if ((bRam0000000113729700 & 1) == 0) {
          iVar3 = 0x13729700;
          ___cxa_guard_acquire();
          if (iVar3 != 0) {
            func_0x0001080f6934(&DAT_10f2c46ae);
            func_0x0001080f692c();
          }
        }
        if (*(long *)(UNRECOVERED_JUMPTABLE + 8) != 0) {
          plVar11 = (long *)(*(long *)(UNRECOVERED_JUMPTABLE + 8) + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar2) {
              *plVar11 = *plVar11 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        func_0x0001080f68c4();
        FUN_1080f5b94(0x3f24f8b588e368f1);
        func_0x0001080f6c54();
        func_0x0001080f6b94();
        if (extraout_x8_12 != 0) {
          do {
            func_0x0001080f6b78();
          } while (extraout_w10_01 != 0);
        }
        func_0x0001080f68c4();
        FUN_1080f5b94(0x3f24f8b588e368f1,param_2);
        func_0x0001080f6c54();
        func_0x0001080f6b94();
        if (extraout_x8_13 != 0) {
          do {
            func_0x0001080f6b78();
          } while (extraout_w10_02 != 0);
        }
        func_0x0001080f68c4();
        FUN_1080f5b94(0x3f3a36e2eb1c432d,param_3);
        func_0x0001080f6c54();
        func_0x0001080f6b94();
        if (extraout_x8_14 != 0) {
          do {
            func_0x0001080f6b78();
          } while (extraout_w10_03 != 0);
        }
        func_0x0001080f68c4();
        FUN_1080f5b94(0x3f3a36e2eb1c432d,param_4);
        func_0x0001080f6c54();
        func_0x0001080f6b94();
        if (extraout_x8_15 != 0) {
          do {
            func_0x0001080f6b78();
          } while (extraout_w10_04 != 0);
        }
        func_0x0001080f68c4(0x3f45a07b352a8438);
        FUN_1080f5b94();
        func_0x0001080f6c54();
        return;
      }
    }
  }
  return;
}



/* Entry: 1080f23c8; end: 1080f2497;  */

void FUN_1080f23c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,code *UNRECOVERED_JUMPTABLE)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  code **ppcVar5;
  undefined1 *puVar6;
  long lVar7;
  code *pcVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  undefined8 extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  undefined8 extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x19;
  long *unaff_x21;
  code *pcStack_1b8;
  undefined **ppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  int iStack_194;
  undefined8 uStack_188;
  undefined1 auStack_d8 [48];
  undefined8 uStack_a8;
  code *apcStack_68 [6];
  undefined8 uStack_38;
  
  lVar7 = param_6;
  func_0x0001080f6728();
  uStack_38 = extraout_x8;
  func_0x0001080f2e94(lVar7);
  func_0x0001080f6d3c();
  func_0x0001080f6758(0x1080f3be4);
  lVar7 = lVar7 + 0x228;
  func_0x0001080f60a8(lVar7,apcStack_68);
  func_0x0001080f6650();
  func_0x0001080f6800();
  func_0x0001080f6d60(FUN_1080f3bd8);
  func_0x0001080f60c4();
  func_0x0001080f6650();
  func_0x0001080f6a7c(*(undefined8 *)(unaff_x19 + 0x200));
  if (((bool)in_ZR) && (func_0x0001080f6a7c(*(undefined8 *)(unaff_x19 + 0x230)), (bool)in_ZR)) {
    unaff_x21 = (long *)(unaff_x19 + 8);
    do {
      func_0x0001080f6774();
    } while (extraout_w9 != 0);
    do {
      func_0x0001080f6774();
    } while (extraout_w9_00 != 0);
    func_0x0001080f6748();
    do {
      func_0x0001080f69d0();
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
      if (bVar3) {
        *unaff_x21 = extraout_x8_00;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((bool)in_ZR) {
      func_0x0001080f6640();
    }
    do {
      func_0x0001080f69d0();
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
      if (bVar3) {
        *unaff_x21 = extraout_x8_01;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((bool)in_ZR) {
      func_0x0001080f6640();
    }
  }
  func_0x0001080f660c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001080f6efc();
    func_0x0001080f6da8();
    func_0x0001080f66e0();
    FUN_1080f2c0c(lVar7 + 0x10);
    func_0x0001080f6be4();
    ppcVar5 = (code **)(param_6 + 0xe8);
    func_0x0001080f6d34(ppcVar5);
    func_0x0001080f6660();
    lVar7 = *unaff_x21;
    if (lVar7 == 0) {
      func_0x0001080f6800();
      func_0x0001080f695c(FUN_1080f348c);
    }
    else {
      ppcVar5 = apcStack_68;
      FUN_1080f2c98(ppcVar5);
    }
    func_0x0001080f6e60();
    func_0x0001080f6660();
    func_0x0001080f6974();
    func_0x0001080f660c(uStack_38);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001080f6728();
    ppcVar5 = ppcVar5 + 2;
    uStack_a8 = extraout_x8_03;
    FUN_1080f2c0c(ppcVar5);
    func_0x0001080f6d3c();
    func_0x0001080f6758(FUN_1080f34a4);
    ppcVar5 = ppcVar5 + 0x1d;
    func_0x0001080f6d34(ppcVar5);
    func_0x0001080f6650();
    func_0x0001080f6800();
    func_0x0001080f6abc();
    func_0x0001080f6650();
    func_0x0001080f6a7c(*(undefined8 *)(extraout_x8_02 + 0xa8));
    if (((bool)in_ZR) && (func_0x0001080f6a7c(*(undefined8 *)(extraout_x8_02 + 0xf0)), (bool)in_ZR))
    {
      unaff_x21 = (long *)(extraout_x8_02 + 8);
      do {
        func_0x0001080f6774();
      } while (extraout_w9_01 != 0);
      do {
        func_0x0001080f6774();
      } while (extraout_w9_02 != 0);
      func_0x0001080f6748();
      do {
        func_0x0001080f69d0();
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
        if (bVar3) {
          *unaff_x21 = extraout_x8_04;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((bool)in_ZR) {
        func_0x0001080f6640();
      }
      do {
        func_0x0001080f69d0();
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
        if (bVar3) {
          *unaff_x21 = extraout_x8_05;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((bool)in_ZR) {
        func_0x0001080f6640();
      }
    }
    func_0x0001080f660c(uStack_a8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      pcVar8 = FUN_1080f25d8;
      func_0x0001080f6efc();
      apcStack_68[0] = pcVar8;
      func_0x0001080f6da8();
      func_0x0001080f66e0();
      func_0x0001080f2cf0(ppcVar5 + 2);
      func_0x0001080f6be4();
      puVar6 = (undefined1 *)(lVar7 + 0xe8);
      func_0x0001080f6d34(puVar6);
      func_0x0001080f6660();
      if (*unaff_x21 == 0) {
        func_0x0001080f6800();
        func_0x0001080f695c(FUN_1080f348c);
      }
      else {
        puVar6 = auStack_d8;
        FUN_1080f2c98(puVar6);
      }
      func_0x0001080f6e60();
      func_0x0001080f6660();
      func_0x0001080f6974();
      func_0x0001080f660c(uStack_a8);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001080f6728();
      puVar6 = puVar6 + 0x10;
      func_0x0001080f2cf0(puVar6);
      func_0x0001080f6d3c();
      func_0x0001080f6758(FUN_1080f34a4);
      func_0x0001080f6d34(puVar6 + 0xe8);
      func_0x0001080f6650();
      func_0x0001080f6800();
      func_0x0001080f6abc();
      func_0x0001080f6650();
      func_0x0001080f6a7c(*(undefined8 *)(extraout_x8_06 + 0xa8));
      if (((bool)in_ZR) &&
         (func_0x0001080f6a7c(*(undefined8 *)(extraout_x8_06 + 0xf0)), (bool)in_ZR)) {
        unaff_x21 = (long *)(extraout_x8_06 + 8);
        do {
          func_0x0001080f6774();
        } while (extraout_w9_03 != 0);
        do {
          func_0x0001080f6774();
        } while (extraout_w9_04 != 0);
        func_0x0001080f6748();
        do {
          func_0x0001080f69d0();
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
          if (bVar3) {
            *unaff_x21 = extraout_x8_08;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((bool)in_ZR) {
          func_0x0001080f6640();
        }
        do {
          func_0x0001080f69d0();
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
          if (bVar3) {
            *unaff_x21 = extraout_x8_09;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((bool)in_ZR) {
          func_0x0001080f6640();
        }
      }
      func_0x0001080f660c(extraout_x8_07);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001080f6ee4();
        func_0x0001080f6728();
        uStack_188 = extraout_x8_10;
        func_0x0001080f6dd8();
        iVar4 = (int)UNRECOVERED_JUMPTABLE;
        if (*unaff_x21 == 0) {
          func_0x0001080f660c(uStack_188);
          if ((bool)in_ZR) {
            if (*(int *)(extraout_x8_06 + 0xf0) == iVar4) {
              return;
            }
            *(int *)(extraout_x8_06 + 0xf0) = iVar4;
            if (((*(byte *)(extraout_x8_06 + 0x1d7) & 1) == 0) &&
               ((*(byte *)(extraout_x8_06 + 0x1d0) & 1) == 0)) {
              *(undefined1 *)(extraout_x8_06 + 0x1d0) = 1;
              func_0x0001081148f4(extraout_x8_06 + 0x180);
              func_0x0001081148f4(extraout_x8_06 + 0x170);
              func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)();
              return;
            }
            return;
          }
        }
        else {
          lVar7 = extraout_x8_06;
          FUN_10811f8f0();
          pcStack_1b8 = FUN_1080f59c4;
          ppuStack_1b0 = &PTR_FUN_110a21a50;
          pcStack_1a8 = FUN_10811f748;
          uStack_1a0 = 0;
          uStack_198 = (undefined4)lVar7;
          iStack_194 = iVar4;
          FUN_1080e5550(0x3f6ff2e48e8a71de,*unaff_x21,extraout_x8_06,unaff_x21[2],&pcStack_1b8);
          func_0x0001080f6830();
          func_0x0001080f660c(uStack_188);
          if ((bool)in_ZR) {
            return;
          }
        }
        ___stack_chk_fail();
        func_0x0001080f6db4();
        if ((bRam00000001137296c0 & 1) == 0) {
          iVar4 = 0x137296c0;
          func_0x0001080f69dc();
          func_0x0001080f6bb4();
          if (iVar4 != 0) {
            func_0x0001080f6934(&DAT_10f3eaddb);
            func_0x0001080f692c();
            func_0x0001080f6bb4();
          }
        }
        if ((bRam00000001137296d0 & 1) == 0) {
          iVar4 = 0x137296d0;
          func_0x0001080f69dc();
          func_0x0001080f6bb4();
          if (iVar4 != 0) {
            func_0x0001003a83dc(0x1137296c8,&DAT_10f3eade8);
            ___cxa_guard_release(0x1137296d0);
            func_0x0001080f6bb4();
          }
        }
        if ((bRam00000001137296e0 & 1) == 0) {
          iVar4 = 0x137296e0;
          func_0x0001080f69dc();
          func_0x0001080f6bb4();
          if (iVar4 != 0) {
            func_0x0001080f6cdc(&DAT_10f2c4aed);
            func_0x0001080f6c8c();
            func_0x0001080f6bb4();
          }
        }
        if ((bRam00000001137296f0 & 1) == 0) {
          iVar4 = 0x137296f0;
          func_0x0001080f69dc();
          func_0x0001080f6bb4();
          if (iVar4 != 0) {
            func_0x0001080f6cd4(&DAT_10f2c4af4);
            func_0x0001080f6d1c();
            func_0x0001080f6bb4();
          }
        }
        if ((bRam0000000113729700 & 1) == 0) {
          iVar4 = 0x13729700;
          ___cxa_guard_acquire();
          if (iVar4 != 0) {
            func_0x0001080f6934(&DAT_10f2c46ae);
            func_0x0001080f692c();
          }
        }
        if (*(long *)(UNRECOVERED_JUMPTABLE + 8) != 0) {
          plVar1 = (long *)(*(long *)(UNRECOVERED_JUMPTABLE + 8) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        func_0x0001080f68c4();
        FUN_1080f5b94(0x3f24f8b588e368f1);
        func_0x0001080f6c54();
        func_0x0001080f6b94();
        if (extraout_x8_11 != 0) {
          do {
            func_0x0001080f6b78();
          } while (extraout_w10 != 0);
        }
        func_0x0001080f68c4();
        FUN_1080f5b94(0x3f24f8b588e368f1,param_2);
        func_0x0001080f6c54();
        func_0x0001080f6b94();
        if (extraout_x8_12 != 0) {
          do {
            func_0x0001080f6b78();
          } while (extraout_w10_00 != 0);
        }
        func_0x0001080f68c4();
        FUN_1080f5b94(0x3f3a36e2eb1c432d,param_3);
        func_0x0001080f6c54();
        func_0x0001080f6b94();
        if (extraout_x8_13 != 0) {
          do {
            func_0x0001080f6b78();
          } while (extraout_w10_01 != 0);
        }
        func_0x0001080f68c4();
        FUN_1080f5b94(0x3f3a36e2eb1c432d,param_4);
        func_0x0001080f6c54();
        func_0x0001080f6b94();
        if (extraout_x8_14 != 0) {
          do {
            func_0x0001080f6b78();
          } while (extraout_w10_02 != 0);
        }
        func_0x0001080f68c4(0x3f45a07b352a8438);
        FUN_1080f5b94();
        func_0x0001080f6c54();
        return;
      }
    }
  }
  return;
}



/* Entry: 1080f2498; end: 1080f2517;  */

void FUN_1080f2498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,code *UNRECOVERED_JUMPTABLE)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  code *pcVar8;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  undefined8 extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x20;
  long *unaff_x21;
  code *in_stack_00000008;
  undefined8 in_stack_00000038;
  code *pcStack_148;
  undefined **ppuStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  int iStack_124;
  undefined8 uStack_118;
  undefined1 auStack_68 [48];
  undefined8 uStack_38;
  
  func_0x0001080f6efc();
  func_0x0001080f6da8();
  func_0x0001080f66e0();
  FUN_1080f2c0c(param_5 + 0x10);
  func_0x0001080f6be4();
  puVar5 = (undefined8 *)(unaff_x20 + 0xe8);
  func_0x0001080f6d34(puVar5);
  func_0x0001080f6660();
  lVar7 = *unaff_x21;
  if (lVar7 == 0) {
    func_0x0001080f6800();
    func_0x0001080f695c(FUN_1080f348c);
  }
  else {
    puVar5 = &stack0x00000008;
    FUN_1080f2c98(puVar5);
  }
  func_0x0001080f6e60();
  func_0x0001080f6660();
  func_0x0001080f6974();
  func_0x0001080f660c(in_stack_00000038);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080f6728();
  puVar5 = puVar5 + 2;
  uStack_38 = extraout_x8_00;
  FUN_1080f2c0c(puVar5);
  func_0x0001080f6d3c();
  func_0x0001080f6758(FUN_1080f34a4);
  puVar5 = puVar5 + 0x1d;
  func_0x0001080f6d34(puVar5);
  func_0x0001080f6650();
  func_0x0001080f6800();
  func_0x0001080f6abc();
  func_0x0001080f6650();
  func_0x0001080f6a7c(*(undefined8 *)(extraout_x8 + 0xa8));
  if (((bool)in_ZR) && (func_0x0001080f6a7c(*(undefined8 *)(extraout_x8 + 0xf0)), (bool)in_ZR)) {
    unaff_x21 = (long *)(extraout_x8 + 8);
    do {
      func_0x0001080f6774();
    } while (extraout_w9 != 0);
    do {
      func_0x0001080f6774();
    } while (extraout_w9_00 != 0);
    func_0x0001080f6748();
    do {
      func_0x0001080f69d0();
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
      if (bVar3) {
        *unaff_x21 = extraout_x8_01;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((bool)in_ZR) {
      func_0x0001080f6640();
    }
    do {
      func_0x0001080f69d0();
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
      if (bVar3) {
        *unaff_x21 = extraout_x8_02;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((bool)in_ZR) {
      func_0x0001080f6640();
    }
  }
  func_0x0001080f660c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcVar8 = FUN_1080f25d8;
    func_0x0001080f6efc();
    in_stack_00000008 = pcVar8;
    func_0x0001080f6da8();
    func_0x0001080f66e0();
    FUN_1080f2cf0(puVar5 + 2);
    func_0x0001080f6be4();
    puVar6 = (undefined1 *)(lVar7 + 0xe8);
    func_0x0001080f6d34(puVar6);
    func_0x0001080f6660();
    if (*unaff_x21 == 0) {
      func_0x0001080f6800();
      func_0x0001080f695c(FUN_1080f348c);
    }
    else {
      puVar6 = auStack_68;
      FUN_1080f2c98(puVar6);
    }
    func_0x0001080f6e60();
    func_0x0001080f6660();
    func_0x0001080f6974();
    func_0x0001080f660c(uStack_38);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001080f6728();
    puVar6 = puVar6 + 0x10;
    FUN_1080f2cf0(puVar6);
    func_0x0001080f6d3c();
    func_0x0001080f6758(FUN_1080f34a4);
    func_0x0001080f6d34(puVar6 + 0xe8);
    func_0x0001080f6650();
    func_0x0001080f6800();
    func_0x0001080f6abc();
    func_0x0001080f6650();
    func_0x0001080f6a7c(*(undefined8 *)(extraout_x8_03 + 0xa8));
    if (((bool)in_ZR) && (func_0x0001080f6a7c(*(undefined8 *)(extraout_x8_03 + 0xf0)), (bool)in_ZR))
    {
      unaff_x21 = (long *)(extraout_x8_03 + 8);
      do {
        func_0x0001080f6774();
      } while (extraout_w9_01 != 0);
      do {
        func_0x0001080f6774();
      } while (extraout_w9_02 != 0);
      func_0x0001080f6748();
      do {
        func_0x0001080f69d0();
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
        if (bVar3) {
          *unaff_x21 = extraout_x8_05;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((bool)in_ZR) {
        func_0x0001080f6640();
      }
      do {
        func_0x0001080f69d0();
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
        if (bVar3) {
          *unaff_x21 = extraout_x8_06;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((bool)in_ZR) {
        func_0x0001080f6640();
      }
    }
    func_0x0001080f660c(extraout_x8_04);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001080f6ee4();
      func_0x0001080f6728();
      uStack_118 = extraout_x8_07;
      func_0x0001080f6dd8();
      iVar4 = (int)UNRECOVERED_JUMPTABLE;
      if (*unaff_x21 == 0) {
        func_0x0001080f660c(uStack_118);
        if ((bool)in_ZR) {
          if (*(int *)(extraout_x8_03 + 0xf0) == iVar4) {
            return;
          }
          *(int *)(extraout_x8_03 + 0xf0) = iVar4;
          if (((*(byte *)(extraout_x8_03 + 0x1d7) & 1) == 0) &&
             ((*(byte *)(extraout_x8_03 + 0x1d0) & 1) == 0)) {
            *(undefined1 *)(extraout_x8_03 + 0x1d0) = 1;
            func_0x0001081148f4(extraout_x8_03 + 0x180);
            func_0x0001081148f4(extraout_x8_03 + 0x170);
            func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)();
            return;
          }
          return;
        }
      }
      else {
        lVar7 = extraout_x8_03;
        FUN_10811f8f0();
        pcStack_148 = FUN_1080f59c4;
        ppuStack_140 = &PTR_FUN_110a21a50;
        pcStack_138 = FUN_10811f748;
        uStack_130 = 0;
        uStack_128 = (undefined4)lVar7;
        iStack_124 = iVar4;
        FUN_1080e5550(0x3f6ff2e48e8a71de,*unaff_x21,extraout_x8_03,unaff_x21[2],&pcStack_148);
        func_0x0001080f6830();
        func_0x0001080f660c(uStack_118);
        if ((bool)in_ZR) {
          return;
        }
      }
      ___stack_chk_fail();
      func_0x0001080f6db4();
      if ((bRam00000001137296c0 & 1) == 0) {
        iVar4 = 0x137296c0;
        func_0x0001080f69dc();
        func_0x0001080f6bb4();
        if (iVar4 != 0) {
          func_0x0001080f6934(&DAT_10f3eaddb);
          func_0x0001080f692c();
          func_0x0001080f6bb4();
        }
      }
      if ((bRam00000001137296d0 & 1) == 0) {
        iVar4 = 0x137296d0;
        func_0x0001080f69dc();
        func_0x0001080f6bb4();
        if (iVar4 != 0) {
          func_0x0001003a83dc(0x1137296c8,&DAT_10f3eade8);
          ___cxa_guard_release(0x1137296d0);
          func_0x0001080f6bb4();
        }
      }
      if ((bRam00000001137296e0 & 1) == 0) {
        iVar4 = 0x137296e0;
        func_0x0001080f69dc();
        func_0x0001080f6bb4();
        if (iVar4 != 0) {
          func_0x0001080f6cdc(&DAT_10f2c4aed);
          func_0x0001080f6c8c();
          func_0x0001080f6bb4();
        }
      }
      if ((bRam00000001137296f0 & 1) == 0) {
        iVar4 = 0x137296f0;
        func_0x0001080f69dc();
        func_0x0001080f6bb4();
        if (iVar4 != 0) {
          func_0x0001080f6cd4(&DAT_10f2c4af4);
          func_0x0001080f6d1c();
          func_0x0001080f6bb4();
        }
      }
      if ((bRam0000000113729700 & 1) == 0) {
        iVar4 = 0x13729700;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          func_0x0001080f6934(&DAT_10f2c46ae);
          func_0x0001080f692c();
        }
      }
      if (*(long *)(UNRECOVERED_JUMPTABLE + 8) != 0) {
        plVar1 = (long *)(*(long *)(UNRECOVERED_JUMPTABLE + 8) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x0001080f68c4();
      FUN_1080f5b94(0x3f24f8b588e368f1);
      func_0x0001080f6c54();
      func_0x0001080f6b94();
      if (extraout_x8_08 != 0) {
        do {
          func_0x0001080f6b78();
        } while (extraout_w10 != 0);
      }
      func_0x0001080f68c4();
      FUN_1080f5b94(0x3f24f8b588e368f1,param_2);
      func_0x0001080f6c54();
      func_0x0001080f6b94();
      if (extraout_x8_09 != 0) {
        do {
          func_0x0001080f6b78();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001080f68c4();
      FUN_1080f5b94(0x3f3a36e2eb1c432d,param_3);
      func_0x0001080f6c54();
      func_0x0001080f6b94();
      if (extraout_x8_10 != 0) {
        do {
          func_0x0001080f6b78();
        } while (extraout_w10_01 != 0);
      }
      func_0x0001080f68c4();
      FUN_1080f5b94(0x3f3a36e2eb1c432d,param_4);
      func_0x0001080f6c54();
      func_0x0001080f6b94();
      if (extraout_x8_11 != 0) {
        do {
          func_0x0001080f6b78();
        } while (extraout_w10_02 != 0);
      }
      func_0x0001080f68c4(0x3f45a07b352a8438);
      FUN_1080f5b94();
      func_0x0001080f6c54();
      return;
    }
  }
  return;
}



/* Entry: 1080f2518; end: 1080f25d7;  */

void FUN_1080f2518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,code *UNRECOVERED_JUMPTABLE)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined8 extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x19;
  long *unaff_x21;
  code *pcStack_148;
  undefined **ppuStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  int iStack_124;
  undefined8 uStack_118;
  undefined1 auStack_68 [48];
  undefined8 uStack_38;
  
  func_0x0001080f6728();
  param_5 = param_5 + 0x10;
  uStack_38 = extraout_x8;
  FUN_1080f2c0c(param_5);
  func_0x0001080f6d3c();
  func_0x0001080f6758(FUN_1080f34a4);
  param_5 = param_5 + 0xe8;
  func_0x0001080f6d34(param_5);
  func_0x0001080f6650();
  func_0x0001080f6800();
  func_0x0001080f6abc();
  func_0x0001080f6650();
  func_0x0001080f6a7c(*(undefined8 *)(unaff_x19 + 0xa8));
  if (((bool)in_ZR) && (func_0x0001080f6a7c(*(undefined8 *)(unaff_x19 + 0xf0)), (bool)in_ZR)) {
    unaff_x21 = (long *)(unaff_x19 + 8);
    do {
      func_0x0001080f6774();
    } while (extraout_w9 != 0);
    do {
      func_0x0001080f6774();
    } while (extraout_w9_00 != 0);
    func_0x0001080f6748();
    do {
      func_0x0001080f69d0();
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
      if (bVar3) {
        *unaff_x21 = extraout_x8_00;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((bool)in_ZR) {
      func_0x0001080f6640();
    }
    do {
      func_0x0001080f69d0();
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
      if (bVar3) {
        *unaff_x21 = extraout_x8_01;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((bool)in_ZR) {
      func_0x0001080f6640();
    }
  }
  func_0x0001080f660c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001080f6efc();
    func_0x0001080f6da8();
    func_0x0001080f66e0();
    FUN_1080f2cf0(param_5 + 0x10);
    func_0x0001080f6be4();
    puVar5 = (undefined1 *)(param_6 + 0xe8);
    func_0x0001080f6d34(puVar5);
    func_0x0001080f6660();
    if (*unaff_x21 == 0) {
      func_0x0001080f6800();
      func_0x0001080f695c(FUN_1080f348c);
    }
    else {
      puVar5 = auStack_68;
      FUN_1080f2c98(puVar5);
    }
    func_0x0001080f6e60();
    func_0x0001080f6660();
    func_0x0001080f6974();
    func_0x0001080f660c(uStack_38);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001080f6728();
    puVar5 = puVar5 + 0x10;
    FUN_1080f2cf0(puVar5);
    func_0x0001080f6d3c();
    func_0x0001080f6758(FUN_1080f34a4);
    func_0x0001080f6d34(puVar5 + 0xe8);
    func_0x0001080f6650();
    func_0x0001080f6800();
    func_0x0001080f6abc();
    func_0x0001080f6650();
    func_0x0001080f6a7c(*(undefined8 *)(extraout_x8_02 + 0xa8));
    if (((bool)in_ZR) && (func_0x0001080f6a7c(*(undefined8 *)(extraout_x8_02 + 0xf0)), (bool)in_ZR))
    {
      unaff_x21 = (long *)(extraout_x8_02 + 8);
      do {
        func_0x0001080f6774();
      } while (extraout_w9_01 != 0);
      do {
        func_0x0001080f6774();
      } while (extraout_w9_02 != 0);
      func_0x0001080f6748();
      do {
        func_0x0001080f69d0();
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
        if (bVar3) {
          *unaff_x21 = extraout_x8_04;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((bool)in_ZR) {
        func_0x0001080f6640();
      }
      do {
        func_0x0001080f69d0();
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
        if (bVar3) {
          *unaff_x21 = extraout_x8_05;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((bool)in_ZR) {
        func_0x0001080f6640();
      }
    }
    func_0x0001080f660c(extraout_x8_03);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001080f6ee4();
      func_0x0001080f6728();
      uStack_118 = extraout_x8_06;
      func_0x0001080f6dd8();
      iVar4 = (int)UNRECOVERED_JUMPTABLE;
      if (*unaff_x21 == 0) {
        func_0x0001080f660c(uStack_118);
        if ((bool)in_ZR) {
          if (*(int *)(extraout_x8_02 + 0xf0) == iVar4) {
            return;
          }
          *(int *)(extraout_x8_02 + 0xf0) = iVar4;
          if (((*(byte *)(extraout_x8_02 + 0x1d7) & 1) == 0) &&
             ((*(byte *)(extraout_x8_02 + 0x1d0) & 1) == 0)) {
            *(undefined1 *)(extraout_x8_02 + 0x1d0) = 1;
            func_0x0001081148f4(extraout_x8_02 + 0x180);
            func_0x0001081148f4(extraout_x8_02 + 0x170);
            func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)();
            return;
          }
          return;
        }
      }
      else {
        lVar6 = extraout_x8_02;
        FUN_10811f8f0();
        pcStack_148 = FUN_1080f59c4;
        ppuStack_140 = &PTR_FUN_110a21a50;
        pcStack_138 = FUN_10811f748;
        uStack_130 = 0;
        uStack_128 = (undefined4)lVar6;
        iStack_124 = iVar4;
        FUN_1080e5550(0x3f6ff2e48e8a71de,*unaff_x21,extraout_x8_02,unaff_x21[2],&pcStack_148);
        func_0x0001080f6830();
        func_0x0001080f660c(uStack_118);
        if ((bool)in_ZR) {
          return;
        }
      }
      ___stack_chk_fail();
      func_0x0001080f6db4();
      if ((bRam00000001137296c0 & 1) == 0) {
        iVar4 = 0x137296c0;
        func_0x0001080f69dc();
        func_0x0001080f6bb4();
        if (iVar4 != 0) {
          func_0x0001080f6934(&DAT_10f3eaddb);
          func_0x0001080f692c();
          func_0x0001080f6bb4();
        }
      }
      if ((bRam00000001137296d0 & 1) == 0) {
        iVar4 = 0x137296d0;
        func_0x0001080f69dc();
        func_0x0001080f6bb4();
        if (iVar4 != 0) {
          func_0x0001003a83dc(0x1137296c8,&DAT_10f3eade8);
          ___cxa_guard_release(0x1137296d0);
          func_0x0001080f6bb4();
        }
      }
      if ((bRam00000001137296e0 & 1) == 0) {
        iVar4 = 0x137296e0;
        func_0x0001080f69dc();
        func_0x0001080f6bb4();
        if (iVar4 != 0) {
          func_0x0001080f6cdc(&DAT_10f2c4aed);
          func_0x0001080f6c8c();
          func_0x0001080f6bb4();
        }
      }
      if ((bRam00000001137296f0 & 1) == 0) {
        iVar4 = 0x137296f0;
        func_0x0001080f69dc();
        func_0x0001080f6bb4();
        if (iVar4 != 0) {
          func_0x0001080f6cd4(&DAT_10f2c4af4);
          func_0x0001080f6d1c();
          func_0x0001080f6bb4();
        }
      }
      if ((bRam0000000113729700 & 1) == 0) {
        iVar4 = 0x13729700;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          func_0x0001080f6934(&DAT_10f2c46ae);
          func_0x0001080f692c();
        }
      }
      if (*(long *)(UNRECOVERED_JUMPTABLE + 8) != 0) {
        plVar1 = (long *)(*(long *)(UNRECOVERED_JUMPTABLE + 8) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x0001080f68c4();
      FUN_1080f5b94(0x3f24f8b588e368f1);
      func_0x0001080f6c54();
      func_0x0001080f6b94();
      if (extraout_x8_07 != 0) {
        do {
          func_0x0001080f6b78();
        } while (extraout_w10 != 0);
      }
      func_0x0001080f68c4();
      FUN_1080f5b94(0x3f24f8b588e368f1,param_2);
      func_0x0001080f6c54();
      func_0x0001080f6b94();
      if (extraout_x8_08 != 0) {
        do {
          func_0x0001080f6b78();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001080f68c4();
      FUN_1080f5b94(0x3f3a36e2eb1c432d,param_3);
      func_0x0001080f6c54();
      func_0x0001080f6b94();
      if (extraout_x8_09 != 0) {
        do {
          func_0x0001080f6b78();
        } while (extraout_w10_01 != 0);
      }
      func_0x0001080f68c4();
      FUN_1080f5b94(0x3f3a36e2eb1c432d,param_4);
      func_0x0001080f6c54();
      func_0x0001080f6b94();
      if (extraout_x8_10 != 0) {
        do {
          func_0x0001080f6b78();
        } while (extraout_w10_02 != 0);
      }
      func_0x0001080f68c4(0x3f45a07b352a8438);
      FUN_1080f5b94();
      func_0x0001080f6c54();
      return;
    }
  }
  return;
}



/* Entry: 1080f25d8; end: 1080f2657;  */

void FUN_1080f25d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,code *UNRECOVERED_JUMPTABLE)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined1 *puVar5;
  long lVar6;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x20;
  long *unaff_x21;
  undefined8 in_stack_00000038;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  undefined8 uStack_a8;
  
  func_0x0001080f6efc();
  func_0x0001080f6da8();
  func_0x0001080f66e0();
  FUN_1080f2cf0(param_5 + 0x10);
  func_0x0001080f6be4();
  puVar5 = (undefined1 *)(unaff_x20 + 0xe8);
  func_0x0001080f6d34(puVar5);
  func_0x0001080f6660();
  if (*unaff_x21 == 0) {
    func_0x0001080f6800();
    func_0x0001080f695c(FUN_1080f348c);
  }
  else {
    puVar5 = &stack0x00000008;
    FUN_1080f2c98(puVar5);
  }
  func_0x0001080f6e60();
  func_0x0001080f6660();
  func_0x0001080f6974();
  func_0x0001080f660c(in_stack_00000038);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080f6728();
  puVar5 = puVar5 + 0x10;
  FUN_1080f2cf0(puVar5);
  func_0x0001080f6d3c();
  func_0x0001080f6758(FUN_1080f34a4);
  func_0x0001080f6d34(puVar5 + 0xe8);
  func_0x0001080f6650();
  func_0x0001080f6800();
  func_0x0001080f6abc();
  func_0x0001080f6650();
  func_0x0001080f6a7c(*(undefined8 *)(extraout_x8 + 0xa8));
  if (((bool)in_ZR) && (func_0x0001080f6a7c(*(undefined8 *)(extraout_x8 + 0xf0)), (bool)in_ZR)) {
    unaff_x21 = (long *)(extraout_x8 + 8);
    do {
      func_0x0001080f6774();
    } while (extraout_w9 != 0);
    do {
      func_0x0001080f6774();
    } while (extraout_w9_00 != 0);
    func_0x0001080f6748();
    do {
      func_0x0001080f69d0();
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
      if (bVar3) {
        *unaff_x21 = extraout_x8_01;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((bool)in_ZR) {
      func_0x0001080f6640();
    }
    do {
      func_0x0001080f69d0();
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
      if (bVar3) {
        *unaff_x21 = extraout_x8_02;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((bool)in_ZR) {
      func_0x0001080f6640();
    }
  }
  func_0x0001080f660c(extraout_x8_00);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080f6ee4();
  func_0x0001080f6728();
  uStack_a8 = extraout_x8_03;
  func_0x0001080f6dd8();
  iVar4 = (int)UNRECOVERED_JUMPTABLE;
  if (*unaff_x21 == 0) {
    func_0x0001080f660c(uStack_a8);
    if ((bool)in_ZR) {
      if (*(int *)(extraout_x8 + 0xf0) == iVar4) {
        return;
      }
      *(int *)(extraout_x8 + 0xf0) = iVar4;
      if (((*(byte *)(extraout_x8 + 0x1d7) & 1) == 0) && ((*(byte *)(extraout_x8 + 0x1d0) & 1) == 0)
         ) {
        *(undefined1 *)(extraout_x8 + 0x1d0) = 1;
        func_0x0001081148f4(extraout_x8 + 0x180);
        func_0x0001081148f4(extraout_x8 + 0x170);
        func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      return;
    }
  }
  else {
    lVar6 = extraout_x8;
    FUN_10811f8f0();
    pcStack_d8 = FUN_1080f59c4;
    ppuStack_d0 = &PTR_FUN_110a21a50;
    pcStack_c8 = FUN_10811f748;
    uStack_c0 = 0;
    uStack_b8 = (undefined4)lVar6;
    iStack_b4 = iVar4;
    FUN_1080e5550(0x3f6ff2e48e8a71de,*unaff_x21,extraout_x8,unaff_x21[2],&pcStack_d8);
    func_0x0001080f6830();
    func_0x0001080f660c(uStack_a8);
    if ((bool)in_ZR) {
      return;
    }
  }
  ___stack_chk_fail();
  func_0x0001080f6db4();
  if ((bRam00000001137296c0 & 1) == 0) {
    iVar4 = 0x137296c0;
    func_0x0001080f69dc();
    func_0x0001080f6bb4();
    if (iVar4 != 0) {
      func_0x0001080f6934(&DAT_10f3eaddb);
      func_0x0001080f692c();
      func_0x0001080f6bb4();
    }
  }
  if ((bRam00000001137296d0 & 1) == 0) {
    iVar4 = 0x137296d0;
    func_0x0001080f69dc();
    func_0x0001080f6bb4();
    if (iVar4 != 0) {
      func_0x0001003a83dc(0x1137296c8,&DAT_10f3eade8);
      ___cxa_guard_release(0x1137296d0);
      func_0x0001080f6bb4();
    }
  }
  if ((bRam00000001137296e0 & 1) == 0) {
    iVar4 = 0x137296e0;
    func_0x0001080f69dc();
    func_0x0001080f6bb4();
    if (iVar4 != 0) {
      func_0x0001080f6cdc(&DAT_10f2c4aed);
      func_0x0001080f6c8c();
      func_0x0001080f6bb4();
    }
  }
  if ((bRam00000001137296f0 & 1) == 0) {
    iVar4 = 0x137296f0;
    func_0x0001080f69dc();
    func_0x0001080f6bb4();
    if (iVar4 != 0) {
      func_0x0001080f6cd4(&DAT_10f2c4af4);
      func_0x0001080f6d1c();
      func_0x0001080f6bb4();
    }
  }
  if ((bRam0000000113729700 & 1) == 0) {
    iVar4 = 0x13729700;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x0001080f6934(&DAT_10f2c46ae);
      func_0x0001080f692c();
    }
  }
  if (*(long *)(UNRECOVERED_JUMPTABLE + 8) != 0) {
    plVar1 = (long *)(*(long *)(UNRECOVERED_JUMPTABLE + 8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x0001080f68c4();
  FUN_1080f5b94(0x3f24f8b588e368f1);
  func_0x0001080f6c54();
  func_0x0001080f6b94();
  if (extraout_x8_04 != 0) {
    do {
      func_0x0001080f6b78();
    } while (extraout_w10 != 0);
  }
  func_0x0001080f68c4();
  FUN_1080f5b94(0x3f24f8b588e368f1,param_2);
  func_0x0001080f6c54();
  func_0x0001080f6b94();
  if (extraout_x8_05 != 0) {
    do {
      func_0x0001080f6b78();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001080f68c4();
  FUN_1080f5b94(0x3f3a36e2eb1c432d,param_3);
  func_0x0001080f6c54();
  func_0x0001080f6b94();
  if (extraout_x8_06 != 0) {
    do {
      func_0x0001080f6b78();
    } while (extraout_w10_01 != 0);
  }
  func_0x0001080f68c4();
  FUN_1080f5b94(0x3f3a36e2eb1c432d,param_4);
  func_0x0001080f6c54();
  func_0x0001080f6b94();
  if (extraout_x8_07 != 0) {
    do {
      func_0x0001080f6b78();
    } while (extraout_w10_02 != 0);
  }
  func_0x0001080f68c4(0x3f45a07b352a8438);
  FUN_1080f5b94();
  func_0x0001080f6c54();
  return;
}



/* Entry: 1080f2658; end: 1080f27db;  */

void FUN_1080f2658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,code *UNRECOVERED_JUMPTABLE)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x19;
  long *unaff_x21;
  
  func_0x0001080f6728();
  param_5 = param_5 + 0x10;
  FUN_1080f2cf0(param_5);
  func_0x0001080f6d3c();
  func_0x0001080f6758(FUN_1080f34a4);
  func_0x0001080f6d34(param_5 + 0xe8);
  func_0x0001080f6650();
  func_0x0001080f6800();
  func_0x0001080f6abc();
  func_0x0001080f6650();
  func_0x0001080f6a7c(*(undefined8 *)(unaff_x19 + 0xa8));
  if (((bool)in_ZR) && (func_0x0001080f6a7c(*(undefined8 *)(unaff_x19 + 0xf0)), (bool)in_ZR)) {
    unaff_x21 = (long *)(unaff_x19 + 8);
    do {
      func_0x0001080f6774();
    } while (extraout_w9 != 0);
    do {
      func_0x0001080f6774();
    } while (extraout_w9_00 != 0);
    func_0x0001080f6748();
    do {
      func_0x0001080f69d0();
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
      if (bVar3) {
        *unaff_x21 = extraout_x8_00;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((bool)in_ZR) {
      func_0x0001080f6640();
    }
    do {
      func_0x0001080f69d0();
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
      if (bVar3) {
        *unaff_x21 = extraout_x8_01;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((bool)in_ZR) {
      func_0x0001080f6640();
    }
  }
  func_0x0001080f660c(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080f6ee4();
  func_0x0001080f6728();
  func_0x0001080f6dd8();
  if (*unaff_x21 == 0) {
    func_0x0001080f660c(extraout_x8_02);
    if ((bool)in_ZR) {
      if (*(int *)(unaff_x19 + 0xf0) == (int)UNRECOVERED_JUMPTABLE) {
        return;
      }
      *(int *)(unaff_x19 + 0xf0) = (int)UNRECOVERED_JUMPTABLE;
      if (((*(byte *)(unaff_x19 + 0x1d7) & 1) == 0) && ((*(byte *)(unaff_x19 + 0x1d0) & 1) == 0)) {
        *(undefined1 *)(unaff_x19 + 0x1d0) = 1;
        func_0x0001081148f4(unaff_x19 + 0x180);
        func_0x0001081148f4(unaff_x19 + 0x170);
        func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      return;
    }
  }
  else {
    FUN_10811f8f0();
    FUN_1080e5550(0x3f6ff2e48e8a71de,*unaff_x21);
    func_0x0001080f6830();
    func_0x0001080f660c(extraout_x8_02);
    if ((bool)in_ZR) {
      return;
    }
  }
  ___stack_chk_fail();
  func_0x0001080f6db4();
  if ((bRam00000001137296c0 & 1) == 0) {
    iVar4 = 0x137296c0;
    func_0x0001080f69dc();
    func_0x0001080f6bb4();
    if (iVar4 != 0) {
      func_0x0001080f6934(&DAT_10f3eaddb);
      func_0x0001080f692c();
      func_0x0001080f6bb4();
    }
  }
  if ((bRam00000001137296d0 & 1) == 0) {
    iVar4 = 0x137296d0;
    func_0x0001080f69dc();
    func_0x0001080f6bb4();
    if (iVar4 != 0) {
      func_0x0001003a83dc(0x1137296c8,&DAT_10f3eade8);
      ___cxa_guard_release(0x1137296d0);
      func_0x0001080f6bb4();
    }
  }
  if ((bRam00000001137296e0 & 1) == 0) {
    iVar4 = 0x137296e0;
    func_0x0001080f69dc();
    func_0x0001080f6bb4();
    if (iVar4 != 0) {
      func_0x0001080f6cdc(&DAT_10f2c4aed);
      func_0x0001080f6c8c();
      func_0x0001080f6bb4();
    }
  }
  if ((bRam00000001137296f0 & 1) == 0) {
    iVar4 = 0x137296f0;
    func_0x0001080f69dc();
    func_0x0001080f6bb4();
    if (iVar4 != 0) {
      func_0x0001080f6cd4(&DAT_10f2c4af4);
      func_0x0001080f6d1c();
      func_0x0001080f6bb4();
    }
  }
  if ((bRam0000000113729700 & 1) == 0) {
    iVar4 = 0x13729700;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x0001080f6934(&DAT_10f2c46ae);
      func_0x0001080f692c();
    }
  }
  if (*(long *)(UNRECOVERED_JUMPTABLE + 8) != 0) {
    plVar1 = (long *)(*(long *)(UNRECOVERED_JUMPTABLE + 8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x0001080f68c4();
  FUN_1080f5b94(0x3f24f8b588e368f1);
  func_0x0001080f6c54();
  func_0x0001080f6b94();
  if (extraout_x8_03 != 0) {
    do {
      func_0x0001080f6b78();
    } while (extraout_w10 != 0);
  }
  func_0x0001080f68c4();
  FUN_1080f5b94(0x3f24f8b588e368f1,param_2);
  func_0x0001080f6c54();
  func_0x0001080f6b94();
  if (extraout_x8_04 != 0) {
    do {
      func_0x0001080f6b78();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001080f68c4();
  FUN_1080f5b94(0x3f3a36e2eb1c432d,param_3);
  func_0x0001080f6c54();
  func_0x0001080f6b94();
  if (extraout_x8_05 != 0) {
    do {
      func_0x0001080f6b78();
    } while (extraout_w10_01 != 0);
  }
  func_0x0001080f68c4();
  FUN_1080f5b94(0x3f3a36e2eb1c432d,param_4);
  func_0x0001080f6c54();
  func_0x0001080f6b94();
  if (extraout_x8_06 != 0) {
    do {
      func_0x0001080f6b78();
    } while (extraout_w10_02 != 0);
  }
  func_0x0001080f68c4(0x3f45a07b352a8438);
  FUN_1080f5b94();
  func_0x0001080f6c54();
  return;
}



/* Entry: 1080f27dc; end: 1080f2af3;  */

void FUN_1080f27dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x20;
  
  func_0x0001080f6db4(param_1,param_1);
  if ((bRam00000001137296c0 & 1) == 0) {
    iVar4 = 0x137296c0;
    func_0x0001080f69dc();
    func_0x0001080f6bb4();
    if (iVar4 != 0) {
      func_0x0001080f6934(&DAT_10f3eaddb);
      func_0x0001080f692c();
      func_0x0001080f6bb4();
    }
  }
  if ((bRam00000001137296d0 & 1) == 0) {
    iVar4 = 0x137296d0;
    func_0x0001080f69dc();
    func_0x0001080f6bb4();
    if (iVar4 != 0) {
      func_0x0001003a83dc(0x1137296c8,&DAT_10f3eade8);
      ___cxa_guard_release(0x1137296d0);
      func_0x0001080f6bb4();
    }
  }
  if ((bRam00000001137296e0 & 1) == 0) {
    iVar4 = 0x137296e0;
    func_0x0001080f69dc();
    func_0x0001080f6bb4();
    if (iVar4 != 0) {
      func_0x0001080f6cdc(&DAT_10f2c4aed);
      func_0x0001080f6c8c();
      func_0x0001080f6bb4();
    }
  }
  if ((bRam00000001137296f0 & 1) == 0) {
    iVar4 = 0x137296f0;
    func_0x0001080f69dc();
    func_0x0001080f6bb4();
    if (iVar4 != 0) {
      func_0x0001080f6cd4(&DAT_10f2c4af4);
      func_0x0001080f6d1c();
      func_0x0001080f6bb4();
    }
  }
  if ((bRam0000000113729700 & 1) == 0) {
    iVar4 = 0x13729700;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x0001080f6934(&DAT_10f2c46ae);
      func_0x0001080f692c();
    }
  }
  if (*(long *)(unaff_x20 + 8) != 0) {
    plVar1 = (long *)(*(long *)(unaff_x20 + 8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x0001080f68c4();
  FUN_1080f5b94(0x3f24f8b588e368f1);
  func_0x0001080f6c54();
  func_0x0001080f6b94();
  if (extraout_x8 != 0) {
    do {
      func_0x0001080f6b78();
    } while (extraout_w10 != 0);
  }
  func_0x0001080f68c4();
  FUN_1080f5b94(0x3f24f8b588e368f1,param_2);
  func_0x0001080f6c54();
  func_0x0001080f6b94();
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001080f6b78();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001080f68c4();
  FUN_1080f5b94(0x3f3a36e2eb1c432d,param_3);
  func_0x0001080f6c54();
  func_0x0001080f6b94();
  if (extraout_x8_01 != 0) {
    do {
      func_0x0001080f6b78();
    } while (extraout_w10_01 != 0);
  }
  func_0x0001080f68c4();
  FUN_1080f5b94(0x3f3a36e2eb1c432d,param_4);
  func_0x0001080f6c54();
  func_0x0001080f6b94();
  if (extraout_x8_02 != 0) {
    do {
      func_0x0001080f6b78();
    } while (extraout_w10_02 != 0);
  }
  func_0x0001080f68c4(0x3f45a07b352a8438);
  FUN_1080f5b94();
  func_0x0001080f6c54();
  return;
}



/* Entry: 1080f2af4; end: 1080f2c0b;  */

long * FUN_1080f2af4(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  long alStack_48 [5];
  
  if ((undefined4 *)(param_1[2] - *param_1 >> 2) < param_2) {
    if ((ulong)param_2 >> 0x3e != 0) {
      func_0x0001080f3118();
      puVar1 = (undefined4 *)param_1[1];
      if (puVar1 < (undefined4 *)param_1[2]) {
        plVar2 = (long *)(puVar1 + 1);
        *puVar1 = *param_2;
      }
      else {
        plVar2 = param_1;
        FUN_1080f3270();
      }
      param_1[1] = (long)plVar2;
      return (long *)((long)plVar2 + -4);
    }
    FUN_1080f3198(alStack_48,param_2,param_1[1] - *param_1 >> 2);
    FUN_1080f3124(param_1,alStack_48);
    param_1 = alStack_48;
    FUN_1080f3220(param_1);
  }
  return param_1;
}



/* Entry: 1080f2c0c; end: 1080f2c97;  */

void FUN_1080f2c0c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined **ppuVar4;
  undefined8 extraout_x8;
  int extraout_w9;
  long lVar5;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001080f6db4();
  ppuVar4 = &PTR_DAT_110a26e58;
  func_0x0001080f6cfc();
  if (((ulong)ppuVar4 & 1) == 0) {
    func_0x0001080f6df8();
    func_0x0001080f6ef0();
    func_0x00010813cc90();
    do {
      func_0x0001080f6774();
    } while (extraout_w9 != 0);
    func_0x0001080f6738();
    func_0x0001080f6a9c();
    do {
      func_0x0001080f69d0();
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1 + 1,0x10);
      if (bVar3) {
        param_1[1] = extraout_x8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((bool)in_ZR) {
      func_0x0001080f6640();
    }
  }
  else {
    func_0x0001080f6670();
    func_0x0001080f68e0();
    func_0x0001080f686c();
    if (param_1 == (undefined8 *)0x0) {
      ___cxa_bad_cast();
      func_0x0001080f6c70();
      if (ppuVar4 != (undefined **)0x0) {
        do {
          func_0x0001080f67e4();
        } while (extraout_w10 != 0);
      }
      func_0x0001080f6e04(0x1080f5d84);
      if (unaff_x19 != (long *)0x0) {
        do {
          func_0x0001080f67e4();
        } while (extraout_w10_00 != 0);
      }
      *param_1 = unaff_x19;
      *(undefined8 **)(unaff_x20 + 0x10) = param_1;
      if (unaff_x19 != (long *)0x0) {
        plVar1 = unaff_x19 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104bdb638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x19 + 8))();
          return;
        }
      }
      return;
    }
    func_0x0001080f6878();
  }
  return;
}



/* Entry: 1080f2c98; end: 1080f2cef;  */

void FUN_1080f2c98(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001080f6c70();
  if (param_2 != 0) {
    do {
      func_0x0001080f67e4();
    } while (extraout_w10 != 0);
  }
  func_0x0001080f6e04(0x1080f5d84);
  if (unaff_x19 != (long *)0x0) {
    do {
      func_0x0001080f67e4();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = unaff_x19;
  *(undefined8 **)(unaff_x20 + 0x10) = param_1;
  if (unaff_x19 != (long *)0x0) {
    plVar1 = unaff_x19 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104bdb638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080f2cf0; end: 1080f2fab;  */

long * FUN_1080f2cf0(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long *plVar3;
  ulong uVar4;
  undefined **ppuVar5;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  long lVar6;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *unaff_x19;
  
  func_0x0001080f6db4();
  uVar4 = 0;
  func_0x0001080f6cfc();
  if ((uVar4 & 1) == 0) {
    func_0x0001080f6df8();
    func_0x0001080f6ef0();
    func_0x00010813ad14();
    do {
      func_0x0001080f6774();
    } while (extraout_w9 != 0);
    func_0x0001080f6738();
    func_0x0001080f6a9c();
    do {
      func_0x0001080f69d0();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1 + 1,0x10);
      if (bVar2) {
        param_1[1] = extraout_x8;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x0001080f6640();
    }
  }
  else {
    func_0x0001080f6670();
    func_0x0001080f68e0();
    func_0x0001080f686c();
    if (param_1 == (long *)0x0) {
      ___cxa_bad_cast();
      func_0x0001080f6db4();
      uVar4 = 0;
      func_0x0001080f6cfc();
      if ((uVar4 & 1) == 0) {
        func_0x0001080f6df0();
        func_0x0001080f6ef0();
        func_0x00010813adb8();
        do {
          func_0x0001080f67e4();
        } while (extraout_w10 != 0);
        func_0x0001080f6738();
        func_0x0001080f6a9c();
        FUN_1080f5e40();
      }
      else {
        func_0x0001080f6670();
        func_0x0001080f68e0();
        func_0x0001080f686c();
        if (param_1 == (long *)0x0) {
          ___cxa_bad_cast();
          func_0x0001080f6db4();
          uVar4 = 0;
          func_0x0001080f6cfc();
          if ((uVar4 & 1) == 0) {
            lVar6 = 0x188;
            __Znwm();
            func_0x0001080f6ef0();
            func_0x00010813b7e4();
            do {
              func_0x0001080f6774();
            } while (extraout_w9_00 != 0);
            func_0x0001080f6738();
            func_0x0001080f6a9c();
            do {
              func_0x0001080f69d0();
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass((undefined8 *)(lVar6 + 8),0x10);
              if (bVar2) {
                *(undefined8 *)(lVar6 + 8) = extraout_x8_00;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if ((bool)in_ZR) {
              func_0x0001080f6640();
            }
          }
          else {
            func_0x0001080f6670();
            func_0x0001080f68e0();
            func_0x0001080f686c();
            if (param_1 == (long *)0x0) {
              ___cxa_bad_cast();
              uVar4 = 0;
              FUN_108120884();
              if ((uVar4 & 1) == 0) {
                func_0x0001080f6df0();
                plVar3 = param_1;
                func_0x00010813c1e0();
                do {
                  func_0x0001080f6774();
                } while (extraout_w9_01 != 0);
                func_0x0001080f6738();
                func_0x0001080f6a9c();
                do {
                  func_0x0001080f69d0();
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar3 + 1,0x10);
                  if (bVar2) {
                    plVar3[1] = extraout_x8_01;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                unaff_x19 = param_1;
                if ((bool)in_ZR) {
                  func_0x0001080f6640();
                }
              }
              else {
                func_0x0001080f6670();
                func_0x0001080f68e0();
                func_0x0001080f686c();
                if (param_1 == (long *)0x0) {
                  ___cxa_bad_cast();
                  uVar4 = 0;
                  FUN_108120884();
                  if ((uVar4 & 1) == 0) {
                    func_0x0001080f6df0();
                    plVar3 = param_1;
                    func_0x00010813bb3c();
                    do {
                      func_0x0001080f6774();
                    } while (extraout_w9_02 != 0);
                    func_0x0001080f6738();
                    func_0x0001080f6a9c();
                    do {
                      func_0x0001080f69d0();
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(plVar3 + 1,0x10);
                      if (bVar2) {
                        plVar3[1] = extraout_x8_02;
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                    unaff_x19 = param_1;
                    if ((bool)in_ZR) {
                      func_0x0001080f6640();
                    }
                  }
                  else {
                    func_0x0001080f6670();
                    func_0x0001080f68e0();
                    func_0x0001080f686c();
                    if (param_1 == (long *)0x0) {
                      ___cxa_bad_cast();
                      ppuVar5 = &PTR_DAT_110a26f68;
                      plVar3 = param_1;
                      FUN_108120884();
                      if (((ulong)ppuVar5 & 1) == 0) {
                        unaff_x19 = (long *)0x1b0;
                        __Znwm(0x1b0);
                        func_0x00010813e024();
                        do {
                          func_0x0001080f67e4();
                        } while (extraout_w10_00 != 0);
                        func_0x0001080f6738();
                        func_0x0001080f6a9c();
                        FUN_1080f6288(unaff_x19);
                      }
                      else {
                        func_0x0001080f6670();
                        func_0x0001080f68e0();
                        func_0x0001080f686c();
                        if (plVar3 == (long *)0x0) {
                          ___cxa_bad_cast();
                          func_0x0001080f6c70();
                          if (ppuVar5 != (undefined **)0x0) {
                            do {
                              func_0x0001080f67e4();
                            } while (extraout_w10_01 != 0);
                          }
                          func_0x0001080f6e04(FUN_1080f3cd4);
                          if (unaff_x19 != (long *)0x0) {
                            do {
                              func_0x0001080f67e4();
                            } while (extraout_w10_02 != 0);
                          }
                          *plVar3 = (long)unaff_x19;
                          param_1[2] = (long)plVar3;
                          if (unaff_x19 != (long *)0x0) {
                            plVar3 = unaff_x19 + 1;
                            do {
                              lVar6 = *plVar3;
                              cVar1 = '\x01';
                              bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                              if (bVar2) {
                                *plVar3 = lVar6 + -1;
                                cVar1 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar1 != '\0');
                            if (lVar6 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104bdb638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              (**(code **)(*unaff_x19 + 8))();
                              return unaff_x19;
                            }
                          }
                          return unaff_x19;
                        }
                        func_0x0001080f6878();
                      }
                      return unaff_x19;
                    }
                    func_0x0001080f6878();
                  }
                }
                else {
                  func_0x0001080f6878();
                }
              }
            }
            else {
              func_0x0001080f6878();
            }
          }
        }
        else {
          func_0x0001080f6878();
        }
      }
    }
    else {
      func_0x0001080f6878();
    }
  }
  return unaff_x19;
}



/* Entry: 1080f2fac; end: 1080f3083;  */

long * FUN_1080f2fac(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  long lVar6;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  
  ppuVar5 = &PTR_DAT_110a26f68;
  puVar4 = param_1;
  FUN_108120884();
  if (((ulong)ppuVar5 & 1) == 0) {
    unaff_x19 = (long *)0x1b0;
    __Znwm(0x1b0);
    func_0x00010813e024();
    do {
      func_0x0001080f67e4();
    } while (extraout_w10 != 0);
    func_0x0001080f6738();
    func_0x0001080f6a9c();
    FUN_1080f6288(unaff_x19);
  }
  else {
    func_0x0001080f6670();
    func_0x0001080f68e0();
    func_0x0001080f686c();
    if (puVar4 == (undefined8 *)0x0) {
      ___cxa_bad_cast();
      func_0x0001080f6c70();
      if (ppuVar5 != (undefined **)0x0) {
        do {
          func_0x0001080f67e4();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001080f6e04(FUN_1080f3cd4);
      if (unaff_x19 != (long *)0x0) {
        do {
          func_0x0001080f67e4();
        } while (extraout_w10_01 != 0);
      }
      *puVar4 = unaff_x19;
      param_1[2] = puVar4;
      if (unaff_x19 != (long *)0x0) {
        plVar1 = unaff_x19 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104bdb638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x19 + 8))();
          return unaff_x19;
        }
      }
      return unaff_x19;
    }
    func_0x0001080f6878();
  }
  return unaff_x19;
}



/* Entry: 1080f3084; end: 1080f30eb;  */

void FUN_1080f3084(undefined8 param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  int extraout_w9;
  int extraout_w9_00;
  long unaff_x19;
  
  func_0x0001080f6c70();
  func_0x00010813e32c();
  if (param_2 != 0) {
    do {
      func_0x0001080f6774();
    } while (extraout_w9 != 0);
    do {
      func_0x0001080f6774();
    } while (extraout_w9_00 != 0);
    func_0x0001080f6748();
    func_0x0001080ecc38();
    do {
      func_0x0001080f69d0();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass((undefined8 *)(unaff_x19 + 8),0x10);
      if (bVar2) {
        *(undefined8 *)(unaff_x19 + 8) = extraout_x8;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x0001080f6640();
    }
  }
  return;
}



/* Entry: 1080f30ec; end: 1080f3103;  */

/* WARNING: Removing unreachable block (ram,0x00010812035c) */
/* WARNING: Removing unreachable block (ram,0x00010812036c) */
/* WARNING: Removing unreachable block (ram,0x00010812038c) */

void FUN_1080f30ec(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(long *)(param_1 + 0x150) == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)0x0;
  func_0x0001081203e8(param_1 + 0x150);
  if (((*(byte *)(param_1 + 0x1d7) & 1) == 0) && ((*(byte *)(param_1 + 0x1d0) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    func_0x0001081148f4(param_1 + 0x180);
    func_0x0001081148f4(param_1 + 0x170);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 1080f3104; end: 1080f3123;  */

void FUN_1080f3104(void)

{
  func_0x0001080fd064();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080f3124; end: 1080f3197;  */

void FUN_1080f3124(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x0001080f6c70();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1080f3198; end: 1080f3203;  */

long * FUN_1080f3198(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001080f31e0();
  }
  lVar1 = param_4 + param_3 * 4;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 4;
  return param_1;
}



/* Entry: 1080f3204; end: 1080f321f;  */

long * FUN_1080f3204(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3e == 0) {
    plVar1 = (long *)(param_2 << 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bfe188();
  FUN_1080f324c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1080f3220; end: 1080f324b;  */

long * FUN_1080f3220(long *param_1)

{
  FUN_1080f324c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1080f324c; end: 1080f326f;  */

void FUN_1080f324c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -4;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1080f3270; end: 1080f32f7;  */

long FUN_1080f3270(undefined8 param_1)

{
  undefined4 *unaff_x19;
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_48 [16];
  undefined4 *puStack_38;
  
  func_0x0001080f6c70();
  FUN_1080f32f8();
  FUN_1080f3198(auStack_48,param_1,unaff_x20[1] - *unaff_x20 >> 2,unaff_x20 + 2);
  *puStack_38 = *unaff_x19;
  puStack_38 = puStack_38 + 1;
  FUN_1080f3124();
  lVar1 = unaff_x20[1];
  FUN_1080f3220(auStack_48);
  return lVar1;
}



/* Entry: 1080f32f8; end: 1080f332b;  */

undefined1  [16] FUN_1080f32f8(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3e == 0) {
    func_0x0001080f6f10();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = uVar1;
    return auVar2;
  }
  func_0x0001080f3118();
  _abort();
  FUN_1080f3350();
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1080f332c; end: 1080f334f;  */

void FUN_1080f332c(void)

{
  FUN_1080f3350();
  return;
}



/* Entry: 1080f3350; end: 1080f3393;  */

long FUN_1080f3350(long param_1,ulong param_2)

{
  undefined1 in_CY;
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  long lStack_48;
  
  if (param_2 >> 0x3e == 0) {
    lVar1 = param_2 << 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bfe188();
  if (param_2 >> 0x3e == 0) {
    func_0x0001080f6f10();
    lVar1 = extraout_x9;
    if ((bool)in_CY) {
      lVar1 = extraout_x8;
    }
    return lVar1;
  }
  func_0x0001080f3320();
  lStack_48 = param_1;
  FUN_1080f33c0(&lStack_48);
  return param_1;
}



/* Entry: 1080f3394; end: 1080f33bf;  */

undefined8 FUN_1080f3394(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_1080f33c0(&uStack_28);
  return param_1;
}



/* Entry: 1080f33c0; end: 1080f33d7;  */

void FUN_1080f33c0(undefined8 *param_1)

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



/* Entry: 1080f33d8; end: 1080f3403;  */

undefined8 FUN_1080f33d8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_1080f3404(&uStack_28);
  return param_1;
}



/* Entry: 1080f3404; end: 1080f341b;  */

void FUN_1080f3404(undefined8 *param_1)

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



/* Entry: 1080f341c; end: 1080f348b;  */

void FUN_1080f341c(void)

{
  func_0x0001080f66a0();
  return;
}



/* Entry: 1080f348c; end: 1080f3497;  */

void FUN_1080f348c(void)

{
  func_0x0001080f6c44();
  return;
}



/* Entry: 1080f3498; end: 1080f34a3;  */

void FUN_1080f3498(void)

{
  return;
}



/* Entry: 1080f34a4; end: 1080f34af;  */

void FUN_1080f34a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001080f6bac();
  func_0x0001080f6ce4(param_1,param_3);
  func_0x0001080f6a1c();
  func_0x0001080f6980();
  return;
}



/* Entry: 1080f34b0; end: 1080f34e3;  */

void FUN_1080f34b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001080f6ce4(param_1,param_3);
  func_0x0001080f6a1c();
  func_0x0001080f6980();
  return;
}



/* Entry: 1080f34e4; end: 1080f369f;  */

void FUN_1080f34e4(undefined8 param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long lStack_58;
  
  FUN_1080f3700(param_1,param_3);
  if ((bRam0000000113729710 & 1) == 0) {
    iVar2 = 0x13729710;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f6934(&UNK_10f47ac05);
      func_0x0001080f692c();
    }
  }
  if ((bRam0000000113729720 & 1) == 0) {
    iVar2 = 0x13729720;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f6cdc(&UNK_10f47ac0c);
      func_0x0001080f6c8c();
    }
  }
  if ((bRam0000000113729730 & 1) == 0) {
    iVar2 = 0x13729730;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f6cdc(&UNK_10f47ac13);
      func_0x0001080f6c8c();
    }
  }
  if ((bRam0000000113729740 & 1) == 0) {
    iVar2 = 0x13729740;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001080f6cdc(&UNK_10f47ac1d);
      func_0x0001080f6c8c();
    }
  }
  fVar6 = *(float *)(param_2 + 8);
  fVar4 = *(float *)(param_2 + 0x10);
  func_0x00010813b780(&lStack_58,param_1);
  if (lStack_58 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x0001080f6ae4();
    lVar3 = lStack_58;
    func_0x0001080f6a40();
  }
  func_0x0001080ec798(lStack_58);
  fVar5 = fVar4;
  fVar7 = fVar6;
  if (lVar3 != 0) {
    bVar1 = *(char *)(lVar3 + 0x1da) == '\0';
    fVar7 = -fVar6;
    if (bVar1) {
      fVar7 = fVar6;
    }
    fVar5 = -fVar4;
    if (bVar1) {
      fVar5 = fVar4;
    }
  }
  func_0x0001080f6e1c(fVar7,*(undefined4 *)(param_2 + 0xc),0x113729708,0x113729718);
  fVar4 = *(float *)(param_2 + 0x14);
  func_0x0001080f6ea8((double)fVar5,0x113729728,0x113729728,param_3);
  func_0x00010b9aa8d0();
  func_0x0001080f6980();
  func_0x0001080f6ea8((double)fVar4);
  func_0x00010b9aa8d0();
  func_0x0001080f6980();
  return;
}



/* Entry: 1080f36a0; end: 1080f36ff;  */

void FUN_1080f36a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined8 extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined8 uStack_18;
  
  func_0x0001080f6728();
  uStack_38 = CONCAT22(uStack_38._2_2_,*(undefined2 *)(param_4 + 1));
  *param_4 = 0;
  *(undefined2 *)(param_4 + 1) = 0;
  uStack_18 = extraout_x8;
  func_0x000105275910(&uStack_30);
  func_0x000104bda914(&uStack_30);
  func_0x0001080f6980();
  func_0x0001080f660c(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080f6f38();
  func_0x0001080f6ee4();
  if ((bRam0000000113729750 & 1) == 0) {
    iVar3 = 0x13729750;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x0001003a83dc(0x113729748,&DAT_10f6856fe);
      ___cxa_guard_release(0x113729750);
    }
  }
  if ((bRam0000000113729760 & 1) == 0) {
    iVar3 = 0x13729760;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x0001003a83dc(0x113729758,&DAT_10f62b0e2);
      ___cxa_guard_release(0x113729760);
    }
  }
  if ((bRam0000000113729770 & 1) == 0) {
    iVar3 = 0x13729770;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x0001080f6cd4("y");
      func_0x0001080f6d1c();
    }
  }
  if ((bRam0000000113729780 & 1) == 0) {
    iVar3 = 0x13729780;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x0001080f6cd4(&UNK_10f47ac27);
      func_0x0001080f6d1c();
    }
  }
  if ((bRam0000000113729790 & 1) == 0) {
    iVar3 = 0x13729790;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x0001080f6cd4(&UNK_10f47ac31);
      func_0x0001080f6d1c();
    }
  }
  iVar3 = *(int *)(unaff_x21 + 0x98);
  if (iVar3 == 4) {
    uStack_30 = 2;
  }
  else if (iVar3 == 3) {
    uStack_30 = 1;
  }
  else {
    if (iVar3 != 2) goto LAB_1080f37d0;
    uStack_30 = 0;
  }
  uStack_28 = 4;
  func_0x00010b9aa8d0();
  func_0x0001080f6a94();
LAB_1080f37d0:
  func_0x00010813b564();
  uVar5 = param_1;
  uVar7 = param_2;
  func_0x00010813b594();
  uVar6 = uVar5;
  uVar8 = uVar7;
  func_0x00010813b780(&uStack_30);
  lVar1 = CONCAT44(uStack_2c,uStack_30);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x0001080f6ae4();
    lVar4 = lVar1;
    func_0x0001080f6a40();
  }
  func_0x0001080ec798(lVar1);
  if (lVar4 != 0) {
    func_0x000108108a8c(&uStack_30,lVar4);
    uStack_38 = (undefined4)param_1;
    uStack_34 = (undefined4)param_2;
    uVar2 = CONCAT44(uStack_2c,uStack_30);
    func_0x00010b8c88d0(uVar2,&uStack_38);
    uVar5 = uVar6;
    uVar7 = uVar8;
    func_0x00010b8c8904(uVar2,&uStack_38);
    func_0x0001080d289c(uVar2);
    param_2 = uVar8;
    param_1 = uVar6;
  }
  func_0x0001080f6e1c(param_1,param_2,0x113729758,0x113729768);
  func_0x0001080f6e1c(uVar5,uVar7,0x113729778,0x113729788);
  return;
}



/* Entry: 1080f3700; end: 1080f397f;  */

void FUN_1080f3700(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long unaff_x21;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined2 in_stack_00000018;
  
  func_0x0001080f6f38();
  func_0x0001080f6ee4();
  if ((bRam0000000113729750 & 1) == 0) {
    iVar3 = 0x13729750;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x0001003a83dc(0x113729748,&DAT_10f6856fe);
      ___cxa_guard_release(0x113729750);
    }
  }
  if ((bRam0000000113729760 & 1) == 0) {
    iVar3 = 0x13729760;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x0001003a83dc(0x113729758,&DAT_10f62b0e2);
      ___cxa_guard_release(0x113729760);
    }
  }
  if ((bRam0000000113729770 & 1) == 0) {
    iVar3 = 0x13729770;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x0001080f6cd4("y");
      func_0x0001080f6d1c();
    }
  }
  if ((bRam0000000113729780 & 1) == 0) {
    iVar3 = 0x13729780;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x0001080f6cd4(&UNK_10f47ac27);
      func_0x0001080f6d1c();
    }
  }
  if ((bRam0000000113729790 & 1) == 0) {
    iVar3 = 0x13729790;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x0001080f6cd4(&UNK_10f47ac31);
      func_0x0001080f6d1c();
    }
  }
  iVar3 = *(int *)(unaff_x21 + 0x98);
  if (iVar3 == 4) {
    in_stack_00000010 = 2;
  }
  else if (iVar3 == 3) {
    in_stack_00000010 = 1;
  }
  else {
    if (iVar3 != 2) goto LAB_1080f37d0;
    in_stack_00000010 = 0;
  }
  in_stack_00000018 = 4;
  func_0x00010b9aa8d0();
  func_0x0001080f6a94();
LAB_1080f37d0:
  func_0x00010813b564();
  uVar5 = param_1;
  uVar7 = param_2;
  func_0x00010813b594();
  uVar6 = uVar5;
  uVar8 = uVar7;
  func_0x00010813b780(&stack0x00000010);
  lVar1 = CONCAT44(in_stack_00000014,in_stack_00000010);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x0001080f6ae4();
    lVar4 = lVar1;
    func_0x0001080f6a40();
  }
  func_0x0001080ec798(lVar1);
  if (lVar4 != 0) {
    func_0x000108108a8c(&stack0x00000010,lVar4);
    in_stack_00000008 = (undefined4)param_1;
    in_stack_0000000c = (undefined4)param_2;
    uVar2 = CONCAT44(in_stack_00000014,in_stack_00000010);
    func_0x00010b8c88d0(uVar2,&stack0x00000008);
    uVar5 = uVar6;
    uVar7 = uVar8;
    func_0x00010b8c8904(uVar2,&stack0x00000008);
    func_0x0001080d289c(uVar2);
    param_2 = uVar8;
    param_1 = uVar6;
  }
  func_0x0001080f6e1c(param_1,param_2,0x113729758,0x113729768);
  func_0x0001080f6e1c(uVar5,uVar7,0x113729778,0x113729788);
  return;
}



/* Entry: 1080f3980; end: 1080f39e3;  */

void FUN_1080f3980(float param_1,float param_2,undefined8 param_3)

{
  func_0x0001080f6ea8((double)param_1,param_3,param_3);
  func_0x00010b9aa8d0();
  func_0x0001080f6980();
  func_0x0001080f6ea8((double)param_2);
  func_0x00010b9aa8d0();
  func_0x0001080f6980();
  return;
}



/* Entry: 1080f39e4; end: 1080f3a03;  */

void FUN_1080f39e4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000104bda388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080f3a04; end: 1080f3a07;  */

void FUN_1080f3a04(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1080f3a08; end: 1080f3a43;  */

void FUN_1080f3a08(void)

{
  int extraout_w11;
  long *unaff_x20;
  
  func_0x0001080f6a48();
  func_0x0001080f67f4(&PTR_FUN_110a21410);
  if (*unaff_x20 != 0) {
    do {
      func_0x0001080f6784();
    } while (extraout_w11 != 0);
  }
  func_0x0001080f6b38();
  return;
}



/* Entry: 1080f3a44; end: 1080f3a5b;  */

void FUN_1080f3a44(void)

{
  func_0x0001080f6c44();
  func_0x0001080f6bac();
  func_0x0001080f66a0();
  return;
}



/* Entry: 1080f3a5c; end: 1080f3a93;  */

void FUN_1080f3a5c(void)

{
  func_0x0001080f66a0();
  return;
}



/* Entry: 1080f3a94; end: 1080f3aab;  */

void FUN_1080f3a94(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  double dVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  double dStack_88;
  undefined2 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  func_0x0001080f6c44();
  func_0x0001080f6bac();
  puVar2 = *(undefined8 **)(param_4 + 0x10);
  func_0x0001080f6c5c();
  fVar3 = *(float *)(param_3 + 0x28);
  func_0x00010813b780(&dStack_88,param_1);
  if (dStack_88 == 0.0) {
    dVar1 = 0.0;
  }
  else {
    func_0x0001080f6ae4();
    dVar1 = dStack_88;
    func_0x0001080f6a40();
  }
  func_0x0001080ec798(dStack_88);
  fVar4 = fVar3;
  if ((dVar1 != 0.0) && (fVar4 = -fVar3, *(char *)((long)dVar1 + 0x1da) == '\0')) {
    fVar4 = fVar3;
  }
  func_0x0001003a83dc(auStack_78,&DAT_10f2c46ae);
  uStack_80 = 6;
  dStack_88 = (double)fVar4;
  func_0x0001080f6d0c();
  func_0x0001080f6a54();
  func_0x0001080f6e8c();
  FUN_1080f36a0(*puVar2,auStack_70);
  func_0x00010b9a8d98(auStack_70);
  return;
}



/* Entry: 1080f3aac; end: 1080f3b77;  */

void FUN_1080f3aac(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  double dVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  double dStack_68;
  undefined2 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [16];
  
  puVar2 = *(undefined8 **)(param_4 + 0x10);
  func_0x0001080f6c5c();
  fVar3 = *(float *)(param_3 + 0x28);
  func_0x00010813b780(&dStack_68,param_1);
  if (dStack_68 == 0.0) {
    dVar1 = 0.0;
  }
  else {
    func_0x0001080f6ae4();
    dVar1 = dStack_68;
    func_0x0001080f6a40();
  }
  func_0x0001080ec798(dStack_68);
  fVar4 = fVar3;
  if ((dVar1 != 0.0) && (fVar4 = -fVar3, *(char *)((long)dVar1 + 0x1da) == '\0')) {
    fVar4 = fVar3;
  }
  func_0x0001003a83dc(auStack_58,&DAT_10f2c46ae);
  uStack_60 = 6;
  dStack_68 = (double)fVar4;
  func_0x0001080f6d0c();
  func_0x0001080f6a54();
  func_0x0001080f6e8c();
  FUN_1080f36a0(*puVar2,auStack_50);
  func_0x00010b9a8d98(auStack_50);
  return;
}



/* Entry: 1080f3b78; end: 1080f3b97;  */

void FUN_1080f3b78(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000104bda388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080f3b98; end: 1080f3b9b;  */

void FUN_1080f3b98(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1080f3b9c; end: 1080f3bd7;  */

void FUN_1080f3b9c(void)

{
  int extraout_w11;
  long *unaff_x20;
  
  func_0x0001080f6a48();
  func_0x0001080f67f4(&PTR_FUN_110a21430);
  if (*unaff_x20 != 0) {
    do {
      func_0x0001080f6784();
    } while (extraout_w11 != 0);
  }
  func_0x0001080f6b38();
  return;
}



/* Entry: 1080f3bd8; end: 1080f3bef;  */

void FUN_1080f3bd8(void)

{
  long in_x3;
  undefined8 *puVar1;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [16];
  
  func_0x0001080f6c44();
  func_0x0001080f6bac();
  puVar1 = *(undefined8 **)(in_x3 + 0x10);
  func_0x0001080f6c5c();
  func_0x0001003a83dc(auStack_58,"scale");
  func_0x0001080f6d0c();
  func_0x0001080f6a54();
  func_0x0001080f6e8c();
  FUN_1080f36a0(*puVar1,auStack_50);
  func_0x00010b9a8d98(auStack_50);
  return;
}



/* Entry: 1080f3bf0; end: 1080f3c5b;  */

void FUN_1080f3bf0(void)

{
  long in_x3;
  undefined8 *puVar1;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [16];
  
  puVar1 = *(undefined8 **)(in_x3 + 0x10);
  func_0x0001080f6c5c();
  func_0x0001003a83dc(auStack_38,"scale");
  func_0x0001080f6d0c();
  func_0x0001080f6a54();
  func_0x0001080f6e8c();
  FUN_1080f36a0(*puVar1,auStack_30);
  func_0x00010b9a8d98(auStack_30);
  return;
}



/* Entry: 1080f3c5c; end: 1080f3c7b;  */

void FUN_1080f3c5c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000104bda388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080f3c7c; end: 1080f3c7f;  */

void FUN_1080f3c7c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1080f3c80; end: 1080f3cbb;  */

void FUN_1080f3c80(void)

{
  int extraout_w11;
  long *unaff_x20;
  
  func_0x0001080f6a48();
  func_0x0001080f67f4(&PTR_FUN_110a21450);
  if (*unaff_x20 != 0) {
    do {
      func_0x0001080f6784();
    } while (extraout_w11 != 0);
  }
  func_0x0001080f6b38();
  return;
}



/* Entry: 1080f3cbc; end: 1080f3cd3;  */

void FUN_1080f3cbc(void)

{
  func_0x0001080f6c44();
  func_0x0001080f6bac();
  func_0x0001080f6820();
  func_0x0001080f6a1c();
  func_0x0001080f6980();
  return;
}



/* Entry: 1080f3cd4; end: 1080f3cfb;  */

void FUN_1080f3cd4(void)

{
  func_0x0001080f6820();
  func_0x0001080f6a1c();
  func_0x0001080f6980();
  return;
}



/* Entry: 1080f3cfc; end: 1080f3d1b;  */

void FUN_1080f3cfc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000104bda388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080f3d1c; end: 1080f3d1f;  */

void FUN_1080f3d1c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1080f3d20; end: 1080f3d5b;  */

void FUN_1080f3d20(void)

{
  int extraout_w11;
  long *unaff_x20;
  
  func_0x0001080f6a48();
  func_0x0001080f67f4(&PTR_FUN_110a21470);
  if (*unaff_x20 != 0) {
    do {
      func_0x0001080f6784();
    } while (extraout_w11 != 0);
  }
  func_0x0001080f6b38();
  return;
}



/* Entry: 1080f3d5c; end: 1080f3d67;  */

void FUN_1080f3d5c(void)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long in_x3;
  undefined8 *extraout_x8;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long lStack_80;
  char cStack_78;
  undefined8 auStack_70 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001080f6bac();
  plVar2 = &lStack_80;
  plVar6 = *(long **)(in_x3 + 0x10);
  func_0x00010b9a8f04();
  lVar7 = *plVar6;
  func_0x0001080f6ea0();
  if (plVar2 == (long *)0x0) {
    func_0x0001080f6aa4();
  }
  else if (((cStack_78 == '\t') && (lStack_80 != 0)) && (2 < *(ulong *)(lStack_80 + 0x10))) {
    func_0x00010b9a9710(&uStack_58,lStack_80 + 0x18);
    func_0x00010b9a9710(&uStack_60,lStack_80 + 0x28);
    uVar3 = lStack_80 + 0x38;
    func_0x00010b9a9608();
    if (*(ulong *)(lStack_80 + 0x10) < 4) {
      uVar4 = uVar3;
      func_0x00010b9a8fc4();
    }
    else {
      uVar4 = lStack_80 + 0x48;
    }
    func_0x00010b9a8f04(auStack_70,uVar4);
    if ((uVar3 & 1) == 0) {
      pcVar5 = (code *)plVar6[1];
      plVar1 = (long *)(lVar7 + (plVar6[2] >> 1));
      if ((plVar6[2] & 1U) != 0) {
        pcVar5 = *(code **)(*plVar1 + ((ulong)pcVar5 & 0xffffffff));
      }
      (*pcVar5)(extraout_x8,plVar1,plVar2,&uStack_58,&uStack_60,auStack_70);
    }
    else {
      pcVar5 = (code *)plVar6[3];
      plVar1 = (long *)(lVar7 + (plVar6[4] >> 1));
      if ((plVar6[4] & 1U) != 0) {
        pcVar5 = *(code **)(*plVar1 + ((ulong)pcVar5 & 0xffffffff));
      }
      (*pcVar5)(plVar1,plVar2);
      func_0x0001080f6aa4();
    }
    func_0x0001080f6a94();
    func_0x000104bda3ac(uStack_60);
    func_0x000104bda3ac(uStack_58);
  }
  else {
    func_0x00010b99f5f8(auStack_70,&UNK_10f47ac3b);
    *extraout_x8 = 2;
    extraout_x8[1] = auStack_70[0];
    auStack_70[0] = 0;
    func_0x000104bda960(0);
  }
  func_0x0001080f6e78();
  func_0x0001080f6980();
  return;
}



/* Entry: 1080f3d68; end: 1080f3ec7;  */

void FUN_1080f3d68(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long in_x3;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long lStack_70;
  char cStack_68;
  undefined8 auStack_60 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = &lStack_70;
  plVar6 = *(long **)(in_x3 + 0x10);
  func_0x00010b9a8f04();
  lVar7 = *plVar6;
  func_0x0001080f6ea0();
  if (plVar2 == (long *)0x0) {
    func_0x0001080f6aa4();
  }
  else if (((cStack_68 == '\t') && (lStack_70 != 0)) && (2 < *(ulong *)(lStack_70 + 0x10))) {
    func_0x00010b9a9710(&uStack_48,lStack_70 + 0x18);
    func_0x00010b9a9710(&uStack_50,lStack_70 + 0x28);
    uVar3 = lStack_70 + 0x38;
    func_0x00010b9a9608();
    if (*(ulong *)(lStack_70 + 0x10) < 4) {
      uVar4 = uVar3;
      func_0x00010b9a8fc4();
    }
    else {
      uVar4 = lStack_70 + 0x48;
    }
    func_0x00010b9a8f04(auStack_60,uVar4);
    if ((uVar3 & 1) == 0) {
      pcVar5 = (code *)plVar6[1];
      plVar1 = (long *)(lVar7 + (plVar6[2] >> 1));
      if ((plVar6[2] & 1U) != 0) {
        pcVar5 = *(code **)(*plVar1 + ((ulong)pcVar5 & 0xffffffff));
      }
      (*pcVar5)(param_1,plVar1,plVar2,&uStack_48,&uStack_50,auStack_60);
    }
    else {
      pcVar5 = (code *)plVar6[3];
      plVar1 = (long *)(lVar7 + (plVar6[4] >> 1));
      if ((plVar6[4] & 1U) != 0) {
        pcVar5 = *(code **)(*plVar1 + ((ulong)pcVar5 & 0xffffffff));
      }
      (*pcVar5)(plVar1,plVar2);
      func_0x0001080f6aa4();
    }
    func_0x0001080f6a94();
    func_0x000104bda3ac(uStack_50);
    func_0x000104bda3ac(uStack_48);
  }
  else {
    func_0x00010b99f5f8(auStack_60,&UNK_10f47ac3b);
    *param_1 = 2;
    param_1[1] = auStack_60[0];
    auStack_60[0] = 0;
    func_0x000104bda960(0);
  }
  func_0x0001080f6e78();
  func_0x0001080f6980();
  return;
}



/* Entry: 1080f3ec8; end: 1080f3edb;  */

void FUN_1080f3ec8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080f3edc; end: 1080f3f1b;  */

void FUN_1080f3edc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001080f6a48();
  *param_1 = &PTR_FUN_110a21490;
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  uVar2 = unaff_x20[4];
  uVar5 = *unaff_x20;
  uVar4 = unaff_x20[3];
  uVar3 = unaff_x20[2];
  puVar1[1] = unaff_x20[1];
  *puVar1 = uVar5;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  puVar1[4] = uVar2;
  *(undefined8 **)(unaff_x19 + 8) = puVar1;
  return;
}



/* Entry: 1080f3f1c; end: 1080f3f67;  */

void FUN_1080f3f1c(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_3 + 0x10);
  func_0x0001080f68f0();
  if (param_1 != 0) {
    pcVar2 = *(code **)(param_3 + 0x18);
    plVar1 = (long *)(lVar3 + ((long)*(ulong *)(param_3 + 0x20) >> 1));
    if ((*(ulong *)(param_3 + 0x20) & 1) != 0) {
      pcVar2 = *(code **)(*plVar1 + ((ulong)pcVar2 & 0xffffffff));
    }
    (*pcVar2)(plVar1,param_1);
  }
  if (param_1 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080f3f68; end: 1080f3f73;  */

void FUN_1080f3f68(void)

{
  return;
}



/* Entry: 1080f3f74; end: 1080f3fbb;  */

void FUN_1080f3f74(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001080f68f0();
  if (param_1 != 0) {
    func_0x0001080f2718(param_3,param_1,(uint)uVar1 >> 8 | (uint)uVar1 << 0x18);
  }
  func_0x0001080f6974();
  if (param_1 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080f3fbc; end: 1080f3fdf;  */

void FUN_1080f3fbc(void)

{
  return;
}



/* Entry: 1080f3fe0; end: 1080f4017;  */

void FUN_1080f3fe0(long param_1,undefined8 param_2)

{
  func_0x0001080f68f0();
  if (param_1 == 0) {
    return;
  }
  func_0x0001080f2718(param_2,param_1,0);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080f4018; end: 1080f403b;  */

void FUN_1080f4018(void)

{
  return;
}



/* Entry: 1080f403c; end: 1080f4077;  */

void FUN_1080f403c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001080f68f0();
  if (param_1 != 0) {
    func_0x00010811f9c0(param_1,(uint)uVar1 >> 8 | (uint)uVar1 << 0x18);
  }
  func_0x0001080f68b4();
  if (param_1 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080f4078; end: 1080f409b;  */

void FUN_1080f4078(void)

{
  return;
}



/* Entry: 1080f409c; end: 1080f40c3;  */

void FUN_1080f409c(long param_1)

{
  func_0x0001080f68f0();
  if (param_1 == 0) {
    return;
  }
  func_0x0001080f6e80();
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080f40c4; end: 1080f40e7;  */

void FUN_1080f40c4(void)

{
  return;
}



/* Entry: 1080f40e8; end: 1080f4207;  */

void FUN_1080f40e8(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_b0;
  undefined5 uStack_a8;
  undefined3 uStack_a3;
  undefined5 uStack_a0;
  undefined3 uStack_9b;
  undefined3 uStack_90;
  undefined5 uStack_8d;
  undefined3 uStack_88;
  undefined5 uStack_85;
  undefined3 uStack_80;
  undefined5 uStack_7d;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_48;
  
  func_0x0001080f6728();
  uStack_b0 = *param_2;
  uStack_a8 = (undefined5)param_2[1];
  uStack_a3 = (undefined3)((ulong)param_2[1] >> 0x28);
  uStack_a0 = (undefined5)param_2[2];
  uStack_9b = (undefined3)((ulong)param_2[2] >> 0x28);
  uStack_48 = extraout_x8;
  func_0x0001080f68f0();
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
    func_0x00010811fcbc(param_1,param_3[2]);
    lVar3 = *param_3;
    if (lVar3 == 0) {
      func_0x00010811f8f8(param_1,&uStack_b0);
    }
    else {
      lVar4 = param_3[2];
      uStack_85 = uStack_a8;
      uStack_8d = (undefined5)uStack_b0;
      uStack_88 = (undefined3)((ulong)uStack_b0 >> 0x28);
      uStack_80 = uStack_a3;
      uStack_7d = uStack_a0;
      pcStack_78 = FUN_1080f5a34;
      ppuStack_70 = &PTR_FUN_110a21a70;
      func_0x0001080f6ca4();
      *puVar1 = 0x10811f8f8;
      puVar1[1] = 0;
      uVar2 = *(undefined8 *)((long)param_1 + 0x121);
      uVar5 = *(undefined8 *)((long)param_1 + 0x114);
      puVar1[3] = *(undefined8 *)((long)param_1 + 0x11c);
      puVar1[2] = uVar5;
      *(undefined8 *)((long)puVar1 + 0x1d) = uVar2;
      *(ulong *)((long)puVar1 + 0x2d) = CONCAT53(uStack_85,uStack_88);
      *(ulong *)((long)puVar1 + 0x25) = CONCAT53(uStack_8d,uStack_90);
      *(ulong *)((long)puVar1 + 0x35) = CONCAT53(uStack_7d,uStack_80);
      puStack_68 = puVar1;
      FUN_1080e5550(0x3f24f8b588e368f1,lVar3,param_1,lVar4,&pcStack_78);
      func_0x0001080f6b44(ppuStack_70);
    }
  }
  func_0x0001080f6974();
  func_0x0001080f660c(uStack_48);
  if ((bool)in_ZR) {
    if (param_1 != (undefined8 *)0x0) {
      func_0x0001003a90c4(&stack0xffffffffffffffe0);
      return;
    }
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1080f4208; end: 1080f422b;  */

void FUN_1080f4208(void)

{
  return;
}



/* Entry: 1080f422c; end: 1080f4343;  */

void FUN_1080f422c(undefined8 *param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  undefined8 uVar3;
  uint3 uStack_8f;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_48;
  
  func_0x0001080f6728();
  uStack_48 = extraout_x8;
  func_0x0001080f68f0();
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
    func_0x00010811fcbc(param_1,param_2[2]);
    if (*param_2 == 0) {
      pcStack_78 = (code *)0x0;
      ppuStack_70 = (undefined **)0x0;
      puStack_68 = (undefined8 *)CONCAT35((int3)((ulong)puStack_68 >> 0x28),0x100000000);
      func_0x00010811f8f8(param_1,&pcStack_78);
    }
    else {
      pcStack_78 = FUN_1080f5b04;
      ppuStack_70 = &PTR_FUN_110a21a90;
      func_0x0001080f6ca4();
      *puVar1 = 0x10811f8f8;
      puVar1[1] = 0;
      uVar2 = *(undefined8 *)((long)param_1 + 0x121);
      uVar3 = *(undefined8 *)((long)param_1 + 0x114);
      puVar1[3] = *(undefined8 *)((long)param_1 + 0x11c);
      puVar1[2] = uVar3;
      *(undefined8 *)((long)puVar1 + 0x1d) = uVar2;
      *(undefined8 *)((long)puVar1 + 0x2d) = 0;
      *(ulong *)((long)puVar1 + 0x25) = (ulong)uStack_8f;
      *(undefined8 *)((long)puVar1 + 0x34) = 0;
      *(undefined1 *)((long)puVar1 + 0x3c) = 1;
      puStack_68 = puVar1;
      func_0x0001080f6ab0(0x3f24f8b588e368f1);
      FUN_1080e5550();
      func_0x0001080f66d4(ppuStack_70);
    }
  }
  func_0x0001080f660c(uStack_48);
  if ((bool)in_ZR) {
    if (param_1 != (undefined8 *)0x0) {
      func_0x0001003a90c4(&stack0xffffffffffffffe0);
      return;
    }
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1080f4344; end: 1080f4367;  */

void FUN_1080f4344(void)

{
  return;
}



/* Entry: 1080f4368; end: 1080f43bf;  */

void FUN_1080f4368(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x0001080f6890();
  lVar1 = 0;
  if (param_1 != 0) {
    func_0x0001080f6ebc();
    func_0x0001080f6e94(0x3f6ff2e48e8a71de,param_3,param_1);
    lVar1 = param_3;
  }
  func_0x0001080f68b4();
  if (lVar1 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080f43c0; end: 1080f43e3;  */

void FUN_1080f43c0(void)

{
  return;
}



/* Entry: 1080f43e4; end: 1080f4423;  */

void FUN_1080f43e4(long param_1)

{
  func_0x0001080f68f0();
  if (param_1 == 0) {
    return;
  }
  func_0x0001080f6ebc();
  func_0x0001080f6ab0(0x3f6ff2e48e8a71de,0x3f800000);
  func_0x0001080f6e94();
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080f4424; end: 1080f4447;  */

void FUN_1080f4424(void)

{
  return;
}



/* Entry: 1080f4448; end: 1080f4507;  */

void FUN_1080f4448(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long unaff_x22;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  func_0x0001080f6f38();
  func_0x0001080f6810();
  func_0x0001080f6b50();
  if (param_2 != 0) {
    func_0x0001080f6d80();
    if ((!(bool)in_ZR || unaff_x22 == 0) || (*(long *)(unaff_x22 + 0x10) != 5)) {
      func_0x0001080f6ccc();
      func_0x0001080f6ad4();
      goto LAB_1080f44f8;
    }
    func_0x00010b9a92f0(unaff_x22 + 0x18);
    fVar1 = (float)param_1;
    func_0x00010b9a92f0(unaff_x22 + 0x28);
    fVar2 = (float)param_1;
    func_0x00010b9a92f0(unaff_x22 + 0x38);
    fVar3 = (float)param_1;
    func_0x00010b9a92f0(unaff_x22 + 0x48);
    fVar4 = (float)param_1;
    func_0x00010b9a92f0(unaff_x22 + 0x58);
    FUN_1080f27dc(fVar1,fVar2,fVar3,fVar4,(float)param_1,param_2,param_4);
  }
  func_0x0001080f6974();
LAB_1080f44f8:
  func_0x0001080f6b58();
  func_0x0001080f6a54();
  return;
}



/* Entry: 1080f4508; end: 1080f452b;  */

void FUN_1080f4508(void)

{
  return;
}



/* Entry: 1080f452c; end: 1080f456f;  */

void FUN_1080f452c(long param_1)

{
  func_0x0001080f68f0();
  if (param_1 == 0) {
    return;
  }
  func_0x0001080f6ab0(0,0,0x3f800000,0x3f800000,0);
  FUN_1080f27dc();
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080f4570; end: 1080f4593;  */

void FUN_1080f4570(void)

{
  return;
}



/* Entry: 1080f4594; end: 1080f45c7;  */

void FUN_1080f4594(long param_1)

{
  double unaff_d8;
  
  func_0x0001080f6890();
  if (param_1 != 0) {
    func_0x00010811f9a8((float)unaff_d8);
  }
  func_0x0001080f68b4();
  if (param_1 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080f45c8; end: 1080f45eb;  */

void FUN_1080f45c8(void)

{
  return;
}



/* Entry: 1080f45ec; end: 1080f4613;  */

void FUN_1080f45ec(long param_1)

{
  func_0x0001080f68f0();
  if (param_1 == 0) {
    return;
  }
  func_0x0001080f6dc0();
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080f4614; end: 1080f4637;  */

void FUN_1080f4614(void)

{
  return;
}



/* Entry: 1080f4638; end: 1080f466b;  */

void FUN_1080f4638(long param_1)

{
  undefined8 unaff_d8;
  
  func_0x0001080f6890();
  if (param_1 != 0) {
    FUN_1080f2fac();
    *(undefined8 *)(param_1 + 0x130) = unaff_d8;
  }
  func_0x0001080f68b4();
  if (param_1 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080f466c; end: 1080f468f;  */

void FUN_1080f466c(void)

{
  return;
}



/* Entry: 1080f4690; end: 1080f46c7;  */

void FUN_1080f4690(long param_1)

{
  long lVar1;
  
  func_0x0001080f68f0();
  if (param_1 == 0) {
    return;
  }
  lVar1 = param_1;
  func_0x0001080f6d24();
  *(undefined8 *)(lVar1 + 0x130) = 0;
  FUN_1080f3084(param_1,lVar1);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080f46c8; end: 1080f46eb;  */

void FUN_1080f46c8(void)

{
  return;
}



/* Entry: 1080f46ec; end: 1080f474f;  */

void FUN_1080f46ec(long param_1)

{
  undefined1 auStack_38 [8];
  byte bStack_30;
  undefined1 auStack_28 [8];
  
  func_0x0001080f6810();
  func_0x0001080f6b50();
  if ((param_1 != 0) && ((bStack_30 & 0xfe) == 2)) {
    func_0x00010b9a9358(auStack_28,auStack_38);
    func_0x000108120a64(param_1,auStack_28);
    func_0x0001080f6e8c();
  }
  func_0x0001080f68b4();
  func_0x0001078bee50();
  func_0x0001080f6a54();
  return;
}



/* Entry: 1080f4750; end: 1080f4773;  */

void FUN_1080f4750(void)

{
  return;
}



/* Entry: 1080f4774; end: 1080f47b3;  */

void FUN_1080f4774(long param_1)

{
  undefined8 uStack_28;
  
  func_0x0001080f68f0();
  if (param_1 == 0) {
    return;
  }
  uStack_28 = 0;
  func_0x000108120a64(param_1,&uStack_28);
  func_0x0001003a8cb8(uStack_28);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080f47b4; end: 1080f47d7;  */

void FUN_1080f47b4(void)

{
  return;
}



/* Entry: 1080f47d8; end: 1080f489b;  */

void FUN_1080f47d8(undefined8 param_1,long param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long in_stack_00000008;
  byte in_stack_00000010;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = (undefined4)param_1;
  func_0x0001080f6f38();
  func_0x0001080f6810();
  func_0x0001080f6b50();
  if (param_2 != 0) {
    if (in_stack_00000010 < 2) {
      FUN_1080f30ec(param_2);
    }
    else {
      if ((in_stack_00000010 != 9 || in_stack_00000008 == 0) ||
         (*(ulong *)(in_stack_00000008 + 0x10) < 5)) {
        func_0x0001080f6ccc();
        func_0x0001080f6ad4();
        goto LAB_1080f4844;
      }
      func_0x00010b9a92f0(in_stack_00000008 + 0x28);
      dVar1 = (double)CONCAT44(uVar4,uVar3);
      func_0x00010b9a92f0(in_stack_00000008 + 0x38);
      dVar2 = (double)CONCAT44(uVar4,uVar3);
      func_0x00010b9a92f0(in_stack_00000008 + 0x48);
      in_stack_00000008 = in_stack_00000008 + 0x58;
      func_0x00010b9a9588(in_stack_00000008);
      FUN_108120334((float)dVar1,(float)dVar2,(float)(double)CONCAT44(uVar4,uVar3),param_2,
                    (uint)in_stack_00000008 >> 8 | (uint)in_stack_00000008 << 0x18);
    }
  }
  func_0x0001080f6974();
LAB_1080f4844:
  func_0x0001080f6b58();
  func_0x0001080f6a54();
  return;
}



/* Entry: 1080f489c; end: 1080f48bf;  */

void FUN_1080f489c(void)

{
  return;
}



/* Entry: 1080f48c0; end: 1080f48eb;  */

void FUN_1080f48c0(long param_1)

{
  func_0x0001080f68f0();
  if (param_1 == 0) {
    return;
  }
  FUN_1080f30ec(param_1);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080f48ec; end: 1080f490f;  */

void FUN_1080f48ec(void)

{
  return;
}



/* Entry: 1080f4910; end: 1080f49db;  */

void FUN_1080f4910(double param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  long lStack_58;
  char cStack_50;
  
  func_0x0001080f6810();
  func_0x0001080f6b50();
  if (param_2 != 0) {
    if (cStack_50 != '\t' || lStack_58 == 0) {
      func_0x0001080f6ccc();
      func_0x0001080f6ad4();
      goto LAB_1080f49bc;
    }
    if (*(long *)(lStack_58 + 0x10) == 0) {
      uVar2 = 0;
      fVar3 = 0.0;
    }
    else {
      func_0x00010b9a92f0(lStack_58 + 0x18);
      fVar3 = (float)param_1;
      if (*(ulong *)(lStack_58 + 0x10) < 2) {
        uVar2 = 0;
      }
      else {
        lVar1 = lStack_58 + 0x28;
        func_0x00010b9a9588(lVar1);
        uVar2 = (uint)lVar1 >> 8 | (uint)lVar1 << 0x18;
      }
    }
    func_0x00010811f9a8(fVar3,param_2);
    func_0x00010811f9c0(param_2,uVar2);
  }
  func_0x0001080f6974();
LAB_1080f49bc:
  func_0x0001080f6b58();
  func_0x0001080f6a54();
  return;
}


