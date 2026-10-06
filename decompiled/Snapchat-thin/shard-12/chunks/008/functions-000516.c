/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1097d3cb0; end: 1097d3cb7;  */

undefined8 FUN_1097d3cb0(void)

{
  return 0;
}



/* Entry: 1097d3cb8; end: 1097d402f;  */

undefined8 FUN_1097d3cb8(undefined8 param_1,undefined4 param_2)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *in_x7;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long lStack_878;
  undefined8 auStack_870 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _pthread_mutex_lock(0x1132e0408);
  if (puRam000000011382ade0 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x40020;
    _malloc();
    if (puVar3 == (undefined8 *)0x0) {
      puRam000000011382ade0 = (undefined8 *)0x0;
      uVar8 = 1;
      goto LAB_1097d3fd8;
    }
    _bzero(puVar3 + 4,0x40000);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    puVar3[2] = puVar3 + 2;
    puVar3[3] = puVar3 + 2;
    iVar6 = 1;
    puRam000000011382ade0 = puVar3;
  }
  else {
    iVar6 = *(int *)(puRam000000011382ade0 + 1) + 1;
  }
  puVar3 = puRam000000011382ade0;
  *(int *)(puRam000000011382ade0 + 1) = iVar6;
  uVar2 = *(uint *)(in_x7 + 2);
  uVar7 = (ulong)uVar2;
  if ((int)uVar2 < 0x81) {
    puVar4 = auStack_870;
    if (0 < (int)uVar2) goto LAB_1097d3db0;
    puVar9 = auStack_870;
LAB_1097d3ef8:
    if (*(int *)((long)in_x7 + 0x14) == 0) {
      func_0x0001097d4b3c(param_2);
      FUN_1097bd144();
    }
    else {
      FUN_1097bd0dc(puVar3,(ulong)((long)puVar9 - (long)puVar4) >> 4,puVar4);
      func_0x0001097d4b3c(param_2);
      FUN_1097bd3f4();
    }
    uVar8 = 0;
LAB_1097d3fa8:
    FUN_1097bcce0(puVar3);
    if (puVar4 == auStack_870) goto LAB_1097d3fd8;
  }
  else {
    puVar4 = (undefined8 *)(uVar7 << 4);
    _malloc();
    if (puVar4 != (undefined8 *)0x0) {
LAB_1097d3db0:
      lVar11 = 0;
      lVar12 = 0;
      lVar13 = in_x7[1];
      auVar20 = NEON_fmov(0x3fc0000000000000,8);
      auVar21 = NEON_fmov(0x4010000000000000,8);
      auVar15 = NEON_fmov(0xc010000000000000,8);
      puVar9 = puVar4;
      do {
        puVar1 = (ulong *)(lVar13 + lVar11);
        dVar14 = (double)puVar1[1] + auVar20._0_8_;
        dVar18 = (double)puVar1[2] + auVar20._8_8_;
        auVar16._0_8_ =
             (long)(int)(long)((double)(long)(dVar14 * auVar21._0_8_) +
                              auVar15._0_8_ * (double)(long)dVar14);
        auVar16._8_8_ =
             (long)(int)(long)((double)(long)(dVar18 * auVar21._8_8_) +
                              auVar15._8_8_ * (double)(long)dVar18);
        auVar17._8_8_ = 0x1a;
        auVar17._0_8_ = 0x18;
        auVar17 = NEON_ushl(auVar16,auVar17,8);
        uVar19 = auVar17._8_8_;
        uVar10 = auVar17._0_8_ | *puVar1;
        puVar5 = puVar3;
        func_0x0001097bce2c(puVar3,*in_x7,uVar10 | uVar19);
        if (puVar5 == (undefined8 *)0x0) {
          _pthread_mutex_unlock(0x1132e0408);
          uVar8 = *in_x7;
          FUN_1097eff1c(uVar8,uVar10 | uVar19,2,0,&lStack_878);
          _pthread_mutex_lock(0x1132e0408);
          if ((int)uVar8 != 0) goto LAB_1097d3fa8;
          lVar13 = *(long *)(lStack_878 + 0x80);
          puVar5 = puVar3;
          FUN_1097bce90(puVar3,*in_x7,uVar10 | uVar19,(int)*(double *)(lVar13 + 0x88),
                        (int)*(double *)(lVar13 + 0x90),*(undefined8 *)(lVar13 + 0x170));
          if (puVar5 == (undefined8 *)0x0) {
            uVar8 = 1;
            goto LAB_1097d3fa8;
          }
          lVar13 = in_x7[1];
          uVar7 = (ulong)*(uint *)(in_x7 + 2);
        }
        *puVar9 = CONCAT44((int)(long)(double)(long)(*(double *)(lVar13 + lVar11 + 0x10) +
                                                    auVar20._8_8_),
                           (int)(long)(double)(long)(*(double *)(lVar13 + lVar11 + 8) +
                                                    auVar20._0_8_));
        puVar9[1] = puVar5;
        puVar9 = puVar9 + 2;
        lVar12 = lVar12 + 1;
        lVar11 = lVar11 + 0x18;
      } while (lVar12 < (int)uVar7);
      goto LAB_1097d3ef8;
    }
    FUN_1097bcce0(puVar3);
    uVar8 = 1;
  }
  _free(puVar4);
LAB_1097d3fd8:
  _pthread_mutex_unlock(0x1132e0408);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar8;
  }
  ___stack_chk_fail();
  if (iRam000000011382ae98 != 2) {
    uVar8 = 0x11382ae98;
    FUN_1097c5788(0x11382ae98,0,1);
    if ((int)uVar8 == 0) {
      func_0x0001097d3220();
      uRam000000011382af18 = 0;
      uRam000000011382af20 = 0;
      pcRam000000011382af28 = FUN_1097f10a8;
      pcRam000000011382af30 = FUN_1097f0ed4;
      uRam000000011382af38 = 0;
      uRam000000011382aea0 = 0x11382af10;
      pcRam000000011382aea8 = FUN_1097f12fc;
      uRam000000011382aeb0 = 0x1097f13ac;
      pcRam000000011382aeb8 = FUN_1097f178c;
      pcRam000000011382aec0 = FUN_1097f145c;
      uRam000000011382aec8 = 0;
      uRam000000011382aed0 = 0;
      pcRam000000011382aed8 = FUN_1097d3510;
      pcRam000000011382aee0 = FUN_1097d33c4;
      pcRam000000011382aef0 = FUN_1097d759c;
      uRam000000011382aef8 = 0x1097d3848;
      pcRam000000011382af00 = FUN_1097d413c;
      pcRam000000011382af08 = FUN_1097d48f4;
      uRam000000011382af10 = uVar8;
      FUN_1097c5788(0x11382ae98,1,2);
    }
    else if (iRam000000011382ae98 != 2) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  return 0x11382aea0;
}



/* Entry: 1097d4030; end: 1097d413b;  */

undefined8 FUN_1097d4030(void)

{
  undefined8 uVar1;
  
  if (iRam000000011382ae98 != 2) {
    uVar1 = 0x11382ae98;
    FUN_1097c5788(0x11382ae98,0,1);
    if ((int)uVar1 == 0) {
      func_0x0001097d3220();
      uRam000000011382af18 = 0;
      uRam000000011382af20 = 0;
      pcRam000000011382af28 = FUN_1097f10a8;
      pcRam000000011382af30 = FUN_1097f0ed4;
      uRam000000011382af38 = 0;
      uRam000000011382aea0 = 0x11382af10;
      pcRam000000011382aea8 = FUN_1097f12fc;
      uRam000000011382aeb0 = 0x1097f13ac;
      pcRam000000011382aeb8 = FUN_1097f178c;
      pcRam000000011382aec0 = FUN_1097f145c;
      uRam000000011382aec8 = 0;
      uRam000000011382aed0 = 0;
      pcRam000000011382aed8 = FUN_1097d3510;
      pcRam000000011382aee0 = FUN_1097d33c4;
      pcRam000000011382aef0 = FUN_1097d759c;
      uRam000000011382aef8 = 0x1097d3848;
      pcRam000000011382af00 = FUN_1097d413c;
      pcRam000000011382af08 = FUN_1097d48f4;
      uRam000000011382af10 = uVar1;
      FUN_1097c5788(0x11382ae98,1,2);
    }
    else if (iRam000000011382ae98 != 2) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  return 0x11382aea0;
}



/* Entry: 1097d413c; end: 1097d48f3;  */

undefined8 FUN_1097d413c(long param_1,long *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined **ppuVar2;
  uint uVar3;
  int *piVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined4 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  int iVar18;
  long *plVar19;
  int iStack_58;
  int iStack_54;
  
  if (param_4 != 0) {
    return 100;
  }
  lVar15 = *param_2;
  uVar3 = *(uint *)(param_2 + 1);
  plVar19 = (long *)(param_1 + 0x38);
  *plVar19 = 0;
  plVar14 = param_2 + 0x10;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long **)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (param_3 == 1) {
    if ((int)param_2[0x3a] == 0) {
      if (*(char *)((long)param_2 + 0x247) != -1) goto LAB_1097d4230;
      *(undefined8 *)(param_1 + 0x10) = 0;
      iVar18 = (int)param_2[0x16];
      if (iVar18 != 0) {
        if ((int)param_2[1] == 1) {
LAB_1097d4690:
          if (iVar18 != 1) goto LAB_1097d4830;
        }
        else {
          if ((int)param_2[1] != 2) goto LAB_1097d4830;
          if ((*(byte *)(lVar15 + 0x30) >> 2 & 1) != 0) goto LAB_1097d4690;
          if ((iVar18 != 1) || ((*(uint *)(lVar15 + 0x14) >> 0xd & 1) != 0)) goto LAB_1097d4830;
        }
        puVar17 = (undefined8 *)param_2[0x20];
        if ((*(int *)*puVar17 == 0) && (*(int *)((long)puVar17 + 0x18c) == *(int *)(lVar15 + 0x18c))
           ) {
          plVar19 = param_2 + 0x19;
          FUN_1097d979c(plVar19,&iStack_54,&iStack_58);
          if ((int)plVar19 != 0) {
            iVar18 = iStack_54 + *(int *)((long)param_2 + 0x3c);
            if (-1 < iVar18) {
              iVar1 = iStack_58 + (int)param_2[8];
              if (((-1 < iVar1) &&
                  (*(int *)((long)param_2 + 0x44) + iVar18 <= *(int *)(puVar17 + 0x33))) &&
                 ((int)param_2[9] + iVar1 <= *(int *)((long)puVar17 + 0x19c))) {
                *(int *)(param_1 + 0x48) = (int)*(undefined8 *)(lVar15 + 0x1a0);
                *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar15 + 400);
                *(int *)(param_1 + 0x58) = (int)puVar17[0x34];
                *(long *)(param_1 + 0x60) =
                     puVar17[0x32] + puVar17[0x34] * (long)iStack_58 + (long)iStack_54 * 4;
                *(code **)(param_1 + 0x10) = FUN_1097d5138;
              }
            }
          }
        }
        goto LAB_1097d4830;
      }
      iVar18 = (int)param_2[1];
      plVar19 = (long *)&UNK_10dffcd70;
      if (iVar18 != 0) {
        plVar19 = param_2 + 0x20;
      }
      func_0x0001097d49b4(iVar18,plVar19,lVar15,param_1 + 0x58);
      if (iVar18 == 0) goto LAB_1097d4830;
      iVar18 = (*(uint *)(lVar15 + 0x188) >> 0x18) << (ulong)(*(uint *)(lVar15 + 0x188) >> 0x16 & 3)
      ;
      if (iVar18 == 8) {
        pcVar11 = FUN_1097d4de4;
LAB_1097d481c:
        *(code **)(param_1 + 0x10) = pcVar11;
      }
      else {
        if (iVar18 == 0x20) {
          pcVar11 = FUN_1097d4fc8;
          goto LAB_1097d481c;
        }
        if (iVar18 == 0x10) {
          pcVar11 = FUN_1097d4ee8;
          goto LAB_1097d481c;
        }
      }
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar15 + 400);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar15 + 0x1a0);
LAB_1097d4830:
      if (*(long *)(param_1 + 0x10) == 0) {
        lVar16 = lVar15;
        FUN_1097d6904(lVar15,plVar14,0,(long)param_2 + 0x4c,param_2 + 0xc,param_1 + 0x50,
                      param_1 + 0x54);
        *(long *)(param_1 + 0x38) = lVar16;
        if (lVar16 == 0) {
          return 1;
        }
        *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(*param_2 + 0x170);
        uVar8 = (undefined1)(int)param_2[1];
        func_0x0001097d4b3c();
        *(undefined1 *)(param_1 + 0x2c) = uVar8;
        if (*(int *)((long)param_2 + 0x5c) == 0) {
          *(code **)(param_1 + 0x10) = FUN_1097d530c;
          *(code **)(param_1 + 0x18) = FUN_1097d54c4;
          *(int *)(param_1 + 0x5c) = (int)param_2[10];
        }
        else {
          *(code **)(param_1 + 0x10) = FUN_1097d5534;
        }
      }
      *(uint *)(param_1 + 0x30) =
           (*(uint *)(lVar15 + 0x188) >> 0x18) << (ulong)(*(uint *)(lVar15 + 0x188) >> 0x16 & 3);
      return 0;
    }
  }
  else if ((int)param_2[0x3a] == 0) {
LAB_1097d4230:
    lVar16 = *param_2;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(uint *)(param_1 + 0x30) = (uint)*(byte *)((long)param_2 + 0x247);
    iVar18 = (int)param_2[0x16];
    if (iVar18 == 0) {
      iVar18 = (int)param_2[1];
      plVar5 = (long *)&UNK_10dffcd70;
      if (iVar18 != 0) {
        plVar5 = param_2 + 0x20;
      }
      func_0x0001097d49b4(iVar18,plVar5,lVar16,param_1 + 0x58);
      if (iVar18 != 0) {
        if (*(uint *)(lVar16 + 0x18c) < 3) {
          ppuVar2 = &PTR_FUN_110b11470;
          if (*(int *)(param_1 + 0x30) != 0xff) {
            ppuVar2 = &PTR_FUN_110b11488;
          }
          *(undefined **)(param_1 + 0x10) = ppuVar2[*(uint *)(lVar16 + 0x18c)];
        }
        *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar16 + 400);
        *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar16 + 0x1a0);
      }
    }
    else if (*(uint *)(lVar16 + 0x18c) < 2) {
      if ((int)param_2[1] == 1) {
LAB_1097d44b8:
        if (iVar18 == 1) {
LAB_1097d44c0:
          puVar17 = (undefined8 *)param_2[0x20];
          if ((*(int *)*puVar17 == 0) &&
             (*(uint *)((long)puVar17 + 0x18c) == *(uint *)(lVar16 + 0x18c))) {
            plVar5 = param_2 + 0x19;
            FUN_1097d979c(plVar5,&iStack_54,&iStack_58);
            if ((int)plVar5 != 0) {
              iVar18 = iStack_54 + *(int *)((long)param_2 + 0x3c);
              if (-1 < iVar18) {
                iVar1 = iStack_58 + (int)param_2[8];
                if (((-1 < iVar1) &&
                    (*(int *)((long)param_2 + 0x44) + iVar18 <= *(int *)(puVar17 + 0x33))) &&
                   ((int)param_2[9] + iVar1 <= *(int *)((long)puVar17 + 0x19c))) {
                  *(int *)(param_1 + 0x48) = (int)*(undefined8 *)(lVar16 + 0x1a0);
                  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar16 + 400);
                  *(int *)(param_1 + 0x58) = (int)puVar17[0x34];
                  *(long *)(param_1 + 0x60) =
                       puVar17[0x32] + puVar17[0x34] * (long)iStack_58 + (long)iStack_54 * 4;
                  *(code **)(param_1 + 0x10) = FUN_1097d5e54;
                }
              }
            }
          }
        }
      }
      else if ((int)param_2[1] == 2) {
        if ((*(byte *)(lVar16 + 0x30) >> 2 & 1) != 0) goto LAB_1097d44b8;
        if ((iVar18 != 1) || ((*(uint *)(lVar16 + 0x14) >> 0xd & 1) != 0)) goto LAB_1097d4570;
        goto LAB_1097d44c0;
      }
    }
LAB_1097d4570:
    if (*(long *)(param_1 + 0x10) != 0) {
      return 0;
    }
    if (*(int *)((long)param_2 + 0x5c) != 0) {
      pcVar11 = FUN_1097d6150;
      if (*(int *)(param_1 + 0x30) != 0xff) {
        pcVar11 = FUN_1097d6364;
      }
      *(code **)(param_1 + 0x10) = pcVar11;
      iVar18 = *(int *)((long)param_2 + 0x44);
      *(undefined4 *)(param_1 + 0x60) = 8;
      uVar12 = 0x100;
      if ((*(uint *)(param_2 + 0x16) & 0xfffffffe) != 2) {
        uVar12 = 8;
      }
      *(undefined4 *)(param_1 + 0x60) = uVar12;
      iVar1 = (int)param_2[1];
      uVar8 = (undefined1)iVar1;
      if ((*(byte *)(lVar16 + 0x30) >> 2 & 1) == 0) {
        if (iVar1 != 0) {
          if (iVar1 == 1) {
            uVar10 = 0x1097d64c8;
            if (*(int *)(param_1 + 0x30) != 0xff) {
              uVar10 = 0x1097d6738;
            }
            *(undefined8 *)(param_1 + 0x10) = uVar10;
            *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x50);
            iVar18 = *(int *)((long)param_2 + 0x54);
            goto LAB_1097d4768;
          }
LAB_1097d4760:
          func_0x0001097d4b3c();
          *(undefined1 *)(param_1 + 0x2c) = uVar8;
          goto LAB_1097d4768;
        }
LAB_1097d4750:
        plVar14 = (long *)0x0;
        uVar8 = 8;
      }
      else {
        if (1 < iVar1 - 1U) {
          if (iVar1 == 0) goto LAB_1097d4750;
          if (iVar1 != 0xc) goto LAB_1097d4760;
        }
        uVar8 = 1;
      }
      *(undefined1 *)(param_1 + 0x2c) = uVar8;
LAB_1097d4768:
      lVar15 = lVar16;
      FUN_1097d6904(lVar16,plVar14,0,(long)param_2 + 0x3c,param_2 + 0xc,param_1 + 0x50,
                    param_1 + 0x54);
      *(long *)(param_1 + 0x38) = lVar15;
      if (lVar15 == 0) {
        return 1;
      }
      uVar3 = iVar18 + 3U & 0xfffffffc;
      uVar7 = param_1 + 0x70;
      uVar6 = uVar7;
      if ((0xfb0 < uVar3) && (uVar6 = (ulong)uVar3, _malloc(), uVar6 == 0)) {
        func_0x0001097bdd8c(lVar15);
        return 1;
      }
      lVar15 = 0x8018000;
      FUN_109797e2c(0x8018000,(ulong)uVar3,(int)param_2[0xb],uVar6,0,1);
      *(long *)(param_1 + 0x40) = lVar15;
      if (lVar15 != 0) {
        if (uVar6 != uVar7) {
          *(code **)(lVar15 + 0x78) = FUN_1097d68fc;
          *(ulong *)(lVar15 + 0x80) = uVar6;
        }
        *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar16 + 0x170);
        return 0;
      }
      func_0x0001097bdd8c(*plVar19);
      if (uVar6 == uVar7) {
        return 1;
      }
      _free(uVar6);
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (uVar3 == 0) {
    uVar8 = 8;
    plVar14 = (long *)&UNK_10dffe710;
  }
  else {
    if ((*(byte *)(lVar15 + 0x30) >> 2 & 1) == 0) {
      if (uVar3 == 1) {
        plVar5 = plVar14;
        FUN_1097e59e8(plVar14,param_2 + 0xc);
        if ((int)plVar5 == 0) {
          return 100;
        }
        uVar8 = 3;
        goto LAB_1097d42b8;
      }
    }
    else if ((uVar3 < 0xd) && (uVar8 = 1, (1 << (ulong)(uVar3 & 0x1f) & 0x1006U) != 0))
    goto LAB_1097d42b8;
    func_0x0001097d4b3c();
    uVar8 = (undefined1)uVar3;
  }
LAB_1097d42b8:
  *(undefined1 *)(param_1 + 0x2c) = uVar8;
  lVar16 = lVar15;
  FUN_1097d6904(lVar15,plVar14,0,(long)param_2 + 0x4c,param_2 + 0xc,param_1 + 0x58,param_1 + 0x5c);
  *(long *)(param_1 + 0x38) = lVar16;
  if (lVar16 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
    if ((int)param_2[0x3a] == 0) {
      *(float *)(param_1 + 0x28) = (float)(double)param_2[0x47];
    }
    else {
      lVar16 = lVar15;
      FUN_1097d6904(lVar15,param_2 + 0x34,1,(long)param_2 + 0x4c,param_2 + 0xe,&iStack_54,&iStack_58
                   );
      if (lVar16 == 0) {
        return 1;
      }
      if (((*(byte *)(lVar15 + 0x15) >> 4 & 1) != 0) ||
         (FUN_1097e59e8(plVar14,param_2 + 0xc), (int)plVar14 == 0)) {
        lVar15 = lVar16;
        func_0x0001097bdccc();
        if ((int)lVar15 != 0) {
          _free(lVar16);
        }
        return 100;
      }
      lVar13 = *plVar19;
      lVar15 = lVar13;
      func_0x0001097bdccc();
      if ((int)lVar15 != 0) {
        _free(lVar13);
      }
      *plVar19 = lVar16;
      *(int *)(param_1 + 0x58) = iStack_54;
      *(int *)(param_1 + 0x5c) = iStack_58;
    }
    uVar10 = *(undefined8 *)((long)param_2 + 0x4c);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)((long)param_2 + 0x54);
    *(undefined8 *)(param_1 + 0x48) = uVar10;
    uVar7 = (long)*(int *)(param_1 + 0x50) + 3U & 0xfffffffffffffffc;
    *(ulong *)(param_1 + 0x60) = uVar7;
    if ((long)((long)*(int *)(param_1 + 0x54) * uVar7) < 0xfb1) {
      piVar4 = (int *)0x8018000;
      FUN_109797e2c();
      pcVar9 = FUN_1097d4db0;
      pcVar11 = (code *)0x1097d4c50;
    }
    else {
      piVar4 = (int *)0x8018000;
      FUN_109797e2c();
      pcVar9 = (code *)0x0;
      pcVar11 = FUN_1097d4b5c;
    }
    *(int **)(param_1 + 0x40) = piVar4;
    *(code **)(param_1 + 0x10) = pcVar11;
    *(code **)(param_1 + 0x18) = pcVar9;
    if (piVar4 != (int *)0x0) {
      if (*piVar4 == 0) {
        uVar10 = *(undefined8 *)(piVar4 + 0x2a);
      }
      else {
        uVar10 = 0;
      }
      *(undefined8 *)(param_1 + 0x68) = uVar10;
      if (*piVar4 == 0) {
        lVar15 = (long)piVar4[0x2e] << 2;
      }
      else {
        lVar15 = 0;
      }
      *(long *)(param_1 + 0x60) = lVar15;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x4c);
      return 0;
    }
  }
  return 1;
}



/* Entry: 1097d48f4; end: 1097d49b3;  */

void FUN_1097d48f4(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      (**(code **)(param_1 + 0x18))(param_1);
    }
    if (*(int *)(param_1 + 0x30) == 0) {
      plVar2 = *(long **)(param_1 + 0x20);
      FUN_1097c3110(*(undefined1 *)(param_1 + 0x2c),*(undefined8 *)(param_1 + 0x38),
                    *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(*plVar2 + 0x170),
                    *(int *)(param_1 + 0x58) + *(int *)((long)plVar2 + 0x4c),
                    *(int *)(param_1 + 0x5c) + (int)plVar2[10],0,0,*(int *)((long)plVar2 + 0x4c),
                    (int)plVar2[10],*(undefined4 *)((long)plVar2 + 0x54),(int)plVar2[0xb]);
    }
  }
  lVar3 = *(long *)(param_1 + 0x38);
  if ((lVar3 != 0) && (lVar1 = lVar3, FUN_1097bdccc(), (int)lVar1 != 0)) {
    _free(lVar3);
  }
  lVar3 = *(long *)(param_1 + 0x40);
  if ((lVar3 != 0) && (lVar1 = lVar3, FUN_1097bdccc(), (int)lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(lVar3);
    return;
  }
  return;
}



/* Entry: 1097d49b4; end: 1097d4b5b;  */

undefined8 FUN_1097d49b4(uint param_1,long param_2,long param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  uint uVar8;
  
  if (((1 < param_1) && ((param_1 != 2 || (*(char *)(param_2 + 0x27) != -1)))) &&
     (((*(byte *)(param_3 + 0x30) >> 2 & 1) == 0 || ((param_1 != 0xc && (param_1 != 2)))))) {
    return 0;
  }
  uVar7 = 0;
  uVar2 = *(uint *)(param_3 + 0x188);
  if ((int)uVar2 < 0x20028888) {
    if ((int)uVar2 < 0x10030565) {
      bVar6 = uVar2 == 0x8018000;
      uVar8 = 0x10020565;
    }
    else {
      bVar6 = uVar2 == 0x10030565;
      uVar8 = 0x20020888;
    }
  }
  else if ((int)uVar2 < 0x20038888) {
    bVar6 = uVar2 == 0x20028888;
    uVar8 = 0x20030888;
  }
  else {
    bVar6 = uVar2 == 0x20038888 || uVar2 == 0x20088888;
    uVar8 = 0x20080888;
  }
  if (bVar6 || uVar2 == uVar8) {
    uVar5 = (uint)(byte)((ushort)*(undefined2 *)(param_2 + 0x20) >> 8);
    uVar3 = (uint)CONCAT11(*(undefined1 *)(param_2 + 0x23),*(undefined1 *)(param_2 + 0x25));
    uVar8 = (uint)(byte)((ushort)*(undefined2 *)(param_2 + 0x26) >> 8) << 0x18;
    uVar4 = uVar2 >> 0x10 & 0x3f;
    uVar1 = uVar3 | uVar8 | uVar5 << 0x10;
    if (uVar4 == 3) {
      uVar1 = uVar8 | uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 | uVar5;
    }
    uVar8 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    if (uVar4 != 8) {
      uVar8 = uVar1;
    }
    if ((uVar2 == 0x10030565) || (uVar2 == 0x10020565)) {
      uVar8 = uVar8 >> 5 & 0x7e0 | uVar8 >> 3 & 0x1f | uVar8 >> 8 & 0xf800;
    }
    else if (uVar2 == 0x8018000) {
      uVar8 = uVar8 >> 0x18;
    }
    *param_4 = uVar8;
    uVar7 = 1;
  }
  return uVar7;
}



/* Entry: 1097d4b5c; end: 1097d4daf;  */

undefined8 FUN_1097d4b5c(long param_1,int param_2,int param_3,int *param_4,uint param_5)

{
  undefined1 *puVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  
  if (param_5 != 0) {
    pbVar3 = (byte *)(param_4 + 1);
    puVar1 = (undefined1 *)
             (((*(long *)(param_1 + 0x68) +
               *(long *)(param_1 + 0x60) * ((long)param_2 - (long)*(int *)(param_1 + 0x4c))) -
              (long)*(int *)(param_1 + 0x48)) + (long)*param_4);
    puVar4 = puVar1;
    do {
      lVar6 = (long)*(int *)(pbVar3 + 4) - (long)*(int *)(pbVar3 + -4);
      puVar5 = puVar4;
      if (*pbVar3 != 0) {
        iVar2 = (int)(*(float *)(param_1 + 0x28) * (float)*pbVar3);
        puVar5 = puVar4 + 1;
        *puVar4 = (char)iVar2;
        lVar6 = lVar6 + -1;
        if ((int)lVar6 != 0) {
          _memset(puVar5,iVar2,lVar6);
        }
      }
      pbVar3 = pbVar3 + 8;
      puVar4 = puVar5 + (int)lVar6;
      param_5 = param_5 - 1;
    } while (1 < param_5);
    param_3 = param_3 + -1;
    if (param_3 != 0) {
      puVar5 = puVar1;
      do {
        puVar5 = puVar5 + *(long *)(param_1 + 0x60);
        _memcpy(puVar5,puVar1,(long)((int)puVar4 - (int)puVar1));
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return 0;
}



/* Entry: 1097d4db0; end: 1097d4de3;  */

undefined8 FUN_1097d4db0(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c);
  if (uVar1 != 0 && *(int *)(param_1 + 0x4c) <= *(int *)(param_1 + 0x54)) {
    _bzero(*(undefined8 *)(param_1 + 0x68),*(long *)(param_1 + 0x60) * (ulong)uVar1);
  }
  return 0;
}



/* Entry: 1097d4de4; end: 1097d4ee7;  */

undefined8 FUN_1097d4de4(long param_1,int param_2,int param_3,int *param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  if (param_5 != 0) {
    if (param_3 == 1) {
      do {
        if ((char)param_4[1] != '\0') {
          iVar4 = *param_4;
          lVar2 = *(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48) * (long)param_2;
          if (param_4[2] - iVar4 == 1) {
            *(char *)(lVar2 + iVar4) = (char)*(undefined4 *)(param_1 + 0x58);
          }
          else {
            _memset(lVar2 + iVar4);
          }
        }
        param_5 = param_5 - 1;
        param_4 = param_4 + 2;
      } while (1 < param_5);
    }
    else {
      do {
        lVar2 = (long)param_2;
        iVar4 = param_3;
        if ((char)param_4[1] != '\0') {
          do {
            iVar1 = *param_4;
            lVar3 = *(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48) * lVar2;
            if (param_4[2] - iVar1 == 1) {
              *(char *)(lVar3 + iVar1) = (char)*(undefined4 *)(param_1 + 0x58);
            }
            else {
              _memset(lVar3 + iVar1);
            }
            iVar4 = iVar4 + -1;
            lVar2 = lVar2 + 1;
          } while (iVar4 != 0);
        }
        param_4 = param_4 + 2;
        param_5 = param_5 - 1;
      } while (1 < param_5);
    }
  }
  return 0;
}



/* Entry: 1097d4ee8; end: 1097d4fc7;  */

undefined8 FUN_1097d4ee8(long param_1,int param_2,int param_3,int *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  
  if (param_5 != 0) {
    if (param_3 == 1) {
      do {
        if ((char)param_4[1] != '\0') {
          iVar1 = *param_4;
          if (0 < param_4[2] - iVar1) {
            uVar4 = (param_4[2] - iVar1) + 1;
            puVar3 = (undefined2 *)
                     (*(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48) * (long)param_2 +
                     (long)iVar1 * 2);
            do {
              *puVar3 = (short)*(undefined4 *)(param_1 + 0x58);
              uVar4 = uVar4 - 1;
              puVar3 = puVar3 + 1;
            } while (1 < uVar4);
          }
        }
        param_4 = param_4 + 2;
        param_5 = param_5 - 1;
      } while (1 < param_5);
    }
    else {
      do {
        if ((char)param_4[1] != '\0') {
          iVar1 = *param_4;
          iVar2 = param_4[2] - iVar1;
          lVar5 = (long)param_2;
          iVar6 = param_3;
          do {
            if (0 < iVar2) {
              puVar3 = (undefined2 *)
                       (*(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48) * lVar5 +
                       (long)iVar1 * 2);
              uVar4 = iVar2 + 1;
              do {
                *puVar3 = (short)*(undefined4 *)(param_1 + 0x58);
                uVar4 = uVar4 - 1;
                puVar3 = puVar3 + 1;
              } while (1 < uVar4);
            }
            lVar5 = lVar5 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        param_4 = param_4 + 2;
        param_5 = param_5 - 1;
      } while (1 < param_5);
    }
  }
  return 0;
}



/* Entry: 1097d4fc8; end: 1097d5137;  */

undefined8 FUN_1097d4fc8(long param_1,undefined8 param_2,ulong param_3,int *param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  
  if (param_5 != 0) {
    if ((int)param_3 == 1) {
      do {
        if ((char)param_4[1] != '\0') {
          iVar2 = *param_4;
          iVar3 = param_4[2] - iVar2;
          if (iVar3 < 0x21) {
            if (0 < iVar3) {
              uVar1 = *(undefined4 *)(param_1 + 0x58);
              uVar6 = (param_4[2] - iVar2) + 1;
              puVar4 = (undefined4 *)
                       (*(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48) * (long)(int)param_2 +
                       (long)iVar2 * 4);
              do {
                *puVar4 = uVar1;
                uVar6 = uVar6 - 1;
                puVar4 = puVar4 + 1;
              } while (1 < uVar6);
            }
          }
          else {
            func_0x0001097c3874(*(undefined8 *)(param_1 + 0x50),*(ulong *)(param_1 + 0x48) >> 2,
                                *(undefined4 *)(param_1 + 0x30),(long)iVar2,param_2,iVar3,1,
                                *(undefined4 *)(param_1 + 0x58));
          }
        }
        param_4 = param_4 + 2;
        param_5 = param_5 - 1;
      } while (1 < param_5);
    }
    else {
      do {
        if ((char)param_4[1] != '\0') {
          iVar2 = param_4[2] - *param_4;
          lVar5 = (long)(int)param_2;
          uVar7 = param_3;
          if (iVar2 < 0x11) {
            do {
              iVar2 = *param_4;
              if (0 < param_4[2] - iVar2) {
                uVar1 = *(undefined4 *)(param_1 + 0x58);
                uVar6 = (param_4[2] - iVar2) + 1;
                puVar4 = (undefined4 *)
                         (*(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48) * lVar5 +
                         (long)iVar2 * 4);
                do {
                  *puVar4 = uVar1;
                  uVar6 = uVar6 - 1;
                  puVar4 = puVar4 + 1;
                } while (1 < uVar6);
              }
              lVar5 = lVar5 + 1;
              uVar6 = (int)uVar7 - 1;
              uVar7 = (ulong)uVar6;
            } while (uVar6 != 0);
          }
          else {
            func_0x0001097c3874(*(undefined8 *)(param_1 + 0x50),*(ulong *)(param_1 + 0x48) >> 2,
                                *(undefined4 *)(param_1 + 0x30),*param_4,param_2,iVar2,param_3,
                                *(undefined4 *)(param_1 + 0x58));
          }
        }
        param_4 = param_4 + 2;
        param_5 = param_5 - 1;
      } while (1 < param_5);
    }
  }
  return 0;
}



/* Entry: 1097d5138; end: 1097d530b;  */

undefined8 FUN_1097d5138(long param_1,int param_2,int param_3,int *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  if (param_5 != 0) {
    iVar8 = *(int *)(param_1 + 0x30);
    iVar1 = iVar8 + 7;
    if (-1 < iVar8) {
      iVar1 = iVar8;
    }
    iVar1 = iVar1 >> 3;
    if (param_3 == 1) {
      lVar5 = *(long *)(param_1 + 0x60);
      iVar8 = *(int *)(param_1 + 0x58);
      lVar6 = *(long *)(param_1 + 0x50);
      iVar7 = *(int *)(param_1 + 0x48);
      do {
        if ((char)param_4[1] != '\0') {
          iVar2 = *param_4;
          puVar4 = (undefined8 *)(lVar5 + (long)iVar8 * (long)param_2 + (long)iVar2 * (long)iVar1);
          puVar3 = (undefined8 *)(lVar6 + (long)iVar7 * (long)param_2 + (long)iVar2 * (long)iVar1);
          iVar2 = (param_4[2] - iVar2) * iVar1;
          if (iVar2 < 4) {
            if (iVar2 == 1) {
              *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
            }
            else if (iVar2 == 2) {
              *(undefined2 *)puVar3 = *(undefined2 *)puVar4;
            }
            else {
LAB_1097d5200:
              _memcpy(puVar3,puVar4,(long)iVar2);
            }
          }
          else if (iVar2 == 4) {
            *(undefined4 *)puVar3 = *(undefined4 *)puVar4;
          }
          else {
            if (iVar2 != 8) goto LAB_1097d5200;
            *puVar3 = *puVar4;
          }
        }
        param_5 = param_5 - 1;
        param_4 = param_4 + 2;
      } while (1 < param_5);
    }
    else {
      do {
        iVar8 = param_3;
        iVar7 = param_2;
        if ((char)param_4[1] != '\0') {
          do {
            iVar2 = *param_4;
            puVar4 = (undefined8 *)
                     (*(long *)(param_1 + 0x60) + (long)*(int *)(param_1 + 0x58) * (long)iVar7 +
                     (long)iVar2 * (long)iVar1);
            puVar3 = (undefined8 *)
                     (*(long *)(param_1 + 0x50) + (long)*(int *)(param_1 + 0x48) * (long)iVar7 +
                     (long)iVar2 * (long)iVar1);
            iVar2 = (param_4[2] - iVar2) * iVar1;
            if (iVar2 < 4) {
              if (iVar2 == 1) {
                *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
              }
              else if (iVar2 == 2) {
                *(undefined2 *)puVar3 = *(undefined2 *)puVar4;
              }
              else {
LAB_1097d52cc:
                _memcpy(puVar3,puVar4,(long)iVar2);
              }
            }
            else if (iVar2 == 4) {
              *(undefined4 *)puVar3 = *(undefined4 *)puVar4;
            }
            else {
              if (iVar2 != 8) goto LAB_1097d52cc;
              *puVar3 = *puVar4;
            }
            iVar8 = iVar8 + -1;
            iVar7 = iVar7 + 1;
          } while (iVar8 != 0);
        }
        param_4 = param_4 + 2;
        param_5 = param_5 - 1;
      } while (1 < param_5);
    }
  }
  return 0;
}



/* Entry: 1097d530c; end: 1097d54c3;  */

undefined8 FUN_1097d530c(long param_1,int param_2,int param_3,int *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  if (param_5 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    iVar2 = *(int *)(param_1 + 0x54);
    iVar6 = *(int *)(*(long *)(param_1 + 0x20) + 0x4c);
    iVar7 = *(int *)(*(long *)(param_1 + 0x20) + 0x54);
    iVar1 = *(int *)(param_1 + 0x50) + *param_4;
  }
  else {
    iVar1 = param_2 - *(int *)(param_1 + 0x5c);
    if (iVar1 != 0) {
      FUN_1097c3110(0,*(undefined8 *)(param_1 + 0x38),0,*(undefined8 *)(param_1 + 0x48),
                    *(int *)(param_1 + 0x50) + *param_4,*(int *)(param_1 + 0x54) + param_2,0,0,
                    *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x4c),*(int *)(param_1 + 0x5c),
                    *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x54),iVar1);
    }
    iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x4c);
    iVar2 = *param_4 - iVar1;
    if (iVar2 != 0) {
      FUN_1097c3110(0,*(undefined8 *)(param_1 + 0x38),0,*(undefined8 *)(param_1 + 0x48),
                    *(int *)(param_1 + 0x50) + *param_4,*(int *)(param_1 + 0x54) + param_2,0,0,iVar1
                    ,param_2,iVar2,param_3);
    }
    do {
      if ((char)param_4[1] == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined1 *)(param_1 + 0x2c);
      }
      iVar1 = *param_4;
      param_4 = param_4 + 2;
      FUN_1097c3110(uVar3,*(undefined8 *)(param_1 + 0x38),0,*(undefined8 *)(param_1 + 0x48),
                    *(int *)(param_1 + 0x50) + iVar1,*(int *)(param_1 + 0x54) + param_2,0,0,iVar1,
                    param_2,*param_4 - iVar1,param_3);
      param_5 = param_5 - 1;
    } while (1 < param_5);
    iVar6 = *param_4;
    iVar7 = (*(int *)(*(long *)(param_1 + 0x20) + 0x54) + *(int *)(*(long *)(param_1 + 0x20) + 0x4c)
            ) - iVar6;
    if (iVar7 == 0) goto LAB_1097d54a0;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    iVar2 = *(int *)(param_1 + 0x54);
    iVar1 = *(int *)(param_1 + 0x50) + iVar6;
  }
  FUN_1097c3110(0,uVar4,0,uVar5,iVar1,iVar2 + param_2,0,0,iVar6,param_2,iVar7,param_3);
LAB_1097d54a0:
  *(int *)(param_1 + 0x5c) = param_3 + param_2;
  return 0;
}



/* Entry: 1097d54c4; end: 1097d5533;  */

undefined8 FUN_1097d54c4(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar2 = *(int *)(param_1 + 0x5c);
  lVar4 = *(long *)(param_1 + 0x20);
  iVar1 = *(int *)(lVar4 + 0x58) + *(int *)(lVar4 + 0x50);
  iVar3 = iVar1 - iVar2;
  if (iVar3 != 0 && iVar2 <= iVar1) {
    FUN_1097c3110(0,*(undefined8 *)(param_1 + 0x38),0,*(undefined8 *)(param_1 + 0x48),
                  *(int *)(param_1 + 0x50) + *(int *)(lVar4 + 0x4c),*(int *)(param_1 + 0x54) + iVar2
                  ,0,0,*(int *)(lVar4 + 0x4c),iVar2,*(undefined4 *)(lVar4 + 0x54),iVar3);
  }
  return 0;
}



/* Entry: 1097d5534; end: 1097d55d3;  */

undefined8 FUN_1097d5534(long param_1,int param_2,undefined4 param_3,int *param_4,uint param_5)

{
  int iVar1;
  
  if (param_5 != 0) {
    do {
      if ((char)param_4[1] != '\0') {
        iVar1 = *param_4;
        FUN_1097c3110(*(undefined1 *)(param_1 + 0x2c),*(undefined8 *)(param_1 + 0x38),0,
                      *(undefined8 *)(param_1 + 0x48),*(int *)(param_1 + 0x50) + iVar1,
                      *(int *)(param_1 + 0x54) + param_2,0,0,iVar1,param_2,param_4[2] - iVar1,
                      param_3);
      }
      param_5 = param_5 - 1;
      param_4 = param_4 + 2;
    } while (1 < param_5);
  }
  return 0;
}



/* Entry: 1097d55d4; end: 1097d578b;  */

undefined8 FUN_1097d55d4(long param_1,int param_2,int param_3,int *param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  
  if (param_5 != 0) {
    if (param_3 == 1) {
      lVar7 = *(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48) * (long)param_2;
      do {
        bVar1 = *(byte *)(param_4 + 1);
        if (bVar1 != 0) {
          iVar8 = *param_4;
          if (bVar1 == 0xff) {
            _memset(lVar7 + iVar8,*(undefined4 *)(param_1 + 0x58));
          }
          else if (0 < param_4[2] - iVar8) {
            uVar6 = (uint)*(byte *)(param_1 + 0x58) * (uint)bVar1 + 0x7f;
            uVar5 = (param_4[2] - iVar8) + 1;
            pbVar4 = (byte *)(lVar7 + iVar8);
            do {
              uVar3 = (uint)*pbVar4 * (bVar1 ^ 0xff) + 0x7f;
              *pbVar4 = (char)(uVar3 + (uVar3 >> 8) >> 8) + (char)(uVar6 + (uVar6 >> 8) >> 8);
              uVar5 = uVar5 - 1;
              pbVar4 = pbVar4 + 1;
            } while (1 < uVar5);
          }
        }
        param_4 = param_4 + 2;
        param_5 = param_5 - 1;
      } while (1 < param_5);
    }
    else {
      do {
        bVar1 = *(byte *)(param_4 + 1);
        if (bVar1 != 0) {
          lVar7 = (long)param_2;
          iVar8 = param_3;
          if (bVar1 == 0xff) {
            do {
              _memset(*(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48) * lVar7 + (long)*param_4
                      ,*(undefined4 *)(param_1 + 0x58),(long)param_4[2] - (long)*param_4);
              iVar8 = iVar8 + -1;
              lVar7 = lVar7 + 1;
            } while (iVar8 != 0);
          }
          else {
            uVar5 = (uint)*(byte *)(param_1 + 0x58) * (uint)bVar1 + 0x7f;
            do {
              iVar2 = *param_4;
              if (0 < param_4[2] - iVar2) {
                uVar6 = (param_4[2] - iVar2) + 1;
                pbVar4 = (byte *)(*(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48) * lVar7 +
                                 (long)iVar2);
                do {
                  uVar3 = (uint)*pbVar4 * (bVar1 ^ 0xff) + 0x7f;
                  *pbVar4 = (char)(uVar3 + (uVar3 >> 8) >> 8) + (char)(uVar5 + (uVar5 >> 8) >> 8);
                  uVar6 = uVar6 - 1;
                  pbVar4 = pbVar4 + 1;
                } while (1 < uVar6);
              }
              lVar7 = lVar7 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
        }
        param_4 = param_4 + 2;
        param_5 = param_5 - 1;
      } while (1 < param_5);
    }
  }
  return 0;
}



/* Entry: 1097d578c; end: 1097d5acb;  */

undefined8 FUN_1097d578c(long param_1,undefined8 param_2,ulong param_3,int *param_4,uint param_5)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  int iVar14;
  
  if (param_5 != 0) {
    iVar14 = (int)param_2;
    if ((int)param_3 == 1) {
      do {
        bVar2 = *(byte *)(param_4 + 1);
        if (bVar2 != 0) {
          iVar3 = *param_4;
          iVar7 = param_4[2] - iVar3;
          puVar9 = (uint *)(*(long *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x48) * (long)iVar14 +
                           (long)iVar3 * 4);
          if (bVar2 == 0xff) {
            if (iVar7 < 0x20) {
              if (0 < iVar7) {
                uVar11 = *(uint *)(param_1 + 0x58);
                uVar8 = iVar7 + 1;
                do {
                  *puVar9 = uVar11;
                  uVar8 = uVar8 - 1;
                  puVar9 = puVar9 + 1;
                } while (1 < uVar8);
              }
            }
            else {
              func_0x0001097c3874(*(long *)(param_1 + 0x50),*(ulong *)(param_1 + 0x48) >> 2,0x20,
                                  (long)iVar3,param_2,iVar7,1,*(undefined4 *)(param_1 + 0x58));
            }
          }
          else if (0 < iVar7) {
            uVar11 = (uint)bVar2;
            uVar8 = iVar7 + 1;
            do {
              uVar4 = (*(uint *)(param_1 + 0x58) & 0xff00ff) * uVar11 + 0x7f007f;
              uVar5 = (*puVar9 & 0xff00ff) * (uVar11 ^ 0xff) + 0x7f007f;
              uVar4 = ((uVar5 >> 8 & 0xff00ff) + uVar5 >> 8 & 0xff00ff) +
                      ((uVar4 >> 8 & 0xff00ff) + uVar4 >> 8 & 0xff00ff);
              uVar5 = (*(uint *)(param_1 + 0x58) >> 8 & 0xff00ff) * uVar11 + 0x7f007f;
              uVar6 = (*puVar9 >> 8 & 0xff00ff) * (uVar11 ^ 0xff) + 0x7f007f;
              uVar5 = ((uVar6 >> 8 & 0xff00ff) + uVar6 >> 8 & 0xff00ff) +
                      ((uVar5 >> 8 & 0xff00ff) + uVar5 >> 8 & 0xff00ff);
              *puVar9 = ((0x100 - (uVar5 >> 8 & 0x10001) | uVar5) & 0xff00ff) << 8 |
                        (0x100 - (uVar4 >> 8 & 0x10001) | uVar4) & 0xff00ff;
              uVar8 = uVar8 - 1;
              puVar9 = puVar9 + 1;
            } while (1 < uVar8);
          }
        }
        param_4 = param_4 + 2;
        param_5 = param_5 - 1;
      } while (1 < param_5);
    }
    else {
      do {
        bVar2 = *(byte *)(param_4 + 1);
        if (bVar2 != 0) {
          if (bVar2 == 0xff) {
            iVar3 = param_4[2] - *param_4;
            lVar10 = (long)iVar14;
            uVar12 = param_3;
            if (iVar3 < 0x11) {
              do {
                iVar3 = *param_4;
                if (0 < param_4[2] - iVar3) {
                  uVar1 = *(undefined4 *)(param_1 + 0x58);
                  uVar8 = (param_4[2] - iVar3) + 1;
                  puVar13 = (undefined4 *)
                            (*(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48) * lVar10 +
                            (long)iVar3 * 4);
                  do {
                    *puVar13 = uVar1;
                    uVar8 = uVar8 - 1;
                    puVar13 = puVar13 + 1;
                  } while (1 < uVar8);
                }
                lVar10 = lVar10 + 1;
                uVar8 = (int)uVar12 - 1;
                uVar12 = (ulong)uVar8;
              } while (uVar8 != 0);
            }
            else {
              func_0x0001097c3874(*(undefined8 *)(param_1 + 0x50),*(ulong *)(param_1 + 0x48) >> 2,
                                  0x20,*param_4,param_2,iVar3,param_3,
                                  *(undefined4 *)(param_1 + 0x58));
            }
          }
          else {
            uVar8 = (uint)bVar2;
            lVar10 = (long)iVar14;
            uVar12 = param_3;
            do {
              iVar3 = *param_4;
              if (0 < param_4[2] - iVar3) {
                uVar11 = (param_4[2] - iVar3) + 1;
                puVar9 = (uint *)(*(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48) * lVar10 +
                                 (long)iVar3 * 4);
                do {
                  uVar4 = (*(uint *)(param_1 + 0x58) & 0xff00ff) * uVar8 + 0x7f007f;
                  uVar5 = (*puVar9 & 0xff00ff) * (uVar8 ^ 0xff) + 0x7f007f;
                  uVar4 = ((uVar5 >> 8 & 0xff00ff) + uVar5 >> 8 & 0xff00ff) +
                          ((uVar4 >> 8 & 0xff00ff) + uVar4 >> 8 & 0xff00ff);
                  uVar5 = (*(uint *)(param_1 + 0x58) >> 8 & 0xff00ff) * uVar8 + 0x7f007f;
                  uVar6 = (*puVar9 >> 8 & 0xff00ff) * (uVar8 ^ 0xff) + 0x7f007f;
                  uVar5 = ((uVar6 >> 8 & 0xff00ff) + uVar6 >> 8 & 0xff00ff) +
                          ((uVar5 >> 8 & 0xff00ff) + uVar5 >> 8 & 0xff00ff);
                  *puVar9 = ((0x100 - (uVar5 >> 8 & 0x10001) | uVar5) & 0xff00ff) << 8 |
                            (0x100 - (uVar4 >> 8 & 0x10001) | uVar4) & 0xff00ff;
                  uVar11 = uVar11 - 1;
                  puVar9 = puVar9 + 1;
                } while (1 < uVar11);
              }
              lVar10 = lVar10 + 1;
              uVar11 = (int)uVar12 - 1;
              uVar12 = (ulong)uVar11;
            } while (uVar11 != 0);
          }
        }
        param_4 = param_4 + 2;
        param_5 = param_5 - 1;
      } while (1 < param_5);
    }
  }
  return 0;
}



/* Entry: 1097d5acc; end: 1097d5c17;  */

undefined8 FUN_1097d5acc(long param_1,int param_2,int param_3,int *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  
  if (param_5 != 0) {
    if (param_3 == 1) {
      do {
        uVar3 = (uint)*(byte *)(param_1 + 0x30) * (uint)*(byte *)(param_4 + 1) + 0x7f;
        uVar3 = uVar3 + (uVar3 >> 8);
        if (0xff < uVar3) {
          iVar1 = *param_4;
          if (0 < param_4[2] - iVar1) {
            iVar8 = *(int *)(param_1 + 0x58);
            uVar7 = (param_4[2] - iVar1) + 1;
            pbVar5 = (byte *)(*(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48) * (long)param_2
                             + (long)iVar1);
            do {
              uVar4 = iVar8 * (uVar3 >> 8) + 0x7f + (uint)*pbVar5 * (uVar3 >> 8 ^ 0xffffffff);
              *pbVar5 = (byte)(uVar4 + (uVar4 >> 8 & 0xff) >> 8);
              uVar7 = uVar7 - 1;
              pbVar5 = pbVar5 + 1;
            } while (1 < uVar7);
          }
        }
        param_4 = param_4 + 2;
        param_5 = param_5 - 1;
      } while (1 < param_5);
    }
    else {
      do {
        uVar3 = (uint)*(byte *)(param_1 + 0x30) * (uint)*(byte *)(param_4 + 1) + 0x7f;
        uVar3 = uVar3 + (uVar3 >> 8);
        if (0xff < uVar3) {
          iVar1 = *(int *)(param_1 + 0x58);
          lVar6 = (long)param_2;
          iVar8 = param_3;
          do {
            iVar2 = *param_4;
            if (0 < param_4[2] - iVar2) {
              uVar7 = (param_4[2] - iVar2) + 1;
              pbVar5 = (byte *)(*(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48) * lVar6 +
                               (long)iVar2);
              do {
                uVar4 = iVar1 * (uVar3 >> 8) + 0x7f + (uint)*pbVar5 * (uVar3 >> 8 ^ 0xffffffff);
                *pbVar5 = (byte)(uVar4 + (uVar4 >> 8 & 0xff) >> 8);
                uVar7 = uVar7 - 1;
                pbVar5 = pbVar5 + 1;
              } while (1 < uVar7);
            }
            lVar6 = lVar6 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        param_4 = param_4 + 2;
        param_5 = param_5 - 1;
      } while (1 < param_5);
    }
  }
  return 0;
}



/* Entry: 1097d5c18; end: 1097d5e53;  */

undefined8 FUN_1097d5c18(long param_1,int param_2,int param_3,int *param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  long lVar9;
  
  if (param_5 != 0) {
    if (param_3 == 1) {
      do {
        uVar2 = (uint)*(byte *)(param_1 + 0x30) * (uint)*(byte *)(param_4 + 1) + 0x7f;
        uVar2 = uVar2 + (uVar2 >> 8);
        if (0xff < uVar2) {
          iVar7 = *param_4;
          if (0 < param_4[2] - iVar7) {
            uVar2 = uVar2 >> 8;
            uVar6 = (param_4[2] - iVar7) + 1;
            puVar8 = (uint *)(*(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48) * (long)param_2
                             + (long)iVar7 * 4);
            do {
              uVar3 = (*(uint *)(param_1 + 0x58) & 0xff00ff) * uVar2 + 0x7f007f;
              uVar4 = (*puVar8 & 0xff00ff) * (uVar2 ^ 0xff) + 0x7f007f;
              uVar3 = ((uVar4 >> 8 & 0xff00ff) + uVar4 >> 8 & 0xff00ff) +
                      ((uVar3 >> 8 & 0xff00ff) + uVar3 >> 8 & 0xff00ff);
              uVar4 = (*(uint *)(param_1 + 0x58) >> 8 & 0xff00ff) * uVar2 + 0x7f007f;
              uVar5 = (*puVar8 >> 8 & 0xff00ff) * (uVar2 ^ 0xff) + 0x7f007f;
              uVar4 = ((uVar5 >> 8 & 0xff00ff) + uVar5 >> 8 & 0xff00ff) +
                      ((uVar4 >> 8 & 0xff00ff) + uVar4 >> 8 & 0xff00ff);
              *puVar8 = ((0x100 - (uVar4 >> 8 & 0x10001) | uVar4) & 0xff00ff) << 8 |
                        (0x100 - (uVar3 >> 8 & 0x10001) | uVar3) & 0xff00ff;
              uVar6 = uVar6 - 1;
              puVar8 = puVar8 + 1;
            } while (1 < uVar6);
          }
        }
        param_4 = param_4 + 2;
        param_5 = param_5 - 1;
      } while (1 < param_5);
    }
    else {
      do {
        uVar2 = (uint)*(byte *)(param_1 + 0x30) * (uint)*(byte *)(param_4 + 1) + 0x7f;
        uVar2 = uVar2 + (uVar2 >> 8);
        if (0xff < uVar2) {
          uVar2 = uVar2 >> 8;
          lVar9 = (long)param_2;
          iVar7 = param_3;
          do {
            iVar1 = *param_4;
            if (0 < param_4[2] - iVar1) {
              uVar6 = (param_4[2] - iVar1) + 1;
              puVar8 = (uint *)(*(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48) * lVar9 +
                               (long)iVar1 * 4);
              do {
                uVar3 = (*(uint *)(param_1 + 0x58) & 0xff00ff) * uVar2 + 0x7f007f;
                uVar4 = (*puVar8 & 0xff00ff) * (uVar2 ^ 0xff) + 0x7f007f;
                uVar3 = ((uVar4 >> 8 & 0xff00ff) + uVar4 >> 8 & 0xff00ff) +
                        ((uVar3 >> 8 & 0xff00ff) + uVar3 >> 8 & 0xff00ff);
                uVar4 = (*(uint *)(param_1 + 0x58) >> 8 & 0xff00ff) * uVar2 + 0x7f007f;
                uVar5 = (*puVar8 >> 8 & 0xff00ff) * (uVar2 ^ 0xff) + 0x7f007f;
                uVar4 = ((uVar5 >> 8 & 0xff00ff) + uVar5 >> 8 & 0xff00ff) +
                        ((uVar4 >> 8 & 0xff00ff) + uVar4 >> 8 & 0xff00ff);
                *puVar8 = ((0x100 - (uVar4 >> 8 & 0x10001) | uVar4) & 0xff00ff) << 8 |
                          (0x100 - (uVar3 >> 8 & 0x10001) | uVar3) & 0xff00ff;
                uVar6 = uVar6 - 1;
                puVar8 = puVar8 + 1;
              } while (1 < uVar6);
            }
            lVar9 = lVar9 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        param_4 = param_4 + 2;
        param_5 = param_5 - 1;
      } while (1 < param_5);
    }
  }
  return 0;
}



/* Entry: 1097d5e54; end: 1097d614f;  */

undefined8 FUN_1097d5e54(long param_1,int param_2,int param_3,int *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  
  if (param_5 != 0) {
    if (param_3 == 1) {
      lVar9 = *(long *)(param_1 + 0x60);
      iVar12 = *(int *)(param_1 + 0x58);
      lVar10 = *(long *)(param_1 + 0x50);
      iVar1 = *(int *)(param_1 + 0x48);
      do {
        uVar3 = (uint)*(byte *)(param_1 + 0x30) * (uint)*(byte *)(param_4 + 1) + 0x7f;
        uVar3 = uVar3 + (uVar3 >> 8);
        if (0xff < uVar3) {
          uVar3 = uVar3 >> 8;
          iVar2 = *param_4;
          puVar8 = (uint *)(lVar9 + (long)iVar12 * (long)param_2 + (long)iVar2 * 4);
          puVar7 = (uint *)(lVar10 + (long)iVar1 * (long)param_2 + (long)iVar2 * 4);
          iVar2 = param_4[2] - iVar2;
          if (uVar3 == 0xff) {
            if (iVar2 == 1) {
              *puVar7 = *puVar8;
            }
            else {
              _memcpy(puVar7,puVar8,(long)(iVar2 * 4));
            }
          }
          else if (0 < iVar2) {
            uVar11 = iVar2 + 1;
            do {
              uVar4 = (*puVar8 & 0xff00ff) * uVar3 + 0x7f007f;
              uVar5 = (*puVar7 & 0xff00ff) * (uVar3 ^ 0xff) + 0x7f007f;
              uVar4 = ((uVar5 >> 8 & 0xff00ff) + uVar5 >> 8 & 0xff00ff) +
                      ((uVar4 >> 8 & 0xff00ff) + uVar4 >> 8 & 0xff00ff);
              uVar5 = (*puVar8 >> 8 & 0xff00ff) * uVar3 + 0x7f007f;
              uVar6 = (*puVar7 >> 8 & 0xff00ff) * (uVar3 ^ 0xff) + 0x7f007f;
              uVar5 = ((uVar6 >> 8 & 0xff00ff) + uVar6 >> 8 & 0xff00ff) +
                      ((uVar5 >> 8 & 0xff00ff) + uVar5 >> 8 & 0xff00ff);
              *puVar7 = ((0x100 - (uVar5 >> 8 & 0x10001) | uVar5) & 0xff00ff) << 8 |
                        (0x100 - (uVar4 >> 8 & 0x10001) | uVar4) & 0xff00ff;
              uVar11 = uVar11 - 1;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            } while (1 < uVar11);
          }
        }
        param_4 = param_4 + 2;
        param_5 = param_5 - 1;
      } while (1 < param_5);
    }
    else {
      do {
        uVar3 = (uint)*(byte *)(param_1 + 0x30) * (uint)*(byte *)(param_4 + 1) + 0x7f;
        uVar3 = uVar3 + (uVar3 >> 8);
        if (0xff < uVar3) {
          uVar3 = uVar3 >> 8;
          iVar12 = param_2;
          iVar1 = param_3;
          do {
            iVar2 = *param_4;
            puVar8 = (uint *)(*(long *)(param_1 + 0x60) +
                              (long)*(int *)(param_1 + 0x58) * (long)iVar12 + (long)iVar2 * 4);
            puVar7 = (uint *)(*(long *)(param_1 + 0x50) +
                              (long)*(int *)(param_1 + 0x48) * (long)iVar12 + (long)iVar2 * 4);
            iVar2 = param_4[2] - iVar2;
            if (uVar3 == 0xff) {
              if (iVar2 == 1) {
                *puVar7 = *puVar8;
              }
              else {
                _memcpy(puVar7,puVar8,(long)(iVar2 * 4));
              }
            }
            else if (0 < iVar2) {
              uVar11 = iVar2 + 1;
              do {
                uVar4 = (*puVar8 & 0xff00ff) * uVar3 + 0x7f007f;
                uVar5 = (*puVar7 & 0xff00ff) * (uVar3 ^ 0xff) + 0x7f007f;
                uVar4 = ((uVar5 >> 8 & 0xff00ff) + uVar5 >> 8 & 0xff00ff) +
                        ((uVar4 >> 8 & 0xff00ff) + uVar4 >> 8 & 0xff00ff);
                uVar5 = (*puVar8 >> 8 & 0xff00ff) * uVar3 + 0x7f007f;
                uVar6 = (*puVar7 >> 8 & 0xff00ff) * (uVar3 ^ 0xff) + 0x7f007f;
                uVar5 = ((uVar6 >> 8 & 0xff00ff) + uVar6 >> 8 & 0xff00ff) +
                        ((uVar5 >> 8 & 0xff00ff) + uVar5 >> 8 & 0xff00ff);
                *puVar7 = ((0x100 - (uVar5 >> 8 & 0x10001) | uVar5) & 0xff00ff) << 8 |
                          (0x100 - (uVar4 >> 8 & 0x10001) | uVar4) & 0xff00ff;
                uVar11 = uVar11 - 1;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              } while (1 < uVar11);
            }
            iVar12 = iVar12 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        param_4 = param_4 + 2;
        param_5 = param_5 - 1;
      } while (1 < param_5);
    }
  }
  return 0;
}



/* Entry: 1097d6150; end: 1097d6363;  */

undefined8 FUN_1097d6150(long param_1,int param_2,undefined4 param_3,int *param_4,uint param_5)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  
  if (param_5 != 0) {
    if ((param_5 == 2) && ((char)param_4[1] == -1)) {
      uVar2 = *(undefined1 *)(param_1 + 0x2c);
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      iVar12 = *param_4;
      iVar1 = *(int *)(param_1 + 0x54);
      iVar13 = param_4[2] - iVar12;
      iVar4 = *(int *)(param_1 + 0x50) + iVar12;
      uVar6 = 0;
    }
    else {
      if (**(int **)(param_1 + 0x40) == 0) {
        pcVar10 = *(char **)(*(int **)(param_1 + 0x40) + 0x2a);
      }
      else {
        pcVar10 = (char *)0x0;
      }
      iVar12 = *param_4;
      iVar13 = iVar12;
      do {
        piVar9 = param_4 + 2;
        iVar4 = *piVar9 - iVar13;
        cVar3 = (char)param_4[1];
        pcVar11 = pcVar10 + 1;
        *pcVar10 = cVar3;
        if (1 < iVar4) {
          if ((iVar4 < *(int *)(param_1 + 0x60)) || (cVar3 != -1)) {
            if ((cVar3 != '\0') || (iVar13 - iVar12 <= *(int *)(param_1 + 0x60))) {
              _memset(pcVar11,cVar3,(ulong)(iVar4 - 1));
              pcVar11 = pcVar11 + (iVar4 - 1);
              goto LAB_1097d62cc;
            }
            FUN_1097c3110(*(undefined1 *)(param_1 + 0x2c),*(undefined8 *)(param_1 + 0x38),
                          *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                          *(int *)(param_1 + 0x50) + iVar12,*(int *)(param_1 + 0x54) + param_2,0,0,
                          iVar12,param_2,iVar13 - iVar12,param_3);
            piVar8 = *(int **)(param_1 + 0x40);
            if (*piVar8 == 0) goto LAB_1097d625c;
            pcVar11 = (char *)0x0;
          }
          else {
            if (iVar13 - iVar12 != 0) {
              FUN_1097c3110(*(undefined1 *)(param_1 + 0x2c),*(undefined8 *)(param_1 + 0x38),
                            *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                            *(int *)(param_1 + 0x50) + iVar12,*(int *)(param_1 + 0x54) + param_2,0,0
                            ,iVar12,param_2,iVar13 - iVar12,param_3);
            }
            FUN_1097c3110(*(undefined1 *)(param_1 + 0x2c),*(undefined8 *)(param_1 + 0x38),0,
                          *(undefined8 *)(param_1 + 0x48),*(int *)(param_1 + 0x50) + *param_4,
                          *(int *)(param_1 + 0x54) + param_2,0,0,*param_4,param_2,iVar4,param_3);
            pcVar11 = (char *)0x0;
            piVar8 = *(int **)(param_1 + 0x40);
            if (*piVar8 == 0) {
LAB_1097d625c:
              pcVar11 = *(char **)(piVar8 + 0x2a);
            }
          }
          iVar12 = *piVar9;
        }
LAB_1097d62cc:
        iVar13 = *piVar9;
        param_5 = param_5 - 1;
        pcVar10 = pcVar11;
        param_4 = piVar9;
      } while (1 < param_5);
      iVar13 = iVar13 - iVar12;
      if (iVar13 == 0) {
        return 0;
      }
      uVar2 = *(undefined1 *)(param_1 + 0x2c);
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      iVar1 = *(int *)(param_1 + 0x54);
      iVar4 = *(int *)(param_1 + 0x50) + iVar12;
    }
    FUN_1097c3110(uVar2,uVar5,uVar6,uVar7,iVar4,iVar1 + param_2,0,0,iVar12,param_2,iVar13,param_3);
  }
  return 0;
}



/* Entry: 1097d6364; end: 1097d68fb;  */

undefined8 FUN_1097d6364(long param_1,int param_2,undefined4 param_3,int *param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  int iVar8;
  
  if (param_5 != 0) {
    if (**(int **)(param_1 + 0x40) == 0) {
      puVar5 = *(undefined1 **)(*(int **)(param_1 + 0x40) + 0x2a);
    }
    else {
      puVar5 = (undefined1 *)0x0;
    }
    iVar8 = *param_4;
    iVar3 = iVar8;
    do {
      piVar4 = param_4 + 2;
      iVar1 = *piVar4;
      uVar2 = (uint)*(byte *)(param_1 + 0x30) * (uint)*(byte *)(param_4 + 1) + 0x7f;
      uVar2 = uVar2 + (uVar2 >> 8);
      puVar6 = puVar5 + 1;
      *puVar5 = (char)(uVar2 >> 8);
      if (1 < iVar1 - iVar3) {
        if ((uVar2 < 0x100) && (*(int *)(param_1 + 0x60) < iVar3 - iVar8)) {
          FUN_1097c3110(*(undefined1 *)(param_1 + 0x2c),*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                        *(int *)(param_1 + 0x50) + iVar8,*(int *)(param_1 + 0x54) + param_2,0,0,
                        iVar8,param_2,iVar3 - iVar8,param_3);
          if (**(int **)(param_1 + 0x40) == 0) {
            puVar6 = *(undefined1 **)(*(int **)(param_1 + 0x40) + 0x2a);
          }
          else {
            puVar6 = (undefined1 *)0x0;
          }
          iVar8 = *piVar4;
        }
        else {
          uVar7 = (ulong)((iVar1 - iVar3) - 1);
          _memset(puVar6,uVar2 >> 8,uVar7);
          puVar6 = puVar6 + uVar7;
        }
      }
      iVar3 = *piVar4;
      param_5 = param_5 - 1;
      puVar5 = puVar6;
      param_4 = piVar4;
    } while (1 < param_5);
    if (iVar3 - iVar8 != 0) {
      FUN_1097c3110(*(undefined1 *)(param_1 + 0x2c),*(undefined8 *)(param_1 + 0x38),
                    *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                    *(int *)(param_1 + 0x50) + iVar8,*(int *)(param_1 + 0x54) + param_2,0,0,iVar8,
                    param_2,iVar3 - iVar8,param_3);
    }
  }
  return 0;
}



/* Entry: 1097d68fc; end: 1097d6903;  */

void FUN_1097d68fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1097d6904; end: 1097d7567;  */

double * FUN_1097d6904(double *param_1,double *param_2,int param_3,int *param_4,int *param_5,
                      int *param_6,int *param_7)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined *puVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  double *pdVar12;
  code *pcVar13;
  bool bVar14;
  uint uVar15;
  double dVar16;
  ulong uVar17;
  double *pdVar18;
  double *pdVar19;
  double dVar20;
  double *pdVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dStack_260;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  int iStack_210;
  double dStack_1f8;
  double **ppdStack_1f0;
  double *pdStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1bc;
  double dStack_d8;
  double dStack_d0;
  double adStack_c8 [3];
  double *pdStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_7 = 0;
  *param_6 = 0;
  if (param_2 == (double *)0x0) {
    dStack_1f8 = -NAN;
LAB_1097d6be8:
    pdVar12 = &dStack_1f8;
    FUN_1097c246c();
    param_1 = pdVar12;
    goto LAB_1097d73b8;
  }
  iVar10 = *(int *)(param_2 + 6);
  if (iVar10 < 4) {
    if (iVar10 - 2U < 2) {
      uVar15 = *(uint *)(param_2 + 0x10);
      uVar17 = (ulong)uVar15;
      if (uVar15 < 3) {
        param_1 = adStack_c8;
        if (uVar15 != 0) goto LAB_1097d6af4;
      }
      else {
        param_1 = (double *)(uVar17 * 0xc);
        _malloc();
        if (param_1 == (double *)0x0) goto LAB_1097d73b4;
LAB_1097d6af4:
        pdVar12 = (double *)param_2[0x11];
        pdVar18 = (double *)((long)param_1 + 4);
        do {
          *(int *)((long)pdVar18 + -4) = SUB84(*pdVar12 + 103079215104.0,0);
          *pdVar18 = pdVar12[5];
          pdVar12 = pdVar12 + 6;
          uVar17 = uVar17 - 1;
          pdVar18 = (double *)((long)pdVar18 + 0xc);
        } while (uVar17 != 0);
      }
      FUN_1097e5320(0x40cfff8000000000,param_2,&dStack_1f8,&pdStack_b0);
      dStack_d0 = (double)CONCAT44(SUB84(dStack_a8 + 103079215104.0,0),
                                   SUB84((double)pdStack_b0 + 103079215104.0,0));
      dStack_d8 = (double)CONCAT44(SUB84(dStack_90 + 103079215104.0,0),
                                   SUB84(dStack_98 + 103079215104.0,0));
      if (*(int *)(param_2 + 6) == 2) {
        pdVar18 = &dStack_d0;
        FUN_1097bebe8(pdVar18,&dStack_d8,param_1,*(int *)(param_2 + 0x10));
      }
      else {
        pdVar18 = &dStack_d0;
        FUN_1097bf8bc(pdVar18,&dStack_d8,dStack_a0 + 103079215104.0,dStack_88 + 103079215104.0,
                      param_1,*(int *)(param_2 + 0x10));
      }
      pdVar12 = pdVar18;
      if (param_1 != adStack_c8) {
        _free();
        pdVar12 = param_1;
      }
      param_1 = pdVar18;
      if (pdVar18 == (double *)0x0) goto LAB_1097d73b8;
      *param_7 = 0;
      *param_6 = 0;
      pdVar12 = &dStack_1f8;
      FUN_1097d9a58((double)param_4[2] / 2.0 + (double)*param_4,
                    (double)param_4[3] / 2.0 + (double)param_4[1],pdVar12,
                    *(int *)((long)param_2 + 0x34),&iStack_21c,param_6,param_7);
      if (((int)pdVar12 == 0x66) ||
         (((int)pdVar12 == 0 &&
          (pdVar12 = pdVar18, FUN_1097be29c(pdVar18,&iStack_21c), (int)pdVar12 != 0)))) {
        if (*(int *)(param_2 + 7) - 1U < 3) {
          iVar10 = *(int *)(&UNK_10dffe4b0 + (ulong)(*(int *)(param_2 + 7) - 1U) * 4);
        }
        else {
          iVar10 = 0;
        }
        if (*(int *)(pdVar18 + 8) != iVar10) {
          *(int *)(pdVar18 + 8) = iVar10;
          *(int *)(pdVar18 + 6) = 1;
        }
        goto LAB_1097d73b8;
      }
LAB_1097d73a0:
      param_1 = pdVar18;
      FUN_1097bdccc();
      if ((int)param_1 != 0) {
        _free();
        param_1 = pdVar18;
      }
    }
    else {
      if (iVar10 != 1) {
LAB_1097d6be0:
        dStack_1f8 = param_2[0x14];
        goto LAB_1097d6be8;
      }
      iVar10 = *(int *)(param_2 + 7);
      *param_7 = 0;
      *param_6 = 0;
      pdVar18 = (double *)param_2[0x10];
      if (*(int *)(pdVar18 + 2) == 0) {
        if (((param_3 != 0) && (*(int *)((long)param_2 + 0x3c) != 0)) &&
           ((*(byte *)((long)pdVar18 + 0x15) >> 4 & 1) != 0)) goto LAB_1097d7318;
        iVar11 = *(int *)*pdVar18;
        if (iVar11 == 0x1000) {
          _pthread_mutex_lock(pdVar18 + 0x2e);
          pdVar12 = (double *)pdVar18[0x36];
          if (*(int *)(pdVar12 + 3) != -1) {
            func_0x0001097c574c();
          }
          _pthread_mutex_unlock(pdVar18 + 0x2e);
          iVar11 = *(int *)*pdVar12;
          pdVar18 = pdVar12;
        }
        else {
          pdVar12 = (double *)0x0;
        }
        if (iVar11 != 0x17) {
          if (iVar11 != 0) goto LAB_1097d7318;
          if (iVar10 == 0) {
            bVar14 = true;
          }
          else if (((*param_5 < 0) || (param_5[1] < 0)) ||
                  (*(int *)(pdVar18 + 0x33) < param_5[2] + *param_5)) {
            bVar14 = false;
          }
          else {
            bVar14 = param_5[3] + param_5[1] <= *(int *)((long)pdVar18 + 0x19c);
          }
          if ((param_5[2] == 1) && (param_5[3] == 1)) {
            if ((*param_5 < 0) ||
               (((param_5[1] < 0 || (*(int *)(pdVar18 + 0x33) <= *param_5)) ||
                (*(int *)((long)pdVar18 + 0x19c) <= param_5[1])))) {
              if (bVar14) {
                FUN_1097f61ac();
                goto LAB_1097d7470;
              }
              goto LAB_1097d7478;
            }
            param_1 = pdVar18;
            FUN_1097d7690();
            if (param_1 == (double *)0x0) goto LAB_1097d7478;
          }
          else {
LAB_1097d7478:
            param_1 = (double *)(ulong)*(uint *)(pdVar18 + 0x31);
            FUN_109797e2c(param_1,*(int *)(pdVar18 + 0x33),*(int *)((long)pdVar18 + 0x19c),
                          pdVar18[0x32],*(int *)(pdVar18 + 0x34),1);
            if (param_1 != (double *)0x0) {
              if (pdVar12 != (double *)0x0) {
                param_1[0xf] = (double)FUN_1097d79f0;
                param_1[0x10] = (double)pdVar12;
              }
              goto LAB_1097d7384;
            }
          }
          FUN_1097f61ac();
          goto LAB_1097d73b8;
        }
        pdVar19 = (double *)pdVar18[0x30];
        iVar11 = *param_5;
        if (((iVar11 < 0) || (param_5[1] < 0)) || (*(int *)(pdVar18 + 0x2f) < param_5[2] + iVar11))
        {
          bVar1 = false;
          bVar14 = true;
        }
        else {
          iVar9 = param_5[3] + param_5[1];
          bVar14 = *(int *)((long)pdVar18 + 0x17c) < iVar9;
          bVar1 = iVar9 <= *(int *)((long)pdVar18 + 0x17c);
        }
        if ((param_5[2] != 1) || (param_5[3] != 1)) {
LAB_1097d72bc:
          uVar15 = *(uint *)(pdVar19 + 0x31);
          pdVar12 = (double *)(ulong)uVar15;
          uVar15 = (uVar15 >> 0x18) << (ulong)(uVar15 >> 0x16 & 3);
          bVar1 = (bool)(bVar1 ^ 1);
          if (uVar15 < 8) {
            bVar1 = true;
          }
          if (!bVar1) {
            FUN_109797e2c(pdVar12,*(int *)(pdVar18 + 0x2f),*(int *)((long)pdVar18 + 0x17c),
                          (long)pdVar19[0x32] + (ulong)(*(int *)(pdVar18 + 0x2e) * uVar15 >> 3) +
                          (long)pdVar19[0x34] * (long)*(int *)((long)pdVar18 + 0x174),pdVar19[0x34],
                          1);
            param_1 = pdVar12;
            if (pdVar12 == (double *)0x0) goto LAB_1097d73b8;
            goto LAB_1097d7384;
          }
          goto LAB_1097d7318;
        }
        if (!bVar14) {
          pdVar12 = pdVar19;
          FUN_1097d7690(pdVar19,*(int *)(pdVar18 + 0x2e) + iVar11,
                        param_5[1] + *(int *)((long)pdVar18 + 0x174));
          param_1 = pdVar12;
          if (pdVar12 != (double *)0x0) goto LAB_1097d73b8;
          goto LAB_1097d72bc;
        }
        if (iVar10 != 0) goto LAB_1097d72bc;
LAB_1097d7470:
        dStack_1f8 = 0.0;
        goto LAB_1097d6be8;
      }
      if (*(int *)(pdVar18 + 2) == 0x10) {
        *param_7 = 0;
        *param_6 = 0;
        (**(code **)((long)*pdVar18 + 0x38))(pdVar18,&iStack_21c);
        iVar4 = iStack_210;
        iVar9 = iStack_214;
        iVar11 = iStack_218;
        iVar10 = iStack_21c;
        if (((*param_5 < iStack_21c) || (iStack_214 + iStack_21c < param_5[2] + *param_5)) ||
           (param_5[1] < iStack_218)) {
          if (*(int *)(param_2 + 7) != 0) goto LAB_1097d6ae0;
LAB_1097d6e24:
          piVar6 = &iStack_21c;
          func_0x0001097ed458(piVar6,param_5);
          if ((int)piVar6 == 0) goto LAB_1097d7470;
          bVar14 = true;
        }
        else {
          if ((param_5[3] + param_5[1] <= iStack_210 + iStack_218) || (*(int *)(param_2 + 7) == 0))
          goto LAB_1097d6e24;
LAB_1097d6ae0:
          bVar14 = false;
        }
        pdVar19 = param_2 + 9;
        if (((*pdVar19 == 1.0) && (param_2[10] == 0.0)) &&
           ((param_2[0xb] == 0.0 &&
            (((param_2[0xc] == 1.0 && (param_2[0xd] == 0.0)) && (param_2[0xe] == 0.0)))))) {
          dStack_260 = 1.0;
          dVar20 = 1.0;
        }
        else {
          dStack_a8 = param_2[10];
          pdStack_b0 = (double *)*pdVar19;
          dStack_98 = param_2[0xc];
          dStack_a0 = param_2[0xb];
          dStack_88 = param_2[0xe];
          dStack_90 = param_2[0xd];
          FUN_1097d95c8(&pdStack_b0);
          dStack_1f8 = (double)iStack_21c;
          adStack_c8[0] = (double)iStack_218;
          dStack_d0 = (double)(iStack_214 + iStack_21c);
          dStack_d8 = (double)(iStack_210 + iStack_218);
          FUN_1097d92f0(&pdStack_b0,&dStack_1f8,adStack_c8,&dStack_d0,&dStack_d8,0);
          iStack_21c = (int)dStack_1f8;
          iStack_218 = (int)adStack_c8[0];
          iStack_214 = (int)((double)(long)dStack_d0 - (double)iStack_21c);
          iStack_210 = (int)((double)(long)dStack_d8 - (double)iStack_218);
          dStack_260 = (double)iVar9 / (double)iStack_214;
          dVar20 = (double)iVar4 / (double)iStack_210;
        }
        iVar4 = iStack_218;
        iVar9 = iStack_21c;
        pdVar12 = pdVar18 + 0x21;
        do {
          pdVar12 = (double *)*pdVar12;
          if (pdVar12 == pdVar18 + 0x21) {
            if (param_3 == 0) {
              iVar3 = *(int *)((long)pdVar18 + 0x14);
              if (*(int *)((long)param_1 + 0x14) == iVar3) {
                uVar15 = *(uint *)((long)param_1 + 0x18c);
              }
              else {
                uVar15 = 0xffffffff;
                if (iVar3 == 0x2000) {
                  uVar15 = 2;
                }
                uVar2 = 0;
                if (iVar3 != 0x3000) {
                  uVar2 = uVar15;
                }
                uVar15 = 1;
                if (iVar3 != 0x1000) {
                  uVar15 = uVar2;
                }
              }
              pdVar12 = (double *)(ulong)uVar15;
              FUN_1097d8718(pdVar12,iStack_214,iStack_210);
              dVar16 = param_1[0x2c];
              if (dVar16 != 0.0) {
                func_0x0001097e482c();
                pdVar12[0x2c] = dVar16;
              }
            }
            else {
              pdVar12 = (double *)0x2;
              FUN_1097d8718(2,iStack_214,iStack_210);
            }
            if (bVar14) {
              dVar16 = param_2[10];
              pdVar21 = (double *)*pdVar19;
              dStack_98 = param_2[0xc];
              dStack_a0 = param_2[0xb];
              dStack_88 = param_2[0xe];
              dStack_90 = param_2[0xd];
              pdStack_b0 = pdVar21;
              dStack_a8 = dVar16;
              if (iVar9 != 0 || iVar4 != 0) {
                dVar22 = (double)iVar9;
                dVar23 = (double)iVar4;
                pdStack_b0 = (double *)((double)pdVar21 + dStack_a0 * 0.0);
                dStack_a8 = dVar16 + dStack_98 * 0.0;
                dVar24 = dStack_a0 * dVar23;
                dVar23 = dStack_98 * dVar23;
                dStack_a0 = dStack_a0 + (double)pdVar21 * 0.0;
                dStack_98 = dStack_98 + dVar16 * 0.0;
                dStack_90 = dVar24 + (double)pdVar21 * dVar22 + dStack_90;
                dStack_88 = dVar23 + dVar16 * dVar22 + dStack_88;
              }
            }
            else {
              dVar16 = (double)iVar10 / dStack_260;
              dVar22 = (double)iVar11 / dVar20;
              pdStack_b0 = (double *)(dStack_260 + 0.0);
              dStack_a8 = dVar20 * 0.0 + 0.0;
              dStack_a0 = dStack_260 * 0.0 + 0.0;
              dStack_98 = dVar20 + 0.0;
              dStack_90 = dVar22 * 0.0 + dStack_260 * dVar16 + 0.0;
              dStack_88 = dVar20 * dVar22 + dVar16 * 0.0 + 0.0;
            }
            puVar7 = (undefined *)0x1;
            _calloc(1,0x178);
            if (puVar7 == (undefined *)0x0) {
              puVar7 = &DAT_10dffecb8;
            }
            else {
              FUN_1097f6418();
              *(double **)(puVar7 + 0x170) = pdVar12;
              func_0x0001097f6298(pdVar18,puVar7,0);
            }
            ppdStack_1f0 = &pdStack_b0;
            dStack_1f8 = 0.0;
            uStack_1bc = 0;
            uStack_1d8 = 0;
            uStack_1e0 = 0;
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            pdStack_1e8 = pdVar12;
            FUN_1097eae14(pdVar18,&dStack_1f8);
            if (*(int *)(pdVar12 + 0x2d) != 0) {
              *(int *)(param_1 + 0x2d) = *(int *)(pdVar12 + 0x2d);
            }
            FUN_1097f68f0(puVar7);
            FUN_1097f61ac(puVar7);
            if ((int)pdVar18 == 0) goto LAB_1097d7174;
            FUN_1097f61ac();
            param_1 = pdVar12;
            goto LAB_1097d73b4;
          }
        } while ((undefined *)pdVar12[-0x23] != &UNK_110b11590);
        pdVar12 = (double *)pdVar12[0xb];
        FUN_1097f6324(pdVar12);
LAB_1097d7174:
        param_1 = (double *)pdVar12[0x2e];
        *(int *)((long)param_1 + 4) = *(int *)((long)param_1 + 4) + 1;
        FUN_1097f61ac();
        if (bVar14) {
          *param_6 = -iStack_21c;
          *param_7 = -iStack_218;
          goto LAB_1097d73b8;
        }
        func_0x0001097e426c(&dStack_1f8,param_2);
        dStack_a8 = param_2[10];
        pdStack_b0 = (double *)*pdVar19;
        dStack_98 = param_2[0xc];
        dStack_a0 = param_2[0xb];
        dStack_88 = param_2[0xe];
        dStack_90 = param_2[0xd];
        FUN_1097d95c8(&pdStack_b0);
        dVar16 = (double)iVar10;
        dVar22 = (double)iVar11;
        dVar27 = (double)pdStack_b0 + dStack_a0 * 0.0;
        dVar28 = dStack_a8 + dStack_98 * 0.0;
        dVar25 = dStack_a0 + (double)pdStack_b0 * 0.0;
        dVar26 = dStack_98 + dStack_a8 * 0.0;
        dVar23 = dVar25 * 0.0;
        dVar24 = dVar26 * 0.0;
        dStack_90 = dVar23 + dVar27 * 0.0 +
                    dStack_a0 * dVar22 + (double)pdStack_b0 * dVar16 + dStack_90;
        dStack_88 = dVar24 + dVar28 * 0.0 + dStack_98 * dVar22 + dStack_a8 * dVar16 + dStack_88;
        pdStack_b0 = (double *)(dVar23 + dVar27 * dStack_260);
        dStack_a8 = dVar24 + dVar28 * dStack_260;
        dStack_a0 = dVar25 * dVar20 + dVar27 * 0.0;
        dStack_98 = dVar26 * dVar20 + dVar28 * 0.0;
        FUN_1097d95c8(&pdStack_b0);
        FUN_1097e51d8(&dStack_1f8,&pdStack_b0);
        pdVar12 = param_1;
        FUN_1097d7a30(param_1,&dStack_1f8,param_4,param_6,param_7);
        if ((int)pdVar12 != 0) goto LAB_1097d73b8;
LAB_1097d7268:
        func_0x0001097bdd8c();
      }
      else {
LAB_1097d7318:
        param_1 = (double *)param_2[0x10];
        FUN_1097f71c0(param_1,&dStack_1f8,&pdStack_b0);
        if ((int)param_1 == 0) {
          param_1 = (double *)(ulong)*(uint *)((long)dStack_1f8 + 0x188);
          FUN_109797e2c(param_1,*(undefined4 *)((long)dStack_1f8 + 0x198),
                        *(undefined4 *)((long)dStack_1f8 + 0x19c),
                        *(undefined8 *)((long)dStack_1f8 + 400),
                        *(undefined4 *)((long)dStack_1f8 + 0x1a0),1);
          if (param_1 != (double *)0x0) {
            pdVar12 = (double *)0x18;
            _malloc();
            plVar8 = (long *)param_2[0x10];
            if (pdVar12 != (double *)0x0) {
              *pdVar12 = (double)plVar8;
              pdVar12[1] = dStack_1f8;
              pdVar12[2] = (double)pdStack_b0;
              param_1[0xf] = (double)FUN_1097d79f8;
              param_1[0x10] = (double)pdVar12;
              goto LAB_1097d7384;
            }
            if (*(code **)(*plVar8 + 0x48) != (code *)0x0) {
              (**(code **)(*plVar8 + 0x48))(plVar8,dStack_1f8,pdStack_b0);
            }
            goto LAB_1097d7268;
          }
          param_2 = (double *)param_2[0x10];
          pcVar13 = *(code **)((long)*param_2 + 0x48);
          param_1 = param_2;
          dVar20 = dStack_1f8;
          pdVar12 = pdStack_b0;
          if (pcVar13 != (code *)0x0) goto LAB_1097d751c;
        }
      }
    }
  }
  else {
    if (iVar10 == 4) {
      *param_6 = -*param_4;
      *param_7 = -param_4[1];
      iVar10 = param_4[2];
      iVar11 = param_4[3];
      param_1 = (double *)0x20028888;
      FUN_109797e2c(0x20028888,iVar10,iVar11,0,0,1);
      pdVar12 = (double *)0x0;
      if (param_1 != (double *)0x0) {
        if (*(int *)param_1 == 0) {
          dVar20 = param_1[0x15];
          iVar9 = *(int *)(param_1 + 0x17) << 2;
        }
        else {
          dVar20 = 0.0;
          iVar9 = 0;
        }
        FUN_1097d9e30((double)*param_6,(double)*param_7,param_2,dVar20,iVar10,iVar11,iVar9);
        pdVar12 = param_2;
      }
      goto LAB_1097d73b8;
    }
    if (iVar10 != 5) goto LAB_1097d6be0;
    *param_7 = 0;
    *param_6 = 0;
    if ((((code *)param_2[0x13] == (code *)0x0) ||
        (pdVar12 = param_2,
        (*(code *)param_2[0x13])(param_2,param_2[0x18],param_1,(int *)((long)param_2 + 0x84)),
        param_1 = pdVar12, pdVar12 == (double *)0x0)) || (*(int *)((long)pdVar12 + 0x1c) != 0))
    goto LAB_1097d73b4;
    FUN_1097f71c0(pdVar12,&dStack_1f8,&pdStack_b0);
    if ((int)param_1 == 0) {
      param_1 = (double *)(ulong)*(uint *)((long)dStack_1f8 + 0x188);
      FUN_109797e2c(param_1,*(undefined4 *)((long)dStack_1f8 + 0x198),
                    *(undefined4 *)((long)dStack_1f8 + 0x19c),
                    *(undefined8 *)((long)dStack_1f8 + 400),
                    *(undefined4 *)((long)dStack_1f8 + 0x1a0),1);
      if (param_1 != (double *)0x0) {
        puVar5 = (undefined8 *)0x1;
        _calloc(1,0x20);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = param_2;
          puVar5[1] = pdVar12;
          puVar5[2] = dStack_1f8;
          puVar5[3] = pdStack_b0;
          param_1[0xf] = (double)FUN_1097d839c;
          param_1[0x10] = (double)puVar5;
LAB_1097d7384:
          pdVar12 = param_1;
          FUN_1097d7a30(param_1,param_2,param_4,param_6,param_7);
          pdVar18 = param_1;
          if ((int)pdVar12 != 0) goto LAB_1097d73b8;
          goto LAB_1097d73a0;
        }
        func_0x0001097bdd8c();
      }
      if (*(code **)((long)*pdVar12 + 0x48) != (code *)0x0) {
        param_1 = pdVar12;
        (**(code **)((long)*pdVar12 + 0x48))(pdVar12,dStack_1f8,pdStack_b0);
      }
    }
    pcVar13 = (code *)param_2[0x14];
    if (pcVar13 != (code *)0x0) {
      dVar20 = param_2[0x18];
LAB_1097d751c:
      (*pcVar13)(param_2,dVar20,pdVar12);
      param_1 = param_2;
    }
  }
LAB_1097d73b4:
  pdVar12 = param_1;
  param_1 = (double *)0x0;
LAB_1097d73b8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_1;
  }
  ___stack_chk_fail();
  dVar16 = pdVar12[0x2e];
  dVar20 = dVar16;
  FUN_1097bdccc();
  if (SUB84(dVar20,0) != 0) {
    _free(dVar16);
  }
  return (double *)0x0;
}



/* Entry: 1097d7568; end: 1097d759b;  */

undefined8 FUN_1097d7568(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x170);
  uVar1 = uVar2;
  FUN_1097bdccc();
  if ((int)uVar1 != 0) {
    _free(uVar2);
  }
  return 0;
}



/* Entry: 1097d759c; end: 1097d768f;  */

undefined *
FUN_1097d759c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  bool bVar2;
  
  puVar1 = (undefined *)0x1;
  _calloc(1,0x180);
  if (puVar1 != (undefined *)0x0) {
    FUN_1097d6904(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    *(long *)(puVar1 + 0x170) = param_1;
    if (param_1 != 0) {
      FUN_1097f6418(puVar1,&UNK_110b114a0,0,0x3000,0);
      if (param_2 == 0) {
        bVar2 = true;
      }
      else if (*(int *)(param_2 + 0x30) == 0) {
        bVar2 = 0xfe < *(byte *)(param_2 + 0xa7);
      }
      else {
        bVar2 = false;
      }
      puVar1[0x178] = puVar1[0x178] & 0xfe | bVar2;
      return puVar1;
    }
    _free(puVar1);
  }
  return &DAT_10dffecb8;
}



/* Entry: 1097d7690; end: 1097d79ef;  */

void FUN_1097d7690(long param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  undefined4 uStack_20;
  ushort uStack_1c;
  short sStack_1a;
  undefined8 uStack_18;
  
  puVar3 = (undefined8 *)&uStack_20;
  uVar6 = *(uint *)(param_1 + 0x18c);
  if ((int)uVar6 < 4) {
    if (uVar6 < 2) {
      uVar8 = *(uint *)(*(long *)(param_1 + 400) + *(long *)(param_1 + 0x1a0) * (long)param_3 +
                       (long)(int)param_2 * 4);
      uVar7 = uVar8 >> 0x10 & 0xff00 | uVar8 >> 0x18;
      if (uVar6 != 0) {
        uVar7 = 0xffffffff;
      }
      sStack_1a = (short)uVar7;
      if ((uVar7 & 0xffff) == 0) goto LAB_1097d7984;
      if (uVar8 == 0xffffffff) goto LAB_1097d794c;
      if (((uVar7 ^ 0xffffffff) & 0xffff) != 0 || (uVar8 & 0xffffff) != 0) {
        uVar2 = (ushort)(uVar8 >> 8);
        uStack_20 = CONCAT22((ushort)uVar8 & 0xff00 | uVar2 & 0xff,
                             uVar2 & 0xff00 | (ushort)(uVar8 >> 0x10) & 0xff);
        uStack_1c = (ushort)uVar8 & 0xff | (ushort)(uVar8 << 8);
        puVar3 = (undefined8 *)&uStack_20;
        goto LAB_1097d79e0;
      }
      goto LAB_1097d798c;
    }
    if (uVar6 == 2) {
      uVar1 = *(undefined1 *)
               (*(long *)(param_1 + 400) + *(long *)(param_1 + 0x1a0) * (long)param_3 +
               (long)(int)param_2);
      sStack_1a = CONCAT11(uVar1,uVar1);
      if (sStack_1a != -1) {
        if (sStack_1a != 0) {
          uStack_1c = 0;
          uStack_20 = 0;
          puVar3 = (undefined8 *)&uStack_20;
          goto LAB_1097d79e0;
        }
        goto LAB_1097d7984;
      }
      goto LAB_1097d798c;
    }
    if (uVar6 != 3) {
      return;
    }
    uVar6 = param_2 + 7;
    if (-1 < (int)param_2) {
      uVar6 = param_2;
    }
    if ((*(byte *)(*(long *)(param_1 + 400) + *(long *)(param_1 + 0x1a0) * (long)param_3 +
                  (long)((int)uVar6 >> 3)) >> (ulong)(param_2 & 7) & 1) != 0) goto LAB_1097d798c;
LAB_1097d7984:
    uStack_18 = 0;
  }
  else {
    if (5 < (int)uVar6) {
      if (uVar6 == 6) {
        pfVar4 = (float *)(*(long *)(param_1 + 400) + *(long *)(param_1 + 0x1a0) * (long)param_3 +
                          (long)(int)param_2 * 0xc);
        sStack_1a = -1;
        fVar9 = *pfVar4;
LAB_1097d7904:
        if (((fVar9 == 0.0) && (pfVar4[1] == 0.0)) && (pfVar4[2] == 0.0)) goto LAB_1097d798c;
        if (fVar9 == 1.0) {
          if (pfVar4[1] == 1.0) {
            fVar9 = 1.0;
            if (pfVar4[2] == 1.0) goto LAB_1097d794c;
          }
          else {
            fVar9 = 1.0;
          }
        }
      }
      else {
        if (uVar6 != 7) {
          return;
        }
        pfVar4 = (float *)(*(long *)(param_1 + 400) + *(long *)(param_1 + 0x1a0) * (long)param_3 +
                          (long)(int)param_2 * 0x10);
        iVar5 = (int)(pfVar4[3] * 65535.0);
        sStack_1a = (short)iVar5;
        if (iVar5 == 0) goto LAB_1097d7984;
        fVar9 = *pfVar4;
        if (iVar5 == 0xffff) goto LAB_1097d7904;
      }
      uStack_20 = CONCAT22((short)(int)(pfVar4[1] * 65535.0),(short)(int)(fVar9 * 65535.0));
      uStack_1c = (ushort)(int)(pfVar4[2] * 65535.0);
      puVar3 = (undefined8 *)&uStack_20;
      goto LAB_1097d79e0;
    }
    if (uVar6 == 4) {
      uVar2 = *(ushort *)
               (*(long *)(param_1 + 400) + *(long *)(param_1 + 0x1a0) * (long)param_3 +
               (long)(int)param_2 * 2);
      if (uVar2 == 0xffff) goto LAB_1097d794c;
      if (uVar2 != 0) {
        sStack_1a = -1;
        uVar6 = uVar2 & 0xf800;
        uVar7 = 5;
        iVar5 = 0xb;
        do {
          uVar6 = uVar6 | (uVar6 & 0xffff) >> (ulong)(uVar7 & 0x1f);
          iVar5 = iVar5 - uVar7;
          uVar7 = uVar7 << 1;
        } while (0 < iVar5);
        uVar7 = (uVar2 & 0xffe0) << 5;
        uVar8 = 6;
        iVar5 = 10;
        do {
          uVar7 = uVar7 | (uVar7 & 0xffff) >> (ulong)(uVar8 & 0x1f);
          iVar5 = iVar5 - uVar8;
          uVar8 = uVar8 << 1;
        } while (0 < iVar5);
        uStack_20 = CONCAT22((short)uVar7,(short)uVar6);
        uVar7 = (uint)uVar2 << 0xb;
        uVar6 = 5;
        iVar5 = 0xb;
        do {
          uVar7 = uVar7 | (uVar7 & 0xffff) >> (ulong)(uVar6 & 0x1f);
          uStack_1c = (ushort)uVar7;
          iVar5 = iVar5 - uVar6;
          uVar6 = uVar6 << 1;
        } while (0 < iVar5);
        goto LAB_1097d79e0;
      }
    }
    else {
      if (uVar6 != 5) {
        return;
      }
      uVar7 = *(uint *)(*(long *)(param_1 + 400) + *(long *)(param_1 + 0x1a0) * (long)param_3 +
                       (long)(int)param_2 * 4);
      uVar6 = uVar7 & 0x3fffffff;
      if (uVar6 == 0x3fffffff) {
LAB_1097d794c:
        uStack_18 = 0xffffffffffffffff;
        goto LAB_1097d7994;
      }
      if (uVar6 != 0) {
        sStack_1a = -1;
        uStack_20 = CONCAT22((ushort)(uVar7 >> 10) & 0x3fff | (ushort)(uVar7 >> 0x14) & 0xf,
                             (ushort)(uVar6 >> 0x14));
        uStack_1c = (ushort)(uVar7 >> 10) & 0xf | (ushort)uVar7 & 0x3fff;
        puVar3 = (undefined8 *)&uStack_20;
        goto LAB_1097d79e0;
      }
    }
LAB_1097d798c:
    uStack_18 = 0xffff000000000000;
  }
LAB_1097d7994:
  puVar3 = &uStack_18;
LAB_1097d79e0:
  FUN_1097c246c(puVar3);
  return;
}



/* Entry: 1097d79f0; end: 1097d79f7;  */

void FUN_1097d79f0(undefined8 param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 0x18) != -1)) {
    _pthread_mutex_lock(0x1132e0448);
    iVar2 = *(int *)(param_2 + 0x18) + -1;
    *(int *)(param_2 + 0x18) = iVar2;
    _pthread_mutex_unlock(0x1132e0448);
    if (iVar2 == 0) {
      if ((*(byte *)(param_2 + 0x30) >> 1 & 1) == 0) {
        *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) | 1;
        FUN_1097f6378(param_2,0);
        if (*(int *)(param_2 + 0x18) != 0) {
          return;
        }
        FUN_1097f6afc(param_2);
      }
      if (*(long *)(param_2 + 0x28) != 0) {
        func_0x0001097cc6a8();
      }
      func_0x0001097c55d4(param_2 + 0x38);
      func_0x0001097c55d4(param_2 + 0x50);
      if (*(long *)(param_2 + 0x160) != 0) {
        FUN_1097e4880();
      }
      bVar1 = *(byte *)(param_2 + 0x30);
      if ((bVar1 >> 4 & 1) != 0) {
        FUN_1097ce1d0(*(undefined8 *)(param_2 + 8));
        bVar1 = *(byte *)(param_2 + 0x30);
      }
      if ((bVar1 >> 3 & 1) != 0) {
        _free(*(undefined8 *)(param_2 + 0x140));
        _free(*(undefined8 *)(param_2 + 0x150));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(param_2);
      return;
    }
  }
  return;
}



/* Entry: 1097d79f8; end: 1097d7a2f;  */

void FUN_1097d79f8(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)*param_2 + 0x48);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)((long *)*param_2,param_2[1],param_2[2]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1097d7a30; end: 1097d7e33;  */

void FUN_1097d7a30(long param_1,long param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  uint uVar9;
  code *pcVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_94 [36];
  
  lVar5 = param_2 + 0x48;
  FUN_1097d9a58((double)param_3[2] / 2.0 + (double)*param_3,
                (double)param_3[3] / 2.0 + (double)param_3[1],lVar5,*(undefined4 *)(param_2 + 0x34),
                auStack_94);
  if ((int)lVar5 == 0x66) {
    if (*(long *)(param_1 + 0x48) == 0) {
      if (*(int *)(param_1 + 0x44) == 3) goto LAB_1097d7d7c;
      *(undefined4 *)(param_1 + 0x44) = 3;
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 3;
      _free();
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x30) = 1;
    goto LAB_1097d7d7c;
  }
  if ((int)lVar5 != 0) {
    return;
  }
  lVar5 = param_1;
  FUN_1097be29c(param_1,auStack_94);
  if ((int)lVar5 == 0) {
    return;
  }
  uVar12 = *(undefined8 *)(param_2 + 0x48);
  _hypot(uVar12,*(undefined8 *)(param_2 + 0x58));
  uVar13 = *(undefined8 *)(param_2 + 0x50);
  _hypot(uVar13,*(undefined8 *)(param_2 + 0x60));
  iVar3 = *(int *)(param_2 + 0x34);
  if (iVar3 < 3) {
    if (iVar3 != 0) {
      dVar17 = (double)NEON_fminnm(uVar12,0x40dfffc000000000);
      dVar14 = (double)NEON_fminnm(uVar13,0x40dfffc000000000);
      if (iVar3 == 1) {
        dVar16 = 16.0;
        if (dVar17 <= 16.0) {
          dVar16 = dVar17;
        }
        dVar15 = 16.0;
        if (dVar14 <= 16.0) {
          dVar15 = dVar14;
        }
        dVar17 = 1.0;
        if (1.3333333333333333 <= dVar16) {
          dVar17 = dVar16;
        }
        lVar8 = 1;
        if (dVar15 < 1.3333333333333333) {
          dVar15 = 1.0;
        }
      }
      else {
        if (iVar3 != 2) goto LAB_1097d7b30;
        if (dVar17 <= 16.0) {
          if (dVar17 < 1.0) {
            if (dVar17 < 0.0078125) {
              lVar8 = 5;
              dVar17 = 0.007874015748031496;
              goto LAB_1097d7c08;
            }
            if (0.5 <= dVar17) {
              dVar17 = 1.0;
            }
            else {
              dVar17 = 1.0 / (1.0 / dVar17 + -1.0);
            }
          }
          lVar8 = 5;
        }
        else {
          lVar8 = 1;
          dVar17 = 16.0;
        }
LAB_1097d7c08:
        if (dVar14 <= 16.0) {
          dVar15 = dVar14;
          if (dVar14 < 1.0) {
            if (0.0078125 <= dVar14) {
              dVar15 = 1.0;
              if (dVar14 < 0.5) {
                dVar15 = 1.0 / (1.0 / dVar14 + -1.0);
              }
            }
            else {
              dVar15 = 0.007874015748031496;
            }
          }
        }
        else {
          lVar8 = 1;
          dVar15 = 16.0;
        }
      }
      pcVar10 = (code *)(&PTR_DAT_110b11690)[lVar8 * 3];
      (*pcVar10)(dVar17);
      iVar3 = (int)lVar5;
      if (iVar3 < 2) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0xffffffff;
        do {
          uVar9 = uVar9 + 1;
        } while (dVar17 * (double)(1 << (ulong)(uVar9 & 0x1f)) <= 128.0);
      }
      iVar2 = iVar3 << (ulong)(uVar9 & 0x1f);
      lVar6 = lVar5;
      (*pcVar10)(dVar15);
      iVar4 = (int)lVar6;
      if (iVar4 < 2) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0xffffffff;
        do {
          uVar11 = uVar11 + 1;
        } while (dVar15 * (double)(1 << (ulong)(uVar11 & 0x1f)) <= 128.0);
      }
      uVar1 = iVar2 + (iVar4 << (ulong)(uVar11 & 0x1f)) + 4;
      if (uVar1 == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)(-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
        _malloc();
        if (piVar7 != (int *)0x0) {
          *piVar7 = iVar3 << 0x10;
          piVar7[1] = iVar4 << 0x10;
          piVar7[2] = uVar9 << 0x10;
          piVar7[3] = uVar11 << 0x10;
          FUN_1097d7e5c(dVar17,lVar8,lVar5,uVar9,piVar7 + 4);
          FUN_1097d7e5c(dVar15,lVar8,lVar6,uVar11,piVar7 + 4 + iVar2);
        }
      }
      FUN_1097be34c(param_1,6,piVar7,(ulong)uVar1);
      _free(piVar7);
      goto LAB_1097d7d7c;
    }
  }
  else if (1 < iVar3 - 3U) {
LAB_1097d7b30:
    iVar3 = 2;
  }
  FUN_1097be34c(param_1,iVar3,0,0);
LAB_1097d7d7c:
  uVar9 = *(int *)(param_2 + 0x38) - 1;
  if (uVar9 < 3) {
    iVar3 = *(int *)(&UNK_10dffe4b0 + (ulong)uVar9 * 4);
  }
  else {
    iVar3 = 0;
  }
  if (*(int *)(param_1 + 0x40) != iVar3) {
    *(int *)(param_1 + 0x40) = iVar3;
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  if ((*(int *)(param_2 + 0x3c) != 0) && (*(int *)(param_1 + 0x68) != 1)) {
    *(undefined4 *)(param_1 + 0x68) = 1;
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  return;
}



/* Entry: 1097d7e34; end: 1097d7e5b;  */

undefined8 FUN_1097d7e34(void)

{
  return 0;
}



/* Entry: 1097d7e5c; end: 1097d7fff;  */

void FUN_1097d7e5c(undefined8 param_1,ulong param_2,uint param_3,uint param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar1 = 1 << (ulong)(param_4 & 0x1f);
  if ((int)param_3 < 2) {
    if (param_4 != 0x1f) {
      if ((int)uVar1 < 2) {
        uVar1 = 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memset_pattern16_11034c670)(param_5,&UNK_10dffe4a0,(ulong)uVar1 << 2);
      return;
    }
  }
  else if (param_4 != 0x1f) {
    uVar5 = 0;
    dVar8 = (double)(int)uVar1;
    pcVar6 = (code *)(&PTR_FUN_110b11688)[(param_2 & 0xffffffff) * 3];
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    dVar11 = 0.0;
    do {
      uVar7 = 0;
      dVar9 = (1.0 / dVar8) * (dVar11 + 0.5);
      dVar12 = 0.0;
      do {
        dVar10 = ((double)(long)((dVar9 - (double)param_3 / 2.0) + -0.5) - dVar9) + 0.5 +
                 (double)(uVar7 & 0xffffffff);
        (*pcVar6)(dVar10,param_1);
        dVar12 = dVar12 + dVar10;
        *(int *)(param_5 + uVar7 * 4) = (int)(dVar10 * 65536.0);
        uVar7 = uVar7 + 1;
      } while (param_3 != uVar7);
      lVar3 = 0;
      iVar2 = 0;
      do {
        iVar4 = (int)((1.0 / dVar12) * (double)*(int *)(param_5 + lVar3));
        *(int *)(param_5 + lVar3) = iVar4;
        iVar2 = iVar2 + iVar4;
        lVar3 = lVar3 + 4;
      } while ((ulong)param_3 * 4 != lVar3);
      *(int *)(param_5 + (ulong)(param_3 >> 1) * 4) =
           (*(int *)(param_5 + (ulong)(param_3 >> 1) * 4) - iVar2) + 0x10000;
      param_5 = param_5 + (ulong)param_3 * 4;
      dVar11 = dVar11 + 1.0;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
  }
  return;
}



/* Entry: 1097d8000; end: 1097d80d3;  */

undefined8 FUN_1097d8000(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 1097d80d4; end: 1097d81ab;  */

double FUN_1097d80d4(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (1.0 <= param_2) {
    param_1 = param_1 / param_2;
    dVar1 = 0.0;
    if (ABS(param_1) < 3.0) {
      dVar2 = 1.0;
      dVar1 = 1.0;
      if (param_1 != 0.0) {
        dVar3 = param_1 * 3.141592653589793;
        dVar1 = dVar3;
        _sin(dVar3);
        dVar1 = dVar1 / dVar3;
      }
      if (param_1 * 0.3333333333333333 != 0.0) {
        dVar3 = param_1 * 0.3333333333333333 * 3.141592653589793;
        dVar2 = dVar3;
        _sin(dVar3);
        dVar2 = dVar2 / dVar3;
      }
      dVar1 = dVar1 * dVar2;
    }
  }
  else {
    dVar1 = param_1 * 2.0 + -0.5;
    FUN_1097d80d4(dVar1,param_2 + param_2);
    dVar2 = param_1 * 2.0 + 0.5;
    FUN_1097d80d4(dVar2,param_2 + param_2);
    dVar1 = dVar1 + dVar2;
  }
  return dVar1;
}



/* Entry: 1097d81ac; end: 1097d8273;  */

int FUN_1097d81ac(double param_1)

{
  double dVar1;
  
  dVar1 = 2.0;
  if (2.0 <= (double)(long)(param_1 * 6.0)) {
    dVar1 = (double)(long)(param_1 * 6.0);
  }
  return (int)dVar1;
}



/* Entry: 1097d8274; end: 1097d839b;  */

double FUN_1097d8274(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (1.0 <= param_2) {
    dVar1 = ABS(param_1 / param_2);
    if (1.0 <= dVar1) {
      if (2.0 <= dVar1) {
        return 0.0;
      }
      dVar2 = param_4 * -48.0 + param_3 * -12.0 +
              dVar1 * (param_4 * 30.0 + param_3 * 6.0 + dVar1 * (param_4 * -6.0 - param_3));
      dVar3 = param_4 * 24.0 + param_3 * 8.0;
    }
    else {
      dVar2 = dVar1 * (param_3 * 12.0 + -18.0 + param_4 * 6.0 +
                      dVar1 * (param_3 * -9.0 + 12.0 + param_4 * -6.0));
      dVar3 = param_3 * -2.0 + 6.0;
    }
    dVar1 = (dVar3 + dVar1 * dVar2) / 6.0;
  }
  else {
    dVar1 = param_1 * 2.0 + -0.5;
    FUN_1097d8274(dVar1,param_2 + param_2,param_3,param_4);
    dVar2 = param_1 * 2.0 + 0.5;
    FUN_1097d8274(dVar2,param_2 + param_2,param_3,param_4);
    dVar1 = dVar1 + dVar2;
  }
  return dVar1;
}



/* Entry: 1097d839c; end: 1097d83eb;  */

void FUN_1097d839c(undefined8 param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(long *)param_2[1] + 0x48);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)((long *)param_2[1],param_2[2],param_2[3]);
  }
  lVar1 = *param_2;
  if (*(code **)(lVar1 + 0xa0) != (code *)0x0) {
    (**(code **)(lVar1 + 0xa0))(lVar1,*(undefined8 *)(lVar1 + 0xc0),param_2[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1097d83ec; end: 1097d8643;  */

void FUN_1097d83ec(long param_1,int *param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(int **)(param_1 + 0x170) = param_2;
  *(int *)(param_1 + 0x188) = param_3;
  if (param_3 < 0x10cb4444) {
    if (param_3 < 0xccb0444) {
      if (param_3 == 0x1011000) {
        uVar2 = 3;
        goto LAB_1097d8500;
      }
      if (param_3 == 0x8018000) {
        uVar2 = 2;
        goto LAB_1097d8500;
      }
    }
    else {
      if (param_3 == 0xccb0444) {
        uVar2 = 6;
        goto LAB_1097d8500;
      }
      if (param_3 == 0x10020565) {
        uVar2 = 4;
        goto LAB_1097d8500;
      }
    }
  }
  else if (param_3 < 0x20020aaa) {
    if (param_3 == 0x10cb4444) {
      uVar2 = 7;
      goto LAB_1097d8500;
    }
    if (param_3 == 0x20020888) {
      uVar2 = 1;
      goto LAB_1097d8500;
    }
  }
  else {
    if (param_3 == 0x20020aaa) {
      uVar2 = 5;
      goto LAB_1097d8500;
    }
    if (param_3 == 0x20028888) {
      uVar2 = 0;
      goto LAB_1097d8500;
    }
  }
  uVar2 = 0xffffffff;
LAB_1097d8500:
  *(undefined4 *)(param_1 + 0x18c) = uVar2;
  if (*param_2 == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x2a);
  }
  else {
    uVar3 = 0;
  }
  *(undefined8 *)(param_1 + 400) = uVar3;
  *(byte *)(param_1 + 0x1ac) = *(byte *)(param_1 + 0x1ac) & 0xe0 | 0x1e;
  if (*param_2 == 0) {
    iVar5 = param_2[0x28];
  }
  else {
    iVar5 = 0;
  }
  *(int *)(param_1 + 0x198) = iVar5;
  if (*param_2 == 0) {
    iVar6 = param_2[0x29];
  }
  else {
    iVar6 = 0;
  }
  *(int *)(param_1 + 0x19c) = iVar6;
  if (*param_2 == 0) {
    lVar4 = (long)param_2[0x2e] << 2;
  }
  else {
    lVar4 = 0;
  }
  *(long *)(param_1 + 0x1a0) = lVar4;
  FUN_1097be454();
  *(int *)(param_1 + 0x1a8) = (int)param_2;
  bVar1 = 4;
  if (iVar6 != 0 && iVar5 != 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfb | bVar1;
  FUN_1097d4030();
  *(int **)(param_1 + 0x178) = param_2;
  return;
}



/* Entry: 1097d8644; end: 1097d866b;  */

undefined4 FUN_1097d8644(int param_1)

{
  if (param_1 - 1U < 7) {
    return *(undefined4 *)(&UNK_10dffe4bc + (ulong)(param_1 - 1U) * 4);
  }
  return 0x20028888;
}



/* Entry: 1097d866c; end: 1097d8717;  */

undefined *
FUN_1097d866c(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  
  if (((uint)param_4 | (uint)param_3) >> 0xf == 0) {
    FUN_109797e2c(param_2,param_3,param_4,param_1,param_5,1);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &DAT_10dffecb8;
    }
    else {
      puVar2 = param_2;
      func_0x0001097d85bc();
      if (*(int *)(puVar2 + 0x1c) == 0) {
        bVar1 = 4;
        if (param_1 != 0) {
          bVar1 = 0;
        }
        puVar2[0x30] = puVar2[0x30] & 0xfb | bVar1;
      }
      else {
        func_0x0001097bdd8c(param_2);
      }
    }
  }
  else {
    puVar2 = &DAT_10dfffc88;
  }
  return puVar2;
}



/* Entry: 1097d8718; end: 1097d8763;  */

/* WARNING: Removing unreachable block (ram,0x0001097d86dc) */

undefined * FUN_1097d8718(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (7 < (uint)param_1) {
    return &DAT_10dfff278;
  }
  FUN_1097d8644();
  if (((uint)param_3 | (uint)param_2) >> 0xf == 0) {
    FUN_109797e2c(param_1,param_2,param_3,0,0xffffffff,1);
    if (param_1 == (undefined *)0x0) {
      puVar1 = &DAT_10dffecb8;
    }
    else {
      puVar1 = param_1;
      func_0x0001097d85bc();
      if (*(int *)(puVar1 + 0x1c) == 0) {
        puVar1[0x30] = puVar1[0x30] & 0xfb | 4;
      }
      else {
        func_0x0001097bdd8c(param_1);
      }
    }
  }
  else {
    puVar1 = &DAT_10dfffc88;
  }
  return puVar1;
}



/* Entry: 1097d8764; end: 1097d8783;  */

undefined4 FUN_1097d8764(uint param_1)

{
  if (param_1 < 8) {
    return *(undefined4 *)(&UNK_10dffe4d8 + (ulong)param_1 * 4);
  }
  return 0;
}



/* Entry: 1097d8784; end: 1097d885f;  */

undefined *
FUN_1097d8784(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  if ((uint)param_2 < 8) {
    if ((param_5 & 3) == 0) {
      uVar2 = (uint)param_3;
      if (((uint)param_4 | uVar2) >> 0xf != 0) {
        return &DAT_10dfffc88;
      }
      puVar5 = param_2;
      FUN_1097d8764();
      uVar1 = ((int)puVar5 * uVar2 + 7 >> 3) + 3 & 0x3ffffc;
      uVar4 = (uint)param_5;
      if ((int)uVar4 < 0) {
        if (uVar4 + uVar1 == 0 || (int)(uVar4 + uVar1) < 0 != SCARRY4(uVar4,uVar1))
        goto LAB_1097d8830;
      }
      else if (uVar1 <= uVar4) {
LAB_1097d8830:
        FUN_1097d8644();
        if (((uint)param_4 | uVar2) >> 0xf == 0) {
          FUN_109797e2c(param_2,param_3,param_4,param_1,param_5,1,param_7,param_8,unaff_x22,
                        unaff_x21,unaff_x20,unaff_x19,unaff_x29,unaff_x30);
          if (param_2 == (undefined *)0x0) {
            puVar5 = &DAT_10dffecb8;
          }
          else {
            puVar5 = param_2;
            func_0x0001097d85bc();
            if (*(int *)(puVar5 + 0x1c) == 0) {
              bVar3 = 4;
              if (param_1 != 0) {
                bVar3 = 0;
              }
              puVar5[0x30] = puVar5[0x30] & 0xfb | bVar3;
            }
            else {
              func_0x0001097bdd8c(param_2);
            }
          }
        }
        else {
          puVar5 = &DAT_10dfffc88;
        }
        return puVar5;
      }
    }
    puVar5 = &DAT_10dfffb18;
  }
  else {
    puVar5 = &DAT_10dfff278;
  }
  return puVar5;
}



/* Entry: 1097d8860; end: 1097d88c3;  */

/* WARNING: Removing unreachable block (ram,0x0001097d86dc) */

undefined * FUN_1097d8860(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (((uint)param_4 | (uint)param_3) >> 0xf != 0) {
    return &DAT_10dfffc88;
  }
  if (*(int *)(param_1 + 0x14) == param_2) {
    puVar2 = (undefined *)(ulong)*(uint *)(param_1 + 0x188);
    uVar3 = 0;
  }
  else {
    uVar4 = 0xffffffff;
    if (param_2 == 0x2000) {
      uVar4 = 2;
    }
    uVar1 = 0;
    if (param_2 != 0x3000) {
      uVar1 = uVar4;
    }
    uVar4 = 1;
    if (param_2 != 0x1000) {
      uVar4 = uVar1;
    }
    puVar2 = (undefined *)(ulong)uVar4;
    if (7 < uVar4) {
      return &DAT_10dfff278;
    }
    FUN_1097d8644();
    uVar3 = 0xffffffff;
  }
  if (((uint)param_4 | (uint)param_3) >> 0xf == 0) {
    FUN_109797e2c(puVar2,param_3,param_4,0,uVar3,1);
    if (puVar2 == (undefined *)0x0) {
      puVar5 = &DAT_10dffecb8;
    }
    else {
      puVar5 = puVar2;
      func_0x0001097d85bc();
      if (*(int *)(puVar5 + 0x1c) == 0) {
        puVar5[0x30] = puVar5[0x30] & 0xfb | 4;
      }
      else {
        func_0x0001097bdd8c(puVar2);
      }
    }
  }
  else {
    puVar5 = &DAT_10dfffc88;
  }
  return puVar5;
}



/* Entry: 1097d88c4; end: 1097d8ae3;  */

long FUN_1097d88c4(long param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  
  if (((*(byte *)(param_1 + 0x1ac) & 1) == 0) || ((*(byte *)(param_1 + 0x30) & 1) == 0)) {
    lVar3 = 0;
    FUN_1097d866c(0,*(undefined4 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x198),
                  *(undefined4 *)(param_1 + 0x19c),0);
    if (*(int *)(lVar3 + 0x1c) == 0) {
      if (*(long *)(lVar3 + 0x1a0) == *(long *)(param_1 + 0x1a0)) {
        _memcpy(*(undefined8 *)(lVar3 + 400),*(undefined8 *)(param_1 + 400),
                *(long *)(lVar3 + 0x1a0) * (long)*(int *)(lVar3 + 0x19c));
      }
      else {
        FUN_1097c3110(1,*(undefined8 *)(param_1 + 0x170),0,*(undefined8 *)(lVar3 + 0x170),0,0,0,0,0,
                      *(undefined4 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x19c));
      }
      *(byte *)(lVar3 + 0x30) = *(byte *)(lVar3 + 0x30) & 0xfb;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x170);
    func_0x0001097d85bc(lVar3,*(undefined4 *)(param_1 + 0x188));
    if (*(int *)(lVar3 + 0x1c) == 0) {
      *(undefined8 *)(param_1 + 0x170) = 0;
      bVar1 = *(byte *)(param_1 + 0x1ac);
      *(byte *)(param_1 + 0x1ac) = bVar1 & 0xfe;
      bVar2 = *(byte *)(lVar3 + 0x1ac);
      bVar1 = bVar2 & 1 | (bVar1 >> 1 & 3) << 1;
      *(byte *)(lVar3 + 0x1ac) = bVar2 & 0xf8 | bVar1;
      *(byte *)(lVar3 + 0x1ac) = bVar2 & 0xe0 | bVar1 | *(byte *)(param_1 + 0x1ac) & 0x18 | 1;
    }
  }
  return lVar3;
}



/* Entry: 1097d8ae4; end: 1097d8b8b;  */

void FUN_1097d8ae4(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = *(undefined8 *)(param_1 + 0x198);
  }
  return;
}



/* Entry: 1097d8b8c; end: 1097d8bd7;  */

void FUN_1097d8b8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  FUN_1097cc1a4(*(undefined8 *)(param_1 + 0x178),param_1,param_2,param_3,param_4,param_5,param_6,
                param_7,param_8);
  return;
}



/* Entry: 1097d8bd8; end: 1097d8c4f;  */

undefined8 *
FUN_1097d8bd8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 auStack_348 [9];
  int iStack_2fc;
  int iStack_2f8;
  int iStack_2f4;
  int iStack_2f0;
  undefined8 uStack_78;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  puVar3 = *(undefined8 **)(param_2 + 0x178);
  puVar1 = auStack_348;
  FUN_1097cba44(puVar1,param_2,param_3,param_4,param_5,param_8);
  if ((int)puVar1 == 0) {
    do {
      for (; (code *)puVar3[4] == (code *)0x0; puVar3 = (undefined8 *)*puVar3) {
      }
      puVar1 = puVar3;
      (*(code *)puVar3[4])(param_1,puVar3,auStack_348,param_5,param_6,param_7);
      puVar3 = (undefined8 *)*puVar3;
    } while ((int)puVar1 == 100);
    if (((int)puVar1 == 0) && (lVar2 = *(long *)(param_2 + 0x28), lVar2 != 0)) {
      iStack_70 = iStack_2fc;
      iStack_6c = iStack_2f8;
      iStack_68 = iStack_2f4 + iStack_2fc;
      iStack_64 = iStack_2f0 + iStack_2f8;
      FUN_1097cc6fc(lVar2,&iStack_70,1);
      *(long *)(param_2 + 0x28) = lVar2;
    }
    FUN_1097ca284(uStack_78);
  }
  return puVar1;
}



/* Entry: 1097d8c50; end: 1097d8d9f;  */

undefined * FUN_1097d8c50(undefined *param_1,undefined *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (*(int *)(param_1 + 0x18c) == (int)param_2) {
      FUN_1097f6324(param_1);
      param_2 = param_1;
    }
    else {
      FUN_1097d8718(param_2,*(undefined4 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x19c));
      if (*(int *)(param_2 + 0x1c) == 0) {
        FUN_1097c3110(1,*(undefined8 *)(param_1 + 0x170),0,*(undefined8 *)(param_2 + 0x170),0,0,0,0,
                      0,*(undefined4 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x19c));
        param_2[0x30] = param_2[0x30] & 0xfb;
        uVar3 = *(undefined8 *)(param_1 + 0x70);
        uVar2 = *(undefined8 *)(param_1 + 0x68);
        uVar5 = *(undefined8 *)(param_1 + 0x80);
        uVar4 = *(undefined8 *)(param_1 + 0x78);
        uVar6 = *(undefined8 *)(param_1 + 0x88);
        *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_1 + 0x90);
        *(undefined8 *)(param_2 + 0x88) = uVar6;
        *(undefined8 *)(param_2 + 0x80) = uVar5;
        *(undefined8 *)(param_2 + 0x78) = uVar4;
        *(undefined8 *)(param_2 + 0x70) = uVar3;
        *(undefined8 *)(param_2 + 0x68) = uVar2;
        uVar3 = *(undefined8 *)(param_1 + 0xa0);
        uVar2 = *(undefined8 *)(param_1 + 0x98);
        uVar5 = *(undefined8 *)(param_1 + 0xb0);
        uVar4 = *(undefined8 *)(param_1 + 0xa8);
        uVar6 = *(undefined8 *)(param_1 + 0xb8);
        *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_1 + 0xc0);
        *(undefined8 *)(param_2 + 0xb8) = uVar6;
        *(undefined8 *)(param_2 + 0xb0) = uVar5;
        *(undefined8 *)(param_2 + 0xa8) = uVar4;
        *(undefined8 *)(param_2 + 0xa0) = uVar3;
        *(undefined8 *)(param_2 + 0x98) = uVar2;
      }
    }
    return param_2;
  }
  uVar1 = *(int *)(param_1 + 0x1c) - 6;
  if (0x21 < uVar1) {
    return &DAT_10dffecb8;
  }
  return (&PTR_DAT_110b11b70)[uVar1];
}



/* Entry: 1097d8da0; end: 1097d8ea7;  */

undefined4 FUN_1097d8da0(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  
  if ((*(uint *)(param_1 + 0x14) >> 0xd & 1) == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x30) >> 2 & 1) != 0) {
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x18c);
  if ((*(uint *)(param_1 + 0x14) >> 0xc & 1) == 0) {
    if (iVar4 == 3) {
      return 1;
    }
    if (iVar4 == 2) {
      if ((int)*(uint *)(param_1 + 0x19c) < 1) {
        return 1;
      }
      uVar2 = 0;
      do {
        if (0 < *(int *)(param_1 + 0x198)) {
          pcVar3 = (char *)(*(long *)(param_1 + 400) + uVar2 * *(long *)(param_1 + 0x1a0));
          iVar4 = *(int *)(param_1 + 0x198);
          do {
            if (*pcVar3 != -1 && *pcVar3 != '\0') {
              return 2;
            }
            iVar4 = iVar4 + -1;
            pcVar3 = pcVar3 + 1;
          } while (iVar4 != 0);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 != *(uint *)(param_1 + 0x19c));
      return 1;
    }
  }
  else {
    if (iVar4 == 4) {
      return 0;
    }
    if (iVar4 == 0) {
      if ((int)*(uint *)(param_1 + 0x19c) < 1) {
        return 0;
      }
      uVar2 = 0;
      uVar1 = 0;
      do {
        if (0 < *(int *)(param_1 + 0x198)) {
          puVar5 = (uint *)(*(long *)(param_1 + 400) + uVar2 * *(long *)(param_1 + 0x1a0));
          iVar4 = *(int *)(param_1 + 0x198);
          do {
            if (*puVar5 + 0x1000000 >> 0x19 != 0) {
              return 2;
            }
            if (*puVar5 >> 0x18 == 0) {
              uVar1 = 1;
            }
            iVar4 = iVar4 + -1;
            puVar5 = puVar5 + 1;
          } while (iVar4 != 0);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 != *(uint *)(param_1 + 0x19c));
      return uVar1;
    }
  }
  return 2;
}



/* Entry: 1097d8ea8; end: 1097d922b;  */

uint * FUN_1097d8ea8(uint *param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  uint *puVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  uint *puVar23;
  int iVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  uint uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  
  uVar2 = *param_1;
  iVar3 = *param_2;
  uVar16 = uVar2 - iVar3;
  puVar9 = (uint *)(ulong)uVar16;
  if ((((uVar16 == 0) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return (uint *)0x0;
  }
  uVar4 = param_1[2];
  uVar14 = uVar2;
  if ((int)uVar4 <= (int)uVar2) {
    uVar14 = uVar4;
  }
  uVar26 = uVar2;
  if ((int)uVar2 <= (int)uVar4) {
    uVar26 = uVar4;
  }
  iVar5 = param_2[2];
  iVar20 = iVar3;
  if (iVar5 <= iVar3) {
    iVar20 = iVar5;
  }
  iVar24 = iVar3;
  if (iVar3 <= iVar5) {
    iVar24 = iVar5;
  }
  uVar14 = (uint)(iVar24 < (int)uVar14);
  if ((int)uVar26 < iVar20) {
    uVar14 = 0xffffffff;
  }
  if (uVar14 != 0) {
    return (uint *)(ulong)uVar14;
  }
  uVar14 = param_1[1];
  uVar26 = (uint)param_3;
  if (uVar26 == uVar14) {
    uVar15 = 3;
    uVar22 = uVar2;
  }
  else {
    uVar15 = 2;
    if (param_1[3] == uVar26) {
      uVar15 = 3;
      uVar22 = uVar4;
    }
    else {
      uVar22 = 0;
    }
  }
  uVar6 = param_2[1];
  iVar20 = iVar3;
  if ((uVar26 != uVar6) && (iVar20 = iVar5, param_2[3] != uVar26)) {
    uVar15 = uVar15 & 1;
    iVar20 = 0;
  }
  if (uVar15 == 1) {
    piVar10 = param_2;
    FUN_1097d922c(param_2,param_3);
    puVar23 = (uint *)(ulong)(uint)-(int)piVar10;
  }
  else if (uVar15 == 2) {
    puVar23 = param_1;
    FUN_1097d922c(param_1,param_3,iVar20);
  }
  else if (uVar15 == 3) {
    puVar23 = (uint *)(ulong)(uVar22 - iVar20);
  }
  else {
    uVar21 = (long)(int)param_1[3] - (long)(int)uVar14;
    uVar22 = uVar4 - uVar2;
    puVar23 = (uint *)(ulong)uVar22;
    uVar15 = 5;
    if (uVar22 != 0) {
      uVar15 = 7;
    }
    uVar25 = (long)param_2[3] - (long)(int)uVar6;
    uVar27 = iVar5 - iVar3;
    uVar1 = uVar15 & 3;
    if (uVar27 != 0) {
      uVar1 = uVar15;
    }
    uVar15 = uVar1 & 6;
    if (uVar16 != 0) {
      uVar15 = uVar1;
    }
    iVar20 = (int)uVar21;
    if (uVar15 < 4) {
      if (uVar15 < 2) {
        puVar23 = puVar9;
        if (uVar15 == 0) goto LAB_1097d9008;
      }
      else if ((uVar15 != 2) && (puVar23 = puVar9, -1 < (int)(uVar16 ^ -uVar22))) {
        lVar17 = (long)iVar20 * (long)(int)uVar16;
        lVar18 = (long)(int)(uVar14 - uVar26) * (long)(int)uVar22;
LAB_1097d911c:
        bVar7 = SBORROW8(lVar17,lVar18);
        lVar12 = lVar17 - lVar18;
        bVar8 = lVar17 == lVar18;
LAB_1097d9120:
        uVar2 = 1;
        if (lVar12 < 0 != bVar7) {
          uVar2 = 0xffffffff;
        }
        if (!bVar8) {
          return (uint *)(ulong)uVar2;
        }
        goto LAB_1097d9008;
      }
    }
    else {
      iVar24 = (int)uVar25;
      if (uVar15 < 6) {
        if (uVar15 == 4) {
          puVar23 = (uint *)(ulong)-uVar27;
        }
        else {
          puVar23 = puVar9;
          if (-1 < (int)(uVar27 ^ uVar16)) {
            lVar17 = (long)iVar24 * (long)(int)uVar16;
            lVar18 = (long)(int)(uVar26 - uVar6) * (long)(int)uVar27;
            goto LAB_1097d911c;
          }
        }
      }
      else {
        if (uVar15 == 6) {
          if ((int)(uVar27 ^ uVar22) < 0) goto LAB_1097d8fe8;
          uVar11 = uVar25 * (long)(int)uVar22;
          if (uVar14 == uVar6) {
            bVar7 = SBORROW8(uVar11,uVar21 * (long)(int)uVar27);
            lVar12 = uVar11 - uVar21 * (long)(int)uVar27;
            bVar8 = lVar12 == 0;
            goto LAB_1097d9120;
          }
          uVar25 = (ulong)(int)(uVar26 - uVar14);
          FUN_109800ef0();
          uVar21 = (long)iVar20 * (long)(int)uVar27;
          uVar13 = (ulong)(int)(uVar26 - uVar6);
          FUN_109800ef0();
          if (((long)uVar25 < 0) && (-1 < (long)uVar13)) {
            return (uint *)0xffffffff;
          }
          if ((-1 < (long)uVar25) && ((long)uVar13 < 0)) {
            return (uint *)0x1;
          }
          uVar16 = (uint)(uVar21 < uVar11);
          if (uVar11 < uVar21) {
            uVar16 = 0xffffffff;
          }
          bVar7 = uVar13 <= uVar25;
          bVar8 = uVar25 == uVar13;
        }
        else {
          uVar21 = (long)iVar24 * (long)iVar20;
          uVar13 = (ulong)(int)uVar16;
          FUN_109800ef0();
          uVar25 = (long)iVar20 * (long)(int)uVar27;
          lVar12 = (long)(int)(uVar26 - uVar6);
          FUN_109800ef0();
          uVar11 = (long)iVar24 * (long)(int)uVar22;
          lVar17 = (long)(int)(uVar26 - uVar14);
          FUN_109800ef0();
          uVar19 = (lVar12 - lVar17) - (ulong)(uVar25 < uVar11);
          if (((long)uVar13 < 0) && (-1 < (long)uVar19)) {
            return (uint *)0xffffffff;
          }
          if ((-1 < (long)uVar13) && ((long)uVar19 < 0)) {
            return (uint *)0x1;
          }
          uVar16 = (uint)(uVar25 - uVar11 < uVar21);
          if (uVar21 < uVar25 - uVar11) {
            uVar16 = 0xffffffff;
          }
          bVar7 = uVar19 <= uVar13;
          bVar8 = uVar13 == uVar19;
        }
        uVar26 = 1;
        if (!bVar7) {
          uVar26 = 0xffffffff;
        }
        if (!bVar8) {
          uVar16 = uVar26;
        }
        puVar23 = (uint *)(ulong)uVar16;
      }
    }
  }
LAB_1097d8fe8:
  if ((int)puVar23 != 0) {
    return puVar23;
  }
  uVar22 = uVar4 - uVar2;
  uVar21 = (ulong)(param_1[3] - uVar14);
  uVar27 = iVar5 - iVar3;
  uVar25 = (ulong)(param_2[3] - uVar6);
LAB_1097d9008:
  uStack_64 = (undefined4)uVar21;
  uStack_6c = (undefined4)uVar25;
  puVar9 = &uStack_70;
  uStack_70 = uVar27;
  uStack_68 = uVar22;
  FUN_1097f1294(puVar9,&uStack_68);
  return puVar9;
}



/* Entry: 1097d922c; end: 1097d92ef;  */

uint FUN_1097d922c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = *param_1;
  iVar2 = param_1[2];
  if ((iVar1 > param_3 && iVar2 != param_3) && (iVar1 <= param_3 || param_3 <= iVar2)) {
    uVar4 = 1;
  }
  else {
    uVar3 = param_3 - iVar1;
    if ((uVar3 != 0 && iVar1 <= param_3) && iVar2 < param_3) {
      return 0xffffffff;
    }
    uVar4 = iVar2 - iVar1;
    if (uVar4 == 0) {
      return -uVar3;
    }
    if ((param_3 != iVar1) && (-1 < (int)(uVar4 ^ uVar3))) {
      lVar6 = ((long)param_2 - (long)param_1[1]) * (long)(int)uVar4;
      lVar5 = ((long)param_1[3] - (long)param_1[1]) * (long)(int)uVar3;
      uVar4 = (uint)(lVar6 - lVar5 != 0 && lVar5 <= lVar6);
      if (lVar6 < lVar5) {
        uVar4 = 0xffffffff;
      }
      return uVar4;
    }
  }
  return uVar4;
}



/* Entry: 1097d92f0; end: 1097d9533;  */

void FUN_1097d92f0(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  uint *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double adStack_58 [4];
  double adStack_38 [4];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar13 = param_1[1];
  dVar12 = param_1[2];
  if ((dVar12 == 0.0) && (dVar13 == 0.0)) {
    dVar12 = *param_1;
    if (dVar12 != 1.0) {
      dVar8 = dVar12 * *param_2;
      dVar12 = dVar12 * *param_4;
      dVar13 = dVar12;
      if (dVar12 <= dVar8) {
        dVar13 = dVar8;
        dVar8 = dVar12;
      }
      *param_2 = dVar8;
      *param_4 = dVar13;
    }
    if (param_1[4] != 0.0) {
      *param_2 = param_1[4] + *param_2;
      *param_4 = param_1[4] + *param_4;
    }
    dVar12 = param_1[3];
    if (dVar12 != 1.0) {
      dVar8 = dVar12 * *param_3;
      dVar12 = dVar12 * *param_5;
      dVar13 = dVar12;
      if (dVar12 <= dVar8) {
        dVar13 = dVar8;
        dVar8 = dVar12;
      }
      *param_3 = dVar8;
      *param_5 = dVar13;
    }
    if (param_1[5] != 0.0) {
      *param_3 = param_1[5] + *param_3;
      *param_5 = param_1[5] + *param_5;
    }
    if (param_6 == (uint *)0x0) goto LAB_1097d950c;
LAB_1097d94e0:
    uVar6 = 1;
  }
  else {
    dVar14 = *param_2;
    dVar15 = *param_1;
    dVar10 = dVar12 * *param_3;
    adStack_38[3] = param_1[4];
    dVar11 = *param_3 * param_1[3];
    dVar8 = dVar10 + dVar14 * dVar15 + adStack_38[3];
    adStack_58[3] = param_1[5];
    dVar9 = dVar11 + dVar14 * dVar13 + adStack_58[3];
    dVar17 = *param_4;
    adStack_38[1] = adStack_38[3] + dVar10 + dVar17 * dVar15;
    adStack_58[1] = adStack_58[3] + dVar11 + dVar17 * dVar13;
    dVar12 = dVar12 * *param_5;
    dVar10 = param_1[3] * *param_5;
    adStack_38[2] = adStack_38[3] + dVar12 + dVar14 * dVar15;
    adStack_58[2] = adStack_58[3] + dVar10 + dVar14 * dVar13;
    adStack_38[3] = adStack_38[3] + dVar12 + dVar17 * dVar15;
    lVar7 = 8;
    adStack_58[3] = adStack_58[3] + dVar10 + dVar17 * dVar13;
    dVar12 = dVar9;
    dVar13 = dVar9;
    dVar10 = dVar8;
    dVar11 = dVar8;
    do {
      dVar14 = *(double *)((long)adStack_38 + lVar7);
      dVar15 = dVar14;
      if (dVar11 <= dVar14) {
        dVar15 = dVar11;
      }
      if (dVar14 <= dVar10) {
        dVar14 = dVar10;
      }
      dVar17 = *(double *)((long)adStack_58 + lVar7);
      dVar16 = dVar17;
      if (dVar13 <= dVar17) {
        dVar16 = dVar13;
      }
      if (dVar17 <= dVar12) {
        dVar17 = dVar12;
      }
      lVar7 = lVar7 + 8;
      dVar12 = dVar17;
      dVar13 = dVar16;
      dVar10 = dVar14;
      dVar11 = dVar15;
    } while (lVar7 != 0x20);
    *param_2 = dVar15;
    *param_3 = dVar16;
    *param_4 = dVar14;
    *param_5 = dVar17;
    if (param_6 == (uint *)0x0) goto LAB_1097d950c;
    if ((((adStack_38[1] == dVar8) && (adStack_58[1] == adStack_58[3])) &&
        (adStack_38[2] == adStack_38[3])) && (adStack_58[2] == dVar9)) goto LAB_1097d94e0;
    uVar6 = 0;
    if (adStack_38[2] == dVar8) {
      uVar6 = (uint)(adStack_58[2] == adStack_58[3]);
    }
    uVar1 = 0;
    if (adStack_58[1] == dVar9) {
      uVar1 = uVar6;
    }
    uVar6 = 0;
    if (adStack_38[1] == adStack_38[3]) {
      uVar6 = uVar1;
    }
  }
  *param_6 = uVar6;
LAB_1097d950c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    iVar2 = *(int *)param_2;
    iVar4 = *(int *)((long)param_2 + 4);
    iVar3 = *(int *)(param_2 + 1);
    iVar5 = *(int *)((long)param_2 + 0xc);
    FUN_1097d92f0();
    param_2[1] = (double)CONCAT44(SUB84((double)iVar5 / 256.0 + 26388279066624.0,0),
                                  SUB84((double)iVar3 / 256.0 + 26388279066624.0,0));
    *param_2 = (double)CONCAT44(SUB84((double)iVar4 / 256.0 + 26388279066624.0,0),
                                SUB84((double)iVar2 / 256.0 + 26388279066624.0,0));
    return;
  }
  return;
}



/* Entry: 1097d9534; end: 1097d95c7;  */

void FUN_1097d9534(undefined8 param_1,int *param_2,undefined8 param_3)

{
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  dStack_38 = (double)*param_2 / 256.0;
  dStack_40 = (double)param_2[1] / 256.0;
  dStack_48 = (double)param_2[2] / 256.0;
  dStack_50 = (double)param_2[3] / 256.0;
  FUN_1097d92f0(param_1,&dStack_38,&dStack_40,&dStack_48,&dStack_50,param_3);
  *(ulong *)(param_2 + 2) =
       CONCAT44(SUB84(dStack_50 + 26388279066624.0,0),SUB84(dStack_48 + 26388279066624.0,0));
  *(ulong *)param_2 =
       CONCAT44(SUB84(dStack_40 + 26388279066624.0,0),SUB84(dStack_38 + 26388279066624.0,0));
  return;
}



/* Entry: 1097d95c8; end: 1097d96d3;  */

undefined8 FUN_1097d95c8(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  dVar3 = param_1[1];
  dVar1 = param_1[2];
  if ((dVar1 != 0.0) || (dVar3 != 0.0)) {
    dVar4 = *param_1;
    dVar2 = param_1[3];
    dVar5 = -(dVar3 * dVar1) + dVar2 * dVar4;
    if (dVar5 == 0.0) {
      return 5;
    }
    if (0.0 <= dVar5 * dVar5) {
      dVar5 = 1.0 / dVar5;
      param_1[1] = -dVar3 * dVar5;
      *param_1 = dVar2 * dVar5;
      param_1[3] = dVar4 * dVar5;
      param_1[2] = -dVar1 * dVar5;
      auVar6._0_8_ = param_1[4] * -dVar2;
      auVar6._8_8_ = param_1[5] * -dVar4;
      auVar6 = NEON_ext(auVar6,auVar6,8,1);
      auVar7._0_8_ = auVar6._0_8_ + param_1[4] * dVar3;
      auVar7._8_8_ = auVar6._8_8_ + param_1[5] * dVar1;
      auVar6 = NEON_ext(auVar7,auVar7,8,1);
      param_1[5] = auVar6._8_8_ * dVar5;
      param_1[4] = auVar6._0_8_ * dVar5;
      return 0;
    }
    return 5;
  }
  dVar3 = param_1[4];
  dVar1 = param_1[5];
  param_1[5] = -dVar1;
  param_1[4] = -dVar3;
  dVar2 = *param_1;
  if (dVar2 != 1.0) {
    if (dVar2 == 0.0) {
      return 5;
    }
    *param_1 = 1.0 / dVar2;
    param_1[4] = (1.0 / dVar2) * -dVar3;
  }
  dVar3 = param_1[3];
  if (dVar3 != 1.0) {
    if (dVar3 == 0.0) {
      return 5;
    }
    param_1[3] = 1.0 / dVar3;
    param_1[5] = (1.0 / dVar3) * -dVar1;
    return 0;
  }
  return 0;
}



/* Entry: 1097d96d4; end: 1097d979b;  */

undefined8 FUN_1097d96d4(double *param_1,double *param_2,double *param_3,int param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = -(param_1[1] * param_1[2]) + param_1[3] * *param_1;
  if (0.0 <= dVar5 * dVar5) {
    if (dVar5 == 0.0) {
      uVar1 = 0;
      *param_3 = 0.0;
      *param_2 = 0.0;
    }
    else {
      dVar4 = 1.0;
      if (param_4 == 0) {
        dVar4 = 0.0;
      }
      dVar3 = 1.0;
      if (param_4 != 0) {
        dVar3 = 0.0;
      }
      dVar2 = param_1[2] * dVar3 + dVar4 * *param_1;
      _hypot(dVar2,param_1[3] * dVar3 + dVar4 * param_1[1]);
      uVar1 = 0;
      dVar4 = -dVar5;
      if (0.0 <= dVar5) {
        dVar4 = dVar5;
      }
      dVar4 = dVar4 / dVar2;
      if (dVar2 == 0.0) {
        dVar4 = 0.0;
      }
      dVar5 = dVar4;
      if (param_4 == 0) {
        dVar5 = dVar2;
        dVar2 = dVar4;
      }
      *param_2 = dVar2;
      *param_3 = dVar5;
    }
  }
  else {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 1097d979c; end: 1097d9893;  */

undefined8 FUN_1097d979c(double *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((((*param_1 == 1.0) && (param_1[1] == 0.0)) && (param_1[2] == 0.0)) && (param_1[3] == 1.0)) {
    uVar1 = SUB84(param_1[5] + 26388279066624.0,0);
    uVar2 = SUB84(param_1[4] + 26388279066624.0,0);
    if (((uVar2 | uVar1) & 0xff) == 0) {
      if (param_2 != (int *)0x0) {
        *param_2 = (int)uVar2 >> 8;
      }
      if (param_3 != (int *)0x0) {
        *param_3 = (int)uVar1 >> 8;
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 1097d9894; end: 1097d98f7;  */

void FUN_1097d9894(void)

{
  func_0x0001097d9820();
  return;
}



/* Entry: 1097d98f8; end: 1097d996f;  */

double FUN_1097d98f8(double param_1,double *param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  iVar1 = (int)param_2;
  func_0x0001097d9820();
  if (iVar1 == 0) {
    dVar4 = *param_2;
    dVar5 = param_2[1];
    dVar6 = param_2[2];
    dVar7 = param_2[3];
    dVar2 = dVar5 * dVar5 + dVar4 * dVar4;
    dVar8 = dVar7 * dVar7 + dVar6 * dVar6;
    dVar3 = (dVar2 - dVar8) * 0.5;
    _hypot(dVar3,dVar5 * dVar7 + dVar6 * dVar4);
    param_1 = param_1 * SQRT(dVar3 + (dVar2 + dVar8) * 0.5);
  }
  return param_1;
}



/* Entry: 1097d9970; end: 1097d9a57;  */

undefined8 FUN_1097d9970(double *param_1,int param_2,int *param_3,int *param_4)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  if ((((*param_1 != 1.0) || (param_1[1] != 0.0)) || (param_1[2] != 0.0)) || (param_1[3] != 1.0)) {
    return 0;
  }
  if ((param_1[4] != 0.0) || (param_1[5] != 0.0)) {
    dVar2 = param_1[4] + (double)*param_3;
    dVar3 = param_1[5] + (double)*param_4;
    if ((param_2 == 3) || (param_2 == 0)) {
      dVar2 = (double)(long)(dVar2 + -0.5);
      dVar3 = (double)(long)(dVar3 + -0.5);
    }
    else {
      bVar1 = false;
      if ((dVar2 == (double)(long)dVar2) &&
         (bVar1 = false, !NAN(dVar3) && !NAN((double)(long)dVar3))) {
        bVar1 = dVar3 == (double)(long)dVar3;
      }
      if (!bVar1) {
        return 0;
      }
    }
    if (32767.0 < ABS(dVar2)) {
      return 0;
    }
    if (32767.0 < ABS(dVar3)) {
      return 0;
    }
    *param_3 = (int)(dVar2 + 0.5);
    *param_4 = (int)(dVar3 + 0.5);
  }
  return 1;
}



/* Entry: 1097d9a58; end: 1097d9e2f;  */

void FUN_1097d9a58(double param_1,double param_2,double *param_3,undefined8 param_4,
                  undefined8 *param_5,int *param_6,int *param_7)

{
  uint uVar1;
  bool bVar2;
  double *pdVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  int iStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  
  pdVar3 = param_3;
  FUN_1097d9970(param_3,param_4,param_6,param_7);
  if ((int)pdVar3 == 0) {
    dVar22 = param_3[1];
    dVar21 = *param_3;
    dVar16 = param_3[3];
    dVar18 = param_3[2];
    dVar8 = dVar21 + dVar18 * 0.0;
    dVar10 = dVar22 + dVar16 * 0.0;
    dVar19 = dVar18 + dVar21 * 0.0;
    dVar20 = dVar16 + dVar22 * 0.0;
    dVar21 = dVar18 * (double)*param_7 + dVar21 * (double)*param_6 + param_3[4];
    dVar22 = dVar16 * (double)*param_7 + dVar22 * (double)*param_6 + param_3[5];
    if ((dVar21 == 0.0) && (dVar22 == 0.0)) {
      *param_6 = 0;
      *param_7 = 0;
      dVar18 = dVar10;
      dVar16 = dVar8;
    }
    else {
      dVar18 = ABS(dVar21);
      if (ABS(dVar21) <= ABS(dVar22)) {
        dVar18 = ABS(dVar22);
      }
      dVar13 = -1.0;
      dVar16 = dVar22;
      dVar17 = dVar21;
      iVar6 = -1;
      do {
        iVar5 = -3;
        dVar11 = -1.0;
        dVar12 = dVar18;
        dVar14 = dVar16;
        dVar9 = dVar17;
        do {
          dVar15 = -dVar19 * dVar10 + (dVar20 + dVar11) * (dVar8 + dVar13);
          dVar18 = dVar12;
          dVar16 = dVar14;
          dVar17 = dVar9;
          if (2.220446049250313e-16 <= ABS(dVar15)) {
            dVar15 = 1.0 / dVar15;
            dVar17 = ((dVar20 + dVar11) * -dVar21 + dVar19 * dVar22) * dVar15;
            dVar16 = ((dVar8 + dVar13) * -dVar22 + dVar10 * dVar21) * dVar15;
            dVar18 = ABS(dVar17);
            dVar15 = ABS(dVar16);
            if (dVar18 <= dVar15) {
              dVar18 = dVar15;
            }
            if (dVar12 <= dVar18) {
              dVar18 = dVar12;
              dVar16 = dVar14;
              dVar17 = dVar9;
            }
          }
          dVar11 = dVar11 + 2.0;
          iVar5 = iVar5 + 2;
          dVar12 = dVar18;
          dVar14 = dVar16;
          dVar9 = dVar17;
        } while (iVar5 < 0);
        dVar13 = dVar13 + 2.0;
        bVar2 = iVar6 < 0;
        iVar6 = iVar6 + 2;
      } while (bVar2);
      dVar17 = (double)(long)dVar17;
      dVar13 = (double)(long)dVar16;
      *param_6 = (int)-dVar17;
      *param_7 = (int)-dVar13;
      dVar16 = dVar8 + dVar19 * 0.0;
      dVar18 = dVar10 + dVar20 * 0.0;
      dVar12 = dVar19 * dVar13;
      dVar13 = dVar20 * dVar13;
      dVar19 = dVar19 + dVar8 * 0.0;
      dVar20 = dVar20 + dVar10 * 0.0;
      dVar21 = dVar21 + dVar12 + dVar8 * dVar17;
      dVar22 = dVar22 + dVar13 + dVar10 * dVar17;
    }
    *(int *)param_5 = SUB84(dVar16 + 103079215104.0,0);
    *(int *)((long)param_5 + 4) = SUB84(dVar19 + 103079215104.0,0);
    dVar8 = dVar21 + 103079215104.0;
    *(int *)(param_5 + 1) = SUB84(dVar8,0);
    *(int *)((long)param_5 + 0xc) = SUB84(dVar18 + 103079215104.0,0);
    dVar10 = dVar22 + 103079215104.0;
    *(int *)(param_5 + 2) = SUB84(dVar20 + 103079215104.0,0);
    *(int *)((long)param_5 + 0x14) = SUB84(dVar10,0);
    param_5[3] = 0;
    *(undefined4 *)(param_5 + 4) = 0x10000;
    iVar6 = (int)&dStack_100;
    dStack_100 = dVar16;
    dStack_f8 = dVar18;
    dStack_f0 = dVar19;
    dStack_e8 = dVar20;
    dStack_e0 = dVar21;
    dStack_d8 = dVar22;
    func_0x0001097d9820();
    if ((((iVar6 == 0) && (ABS(dVar16) <= 32767.0)) && (ABS(dVar19) <= 32767.0)) &&
       (((ABS(dVar21) <= 32767.0 && (ABS(dVar18) <= 32767.0)) &&
        ((ABS(dVar20) <= 32767.0 && (ABS(dVar22) <= 32767.0)))))) {
      dStack_b8 = dStack_f8;
      dStack_c0 = dStack_100;
      dStack_a8 = dStack_e8;
      dStack_b0 = dStack_f0;
      dStack_98 = dStack_d8;
      dStack_a0 = dStack_e0;
      iVar6 = (int)&dStack_c0;
      FUN_1097d95c8();
      dVar14 = dStack_98;
      dVar12 = dStack_a0;
      dVar13 = dStack_a8;
      dVar17 = dStack_b0;
      dVar22 = dStack_b8;
      dVar21 = dStack_c0;
      if (iVar6 == 0) {
        iVar6 = -4;
        do {
          uStack_c8 = 0x10000;
          puVar4 = param_5;
          iStack_d0 = SUB84(param_1 + 103079215104.0,0);
          iStack_cc = SUB84(param_2 + 103079215104.0,0);
          FUN_1097bf628(param_5,&iStack_d0);
          if ((int)puVar4 == 0) {
            return;
          }
          dVar11 = (dVar12 + dVar17 * ((double)iStack_cc / 65536.0) +
                             ((double)iStack_d0 / 65536.0) * dVar21) - param_1;
          dVar9 = (dVar14 + dVar13 * ((double)iStack_cc / 65536.0) +
                            ((double)iStack_d0 / 65536.0) * dVar22) - param_2;
          iVar5 = SUB84(dVar19 * dVar9 + dVar11 * dVar16 + 103079215104.0,0);
          uVar1 = SUB84(dVar8,0) - iVar5;
          dVar8 = (double)(ulong)uVar1;
          *(uint *)(param_5 + 1) = uVar1;
          iVar7 = SUB84(dVar20 * dVar9 + dVar11 * dVar18 + 103079215104.0,0);
          uVar1 = SUB84(dVar10,0) - iVar7;
          dVar10 = (double)(ulong)uVar1;
          *(uint *)((long)param_5 + 0x14) = uVar1;
          bVar2 = iVar6 != 0;
          iVar6 = iVar6 + 1;
        } while ((iVar5 != 0 || iVar7 != 0) && bVar2);
      }
    }
  }
  else {
    *(undefined4 *)(param_5 + 4) = 0x10000;
    param_5[1] = 0;
    *param_5 = 0x10000;
    param_5[3] = 0;
    param_5[2] = 0x10000;
  }
  return;
}



/* Entry: 1097d9e30; end: 1097d9fbb;  */

void FUN_1097d9e30(double param_1,double param_2,long param_3,double *param_4,double *param_5,
                  double *param_6,double *param_7,double *param_8)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  double *pdVar12;
  long lVar13;
  double *pdVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double adStack_600 [10];
  double *pdStack_5b0;
  undefined4 uStack_5a4;
  double adStack_5a0 [5];
  double dStack_578;
  double dStack_570;
  double dStack_568;
  double adStack_560 [8];
  double adStack_520 [32];
  double adStack_420 [12];
  double adStack_3c0 [32];
  long lStack_2c0;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double adStack_198 [32];
  long lStack_98;
  
  pdVar4 = &dStack_250;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_250 = *(double *)(param_3 + 0x48);
  dStack_248 = *(double *)(param_3 + 0x50);
  dStack_240 = *(double *)(param_3 + 0x58);
  dStack_238 = *(double *)(param_3 + 0x60);
  dStack_230 = *(double *)(param_3 + 0x68);
  dStack_228 = *(double *)(param_3 + 0x70);
  pdVar5 = param_4;
  pdVar6 = param_5;
  pdVar14 = param_6;
  pdVar8 = param_7;
  FUN_1097d95c8();
  dVar27 = dStack_228;
  dVar23 = dStack_230;
  dVar29 = dStack_238;
  dVar20 = dStack_240;
  dVar17 = dStack_248;
  dVar26 = dStack_250;
  uStack_5a4 = SUB84(pdVar14,0);
  iVar1 = *(int *)(param_3 + 0x84);
  if (iVar1 != 0) {
    iVar15 = 0;
    pdVar14 = *(double **)(param_3 + 0x90);
    do {
      lVar11 = 0;
      pdVar8 = adStack_198;
      pdVar4 = pdVar14;
      do {
        lVar13 = 4;
        pdVar5 = pdVar8;
        pdVar6 = pdVar4;
        do {
          dVar16 = *pdVar6;
          pdVar5[1] = pdVar6[1];
          *pdVar5 = dVar16;
          dVar16 = *pdVar5;
          *pdVar5 = param_1 + dVar20 * pdVar5[1] + dVar16 * dVar26 + dVar23;
          pdVar5[1] = param_2 + pdVar5[1] * dVar29 + dVar16 * dVar17 + dVar27;
          lVar13 = lVar13 + -1;
          pdVar5 = pdVar5 + 2;
          pdVar6 = pdVar6 + 2;
        } while (lVar13 != 0);
        lVar11 = lVar11 + 1;
        pdVar4 = pdVar4 + 8;
        pdVar8 = pdVar8 + 8;
      } while (lVar11 != 4);
      dStack_220 = pdVar14[0x20];
      dStack_218 = pdVar14[0x21];
      dStack_210 = pdVar14[0x22];
      dStack_208 = pdVar14[0x23];
      dStack_200 = pdVar14[0x2f];
      dStack_1f8 = pdVar14[0x30];
      dStack_1f0 = pdVar14[0x31];
      dStack_1e8 = pdVar14[0x32];
      dStack_1e0 = pdVar14[0x25];
      dStack_1d8 = pdVar14[0x26];
      dStack_1d0 = pdVar14[0x27];
      dStack_1c8 = pdVar14[0x28];
      dStack_1c0 = pdVar14[0x2a];
      dStack_1b8 = pdVar14[0x2b];
      dStack_1b0 = pdVar14[0x2c];
      dStack_1a8 = pdVar14[0x2d];
      pdVar8 = adStack_198;
      param_8 = &dStack_220;
      pdVar4 = param_4;
      pdVar5 = param_5;
      pdVar6 = param_6;
      pdVar7 = param_7;
      FUN_1097d9fbc();
      uStack_5a4 = SUB84(pdVar7,0);
      pdVar14 = pdVar14 + 0x34;
      iVar15 = iVar15 + 1;
    } while (iVar15 != iVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = 0;
  lStack_2c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar14 = pdVar8 + 1;
  dVar17 = *pdVar14;
  dVar26 = dVar17;
  do {
    lVar13 = 0;
    do {
      dVar20 = *(double *)((long)pdVar14 + lVar13);
      if (dVar20 <= dVar26) {
        dVar26 = dVar20;
      }
      if (dVar17 <= dVar20) {
        dVar17 = dVar20;
      }
      lVar13 = lVar13 + 0x10;
    } while (lVar13 != 0x40);
    lVar11 = lVar11 + 1;
    pdVar14 = pdVar14 + 8;
  } while (lVar11 != 4);
  uVar9 = 0;
  if (0.0 < dVar17) {
    uVar9 = (uint)(dVar26 < (double)(int)pdVar6);
  }
  bVar2 = true;
  bVar3 = false;
  if (dVar17 <= (double)(int)pdVar6) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(dVar26)) {
      bVar2 = dVar26 < 0.0;
      bVar3 = false;
    }
  }
  if (bVar2 == bVar3) {
    uVar9 = 0xffffffff;
  }
  pdVar14 = pdVar5;
  pdVar7 = pdVar6;
  pdStack_5b0 = pdVar4;
  if (uVar9 != 0) {
    lVar11 = 0;
    dVar17 = *pdVar8;
    pdVar12 = pdVar8;
    dVar26 = dVar17;
    do {
      lVar13 = 0;
      do {
        dVar20 = *(double *)((long)pdVar12 + lVar13);
        if (dVar20 <= dVar26) {
          dVar26 = dVar20;
        }
        if (dVar17 <= dVar20) {
          dVar17 = dVar20;
        }
        lVar13 = lVar13 + 0x10;
      } while (lVar13 != 0x40);
      lVar11 = lVar11 + 1;
      pdVar12 = pdVar12 + 8;
    } while (lVar11 != 4);
    uVar10 = 0;
    if (0.0 < dVar17) {
      uVar10 = (uint)(dVar26 < (double)(int)pdVar5);
    }
    dVar20 = 0.0;
    bVar2 = true;
    bVar3 = false;
    if (dVar17 <= (double)(int)pdVar5) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar26)) {
        bVar2 = dVar26 < 0.0;
        bVar3 = false;
      }
    }
    if (bVar2 == bVar3) {
      uVar10 = 0xffffffff;
    }
    if ((uVar10 & uVar9) != 0) {
      pdVar4 = pdVar8 + 4;
      lVar11 = 4;
      do {
        dVar26 = pdVar4[-4] - pdVar4[-2];
        dVar17 = pdVar4[-3] - pdVar4[-1];
        dVar29 = *pdVar4 - pdVar4[2];
        dVar26 = dVar17 * dVar17 + dVar26 * dVar26;
        dVar17 = pdVar4[1] - pdVar4[3];
        dVar29 = dVar17 * dVar17 + dVar29 * dVar29;
        dVar17 = pdVar4[-4] - *pdVar4;
        if (dVar26 <= dVar29) {
          dVar26 = dVar29;
        }
        dVar29 = pdVar4[-3] - pdVar4[1];
        dVar17 = (dVar29 * dVar29 + dVar17 * dVar17) * 0.25;
        if (dVar26 <= dVar17) {
          dVar26 = dVar17;
        }
        dVar17 = pdVar4[-2] - pdVar4[2];
        dVar29 = pdVar4[-1] - pdVar4[3];
        dVar17 = (dVar29 * dVar29 + dVar17 * dVar17) * 0.25;
        if (dVar26 <= dVar17) {
          dVar26 = dVar17;
        }
        if (dVar20 <= dVar26 * 18.0) {
          dVar20 = dVar26 * 18.0;
        }
        pdVar4 = pdVar4 + 8;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      dVar26 = 65536.0;
      if ((uVar10 & uVar9) != 0xffffffff) {
        dVar26 = 4096.0;
      }
      if (dVar26 <= dVar20) {
        lVar11 = 0;
        do {
          FUN_1097da510((long)pdVar8 + lVar11,(long)adStack_3c0 + lVar11,(long)adStack_520 + lVar11)
          ;
          lVar11 = lVar11 + 0x40;
        } while (lVar11 != 0x100);
        lVar11 = 0;
        adStack_5a0[1] = param_8[1];
        adStack_5a0[0] = *param_8;
        adStack_5a0[3] = param_8[3];
        adStack_5a0[2] = param_8[2];
        adStack_5a0[4] = param_8[4];
        dStack_578 = param_8[5];
        dStack_570 = param_8[6];
        dStack_568 = param_8[7];
        auVar18 = NEON_fmov(0x3fe0000000000000,8);
        do {
          pdVar8 = (double *)((long)param_8 + lVar11 + 0x40);
          dVar26 = pdVar8[-8];
          dVar17 = pdVar8[-4];
          dVar20 = pdVar8[-3];
          dVar29 = *pdVar8;
          *(double *)((long)adStack_560 + lVar11 + 8) = (pdVar8[-7] + pdVar8[1]) * auVar18._8_8_;
          *(double *)((long)adStack_560 + lVar11) = (dVar26 + dVar29) * auVar18._0_8_;
          dVar26 = pdVar8[4];
          *(double *)((long)adStack_560 + lVar11 + 0x28) = (dVar20 + pdVar8[5]) * auVar18._8_8_;
          *(double *)((long)adStack_560 + lVar11 + 0x20) = (dVar17 + dVar26) * auVar18._0_8_;
          lVar11 = lVar11 + 0x10;
        } while (lVar11 != 0x20);
        FUN_1097d9fbc(pdStack_5b0,pdVar5,pdVar6,uStack_5a4,adStack_3c0,adStack_5a0);
        lVar11 = 0x60;
        pdVar8 = param_8 + 0xc;
        do {
          *(undefined8 *)((long)adStack_600 + lVar11 + 8) =
               *(undefined8 *)((long)adStack_600 + lVar11 + 0x48);
          *(undefined8 *)((long)adStack_600 + lVar11) =
               *(undefined8 *)((long)adStack_600 + lVar11 + 0x40);
          dVar26 = *(double *)((long)adStack_5a0 + lVar11);
          *(undefined8 *)((long)adStack_600 + lVar11 + 0x28) =
               *(undefined8 *)((long)adStack_5a0 + lVar11 + 8);
          *(double *)((long)adStack_600 + lVar11 + 0x20) = dVar26;
          dVar26 = pdVar8[-4];
          *(double *)((long)adStack_600 + lVar11 + 0x48) = pdVar8[-3];
          *(double *)((long)adStack_600 + lVar11 + 0x40) = dVar26;
          dVar26 = *pdVar8;
          *(double *)((long)adStack_5a0 + lVar11 + 8) = pdVar8[1];
          *(double *)((long)adStack_5a0 + lVar11) = dVar26;
          lVar11 = lVar11 + 0x10;
          pdVar8 = pdVar8 + 2;
        } while (lVar11 != 0x80);
        pdVar4 = pdStack_5b0;
        FUN_1097d9fbc();
        pdVar14 = pdVar5;
        pdVar7 = pdVar6;
      }
      else {
        _frexp(adStack_3c0);
        lVar11 = 0;
        auVar18 = NEON_fmov(0xc000000000000000,8);
        uVar9 = adStack_3c0[0]._0_4_ + 1 >> 1;
        auVar19 = NEON_fmov(0x4018000000000000,8);
        auVar21 = NEON_fmov(0xc008000000000000,8);
        auVar22 = NEON_fmov(0x4008000000000000,8);
        auVar24 = NEON_fmov(0x3fc0000000000000,8);
        auVar25 = NEON_fmov(0x3fd0000000000000,8);
        do {
          pdVar4 = pdVar8 + lVar11 * 8;
          dVar27 = pdVar4[1];
          dVar23 = *pdVar4;
          dVar29 = pdVar4[7];
          dVar20 = pdVar4[6];
          dVar26 = dVar20 - dVar23;
          dVar17 = dVar29 - dVar27;
          dVar16 = (pdVar4[2] + dVar20 + auVar18._0_8_ * pdVar4[4]) * auVar19._0_8_;
          dVar28 = (pdVar4[3] + dVar29 + auVar18._8_8_ * pdVar4[5]) * auVar19._8_8_;
          dVar20 = ((dVar20 + auVar21._0_8_ * pdVar4[4] + auVar22._0_8_ * pdVar4[2]) - dVar23) *
                   auVar19._0_8_;
          dVar29 = ((dVar29 + auVar21._8_8_ * pdVar4[5] + auVar22._8_8_ * pdVar4[3]) - dVar27) *
                   auVar19._8_8_;
          adStack_3c0[lVar11 * 8 + 1] = dVar26;
          adStack_3c0[lVar11 * 8] = dVar23;
          adStack_3c0[lVar11 * 8 + 3] = dVar20;
          adStack_3c0[lVar11 * 8 + 2] = dVar16;
          adStack_3c0[lVar11 * 8 + 5] = dVar17;
          adStack_3c0[lVar11 * 8 + 4] = dVar27;
          adStack_3c0[lVar11 * 8 + 7] = dVar29;
          adStack_3c0[lVar11 * 8 + 6] = dVar28;
          uVar10 = uVar9;
          if (0 < (int)uVar9) {
            do {
              dVar20 = dVar20 * auVar24._0_8_;
              dVar29 = dVar29 * auVar24._8_8_;
              dVar16 = -dVar20 + auVar25._0_8_ * dVar16;
              dVar28 = -dVar29 + auVar25._8_8_ * dVar28;
              dVar26 = (dVar26 - dVar16) * 0.5;
              dVar17 = (dVar17 - dVar28) * 0.5;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
            adStack_3c0[lVar11 * 8 + 2] = dVar16;
            adStack_3c0[lVar11 * 8 + 3] = dVar20;
            adStack_3c0[lVar11 * 8 + 1] = dVar26;
            adStack_3c0[lVar11 * 8 + 7] = dVar29;
            adStack_3c0[lVar11 * 8 + 5] = dVar17;
            adStack_3c0[lVar11 * 8 + 6] = dVar28;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 != 4);
        lVar11 = 0;
        iVar1 = 1 << (ulong)(uVar9 & 0x1f);
        adStack_5a0[1] = param_8[1];
        adStack_5a0[0] = *param_8;
        adStack_5a0[3] = param_8[3];
        adStack_5a0[2] = param_8[2];
        adStack_420[9] = param_8[5];
        adStack_420[8] = param_8[4];
        adStack_420[0xb] = param_8[7];
        adStack_420[10] = param_8[6];
        dVar26 = (double)iVar1;
        do {
          pdVar8 = (double *)((long)param_8 + lVar11);
          dVar17 = *pdVar8;
          dVar20 = pdVar8[4];
          dVar29 = pdVar8[5];
          dVar23 = pdVar8[8];
          *(double *)((long)adStack_420 + lVar11 + 0x28) = (pdVar8[9] - pdVar8[1]) / dVar26;
          *(double *)((long)adStack_420 + lVar11 + 0x20) = (dVar23 - dVar17) / dVar26;
          dVar17 = pdVar8[0xc];
          *(double *)((long)adStack_420 + lVar11 + 8) = (pdVar8[0xd] - dVar29) / dVar26;
          *(double *)((long)adStack_420 + lVar11) = (dVar17 - dVar20) / dVar26;
          lVar11 = lVar11 + 0x10;
        } while (lVar11 != 0x20);
        do {
          lVar11 = 0;
          pdVar8 = adStack_3c0 + 8;
          do {
            dVar26 = *pdVar8;
            dVar17 = pdVar8[-4];
            dVar20 = pdVar8[4];
            *(double *)((long)adStack_520 + lVar11) = pdVar8[-8];
            *(double *)((long)adStack_520 + lVar11 + 8) = dVar17;
            *(double *)((long)adStack_520 + lVar11 + 0x10) = dVar26;
            *(double *)((long)adStack_520 + lVar11 + 0x18) = dVar20;
            lVar11 = lVar11 + 0x20;
            pdVar8 = pdVar8 + 0x10;
          } while (lVar11 != 0x40);
          pdVar4 = pdStack_5b0;
          pdVar14 = pdVar5;
          pdVar7 = pdVar6;
          FUN_1097da5f0();
          lVar11 = 0;
          pdVar8 = adStack_3c0 + 4;
          do {
            dVar26 = pdVar8[-3];
            pdVar8[-3] = pdVar8[-3] + pdVar8[-2];
            pdVar8[-4] = pdVar8[-4] + dVar26;
            pdVar8[-2] = pdVar8[-2] + pdVar8[-1];
            dVar26 = pdVar8[1];
            pdVar8[1] = pdVar8[1] + pdVar8[2];
            *pdVar8 = *pdVar8 + dVar26;
            pdVar8[2] = pdVar8[2] + pdVar8[3];
            *(double *)((long)adStack_5a0 + lVar11) =
                 *(double *)((long)adStack_420 + lVar11 + 0x20) +
                 *(double *)((long)adStack_5a0 + lVar11);
            *(double *)((long)adStack_420 + lVar11 + 0x40) =
                 *(double *)((long)adStack_420 + lVar11) +
                 *(double *)((long)adStack_420 + lVar11 + 0x40);
            lVar11 = lVar11 + 8;
            pdVar8 = pdVar8 + 8;
          } while (lVar11 != 0x20);
          bVar2 = iVar1 != 0;
          iVar1 = iVar1 + -1;
        } while (bVar2);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c0) {
    return;
  }
  ___stack_chk_fail();
  dVar26 = *pdVar4;
  dVar17 = pdVar4[2];
  dVar20 = pdVar4[4];
  dVar29 = pdVar4[6];
  *pdVar14 = dVar26;
  pdVar7[6] = dVar29;
  dVar23 = (dVar17 + dVar20) * 0.5;
  pdVar14[2] = (dVar26 + dVar17) * 0.5;
  pdVar7[4] = (dVar20 + dVar29) * 0.5;
  pdVar14[4] = (dVar23 + pdVar14[2]) * 0.5;
  dVar26 = (dVar23 + pdVar7[4]) * 0.5;
  pdVar7[2] = dVar26;
  dVar26 = (pdVar14[4] + dVar26) * 0.5;
  *pdVar7 = dVar26;
  pdVar14[6] = dVar26;
  dVar26 = pdVar4[1];
  dVar17 = pdVar4[3];
  dVar20 = pdVar4[5];
  dVar29 = pdVar4[7];
  pdVar14[1] = dVar26;
  pdVar7[7] = dVar29;
  dVar23 = (dVar17 + dVar20) * 0.5;
  pdVar14[3] = (dVar26 + dVar17) * 0.5;
  pdVar7[5] = (dVar20 + dVar29) * 0.5;
  pdVar14[5] = (dVar23 + pdVar14[3]) * 0.5;
  dVar26 = (dVar23 + pdVar7[5]) * 0.5;
  pdVar7[3] = dVar26;
  dVar26 = (pdVar14[5] + dVar26) * 0.5;
  pdVar7[1] = dVar26;
  pdVar14[7] = dVar26;
  return;
}



/* Entry: 1097d9fbc; end: 1097da50f;  */

void FUN_1097d9fbc(double *param_1,double *param_2,double *param_3,undefined4 param_4,
                  double *param_5,double *param_6)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  double *pdVar4;
  double *pdVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  double *pdVar9;
  long lVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double adStack_3b0 [10];
  double *pdStack_360;
  undefined4 uStack_354;
  double adStack_350 [5];
  double dStack_328;
  double dStack_320;
  double dStack_318;
  double adStack_310 [8];
  double adStack_2d0 [32];
  double adStack_1d0 [12];
  double adStack_170 [32];
  long lStack_70;
  
  lVar7 = 0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar4 = param_5 + 1;
  dVar11 = *pdVar4;
  dVar20 = dVar11;
  do {
    lVar10 = 0;
    do {
      dVar14 = *(double *)((long)pdVar4 + lVar10);
      if (dVar14 <= dVar20) {
        dVar20 = dVar14;
      }
      if (dVar11 <= dVar14) {
        dVar11 = dVar14;
      }
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != 0x40);
    lVar7 = lVar7 + 1;
    pdVar4 = pdVar4 + 8;
  } while (lVar7 != 4);
  uVar6 = 0;
  if (0.0 < dVar11) {
    uVar6 = (uint)(dVar20 < (double)(int)param_3);
  }
  bVar2 = true;
  bVar3 = false;
  if (dVar11 <= (double)(int)param_3) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(dVar20)) {
      bVar2 = dVar20 < 0.0;
      bVar3 = false;
    }
  }
  if (bVar2 == bVar3) {
    uVar6 = 0xffffffff;
  }
  pdVar4 = param_2;
  pdVar5 = param_3;
  pdStack_360 = param_1;
  uStack_354 = param_4;
  if (uVar6 != 0) {
    lVar7 = 0;
    dVar11 = *param_5;
    pdVar9 = param_5;
    dVar20 = dVar11;
    do {
      lVar10 = 0;
      do {
        dVar14 = *(double *)((long)pdVar9 + lVar10);
        if (dVar14 <= dVar20) {
          dVar20 = dVar14;
        }
        if (dVar11 <= dVar14) {
          dVar11 = dVar14;
        }
        lVar10 = lVar10 + 0x10;
      } while (lVar10 != 0x40);
      lVar7 = lVar7 + 1;
      pdVar9 = pdVar9 + 8;
    } while (lVar7 != 4);
    uVar8 = 0;
    if (0.0 < dVar11) {
      uVar8 = (uint)(dVar20 < (double)(int)param_2);
    }
    dVar14 = 0.0;
    bVar2 = true;
    bVar3 = false;
    if (dVar11 <= (double)(int)param_2) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar20)) {
        bVar2 = dVar20 < 0.0;
        bVar3 = false;
      }
    }
    if (bVar2 == bVar3) {
      uVar8 = 0xffffffff;
    }
    if ((uVar8 & uVar6) != 0) {
      pdVar4 = param_5 + 4;
      lVar7 = 4;
      do {
        dVar20 = pdVar4[-4] - pdVar4[-2];
        dVar11 = pdVar4[-3] - pdVar4[-1];
        dVar24 = *pdVar4 - pdVar4[2];
        dVar20 = dVar11 * dVar11 + dVar20 * dVar20;
        dVar11 = pdVar4[1] - pdVar4[3];
        dVar24 = dVar11 * dVar11 + dVar24 * dVar24;
        dVar11 = pdVar4[-4] - *pdVar4;
        if (dVar20 <= dVar24) {
          dVar20 = dVar24;
        }
        dVar24 = pdVar4[-3] - pdVar4[1];
        dVar11 = (dVar24 * dVar24 + dVar11 * dVar11) * 0.25;
        if (dVar20 <= dVar11) {
          dVar20 = dVar11;
        }
        dVar11 = pdVar4[-2] - pdVar4[2];
        dVar24 = pdVar4[-1] - pdVar4[3];
        dVar11 = (dVar24 * dVar24 + dVar11 * dVar11) * 0.25;
        if (dVar20 <= dVar11) {
          dVar20 = dVar11;
        }
        if (dVar14 <= dVar20 * 18.0) {
          dVar14 = dVar20 * 18.0;
        }
        pdVar4 = pdVar4 + 8;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      dVar20 = 65536.0;
      if ((uVar8 & uVar6) != 0xffffffff) {
        dVar20 = 4096.0;
      }
      if (dVar20 <= dVar14) {
        lVar7 = 0;
        do {
          FUN_1097da510((long)param_5 + lVar7,(long)adStack_170 + lVar7,(long)adStack_2d0 + lVar7);
          lVar7 = lVar7 + 0x40;
        } while (lVar7 != 0x100);
        lVar7 = 0;
        adStack_350[0] = *param_6;
        adStack_350[1] = param_6[1];
        adStack_350[2] = param_6[2];
        adStack_350[3] = param_6[3];
        adStack_350[4] = param_6[4];
        dStack_328 = param_6[5];
        dStack_320 = param_6[6];
        dStack_318 = param_6[7];
        auVar12 = NEON_fmov(0x3fe0000000000000,8);
        do {
          pdVar4 = (double *)((long)param_6 + lVar7 + 0x40);
          dVar20 = pdVar4[-8];
          dVar11 = pdVar4[-4];
          dVar14 = pdVar4[-3];
          dVar24 = *pdVar4;
          *(double *)((long)adStack_310 + lVar7 + 8) = (pdVar4[-7] + pdVar4[1]) * auVar12._8_8_;
          *(double *)((long)adStack_310 + lVar7) = (dVar20 + dVar24) * auVar12._0_8_;
          dVar20 = pdVar4[4];
          *(double *)((long)adStack_310 + lVar7 + 0x28) = (dVar14 + pdVar4[5]) * auVar12._8_8_;
          *(double *)((long)adStack_310 + lVar7 + 0x20) = (dVar11 + dVar20) * auVar12._0_8_;
          lVar7 = lVar7 + 0x10;
        } while (lVar7 != 0x20);
        FUN_1097d9fbc(pdStack_360,param_2,param_3,uStack_354,adStack_170,adStack_350);
        lVar7 = 0x60;
        pdVar4 = param_6 + 0xc;
        do {
          *(undefined8 *)((long)adStack_3b0 + lVar7 + 8) =
               *(undefined8 *)((long)adStack_3b0 + lVar7 + 0x48);
          *(undefined8 *)((long)adStack_3b0 + lVar7) =
               *(undefined8 *)((long)adStack_3b0 + lVar7 + 0x40);
          dVar20 = *(double *)((long)adStack_350 + lVar7);
          *(undefined8 *)((long)adStack_3b0 + lVar7 + 0x28) =
               *(undefined8 *)((long)adStack_350 + lVar7 + 8);
          *(double *)((long)adStack_3b0 + lVar7 + 0x20) = dVar20;
          dVar20 = pdVar4[-4];
          *(double *)((long)adStack_3b0 + lVar7 + 0x48) = pdVar4[-3];
          *(double *)((long)adStack_3b0 + lVar7 + 0x40) = dVar20;
          dVar20 = *pdVar4;
          *(double *)((long)adStack_350 + lVar7 + 8) = pdVar4[1];
          *(double *)((long)adStack_350 + lVar7) = dVar20;
          lVar7 = lVar7 + 0x10;
          pdVar4 = pdVar4 + 2;
        } while (lVar7 != 0x80);
        param_1 = pdStack_360;
        FUN_1097d9fbc();
        pdVar4 = param_2;
        pdVar5 = param_3;
      }
      else {
        _frexp(adStack_170);
        lVar7 = 0;
        auVar12 = NEON_fmov(0xc000000000000000,8);
        uVar6 = adStack_170[0]._0_4_ + 1 >> 1;
        auVar13 = NEON_fmov(0x4018000000000000,8);
        auVar15 = NEON_fmov(0xc008000000000000,8);
        auVar16 = NEON_fmov(0x4008000000000000,8);
        auVar18 = NEON_fmov(0x3fc0000000000000,8);
        auVar19 = NEON_fmov(0x3fd0000000000000,8);
        do {
          pdVar4 = param_5 + lVar7 * 8;
          dVar21 = pdVar4[1];
          dVar17 = *pdVar4;
          dVar24 = pdVar4[7];
          dVar14 = pdVar4[6];
          dVar20 = dVar14 - dVar17;
          dVar11 = dVar24 - dVar21;
          dVar22 = (pdVar4[2] + dVar14 + auVar12._0_8_ * pdVar4[4]) * auVar13._0_8_;
          dVar23 = (pdVar4[3] + dVar24 + auVar12._8_8_ * pdVar4[5]) * auVar13._8_8_;
          dVar14 = ((dVar14 + auVar15._0_8_ * pdVar4[4] + auVar16._0_8_ * pdVar4[2]) - dVar17) *
                   auVar13._0_8_;
          dVar24 = ((dVar24 + auVar15._8_8_ * pdVar4[5] + auVar16._8_8_ * pdVar4[3]) - dVar21) *
                   auVar13._8_8_;
          adStack_170[lVar7 * 8 + 1] = dVar20;
          adStack_170[lVar7 * 8] = dVar17;
          adStack_170[lVar7 * 8 + 3] = dVar14;
          adStack_170[lVar7 * 8 + 2] = dVar22;
          adStack_170[lVar7 * 8 + 5] = dVar11;
          adStack_170[lVar7 * 8 + 4] = dVar21;
          adStack_170[lVar7 * 8 + 7] = dVar24;
          adStack_170[lVar7 * 8 + 6] = dVar23;
          uVar8 = uVar6;
          if (0 < (int)uVar6) {
            do {
              dVar14 = dVar14 * auVar18._0_8_;
              dVar24 = dVar24 * auVar18._8_8_;
              dVar22 = -dVar14 + auVar19._0_8_ * dVar22;
              dVar23 = -dVar24 + auVar19._8_8_ * dVar23;
              dVar20 = (dVar20 - dVar22) * 0.5;
              dVar11 = (dVar11 - dVar23) * 0.5;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
            adStack_170[lVar7 * 8 + 2] = dVar22;
            adStack_170[lVar7 * 8 + 3] = dVar14;
            adStack_170[lVar7 * 8 + 1] = dVar20;
            adStack_170[lVar7 * 8 + 7] = dVar24;
            adStack_170[lVar7 * 8 + 5] = dVar11;
            adStack_170[lVar7 * 8 + 6] = dVar23;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != 4);
        lVar7 = 0;
        iVar1 = 1 << (ulong)(uVar6 & 0x1f);
        adStack_350[1] = param_6[1];
        adStack_350[0] = *param_6;
        adStack_350[3] = param_6[3];
        adStack_350[2] = param_6[2];
        adStack_1d0[9] = param_6[5];
        adStack_1d0[8] = param_6[4];
        adStack_1d0[0xb] = param_6[7];
        adStack_1d0[10] = param_6[6];
        dVar20 = (double)iVar1;
        do {
          pdVar4 = (double *)((long)param_6 + lVar7);
          dVar11 = *pdVar4;
          dVar14 = pdVar4[4];
          dVar24 = pdVar4[5];
          dVar17 = pdVar4[8];
          *(double *)((long)adStack_1d0 + lVar7 + 0x28) = (pdVar4[9] - pdVar4[1]) / dVar20;
          *(double *)((long)adStack_1d0 + lVar7 + 0x20) = (dVar17 - dVar11) / dVar20;
          dVar11 = pdVar4[0xc];
          *(double *)((long)adStack_1d0 + lVar7 + 8) = (pdVar4[0xd] - dVar24) / dVar20;
          *(double *)((long)adStack_1d0 + lVar7) = (dVar11 - dVar14) / dVar20;
          lVar7 = lVar7 + 0x10;
        } while (lVar7 != 0x20);
        do {
          lVar7 = 0;
          pdVar4 = adStack_170 + 8;
          do {
            dVar20 = *pdVar4;
            dVar11 = pdVar4[-4];
            dVar14 = pdVar4[4];
            *(double *)((long)adStack_2d0 + lVar7) = pdVar4[-8];
            *(double *)((long)adStack_2d0 + lVar7 + 8) = dVar11;
            *(double *)((long)adStack_2d0 + lVar7 + 0x10) = dVar20;
            *(double *)((long)adStack_2d0 + lVar7 + 0x18) = dVar14;
            lVar7 = lVar7 + 0x20;
            pdVar4 = pdVar4 + 0x10;
          } while (lVar7 != 0x40);
          param_1 = pdStack_360;
          pdVar4 = param_2;
          pdVar5 = param_3;
          FUN_1097da5f0();
          lVar7 = 0;
          pdVar9 = adStack_170 + 4;
          do {
            dVar20 = pdVar9[-3];
            pdVar9[-3] = pdVar9[-3] + pdVar9[-2];
            pdVar9[-4] = pdVar9[-4] + dVar20;
            pdVar9[-2] = pdVar9[-2] + pdVar9[-1];
            dVar20 = pdVar9[1];
            pdVar9[1] = pdVar9[1] + pdVar9[2];
            *pdVar9 = *pdVar9 + dVar20;
            pdVar9[2] = pdVar9[2] + pdVar9[3];
            *(double *)((long)adStack_350 + lVar7) =
                 *(double *)((long)adStack_1d0 + lVar7 + 0x20) +
                 *(double *)((long)adStack_350 + lVar7);
            *(double *)((long)adStack_1d0 + lVar7 + 0x40) =
                 *(double *)((long)adStack_1d0 + lVar7) +
                 *(double *)((long)adStack_1d0 + lVar7 + 0x40);
            lVar7 = lVar7 + 8;
            pdVar9 = pdVar9 + 8;
          } while (lVar7 != 0x20);
          bVar2 = iVar1 != 0;
          iVar1 = iVar1 + -1;
        } while (bVar2);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  dVar20 = *param_1;
  dVar11 = param_1[2];
  dVar14 = param_1[4];
  dVar24 = param_1[6];
  *pdVar4 = dVar20;
  pdVar5[6] = dVar24;
  dVar17 = (dVar11 + dVar14) * 0.5;
  pdVar4[2] = (dVar20 + dVar11) * 0.5;
  pdVar5[4] = (dVar14 + dVar24) * 0.5;
  pdVar4[4] = (dVar17 + pdVar4[2]) * 0.5;
  dVar20 = (dVar17 + pdVar5[4]) * 0.5;
  pdVar5[2] = dVar20;
  dVar20 = (pdVar4[4] + dVar20) * 0.5;
  *pdVar5 = dVar20;
  pdVar4[6] = dVar20;
  dVar20 = param_1[1];
  dVar11 = param_1[3];
  dVar14 = param_1[5];
  dVar24 = param_1[7];
  pdVar4[1] = dVar20;
  pdVar5[7] = dVar24;
  dVar17 = (dVar11 + dVar14) * 0.5;
  pdVar4[3] = (dVar20 + dVar11) * 0.5;
  pdVar5[5] = (dVar14 + dVar24) * 0.5;
  pdVar4[5] = (dVar17 + pdVar4[3]) * 0.5;
  dVar20 = (dVar17 + pdVar5[5]) * 0.5;
  pdVar5[3] = dVar20;
  dVar20 = (pdVar4[5] + dVar20) * 0.5;
  pdVar5[1] = dVar20;
  pdVar4[7] = dVar20;
  return;
}



/* Entry: 1097da510; end: 1097da5ef;  */

void FUN_1097da510(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = *param_1;
  dVar2 = param_1[2];
  dVar3 = param_1[4];
  dVar4 = param_1[6];
  *param_2 = dVar1;
  param_3[6] = dVar4;
  dVar5 = (dVar2 + dVar3) * 0.5;
  param_2[2] = (dVar1 + dVar2) * 0.5;
  param_3[4] = (dVar3 + dVar4) * 0.5;
  param_2[4] = (dVar5 + param_2[2]) * 0.5;
  dVar1 = (dVar5 + param_3[4]) * 0.5;
  param_3[2] = dVar1;
  dVar1 = (param_2[4] + dVar1) * 0.5;
  *param_3 = dVar1;
  param_2[6] = dVar1;
  dVar1 = param_1[1];
  dVar2 = param_1[3];
  dVar3 = param_1[5];
  dVar4 = param_1[7];
  param_2[1] = dVar1;
  param_3[7] = dVar4;
  dVar5 = (dVar2 + dVar3) * 0.5;
  param_2[3] = (dVar1 + dVar2) * 0.5;
  param_3[5] = (dVar3 + dVar4) * 0.5;
  param_2[5] = (dVar5 + param_2[3]) * 0.5;
  dVar1 = (dVar5 + param_3[5]) * 0.5;
  param_3[3] = dVar1;
  dVar1 = (param_2[5] + dVar1) * 0.5;
  param_3[1] = dVar1;
  param_2[7] = dVar1;
  return;
}



/* Entry: 1097da5f0; end: 1097dab8f;  */

code * FUN_1097da5f0(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    double *param_5,double *param_6,double *param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  char *pcVar14;
  code *pcVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  int iVar19;
  double dVar20;
  int iVar21;
  double dVar22;
  double dVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  undefined8 uVar39;
  ulong uVar40;
  ulong uVar41;
  undefined8 uVar42;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  undefined1 auStack_118 [64];
  ulong auStack_d8 [8];
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar31 = param_5[1];
  lVar10 = 0x18;
  dVar18 = dVar31;
  dVar20 = dVar31;
  do {
    dVar22 = *(double *)((long)param_5 + lVar10);
    if (dVar22 <= dVar18) {
      dVar18 = dVar22;
    }
    if (dVar20 <= dVar22) {
      dVar20 = dVar22;
    }
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0x48);
  iVar17 = (int)param_3;
  dVar22 = (double)iVar17;
  uVar9 = 0;
  if (dVar18 < dVar22) {
    uVar9 = (uint)(0.0 < dVar20);
  }
  bVar4 = false;
  bVar5 = true;
  if (0.0 <= dVar18) {
    bVar4 = false;
    bVar5 = true;
    if (!NAN(dVar20) && !NAN(dVar22)) {
      bVar4 = dVar20 == dVar22;
      bVar5 = dVar22 <= dVar20;
    }
  }
  if (!bVar5 || bVar4) {
    uVar9 = 0xffffffff;
  }
  pcVar6 = param_1;
  if (uVar9 != 0) {
    dVar22 = *param_5;
    lVar10 = 0x10;
    dVar18 = dVar22;
    dVar20 = dVar22;
    do {
      dVar23 = *(double *)((long)param_5 + lVar10);
      if (dVar23 <= dVar18) {
        dVar18 = dVar23;
      }
      if (dVar20 <= dVar23) {
        dVar20 = dVar23;
      }
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != 0x40);
    iVar16 = (int)param_2;
    uVar11 = 0;
    if (0.0 < dVar20) {
      uVar11 = (uint)(dVar18 < (double)iVar16);
    }
    bVar4 = true;
    bVar5 = false;
    if (dVar20 <= (double)iVar16) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(dVar18)) {
        bVar4 = dVar18 < 0.0;
        bVar5 = false;
      }
    }
    if (bVar4 == bVar5) {
      uVar11 = 0xffffffff;
    }
    if ((uVar11 & uVar9) != 0) {
      dVar33 = param_5[2];
      dVar32 = param_5[3];
      dVar18 = (dVar31 - dVar32) * (dVar31 - dVar32) + (dVar22 - dVar33) * (dVar22 - dVar33);
      dVar35 = param_5[4];
      dVar34 = param_5[5];
      dVar23 = param_5[6];
      dVar30 = param_5[7];
      dVar20 = (dVar34 - dVar30) * (dVar34 - dVar30) + (dVar35 - dVar23) * (dVar35 - dVar23);
      if (dVar18 <= dVar20) {
        dVar18 = dVar20;
      }
      dVar20 = ((dVar31 - dVar34) * (dVar31 - dVar34) + (dVar22 - dVar35) * (dVar22 - dVar35)) *
               0.25;
      if (dVar18 <= dVar20) {
        dVar18 = dVar20;
      }
      dVar20 = ((dVar32 - dVar30) * (dVar32 - dVar30) + (dVar33 - dVar23) * (dVar33 - dVar23)) *
               0.25;
      if (dVar18 <= dVar20) {
        dVar18 = dVar20;
      }
      dVar18 = dVar18 * 18.0;
      dVar20 = 65536.0;
      if ((uVar11 & uVar9) != 0xffffffff) {
        dVar20 = 4096.0;
      }
      if (dVar20 <= dVar18) {
        FUN_1097da510(param_5,auStack_d8,auStack_118);
        auVar36 = NEON_fmov(0x3fe0000000000000,8);
        dStack_140 = (*param_6 + *param_7) * auVar36._0_8_;
        dStack_138 = (param_6[1] + param_7[1]) * auVar36._8_8_;
        dStack_130 = (param_6[2] + param_7[2]) * auVar36._0_8_;
        dStack_128 = (param_6[3] + param_7[3]) * auVar36._8_8_;
        FUN_1097da5f0(param_1,param_2,param_3,param_4,auStack_d8,param_6,&dStack_140);
        FUN_1097da5f0(param_1,param_2,param_3,param_4,auStack_118,&dStack_140,param_7);
        pcVar6 = param_1;
      }
      else {
        dVar20 = 1.0;
        if (1.0 <= dVar18) {
          dVar20 = dVar18;
        }
        pcVar6 = (code *)auStack_d8;
        _frexp(dVar20);
        uVar9 = (int)auStack_d8[0] + 1 >> 1;
        dVar18 = dVar23 - dVar22;
        dVar20 = (dVar33 + dVar23 + dVar35 * -2.0) * 6.0;
        dVar38 = ((dVar23 + dVar35 * -3.0 + dVar33 * 3.0) - dVar22) * 6.0;
        dVar33 = dVar30 - dVar31;
        dVar35 = (dVar32 + dVar30 + dVar34 * -2.0) * 6.0;
        dVar32 = ((dVar30 + dVar34 * -3.0 + dVar32 * 3.0) - dVar31) * 6.0;
        uVar11 = uVar9;
        if (0 < (int)uVar9) {
          do {
            dVar38 = dVar38 * 0.125;
            dVar20 = dVar20 * 0.25 - dVar38;
            dVar18 = (dVar18 - dVar20) * 0.5;
            dVar32 = dVar32 * 0.125;
            dVar35 = dVar35 * 0.25 - dVar32;
            dVar33 = (dVar33 - dVar35) * 0.5;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        auVar36 = NEON_fmov(0x3fe0000000000000,8);
        dVar37 = auVar36._8_8_;
        dVar34 = auVar36._0_8_;
        iVar3 = (int)(long)(dVar34 + param_7[1] * 65535.0);
        iVar19 = (int)(long)(dVar37 + param_7[2] * 65535.0);
        uVar11 = (uint)(long)(dVar34 + param_7[3] * 65535.0);
        iVar21 = (int)(long)(dVar37 + *param_7 * 65535.0);
        if (uVar9 != 0x1f) {
          uVar8 = 0;
          uVar13 = 0;
          uVar24 = (uint)(long)(dVar34 + param_6[1] * 65535.0);
          uVar25 = (uint)(long)(dVar37 + param_6[2] * 65535.0);
          iVar26 = iVar3 - uVar24;
          iVar27 = iVar19 - uVar25;
          uVar39 = CONCAT44(-uVar9,-uVar9);
          uVar40 = NEON_ushl(CONCAT44(iVar27,iVar26),uVar39,4);
          uVar42 = NEON_ushl(CONCAT44(-iVar27,-iVar26),uVar39,4);
          uVar40 = uVar40 ^ (uVar40 ^ CONCAT44(-(int)((ulong)uVar42 >> 0x20),-(int)uVar42)) &
                            CONCAT44(-(uint)(iVar27 < 0),-(uint)(iVar26 < 0));
          uVar28 = (uint)(long)(dVar34 + param_6[3] * 65535.0);
          uVar29 = (uint)(long)(dVar37 + *param_6 * 65535.0);
          iVar26 = uVar11 - uVar28;
          iVar27 = iVar21 - uVar29;
          uVar41 = NEON_ushl(CONCAT44(iVar27,iVar26),uVar39,4);
          uVar39 = NEON_ushl(CONCAT44(-iVar27,-iVar26),uVar39,4);
          uVar41 = uVar41 ^ (uVar41 ^ CONCAT44(-(int)((ulong)uVar39 >> 0x20),-(int)uVar39)) &
                            CONCAT44(-(uint)(iVar27 < 0),-(uint)(iVar26 < 0));
          dVar34 = dVar35 * 4096.0 + 103079215104.0;
          dVar33 = dVar33 * 4096.0 + 103079215104.0;
          dVar20 = dVar20 * 4096.0 + 103079215104.0;
          dVar18 = dVar18 * 4096.0 + 103079215104.0;
          pcVar6 = (code *)(ulong)((1 << (ulong)(uVar9 & 0x1f)) + 1);
          param_2 = 0x8000;
          do {
            uVar9 = SUB84(dVar22 + 26388279066624.0,0) + ((int)uVar13 >> 0xf) + (uVar13 >> 0xe & 1);
            iVar26 = (int)uVar9 >> 8;
            uVar1 = SUB84(dVar31 + 26388279066624.0,0) + ((int)uVar8 >> 0xf) + (uVar8 >> 0xe & 1);
            iVar27 = (int)uVar1 >> 8;
            if ((iVar27 < iVar17 && iVar26 < iVar16) && (-1 < (int)(uVar9 | uVar1) >> 8)) {
              uVar9 = uVar28 & 0xffff;
              uVar1 = uVar9 * (uVar29 & 0xffff) + 0x8000;
              uVar2 = uVar9 * (uVar24 & 0xffff) + 0x8000;
              uVar9 = uVar9 * (uVar25 & 0xffff) + 0x8000;
              *(uint *)(param_1 + (long)iVar26 * 4 + (long)(int)param_4 * (long)iVar27) =
                   (uVar28 & 0xff00) << 0x10 | uVar9 + (uVar9 >> 0x10) >> 0x18 |
                   (uVar2 + (uVar2 >> 0x10) >> 0x18) << 8 |
                   (uVar1 + (uVar1 >> 0x10) >> 0x18) << 0x10;
            }
            uVar9 = SUB84(dVar18,0);
            uVar13 = uVar13 + ((int)uVar9 >> 5) + (uVar9 >> 4 & 1);
            dVar18 = (double)(ulong)(uVar9 + SUB84(dVar20,0));
            dVar20 = (double)(ulong)(uint)(SUB84(dVar20,0) +
                                          SUB84(dVar38 * 4096.0 + 103079215104.0,0));
            uVar9 = SUB84(dVar33,0);
            uVar8 = uVar8 + ((int)uVar9 >> 5) + (uVar9 >> 4 & 1);
            dVar33 = (double)(ulong)(SUB84(dVar34,0) + uVar9);
            dVar34 = (double)(ulong)(uint)(SUB84(dVar34,0) +
                                          SUB84(dVar32 * 4096.0 + 103079215104.0,0));
            uVar24 = uVar24 + (int)uVar40;
            uVar25 = uVar25 + (int)(uVar40 >> 0x20);
            uVar28 = uVar28 + (int)uVar41;
            uVar29 = uVar29 + (int)(uVar41 >> 0x20);
            uVar9 = (int)pcVar6 - 1;
            pcVar6 = (code *)(ulong)uVar9;
          } while (uVar9 != 0);
        }
        uVar9 = SUB84(dVar30 + 26388279066624.0,0);
        iVar26 = (int)uVar9 >> 8;
        if (iVar26 < iVar17) {
          uVar13 = SUB84(dVar23 + 26388279066624.0,0);
          iVar17 = (int)uVar13 >> 8;
          if ((iVar17 < iVar16) && (-1 < (int)(uVar9 | uVar13) >> 8)) {
            uVar13 = uVar11 * iVar21 + 0x8000;
            uVar9 = uVar11 * iVar3 + 0x8000;
            uVar8 = uVar11 * iVar19 + 0x8000;
            *(uint *)(param_1 + (long)iVar17 * 4 + (long)iVar26 * (long)(int)param_4) =
                 (uVar11 & 0xff00) << 0x10 | uVar8 + (uVar8 >> 0x10) >> 0x18 |
                 (uVar13 + (uVar13 >> 0x10) >> 0x18) << 0x10 |
                 (uVar9 + (uVar9 >> 0x10) >> 0x18) << 8;
          }
        }
      }
    }
  }
  iVar17 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return pcVar6;
  }
  ___stack_chk_fail();
  pcVar14 = *(char **)pcVar6;
  if (iVar17 < 0) {
    pcVar12 = pcVar14;
    _strlen();
    iVar17 = (int)pcVar12;
  }
  uVar9 = (uint)*pcVar14;
  if (0 < iVar17) {
    uVar11 = iVar17 + 1;
    pcVar12 = pcVar14;
    do {
      pcVar12 = pcVar12 + 1;
      uVar9 = (int)*pcVar12 + uVar9 * 0x1f;
      uVar11 = uVar11 - 1;
    } while (1 < uVar11);
  }
  _pthread_mutex_lock(0x1132e0308);
  if (pcRam000000011382af40 == (code *)0x0) {
    pcVar7 = FUN_1097dacdc;
    FUN_1097d298c();
    pcRam000000011382af40 = pcVar7;
    if (pcVar7 != (code *)0x0) goto LAB_1097dac2c;
LAB_1097dacc4:
    pcVar15 = (code *)0x1;
  }
  else {
LAB_1097dac2c:
    pcVar7 = pcRam000000011382af40;
    FUN_1097d2a14();
    if (pcVar7 == (code *)0x0) {
      lVar10 = (long)iVar17;
      pcVar7 = (code *)(lVar10 + 0x19);
      if ((pcVar7 == (code *)0x0) || (_malloc(), pcVar7 == (code *)0x0)) goto LAB_1097dacc4;
      *(ulong *)pcVar7 = (ulong)uVar9;
      *(int *)(pcVar7 + 8) = iVar17;
      pcVar15 = pcVar7 + 0x18;
      *(code **)(pcVar7 + 0x10) = pcVar15;
      _memcpy(pcVar15,pcVar14,lVar10);
      pcVar15[lVar10] = (code)0x0;
      pcVar15 = pcRam000000011382af40;
      FUN_1097d2c28(pcRam000000011382af40,pcVar7);
      if ((int)pcVar15 != 0) {
        _free(pcVar7);
        goto LAB_1097dac9c;
      }
    }
    pcVar15 = (code *)0x0;
    *(ulong *)pcVar6 = *(ulong *)(pcVar7 + 0x10);
  }
LAB_1097dac9c:
  _pthread_mutex_unlock(0x1132e0308);
  return pcVar15;
}



/* Entry: 1097dab90; end: 1097dacdb;  */

code * FUN_1097dab90(undefined8 *param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  code *pcVar6;
  long lVar7;
  
  pcVar5 = (char *)*param_1;
  if (param_2 < 0) {
    pcVar3 = pcVar5;
    _strlen();
    param_2 = (int)pcVar3;
  }
  uVar2 = (uint)*pcVar5;
  if (0 < param_2) {
    uVar4 = param_2 + 1;
    pcVar3 = pcVar5;
    do {
      pcVar3 = pcVar3 + 1;
      uVar2 = (int)*pcVar3 + uVar2 * 0x1f;
      uVar4 = uVar4 - 1;
    } while (1 < uVar4);
  }
  _pthread_mutex_lock(0x1132e0308);
  if (pcRam000000011382af40 == (code *)0x0) {
    pcVar1 = FUN_1097dacdc;
    FUN_1097d298c();
    pcRam000000011382af40 = pcVar1;
    if (pcVar1 != (code *)0x0) goto LAB_1097dac2c;
LAB_1097dacc4:
    pcVar6 = (code *)0x1;
  }
  else {
LAB_1097dac2c:
    pcVar1 = pcRam000000011382af40;
    FUN_1097d2a14();
    if (pcVar1 == (code *)0x0) {
      lVar7 = (long)param_2;
      pcVar1 = (code *)(lVar7 + 0x19);
      if ((pcVar1 == (code *)0x0) || (_malloc(), pcVar1 == (code *)0x0)) goto LAB_1097dacc4;
      *(ulong *)pcVar1 = (ulong)uVar2;
      *(int *)(pcVar1 + 8) = param_2;
      pcVar6 = pcVar1 + 0x18;
      *(code **)(pcVar1 + 0x10) = pcVar6;
      _memcpy(pcVar6,pcVar5,lVar7);
      pcVar6[lVar7] = (code)0x0;
      pcVar6 = pcRam000000011382af40;
      FUN_1097d2c28(pcRam000000011382af40,pcVar1);
      if ((int)pcVar6 != 0) {
        _free(pcVar1);
        goto LAB_1097dac9c;
      }
    }
    pcVar6 = (code *)0x0;
    *param_1 = *(undefined8 *)(pcVar1 + 0x10);
  }
LAB_1097dac9c:
  _pthread_mutex_unlock(0x1132e0308);
  return pcVar6;
}



/* Entry: 1097dacdc; end: 1097dad17;  */

bool FUN_1097dacdc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _memcmp(uVar1,*(undefined8 *)(param_2 + 0x10));
    return (int)uVar1 == 0;
  }
  return false;
}



/* Entry: 1097dad18; end: 1097daf07;  */

undefined8 FUN_1097dad18(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  
  uVar10 = *(uint *)(param_2 + 0x34);
  uVar17 = (ulong)uVar10;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(long *)(param_1 + 0x28) = param_1 + 0x238;
  if ((int)uVar10 < 0x21) {
    if ((int)uVar10 < 1) {
      return 0;
    }
  }
  else {
    lVar7 = uVar17 * 0x30;
    _malloc();
    *(long *)(param_1 + 0x28) = lVar7;
    if (lVar7 == 0) {
      return 1;
    }
  }
  lVar11 = 0;
  lVar7 = 0;
  iVar12 = *(int *)(param_1 + 0x18);
  do {
    piVar1 = (int *)(*(long *)(param_2 + 0x40) + lVar11);
    iVar2 = piVar1[4] + 0x7f >> 8;
    if (iVar2 <= iVar12) {
      iVar2 = iVar12;
    }
    iVar3 = piVar1[5] + 0x7f >> 8;
    if (*(int *)(param_1 + 0x1c) <= iVar3) {
      iVar3 = *(int *)(param_1 + 0x1c);
    }
    if (iVar3 - iVar2 != 0 && iVar2 <= iVar3) {
      iVar4 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar4 + 1;
      puVar14 = (undefined8 *)(*(long *)(param_1 + 0x28) + (long)iVar4 * 0x30);
      iVar4 = piVar1[6];
      *(int *)(puVar14 + 2) = iVar3 - iVar2;
      *(int *)((long)puVar14 + 0x14) = iVar4;
      iVar3 = piVar1[2];
      lVar8 = (long)piVar1[3] - (long)piVar1[1];
      uVar10 = iVar3 - *piVar1;
      uVar6 = (uint)lVar8;
      if (uVar10 == 0) {
        *(undefined4 *)(puVar14 + 3) = 1;
        *(int *)(puVar14 + 4) = iVar3;
        puVar14[5] = 0;
        uVar10 = 0;
        uVar15 = 0;
      }
      else {
        *(undefined4 *)(puVar14 + 3) = 0;
        uVar13 = -(ulong)(uVar10 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar10 << 8;
        uVar17 = 0;
        if (lVar8 != 0) {
          uVar17 = (long)uVar13 / lVar8;
        }
        lVar16 = uVar13 - uVar17 * lVar8;
        uVar15 = uVar6;
        uVar13 = (ulong)((int)uVar17 - 1);
        if (-1 < (int)(uVar6 ^ uVar10) || lVar16 == 0) {
          uVar15 = 0;
          uVar13 = uVar17;
        }
        puVar14[5] = uVar13 & 0xffffffff | (ulong)(uVar15 + (int)lVar16) << 0x20;
        uVar13 = (long)(int)((iVar2 << 8 | 0x7fU) - piVar1[1]) * (long)(int)uVar10;
        uVar17 = 0;
        if (lVar8 != 0) {
          uVar17 = (long)uVar13 / lVar8;
        }
        lVar8 = uVar13 - uVar17 * lVar8;
        uVar10 = uVar6;
        uVar5 = uVar17 + 0xffffffff;
        if (lVar8 == 0 || uVar6 < 0x80000000 == uVar13 < 0x8000000000000000) {
          uVar10 = 0;
          uVar5 = uVar17;
        }
        uVar10 = uVar10 + (int)lVar8;
        puVar14[4] = uVar5 & 0xffffffff | (ulong)uVar10 << 0x20;
        *(int *)(puVar14 + 4) = *piVar1 + (int)uVar5;
        iVar12 = *(int *)(param_1 + 0x18);
        uVar15 = uVar6;
      }
      *(uint *)((long)puVar14 + 0x1c) = uVar15;
      *(uint *)((long)puVar14 + 0x24) = uVar10 - uVar6;
      lVar16 = *(long *)(param_1 + 0x30);
      iVar2 = iVar2 - iVar12;
      lVar8 = *(long *)(lVar16 + (long)iVar2 * 8);
      uVar9 = 0;
      if (lVar8 != 0) {
        *(undefined8 **)(lVar8 + 8) = puVar14;
        uVar9 = *(undefined8 *)(lVar16 + (long)iVar2 * 8);
      }
      *puVar14 = uVar9;
      puVar14[1] = 0;
      *(undefined8 **)(lVar16 + (long)iVar2 * 8) = puVar14;
      uVar17 = (ulong)*(uint *)(param_2 + 0x34);
    }
    lVar7 = lVar7 + 1;
    lVar11 = lVar11 + 0x1c;
  } while (lVar7 < (int)uVar17);
  return 0;
}



/* Entry: 1097daf08; end: 1097db087;  */

/* WARNING: Removing unreachable block (ram,0x0001097f33a8) */

undefined8 * FUN_1097daf08(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  
  puVar2 = (undefined8 *)0x1;
  _calloc(1,0xac8);
  if (puVar2 == (undefined8 *)0x0) {
    uRam00000001137360d0 = 0x1097f33d0;
    uRam00000001137360d8 = 0x1097f2e60;
    uRam00000001137360e0 = 1;
    return (undefined8 *)0x1137360d0;
  }
  *puVar2 = FUN_1097db088;
  puVar2[1] = FUN_1097db0e4;
  uVar1 = (param_4 - param_2) + 1;
  puVar3 = puVar2 + 7;
  puVar2[6] = puVar3;
  if (uVar1 < 0x41) {
    puVar6 = (undefined8 *)(ulong)(uVar1 * 8);
  }
  else {
    puVar6 = (undefined8 *)((ulong)uVar1 << 3);
    puVar3 = puVar6;
    _malloc();
    puVar2[6] = puVar3;
    if (puVar3 == (undefined8 *)0x0) {
      pcVar5 = FUN_1097db088;
      goto LAB_1097db060;
    }
  }
  _bzero(puVar3,puVar6);
  puVar3[(uint)(param_4 - param_2)] = 0xffffffffffffffff;
  *(int *)(puVar2 + 3) = param_2;
  *(int *)((long)puVar2 + 0x1c) = param_4;
  if (param_3 - param_1 < 0x40) {
    puVar2[0x114] = puVar2 + 0x115;
  }
  else {
    lVar4 = (ulong)((param_3 - param_1) + 1) << 3;
    _malloc();
    puVar2[0x114] = lVar4;
    if (lVar4 == 0) {
      pcVar5 = (code *)*puVar2;
LAB_1097db060:
      (*pcVar5)(puVar2);
      uRam00000001137360d0 = 0x1097f33d0;
      uRam00000001137360d8 = 0x1097f2e60;
      uRam00000001137360e0 = 1;
      return (undefined8 *)0x1137360d0;
    }
  }
  *(int *)((long)puVar2 + 0xaac) = param_1;
  *(int *)(puVar2 + 0x156) = param_3;
  *(int *)((long)puVar2 + 0xab4) = param_2;
  *(int *)(puVar2 + 0x157) = param_4;
  *(undefined4 *)(puVar2 + 0x10a) = 1;
  *(undefined4 *)(puVar2 + 0x109) = 0x7fffffff;
  *(undefined4 *)(puVar2 + 0x10b) = 0x80000000;
  puVar2[0x108] = 0;
  puVar2[0x107] = puVar2 + 0x10d;
  puVar2[0x10e] = puVar2 + 0x107;
  puVar2[0x10d] = 0;
  *(undefined4 *)(puVar2 + 0x111) = 0x7fffff00;
  *(undefined4 *)(puVar2 + 0x10f) = 0x7fffffff;
  *(undefined4 *)(puVar2 + 0x110) = 1;
  *(undefined4 *)(puVar2 + 0x113) = 1;
  *(undefined4 *)(puVar2 + 0x158) = param_5;
  return puVar2;
}



/* Entry: 1097db088; end: 1097db0e3;  */

void FUN_1097db088(long param_1)

{
  if (*(long *)(param_1 + 0x8a0) != param_1 + 0x8a8) {
    _free();
  }
  if (*(long *)(param_1 + 0x30) != param_1 + 0x38) {
    _free();
  }
  if (*(long *)(param_1 + 0x28) != param_1 + 0x238) {
    _free();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 1097db0e4; end: 1097db3f3;  */

void FUN_1097db0e4(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 uStack_68;
  
  uVar4 = 1;
  if (*(int *)(param_1 + 0xac0) == 0) {
    uVar4 = 0xffffffff;
  }
  iVar5 = *(int *)(param_1 + 0xab8) - *(int *)(param_1 + 0xab4);
  if (0 < iVar5) {
    plVar2 = (long *)(param_1 + 0x868);
    iVar18 = 0;
    do {
      plVar6 = *(long **)(*(long *)(param_1 + 0x30) + (long)iVar18 * 8);
      iVar9 = *(int *)(param_1 + 0x898);
      if (plVar6 == (long *)0x0) {
        plVar8 = *(long **)(param_1 + 0x838);
      }
      else {
        plVar8 = plVar6;
        if (iVar9 != 0) {
          do {
            plVar14 = plVar8 + 3;
            plVar8 = (long *)*plVar8;
          } while ((int)*plVar14 != 0 && plVar8 != (long *)0x0);
          *(int *)(param_1 + 0x898) = (int)*plVar14;
        }
        plVar8 = *(long **)(param_1 + 0x838);
        FUN_1097db3f4(plVar6,0xffffffff,&uStack_68);
        FUN_1097db4b0(plVar8,uStack_68);
        *(long **)(param_1 + 0x838) = plVar8;
        iVar9 = *(int *)(param_1 + 0x898);
      }
      iVar17 = iVar18 + 1;
      if (iVar9 != 0) {
        iVar9 = (int)plVar8[2];
        for (plVar6 = plVar8; plVar6 != plVar2; plVar6 = (long *)*plVar6) {
          iVar10 = *(int *)(plVar6 + 2);
          if (iVar9 <= *(int *)(plVar6 + 2)) {
            iVar10 = iVar9;
          }
          iVar9 = iVar10;
        }
        if (1 < iVar9) {
          iVar10 = iVar9 + 1;
          plVar6 = (long *)(*(long *)(param_1 + 0x30) + (long)iVar17 * 8);
          iVar15 = iVar17;
          do {
            iVar16 = iVar15;
            if (*plVar6 != 0) break;
            iVar15 = iVar15 + 1;
            iVar10 = iVar10 + -1;
            plVar6 = plVar6 + 1;
            iVar16 = iVar9 + iVar18;
          } while (2 < iVar10);
          iVar9 = iVar16 - iVar17;
          if ((iVar9 != 0) && (iVar17 = iVar16, plVar8 != plVar2)) {
            do {
              plVar6 = (long *)*plVar8;
              iVar10 = (int)plVar8[2] - iVar9;
              *(int *)(plVar8 + 2) = iVar10;
              if (iVar10 == 0) {
                puVar11 = (undefined8 *)plVar8[1];
                *puVar11 = plVar6;
                plVar6[1] = (long)puVar11;
              }
              plVar8 = plVar6;
            } while (plVar6 != plVar2);
            plVar8 = *(long **)(param_1 + 0x838);
          }
        }
      }
      *(undefined4 *)(param_1 + 0xaa8) = 0;
      if (plVar2 != plVar8) {
        iVar9 = 0;
        uVar7 = 0;
        iVar10 = -0x80000000;
        iVar15 = -0x80000000;
        do {
          plVar6 = (long *)*plVar8;
          iVar16 = (int)plVar8[4];
          iVar12 = (int)plVar8[2] + -1;
          *(int *)(plVar8 + 2) = iVar12;
          if (iVar12 == 0) {
            plVar14 = (long *)plVar8[1];
            *plVar14 = (long)plVar6;
            plVar6[1] = (long)plVar14;
            iVar12 = iVar10;
          }
          else {
            iVar12 = iVar16;
            if ((int)plVar8[3] == 0) {
              iVar12 = (int)plVar8[5] + iVar16;
              iVar3 = *(int *)((long)plVar8 + 0x24) + *(int *)((long)plVar8 + 0x2c);
              *(int *)(plVar8 + 4) = iVar12;
              *(int *)((long)plVar8 + 0x24) = iVar3;
              if (-1 < iVar3) {
                iVar12 = iVar12 + 1;
                *(int *)(plVar8 + 4) = iVar12;
                *(int *)((long)plVar8 + 0x24) = iVar3 - *(int *)((long)plVar8 + 0x1c);
              }
            }
            if (iVar12 < iVar10) {
              plVar14 = (long *)plVar8[1];
              *plVar14 = (long)plVar6;
              plVar6[1] = (long)plVar14;
              do {
                plVar14 = (long *)plVar14[1];
              } while (iVar12 < (int)plVar14[4]);
              lVar13 = *plVar14;
              *(long **)(lVar13 + 8) = plVar8;
              *plVar8 = lVar13;
              plVar8[1] = (long)plVar14;
              *plVar14 = (long)plVar8;
              iVar12 = iVar10;
            }
          }
          iVar10 = iVar16 + 0x7f >> 8;
          uVar7 = *(int *)((long)plVar8 + 0x14) + uVar7;
          if ((uVar7 & uVar4) == 0) {
            iVar16 = iVar15;
            if (iVar10 + 1 < *(int *)(plVar6 + 4) + 0x7f >> 8) {
              iVar16 = *(int *)(param_1 + 0xaac);
              if (*(int *)(param_1 + 0xaac) <= iVar15) {
                iVar16 = iVar15;
              }
              iVar15 = *(int *)(param_1 + 0xab0);
              if (iVar10 <= *(int *)(param_1 + 0xab0)) {
                iVar15 = iVar10;
              }
              if (iVar16 < iVar15) {
                piVar1 = (int *)(*(long *)(param_1 + 0x8a0) + (long)iVar9 * 8);
                *piVar1 = iVar16;
                *(undefined1 *)(piVar1 + 1) = 0xff;
                iVar9 = iVar9 + 2;
                *(int *)(param_1 + 0xaa8) = iVar9;
                piVar1[2] = iVar15;
                *(undefined1 *)(piVar1 + 3) = 0;
              }
              iVar16 = -0x80000000;
            }
          }
          else {
            iVar16 = iVar10;
            if (iVar15 != -0x80000000) {
              iVar16 = iVar15;
            }
          }
          plVar8 = plVar6;
          iVar10 = iVar12;
          iVar15 = iVar16;
        } while (plVar2 != plVar6);
        if ((iVar9 != 0) &&
           (lVar13 = param_2,
           (**(code **)(param_2 + 0x10))
                     (param_2,*(int *)(param_1 + 0xab4) + iVar18,iVar17 - iVar18,
                      *(undefined8 *)(param_1 + 0x8a0)), (int)lVar13 != 0)) {
          return;
        }
      }
      if (*(long **)(param_1 + 0x838) == plVar2) {
        *(undefined4 *)(param_1 + 0x898) = 1;
      }
      iVar18 = iVar17;
    } while (iVar17 < iVar5);
  }
  return;
}



/* Entry: 1097db3f4; end: 1097db4af;  */

long FUN_1097db3f4(long *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 uStack_38;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    lVar4 = 0;
    *param_3 = param_1;
  }
  else {
    lVar4 = *plVar2;
    if ((int)plVar2[4] < (int)param_1[4]) {
      *param_3 = plVar2;
      lVar3 = param_1[1];
      *plVar2 = (long)param_1;
      plVar2[1] = lVar3;
      param_1[1] = (long)plVar2;
      plVar2 = param_1;
    }
    else {
      *param_3 = param_1;
    }
    *plVar2 = 0;
    if ((param_2 != 0) && (lVar4 != 0)) {
      uVar5 = 1;
      lVar3 = lVar4;
      do {
        FUN_1097db3f4(lVar3,uVar5 - 1,&uStack_38);
        uVar1 = *param_3;
        FUN_1097db4b0(uVar1,uStack_38);
        *param_3 = uVar1;
        if (param_2 <= uVar5) {
          return lVar3;
        }
        uVar5 = uVar5 + 1;
        lVar4 = 0;
      } while (lVar3 != 0);
    }
  }
  return lVar4;
}



/* Entry: 1097db4b0; end: 1097db563;  */

undefined8 ******* FUN_1097db4b0(undefined8 *******param_1,undefined8 *******param_2)

{
  undefined8 *******pppppppuVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *******pppppppuVar3;
  int iVar4;
  int iVar5;
  undefined8 ******ppppppuStack_8;
  
  pppppppuVar3 = (undefined8 *******)param_1[1];
  iVar4 = *(int *)(param_1 + 4);
  iVar5 = *(int *)(param_2 + 4);
  if (iVar4 <= iVar5) {
    pppppppuVar1 = &ppppppuStack_8;
    pppppppuVar2 = param_1;
    ppppppuStack_8 = param_1;
    goto joined_r0x0001097db4e4;
  }
  param_2[1] = pppppppuVar3;
  pppppppuVar1 = &ppppppuStack_8;
  pppppppuVar2 = param_2;
  ppppppuStack_8 = param_2;
  do {
    while (param_2 = pppppppuVar2, iVar5 <= iVar4) {
      pppppppuVar2 = (undefined8 *******)*param_2;
      if (pppppppuVar2 == (undefined8 *******)0x0) {
        param_1[1] = param_2;
        *param_2 = param_1;
        return (undefined8 *******)ppppppuStack_8;
      }
      iVar5 = *(int *)(pppppppuVar2 + 4);
      pppppppuVar3 = param_2;
      pppppppuVar1 = param_2;
    }
    param_1[1] = pppppppuVar3;
    *pppppppuVar1 = param_1;
    iVar4 = *(int *)(param_1 + 4);
    pppppppuVar2 = param_1;
joined_r0x0001097db4e4:
    while (param_1 = pppppppuVar2, iVar4 <= iVar5) {
      pppppppuVar2 = (undefined8 *******)*param_1;
      if (pppppppuVar2 == (undefined8 *******)0x0) {
        param_2[1] = param_1;
        *param_1 = param_2;
        return (undefined8 *******)ppppppuStack_8;
      }
      iVar4 = *(int *)(pppppppuVar2 + 4);
      pppppppuVar3 = param_1;
      pppppppuVar1 = param_1;
    }
    param_2[1] = pppppppuVar3;
    *pppppppuVar1 = param_2;
    iVar5 = *(int *)(param_2 + 4);
    pppppppuVar2 = param_2;
  } while( true );
}



/* Entry: 1097db564; end: 1097db58b;  */

undefined8 FUN_1097db564(void)

{
  return 0x66;
}



/* Entry: 1097db58c; end: 1097db64f;  */

undefined4 FUN_1097db58c(undefined *param_1)

{
  undefined *puVar1;
  
  if ((*(int *)(param_1 + 0x24) == 0 && param_1 != &UNK_10dffe520) && param_1 != &UNK_10dffe548) {
    if ((*(code **)(param_1 + 0x10) != (code *)0x0) &&
       (puVar1 = param_1, (**(code **)(param_1 + 0x10))(), *(int *)(param_1 + 0x20) == 0)) {
      *(int *)(param_1 + 0x20) = (int)puVar1;
    }
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 1097db650; end: 1097db657;  */

long FUN_1097db650(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x28;
  FUN_1097c54b0(lVar2,param_3);
  if ((int)lVar2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar1 + (int)param_3;
    _memcpy(*(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x30) * (ulong)uVar1,param_2,
            (ulong)*(uint *)(param_1 + 0x30) * (param_3 & 0xffffffff));
  }
  return lVar2;
}



/* Entry: 1097db658; end: 1097db673;  */

undefined8 FUN_1097db658(long param_1)

{
  _free(*(undefined8 *)(param_1 + 0x38));
  return 0;
}



/* Entry: 1097db674; end: 1097db6f3;  */

/* WARNING: Possible PIC construction at 0x0001097db6dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001097db6e0) */

undefined * FUN_1097db674(undefined *param_1,long *param_2,ulong *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *unaff_x19;
  ulong unaff_x20;
  ulong uVar5;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar2 = *(uint *)(param_1 + 0x2c);
    uVar5 = (ulong)uVar2;
    *param_3 = uVar5;
    if (uVar2 == 0) {
      *param_2 = 0;
    }
    else {
      lVar4 = 1;
      _calloc(1,uVar5);
      *param_2 = lVar4;
      if (lVar4 != 0) {
        _memcpy();
        goto SUB_1097db5f8;
      }
    }
    unaff_x30 = 0x1097db6e0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_1;
    unaff_x20 = uVar5;
    unaff_x29 = puVar1;
  }
SUB_1097db5f8:
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (param_1 == &UNK_10dffe520 || param_1 == &UNK_10dffe548) {
    puVar3 = (undefined *)(ulong)*(uint *)(param_1 + 0x20);
  }
  else {
    puVar3 = param_1;
    FUN_1097db58c(param_1);
    _free(param_1);
  }
  return puVar3;
}



/* Entry: 1097db6f4; end: 1097db8d7;  */

int FUN_1097db6f4(long param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uStack_80;
  int iStack_78;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  
  iStack_78 = 0;
  plVar8 = (long *)(param_1 + 0x28);
  do {
    if ((int)plVar8[2] != 0) {
      uVar7 = 0;
      piVar6 = (int *)plVar8[5];
      do {
        cVar2 = *(char *)(plVar8[4] + uVar7);
        if (cVar2 == '\x02') {
          func_0x0001097ed684(&uStack_74,&uStack_80,piVar6,piVar6 + 2,piVar6 + 4);
          uStack_80 = *(undefined8 *)(piVar6 + 4);
          piVar6 = piVar6 + 6;
        }
        else {
          if (cVar2 == '\x01') {
            uStack_80 = *(undefined8 *)piVar6;
LAB_1097db79c:
            iVar3 = *piVar6;
            piVar4 = (int *)&uStack_74;
            if ((iVar3 < (int)uStack_74) || (piVar4 = (int *)&uStack_6c, (int)uStack_6c < iVar3)) {
              *piVar4 = iVar3;
            }
            iVar3 = piVar6[1];
            piVar4 = (int *)((long)&uStack_74 + 4);
            if ((iVar3 < uStack_74._4_4_) ||
               (piVar4 = (int *)((long)&uStack_6c + 4), uStack_6c._4_4_ < iVar3)) {
              *piVar4 = iVar3;
            }
          }
          else {
            if (cVar2 != '\0') goto LAB_1097db818;
            uStack_80 = *(undefined8 *)piVar6;
            if (iStack_78 != 0) goto LAB_1097db79c;
            iStack_78 = 1;
            uStack_74 = *(undefined8 *)piVar6;
            uStack_6c = *(undefined8 *)piVar6;
          }
          piVar6 = piVar6 + 2;
        }
LAB_1097db818:
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(plVar8 + 2));
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)(param_1 + 0x28)) {
      if (((*(byte *)(param_1 + 0x10) ^ 0xff) & 3) == 0) {
        uVar5 = *(undefined8 *)(param_1 + 8);
        if (iStack_78 == 0) {
          iStack_78 = 1;
          uStack_74 = uVar5;
          uStack_6c = uVar5;
        }
        else {
          iVar3 = (int)uVar5;
          piVar6 = (int *)&uStack_74;
          if ((iVar3 < (int)uStack_74) || (piVar6 = (int *)&uStack_6c, (int)uStack_6c < iVar3)) {
            *piVar6 = iVar3;
          }
          iVar3 = (int)((ulong)uVar5 >> 0x20);
          piVar6 = (int *)((long)&uStack_74 + 4);
          if ((iVar3 < uStack_74._4_4_) ||
             (bVar1 = uStack_6c._4_4_ < iVar3, piVar6 = (int *)((long)&uStack_6c + 4), bVar1)) {
            *piVar6 = iVar3;
          }
        }
      }
      else if (iStack_78 == 0) {
        return 0;
      }
      param_2[1] = uStack_6c;
      *param_2 = uStack_74;
      return iStack_78;
    }
  } while( true );
}



/* Entry: 1097db8d8; end: 1097db9a3;  */

void FUN_1097db8d8(long param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  double dStack_50;
  double dStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x10) >> 2 & 1) == 0) {
    *param_5 = 0;
    param_5[1] = 0;
  }
  else {
    FUN_1097f3ec8(param_2,param_1,param_3,&dStack_48,&dStack_50);
    uVar2 = SUB84(dStack_48,0);
    uVar4 = (undefined4)((ulong)dStack_48 >> 0x20);
    uVar6 = SUB84(dStack_50,0);
    uVar8 = (undefined4)((ulong)dStack_50 >> 0x20);
    if (param_4 != 0) {
      uVar3 = 0;
      uVar5 = 0x3f800000;
      if (0.0078125 <= dStack_48) {
        uVar3 = uVar2;
        uVar5 = uVar4;
      }
      uVar2 = uVar3;
      uVar4 = uVar5;
      if (dStack_50 < 0.0078125) {
        uVar6 = 0;
        uVar8 = 0x3f800000;
      }
    }
    iVar7 = SUB84((double)CONCAT44(uVar8,uVar6) + 26388279066624.0,0);
    iVar1 = SUB84((double)CONCAT44(uVar4,uVar2) + 26388279066624.0,0);
    iVar9 = (int)*(undefined8 *)(param_1 + 0x14);
    uStack_40 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) - iVar7,iVar9 - iVar1
                        );
    uStack_38 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20) + iVar7,
                         (int)*(undefined8 *)(param_1 + 0x1c) + iVar1);
    func_0x0001097ed40c(iVar9 + iVar1,&uStack_40,param_5);
  }
  return;
}



/* Entry: 1097db9a4; end: 1097dba9f;  */

undefined8
FUN_1097db9a4(undefined8 param_1,undefined8 param_2,double *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dStack_470;
  double dStack_468;
  double dStack_460;
  double dStack_458;
  double dStack_450;
  double dStack_448;
  double dStack_440;
  double dStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined4 uStack_420;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined1 *puStack_3f0;
  undefined1 auStack_3e8 [904];
  
  dVar1 = 1.0;
  FUN_1097d98f8(param_5);
  if (*param_3 < dVar1) {
    dStack_468 = param_3[1];
    dStack_458 = param_3[3];
    dStack_460 = param_3[2];
    dStack_448 = param_3[5];
    dStack_450 = param_3[4];
    dStack_438 = param_3[7];
    dStack_440 = param_3[6];
    param_3 = &dStack_470;
    dStack_470 = dVar1;
  }
  uStack_3f8 = 0x20;
  uStack_420 = 0x80000000;
  uStack_428 = 0x800000007fffffff;
  uStack_430 = 0x7fffffff00000000;
  uStack_400 = 0;
  uStack_408 = 0;
  puStack_3f0 = auStack_3e8;
  FUN_1097ded14(param_1,param_2,param_3,param_4,param_5,&uStack_430);
  func_0x0001097ed40c((ulong)&uStack_430 | 4,param_6);
  if (puStack_3f0 != auStack_3e8) {
    _free();
  }
  return param_2;
}



/* Entry: 1097dbaa0; end: 1097dbb3b;  */

void FUN_1097dbaa0(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  uint uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  bVar1 = *(int *)(param_3 + 0x30) != 0;
  if (bVar1) {
    uStack_40 = *(undefined8 *)(param_3 + 0x1c);
    uStack_48 = *(undefined8 *)(param_3 + 0x14);
  }
  uStack_38 = (uint)bVar1;
  uStack_2c = 0;
  uStack_34 = 0;
  lStack_58 = param_3;
  uStack_50 = param_1;
  FUN_1097dce2c(param_2,FUN_1097dbb3c,0x1097dbb9c,0x1097dbbe8,FUN_1097dbca0,&lStack_58);
  if ((int)param_2 == 0) {
    FUN_1097e9f2c(lStack_58,&uStack_34,&uStack_2c,1);
  }
  return;
}



/* Entry: 1097dbb3c; end: 1097dbc9f;  */

void FUN_1097dbb3c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  FUN_1097e9f2c(piVar2,(long)param_1 + 0x24,(long)param_1 + 0x2c,1);
  iVar1 = *piVar2;
  *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)((long)param_1 + 0x2c);
  if (iVar1 == 0) {
    *(undefined8 *)((long)param_1 + 0x24) = *param_2;
    *(undefined8 *)((long)param_1 + 0x2c) = *param_2;
  }
  return;
}



/* Entry: 1097dbca0; end: 1097dbd7f;  */

undefined4 FUN_1097dbca0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  FUN_1097e9f2c(puVar2,(long)param_1 + 0x24,(long)param_1 + 0x2c,1);
  uVar1 = *puVar2;
  *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)((long)param_1 + 0x2c);
  return uVar1;
}



/* Entry: 1097dbd80; end: 1097dbe07;  */

void FUN_1097dbd80(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uStack_48;
  
  uVar4 = CONCAT44((int)((ulong)param_1[2] >> 0x20) + 0x7f,(int)param_1[2] + 0x7f) &
          0xffffff00ffffff00;
  piVar1 = (int *)*param_1;
  uStack_48 = uVar4;
  FUN_1097e9f2c(piVar1,param_1 + 1,&uStack_48,1);
  iVar2 = *piVar1;
  param_1[1] = uVar4;
  if (iVar2 == 0) {
    iVar2 = (int)*param_2;
    iVar3 = (int)((ulong)*param_2 >> 0x20);
    param_1[2] = CONCAT44(iVar3 + 0x7f,iVar2 + 0x7f) & 0xffffff00ffffff00;
    param_1[1] = CONCAT44(iVar3 + 0x7f,iVar2 + 0x7f) & 0xffffff00ffffff00;
  }
  return;
}



/* Entry: 1097dbe08; end: 1097dbec7;  */

undefined4 FUN_1097dbe08(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uStack_38;
  
  uVar3 = CONCAT44((int)((ulong)*param_2 >> 0x20) + 0x7f,(int)*param_2 + 0x7f) & 0xffffff00ffffff00;
  puVar2 = (undefined4 *)*param_1;
  uStack_38 = uVar3;
  FUN_1097e9f2c(puVar2,param_1 + 1,&uStack_38,1);
  uVar1 = *puVar2;
  param_1[1] = uVar3;
  return uVar1;
}



/* Entry: 1097dbec8; end: 1097dbfa3;  */

long FUN_1097dbec8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined4 uStack_410;
  undefined8 uStack_3ec;
  undefined1 *puStack_3e0;
  undefined1 auStack_3d8 [904];
  
  if (*(char *)(param_2 + 0x10) < '\0') {
    param_2 = 0;
  }
  else {
    uStack_3ec = 0x2000000000;
    uStack_410 = 0x80000000;
    uStack_418 = 0x800000007fffffff;
    uStack_420 = 0x7fffffff00000000;
    puStack_3e0 = auStack_3d8;
    FUN_1097e9d0c(&uStack_420,*(undefined8 *)(param_4 + 0x18),*(undefined4 *)(param_4 + 0x20));
    FUN_1097dbaa0(param_1,param_2,&uStack_420);
    if (((int)param_2 == 0) && ((int)uStack_3ec != 0)) {
      FUN_1097c6bf8(param_4,&uStack_420,param_3);
      param_2 = param_4;
    }
    if (puStack_3e0 != auStack_3d8) {
      _free();
    }
  }
  return param_2;
}



/* Entry: 1097dbfa4; end: 1097dc123;  */

undefined8 *
FUN_1097dbfa4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  int iStack_448;
  int iStack_444;
  int iStack_440;
  int iStack_43c;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined4 uStack_410;
  undefined8 uStack_3ec;
  undefined1 *puStack_3e0;
  undefined1 auStack_3d8 [904];
  
  puVar3 = param_1;
  FUN_1097dd72c(param_1,&iStack_448);
  if ((int)puVar3 == 0) {
    puStack_438 = param_1 + 5;
    uStack_428 = 0;
    puStack_430 = puStack_438;
    do {
      do {
        ppuVar4 = &puStack_438;
        FUN_1097dd9cc(ppuVar4,&iStack_448);
        iVar2 = iStack_444;
        iVar1 = iStack_448;
        if ((int)ppuVar4 == 0) {
          if ((puStack_430 == (undefined8 *)0x0) || ((int)uStack_428 == *(int *)(puStack_430 + 2)))
          {
            FUN_1097c5b20(param_4,param_2,param_4);
            return param_4;
          }
          FUN_1097c916c(param_4);
          uStack_3ec = 0x2000000000;
          uStack_410 = 0x80000000;
          uStack_418 = 0x800000007fffffff;
          uStack_420 = 0x7fffffff00000000;
          puStack_3e0 = auStack_3d8;
          FUN_1097e9d0c(&uStack_420,param_4[3],*(undefined4 *)(param_4 + 4));
          *(undefined4 *)(param_4 + 4) = 0;
          func_0x0001097dbce0(param_1,param_3,&uStack_420);
          if ((int)param_1 == 0) {
            param_1 = &uStack_420;
            FUN_1097c64d4(param_1,param_2,param_4);
          }
          if (puStack_3e0 == auStack_3d8) {
            return param_1;
          }
          _free();
          return param_1;
        }
      } while ((iStack_444 == iStack_43c) || (iStack_448 == iStack_440));
      if (iStack_43c < iStack_444) {
        iStack_448 = iStack_440;
        iStack_444 = iStack_43c;
        iStack_440 = iVar1;
        iStack_43c = iVar2;
      }
      puVar3 = param_4;
      FUN_1097c8e80(param_4,param_3,&iStack_448);
    } while ((int)puVar3 == 0);
  }
  else {
    FUN_1097c8e80(param_4,param_3,&iStack_448);
    puVar3 = param_4;
  }
  return puVar3;
}



/* Entry: 1097dc124; end: 1097dc16f;  */

undefined4 FUN_1097dc124(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  FUN_1097e9f2c(puVar2,(long)param_1 + 0x24,param_2,1);
  uVar1 = *puVar2;
  *(undefined8 *)((long)param_1 + 0x24) = *param_2;
  return uVar1;
}



/* Entry: 1097dc170; end: 1097dc36f;  */

long * FUN_1097dc170(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  plVar1 = param_1 + 5;
  param_1[5] = plVar1;
  param_1[6] = plVar1;
  param_1[9] = param_1 + 0xb;
  param_1[10] = (long)param_1 + 0x74;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x1b;
  *(undefined4 *)((long)param_1 + 0x44) = 0x36;
  param_1[1] = param_2[1];
  *param_1 = *param_2;
  bVar3 = *(byte *)(param_2 + 2);
  bVar4 = *(byte *)(param_1 + 2);
  *(byte *)(param_1 + 2) = bVar4 & 0xfe | bVar3 & 1;
  bVar3 = bVar3 & 1 | (*(byte *)(param_2 + 2) >> 1 & 1) << 1;
  *(byte *)(param_1 + 2) = bVar4 & 0xfc | bVar3;
  bVar3 = bVar3 | (*(byte *)(param_2 + 2) >> 2 & 1) << 2;
  *(byte *)(param_1 + 2) = bVar4 & 0xf8 | bVar3;
  bVar3 = bVar3 | (*(byte *)(param_2 + 2) >> 3 & 1) << 3;
  *(byte *)(param_1 + 2) = bVar4 & 0xf0 | bVar3;
  bVar3 = bVar3 | (*(byte *)(param_2 + 2) >> 4 & 1) << 4;
  *(byte *)(param_1 + 2) = bVar4 & 0xe0 | bVar3;
  bVar3 = bVar3 | (*(byte *)(param_2 + 2) >> 5 & 1) << 5;
  *(byte *)(param_1 + 2) = bVar4 & 0xc0 | bVar3;
  bVar3 = bVar3 | (*(byte *)(param_2 + 2) >> 6 & 1) << 6;
  *(byte *)(param_1 + 2) = bVar4 & 0x80 | bVar3;
  *(byte *)(param_1 + 2) = *(byte *)(param_2 + 2) & 0x80 | bVar3;
  uVar9 = *(undefined8 *)((long)param_2 + 0x14);
  *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)param_2 + 0x1c);
  *(undefined8 *)((long)param_1 + 0x14) = uVar9;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  _memcpy(param_1 + 0xb,param_2[9]);
  _memcpy((long)param_1 + 0x74,(long)param_2 + 0x74,(ulong)*(uint *)(param_2 + 8) << 3);
  param_2 = param_2 + 5;
  puVar8 = (undefined8 *)*param_2;
  if (puVar8 == param_2) {
    plVar6 = (long *)0x0;
  }
  else {
    iVar7 = 0;
    plVar5 = (long *)0x0;
    do {
      uVar2 = *(int *)(puVar8 + 2) + (int)plVar5;
      plVar5 = (long *)(ulong)uVar2;
      iVar7 = *(int *)(puVar8 + 3) + iVar7;
      puVar8 = (undefined8 *)*puVar8;
    } while (puVar8 != param_2);
    plVar6 = plVar5;
    if (uVar2 != 0) {
      FUN_1097dc370(plVar5,iVar7);
      if (plVar5 == (long *)0x0) {
        plVar6 = (long *)*plVar1;
        while (plVar6 != plVar1) {
          plVar6 = (long *)*plVar6;
          _free();
        }
        plVar6 = (long *)0x1;
      }
      else {
        for (puVar8 = (undefined8 *)*param_2; puVar8 != param_2; puVar8 = (undefined8 *)*puVar8) {
          _memcpy(plVar5[4] + (ulong)*(uint *)(plVar5 + 2),puVar8[4],*(undefined4 *)(puVar8 + 2));
          *(int *)(plVar5 + 2) = (int)plVar5[2] + *(int *)(puVar8 + 2);
          _memcpy(plVar5[5] + (ulong)*(uint *)(plVar5 + 3) * 8,puVar8[5],
                  (ulong)*(uint *)(puVar8 + 3) << 3);
          *(int *)(plVar5 + 3) = (int)plVar5[3] + *(int *)(puVar8 + 3);
        }
        plVar6 = (long *)0x0;
        puVar8 = (undefined8 *)param_1[6];
        param_1[6] = plVar5;
        *plVar5 = (long)plVar1;
        plVar5[1] = (long)puVar8;
        *puVar8 = plVar5;
      }
    }
  }
  return plVar6;
}



/* Entry: 1097dc370; end: 1097dc3e3;  */

long FUN_1097dc370(uint param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (-1 < (int)param_2) {
    iVar1 = (param_1 & 0xfffffff8) + 8;
    uVar2 = (long)iVar1 + 0x30;
    lVar3 = uVar2 + (ulong)param_2 * 8;
    lVar4 = 0;
    if (((!CARRY8(uVar2,(ulong)param_2 * 8)) && (lVar3 != 0)) &&
       (_malloc(), lVar4 = lVar3, lVar3 != 0)) {
      *(undefined4 *)(lVar3 + 0x10) = 0;
      *(int *)(lVar3 + 0x14) = iVar1;
      *(undefined4 *)(lVar3 + 0x18) = 0;
      *(uint *)(lVar3 + 0x1c) = param_2;
      *(long *)(lVar3 + 0x20) = lVar3 + 0x30;
      *(long *)(lVar3 + 0x28) = lVar3 + 0x30 + (long)iVar1;
    }
    return lVar4;
  }
  return 0;
}



/* Entry: 1097dc3e4; end: 1097dc657;  */

undefined8 FUN_1097dc3e4(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  long *plStack_88;
  long lStack_80;
  uint uStack_74;
  long lStack_70;
  long lStack_68;
  
  if (param_1 == param_2) {
    return 1;
  }
  if ((((((*(byte *)(param_2 + 0x10) ^ *(byte *)(param_1 + 0x10)) >> 3 & 1) == 0) &&
       (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))) &&
      (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18))) &&
     ((*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c) &&
      (*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20))))) {
    iVar10 = 0;
    iVar4 = 0;
    plVar1 = (long *)(param_1 + 0x28);
    plVar6 = plVar1;
    do {
      iVar10 = (int)plVar6[2] + iVar10;
      iVar4 = (int)plVar6[3] + iVar4;
      plVar6 = (long *)*plVar6;
    } while (plVar6 != plVar1);
    iVar5 = 0;
    iVar7 = 0;
    plVar6 = (long *)(param_2 + 0x28);
    plVar8 = plVar6;
    do {
      iVar5 = (int)plVar8[2] + iVar5;
      iVar7 = (int)plVar8[3] + iVar7;
      plVar8 = (long *)*plVar8;
    } while (plVar8 != plVar6);
    if (iVar10 == 0 && iVar5 == 0) {
      return 1;
    }
    if (iVar10 == iVar5 && iVar4 == iVar7) {
      iVar4 = *(int *)(param_1 + 0x38);
      lStack_80 = *(long *)(param_1 + 0x48);
      iVar5 = *(int *)(param_2 + 0x38);
      lVar9 = *(long *)(param_2 + 0x48);
      iVar10 = iVar4;
      if (iVar5 <= iVar4) {
        iVar10 = iVar5;
      }
      lVar11 = (long)iVar10;
      lVar3 = lStack_80;
      _memcmp(lStack_80,lVar9,lVar11);
      if ((int)lVar3 == 0) {
        uVar12 = *(uint *)(param_1 + 0x40);
        uStack_74 = *(uint *)(param_2 + 0x40);
        uVar2 = uVar12;
        if ((int)uStack_74 <= (int)uVar12) {
          uVar2 = uStack_74;
        }
        lStack_70 = *(long *)(param_2 + 0x50);
        lStack_68 = *(long *)(param_1 + 0x50);
        plVar8 = plVar1;
        plStack_88 = plVar6;
        do {
          lVar3 = lStack_68;
          _memcmp(lStack_68,lStack_70,
                  -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
          if ((int)lVar3 != 0) {
            return 0;
          }
          uVar12 = uVar12 - uVar2;
          iVar4 = iVar4 - iVar10;
          if ((iVar4 == 0) || (uVar12 == 0)) {
            if (iVar4 != 0 || uVar12 != 0) {
              return 0;
            }
            plVar8 = (long *)*plVar8;
            if (plVar8 == plVar1) {
              return 1;
            }
            uVar12 = *(uint *)(plVar8 + 3);
            iVar4 = (int)plVar8[2];
            lStack_80 = plVar8[4];
            lStack_68 = plVar8[5];
          }
          else {
            lStack_80 = lStack_80 + lVar11;
            lStack_68 = lStack_68 + (long)(int)uVar2 * 8;
          }
          uStack_74 = uStack_74 - uVar2;
          iVar5 = iVar5 - iVar10;
          if ((iVar5 == 0) || (uStack_74 == 0)) {
            if (iVar5 != 0 || uStack_74 != 0) {
              return 0;
            }
            plStack_88 = (long *)*plStack_88;
            if (plStack_88 == plVar6) {
              return 1;
            }
            uStack_74 = *(uint *)(plStack_88 + 3);
            iVar5 = *(int *)(plStack_88 + 2);
            lVar9 = plStack_88[4];
            lStack_70 = plStack_88[5];
          }
          else {
            lVar9 = lVar9 + lVar11;
            lStack_70 = lStack_70 + (long)(int)uVar2 * 8;
          }
          iVar10 = iVar4;
          if (iVar5 <= iVar4) {
            iVar10 = iVar5;
          }
          uVar2 = uVar12;
          if ((int)uStack_74 <= (int)uVar12) {
            uVar2 = uStack_74;
          }
          lVar11 = (long)iVar10;
          lVar3 = lStack_80;
          _memcmp(lStack_80,lVar9,lVar11);
        } while ((int)lVar3 == 0);
      }
    }
  }
  return 0;
}



/* Entry: 1097dc658; end: 1097dc6a3;  */

void FUN_1097dc658(void)

{
  long lVar1;
  
  lVar1 = 1;
  _calloc(1,0x228);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x28) = lVar1 + 0x28;
    *(long *)(lVar1 + 0x30) = lVar1 + 0x28;
    *(undefined4 *)(lVar1 + 0x3c) = 0x1b;
    *(undefined4 *)(lVar1 + 0x44) = 0x36;
    *(long *)(lVar1 + 0x48) = lVar1 + 0x58;
    *(long *)(lVar1 + 0x50) = lVar1 + 0x74;
    *(undefined1 *)(lVar1 + 0x10) = 0xf2;
  }
  return;
}



/* Entry: 1097dc6a4; end: 1097dc6ef;  */

void FUN_1097dc6a4(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  while (plVar1 != (long *)(param_1 + 0x28)) {
    plVar1 = (long *)*plVar1;
    _free();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 1097dc6f0; end: 1097dc73f;  */

void FUN_1097dc6f0(int *param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if ((bVar1 >> 1 & 1) == 0) {
    if ((bVar1 >> 5 & 1) != 0) {
      bVar2 = 0x20;
      if ((param_1[2] != *param_1) && (bVar2 = 0x20, param_1[3] != param_1[1])) {
        bVar2 = 0;
      }
      bVar1 = (bVar2 << 1 | 0x9d) & bVar1 | bVar2;
    }
    bVar1 = bVar1 | 2;
  }
  *(byte *)(param_1 + 4) = bVar1 & 0xfe;
  return;
}



/* Entry: 1097dc740; end: 1097dc9d3;  */

undefined8 FUN_1097dc740(undefined8 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 1);
    iVar2 = *(int *)((long)param_1 + 0xc);
    FUN_1097dc6f0();
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
    *(int *)(param_1 + 1) = iVar1 + param_2;
    *(int *)((long)param_1 + 0xc) = iVar2 + param_3;
    *param_1 = param_1[1];
    return 0;
  }
  return 4;
}



/* Entry: 1097dc9d4; end: 1097dca93;  */

/* WARNING: Removing unreachable block (ram,0x0001097dcb4c) */

undefined8 FUN_1097dc9d4(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint *puVar7;
  long *plVar8;
  
  bVar3 = *(byte *)(param_1 + 2);
  if ((bVar3 >> 1 & 1) == 0) {
    return 0;
  }
  uVar2 = bVar3 & 0xfffffffd;
  *(char *)(param_1 + 2) = (char)uVar2;
  if ((bVar3 >> 2 & 1) == 0) {
    uVar4 = param_1[1];
    *(ulong *)((long)param_1 + 0x14) = uVar4;
    *(ulong *)((long)param_1 + 0x1c) = uVar4;
    uVar2 = uVar2 | 4;
    *(char *)(param_1 + 2) = (char)uVar2;
    uVar6 = (uint)(uVar4 >> 0x20);
  }
  else {
    puVar7 = (uint *)((long)param_1 + 0x14);
    uVar6 = *(uint *)(param_1 + 1);
    uVar4 = (ulong)uVar6;
    if (((int)uVar6 < (int)*puVar7) ||
       (puVar7 = (uint *)((long)param_1 + 0x1c), (int)*puVar7 < (int)uVar6)) {
      *puVar7 = uVar6;
    }
    puVar7 = (uint *)(param_1 + 3);
    uVar6 = *(uint *)((long)param_1 + 0xc);
    if (((int)uVar6 < (int)*puVar7) || (puVar7 = (uint *)(param_1 + 4), (int)*puVar7 < (int)uVar6))
    {
      *puVar7 = uVar6;
    }
  }
  if ((uVar2 >> 6 & 1) != 0) {
    bVar3 = 0x40;
    if ((((uint)uVar4 | uVar6) & 0xff) != 0) {
      bVar3 = 0;
    }
    *(byte *)(param_1 + 2) = bVar3 | (byte)uVar2 & 0xbf;
  }
  *param_1 = param_1[1];
  plVar8 = (long *)param_1[6];
  uVar6 = *(uint *)(plVar8 + 2);
  uVar2 = uVar6 + 1;
  plVar1 = plVar8 + 3;
  if ((*(uint *)((long)plVar8 + 0x14) < uVar2) ||
     (*(uint *)((long)plVar8 + 0x1c) < (int)*plVar1 + 1U)) {
    plVar8 = (long *)(ulong)(uVar6 << 1);
    FUN_1097dc370(plVar8,(int)*plVar1 << 1);
    if (plVar8 == (long *)0x0) {
      return 1;
    }
    puVar5 = (undefined8 *)param_1[6];
    param_1[6] = plVar8;
    *plVar8 = (long)(param_1 + 5);
    plVar8[1] = (long)puVar5;
    *puVar5 = plVar8;
    uVar6 = *(uint *)(plVar8 + 2);
    uVar2 = uVar6 + 1;
  }
  *(uint *)(plVar8 + 2) = uVar2;
  *(undefined1 *)(plVar8[4] + (ulong)uVar6) = 0;
  _memcpy(plVar8[5] + (ulong)*(uint *)(plVar8 + 3) * 8,param_1 + 1,8);
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  return 0;
}



/* Entry: 1097dca94; end: 1097dcb6b;  */

undefined8 FUN_1097dca94(long param_1,undefined1 param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x30);
  uVar2 = *(uint *)(plVar5 + 2);
  uVar3 = uVar2 + 1;
  plVar1 = plVar5 + 3;
  if ((*(uint *)((long)plVar5 + 0x14) < uVar3) ||
     (*(uint *)((long)plVar5 + 0x1c) < (int)*plVar1 + param_4)) {
    plVar5 = (long *)(ulong)(uVar2 << 1);
    FUN_1097dc370(plVar5,(int)*plVar1 << 1);
    if (plVar5 == (long *)0x0) {
      return 1;
    }
    puVar4 = *(undefined8 **)(param_1 + 0x30);
    *(long **)(param_1 + 0x30) = plVar5;
    *plVar5 = param_1 + 0x28;
    plVar5[1] = (long)puVar4;
    *puVar4 = plVar5;
    uVar2 = *(uint *)(plVar5 + 2);
    uVar3 = uVar2 + 1;
  }
  *(uint *)(plVar5 + 2) = uVar3;
  *(undefined1 *)(plVar5[4] + (ulong)uVar2) = param_2;
  if (param_4 != 0) {
    _memcpy(plVar5[5] + (ulong)*(uint *)(plVar5 + 3) * 8,param_3,(ulong)param_4 << 3);
    *(uint *)(plVar5 + 3) = (int)plVar5[3] + param_4;
  }
  return 0;
}



/* Entry: 1097dcb6c; end: 1097dcd6b;  */

undefined8 *
FUN_1097dcb6c(undefined8 *param_1,ulong param_2,undefined1 *param_3,ulong param_4,
             undefined1 *param_5,ulong param_6,ulong param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  ulong uVar25;
  ulong uVar26;
  byte bVar27;
  int iVar28;
  long lVar29;
  undefined8 uVar30;
  uint *puVar31;
  int *piVar32;
  long lVar33;
  byte bVar34;
  int iVar35;
  int iVar36;
  undefined8 *unaff_x19;
  uint uVar37;
  ulong unaff_x20;
  ulong unaff_x21;
  uint *unaff_x22;
  undefined1 *unaff_x23;
  ulong unaff_x24;
  uint uVar38;
  undefined1 *unaff_x25;
  uint uVar39;
  ulong unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    uVar25 = param_7;
    uVar22 = param_6;
    puVar18 = param_5;
    uVar16 = param_4;
    puVar13 = param_3;
    uVar10 = param_2;
    puVar8 = param_1;
    puVar15 = (undefined1 *)((long)register0x00000008 + -0x70);
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(uint **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x22 = (uint *)(puVar8 + 1);
    uVar20 = (uint)uVar22;
    uVar37 = (uint)uVar25;
    uVar38 = (uint)puVar13;
    uVar39 = (uint)uVar10;
    param_1 = puVar8;
    uVar11 = uVar10;
    puVar14 = puVar13;
    uVar17 = uVar16;
    puVar19 = puVar18;
    uVar23 = uVar22;
    uVar26 = uVar25;
    if (((((*unaff_x22 == uVar20) && (uVar38 == uVar37)) && ((uint)puVar18 == uVar37)) &&
        ((uVar39 == uVar20 && ((uint)uVar16 == uVar20)))) &&
       (*(uint *)((long)puVar8 + 0xc) == uVar37)) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58))
      {
        *(undefined8 *)((long)register0x00000008 + -0x30) =
             *(undefined8 *)((long)register0x00000008 + -0x30);
        *(undefined8 *)((long)register0x00000008 + -0x28) =
             *(undefined8 *)((long)register0x00000008 + -0x28);
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        *(uint *)((long)register0x00000008 + -0x38) = uVar20;
        *(uint *)((long)register0x00000008 + -0x34) = uVar37;
        if ((*(byte *)(puVar8 + 2) & 1) == 0) {
          FUN_1097dc6f0(puVar8);
          *(byte *)(puVar8 + 2) = *(byte *)(puVar8 + 2) | 1;
          *(uint *)(puVar8 + 1) = uVar20;
          *(uint *)((long)puVar8 + 0xc) = uVar37;
          *puVar8 = puVar8[1];
          return (undefined8 *)0x0;
        }
        puVar9 = puVar8;
        FUN_1097dc9d4();
        if ((int)puVar9 != 0) {
          return (undefined8 *)0x1;
        }
        lVar29 = puVar8[6];
        uVar38 = *(int *)(lVar29 + 0x10) - 1;
        cVar4 = *(char *)(*(long *)(lVar29 + 0x20) + (ulong)uVar38);
        if (cVar4 == '\0') goto LAB_1097dc8b0;
        iVar28 = uVar20 - *(int *)(puVar8 + 1);
        if ((iVar28 == 0) && (*(uint *)((long)puVar8 + 0xc) == uVar37)) {
          return (undefined8 *)0x0;
        }
        if (cVar4 != '\x01') goto LAB_1097dc8b0;
        uVar39 = *(uint *)(lVar29 + 0x18);
        lVar33 = lVar29;
        uVar5 = uVar39;
        if (uVar39 < 2) {
          lVar33 = *(long *)(lVar29 + 8);
          uVar5 = *(int *)(*(long *)(lVar29 + 8) + 0x18) + uVar39;
        }
        piVar32 = (int *)(*(long *)(lVar33 + 0x28) + (ulong)(uVar5 - 2) * 8);
        iVar12 = *(int *)(puVar8 + 1) - *piVar32;
        if (iVar12 == 0) {
          iVar36 = piVar32[1];
          iVar35 = *(int *)((long)puVar8 + 0xc);
          if (iVar36 != iVar35) goto LAB_1097dc880;
        }
        else {
          iVar35 = *(int *)((long)puVar8 + 0xc);
          iVar36 = piVar32[1];
LAB_1097dc880:
          if (((long)(iVar35 - iVar36) * (long)iVar28 - (long)(int)(uVar37 - iVar35) * (long)iVar12
               != 0) ||
             ((long)iVar12 * (long)iVar28 + (long)(iVar35 - iVar36) * (long)(int)(uVar37 - iVar35) <
              0)) goto LAB_1097dc8b0;
        }
        *(uint *)(lVar29 + 0x18) = uVar39 - 1;
        *(uint *)(lVar29 + 0x10) = uVar38;
LAB_1097dc8b0:
        cVar4 = *(char *)(puVar8 + 2);
        if (((uint)(int)cVar4 >> 4 & 1) != 0) {
          iVar28 = 0x10;
          if ((*(uint *)(puVar8 + 1) != uVar20) &&
             (iVar28 = 0x10, *(uint *)((long)puVar8 + 0xc) != uVar37)) {
            iVar28 = 0;
          }
          uVar38 = (iVar28 << 1 | 0xffffffcfU) & (int)cVar4;
          bVar7 = (byte)uVar38;
          bVar34 = 0x40;
          if (((uVar37 | uVar20) & 0xff) != 0) {
            bVar34 = 0;
          }
          bVar34 = bVar34 & (byte)((byte)((uVar38 << 0x1a) >> 0x18) &
                                  (byte)((uint)((int)cVar4 << 0x19) >> 0x18)) >> 1;
          *(byte *)(puVar8 + 2) = bVar7 & 0xaf | (byte)iVar28 | bVar34;
          if (cVar4 < 0) {
            if (*(uint *)(puVar8 + 1) == uVar20) {
              bVar27 = 0x80;
              if (*(uint *)((long)puVar8 + 0xc) != uVar37) {
                bVar27 = 0;
              }
            }
            else {
              bVar27 = 0;
            }
            *(byte *)(puVar8 + 2) = bVar27 | bVar7 & 0x2f | (byte)iVar28 | bVar34;
          }
        }
        uVar30 = *(undefined8 *)((long)register0x00000008 + -0x38);
        piVar32 = (int *)((long)puVar8 + 0x14);
        puVar8[1] = uVar30;
        iVar28 = (int)uVar30;
        if ((iVar28 < *piVar32) || (piVar32 = (int *)((long)puVar8 + 0x1c), *piVar32 < iVar28)) {
          *piVar32 = iVar28;
        }
        puVar31 = (uint *)(puVar8 + 3);
        if (((int)uVar37 < (int)*puVar31) ||
           (puVar31 = (uint *)(puVar8 + 4), (int)*puVar31 < (int)uVar37)) {
          *puVar31 = uVar37;
        }
        FUN_1097dca94(puVar8,1,(undefined1 *)((long)register0x00000008 + -0x38),1);
        return puVar8;
      }
    }
    else {
      if ((*(byte *)(puVar8 + 2) & 1) == 0) {
        FUN_1097dc6f0(puVar8);
        *(byte *)(puVar8 + 2) = *(byte *)(puVar8 + 2) | 1;
        *(uint *)(puVar8 + 1) = uVar39;
        *(uint *)((long)puVar8 + 0xc) = uVar38;
        *puVar8 = puVar8[1];
      }
      puVar9 = puVar8;
      FUN_1097dc9d4();
      if ((int)puVar9 == 0) {
        lVar29 = puVar8[6];
        uVar5 = *(int *)(lVar29 + 0x10) - 1;
        if (*(char *)(*(long *)(lVar29 + 0x20) + (ulong)uVar5) == '\x01') {
          uVar3 = *(uint *)(lVar29 + 0x18);
          lVar33 = lVar29;
          uVar6 = uVar3;
          if (uVar3 < 2) {
            lVar33 = *(long *)(lVar29 + 8);
            uVar6 = *(int *)(*(long *)(lVar29 + 8) + 0x18) + uVar3;
          }
          puVar31 = (uint *)(*(long *)(lVar33 + 0x28) + (ulong)(uVar6 - 2) * 8);
          if ((*puVar31 == *unaff_x22) && (puVar31[1] == *(uint *)((long)puVar8 + 0xc))) {
            *(uint *)(lVar29 + 0x18) = uVar3 - 1;
            *(uint *)(lVar29 + 0x10) = uVar5;
          }
        }
        *(uint *)((long)register0x00000008 + -0x70) = uVar39;
        *(uint *)((long)register0x00000008 + -0x6c) = uVar38;
        *(uint *)((long)register0x00000008 + -0x68) = (uint)uVar16;
        *(uint *)((long)register0x00000008 + -100) = (uint)puVar18;
        *(uint *)((long)register0x00000008 + -0x60) = uVar20;
        *(uint *)((long)register0x00000008 + -0x5c) = uVar37;
        puVar19 = (undefined1 *)((long)register0x00000008 + -0x60);
        func_0x0001097ed684((long)puVar8 + 0x14,unaff_x22,
                            (undefined1 *)((long)register0x00000008 + -0x70),
                            (undefined1 *)((long)register0x00000008 + -0x68));
        puVar8[1] = *(undefined8 *)((long)register0x00000008 + -0x60);
        *(byte *)(puVar8 + 2) = *(byte *)(puVar8 + 2) & 7 | 8;
        uVar11 = 2;
        uVar17 = 3;
        FUN_1097dca94();
        puVar14 = puVar15;
      }
      else {
        param_1 = (undefined8 *)0x1;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58))
      {
        return param_1;
      }
    }
    iVar24 = (int)uVar26;
    iVar21 = (int)uVar23;
    iVar35 = (int)puVar19;
    iVar36 = (int)uVar17;
    iVar12 = (int)puVar14;
    iVar28 = (int)uVar11;
    unaff_x30 = FUN_1097dcd6c;
    ___stack_chk_fail();
    if ((*(byte *)(param_1 + 2) & 1) == 0) {
      return (undefined8 *)0x4;
    }
    iVar1 = *(int *)(param_1 + 1);
    iVar2 = *(int *)((long)param_1 + 0xc);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    param_2 = (ulong)(uint)(iVar1 + iVar28);
    param_3 = (undefined1 *)(ulong)(uint)(iVar2 + iVar12);
    param_4 = (ulong)(uint)(iVar1 + iVar36);
    param_5 = (undefined1 *)(ulong)(uint)(iVar2 + iVar35);
    param_6 = (ulong)(uint)(iVar1 + iVar21);
    param_7 = (ulong)(uint)(iVar2 + iVar24);
    unaff_x19 = puVar8;
    unaff_x20 = uVar25;
    unaff_x21 = uVar22;
    unaff_x23 = puVar18;
    unaff_x24 = uVar16;
    unaff_x25 = puVar13;
    unaff_x26 = uVar10;
  } while( true );
}



/* Entry: 1097dcd6c; end: 1097dcd9b;  */

undefined8 *
FUN_1097dcd6c(undefined8 *param_1,ulong param_2,undefined1 *param_3,ulong param_4,
             undefined1 *param_5,ulong param_6,ulong param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  ulong uVar18;
  undefined1 *puVar19;
  ulong uVar20;
  ulong uVar21;
  byte bVar22;
  int iVar23;
  long lVar24;
  undefined8 uVar25;
  uint *puVar26;
  int *piVar27;
  long lVar28;
  byte bVar29;
  int iVar30;
  int iVar31;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  uint *unaff_x22;
  undefined1 *unaff_x23;
  ulong unaff_x24;
  undefined1 *unaff_x25;
  ulong unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    puVar13 = param_1;
    if ((*(byte *)(puVar13 + 2) & 1) == 0) {
      return (undefined8 *)0x4;
    }
    iVar23 = *(int *)(puVar13 + 1);
    iVar7 = *(int *)((long)puVar13 + 0xc);
    uVar1 = iVar23 + (int)param_2;
    uVar15 = (ulong)uVar1;
    uVar2 = iVar7 + (int)param_3;
    puVar17 = (undefined1 *)(ulong)uVar2;
    uVar3 = iVar23 + (int)param_4;
    uVar18 = (ulong)uVar3;
    uVar4 = iVar7 + (int)param_5;
    puVar19 = (undefined1 *)(ulong)uVar4;
    uVar5 = iVar23 + (int)param_6;
    uVar20 = (ulong)uVar5;
    uVar6 = iVar7 + (int)param_7;
    uVar21 = (ulong)uVar6;
    puVar16 = (undefined1 *)((long)register0x00000008 + -0x70);
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(uint **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x22 = (uint *)(puVar13 + 1);
    param_1 = puVar13;
    param_2 = uVar15;
    param_3 = puVar17;
    param_4 = uVar18;
    param_5 = puVar19;
    param_6 = uVar20;
    param_7 = uVar21;
    if (((((*unaff_x22 == uVar5) && (uVar2 == uVar6)) && (uVar4 == uVar6)) &&
        ((uVar1 == uVar5 && (uVar3 == uVar5)))) && (*(uint *)((long)puVar13 + 0xc) == uVar6)) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58))
      {
        *(undefined8 *)((long)register0x00000008 + -0x30) =
             *(undefined8 *)((long)register0x00000008 + -0x30);
        *(undefined8 *)((long)register0x00000008 + -0x28) =
             *(undefined8 *)((long)register0x00000008 + -0x28);
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        *(uint *)((long)register0x00000008 + -0x38) = uVar5;
        *(uint *)((long)register0x00000008 + -0x34) = uVar6;
        if ((*(byte *)(puVar13 + 2) & 1) == 0) {
          FUN_1097dc6f0(puVar13);
          *(byte *)(puVar13 + 2) = *(byte *)(puVar13 + 2) | 1;
          *(uint *)(puVar13 + 1) = uVar5;
          *(uint *)((long)puVar13 + 0xc) = uVar6;
          *puVar13 = puVar13[1];
          return (undefined8 *)0x0;
        }
        puVar14 = puVar13;
        FUN_1097dc9d4();
        if ((int)puVar14 != 0) {
          return (undefined8 *)0x1;
        }
        lVar24 = puVar13[6];
        uVar1 = *(int *)(lVar24 + 0x10) - 1;
        cVar9 = *(char *)(*(long *)(lVar24 + 0x20) + (ulong)uVar1);
        if (cVar9 == '\0') goto LAB_1097dc8b0;
        iVar23 = uVar5 - *(int *)(puVar13 + 1);
        if ((iVar23 == 0) && (*(uint *)((long)puVar13 + 0xc) == uVar6)) {
          return (undefined8 *)0x0;
        }
        if (cVar9 != '\x01') goto LAB_1097dc8b0;
        uVar2 = *(uint *)(lVar24 + 0x18);
        lVar28 = lVar24;
        uVar3 = uVar2;
        if (uVar2 < 2) {
          lVar28 = *(long *)(lVar24 + 8);
          uVar3 = *(int *)(*(long *)(lVar24 + 8) + 0x18) + uVar2;
        }
        piVar27 = (int *)(*(long *)(lVar28 + 0x28) + (ulong)(uVar3 - 2) * 8);
        iVar7 = *(int *)(puVar13 + 1) - *piVar27;
        if (iVar7 == 0) {
          iVar31 = piVar27[1];
          iVar30 = *(int *)((long)puVar13 + 0xc);
          if (iVar31 != iVar30) goto LAB_1097dc880;
        }
        else {
          iVar30 = *(int *)((long)puVar13 + 0xc);
          iVar31 = piVar27[1];
LAB_1097dc880:
          if (((long)(iVar30 - iVar31) * (long)iVar23 - (long)(int)(uVar6 - iVar30) * (long)iVar7 !=
               0) || ((long)iVar7 * (long)iVar23 +
                      (long)(iVar30 - iVar31) * (long)(int)(uVar6 - iVar30) < 0))
          goto LAB_1097dc8b0;
        }
        *(uint *)(lVar24 + 0x18) = uVar2 - 1;
        *(uint *)(lVar24 + 0x10) = uVar1;
LAB_1097dc8b0:
        cVar9 = *(char *)(puVar13 + 2);
        if (((uint)(int)cVar9 >> 4 & 1) != 0) {
          iVar23 = 0x10;
          if ((*(uint *)(puVar13 + 1) != uVar5) &&
             (iVar23 = 0x10, *(uint *)((long)puVar13 + 0xc) != uVar6)) {
            iVar23 = 0;
          }
          uVar1 = (iVar23 << 1 | 0xffffffcfU) & (int)cVar9;
          bVar12 = (byte)uVar1;
          bVar29 = 0x40;
          if (((uVar6 | uVar5) & 0xff) != 0) {
            bVar29 = 0;
          }
          bVar29 = bVar29 & (byte)((byte)((uVar1 << 0x1a) >> 0x18) &
                                  (byte)((uint)((int)cVar9 << 0x19) >> 0x18)) >> 1;
          *(byte *)(puVar13 + 2) = bVar12 & 0xaf | (byte)iVar23 | bVar29;
          if (cVar9 < 0) {
            if (*(uint *)(puVar13 + 1) == uVar5) {
              bVar22 = 0x80;
              if (*(uint *)((long)puVar13 + 0xc) != uVar6) {
                bVar22 = 0;
              }
            }
            else {
              bVar22 = 0;
            }
            *(byte *)(puVar13 + 2) = bVar22 | bVar12 & 0x2f | (byte)iVar23 | bVar29;
          }
        }
        uVar25 = *(undefined8 *)((long)register0x00000008 + -0x38);
        piVar27 = (int *)((long)puVar13 + 0x14);
        puVar13[1] = uVar25;
        iVar23 = (int)uVar25;
        if ((iVar23 < *piVar27) || (piVar27 = (int *)((long)puVar13 + 0x1c), *piVar27 < iVar23)) {
          *piVar27 = iVar23;
        }
        puVar26 = (uint *)(puVar13 + 3);
        if (((int)uVar6 < (int)*puVar26) ||
           (puVar26 = (uint *)(puVar13 + 4), (int)*puVar26 < (int)uVar6)) {
          *puVar26 = uVar6;
        }
        FUN_1097dca94(puVar13,1,(undefined1 *)((long)register0x00000008 + -0x38),1);
        return puVar13;
      }
    }
    else {
      if ((*(byte *)(puVar13 + 2) & 1) == 0) {
        FUN_1097dc6f0(puVar13);
        *(byte *)(puVar13 + 2) = *(byte *)(puVar13 + 2) | 1;
        *(uint *)(puVar13 + 1) = uVar1;
        *(uint *)((long)puVar13 + 0xc) = uVar2;
        *puVar13 = puVar13[1];
      }
      puVar14 = puVar13;
      FUN_1097dc9d4();
      if ((int)puVar14 == 0) {
        lVar24 = puVar13[6];
        uVar10 = *(int *)(lVar24 + 0x10) - 1;
        if (*(char *)(*(long *)(lVar24 + 0x20) + (ulong)uVar10) == '\x01') {
          uVar8 = *(uint *)(lVar24 + 0x18);
          lVar28 = lVar24;
          uVar11 = uVar8;
          if (uVar8 < 2) {
            lVar28 = *(long *)(lVar24 + 8);
            uVar11 = *(int *)(*(long *)(lVar24 + 8) + 0x18) + uVar8;
          }
          puVar26 = (uint *)(*(long *)(lVar28 + 0x28) + (ulong)(uVar11 - 2) * 8);
          if ((*puVar26 == *unaff_x22) && (puVar26[1] == *(uint *)((long)puVar13 + 0xc))) {
            *(uint *)(lVar24 + 0x18) = uVar8 - 1;
            *(uint *)(lVar24 + 0x10) = uVar10;
          }
        }
        *(uint *)((long)register0x00000008 + -0x70) = uVar1;
        *(uint *)((long)register0x00000008 + -0x6c) = uVar2;
        *(uint *)((long)register0x00000008 + -0x68) = uVar3;
        *(uint *)((long)register0x00000008 + -100) = uVar4;
        *(uint *)((long)register0x00000008 + -0x60) = uVar5;
        *(uint *)((long)register0x00000008 + -0x5c) = uVar6;
        param_5 = (undefined1 *)((long)register0x00000008 + -0x60);
        func_0x0001097ed684((long)puVar13 + 0x14,unaff_x22,
                            (undefined1 *)((long)register0x00000008 + -0x70),
                            (undefined1 *)((long)register0x00000008 + -0x68));
        puVar13[1] = *(undefined8 *)((long)register0x00000008 + -0x60);
        *(byte *)(puVar13 + 2) = *(byte *)(puVar13 + 2) & 7 | 8;
        param_2 = 2;
        param_4 = 3;
        FUN_1097dca94();
        param_3 = puVar16;
      }
      else {
        param_1 = (undefined8 *)0x1;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58))
      {
        return param_1;
      }
    }
    unaff_x30 = FUN_1097dcd6c;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    unaff_x19 = puVar13;
    unaff_x20 = uVar21;
    unaff_x21 = uVar20;
    unaff_x23 = puVar19;
    unaff_x24 = uVar18;
    unaff_x25 = puVar17;
    unaff_x26 = uVar15;
  } while( true );
}


